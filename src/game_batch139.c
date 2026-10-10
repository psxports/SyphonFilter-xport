#include "game_draft.h"

uint32 sub_80150E9C(uint32 record, sint32 kind)
{
    uint32 object, state;
    uint8 flags, secondary;
    sint16 index;
    FUNCTION_MARKER(0x80150E9Cu, "INIT.MAIN.OVL");
    index = r_s16(record + 2u);
    w_u8(record + 34u, 0u);
    sub_8014C94C(index, 0u);
    flags = r_u8(record);
    secondary = r_u8(record + 1u);
    w_u8(record, flags & 0x9Fu);
    w_u8(record + 1u, secondary & 0x7Fu);
    if (kind == 46)
    {
        sub_80032784((sint32)record, (sint32)0x8012C8B0u, 0, 0u);
        w_u8(r_u32(record + 8u) + 9u, 64u);
        w_u8(record + 32u, r_u8(record + 32u) | 0x80u);
    }
    else
    {
        object = r_u32(record + 8u);
        w_u8(object + 8u, r_u8(object + 8u) | 8u);
        state = r_u32(record + 24u);
        w_u16(state + 6u, 0x7FFFu);
        w_u16(state + 8u, 0x7FFFu);
    }
    sub_80016834((sint32)0x8002C378u, 1, (sint32)record);
    return (uint32)sub_8014EB54(record);
}

uint32 sub_8014C94C(sint16 index, uint32 animation)
{
    uint32 level_offset, definition_offset, definition, name, record;
    uint32 resource, alternate, object, loaded_animation, payload, length, result;
    uint32 vector[4], matrix[8];
    uint8 extension;
    FUNCTION_MARKER(0x8014C94Cu, "INIT.MAIN.OVL");
    level_offset = 76u * (uint32)(sint32)index;
    definition_offset = 20u * r_u32(r_u32(0x80115CCCu) + level_offset);
    definition = r_u32(0x80116B98u) + definition_offset;
    name = r_u32(definition + 4u);
    result = r_u8(name);
    record = r_u32(r_u32(0x80115CCCu) + level_offset + 52u);
    if (result == 0u)
    {
        w_u32(record + 8u, 0u);
        return result;
    }
    resource = r_u32(definition + 8u);
    alternate = r_u32(definition + 16u);
    if (resource != 0u)
    {
        length = (uint32)sub_800EC8A4(name);
        extension = r_u8(r_u32(definition + 4u) + length - 3u);
        if (extension == 'H')
        {
            if (animation != 0u)
            {
                sub_800D9110(resource, (sint32)animation, 0, 1u, sf_draft_guest_address(&object), 5);
            }
            else
            {
                definition = r_u32(0x80116B98u) + definition_offset;
                length = (uint32)sub_800EC8A4(r_u32(definition + 4u));
                w_u8(r_u32(definition + 4u) + length - 4u, 0u);
                definition = r_u32(0x80116B98u) + definition_offset;
                sub_800EC874(r_u32(definition + 4u), 0x8014C234u);
                definition = r_u32(0x80116B98u) + definition_offset;
                sub_800DFD64((sint32)r_u32(0x801169C8u), (sint32)r_u32(definition + 4u), sf_draft_guest_address(&loaded_animation));
                sub_800D9110(resource, (sint32)loaded_animation, 0, 0u, sf_draft_guest_address(&object), 0);
                w_u8(object + 8u, r_u8(object + 8u) | 0x20u);
            }
        }
        else if (extension == 'E')
        {
            sub_800D8CDC(resource, (sint32)(r_u32(0x80115CCCu) + level_offset + 4u), 0x01100000, (sint32)sf_draft_guest_address(&object));
            sf_draft_call(0x80082234u, 2u, (uint32[]){resource, object});
            if (alternate != 0u)
                sf_draft_call(0x80082234u, 2u, (uint32[]){alternate, object});
        }
        else
        {
            uint32 level = r_u32(0x80115CCCu) + level_offset;
            w_u32(level + 36u, 0u);
            sub_800D8CDC(resource, (sint32)(level + 4u), 0x04000000, (sint32)sf_draft_guest_address(&object));
        }
        if (object != 0u)
        {
            payload = r_u32(object + 12u);
            w_u16(object + 20u, (uint16)((uint32)(sint32)index + 0x2000u));
            sub_800170D8((sint32)index, sf_draft_guest_address(vector));
            sub_800DC8AC(payload, 0, (sint32)sf_draft_guest_address(vector));
            sub_8001704C((sint32)index, sf_draft_guest_address(matrix));
            sub_800DC0B8((sint32)payload, 0u, sf_draft_guest_address(matrix));
            sub_800C777C(payload);
        }
    }
    else
    {
        object = 0u;
    }
    w_u32(record + 8u, object);
    if (object != 0u && alternate != 0u)
    {
        w_u32(r_u32(object + 16u) + 36u, alternate);
        object = r_u32(record + 8u);
        w_u8(object + 10u, r_u8(object + 10u) | 8u);
    }
    result = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)r_s16(record + 2u) + 56u;
    w_u32(record + 24u, result);
    return result;
}

uint32 sub_800170D8(sint32 index, uint32 output)
{
    uint32 row;
    uint32 *vector;
    FUNCTION_MARKER(0x800170D8u, "SCUS_942.40");
    if (index >= r_s32(0x80116A5Cu) || index < 0)
        return 0u;
    row = r_u32(0x80115CCCu) + 76u * (uint32)index;
    vector = SF_DRAFT_PTR(uint32, output);
    vector[0] = r_u32(row + 24u);
    vector[1] = r_u32(row + 28u);
    vector[2] = r_u32(row + 32u);
    return 1u;
}

sint32 sub_8014EB54(uint32 record)
{
    sint16 owner, target;
    FUNCTION_MARKER(0x8014EB54u, "INIT.MAIN.OVL");
    w_u32(record + 4u, 0xFFFFFFFFu);
    owner = (sint16)sub_8002A528(r_s16(record + 2u), 119);
    if (r_s16(record + 2u) == owner || r_u8(record + 34u) == 2u)
        return 2;
    target = (sint16)sub_8002A528((sint32)owner, 34);
    if (target != owner)
        w_u32(record + 4u, (uint32)(sint32)target);
    return (sint32)target;
}

uint32 sub_8015389C(uint32 record, uint8 mode)
{
    uint32 owner, resource = 0u, state;
    FUNCTION_MARKER(0x8015389Cu, "INIT.MAIN.OVL");
    if (r_u32(record + 12u) != 0u)
        return 1u;
    if ((uint8)sf_draft_call(0x80017140u, 3u, (uint32[]){(uint32)(sint32)r_s16(record + 2u), sf_draft_guest_address(&owner), sf_draft_guest_address(&resource)}) != 1u)
        sub_800DDC34(1, 0, 0x8014C284u, 0x963);
    if (resource == 0u)
        return 1u;
    if (owner == 0u || (mode != 0u && r_s32(resource) < 2))
        return 1u;
    w_u32(resource + 4u, resource + 8u);
    if ((uint8)sub_80016A64((sint32)(record + 12u)) == 0u)
        sub_800DDC34(1, 0, 0x8014C284u, 0x983);
    state = r_u32(record + 12u);
    w_u32(state + 356u, 0u);
    w_u32(state + 360u, 0u);
    w_u32(state + 384u, owner);
    return 1u;
}
