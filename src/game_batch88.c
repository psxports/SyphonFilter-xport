#include "game_draft.h"

void sub_800E9494(sint16 x0, sint16 y0, sint16 x1, sint16 y1)
{
    FUNCTION_MARKER(0x800E9494u, "SCUS_942.40");
    sint16 interlace = (sint16)r_u16(0x8013C638u);
    w_u16(0x801287D8u, (uint16)x0);
    w_u16(0x801287DAu, (uint16)x1);
    w_u16(0x80128874u, (uint16)y0);
    w_u16(0x80128876u, (uint16)y1);
    if (interlace)
    {
        w_u16(0x8012B7D0u, 0u);
        w_u16(0x8012B7D2u, 0u);
        w_u16(0x8012B7D4u, 0u);
        w_u16(0x8012B7D6u, 0u);
    }
    else
    {
        w_u16(0x8012B7D0u, (uint16)x0);
        w_u16(0x8012B7D2u, (uint16)x1);
        w_u16(0x8012B7D4u, (uint16)y0);
        w_u16(0x8012B7D6u, (uint16)y1);
    }
    sub_800E8FA4();
    sub_800E8E94();
}
