#include "../includes/tb_Encrypt.h"
#include "../../../aux/includes/test.h"
#include <string.h>
#include <camkes.h>


bool tb_self2uart_enqueue(const SMACCM_DATA__UART_Packet_i * tb_self2uart){
  bool tb_result = true;
  //tb_result &= tb_self2uart0_enqueue((SMACCM_DATA__UART_Packet_i *) tb_self2uart);
  return tb_result;
}


int run(void) { return 0; }
