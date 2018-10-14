#ifndef __tb_AADL_CAN_Driver_types__H
#define __tb_AADL_CAN_Driver_types__H

#include "../../../includes/tb_smaccmpilot_tk1_types.h"

bool tb_framing2self_dequeue(SMACCM_DATA__CAN_Frame_i * tb_framing2self);
bool tb_self2framing_status_enqueue(const bool * tb_self2framing_status);
bool tb_self2framing_frame_enqueue(const SMACCM_DATA__CAN_Frame_i * tb_self2framing_frame);
bool tb_CAN_Driver_read_CAN1Int(void);
bool tb_CAN_Driver_write_CANIntAck(void);

#endif // __tb_AADL_CAN_Driver_types__H
