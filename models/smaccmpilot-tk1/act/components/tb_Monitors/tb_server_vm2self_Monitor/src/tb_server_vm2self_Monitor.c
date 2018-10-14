#include "../../../../includes/tb_smaccmpilot_tk1_types.h"
#include "../includes/tb_server_vm2self_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

static SMACCM_DATA__Camera_Bounding_Box_i contents;

bool mon_read(SMACCM_DATA__Camera_Bounding_Box_i * m) {
  if (mon_get_sender_id() != TB_MONITOR_READ_ACCESS) {
    return false;
  } else {
    *m = contents;
    return true;
  }
}

bool mon_write(const SMACCM_DATA__Camera_Bounding_Box_i * m) {
  if (mon_get_sender_id() != TB_MONITOR_WRITE_ACCESS) {
    return false;
  } else {
    contents = *m;
    monsig_emit();
    return true;
  }
}
