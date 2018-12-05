
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "PayloadAction.h"
#define LMCP_GimbalScanAction_SUB "afrl.cmasi.GimbalScanAction"

#define LMCP_GimbalScanAction_TYPENAME "GimbalScanAction"

#define LMCP_GimbalScanAction_TYPE 25

struct GimbalScanAction_struct {
    PayloadAction super;
// Units: degree/second
    uint32_t azimuthslewrate;

// Units: degree/second
    uint32_t elevationslewrate;

// Units: degree
    uint32_t startazimuth;

// Units: degree
    uint32_t endazimuth;

// Units: degree
    uint32_t startelevation;

// Units: degree
    uint32_t endelevation;

    uint32_t cycles;

};
typedef struct GimbalScanAction_struct GimbalScanAction;
void lmcp_pp_GimbalScanAction(GimbalScanAction* s);
size_t lmcp_packsize_GimbalScanAction (GimbalScanAction* i);
size_t lmcp_pack_GimbalScanAction_header(uint8_t* buf, GimbalScanAction* i);
void lmcp_free_GimbalScanAction(GimbalScanAction* i, int out_malloced);
void lmcp_init_GimbalScanAction (GimbalScanAction** i);
int lmcp_unpack_GimbalScanAction(uint8_t** buf, size_t *size_remain,GimbalScanAction* outp);
size_t lmcp_pack_GimbalScanAction(uint8_t* buf, GimbalScanAction* i);
