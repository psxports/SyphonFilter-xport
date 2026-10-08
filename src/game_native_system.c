#include "game_draft.h"
#include <string.h>
#include <stdlib.h>

uint32 sub_800EC8D4(uint32 destination, uint32 source, uint32 size)
{
    /* BIOS A0 service 2A uses the encoded destination as its return value */
    memcpy(sf_draft_guest_ptr(destination), sf_draft_guest_ptr(source), size);
    return destination;
}


void sf_native_cd_poll(void);
void sf_native_continuation_safepoint(void);
void sf_native_continuation_enter(void);
void sf_native_continuation_leave(void);

static PsxVideoTiming sf_video;
static uint64 sf_video_last_us;
static uint64 sf_video_fraction;
static uint32 sf_video_counter;
static uint32 sf_video_status;
static uint32 sf_video_bound;
static uint32 sf_video_polling;

/* The caller supplies reviewed display timing and initial field phase */
sint32 sf_native_video_bind(const PsxCrtcState *initial, uint32 status)
{
    PsxVideoTiming next;
    if (!initial || sf_video_polling)
        return 0;
    memset(&next, 0, sizeof(next));
    next.crtc = *initial;
    next.irq.lines = (initial->scanline < initial->vertical_start ||
        initial->scanline >= initial->vertical_end) ? 1u : 0u;
    if (!psx_video_timing_validate(&next))
        return 0;
    sf_video = next;
    sf_video_last_us = xport_timer_get();
    sf_video_fraction = 0u;
    sf_video_counter = 0u;
    sf_video_status = status;
    sf_video_bound = 1u;
    w_u32(0x8010F378u, 0u);
    w_u32(0x8010E248u, 0u);
    w_u32(0x8010E24Cu, 0u);
    return 1;
}

void sf_native_video_poll(void)
{
    uint64 now, elapsed, ticks;
    if (!sf_video_bound)
    {
        fprintf(stderr, "Unbound native video timing\n");
        abort();
    }
    if (sf_video_polling)
        return;
    sf_native_continuation_enter();
    sf_video_polling = 1u;
    now = xport_timer_get();
    elapsed = now >= sf_video_last_us ? now - sf_video_last_us : 0u;
    sf_video_last_us = now;
    ticks = elapsed / 1000000u * 33868800u;
    sf_video_fraction += elapsed % 1000000u * 33868800u;
    ticks += sf_video_fraction / 1000000u;
    sf_video_fraction %= 1000000u;
    while (ticks)
    {
        PsxCrtcStep step;
        uint32 until, amount;
        if (!psx_crtc_until_vblank(&sf_video.crtc, &until))
            abort();
        amount = ticks < until ? (uint32)ticks : until;
        if (!amount || !psx_video_timing_advance(&sf_video, amount, &step))
            abort();
        ticks -= amount;
        sf_video_counter = (sf_video_counter + step.hblanks) & 0xFFFFu;
        if (step.vblanks)
        {
            if (sf_video_status & 0x400000u)
                sf_video_status ^= 0x80000000u;
            /* Canonical delivery owns audio, pads and the registered native callback */
            psx_vblank_signal();
            if (psx_vblank_failed())
                abort();
        }
    }
    sf_video_polling = 0u;
    sf_native_cd_poll();
    sf_native_continuation_leave();
}

sint32 sf_native_video_timing_sample(uint32 *timer1, uint32 *gpu_status)
{
    if (!sf_video_bound || !timer1 || !gpu_status)
        return 0;
    sf_native_video_poll();
    *timer1 = sf_video_counter;
    *gpu_status = sf_video_status;
    return 1;
}

