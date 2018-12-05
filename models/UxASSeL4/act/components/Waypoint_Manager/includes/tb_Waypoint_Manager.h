#ifndef __tb_AADL_Waypoint_Manager_types__H
#define __tb_AADL_Waypoint_Manager_types__H

#include "../../../includes/tb_soi_tk1_types.h"

bool tb_mission_read_enqueue(const bool * tb_mission_read);

bool tb_mission_write_dequeue(bool * tb_mission_write);

void mission_write(const bool * in_arg);

bool tb_waypoint_read_enqueue(const bool * tb_waypoint_read);

bool tb_waypoint_write_dequeue(uint32_t * tb_waypoint_write);

void waypoint_write(const uint32_t * in_arg);

bool tb_in_send_success_dequeue(bool * tb_in_send_success);

void in_send_success(const bool * in_arg);

bool tb_out_uart_packet_enqueue(const SMACCM_DATA__UART_Packet_i * tb_out_uart_packet);


// user entrypoints for periodic dispatch
void component_entry(const int64_t * periodic_dispatcher);
void component_init(const int64_t *arg);

void component_init(const int64_t *arg);

#endif // __tb_AADL_Waypoint_Manager_types__H
