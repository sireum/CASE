#include "tb_RoutePlannerService.h"
#include <string.h>
#include <camkes.h>















bool tb_RoutePlanResponse_out_enqueue(const ROUTE__RoutePlanResponse_i * tb_RoutePlanResponse_out){
  bool tb_result = true;
  tb_result &= tb_RoutePlanResponse_out0_enqueue((ROUTE__RoutePlanResponse_i *) tb_RoutePlanResponse_out);
  return tb_result;
}
