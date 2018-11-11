#ifndef __tb_AADL_Server_types__H
#define __tb_AADL_Server_types__H

#include "../../../includes/tb_smaccmpilot_tk1_types.h"

// bool tb_vm2self_read(SMACCM_DATA__Camera_Bounding_Box_i * tb_vm2self);
bool tb_self2encrypt_enqueue(const SMACCM_DATA__GIDL * tb_self2encrypt);
bool tb_decrypt2self_dequeue(tb_SMACCM_DATA__GIDL_container * tb_decrypt2self);
bool tb_self2framing_enqueue(const SMACCM_DATA__GIDL * tb_self2framing);
bool tb_framing2self_dequeue(tb_SMACCM_DATA__GIDL_container * tb_framing2self);
bool tb_self2vm_reboot_enqueue(const bool * tb_self2vm_reboot);

// user entrypoints for periodic dispatch
void component_entry(const int64_t * periodic_dispatcher);
void component_init(const int64_t *arg);

#endif // __tb_AADL_Server_types__H
