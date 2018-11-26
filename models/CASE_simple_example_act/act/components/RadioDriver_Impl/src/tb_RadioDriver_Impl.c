#include "../includes/tb_RadioDriver_Impl.h"
#include "../../../aux/includes/radiodriver.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_entrypoint_tb_RadioDriver_Impl_recv_map_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_RadioDriver_Impl_recv_map_in(const SW__Command_Impl * in_arg) {

}

/************************************************************************
 * tb_entrypoint_tb_RadioDriver_Impl_send_status_in:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_RadioDriver_Impl_send_status_in(const SW__Coordinate_Impl * in_arg) {

}

/************************************************************************
 * tb_recv_map_out_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool tb_recv_map_out_enqueue(const SW__Command_Impl * tb_recv_map_out){
  bool tb_result = true;
  tb_result &= tb_recv_map_out0_enqueue((SW__Command_Impl *) tb_recv_map_out);
  return tb_result;
}

/************************************************************************
 *  tb_entrypoint_RadioDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_RadioDriver_Impl_initializer(const int64_t * in_arg) {
  radio_driver_component_init((int64_t *) in_arg);
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
    tb_entrypoint_RadioDriver_Impl_initializer(&tb_dummy);
  }

  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
