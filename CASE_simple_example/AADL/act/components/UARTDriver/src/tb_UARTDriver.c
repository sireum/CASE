#include "tb_UARTDriver.h"
#include <string.h>
#include <camkes.h>


bool tb_waypoint_out_enqueue(const SW__MissionWindow_Impl * tb_waypoint_out){
  bool tb_result = true;
  tb_result &= tb_waypoint_out0_enqueue((SW__MissionWindow_Impl *) tb_waypoint_out);
  return tb_result;
}
bool tb_position_status_out_enqueue(const SW__Coordinate_Impl * tb_position_status_out){
  bool tb_result = true;
  tb_result &= tb_position_status_out0_enqueue((SW__Coordinate_Impl *) tb_position_status_out);
  return tb_result;
}

