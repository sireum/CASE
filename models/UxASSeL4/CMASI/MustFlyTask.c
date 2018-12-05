
#include "common/struct_defines.h"
#include "common/conv.h"
#include "MustFlyTask.h"
#include "Task.h"
#include "Location3D.h"
void lmcp_pp_MustFlyTask(MustFlyTask* s) {
    printf("MustFlyTask{");
    printf("Inherited from Task:\n");
    lmcp_pp_Task(&(s->super));
    printf("position: ");
    lmcp_pp_Location3D((s->position));
    printf("\n");
    printf("usealtitude: ");
    printf("%u",s->usealtitude);
    printf("\n");
    printf("}");
}
size_t lmcp_packsize_MustFlyTask (MustFlyTask* i) {
    size_t out = 0;
    out += lmcp_packsize_Task(&(i->super));
    if (i->position==NULL) {
        out += 1;
    } else {
        out += 15 + lmcp_packsize_Location3D(i->position);
    }
    out += sizeof(uint8_t);
    return out;
}
size_t lmcp_pack_MustFlyTask_header(uint8_t* buf, MustFlyTask* i) {
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
    outb += lmcp_pack_uint32_t(outb, 37);
    outb += lmcp_pack_uint16_t(outb, 3);
    return 15;
}
void lmcp_free_MustFlyTask(MustFlyTask* out, int out_malloced) {
    if (out == NULL)
        return;
    lmcp_free_Task(&(out->super), 0);
    if (out->position != NULL) {
        lmcp_free_Location3D(out->position, 1);
    }
    if (out_malloced == 1) {
        free(out);
    }
}
void lmcp_init_MustFlyTask (MustFlyTask** i) {
    if (i == NULL) return;
    (*i) = calloc(1,sizeof(MustFlyTask));
    ((lmcp_object*)(*i)) -> type = 37;
}
int lmcp_unpack_MustFlyTask(uint8_t** inb, size_t *size_remain, MustFlyTask* outp) {
    if (inb == NULL || *inb == NULL) {
        return -1;
    }
    if (size_remain == NULL || *size_remain == 0) {
        return -1;
    }
    MustFlyTask* out = outp;
    CHECK(lmcp_unpack_Task(inb, size_remain, &(out->super)))
    uint8_t isnull;
    uint32_t objtype;
    uint16_t objseries;
    char seriesname[8];
    CHECK(lmcp_unpack_uint8_t(inb, size_remain, &isnull))
    if (isnull == 0 && inb != NULL) {
        out->position = NULL;
    } else if (inb != NULL) {
        CHECK(lmcp_unpack_8byte(inb, size_remain, seriesname))
        CHECK(lmcp_unpack_uint32_t(inb, size_remain, &objtype))
        CHECK(lmcp_unpack_uint16_t(inb, size_remain, &objseries))
        lmcp_init_Location3D(&(out->position));
        CHECK(lmcp_unpack_Location3D(inb, size_remain, (out->position)))
    }
    CHECK(lmcp_unpack_uint8_t(inb, size_remain, &(out->usealtitude)))
    return 0;
}
size_t lmcp_pack_MustFlyTask(uint8_t* buf, MustFlyTask* i) {
    if (i == NULL) return 0;
    uint8_t* outb = buf;
    outb += lmcp_pack_Task(outb, &(i->super));
    if (i->position==NULL) {
        outb += lmcp_pack_uint8_t(outb, 0);
    } else {
        outb += lmcp_pack_uint8_t(outb, 1);
        memcpy(outb, "CMASI", 5);
        outb += 5;
        for (size_t j = 5; j < 8; j++, outb++)
            *outb = 0;
        outb += lmcp_pack_uint32_t(outb, 3);
        outb += lmcp_pack_uint16_t(outb, 3);
        outb += lmcp_pack_Location3D(outb, i->position);
    }
    outb += lmcp_pack_uint8_t(outb, i->usealtitude);
    return (outb - buf);
}
