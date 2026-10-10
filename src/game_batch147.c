#include "game_draft.h"

void sub_8014F344(uint32 entity, sint32 type)
{
    uint32 model, value, table;
    sint16 identity;
    FUNCTION_MARKER(0x8014F344u, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 0u);
    sub_8014C94C(identity, 0u);
    model = r_u32(entity + 8u);
    w_u8(model + 8u, r_u8(model + 8u) | 8u);
    if (type == 117)
    {
        identity = r_s16(entity + 2u);
        table = r_u32(0x80115CCCu);
        value = r_u32(table + 76u * (uint32)(sint32)identity + 40u);
        w_u8(entity + 1u, (uint8)(value == 0u ? 1u : value));
    }
    else if (type == 54)
        sub_8015389C(entity, 1);
}

void sub_8002AB34(uint32 event_address)
{
    uint32 owner, table, entity, definition, kind, count, node, position[3];
    sint32 identity, type;
    FUNCTION_MARKER(0x8002AB34u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = 666;
    if (identity != 666)
    {
        definition = r_u32(table + 76u * (uint32)identity);
        type = r_s16(r_u32(0x80116B98u) + 20u * definition);
    }
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F344u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            w_u8(entity, r_u8(entity) & 0xBFu);
            if (type == 117)
            {
                count = r_u32(0x80116640u) - 1u;
                w_u32(0x80116640u, count);
                if ((sint32)count <= 0)
                {
                    sf_draft_call(0x800220D4u, 1u, (uint32[]){0u});
                    w_u32(0x80116640u, 0u);
                }
            }
            else
                sf_draft_call(0x80050078u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            return;
        case 6:
            w_u8(entity, r_u8(entity) | 0x40u);
            if (type == 117)
            {
                count = r_u32(0x80116640u);
                if (count == 0u)
                {
                    sf_draft_call(0x800220D4u, 1u, (uint32[]){r_u8(entity + 1u)});
                    count = r_u32(0x80116640u);
                }
                w_u32(0x80116640u, count + 1u);
                return;
            }
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[0] = r_u32(node + 20u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[1] = r_u32(node + 24u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[2] = r_u32(node + 28u);
            position[1] = 0u - position[1];
            if (type == 54 || type == 83)
                sf_draft_call(0x8004FD20u, 4u, (uint32[]){(uint32)r_s16(entity + 2u), sf_draft_guest_address(position), type == 54 ? 3072u : 4096u, type == 54 ? 1u : 2u});
            return;
        default:
            return;
    }
}

void sub_8014F400(uint32 entity)
{
    FUNCTION_MARKER(0x8014F400u, "INIT.OVL");
    sint16 identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 0u);
    sub_8014C94C(identity, 0u);
    w_u8(entity, r_u8(entity) & 0xBFu);
}

void sub_8002AD54(uint32 event_address)
{
    uint32 owner, table, entity, definition, kind, output, node, position[3], effect;
    sint32 identity, type;
    FUNCTION_MARKER(0x8002AD54u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = 666;
    if (identity != 666)
    {
        definition = r_u32(table + 76u * (uint32)identity);
        type = r_s16(r_u32(0x80116B98u) + 20u * definition);
    }
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F400u, 1u, (uint32[]){entity});
            return;
        case 5:
            w_u8(entity, r_u8(entity) & 0xBFu);
            sf_draft_call(0x80029F34u, 2u, (uint32[]){1u, entity});
            return;
        case 6:
            w_u8(entity, r_u8(entity) | 0x40u);
            sf_draft_call(0x80029EF4u, 3u, (uint32[]){1u, type == 47 ? 38u : 24u, entity});
            goto NOTIFY;
        case 10:
            if (!(r_u8(entity) & 0x40u))
                return;
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[0] = r_u32(node + 20u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[1] = r_u32(node + 24u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[2] = r_u32(node + 28u);
            position[1] = 0u - position[1];
            if (sub_800EC8F4() & 1u)
            {
                effect = r_u32(0x8010B754u + 4u * ((r_u32(0x80116A88u) ^ 1u) & 1u));
                sf_draft_call(0x8005123Cu, 3u, (uint32[]){sf_draft_guest_address(position), 16u, effect});
            }
        NOTIFY:
            identity = r_s16(entity + 2u);
            sub_80015364(10u, 4u, identity, identity, 0, 0, 0, 0);
            return;
        case 41:
            output = sf_character_event_read(event_address + 12u, 4u);
            sf_character_event_write(output, r_u32(entity + 4u), 4u);
            return;
        case 42:
            output = sf_character_event_read(event_address + 12u, 4u);
            w_u32(entity + 4u, sf_character_event_read(output, 4u));
            return;
        default:
            return;
    }
}

void sub_8015037C(uint32 entity, sint32 type)
{
    uint32 model, flags, state;
    sint32 identity;
    FUNCTION_MARKER(0x8015037Cu, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 14u);
    sub_8014C94C((sint16)identity, 0u);
    if ((uint32)type - 121u < 2u || (uint32)type - 123u < 2u)
    {
        model = r_u32(entity + 8u);
        w_u32(model + 24u, 0u);
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 16u);
    }
    else
    {
        model = r_u32(entity + 8u);
        w_u8(model + 9u, 64u);
    }
    model = r_u32(entity + 8u);
    w_u8(model + 11u, r_u8(model + 11u) | 1u);
    flags = r_u8(entity);
    w_u8(entity, (uint8)(flags & 0x9Fu));
    if (type == 28 || type == 122)
        w_u8(entity, r_u8(entity) | 0x10u);
    else
        w_u8(entity, (uint8)(flags & 0x8Fu));
    if (type != 58)
    {
        flags = r_u8(entity + 32u);
        state = r_u32(entity + 24u);
        w_u8(entity + 32u, (uint8)(flags | 0x80u));
        w_u16(state + 6u, 0x7FFFu);
        w_u16(state + 8u, 0x7FFFu);
    }
    if (!(type == 28 || type == 122 || type == 36 || type == 123 || type == 121 || type == 124 || type == 106))
        sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0u);
    sub_8014E748(entity, 32, 32, 16);
    if (type == 65 || type == 106 || type == 58)
        w_u32(entity + 4u, 0xFFFFFFFFu);
    else
        sub_8014EB54(entity);
}

void sub_800912A4(uint32 event_address)
{
    uint32 owner, table, entity, definition, kind, flags, state, model, node, output, callback;
    uint32 position[3], decisions, other, keep;
    sint32 identity, type, sibling;
    FUNCTION_MARKER(0x800912A4u, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = 666;
    if (identity != 666)
    {
        definition = r_u32(table + 76u * (uint32)identity);
        type = (sint16)r_u16(r_u32(0x80116B98u) + 20u * definition);
    }
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8015037Cu, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            sub_80073DF8((sint32)entity);
            sub_80073DD8((sint32)entity);
            goto CHECK_TYPE_65;
        case 6:
            sub_80073CD8((sint32)entity, 1, 0, 1);
            sub_80073D88((sint32)entity, 1, 0, 1, 0);
            goto CHECK_TYPE_65;
        case 10:
        CHECK_TYPE_65:
            if (type == 65)
                sf_draft_call(0x8002AD54u, 1u, (uint32[]){event_address});
            return;
        case 18:
            if (type == 65)
                return;
            flags = r_u8(entity) | 0x40u;
            w_u8(entity, (uint8)flags);
            if (!(flags & 0x20u))
            {
                sub_80015364(20u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
                sf_draft_call(0x8008C358u, 2u, (uint32[]){(uint32)r_s16(entity + 2u), 4u});
            }
            return;
        case 19:
            if (type == 65)
                return;
            flags = r_u8(entity);
            w_u8(entity, (uint8)(flags & 0xBFu));
            if (!(flags & 0x20u))
            {
                sub_80015364(25u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
                sf_draft_call(0x8008C464u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            }
            return;
        case 21:
        case 27:
            flags = r_u8(entity);
            if (flags & 0x10u)
                w_u8(entity, (uint8)(flags & 0xEFu));
            return;
        case 13:
            if (type == 28 || type == 122 || type == 36 || type == 123 || type == 121 || type == 124 || type == 106)
                return;
            if (type != 58)
                goto STATE_EVENT;
            if (sf_character_event_read(event_address + 4u, 4u) != r_u32(0x80116AB0u))
                return;
            sibling = r_s16(entity + 2u);
            keep = 1u;
            do
            {
                table = r_u32(0x80115CCCu);
                sibling = r_s32(table + 76u * (uint32)sibling + 48u);
                if (sibling == -1)
                {
                    keep = 0u;
                    continue;
                }
                other = r_u32(table + 76u * (uint32)sibling + 52u);
                if (other != 0u)
                {
                    state = r_u8(other + 34u);
                    if (state == 4u)
                        keep = 0u;
                    else if (state == 9u)
                    {
                        model = r_u32(other + 8u);
                        if (r_u8(model + 10u) & 8u)
                            sub_800D8F60((sint32)model);
                    }
                }
                sub_80015364(20u, 3u, r_s16(entity + 2u), sibling, 0, 0, 0, 0);
            } while (keep);
            model = r_u32(entity + 8u);
            if (r_u8(model + 10u) & 8u)
                sub_800D8F60((sint32)model);
            else
                w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
            return;
        case 20:
        case 39:
        STATE_EVENT:
            flags = r_u8(entity);
            if (flags & 0x10u)
            {
                sf_draft_call(0x8008D56Cu, 2u, (uint32[]){(uint32)r_s16(entity + 2u), (uint32)type});
                return;
            }
            if (flags & 0x20u)
                return;
            w_u8(entity, (uint8)(flags | 0x20u));
            if (type == 58)
                return;
            if (type == 106)
            {
                if (sf_character_event_read(event_address + 4u, 4u) == r_u32(0x80116AB0u))
                {
                    w_u8(entity, (uint8)(flags & 0xDFu));
                    return;
                }
            }
            else if (!(type == 27 || type == 28 || type == 29 || type == 36 || type == 65 || (type >= 121 && type <= 124)))
                return;
            other = (uint32)sub_8002A634(r_s16(entity + 2u), 99);
            identity = r_s16(other + 2u);
            if (identity != r_s16(entity + 2u) && (r_u32(0x80115FBCu) & (1u << 23)))
                sf_draft_call(0x800453A4u, 1u, (uint32[]){23u});
            model = r_u32(entity + 8u);
            node = r_u32(model + 12u);
            position[0] = r_u32(node + 20u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[1] = r_u32(node + 24u);
            node = r_u32(r_u32(entity + 8u) + 12u);
            position[2] = r_u32(node + 28u);
            position[1] = 0u - position[1];
            state = r_u32(entity + 24u);
            if (r_s16(state + 2u) != 4)
                sub_8006BC98(0, 20u, (sint32)entity, 0u);
            else if (sf_character_event_read(event_address, 2u) != 13u)
            {
                flags = sub_800EC8F4();
                sub_8006BC98(2, (flags & 1u) ? 33u : 34u, (sint32)entity, 0u);
            }
            else
                sf_draft_call(0x8002DE00u, 2u, (uint32[]){entity, sf_character_event_read(event_address + 4u, 4u)});
            decisions = type == 29 || type == 106 ? 1u : 3u;
            callback = r_u32(0x8011639Cu);
            if (callback != 0u)
                decisions = sf_draft_call(callback, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            if (r_u8(entity) & 0x40u)
                sf_draft_call(0x8008CA44u, 1u, (uint32[]){(uint32)r_s16(entity + 2u)});
            if (decisions & 1u)
                sf_draft_call(0x8002A890u, 3u, (uint32[]){(uint32)r_s16(entity + 2u), 20u, 3u});
            if (decisions & 2u)
            {
                if ((r_u8(entity) & 0x40u) && type != 65)
                    sub_80016834((sint32)0x80091230u, 20, (sint32)entity);
                if (sf_character_event_read(event_address, 2u) == 13u)
                {
                    state = r_u32(entity + 24u);
                    w_u16(state + 8u, r_u16(state + 6u));
                }
                w_u8(entity, r_u8(entity) & 0xDFu);
            }
            model = r_u32(entity + 8u);
            flags = r_u8(model + 10u);
            if (flags & 8u)
                w_u8(model + 10u, (uint8)(flags ^ 4u));
            return;
        case 41:
            flags = (r_u8(entity + 35u) >> 1) & 1u;
            output = sf_character_event_read(event_address + 12u, 4u);
            sf_character_event_write(output, flags, 4u);
            output = sf_character_event_read(event_address + 16u, 4u);
            sf_character_event_write(output, r_u8(entity), 2u);
            return;
        case 42:
            output = sf_character_event_read(event_address + 16u, 4u);
            flags = sf_character_event_read(output, 2u);
            w_u8(entity, (uint8)flags);
            if (flags & 0x20u)
            {
                model = r_u32(entity + 8u);
                if (r_u8(model + 10u) & 8u)
                    sub_800D8F60((sint32)model);
            }
            output = sf_character_event_read(event_address + 12u, 4u);
            if (sf_character_event_read(output, 4u) == 0u)
                return;
            w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
            if (type != 58)
                return;
            sibling = r_s16(entity + 2u);
            keep = 1u;
            do
            {
                table = r_u32(0x80115CCCu);
                sibling = r_s32(table + 76u * (uint32)sibling + 48u);
                if (sibling == -1)
                    return;
                other = r_u32(table + 76u * (uint32)sibling + 52u);
                if (other != 0u)
                {
                    state = r_u8(other + 34u);
                    if (state == 4u)
                        keep = 0u;
                    else if (state == 9u)
                    {
                        model = r_u32(other + 8u);
                        if (r_u8(model + 10u) & 8u)
                            sub_800D8F60((sint32)model);
                    }
                }
            } while (keep);
            return;
        default:
            return;
    }
}

void sub_8014EED8(uint32 entity)
{
    uint32 table, type_table, sibling_word, row, other, definition;
    sint32 identity, sibling, type, count = 1;
    FUNCTION_MARKER(0x8014EED8u, "INIT.OVL");
    table = r_u32(0x80115CCCu);
    identity = r_s16(entity + 2u);
    w_u32(entity + 4u, 0xFFFFFFFFu);
    sibling_word = r_u32(table + 76u * (uint32)identity + 48u);
    sibling = (sint16)(uint16)sibling_word;
    if (sibling == -1)
        return;
    type_table = r_u32(0x80116B98u);
    for (;;)
    {
        row = table + 76u * (uint32)sibling;
        other = r_u32(row + 52u);
        type = 666;
        if (sibling != 666)
        {
            definition = r_u32(row);
            type = r_s16(type_table + 20u * definition);
        }
        if (type == 34)
        {
            w_u32(entity + 4u, (uint32)sibling);
            return;
        }
        if (other != 0u && type != 6 && type != 73 && type != 113 && type != 118 && type != 62 && type != 10 && (uint32)type - 96u >= 2u && type != 84 && type != 7 && type != 59 && type != 126)
            return;
        ++count;
        if (count >= 3)
            return;
        table = r_u32(0x80115CCCu);
        sibling_word = r_u32(table + 76u * (uint32)sibling + 48u);
        sibling = (sint16)(uint16)sibling_word;
        if (sibling == -1)
            return;
    }
}

uint32 sub_8008E22C(uint32 entity)
{
    uint32 node, maximum, minimum;
    FUNCTION_MARKER(0x8008E22Cu, "SCUS_942.40");
    node = r_u32(r_u32(entity + 8u) + 16u);
    maximum = r_u32(node + 16u);
    minimum = r_u32(node);
    if ((sint32)(maximum - minimum) >= 225)
        return 1u;
    maximum = r_u32(node + 24u);
    minimum = r_u32(node + 8u);
    return (sint32)(maximum - minimum) >= 225 ? 1u : 0u;
}

void sub_8014F04C(uint32 entity, sint32 type)
{
    uint32 model, node, flags, secondary, cached_secondary, result;
    sint16 identity;
    FUNCTION_MARKER(0x8014F04Cu, "INIT.OVL");
    identity = r_s16(entity + 2u);
    w_u8(entity + 34u, 9u);
    sub_8014C94C(identity, 0u);
    model = r_u32(entity + 8u);
    w_u8(model + 9u, 64u);
    sub_8015389C(entity, 1u);
    if (r_u32(entity + 12u) != 0u)
    {
        sub_80022AA8((sint32)entity, 0);
        w_u8(entity, r_u8(entity) | 0x40u);
    }
    else
        w_u8(entity, r_u8(entity) & 0xBFu);
    secondary = r_u8(entity + 1u);
    flags = r_u8(entity);
    w_u8(entity + 1u, secondary & 0xF8u);
    w_u8(entity, flags & 0xD4u);
    flags = r_u8(entity);
    w_u8(entity, type == 10 || (uint32)type - 96u < 2u || type == 84 ? flags | 0x10u : flags & 0xEFu);
    if (type == 73 || type == 96 || type == 59 || type == 118 || type == 84 || type == 62)
    {
        w_u8(entity + 1u, r_u8(entity + 1u) | 0x80u);
        if (type == 62)
        {
            secondary = r_u8(entity + 1u);
            flags = r_u8(entity);
            w_u8(entity, flags & 0xFBu);
            w_u8(entity + 1u, secondary & 0xF8u);
            sub_80048884((sint32)entity, 0, 0, 0, 0);
            sub_800223E0((sint32)entity, 0x2000, 1);
            sub_8006E0D8((sint32)entity, (sint32)r_u32(r_u32(entity + 12u) + 4u), 0x666, 0x800, 1, 0xC00);
        }
    }
    else
    {
        flags = r_u8(entity + 32u);
        secondary = r_u8(entity + 1u);
        w_u8(entity + 32u, flags | 0x80u);
        w_u8(entity + 1u, secondary & 0x7Fu);
        if (type == 126)
        {
            flags = r_u8(entity);
            model = r_u32(entity + 8u);
            w_u8(entity, flags | 5u);
            w_u8(model + 8u, r_u8(model + 8u) | 8u);
        }
    }
    if (type == 113 || type == 118)
    {
        sub_80032784((sint32)entity, (sint32)0x8012C8B0u, 0, 0);
        w_u8(entity + 32u, r_u8(entity + 32u) | 0x10u);
    }
    model = r_u32(entity + 8u);
    w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
    node = r_u32(r_u32(entity + 8u) + 16u);
    w_u32(node + 40u, r_u32(node + 40u) | 0x8000u);
    cached_secondary = r_u8(entity + 1u) & 0x80u;
    w_u8(entity + 1u, cached_secondary);
    if (type == 59 || type == 7)
        w_u8(entity + 1u, cached_secondary);
    else
    {
        result = sf_draft_call(0x8008E22Cu, 1u, &entity);
        w_u8(entity + 1u, cached_secondary | ((result & 0xFFu) ? 15u : 6u));
    }
    w_u32(entity + 4u, 0xFFFFFFFFu);
    if (type != 62)
        sf_draft_call(0x8014EED8u, 1u, &entity);
    if ((r_u32(entity) & 0x8040u) == 0x40u)
    {
        flags = r_u8(entity);
        model = r_u32(entity + 8u);
        w_u8(entity, flags | 0x80u);
        w_u8(model + 11u, r_u8(model + 11u) | 8u);
    }
}

void sub_8008EDEC(uint32 event_address)
{
    uint32 owner, table, entity, row, model, state, other, flags, secondary, kind, output, value;
    uint32 position[4], other_position[4], first_path[3], second_path[3];
    sint32 identity, type, sibling, sibling_type;
    FUNCTION_MARKER(0x8008EDECu, "SCUS_942.40");
    owner = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * owner + 52u);
    identity = r_s16(entity + 2u);
    type = 666;
    if (identity != 666)
    {
        value = r_u32(table + 76u * (uint32)identity);
        row = r_u32(0x80116B98u);
        type = r_s16(row + 20u * value);
    }
    kind = sf_character_event_read(event_address, 2u);
    switch (kind)
    {
        case 2:
            sf_draft_call(0x8014F04Cu, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 5:
            if (!(r_u8(entity + 1u) & 0x80u))
                sub_80073DF8((sint32)entity);
            sub_80073DD8((sint32)entity);
            return;
        case 6:
            if (!(r_u8(entity + 1u) & 0x80u))
                sub_80073CD8((sint32)entity, 1, 0, (r_u8(entity + 32u) >> 4) & 1u);
            sub_80073D88((sint32)entity, 1, 0, 1, 1);
            return;
        case 10:
            if (!(r_u8(entity) & 0x10u))
                goto apply_type;
            return;
        case 13:
            if (r_s16(r_u32(entity + 24u) + 8u) > 0 || !(r_u8(entity + 32u) & 0x10u))
                return;
            model = r_u32(entity + 8u);
            if (r_u8(model + 10u) & 8u)
            {
                sub_800D8F60((sint32)model);
                sf_draft_call(0x800CD1ECu, 1u, &entity);
            }
            else
            {
                w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
                sf_draft_call(0x8002A404u, 1u, &entity);
            }
            return;
        case 18:
            flags = r_u8(entity);
            if (flags & 0x10u)
                sf_draft_call(0x8008C358u, 2u, (uint32[]){(uint32)(sint32)r_s16(entity + 2u), 3u});
            else if (!(flags & 0x20u) && type != 97 && type != 84)
                sub_80015364(24u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            return;
        case 19:
            flags = r_u8(entity);
            if (!(flags & 0x20u))
            {
                if (flags & 0x10u)
                    sf_draft_call(0x8008C464u, 1u, (uint32[]){(uint32)(sint32)r_s16(entity + 2u)});
                else if (type != 97 && type != 84)
                    sub_80015364(25u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            }
            return;
        case 20:
            flags = r_u8(entity);
            if ((flags & 8u) && (type == 7 || type == 59))
                return;
            if (type == 97 || type == 84)
            {
                value = r_u8(entity + 35u);
                w_u8(entity, flags & 0xEFu);
                state = r_u32(entity + 24u);
                w_u8(entity + 35u, value | 2u);
                w_u16(state + 8u, 0xFFFFu);
                return;
            }
            goto activate;
        case 21:
        activate:
            flags = r_u8(entity);
            secondary = r_u8(entity + 1u);
            w_u8(entity, flags | 8u);
            if (!(secondary & 0x80u))
                sf_draft_call(0x8002A404u, 1u, &entity);
            if (type == 62)
                goto activate_group;
            sf_draft_call(0x8008E3F0u, 1u, &entity);
            if (type == 126)
                sf_draft_call(0x8008E3BCu, 1u, &entity);
            goto apply_type;
        case 24:
        activate_group:
            if (r_u8(entity) & 0x10u)
                return;
            sf_draft_call(0x8008E3F0u, 1u, &entity);
            switch (type)
            {
                case 6:
                case 10:
                case 73:
                case 96:
                case 113:
                case 118:
                case 126:
                    sf_draft_call(0x8008E280u, 2u, (uint32[]){entity, sf_character_event_read(event_address + 4u, 4u)});
                    identity = r_s16(entity + 2u);
                    table = r_u32(0x80115CCCu);
                    sibling = r_s32(table + 76u * (uint32)identity + 48u);
                    while (sibling != -1)
                    {
                        row = 76u * (uint32)sibling;
                        other = r_u32(table + row + 52u);
                        if (other && r_u8(other + 34u) == 9u)
                        {
                            w_u8(other, r_u8(other) | 0x28u);
                            sf_draft_call(0x8008E280u, 2u, (uint32[]){other, sf_character_event_read(event_address + 4u, 4u)});
                            if (!(r_u8(other + 1u) & 0x80u))
                                sf_draft_call(0x8002A404u, 1u, &other);
                            if (type == 126)
                                sf_draft_call(0x8008E3BCu, 1u, &entity);
                            sibling_type = 666;
                            if (sibling != 666)
                            {
                                value = r_u32(0x80115CCCu);
                                value = r_u32(value + row);
                                value = 20u * value;
                                sibling_type = r_s16(r_u32(0x80116B98u) + value);
                            }
                            sf_draft_call(0x8008E764u, 2u, (uint32[]){other, (uint32)sibling_type});
                        }
                        table = r_u32(0x80115CCCu);
                        sibling = r_s32(table + 76u * (uint32)sibling + 48u);
                    }
                    break;
                case 62:
                    if (r_u8(entity) & 0x20u)
                        return;
                    w_u8(entity + 1u, (r_u8(entity + 1u) & 0xF8u) | 2u);
                    sub_800489F8((sint32)entity);
                    state = r_u32(entity + 12u);
                    w_u32(state + 240u, r_u32(state + 240u) + 279620u);
                    state = r_u32(entity + 12u);
                    w_u32(state + 244u, r_u32(state + 244u));
                    state = r_u32(entity + 12u);
                    w_u32(state + 248u, r_u32(state + 248u));
                    sub_8006BC98(0, 27u, (sint32)entity, 0u);
                    break;
                default:
                    break;
            }
            flags = r_u8(entity);
            secondary = r_u8(entity + 1u);
            w_u8(entity, flags | 0x28u);
            if (!(secondary & 0x80u))
                sf_draft_call(0x8002A404u, 1u, &entity);
            if (sf_character_event_read(event_address, 2u) == 24u)
                sub_80015364(25u, 3u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
        apply_type:
            sf_draft_call(0x8008E764u, 2u, (uint32[]){entity, (uint32)type});
            return;
        case 26:
            if ((r_u8(entity + 1u) & 7u) != 4u)
                sub_80015364(26u, 4u, r_s16(entity + 2u), (sint32)r_u32(0x80116AB0u), 0, 0, 0, 0);
            if (type == 126 || (r_u32(entity) & 0x8048u) != 0x48u)
                return;
            owner = sf_character_event_read(event_address + 4u, 4u);
            table = r_u32(0x80115CCCu);
            flags = r_u8(entity);
            other = r_u32(table + 76u * owner + 52u);
            if (!(flags & 0x80u))
                return;
            state = r_u32(entity + 12u);
            sub_800229F0((sint32)entity, 0, sf_draft_guest_address(first_path));
            sub_800229F0((sint32)entity, 1, sf_draft_guest_address(second_path));
            if ((sint32)first_path[1] < (sint32)second_path[1] && r_u32(state + 364u) == 1u)
                goto compare_height;
            if ((sint32)second_path[1] >= (sint32)first_path[1] || r_u32(state + 364u) != 0u)
                return;
        compare_height:
            position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
            position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            position[1] = 0u - position[1];
            other_position[0] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 20u);
            other_position[1] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 24u);
            other_position[2] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 28u);
            other_position[1] = 0u - other_position[1];
            if ((sint32)other_position[1] >= (sint32)position[1])
                return;
            w_u8(entity, r_u8(entity) & 0x7Fu);
            if (r_u32(state + 364u))
            {
                w_u32(state + 356u, 1u);
                w_u32(state + 364u, 0u);
            }
            else
            {
                w_u32(state + 356u, 0u);
                w_u32(state + 364u, 1u);
            }
            if (type == 7)
                w_u8(entity, r_u8(entity) ^ 5u);
            return;
        case 27:
            flags = r_u8(entity);
            if (flags & 0x10u)
                w_u8(entity, flags & 0xEFu);
            return;
        case 41:
            value = r_u8(entity + 35u);
            flags = r_u8(entity);
            output = sf_character_event_read(event_address + 12u, 4u);
            value = (value >> 1) & 1u;
            if (flags & 0x40u)
                value |= r_u32(r_u32(entity + 12u) + 356u) << 16;
            sf_character_event_write(output, value, 4u);
            flags = r_u8(entity);
            if ((flags & 1u) && type != 62)
                w_u8(entity, flags ^ 2u);
            secondary = r_u8(entity + 1u);
            flags = r_u8(entity);
            output = sf_character_event_read(event_address + 16u, 4u);
            sf_character_event_write(output, flags | (secondary << 8), 2u);
            flags = r_u8(entity);
            if ((flags & 1u) && type != 62)
                w_u8(entity, flags ^ 2u);
            return;
        case 42:
            output = sf_character_event_read(event_address + 12u, 4u);
            if (sf_character_event_read(output, 2u))
                w_u8(entity + 35u, r_u8(entity + 35u) | 2u);
            else if (r_s16(r_u32(entity + 24u) + 8u) <= 0)
            {
                model = r_u32(entity + 8u);
                if (r_u8(model + 10u) & 8u)
                    sub_800D8F60((sint32)model);
            }
            output = sf_character_event_read(event_address + 16u, 4u);
            w_u8(entity, sf_character_event_read(output, 1u));
            output = sf_character_event_read(event_address + 16u, 4u);
            secondary = sf_character_event_read(output + 1u, 1u);
            w_u8(entity + 1u, secondary);
            if (type == 62)
            {
                if (!(r_u8(entity) & 1u))
                    return;
                state = r_u32(entity + 12u);
                w_u8(entity + 1u, (secondary & 0xF8u) | 4u);
                position[0] = r_u32(state + 128u);
                position[1] = r_u32(state + 132u);
                position[2] = r_u32(state + 136u);
                position[3] = r_u32(state + 140u);
                value = position[0];
                position[0] += 1012u;
                if ((sint32)position[0] >= 2049)
                    position[0] = value - 3084u;
                else if ((sint32)position[0] < -2048)
                    position[0] = value + 5108u;
                sub_800DBFD4((sint32)r_u32(r_u32(entity + 8u) + 12u), 0, (sint32)sf_draft_guest_address(position));
                return;
            }
            flags = r_u8(entity);
            if (flags & 8u)
            {
                w_u8(entity, (flags & 0xF7u) ^ 1u);
                flags = r_u8(entity);
            }
            if (flags & 0x40u)
            {
                output = sf_character_event_read(event_address + 12u, 4u);
                state = r_u32(entity + 12u);
                value = (uint32)(sint32)(sint16)sf_character_event_read(output + 2u, 2u);
                w_u32(state + 356u, value);
                state = r_u32(entity + 12u);
                w_u32(state + 364u, r_u32(state + 356u) != 0u);
                state = r_u32(entity + 12u);
                sub_80022AA8((sint32)entity, r_s32(state + 356u));
            }
            else if (flags & 1u)
            {
                sub_800EC8E4(sf_draft_guest_address(other_position), 0u, 16u);
                other_position[0] = 0u;
                other_position[1] = (r_u8(entity) & 2u) ? 1024u : (uint32)-1024;
                other_position[2] = 0u;
                memcpy(position, other_position, sizeof(position));
                sf_draft_call(0x800DBED8u, 2u, (uint32[]){r_u32(r_u32(entity + 8u) + 12u), sf_draft_guest_address(position)});
                w_u8(entity, r_u8(entity) ^ 2u);
            }
            return;
        default:
            return;
    }
}

void sf_subway_80147144(uint32 event_address)
{
    FUNCTION_MARKER(0x80147144u, "SUBWAY.OVL");
    /* Unverified translation from complete original MIPS; pseudocode unavailable */
    uint32 entity, table, row, model, transform, other, value, flags, index, link;
    uint32 position[3], current[3], sibling[3], args[7];
    uint8 output[8];
    sint32 identity, vertical, distance;
    uint32 type = 666u, event;

    index = sf_character_event_read(event_address + 8u, 4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * index + 52u);
    identity = r_s16(entity + 2u);
    if (identity != 666)
    {
        value = r_u32(table + 76u * (uint32)identity);
        type = r_u16(r_u32(0x80116B98u) + 20u * value);
    }
    event = sf_character_event_read(event_address, 2u);
    switch (event)
    {
        case 2:
            identity = r_s16(entity + 2u);
            w_u8(entity + 34u, 7u);
            sub_8014C94C((sint16)identity, 0u);
            sub_8015389C(entity, 1u);
            model = r_u32(entity + 8u);
            w_u8(model + 10u, r_u8(model + 10u) | 0x20u);
            model = r_u32(entity + 8u);
            transform = r_u32(model + 16u);
            w_u32(transform + 40u, r_u32(transform + 40u) | 0x8000u);
            flags = r_u8(entity);
            model = r_u32(entity + 8u);
            w_u8(entity, flags & 0xB7u);
            w_u8(model + 9u, 0x80u);
            w_u8(entity + 33u, 150u);
            return;
        case 5:
            sub_80073DF8((sint32)entity);
            sub_80073DD8((sint32)entity);
            w_u8(entity, r_u8(entity) & 0xBFu);
            return;
        case 6:
            sub_80073CD8((sint32)entity, 1, 0, 0);
            identity = r_s16(entity + 2u);
            table = r_u32(0x80115CCCu);
            value = r_u32(table + 76u * (uint32)identity + 48u);
            sub_80073D88((sint32)entity, 1, 0, 1, value != 0xFFFFFFFFu);
            w_u8(entity, r_u8(entity) | 0x40u);
            return;
        case 18:
            if (!(r_u8(entity) & 8u) && (sint16)type == 30)
            {
                args[0] = 0u;
                sf_draft_call(0x80147B68u, 1u, args);
            }
            return;
        case 26:
            other = r_u32(0x80116B9Cu);
            if (r_s16(r_u32(other + 24u) + 8u) <= 0)
                return;
            value = r_u32(0x80116AB0u);
            if (value != sf_character_event_read(event_address + 4u, 4u))
                return;
            args[0] = other;
            args[1] = entity;
            args[2] = 96u;
            sf_draft_call(0x8006A330u, 3u, args);
            return;
        case 41:
            value = sf_character_event_read(event_address + 16u, 4u);
            flags = r_u8(entity);
            sf_character_event_write(value, flags, 2u);
            return;
        case 42:
            value = sf_character_event_read(event_address + 16u, 4u);
            flags = sf_character_event_read(value, 2u);
            w_u8(entity, flags);
            return;
        case 10:
            break;
        default:
            return;
    }
    if (!r_u32(entity + 12u) || !(r_u8(entity) & 8u))
        return;
    index = r_u8(entity + 1u);
    value = sf_draft_call(0x80146FF8u, 0u, NULL);
    if (index != value)
        goto update_animation;
    identity = r_s16(entity + 2u);
    table = r_u32(0x80115CCCu);
    row = table + 76u * (uint32)identity;
    if (r_u32(row + 48u) == 0xFFFFFFFFu)
    {
        other = r_u32(0x80116B9Cu);
        position[0] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 20u);
        position[1] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 24u);
        position[2] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 28u);
        flags = r_u8(0x80149B00u);
        position[1] = 0u - position[1];
        if (flags & 0x40u)
            goto update_animation;
        index = r_u8(entity + 1u);
        link = r_u8(0x80149AFCu + index);
        value = r_u16(0x80149AE4u + 10u * index + 2u * link - 2u);
        transform = r_u32(r_u32(entity + 8u) + 12u);
        other = r_u32(table + 76u * value + 52u);
        current[0] = r_u32(transform + 20u);
        current[1] = r_u32(transform + 24u);
        current[2] = r_u32(transform + 28u);
        current[1] = 0u - current[1];
        sibling[0] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 20u);
        sibling[1] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 24u);
        sibling[2] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 28u);
        vertical = (sint32)(position[1] - current[1]);
        sibling[1] = 0u - sibling[1];
        if (vertical < 0)
            vertical = (sint32)(0u - (uint32)vertical);
        if (vertical >= 1120)
            goto update_animation;
        args[0] = sf_draft_guest_address(position);
        args[1] = sf_draft_guest_address(current);
        distance = (sint32)sf_draft_call(0x80016B14u, 2u, args);
        if (distance >= r_s32(0x80149ADCu))
            goto update_animation;
        args[0] = sf_draft_guest_address(position);
        args[1] = sf_draft_guest_address(sibling);
        if (distance >= (sint32)sf_draft_call(0x80016B14u, 2u, args))
            goto update_animation;
        flags = r_u8(0x80149B00u);
        w_u8(0x80149B00u, flags | 0x40u);
        if (!((flags | 0x40u) & 0x80u) && (r_u8(0x80149910u) & 8u))
        {
            w_u8(0x80149B00u, flags | 0xC0u);
            index = r_u8(entity + 1u);
            value = r_u16(0x80149AE8u + 10u * index);
            table = r_u32(0x80115CCCu);
            other = r_u32(table + 76u * value + 52u);
            model = r_u32(other + 8u);
            model = r_u32(model + 12u);
            sub_80020724(0x80149A94u, -1, 1, 0x801498DCu, model, 0u);
        }
        flags = r_u8(0x80149B01u);
        w_u8(0x80149B01u, flags | 1u);
        sub_8006BC98(0, 24u, 0, 0u);
        w_u32(0x80149AD8u, transform);
        sub_800CD710((sint32)0x80149A54u, (sint32)transform, 0);
        args[0] = 0x80149A54u;
        sf_draft_call(0x800CD734u, 1u, args);
    }
    else
    {
        if (!(r_u8(0x80149B00u) & 0x40u))
            goto update_animation;
        index = r_u8(entity + 1u);
        link = r_u8(0x80149AFCu + index);
        value = r_u16(0x80149AE4u + 10u * index + 2u * link - 2u);
        other = r_u32(table + 76u * value + 52u);
        if (other != entity)
            goto update_animation;
        value = r_u16(0x80149AE4u + 10u * index);
        other = r_u32(table + 76u * value + 52u);
        transform = r_u32(r_u32(other + 8u) + 12u);
        sibling[0] = r_u32(transform + 20u);
        sibling[1] = r_u32(transform + 24u);
        sibling[2] = r_u32(transform + 28u);
        sibling[1] = 0u - sibling[1];
        current[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
        current[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
        current[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
        current[1] = 0u - current[1];
        other = r_u32(0x80116B9Cu);
        position[0] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 20u);
        position[1] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 24u);
        position[2] = r_u32(r_u32(r_u32(other + 8u) + 12u) + 28u);
        vertical = (sint32)((0u - position[1]) - current[1]);
        position[1] = 0u - position[1];
        if (vertical < 0)
            vertical = (sint32)(0u - (uint32)vertical);
        if (vertical < 1120)
        {
            args[0] = sf_draft_guest_address(position);
            args[1] = sf_draft_guest_address(current);
            distance = (sint32)sf_draft_call(0x80016B14u, 2u, args);
        }
        else
            distance = (sint32)(r_u32(0x80149ADCu) + 1u);
        if (vertical < 1120)
        {
            if (distance < r_s32(0x80149AE0u))
                goto update_animation;
            args[0] = sf_draft_guest_address(position);
            args[1] = sf_draft_guest_address(sibling);
            if (distance >= (sint32)sf_draft_call(0x80016B14u, 2u, args))
                goto update_animation;
        }
        flags = r_u8(0x80149B00u);
        w_u8(0x80149B00u, flags & 0xBFu);
        if (flags & 0x80u)
        {
            w_u8(0x80149B00u, flags & 0x3Fu);
            args[0] = 0x80149A94u;
            sf_draft_call(0x800208CCu, 1u, args);
        }
        w_u8(0x80149B01u, r_u8(0x80149B01u) & 0xFEu);
        sub_8006BE10(0, 24);
        args[0] = 0x80149A54u;
        sf_draft_call(0x800CD790u, 1u, args);
    }
update_animation:
    /* Unrecorded dependencies remain named fail-fast dispatcher boundaries */
    args[0] = entity;
    args[1] = 0x8010B760u;
    args[2] = 2u;
    args[3] = 0u;
    args[4] = 0xFFFFFFFFu;
    args[5] = 0xFFFFFFFFu;
    args[6] = sf_draft_guest_address(output);
    sf_draft_call(0x80022D10u, 7u, args);
    identity = r_s16(entity + 2u);
    table = r_u32(0x80115CCCu);
    if (r_u32(table + 76u * (uint32)identity + 48u) == 0xFFFFFFFFu && output[0])
    {
        args[0] = r_u8(entity + 1u);
        args[1] = 0u;
        sf_draft_call(0x80147A18u, 2u, args);
    }
    if (r_u8(entity) & 8u)
    {
        identity = r_s16(entity + 2u);
        sub_80015364(10u, 4u, identity, identity, 0, 0, 0, 0);
    }
}

sint32 sub_80092590(void)
{
    FUNCTION_MARKER(0x80092590u, "SCUS_942.40");
    uint32 player, parameters, value, energy, saved_a, saved_b, index;
    sint16 level;
    player = r_u32(0x80116B9Cu);
    parameters = r_u32(player + 24u);
    if (r_s16(parameters + 8u) < 10)
        w_u16(parameters + 8u, 10u);
    player = r_u32(0x80116B9Cu);
    parameters = r_u32(player + 24u);
    w_u16(0x80121974u, r_u16(parameters + 8u));
    parameters = r_u32(player + 24u);
    saved_a = r_u32(0x80115FBCu);
    energy = r_u16(parameters + 6u);
    saved_b = r_u32(0x80115FB8u);
    w_u32(0x801218C4u, saved_a);
    w_u32(0x801218C0u, saved_b);
    w_u16(0x80121976u, energy);
    for (index = 0u; index < 26u; ++index)
    {
        /* Both original LWL/LWR and SWL/SWR accesses cover the same aligned word */
        value = r_u32(0x8012F0B0u + 4u * index);
        value = r_u32(0x8012F0B0u + 4u * index);
        w_u32(0x801218C8u + 4u * index, value);
        w_u32(0x801218C8u + 4u * index, value);
    }
    value = r_u32(0x80116A88u);
    level = r_s16(0x80130C88u);
    w_u32(0x80121950u, value);
    if (r_u8(0x801217BCu) != (sint32)level)
    {
        w_u8(0x801217BCu, (uint8)level);
        sf_draft_call(0x800924D0u, 0u, NULL);
    }
    return 1;
}

uint32 sf_subway_80148ED0(void)
{
    FUNCTION_MARKER(0x80148ED0u, "SUBWAY.OVL");
    /* Unverified translation from complete MIPS; incoming phase is unused */
    uint32 object, saved, flags, row, entity, model, value, table, index = 0u;
    uint32 once = 0u, args[5], sibling;
    sint32 type, identity, first = -1, second = -1;
    object = sub_800CC7C4(0x80149808u, 0x8014980Cu, 4u, 2u, 0);
    w_u32(0x801498ECu, object);
    w_u8(object + 9u, 32u);
    w_u8(0x801498F4u, 1u);
    object = sub_800CC7C4(0x8014981Cu, 0x80149820u, 4u, 2u, 0);
    w_u32(0x801498F0u, object);
    w_u8(object + 9u, 32u);
    flags = r_u8(0x80149910u);
    w_u8(0x801498F8u, 1u);
    w_u32(0x8014990Cu, 0u);
    w_u32(0x80149B04u, 0xFFFFFFFFu);
    w_u8(0x80149910u, flags & 0xE8u);
    sf_draft_call(0x8005A17Cu, 0u, NULL);
    sub_8003CD50();
    args[0] = 5760u;
    args[1] = 5760u;
    args[2] = 120u;
    args[3] = 13u;
    args[4] = 6u;
    sf_draft_call(0x80146CF0u, 5u, args);
    sub_80092308(0x80149830u, 0u);
    saved = r_u32(0x8011699Cu);
    if (r_u32(saved + 24u) == 0u)
    {
        sub_80017ED8(0u, 0xFFFFFFFFu);
        sub_80017ED8(4u, 0xFFFFFFFFu);
        saved = r_u32(0x8011699Cu);
        if (saved)
        {
            value = r_u32(saved + 8u);
            for (index = 0u; (sint32)index < (sint32)value; ++index)
                w_u32(saved + 36u, r_u32(saved + 36u) | (1u << (index & 31u)));
            saved = r_u32(0x8011699Cu);
            if (saved)
                w_u32(saved + 28u, r_u32(saved + 28u) & ~16u);
        }
        sub_80016834((sint32)0x800212E4u, 20, (sint32)0x80017D78u);
    }
    saved = r_u32(0x80149834u);
    w_u32(saved + 16u, 0x80127D70u);
    sub_8006BE10(0, 24);
    sub_800686E4(0x80147E48u);
    sub_800686F4(0x80148168u);
    sub_8001745C(0x801484CCu);
    sub_8001746C(0x80148548u);
    saved = r_u32(0x8011699Cu);
    value = 0x80148590u;
    if (saved && (r_u32(saved + 24u) & 10u))
        value = 0u;
    sub_8001747C(value);
    sub_80066F50((sint32)0x80066848u);
    sub_80091CF8((sint32)0x801485B8u);
    sub_80091220((sint32)0x8014860Cu);
    sub_8002D2C8((sint32)0x801487C4u);
    sub_8002D2D8((sint32)0x801488C8u);
    sub_8002D2E8((sint32)0x80148BACu);
    sub_8008BE80((sint32)0x80148C98u);
    sub_8008BE90((sint32)0x80148DB4u);
    index = 0u;
    while ((sint32)index < r_s32(0x80116A5Cu))
    {
        table = r_u32(0x80115CCCu);
        row = table + 76u * index;
        entity = r_u32(row + 52u);
        type = 666;
        if (index != 666u)
        {
            value = r_u32(row);
            type = r_s16(r_u32(0x80116B98u) + 20u * value);
        }
        if (type == 1)
        {
            identity = r_s16(entity + 2u);
            if (identity == r_s16(0x80116AAEu) && r_s16(r_u32(entity + 24u) + 8u) <= 0)
                w_u8(0x80149910u, r_u8(0x80149910u) | 1u);
            goto next_entity;
        }
        if (type == 56)
        {
            args[0] = (uint32)(sint32)(sint16)(uint16)index;
            sf_draft_call(0x8015050Cu, 1u, args);
            goto next_entity;
        }
        if (type == 44 && !once)
        {
            model = r_u32(entity + 8u);
            model = r_u32(model + 16u);
            once = 1u;
            w_u32(model + 20u, r_u32(model + 20u) + 32u);
            goto next_entity;
        }
        if (r_u8(entity + 34u) == 7u)
        {
            row = r_u32(0x80115CCCu) + 76u * index;
            if (r_u32(row + 48u) == 0xFFFFFFFFu)
            {
                args[0] = entity;
                sf_draft_call(0x80146DA0u, 1u, args);
                goto next_entity;
            }
        }
        if (type == 29 || type == 124)
        {
            if (r_u8(entity) & 0x20u)
                w_u8(0x80149910u, r_u8(0x80149910u) | 4u);
        }
        else if (type == 93)
        {
            args[0] = (uint32)(sint32)r_s16(0x80130C88u);
            args[1] = 97u;
            args[2] = index;
            if (!(sf_draft_call(0x8006C9A0u, 3u, args) & 255u))
                goto next_entity;
            row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)(sint16)(uint16)index;
            if (!(r_u16(row + 36u) & 32u))
                goto next_entity;
            saved = r_u32(0x8011699Cu);
            if (saved && (r_u32(saved + 16u) & 1u))
                goto next_entity;
            sub_80016834((sint32)0x801486DCu, 5, (sint32)r_u32(0x8014990Cu));
        }
        else if (type == 95)
        {
            table = r_u32(0x80115CCCu);
            row = table + 76u * index;
            sibling = r_u32(row + 48u);
            if (sibling != 0xFFFFFFFFu)
            {
                if (sibling != 666u)
                {
                    value = r_u32(table + 76u * sibling);
                    identity = r_s16(r_u32(0x80116B98u) + 20u * value);
                    if (identity == 46)
                        goto special_entity;
                }
                row = table + 76u * (uint32)(sint32)(sint16)(uint16)index;
                if (r_u16(row + 36u) & 32u)
                {
                    w_u8(0x80149910u, r_u8(0x80149910u) | 4u);
                    goto next_entity;
                }
            }
        special_entity:
            row = r_u32(0x80115CCCu) + 76u * index;
            if (r_u32(row + 40u) == 5u)
                w_u32(0x80149B04u, index);
        }
        else if (type == 88)
        {
            model = r_u32(entity + 8u);
            w_u8(model + 8u, r_u8(model + 8u) & 0xF7u);
            w_u8(entity, r_u8(entity) | 32u);
        }
        else if (type == 5)
        {
            w_u32(0x8014990Cu, entity);
            w_u8(entity, r_u8(entity) | 8u);
            entity = r_u32(0x8014990Cu);
            w_u32(0x801498FCu, r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u));
            value = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
            w_u32(0x80149900u, value);
            saved = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
            w_u32(0x80149900u, 0u - value);
            w_u32(0x80149904u, saved);
            if (r_s16(r_u32(entity + 24u) + 8u) <= 0)
                w_u8(0x80149910u, r_u8(0x80149910u) | 2u);
        }
        else if (type == 46)
        {
            args[0] = index;
            if ((sint16)(uint16)sf_draft_call(0x80147D88u, 1u, args) == 1)
            {
                saved = (uint32)sub_8002A634((sint16)(uint16)index, 53);
                if (r_s16(r_u32(saved + 24u) + 8u) <= 0)
                    w_u32(0x8011698Cu, r_u32(0x8011698Cu) + 1u);
            }
        }
        else if (type == 115)
        {
            row = r_u32(0x80115CCCu) + 76u * index;
            if (r_u32(row + 40u) == 1u)
                first = (sint32)index;
            else
                second = (sint32)index;
        }
    next_entity:
        index += 1u;
    }
    value = r_u16(0x80149AE4u);
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * value + 52u);
    if (entity && (r_u8(entity) & 8u))
    {
        args[0] = 1u;
        sf_draft_call(0x80147B68u, 1u, args);
    }
    if (first != -1 && second != -1)
    {
        row = r_u32(0x80115CCCu) + 76u * (uint32)(sint32)(sint16)second;
        identity = (r_u16(row + 36u) & 32u) ? second : first;
        args[0] = (uint32)identity;
        args[1] = 115u;
        sf_draft_call(0x8002D2F8u, 2u, args);
        args[0] = (uint32)(sint32)(sint16)identity;
        args[1] = 115u;
        sf_draft_call(0x80148BACu, 2u, args);
    }
    identity = r_s16(0x80116AAEu);
    if (identity != -1)
    {
        row = r_u32(0x80115CCCu) + 76u * (uint32)identity;
        entity = r_u32(row + 52u);
        if (r_u8(entity + 34u) == 2u)
        {
            entity = r_u32(row + 52u);
            value = r_u32(0x80149804u);
            saved = r_u32(entity + 28u);
            w_u32(0x80116934u, value);
            w_u8(saved + 71u, 90u);
        }
    }
    w_u16(0x80116A20u, 11u);
    return 11u;
}

