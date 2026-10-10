#include "game_draft.h"

void sub_800CB554(uint32 object)
{
    FUNCTION_MARKER(0x800CB554u, "SCUS_942.40");
    w_u32(0x8012D734u, object);
}

sint32 sub_80153D88(uint32 record, uint32 output)
{
    uint32 model, saved_mode, index, slot, node, object, colors;
    uint32 matrix[8];
    uint32 resource[4];
    sint32 level;
    FUNCTION_MARKER(0x80153D88u, "INIT.MAIN.OVL");
    sub_80017244((sint32)0x8014C4DCu, (sint32)0x80116AECu);
    sub_800D9110(r_u32(0x80116AECu), (sint32)0x80127DC0u, 0, 30u, record + 8u, 0);
    w_u16(r_u32(record + 8u) + 20u, (uint16)(r_u16(record + 2u) + 0x2000u));
    sf_draft_call(0x800CB554u, 1u, (const uint32[]){r_u32(record + 8u)});
    model = r_u32(r_u32(record + 8u) + 16u);
    saved_mode = r_u32(model + 24u);
    w_u32(model + 24u, 32u);
    sub_80076990(r_u32(r_u32(record + 8u) + 16u));
    node = r_u32(0x80115D84u);
    w_u32(model + 24u, (uint32)(sint32)(sint16)saved_mode);
    object = r_u32(record + 8u);
    w_u32(0x80116B9Cu, record);
    sub_800C818C((sint32)r_u32(node), (sint32)object);
    w_u16(r_u32(record + 8u) + 22u, 0xFFFFu);
    sub_80073CD8((sint32)record, 1, 0, 0);
    sub_800CD608((sint32)0x80135D88u);
    sub_800CD61C((sint32)0x80135D88u, (sint32)r_u32(r_u32(r_u32(record + 8u) + 24u) + 32u));
    sub_800CD624((sint32)0x80135D88u, 200, (sint32)0x20282828u);
    *SF_DRAFT_PTR(uint32, output) = r_u32(r_u32(record + 8u) + 12u);
    sub_8001704C(r_s16(record + 2u), sf_draft_guest_address(matrix));
    matrix[6] += 105u;
    sub_80048884((sint32)record, (sint32)sf_draft_guest_address(matrix), 0, 0, 1);
    sub_8004A240((sint32)record, 30144, 99584, 4096, 0xE66, 0x599);
    sub_800223E0((sint32)record, 4096, 1);
    sf_draft_call(0x80153A50u, 1u, (const uint32[]){record});
    for (index = 0u; index < 2u; ++index)
    {
        slot = 0x801169D8u + 4u * index;
        object = (uint32)sub_800DE414(36u);
        w_u32(slot, object);
        if (!object)
            sub_800DDC34(1, 0, 0x8014C284u, 2738);
        sub_800DB558((sint32)(0x80116A80u + 4u * index));
        sub_80017270((sint32)0x8014C4E8u, sf_draft_guest_address(resource));
        sub_800D8CDC((sint32)resource[0], r_u32(0x80116A80u + 4u * index), 0x04010000u, r_u32(slot) + 8u);
        w_u32(r_u32(r_u32(slot) + 8u) + 24u, 0u);
        w_u8(r_u32(r_u32(slot) + 8u) + 9u, 17u);
        w_u32(r_u32(r_u32(slot) + 8u) + 24u, 0u);
        w_u32(r_u32(slot) + 12u, 0u);
        sub_80048884((sint32)r_u32(slot), (sint32)sf_draft_guest_address(matrix), 0, 0, 0);
        sub_800223E0((sint32)r_u32(slot), 4096, 1);
        sub_8006E0D8((sint32)r_u32(slot), (sint32)0x80000001u, 409, 3993, -1, -1);
        w_u32(r_u32(slot) + 16u, 0u);
        w_u16(r_u32(slot) + 2u, 666u);
        w_u8(r_u32(slot) + 34u, 15u);
        w_u8(r_u32(slot), 1u);
        w_u32(r_u32(slot) + 4u, 19u);
    }
    w_u8(record + 35u, 0u);
    w_u32(record + 24u, r_u32(0x80115CCCu) + 76u * (uint32)(sint32)r_s16(record + 2u) + 56u);
    w_u8(record + 34u, 1u);
    sub_800CD6D8(0x8012F9B8u);
    sub_800CD710((sint32)0x8012F9B8u, (sint32)r_u32(r_u32(r_u32(record + 8u) + 24u)), 1);
    colors = r_u32(0x80116A60u);
    sub_800CD724(0x8012F9B8u, r_u8(colors + 8u), r_u8(colors + 9u), r_u8(colors + 10u));
    sf_draft_call(0x80024278u, 1u, (const uint32[]){0u});
    level = r_s16(0x80130C88u);
    w_u8(0x80127D98u, 1u);
    w_u32(0x80127DA0u, 0u);
    w_u32(0x80127D9Cu, 0u);
    w_u8(0x80116A94u, 0u);
    w_u32(0x80115E80u, 0u);
    w_u8(0x80116B32u, 0u);
    w_u8(0x80116944u, 0u);
    if (level == 3)
        w_u32(0x80116A00u, 1u);
    else if (level == 7 || (uint16)(level - 9) < 2u)
        w_u32(0x80116A00u, 2u);
    else
        w_u32(0x80116A00u, 0u);
    w_u32(0x80116938u, 0u);
    w_u16(0x80116A98u, 0u);
    w_u16(0x80116A9Au, 0xFFFFu);
    w_u8(0x801169C0u, 0u);
    return sub_8006C824();
}
