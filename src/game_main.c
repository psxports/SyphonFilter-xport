#include "psx.h"
#include "xport.h"
#include "psx_spu.h"

/* Original PsyQ graph type storage */
const uint32 xport_gpu_graph_type_address = 0x8010F418u;
const uint32 xport_cd_ready_callback_address = 0x80114CC4u;
const uint32 xport_cd_sync_callback_address = 0x80114CC0u;
const uint32 xport_cd_status_address = 0x80114CCCu;
const uint32 xport_cd_setloc_table_address = 0x80114C38u;
const uint32 xport_spu_register_pointer_address = 0x801150F8u;

uint32 sub_8001457C(void);
void sf_native_graphics_bind_software_gpu(void);
uint32 sf_native_reset_callbacks(void);

void xport_main(void)
{
    /* Initialize the executable image and CRT memory layout */
    const PSX_EXE executable = {
        "DATA/SCUS_942.40", 0x80010000u,
        0x80116628u, 0x8013D630u,
        0x8010E210u, 0x8013D630u, 0x006BA9C8u
    };
    if (!xport_psx_exe_load(&executable))
    {
        fprintf(stderr, "Cannot load DATA/SCUS_942.40\n");
        xport_set_exit_code(1);
        return;
    }
    if (!cd_mount_cue("../iso/Syphon Filter (USA) (v1.0).cue"))
    {
        fprintf(stderr, "Cannot mount the original Syphon Filter disc\n");
        xport_set_exit_code(1);
        return;
    }
    sf_native_graphics_bind_software_gpu();
    psx_bios_init_user_heap(executable.heap_start + 4u, executable.heap_size);
    sub_8001457C();
}

__declspec(noreturn) void __cdecl abort(void);
uint32 sub_800E4C54(uint32 value);
uint32 sub_800DE388(uint32 address);
void sub_800EB904(uint32 x, uint32 y);
uint32 sub_800D7758(uint32 value);
uint32 sub_800E4C68(void);
uint32 sub_800DDB88(uint32 value);
uint32 sub_800D77A0(uint32 width, uint32 height, uint32 mode);
uint32 sub_800D7930(uint32 color);
uint32 sub_800D88FC(void);
uint32 sub_800D8B4C(void);
uint32 sub_800EDBA4(void);
void sub_800145B4(void);
uint32 sub_80014D6C(uint32 requested_phase);
uint32 sub_8001457C(void);
uint32 sub_800E3F34(void);
void sub_800E3F44(void);
uint32 sub_800D84E8(uint32 *output, uint32 port);
uint32 sub_800D7A4C(uint16 *screen_x, uint16 *screen_y);
uint32 sub_80015850(const char *filename, uint32 destination_slot_guest, uint32 size);
uint32 sub_80015A00(const char *filename, uint32 destination, uint32 buffered);
void sub_80015B68(const char *filename, uint32 buffered);
void sf_native_main_sprintf(char * destination, const char * format, const char * level_name);
uint32 sub_800C794C(void);
sint32 sub_80149CF4(void);
sint32 sub_8014D7AC(sint32 phase);
void sf_native_init_graph(uint32 arg0, uint32 arg1, uint32 arg2, uint32 arg3, uint32 arg4);
void sf_native_define_display(uint32 arg0, uint32 arg1, uint32 arg2, uint32 arg3);
void sf_native_init_3d(void);
void sf_native_set_vsync(uint32 callback_address);
void sf_native_cdcontrol(uint32 command, uint32 parameter_address, uint32 result_address);
void sf_native_cd_puts(uint32 text_address);
void sf_native_cd_printf_text(uint32 format_address);
void sf_native_cd_printf_error(uint32 format_address, uint32 command_name_address, uint32 status, uint32 code);
void sf_native_cd_printf_interrupt(uint32 format_address, uint32 interrupt);
sint32 CdInit(void);
uint32 sub_80014FF8();
uint32 sub_80015364(uint32 a1, uint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12);
uint32 sub_80015DC8();
void sub_80016020(uint32 a1);
void sub_80016094(void);
uint32 sub_80016160();
uint32 sub_8001629C(void);
void sub_80016A58(void);
uint32 sub_80016AFC();
void sub_80018008(void);
uint32 sub_80027E2C();
uint32 sub_8003B030();
uint32 sub_800489EC();
uint32 sub_800489F8(sint32 a1);
sint32 sub_80048A70(sint32 a1);
uint32 sub_80080930(uint8 a1);
uint32 sub_80082724();
uint32 sub_8008294C(unsigned __int8 a1);
uint32 sub_80082DE0();
void sub_80082EC0(void);
uint32 sub_80084C30(unsigned __int8 a1);
uint32 sub_80086018(uint32 a1);
uint32 sub_80086830();
uint32 sub_80086E44(unsigned __int16 a1, sint8 a2, sint8 a3, sint8 a4);
uint32 sub_80086EA0(uint32 a1, uint32 a2);
uint32 sub_80093540();
uint32 sub_800C973C(uint32 a1, sint32 a2);
uint32 sub_800CB000(sint32 a1);
uint32 sub_800CCB40();
uint32 sub_800CDB60();
uint32 sub_800D769C();
uint32 sub_800D7AAC();
uint32 sub_800D837C();
uint32 sub_800DE3FC();
uint32 sub_800E3F54();
uint32 sub_800E7CA4();
uint32 sub_80145ACC();

