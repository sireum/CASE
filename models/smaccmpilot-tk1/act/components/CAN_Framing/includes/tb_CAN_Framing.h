#ifndef __tb_AADL_CAN_Framing_types__H
#define __tb_AADL_CAN_Framing_types__H

#include <tb_smaccmpilot_tk1_types.h>

bool tb_server2self_dequeue(tb_SMACCM_DATA__GIDL_container * tb_server2self);
bool tb_self2server_enqueue(const SMACCM_DATA__GIDL * tb_self2server);
bool tb_can2self_frame_dequeue(SMACCM_DATA__CAN_Frame_i * tb_can2self_frame);
bool tb_can2self_status_dequeue(bool * tb_can2self_status);
bool tb_self2can_enqueue(const SMACCM_DATA__CAN_Frame_i * tb_self2can);

#endif // __tb_AADL_CAN_Framing_types__H
