#include <camkes.h>
#include "tb_soi_tk1_types.h"

void mission_write(const bool * in_arg){}

void mission_read(const bool * in_arg){}

void waypoint_write(const bool * in_arg){}

void in_send_success(const bool * in_arg){}

void component_init(const int64_t *arg) {}

void in_uart_packet(const SMACCM_DATA__UART_Packet_i * in_arg){}

void mission_read_vm(const bool * in_arg){}

void mission_read_wm(const bool * in_arg){}