
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#define LMCP_FlightProfile_SUB "afrl.cmasi.FlightProfile"

#define LMCP_FlightProfile_TYPENAME "FlightProfile"

#define LMCP_FlightProfile_TYPE 12

struct FlightProfile_struct {
    lmcp_object super;
// Units: None
    char* name;
    array_info name_ai;

// Units: meter/sec
    uint32_t airspeed;

// Units: degree
    uint32_t pitchangle;

// Units: meter/sec
    uint32_t verticalspeed;

// Units: degree
    uint32_t maxbankangle;

// Units: %/sec
    uint32_t energyrate;

};
typedef struct FlightProfile_struct FlightProfile;
void lmcp_pp_FlightProfile(FlightProfile* s);
size_t lmcp_packsize_FlightProfile (FlightProfile* i);
size_t lmcp_pack_FlightProfile_header(uint8_t* buf, FlightProfile* i);
void lmcp_free_FlightProfile(FlightProfile* i, int out_malloced);
void lmcp_init_FlightProfile (FlightProfile** i);
int lmcp_unpack_FlightProfile(uint8_t** buf, size_t *size_remain,FlightProfile* outp);
size_t lmcp_pack_FlightProfile(uint8_t* buf, FlightProfile* i);