uint32 sub_800CC7C4(uint32 first_field, uint32 second_field, uint8 mode, uint8 kind, sint32 priority)
{
    FUNCTION_MARKER(0x800CC7C4u, "SCUS_942.40");
    uint32 object = sub_800DE414(24);
    uint32 node;
    w_u8(object + 8u, 16u);
    w_u32(object + 16u, first_field);
    w_u32(object + 20u, second_field);
    w_u8(object + 4u, mode);
    w_u8(object + 9u, 64u);
    w_u16(object + 6u, priority < 0 ? 0u : (uint16)priority);
    w_u8(object + 5u, kind);
    w_u32(object + 12u, 0u);
    node = (uint32)sub_800DE5E0(0x8011647Cu, (sint32)object);
    w_u32(object, node);
    return object;
}

sint32 sub_8005A17C(void)
{
    FUNCTION_MARKER(0x8005A17Cu, "SCUS_942.40");
    sint32 cursor = 0, identity;
    uint32 entity, state;
    w_u16(0x8011690Eu, 0u);
    do
    {
        identity = r_s32(0x8012F120u + 4u * (uint32)cursor);
        if (identity >= 0)
        {
            w_u16(0x8011690Eu, (uint16)(cursor + 1));
            break;
        }
        ++cursor;
    } while (cursor < 6);
    while (identity >= 0)
    {
        entity = r_u32(r_u32(0x80115CCCu) + 76u * (uint32)identity + 52u);
        state = r_u32(entity + 28u);
        if (state && r_u8(state + 72u) == 0u)
        {
            sub_80059F4C(entity);
            sub_80059FCC((sint32)entity, 1, 0, 1);
        }
        cursor = r_s16(0x8011690Eu);
        identity = -1;
        if (cursor < 6)
        {
            do
            {
                identity = r_s32(0x8012F120u + 4u * (uint32)cursor);
                if (identity >= 0)
                {
                    w_u16(0x8011690Eu, (uint16)(cursor + 1));
                    break;
                }
                ++cursor;
            } while (cursor < 6);
        }
    }
    w_u8(0x801169FCu, 1u);
    return 1;
}

