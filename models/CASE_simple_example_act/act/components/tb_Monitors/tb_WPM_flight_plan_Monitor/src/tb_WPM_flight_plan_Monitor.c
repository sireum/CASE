#include "../../../../includes/tb_PROC_HW_types.h"
#include "../includes/tb_WPM_flight_plan_Monitor.h"

int monsig_emit(void);

static SW__Mission_Impl contents;

bool mon_read(SW__Mission_Impl * m) {
  *m = contents;
  return true;
}

bool mon_write(const SW__Mission_Impl * m) {
  contents = *m;
  monsig_emit();
  return true;
}