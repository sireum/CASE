#include "../includes/tb_CAN_Driver.h"
#include <string.h>
#include <camkes.h>


bool tb_self2framing_status_enqueue(const bool * tb_self2framing_status){
  bool tb_result = true;
  //tb_result &= tb_self2framing_status0_enqueue((bool *) tb_self2framing_status);
  return tb_result;
}
bool tb_self2framing_frame_enqueue(const SMACCM_DATA__CAN_Frame_i * tb_self2framing_frame){
  bool tb_result = true;
  //tb_result &= tb_self2framing_frame0_enqueue((SMACCM_DATA__CAN_Frame_i *) tb_self2framing_frame);
  return tb_result;
}
static bool CAN1Int_index = false;

bool CAN1Int_callback(void *_ UNUSED){
  CAN1Int_index = true;
  //CALLBACK(CAN1Int_reg_callback(CAN1Int_callback, NULL));
  return true;
}

bool tb_CAN_Driver_read_CAN1Int(){
  bool result;
  result = CAN1Int_index;
  CAN1Int_index = false;
  return result;
}

bool tb_CAN_Driver_write_CANIntAck(void) {
  bool tb_result = true;
  CANIntAck_emit();
  return tb_result;
}


int run(void) { return 0; }
