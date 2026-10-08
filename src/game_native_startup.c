#include "game_draft.h"
#include "psx_gpu.h"
#include <string.h>
#include <stdlib.h>

__declspec(noreturn) void _break(uint32 code, uint32 subcode)
{
    fprintf(stderr, "Guest BREAK exception %u,%u\n", code, subcode);
    abort();
}

sint32 sub_80101554(sint32 first_packet, sint32 second_packet)
{
    PadInitDirect(SF_DRAFT_PTR(uint8, first_packet), SF_DRAFT_PTR(uint8, second_packet));
    return 1;
}

sint32 sub_800FF454(void)
{
    return (sint32)StartPAD();
}

sint32 sub_800FF4E0(uint32 port)
{
    return PadGetState((sint32)port);
}

uint32 sub_800EC8E4(uint32 destination, uint32 value, uint32 size)
{
    memset(sf_draft_guest_ptr(destination), (int)(value & 0xFFu), size);
    return destination;
}

sint32 sub_800EA474(sint32 angle)
{
    return rcos(angle);
}

sint32 sub_800E7F14(sint8 depth, sint8 blend, sint16 x, sint16 y)
{
    return ((depth & 3) << 7) | ((blend & 3) << 5) |
        ((y & 0x100) >> 4) | ((x & 0x3FF) >> 6) | ((y & 0x200) << 2);
}

sint32 sub_800E7F94(sint32 packet, sint32 dither, sint32 draw_display, sint16 page)
{
    uint8 *bytes = SF_DRAFT_PTR(uint8, packet);
    uint32 command = 0xE1000000u | (draw_display ? 0x200u : 0u) |
        ((uint32)page & 0x9FFu) | (dither ? 0x400u : 0u);
    bytes[3] = 1u;
    xport_store_le32(bytes + 4u, command);
    return (sint32)command;
}

sint32 sub_800EBBC4(uint32 source, sint32 destination)
{
    TransposeMatrix(SF_DRAFT_PTR(MATRIX, source), SF_DRAFT_PTR(MATRIX, destination));
    return destination;
}

extern void sf_gte_write_data(uint32 index, uint32 value);
extern uint32 sf_gte_read_data(uint32 index);
extern sint32 sf_gte_execute(uint32 command);

uint32 sub_800EADF4(uint32 matrix, uint32 input, uint32 output)
{
    uint32 *rotation = SF_DRAFT_PTR(uint32, matrix);
    sint32 *vector = SF_DRAFT_PTR(sint32, input);
    uint32 *result = SF_DRAFT_PTR(uint32, output);
    uint32 high[3], low[3], high_mac[3];
    uint32 index;
    for (index = 0u; index < 5u; ++index)
        xport_gte_write_control(index, rotation[index]);
    for (index = 0u; index < 3u; ++index)
    {
        sint32 value = vector[index];
        uint32 magnitude = value < 0 ? 0u - (uint32)value : (uint32)value;
        uint32 upper = (uint32)((sint32)magnitude >> 15);
        uint32 lower = magnitude & 0x7FFFu;
        high[index] = value < 0 ? 0u - upper : upper;
        low[index] = value < 0 ? 0u - lower : lower;
        sf_gte_write_data(9u + index, high[index]);
    }
    sf_gte_execute(0x41E012u);
    for (index = 0u; index < 3u; ++index)
        high_mac[index] = sf_gte_read_data(25u + index);
    for (index = 0u; index < 3u; ++index)
        sf_gte_write_data(9u + index, low[index]);
    sf_gte_execute(0x49E012u);
    for (index = 0u; index < 3u; ++index)
        result[index] = sf_gte_read_data(25u + index) + (high_mac[index] << 3);
    return output;
}

