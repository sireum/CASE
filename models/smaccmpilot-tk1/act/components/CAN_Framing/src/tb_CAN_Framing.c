#include "tb_CAN_Framing.h"
#include <string.h>
#include <camkes.h>


bool tb_self2server_enqueue(const SMACCM_DATA__GIDL * tb_self2server){
  bool tb_result = true;
  tb_result &= tb_self2server0_enqueue((SMACCM_DATA__GIDL *) tb_self2server);
  return tb_result;
}


bool tb_self2can_enqueue(const SMACCM_DATA__CAN_Frame_i * tb_self2can){
  bool tb_result = true;
  tb_result &= tb_self2can0_enqueue((SMACCM_DATA__CAN_Frame_i *) tb_self2can);
  return tb_result;
}
