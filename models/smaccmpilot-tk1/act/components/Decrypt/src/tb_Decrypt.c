#include "tb_Decrypt.h"
#include <string.h>
#include <camkes.h>


bool tb_self2server_enqueue(const SMACCM_DATA__GIDL * tb_self2server){
  bool tb_result = true;
  tb_result &= tb_self2server0_enqueue((SMACCM_DATA__GIDL *) tb_self2server);
  return tb_result;
}