static uint32 sf_native_mul_rotation(uint32 left, uint32 right, uint32 output)
{
    uint32 *matrix = SF_DRAFT_PTR(uint32, left);
    uint16 *operand = SF_DRAFT_PTR(uint16, right);
    uint32 *result = SF_DRAFT_PTR(uint32, output);
    uint32 columns[3][3];
    uint32 column, row;
    for (row = 0u; row < 5u; ++row)
        xport_gte_write_control(row, matrix[row]);
    for (column = 0u; column < 3u; ++column)
    {
        sf_gte_write_data(0u, (uint32)operand[column] | ((uint32)operand[column + 3u] << 16));
        sf_gte_write_data(1u, (uint32)(sint32)(sint16)operand[column + 6u]);
        sf_gte_execute(0x486012u);
        for (row = 0u; row < 3u; ++row)
            columns[column][row] = sf_gte_read_data(9u + row);
    }
    result[0] = (columns[0][0] & 0xFFFFu) | (columns[1][0] << 16);
    result[3] = (columns[0][2] & 0xFFFFu) | (columns[1][2] << 16);
    result[1] = (columns[2][0] & 0xFFFFu) | (columns[0][1] << 16);
    result[2] = (columns[1][1] & 0xFFFFu) | (columns[2][1] << 16);
    result[4] = columns[2][2];
    return output;
}

sint32 sub_800E92F0(uint32 left, uint32 right)
{
    uint32 translated[3];
    uint32 *first = SF_DRAFT_PTR(uint32, left);
    uint32 *second = SF_DRAFT_PTR(uint32, right);
    sub_800EADF4(left, sf_draft_guest_address(second + 5), sf_draft_guest_address(translated));
    sf_native_mul_rotation(left, right, right);
    second[5] = translated[0] + first[5];
    second[6] = translated[1] + first[6];
    second[7] = translated[2] + first[7];
    return (sint32)second[7];
}

static sint32 sf_native_compose_inplace(uint32 left, uint32 right)
{
    uint32 translated[3];
    uint32 *first = SF_DRAFT_PTR(uint32, left);
    uint32 *second = SF_DRAFT_PTR(uint32, right);
    sub_800EADF4(left, sf_draft_guest_address(second + 5), sf_draft_guest_address(translated));
    sf_native_mul_rotation(left, right, left);
    first[5] += translated[0];
    first[6] += translated[1];
    first[7] += translated[2];
    return (sint32)first[7];
}

static void sf_native_copy_matrix(uint32 *destination, const uint32 *source)
{
    uint32 group;
    for (group = 0u; group < 2u; ++group)
    {
        uint32 a = source[group * 4u];
        uint32 b = source[group * 4u + 1u];
        uint32 c = source[group * 4u + 2u];
        uint32 d = source[group * 4u + 3u];
        destination[group * 4u] = a;
        destination[group * 4u + 1u] = b;
        destination[group * 4u + 2u] = c;
        destination[group * 4u + 3u] = d;
    }
}

sint32 sub_800EA0E4(uint32 coordinate, uint32 output)
{
    sint32 depth = 0, invalid = 100;
    uint32 current = coordinate, result;
    uint32 *destination = SF_DRAFT_PTR(uint32, output);
    for (;;)
    {
        uint32 *node = SF_DRAFT_PTR(uint32, current);
        uint32 parent;
        w_u32(0x8013B840u + (uint32)depth * 4u, current);
        parent = node[18];
        if (!parent)
            break;
        if (node[0] == r_u32(0x8013C5B0u))
        {
            sf_native_copy_matrix(destination, node + 9);
            goto Compose;
        }
        if (!node[0])
            invalid = depth;
        current = parent;
        ++depth;
    }
    {
        uint32 *node = SF_DRAFT_PTR(uint32, current);
        if (node[0] != r_u32(0x8013C5B0u) && node[0])
        {
            depth = invalid + 1;
            if (invalid == 100)
            {
                node = SF_DRAFT_PTR(uint32, r_u32(0x8013B840u));
                depth = 0;
            }
            else
                node = SF_DRAFT_PTR(uint32, r_u32(0x8013B840u + (uint32)depth * 4u));
            sf_native_copy_matrix(destination, node + 9);
        }
        else
        {
            sf_native_copy_matrix(node + 9, node + 1);
            result = r_u32(0x8013C5B0u);
            sf_native_copy_matrix(destination, node + 9);
            node[0] = result;
        }
    }
Compose:
    result = (uint32)depth * 4u;
    while (depth > 0)
    {
        uint32 address = r_u32(0x8013B840u + ((uint32)depth - 1u) * 4u);
        uint32 *node;
        sf_native_compose_inplace(output, address + 4u);
        address = r_u32(0x8013B840u + ((uint32)depth - 1u) * 4u);
        --depth;
        node = SF_DRAFT_PTR(uint32, address);
        sf_native_copy_matrix(node + 9, destination);
        node = SF_DRAFT_PTR(uint32, r_u32(0x8013B840u + (uint32)depth * 4u));
        result = r_u32(0x8013C5B0u);
        node[0] = result;
    }
    return (sint32)result;
}

