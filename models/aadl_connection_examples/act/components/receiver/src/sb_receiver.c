#include "../includes/sb_receiver.h"
#include <string.h>
#include <camkes.h>

static void sb_eventDataPort_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_eventDataPort_notification_reg_callback(sb_eventDataPort_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypointsb_receiver_eventDataPort:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_receiver_eventDataPort(const uint32_t * in_arg) {
  eventDataPort_callback((uint32_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_eventDataPort_notification_reg_callback(sb_eventDataPort_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  uint32_t sb_eventDataPort;

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
    while (sb_eventDataPort_dequeue((uint32_t *) &sb_eventDataPort)) {
      sb_entrypointsb_receiver_eventDataPort(&sb_eventDataPort);
    }
  }
  return 0;
}
