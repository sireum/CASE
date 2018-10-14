#ifndef __tb_AADL_UART_Driver_types__H
#define __tb_AADL_UART_Driver_types__H

#include "../../../includes/tb_smaccmpilot_tk1_types.h"

bool tb_self2decrypt_enqueue(const SMACCM_DATA__UART_Packet_i * tb_self2decrypt);
bool tb_encrypt2self_dequeue(SMACCM_DATA__UART_Packet_i * tb_encrypt2self);
bool tb_self2encrypt_enqueue(const bool * tb_self2encrypt);

#endif // __tb_AADL_UART_Driver_types__H
