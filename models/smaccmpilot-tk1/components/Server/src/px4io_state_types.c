/* This file has been autogenerated by Ivory
 * Compiler version  0.1.0.5
 */
#include "px4io_state_types.h"

void px4io_state_get_le(const uint8_t *n_var0, uint32_t n_var1, struct px4io_state *n_var2)
{
    ibool_get_le(n_var0, n_var1, &n_var2->comm_ok);
    px4io_status_get_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->status);
    px4io_alarms_get_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 14U), &n_var2->alarms);
    rc_input_get_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 22U), &n_var2->rc_in);
    time_micros_t_get_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 43U), &n_var2->time);
}

void px4io_state_get_be(const uint8_t *n_var0, uint32_t n_var1, struct px4io_state *n_var2)
{
    ibool_get_be(n_var0, n_var1, &n_var2->comm_ok);
    px4io_status_get_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->status);
    px4io_alarms_get_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 14U), &n_var2->alarms);
    rc_input_get_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 22U), &n_var2->rc_in);
    time_micros_t_get_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 43U), &n_var2->time);
}

void px4io_state_set_le(uint8_t *n_var0, uint32_t n_var1, const struct px4io_state *n_var2)
{
    ibool_set_le(n_var0, n_var1, &n_var2->comm_ok);
    px4io_status_set_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->status);
    px4io_alarms_set_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 14U), &n_var2->alarms);
    rc_input_set_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 22U), &n_var2->rc_in);
    time_micros_t_set_le(n_var0, (uint32_t) (n_var1 + (uint32_t) 43U), &n_var2->time);
}

void px4io_state_set_be(uint8_t *n_var0, uint32_t n_var1, const struct px4io_state *n_var2)
{
    ibool_set_be(n_var0, n_var1, &n_var2->comm_ok);
    px4io_status_set_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 1U), &n_var2->status);
    px4io_alarms_set_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 14U), &n_var2->alarms);
    rc_input_set_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 22U), &n_var2->rc_in);
    time_micros_t_set_be(n_var0, (uint32_t) (n_var1 + (uint32_t) 43U), &n_var2->time);
}
