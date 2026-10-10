#include "game_draft.h"

uint32 sub_8002B2C0(uint32 event_address)
{
    uint32 owner, kind, entity;
    FUNCTION_MARKER(0x8002B2C0u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    kind = sf_character_event_read(event_address, 2u);
    entity = r_u32(r_u32(0x80115CCCu) + 76u * owner + 52u);
    if (kind == 5u)
    {
        sub_80073DF8((sint32)entity);
        return (uint32)sub_80073DD8((sint32)entity);
    }
    if (kind >= 6u)
    {
        if (kind != 6u)
            return 6u;
        sub_80073CD8((sint32)entity, 1, 0, 0);
        return (uint32)sub_80073D88((sint32)entity, 1, 0, 1, 0);
    }
    if (kind == 2u)
        return sf_draft_call(0x8014F6D0u, 1u, &entity);
    return 2u;
}

sint32 sub_80022994(sint32 entity)
{
    uint32 handle, path = 0u;
    FUNCTION_MARKER(0x80022994u, "SCUS_942.40");
    if ((uint8)sub_80017140(r_s16((uint32)entity + 2u), sf_draft_guest_address(&handle), sf_draft_guest_address(&path)) != 1u)
        sub_800DDC34(1, 0, 0x8001026Cu, 307);
    return (sint32)r_u32(path);
}

sint32 sub_800229F0(sint32 entity, sint32 index, uint32 output)
{
    uint32 handle, path = 0u;
    uint32 offset = (uint32)index << 3;
    sint32 value;
    FUNCTION_MARKER(0x800229F0u, "SCUS_942.40");
    if ((uint8)sub_80017140(r_s16((uint32)entity + 2u), sf_draft_guest_address(&handle), sf_draft_guest_address(&path)) != 1u)
        sub_800DDC34(1, 0, 0x8001026Cu, 329);
    value = r_s16(r_u32(path + 4u) + offset);
    sf_character_event_write(output, (uint32)value, 4u);
    value = r_s16(r_u32(path + 4u) + offset + 2u);
    sf_character_event_write(output + 4u, (uint32)value, 4u);
    value = r_s16(r_u32(path + 4u) + offset + 4u);
    sf_character_event_write(output + 8u, (uint32)value, 4u);
    return value;
}

sint32 sub_80022AA8(sint32 entity, sint32 index)
{
    sint32 position[3];
    FUNCTION_MARKER(0x80022AA8u, "SCUS_942.40");
    sub_800229F0(entity, index, sf_draft_guest_address(position));
    return sub_800DC8AC(r_u32(r_u32((uint32)entity + 8u) + 12u), 0, (sint32)sf_draft_guest_address(position));
}

void sub_8014F444(uint32 entity, sint32 type)
{
    uint32 model, node, flags, value, high;
    sint16 identity;
    FUNCTION_MARKER(0x8014F444u, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 13u);
    sub_8014C94C(identity, 0u);
    w_u8(r_u32(entity + 8u) + 9u, 64u);
    model = r_u32(entity + 8u);
    w_u8(model + 11u, r_u8(model + 11u) | 1u);
    node = r_u32(r_u32(entity + 8u) + 16u);
    w_u32(node + 20u, 166u);
    sub_8015389C(entity, 1u);
    if (r_u32(entity + 12u) != 0u)
    {
        w_u8(entity + 1u, r_u8(entity + 1u) | 0x80u);
        if (type == 64)
        {
            value = sf_draft_call(0x80022994u, 1u, &entity);
            sf_draft_call(0x80022AA8u, 2u, (uint32[]){entity, value - 1u});
            w_u32(r_u32(entity + 12u) + 356u, 0u);
            w_u32(r_u32(entity + 12u) + 364u, 1u);
        }
        else
            sf_draft_call(0x80022AA8u, 2u, (uint32[]){entity, 0u});
        high = r_u8(entity + 1u) & 0x80u;
        w_u8(entity + 1u, high);
        if (high != 0u)
            value = (sf_draft_call(0x80022994u, 1u, &entity) & 0x7Fu) | high;
        else
            value = high | 1u;
    }
    else
        value = r_u8(entity + 1u) & 0x7Fu;
    w_u8(entity + 1u, value);
    flags = (r_u8(entity) & 0xF5u) | 1u;
    value = flags & 0x7Fu;
    w_u8(entity, value);
    if (type == 12)
        w_u8(entity, value | 16u);
    else
    {
        w_u8(entity, flags & 0x6Fu);
        if (type == 13)
            w_u8(entity, flags & 0x6Bu);
    }
    flags = r_u8(entity + 35u);
    w_u32(entity + 4u, 0u);
    w_u8(entity + 35u, flags | 4u);
}

void sub_80150C64(uint32 entity, sint32 type)
{
    uint32 model, flags, secondary_flags, node;
    FUNCTION_MARKER(0x80150C64u, "INIT.OVL");
    sub_8014C94C(r_s16(entity + 2u), 0u);
    w_u8(entity + 34u, 3u);
    sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
    flags = r_u8(entity);
    w_u32(entity + 16u, 0u);
    w_u8(entity, flags & 0x37u);
    sub_8014E748(entity, 16, 16, 16);
    switch (type)
    {
        case 103:
            model = r_u32(entity + 8u);
            w_u8(model + 8u, r_u8(model + 8u) | 8u);
            return;
        case 61:
        case 102:
            sub_80048884((sint32)entity, 0, 0, 0, 0);
            sub_800223E0((sint32)entity, 0x3000, 1);
            sub_8006E0D8((sint32)entity, (sint32)r_u32(r_u32(entity + 12u) + 4u), 0x666, 0x1000, 0x800, 0);
            break;
        case 44:
            secondary_flags = r_u8(entity + 1u);
            w_u8(entity + 33u, 0x8Cu);
            flags = r_u8(entity);
            model = r_u32(entity + 8u);
            w_u32(entity + 4u, 0u);
            w_u8(entity, flags & 0xDDu);
            w_u8(entity + 1u, secondary_flags & 0x80u);
            w_u32(model + 24u, 0u);
            w_u8(r_u32(entity + 8u) + 9u, 24u);
            model = r_u32(entity + 8u);
            w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
            node = r_u32(r_u32(entity + 8u) + 16u);
            w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
            sub_80048884((sint32)entity, 0, 0, 0, 0);
            sub_800223E0((sint32)entity, 0x10000, 1);
            sub_8006E0D8((sint32)entity, (sint32)r_u32(r_u32(entity + 12u) + 4u), 0x666, 0x800, -1, 0xC00);
            w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
            return;
        case 56:
            model = r_u32(entity + 8u);
            w_u32(entity + 4u, 0u);
            w_u8(entity + 33u, 0x8Cu);
            w_u8(model + 8u, r_u8(model + 8u) | 8u);
            w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
            return;
        case 68:
            w_u8(r_u32(entity + 8u) + 9u, 64u);
            w_u8(entity + 32u, r_u8(entity + 32u) | 0x20u);
            return;
        case 66:
            w_u8(r_u32(entity + 8u) + 9u, 64u);
            return;
        default:
            break;
    }
    w_u8(r_u32(entity + 8u) + 9u, 64u);
    w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
}

sint32 sub_801469E8(void)
{
    uint32 count, format, completed, unit, detail, current_count, current_completed;
    FUNCTION_MARKER(0x801469E8u, "PARK.OVL");
    count = r_u8(0x80149E04u);
    format = r_u32(0x80148BC8u);
    completed = r_u8(0x80149E08u);
    unit = r_u32(0x80116318u);
    detail = r_u32(completed == count - 1u ? 0x80148BD0u : 0x80148BCCu);
    current_completed = r_u8(0x80149E08u);
    current_count = r_u8(0x80149E04u);
    return sub_8008BAB8(0x80149DA0u, format, unit, detail, current_completed, current_count);
}

void sub_8014F6D0(uint32 entity)
{
    sint16 identity, type;
    uint32 row, model;
    FUNCTION_MARKER(0x8014F6D0u, "INIT.OVL");
    identity = r_s16(entity + 2u);
    if (identity == 666)
        type = 666;
    else
    {
        row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)identity;
        row = r_u32(0x80116B98u) + 20u * r_u32(row);
        type = r_s16(row);
    }
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 0u);
    sub_8014C94C(identity, 0u);
    if (type == 17)
    {
        if (r_s16(0x80130C88u) != 8)
        {
            model = r_u32(entity + 8u);
            w_u8(model + 11u, r_u8(model + 11u) | 1u);
        }
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 64u);
        w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
    }
    else if (type == 25)
    {
        model = r_u32(entity + 8u);
        w_u32(model + 24u, 0u);
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 24u);
        w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
    }
    else if (type == 78)
    {
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 64u);
        w_u8(entity + 32u, r_u8(entity + 32u) | 0x20u);
    }
}

void sub_8014F5CC(uint32 entity, sint32 type)
{
    uint32 model, flags, secondary_flags;
    sint16 identity;
    FUNCTION_MARKER(0x8014F5CCu, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 0u);
    sub_8014C94C(identity, 0u);
    flags = r_u8(entity);
    model = r_u32(entity + 8u);
    w_u8(entity, flags & 0x7Fu);
    w_u8(model + 11u, r_u8(model + 11u) | 0x80u);
    if (type == 48 || type == 37 || type == 39 || type == 90)
    {
        model = r_u32(entity + 8u);
        w_u8(model + 11u, r_u8(model + 11u) | 0x10u);
        model = r_u32(entity + 8u);
        w_u8(model + 8u, r_u8(model + 8u) | 8u);
        model = r_u32(entity + 8u);
        w_u8(model + 11u, r_u8(model + 11u) | 8u);
    }
    secondary_flags = r_u8(entity + 1u);
    flags = r_u8(entity);
    w_u8(entity, flags & 0xBFu);
    w_u8(entity + 1u, secondary_flags & 0x80u);
    sub_8015389C(entity, 1u);
}

