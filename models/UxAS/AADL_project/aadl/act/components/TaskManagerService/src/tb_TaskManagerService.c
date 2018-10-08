#include "tb_TaskManagerService.h"
#include <string.h>
#include <camkes.h>

















bool tb_UniqueAutomationRequest_out_enqueue(const UXTASK__UniqueAutomationRequest_i * tb_UniqueAutomationRequest_out){
  bool tb_result = true;
  tb_result &= tb_UniqueAutomationRequest_out0_enqueue((UXTASK__UniqueAutomationRequest_i *) tb_UniqueAutomationRequest_out);
  return tb_result;
}
bool tb_KillService_out_enqueue(const UXNATIVE__KillService_i * tb_KillService_out){
  bool tb_result = true;
  tb_result &= tb_KillService_out0_enqueue((UXNATIVE__KillService_i *) tb_KillService_out);
  return tb_result;
}
bool tb_CreateNewService_out_enqueue(const UXNATIVE__CreateNewService_i * tb_CreateNewService_out){
  bool tb_result = true;
  tb_result &= tb_CreateNewService_out0_enqueue((UXNATIVE__CreateNewService_i *) tb_CreateNewService_out);
  return tb_result;
}
