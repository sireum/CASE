#include "tb_SensorManagerService.h"
#include <string.h>
#include <camkes.h>






bool tb_SensorFootprintResponse_out_enqueue(const UXTASK__SensorFootprintResponse_i * tb_SensorFootprintResponse_out){
  bool tb_result = true;
  tb_result &= tb_SensorFootprintResponse_out0_enqueue((UXTASK__SensorFootprintResponse_i *) tb_SensorFootprintResponse_out);
  return tb_result;
}