static sint32 sf_native_checked_divide(sint32 numerator, sint32 denominator)
{
    if (!denominator)
        _break(7u, 0u);
    if (denominator == -1 && (uint32)numerator == 0x80000000u)
        _break(6u, 0u);
    return numerator / denominator;
}

sint32 sub_800EC124(sint32 y, sint32 x)
{
    uint32 negative_x = x < 0, negative_y = y < 0;
    sint32 index, angle;
    if (negative_x)
        x = (sint32)(0u - (uint32)x);
    if (negative_y)
        y = (sint32)(0u - (uint32)y);
    if (!x && !y)
        return 0;
    if (y < x)
    {
        index = ((uint32)y & 0x7FE00000u) ?
            sf_native_checked_divide(y, x >> 10) :
            sf_native_checked_divide((sint32)((uint32)y << 10), x);
        angle = r_s16(0x801143F8u + (uint32)index * 2u);
    }
    else
    {
        index = ((uint32)x & 0x7FE00000u) ?
            sf_native_checked_divide(x, y >> 10) :
            sf_native_checked_divide((sint32)((uint32)x << 10), y);
        angle = (sint32)(1024u - (uint32)(sint32)r_s16(0x801143F8u + (uint32)index * 2u));
    }
    if (negative_x)
        angle = (sint32)(2048u - (uint32)angle);
    return negative_y ? (sint32)(0u - (uint32)angle) : angle;
}

uint32 sub_800E9C44(uint16 offset, uint16 point, uint32 descriptor)
{
    uint32 *table = SF_DRAFT_PTR(uint32, descriptor);
    uint32 length, ordering_table;
    table[2] = offset;
    length = table[0];
    ordering_table = table[1];
    table[3] = point;
    table[4] = ordering_table + (4u << (length & 31u)) - 4u;
    if (r_u8(0x8010F41Au) >= 2u)
        fprintf(stderr, "ClearOTagR(%08x,%d)...\n", ordering_table, 1u << (table[0] & 31u));
    sf_native_graphics_require_idle();
    ClearOTagR(SF_DRAFT_PTR(uint32, ordering_table),
        (sint32)(1u << (table[0] & 31u)));
    /* Preserve the SDK header after the synchronous reverse-link operation */
    w_u32(0x8010F4D8u, 0x0410F4C4u);
    w_u32(ordering_table, 0x0010F4D8u);
    return ordering_table;
}

static uint32 sf_native_sort_packet(uint32 packet, uint32 ordering_table, uint16 depth, uint8 words)
{
    uint32 *table = SF_DRAFT_PTR(uint32, ordering_table);
    sint32 index = (sint32)((uint32)depth - table[2]);
    uint32 link;
    if (index < 0)
        fprintf(stderr, "ps_sort_sprite,bg: z resolution overflow\n");
    link = table[1] + (uint32)index * 4u;
    w_u32(packet, r_u32(link));
    w_u8(packet + 3u, words);
    w_u32(link, packet);
    w_u8(link + 3u, 0u);
    return packet + (uint32)words * 4u + 4u;
}

