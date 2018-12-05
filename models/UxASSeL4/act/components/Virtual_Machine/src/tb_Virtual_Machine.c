#include "../includes/tb_Virtual_Machine.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_mission_write_enqueue:
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
bool tb_mission_write_enqueue(const bool * tb_mission_write){
  bool tb_result = true;
  tb_result &= tb_mission_write0_enqueue((bool *) tb_mission_write);
  return tb_result;
}

static void tb_mission_read_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_mission_read_notification_reg_callback(tb_mission_read_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Virtual_Machine_mission_read:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Virtual_Machine_mission_read(const bool * in_arg) {
  mission_read((bool *) in_arg);
}

static void tb_waypoint_write_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_waypoint_write_notification_reg_callback(tb_waypoint_write_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Virtual_Machine_waypoint_write:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Virtual_Machine_waypoint_write(const uint32_t * in_arg) {
  waypoint_write((uint32_t *) in_arg);
}

/************************************************************************
 * tb_waypoint_read_enqueue:
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
bool tb_waypoint_read_enqueue(const bool * tb_waypoint_read){
  bool tb_result = true;
  tb_result &= tb_waypoint_read0_enqueue((bool *) tb_waypoint_read);
  return tb_result;
}

void pre_init(void) {
  CALLBACKOP(tb_mission_read_notification_reg_callback(tb_mission_read_notification_handler, NULL));
  CALLBACKOP(tb_waypoint_write_notification_reg_callback(tb_waypoint_write_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  bool tb_mission_read;
  uint32_t tb_waypoint_write;

  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
    while (tb_mission_read_dequeue((bool *) &tb_mission_read)) {
      tb_entrypoint_tb_Virtual_Machine_mission_read(&tb_mission_read);
    }
    while (tb_waypoint_write_dequeue((uint32_t *) &tb_waypoint_write)) {
      tb_entrypoint_tb_Virtual_Machine_waypoint_write(&tb_waypoint_write);
    }
  }
  return 0;
}
