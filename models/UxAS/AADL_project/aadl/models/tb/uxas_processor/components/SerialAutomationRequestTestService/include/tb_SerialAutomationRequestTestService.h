#ifndef __TB_AADL_SerialAutomationRequestTestService_types__H
#define __TB_AADL_SerialAutomationRequestTestService_types__H

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


// reader prototype for tb_ImpactAutomationResponse_in
bool tb_ImpactAutomationResponse_in_dequeue(IMPACT__ImpactAutomationResponse_i * tb_ImpactAutomationResponse_in);
 // reader prototype for tb_ImpactAutomationRequest_in
bool tb_ImpactAutomationRequest_in_dequeue(IMPACT__ImpactAutomationRequest_i * tb_ImpactAutomationRequest_in);
 // reader prototype for tb_AutomationResponse_in
bool tb_AutomationResponse_in_dequeue(CMASI__AutomationResponse_i * tb_AutomationResponse_in);
 // reader prototype for tb_AutomationRequest_in
bool tb_AutomationRequest_in_dequeue(CMASI__AutomationRequest_i * tb_AutomationRequest_in);
 

//////////////////////////////////////////////////////////////////////////
//
// Note: thread is declared EXTERNAL; user should provide run() function.
//
//////////////////////////////////////////////////////////////////////////

#endif // __TB_AADL_SerialAutomationRequestTestService_types__H
