#ifndef TB_VERIFY
#include <stdio.h>
#endif // TB_VERIFY

#include "../../../../includes/tb_soi_tk1_types.h"
#include "../includes/tb_virtual_machine_waypoint_write_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

uint32_t contents[1];
static uint32_t front = 0;
static uint32_t length = 0;

static bool is_full(void) {
  return length == 1;
}

static bool is_empty(void) {
  return length == 0;
}

bool mon_dequeue(uint32_t * m) {
  if (is_empty()) {
    return false;
  } else {
    *m = contents[front];
    front = (front + 1) % 1;
    length--;
    return true;
  }
}

bool mon_enqueue(const uint32_t * m) {
  if (is_full()) {
    return false;
  } else {
    contents[(front + length) % 1] = *m;
    length++;
    monsig_emit();
    return true;
  }
}
