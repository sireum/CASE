#ifndef __tb_AADL_FlightPlanner_Impl_types__H
#define __tb_AADL_FlightPlanner_Impl_types__H

#include "../../../includes/tb_PROC_HW_types.h"

bool tb_flight_plan_write(const SW__Mission_Impl * tb_flight_plan);

bool tb_recv_map_dequeue(SW__Command_Impl * tb_recv_map);

void recv_map_handler(const SW__Command_Impl * in_arg);

bool tb_position_status_dequeue(SW__Coordinate_Impl * tb_position_status);

void position_status_handler(const SW__Coordinate_Impl * in_arg);

#endif // __tb_AADL_FlightPlanner_Impl_types__H
