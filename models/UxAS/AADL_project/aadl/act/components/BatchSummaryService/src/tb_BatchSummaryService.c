#include "tb_BatchSummaryService.h"
#include <string.h>
#include <camkes.h>


















bool tb_EgressRouteRequest_out_enqueue(const ROUTE__EgressRouteRequest_i * tb_EgressRouteRequest_out){
  bool tb_result = true;
  tb_result &= tb_EgressRouteRequest_out0_enqueue((ROUTE__EgressRouteRequest_i *) tb_EgressRouteRequest_out);
  return tb_result;
}
bool tb_RoutePlanRequest_out_enqueue(const ROUTE__RoutePlanRequest_i * tb_RoutePlanRequest_out){
  bool tb_result = true;
  tb_result &= tb_RoutePlanRequest_out0_enqueue((ROUTE__RoutePlanRequest_i *) tb_RoutePlanRequest_out);
  return tb_result;
}
bool tb_BatchSummaryResponse_out_enqueue(const IMPACT__BatchSummaryResponse_i * tb_BatchSummaryResponse_out){
  bool tb_result = true;
  tb_result &= tb_BatchSummaryResponse_out0_enqueue((IMPACT__BatchSummaryResponse_i *) tb_BatchSummaryResponse_out);
  return tb_result;
}