uint32 sf_subway_80146CF0(uint32 near_range, uint32 far_range, sint32 duration, sint32 mode, sint32 rate)
{
    FUNCTION_MARKER(0x80146CF0u, "SUBWAY.OVL");
    uint32 flags;
    sub_800CD6D8(0x80149A54u);
    sub_800CD724(0x80149A54u, duration, mode, rate);
    flags = r_u8(0x80149B00u);
    w_u32(0x80149A6Cu, 40u);
    w_u32(0x80149ADCu, near_range);
    w_u32(0x80149AE0u, far_range);
    w_u8(0x80149B00u, flags & 0xECu);
    return 40u;
}

sint32 sf_subway_80147D88(uint32 entity_index)
{
    FUNCTION_MARKER(0x80147D88u, "SUBWAY.OVL");
    uint32 row, height;
    if (entity_index == 0xFFFFFFFFu)
        return 0;
    row = r_u32(0x80115CCCu) + 76u * entity_index;
    // Preserve the original coordinate reads without recreating its guest frame
    r_u32(r_u32(r_u32(r_u32(row + 52u) + 8u) + 12u) + 20u);
    height = r_u32(r_u32(r_u32(r_u32(row + 52u) + 8u) + 12u) + 24u);
    r_u32(r_u32(r_u32(r_u32(row + 52u) + 8u) + 12u) + 28u);
    height = 0u - height;
    return (sint32)height < 1210 ? 3 : 1;
}

