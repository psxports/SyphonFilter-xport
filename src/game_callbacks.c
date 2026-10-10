#include "game_draft.h"
#include <stdlib.h>
#include <stdio.h>

sint32 sf_callbacks_page_0(uint32 target, uint32 argc, const uint32 *args, uint32 *result);
sint32 sf_callbacks_page_1(uint32 target, uint32 argc, const uint32 *args, uint32 *result);
sint32 sf_callbacks_page_2(uint32 target, uint32 argc, const uint32 *args, uint32 *result);
sint32 sf_callbacks_page_3(uint32 target, uint32 argc, const uint32 *args, uint32 *result);
sint32 sf_callbacks_page_4(uint32 target, uint32 argc, const uint32 *args, uint32 *result);
sint32 sf_callbacks_page_5(uint32 target, uint32 argc, const uint32 *args, uint32 *result);

void sf_callback_arity_error(uint32 target, uint32 expected, uint32 received)
{
    fprintf(stderr, "Native callback %08X requires at least %u arguments, received %u\n", target, expected, received);
    abort();
}

void sf_callback_image_error(uint32 target, const char *image)
{
    fprintf(stderr, "Native callback %08X has no resident %s image\n", target, image);
    abort();
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args)
{
    uint32 result;
    if (argc && !args)
        abort();
    if (sf_callbacks_page_0(target, argc, args, &result))
        return result;
    if (sf_callbacks_page_1(target, argc, args, &result))
        return result;
    if (sf_callbacks_page_2(target, argc, args, &result))
        return result;
    if (sf_callbacks_page_3(target, argc, args, &result))
        return result;
    if (sf_callbacks_page_4(target, argc, args, &result))
        return result;
    if (sf_callbacks_page_5(target, argc, args, &result))
        return result;
    fprintf(stderr, "Unimplemented native callback %08X with %u arguments\n", target, argc);
    abort();
}
