#include "game_draft.h"

/* TODO Full native renderer draft; custom outputs and trap-site arithmetic require integration review */
static sint32 sf_D40A4_missing(const char *field)
{
    fprintf(stderr, "TODO 800D40A4: %s\n", field);
    abort();
}

static sint32 sf_D40A4_projection_distance(void)
{
    PsxGteSnapshot state;
    psx_gte_snapshot(&state);
    return state.h;
}

static uint32 sf_D40A4_missing_color(uint32 scratch, uint32 projected, uint32 depth)
{
    return (uint32)sf_D40A4_missing("D3B8C custom color output");
}

uint32 sub_800D37FC(void);
uint32 sub_800D3C6C(void);
uint32 sub_800D3B8C(void);

sint32 sub_800D40A4(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800D40A4u, "SCUS_942.40");
    uint32 vertex_address;
    uint32 packet_triangle;
    sint16 missing_depths[4];
    sint32 gte_word0;
    sint32 gte_word1;
    sint32 gte_word2;
    sint32 gte_word3;
    sint32 gte_word4;
    sint32 gte_word5;
    sint32 gte_word6;
    sint32 gte_word7;
    sint32 gte_word9;
    sint32 gte_result;
    sint16 v4;
    sint32 v6;
    uint32 v7;
    sint32 v8;
    sint32 v9;
    sint32 v11;
    uint32 v12;
    sint32 v13;
    sint32 i;
    sint32 v15;
    sint32 v16;
    sint32 v17;
    sint32 v18;
    uint32 v19;
    sint32 v20;
    sint32 v21;
    sint32 v22;
    sint32 v23;
    sint32 v28;
    sint32 v29;
    sint32 v31;
    sint32 v34;
    sint32 v37;
    sint32 v42;
    uint32 v44;
    bool j;
    sint32 v46;
    sint32 v47;
    sint16 v48;
    sint32 v49;
    sint16 v50;
    sint32 v51;
    sint32 v52;
    sint32 v53;
    sint32 v54;
    sint32 v55;
    sint32 v56;
    sint32 v57;
    sint32 v58;
    sint32 v59;
    sint32 v61;
    uint32 v62;
    sint32 v73;
    uint32 v74;
    sint32 v78;
    sint32 v79;
    sint32 v81;
    sint32 v83;
    uint32 v91;
    sint32 v92;
    sint32 v93;
    sint32 v94;
    sint32 v95;
    sint32 v96;
    uint32 v97;
    uint32 v98;
    uint32 v99;
    uint32 v100;
    sint32 v101;
    sint32 v102;
    sint32 v103;
    sint32 v104;
    sint32 v105;
    uint32 v106;
    sint32 v107;
    sint32 v108;
    sint32 v110;
    sint32 v111;
    sint32 v113;
    uint32 v114;
    uint32 v115;
    sint32 v116;
    uint32 v120;
    sint32 v121;
    sint32 v122;
    sint32 v123;
    sint32 v125;
    sint32 v128;
    sint32 v129;
    sint32 v131;
    uint32 v132;
    sint32 v133;
    sint32 v135;
    sint32 v136;
    sint32 v137;
    sint32 v138;
    uint32 v139;
    sint32 v140;
    sint32 v142;
    sint32 v143;
    sint32 v144;
    sint32 v145;
    sint32 v146;
    sint32 v147;
    sint32 v148;
    sint16 v149;
    sint32 v150;
    sint32 v151;
    sint32 v152;
    sint32 v154;
    sint32 v156;
    sint32 v158;
    uint32 v159;
    uint32 v161;
    sint32 v162;
    sint16 v163;
    sint32 v165;
    sint16 v166;
    sint16 v167;
    sint16 v168;
    sint16 v169;
    sint32 result;
    sint32 v173;
    sint32 v175;
    uint32 v177;
    sint32 v178;
    *((uint8 *)sf_draft_guest_ptr((uint32)0x1F8003F4u)) = 0;
    v4 = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)a1) + ((uint32)2))))));
    *((uint16 *)sf_draft_guest_ptr((uint32)0x1F8003FAu)) = *((uint32 *)sf_draft_guest_ptr((uint32)0x80116528u));
    *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003F0u)) = (sint32)(((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x801164A0u)))) - ((uint32)40));
    *((uint8 *)sf_draft_guest_ptr((uint32)0x1F8003F7u)) = (uint8)v4;
    gte_word4 = sf_D40A4_projection_distance();
    v6 = ((sint32)(((uint32)gte_word4) * ((uint32)((uint16)a2)))) / 38;
    if (v6 >= 0x10000)
        v6 = 0xFFFF;
    v7 = (a2 & 0xFFFF0000) | v6;
    v8 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)a4) + ((uint32)16)))))))) + ((uint32)40))))));
    *((sint32 *)sf_draft_guest_ptr((uint32)0x1F80039Cu)) = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)a4) + ((uint32)20))))));
    *((sint8 *)sf_draft_guest_ptr((uint32)0x1F8003F6u)) = ((sint32)(((uint32)(*((sint8 *)sf_draft_guest_ptr((uint32)0x80116A14u)))) << (((uint32)7) & 31u))) | ((v8 & 0x100000) != 0);
    *((sint32 *)sf_draft_guest_ptr((uint32)0x1F8003ACu)) = 0;
    *((sint16 *)sf_draft_guest_ptr((uint32)0x1F8003F8u)) = (sint32)(((uint32)((sint32)(((uint32)5) * ((uint32)gte_word4)))) + ((uint32)(((unsigned int)((sint32)(((uint32)5) * ((uint32)gte_word4)))) >> (((uint32)1) & 31u))));
    v9 = 192;
    if (*((sint32 *)sf_draft_guest_ptr((uint32)0x1F80039Cu)))
        v9 = (uint16)v7;
    gte_word3 = sf_D40A4_projection_distance();
    v11 = ((sint32)(((uint32)gte_word3) * ((uint32)v9))) / 38;
    if (v11 >= 1024)
        v11 = 1023;
    *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A0u)) = v11 | ((sint32)(((uint32)(((sint32)(((uint32)120) * ((uint32)gte_word3))) / 38)) << (((uint32)16) & 31u)));
    v12 = *((uint32 *)sf_draft_guest_ptr((uint32)0x8012C8A0u));
    *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u)) = *((uint32 *)sf_draft_guest_ptr((uint32)0x80116450u));
    v177 = ((uint16 *)(&v7))[1];
    v13 = ((sint32)(((uint32)gte_word3) * ((uint32)((uint16)v7)))) / 38;
    for (i = (sint32)(((uint32)a1) - ((uint32)4));; i = v178)
    {
        v15 = (sint32)(((uint32)i) + ((uint32)4));
        v16 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v15) + ((uint32)4))))));
        if (v16 == ((sint32)(0u - ((uint32)1))))
            break;
        v178 = v15;
        v17 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v15) + ((uint32)4))))));
        v18 = (sint32)(((uint32)((sint32)(((uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)18)))))))) - ((uint32)(((sint32)(((uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)18)))))))) - ((uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)16)))))))))) >> (((uint32)1) & 31u)))))) << (((uint32)16) & 31u));
        v19 = (sint32)(((uint32)((sint32)(((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116454u)))) + ((uint32)(((unsigned int)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116454u)))) >> (((uint32)2) & 31u)))))) + ((uint32)(((unsigned int)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116454u)))) >> (((uint32)3) & 31u))));
        v20 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)8))))));
        v21 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)10))))));
        v22 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)12))))));
        v23 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)14))))));
        gte_word0 = (*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)8))))))) | v18;
        gte_word1 = *((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)10))))));
        sf_gte_write_data(0u, (uint32)gte_word0);
        sf_gte_write_data(1u, (uint32)gte_word1);
        gte_word1 = *((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)14))))));
        sf_gte_write_data(2u, (uint32)gte_word0);
        sf_gte_write_data(3u, (uint32)gte_word1);
        gte_word0 = (*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)12))))))) | v18;
        sf_gte_write_data(4u, (uint32)gte_word0);
        sf_gte_write_data(5u, (uint32)gte_word1);
        sf_gte_execute(0x280030u);
        v28 = 0;
        if (((((!(*((sint32 *)sf_draft_guest_ptr((uint32)0x1F80039Cu)))) && (((sint32)(((uint32)((sint32)(((uint32)v20) - ((uint32)(*((sint16 *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)4u))))))))))))) - ((uint32)304))) <= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v22) - ((uint32)(*((sint16 *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)4u))))))))))))) + ((uint32)304))) >= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v21) - ((uint32)(*((sint16 *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)8u))))))))))))) - ((uint32)304))) <= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v23) - ((uint32)(*((sint16 *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)8u))))))))))))) + ((uint32)304))) >= 0))
        {
            v28 = 1;
            *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003C0u)) = *((uint32 *)sf_draft_guest_ptr((uint32)0x8012FA38u));
            *((sint16 *)sf_draft_guest_ptr((uint32)0x1F8003C4u)) = *((_WORD *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)4u))))))));
            *((sint16 *)sf_draft_guest_ptr((uint32)0x1F8003C6u)) = *((_WORD *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)6u))))))));
            *((sint16 *)sf_draft_guest_ptr((uint32)0x1F8003C8u)) = *((_WORD *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)8u))))))));
            *((sint16 *)sf_draft_guest_ptr((uint32)0x1F8003CAu)) = *((_WORD *)(&(*((uint8 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)0x8012FA44u) + ((uint32)10u))))))));
        }
        if (((*((sint32 *)sf_draft_guest_ptr((uint32)0x1F80039Cu))) & 0x1000) != 0)
            goto LABEL_44;
        v29 = ((int)(*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003FCu)))) >> (((uint32)16) & 31u);
        if ((((((sint32)(((uint32)((sint32)(((uint32)v20) - ((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003FCu))))))) - ((uint32)304))) <= 0) && (((sint32)(((uint32)((sint32)(((uint32)v22) - ((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003FCu))))))) + ((uint32)304))) >= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v21) - ((uint32)v29)))) - ((uint32)304))) <= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v23) - ((uint32)v29)))) + ((uint32)304))) >= 0))
        {
            goto LABEL_44;
        }
        if (((v13 == 2048) || ((*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u))) == 0x3FFF)) || v28)
            goto LABEL_44;
        gte_word1 = (sint32)sf_gte_read_data(17u);
        j = gte_word1 <= 0;
        v31 = (sint32)(((uint32)gte_word1) - ((uint32)v19));
        if ((!j) && (v31 <= 0))
        {
            gte_word2 = (sint32)sf_gte_read_data(12u);
            gte_word2 = (sint16)gte_word2;
            if ((gte_word2 & 0x8000u) != 0)
                gte_word2 = (sint32)(0u - ((uint32)((sint16)gte_word2)));
            if (((sint32)(((uint32)gte_word2) - ((uint32)v13))) <= 0)
                goto LABEL_44;
        }
        gte_word1 = (sint32)sf_gte_read_data(18u);
        j = gte_word1 <= 0;
        v34 = (sint32)(((uint32)gte_word1) - ((uint32)v19));
        if ((!j) && (v34 <= 0))
        {
            gte_word2 = (sint32)sf_gte_read_data(13u);
            gte_word2 = (sint16)gte_word2;
            if ((gte_word2 & 0x8000u) != 0)
                gte_word2 = (sint32)(0u - ((uint32)((sint16)gte_word2)));
            if (((sint32)(((uint32)gte_word2) - ((uint32)v13))) <= 0)
                goto LABEL_44;
        }
        gte_word1 = (sint32)sf_gte_read_data(19u);
        j = gte_word1 <= 0;
        v37 = (sint32)(((uint32)gte_word1) - ((uint32)v19));
        if ((!j) && (v37 <= 0))
        {
            gte_word2 = (sint32)sf_gte_read_data(14u);
            gte_word2 = (sint16)gte_word2;
            if ((gte_word2 & 0x8000u) != 0)
                gte_word2 = (sint32)(0u - ((uint32)((sint16)gte_word2)));
            if (((sint32)(((uint32)gte_word2) - ((uint32)v13))) <= 0)
                goto LABEL_44;
        }
        gte_word0 = ((uint16)v22) | v18;
        gte_word1 = (uint16)v21;
        sf_gte_write_data(0u, (uint32)gte_word0);
        sf_gte_write_data(1u, (uint32)gte_word1);
        sf_gte_execute(0x180001u);
        gte_word1 = (sint32)sf_gte_read_data(19u);
        j = gte_word1 <= 0;
        v42 = (sint32)(((uint32)gte_word1) - ((uint32)v19));
        if ((!j) && (v42 <= 0))
        {
            gte_word2 = (sint32)sf_gte_read_data(14u);
            gte_word2 = (sint16)gte_word2;
            if ((gte_word2 & 0x8000u) != 0)
                gte_word2 = (sint32)(0u - ((uint32)((sint16)gte_word2)));
            if (((sint32)(((uint32)gte_word2) - ((uint32)v13))) <= 0)
            {
            LABEL_44:
                v44 = 0x8012FA38u;
                if (!(*((sint32 *)sf_draft_guest_ptr((uint32)0x1F80039Cu))))
                {
                    for (j = (*((sint16 *)sf_draft_guest_ptr((uint32)0x8011644Eu))) != 0;; j = 0)
                    {
                        v44 = (sint32)(((uint32)v44) + ((uint32)44u));
                        if (j)
                            break;
                        v46 = *((sint16 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v44) + ((uint32)16u)))));
                        v47 = *((sint16 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v44) + ((uint32)20u)))));
                        if (!(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v44) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1))))))))))
                            break;
                        if (((((sint32)(((uint32)((sint32)(((uint32)v20) - ((uint32)v46)))) - ((uint32)304))) <= 0) && (((sint32)(((uint32)((sint32)(((uint32)v22) - ((uint32)v46)))) + ((uint32)304))) >= 0)) && (((sint32)(((uint32)((sint32)(((uint32)v21) - ((uint32)v47)))) - ((uint32)304))) <= 0))
                        {
                            v48 = *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v44) + ((uint32)18u)))));
                            if (((sint32)(((uint32)((sint32)(((uint32)v23) - ((uint32)v47)))) + ((uint32)304))) >= 0)
                            {
                                v49 = (sint32)(((uint32)((sint32)(((uint32)16) * ((uint32)v28)))) + ((uint32)528482304));
                                v50 = *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v44) + ((uint32)22u)))));
                                *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v49) + ((uint32)960)))))) = v44;
                                *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v49) + ((uint32)964)))))) = v46;
                                *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v49) + ((uint32)966)))))) = v48;
                                *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v49) + ((uint32)968)))))) = v47;
                                *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v49) + ((uint32)970)))))) = v50;
                                if ((++v28) == 3)
                                    break;
                            }
                        }
                    }
                }
                v51 = ((sint32)(((uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)6)))))))) + ((uint32)2))) / 3;
                v52 = 528482304;
                v53 = (sint32)(((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)36)))))))) + ((uint32)v16));
                v54 = v53;
                v55 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v16) + ((uint32)6))))));
                v56 = 528482304;
                v57 = 0;
                do
                {
                    --v55;
                    v58 = (((sint32)(((uint32)((((*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v54) + ((uint32)6))))))) >> (((uint32)7) & 31u)) & 0xF8) | v57)) << (((uint32)16) & 31u))) | ((sint32)(((uint32)(((*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v54) + ((uint32)6))))))) >> (((uint32)2) & 31u)) & 0xF8)) << (((uint32)8) & 31u)))) | (((sint32)(((uint32)8) * ((uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v54) + ((uint32)6)))))))))) & 0xF8);
                    *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v56) + ((uint32)4)))))) = 0;
                    *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v56) + ((uint32)8)))))) = v58;
                    v54 = (sint32)(((uint32)v54) + ((uint32)8));
                    v57 = (sint32)(((uint32)v57) + ((uint32)256));
                    v56 = (sint32)(((uint32)v56) + ((uint32)12));
                } while (v55);
                if ((v177 & 0x8000) == 0)
                    goto LABEL_78;
                v59 = *((uint32 *)sf_draft_guest_ptr((uint32)0x80116464u));
                if (!(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116464u))))
                    goto LABEL_78;
                v175 = *((uint32 *)sf_draft_guest_ptr((uint32)0x80116464u));
                while (((*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v59))))) + ((uint32)4))))))) & 1) == 0)
                {
                    if (((*((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1014))))))) & 1) == 0)
                        goto LABEL_63;
                LABEL_74:
                    v175 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v175) + ((uint32)8))))));
                    v59 = v175;
                    if (!v175)
                    {
                        if ((*((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1015))))))) >= 0)
                            sub_800D3C6C();
                        else
                            sub_800D37FC();
                    LABEL_78:
                        gte_word0 = v53;
                        v73 = v51;
                        v74 = v52;
                        gte_word2 = v52;
                        do
                        {
                            while (1)
                            {
                                sf_gte_write_data(0u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0u))));
                                sf_gte_write_data(1u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)4u))));
                                sf_gte_write_data(2u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)8u))));
                                sf_gte_write_data(3u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0xCu))));
                                sf_gte_write_data(4u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0x10u))));
                                sf_gte_write_data(5u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0x14u))));
                                v21 = (sint32)sf_gte_read_data(0u);
                                v22 = (sint32)sf_gte_read_data(2u);
                                v23 = (sint32)sf_gte_read_data(4u);
                                sf_gte_execute(0x280030u);
                                if (v28)
                                {
                                    vertex_address = (uint32)gte_word0;
                                    sub_800D3EF4(v28, r_s16(0x801164BCu), (uint32)v21, (uint32)v22, (uint32)v23, (uint32)v17, (uint32)v74, (uint32)v73, (uint32)v53, 0x00FEFEFEu, &vertex_address);
                                    gte_word0 = (sint32)vertex_address;
                                }
                                gte_word0 = (sint32)(((uint32)gte_word0) + ((uint32)24));
                                --v73;
                                w_u32((sint32)(((uint32)v74) + ((uint32)0u)), sf_gte_read_data(12u));
                                w_u32((sint32)(((uint32)v74) + ((uint32)0xCu)), sf_gte_read_data(13u));
                                w_u32((sint32)(((uint32)v74) + ((uint32)0x18u)), sf_gte_read_data(14u));
                                if (!v28)
                                    break;
                                gte_word3 = (sint32)sf_gte_read_data(17u);
                                *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)4u))))) |= gte_word3;
                                gte_word3 = (sint32)sf_gte_read_data(18u);
                                *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)16u))))) |= gte_word3;
                                gte_word3 = (sint32)sf_gte_read_data(19u);
                                *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)28u))))) |= gte_word3;
                                v74 = (sint32)(((uint32)v74) + ((uint32)36u));
                                if (!v73)
                                    goto LABEL_97;
                            }
                            v78 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)928))))));
                            v79 = *((sint16 *)sf_draft_guest_ptr((uint32)v74));
                            gte_word4 = (sint32)sf_gte_read_data(17u);
                            if (v79 < 0)
                                v79 = (sint32)(0u - ((uint32)v79));
                            if (v78 < v79)
                                gte_word4 |= 0x10000u;
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)4u))))) = gte_word4;
                            v81 = *((sint16 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)((sint32)(((uint32)2u) * ((uint32)6))))))));
                            gte_word4 = (sint32)sf_gte_read_data(18u);
                            if (v81 < 0)
                                v81 = (sint32)(0u - ((uint32)v81));
                            if (v78 < v81)
                                gte_word4 |= 0x10000u;
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)16u))))) = gte_word4;
                            v83 = *((sint16 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)((sint32)(((uint32)2u) * ((uint32)12))))))));
                            gte_word4 = (sint32)sf_gte_read_data(19u);
                            if (v83 < 0)
                                v83 = (sint32)(0u - ((uint32)v83));
                            if (v78 < v83)
                                gte_word4 |= 0x10000u;
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v74) + ((uint32)28u))))) = gte_word4;
                            v74 = (sint32)(((uint32)v74) + ((uint32)36u));
                        } while (v73);
                    LABEL_97:
                        if (v177)
                        {
                            if ((v177 & 0x2000) != 0)
                            {
                                v91 = v52;
                                v92 = *((uint32 *)sf_draft_guest_ptr((uint32)0x80116B28u));
                                v93 = v51;
                                if ((*((uint32 *)sf_draft_guest_ptr((uint32)0x80116B28u))) > 0)
                                    *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1012)))))) = 2;
                                do
                                {
                                    v94 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                                    v95 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)5))))))));
                                    v96 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)8))))))));
                                    if (v92 > 0)
                                    {
                                        v97 = (v94 & 0xFF000000) | (v92 & 0xFFFFFF);
                                        v98 = (v95 & 0xFF000000) | (v92 & 0xFFFFFF);
                                        v99 = (v96 & 0xFF000000) | (v92 & 0xFFFFFF);
                                    }
                                    else
                                    {
                                        v97 = v94 & v92;
                                        v98 = v95 & v92;
                                        v99 = v96 & v92;
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2)))))))) = v97;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)5)))))))) = v98;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v91) + ((uint32)((sint32)(((uint32)4u) * ((uint32)8)))))))) = v99;
                                    --v93;
                                    v91 = (sint32)(((uint32)v91) + ((uint32)36u));
                                } while (v93);
                            }
                            if ((v177 & 0x1000) != 0)
                            {
                                v100 = v52;
                                v101 = v51;
                                do
                                {
                                    v102 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)5))))))));
                                    v103 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)8))))))));
                                    if (((sint32)(((uint32)((uint8)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))))))) - ((uint32)24))) >= 0)
                                    {
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2)))))))) = (sint32)(((uint32)((*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))))) & 0xFF000000)) + ((uint32)1579032));
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)5)))))))) = (sint32)(((uint32)(v102 & 0xFF000000)) + ((uint32)1579032));
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v100) + ((uint32)((sint32)(((uint32)4u) * ((uint32)8)))))))) = (sint32)(((uint32)(v103 & 0xFF000000)) + ((uint32)1579032));
                                    }
                                    --v101;
                                    v100 = (sint32)(((uint32)v100) + ((uint32)36u));
                                } while (v101);
                            }
                            if ((v177 & 0x4000) != 0)
                            {
                                {
                                    sint32 remaining_colors = r_s16((sint32)(((uint32)((uint32)v17)) + ((uint32)6u)));
                                    uint32 color_cursor = 0x1F800000u;
                                    do
                                    {
                                        sub_800D3B8C();
                                        w_u32((sint32)(((uint32)color_cursor) + ((uint32)20u)), sf_D40A4_missing_color(color_cursor, 0u, 1u));
                                        --remaining_colors;
                                        color_cursor = (sint32)(((uint32)color_cursor) + ((uint32)12u));
                                    } while (remaining_colors != 0);
                                }
                            }
                        }
                        v104 = *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u));
                        v105 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v17) + ((uint32)4))))));
                        v106 = (sint32)(((uint32)v17) + ((uint32)44));
                        v107 = 2047;
                        if ((!(*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u)))) || ((v107 = *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u)), v104 = ((uint16 *)(&(*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u)))))[1], (*((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A8u))) < 0x1000u)))
                        {
                            v108 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v17) + ((uint32)6))))));
                            gte_word2 = v52;
                            v110 = 0;
                            do
                            {
                                v111 = (sint32)(((uint32)(((sint32)(((uint32)3) * ((uint32)((unsigned int)((uint16)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word2) + ((uint32)4)))))))))))) >> (((uint32)2) & 31u))) - ((uint32)v107));
                                if (v110)
                                    w_u32((sint32)(((uint32)((uint32)gte_word2)) - ((uint32)4u)), sf_gte_read_data(22u));
                                v110 = 0;
                                j = v111 <= 0;
                                gte_word3 = (sint32)(((uint32)v111) << (((uint32)v104) & 31u));
                                if ((!j) && (gte_word3 < 5377))
                                {
                                    sf_gte_write_data(6u, r_u32((sint32)(((uint32)gte_word2) + ((uint32)8u))));
                                    sf_gte_write_data(8u, (uint32)gte_word3);
                                    v110 = 1;
                                    sf_gte_execute(0x780010u);
                                }
                                gte_word2 = (sint32)(((uint32)gte_word2) + ((uint32)12));
                                --v108;
                            } while (v108);
                            if (v110)
                                w_u32((sint32)(((uint32)((uint32)gte_word2)) - ((uint32)4u)), sf_gte_read_data(22u));
                        }
                        while (2)
                        {
                            v113 = *((uint32 *)sf_draft_guest_ptr((uint32)v106));
                            v114 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v106) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1))))))));
                            v115 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v106) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)944)))))) = *((uint32 *)sf_draft_guest_ptr((uint32)v106));
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)948)))))) = v114;
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)952)))))) = v115;
                            v116 = ((sint32)(((uint32)4) * ((uint32)v115))) & 0x3FC;
                            gte_word0 = (sint32)(((uint32)((v114 >> (((uint32)22) & 31u)) & 0x3FC)) + ((uint32)v52));
                            gte_word1 = (sint32)(((uint32)((v115 >> (((uint32)14) & 31u)) & 0x3FC)) + ((uint32)v52));
                            gte_word2 = (sint32)(((uint32)((v115 >> (((uint32)22) & 31u)) & 0x3FC)) + ((uint32)v52));
                            v120 = (sint32)(((uint32)v116) + ((uint32)v52));
                            v121 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word1) + ((uint32)4))))));
                            v122 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word2) + ((uint32)4))))));
                            v123 = 0x10000;
                            if (v113 < 0)
                                v123 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1))))))));
                            gte_word4 = (sint32)(((uint32)((sint32)(((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word0) + ((uint32)4)))))))) + ((uint32)v121)))) + ((uint32)v122));
                            v125 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word0) + ((uint32)4))))));
                            if ((((sint32)(((uint32)gte_word4) + ((uint32)v123))) & 0x40000) != 0)
                            {
                                --v105;
                                goto LABEL_142;
                            }
                            sf_gte_write_data(12u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0u))));
                            sf_gte_write_data(13u, r_u32((sint32)(((uint32)gte_word1) + ((uint32)0u))));
                            sf_gte_write_data(14u, r_u32((sint32)(((uint32)gte_word2) + ((uint32)0u))));
                            sf_gte_execute(0x1400006u);
                            *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1013)))))) = 0;
                            gte_word4 = (uint16)gte_word4;
                            gte_word3 = ((v125 & v121) & v122) & 0xFFF00000;
                            sf_gte_write_data(26u, (uint32)0);
                            sf_gte_write_data(21u, r_u32((sint32)(((uint32)gte_word1) + ((uint32)8u))));
                            sf_gte_write_data(22u, r_u32((sint32)(((uint32)gte_word2) + ((uint32)8u))));
                            gte_word5 = (((*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)gte_word0) + ((uint32)8))))))) & 0xFFFFFF) | 0x34000000) | ((sint32)(((uint32)(*((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1012)))))))) << (((uint32)24) & 31u)));
                            sf_gte_write_data(20u, (uint32)gte_word5);
                            if (gte_word3)
                            {
                                *((uint32 *)sf_draft_guest_ptr((uint32)0x1F8003A4u)) = v120;
                                sf_gte_write_data(25u, (uint32)gte_word4);
                                do
                                {
                                    sf_gte_write_data(30u, (uint32)gte_word3);
                                    gte_result = (sint32)sf_gte_read_data(31u);
                                    gte_word3 = gte_word3 & (~(0x80000000 >> (((uint32)gte_result) & 31u)));
                                    sf_gte_write_data(27u, (uint32)gte_word3);
                                    sub_800D5100(r_u32((sint32)(((uint32)0x1F8003C0u) + ((uint32)((sint32)(((uint32)16u) * ((uint32)((sint32)(((uint32)((uint32)gte_result)) - ((uint32)1u))))))))), 0x1F800000u, (uint32)gte_word0, (uint32)gte_word1, (uint32)gte_word2, r_s32(0x801164C0u), (uint32)v106, (uint32)v53);
                                    gte_word3 = (sint32)sf_gte_read_data(27u);
                                } while (gte_word3);
                                gte_word4 = (sint32)sf_gte_read_data(25u);
                            }
                            --v105;
                            if (!v113)
                                goto LABEL_142;
                            v128 = gte_word4 >> (((uint32)2) & 31u);
                            v129 = (sint32)(((uint32)((sint32)(((uint32)(gte_word4 >> (((uint32)2) & 31u))) - ((uint32)v107)))) << (((uint32)v104) & 31u));
                            if (v104)
                            {
                                if (v129 >= 4097)
                                    goto LABEL_142;
                            }
                            gte_word7 = (sint32)sf_gte_read_data(24u);
                            if (gte_word7 < 0)
                            {
                                if ((sf_gte_read_data(26u) != 0) && (r_u32(0x1F8003ACu) != 0))
                                    w_u32(0x1F8003ACu, (sint32)(((uint32)r_u32(0x1F8003ACu)) - ((uint32)1u)));
                                goto LABEL_142;
                            }
                            if ((!a3) || (!v128))
                            {
                            LABEL_142:
                                v106 = (sint32)(((uint32)v106) + ((uint32)16u));
                                if (v105 <= 0)
                                    goto LABEL_8;
                                continue;
                            }
                            break;
                        }
                        if (v113 >= 0)
                        {
                            if ((*((uint8 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1015))))))) == 240)
                                v128 = 8184;
                            v131 = (sint32)(((uint32)(v128 & 0xFFFC)) + ((uint32)a3));
                            *((uint32 *)sf_draft_guest_ptr((uint32)v12)) = (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v131)))) | 0x9000000;
                            v132 = (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)948))))))) & 0xFEFFFFFF;
                            v133 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)952))))));
                            w_u32((sint32)(((uint32)v12) + ((uint32)4u)), sf_gte_read_data(20u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)8u)), sf_gte_read_data(12u));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)3)))))))) = ((uint16)v113) | ((sint32)(((uint32)((((uint16 *)(&v113))[1] & 0x7C0) | 0x7830)) << (((uint32)16) & 31u)));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x10u)), sf_gte_read_data(21u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x14u)), sf_gte_read_data(13u));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)6)))))))) = v132;
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x1Cu)), sf_gte_read_data(22u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x20u)), sf_gte_read_data(14u));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)9)))))))) = v133;
                            *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v131))) = v12;
                            v12 = (sint32)(((uint32)v12) + ((uint32)40u));
                            packet_triangle = (uint32)v12;
                            *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v131) + ((uint32)3)))))) = 0;
                        LABEL_161:
                            v149 = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)946))))));
                            v150 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1016))))));
                            v151 = *((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1013))))));
                            j = v151 == 0;
                            v152 = (sint32)(((uint32)v151) << (((uint32)8) & 31u));
                            if (j)
                            {
                                gte_word0 = v149 & 0x2000;
                            }
                            else
                            {
                                gte_word0 = v152 | (v149 & 0x2000);
                                v150 *= 2;
                            }
                            sf_gte_write_data(6u, (uint32)gte_word0);
                            v154 = (sint32)(((uint32)2) * ((uint32)v150));
                            if (gte_word0)
                                v154 *= 2;
                            if ((*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1008))))))) < ((int)v12))
                            {
                                *((uint32 *)sf_draft_guest_ptr((uint32)0x8011649Cu)) = 1;
                                goto LABEL_186;
                            }
                            if (v154 >= v128)
                            {
                                if (!packet_triangle)
                                    gte_word3 = (sint32)r_u32(v120);
                                if (sub_800D5824(packet_triangle ? 0u : r_u32((uint32)v120), packet_triangle))
                                {
                                    v156 = 3;
                                    goto LABEL_173;
                                }
                                gte_word6 = (sint32)sf_gte_read_data(6u);
                                if (gte_word6)
                                {
                                    v158 = sub_800D5680(0x1F800000u);
                                    v156 = 2;
                                    if (v158)
                                    {
                                    LABEL_173:
                                        v159 = (sint32)(((uint32)v12) - ((uint32)52u));
                                        if (packet_triangle)
                                            v159 = (sint32)(((uint32)v159) + ((uint32)12u));
                                        if (((((sint32)(((uint32)v128) - ((uint32)80))) > 0) || ((*((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1014))))))) >= 0)) || ((sub_800D57A4(packet_triangle ? 0u : r_u32((uint32)v120), packet_triangle) != 3)))
                                        {
                                            if (((*((uint32 *)sf_draft_guest_ptr((uint32)0x80116908u))) < 95) && ((!(*((sint8 *)sf_draft_guest_ptr((uint32)0x8011655Du)))) || (v128 >= 31)))
                                            {
                                                v161 = (sint32)(((uint32)0x80128058u) + ((uint32)((sint32)(((uint32)4u) * ((uint32)((sint32)(((uint32)((sint32)(((uint32)4) * ((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116908u))))))) + ((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116908u)))))))))));
                                                v162 = (sint32)(((uint32)(*((sint8 *)sf_draft_guest_ptr((uint32)0x8011655Du)))) + ((uint32)v128));
                                                v163 = *((sint8 *)sf_draft_guest_ptr((uint32)0x8011655Du));
                                                gte_word6 = (sint32)sf_gte_read_data(6u);
                                                ++(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116908u)));
                                                *((uint32 *)sf_draft_guest_ptr((uint32)v161)) = (int)v159;
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1)))))))) = (v156 | ((sint32)(((uint32)v162) << (((uint32)16) & 31u)))) | gte_word6;
                                                v165 = *((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1013))))));
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2)))))))) = 0;
                                                if (v165)
                                                {
                                                    sub_800D5624(0x1F800000u, missing_depths);
                                                    v166 = missing_depths[0];
                                                    v167 = missing_depths[1];
                                                    v168 = missing_depths[2];
                                                    v169 = missing_depths[3];
                                                    *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)8u))))) = (sint32)(((uint32)v166) + ((uint32)v163));
                                                    *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)10u))))) = (sint32)(((uint32)v167) + ((uint32)v163));
                                                    *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)12u))))) = (sint32)(((uint32)v168) + ((uint32)v163));
                                                    *((_WORD *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)14u))))) = (sint32)(((uint32)v169) + ((uint32)v163));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v161) + ((uint32)((sint32)(((uint32)4u) * ((uint32)4)))))))) = a3;
                                            }
                                        }
                                    }
                                }
                            }
                            goto LABEL_142;
                        }
                        if ((v113 & 0x7FFF0000) == 0)
                            goto LABEL_142;
                        v135 = ((uint16)v113) | ((sint32)(((uint32)((((uint16 *)(&v113))[1] & 0x7C0) | 0x7830)) << (((uint32)16) & 31u)));
                        v128 = ((unsigned int)((sint32)(((uint32)3) * ((uint32)((sint32)(((uint32)v128) + ((uint32)(((uint16)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1)))))))))) >> (((uint32)2) & 31u))))))))) >> (((uint32)2) & 31u);
                        if ((*((uint8 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1015))))))) == 240)
                            v128 = 8188;
                        if (v128 >= 8185)
                            v128 = 8184;
                        v136 = v128 & 0xFFFC;
                        if (!v128)
                            goto LABEL_142;
                        v137 = (sint32)(((uint32)v136) + ((uint32)a3));
                        v138 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)948))))));
                        *((uint32 *)sf_draft_guest_ptr((uint32)v12)) = (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v136) + ((uint32)a3))))))) | 0xC000000;
                        v139 = v138 & 0xFEFFFFFF;
                        v140 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)952))))));
                        gte_word3 = (sint32)sf_gte_read_data(20u);
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)1)))))))) = gte_word3 | 0x8000000;
                        w_u32((sint32)(((uint32)v12) + ((uint32)8u)), sf_gte_read_data(12u));
                        v142 = 31;
                        if ((v140 & 0x800) != 0)
                            v142 = 15;
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)3)))))))) = v135;
                        if ((v140 & 0x200) != 0)
                        {
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)3)))))))) = (sint32)(((uint32)v135) + ((uint32)v142));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x10u)), sf_gte_read_data(21u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x14u)), sf_gte_read_data(13u));
                            v135 = (uint16)v135;
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)6)))))))) = ((sint32)(((uint32)((uint16 *)(&v139))[1]) << (((uint32)16) & 31u))) | ((uint16)v135);
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x1Cu)), sf_gte_read_data(22u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x20u)), sf_gte_read_data(14u));
                            if ((v140 & 0x100) != 0)
                            {
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)9)))))))) = (sint32)(((uint32)((sint32)(((uint32)v135) + ((uint32)7936)))) + ((uint32)v142));
                                v148 = *((uint32 *)sf_draft_guest_ptr((uint32)v120));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)10)))))))) = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)11)))))))) = v148;
                                v146 = (sint32)(((uint32)v135) + ((uint32)7936));
                            }
                            else
                            {
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)9)))))))) = (sint32)(((uint32)((sint32)(((uint32)v135) + ((uint32)16128)))) + ((uint32)v142));
                                v147 = *((uint32 *)sf_draft_guest_ptr((uint32)v120));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)10)))))))) = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)11)))))))) = v147;
                                v146 = (sint32)(((uint32)v135) + ((uint32)16128));
                            }
                        }
                        else
                        {
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x10u)), sf_gte_read_data(21u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x14u)), sf_gte_read_data(13u));
                            v135 = (uint16)v135;
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)6)))))))) = ((sint32)(((uint32)((uint16 *)(&v139))[1]) << (((uint32)16) & 31u))) | ((sint32)(((uint32)((uint16)v135)) + ((uint32)v142)));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x1Cu)), sf_gte_read_data(22u));
                            w_u32((sint32)(((uint32)v12) + ((uint32)0x20u)), sf_gte_read_data(14u));
                            v143 = (sint32)(((uint32)((uint16)v135)) + ((uint32)16128));
                            if ((v140 & 0x100) == 0)
                            {
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)9)))))))) = v143;
                                v144 = *((uint32 *)sf_draft_guest_ptr((uint32)v120));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)10)))))))) = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)11)))))))) = v144;
                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)12)))))))) = (sint32)(((uint32)v143) + ((uint32)v142));
                                *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v137))) = v12;
                                v12 = (sint32)(((uint32)v12) + ((uint32)52u));
                                *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v137) + ((uint32)3)))))) = 0;
                            LABEL_160:
                                packet_triangle = 0;
                                goto LABEL_161;
                            }
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)9)))))))) = (sint32)(((uint32)v135) + ((uint32)7936));
                            v145 = *((uint32 *)sf_draft_guest_ptr((uint32)v120));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)10)))))))) = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v120) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2))))))));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)11)))))))) = v145;
                            v146 = (sint32)(((uint32)((sint32)(((uint32)v135) + ((uint32)7936)))) + ((uint32)v142));
                        }
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v12) + ((uint32)((sint32)(((uint32)4u) * ((uint32)12)))))))) = v146;
                        *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v137))) = v12;
                        v12 = (sint32)(((uint32)v12) + ((uint32)52u));
                        *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v137) + ((uint32)3)))))) = 0;
                        goto LABEL_160;
                    }
                }
                *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1014)))))) |= 2u;
            LABEL_63:
                if ((*((char *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)v52) + ((uint32)1015))))))) >= 0)
                    sub_800D3C6C();
                else
                    sub_800D37FC();
                gte_word0 = v53;
                v61 = v51;
                v62 = v52;
                do
                {
                    sf_gte_write_data(0u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0u))));
                    sf_gte_write_data(1u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)4u))));
                    sf_gte_write_data(2u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)8u))));
                    sf_gte_write_data(3u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0xCu))));
                    sf_gte_write_data(4u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0x10u))));
                    sf_gte_write_data(5u, r_u32((sint32)(((uint32)gte_word0) + ((uint32)0x14u))));
                    sf_gte_execute(0x280030u);
                    gte_word0 = (sint32)(((uint32)gte_word0) + ((uint32)24));
                    --v61;
                    gte_word9 = (sint32)sf_gte_read_data(17u);
                    gte_word4 = (sint32)sf_gte_read_data(12u);
                    if (gte_word9 > 0)
                    {
                        sub_800D3B8C();
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v62) + ((uint32)((sint32)(((uint32)4u) * ((uint32)2)))))))) = sf_D40A4_missing_color(0x1F800000u, (uint32)gte_word4, (uint32)gte_word9);
                    }
                    gte_word9 = (sint32)sf_gte_read_data(18u);
                    gte_word4 = (sint32)sf_gte_read_data(13u);
                    if (gte_word9 > 0)
                    {
                        sub_800D3B8C();
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v62) + ((uint32)((sint32)(((uint32)4u) * ((uint32)5)))))))) = sf_D40A4_missing_color(0x1F800000u, (uint32)gte_word4, (uint32)gte_word9);
                    }
                    gte_word9 = (sint32)sf_gte_read_data(19u);
                    gte_word4 = (sint32)sf_gte_read_data(14u);
                    if (gte_word9 > 0)
                    {
                        sub_800D3B8C();
                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)(((uint32)v62) + ((uint32)((sint32)(((uint32)4u) * ((uint32)8)))))))) = sf_D40A4_missing_color(0x1F800000u, (uint32)gte_word4, (uint32)gte_word9);
                    }
                    v62 = (sint32)(((uint32)v62) + ((uint32)36u));
                } while (v61);
                goto LABEL_74;
            }
        }
    LABEL_8:;
    }
LABEL_186:
    result = 0;
    v173 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)a1) + ((uint32)2))))));
    if (((*((uint32 *)sf_draft_guest_ptr((uint32)0x80116490u))) && (v173 >= 0)) && ((*((sint32 *)sf_draft_guest_ptr((uint32)0x1F8003ACu))) >= 0))
        *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)(((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)0x80116490u)))) + ((uint32)v173)))))) = *((sint32 *)sf_draft_guest_ptr((uint32)0x1F8003ACu));
    *((uint32 *)sf_draft_guest_ptr((uint32)0x8012C8A0u)) = (int)v12;
    return result;
}
