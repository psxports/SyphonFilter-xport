/* Compile the canonical SDK and the project bridge in one translation unit */
#include "../../xport/src/psx.c"

static uint32 sf_gte_lzcs;
static uint32 sf_gte_lzcr = 32u;
static uint32 sf_gte_reserved;

uint32 sf_gte_color_02(void)
{
    return (uint16)gte.color.m[0][2];
}

sint32 sf_gte_import_snapshot(const PsxGteSnapshot *state)
{
    if (!state)
        return 0;
    gte = *state;
    return 1;
}

void sf_gte_write_data(uint32 index, uint32 value)
{
    if (index < 6u)
    {
        sint16 *vector = index < 2u ? gte.v0 : index < 4u ? gte.v1 : gte.v2;
        if (index & 1u)
            vector[2] = (sint16)value;
        else
        {
            vector[0] = (sint16)value;
            vector[1] = (sint16)(value >> 16);
        }
    }
    else if (index == 6u)
        gte.rgbc = value;
    else if (index == 7u)
        gte.otz = (uint16)value;
    else if (index == 8u)
        gte.ir0 = (sint16)value;
    else if (index < 12u)
        gte.ir[index - 9u] = (sint16)value;
    else if (index < 15u)
        gte.sxy[index - 12u] = (sint32)value;
    else if (index == 15u)
    {
        gte.sxy[0] = gte.sxy[1];
        gte.sxy[1] = gte.sxy[2];
        gte.sxy[2] = (sint32)value;
    }
    else if (index < 20u)
        gte.sz[index - 16u] = (uint16)value;
    else if (index < 23u)
        gte.rgb[index - 20u] = value;
    else if (index == 23u)
        sf_gte_reserved = value;
    else if (index == 24u)
        gte.mac0 = (sint32)value;
    else if (index < 28u)
        gte.mac[index - 25u] = (sint32)value;
    else if (index == 28u)
    {
        gte.ir[0] = (sint32)(value & 31u) * 128;
        gte.ir[1] = (sint32)((value >> 5) & 31u) * 128;
        gte.ir[2] = (sint32)((value >> 10) & 31u) * 128;
    }
    else if (index == 30u)
    {
        uint32 bits = value & 0x80000000u ? ~value : value;
        sf_gte_lzcs = value;
        sf_gte_lzcr = 0u;
        while (sf_gte_lzcr < 32u && !(bits & 0x80000000u))
        {
            ++sf_gte_lzcr;
            bits <<= 1;
        }
    }
}

uint32 sf_gte_read_data(uint32 index)
{
    if (index < 6u)
    {
        const sint16 *vector = index < 2u ? gte.v0 : index < 4u ? gte.v1 : gte.v2;
        return index & 1u ? (uint32)(sint32)vector[2] : (uint16)vector[0] | ((uint32)(uint16)vector[1] << 16);
    }
    if (index == 6u)
        return gte.rgbc;
    if (index == 7u)
        return gte.otz;
    if (index == 8u)
        return (uint32)(sint32)(sint16)gte.ir0;
    if (index < 12u)
        return (uint32)(sint32)(sint16)gte.ir[index - 9u];
    if (index < 15u)
        return (uint32)gte.sxy[index - 12u];
    if (index == 15u)
        return (uint32)gte.sxy[2];
    if (index < 20u)
        return gte.sz[index - 16u];
    if (index < 23u)
        return gte.rgb[index - 20u];
    if (index == 23u)
        return sf_gte_reserved;
    if (index == 24u)
        return (uint32)gte.mac0;
    if (index < 28u)
        return (uint32)gte.mac[index - 25u];
    if (index < 30u)
    {
        uint32 color = 0u;
        uint32 component;
        for (component = 0; component < 3u; ++component)
        {
            sint32 value = gte.ir[component] >> 7;
            if (value < 0)
                value = 0;
            if (value > 31)
                value = 31;
            color |= (uint32)value << (component * 5u);
        }
        return color;
    }
    return index == 30u ? sf_gte_lzcs : sf_gte_lzcr;
}