/* Display updates preserve SDK counters and the running field phase */
sint32 sf_native_video_configure(uint32 horizontal_start, uint32 horizontal_end,
    uint32 vertical_start, uint32 vertical_end, uint32 interlace)
{
    PsxVideoTiming next;
    if (!sf_video_bound || sf_video_polling || interlace > 1u)
        return 0;
    sf_native_video_poll();
    next = sf_video;
    next.crtc.horizontal_start = horizontal_start;
    next.crtc.horizontal_end = horizontal_end;
    next.crtc.vertical_start = vertical_start;
    next.crtc.vertical_end = vertical_end;
    next.irq.lines = (next.crtc.scanline < vertical_start ||
        next.crtc.scanline >= vertical_end) ? 1u : 0u;
    if (!psx_video_timing_validate(&next))
        return 0;
    sf_video = next;
    sf_video_status = (sf_video_status & ~0x400000u) | (interlace << 22);
    return 1;
}

static void sf_native_video_wait(uint32 target)
{
    sf_native_video_poll();
    while ((sint32)r_u32(0x8010F378u) < (sint32)target)
    {
        xport_poll();
        xport_timer_wait_frame(FIELD_RATE);
        sf_native_video_poll();
    }
}

uint32 sub_800E3F54(sint32 mode)
{
    uint32 elapsed, target, saved_status;
    sf_native_video_poll();
    elapsed = (sf_video_counter - r_u32(0x8010E248u)) & 0xFFFFu;
    if (mode < 0)
        return r_u32(0x8010F378u);
    if (mode == 1)
        return elapsed;
    target = r_u32(0x8010E24Cu) + (mode > 0 ? (uint32)mode - 1u : 0u);
    sf_native_video_wait(target);
    saved_status = sf_video_status;
    sf_native_video_wait(r_u32(0x8010F378u) + 1u);
    while ((saved_status & 0x400000u) &&
        !((saved_status ^ sf_video_status) & 0x80000000u))
        sf_native_video_wait(r_u32(0x8010F378u) + 1u);
    w_u32(0x8010E24Cu, r_u32(0x8010F378u));
    w_u32(0x8010E248u, sf_video_counter);
    return elapsed;
}

/* The original sprite sorter links a guest packet and advances its cursor */
static uint32 sf_native_sort_box_packet(uint32 packet, uint32 ordering_table,
    uint16 depth, uint8 words)
{
    sint32 index = (sint32)((uint32)depth - r_u32(ordering_table + 8u));
    uint32 slot;
    if (index < 0)
        sub_800EC914((const char *)sf_draft_guest_ptr(0x80013CCCu));
    slot = r_u32(ordering_table + 4u) + 4u * (uint32)index;
    w_u32(packet, r_u32(slot));
    w_u8(packet + 3u, words);
    w_u32(slot, packet);
    w_u8(slot + 3u, 0u);
    return packet + 4u * words + 4u;
}

void sub_800E81D4(uint32 box, uint32 ordering_table, uint16 depth)
{
    uint32 flags = *SF_DRAFT_PTR(uint32, box);
    uint32 packet;
    if ((sint32)flags < 0)
        return;
    packet = r_u32(0x8012C8A0u);
    w_u32(packet + 4u, ((flags >> 17) & 0x180u) |
        ((flags >> 23) & 0x60u) | 0xE1000200u);
    w_u8(packet + 8u, *SF_DRAFT_PTR(uint8, box + 12u));
    w_u8(packet + 9u, *SF_DRAFT_PTR(uint8, box + 13u));
    w_u8(packet + 11u, (uint8)(((flags >> 29) & 2u) | 0x60u));
    w_u8(packet + 10u, *SF_DRAFT_PTR(uint8, box + 14u));
    w_u16(packet + 12u, (uint16)(*SF_DRAFT_PTR(uint16, box + 4u) + r_u16(0x8012F9F8u)));
    w_u16(packet + 14u, (uint16)(*SF_DRAFT_PTR(uint16, box + 6u) + r_u16(0x8012F9FAu)));
    w_u16(packet + 16u, *SF_DRAFT_PTR(uint16, box + 8u));
    w_u16(packet + 18u, *SF_DRAFT_PTR(uint16, box + 10u));
    w_u32(0x8012C8A0u, sf_native_sort_box_packet(packet, ordering_table, depth, 4u));
}

/* The original signed-angle wrapper uses the PsyQ scalar quarter table */
sint32 sub_800EA3A4(sint32 angle)
{
    return rsin(angle);
}

