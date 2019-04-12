#include <camkes.h>
#include <tb_proc_types.h>

void periodic_ping(int64_t * periodic_100_ms) {
   printf("sender ping received (%ld).  Writing to receiver \n", (long)periodic_100_ms);

   uint32_t result;

   add_subtract_add(10, 5, &result);
   printf("Result of 'add' call to receiver with arguments 10, 5 : (%d) \n", result);
   
   add_subtract_subtract(10, 5, &result);  
   printf("Result of 'subtract' call to receiver with arguments 10, 5 : (%d) \n", result);
}