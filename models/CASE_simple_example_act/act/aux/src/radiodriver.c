#include "../includes/radiodriver.h"
#include <camkes.h>

void radio_driver_component_init(const int64_t *arg){
  fprintf(stdout, "Radio Driver: radio_driver_component_init called\n");
}

void radio_driver_send_status_in_event_handler(const SW__Coordinate_Impl * in_arg) {
  fprintf(stdout, "Radio Driver: send_status_in event handler called\n");
}