void sub_800E8024(uint32 primitive, uint32 ordering_table, uint16 depth)
{
    uint32 flags = r_u32(primitive), packet;
    if ((sint32)flags < 0)
        return;
    packet = r_u32(0x8012C8A0u);
    w_u32(packet + 4u, 0xE1000200u | ((flags >> 23) & 0x60u));
    w_u8(packet + 8u, r_u8(primitive + 12u));
    w_u8(packet + 9u, r_u8(primitive + 13u));
    w_u8(packet + 11u, 0x50u | ((flags >> 29) & 2u));
    w_u8(packet + 10u, r_u8(primitive + 14u));
    w_u16(packet + 12u, (uint16)(r_u16(primitive + 4u) + r_u16(0x8012F9F8u)));
    w_u16(packet + 14u, (uint16)(r_u16(primitive + 6u) + r_u16(0x8012F9FAu)));
    w_u8(packet + 16u, r_u8(primitive + 15u));
    w_u8(packet + 17u, r_u8(primitive + 16u));
    w_u8(packet + 18u, r_u8(primitive + 17u));
    w_u16(packet + 20u, (uint16)(r_u16(primitive + 8u) + r_u16(0x8012F9F8u)));
    w_u16(packet + 22u, (uint16)(r_u16(primitive + 10u) + r_u16(0x8012F9FAu)));
    w_u32(0x8012C8A0u, sf_native_sort_packet(packet, ordering_table, depth, 5u));
}

void sub_800E87B4(sint32 source, sint32 ordering_table, uint16 depth)
{
    uint32 primitive = (uint32)source;
    uint32 flags = r_u32(primitive), packet, link;
    uint32 *table;
    if ((sint32)flags < 0 || !r_u16(primitive + 8u) || !r_u16(primitive + 10u))
        return;
    packet = r_u32(0x8012C8A0u);
    w_u32(packet + 4u, 0xE1000200u | (r_u16(primitive + 12u) & 31u) |
        ((flags >> 17) & 0x180u) | ((flags >> 23) & 0x60u));
    w_u32(packet + 12u, (uint32)(uint16)(r_u16(primitive + 4u) + r_u16(0x8012F9F8u)) |
        ((uint32)(r_u16(primitive + 6u) + r_u16(0x8012F9FAu)) << 16));
    w_u32(packet + 8u, ((flags >> 5) & 0x02000000u) |
        ((flags << 18) & 0x01000000u) | 0x64000000u |
        ((uint32)r_u8(primitive + 22u) << 16) |
        ((uint32)r_u8(primitive + 21u) << 8) | r_u8(primitive + 20u));
    w_u32(packet + 16u, r_u8(primitive + 14u) | ((uint32)r_u8(primitive + 15u) << 8) |
        ((uint32)(sint32)r_s16(primitive + 18u) << 22) |
        (((uint32)(sint32)r_s16(primitive + 16u) << 12) & 0x003F0000u));
    w_u32(packet + 20u, r_u16(primitive + 8u) | ((uint32)r_u16(primitive + 10u) << 16));
    table = SF_DRAFT_PTR(uint32, ordering_table);
    link = table[1] + (uint32)depth * 4u - table[2] * 4u;
    w_u32(packet, r_u32(link) + 0x05000000u);
    w_u32(link, packet & 0x00FFFFFFu);
    w_u32(0x8012C8A0u, packet + 24u);
}

static sint16 sf_read_s16(uint32 address)
{
    return (sint16)r_u16(address);
}

static void sf_update_draw_origin(void)
{
    uint32 index = r_u16(0x8013C5B4u);
    sint16 x = sf_read_s16(0x801287D8u + 2u * index);
    sint16 y = sf_read_s16(0x80128874u + 2u * index);
    w_u16(0x8012F03Cu, r_u16(0x80130F0Cu));
    w_u16(0x8012F03Eu, r_u16(0x80130F0Eu));
    w_u16(0x8012F038u, (uint16)(sf_read_s16(0x80130F08u) + x));
    w_u16(0x8012F03Au, (uint16)(sf_read_s16(0x80130F0Au) + y));
    PutDrawEnv((DRAWENV *)sf_draft_guest_ptr(0x8012F038u));
}

static void sf_update_geometry_origin(void)
{
    uint32 index = r_u16(0x8013C5B4u);
    sint16 x, y;
    if (r_u16(0x8013C638u))
    {
        x = sf_read_s16(0x801287D8u + 2u * index);
        y = sf_read_s16(0x80128874u + 2u * index);
        w_u16(0x8012F9F8u, 0u);
        w_u16(0x8012F9FAu, 0u);
        w_u16(0x8012F040u, (uint16)(sf_read_s16(0x8012C7B0u) + x));
        w_u16(0x8012F042u, (uint16)(sf_read_s16(0x8012C7B2u) + y));
        PutDrawEnv((DRAWENV *)sf_draft_guest_ptr(0x8012F038u));
        return;
    }
    index = index ? 0u : 1u;
    x = (sint16)(sf_read_s16(0x8012C7B0u) + sf_read_s16(0x801287D8u + 2u * index));
    y = (sint16)(sf_read_s16(0x8012C7B2u) + sf_read_s16(0x80128874u + 2u * index));
    SetGeomOffset(x, y);
    w_u16(0x8012F9F8u, (uint16)x);
    w_u16(0x8012F9FAu, (uint16)y);
}

