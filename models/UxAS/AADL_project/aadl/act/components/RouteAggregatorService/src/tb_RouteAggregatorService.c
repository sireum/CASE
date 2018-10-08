#include "tb_RouteAggregatorService.h"
#include <string.h>
#include <camkes.h>











bool tb_ServiceStatus_out_enqueue(const CMASI__ServiceStatus_i * tb_ServiceStatus_out){
  bool tb_result = true;
  tb_result &= tb_ServiceStatus_out0_enqueue((CMASI__ServiceStatus_i *) tb_ServiceStatus_out);
  return tb_result;
}
bool tb_RoutePlanRequest_out_enqueue(const ROUTE__RoutePlanRequest_i * tb_RoutePlanRequest_out){
  bool tb_result = true;
  tb_result &= tb_RoutePlanRequest_out0_enqueue((ROUTE__RoutePlanRequest_i *) tb_RoutePlanRequest_out);
  return tb_result;
}
bool tb_AssignmentCostMatrix_out_enqueue(const UXTASK__AssignmentCostMatrix_i * tb_AssignmentCostMatrix_out){
  bool tb_result = true;
  tb_result &= tb_AssignmentCostMatrix_out0_enqueue((UXTASK__AssignmentCostMatrix_i *) tb_AssignmentCostMatrix_out);
  return tb_result;
}
bool tb_RouteResponse_out_enqueue(const ROUTE__RouteResponse_i * tb_RouteResponse_out){
  bool tb_result = true;
  tb_result &= tb_RouteResponse_out0_enqueue((ROUTE__RouteResponse_i *) tb_RouteResponse_out);
  return tb_result;
}
