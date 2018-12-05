
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "PayloadConfiguration.h"
#define LMCP_VideoStreamConfiguration_SUB "afrl.cmasi.VideoStreamConfiguration"

#define LMCP_VideoStreamConfiguration_TYPENAME "VideoStreamConfiguration"

#define LMCP_VideoStreamConfiguration_TYPE 49

struct VideoStreamConfiguration_struct {
    PayloadConfiguration super;
// Units: None
    int64_t* availablesensorlist;
    array_info availablesensorlist_ai;

};
typedef struct VideoStreamConfiguration_struct VideoStreamConfiguration;
void lmcp_pp_VideoStreamConfiguration(VideoStreamConfiguration* s);
size_t lmcp_packsize_VideoStreamConfiguration (VideoStreamConfiguration* i);
size_t lmcp_pack_VideoStreamConfiguration_header(uint8_t* buf, VideoStreamConfiguration* i);
void lmcp_free_VideoStreamConfiguration(VideoStreamConfiguration* i, int out_malloced);
void lmcp_init_VideoStreamConfiguration (VideoStreamConfiguration** i);
int lmcp_unpack_VideoStreamConfiguration(uint8_t** buf, size_t *size_remain,VideoStreamConfiguration* outp);
size_t lmcp_pack_VideoStreamConfiguration(uint8_t* buf, VideoStreamConfiguration* i);
