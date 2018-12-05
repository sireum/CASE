#ifndef __tb_AADL_Virtual_Machine_types__H
#define __tb_AADL_Virtual_Machine_types__H

#include "../../../includes/tb_soi_tk1_types.h"

bool tb_mission_write_enqueue(const bool * tb_mission_write);

bool tb_mission_read_dequeue(bool * tb_mission_read);

void mission_read(const bool * in_arg);

bool tb_waypoint_write_dequeue(uint32_t * tb_waypoint_write);

void waypoint_write(const uint32_t * in_arg);

bool tb_waypoint_read_enqueue(const bool * tb_waypoint_read);

#endif // __tb_AADL_Virtual_Machine_types__H
