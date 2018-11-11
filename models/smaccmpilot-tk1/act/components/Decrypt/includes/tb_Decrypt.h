#ifndef __tb_AADL_Decrypt_types__H
#define __tb_AADL_Decrypt_types__H

#include "../../../includes/tb_smaccmpilot_tk1_types.h"

bool tb_uart2self_dequeue(SMACCM_DATA__UART_Packet_i * tb_uart2self);
bool tb_self2server_enqueue(const SMACCM_DATA__GIDL * tb_self2server);

// user entrypoints for periodic dispatch
void component_entry(const int64_t * periodic_dispatcher);
void component_init(const int64_t *arg);

#endif // __tb_AADL_Decrypt_types__H