extern sint32 sf_native_video_bind(const PsxCrtcState *initial, uint32 status);
extern sint32 sf_native_video_configure(uint32 hstart, uint32 hend,
    uint32 vstart, uint32 vend, uint32 interlace);
extern void sf_native_video_poll(void);
static uint32 sf_video_initialized;
static uint32 sf_video_pal;

static sint32 sf_native_video_callback(void *context, uint32 target)
{
    (void)context;
    sf_draft_call(target, 0u, NULL);
    return 1;
}

static sint32 sf_native_clamp(sint32 value, sint32 low, sint32 high)
{
    return value < low ? low : value > high ? high : value;
}

/* Match the public PutDispEnv GP1 range calculation */
void sf_native_update_video(const DISPENV *display)
{
    PsxCrtcState profile;
    uint32 pal = r_u32(0x8010F3B8u), interlace;
    sint32 x0, x1, y0, y1;
    if (pal > 1u)
    {
        fprintf(stderr, "Unsupported native video mode %u\n", pal);
        abort();
    }
    x0 = 10 * display->screen.x + 608;
    x1 = x0 + (display->screen.w ? 10 * display->screen.w : 2560);
    y0 = display->screen.y + (pal ? 19 : 16);
    y1 = y0 + (display->screen.h ? display->screen.h : 240);
    x0 = sf_native_clamp(x0, 500, 3290);
    x1 = sf_native_clamp(x1, x0 + 80, 3290);
    y0 = sf_native_clamp(y0, 16, pal ? 310 : 256);
    y1 = sf_native_clamp(y1, y0 + 2, pal ? 312 : 258);
    interlace = display->isinter || display->disp.h >= (pal ? 289 : 257);
    if (!sf_video_initialized)
    {
        memset(&profile, 0, sizeof(profile));
        profile.pal = pal;
        profile.horizontal_total = pal ? 3406u : 3413u;
        profile.vertical_total = pal ? 314u : 263u;
        profile.horizontal_start = (uint32)x0;
        profile.horizontal_end = (uint32)x1;
        profile.vertical_start = (uint32)y0;
        profile.vertical_end = (uint32)y1;
        /* Timer1 uses HBlank; no dot-clock consumer is bound here */
        profile.dot_divider = 1u;
        memset(sf_draft_guest_ptr(0x8010F358u), 0, 32u);
        psx_vblank_bind(NULL, NULL, 0u);
        VSyncCallback(NULL);
        if (!sf_native_video_bind(&profile, interlace << 22) ||
            !psx_vblank_bind_guest(0x8010F378u, 0x8010F358u,
                sf_native_video_callback, NULL))
            abort();
        sf_video_pal = pal;
        sf_video_initialized = 1u;
    }
    else
    {
        if (pal != sf_video_pal)
        {
            fprintf(stderr, "Native video standard change needs clock reconfiguration\n");
            abort();
        }
        if (!sf_native_video_configure((uint32)x0, (uint32)x1,
                (uint32)y0, (uint32)y1, interlace))
            abort();
    }
}