uint32 sub_8001457C(void)
{
    FUNCTION_MARKER(0x8001457Cu, "SCUS_942.40");
    if (r_u32(0x8010E20Cu) == 0u)
        w_u32(0x8010E20Cu, 1u);
    sf_native_reset_callbacks();
    sub_800D7758(0u);
    sub_800145B4();
    return 0u;
}

void sub_800E3F44(void)
{
    FUNCTION_MARKER(0x800E3F44u, "SCUS_942.40");
    xport_bios_exit_critical();
}

uint32 sub_800D7758(uint32 value)
{
    FUNCTION_MARKER(0x800D7758u, "SCUS_942.40");
    return sub_800E4C54((uint32)(sint32)(sint16)value);
}

uint32 sub_800E4C54(uint32 value)
{
    FUNCTION_MARKER(0x800E4C54u, "SCUS_942.40");
    uint32 previous = r_u32(0x8010F3B8u);
    w_u32(0x8010F3B8u, value);
    return previous;
}

void sub_800145B4(void)
{
    FUNCTION_MARKER(0x800145B4u, "SCUS_942.40");
    uint32 pad_address;
    char filename[32];
    uint16 screen_x, screen_y;
    w_u32(0x801169A4u, 0u);
    w_u32(0x80116B8Cu, 0u);
    w_u8(0x80116AF0u, 0u);
    if (r_u32(0x80115C78u) == 2u)
        goto transition;
initialize:
    if (r_u8(0x80115C7Cu) == 5u)
        sub_80016020(4u);
    else
        sub_80014D6C(r_u8(0x80115C7Cu));
    if (r_u32(0x80115C78u) == 2u)
        goto transition;
    for (;;)
    {
        if (xport_isquit()) return;
        w_u32(0x801169A4u, r_u32(0x801169A4u) + 1u);
        sub_800D837C();
        switch (r_u32(0x80115C78u))
        {
        case 3u:
            if (r_u8(0x80141A20u) == 0u)
                sub_8001629C();
            else
                sub_80015364(4u, 5u, 0xFFFEu, 0xFFFEu, 0u, 0u, 0u, 0u);
            break;
        case 0u:
        case 5u:
            sub_80014FF8();
            {
                uint32 count = r_u32(0x801163B4u);
                uint32 object = r_u32(0x80116B9Cu);
                w_u32(0x801163B4u, count + 1u);
                sub_800489F8(object);
            }
            break;
        case 4u:
            sub_80149CF4();
            break;
        case 7u:
            sub_80145ACC();
            {
                uint32 phase = r_u32(0x80115C78u);
                if (phase == 7u)
                    sub_8008294C(0u);
                else
                {
                    w_u32(0x80115C78u, 0u);
                    sub_80082724();
                    w_u32(0x80115C78u, phase);
                }
            }
            break;
        case 8u:
            sub_800D84E8(&pad_address, 0u);
            {
                uint32 aligned = pad_address + 4u;
                uint32 active = 0u;
                if (r_u8(pad_address) != 0xFFu)
                {
                    uint32 bit = 6u;
                    if ((aligned & 3u) != 0u)
                    {
                        bit += (aligned & 3u) << 3;
                        aligned &= 0xFFFFFFFCu;
                    }
                    active = r_u32(aligned + ((bit >> 5) << 2)) & (1u << (bit & 31u));
                }
                if (active != 0u || r_u8(0x80116AF0u) != 0u)
                {
                    uint32 handle = sub_80086EA0(r_u16(0x8015469Cu), 0x80115C68u);
                    sub_80086018(handle & 0xFFFFu);
                    sub_80084C30(r_u8(0x80115F16u));
                    sub_8003B030();
                    w_u16(0x8015469Cu, 0xFFFFu);
                    w_u8(0x80115F16u, 0xFFu);
                    sub_800CB000(sub_800DE3FC());
                    uint32 demo = r_u8(0x80116AF0u);
                    w_u32(0x801169C4u, 0u);
                    if (demo != 0u)
                    {
                        uint32 level_index = (uint32)(sint32)(sint16)r_u16(0x80130C88u);
                        uint32 level_name = r_u32(0x80102D1Cu + (level_index << 2));
                        w_u32(0x801169C4u, 0x80145630u);
                        sf_native_main_sprintf(filename, (const char *)psx_addr(0x80010000u, 1u), (const char *)psx_addr(level_name, 1u));
                        sub_80015850(filename, 0x801169C4u, 0x1000u);
                    }
                    sub_80016094();
                }
                else
                    sub_80086830();
                uint32 tick = r_u32(0x801169A4u);
                if ((tick & 15u) == 0u)
                {
                    uint32 sound = r_u16(0x8015469Cu);
                    if (sound != 0xFFFFu)
                    {
                        uint32 pulse = (tick & 16u) >> 4;
                        sub_80086E44(sound, (200u * pulse) & 0xFFu, (200u * pulse) & 0xFFu, (255u * pulse) & 0xFFu);
                    }
                }
            }
            break;
        case 9u:
            sub_80048A70(r_u32(0x80116B9Cu));
            w_u16(0x8012D97Au, r_u16(0x8012D97Au) & 0xFFFEu);
            sub_8008294C(0u);
            sub_80015DC8();
            break;
        default:
            break;
        }
        uint32 y_adjust = r_u16(0x8011658Eu);
        sint32 x_signed = (sint16)r_u16(0x8011658Cu);
        uint32 x_adjust = r_u16(0x8011658Cu);
        if ((x_signed < 0 ? -x_signed : x_signed) >= 17 ||
            ((sint16)y_adjust < 0 ? -(sint32)(sint16)y_adjust : (sint32)(sint16)y_adjust) >= 17)
        {
            y_adjust = 0u;
            x_adjust = 0u;
            w_u16(0x8011658Eu, 0u);
            w_u16(0x8011658Cu, 0u);
        }
        sub_800D7A4C(&screen_x, &screen_y);
        uint32 previous_phase = r_u32(0x80115C6Cu);
        w_u16(0x8012C7B0u, x_adjust + (uint32)((sint32)(sint16)screen_x >> 1));
        uint32 phase = r_u32(0x80115C78u);
        w_u16(0x8012C7B2u, y_adjust + (uint32)((sint32)(sint16)screen_y >> 1));
        if (previous_phase == phase)
        {
            uint32 ready = sub_80016160() & 0xFFu;
            uint32 wait = 0x7FFFFFFFu;
            if (ready == 0u)
                wait = r_u32(0x80116A88u);
            sub_800C973C(ready == 0u, wait);
        }
        else
        {
            sub_800CDB60();
            phase = r_u32(0x80115C78u);
            if (phase == 6u)
                sub_80016094();
            else
                w_u32(0x80115C6Cu, phase);
            uint32 object = r_u32(0x80116B9Cu);
            if (object != 0u)
            {
                uint32 component = r_u32(object + 8u);
                if (component != 0u)
                {
                    w_u32(component + 40u, 0u);
                    component = r_u32(object + 8u);
                    w_u8(component + 10u, r_u8(component + 10u) & 0xFDu);
                }
            }
        }
        if (r_u32(0x80115C78u) == 2u)
            goto transition;
    }
transition:
    if (r_u8(0x80115C7Cu) == 2u)
    {
        w_u32(0x80115C74u, 1u);
        w_u8(0x80115C7Cu, 4u);
    }
    else
        sub_80016094();
    goto initialize;
}