void sub_8014FA84(uint32 entity, sint32 type)
{
    uint32 model, node;
    sint16 identity;
    FUNCTION_MARKER(0x8014FA84u, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 0u);
    sub_8014C94C(identity, 0u);
    sf_draft_call(0x8014EB54u, 1u, &entity);
    sf_draft_call(0x8015389Cu, 2u, (uint32[]){entity, 1u});
    w_u8(entity, r_u8(entity) & 0x87u);
    switch (type)
    {
        case 87:
            sf_draft_call(0x8014E8C0u, 2u, (uint32[]){entity, 48u});
            w_u32(r_u32(entity + 8u) + 24u, 0u);
            w_u8(r_u32(entity + 8u) + 9u, 16u);
            node = r_u32(entity + 24u);
            w_u16(node + 6u, 0x7FFFu);
            w_u16(node + 8u, 0x7FFFu);
            return;
        case 88:
            model = r_u32(entity + 8u);
            w_u8(model + 8u, r_u8(model + 8u) | 8u);
            sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
            return;
        case 100:
            sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
            if (r_u32(entity + 12u) == 0u)
            {
                model = r_u32(entity + 8u);
                w_u8(model + 8u, r_u8(model + 8u) | 8u);
                return;
            }
            model = r_u32(entity + 8u);
            w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
            node = r_u32(r_u32(entity + 8u) + 16u);
            w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
            w_u8(entity, r_u8(entity) | 0x10u);
            return;
        case 108:
            sf_draft_call(0x8014E804u, 4u, (uint32[]){entity, 386u, 3783u, 389u});
            sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
            model = r_u32(entity + 8u);
            w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
            node = r_u32(r_u32(entity + 8u) + 16u);
            w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
            model = r_u32(entity + 8u);
            w_u16(model + 20u, r_u16(model + 20u) | 0x1000u);
            return;
        default:
            w_u8(r_u32(entity + 8u) + 9u, 64u);
            node = r_u32(entity + 24u);
            w_u16(node + 6u, 0x7FFFu);
            w_u16(node + 8u, 0x7FFFu);
            return;
    }
}

void sub_8014F818(uint32 entity, sint32 type)
{
    uint32 flags, secondary_flags, model, node;
    FUNCTION_MARKER(0x8014F818u, "INIT.OVL");
    sub_8014C94C(r_s16(entity + 2u), 0u);
    w_u8(entity + 34u, 10u);
    flags = r_u8(entity);
    secondary_flags = r_u8(entity + 1u);
    w_u32(entity + 16u, 0u);
    w_u8(entity, flags & 0x7Du);
    w_u8(entity + 1u, secondary_flags & 0x7Fu);
    if (type == 32 || type == 55 || type == 45)
    {
        sub_80076990(r_u32(r_u32(entity + 8u) + 16u));
        node = r_u32(r_u32(entity + 8u) + 16u);
        w_u16(node + 58u, 384u);
        model = r_u32(entity + 8u);
        w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
        node = r_u32(r_u32(entity + 8u) + 16u);
        w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
        model = r_u32(entity + 8u);
        w_u8(model + 11u, r_u8(model + 11u) | 8u);
    }
    else if (type == 86)
    {
        model = r_u32(entity + 8u);
        w_u8(entity + 33u, 0xA0u);
        w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
        node = r_u32(r_u32(entity + 8u) + 16u);
        w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
    }
    if (type == 77 || type == 112)
    {
        flags = r_u8(entity);
        model = r_u32(entity + 8u);
        w_u8(entity, flags | 1u);
        w_u32(model + 24u, 0u);
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 23u);
        w_u8(entity + 32u, r_u8(entity + 32u) | 0x20u);
    }
    else
    {
        flags = r_u8(entity);
        w_u8(entity, (uint32)type - 81u < 2u ? flags | 1u : flags & 0xFEu);
        w_u32(r_u32(entity + 8u) + 24u, 0u);
        w_u8(r_u32(entity + 8u) + 9u, 21u);
    }
    flags = r_u8(r_u32(entity + 8u) + 10u) & 8u;
    secondary_flags = r_u8(entity + 32u);
    w_u8(entity + 32u, flags != 0u ? secondary_flags | 0x80u : secondary_flags & 0x7Fu);
    if (type != 86)
        sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
    else
    {
        if (r_s16(0x80130C88u) != 6)
            w_u8(entity + 32u, r_u8(entity + 32u) | 0x80u);
        node = r_u32(entity + 24u);
        w_u16(node + 6u, 0x7FFFu);
        w_u16(node + 8u, 0x7FFFu);
    }
    sub_8014E748(entity, 32, 16, 32);
}

static uint32 sf_entity_event_read(uint32 address, uint32 width)
{
    uint32 value = 0u;
    memcpy(&value, sf_draft_guest_ptr(address), width);
    return value;
}

uint32 sf_character_event_read(uint32 address, uint32 width)
{
    XportMemoryRegion region;
    uint32 offset, value = 0u;
    void *pointer = sf_draft_guest_ptr(address);
    if (pointer != NULL && !xport_memory_pointer_identity(pointer, width, &region, &offset))
        memcpy(&value, pointer, width);
    else
        value = width == 1u ? r_u8(address) : width == 2u ? r_u16(address) : r_u32(address);
    return value;
}

void sf_character_event_write(uint32 address, uint32 value, uint32 width)
{
    XportMemoryRegion region;
    uint32 offset;
    void *pointer = sf_draft_guest_ptr(address);
    if (pointer != NULL && !xport_memory_pointer_identity(pointer, width, &region, &offset))
        memcpy(pointer, &value, width);
    else if (width == 1u)
        w_u8(address, (uint8)value);
    else if (width == 2u)
        w_u16(address, (uint16)value);
    else
        w_u32(address, value);
}