uint32 sf_native_reset_callbacks(void)
{
    PsxCrtcState profile;
    uint32 pal;
    if (r_u16(0x8010E2B0u))
        return 0u;
    if (!r_u32(0xA0000100u) && !SetConf(16, 4, 0x801FFF00u))
    {
        fprintf(stderr, "Native cold BIOS kernel initialization failed\n");
        abort();
    }
    ResetCallbackPSX();
    psx_bios_bind_guest_callback_service(sf_native_video_callback, NULL);
    psx_root_counter_bind(0x8010F33Cu, 0u);
    w_u16(0x1F801074u, 0u);
    w_u16(0x1F801070u, 0u);
    /* Preserve original SDK data without installing guest exception code */
    memset(sf_draft_guest_ptr(0x8010E2B0u), 0, 1050u * 4u);
    w_u32(0x8010E2ECu, 0x8010F2C8u);
    w_u32(0x8010E2B4u, 0x800E48ECu);
    w_u32(0x8010E2C0u, 0x800E4A00u);
    w_u16(0x8010E2E0u, 9u);
    w_u32(0x8010F32Cu, 0x800E4958u);
    w_u32(0x8010F31Cu, 0x800E4B80u);
    memset(sf_draft_guest_ptr(0x8010F358u), 0, 32u);
    memset(sf_draft_guest_ptr(0x8010F38Cu), 0, 32u);
    pal = r_u32(0x8010F3B8u);
    if (pal > 1u)
        abort();
    memset(&profile, 0, sizeof(profile));
    profile.pal = pal;
    profile.horizontal_total = pal ? 3406u : 3413u;
    profile.vertical_total = pal ? 314u : 263u;
    profile.horizontal_start = 0x260u;
    profile.horizontal_end = 0xC60u;
    profile.vertical_start = 0x10u;
    profile.vertical_end = 0xFFu;
    profile.dot_divider = 1u;
    psx_vblank_bind(NULL, NULL, 0u);
    VSyncCallback(NULL);
    if (!sf_native_video_bind(&profile, 0u) ||
        !psx_vblank_bind_guest(0x8010F378u, 0x8010F358u,
            sf_native_video_callback, NULL))
        abort();
    sf_video_pal = pal;
    sf_video_initialized = 1u;
    w_u16(0x8010E2B0u, 1u);
    w_u16(0x1F801074u, 9u);
    xport_bios_exit_critical();
    return 0x8010E2B0u;
}

void sf_native_init_graph(uint32 width, uint32 height, uint32 flags, uint32 dither, uint32 rgb24)
{
    const GpuPsyqStateBinding binding = {
        0x8010F484u, 0x8010F428u, 0x8010F418u,
        0x8010F41Bu, 0x8010F3B8u, 0u
    };
    DRAWENV *draw = (DRAWENV *)sf_draft_guest_ptr(0x8012F038u);
    DISPENV *display = (DISPENV *)sf_draft_guest_ptr(0x8012F098u);
    if (!gpu_bind_psyq_state(&binding) || ResetGraph((flags >> 4u & 3u) == 3u ? 3 : 0) < 0)
        abort();
    w_u8(0x8010F418u, 0u);
    w_u8(0x8010F419u, 1u);
    memset(sf_draft_guest_ptr(0x8010F428u), 0xff, 92u);
    memset(sf_draft_guest_ptr(0x8010F484u), 0xff, 20u);
    memset(draw, 0, 28u);
    draw->dtd = (uint8)dither;
    PutDrawEnv(draw);
    memset(display, 0, 20u);
    display->disp.w = (sint16)width;
    display->disp.h = (sint16)height;
    display->isinter = (uint8)(flags & 1u);
    display->isrgb24 = (uint8)rgb24;
    if (r_u32(0x8010F3B8u) == 1u)
    {
        display->screen.y = 24;
        display->pad1 = 1u;
    }
    w_u16(0x8013C638u, (uint16)(flags & 4u));
    PutDispEnv(display);
    sf_native_update_video(display);
    InitGeom();
    SetFarColor(0, 0, 0);
    SetGeomOffset(0, 0);
    w_u16(0x8012F9F8u, 0u);
    w_u16(0x8012F9FAu, 0u);
    w_u16(0x8013C5B4u, 0u);
    w_u32(0x8012FFB0u, width);
    w_u32(0x80130108u, height);
    w_u32(0x80130114u, 0u);
    w_u32(0x8013011Cu, 0u);
    w_u32(0x8013012Cu, 0u);
    w_u32(0x80130128u, 0u);
    w_u32(0x80130124u, 0u);
    w_u32(0x80130110u, 4096u);
    w_u32(0x80130118u, 4096u);
    w_u16(0x80130120u, 4096u);
    w_u32(0x80130EE0u, 4096u);
    w_u32(0x80130EE4u, 0u);
    w_u32(0x80130EE8u, 4096u);
    w_u32(0x80130EECu, 0u);
    w_u32(0x80130EF0u, r_u32(0x80130120u));
    memset(sf_draft_guest_ptr(0x80130EF4u), 0, 12u);
    memset(sf_draft_guest_ptr(0x8012DB98u), 0, 16u);
    w_u32(0x8012DBA8u, r_u32(0x80130120u));
    memset(sf_draft_guest_ptr(0x8012DBACu), 0, 12u);
    w_u16(0x8012DBA8u, 0u);
    memset(sf_draft_guest_ptr(0x8012FA00u), 0, 16u);
    w_u32(0x8012FA10u, r_u32(0x8012DBA8u));
    memset(sf_draft_guest_ptr(0x8012FA14u), 0, 12u);
    memset(sf_draft_guest_ptr(0x8012B7D0u), 0, 8u);
    w_u16(0x8012C7B0u, 0u);
    w_u16(0x8012C7B2u, 0u);
    w_u16(0x80130F0Au, 0u);
    if (!width) abort();
    w_u16(0x80130EE8u, (uint16)((sint16)((height << 14u) / width) / 3));
    w_u16(0x80130F08u, 0u);
    w_u8(0x8012541Bu, 3u);
    w_u8(0x8012541Fu, 2u);
    w_u8(0x8012542Bu, 3u);
    w_u8(0x8012542Fu, 2u);
    w_u32(0x8013C5B0u, 1u);
    w_u16(0x80130F0Cu, (uint16)width);
    w_u16(0x80130F0Eu, (uint16)height);
    sf_update_draw_origin();
    sf_update_geometry_origin();
}

