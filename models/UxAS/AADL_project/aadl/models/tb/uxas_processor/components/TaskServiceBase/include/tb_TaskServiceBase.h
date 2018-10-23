#ifndef __TB_AADL_TaskServiceBase_types__H
#define __TB_AADL_TaskServiceBase_types__H

#include <tb_uxas_processor_types.h>

/**************************************************************************
  Copyright (c) 2013-2016 Rockwell Collins and the University of
  Minnesota. Developed with the sponsorship of the Defense Advanced
  Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this data, including any software or models
  in source or binary form, as well as any drawings,
  specifications, and documentation (collectively "the Data"), to
  deal in the Data without restriction, including without
  limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Data, and to
  permit persons to whom the Data is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS, SPONSORS,
  DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
  CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE
  DATA.
 **************************************************************************/

/**************************************************************************

  ***AUTOGENERATED CODE: DO NOT MODIFY***

This header section contains the AADL gluecode interfaces used by the
client for the thread implementations.

 **************************************************************************/


// reader prototype for tb_CreateNewService_in
bool tb_CreateNewService_in_dequeue(UXNATIVE__CreateNewService_i * tb_CreateNewService_in);
 // reader prototype for tb_GroundVehicleConfiguration_in
bool tb_GroundVehicleConfiguration_in_dequeue(IMPACT__GroundVehicleConfiguration_i * tb_GroundVehicleConfiguration_in);
 // reader prototype for tb_EntityConfiguration_in
bool tb_EntityConfiguration_in_dequeue(CMASI__EntityConfiguration_i * tb_EntityConfiguration_in);
 // reader prototype for tb_SurfaceVehicleConfiguration_in
bool tb_SurfaceVehicleConfiguration_in_dequeue(IMPACT__SurfaceVehicleConfiguration_i * tb_SurfaceVehicleConfiguration_in);
 // reader prototype for tb_AirVehicleConfiguration_in
bool tb_AirVehicleConfiguration_in_dequeue(CMASI__AirVehicleConfiguration_i * tb_AirVehicleConfiguration_in);
 // reader prototype for tb_EntityState_in
bool tb_EntityState_in_dequeue(CMASI__EntityState_i * tb_EntityState_in);
 // reader prototype for tb_TaskImplementationRequest_in
bool tb_TaskImplementationRequest_in_dequeue(UXTASK__TaskImplementationRequest_i * tb_TaskImplementationRequest_in);
 // reader prototype for tb_GroundVehicleState_in
bool tb_GroundVehicleState_in_dequeue(IMPACT__GroundVehicleState_i * tb_GroundVehicleState_in);
 // reader prototype for tb_UniqueAutomationRequest_in
bool tb_UniqueAutomationRequest_in_dequeue(UXTASK__UniqueAutomationRequest_i * tb_UniqueAutomationRequest_in);
 // reader prototype for tb_UniqueAutomationResponse_in
bool tb_UniqueAutomationResponse_in_dequeue(UXTASK__UniqueAutomationResponse_i * tb_UniqueAutomationResponse_in);
 // reader prototype for tb_SurfaceVehicleState_in
bool tb_SurfaceVehicleState_in_dequeue(IMPACT__SurfaceVehicleState_i * tb_SurfaceVehicleState_in);
 // reader prototype for tb_AirVehicleState_in
bool tb_AirVehicleState_in_dequeue(CMASI__AirVehicleState_i * tb_AirVehicleState_in);
 bool tb_TaskInitialized_out_enqueue(const UXTASK__TaskInitialized_i * tb_TaskInitialized_out);
 bool tb_TaskActive_out_enqueue(const UXTASK__TaskActive_i * tb_TaskActive_out);
 bool tb_TaskImplementationResponse_out_enqueue(const UXTASK__TaskImplementationResponse_i * tb_TaskImplementationResponse_out);
 bool tb_TaskComplete_out_enqueue(const UXTASK__TaskComplete_i * tb_TaskComplete_out);
 bool tb_TaskPlanOptions_out_enqueue(const UXTASK__TaskPlanOptions_i * tb_TaskPlanOptions_out);
 bool tb_SensorFootprintRequests_out_enqueue(const UXTASK__SensorFootprintRequests_i * tb_SensorFootprintRequests_out);
 // reader prototype for tb_SensorFootprintResponse_in
bool tb_SensorFootprintResponse_in_dequeue(UXTASK__SensorFootprintResponse_i * tb_SensorFootprintResponse_in);
 bool tb_VehicleActionCommand_out_enqueue(const CMASI__VehicleActionCommand_i * tb_VehicleActionCommand_out);
 bool tb_RouteRequest_out_enqueue(const ROUTE__RouteRequest_i * tb_RouteRequest_out);
 // reader prototype for tb_RouteResponse_in
bool tb_RouteResponse_in_dequeue(ROUTE__RouteResponse_i * tb_RouteResponse_in);
 

//////////////////////////////////////////////////////////////////////////
//
// Note: thread is declared EXTERNAL; user should provide run() function.
//
//////////////////////////////////////////////////////////////////////////

#endif // __TB_AADL_TaskServiceBase_types__H
