#include "../includes/tb_Server.h"
#include "../../../aux/includes/test.h"
#include <string.h>
#include <camkes.h>


bool tb_self2encrypt_enqueue(const SMACCM_DATA__GIDL * tb_self2encrypt){
  bool tb_result = true;
  //tb_result &= tb_self2encrypt0_enqueue((SMACCM_DATA__GIDL *) tb_self2encrypt);
  return tb_result;
}

bool tb_self2framing_enqueue(const SMACCM_DATA__GIDL * tb_self2framing){
  bool tb_result = true;
  //tb_result &= tb_self2framing0_enqueue((SMACCM_DATA__GIDL *) tb_self2framing);
  return tb_result;
}

bool tb_self2vm_reboot_enqueue(const bool * tb_self2vm_reboot){
  bool tb_result = true;
  //tb_result &= tb_self2vm_reboot0_enqueue((bool *) tb_self2vm_reboot);
  return tb_result;
}

int run(void) { return 0; }
