#include "game_draft.h"

uint32 sub_800F2C64(sint32 sequence, sint32 track, uint32 callback)
{
    uint32 address;
    FUNCTION_MARKER(0x800F2C64u, "SCUS_942.40");
    address = 0x8013B988u + 64u * (uint32)(sint32)(sint16)sequence + 4u * (uint32)(sint32)(sint16)track;
    w_u32(address, callback);
    return 0x8013B988u;
}

uint32 sub_800F4D74(sint32 sequence, sint32 track)
{
    uint32 record, cursor, delta, byte, result;
    FUNCTION_MARKER(0x800F4D74u, "SCUS_942.40");
    record = r_u32(0x8013B8C8u + 4u * (uint32)(sint32)(sint16)sequence) + 176u * (uint32)(sint32)(sint16)track;
    cursor = r_u32(record);
    delta = r_u8(cursor);
    w_u32(record, cursor + 1u);
    if (delta == 0u)
        return 0u;
    if ((delta & 0x80u) != 0u)
    {
        delta &= 0x7Fu;
        do
        {
            cursor = r_u32(record);
            delta <<= 7;
            byte = r_u8(cursor);
            w_u32(record, cursor + 1u);
            delta += byte & 0x7Fu;
        } while ((byte & 0x80u) != 0u);
    }
    result = 10u * delta;
    w_u32(record + 0x88u, r_u32(record + 0x88u) + result);
    return result;
}

sint32 sub_800F4E24(sint32 sequence, sint32 track, sint32 bank, uint32 data)
{
    uint32 record, index, cursor, first, second, third, fourth;
    uint32 prefix = 0u, tempo, quotient, remainder, bytes, delta;
    uint32 current, saved, restart, product, frequency, threshold;
    uint32 scaled, numerator;
    FUNCTION_MARKER(0x800F4E24u, "SCUS_942.40");
    record = r_u32(0x8013B8C8u + 4u * (uint32)(sint32)(sint16)sequence) + 176u * (uint32)(sint32)(sint16)track;
    w_u8(record + 0x20u, 1u);
    for (index = 0x15u; index <= 0x1Fu; ++index)
        w_u8(record + index, 0u);
    w_u8(record + 0x14u, 0u);
    w_u8(record + 0x21u, 0u);
    w_u16(record + 0x52u, 1u);
    w_u16(record + 0x50u, 0u);
    w_u8(record + 0x26u, (uint8)bank);
    w_u16(record + 0x56u, 0u);
    w_u32(record + 0x84u, 0u);
    w_u32(record + 0x88u, 0u);
    w_u32(record + 0x8Cu, 0u);
    w_u32(record + 0x90u, 0u);
    w_u16(record + 0x80u, 0u);
    w_u8(record + 0x24u, 0u);
    w_u8(record + 0x25u, 0u);
    for (index = 0u; index < 16u; ++index)
    {
        w_u8(record + 0x27u + index, 64u);
        w_u8(record + 0x37u + index, (uint8)index);
        w_u16(record + 0x60u + 2u * index, 127u);
    }
    w_u32(record, data);
    if ((sint16)track == 0)
    {
        first = r_u8(data);
        if (first == 'S' || first == 'p')
        {
            w_u32(record, data + 5u);
            first = r_u8(data + 5u);
            w_u32(record, data + 6u);
            if (first != 0u)
            {
                sub_800EC914(SF_DRAFT_PTR(char, 0x8001442Cu));
                return -1;
            }
            w_u32(record, data + 8u);
            prefix = 8u;
        }
    }
    else
    {
        w_u32(record, data + 2u);
        prefix = 2u;
    }
    cursor = r_u32(record);
    first = r_u8(cursor);
    w_u32(record, cursor + 1u);
    second = r_u8(cursor + 1u);
    w_u32(record, cursor + 2u);
    cursor = r_u32(record);
    w_u16(record + 0x50u, (uint16)((first << 8) | second));
    first = r_u8(cursor);
    w_u32(record, cursor + 1u);
    second = r_u8(cursor + 1u);
    w_u32(record, cursor + 2u);
    third = r_u8(cursor + 2u);
    tempo = (first << 16) | (second << 8) | third;
    if (tempo == 0u)
        _break(7u, 0u);
    quotient = 60000000u / tempo;
    remainder = 60000000u % tempo;
    w_u32(record, cursor + 3u);
    w_u32(record + 0x8Cu, tempo);
    prefix += 5u;
    w_u32(record + 0x8Cu, quotient + (remainder > (tempo >> 1)));
    cursor = r_u32(record);
    w_u32(record + 0x94u, r_u32(record + 0x8Cu));
    first = r_u8(cursor);
    w_u32(record, cursor + 1u);
    w_u8(record + 0x24u, (uint8)first);
    second = r_u8(cursor + 1u);
    w_u32(record, cursor + 2u);
    w_u8(record + 0x25u, (uint8)second);
    first = r_u8(cursor + 2u);
    w_u32(record, cursor + 3u);
    second = r_u8(cursor + 3u);
    w_u32(record, cursor + 4u);
    third = r_u8(cursor + 4u);
    w_u32(record, cursor + 5u);
    fourth = r_u8(cursor + 5u);
    w_u32(record, cursor + 6u);
    bytes = (first << 24) + (second << 16) + (third << 8);
    bytes |= fourth;
    delta = sub_800F4D74((sint16)sequence, (sint16)track);
    product = (uint32)(sint32)r_s16(record + 0x50u) * r_u32(record + 0x8Cu);
    saved = r_u32(record);
    current = r_u32(record);
    restart = r_u32(record);
    w_u32(record + 8u, current);
    frequency = r_u32(0x8013770Cu);
    w_u32(record + 0x84u, delta);
    w_u32(record + 0x90u, delta);
    w_u32(record + 0x10u, 0u);
    w_u32(record + 0x0Cu, saved);
    w_u32(record + 4u, restart);
    threshold = 60u * frequency;
    prefix += 6u;
    if (10u * product < threshold)
    {
        numerator = 600u * frequency;
        if (product == 0u)
            _break(7u, 0u);
        quotient = numerator / product;
        w_u16(record + 0x52u, (uint16)quotient);
        w_u16(record + 0x54u, (uint16)quotient);
    }
    else
    {
        product = (uint32)(sint32)r_s16(record + 0x50u) * r_u32(record + 0x8Cu);
        scaled = 10u * product;
        if (threshold == 0u)
            _break(7u, 0u);
        quotient = scaled / threshold;
        product = (uint32)(sint32)r_s16(record + 0x50u) * r_u32(record + 0x8Cu);
        remainder = (10u * product) % threshold;
        w_u16(record + 0x52u, 0xFFFFu);
        w_u16(record + 0x54u, (uint16)quotient);
        if (30u * frequency < remainder)
            w_u16(record + 0x54u, (uint16)(quotient + 1u));
    }
    first = r_u16(record + 0x54u);
    w_u16(record + 0x56u, (uint16)first);
    return (sint32)(prefix + bytes);
}