static void sf_init_relink_model(uint32 entity, uint32 reference)
{
    MATRIX matrix = {0};
    uint32 model, field, reference_model, parent, i;
    model = r_u32(entity + 8u);
    if (model + 12u == 0u)
        return;
    field = r_u32(model + 12u);
    if (field == 0u)
        return;
    // TODO Original local matrix padding is unwritten; native padding starts at zero
    matrix.m[0][0] = (sint16)r_u16(field);
    for (i = 1u; i < 9u; ++i)
    {
        field = r_u32(r_u32(entity + 8u) + 12u);
        matrix.m[i / 3u][i % 3u] = (sint16)(uint16)(i & 1u ? 0u - r_u16(field + 2u * i) : r_u16(field + 2u * i));
    }
    matrix.t[0] = (sint32)r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
    matrix.t[1] = (sint32)(0u - r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u));
    matrix.t[2] = (sint32)r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
    if (reference == 0u)
    {
        field = r_u32(entity + 8u) + 12u;
        parent = 0u;
    }
    else
    {
        reference_model = r_u32(reference + 8u);
        field = r_u32(entity + 8u) + 12u;
        parent = r_u32(reference_model + 12u);
    }
    sub_800DB5EC(field, (sint32)parent);
    sub_800DC40C(r_u32(r_u32(entity + 8u) + 12u), 0u, (sint32)sf_draft_guest_address(&matrix));
    sub_800C777C(r_u32(r_u32(entity + 8u) + 12u));
}

