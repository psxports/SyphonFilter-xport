#include "game_draft.h"

void sub_8013F52C(void)
{
    FUNCTION_MARKER(0x8013F52Cu, "MOVIE.OVL");
    /* TODO Called routines retain unresolved ABI through numeric dispatch */
    sf_draft_call(0x80140ED0u, 0u, NULL);
    w_u32(0x80142A3Cu, 0u);
    w_u32(0x80142A40u, 0u);
    w_u32(0x80142A44u, 0u);
    w_u32(0x80142A4Cu, 0xFFFFFFFFu);
    sf_draft_call(0x801410B0u, 0u, NULL);
    sf_draft_call(0x800E4248u, 2u, (const uint32[]){7u, 0x80140D70u});
}

void sub_80140ED0(void)
{
    FUNCTION_MARKER(0x80140ED0u, "MOVIE.OVL");
    w_u32(0x801429ECu, 0xFFFFFFFFu);
}

void sub_801410B0(void)
{
    FUNCTION_MARKER(0x801410B0u, "MOVIE.OVL");
    uint32 previous = sub_800E3F34();
    uint32 handle;
    uint32 index;
    const uint32 specs[4] = {4u, 0x8000u, 0x100u, 0x2000u};
    /* TODO Event operations retain their unbound native ABI through dispatch */
    for (index = 0u; index < 8u; ++index)
    {
        uint32 event_class = index < 4u ? 0xF4000001u : 0xF0000011u;
        uint32 callback = 0x80140FE0u + 20u * index;
        handle = sf_draft_call(0x800F2474u, 4u, (const uint32[]){event_class, specs[index & 3u], 0x1000u, callback});
        w_u32(0x80142AE4u + 4u * index, handle);
    }
    for (index = 0u; index < 8u; ++index)
        sf_draft_call(0x800F2484u, 1u, (const uint32[]){r_u32(0x80142AE4u + 4u * index)});
    sf_draft_call(0x80141360u, 0u, NULL);
    if (previous == 1u)
        sub_800E3F44();
}

void sub_80141360(void)
{
    FUNCTION_MARKER(0x80141360u, "MOVIE.OVL");
    uint32 index;
    /* TODO The original event operation retains its unresolved native ABI */
    for (index = 0u; index < 8u; ++index)
        sf_draft_call(0x800FE894u, 1u, (const uint32[]){r_u32(0x80142AE4u + 4u * index)});
    w_u32(0x80142B10u, 0u);
    w_u32(0x80142B0Cu, r_u32(0x80142B10u));
    w_u32(0x80142B08u, r_u32(0x80142B0Cu));
    w_u32(0x80142B04u, r_u32(0x80142B08u));
    w_u32(0x80142B20u, 0u);
    w_u32(0x80142B1Cu, r_u32(0x80142B20u));
    w_u32(0x80142B18u, r_u32(0x80142B1Cu));
    w_u32(0x80142B14u, r_u32(0x80142B18u));
}