uint32 sub_80014D6C(uint32 requested_phase)
{
    FUNCTION_MARKER(0x80014D6Cu, "SCUS_942.40");
    uint32 phase = requested_phase & 0xFFu;
    w_u32(0x801169A4u, 0u);
    sub_800DDB88(0u);
    sub_800DE388(0x801FF000u);
    sub_800DDB88(0u);
    if (phase == 3u)
    {
        sint32 count = (sint32)r_u32(0x80116A5Cu);
        if (count > 0)
        {
            uint32 entry = r_u32(0x80115CCCu);
            for (sint32 index = 0; index < count; ++index, entry += 76u)
            {
                uint32 first = r_u32(entry + 52u);
                uint32 third = 0u;
                if (first != 0u)
                {
                    uint32 second = r_u32(first + 8u);
                    if (second != 0u)
                        third = r_u32(second + 16u);
                    if (third != 0u && (r_u32(third + 40u) & 0x400000u) != 0u)
                        w_u32(r_u32(third + 32u) + 16u, 0u);
                }
            }
        }
    }
    if (phase == 1u)
    {
        sub_800D77A0(384u, 240u, 0u);
        sub_800D88FC();
        sub_800D8B4C();
        sub_80015B68((const char *)psx_addr(0x80010050u, 1u), 0u);
        sub_800D7AAC();
        sub_800C794C();
        if (r_u32(0x80115C74u) != 1u)
            w_u32(0x80115C74u, 1u);
    }
    else
    {
        sub_800C794C();
        sub_800CCB40();
        sub_800D769C();
        sub_800D769C();
        sub_80082DE0();
        sub_80082EC0();
        sub_800E7CA4();
    }
    sub_80015A00((const char *)psx_addr(0x8001005Cu, 1u), 0x8014C0A8u, 0u);
    sub_80027E2C();
    sub_80018008();
    sub_800489EC();
    sub_80016A58();
    sub_80093540();
    for (sint32 offset = 0xAD4; offset >= 0; offset -= 28)
        w_u16(0x80116C6Cu + (uint32)offset, 0u);
    w_u32(0x80116C68u, 0u);
    sub_80016AFC();
    w_u8(0x80116962u, 0u);
    sub_8014D7AC(phase);
    if (phase == 1u)
        sub_80016020(4u);
    else
        sub_80080930(1u);
    w_u8(0x80115C89u, 0xFFu);
    return 0xFFu;
}

