#include "../includes/tb_Filter.h"
#include <string.h>
#include <camkes.h>

void tb_entrypoint_tb_Filter_filter_in(const SW__Command_Impl * in_arg) { }

bool tb_filter_out_enqueue(const SW__Command_Impl * tb_filter_out){
  bool tb_result = true;
  tb_result &= tb_filter_out0_enqueue((SW__Command_Impl *) tb_filter_out);
  return tb_result;
}

void pre_init(void) { }

int run(void) {
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
