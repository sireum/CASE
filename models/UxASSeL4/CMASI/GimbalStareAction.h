
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "PayloadAction.h"
#include "Location3D.h"
#define LMCP_GimbalStareAction_SUB "afrl.cmasi.GimbalStareAction"

#define LMCP_GimbalStareAction_TYPENAME "GimbalStareAction"

#define LMCP_GimbalStareAction_TYPE 26

struct GimbalStareAction_struct {
    PayloadAction super;
// Units: None
    Location3D* starepoint;

// Units: milliseconds
    int64_t duration;

};
typedef struct GimbalStareAction_struct GimbalStareAction;
void lmcp_pp_GimbalStareAction(GimbalStareAction* s);
size_t lmcp_packsize_GimbalStareAction (GimbalStareAction* i);
size_t lmcp_pack_GimbalStareAction_header(uint8_t* buf, GimbalStareAction* i);
void lmcp_free_GimbalStareAction(GimbalStareAction* i, int out_malloced);
void lmcp_init_GimbalStareAction (GimbalStareAction** i);
int lmcp_unpack_GimbalStareAction(uint8_t** buf, size_t *size_remain,GimbalStareAction* outp);
size_t lmcp_pack_GimbalStareAction(uint8_t* buf, GimbalStareAction* i);
