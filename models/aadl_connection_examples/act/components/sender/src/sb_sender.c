#include "../includes/sb_sender.h"
#include <string.h>
#include <camkes.h>

static bool sb_occurred_periodic_dispatcher;
static int64_t sb_time_periodic_dispatcher;

/************************************************************************
 * periodic_dispatcher_write_int64_t
 * Invoked from remote periodic dispatch thread.
 *
 * This function records the current time and triggers the active thread
 * dispatch from a periodic event.  Note that the periodic dispatch
 * thread is the *only* thread that triggers a dispatch, so we do not
 * mutex lock the function.
 *
 ************************************************************************/

bool periodic_dispatcher_write_int64_t(const int64_t * arg) {
    sb_occurred_periodic_dispatcher = true;
    sb_time_periodic_dispatcher = *arg;
    MUTEXOP(sb_dispatch_sem_post);
    return true;
}

void sb_timer_complete_callback(void *_ UNUSED) {
   // we want time in microseconds, not nanoseconds, so we divide by 1000.
   int64_t sb_time_periodic_dispatcher = sb_timer_time() / 1000LL;
   (void)periodic_dispatcher_write_int64_t(&sb_time_periodic_dispatcher);
   CALLBACKOP(sb_timer_complete_reg_callback(sb_timer_complete_callback, NULL));
}


/************************************************************************
 * sb_dataPort_write:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_dataPort_write(const uint32_t * sb_dataPort){
  bool sb_result = true;
  sb_result &= sb_dataPort0_write((uint32_t *) sb_dataPort);
  return sb_result;
}

/************************************************************************
 * sb_eventDataPort_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_eventDataPort_enqueue(const uint32_t * sb_eventDataPort){
  bool sb_result = true;
  sb_result &= sb_eventDataPort0_enqueue((uint32_t *) sb_eventDataPort);
  return sb_result;
}

/************************************************************************
 * sb_sender_write_eventPort
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 ************************************************************************/
bool sb_sender_write_eventPort(void) {
  bool sb_result = true;
  eventPort_emit();
  return sb_result;
}


void sb_entrypoint_sender_periodic_dispatcher(const int64_t * in_arg) {
  periodic_ping((int64_t *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_sender_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_sender_initializer(const int64_t * in_arg) {
  sender_init((int64_t *) in_arg);
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CALLBACKOP(sb_timer_complete_reg_callback(sb_timer_complete_callback, NULL));
  {
    int64_t sb_dummy;
    sb_entrypoint_sender_initializer(&sb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_sender_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}
