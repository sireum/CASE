
#include "common/struct_defines.h"
#include "common/conv.h"
#include "WaypointTransfer.h"
#include "Waypoint.h"
#include "enums.h"
void lmcp_pp_WaypointTransfer(WaypointTransfer* s) {
    printf("WaypointTransfer{");
    printf("entityid: ");
    printf("%lld",s->entityid);
    printf("\n");
    printf("waypoints: ");
    printf("[");
    for (uint32_t index = 0; index < s->waypoints_ai.length; index++) {
        lmcp_pp_Waypoint((s->waypoints[index]));
        printf(",");
    }
    printf("\n");
    printf("transfermode: ");
    printf("%i", s->transfermode);
    printf("\n");
    printf("}");
}
size_t lmcp_packsize_WaypointTransfer (WaypointTransfer* i) {
    size_t out = 0;
    out += sizeof(int64_t);
    out += 2;
    for (uint32_t index = 0; index < i->waypoints_ai.length; index++) {
        out += 15 + lmcp_packsize_Waypoint(i->waypoints[index]);
    }
    out += 4;
    return out;
}
size_t lmcp_pack_WaypointTransfer_header(uint8_t* buf, WaypointTransfer* i) {
    uint8_t* outb = buf;
    if (i == NULL) {
        lmcp_pack_uint8_t(outb, 0);
        return 1;
    }
    outb += lmcp_pack_uint8_t(outb, 1);
    memcpy(outb, "CMASI", 5);
    outb += 5;
    for (size_t j = 5; j < 8; j++, outb++)
        *outb = 0;
    outb += lmcp_pack_uint32_t(outb, 59);
    outb += lmcp_pack_uint16_t(outb, 3);
    return 15;
}
void lmcp_free_WaypointTransfer(WaypointTransfer* out, int out_malloced) {
    if (out == NULL)
        return;
    if (out->waypoints != NULL) {
        for (uint32_t index = 0; index < out->waypoints_ai.length; index++) {
            if (out->waypoints[index] != NULL) {
                lmcp_free_Waypoint(out->waypoints[index], 1);
            }
        }
        free(out->waypoints);
    }
    if (out_malloced == 1) {
        free(out);
    }
}
void lmcp_init_WaypointTransfer (WaypointTransfer** i) {
    if (i == NULL) return;
    (*i) = calloc(1,sizeof(WaypointTransfer));
    ((lmcp_object*)(*i)) -> type = 59;
}
int lmcp_unpack_WaypointTransfer(uint8_t** inb, size_t *size_remain, WaypointTransfer* outp) {
    if (inb == NULL || *inb == NULL) {
        return -1;
    }
    if (size_remain == NULL || *size_remain == 0) {
        return -1;
    }
    WaypointTransfer* out = outp;
    uint32_t tmp;
    uint16_t tmp16;
    CHECK(lmcp_unpack_int64_t(inb, size_remain, &(out->entityid)))
    CHECK(lmcp_unpack_uint16_t(inb, size_remain, &tmp16))
    tmp = tmp16;
    (out)->waypoints = malloc(sizeof(Waypoint*) * tmp);
    if (out->waypoints==0) {
        return -1;
    }
    out->waypoints_ai.length = tmp;
    for (uint32_t index = 0; index < out->waypoints_ai.length; index++) {
        uint8_t isnull;
        uint32_t objtype;
        uint16_t objseries;
        char seriesname[8];
        CHECK(lmcp_unpack_uint8_t(inb, size_remain, &isnull))
        if (isnull == 0 && inb != NULL) {
            out->waypoints[index] = NULL;
        } else if (inb != NULL) {
            CHECK(lmcp_unpack_8byte(inb, size_remain, seriesname))
            CHECK(lmcp_unpack_uint32_t(inb, size_remain, &objtype))
            CHECK(lmcp_unpack_uint16_t(inb, size_remain, &objseries))
            lmcp_init_Waypoint(&(out->waypoints[index]));
            CHECK(lmcp_unpack_Waypoint(inb, size_remain, (out->waypoints[index])))
        }
    }
    CHECK(lmcp_unpack_int32_t(inb, size_remain, (int*) &(out->transfermode)))
    return 0;
}
size_t lmcp_pack_WaypointTransfer(uint8_t* buf, WaypointTransfer* i) {
    if (i == NULL) return 0;
    uint8_t* outb = buf;
    outb += lmcp_pack_int64_t(outb, i->entityid);
    outb += lmcp_pack_uint16_t(outb, i->waypoints_ai.length);
    for (uint32_t index = 0; index < i->waypoints_ai.length; index++) {
        if (i->waypoints[index]==NULL) {
            outb += lmcp_pack_uint8_t(outb, 0);
        } else {
            outb += lmcp_pack_uint8_t(outb, 1);
            memcpy(outb, "CMASI", 5);
            outb += 5;
            for (size_t j = 5; j < 8; j++, outb++)
                *outb = 0;
            outb += lmcp_pack_uint32_t(outb, 35);
            outb += lmcp_pack_uint16_t(outb, 3);
            outb += lmcp_pack_Waypoint(outb, i->waypoints[index]);
        }
    }
    outb += lmcp_pack_int32_t(outb, (int) i->transfermode);
    return (outb - buf);
}
