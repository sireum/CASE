#include "../includes/tb_Asset_Waypoint_Manager.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_waypoint_write_wm_enqueue:
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
bool tb_waypoint_write_wm_enqueue(const uint32_t * tb_waypoint_write_wm){
  bool tb_result = true;
  tb_result &= tb_waypoint_write_wm0_enqueue((uint32_t *) tb_waypoint_write_wm);
  return tb_result;
}

/************************************************************************
 * tb_waypoint_write_vm_enqueue:
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
bool tb_waypoint_write_vm_enqueue(const uint32_t * tb_waypoint_write_vm){
  bool tb_result = true;
  tb_result &= tb_waypoint_write_vm0_enqueue((uint32_t *) tb_waypoint_write_vm);
  return tb_result;
}

static void tb_waypoint_read_vm_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_waypoint_read_vm_notification_reg_callback(tb_waypoint_read_vm_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_vm:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_vm(const bool * in_arg) {
  mission_read_vm((bool *) in_arg);
}

static void tb_waypoint_read_wm_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_waypoint_read_wm_notification_reg_callback(tb_waypoint_read_wm_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_wm:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_wm(const bool * in_arg) {
  mission_read_wm((bool *) in_arg);
}

static void tb_in_uart_packet_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_in_uart_packet_notification_reg_callback(tb_in_uart_packet_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Asset_Waypoint_Manager_in_uart_packet:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Asset_Waypoint_Manager_in_uart_packet(const SMACCM_DATA__UART_Packet_i * in_arg) {
  in_uart_packet((SMACCM_DATA__UART_Packet_i *) in_arg);
}

/************************************************************************
 *  tb_entrypoint_Asset_Waypoint_Manager_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_Asset_Waypoint_Manager_initializer(const int64_t * in_arg) {
  component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(tb_waypoint_read_vm_notification_reg_callback(tb_waypoint_read_vm_notification_handler, NULL));
  CALLBACKOP(tb_waypoint_read_wm_notification_reg_callback(tb_waypoint_read_wm_notification_handler, NULL));
  CALLBACKOP(tb_in_uart_packet_notification_reg_callback(tb_in_uart_packet_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  bool tb_waypoint_read_vm;
  bool tb_waypoint_read_wm;
  SMACCM_DATA__UART_Packet_i tb_in_uart_packet;
  {
    int64_t tb_dummy;
    tb_entrypoint_Asset_Waypoint_Manager_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
    while (tb_waypoint_read_vm_dequeue((bool *) &tb_waypoint_read_vm)) {
      tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_vm(&tb_waypoint_read_vm);
    }
    while (tb_waypoint_read_wm_dequeue((bool *) &tb_waypoint_read_wm)) {
      tb_entrypoint_tb_Asset_Waypoint_Manager_waypoint_read_wm(&tb_waypoint_read_wm);
    }
    while (tb_in_uart_packet_dequeue((SMACCM_DATA__UART_Packet_i *) &tb_in_uart_packet)) {
      tb_entrypoint_tb_Asset_Waypoint_Manager_in_uart_packet(&tb_in_uart_packet);
    }
  }
  return 0;
}
