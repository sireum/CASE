#include "../includes/tb_UART_Driver.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_out_uart_packet_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool tb_out_uart_packet_enqueue(const SMACCM_DATA__UART_Packet_i * tb_out_uart_packet){
  bool tb_result = true;
  tb_result &= tb_out_uart_packet0_enqueue((SMACCM_DATA__UART_Packet_i *) tb_out_uart_packet);
  return tb_result;
}

/************************************************************************
 * tb_entrypoint_tb_UART_Driver_in_uart_packet:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_UART_Driver_in_uart_packet(const SMACCM_DATA__UART_Packet_i * in_arg) {

}

/************************************************************************
 * tb_out_send_success_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool tb_out_send_success_enqueue(const bool * tb_out_send_success){
  bool tb_result = true;
  tb_result &= tb_out_send_success0_enqueue((bool *) tb_out_send_success);
  return tb_result;
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
