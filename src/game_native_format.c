#include "game_draft.h"
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static void *sf_format_pointer(uint32 value)
{
    void *pointer = (void *)(uintptr_t)value;
    return xport_memory_readable(pointer, 1u) ? pointer : sf_draft_guest_ptr(value);
}

static sint32 sf_format_write(char *output, FILE *stream, const char *format, va_list *arguments)
{
    sint32 total = 0;
    while (*format)
    {
        char specification[96];
        uint32 length = 0u;
        sint32 needed;
        char *piece;
        char conversion;
        uint32 integer = 0u;
        double real = 0.0;
        const char *string = NULL;
        if (*format != '%')
        {
            if (output)
                output[total] = *format;
            else
                fputc(*format, stream);
            ++total;
            ++format;
            continue;
        }
        specification[length++] = *format++;
        if (*format == '%')
        {
            if (output)
                output[total] = '%';
            else
                fputc('%', stream);
            ++total;
            ++format;
            continue;
        }
        while (*format && strchr("-+ #0", *format))
            specification[length++] = *format++;
        if (*format == '*')
        {
            length += (uint32)sprintf(specification + length, "%d", va_arg(*arguments, sint32));
            ++format;
        }
        else
            while (isdigit((unsigned char)*format))
                specification[length++] = *format++;
        if (*format == '.')
        {
            specification[length++] = *format++;
            if (*format == '*')
            {
                sint32 precision = va_arg(*arguments, sint32);
                if (precision >= 0)
                    length += (uint32)sprintf(specification + length, "%d", precision);
                else
                    --length;
                ++format;
            }
            else
                while (isdigit((unsigned char)*format))
                    specification[length++] = *format++;
        }
        /* PsyQ long and int share the same 32-bit carrier */
        while (*format == 'h' || *format == 'l')
            ++format;
        conversion = *format++;
        specification[length++] = conversion;
        specification[length] = 0;
        if (conversion == 'n')
        {
            sint32 *count = (sint32 *)sf_format_pointer(va_arg(*arguments, uint32));
            *count = total;
            continue;
        }
        if (conversion == 's')
        {
            string = (const char *)sf_format_pointer(va_arg(*arguments, uint32));
            needed = _scprintf(specification, string);
        }
        else if (strchr("fFeEgG", conversion))
        {
            real = va_arg(*arguments, double);
            needed = _scprintf(specification, real);
        }
        else if (strchr("diouxXcp", conversion))
        {
            integer = va_arg(*arguments, uint32);
            needed = _scprintf(specification, integer);
        }
        else
        {
            fprintf(stderr, "Unsupported native PsyQ format conversion %c\n", conversion);
            abort();
        }
        if (needed < 0)
            return -1;
        piece = (char *)malloc((size_t)needed + 1u);
        if (!piece)
            abort();
        if (conversion == 's')
            sprintf(piece, specification, string);
        else if (strchr("fFeEgG", conversion))
            sprintf(piece, specification, real);
        else
            sprintf(piece, specification, integer);
        if (output)
            memcpy(output + total, piece, (size_t)needed);
        else
            fwrite(piece, 1u, (size_t)needed, stream);
        total += needed;
        free(piece);
    }
    if (output)
        output[total] = 0;
    return total;
}

sint32 sub_800EC924(uint32 destination, uint32 format, ...)
{
    sint32 result;
    va_list arguments;
    va_start(arguments, format);
    result = sf_format_write((char *)sf_draft_guest_ptr(destination), NULL, (const char *)sf_draft_guest_ptr(format), &arguments);
    va_end(arguments);
    return result;
}

sint32 sub_800EC914(const char *format, ...)
{
    sint32 result;
    va_list arguments;
    va_start(arguments, format);
    result = sf_format_write(NULL, stderr, format, &arguments);
    va_end(arguments);
    return result;
}

void sf_native_cd_puts(uint32 text)
{
    puts((const char *)sf_draft_guest_ptr(text));
}

void sf_native_cd_printf_text(uint32 format)
{
    sub_800EC914((const char *)sf_draft_guest_ptr(format));
}

void sf_native_cd_printf_error(uint32 format, uint32 command, uint32 status, uint32 code)
{
    sub_800EC914((const char *)sf_draft_guest_ptr(format), command, status, code);
}

void sf_native_cd_printf_interrupt(uint32 format, uint32 interrupt)
{
    sub_800EC914((const char *)sf_draft_guest_ptr(format), interrupt);
}
