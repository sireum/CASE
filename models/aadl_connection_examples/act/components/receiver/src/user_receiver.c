#include <camkes.h>
#include <sb_proc_types.h>
#include "../includes/sb_receiver.h"

void add_subtract_add(uint32_t A, uint32_t B, uint32_t *result) {
	printf("Value received on shared data port: %u\n", sharedData->F);
	
	*result = A + B;
}

void add_subtract_subtract(uint32_t A, uint32_t B, uint32_t *result) {
	*result = A - B;
}

void eventDataPort_callback(const uint32_t * in_arg){
	printf("Value received on event data port: %u\n", (*in_arg));
}