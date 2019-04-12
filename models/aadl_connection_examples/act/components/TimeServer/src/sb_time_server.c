#include <stdio.h>
#include <camkes.h>

int the_timer_oneshot_relative(int id, uint64_t ns) {
    return -1;
}

int the_timer_oneshot_absolute(int id, uint64_t ns) {
    return -1;
}

int the_timer_periodic(int id, uint64_t ns) {
    return -1;
}

int the_timer_stop(int id) {
    return -1;
}

unsigned int the_timer_completed() {
    return 1;
}

uint64_t the_timer_time() {
    return 1;
}

uint64_t the_timer_tsc_frequency() {
    return 1;
}