uint32 sub_800F2C94(uint32 data, sint32 bank, sint32 tracks)
{
    static const uint32 callbacks[][2] = {{0x00u, 0x800F4C24u}, {0x04u, 0x800F4D04u}, {0x0Cu, 0x800F4A54u}, {0x08u, 0x800F4774u}, {0x10u, 0x800F4824u}, {0x14u, 0x800F2FA4u}, {0x1Cu, 0x800F33A4u}, {0x20u, 0x800F3474u}, {0x24u, 0x800F3544u}, {0x28u, 0x800F3634u}, {0x2Cu, 0x800F3774u}, {0x30u, 0x800F3874u}, {0x34u, 0x800F39B4u}, {0x38u, 0x800F3A24u}, {0x3Cu, 0x800F36E4u}, {0x40u, 0x800F3A94u}, {0x18u, 0x800F3024u}, {0x44u, 0x800F3B54u}, {0x48u, 0x800F3BE4u}, {0x4Cu, 0x800F3CA4u}, {0x50u, 0x800F3D34u}, {0x54u, 0x800F3DC4u}, {0x58u, 0x800F3F74u}, {0x5Cu, 0x800F4034u}, {0x60u, 0x800F40E4u}, {0x64u, 0x800F4194u}, {0x68u, 0x800F4244u}, {0x6Cu, 0x800F4304u}, {0x70u, 0x800F43B4u}, {0x74u, 0x800F4464u}, {0x78u, 0x800F4544u}, {0x7Cu, 0x800F45E4u}, {0x80u, 0x800F4684u}, {0x84u, 0x800F46B4u}, {0x88u, 0x800F46E4u}, {0x8Cu, 0x800F4714u}, {0x90u, 0x800F4744u}};
    uint32 mask, index, sequence = 0u, found = 0u;
    sint32 bytes;
    FUNCTION_MARKER(0x800F2C94u, "SCUS_942.40");
    mask = r_u32(0x80130F00u);
    if (mask != 0xFFFFFFFFu)
    {
        for (index = 0u; index < sizeof(callbacks) / sizeof(callbacks[0]); ++index)
            w_u32(0x801287E0u + callbacks[index][0], callbacks[index][1]);
        index = 0u;
        for (;;)
        {
            if ((mask & (1u << index)) == 0u)
            {
                sequence = index;
                found = 1u;
            }
            ++index;
            if (index >= 32u)
                break;
            if (found != 0u)
            {
                w_u32(0x80130F00u, r_u32(0x80130F00u) | (1u << sequence));
                if ((sint16)tracks > 0)
                {
                    index = 0u;
                    do
                    {
                        bytes = sub_800F4E24((sint16)sequence, (sint16)index, (sint16)bank, data);
                        data += (uint32)bytes;
                        if (bytes == -1)
                            return 0xFFFFFFFFu;
                        ++index;
                    } while ((sint32)(sint16)index < (sint16)tracks);
                }
                return (uint32)(sint32)(sint16)sequence;
            }
        }
    }
    sub_800EC914(SF_DRAFT_PTR(char, 0x800143FCu));
    return 0xFFFFFFFFu;
}
