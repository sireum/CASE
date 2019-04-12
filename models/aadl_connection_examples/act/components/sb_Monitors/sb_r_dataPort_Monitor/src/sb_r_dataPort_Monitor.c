#include "../../../../includes/sb_proc_types.h"
#include "../includes/sb_r_dataPort_Monitor.h"

int monsig_emit(void);

static uint32_t contents;

bool mon_read(uint32_t * m) {
  *m = contents;
  return true;
}

bool mon_write(const uint32_t * m) {
  contents = *m;
  monsig_emit();
  return true;
}