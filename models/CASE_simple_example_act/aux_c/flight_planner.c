#include <camkes.h>
#include "../includes/tb_FlightPlanner_Impl.h"

void recv_map_handler(const SW__Command_Impl * in_arg) {
  fprintf(stdout, "Flight Planner: recv_map event handler called\n");
}

void position_status_handler(const SW__Coordinate_Impl * in_arg) {
  fprintf(stdout, "Flight Planner: position_status event handler called\n");
}
