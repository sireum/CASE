#ifndef __sb_AADL_sender_types__H
#define __sb_AADL_sender_types__H

#include "../../../includes/sb_proc_types.h"

bool sb_dataPort_write(const uint32_t * sb_dataPort);

bool sb_eventDataPort_enqueue(const uint32_t * sb_eventDataPort);

bool sb_sender_write_eventPort(void);

void periodic_ping(int64_t *);

void sender_init(const int64_t *arg);

#endif // __sb_AADL_sender_types__H
