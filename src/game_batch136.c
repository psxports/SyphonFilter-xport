#include "game_draft.h"

void sub_8015421C(void)
{
    uint32 loaded, index, descriptor, rectangle;
    sint32 x, y, source_x, source_y;
    FUNCTION_MARKER(0x8015421Cu, "INIT.DEP.OVL");
    sub_80017270((sint32)0x8014C4F4u, sf_draft_guest_address(&loaded));
    if (loaded != 0u)
    {
        sf_draft_call(0x8002234Cu, 1u, &loaded);
        sub_800223BC(1u);
    }
    else
        sub_800223BC(0xFFFFFFFFu);
    x = r_s16(r_u32(0x80116A60u) + 84u);
    if (x != 0)
    {
        y = (sint16)r_u16(r_u32(0x80116A60u) + 86u);
        source_x = (sint16)r_u16(r_u32(0x80116A60u) + 88u);
        source_y = (sint16)r_u16(r_u32(0x80116A60u) + 90u);
        w_u16(0x8012F950u, (uint16)x);
        w_u16(0x8012F95Au, (uint16)(y + 64));
        w_u16(0x8012F962u, (uint16)(y + 64));
        w_u16(0x8012F952u, (uint16)y);
        w_u16(0x8012F954u, 1u);
        w_u16(0x8012F956u, 64u);
        w_u16(0x8012F958u, (uint16)(x + 63));
        w_u16(0x8012F95Cu, 1u);
        w_u16(0x8012F95Eu, 64u);
        w_u16(0x8012F960u, (uint16)x);
        w_u16(0x8012F964u, 1u);
        w_u16(0x8012F966u, 64u);
        w_u16(0x8012F968u, (uint16)x);
        w_u16(0x8012F96Au, (uint16)(y + 128));
        w_u16(0x8012F96Cu, 1u);
        w_u16(0x8012F96Eu, 64u);
        w_u16(0x8012F970u, (uint16)(x + 63));
        w_u16(0x8012F972u, (uint16)(y + 192));
        w_u16(0x8012F974u, 1u);
        w_u16(0x8012F976u, 64u);
        w_u16(0x8012F978u, (uint16)x);
        w_u16(0x8012F97Au, (uint16)(y + 192));
        w_u16(0x8012F97Cu, 1u);
        w_u16(0x8012F97Eu, 64u);
        for (index = 0u; index < 6u; ++index)
        {
            descriptor = 0x80130D40u + 32u * index;
            rectangle = 0x8012F950u + 8u * index;
            sub_800E7FC4(descriptor, rectangle, (uint32)source_x + index, (uint32)source_y);
            w_u32(descriptor - 4u, 1u);
            w_u32(descriptor - 8u, 0u);
        }
        w_u16(0x8012F984u, 63u);
        w_u16(0x8012F986u, 256u);
        w_u16(0x8012F980u, (uint16)(x + 1));
        w_u16(0x8012F982u, (uint16)y);
        sub_800E7FC4(0x80130E00u, 0x8012F980u, (uint32)x, (uint32)y);
        w_u32(0x80130DFCu, 1u);
        w_u32(0x80130DF8u, 0u);
        for (index = 0u; index < 6u; ++index)
        {
            rectangle = 0x8012F988u + 8u * index;
            w_u16(rectangle, (uint16)((uint32)(uint16)source_x + index));
            w_u16(rectangle + 4u, 1u);
            w_u16(rectangle + 6u, 64u);
            w_u16(rectangle + 2u, (uint16)source_y);
        }
        sub_800E7FC4(0x80130E20u, 0x8012F988u, (uint32)(x + 63), (uint32)(y + 64));
        w_u32(0x80130E1Cu, 1u);
        w_u32(0x80130E18u, 0u);
        sub_800E7FC4(0x80130E40u, 0x8012F990u, (uint32)(x + 62), (uint32)(y + 64));
        w_u32(0x80130E3Cu, 1u);
        w_u32(0x80130E38u, 0u);
        sub_800E7FC4(0x80130E60u, 0x8012F998u, (uint32)(x + 63), (uint32)y);
        w_u32(0x80130E5Cu, 1u);
        w_u32(0x80130E58u, 0u);
        sub_800E7FC4(0x80130E80u, 0x8012F9A0u, (uint32)(x + 63), (uint32)(y + 192));
        w_u32(0x80130E7Cu, 1u);
        w_u32(0x80130E78u, 0u);
        sub_800E7FC4(0x80130EA0u, 0x8012F9A8u, (uint32)(x + 62), (uint32)(y + 192));
        w_u32(0x80130E9Cu, 1u);
        w_u32(0x80130E98u, 0u);
        sub_800E7FC4(0x80130EC0u, 0x8012F9B0u, (uint32)(x + 63), (uint32)(y + 128));
        w_u32(0x80130EBCu, 1u);
        w_u32(0x80130EB8u, 0u);
    }
    sub_800223CC(0u);
}

void sub_800223BC(uint32 mode)
{
    FUNCTION_MARKER(0x800223BCu, "SCUS_942.40.DEP");
    w_u8(0x80119234u, (uint8)mode);
}

void sub_800223CC(uint32 mode)
{
    FUNCTION_MARKER(0x800223CCu, "SCUS_942.40.DEP");
    w_u32(0x80119230u, mode & 255u);
}

uint32 sub_800E7FC4(uint32 packet, uint32 rectangle, uint32 x, uint32 y)
{
    FUNCTION_MARKER(0x800E7FC4u, "SCUS_942.40.DEP");
    return SetDrawMovePSX(packet, rectangle, x, y);
}
