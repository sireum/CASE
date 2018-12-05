
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "SearchTask.h"
#include "AbstractGeometry.h"
#include "Wedge.h"
#define LMCP_AreaSearchTask_SUB "afrl.cmasi.AreaSearchTask"

#define LMCP_AreaSearchTask_TYPENAME "AreaSearchTask"

#define LMCP_AreaSearchTask_TYPE 17

struct AreaSearchTask_struct {
    SearchTask super;
    AbstractGeometry* searcharea;

    Wedge** viewanglelist;
    array_info viewanglelist_ai;

};
typedef struct AreaSearchTask_struct AreaSearchTask;
void lmcp_pp_AreaSearchTask(AreaSearchTask* s);
size_t lmcp_packsize_AreaSearchTask (AreaSearchTask* i);
size_t lmcp_pack_AreaSearchTask_header(uint8_t* buf, AreaSearchTask* i);
void lmcp_free_AreaSearchTask(AreaSearchTask* i, int out_malloced);
void lmcp_init_AreaSearchTask (AreaSearchTask** i);
int lmcp_unpack_AreaSearchTask(uint8_t** buf, size_t *size_remain,AreaSearchTask* outp);
size_t lmcp_pack_AreaSearchTask(uint8_t* buf, AreaSearchTask* i);