uint32 sub_800DDB88(uint32 value)
{
    FUNCTION_MARKER(0x800DDB88u, "SCUS_942.40");
    w_u8(0x801165D0u, value);
    return 0u;
}

uint32 sub_800DE388(uint32 address)
{
    FUNCTION_MARKER(0x800DE388u, "SCUS_942.40");
    w_u32(0x801165F4u, address);
    uint32 difference = address - 0x8014C0A8u;
    w_u32(0x801165E8u, 0x8014C0A8u);
    uint32 end = difference + 0x8014C0A8u;
    w_u32(0x801165ECu, end);
    w_u32(0x801165F0u, end);
    return difference;
}

uint32 sub_800D77A0(uint32 width, uint32 height, uint32 mode)
{
    FUNCTION_MARKER(0x800D77A0u, "SCUS_942.40");
    if ((sint32)width <= 0 || (sint32)height <= 0 || mode >= 2u)
        return 1u;
    sf_native_init_graph(width & 0xFFFFu, height & 0xFFFFu, 4u, 1u, mode == 1u);
    sf_native_define_display(0u, 0u, 0u, height & 0xFFFFu);
    sf_native_init_3d();
    w_u16(0x80116890u, width);
    w_u16(0x80116894u, height);
    w_u32(0x8011656Cu, mode);
    sub_800D7930(0u);
    return 0u;
}

uint32 sub_800E4C68(void)
{
    FUNCTION_MARKER(0x800E4C68u, "SCUS_942.40");
    return r_u32(0x8010F3B8u);
}

uint32 sub_800E3F34(void)
{
    FUNCTION_MARKER(0x800E3F34u, "SCUS_942.40");
    return (uint32)xport_bios_enter_critical();
}

void sub_800EB904(uint32 x, uint32 y)
{
    FUNCTION_MARKER(0x800EB904u, "SCUS_942.40");
    SetGeomOffset((sint32)(sint16)x, (sint32)(sint16)y);
}

uint32 sub_800D7930(uint32 color)
{
    FUNCTION_MARKER(0x800D7930u, "SCUS_942.40");
    uint32 mode = r_u32(0x8011656Cu);
    PSX_RECT rectangle = {0, 0, 0, 0};
    if (mode == 0u)
        rectangle.w = (sint16)r_u16(0x80116890u);
    else if (mode == 1u)
        rectangle.w = (sint16)((3 * (sint32)(sint16)r_u16(0x80116890u)) / 2);
    else
        return 1u;
    rectangle.h = (sint16)(2u * (uint32)(sint32)(sint16)r_u16(0x80116894u));
    sub_800E3F54(0u);
    ResetGraph(1);
    uint8 red = color ? r_u8(color) : 0u;
    uint8 green = color ? r_u8(color + 1u) : 0u;
    uint8 blue = color ? r_u8(color + 2u) : 0u;
    ClearImage(&rectangle, red, green, blue);
    return 0u;
}

