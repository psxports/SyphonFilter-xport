#include "game_draft.h"

uint32 sub_800E7F54(uint32 ordering_tag, uint32 packet)
{
    /* Guest bus address zero is readable RAM in this SDK operation */
    uint32 *tag = ordering_tag ? SF_DRAFT_PTR(uint32, ordering_tag)
        : (uint32 *)xport_guest_ptr(0u, 4u);
    uint32 *node = SF_DRAFT_PTR(uint32, packet);
    uint32 result;
    XportMemoryRegion region;
    uint32 offset;
    if (!xport_memory_pointer_identity(node, 4u, &region, &offset) ||
        region != XPORT_MEMORY_DRAM)
    {
        fprintf(stderr, "Unbound native primitive packet address %08X\n", packet);
        abort();
    }
    node[0] = (node[0] & 0xFF000000u) | (tag[0] & 0xFFFFFFu);
    result = (tag[0] & 0xFF000000u) | (packet & 0xFFFFFFu);
    tag[0] = result;
    return result;
}

uint32 sub_800E8D4C(uint8 red, uint8 green, uint8 blue, uint32 ordering_table)
{
    uint32 index, offset, packet;
    uint16 width;
    index = (uint32)r_s16(0x8013C5B4u);
    w_u8(0x8012541Cu + (index << 4), red);
    index = (uint32)r_s16(0x8013C5B4u);
    w_u8(0x8012541Du + (index << 4), green);
    index = (uint32)r_s16(0x8013C5B4u);
    w_u8(0x8012541Eu + (index << 4), blue);
    index = (uint32)r_s16(0x8013C5B4u);
    offset = index << 4;
    w_u16(0x80125420u + offset, r_u16(0x801287D8u + (index << 1)));
    w_u16(0x80125426u + offset, r_u16(0x80130108u));
    w_u16(0x80125422u + offset, r_u16(0x80128874u + (index << 1)));
    width = r_u8(0x8012F0A9u)
        ? (uint16)((sint32)(r_u32(0x8012FFB0u) * 3u) / 2)
        : r_u16(0x8012FFB0u);
    w_u16(0x80125424u + offset, width);
    packet = 0x80125418u + ((uint32)r_s16(0x8013C5B4u) << 4);
    return sub_800E7F54(SF_DRAFT_PTR(uint32, ordering_table)[4], packet);
}