void sub_8015050C(sint16 entity_index)
{
    FUNCTION_MARKER(0x8015050Cu, "INIT.MAIN.OVL");
    uint32 table, entity, linked_entity, link_value, type, linked_model, entity_model, height, other_height;
    sint16 link, owner;
    table = r_u32(0x80115CCCu);
    entity = r_u32(table + 76u * (uint32)(sint32)entity_index + 52u);
    owner = r_s16(entity + 2u);
    link_value = r_u32(table + 76u * (uint32)(sint32)owner + 48u);
    link = (sint16)(uint16)link_value;
    if (link == -1)
        return;
    if (link == 666)
        type = 666u;
    else
    {
        type = r_u32(table + 76u * (uint32)(sint32)link);
        type = r_u16(r_u32(0x80116B98u) + 20u * type);
    }
    if ((sint16)(uint16)type != 44)
        return;
    linked_entity = r_u32(r_u32(0x80115CCCu) + 76u * (uint32)(sint32)link + 52u);
    r_u32(r_u32(r_u32(linked_entity + 8u) + 12u) + 20u);
    height = 0u - r_u32(r_u32(r_u32(linked_entity + 8u) + 12u) + 24u);
    r_u32(r_u32(r_u32(linked_entity + 8u) + 12u) + 28u);
    r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
    other_height = 0u - r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
    r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
    entity_model = r_u32(entity + 8u);
    entity_model = r_u32(entity_model + 16u);
    linked_model = r_u32(linked_entity + 8u);
    height = height - other_height + r_u32(entity_model + 20u);
    linked_model = r_u32(linked_model + 16u);
    w_u32(linked_model + 4u, height);
    sf_init_relink_model(linked_entity, 0u);
    sf_init_relink_model(entity, linked_entity);
    owner = r_s16(linked_entity + 2u);
    table = r_u32(0x80115CCCu);
    link = r_s16(table + 76u * (uint32)(sint32)owner + 48u);
    if (link != -1)
    {
        entity = r_u32(table + 76u * (uint32)(sint32)link + 52u);
        sf_init_relink_model(entity, linked_entity);
    }
}