void sub_8008FD64(uint32 event_address)
{
    uint32 owner, table, entity, other, flags, state, parameter, position[3], other_position[3], output, value, kind;
    sint32 identity, type;
    FUNCTION_MARKER(0x8008FD64u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = identity == 666 ? 666 : r_s16(r_u32(0x80116B98u) + 20u * r_u32(table + 76u * (uint32)identity));
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F444u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            sf_draft_call(0x80073DD8u, 1u, &entity);
            return;
        case 6:
            sf_draft_call(0x80073D88u, 5u, (uint32[]){entity, 1u, 0u, 1u, 1u});
            return;
        case 10:
            if (r_u32(entity + 12u) != 0u && r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 8u) > 0)
                sf_draft_call(0x8008F964u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 18:
            value = sf_draft_call(0x80022B6Cu, 5u, (uint32[]){entity, r_u32(0x80116B9Cu), 0u, 1u, 1u});
            if ((value & 0xFFu) != 0u)
            {
                sf_draft_call(0x8008C358u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), 2u});
                sub_80015364(35u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            }
            return;
        case 19:
            sub_80015364(25u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            sf_draft_call(0x8008C464u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            return;
        case 20:
            if (type == 13)
            {
                if ((r_u32(entity) & 12u) == 0u)
                    sf_draft_call(0x8008F8B0u, 2u, (uint32[]){entity, 13u});
            }
            else if ((r_u32(entity) & 24u) == 0u)
            {
                parameter = sf_character_event_read(event_address + 4u, 4u);
                table = r_u32(0x80115CCCu);
                other = r_u32(table + 76u * parameter + 52u);
                value = sf_draft_call(0x80022B6Cu, 5u, (uint32[]){entity, other, 0u, 1u, 0u});
                if ((value & 0xFFu) == 0u)
                    sf_draft_call(0x8008F8B0u, 2u, (uint32[]){entity, (uint32)type});
            }
            return;
        case 26:
            w_u32(entity + 4u, r_u32(0x80116A88u));
            if (type == 13)
                return;
            flags = r_u8(entity);
            if ((flags & 8u) == 0u)
                return;
            parameter = sf_character_event_read(event_address + 4u, 4u);
            table = r_u32(0x80115CCCu);
            other = r_u32(table + 76u * parameter + 52u);
            if ((flags & 1u) == 0u)
                return;
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            position[1] = 0u - position[1];
            other_position[0] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 20u);
            other_position[1] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 24u);
            other_position[2] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 28u);
            other_position[1] = 0u - other_position[1];
            if ((sint32)other_position[1] < (sint32)position[1])
            {
                flags = r_u8(entity);
                state = r_u32(entity + 12u);
                w_u32(entity + 4u, 0u);
                w_u8(entity, flags & 0xFEu);
                if (r_u32(state + 364u) != 0u)
                {
                    w_u32(state + 356u, 1u);
                    w_u32(state + 364u, 0u);
                }
                else
                {
                    w_u32(state + 356u, 0u);
                    w_u32(state + 364u, 1u);
                }
            }
            return;
        case 27:
            flags = r_u8(entity);
            if ((flags & 16u) != 0u)
                w_u8(entity, flags & 0xEFu);
            return;
        case 35:
        case 39:
            flags = r_u8(entity);
            if ((flags & 16u) != 0u)
            {
                sf_draft_call(0x8008D56Cu, 2u, (uint32[]){(uint32)r_s16(entity + 2u), (uint32)type});
                return;
            }
            if ((flags & 8u) != 0u)
                return;
            sf_draft_call(0x8008CA44u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            if (type == 64)
            {
                parameter = sf_character_event_read(event_address + 4u, 4u);
                if (parameter != 666u)
                {
                    table = r_u32(0x80115CCCu);
                    value = r_u32(table + 76u * parameter);
                    if (r_s16(r_u32(0x80116B98u) + 20u * value) == 65)
                    {
                        flags = r_u8(entity);
                        state = r_u32(entity + 12u);
                        w_u8(entity, flags | 0x80u);
                        w_u32(state + 364u, 0u);
                        flags = r_u8(entity + 1u);
                        state = r_u32(entity + 12u);
                        w_u32(state + 356u, (flags & 0x7Fu) - 1u);
                    }
                }
            }
            value = r_u32(entity + 4u);
            if (value >= r_u32(0x80116A88u))
            {
                if (type == 13)
                    sf_draft_call(0x8006C620u, 3u, (uint32[]){136u, 0u, 1u});
                sub_80015364(37u, 5u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
                w_u8(entity, r_u8(entity) | 2u);
            }
            sf_draft_call(0x8008F8B0u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 41:
        case 42:
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            position[1] = 0u - position[1];
            if (kind == 41u)
            {
                output = sf_character_event_read(event_address + 12u, 4u);
                sf_character_event_write(output, position[1], 4u);
                state = r_u32(entity + 12u);
                output = sf_character_event_read(event_address + 16u, 4u);
                value = r_u32(state + 356u);
                flags = r_u8(entity);
                sf_character_event_write(output, flags | (value << 8), 2u);
                return;
            }
            output = sf_character_event_read(event_address + 12u, 4u);
            position[1] = sf_character_event_read(output, 4u);
            sub_800DC8AC(r_u32(r_u32(entity + 8u) + 12u), 0, (sint32)sf_draft_guest_address(position));
            output = sf_character_event_read(event_address + 16u, 4u);
            w_u8(entity, sf_character_event_read(output, 1u));
            output = sf_character_event_read(event_address + 16u, 4u);
            state = r_u32(entity + 12u);
            w_u32(state + 356u, sf_character_event_read(output + 1u, 1u));
            state = r_u32(entity + 12u);
            w_u32(state + 364u, r_u32(state + 356u) != 0u);
            if (type == 64)
            {
                value = sf_draft_call(0x80022994u, 1u, &entity);
                value = sf_draft_call(0x80022AE8u, 2u, (uint32[]){entity, value - 1u});
                if ((value & 0xFFu) != 0u)
                    w_u32(r_u32(entity + 12u) + 364u, 1u);
            }
            if ((r_u8(entity) & 8u) != 0u)
            {
                identity = r_s16(entity + 2u);
                sub_80015364(10u, 4u, identity, identity, 0, 0, 0, 0);
            }
            return;
        default:
            return;
    }
}

void sub_8002EB38(uint32 event_address)
{
    uint32 owner, table, entity, type_word, kind, state, model, flags, secondary_flags;
    uint32 position[3], other_position[4], effect_position[3], distance, replacement, parent;
    sint32 identity, type, parent_identity;
    sint16 left, right;
    uint8 dispose[8];
    int finished, in_range;
    FUNCTION_MARKER(0x8002EB38u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type_word = identity == 666 ? 666u : r_u16(r_u32(0x80116B98u) + 20u * r_u32(table + 76u * (uint32)identity));
    type = (sint16)type_word;
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x80150C64u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            w_u8(entity, r_u8(entity) & 0xBFu);
            if ((r_u32(entity) & 0x88u) == 0x80u && type == 44)
                sf_draft_call(0x8002E344u, 1u, &entity);
            sf_draft_call(0x80073DF8u, 1u, &entity);
            sf_draft_call(0x80073DD8u, 1u, &entity);
            return;
        case 6:
            w_u8(entity, r_u8(entity) | 0x40u);
            if ((r_u32(entity) & 0x88u) == 0x80u && type == 44)
            {
                sf_draft_call(0x8002E230u, 1u, &entity);
                identity = r_s16(entity + 2u);
                sub_80015364(10u, 4u, identity, identity, 0, 0, 0, 0);
            }
            sub_80073CD8((sint32)entity, 1, 0, 0);
            sf_draft_call(0x80073D88u, 5u, (uint32[]){entity, 1u, 0u, 1u, type == 44});
            return;
        case 10:
            if (r_u32(entity + 12u) == 0u || (r_u8(entity) & 8u) == 0u)
                return;
            finished = 0;
            if (type == 61 || type == 102)
            {
                if ((r_u32(0x80116A88u) & 3u) == (r_u16(entity + 2u) & 3u))
                {
                    position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                    position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                    position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                    position[1] = 0u - position[1];
                    sf_draft_call(0x8004F6DCu, 5u, (uint32[]){0xFFFFFFFFu, sf_draft_guest_address(position), 0x8010B780u, 2048u, 0u});
                }
                state = r_u32(entity + 12u);
                other_position[0] = r_u32(state + 32u);
                other_position[1] = r_u32(state + 36u);
                other_position[2] = r_u32(state + 40u);
                other_position[3] = r_u32(state + 44u);
                if ((sint32)other_position[1] <= 0)
                {
                    effect_position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                    effect_position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                    effect_position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                    effect_position[1] = 0u - effect_position[1];
                    sf_draft_call(0x8004F6DCu, 5u, (uint32[]){0xFFFFFFFFu, sf_draft_guest_address(effect_position), 0x8010B780u, 4096u, 0u});
                    sf_draft_call(0x80048A70u, 1u, &entity);
                    secondary_flags = r_u8(entity + 35u);
                    flags = r_u8(entity);
                    w_u8(entity + 35u, secondary_flags | 2u);
                    w_u8(entity, flags & 0xF7u);
                    finished = 1;
                }
            }
            else if (type == 44)
            {
                position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                position[1] = 0u - position[1];
                if ((r_u32(0x80116A88u) & 3u) == (r_u16(entity + 2u) & 3u))
                    sf_draft_call(0x8004F6DCu, 5u, (uint32[]){0xFFFFFFFFu, sf_draft_guest_address(position), 0x8010B780u, 4096u, 0u});
                state = r_u32(entity + 12u);
                if ((r_u32(state + 404u) & 4u) != 0u)
                {
                    sint32 scale = r_s32(state + 36u);
                    sub_8006C0BC(0, 1u, (sint32)entity, sf_draft_guest_address(&left), sf_draft_guest_address(&right));
                    left = (sint16)((sint32)((uint32)(sint32)left * (uint32)(scale >> 9)) >> 7);
                    sub_8006C0E8(0, 1u, (uint32)(sint32)left, (uint32)(sint32)right);
                }
                if (r_u8(0x80116B70u) != 0u)
                {
                    state = r_u32(r_u32(0x80116B9Cu) + 12u);
                    other_position[0] = r_u32(state);
                    other_position[1] = r_u32(state + 4u);
                    other_position[2] = r_u32(state + 8u);
                    other_position[3] = r_u32(state + 12u);
                    sf_draft_call(0x800E02DCu, 3u, (uint32[]){sf_draft_guest_address(position), sf_draft_guest_address(other_position), sf_draft_guest_address(&distance)});
                    if (distance < 256u && r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 8u) > 0 && r_u8(0x801169C0u) == 0u)
                        sub_80015364(13u, 4u, 666, (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
                }
                state = r_u32(entity + 12u);
                in_range = 0;
                if ((r_u8(state + 264u) != 0u && (r_u32(state + 404u) & 0x100000u) != 0u) || r_u8(state + 257u) == 0u)
                {
                    in_range = r_u32(state + 32u) + 0x2000u < 0x4001u && r_u32(state + 36u) + 0x2000u < 0x4001u && r_u32(state + 40u) + 0x2000u < 0x4001u && r_u32(state + 160u) + 0x2000u < 0x4001u && r_u32(state + 164u) + 0x2000u < 0x4001u && r_u32(state + 168u) + 0x2000u < 0x4001u;
                }
                if (in_range)
                {
                    replacement = sf_draft_call(0x8002A634u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), 56u});
                    flags = r_u8(entity);
                    secondary_flags = r_u8(entity + 32u);
                    w_u8(entity, flags & 0xF7u);
                    w_u8(entity + 32u, secondary_flags | 0x80u);
                    w_u8(replacement + 32u, r_u8(replacement + 32u) | 0x80u);
                    identity = r_s16(entity + 2u);
                    table = r_u32(0x80115CCCu);
                    parent_identity = r_s16(table + 76u * (uint32)identity + 48u);
                    parent = 0u;
                    if (parent_identity != -1)
                    {
                        parent = r_u32(table + 76u * (uint32)parent_identity + 52u);
                        w_u8(parent + 32u, r_u8(parent + 32u) | 0x80u);
                    }
                    sf_draft_call(0x80048A70u, 1u, &entity);
                    w_u8(entity, r_u8(entity) & 0xF7u);
                    sf_draft_call(0x8002E230u, 1u, &entity);
                    sf_draft_call(0x8002EAF8u, 1u, &entity);
                    parent_identity = r_s16(replacement + 2u);
                    identity = r_s16(entity + 2u);
                    if (parent_identity != identity)
                        sf_draft_call(0x8002EAF8u, 1u, &replacement);
                    if (parent != 0u)
                        sf_draft_call(0x8002EAF8u, 1u, &parent);
                    finished = 1;
                }
            }
            if (!finished)
            {
                identity = r_s16(entity + 2u);
                sub_80015364(10u, 4u, identity, identity, 0, 0, 0, 0);
            }
            return;
        case 13:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0)
            {
                if (type == 44 || type == 56)
                    sf_draft_call(0x8002E55Cu, 2u, (uint32[]){entity, (uint32)type});
                else if (type != 33 && type_word - 102u >= 2u)
                    sf_draft_call(0x8006A080u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), (uint32)(sint32)(sint16)sf_character_event_read(event_address + 4u, 2u)});
                if (type == 66 && r_s16(r_u32(entity + 24u) + 8u) != 0x7FFF)
                    sf_draft_call(0x80146958u, 2u, (uint32[]){entity, sf_character_event_read(event_address + 4u, 4u)});
                return;
            }
            if ((r_u8(entity) & 0x80u) != 0u)
                return;
            dispose[0] = 1u;
            w_u8(entity, r_u8(entity) | 0x80u);
            if (type == 69)
            {
                dispose[0] = 0u;
                sf_draft_call(0x8002DE00u, 2u, (uint32[]){entity, sf_character_event_read(event_address + 4u, 4u)});
            }
            else if (type == 33 || type == 61 || type_word - 102u < 2u)
            {
                /* TODO Review the remaining dispose bytes if the callee reads them */
                sf_draft_call(0x8002DEB8u, 4u, (uint32[]){entity, (uint32)type, sf_character_event_read(event_address + 4u, 4u), sf_draft_guest_address(dispose)});
            }
            else if (type == 44 || type == 56)
            {
                dispose[0] = 0u;
                sf_draft_call(0x8002E6F4u, 3u, (uint32[]){entity, (uint32)type, sf_character_event_read(event_address + 4u, 4u)});
            }
            else
            {
                if (type == 66)
                {
                    identity = r_s16(entity + 2u);
                    table = r_u32(0x80115CCCu);
                    parent_identity = r_s16(table + 76u * (uint32)identity + 48u);
                    parent = r_u32(table + 76u * (uint32)parent_identity + 52u);
                    w_u16(r_u32(parent + 24u) + 8u, 1u);
                    sub_80015364(13u, 4u, r_s16(entity + 2u), parent_identity, 0, 0, 0, 0);
                    sf_draft_call(0x801468D8u, 1u, &entity);
                }
                sf_draft_call(0x8006A080u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), (uint32)(sint32)(sint16)sf_character_event_read(event_address + 4u, 2u)});
            }
            if (dispose[0] == 0u)
                return;
            model = r_u32(entity + 8u);
            break;
        case 26:
            if ((r_u8(entity) & 8u) != 0u && type == 44 && r_u8(0x80116B70u) != 0u)
            {
                flags = r_u8(0x801169C0u);
                w_u8(0x80116B70u, 0u);
                if (flags != 0u)
                    w_u8(0x801169C0u, 2u);
                sf_draft_call(0x8006A330u, 3u, (uint32[]){r_u32(0x80116B9Cu), entity, 17u});
            }
            return;
        case 42:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0)
                return;
            flags = r_u8(entity);
            model = r_u32(entity + 8u);
            w_u8(entity, flags | 0x80u);
            break;
        default:
            return;
    }
    if ((r_u8(model + 10u) & 8u) != 0u)
        sub_800D8F60(model);
    else
    {
        w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
        sf_draft_call(0x8002A404u, 1u, &entity);
    }
}

