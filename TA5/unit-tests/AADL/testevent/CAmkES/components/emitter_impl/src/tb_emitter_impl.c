#include "../includes/tb_emitter_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_emitter_impl_write_e
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 ************************************************************************/
bool tb_emitter_impl_write_e(void) {
  bool tb_result = true;
  e_emit();
  return tb_result;
}


/************************************************************************
 *  tb_entrypoint_emitter_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_emitter_impl_initializer(const int64_t * in_arg) {
  testevent_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t tb_dummy;
    tb_entrypoint_emitter_impl_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
