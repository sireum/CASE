#ifndef __tb_AADL_Filter_types__H
#define __tb_AADL_Filter_types__H

#include "../../../includes/tb_PROC_HW_types.h"

bool tb_filter_in_dequeue(SW__Command_Impl * tb_filter_in);

bool tb_filter_out_enqueue(const SW__Command_Impl * tb_filter_out);

#endif // __tb_AADL_Filter_types__H
