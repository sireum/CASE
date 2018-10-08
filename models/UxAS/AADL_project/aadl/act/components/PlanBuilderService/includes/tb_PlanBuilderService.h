#ifndef __tb_AADL_PlanBuilderService_types__H
#define __tb_AADL_PlanBuilderService_types__H

#include <tb_uxas_processor_types.h>

bool tb_TaskImplementationResponse_in_dequeue(UXTASK__TaskImplementationResponse_i * tb_TaskImplementationResponse_in);
bool tb_GroundVehicleState_in_dequeue(IMPACT__GroundVehicleState_i * tb_GroundVehicleState_in);
bool tb_UniqueAutomationRequest_in_dequeue(UXTASK__UniqueAutomationRequest_i * tb_UniqueAutomationRequest_in);
bool tb_TaskAssignmentSummary_in_dequeue(UXTASK__TaskAssignmentSummary_i * tb_TaskAssignmentSummary_in);
bool tb_SurfaceVehicleState_in_dequeue(IMPACT__SurfaceVehicleState_i * tb_SurfaceVehicleState_in);
bool tb_AirVehicleState_in_dequeue(CMASI__AirVehicleState_i * tb_AirVehicleState_in);
bool tb_ServiceStatus_out_enqueue(const CMASI__ServiceStatus_i * tb_ServiceStatus_out);
bool tb_UniqueAutomationResponse_out_enqueue(const UXTASK__UniqueAutomationResponse_i * tb_UniqueAutomationResponse_out);
bool tb_TaskImplementationRequest_out_enqueue(const UXTASK__TaskImplementationRequest_i * tb_TaskImplementationRequest_out);

#endif // __tb_AADL_PlanBuilderService_types__H