uint32 sub_800E90D4(uint32 parent, uint32 output)
{
    uint32 first = r_u32(0x80130110u);
    uint32 second = r_u32(0x80130114u);
    uint32 third = r_u32(0x80130118u);
    *SF_DRAFT_PTR(uint32, output + 4u) = first;
    *SF_DRAFT_PTR(uint32, output + 8u) = second;
    *SF_DRAFT_PTR(uint32, output + 12u) = third;
    first = r_u32(0x8013011Cu);
    second = r_u32(0x80130120u);
    third = r_u32(0x80130124u);
    *SF_DRAFT_PTR(uint32, output + 16u) = first;
    *SF_DRAFT_PTR(uint32, output + 20u) = second;
    *SF_DRAFT_PTR(uint32, output + 24u) = third;
    first = r_u32(0x80130128u);
    second = r_u32(0x8013012Cu);
    *SF_DRAFT_PTR(uint32, output + 28u) = first;
    *SF_DRAFT_PTR(uint32, output + 32u) = second;
    *SF_DRAFT_PTR(uint32, output + 72u) = parent;
    *SF_DRAFT_PTR(uint32, output) = 0u;
    if (parent >= 2u)
    {
        first = *SF_DRAFT_PTR(uint32, output + 72u);
        *SF_DRAFT_PTR(uint32, first + 76u) = output;
    }
    return first;
}

static sint32 sf_native_rotation_product(sint32 left, sint32 right)
{
    uint32 value = (uint32)left * (uint32)right;
    return (sint32)((value >> 12) | ((value & 0x80000000u) ? 0xFFF00000u : 0u));
}

static void sf_native_rotation_trig(sint16 angle, sint32 *sine, sint32 *cosine)
{
    uint32 index = angle < 0 ? 0u - (uint32)(sint32)angle : (uint32)angle;
    uint32 packed = r_u32(0x801103F8u + 4u * (index & 0xFFFu));
    *sine = (sint16)packed;
    if (angle < 0) *sine = -*sine;
    *cosine = (sint16)(packed >> 16);
}

uint32 sub_800EBE94(uint32 angles, uint32 output)
{
    sint32 sx, cx, sy, cy, sz, cz, intermediate;
    sint16 z;
    uint8 *matrix = SF_DRAFT_PTR(uint8, output);
    sf_native_rotation_trig(*SF_DRAFT_PTR(sint16, angles), &sx, &cx);
    sf_native_rotation_trig(*SF_DRAFT_PTR(sint16, angles + 2u), &sy, &cy);
    z = *SF_DRAFT_PTR(sint16, angles + 4u);
    xport_store_le16(matrix + 10u, (uint16)(0u - (uint32)sx));
    xport_store_le16(matrix + 4u, (uint16)sf_native_rotation_product(sy, cx));
    xport_store_le16(matrix + 16u, (uint16)sf_native_rotation_product(cy, cx));
    sf_native_rotation_trig(z, &sz, &cz);
    xport_store_le16(matrix + 6u, (uint16)sf_native_rotation_product(sz, cx));
    xport_store_le16(matrix + 8u, (uint16)sf_native_rotation_product(cz, cx));
    intermediate = sf_native_rotation_product(sy, sx);
    xport_store_le16(matrix, (uint16)((uint32)sf_native_rotation_product(cy, cz) +
        (uint32)sf_native_rotation_product(intermediate, sz)));
    xport_store_le16(matrix + 2u, (uint16)((uint32)sf_native_rotation_product(intermediate, cz) -
        (uint32)sf_native_rotation_product(cy, sz)));
    intermediate = sf_native_rotation_product(cy, sx);
    xport_store_le16(matrix + 14u, (uint16)((uint32)sf_native_rotation_product(sy, sz) +
        (uint32)sf_native_rotation_product(intermediate, cz)));
    xport_store_le16(matrix + 12u, (uint16)((uint32)sf_native_rotation_product(intermediate, sz) -
        (uint32)sf_native_rotation_product(sy, cz)));
    return output;
}
