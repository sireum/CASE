#include "../includes/tb_WaypointManager_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_waypoint_enqueue:
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
bool tb_waypoint_enqueue(const SW__MissionWindow_Impl * tb_waypoint){
  bool tb_result = true;
  tb_result &= tb_waypoint0_enqueue((SW__MissionWindow_Impl *) tb_waypoint);
  return tb_result;
}

/************************************************************************
 * tb_entrypoint_tb_WaypointManager_Impl_position_status:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_WaypointManager_Impl_position_status(const SW__Coordinate_Impl * in_arg) {

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
