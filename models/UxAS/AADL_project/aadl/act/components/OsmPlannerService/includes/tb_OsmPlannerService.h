#ifndef __tb_AADL_OsmPlannerService_types__H
#define __tb_AADL_OsmPlannerService_types__H

#include <tb_uxas_processor_types.h>

bool tb_GroundVehicleConfiguration_in_dequeue(IMPACT__GroundVehicleConfiguration_i * tb_GroundVehicleConfiguration_in);
bool tb_RoutePlanRequest_in_dequeue(ROUTE__RoutePlanRequest_i * tb_RoutePlanRequest_in);
bool tb_EgressRouteRequest_in_dequeue(ROUTE__EgressRouteRequest_i * tb_EgressRouteRequest_in);
bool tb_RoutePlanResponse_out_enqueue(const ROUTE__RoutePlanResponse_i * tb_RoutePlanResponse_out);
bool tb_RouteRequest_in_dequeue(ROUTE__RouteRequest_i * tb_RouteRequest_in);
bool tb_EgressRouteResponse_out_enqueue(const ROUTE__EgressRouteResponse_i * tb_EgressRouteResponse_out);

#endif // __tb_AADL_OsmPlannerService_types__H