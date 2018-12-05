#ifndef TB_VERIFY
#include <stdio.h>
#endif // TB_VERIFY

#include "../../../../includes/tb_soi_tk1_types.h"
#include "../includes/tb_uart_driver_in_uart_packet_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

SMACCM_DATA__UART_Packet_i contents[23388];
static uint32_t front = 0;
static uint32_t length = 0;

static bool is_full(void) {
  return length == 1;
}

static bool is_empty(void) {
  return length == 0;
}

bool mon_dequeue(SMACCM_DATA__UART_Packet_i * m) {
  if (is_empty()) {
    return false;
  } else {
    *m = contents[front];
    front = (front + 1) % 23388;
    length--;
    return true;
  }
}

bool mon_enqueue(const SMACCM_DATA__UART_Packet_i * m) {
  if (is_full()) {
    return false;
  } else {
    contents[(front + length) % 23388] = *m;
    length++;
    monsig_emit();
    return true;
  }
}
