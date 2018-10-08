#include "tb_OperatingRegionStateService.h"
#include <string.h>
#include <camkes.h>




bool tb_OperatingRegion_out_enqueue(const CMASI__OperatingRegion_i * tb_OperatingRegion_out){
  bool tb_result = true;
  tb_result &= tb_OperatingRegion_out0_enqueue((CMASI__OperatingRegion_i *) tb_OperatingRegion_out);
  return tb_result;
}
