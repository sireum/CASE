#include <camkes.h>
#include <tb_proc_types.h>

void add_subtract_add(uint32_t A, uint32_t B, uint32_t *result) {
	*result = A + B;
}

void add_subtract_subtract(uint32_t A, uint32_t B, uint32_t *result) {
	*result = A - B;
}
