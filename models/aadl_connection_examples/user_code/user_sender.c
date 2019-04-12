#include <camkes.h>
#include <sb_proc_types.h>
#include "../includes/sb_sender.h"

void sender_init(const int64_t *arg){
   printf("Initializer method for sender invoked\n");
}

void periodic_ping(int64_t * arg) {
   uint32_t result;

   uint32_t a = 1;

   // send 1 out on the data port
   sb_dataPort_write(&a);
   
   a = 2;
   
   // send 2 out on the event data port
   sb_eventDataPort_enqueue(&a);
   
   // send event on the event port
   sb_sender_write_eventPort();
   
   // write 3 to the shared data field
   sharedData->F = 3;

   add_subtract_add(10, 5, &result);
   printf("Result of 'add' call to receiver with arguments 10, 5 : (%d) \n", result);
   
   add_subtract_subtract(10, 5, &result);  
   printf("Result of 'subtract' call to receiver with arguments 10, 5 : (%d) \n", result);
}