sint32 sub_8006C874(uint32 entity_index)
{
    FUNCTION_MARKER(0x8006C874u, "SCUS_942.40");
    uint32 table;
    switch (r_s16(0x80130C88u))
    {
        case 0:
        case 1:
        case 2:
            table = 0x8010CE8Eu;
            break;
        case 3:
        case 4:
            table = 0x8010CEDAu;
            break;
        case 5:
        case 6:
            table = 0x8010CF0Eu;
            break;
        case 7:
        case 8:
        case 9:
        case 10:
            table = 0x8010CF3Au;
            break;
        case 11:
        case 12:
            table = 0x8010CF5Eu;
            break;
        case 13:
            table = 0x8010CF6Au;
            break;
        case 14:
        case 15:
            table = 0x8010CF7Au;
            break;
        case 16:
            table = 0x8010CF8Eu;
            break;
        case 17:
        case 18:
            table = 0x8010CF96u;
            break;
        case 19:
            table = 0x8010CFAEu;
            break;
        default:
            return 177;
    }
    return r_s16(table + 2u * entity_index);
}

uint32 sub_8006C9A0(uint32 expected_type, uint32 entity_index)
{
    FUNCTION_MARKER(0x8006C9A0u, "SCUS_942.40");
    return (uint32)sub_8006C874(entity_index) == expected_type;
}

