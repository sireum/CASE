#include "tb_PlanBuilderService.h"
#include <string.h>
#include <camkes.h>







bool tb_ServiceStatus_out_enqueue(const CMASI__ServiceStatus_i * tb_ServiceStatus_out){
  bool tb_result = true;
  tb_result &= tb_ServiceStatus_out0_enqueue((CMASI__ServiceStatus_i *) tb_ServiceStatus_out);
  return tb_result;
}
bool tb_UniqueAutomationResponse_out_enqueue(const UXTASK__UniqueAutomationResponse_i * tb_UniqueAutomationResponse_out){
  bool tb_result = true;
  tb_result &= tb_UniqueAutomationResponse_out0_enqueue((UXTASK__UniqueAutomationResponse_i *) tb_UniqueAutomationResponse_out);
  return tb_result;
}
bool tb_TaskImplementationRequest_out_enqueue(const UXTASK__TaskImplementationRequest_i * tb_TaskImplementationRequest_out){
  bool tb_result = true;
  tb_result &= tb_TaskImplementationRequest_out0_enqueue((UXTASK__TaskImplementationRequest_i *) tb_TaskImplementationRequest_out);
  return tb_result;
}