static sint64 sf_gte_accumulate(uint32 row, sint64 value)
{
    uint64 wrapped;
    if (value > 0x7ffffffffffLL)
        gte.flag |= (sint32)(1u << (30u - row));
    if (value < -0x80000000000LL)
        gte.flag |= (sint32)(1u << (27u - row));
    wrapped = (uint64)value & 0xfffffffffffULL;
    return (sint64)(wrapped & 0x7ffffffffffULL) - ((wrapped & 0x80000000000ULL) ? 0x80000000000LL : 0LL);
}

static void sf_gte_project(const sint16 vertex[3], uint32 cue)
{
    uint32 row;
    uint32 depth;
    uint32 quotient;
    sint32 screen[2];
    for (row = 0; row < 3u; ++row)
    {
        uint32 column;
        sint64 value = sf_gte_accumulate(row, (sint64)gte.translation[row] * 4096);
        for (column = 0; column < 3u; ++column)
            value = sf_gte_accumulate(row, value + (sint64)gte.rotation.m[row][column] * vertex[column]);
        gte.mac[row] = mac_shift12(value);
        gte.ir[row] = clamp_ir(gte.mac[row], 1u << (24u - row));
    }
    depth = clamp_sz(gte.mac[2]);
    quotient = (!depth || (uint32)gte.h >= depth * 2u) ? 0x1ffffu : gte_unr_divide((uint32)gte.h, depth);
    if (!depth || (uint32)gte.h >= depth * 2u)
        gte.flag |= 1u << 17;
    for (row = 0; row < 2u; ++row)
    {
        sint64 value = (sint64)gte.ir[row] * quotient + (sint64)(row ? gte.ofy : gte.ofx) * 65536;
        truncate_mac0(value);
        screen[row] = clamp_sxy((sint32)(value >> 16), 1u << (14u - row));
    }
    gte.sxy[0] = gte.sxy[1];
    gte.sxy[1] = gte.sxy[2];
    gte.sxy[2] = (sint32)((uint16)screen[0] | ((uint32)(uint16)screen[1] << 16));
    gte.sz[0] = gte.sz[1];
    gte.sz[1] = gte.sz[2];
    gte.sz[2] = gte.sz[3];
    gte.sz[3] = depth;
    if (cue)
    {
        sint64 value = (sint64)gte.dqa * quotient + gte.dqb;
        sint64 ir0 = value >> 12;
        gte.mac0 = truncate_mac0(value);
        if (ir0 < 0)
        {
            ir0 = 0;
            gte.flag |= 1u << 12;
        }
        if (ir0 > 4096)
        {
            ir0 = 4096;
            gte.flag |= 1u << 12;
        }
        gte.ir0 = (sint32)ir0;
    }
}

static void sf_gte_normal_depth(const sint16 normal[3])
{
    sint32 light[3];
    sint32 lit[3];
    uint32 row;
    for (row = 0; row < 3u; ++row)
    {
        uint32 column;
        sint64 value = 0;
        for (column = 0; column < 3u; ++column)
            value = sf_gte_accumulate(row, value + (sint64)gte.light.m[row][column] * normal[column]);
        light[row] = clamp_ir_unsigned(mac_shift12(value), 1u << (24u - row));
    }
    for (row = 0; row < 3u; ++row)
    {
        uint32 column;
        sint64 value = sf_gte_accumulate(row, (sint64)gte.back_color[row] * 4096);
        for (column = 0; column < 3u; ++column)
            value = sf_gte_accumulate(row, value + (sint64)gte.color.m[row][column] * light[column]);
        lit[row] = clamp_ir_unsigned(mac_shift12(value), 1u << (24u - row));
    }
    for (row = 0; row < 3u; ++row)
    {
        sint64 base = (sint64)((gte.rgbc >> (row * 8u)) & 255u) * lit[row] * 16;
        sint32 difference = clamp_ir(mac_shift12(sf_gte_accumulate(row, (sint64)gte.far_color[row] * 4096 - base)), 1u << (24u - row));
        gte.mac[row] = mac_shift12(sf_gte_accumulate(row, base + (sint64)gte.ir0 * difference));
        gte.ir[row] = clamp_ir_unsigned(gte.mac[row], 1u << (24u - row));
    }
    push_rgb_from_mac();
}

