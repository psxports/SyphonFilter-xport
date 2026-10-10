#include "game_draft.h"
#include <string.h>

static uint32 sf_subdivide_xy(uint32 first, uint32 second)
{
    sint32 ax = (sint16)first, ay = (sint16)(first >> 16);
    sint32 bx = (sint16)second, by = (sint16)(second >> 16);
    sint32 x = ax + ((bx - ax) >> 1);
    sint32 y = ay + ((by - ay) >> 1);
    x += (by > ay) - (by < ay);
    y -= (bx > ax) - (bx < ax);
    return (uint16)x | ((uint32)(uint16)y << 16);
}

static uint32 sf_subdivide_rgb(uint32 first, uint32 second)
{
    return (first & 0xFF000000u) | ((((first & 0xFF0000u) + (second & 0xFF0000u)) >> 1) & 0xFF0000u) | ((((first & 0xFF00u) + (second & 0xFF00u)) >> 1) & 0xFF00u) | (((first & 0xFFu) + (second & 0xFFu)) >> 1);
}

void sub_800D5B50(uint32 polygon, uint32 *cursor, uint32 ordering_table, uint32 depth_flags)
{
    FUNCTION_MARKER(0x800D5B50u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    uint32 v4 = *cursor;
    uint32 v5 = ordering_table;

    char v7;
    int v8;
    sint32 v9;
    unsigned int v10;
    unsigned int v11;
    unsigned int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    _DWORD *v20;
    _DWORD *v21;
    int v22;
    int v23;
    int v24;

    int v27;

    int v30;

    int v33;

    int v36;

    int v39;
    int v40;
    int v41;
    int v42;
    unsigned int v43;
    unsigned int v44;
    unsigned int v45;
    int v46;
    unsigned int v47;
    int v48;
    int v49;
    int v50;
    unsigned int v51;
    int v52;
    int v53;
    int v54;
    unsigned int v55;
    int v56;
    int v57;
    unsigned int v58;

    uint32 child_index;

    int v65[4];
    unsigned int v66;

    memset(v65, 0, sizeof(v65));
    v66 = 0;

    if ((sint32)(*SF_DRAFT_PTR(uint32, 0x801164A0u)) < (sint32)(v4 + 260u))
    {
        (*SF_DRAFT_PTR(uint32, 0x8011649Cu)) = v4;
    }
    else
    {
        v7 = *SF_DRAFT_PTR(_BYTE, (polygon + 7));
        *SF_DRAFT_PTR(_BYTE, (polygon + 3)) = 0;
        v8 = v7 & 8;
        v9 = v8 == 0;
        v10 = *SF_DRAFT_PTR(uint16, (polygon + 24));
        v11 = *SF_DRAFT_PTR(uint16, (polygon + 36));
        v12 = *SF_DRAFT_PTR(uint16, (polygon + 48));
        if (!v8)
            v12 = *SF_DRAFT_PTR(uint16, (polygon + 12));
        v13 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24))) >> 1)) | ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 24)))) >> 1)) << 8);
        v14 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36))) >> 1)) | ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 36)))) >> 1)) << 8);
        v15 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24)) - (uint8)v12) >> 1)) | ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 24))) - ((int)(HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 24))) - (v12 >> 8)) >> 1)) << 8);
        v16 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36)) - (uint8)v12) >> 1)) | ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 36))) - ((int)((v11 >> 8) - (v12 >> 8)) >> 1)) << 8);
        if (v8)
            v17 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 12)) - (uint8)v12) >> 1)) | ((HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - ((int)(HIBYTE(*SF_DRAFT_PTR(uint16, (polygon + 12))) - (v12 >> 8)) >> 1)) << 8);
        else
            v17 = ((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24)) - (((uint8)*SF_DRAFT_PTR(_WORD, (polygon + 24)) - (uint8)*SF_DRAFT_PTR(_WORD, (polygon + 36))) >> 1)) | (((v10 >> 8) - ((int)((v10 >> 8) - (v11 >> 8)) >> 1)) << 8);
        v18 = *SF_DRAFT_PTR(_DWORD, (polygon + 12));
        v19 = *SF_DRAFT_PTR(_DWORD, (polygon + 24));
        *SF_DRAFT_PTR(_DWORD, (v4 + 12)) = *SF_DRAFT_PTR(uint32, polygon + 12u);
        *SF_DRAFT_PTR(_DWORD, (v4 + 24)) = v19 & 0xFFFF0000 | v13;
        *SF_DRAFT_PTR(_DWORD, (v4 + 36)) = v14;
        *SF_DRAFT_PTR(_DWORD, (v4 + 48)) = v17;
        *SF_DRAFT_PTR(_DWORD, (v4 + 64)) = v18 & 0xFFFF0000 | v13;
        *SF_DRAFT_PTR(_DWORD, (v4 + 76)) = v19 & 0xFFFF0000 | v10;
        *SF_DRAFT_PTR(_DWORD, (v4 + 88)) = v17;
        *SF_DRAFT_PTR(_DWORD, (v4 + 100)) = v15;
        v20 = SF_DRAFT_PTR(_DWORD, (v4 + 92));
        if (v8)
            v20 = SF_DRAFT_PTR(_DWORD, (v4 + 104));
        v20[3] = v18 & 0xFFFF0000 | v14;
        v20[6] = v19 & 0xFFFF0000 | v17;
        v20[9] = v11;
        v20[12] = v16;
        v21 = v20 + (v8 ? 13 : 10);
        v21[3] = v18 & 0xFFFF0000 | v17;
        v21[6] = v19 & 0xFFFF0000 | v15;
        v21[9] = v16;
        v21[12] = v12;
        v22 = *SF_DRAFT_PTR(uint32, polygon + 8u);
        v23 = *SF_DRAFT_PTR(uint32, polygon + 20u);
        v24 = *SF_DRAFT_PTR(uint32, polygon + 32u);
        {
            uint32 fourth_xy = *SF_DRAFT_PTR(uint32, polygon + 44u);
            if (v9)
                fourth_xy = (uint32)v22;
            v27 = (sint32)sf_subdivide_xy((uint32)v22, (uint32)v23);
            v30 = (sint32)sf_subdivide_xy((uint32)v24, (uint32)v22);
            v33 = (sint32)sf_subdivide_xy((uint32)v23, fourth_xy);
            v36 = (sint32)sf_subdivide_xy(fourth_xy, (uint32)v24);
            if (v9)
                v39 = (sint32)sf_subdivide_xy((uint32)v23, (uint32)v24);
            else
                v39 = (sint32)sf_subdivide_xy(sf_subdivide_xy((uint32)v22, fourth_xy), sf_subdivide_xy((uint32)v23, (uint32)v24));
        }
        v40 = *SF_DRAFT_PTR(_DWORD, (polygon + 16));
        v41 = *SF_DRAFT_PTR(_DWORD, (polygon + 28));
        v42 = *SF_DRAFT_PTR(_DWORD, (polygon + 4));
        v43 = sf_subdivide_rgb((uint32)v40, v9 ? (uint32)v42 : *SF_DRAFT_PTR(uint32, polygon + 40u));
        v44 = sf_subdivide_rgb((uint32)v41, v9 ? (uint32)v42 : *SF_DRAFT_PTR(uint32, polygon + 40u));
        if (v9)
            v45 = sf_subdivide_rgb((uint32)v40, (uint32)v41);
        else
        {
            uint32 fourth_color = *SF_DRAFT_PTR(uint32, polygon + 40u);
            xport_gte_write_data(25u, sf_subdivide_rgb((uint32)v42, (uint32)v40));
            xport_gte_write_data(26u, sf_subdivide_rgb((uint32)v42, (uint32)v41));
            v45 = sf_subdivide_rgb(sf_subdivide_rgb((uint32)v42, fourth_color), sf_subdivide_rgb((uint32)v40, (uint32)v41));
        }
        *SF_DRAFT_PTR(_DWORD, (v4 + 4)) = v42 & 0xF7FFFFFF | 0x8000000;
        *SF_DRAFT_PTR(_DWORD, (v4 + 8)) = v22;
        *SF_DRAFT_PTR(_DWORD, (v4 + 16)) = (((v42 & 0xFF0000) + (v40 & 0xFF0000u)) >> 1) & 0xFF0000 | v42 & 0xFF000000 | (((v42 & 0xFF00) + (v40 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v42 + (unsigned int)(uint8)v40) >> 1);
        *SF_DRAFT_PTR(_DWORD, (v4 + 20)) = v27;
        *SF_DRAFT_PTR(_DWORD, (v4 + 28)) = (((v42 & 0xFF0000) + (v41 & 0xFF0000u)) >> 1) & 0xFF0000 | v42 & 0xFF000000 | (((v42 & 0xFF00) + (v41 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v42 + (unsigned int)(uint8)v41) >> 1);
        *SF_DRAFT_PTR(_DWORD, (v4 + 32)) = v30;
        *SF_DRAFT_PTR(_DWORD, (v4 + 40)) = v45;
        *SF_DRAFT_PTR(_DWORD, (v4 + 44)) = v39;
        v46 = ((*SF_DRAFT_PTR(uint32, 0x1F800010)) & 0xFFFC) + v5;
        *SF_DRAFT_PTR(_DWORD, v4) = *SF_DRAFT_PTR(_DWORD, v46);
        *SF_DRAFT_PTR(_BYTE, (v4 + 3)) = 12;
        *SF_DRAFT_PTR(_DWORD, v46) = v4;
        *SF_DRAFT_PTR(_BYTE, (v46 + 3)) = 0;
        v47 = v66;
        *(int *)((char *)v65 + v66) = v4;
        v66 = v47 + 4;
        v48 = v4 + 52;
        v49 = 0x8000000;
        if (v9)
            v49 = 0;
        *SF_DRAFT_PTR(_DWORD, (v48 + 4)) = (((v42 & 0xFF0000) + (v40 & 0xFF0000u)) >> 1) & 0xFF0000 | v42 & 0xF7000000 | (((v42 & 0xFF00) + (v40 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v42 + (unsigned int)(uint8)v40) >> 1) | v49;
        *SF_DRAFT_PTR(_DWORD, (v48 + 8)) = v27;
        *SF_DRAFT_PTR(_DWORD, (v48 + 16)) = v40;
        *SF_DRAFT_PTR(_DWORD, (v48 + 20)) = v23;
        *SF_DRAFT_PTR(_DWORD, (v48 + 28)) = v45;
        *SF_DRAFT_PTR(_DWORD, (v48 + 32)) = v39;
        *SF_DRAFT_PTR(_DWORD, (v48 + 40)) = v43;
        *SF_DRAFT_PTR(_DWORD, (v48 + 44)) = v33;
        v50 = ((*SF_DRAFT_PTR(uint32, 0x1F800014)) & 0xFFFC) + v5;
        *SF_DRAFT_PTR(_DWORD, v48) = *SF_DRAFT_PTR(_DWORD, v50);
        *SF_DRAFT_PTR(_BYTE, (v48 + 3)) = 12;
        *SF_DRAFT_PTR(_DWORD, v50) = v48;
        *SF_DRAFT_PTR(_BYTE, (v50 + 3)) = 0;
        v51 = v66;
        *(int *)((char *)v65 + v66) = v48;
        v66 = v51 + 4;
        if ((v49 & 0x8000000) != 0)
        {
            v52 = v48 + 52;
        }
        else
        {
            *SF_DRAFT_PTR(_BYTE, (v48 + 3)) = 9;
            v52 = v48 + 40;
        }
        v53 = 0x8000000;
        if (v9)
            v53 = 0;
        *SF_DRAFT_PTR(_DWORD, (v52 + 4)) = (((v42 & 0xFF0000) + (v41 & 0xFF0000u)) >> 1) & 0xFF0000 | v42 & 0xF7000000 | (((v42 & 0xFF00) + (v41 & 0xFF00u)) >> 1) & 0xFF00 | (uint8)(((uint8)v42 + (unsigned int)(uint8)v41) >> 1) | v53;
        *SF_DRAFT_PTR(_DWORD, (v52 + 8)) = v30;
        *SF_DRAFT_PTR(_DWORD, (v52 + 16)) = v45;
        *SF_DRAFT_PTR(_DWORD, (v52 + 20)) = v39;
        *SF_DRAFT_PTR(_DWORD, (v52 + 28)) = v41;
        *SF_DRAFT_PTR(_DWORD, (v52 + 32)) = v24;
        *SF_DRAFT_PTR(_DWORD, (v52 + 40)) = v44;
        *SF_DRAFT_PTR(_DWORD, (v52 + 44)) = v36;
        v54 = ((*SF_DRAFT_PTR(uint32, 0x1F800018)) & 0xFFFC) + v5;
        *SF_DRAFT_PTR(_DWORD, v52) = *SF_DRAFT_PTR(_DWORD, v54);
        *SF_DRAFT_PTR(_BYTE, (v52 + 3)) = 12;
        *SF_DRAFT_PTR(_DWORD, v54) = v52;
        *SF_DRAFT_PTR(_BYTE, (v54 + 3)) = 0;
        v55 = v66;
        *(int *)((char *)v65 + v66) = v52;
        v66 = v55 + 4;
        if ((v53 & 0x8000000) != 0)
        {
            v56 = v52 + 52;
        }
        else
        {
            *SF_DRAFT_PTR(_BYTE, (v52 + 3)) = 9;
            v56 = v52 + 40;
        }
        if (!v9)
        {
            *SF_DRAFT_PTR(_DWORD, (v56 + 4)) = (v45 & 0xF7FFFFFFu) | 0x08000000u;
            *SF_DRAFT_PTR(_DWORD, (v56 + 8)) = v39;
            *SF_DRAFT_PTR(_DWORD, (v56 + 16)) = v43;
            *SF_DRAFT_PTR(_DWORD, (v56 + 20)) = v33;
            *SF_DRAFT_PTR(_DWORD, (v56 + 28)) = v44;
            *SF_DRAFT_PTR(_DWORD, (v56 + 32)) = v36;
            *SF_DRAFT_PTR(_DWORD, (v56 + 40)) = *SF_DRAFT_PTR(uint32, polygon + 40u);
            *SF_DRAFT_PTR(_DWORD, (v56 + 44)) = *SF_DRAFT_PTR(uint32, polygon + 44u);
            v57 = ((*SF_DRAFT_PTR(uint32, 0x1F80001C)) & 0xFFFC) + v5;
            *SF_DRAFT_PTR(_DWORD, v56) = *SF_DRAFT_PTR(_DWORD, v57);
            *SF_DRAFT_PTR(_BYTE, (v56 + 3)) = 12;
            *SF_DRAFT_PTR(_DWORD, v57) = v56;
            *SF_DRAFT_PTR(_BYTE, (v57 + 3)) = 0;
            v58 = v66;
            *(int *)((char *)v65 + v66) = v56;
            v66 = v58 + 4;
        }
        *cursor = v56 + (v9 ? 0u : 52u);
        if ((uint8)(depth_flags - 1u))
        {
            for (child_index = 0; child_index < v66 / 4u; ++child_index)
            {
                uint32 child = (uint32)v65[child_index];
                xport_gte_write_data(12u, *SF_DRAFT_PTR(_DWORD, (child + 8u)));
                xport_gte_write_data(13u, *SF_DRAFT_PTR(_DWORD, (child + 20u)));
                xport_gte_write_data(14u, *SF_DRAFT_PTR(_DWORD, (child + 32u)));
                if (sub_800D5824(*SF_DRAFT_PTR(_DWORD, (child + 44u)), (*SF_DRAFT_PTR(_DWORD, (child + 4u)) & 0x08000000u) == 0))
                    sub_800D5B50(child, cursor, ordering_table, depth_flags - 1u);
                else if ((depth_flags - 1u) & 0x2000u)
                    sub_800D7110(child, cursor, ordering_table, depth_flags - 1u);
            }
        }
    }
}
