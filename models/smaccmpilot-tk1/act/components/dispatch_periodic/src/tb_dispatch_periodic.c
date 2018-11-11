#include <string.h>
#include <camkes.h>
#include <tb_smaccmpilot_tk1_types.h>

// prototypes for clock functions
void clock_init();
void clock_set_interval_in_ms(uint32_t interval);
void clock_start_timer(void);
void clock_irq_callback(void);
uint64_t clock_get_time();

// Declarations for managing periodic thread dispatch
const uint32_t aadl_tick_interval = 1;
const uint32_t aadl_hyperperiod_subdivisions = 5;
uint32_t aadl_calendar_counter = 0;
uint32_t aadl_calendar_ticks = 0;

void tb_thread_calendar() {
  if ((aadl_calendar_counter % (1 / aadl_tick_interval)) == 0) {
    decrypt_periodic_dispatcher_emit();
  }
  if ((aadl_calendar_counter % (5 / aadl_tick_interval)) == 0) {
    encrypt_periodic_dispatcher_emit();
  }
  if ((aadl_calendar_counter % (5 / aadl_tick_interval)) == 0) {
    server_periodic_dispatcher_emit();
  }
  if ((aadl_calendar_counter % (1 / aadl_tick_interval)) == 0) {
    can_framing_periodic_dispatcher_emit();
  }

  aadl_calendar_counter = (aadl_calendar_counter + 1) % aadl_hyperperiod_subdivisions;
  aadl_calendar_ticks++;
}

void timer_complete_callback() {
  tb_thread_calendar();
}

// no op under the new time server scheme.
void clock_init() { }

// Set interrupt interval, in milliseconds.
void clock_set_interval_in_ms(uint32_t interval) {
  timer_periodic(0, ((uint64_t)interval) * NS_IN_MS);
}

// no op under the new time server scheme
void clock_start_timer(void) { }

// defer to time server
uint64_t clock_get_time() {
  return (timer_time() / NS_IN_MS);
}

int run(void) {
  clock_init();
  clock_set_interval_in_ms(1);
  clock_start_timer();
  return 0;
}
