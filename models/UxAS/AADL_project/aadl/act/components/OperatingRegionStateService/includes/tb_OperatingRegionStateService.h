#ifndef __tb_AADL_OperatingRegionStateService_types__H
#define __tb_AADL_OperatingRegionStateService_types__H

#include <tb_uxas_processor_types.h>

bool tb_KeepInZone_in_dequeue(CMASI__KeepInZone_i * tb_KeepInZone_in);
bool tb_RemoveZones_in_dequeue(CMASI__RemoveZones_i * tb_RemoveZones_in);
bool tb_KeepOutZone_in_dequeue(CMASI__KeepOutZone_i * tb_KeepOutZone_in);
bool tb_OperatingRegion_out_enqueue(const CMASI__OperatingRegion_i * tb_OperatingRegion_out);

#endif // __tb_AADL_OperatingRegionStateService_types__H
