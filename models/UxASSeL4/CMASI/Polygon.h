
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "AbstractGeometry.h"
#include "Location3D.h"
#define LMCP_Polygon_SUB "afrl.cmasi.Polygon"

#define LMCP_Polygon_TYPENAME "Polygon"

#define LMCP_Polygon_TYPE 42

struct Polygon_struct {
    AbstractGeometry super;
    Location3D** boundarypoints;
    array_info boundarypoints_ai;

};
typedef struct Polygon_struct Polygon;
void lmcp_pp_Polygon(Polygon* s);
size_t lmcp_packsize_Polygon (Polygon* i);
size_t lmcp_pack_Polygon_header(uint8_t* buf, Polygon* i);
void lmcp_free_Polygon(Polygon* i, int out_malloced);
void lmcp_init_Polygon (Polygon** i);
int lmcp_unpack_Polygon(uint8_t** buf, size_t *size_remain,Polygon* outp);
size_t lmcp_pack_Polygon(uint8_t* buf, Polygon* i);
