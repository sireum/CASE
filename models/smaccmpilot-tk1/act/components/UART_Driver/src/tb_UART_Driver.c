#include "tb_UART_Driver.h"
#include <string.h>
#include <camkes.h>

bool tb_self2decrypt_enqueue(const SMACCM_DATA__UART_Packet_i * tb_self2decrypt){
  bool tb_result = true;
  tb_result &= tb_self2decrypt0_enqueue((SMACCM_DATA__UART_Packet_i *) tb_self2decrypt);
  return tb_result;
}

bool tb_self2encrypt_enqueue(const bool * tb_self2encrypt){
  bool tb_result = true;
  tb_result &= tb_self2encrypt0_enqueue((bool *) tb_self2encrypt);
  return tb_result;
}
