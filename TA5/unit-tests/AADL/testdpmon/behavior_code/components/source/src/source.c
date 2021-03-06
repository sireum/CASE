/* testpdmon/components/source/src/source.c */

#include <camkes.h>
#include <stdio.h>
#include "../../../../includes/tb_proc_types.h"

static int8_t _value;

void testdpmon_source_component_init(const int64_t *in_arg)
{
    _value = 0;
}

/* control thread: keep calling enqueue for thing
 */
void run_sender(const int64_t *in_arg)
{
    if (mon_write( &_value ) ) {
        printf("[source] Sent %d\n", _value );
        _value++;
    }
}
