#include "tb_FlightPlanner.h"
#include <string.h>
#include <camkes.h>

bool tb_flight_plan_write(const SW__Mission_Impl * tb_flight_plan){
  bool tb_result = true;
  tb_result &= tb_flight_plan0_write((SW__Mission_Impl *) tb_flight_plan);
  return tb_result;
}


