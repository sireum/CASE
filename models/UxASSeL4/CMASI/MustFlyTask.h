
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "Task.h"
#include "Location3D.h"
#define LMCP_MustFlyTask_SUB "afrl.cmasi.MustFlyTask"

#define LMCP_MustFlyTask_TYPENAME "MustFlyTask"

#define LMCP_MustFlyTask_TYPE 37

struct MustFlyTask_struct {
    Task super;
    Location3D* position;

    uint8_t usealtitude;

};
typedef struct MustFlyTask_struct MustFlyTask;
void lmcp_pp_MustFlyTask(MustFlyTask* s);
size_t lmcp_packsize_MustFlyTask (MustFlyTask* i);
size_t lmcp_pack_MustFlyTask_header(uint8_t* buf, MustFlyTask* i);
void lmcp_free_MustFlyTask(MustFlyTask* i, int out_malloced);
void lmcp_init_MustFlyTask (MustFlyTask** i);
int lmcp_unpack_MustFlyTask(uint8_t** buf, size_t *size_remain,MustFlyTask* outp);
size_t lmcp_pack_MustFlyTask(uint8_t* buf, MustFlyTask* i);