void sf_native_define_display(uint32 x0, uint32 y0, uint32 x1, uint32 y1)
{
    w_u16(0x801287D8u, (uint16)x0);
    w_u16(0x801287DAu, (uint16)x1);
    w_u16(0x80128874u, (uint16)y0);
    w_u16(0x80128876u, (uint16)y1);
    w_u16(0x8012B7D0u, r_u16(0x8013C638u) ? 0u : (uint16)x0);
    w_u16(0x8012B7D2u, r_u16(0x8013C638u) ? 0u : (uint16)x1);
    w_u16(0x8012B7D4u, r_u16(0x8013C638u) ? 0u : (uint16)y0);
    w_u16(0x8012B7D6u, r_u16(0x8013C638u) ? 0u : (uint16)y1);
    sf_update_draw_origin();
    sf_update_geometry_origin();
}

void sub_800E8FA4(void)
{
    sf_update_draw_origin();
}

void sub_800E8E94(void)
{
    sf_update_geometry_origin();
}

void sf_native_continuation_enter(void);
void sf_native_continuation_leave(void);
void sub_800E9024(void)
{
    uint32 index = (uint32)(sint32)r_s16(0x8013C5B4u);
    uint32 serial;
    DISPENV *display = SF_DRAFT_PTR(DISPENV, 0x8012F098u);
    sf_native_continuation_enter();
    w_u16(0x8012F098u, r_u16(0x801287D8u + 2u * index));
    w_u16(0x8012F09Au, r_u16(0x80128874u + 2u * index));
    PutDispEnv(display);
    sf_native_update_video(display);
    SetDispMask(1);
    serial = r_u32(0x8013C5B0u) + 1u;
    w_u32(0x8013C5B0u, serial ? serial : 1u);
    w_u16(0x8013C5B4u, index == 0u);
    sub_800E8FA4();
    sub_800E8E94();
    sf_native_continuation_leave();
}

void sf_native_init_3d(void)
{
    w_u16(0x8012C7B0u, (uint16)(r_u32(0x8012FFB0u) / 2u));
    w_u16(0x8012C7B2u, (uint16)(r_u32(0x80130108u) / 2u));
    sf_update_geometry_origin();
    w_u32(0x8013B8C4u, 10u);
    w_u32(0x8013B8C0u, 0u);
    w_u32(0x80130ED8u, 0x3fffu);
}

uint32 sub_800EC8F4(void)
{
    return randPSX();
}

