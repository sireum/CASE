
#include "common/struct_defines.h"
#include "common/conv.h"
#include "VideoStreamState.h"
#include "PayloadState.h"
void lmcp_pp_VideoStreamState(VideoStreamState* s) {
    printf("VideoStreamState{");
    printf("Inherited from PayloadState:\n");
    lmcp_pp_PayloadState(&(s->super));
    printf("activesensor: ");
    printf("%lld",s->activesensor);
    printf("\n");
    printf("}");
}
size_t lmcp_packsize_VideoStreamState (VideoStreamState* i) {
    size_t out = 0;
    out += lmcp_packsize_PayloadState(&(i->super));
    out += sizeof(int64_t);
    return out;
}
size_t lmcp_pack_VideoStreamState_header(uint8_t* buf, VideoStreamState* i) {
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
    outb += lmcp_pack_uint32_t(outb, 50);
    outb += lmcp_pack_uint16_t(outb, 3);
    return 15;
}
void lmcp_free_VideoStreamState(VideoStreamState* out, int out_malloced) {
    if (out == NULL)
        return;
    lmcp_free_PayloadState(&(out->super), 0);
    if (out_malloced == 1) {
        free(out);
    }
}
void lmcp_init_VideoStreamState (VideoStreamState** i) {
    if (i == NULL) return;
    (*i) = calloc(1,sizeof(VideoStreamState));
    ((lmcp_object*)(*i)) -> type = 50;
}
int lmcp_unpack_VideoStreamState(uint8_t** inb, size_t *size_remain, VideoStreamState* outp) {
    if (inb == NULL || *inb == NULL) {
        return -1;
    }
    if (size_remain == NULL || *size_remain == 0) {
        return -1;
    }
    VideoStreamState* out = outp;
    CHECK(lmcp_unpack_PayloadState(inb, size_remain, &(out->super)))
    CHECK(lmcp_unpack_int64_t(inb, size_remain, &(out->activesensor)))
    return 0;
}
size_t lmcp_pack_VideoStreamState(uint8_t* buf, VideoStreamState* i) {
    if (i == NULL) return 0;
    uint8_t* outb = buf;
    outb += lmcp_pack_PayloadState(outb, &(i->super));
    outb += lmcp_pack_int64_t(outb, i->activesensor);
    return (outb - buf);
}