sint32 sf_gte_execute(uint32 command)
{
    VECTOR input;
    VECTOR output;
    SVECTOR vector;
    if (command == 0x480012u || command == 0x49e012u || command == 0x486012u)
    {
        xport_gte_mvmva(command);
        return 1;
    }
    gte.flag = 0;
    switch (command)
    {
        case 0x180001u:
            sf_gte_project(gte.v0, 1u);
            break;
        case 0x280030u:
            sf_gte_project(gte.v0, 0u);
            sf_gte_project(gte.v1, 0u);
            sf_gte_project(gte.v2, 1u);
            break;
        case 0x1400006u:
            NormalClip(gte.sxy[0], gte.sxy[1], gte.sxy[2]);
            break;
        case 0xa00428u:
            input.vx = gte.ir[0];
            input.vy = gte.ir[1];
            input.vz = gte.ir[2];
            Square0(&input, &output);
            break;
        case 0x190003du:
            vector.vx = (sint16)gte.ir[0];
            vector.vy = (sint16)gte.ir[1];
            vector.vz = (sint16)gte.ir[2];
            vector.pad = 0;
            gte_gpf0(&vector, gte.ir0, &output);
            break;
        case 0xe80413u:
            sf_gte_normal_depth(gte.v0);
            break;
        case 0xf80416u:
            sf_gte_normal_depth(gte.v0);
            sf_gte_normal_depth(gte.v1);
            sf_gte_normal_depth(gte.v2);
            break;
        case 0x406012u:
        case 0x41e012u:
        {
            sint16 values[3];
            uint32 row;
            for (row = 0; row < 3u; ++row)
                values[row] = command == 0x406012u ? (sint16)gte.v0[row] : (sint16)gte.ir[row];
            for (row = 0; row < 3u; ++row)
            {
                uint32 col;
                sint64 sum = 0;
                for (col = 0; col < 3u; ++col)
                    sum = sf_gte_accumulate(row, sum + (sint64)gte.rotation.m[row][col] * values[col]);
                gte.mac[row] = (sint32)(uint32)sum;
                gte.ir[row] = clamp_ir(gte.mac[row], 1u << (24u - row));
            }
            break;
        }
        case 0x178000cu:
        case 0x170000cu:
        {
            sint16 left[3];
            sint16 right[3];
            sint64 cross[3];
            uint32 row;
            for (row = 0; row < 3u; ++row)
            {
                left[row] = gte.rotation.m[row][row];
                right[row] = (sint16)gte.ir[row];
            }
            cross[0] = (sint64)left[1] * right[2] - (sint64)left[2] * right[1];
            cross[1] = (sint64)left[2] * right[0] - (sint64)left[0] * right[2];
            cross[2] = (sint64)left[0] * right[1] - (sint64)left[1] * right[0];
            for (row = 0; row < 3u; ++row)
            {
                sint64 value = sf_gte_accumulate(row, cross[row]);
                gte.mac[row] = command == 0x178000cu ? mac_shift12(value) : (sint32)(uint32)value;
                gte.ir[row] = clamp_ir(gte.mac[row], 1u << (24u - row));
            }
            break;
        }
        default:
            fprintf(stderr, "Unsupported SF GTE command %08X\n", command);
            return 0;
    }
    finish_flag();
    return 1;
}
