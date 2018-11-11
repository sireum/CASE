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

This C file contains the implementations of the AADL primitives
used by user-level declarations for thread AutomationDiagramDataService.

The user code runs in terms of "dispatchers", which cause
dispatch user-level handlers to execute.  These handlers can
communicate using the standard AADL primitives, which are mapped
to C functions.

The send/receive handlers are not thread safe in CAmkES; it is
assumed that this is handled by the CAmkES sequentialized access
to the dispatch handler.  There is only one dispatch interface
for the component containing all of the dispatch points.

They are thread safe for eChronos.

The read/write handlers are thread safe because the writer comes
through a dispatch interface but the reader is "local" on a dispatch
interface and so contention may occur.

 **************************************************************************/

#include "tb_AutomationDiagramDataService.h"
#include <string.h>
#include <camkes.h>



void pre_init(void) {

    // Pre-initialization statements for tb_KeepOutZone_in
    // Pre-initialization statements for tb_UniqueAutomationResponse_in
    // Pre-initialization statements for tb_AreaOfInterest_in
    // Pre-initialization statements for tb_GroundVehicleState_in
    // Pre-initialization statements for tb_KeepInZone_in
    // Pre-initialization statements for tb_PointOfInterest_in
    // Pre-initialization statements for tb_UniqueAutomationRequest_in
    // Pre-initialization statements for tb_OperatingRegion_in
    // Pre-initialization statements for tb_Task_in
    // Pre-initialization statements for tb_AirVehicleState_in
    // Pre-initialization statements for tb_SurfaceVehicleState_in
    // Pre-initialization statements for tb_LineOfInterest_in

}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_KeepOutZone_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_KeepOutZone_in(const CMASI__KeepOutZone_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_UniqueAutomationResponse_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_UniqueAutomationResponse_in(const UXTASK__UniqueAutomationResponse_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_AreaOfInterest_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_AreaOfInterest_in(const IMPACT__AreaOfInterest_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_GroundVehicleState_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_GroundVehicleState_in(const IMPACT__GroundVehicleState_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_KeepInZone_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_KeepInZone_in(const CMASI__KeepInZone_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_PointOfInterest_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_PointOfInterest_in(const IMPACT__PointOfInterest_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_UniqueAutomationRequest_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_UniqueAutomationRequest_in(const UXTASK__UniqueAutomationRequest_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_OperatingRegion_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_OperatingRegion_in(const CMASI__OperatingRegion_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_Task_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_Task_in(const CMASI__Task_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_AirVehicleState_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_AirVehicleState_in(const CMASI__AirVehicleState_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_SurfaceVehicleState_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_SurfaceVehicleState_in(const IMPACT__SurfaceVehicleState_i * in_arg) {
}

/************************************************************************
 *  tb_entrypoint_tb_AutomationDiagramDataService_LineOfInterest_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_AutomationDiagramDataService_LineOfInterest_in(const IMPACT__LineOfInterest_i * in_arg) {
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 *
 ************************************************************************/

int run(void) {
    // Initial lock to await dispatch input.
    MUTEXOP(tb_dispatch_sem_wait())
    for(;;) {
        MUTEXOP(tb_dispatch_sem_wait())

        // Drain the queues
    }

    // Won't ever get here, but form must be followed
    return 0;
}
