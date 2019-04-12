#ifndef __sb_AADL_receiver_types__H
#define __sb_AADL_receiver_types__H

#include "../../../includes/sb_proc_types.h"

bool sb_dataPort_read(uint32_t * sb_dataPort);

bool sb_eventDataPort_dequeue(uint32_t * sb_eventDataPort);

void eventDataPort_callback(const uint32_t * in_arg);

bool sb_receiver_read_eventPort(void);

#endif // __sb_AADL_receiver_types__H