void sub_8002AFF0(uint32 event_address)
{
    uint32 table, owner, entity, kind, node, flags, position[3], magnitude, mode;
    sint32 identity, type;
    FUNCTION_MARKER(0x8002AFF0u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = identity == 666 ? 666 : r_s16(r_u32(0x80116B98u) + 20u * r_u32(table + 76u * (uint32)identity));
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F5CCu, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            sub_80073DD8((sint32)entity);
            w_u8(entity, r_u8(entity) & 0xBFu);
            if (type == 48 || type == 37 || type == 39 || type == 90)
            {
                sf_draft_call(0x80050078u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
                sf_draft_call(0x8002AFB4u, 1u, &entity);
            }
            return;
        case 6:
            sub_80073D88((sint32)entity, 1, 0, 0, 1);
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            position[1] = 0u - position[1];
            w_u8(entity, (r_u8(entity) & 0x7Fu) | 0x40u);
            mode = 0u;
            if (type == 48)
                magnitude = 2457u;
            else if (type == 37)
                magnitude = 2048u;
            else if (type == 39)
                magnitude = 1228u;
            else if (type == 90)
            {
                magnitude = 300u;
                mode = 3u;
            }
            else
                return;
            sf_draft_call(0x8004FD20u, 4u, (uint32[]){(uint32)r_s16(entity + 2u), sf_draft_guest_address(position), magnitude, mode});
            sf_draft_call(0x8002AF78u, 1u, &entity);
            return;
        case 26:
            if (r_s16(r_u32(r_u32(0x80116B9Cu) + 24u) + 8u) > 0 && r_u8(0x801169C0u) == 0u)
                sub_80015364(13u, 4u, 666, (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            return;
        case 42:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0)
                return;
            /* Fall through to the event20 state update */
        case 20:
            flags = r_u8(entity + 35u);
            node = r_u32(entity + 24u);
            w_u8(entity + 35u, flags | 2u);
            w_u16(node + 8u, 0xFFFFu);
            return;
    }
}

void sub_80090624(uint32 event_address)
{
    uint32 table, owner, entity, flags, model, callback, other, kind, event_kind;
    uint32 position[4], player_position[4], index, y, result;
    sint32 identity, type;
    FUNCTION_MARKER(0x80090624u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = identity == 666 ? 666 : r_s16(r_u32(0x80116B98u) + 20u * r_u32(table + 76u * (uint32)identity));
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014FA84u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            if (type == 88 && (r_u8(entity) & 0x20u) == 0u)
                return;
            sub_80073DF8((sint32)entity);
            sub_80073DD8((sint32)entity);
            return;
        case 6:
            if (type == 88 && (r_u8(entity) & 0x20u) == 0u)
                return;
            sub_80073CD8((sint32)entity, 1, 0, type == 88 || type == 100 ? 1 : 0);
            sub_80073D88((sint32)entity, 1, 0, 1, 0);
            return;
        case 10:
            if (r_u32(entity + 12u) != 0u)
                sf_draft_call(type == 100 ? 0x80148BD4u : 0x80148588u, 1u, &entity);
            return;
        case 18:
            flags = r_u8(entity);
            w_u8(entity, flags | 0x40u);
            if ((flags & 0x20u) != 0u)
                return;
            if ((flags & 0x10u) == 0u || (type != 100 && type != 108))
                sf_draft_call(0x8008C358u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), 3u});
            if ((r_u8(entity) & 0x10u) == 0u)
            {
                position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                y = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                model = r_u32(r_u32(entity + 8u) + 12u);
                other = r_u32(0x80116B9Cu);
                position[2] = r_u32(model + 28u);
                position[1] = 0u - y;
                model = r_u32(other + 12u);
                for (index = 0u; index < 4u; ++index)
                    player_position[index] = r_u32(model + 268u + 4u * index);
                event_kind = (sint32)position[1] < (sint32)(player_position[1] + 105u) && type != 108 ? 36u : 20u;
                sub_80015364(event_kind, 4u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            }
            else
            {
                callback = r_u32(0x8011638Cu);
                if (callback != 0u && type == 88)
                {
                    result = sf_draft_call(callback, 2u, (uint32[]){(uint32)r_s16(entity + 2u), 88u});
                    if (result != 0u)
                        sub_80085D04(result, 0);
                }
            }
            return;
        case 19:
            flags = r_u8(entity);
            w_u8(entity, flags & 0xBFu);
            if ((flags & 0x20u) != 0u)
                return;
            if ((flags & 0x10u) == 0u || (type != 100 && type != 108))
                sf_draft_call(0x8008C464u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            if ((r_u8(entity) & 0x10u) == 0u)
                sub_80015364(25u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            return;
        case 20:
        case 36:
        case 39:
            if ((r_u32(entity) & 0x30u) != 0u)
                return;
            flags = r_u8(entity);
            identity = r_s16(entity + 2u);
            w_u8(entity, flags | 0x20u);
            sf_draft_call(r_u32(0x801163ACu), 1u, (uint32[]){(uint32)identity});
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            y = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            position[1] = 0u - y;
            /* TODO Review the unwritten vector fourth word if the sound consumer uses it */
            sub_8006BC98(1, 20u, 0, sf_draft_guest_address(position));
            if (type == 88)
            {
                model = r_u32(entity + 8u);
                w_u8(model + 8u, r_u8(model + 8u) & 0xF7u);
                sub_80073CD8((sint32)entity, 1, 0, 1);
                sub_80073D88((sint32)entity, 1, 0, 1, 0);
            }
            else
            {
                model = r_u32(entity + 8u);
                if ((r_u8(model + 10u) & 8u) != 0u)
                    sub_800D8F60((sint32)model);
                sf_draft_call(0x800CD1ECu, 1u, &entity);
            }
            sf_draft_call(0x8008CA44u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            return;
        case 41:
            y = 0u;
            if (r_u32(entity + 12u) != 0u && (type == 100 || type == 108))
            {
                position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                y = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                y = 0u - y;
            }
            sf_character_event_write(sf_character_event_read(event_address + 12u, 4u), y, 4u);
            other = sf_character_event_read(event_address + 16u, 4u);
            sf_character_event_write(other, r_u8(entity), 2u);
            return;
        case 42:
            flags = sf_character_event_read(sf_character_event_read(event_address + 16u, 4u), 2u);
            model = r_u32(entity + 12u);
            w_u8(entity, flags);
            if (model != 0u)
            {
                if (type == 100)
                {
                    if ((flags & 8u) != 0u)
                    {
                        result = (uint32)sub_80022994((sint32)entity);
                        w_u32(r_u32(entity + 12u) + 356u, result - 1u);
                        w_u32(r_u32(entity + 12u) + 364u, 0u);
                        sf_draft_call(0x80148B58u, 1u, &entity);
                    }
                }
                else if (type == 108)
                {
                    /* TODO Original SP+34 is read without a preceding write on this path */
                    fprintf(stderr, "TODO 80090624: Event42/type108 original carried local is unbound\n");
                    abort();
                }
                else
                    return;
                position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                y = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                position[1] = 0u - y;
                position[1] = sf_character_event_read(sf_character_event_read(event_address + 12u, 4u), 4u);
                /* TODO Review the unwritten vector fourth word in DC8AC */
                sub_800DC8AC(r_u32(r_u32(entity + 8u) + 12u), 0, (sint32)sf_draft_guest_address(position));
            }
            if (type != 88)
            {
                model = r_u32(entity + 8u);
                if ((r_u8(model + 10u) & 8u) != 0u && (r_u32(entity) & 0x28u) == 0x20u)
                    sub_800D8F60((sint32)model);
            }
            return;
    }
}

void sub_8002B38C(uint32 event_address)
{
    uint32 table, entity, owner, model, player, node, flags, position[3];
    uint32 kind, entity_y, player_y;
    sint32 identity, type;
    FUNCTION_MARKER(0x8002B38Cu, "SCUS_942.40");
    owner = sf_entity_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = identity == 666 ? 666 : r_s16(r_u32(0x80116B98u) + 20u * r_u32(table + 76u * (uint32)identity));
    kind = sf_entity_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F818u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            if (type == 86)
                return;
            if ((r_u8(r_u32(entity + 8u) + 10u) & 8u) != 0u)
                sub_80073DF8((sint32)entity);
            else
                sub_80073E20((sint32)entity);
            if ((r_u8(entity) & 1u) == 0u)
                sub_80073DD8((sint32)entity);
            return;
        case 6:
            if (type == 86)
                return;
            if ((r_u8(r_u32(entity + 8u) + 10u) & 8u) != 0u)
                sub_80073CD8((sint32)entity, 1, 0, 0);
            else
                sub_80073D30((sint32)entity, 1, 0, 0);
            if ((r_u8(entity) & 1u) == 0u)
                sub_80073D88((sint32)entity, 1, 0, type == 86 && r_s16(0x80130C88u) == 6 ? 0 : 1, 1);
            return;
        case 26:
            if (r_s16(r_u32(entity + 24u) + 8u) <= 0)
                return;
            if (type == 32)
            {
                sub_80015364(26u, 4u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
                return;
            }
            if (type == 85)
                return;
            /* Retain all three coordinate reads in original order */
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            entity_y = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            model = r_u32(r_u32(entity + 8u) + 12u);
            player = r_u32(0x80116B9Cu);
            position[2] = r_u32(model + 28u);
            entity_y = 0u - entity_y;
            position[0] = r_u32(r_u32(r_u32(player + 8u) + 12u) + 20u);
            player_y = r_u32(r_u32(r_u32(player + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(player + 8u) + 12u) + 28u);
            player_y = 0u - player_y;
            if (type != 45)
            {
                if (type != 55 && (sint32)entity_y >= (sint32)(player_y + 105u))
                    return;
                node = r_u32(player + 16u);
                flags = r_u32(node);
                if ((flags & 8u) == 0u && r_u8(node + 8u) != 8u && (flags & 0x400u) == 0u)
                    return;
            }
            sub_80069CB0(-1, (sint16)sf_entity_event_read(event_address + 4u, 2u), r_s16(entity + 2u), r_s16(r_u32(entity + 24u) + 8u), 15u);
            return;
        case 42:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0)
                return;
            w_u8(entity + 1u, r_u8(entity + 1u) | 0x80u);
            /* Fall through to the death-state update */
        case 13:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0)
                return;
            flags = r_u8(entity);
            if ((flags & 0x80u) != 0u)
                return;
            model = r_u32(entity + 8u);
            w_u8(entity, flags | 0x80u);
            if ((r_u8(model + 10u) & 8u) != 0u)
                sub_800D8F60((sint32)model);
            else
                w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
            if (type == 112 && sf_entity_event_read(event_address, 2u) == 13u)
            {
                position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
                position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
                position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
                position[1] = 0u - position[1];
                /* TODO Missing callee must review the three-word native coordinate input */
                sf_draft_call(0x8006AE14u, 3u, (uint32[]){sf_entity_event_read(event_address + 4u, 4u), sf_draft_guest_address(position), 0u});
            }
            return;
    }
}

sint32 sub_8002234C(uint32 resource)
{
    uint32 transform;
    FUNCTION_MARKER(0x8002234Cu, "SCUS_942.40");
    sub_800DB558((sint32)sf_draft_guest_address(&transform));
    sub_800D8CDC(resource, (sint32)transform, 0x01300000, (sint32)0x8011922Cu);
    sub_80082234(resource, r_u32(0x8011922Cu));
    w_u16(resource + 2u, 240u);
    return sub_80081DBC(r_u32(0x8011922Cu));
}

sint32 sub_80082234(uint32 resource, uint32 object)
{
    uint32 index, slot, offset, page;
    FUNCTION_MARKER(0x80082234u, "SCUS_942.40");
    if (r_u16(resource + 2u) != 0xFFFFu)
    {
        w_u16(resource + 2u, 0xFFFFu);
        for (index = 4u; index != 0u; --index)
            w_u32(resource + 140u + 4u * (index - 1u), resource + ((index - 1u) << 16));
        for (index = 0u; index < 33u; ++index)
        {
            slot = resource + 4u + 4u * index;
            offset = r_u32(slot);
            page = offset >> 14;
            if ((sint32)offset > 0)
            {
                if (page >= 4u)
                    sub_800DDC34(1, 0u, 0x80012350u, 1285);
                w_u32(slot, r_u32(resource + 140u + (page << 2)) + (offset & 0x3FFFu));
            }
        }
    }
    return sub_800D2850(resource, r_u32(object + 16u));
}

void sub_80148740(uint32 enabled)
{
    FUNCTION_MARKER(0x80148740u, "TITLE.OVL");
    if (enabled != 0u)
    {
        sub_80147A70();
        w_u32(0x8014A8B0u, 8u);
    }
}

uint32 sub_80148770(void)
{
    uint32 started, selection, result, total, index, rounded;
    uint32 records[150], count;
    FUNCTION_MARKER(0x80148770u, "TITLE.OVL");
    sub_8006BC98(5, 1u, 0, 0u);
    sub_801486A8();
    sub_800848D4(r_u32(0x8014B5A0u), 210);
    if (r_u32(0x8014A8F0u) != 2u)
        sub_80044848(7);
    selection = r_u32(0x8014A8F0u);
    if (selection == 1u)
    {
        sub_80147B0C(7u);
        sub_80147B0C(3u);
        sub_80147B0C(4u);
        sub_801406FC(0, 0u, 0u);
        w_u32(0x8014A8F4u, 0x8014A3D0u);
        return 0x8014A3D0u;
    }
    if (selection == 2u)
        return (uint32)sub_8014775C(6u);
    if (selection != 0u)
        return (sint32)selection < 2 ? 1u : 0u;

    if (r_u8(0x801168D0u) != 0u)
    {
        started = (uint32)sub_800E3F54(-1);
        sub_8006C620(177, 0, 1);
        while (((uint32)sub_8006C180() & 0xFFu) != 0u)
        {
            if ((sint32)((uint32)sub_800E3F54(-1) - started) >= 2000)
                break;
        }
    }
    while ((sint16)r_u16(0x8014A814u) < (sint16)r_u16(0x8014A816u))
    {
        sub_801406FC(0, 0u, 0u);
        sub_80148230(sub_80147B90());
    }
    sub_801406FC(0, 0u, 0u);
    if (r_u32(0x8014A818u) == 5u)
    {
        /* TODO Review the missing callee's native output adapter when reached */
        result = sf_draft_call(0x80140488u, 6u, (uint32[]){0u, 0x80146DDCu, sf_draft_guest_address(records), sf_draft_guest_address(&count), 0u, 15u});
        if (sub_80148070((sint32)result) != 0)
        {
            total = 0u;
            for (index = 0u; (sint32)index < (sint32)count; ++index)
            {
                rounded = records[index * 10u + 6u] + 0x1FFFu;
                if ((sint32)rounded < 0)
                    rounded = records[index * 10u + 6u] + 0x3FFEu;
                total += (uint32)((sint32)rounded >> 13);
            }
            if ((sint32)total >= 15)
            {
                w_u32(0x8014A840u, 0u);
                return (uint32)sub_80147C34(r_u32(0x8014A4F0u), 2, 1u, 0x80148740u);
            }
        }
    }
    sub_80148740(1u);
    return 8u;
}

uint32 sub_800686E4(uint32 value)
{
    uint32 previous;
    FUNCTION_MARKER(0x800686E4u, "SCUS_942.40");
    previous = r_u32(0x8011600Cu);
    w_u32(0x8011600Cu, value);
    return previous;
}

uint32 sub_800686F4(uint32 value)
{
    uint32 previous;
    FUNCTION_MARKER(0x800686F4u, "SCUS_942.40");
    previous = r_u32(0x80116010u);
    w_u32(0x80116010u, value);
    return previous;
}

uint32 sub_8006D6E0(uint32 first, uint32 second)
{
    uint32 timestamp;
    FUNCTION_MARKER(0x8006D6E0u, "SCUS_942.40");
    timestamp = r_u32(0x801169A4u);
    w_u32(0x80116810u, first);
    w_u32(0x80116814u, second);
    w_u8(0x80116818u, 0u);
    w_u32(0x8011680Cu, 60u);
    w_u32(0x80116808u, timestamp);
    return 60u;
}

void sub_80147138(void)
{
    FUNCTION_MARKER(0x80147138u, "PARK.OVL");
    sub_8006BC98(0, 22, 0, 0);
    sf_draft_call(0x8006D6E0u, 2u, (uint32[]){0u, 23u});
}

uint32 sub_80147F8C(void)
{
    uint32 first[4], second[4], position[4];
    uint32 index, object, source;
    FUNCTION_MARKER(0x80147F8Cu, "PARK.OVL");
    first[0] = r_u32(0x801469A8u);
    first[1] = r_u32(0x801469ACu);
    first[2] = r_u32(0x801469B0u);
    first[3] = r_u32(0x801469B4u);
    index = r_u32(0x80116AB0u);
    second[0] = r_u32(0x801469B8u);
    second[1] = r_u32(0x801469BCu);
    second[2] = r_u32(0x801469C0u);
    second[3] = r_u32(0x801469C4u);
    object = r_u32(r_u32(0x80115CCCu) + 76u * index + 52u);
    source = r_u32(object + 12u);
    position[0] = r_u32(source);
    position[1] = r_u32(source + 4u);
    position[2] = r_u32(source + 8u);
    position[3] = r_u32(source + 12u);
    position[1] += 255u;
    sub_8004C38C(sf_draft_guest_address(position), sf_draft_guest_address(first));
    sub_8004C5F0(1, 0x00202020u);
    w_u32(0x8011697Cu, 512u);
    sub_8004C70C(sf_draft_guest_address(second), 0, 0);
    object = (uint32)sub_8004C0E8(80, 0);
    if (object != 0u)
    {
        w_u16(object + 26u, 0xD6EAu);
        w_u32(object + 44u, 1u);
        w_u8(object + 35u, 0u);
        w_u16(object + 28u, 0u);
        w_u32(object + 48u, 3u);
        sub_8004C7B0((sint32)object, 80);
    }
    w_u32(object + 48u, 5u);
    return 5u;
}

uint32 sub_800CDB34(uint32 callback)
{
    FUNCTION_MARKER(0x800CDB34u, "SCUS_942.40");
    w_u32(0x80116A78u, callback);
    w_u8(0x8011646Eu, 1u);
    return 1u;
}

static uint32 sf_park_record_row(sint32 index)
{
    return r_u32(0x80115CCCu) + 76u * (uint32)index;
}

static sint32 sf_park_record_kind(sint32 index)
{
    uint32 type;
    if (index == 666)
        return 666;
    type = r_u32(sf_park_record_row(index));
    return r_s16(r_u32(0x80116B98u) + 20u * type);
}

void sub_801476D4(void)
{
    uint32 state, row, object, parameter, selected, flags;
    sint32 index, parent, kind, value, related_index;
    FUNCTION_MARKER(0x801476D4u, "PARK.OVL");
    sf_draft_call(0x800CDB34u, 1u, (uint32[]){0x80149D48u});
    w_u32(0x80149E00u, 0u);
    w_u8(0x80149E04u, 0u);
    w_u8(0x80149E08u, 0u);
    w_u8(0x80149E0Cu, 0u);
    w_u8(0x80149E10u, 0u);
    w_u8(0x80149E14u, 0u);
    sf_draft_call(0x8003CD50u, 0u, NULL);
    sf_draft_call(0x80147F8Cu, 0u, NULL);
    w_u32(r_u32(0x80148BE4u), 0x80149DA0u);
    sf_draft_call(0x80092308u, 2u, (uint32[]){0x80148BE0u, 0u});
    state = r_u32(0x8011699Cu);
    if (r_u32(state + 24u) == 0u)
    {
        sf_draft_call(0x80017ED8u, 2u, (uint32[]){0u, 0xFFFFFFFFu});
        sf_draft_call(0x80017ED8u, 2u, (uint32[]){4u, 0xFFFFFFFFu});
        state = r_u32(0x8011699Cu);
        if (state != 0u)
            w_u32(state + 36u, r_u32(state + 36u) | 7u);
        sf_draft_call(0x80040154u, 3u, (uint32[]){1200u, 0u, 0x80146A64u});
    }
    else if (state == 0u || (r_u32(state + 16u) & 1u) == 0u)
    {
        value = (sint16)sf_draft_call(0x80040288u, 0u, NULL);
        value = (sint16)(value / 20);
        sf_draft_call(0x80040154u, 3u, (uint32[]){(uint32)value, 0u, 0x80146A64u});
    }
    sf_draft_call(0x80147138u, 0u, NULL);
    sf_draft_call(0x800686E4u, 1u, (uint32[]){0x80146B94u});
    sf_draft_call(0x800686F4u, 1u, (uint32[]){0x80146DACu});
    sub_8001745C(0x8014708Cu);
    sub_8001746C(0x80147108u);
    state = r_u32(0x8011699Cu);
    if (state == 0u || (r_u32(state + 16u) & 2u) == 0u)
        sf_draft_call(0x80066F40u, 1u, (uint32[]){0x80147170u});
    sf_draft_call(0x80066F50u, 1u, (uint32[]){0x80066848u});
    sf_draft_call(0x80091CF8u, 1u, (uint32[]){0x801471D0u});
    sf_draft_call(0x8008DE18u, 1u, (uint32[]){0x801473F4u});
    sf_draft_call(0x8002D2C8u, 1u, (uint32[]){0x801474F8u});
    sf_draft_call(0x8002D2D8u, 1u, (uint32[]){0x80147590u});
    sf_draft_call(0x8002D57Cu, 1u, (uint32[]){0x80147690u});
    sf_draft_call(0x8008BE90u, 1u, (uint32[]){0x801476B0u});
    for (index = 0; index < r_s32(0x80116A5Cu); ++index)
    {
        kind = sf_park_record_kind(index);
        if (kind == 1)
        {
            row = sf_park_record_row(index);
            parent = r_s32(row + 48u);
            if (parent == -1 || parent == 666 || sf_park_record_kind(parent) != 53)
                continue;
            object = r_u32(row + 52u);
            state = r_u32(0x8011699Cu);
            w_u32(0x80149E00u, object);
            if (state == 0u || (r_u32(state + 16u) & 2u) == 0u)
                sf_draft_call(0x80056994u, 1u, (uint32[]){(uint32)(sint32)r_s16(object + 2u)});
            else
            {
                do
                {
                    if (sf_park_record_kind(parent) == 53)
                    {
                        object = r_u32(sf_park_record_row(parent) + 52u);
                        w_u8(object + 35u, r_u8(object + 35u) | 2u);
                    }
                    parent = r_s32(sf_park_record_row(parent) + 48u);
                } while (parent != -1);
            }
        }
        else if (kind == 53)
        {
            parent = r_s32(sf_park_record_row(index) + 48u);
            if (parent != -1 && (parent == 666 || sf_park_record_kind(parent) != 53))
                continue;
            object = sf_draft_call(0x8002A784u, 2u, (uint32[]){(uint32)(sint32)(sint16)index, 2u});
            parameter = r_u32(object + 24u);
            if (r_s16(parameter + 8u) <= 0)
                w_u8(0x80149E14u, 1u);
        }
        else if (kind == 46)
        {
            row = sf_park_record_row(index);
            value = r_u8(0x80149E04u);
            object = r_u32(row + 52u);
            w_u8(0x80149E04u, (uint8)(value + 1));
            if ((r_u8(object + 1u) & 0x80u) != 0u)
                w_u8(0x80149E08u, (uint8)(r_u8(0x80149E08u) + 1u));
            selected = sf_draft_call(0x8002A634u, 2u, (uint32[]){(uint32)(sint32)(sint16)index, 53u});
            related_index = r_s16(selected + 2u);
            kind = sf_park_record_kind(related_index);
            if (r_s16(selected + 2u) != index && kind == 53)
            {
                flags = r_u32(object) & 0x8020u;
                if (flags != 0x20u)
                    w_u8(selected + 35u, r_u8(selected + 35u) | 2u);
            }
            parameter = r_u32(selected + 24u);
            if (r_s16(parameter + 8u) <= 0)
                w_u32(0x8011698Cu, r_u32(0x8011698Cu) + 1u);
        }
    }
    w_u8(0x80149E04u, (uint8)(r_u8(0x80149E04u) - 1u));
    sf_draft_call(0x801469E8u, 0u, NULL);
    index = r_s16(0x80116AAEu);
    if (index != -1)
    {
        row = sf_park_record_row(index);
        object = r_u32(row + 52u);
        if (r_u8(object + 34u) == 2u)
        {
            object = r_u32(row + 52u);
            value = (sint32)r_u32(0x80148BDCu);
            parameter = r_u32(object + 28u);
            w_u32(0x80116934u, (uint32)value);
            w_u8(parameter + 71u, 11u);
            state = r_u32(0x8011699Cu);
            if (state == 0u || (r_u32(state + 16u) & 4u) == 0u)
            {
                object = r_u32(sf_park_record_row(r_s16(0x80116AAEu)) + 52u);
                w_u8(object + 35u, r_u8(object + 35u) | 2u);
            }
        }
    }
    w_u16(0x80116A20u, 11u);
}

uint32 sub_8001745C(uint32 value)
{
    uint32 previous = r_u32(0x80115CBCu);
    FUNCTION_MARKER(0x8001745Cu, "SCUS_942.40");
    w_u32(0x80115CBCu, value);
    return previous;
}

uint32 sub_8001746C(uint32 value)
{
    uint32 previous = r_u32(0x80115CC0u);
    FUNCTION_MARKER(0x8001746Cu, "SCUS_942.40");
    w_u32(0x80115CC0u, value);
    return previous;
}

uint32 sub_8001747C(uint32 value)
{
    uint32 previous = r_u32(0x80115CC4u);
    FUNCTION_MARKER(0x8001747Cu, "SCUS_942.40");
    w_u32(0x80115CC4u, value);
    return previous;
}

uint32 sub_80046A54(uint32 value)
{
    uint32 previous = r_u32(0x80115F90u);
    FUNCTION_MARKER(0x80046A54u, "SCUS_942.40");
    w_u32(0x80115F90u, value);
    return previous;
}

uint32 sub_80046A64(uint32 value)
{
    uint32 previous = r_u32(0x80115F94u);
    FUNCTION_MARKER(0x80046A64u, "SCUS_942.40");
    w_u32(0x80115F94u, value);
    return previous;
}

sint32 sub_8014E0CC(sint32 phase)
{
    uint32 tick, target;
    sint32 level;
    FUNCTION_MARKER(0x8014E0CCu, "INIT.DEP.OVL");
    sub_8001745C(0u);
    sub_8001746C(0u);
    sub_8001747C(0u);
    sub_80029E70();
    sub_80046A54(0u);
    sub_80046A64(0u);
    level = r_s16(0x80130C88u);
    tick = r_u32(0x80116A88u);
    w_u16(0x80116A20u, 2u);
    target = r_u32(0x8014C128u + 4u * (uint32)level);
    w_u8(0x80116A91u, 0u);
    w_u32(0x80116B0Cu, 0u);
    w_u32(0x80116B34u, 0u);
    w_u32(0x8011698Cu, 0u);
    w_u8(0x80115CC8u, 0u);
    w_u8(0x80115CC9u, 0u);
    w_u8(0x80115CCAu, 0u);
    w_u8(0x80116A3Cu, 1u);
    w_u8(0x8011692Cu, 0u);
    w_u32(0x801168C0u, tick);
    w_u32(0x80116A40u, tick);
    w_u32(0x80116B08u, tick);
    return (sint32)sf_draft_call(target, 1u, (uint32[]){(uint32)phase});
}

void sub_80027C4C(void)
{
    uint32 player = r_u32(0x80116B9Cu);
    uint32 parameter;
    FUNCTION_MARKER(0x80027C4Cu, "SCUS_942.40");
    parameter = r_u32(player + 24u);
    w_u16(parameter + 8u, 150u);
    parameter = r_u32(player + 24u);
    w_u16(parameter + 6u, 600u);
    sub_8004532C(1, 3 * r_u8(0x8010C3AEu));
    sub_8004532C(13, r_u8(0x8010C52Eu));
    sub_8004532C(14, 99);
    sub_8004532C(21, 0);
    if (r_s16(0x80130C88u) >= 15)
        sub_8004532C(18, 0);
    sub_80023214((sint32)r_u32(0x80116B9Cu), 1);
    sub_80045E24((sint32)r_u32(0x80116B9Cu), 1, 1);
    sub_80045C04((sint32)r_u32(0x80116B9Cu));
    sub_80040294();
    if (r_u8(0x80116AF0u) == 0u)
        sub_80092590();
}

void sub_800922B8(void)
{
    FUNCTION_MARKER(0x800922B8u, "SCUS_942.40");
    w_u32(0x80121930u, 0u);
    w_u32(0x80121934u, 0u);
    w_u32(0x80121938u, 0u);
    w_u32(0x8012193Cu, 0u);
    w_u32(0x80121940u, 0u);
    w_u32(0x80121944u, 0u);
    w_u32(0x80121948u, 0x7FFFFFFFu);
    w_u32(0x8012194Cu, 0u);
}

uint32 sub_80093530(void)
{
    FUNCTION_MARKER(0x80093530u, "SCUS_942.40");
    return r_u32(0x801218C0u) == 0u;
}

void sub_80153578(void)
{
    uint32 index, name, slot, resource = 0u, object;
    uint32 resource_address = sf_draft_guest_address(&resource);
    char alternate_name[16];
    FUNCTION_MARKER(0x80153578u, "INIT.MAIN.OVL");
    w_u32(0x80115FBCu, 0u);
    for (index = 0u; index < 26u; ++index)
    {
        w_u16(0x8012F0B2u + 4u * index, 0u);
        name = r_u32(0x8010C384u + 32u * index);
        w_u16(0x8012F0B0u + 4u * index, 0u);
        slot = 0x8010C388u + 32u * index;
        if (!name || !r_u8(name) || sub_800DFD64((sint32)r_u32(0x801169C8u), (sint32)name, resource_address))
        {
            w_u32(slot, 0u);
            continue;
        }
        object = sub_800D8DE8(resource, 0x04010000);
        w_u32(slot, object);
        sub_800EC894(sf_draft_guest_address(alternate_name), r_u32(0x8010C384u + 32u * index));
        alternate_name[0] = 'X';
        if (!sub_800DFD64((sint32)r_u32(0x801169C8u), (sint32)sf_draft_guest_address(alternate_name), resource_address))
            w_u32(r_u32(slot) + 36u, resource);
    }
    sub_80017270((sint32)0x8014C488u, resource_address);
    if (!resource)
        sub_800DDC34(1, 0, 0x8014C284u, 0x907);
    w_u32(0x801168E0u, sub_800D8DE8(resource, 0x04010000));
    sub_80017270((sint32)0x8014C494u, resource_address);
    if (!resource)
        sub_800DDC34(1, 0, 0x8014C284u, 0x90A);
    w_u32(r_u32(0x801168E0u) + 36u, resource);
    for (index = 0u; index < 31u; ++index)
    {
        slot = 0x80127CE8u + 4u * index;
        if (resource)
        {
            sub_800D8CDC(resource, 0, 0x04010000, (sint32)slot);
            w_u32(r_u32(slot) + 24u, 0u);
            w_u8(r_u32(slot) + 9u, 17u);
        }
        w_u32(0x8012B828u + 4u * index, 0xFFFFFFFFu);
    }
    w_u16(0x801169A0u, 0xFFFFu);
    w_u8(0x80116A74u, 1u);
}

sint32 sub_801537AC(void)
{
    uint32 ready;
    sint32 level;
    FUNCTION_MARKER(0x801537ACu, "INIT.MAIN.OVL");
    sub_80034A58();
    sf_draft_call(0x80153578u, 0u, NULL);
    ready = sf_draft_call(0x80093530u, 0u, NULL) & 0xFFu;
    if (ready || r_u8(0x80116AF0u) == 1u)
    {
        sf_draft_call(0x800922B8u, 0u, NULL);
        sf_draft_call(0x80027C4Cu, 0u, NULL);
    }
    else if (r_u8(0x801163B1u))
        sf_draft_call(0x80092D3Cu, 0u, NULL);
    else
    {
        sf_draft_call(0x800922B8u, 0u, NULL);
        level = r_s16(0x80130C88u);
        if (level == 0 || level == 5 || level == 7 || level == 11 || level == 14)
            sf_draft_call(0x80027C4Cu, 0u, NULL);
        else
            sf_draft_call(0x8009268Cu, 0u, NULL);
    }
    return sub_80015364(17u, 0u, 65534, 65534, 0, 0, 0, 0);
}

sint32 sub_8007E6A8(void)
{
    sint32 offset;
    FUNCTION_MARKER(0x8007E6A8u, "SCUS_942.40.DEP");
    for (offset = 576; offset >= 0; offset -= 96)
        w_u8(0x8011F359u + (uint32)offset, 0u);
    return offset;
}

sint32 sub_80017390(void)
{
    uint32 flag_address, context_slot, context, value;
    FUNCTION_MARKER(0x80017390u, "SCUS_942.40.DEP");
    flag_address = r_u32(0x80116A60u);
    context_slot = r_u32(0x80115D84u);
    value = r_u8(flag_address);
    context = r_u32(context_slot);
    if (!value)
        return (sint32)value;
    sub_800CB570((sint32)context);
    return sub_800CB580(context, r_u32(0x80116A60u) + 4u);
}

void sub_8014E8C0(uint32 record, sint32 span)
{
    uint32 object, model, matrix_address, axis, low, high, extension, absolute[3];
    sint32 matrix[9], direction[3];
    FUNCTION_MARKER(0x8014E8C0u, "INIT.MAIN.OVL");
    object = r_u32(record + 8u);
    if (!object)
        return;
    matrix_address = r_u32(object + 12u);
    model = r_u32(object + 16u);
    for (axis = 0u; axis < 9u; ++axis)
    {
        uint32 value;
        if (axis)
            matrix_address = r_u32(r_u32(record + 8u) + 12u);
        value = r_u16(matrix_address + 2u * axis);
        if (axis % 3u == 1u)
            value = 0u - value;
        matrix[axis] = (sint16)(uint16)value;
    }
    for (axis = 0u; axis < 3u; ++axis)
    {
        direction[axis] = matrix[axis + 3u];
        absolute[axis] = direction[axis] < 0 ? 0u - (uint32)direction[axis] : (uint32)direction[axis];
    }
    if (absolute[0] >= absolute[1] && absolute[0] >= absolute[2])
        axis = 0u;
    else if (absolute[1] >= absolute[2])
        axis = 1u;
    else
        axis = 2u;
    high = r_u32(model + 16u + axis * 4u);
    low = r_u32(model + axis * 4u);
    extension = (uint32)span - (high - low);
    if ((sint32)extension < 0)
        extension = 0u;
    if ((direction[axis] < 0) != (axis == 1u))
        w_u32(model + axis * 4u, low - extension);
    else
        w_u32(model + 16u + axis * 4u, high + extension);
}

uint32 sub_8008C844(uint32 record)
{
    sint32 index;
    uint32 row, value, flags;
    FUNCTION_MARKER(0x8008C844u, "SCUS_942.40");
    index = r_s16(record + 2u);
    row = r_u32(0x80115CCCu) + 76u * (uint32)index;
    value = r_u8(row + 36u);
    if (!value)
    {
        flags = r_u32(row + 36u) & 0x3000u;
        value = flags == 0x1000u ? 19u : (flags == 0x2000u ? 20u : 0u);
    }
    index = r_s16(record + 2u);
    if ((uint32)index == r_u32(0x80116AB0u))
        value |= 0x80u;
    else
    {
        row = r_u32(0x80115CCCu) + 76u * (uint32)index;
        if (r_u32(row + 36u) & 0x4000u)
            value |= 0x80u;
    }
    return value & 0xFFu;
}

sint32 sub_80150148(uint32 record)
{
    sint32 index;
    uint32 row, descriptor, object, kind, color, flags, parameter;
    FUNCTION_MARKER(0x80150148u, "INIT.MAIN.OVL");
    index = r_s16(record + 2u);
    w_u8(record + 34u, 11u);
    row = r_u32(0x80115CCCu) + 76u * (uint32)index;
    if (r_u32(row + 36u))
    {
        color = sub_8008C844(record);
        index = r_s16(record + 2u);
        w_u8(record + 1u, color);
        row = r_u32(0x80115CCCu) + 76u * (uint32)index;
        w_u32(row + 36u, 0u);
    }
    index = r_s16(record + 2u);
    row = r_u32(0x80115CCCu) + 76u * (uint32)index;
    descriptor = r_u32(0x80116B98u) + 20u * r_u32(row);
    if (r_u8(r_u32(descriptor + 4u)))
    {
        sub_8014C94C(index, 0u);
        index = r_s16(record + 2u);
        kind = 64u;
        if (index != 666)
        {
            row = r_u32(0x80115CCCu) + 76u * (uint32)index;
            descriptor = r_u32(0x80116B98u) + 20u * r_u32(row);
            if (r_s16(descriptor) == 79)
            {
                w_u32(r_u32(record + 8u) + 24u, 0u);
                kind = 16u;
            }
        }
        object = r_u32(record + 8u);
        w_u8(object + 9u, kind);
        sf_draft_call(0x8014E8C0u, 2u, (const uint32[]){record, 48u});
    }
    flags = r_u8(record);
    parameter = r_u32(record + 24u);
    w_u8(record, flags & 0xDFu);
    w_u16(parameter + 6u, 0x7FFFu);
    w_u16(parameter + 8u, 0x7FFFu);
    return sub_8014EB54(record);
}

void sub_8014E748(uint32 record, sint32 x, sint32 y, sint32 z)
{
    uint32 object, model, axis, low, high, extent, adjustment;
    sint32 limits[3] = {x, y, z};
    FUNCTION_MARKER(0x8014E748u, "INIT.MAIN.OVL");
    object = r_u32(record + 8u);
    if (!object)
        return;
    model = r_u32(object + 16u);
    for (axis = 0u; axis < 3u; ++axis)
    {
        high = r_u32(model + 16u + axis * 4u);
        low = r_u32(model + axis * 4u);
        extent = high - low;
        if ((sint32)extent < limits[axis])
        {
            adjustment = (uint32)((sint32)((uint32)limits[axis] - extent) >> 1);
            high = r_u32(model + 16u + axis * 4u);
            w_u32(model + axis * 4u, low - adjustment);
            w_u32(model + 16u + axis * 4u, high + adjustment);
        }
    }
}

void sub_8014E804(uint32 record, sint32 x, sint32 y, sint32 z)
{
    uint32 object, model, axis, low, high, extent, adjustment;
    sint32 limits[3] = {x, y, z};
    FUNCTION_MARKER(0x8014E804u, "INIT.MAIN.OVL");
    object = r_u32(record + 8u);
    if (!object)
        return;
    model = r_u32(object + 16u);
    for (axis = 0u; axis < 3u; ++axis)
    {
        high = r_u32(model + 16u + axis * 4u);
        low = r_u32(model + axis * 4u);
        extent = high - low;
        if (limits[axis] < (sint32)extent)
        {
            adjustment = (uint32)((sint32)(extent - (uint32)limits[axis]) >> 1);
            high = r_u32(model + 16u + axis * 4u);
            w_u32(model + axis * 4u, low + adjustment);
            w_u32(model + 16u + axis * 4u, high - adjustment);
        }
    }
}

static void sf_init_large_object(uint32 record)
{
    uint32 object = r_u32(record + 8u);
    uint32 model = r_u32(object + 16u);
    if ((sint32)(r_u32(model + 16u) - r_u32(model)) >= 97 || (sint32)(r_u32(model + 24u) - r_u32(model + 8u)) >= 97)
    {
        w_u8(object + 10u, r_u8(object + 10u) | 0x20u);
        model = r_u32(r_u32(record + 8u) + 16u);
        w_u32(model + 40u, r_u32(model + 40u) | 0x8000u);
    }
}

sint32 sub_8014FD78(uint32 record, sint32 kind)
{
    uint32 object, model, value, flags, parameter;
    uint16 level;
    FUNCTION_MARKER(0x8014FD78u, "INIT.MAIN.OVL");
    sub_8014C94C(r_s16(record + 2u), 0u);
    object = r_u32(record + 8u);
    w_u8(record + 34u, 4u);
    w_u32(record + 16u, 0u);
    w_u8(record + 33u, 0xFFu);
    model = r_u32(object + 16u);
    w_u32(model + 40u, r_u32(model + 40u) | 0x100000u);
    w_u32(r_u32(record + 8u) + 24u, 0u);
    w_u8(r_u32(record + 8u) + 9u, 23u);
    object = r_u32(record + 8u);
    w_u8(object + 11u, r_u8(object + 11u) | 0x80u);
    flags = r_u8(record);
    value = r_u8(record + 1u);
    w_u8(record, (flags | 2u) & 0x37u);
    w_u8(record + 1u, value & 0x7Fu);
    sub_8015389C(record, kind == 109);
    if (kind == 52)
    {
        sf_init_large_object(record);
        value = r_u8(record + 32u) | 0x80u;
    }
    else
        value = r_u8(record + 32u) & 0x7Fu;
    w_u8(record + 32u, value);
    sf_draft_call(0x8014E748u, 4u, (const uint32[]){record, 32u, 32u, 32u});
    switch (kind)
    {
        case 21:
        case 35:
        case 107:
        case 111:
        case 40:
            flags = r_u8(record + 32u);
            object = r_u32(record + 8u);
            w_u8(record + 32u, flags | 8u);
            w_u8(object + 11u, r_u8(object + 11u) | 1u);
            sf_draft_call(0x8014E804u, 4u, (const uint32[]){record, 64u, 64u, 32u});
            if (kind == 107 || kind == 111)
            {
                value = (uint32)sub_80022940((sint32)record);
                flags = r_u8(record);
                w_u32(record + 4u, value);
                w_u8(record + 1u, value);
                w_u8(record, flags | 8u);
            }
            break;
        case 19:
        case 70:
            sf_init_large_object(record);
            level = r_u16(0x80130C88u);
            if ((uint32)level - 4u < 2u || (sint16)level == 6)
            {
                object = r_u32(record + 8u);
                w_u8(object + 11u, r_u8(object + 11u) | 1u);
            }
            break;
        case 49:
        case 72:
            object = r_u32(record + 8u);
            w_u8(object + 10u, r_u8(object + 10u) | 0x20u);
            model = r_u32(r_u32(record + 8u) + 16u);
            w_u32(model + 40u, r_u32(model + 40u) | 0x8000u);
            break;
        case 109:
            w_u8(record + 1u, r_u8(record + 1u) & 0x80u);
            sub_80048884((sint32)record, 0, 0, 0, 0);
            sub_800223E0((sint32)record, 0x10000, 1);
            parameter = r_u32(r_u32(record + 12u) + 4u);
            sub_8006E0D8((sint32)record, (sint32)parameter, 0, 4096, 0, 4096);
            break;
        case 52:
            w_u32(record + 4u, 0u);
            w_u8(record + 33u, 0xA0u);
            break;
    }
    if (kind != 111)
        return sub_80032784((sint32)record, (sint32)0x8012C8B0u, 0, 0u);
    parameter = r_u32(record + 24u);
    w_u16(parameter + 6u, 0x7FFFu);
    w_u16(parameter + 8u, 0x7FFFu);
    return 0x7FFF;
}