uint32 sub_8002D2F8(uint32 entity_index, sint32 expected_type)
{
    FUNCTION_MARKER(0x8002D2F8u, "SCUS_942.40");
    uint32 base = r_u32(0x80115CCCu);
    uint32 selected = base + 76u * entity_index;
    sint32 count = r_s32(0x80116A5Cu);
    uint32 group = r_u32(selected + 40u);
    uint32 index = 0;
    uint32 row = base;
    uint32 types;
    if (count <= 0)
        return selected;
    types = r_u32(0x80116B98u);
    do
    {
        sint32 matches;
        if (index == 666u)
            matches = expected_type == 666;
        else
            matches = expected_type == r_s16(types + 20u * r_u32(row));
        if (matches)
        {
            uint32 destination = base + 76u * (uint32)(sint32)(sint16)index;
            uint32 candidate_group = r_u32(row + 40u);
            uint16 flags = r_u16(destination + 36u);
            if (candidate_group == group)
                flags |= 0x20u;
            else
                flags &= 0xFFDFu;
            w_u16(destination + 36u, flags);
        }
        count = r_s32(0x80116A5Cu);
        ++index;
        row += 76u;
    } while ((sint32)index < count);
    return 0;
}

uint32 sub_80021FC4(void)
{
    FUNCTION_MARKER(0x80021FC4u, "SCUS_942.40");
    uint32 camera = r_u32(0x80115D84u);
    uint32 model, index;
    sub_80018430(camera, sf_draft_guest_address(&model));
    if (camera == 0)
    {
        /* TODO Recover meaningful unwritten model at original SP+10 */
        sf_draft_unbound_stack_field(0x80021FC4u, 0x10u);
    }
    for (index = 0; index < 13u; ++index)
        sub_800C7BF8((sint32)model, 0x80130D38u + 32u * index);
    return 0;
}

