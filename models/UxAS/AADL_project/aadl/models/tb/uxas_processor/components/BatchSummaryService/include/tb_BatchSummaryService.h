#ifndef __TB_AADL_BatchSummaryService_types__H
#define __TB_AADL_BatchSummaryService_types__H

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


// reader prototype for tb_RadioTowerState_in
bool tb_RadioTowerState_in_dequeue(IMPACT__RadioTowerState_i * tb_RadioTowerState_in);
 // reader prototype for tb_GroundVehicleConfiguration_in
bool tb_GroundVehicleConfiguration_in_dequeue(IMPACT__GroundVehicleConfiguration_i * tb_GroundVehicleConfiguration_in);
 // reader prototype for tb_EntityConfiguration_in
bool tb_EntityConfiguration_in_dequeue(CMASI__EntityConfiguration_i * tb_EntityConfiguration_in);
 // reader prototype for tb_SurfaceVehicleConfiguration_in
bool tb_SurfaceVehicleConfiguration_in_dequeue(IMPACT__SurfaceVehicleConfiguration_i * tb_SurfaceVehicleConfiguration_in);
 // reader prototype for tb_AirVehicleConfiguration_in
bool tb_AirVehicleConfiguration_in_dequeue(CMASI__AirVehicleConfiguration_i * tb_AirVehicleConfiguration_in);
 // reader prototype for tb_BatchSummaryRequest_in
bool tb_BatchSummaryRequest_in_dequeue(IMPACT__BatchSummaryRequest_i * tb_BatchSummaryRequest_in);
 // reader prototype for tb_EntityState_in
bool tb_EntityState_in_dequeue(CMASI__EntityState_i * tb_EntityState_in);
 // reader prototype for tb_GroundVehicleState_in
bool tb_GroundVehicleState_in_dequeue(IMPACT__GroundVehicleState_i * tb_GroundVehicleState_in);
 // reader prototype for tb_PointOfInterest_in
bool tb_PointOfInterest_in_dequeue(IMPACT__PointOfInterest_i * tb_PointOfInterest_in);
 // reader prototype for tb_RadioTowerConfiguration_in
bool tb_RadioTowerConfiguration_in_dequeue(IMPACT__RadioTowerConfiguration_i * tb_RadioTowerConfiguration_in);
 // reader prototype for tb_Task_in
bool tb_Task_in_dequeue(CMASI__Task_i * tb_Task_in);
 // reader prototype for tb_AirVehicleState_in
bool tb_AirVehicleState_in_dequeue(CMASI__AirVehicleState_i * tb_AirVehicleState_in);
 // reader prototype for tb_SurfaceVehicleState_in
bool tb_SurfaceVehicleState_in_dequeue(IMPACT__SurfaceVehicleState_i * tb_SurfaceVehicleState_in);
 // reader prototype for tb_RoutePlanResponse_in
bool tb_RoutePlanResponse_in_dequeue(ROUTE__RoutePlanResponse_i * tb_RoutePlanResponse_in);
 // reader prototype for tb_AreaOfInterest_in
bool tb_AreaOfInterest_in_dequeue(IMPACT__AreaOfInterest_i * tb_AreaOfInterest_in);
 // reader prototype for tb_EgressRouteResponse_in
bool tb_EgressRouteResponse_in_dequeue(ROUTE__EgressRouteResponse_i * tb_EgressRouteResponse_in);
 // reader prototype for tb_LineOfInterest_in
bool tb_LineOfInterest_in_dequeue(IMPACT__LineOfInterest_i * tb_LineOfInterest_in);
 bool tb_EgressRouteRequest_out_enqueue(const ROUTE__EgressRouteRequest_i * tb_EgressRouteRequest_out);
 bool tb_RoutePlanRequest_out_enqueue(const ROUTE__RoutePlanRequest_i * tb_RoutePlanRequest_out);
 bool tb_BatchSummaryResponse_out_enqueue(const IMPACT__BatchSummaryResponse_i * tb_BatchSummaryResponse_out);
 

//////////////////////////////////////////////////////////////////////////
//
// Note: thread is declared EXTERNAL; user should provide run() function.
//
//////////////////////////////////////////////////////////////////////////

#endif // __TB_AADL_BatchSummaryService_types__H
