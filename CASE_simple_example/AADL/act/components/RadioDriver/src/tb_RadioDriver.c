#include "tb_RadioDriver.h"
#include <string.h>
#include <camkes.h>


bool tb_send_status_out_enqueue(const SW__Coordinate_Impl * tb_send_status_out){
  bool tb_result = true;
  tb_result &= tb_send_status_out0_enqueue((SW__Coordinate_Impl *) tb_send_status_out);
  return tb_result;
}

bool tb_recv_map_out_enqueue(const SW__Command_Impl * tb_recv_map_out){
  bool tb_result = true;
  tb_result &= tb_recv_map_out0_enqueue((SW__Command_Impl *) tb_recv_map_out);
  return tb_result;
}