uint32 sub_800D88FC(void)
{
    FUNCTION_MARKER(0x800D88FCu, "SCUS_942.40");
    w_u32(0x8011689Cu, 0u);
    w_u32(0x801168A0u, 0u);
    w_u8(0x801168A4u, 0u);
    sf_native_set_vsync(0x800D87E0u);
    return 0u;
}

uint32 sub_800D8B4C(void)
{
    FUNCTION_MARKER(0x800D8B4Cu, "SCUS_942.40");
    CdInit();
    sf_native_cdcontrol(14u, 128u, 0u);
    return 0u;
}

uint32 sub_800EDBA4(void)
{
    FUNCTION_MARKER(0x800EDBA4u, "SCUS_942.40");
    w_u8(r_u32(0x80114F84u), 1u);
    uint32 interrupt_register = r_u32(0x80114F90u);
    uint32 interrupt = r_u8(interrupt_register) & 7u;
    if (interrupt == 0u)
        return 0u;
    while (interrupt != (r_u8(interrupt_register) & 7u))
        interrupt = r_u8(interrupt_register) & 7u;
    uint8 response[8];
    uint32 count = 0u;
    while ((r_u8(r_u32(0x80114F84u)) & 0x20u) != 0u)
    {
        response[count++] = r_u8(r_u32(0x80114F88u));
        if (count == 8u)
            break;
    }
    for (uint32 i = count; i < 8u; ++i)
        response[i] = 0u;
    w_u8(r_u32(0x80114F84u), 1u);
    w_u8(r_u32(0x80114F90u), 7u);
    w_u8(r_u32(0x80114F8Cu), 7u);
    uint32 error = 0u;
    if (interrupt != 3u || r_u32(0x80114E84u + 4u * r_u8(0x80114CDDu)) != 0u)
    {
        if ((r_u32(0x80114CCCu) & 0x10u) == 0u && (response[0] & 0x10u) != 0u)
            w_u32(0x80114CD4u, r_u32(0x80114CD4u) + 1u);
        error = response[0] & 0x1Du;
        w_u32(0x80114CCCu, response[0]);
        w_u32(0x80114CD0u, response[1]);
    }
    if (interrupt == 5u && (sint32)r_u32(0x80114CC8u) > 0)
    {
        sf_native_cd_printf_text(0x80014054u);
        if ((sint32)r_u32(0x80114CC8u) > 0)
            sf_native_cd_printf_error(0x80014060u, r_u32(0x80114CE4u + 4u * r_u8(0x80114CDDu)), r_u32(0x80114CCCu), r_u32(0x80114CD0u));
    }
    switch (interrupt)
    {
    case 1u:
        if (error != 0u && count == 1u)
            error = 0u;
        w_u8(0x80114F9Du, error ? 5u : 1u);
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125450u + i, response[i]);
        w_u8(r_u32(0x80114F84u), 0u);
        w_u8(r_u32(0x80114F90u), 0u);
        return 4u;
    case 2u:
        w_u8(0x80114F9Cu, error ? 5u : 2u);
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125448u + i, response[i]);
        return 2u;
    case 3u:
        if (error != 0u)
        {
            w_u8(0x80114F9Cu, 5u);
            for (uint32 i = 0u; i < 8u; ++i)
                w_u8(0x80125448u + i, response[i]);
            return 2u;
        }
        if (r_u32(0x80114D84u + 4u * r_u8(0x80114CDDu)) != 0u)
        {
            w_u8(0x80114F9Cu, 3u);
            for (uint32 i = 0u; i < 8u; ++i)
                w_u8(0x80125448u + i, response[i]);
            return 1u;
        }
        w_u8(0x80114F9Cu, 2u);
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125448u + i, response[i]);
        return 2u;
    case 4u:
        w_u8(0x80114F9Eu, 4u);
        w_u8(0x80114F9Du, r_u8(0x80114F9Eu));
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125458u + i, response[i]);
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125450u + i, response[i]);
        return 4u;
    case 5u:
        w_u8(0x80114F9Du, 5u);
        w_u8(0x80114F9Cu, r_u8(0x80114F9Du));
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125448u + i, response[i]);
        for (uint32 i = 0u; i < 8u; ++i)
            w_u8(0x80125450u + i, response[i]);
        return 6u;
    default:
        sf_native_cd_puts(0x8001407Cu);
        sf_native_cd_printf_interrupt(0x80014090u, interrupt);
        return 0u;
    }
}
