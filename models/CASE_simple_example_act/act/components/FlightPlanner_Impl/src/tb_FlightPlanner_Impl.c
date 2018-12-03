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

/************************************************************************
 * tb_entrypoint_tb_FlightPlanner_Impl_recv_map:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_FlightPlanner_Impl_recv_map(const SW__Command_Impl * in_arg) {

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

}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