uint32 sub_80022024(uint8 enabled)
{
    FUNCTION_MARKER(0x80022024u, "SCUS_942.40");
    uint32 result = enabled;
    if (r_s8(0x80119234u) == -1)
        return result;
    w_u8(0x80119234u, enabled);
    if (enabled)
    {
        sub_80081DBC(r_u32(0x8011922Cu));
        result = (uint32)(sint32)r_s16(r_u32(0x80116A60u) + 84u);
        if (result != 0)
            w_u32(0x80119230u, 0xFFFFFFFFu);
    }
    else
    {
        sub_80081E20(r_u32(0x8011922Cu));
        result = r_u32(0x80119230u);
        if ((sint32)result > 0)
            result = sub_80021FC4();
        w_u32(0x80119230u, 0);
    }
    return result;
}

uint32 sub_800220D4(uint32 mode)
{
    FUNCTION_MARKER(0x800220D4u, "SCUS_942.40");
    if (r_s32(0x80119230u) > 0 || mode == 0)
        sub_80021FC4();
    mode = 0u - mode;
    w_u32(0x80119230u, mode);
    return mode;
}

uint32 sf_subway_80146C18(void)
{
    FUNCTION_MARKER(0x80146C18u, "SUBWAY.OVL");
    uint32 value = r_u8(0x801498F4u);
    if (value == 0)
    {
        uint32 argument = r_u32(0x801498ECu);
        sf_draft_call(0x800CC878u, 1u, &argument);
        w_u8(0x801498F4u, 1u);
    }
    value = r_u8(0x801498F8u);
    if (value == 0)
    {
        uint32 argument = r_u32(0x801498F0u);
        sf_draft_call(0x800CC878u, 1u, &argument);
        value = 1u;
        w_u8(0x801498F8u, value);
    }
    return value;
}

uint32 sf_subway_80147C68(void)
{
    FUNCTION_MARKER(0x80147C68u, "SUBWAY.OVL");
    uint32 flags = r_u8(0x80149B00u);
    uint32 route, entry, count, result = flags & 0x40u;
    if ((flags & 0x10u) == 0)
        return result;
    if (result)
    {
        w_u8(0x80149B00u, flags & 0xBFu);
        flags = r_u8(0x80149B00u);
    }
    if (flags & 0x80u)
    {
        uint32 argument = 0x80149A94u;
        w_u8(0x80149B00u, flags & 0x7Fu);
        sf_draft_call(0x800208CCu, 1u, &argument);
    }
    flags = r_u8(0x80149B00u) & 0xEFu;
    w_u8(0x80149B00u, flags);
    count = flags & 3u;
    route = 0;
    if (count == 0)
        return 0;
    do
    {
        uint32 count_address = 0x80149AFCu + route;
        uint32 list_address = 0x80149AE4u + 10u * route;
        count = r_u8(count_address);
        entry = 0;
        if (count > 0)
        {
            do
            {
                uint32 index = r_u16(list_address + 2u * entry);
                uint32 entity = r_u32(r_u32(0x80115CCCu) + 76u * index + 52u);
                w_u8(entity, r_u8(entity) & 0xF7u);
                count = r_u8(count_address);
                ++entry;
            } while ((sint32)entry < (sint32)count);
        }
        count = r_u8(0x80149B00u) & 3u;
        ++route;
    } while ((sint32)route < (sint32)count);
    return 0;
}

uint32 sf_subway_80148BAC(sint16 entity_index)
{
    FUNCTION_MARKER(0x80148BACu, "SUBWAY.OVL");
    uint32 group = r_u32(r_u32(0x80115CCCu) + 76u * (uint32)(sint32)entity_index + 40u);
    uint32 flags, actor, args[1];
    if (group == 1u)
    {
        flags = r_u8(0x80149910u);
        actor = r_u32(0x80116A60u);
        w_u8(0x80149910u, flags & 0xF7u);
        {
            sint16 depth = r_s16(actor + 2u);
            uint8 config = r_u8(actor + 1u);
            sub_800CB5B8(depth, config);
        }
        args[0] = 1u;
        sf_draft_call(0x80022024u, 1u, args);
        args[0] = 0;
        sf_draft_call(0x800220D4u, 1u, args);
        sf_draft_call(0x80146C18u, 0u, NULL);
        return sf_draft_call(0x80147C68u, 0u, NULL);
    }
    flags = r_u8(0x80149910u);
    actor = r_u32(0x80116A60u);
    w_u8(0x80149910u, flags | 8u);
    sub_800CB5B8(900, r_u8(actor + 1u));
    args[0] = 0;
    sf_draft_call(0x80022024u, 1u, args);
    args[0] = 1u;
    sf_draft_call(0x800220D4u, 1u, args);
    sf_draft_call(0x80146C88u, 0u, NULL);
    args[0] = 0;
    return sf_draft_call(0x80147B68u, 1u, args);
}

uint32 sf_subway_80146DA0(uint32 entity)
{
    FUNCTION_MARKER(0x80146DA0u, "SUBWAY.OVL");
    uint32 flags, slot, index = 0u, value, row, candidate, table, scan, found;
    sint32 count, owner, link;
    flags = r_u8(0x80149B00u) & 0xF3u;
    w_u8(0x80149B00u, flags);
    value = r_u16(entity + 2u);
    w_u16(0x80149AF8u + 2u * (flags & 3u), value);
    w_u8(entity + 1u, r_u8(0x80149B00u) & 3u);
    do
    {
        slot = r_u8(0x80149B00u) & 3u;
        value = r_u16(entity + 2u);
        w_u16(0x80149AE4u + 10u * slot + 2u * index, value);
        slot = r_u8(0x80149B00u) & 3u;
        value = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
        w_u32(0x801499B4u + 80u * slot + 16u * index, value);
        slot = r_u8(0x80149B00u) & 3u;
        value = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
        w_u32(0x801499B8u + 80u * slot + 16u * index, value);
        slot = r_u8(0x80149B00u) & 3u;
        value = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
        w_u32(0x801499BCu + 80u * slot + 16u * index, value);
        slot = r_u8(0x80149B00u) & 3u;
        table = r_u32(0x80115CCCu);
        row = 0x801499B4u + 80u * slot + 16u * index;
        value = r_u32(row + 4u);
        count = r_s32(0x80116A5Cu);
        w_u32(row + 4u, 0u - value);
        found = 0u;
        scan = 0u;
        row = table;
        if (count > 0)
        {
            do
            {
                candidate = r_u32(row + 52u);
                if (candidate && r_u8(candidate + 34u) == 7u)
                {
                    owner = r_s16(candidate + 2u);
                    table = r_u32(0x80115CCCu);
                    link = r_s16(table + 76u * (uint32)owner + 48u);
                    if (link != -1 && r_u32(table + 76u * (uint32)link + 52u) == entity)
                    {
                        entity = candidate;
                        found = 1u;
                        w_u8(entity + 1u, r_u8(0x80149B00u) & 3u);
                        break;
                    }
                }
                scan += 1u;
                count = r_s32(0x80116A5Cu);
                row += 76u;
            } while ((sint32)scan < count);
        }
        index += 1u;
    } while (found);
    slot = r_u8(0x80149B00u) & 3u;
    w_u8(0x80149AFCu + slot, index);
    flags = r_u8(0x80149B00u);
    slot = ((flags & 3u) + 1u) & 3u;
    w_u8(0x80149B00u, (flags & 0xFCu) | slot);
    return slot;
}
