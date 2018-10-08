#include "tb_CmasiAreaSearchTask.h"
#include <string.h>
#include <camkes.h>













bool tb_TaskInitialized_out_enqueue(const UXTASK__TaskInitialized_i * tb_TaskInitialized_out){
  bool tb_result = true;
  tb_result &= tb_TaskInitialized_out0_enqueue((UXTASK__TaskInitialized_i *) tb_TaskInitialized_out);
  return tb_result;
}
bool tb_TaskActive_out_enqueue(const UXTASK__TaskActive_i * tb_TaskActive_out){
  bool tb_result = true;
  tb_result &= tb_TaskActive_out0_enqueue((UXTASK__TaskActive_i *) tb_TaskActive_out);
  return tb_result;
}
bool tb_TaskImplementationResponse_out_enqueue(const UXTASK__TaskImplementationResponse_i * tb_TaskImplementationResponse_out){
  bool tb_result = true;
  tb_result &= tb_TaskImplementationResponse_out0_enqueue((UXTASK__TaskImplementationResponse_i *) tb_TaskImplementationResponse_out);
  return tb_result;
}
bool tb_TaskComplete_out_enqueue(const UXTASK__TaskComplete_i * tb_TaskComplete_out){
  bool tb_result = true;
  tb_result &= tb_TaskComplete_out0_enqueue((UXTASK__TaskComplete_i *) tb_TaskComplete_out);
  return tb_result;
}
bool tb_TaskPlanOptions_out_enqueue(const UXTASK__TaskPlanOptions_i * tb_TaskPlanOptions_out){
  bool tb_result = true;
  tb_result &= tb_TaskPlanOptions_out0_enqueue((UXTASK__TaskPlanOptions_i *) tb_TaskPlanOptions_out);
  return tb_result;
}
bool tb_RouteRequest_out_enqueue(const ROUTE__RouteRequest_i * tb_RouteRequest_out){
  bool tb_result = true;
  tb_result &= tb_RouteRequest_out0_enqueue((ROUTE__RouteRequest_i *) tb_RouteRequest_out);
  return tb_result;
}


bool tb_VehicleActionCommand_out_enqueue(const CMASI__VehicleActionCommand_i * tb_VehicleActionCommand_out){
  bool tb_result = true;
  tb_result &= tb_VehicleActionCommand_out0_enqueue((CMASI__VehicleActionCommand_i *) tb_VehicleActionCommand_out);
  return tb_result;
}
bool tb_VideoRecord_out_enqueue(const UXNATIVE__VideoRecord_i * tb_VideoRecord_out){
  bool tb_result = true;
  tb_result &= tb_VideoRecord_out0_enqueue((UXNATIVE__VideoRecord_i *) tb_VideoRecord_out);
  return tb_result;
}
bool tb_SensorFootprintRequests_out_enqueue(const UXTASK__SensorFootprintRequests_i * tb_SensorFootprintRequests_out){
  bool tb_result = true;
  tb_result &= tb_SensorFootprintRequests_out0_enqueue((UXTASK__SensorFootprintRequests_i *) tb_SensorFootprintRequests_out);
  return tb_result;
}
