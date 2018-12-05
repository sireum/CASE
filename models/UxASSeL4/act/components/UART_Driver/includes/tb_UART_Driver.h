#ifndef __tb_AADL_UART_Driver_types__H
#define __tb_AADL_UART_Driver_types__H

#include "../../../includes/tb_soi_tk1_types.h"

bool tb_out_uart_packet_enqueue(const SMACCM_DATA__UART_Packet_i * tb_out_uart_packet);

bool tb_in_uart_packet_dequeue(SMACCM_DATA__UART_Packet_i * tb_in_uart_packet);

bool tb_out_send_success_enqueue(const bool * tb_out_send_success);

#endif // __tb_AADL_UART_Driver_types__H
