#include "../includes/tb_Waypoint_Manager.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_mission_read_enqueue:
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
bool tb_mission_read_enqueue(const bool * tb_mission_read){
  bool tb_result = true;
  tb_result &= tb_mission_read0_enqueue((bool *) tb_mission_read);
  return tb_result;
}

static void tb_mission_write_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_mission_write_notification_reg_callback(tb_mission_write_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Waypoint_Manager_mission_write:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Waypoint_Manager_mission_write(const bool * in_arg) {
  mission_write((bool *) in_arg);
}

/************************************************************************
 * tb_waypoint_read_enqueue:
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
bool tb_waypoint_read_enqueue(const bool * tb_waypoint_read){
  bool tb_result = true;
  tb_result &= tb_waypoint_read0_enqueue((bool *) tb_waypoint_read);
  return tb_result;
}

static void tb_waypoint_write_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_waypoint_write_notification_reg_callback(tb_waypoint_write_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Waypoint_Manager_waypoint_write:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Waypoint_Manager_waypoint_write(const uint32_t * in_arg) {
  waypoint_write((uint32_t *) in_arg);
}

static void tb_in_send_success_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_in_send_success_notification_reg_callback(tb_in_send_success_notification_handler, NULL));
}

/************************************************************************
 * tb_entrypoint_tb_Waypoint_Manager_in_send_success:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_Waypoint_Manager_in_send_success(const bool * in_arg) {
  in_send_success((bool *) in_arg);
}

/************************************************************************
 * tb_out_uart_packet_enqueue:
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
bool tb_out_uart_packet_enqueue(const SMACCM_DATA__UART_Packet_i * tb_out_uart_packet){
  bool tb_result = true;
  tb_result &= tb_out_uart_packet0_enqueue((SMACCM_DATA__UART_Packet_i *) tb_out_uart_packet);
  return tb_result;
}

/************************************************************************
 *  tb_entrypoint_Waypoint_Manager_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_Waypoint_Manager_initializer(const int64_t * in_arg) {
  component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(tb_mission_write_notification_reg_callback(tb_mission_write_notification_handler, NULL));
  CALLBACKOP(tb_waypoint_write_notification_reg_callback(tb_waypoint_write_notification_handler, NULL));
  CALLBACKOP(tb_in_send_success_notification_reg_callback(tb_in_send_success_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  bool tb_mission_write;
  uint32_t tb_waypoint_write;
  bool tb_in_send_success;
  {
    int64_t tb_dummy;
    tb_entrypoint_Waypoint_Manager_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
    while (tb_mission_write_dequeue((bool *) &tb_mission_write)) {
      tb_entrypoint_tb_Waypoint_Manager_mission_write(&tb_mission_write);
    }
    while (tb_waypoint_write_dequeue((uint32_t *) &tb_waypoint_write)) {
      tb_entrypoint_tb_Waypoint_Manager_waypoint_write(&tb_waypoint_write);
    }
    while (tb_in_send_success_dequeue((bool *) &tb_in_send_success)) {
      tb_entrypoint_tb_Waypoint_Manager_in_send_success(&tb_in_send_success);
    }
  }
  return 0;
}
