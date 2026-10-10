#include "game_draft.h"

/* Native card IRQ and event services replace the BIOS instruction patch hooks */
uint32 sub_8013F4E0(uint32 mode)
{
    uint32 offset;
    if (r_u32(0x8013F4E0u) != 0x27BDFFE8u || r_u32(0x8013F4F4u) != 0x0C050420u)
    {
        fprintf(stderr, "MOVIE card init called without its original overlay image\n");
        abort();
    }
    w_u32(0x80142A38u, 0u);
    w_u32(0x80142A7Cu, 0u);

    ChangeClearPAD(0u);
    xport_bios_enter_critical();
    if (r_u32(0x80115C58u) == 0u)
        mode = 0u;
    xport_bios_init_card(mode);

    /* Preserve the SDK patch storage even though native BIOS never executes it */
    for (offset = 0u; offset < 112u; offset += 4u)
        w_u32(0xDF80u + offset, r_u32(0x80141790u + offset));

    /* Host card services own both interrupt hooks without guest kernel code pointers */
    xport_bios_enter_critical();
    FlushCache();
    xport_bios_enter_critical();
    FlushCache();
    xport_bios_exit_critical();

    xport_bios_enter_critical();
    xport_bios_start_card();
    ChangeClearPAD(0u);
    xport_bios_exit_critical();

    /* BIOS A0 service70 uses the canonical native card initialization boundary */
    return xport_bios_start_card();
}
