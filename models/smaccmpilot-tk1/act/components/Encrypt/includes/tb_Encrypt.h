#ifndef __tb_AADL_Encrypt_types__H
#define __tb_AADL_Encrypt_types__H

#include "../../../includes/tb_smaccmpilot_tk1_types.h"

bool tb_server2self_dequeue(tb_SMACCM_DATA__GIDL_container * tb_server2self);
bool tb_self2uart_enqueue(const SMACCM_DATA__UART_Packet_i * tb_self2uart);
bool tb_uart2self_dequeue(bool * tb_uart2self);

#endif // __tb_AADL_Encrypt_types__H
