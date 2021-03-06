#include "../includes/tb_FlightPlanner_Impl.h"
#include <string.h>
#include <camkes.h>

bool tb_flight_plan_write(const SW__Mission_Impl * tb_flight_plan){
  bool tb_result = true;
  tb_result &= tb_flight_plan0_write((SW__Mission_Impl *) tb_flight_plan);
  return tb_result;
}

void tb_entrypoint_tb_FlightPlanner_Impl_recv_map(const SW__Command_Impl * in_arg) { }

void tb_entrypoint_tb_FlightPlanner_Impl_position_status(const SW__Coordinate_Impl * in_arg) { }

void pre_init(void) { }

int run(void) {
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
