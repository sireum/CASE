#include "../includes/tb_GPIO_Driver.h"
#include <string.h>
#include <camkes.h>

bool tb_GPIO_Driver_write_CAN1Int(void) {
  bool tb_result = true;
  CAN1Int_emit();
  return tb_result;
}

static bool CANIntAck_index = false;

bool CANIntAck_callback(void *_ UNUSED){
  CANIntAck_index = true;
  //CALLBACK(CANIntAck_reg_callback(CANIntAck_callback, NULL));
  return true;
}

bool tb_GPIO_Driver_read_CANIntAck(){
  bool result;
  result = CANIntAck_index;
  CANIntAck_index = false;
  return result;
}


int run(void) { return 0; }
