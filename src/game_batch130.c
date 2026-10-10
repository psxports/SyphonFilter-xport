#include "game_draft.h"

/* Preserve the original fixed-point signed multiply-high scaling */
static uint32 sf_sequence_signed_scale(uint32 value, uint32 factor, uint32 shift, bool truncate_negative)
{
    sint64 product = (sint64)(sint32)value * (sint64)(sint32)factor;
    uint32 sum = (uint32)(product >> 32) + value;
    if (truncate_negative)
        return (uint32)((sint32)sum >> shift) - (uint32)((sint32)value >> 31);
    return sum >> shift;
}

sint32 sub_800FDAB4(uint16 bank, sint16 program)
{
    uint32 header, programs, tones;
    FUNCTION_MARKER(0x800FDAB4u, "SCUS_942.40");
    if (bank >= 16u)
        return -1;
    if (r_u8(0x80130FF8u + bank) != 1u)
        return -1;
    if (program >= r_s16(0x8012F948u))
        return -1;
    header = r_u32(0x8012CA08u + 4u * bank);
    programs = r_u32(0x8012C988u + 4u * bank);
    tones = r_u32(0x8012CA50u + 4u * bank);
    w_u8(0x80130FD9u, (uint8)bank);
    w_u8(0x80130FDEu, (uint8)program);
    w_u32(0x8012FD00u, tones);
    w_u32(0x8012FCDCu, header);
    w_u32(0x8012FA30u, programs);
    w_u8(0x80130FDFu, r_u8(programs + 16u * (uint32)(sint32)program + 8u));
    return 0;
}

uint32 sub_800FCCF4(sint16 sequence_track, sint16 left_input, sint16 right_input)
{
    uint32 record, voice = 0u, row, channel, product, volume;
    uint32 header, programs, program, tone, left, right, pan, mono;
    sint32 bank;
    bool left_below_limit;
    FUNCTION_MARKER(0x800FCCF4u, "SCUS_942.40");
    record = r_u32(0x8013B8C8u + 4u * (uint8)sequence_track) + 176u * (((uint16)sequence_track & 0xFF00u) >> 8);
    w_u16(record + 88u, (uint16)left_input);
    left_below_limit = r_u16(record + 88u) < 127u;
    w_u16(record + 90u, (uint16)right_input);
    if (!left_below_limit)
        w_u16(record + 88u, 127u);
    if (r_u16(record + 90u) >= 127u)
        w_u16(record + 90u, 127u);
    if (r_s8(0x8012FF90u) <= 0)
        return (uint32)(sint32)sequence_track;
    do
    {
        row = 54u * (uint32)(sint32)(sint16)voice;
        if ((r_u32(0x80115618u) & (1u << (voice & 31u))) == 0u && r_s16(0x80128890u + row) == sequence_track)
        {
            bank = r_s16(0x80128898u + row);
            if (bank == r_s8(record + 38u))
            {
                sub_800FDAB4((uint16)bank, r_s16(0x80128892u + row));
                channel = (uint32)(sint32)r_s16(0x8012888Cu + row);
                volume = (uint32)(sint32)r_s16(0x80128888u + row);
                product = volume * (uint32)(sint32)r_s16(record + 96u + 2u * channel);
                volume = sf_sequence_signed_scale(product, 0x81020409u, 6u, true);
                header = r_u32(0x8012FCDCu);
                product = (volume << 14) - volume;
                product *= r_u8(header + 24u);
                volume = sf_sequence_signed_scale(product, 0x82061029u, 13u, true);
                program = (uint32)(sint32)r_s16(0x80128894u + row);
                programs = r_u32(0x8012FA30u);
                volume *= r_u8(programs + 16u * program + 1u);
                program = (uint32)(sint32)r_s16(0x80128892u + row);
                tone = (program << 4) + (uint32)(sint32)r_s16(0x80128896u + row);
                tone = (tone << 5) + r_u32(0x8012FD00u);
                volume *= r_u8(tone + 2u);
                volume /= 16129u;
                left = volume * r_u16(record + 88u);
                right = volume * r_u16(record + 90u);
                left /= 127u;
                right /= 127u;
                pan = r_u8(tone + 3u);
                if (pan < 64u)
                    right = (right * pan) / 63u;
                else
                    left = (left * (127u - pan)) / 63u;
                program = (uint32)(sint32)r_s16(0x80128894u + row);
                programs = r_u32(0x8012FA30u);
                pan = r_u8(programs + 16u * program + 4u);
                if (pan < 64u)
                    right = sf_sequence_signed_scale((uint16)right * pan, 0x82082083u, 5u, false);
                else
                    left = sf_sequence_signed_scale((uint16)left * (127u - pan), 0x82082083u, 5u, true);
                pan = r_u8(0x8012888Au + row);
                if (pan < 64u)
                    right = sf_sequence_signed_scale((uint16)right * pan, 0x82082083u, 5u, false);
                else
                    left = sf_sequence_signed_scale((uint16)left * (127u - pan), 0x82082083u, 5u, true);
                mono = (uint16)left;
                if (r_s16(0x8012EE54u) == 1)
                {
                    if ((uint16)left < (uint16)right)
                        left = right;
                    else
                        right = left;
                    mono = (uint16)left;
                }
                product = mono * mono;
                left = sf_sequence_signed_scale(product, 0x80020009u, 13u, true);
                product = (uint32)(uint16)right * (uint16)right;
                right = sf_sequence_signed_scale(product, 0x80020009u, 13u, true);
                w_u16(0x80131028u + 16u * voice, (uint16)left);
                w_u16(0x8013102Au + 16u * voice, (uint16)right);
                w_u8(0x8012B7B8u + voice, r_u8(0x8012B7B8u + voice) | 3u);
            }
        }
        ++voice;
    } while ((sint16)voice < r_s8(0x8012FF90u));
    return (uint32)(sint32)sequence_track;
}
