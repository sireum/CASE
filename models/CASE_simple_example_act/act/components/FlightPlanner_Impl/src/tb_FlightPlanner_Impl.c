#include "../includes/tb_FlightPlanner_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_flight_plan_write:
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
bool tb_flight_plan_write(const SW__Mission_Impl * tb_flight_plan){
  bool tb_result = true;
  tb_result &= tb_flight_plan0_write((SW__Mission_Impl *) tb_flight_plan);
  return tb_result;
}

static void tb_recv_map_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_recv_map_notification_reg_callback(tb_recv_map_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_FlightPlanner_Impl_recv_map:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_FlightPlanner_Impl_recv_map(const SW__Command_Impl * in_arg) {
  recv_map_handler((SW__Command_Impl *) in_arg);
}

static void tb_position_status_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_position_status_notification_reg_callback(tb_position_status_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_FlightPlanner_Impl_position_status:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_FlightPlanner_Impl_position_status(const SW__Coordinate_Impl * in_arg) {
  position_status_handler((SW__Coordinate_Impl *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(tb_recv_map_notification_reg_callback(tb_recv_map_notification_handler, NULL));
  CALLBACKOP(tb_position_status_notification_reg_callback(tb_position_status_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  SW__Command_Impl tb_recv_map;
  SW__Coordinate_Impl tb_position_status;

  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
    while (tb_recv_map_dequeue((SW__Command_Impl *) &tb_recv_map)) {
      tb_entrypoint_tb_FlightPlanner_Impl_recv_map(&tb_recv_map);
    }
    while (tb_position_status_dequeue((SW__Coordinate_Impl *) &tb_position_status)) {
      tb_entrypoint_tb_FlightPlanner_Impl_position_status(&tb_position_status);
    }
  }
  return 0;
}