sint32 sub_800EC884(uint32 left, uint32 right)
{
    const sint8 *first = (const sint8 *)sf_draft_guest_ptr(left);
    const sint8 *second = (const sint8 *)sf_draft_guest_ptr(right);
    if (!left || !right)
        return left ? 1 : right ? -1 : 0;
    while (*first && *first == *second)
    {
        ++first;
        ++second;
    }
    return (sint32)*first - (sint32)*second;
}

uint32 sub_800EC894(uint32 destination, uint32 source)
{
    uint8 *output;
    const uint8 *input;
    if (!destination || !source)
        return 0u;
    output = (uint8 *)sf_draft_guest_ptr(destination);
    input = (const uint8 *)sf_draft_guest_ptr(source);
    while ((*output++ = *input++) != 0u)
        ;
    return destination;
}

void sub_800E95B4(sint32 screen)
{
    gte_write_h((uint16)screen);
}

void sub_800EC904(uint32 seed)
{
    w_u32(0xA0009010u, seed);
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
void sf_native_set_vsync(uint32 callback)
{
    /* The original registration function replaces VBlank table slot zero */
    w_u32(0x8010F358u, callback);
}

void sf_native_cdcontrol(uint32 command, uint32 parameter, uint32 result)
{
    if (!CdControl((uint8)command,
        parameter ? (uint8 *)sf_draft_guest_ptr(parameter) : NULL,
        result ? (uint8 *)sf_draft_guest_ptr(result) : NULL))
    {
        fprintf(stderr, "Native CD command %u failed\n", command);
        abort();
    }
}

void sf_native_main_sprintf(char *destination, const char *format, const char *level)
{
    sprintf(destination, format, level);
}

sint32 sub_800E5000(sint32 mode)
{
    sint32 result;
    sf_native_graphics_require_idle();
    result = DrawSync(mode ? 1 : 0);
    if (gpu_sync_failed())
        abort();
    return result;
}

sint32 sub_800E52AC(uint32 rectangle, sint32 pixels)
{
    PSX_RECT *region = SF_DRAFT_PTR(PSX_RECT, rectangle);
    sint32 result;
    sf_native_graphics_require_idle();
    /* The original direct queue uploader clamps the caller rectangle */
    if (region->w < 0)
        region->w = 0;
    else if (region->w > r_s16(0x8010F41Cu))
        region->w = r_s16(0x8010F41Cu);
    if (region->h < 0)
        region->h = 0;
    else if (region->h > r_s16(0x8010F41Eu))
        region->h = r_s16(0x8010F41Eu);
    result = LoadImagePSX(region, SF_DRAFT_PTR(uint32, (uint32)pixels));
    if (result < 0 || gpu_transfer_observation_failed())
        abort();
    return result;
}

sint32 sub_800E5ED4(sint32 packet, sint32 dfe, sint32 dtd, uint16 page, sint32 window)
{
    uint32 texture = 0u;
    uint32 address = (uint32)window;
    uint32 mode = 0xE1000000u | (dtd ? 0x200u : 0u) |
        (dfe ? 0x400u : 0u) | ((uint32)page & 0x9FFu);
    w_u8((uint32)packet + 3u, 2u);
    w_u32((uint32)packet + 4u, mode);
    if (address)
        texture = 0xE2000000u | ((uint32)(r_u8(address + 2u) >> 3) << 15) |
            ((uint32)(r_u8(address) >> 3) << 10) |
            (((0u - (uint32)(sint32)r_s16(address + 6u)) & 255u) >> 3 << 5) |
            (((0u - (uint32)(sint32)r_s16(address + 4u)) & 255u) >> 3);
    w_u32((uint32)packet + 8u, texture);
    return (sint32)texture;
}

uint32 sub_800EC8B4(uint32 string, sint32 character)
{
    char *result = strchr(SF_DRAFT_PTR(char, string), character);
    return result ? sf_draft_guest_address(result) : 0u;
}

uint32 sub_800EC8C4(uint32 string, sint32 character)
{
    char *result = strrchr(SF_DRAFT_PTR(char, string), character);
    return result ? sf_draft_guest_address(result) : 0u;
}

sint32 sub_800EC8A4(uint32 string)
{
    return string ? (sint32)strlen((const char *)sf_draft_guest_ptr(string)) : 0;
}
