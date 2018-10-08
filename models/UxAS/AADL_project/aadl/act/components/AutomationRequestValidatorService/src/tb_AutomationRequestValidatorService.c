#include "tb_AutomationRequestValidatorService.h"
#include <string.h>
#include <camkes.h>



























bool tb_ServiceStatus_out_enqueue(const CMASI__ServiceStatus_i * tb_ServiceStatus_out){
  bool tb_result = true;
  tb_result &= tb_ServiceStatus_out0_enqueue((CMASI__ServiceStatus_i *) tb_ServiceStatus_out);
  return tb_result;
}
bool tb_ImpactAutomationResponse_out_enqueue(const IMPACT__ImpactAutomationResponse_i * tb_ImpactAutomationResponse_out){
  bool tb_result = true;
  tb_result &= tb_ImpactAutomationResponse_out0_enqueue((IMPACT__ImpactAutomationResponse_i *) tb_ImpactAutomationResponse_out);
  return tb_result;
}
bool tb_AutomationResponse_out_enqueue(const CMASI__AutomationResponse_i * tb_AutomationResponse_out){
  bool tb_result = true;
  tb_result &= tb_AutomationResponse_out0_enqueue((CMASI__AutomationResponse_i *) tb_AutomationResponse_out);
  return tb_result;
}
bool tb_TaskAutomationResponse_out_enqueue(const UXTASK__TaskAutomationResponse_i * tb_TaskAutomationResponse_out){
  bool tb_result = true;
  tb_result &= tb_TaskAutomationResponse_out0_enqueue((UXTASK__TaskAutomationResponse_i *) tb_TaskAutomationResponse_out);
  return tb_result;
}
bool tb_UniqueAutomationRequest_out_enqueue(const UXTASK__UniqueAutomationRequest_i * tb_UniqueAutomationRequest_out){
  bool tb_result = true;
  tb_result &= tb_UniqueAutomationRequest_out0_enqueue((UXTASK__UniqueAutomationRequest_i *) tb_UniqueAutomationRequest_out);
  return tb_result;
}
