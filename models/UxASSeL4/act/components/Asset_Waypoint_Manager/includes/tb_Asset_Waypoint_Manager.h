#ifndef __tb_AADL_Asset_Waypoint_Manager_types__H
#define __tb_AADL_Asset_Waypoint_Manager_types__H

#include "../../../includes/tb_soi_tk1_types.h"

bool tb_waypoint_write_wm_enqueue(const uint32_t * tb_waypoint_write_wm);

bool tb_waypoint_write_vm_enqueue(const uint32_t * tb_waypoint_write_vm);

bool tb_waypoint_read_vm_dequeue(bool * tb_waypoint_read_vm);

void mission_read_vm(const bool * in_arg);

bool tb_waypoint_read_wm_dequeue(bool * tb_waypoint_read_wm);

void mission_read_wm(const bool * in_arg);

bool tb_in_uart_packet_dequeue(SMACCM_DATA__UART_Packet_i * tb_in_uart_packet);

void in_uart_packet(const SMACCM_DATA__UART_Packet_i * in_arg);


// user entrypoints for periodic dispatch
void component_entry(const int64_t * periodic_dispatcher);
void component_init(const int64_t *arg);

void component_init(const int64_t *arg);

#endif // __tb_AADL_Asset_Waypoint_Manager_types__H
