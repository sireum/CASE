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

  Implementing a Monitor of type UXTASK__UniqueAutomationResponse_i with a queue size of 
  1. The input port that will be calling dequeue and receiving notifications 
  is tb_AutomationDiagramDataService_UniqueAutomationResponse_in. The output port set follows:

    c.sourcePort


 **************************************************************************/

// The TB_VERIFY macro disables code that would interfere with reasoning.
// However, uncommenting the following will prevent compilation; we are 
// concerned with verify that they following code satisfies expected queuing 
// properties and thus, integration with the rest of the application is
// unnecessary.
//#define TB_VERIFY
#ifndef TB_VERIFY
#include <stdio.h>
#endif // TB_VERIFY
#include "../../../../include/tb_uxas_processor_types.h"
#include "../include/tb_AutomationDiagramDataService_UniqueAutomationResponse_in_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

UXTASK__UniqueAutomationResponse_i contents[1];
static uint32_t front = 0;
static uint32_t length = 0;

static bool is_full(void) {
  return length == 1;
}

static bool is_empty(void) {
  return length == 0;
}
bool mon_dequeue(UXTASK__UniqueAutomationResponse_i * m) {
  if (mon_get_sender_id() != TB_MONITOR_READ_ACCESS) {
    #ifndef TB_VERIFY
    #ifdef CONFIG_APP_UXAS_PROCESSOR_TB_DEBUG
    fprintf(stderr, "Monitor tb_AutomationDiagramDataService_UniqueAutomationResponse_in: attempt to dequeue without permission\n");
    #endif // CONFIG_APP_UXAS_PROCESSOR_TB_DEBUG
    #endif // TB_VERIFY
    return false;
  } else if (is_empty()) {
    return false;
  } else {
    *m = contents[front];
    front = (front + 1) % 1;
    length--;
    return true;
  }
}

bool mon_enqueue(const UXTASK__UniqueAutomationResponse_i * m) {
  if (mon_get_sender_id() != TB_MONITOR_WRITE_ACCESS) {
    #ifndef TB_VERIFY
    #ifdef CONFIG_APP_UXAS_PROCESSOR_TB_DEBUG
    fprintf(stderr, "Monitor tb_AutomationDiagramDataService_UniqueAutomationResponse_in: attempt to enqueue without permission\n");
    #endif // CONFIG_APP_UXAS_PROCESSOR_TB_DEBUG
    #endif // TB_VERIFY
    return false;
  } else if (is_full()) {
    #ifdef CONFIG_APP_UXAS_PROCESSOR_TB_DEBUG
    fprintf(stderr,"Monitor tb_AutomationDiagramDataService_UniqueAutomationResponse_in is full!\n");
    #endif 
    return false;
  } else {
    contents[(front + length) % 1] = *m;
    length++;
    monsig_emit();
    return true;
  }
}
