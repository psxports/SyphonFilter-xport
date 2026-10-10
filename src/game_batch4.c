#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>

static uint32 sf_draft_missing_padding_80093AC0(uint32 offset)
{
    fprintf(stderr, "TODO 80093AC0 original unwritten word +%X\n", offset);
    abort();
}

/* TODO Resolve external dependency signatures */
uint32 sub_80040BA8();
uint32 sub_80040E7C();
uint32 sub_80040F04();
uint32 sub_80068720();
uint32 sub_80077DB0();
uint32 sub_80079228();
uint32 sub_8007EFD0();
uint32 sub_80084D70();
uint32 sub_800EAF54();

static uint32 sf_41830_pack_y(sint32 value)
{
    return (uint32)value << 16;
}

uint32 sub_80041830(uint32 a1)
{
    FUNCTION_MARKER(0x80041830u, "SCUS_942.40");
    /* Native C translation; original equivalence remains unverified */

    int v2;
    sint32 result;

    int v5;
    int v6;

    int v9;
    int *v10;
    int *v11;
    int *v12;

    int *v14;

    int v16;
    int *v17;
    int v18;
    int *v19;
    int *v20;
    uint8 v21;

    int *v28;
    int v29;

    int v31;
    int *v32;

    char v34;
    int *v35;
    int v36;
    int *v37;
    int *v38;
    int *v39;
    __int16 *v40 = SF_DRAFT_PTR(__int16, SF_DRAFT_GP);
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    sint32 v58;
    sint32 v59;
    int v60;
    int v61;
    int v62;
    int *v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    int v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int v79;
    int v80;
    int v81;
    int v82;
    int v83;
    int v84;
    int v85;
    sint32 v86;
    int v87;
    int v88;
    int v89;
    int v90;
    int v91;
    int v92;
    int v93;
    int v94;
    int v95;
    int v96;
    int v97;
    int v98;
    int v99;
    int v100;
    int v101;
    int v102;
    int v103;
    __int16 v104;
    int v105;
    int *v106;
    int v107;
    int v108;
    int v109;
    int v111;
    int *v112;
    int v113;
    int v114;
    int v115;
    __int16 v116;
    int v117;
    int v118;
    int v119;
    _WORD *v120 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
    int v121;
    int v122;
    int v123;
    __int16 v124;
    __int16 v125;
    __int16 v126;

    if (r_s32(0x8010C36Cu) >= 0)
    {
        v2 = (uint8)a1;
    }
    else
    {
        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 732)))
            return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 2;
        v2 = (uint8)a1;
        if (SF_DRAFT_PTR(uint32, 0x8011C138u)[0])
            return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 2;
    }
    if (!(uint8)sub_80040B50(v2, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C36Cu)))))
        return 0;
    v5 = (*SF_DRAFT_PTR(uint32, 0x8010C36Cu));
    if (v2)
    {
        if (r_u8(SF_DRAFT_GP + 686u) == 255)
        {
            v21 = sub_80084998(((__int16)(*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 708)) + *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 712)) + 11)), -2, 100, 100);
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 686)) = v21;
            sub_80084D70(v21, 1);
            sub_80084DD0(r_u8(SF_DRAFT_GP + 686u), 16, 96, 16);
            sub_8008582C(r_u8(SF_DRAFT_GP + 686u), (SF_DRAFT_PTR(uint32, 0x8010DEA0u)[0]), 30, 0);
            sub_8008582C(r_u8(SF_DRAFT_GP + 686u), (SF_DRAFT_PTR(uint32, 0x8010DEA4u)[0]), 20, 0);
            sub_8008582C(r_u8(SF_DRAFT_GP + 686u), (SF_DRAFT_PTR(uint32, 0x8010DEA8u)[0]), 20, 0);
            sub_8008582C(r_u8(SF_DRAFT_GP + 686u), (SF_DRAFT_PTR(uint32, 0x8010DEACu)[0]), 25, 0);
        }
        if (!v5)
        {
            v28 = SF_DRAFT_PTR(int, sub_80039F60(45));
            v29 = 0;
            v31 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
            v32 = &(*SF_DRAFT_PTR(uint32, 0x8011C4A0u));
            *((_WORD *)v28 + 3) = 0;
            *((_WORD *)v28 + 2) = 0;
            v28[10] = sub_800DE5E0((uint32)v31 + 144u, sf_draft_guest_address(v28));
            sub_80040FDC((sint32)0x8011C138u, 26, 4259648, 1);
            do
            {
                SF_DRAFT_PTR(uint32, 0x8011C4A4u)[v29] = 675348288;
                if (v29 < 72)
                    v34 = *((_BYTE *)v32 + 7) & 0xFD;
                else
                    v34 = *((_BYTE *)v32 + 7) | 2;
                *((_BYTE *)v32 + 7) = v34;
                v35 = &SF_DRAFT_PTR(uint32, 0x8011C498u)[v29];
                v29 += 9;
                v32 += 9;
                sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v35));
            } while (v29 < 126);
            v36 = 0;
            v37 = SF_DRAFT_PTR(int, 0x8011C840u);
            do
            {
                v38 = v37;
                v37 += 7;
                ++v36;
                sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v38));
            } while (v36 < 2);
            sub_80040BA8(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)));
        }
    }
    else
    {
        v6 = r_u8(SF_DRAFT_GP + 686u);
        if (v6 != 255)
        {
            sub_80084C30(v6);
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 686)) = -1;
        }
        if (v5 < 0)
        {
            v9 = 0;
            sub_80040E7C();
            v10 = SF_DRAFT_PTR(int, 0x8011C840u);
            do
            {
                v11 = v10;
                v10 += 7;
                ++v9;
                sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v11));
            } while (v9 < 2);
            v12 = SF_DRAFT_PTR(int, sub_80039F60(45));
            v14 = SF_DRAFT_PTR(int, 0x8011C138u);
            v16 = 0;
            sub_800C7B68((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v12));
            do
            {
                v17 = v14;
                v14 += 6;
                ++v16;
                sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v17));
            } while (v16 < 26);
            v18 = 0;
            v19 = SF_DRAFT_PTR(int, 0x8011C498u);
            do
            {
                v20 = v19;
                v19 += 9;
                ++v18;
                sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v20));
            } while (v18 < 14);
            return 0;
        }
    }
    v39 = SF_DRAFT_PTR(int, sub_80039F60(45));
    v41 = (sint32)((uint32)(sint32)v40[354] * (uint32)v5);
    v42 = (sint32)((uint32)(sint32)v40[355] * (uint32)v5);
    v43 = (sint32)((uint32)(sint32)v40[356] * (uint32)v5);
    v44 = (sint32)((uint64)(715827883LL * (sint64)v43) >> 32);
    v45 = (sint32)((uint32)(sint32)v40[357] * (uint32)v5);
    *((_WORD *)v39 + 14) = (sint16)((sint32)((uint32)v5 << 12) / 12);
    v46 = v41 / 12;
    (*SF_DRAFT_PTR(uint16, 0x80115E84u)) = (*SF_DRAFT_PTR(uint16, 0x8012C7B0u)) + v41 / 12;
    v47 = v42 / 12;
    v43 >>= 31;
    (*SF_DRAFT_PTR(uint16, 0x80115E86u)) = (*SF_DRAFT_PTR(uint16, 0x8012C7B2u)) + v42 / 12;
    v48 = (v44 >> 1) - v43;
    v49 = v45 / 12;
    if (v44 >> 1 == v43 && (v50 = 0, !v49))
    {
        (*SF_DRAFT_PTR(uint16, 0x80115E88u)) = 0;
        (*SF_DRAFT_PTR(uint16, 0x80115E8Au)) = 0;
    }
    else
    {
        (*SF_DRAFT_PTR(uint16, 0x80115E88u)) = v48 + 1;
        (*SF_DRAFT_PTR(uint16, 0x80115E8Au)) = v49 + 1;
        v50 = 0;
    }
    v51 = 0;
    do
    {
        v52 = v46;
        if ((v50 & 1) == 0)
            v52 = v46 + v48 + 1;
        v53 = v47;
        if ((v50 & 2) == 0)
            v53 = v47 + v49 + 1;
        v54 = v52 + 20;
        if ((v50 & 1) == 0)
            v54 = v52 - 20;
        v55 = v53 + 15;
        if ((v50 & 2) == 0)
            v55 = v53 - 15;
        v56 = v52 + 3;
        if ((v50 & 1) == 0)
            v56 = v52 - 3;
        v57 = v53 + 2;
        if ((v50 & 2) == 0)
            v57 = v53 - 2;
        if ((v50 & 1) != 0)
        {
            v58 = v54;
            if (v54 > 0)
                v58 = 0;
            v54 = v58;
            v59 = v56;
            if (v56 > 0)
                v59 = 0;
            v56 = v59;
            goto LABEL_56;
        }
        if (v54 < 0)
            v54 = 0;
        v60 = v50 & 2;
        if (v56 < 0)
        {
            v56 = 0;
        LABEL_56:
            v60 = v50 & 2;
        }
        if (v60)
        {
            v61 = v55;
            if (v55 > 0)
                v61 = 0;
            v55 = v61;
            v62 = v57;
            if (v57 > 0)
                v62 = 0;
            v57 = v62;
        }
        else
        {
            if (v55 < 0)
                v55 = 0;
            if (v57 < 0)
                v57 = 0;
        }
        v63 = &SF_DRAFT_PTR(uint32, 0x8011C498u)[v51];
        v51 += 18;
        ++v50;
        v64 = (sint32)((uint32)v53 << 16);
        v65 = (sint32)((uint32)v57 << 16);
        v63[13] = (uint16)v52 | v64;
        v63[4] = (uint16)v52 | v64;
        v63[15] = (uint16)v56 | v65;
        v63[5] = (uint16)v56 | v65;
        v63[16] = (uint16)v54 | v65;
        v63[6] = (uint16)v52 | ((sint32)((uint32)v55 << 16));
        v63[7] = (uint16)v56 | ((sint32)((uint32)v55 << 16));
        v63[14] = (uint16)v54 | v64;
    } while (v50 < 4);
    v66 = (uint16)(v46 + v48 + 1);
    v67 = sf_41830_pack_y(v47);
    v68 = v40[355] + v40[357];
    v69 = sf_41830_pack_y((v68 + 15));
    v70 = v66 | v69;
    v71 = sf_41830_pack_y((v68 + 16));
    v72 = (uint16)v46 | v71;
    v73 = sf_41830_pack_y((v68 + 9));
    (*SF_DRAFT_PTR(uint32, 0x8011C5D4u)) = v66 | v71;
    (*SF_DRAFT_PTR(uint32, 0x8011C5ECu)) = (uint16)v46 | v73;
    v74 = (uint16)(v46 + 2);
    (*SF_DRAFT_PTR(uint32, 0x8011C5D0u)) = v72;
    (*SF_DRAFT_PTR(uint32, 0x8011C5F0u)) = v74 | v73;
    v75 = (uint16)(v46 + v48 - 1);
    (*SF_DRAFT_PTR(uint32, 0x8011C5F8u)) = v74 | v69;
    v76 = v75 | v73;
    v77 = v75 | v69;
    (*SF_DRAFT_PTR(uint32, 0x8011C5C8u)) = (uint16)v46 | v69;
    (*SF_DRAFT_PTR(uint32, 0x8011C5F4u)) = (uint16)v46 | v69;
    v78 = sf_41830_pack_y((v47 + v49 + 1));
    (*SF_DRAFT_PTR(uint32, 0x8011C614u)) = v66 | v73;
    v66 = v40[354];
    v79 = sf_41830_pack_y((v47 + v49));
    (*SF_DRAFT_PTR(uint32, 0x8011C5CCu)) = v70;
    (*SF_DRAFT_PTR(uint32, 0x8011C610u)) = v76;
    (*SF_DRAFT_PTR(uint32, 0x8011C618u)) = v77;
    (*SF_DRAFT_PTR(uint32, 0x8011C61Cu)) = v70;
    v80 = (uint16)(v66 - 19);
    v81 = (uint16)(v66 - 17);
    (*SF_DRAFT_PTR(uint32, 0x8011C634u)) = v80 | (sf_41830_pack_y(v47));
    v82 = (uint16)(v66 - 10);
    (*SF_DRAFT_PTR(uint32, 0x8011C638u)) = v81 | (sf_41830_pack_y(v47));
    (*SF_DRAFT_PTR(uint32, 0x8011C658u)) = v81 | (sf_41830_pack_y(v47));
    (*SF_DRAFT_PTR(uint32, 0x8011C65Cu)) = v82 | (sf_41830_pack_y(v47));
    v83 = sf_41830_pack_y((v47 + 1));
    (*SF_DRAFT_PTR(uint32, 0x8011C63Cu)) = v80 | v78;
    (*SF_DRAFT_PTR(uint32, 0x8011C664u)) = v82 | v83;
    (*SF_DRAFT_PTR(uint32, 0x8011C680u)) = v82 | v79;
    (*SF_DRAFT_PTR(uint32, 0x8011C640u)) = v81 | v78;
    (*SF_DRAFT_PTR(uint32, 0x8011C660u)) = v81 | v83;
    (*SF_DRAFT_PTR(uint32, 0x8011C67Cu)) = v81 | v79;
    (*SF_DRAFT_PTR(uint32, 0x8011C684u)) = v81 | v78;
    (*SF_DRAFT_PTR(uint32, 0x8011C688u)) = v82 | v78;
    if (v48 < 101)
    {
        v88 = v49 + 1;
        v87 = sub_800EC8F4();
        if (v49 == -1)
            _break(7u, 0);
        if (v49 == -2 && v87 == 0x80000000)
            _break(6u, 0);
        v89 = (uint16)(v46 + v48);
        v90 = sf_41830_pack_y((v87 % v88 - v49 / 2));
        (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = (uint16)v46 | v90;
        (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = v89 | v90;
        v91 = sub_800EC8F4();
        if (v49 == -2 && v91 == 0x80000000)
            _break(6u, 0);
        v92 = sf_41830_pack_y((v91 % v88 - v49 / 2));
        (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = (uint16)v46 | v92;
        (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = v89 | v92;
        v86 = v49 < 71;
    }
    else
    {
        v84 = (uint16)(v46 + 40);
        (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = v84 | v67;
        v85 = (uint16)(v46 + v48 - 40);
        (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = v85 | v67;
        (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = v84 | v79;
        (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = v85 | v79;
        v86 = v49 < 71;
    }
    if (v86)
    {
        v97 = v49 + 1;
        v96 = sub_800EC8F4();
        if (v49 == -1)
            _break(7u, 0);
        if (v49 == -2 && v96 == 0x80000000)
            _break(6u, 0);
        v98 = (uint16)(v46 + v48);
        v99 = sf_41830_pack_y((v96 % v97 - v49 / 2));
        (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = (uint16)v46 | v99;
        (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = v98 | v99;
        v100 = sub_800EC8F4();
        if (v49 == -2 && v100 == 0x80000000)
            _break(6u, 0);
        v101 = sf_41830_pack_y((v100 % v97 - v49 / 2));
        (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = (uint16)v46 | v101;
        (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = v98 | v101;
    }
    else
    {
        v93 = sf_41830_pack_y((v47 + 30));
        v94 = sf_41830_pack_y((v47 + v49 - 30));
        (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = (uint16)v46 | v93;
        v95 = (uint16)(v46 + v48);
        (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)v46 | v94;
        (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = v95 | v93;
        (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = v95 | v94;
    }
    v102 = 0;
    v103 = -4;
    v104 = v40[354];
    v105 = 0;
    do
    {
        v106 = &SF_DRAFT_PTR(uint32, 0x8011C198u)[v105];
        v107 = sf_41830_pack_y((v103 * v49 / 10));
        v108 = (uint16)(v104 - 18 + (sint32)(5u * (uint32)v5) / 12) | v107;
        if ((v102 & 1) == 0)
            v108 = (uint16)(v104 - 18 + (sint32)(7u * (uint32)v5) / 12) | v107;
        v106[4] = v108;
        v109 = v103 * v49;
        ++v103;
        v105 += 6;
        ++v102;
        v106[5] = (uint16)(v104 - (v5 / 3 + 18)) | (sf_41830_pack_y(v109 / 10));
    } while (v102 < 9);
    v111 = 0;
    v112 = SF_DRAFT_PTR(int, 0x8011C270u);
    v113 = v40[355] + v40[357];
    do
    {
        v114 = (uint16)((v111 - 4) * v48 / 10);
        v112[4] = v114 | (sf_41830_pack_y((v113 + v5 / 4 + 15)));
        v115 = v114 | (sf_41830_pack_y((v113 + 15 - v5 / 3)));
        if ((v111 & 1) == 0)
            v115 = v114 | (sf_41830_pack_y((v113 + 15 - v5 / 2)));
        v112[5] = v115;
        ++v111;
        v112 += 6;
    } while (v111 < 9);
    v116 = v40[354];
    v117 = v40[355] + v40[357];
    (*SF_DRAFT_PTR(uint32, 0x8011C850u)) = (uint16)(v116 - 17);
    (*SF_DRAFT_PTR(uint32, 0x8011C86Cu)) = sf_41830_pack_y((v117 + 15));
    v118 = (uint16)(v116 + (sint32)(9u * (uint32)v5) / 12 - 17);
    (*SF_DRAFT_PTR(uint32, 0x8011C854u)) = v118 | 0x30000;
    (*SF_DRAFT_PTR(uint32, 0x8011C858u)) = v118 | 0xFFFD0000;
    v119 = sf_41830_pack_y((v117 - ((sint32)(7u * (uint32)v5) / 12 - 15)));
    (*SF_DRAFT_PTR(uint32, 0x8011C870u)) = v119 | 4;
    (*SF_DRAFT_PTR(uint32, 0x8011C874u)) = v119 | 0xFFFC;
    sub_80040F04(v5);
    switch (v5)
    {
        case 0:
            (*SF_DRAFT_PTR(uint32, 0x8011C358u)) = 0;
            v121 = v47 - 1;
            goto LABEL_110;
        case 1:
        case 2:
            goto LABEL_101;
        case 3:
            (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = 67109888;
            (*SF_DRAFT_PTR(uint32, 0x8011C370u)) = 67109888;
        LABEL_101:
            (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) = sf_41830_pack_y((((__int16)v120[355] - 20) * v5 / 4));
            v121 = v47 - 1;
            goto LABEL_110;
        case 4:
            (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) = sf_41830_pack_y(((__int16)v120[355] - 20));
            (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) | 1;
            (*SF_DRAFT_PTR(uint32, 0x8011C370u)) = (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) | 1;
            v121 = v47 - 1;
            goto LABEL_110;
        case 5:
            goto LABEL_104;
        case 6:
            (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = 67109888;
            (*SF_DRAFT_PTR(uint32, 0x8011C388u)) = 67109888;
        LABEL_104:
            (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = (uint16)(25 * (v5 - 4)) | (sf_41830_pack_y(((__int16)v120[355] - 20)));
            v121 = v47 - 1;
            goto LABEL_110;
        case 7:
            v122 = (__int16)v120[355];
            v123 = (uint16)(v120[354] + v120[356] + 16);
            (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = v123 | (sf_41830_pack_y((v122 - 20)));
            (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = v123 | (sf_41830_pack_y((v122 - 19)));
            (*SF_DRAFT_PTR(uint32, 0x8011C388u)) = v123 | (sf_41830_pack_y((v122 - 19)));
            v121 = v47 - 1;
            goto LABEL_110;
        case 8:
            v124 = v120[354];
            v125 = v120[356];
            (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = 67109888;
            (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = 67109888;
            (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = (uint16)(v124 + v125 + 16) | (sf_41830_pack_y((((__int16)v120[355] - 20) / 2)));
            v121 = v47 - 1;
            goto LABEL_110;
        case 9:
            (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = (uint16)(v120[354] + v120[356] + 16) | 0xFFFA0000;
            (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = (*SF_DRAFT_PTR(uint32, 0x8011C3A4u));
            (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = (*SF_DRAFT_PTR(uint32, 0x8011C3A4u));
            v121 = v47 - 1;
            goto LABEL_110;
        case 10:
            v126 = v120[354] + v120[356];
            (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = (uint16)(v126 + 11) | 0xFFFB0000;
            (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = (uint16)(v126 + 41) | 0xFFFB0000;
            goto LABEL_109;
        default:
        LABEL_109:
            v121 = v47 - 1;
        LABEL_110:
            (*SF_DRAFT_PTR(uint32, 0x8011C358u)) = sf_41830_pack_y(v121);
            result = 1;
            break;
    }
    return result;
}

static sint32 sf_93ac0_signed_scale(sint32 value, uint32 shift)
{
    if (value >= 0)
        return value >> shift;
    sint32 magnitude = (sint32)(0u - (uint32)value);
    return (sint32)(0u - (uint32)(magnitude >> shift));
}

sint32 sub_80093AC0(sint32 a1, uint32 a2, uint32 a3, sint32 a4)
{
    union
    {
        sint32 words[54];
        sint16 halves[108];
        uint8 bytes[216];
    } workspace;

    FUNCTION_MARKER(0x80093AC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 v8;
    int result;
    int *v10;
    uint32 v11;
    int v12;
    int v13;
    int v14;
    uint32 v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int *v21;
    uint32 v22;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    int v31;
    int v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;
    int v47;
    int v48;
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;
    int v54;
    int v55;
    int v56;
    int v57;
    int v58;
    int v59;
    int v60;
    uint32 component, centre;
    int v61;
    int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    int v74;
    int v75;
    int v76;
    int v77;
    int v78;
    int v79;
    uint32 v80;
    sint32 orientation[3];
    sint32 projected[3];
    sint32 packed_point[4];
    int v130;
    int v131;
    int v132;
    int v134;
    int v135;
    int v136;

    if ((uint32)r_u8((uint32)a1 + 34u) - 1u >= 2u)
        return 0;
    v8 = r_u32((uint32)a1 + 8u);
    result = 0;
    if ((r_u32(r_u32(v8 + 16u) + 40u) & 0x400000) == 0)
        return result;
    result = 0;
    if ((r_u8(v8 + 8u) & 0x10) != 0)
        return result;
    v10 = &workspace.words[22];
    if (!r_u32((uint32)a1 + 12u))
        return 0;
    (workspace.words + 0)[0] = r_u32(0x800134B0u);
    (workspace.words + 0)[1] = r_u32(0x800134B4u);
    workspace.words[2] = r_u32(0x800134B8u);
    workspace.words[3] = r_u32(0x800134BCu);
    workspace.words[4] = r_u32(0x800134C0u);
    workspace.words[5] = r_u32(0x800134C4u);
    workspace.words[6] = r_u32(0x800134C8u);
    workspace.words[7] = r_u32(0x800134CCu);
    workspace.words[16] = r_u32(0x800134D0u);
    workspace.words[17] = r_u32(0x800134D4u);
    workspace.words[18] = r_u32(0x800134D8u);
    workspace.words[19] = r_u32(0x800134DCu);
    workspace.words[20] = r_u32(0x800134E0u);
    v11 = 0x800134E4u;
    do
    {
        v24 = r_u32(v11);
        v12 = r_u32(v11 + 4u);
        v13 = r_u32(v11 + 8u);
        v14 = r_u32(v11 + 12u);
        *v10 = v24;
        v10[1] = v12;
        v10[2] = v13;
        v10[3] = v14;
        v11 += 16u;
        v10 += 4;
    } while (v11 != 0x80013534u);
    (workspace.words + 46)[0] = r_u32(0x80013534u);
    (workspace.words + 46)[1] = r_u32(0x80013538u);
    (workspace.words + 46)[2] = r_u32(0x8001353Cu);
    (workspace.words + 46)[3] = r_u32(0x80013540u);
    (workspace.words + 46)[4] = r_u32(0x80013544u);
    workspace.words[51] = r_u32(0x80013548u);
    workspace.words[52] = r_u32(0x8001354Cu);
    workspace.words[53] = r_u32(0x80013550u);
    v15 = r_u32((uint32)a1 + 12u);
    v19 = r_u32(v15);
    v16 = r_u32(v15 + 4u);
    v17 = r_u32(v15 + 8u);
    v18 = r_u32(v15 + 12u);
    workspace.words[42] = v19;
    workspace.words[43] = v16;
    workspace.words[44] = v17;
    workspace.words[45] = v18;
    packed_point[0] = r_u32(0x80013554u);
    packed_point[1] = r_u32(0x80013558u);
    packed_point[2] = r_u32(0x8001355Cu);
    packed_point[3] = r_u32(0x80013560u);
    orientation[0] = (sint16)r_u16(r_u32(r_u32((uint32)a1 + 8u) + 12u) + 4u);
    orientation[1] = (sint16)r_u16(r_u32(r_u32((uint32)a1 + 8u) + 12u) + 10u);
    v19 = (sint16)r_u16(r_u32(r_u32((uint32)a1 + 8u) + 12u) + 16u);
    orientation[1] = (sint32)(0u - (uint32)orientation[1]);
    orientation[2] = v19;
    if (orientation[1])
    {
        orientation[1] = 0;
        sub_800C720C(sf_draft_guest_address(&orientation[0]), sf_draft_guest_address(&orientation[0]));
    }
    v20 = 0;
    v21 = workspace.words;
    projected[1] = 0;
    workspace.halves[19] = 0;
    projected[0] = orientation[2];
    projected[2] = (sint32)(0u - (uint32)orientation[0]);
    (workspace.halves + 16)[0] = orientation[2];
    workspace.halves[22] = (sint16)(0u - (uint32)orientation[0]);
    (workspace.halves + 16)[1] = packed_point[0];
    workspace.halves[20] = packed_point[1];
    workspace.halves[23] = packed_point[2];
    workspace.halves[18] = orientation[0];
    workspace.halves[21] = orientation[1];
    workspace.halves[24] = orientation[2];
    sub_800EBBC4(sf_draft_guest_address(workspace.bytes + 32), (sint32)sf_draft_guest_address(workspace.bytes + 184));
    workspace.words[51] = sf_draft_missing_padding_80093AC0(0x44u);
    workspace.words[52] = sf_draft_missing_padding_80093AC0(0x48u);
    workspace.words[53] = sf_draft_missing_padding_80093AC0(0x4Cu);
    sub_800EB714(sf_draft_guest_address(workspace.words + 46));
    sub_800EB7A4(sf_draft_guest_address(workspace.words + 46));
    do
    {
        v22 = 4u * (uint32)workspace.words[v20 + 16];
        projected[0] = r_u32(r_u32(v22 + r_u32(r_u32((uint32)a1 + 8u) + 24u)) + 20u);
        projected[1] = r_u32(r_u32(v22 + r_u32(r_u32((uint32)a1 + 8u) + 24u)) + 24u);
        v23 = r_u32(r_u32(v22 + r_u32(r_u32((uint32)a1 + 8u) + 24u)) + 28u);
        projected[0] = (sint32)((uint32)projected[0] - (uint32)workspace.words[42]);
        LOWORD(packed_point[0]) = projected[0];
        projected[2] = (sint32)((uint32)v23 - (uint32)workspace.words[44]);
        LOWORD(packed_point[1]) = (sint32)((uint32)v23 - (uint32)workspace.words[44]);
        projected[1] = (sint32)(0u - (uint32)projected[1] - (uint32)workspace.words[43]);
        HIWORD(packed_point[0]) = projected[1];
        sub_800EAF54(&packed_point[0], &projected[0]);
        v24 = v21[22];
        v25 = v21[24];
        v134 = (sint32)((uint32)projected[0] + (uint32)v24);
        v136 = (sint32)((uint32)projected[2] + (uint32)v25);
        v130 = (sint32)((uint32)projected[0] - (uint32)v24);
        v132 = (sint32)((uint32)projected[2] - (uint32)v25);
        if (workspace.words[4] < (sint32)((uint32)projected[0] + (uint32)v24))
            workspace.words[4] = (sint32)((uint32)projected[0] + (uint32)v24);
        if ((sint32)((uint32)projected[0] - (uint32)v24) < (workspace.words + 0)[0])
            (workspace.words + 0)[0] = (sint32)((uint32)projected[0] - (uint32)v24);
        if (workspace.words[6] < (sint32)((uint32)projected[2] + (uint32)v25))
            workspace.words[6] = (sint32)((uint32)projected[2] + (uint32)v25);
        if ((sint32)((uint32)projected[2] - (uint32)v25) < workspace.words[2])
            workspace.words[2] = (sint32)((uint32)projected[2] - (uint32)v25);
        ++v20;
        v21 += 4;
    } while (v20 < 5);
    v26 = (sint32)((uint32)workspace.words[4] - (uint32)workspace.words[0]) / 2;
    v27 = (sint32)((uint32)(workspace.halves + 16)[0] * (uint32)v26);
    projected[0] = (workspace.halves + 16)[0];
    projected[1] = workspace.halves[19];
    packed_point[1] = workspace.halves[21];
    packed_point[2] = workspace.halves[24];
    v131 = workspace.halves[19];
    projected[2] = workspace.halves[22];
    v130 = v27;
    packed_point[0] = workspace.halves[18];
    v132 = (sint32)((uint32)workspace.halves[22] * (uint32)v26);
    if (v27 < 0)
        v28 = sf_93ac0_signed_scale(v27, 12u);
    else
        v28 = v27 >> 12;
    v130 = v28;
    if (v131 < 0)
        v29 = sf_93ac0_signed_scale(v131, 12u);
    else
        v29 = v131 >> 12;
    v131 = v29;
    if (v132 < 0)
        v30 = sf_93ac0_signed_scale(v132, 12u);
    else
        v30 = v132 >> 12;
    v31 = (sint32)((uint32)workspace.words[6] - (uint32)workspace.words[2]) / 2;
    v32 = (sint32)((uint32)packed_point[0] * (uint32)v31);
    v132 = v30;
    v134 = (sint32)((uint32)packed_point[0] * (uint32)v31);
    v135 = packed_point[1];
    v136 = (sint32)((uint32)packed_point[2] * (uint32)v31);
    if ((sint32)((uint32)packed_point[0] * (uint32)v31) < 0)
        v33 = sf_93ac0_signed_scale(v32, 12u);
    else
        v33 = v32 >> 12;
    v134 = v33;
    if (v135 < 0)
        v34 = sf_93ac0_signed_scale(v135, 12u);
    else
        v34 = v135 >> 12;
    v135 = v34;
    if (v136 < 0)
        v35 = sf_93ac0_signed_scale(v136, 12u);
    else
        v35 = v136 >> 12;
    v36 = (sint32)((uint32)workspace.words[4] + (uint32)workspace.words[0]) / 2;
    v37 = (sint32)((uint32)projected[0] * (uint32)v36);
    v136 = v35;
    workspace.words[24] = (sint32)((uint32)projected[0] * (uint32)v36);
    workspace.words[25] = projected[1];
    workspace.words[26] = (sint32)((uint32)projected[2] * (uint32)v36);
    if ((sint32)((uint32)projected[0] * (uint32)v36) < 0)
        v38 = sf_93ac0_signed_scale(v37, 12u);
    else
        v38 = v37 >> 12;
    workspace.words[24] = v38;
    if (workspace.words[25] < 0)
        v39 = sf_93ac0_signed_scale(workspace.words[25], 12u);
    else
        v39 = workspace.words[25] >> 12;
    workspace.words[25] = v39;
    if (workspace.words[26] < 0)
        v40 = sf_93ac0_signed_scale(workspace.words[26], 12u);
    else
        v40 = workspace.words[26] >> 12;
    v41 = (sint32)((uint32)workspace.words[6] + (uint32)workspace.words[2]) / 2;
    v42 = (sint32)((uint32)packed_point[0] * (uint32)v41);
    workspace.words[26] = v40;
    workspace.words[28] = (sint32)((uint32)packed_point[0] * (uint32)v41);
    workspace.words[29] = packed_point[1];
    workspace.words[30] = (sint32)((uint32)packed_point[2] * (uint32)v41);
    if ((sint32)((uint32)packed_point[0] * (uint32)v41) < 0)
        v43 = sf_93ac0_signed_scale(v42, 12u);
    else
        v43 = v42 >> 12;
    workspace.words[28] = v43;
    if (workspace.words[29] < 0)
        v44 = sf_93ac0_signed_scale(workspace.words[29], 12u);
    else
        v44 = workspace.words[29] >> 12;
    workspace.words[29] = v44;
    if (workspace.words[30] < 0)
        v45 = sf_93ac0_signed_scale(workspace.words[30], 12u);
    else
        v45 = workspace.words[30] >> 12;
    workspace.words[30] = v45;
    w_u32(a2, (uint32)((uint32)workspace.words[24] + (uint32)workspace.words[28]));
    w_u32(a2 + 4u, (uint32)((uint32)workspace.words[25] + (uint32)workspace.words[29]));
    w_u32(a2 + 8u, (uint32)((uint32)workspace.words[26] + (uint32)workspace.words[30]));
    v46 = v130 >> 1;
    if (v130 < 0)
        v46 = sf_93ac0_signed_scale(v130, 1u);
    workspace.words[16] = v46;
    workspace.words[17] = v131;
    if (v132 < 0)
        v47 = sf_93ac0_signed_scale(v132, 1u);
    else
        v47 = v132 >> 1;
    workspace.words[18] = v47;
    if (v134 < 0)
        v48 = sf_93ac0_signed_scale(v134, 1u);
    else
        v48 = v134 >> 1;
    workspace.words[20] = v48;
    workspace.words[21] = v135;
    if (v136 < 0)
        v49 = sf_93ac0_signed_scale(v136, 1u);
    else
        v49 = v136 >> 1;
    workspace.words[22] = v49;
    if (a4 == 6)
    {
        w_u32(a3, (uint32)((uint32)v134 - (uint32)workspace.words[16]));
        w_u32(a3 + 4u, (uint32)((uint32)v135 - (uint32)workspace.words[17]));
        w_u32(a3 + 8u, (uint32)((uint32)v136 - (uint32)workspace.words[18]));
        w_u32(a3 + 16u, (uint32)((uint32)v134 + (uint32)workspace.words[16]));
        w_u32(a3 + 20u, (uint32)((uint32)v135 + (uint32)workspace.words[17]));
        w_u32(a3 + 24u, (uint32)((uint32)v136 + (uint32)workspace.words[18]));
        v58 = v131;
        v59 = v132;
        v60 = sf_draft_missing_padding_80093AC0(0x124u);
        w_u32(a3 + 32u, (uint32)(v130));
        w_u32(a3 + 36u, (uint32)(v58));
        w_u32(a3 + 40u, (uint32)(v59));
        w_u32(a3 + 44u, (uint32)(v60));
        v61 = r_u32(a3 + 4u);
        v62 = r_u32(a3 + 8u);
        w_u32(a3 + 48u, (uint32)((0u - r_u32(a3))));
        v63 = r_u32(a3 + 16u);
        w_u32(a3 + 56u, (uint32)(0u - (uint32)v62));
        v64 = r_u32(a3 + 20u);
        w_u32(a3 + 64u, (uint32)(0u - (uint32)v63));
        v65 = r_u32(a3 + 24u);
        w_u32(a3 + 52u, (uint32)(v61));
        w_u32(a3 + 68u, (uint32)(v64));
        v66 = (0u - r_u32(a3 + 32u));
        w_u32(a3 + 72u, (uint32)(0u - (uint32)v65));
        w_u32(a3 + 80u, (uint32)(v66));
        v67 = (0u - r_u32(a3 + 40u));
        w_u32(a3 + 84u, (uint32)(r_u32(a3 + 36u)));
        w_u32(a3 + 88u, (uint32)(v67));
    }
    else if (a4 >= 7)
    {
        result = 0;
        if (a4 != 8)
            return result;
        w_u32(a3, (uint32)((uint32)v134 - (uint32)workspace.words[16]));
        w_u32(a3 + 4u, (uint32)((uint32)v135 - (uint32)workspace.words[17]));
        w_u32(a3 + 8u, (uint32)((uint32)v136 - (uint32)workspace.words[18]));
        w_u32(a3 + 16u, (uint32)((uint32)v134 + (uint32)workspace.words[16]));
        w_u32(a3 + 20u, (uint32)((uint32)v135 + (uint32)workspace.words[17]));
        w_u32(a3 + 24u, (uint32)((uint32)v136 + (uint32)workspace.words[18]));
        w_u32(a3 + 32u, (uint32)((uint32)v130 + (uint32)workspace.words[20]));
        w_u32(a3 + 36u, (uint32)((uint32)v131 + (uint32)workspace.words[21]));
        w_u32(a3 + 40u, (uint32)((uint32)v132 + (uint32)workspace.words[22]));
        w_u32(a3 + 48u, (uint32)((uint32)v130 - (uint32)workspace.words[20]));
        w_u32(a3 + 52u, (uint32)((uint32)v131 - (uint32)workspace.words[21]));
        w_u32(a3 + 56u, (uint32)((uint32)v132 - (uint32)workspace.words[22]));
        v68 = r_u32(a3 + 4u);
        v69 = r_u32(a3 + 8u);
        w_u32(a3 + 64u, (uint32)((0u - r_u32(a3))));
        v70 = r_u32(a3 + 16u);
        w_u32(a3 + 68u, (uint32)(v68));
        v71 = r_u32(a3 + 20u);
        w_u32(a3 + 72u, (uint32)(0u - (uint32)v69));
        v72 = r_u32(a3 + 24u);
        w_u32(a3 + 80u, (uint32)(0u - (uint32)v70));
        v73 = r_u32(a3 + 32u);
        w_u32(a3 + 84u, (uint32)(v71));
        v74 = r_u32(a3 + 36u);
        w_u32(a3 + 88u, (uint32)(0u - (uint32)v72));
        v75 = r_u32(a3 + 40u);
        w_u32(a3 + 96u, (uint32)(0u - (uint32)v73));
        v76 = r_u32(a3 + 48u);
        w_u32(a3 + 100u, (uint32)(v74));
        v77 = r_u32(a3 + 52u);
        w_u32(a3 + 104u, (uint32)(0u - (uint32)v75));
        v78 = (0u - r_u32(a3 + 56u));
        w_u32(a3 + 112u, (uint32)(0u - (uint32)v76));
        w_u32(a3 + 116u, (uint32)(v77));
        w_u32(a3 + 120u, (uint32)(v78));
    }
    else
    {
        result = 0;
        if (a4 != 4)
            return result;
        w_u32(a3, (uint32)((uint32)v134 - (uint32)v130));
        w_u32(a3 + 4u, (uint32)((uint32)v135 - (uint32)v131));
        w_u32(a3 + 8u, (uint32)((uint32)v136 - (uint32)v132));
        w_u32(a3 + 16u, (uint32)((uint32)v134 + (uint32)v130));
        v50 = r_u32(a3 + 4u);
        w_u32(a3 + 20u, (uint32)((uint32)v135 + (uint32)v131));
        v51 = v136;
        v52 = v132;
        v53 = r_u32(a3);
        v54 = r_u32(a3 + 8u);
        w_u32(a3 + 36u, (uint32)(v50));
        w_u32(a3 + 32u, (uint32)(0u - (uint32)v53));
        v55 = r_u32(a3 + 16u);
        w_u32(a3 + 24u, (uint32)((uint32)v51 + (uint32)v52));
        v56 = r_u32(a3 + 20u);
        w_u32(a3 + 40u, (uint32)(0u - (uint32)v54));
        v57 = (0u - r_u32(a3 + 24u));
        w_u32(a3 + 48u, (uint32)(0u - (uint32)v55));
        w_u32(a3 + 52u, (uint32)(v56));
        w_u32(a3 + 56u, (uint32)(v57));
    }
    v79 = 0;
    v80 = a3;
    do
    {
        component = r_u32(v80);
        centre = r_u32(a2);
        w_u32(v80, component + centre);
        component = r_u32(v80 + 4u);
        centre = r_u32(a2 + 4u);
        w_u32(v80 + 4u, component + centre);
        ++v79;
        component = r_u32(v80 + 8u);
        centre = r_u32(a2 + 8u);
        w_u32(v80 + 8u, component + centre);
        v80 += 16u;
    } while (v79 < a4);
    return 1;
}

void sub_80068770(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a9, sint32 a10, uint32 a11, sint32 a12)
{
    FUNCTION_MARKER(0x80068770u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a11_view = SF_DRAFT_PTR(int, a11);

    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    bool v22; // dc
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int v30;
    unsigned int v31;
    int v32;
    __int16 v33;
    uint8 v34;
    int v35;
    int v36;
    int v37;
    int v38;
    int v39;
    int v40;
    int v41;
    int v42;
    int v43;
    int v44;
    int v45;
    int v46;

    void (*v48)(_DWORD, _DWORD);
    int v49;
    int v50;
    int v51;
    int v52;
    int v53;

    int direction[4];
    int v61;
    int v62;
    int v63;
    int v64;
    int v65;
    int v66;
    int v67;
    int v68;
    __int16 v69;
    char v70;

    v17 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v70 = 1;
    v18 = *SF_DRAFT_PTR(_DWORD, (v17 + 24));
    v19 = *SF_DRAFT_PTR(__int16, (v18 + 14));
    v69 = a3;
    if ((__int16)a2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
    {
        v20 = a2 << 16;
        if (*SF_DRAFT_PTR(_BYTE, (v17 + 34)) != 2)
            goto LABEL_5;
        sub_80066D74((__int16)a1);
    }
    v20 = a2 << 16;
LABEL_5:
    v21 = v20 >> 16;
    v22 = v20 >> 16 < 0;
    v23 = 4 * (v20 >> 16);
    if (v22)
    {
        v26 = 0;
    }
    else
    {
        v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (4 * (4 * (v23 + v21) - v21) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2));
        if (v24 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        {
            v26 = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
        }
        else
        {
            v25 = 76 * v24 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            v26 = *(uint8 *)(v25 + 36);
            if (!*SF_DRAFT_PTR(_BYTE, (v25 + 36)))
            {
                v27 = *SF_DRAFT_PTR(_DWORD, (v25 + 36)) & 0x3000;
                if (v27 == 4096)
                    v26 = 19;
                else
                    v26 = v27 == 0x2000 ? 0x14 : 0;
            }
        }
    }
    if (a10 && v26 != 16)
        sub_80069BF8((__int16)a1, sf_draft_guest_address(a11_view), a12);
    if (*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)) == 0x7FFF && *SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2 && v19 != 18)
        goto LABEL_33;
    if (!*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)))
        goto LABEL_34;
    v28 = *SF_DRAFT_PTR(__int16, (v17 + 2));
    if (v28 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
        goto LABEL_23;
    v29 = a2 << 16;
    if ((*SF_DRAFT_PTR(_DWORD, (76 * v28 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) == 0)
    {
        if ((__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            goto LABEL_34;
    LABEL_23:
        v29 = a2 << 16;
    }
    v22 = v29 >> 16 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
    v30 = a2 << 16;
    if (!v22)
    {
        if ((*SF_DRAFT_PTR(uint32, 0x80115E80u)) && a4 >= 0)
            goto LABEL_34;
        v30 = a2 << 16;
    }
    v22 = v30 >> 16 != -1;
    v31 = v26 - 16;
    if (v22 || (v31 = v26 - 16, v19 == 77))
    {
        if (v31 >= 2 && v26 != 19 && a4 != 0x7FFF)
        {
        LABEL_33:
            a9 = 23;
            goto LABEL_39;
        }
    }
LABEL_34:
    if (*SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2)
    {
        v32 = *SF_DRAFT_PTR(__int16, (v17 + 2));
        if ((v32 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (*SF_DRAFT_PTR(_DWORD, (76 * v32 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0) && v19 == 17)
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)) = 0;
    }
LABEL_39:
    if (v19 != 77 && v19 != 18 && v19 != 82)
        sub_8006784C((__int16)a2, v17, a9, sf_draft_guest_address(a11_view), (uint32)a12);
    v33 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8));
    if ((uint16)(v33 + 1) >= 2u)
    {
        v34 = 0;
        if (v33 == 0x7FFF)
        {
            v35 = 0;
            if (v19 != 18)
                goto LABEL_50;
            v36 = *SF_DRAFT_PTR(_DWORD, (v17 + 28));
            if (!v36)
                goto LABEL_49;
            v37 = *(uint8 *)(v36 + 82);
            v35 = 0;
            if (v37 != 9)
                goto LABEL_50;
        }
        v34 = 1;
    LABEL_49:
        v35 = v34;
    LABEL_50:
        if (!v35)
            goto LABEL_119;
        if (a4 < 0)
            a4 = -a4;
        if (a9 == 23)
        {
            v38 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6));
            if ((__int16)a2 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (sub_80068720(a1), (__int16)a2 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) || !(*SF_DRAFT_PTR(uint8, 0x801168D1u)))
            {
                v70 = 0;
                v38 -= a4;
            }
            if (v38 <= 0)
            {
                LOWORD(v38) = 0;
                if (*SF_DRAFT_PTR(_BYTE, (v17 + 34)) == 2)
                {
                    v39 = 76 * *SF_DRAFT_PTR(__int16, (v17 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                    *SF_DRAFT_PTR(_DWORD, (v39 + 36)) &= ~0x4000u;
                }
            }
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 6)) = v38;
        }
        if (v70)
        {
            v40 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8));
            if (a4 >= v40 || v40 == 0x7FFF)
            {
                if (sub_8005A688() && (__int16)a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)) = 150;
                else
                    *SF_DRAFT_PTR(_WORD, (v18 + 8)) = 0;
            }
            else
            {
                *SF_DRAFT_PTR(_WORD, (v18 + 8)) -= a4;
            }
        }
        if (!*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 24)) + 8)))
        {
            if (!*SF_DRAFT_PTR(_DWORD, (v17 + 16)))
            {
                sub_80069980((__int16)a1);
            LABEL_96:
                v48 = *(void (**)(_DWORD, _DWORD))(SF_DRAFT_GP + 936);
                goto LABEL_116;
            }
            v41 = 0;
            if ((__int16)a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                sub_80028F3C((__int16)a1, 13);
                (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
            }
            else
            {
                v42 = sub_8006090C((__int16)a1, (__int16)a2, sf_draft_guest_address(direction));
                if (v42)
                {
                    v19 = v42;
                    v41 = 1;
                }
            }
            v43 = a1 << 16;
            if ((__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
                v43 = (__int16)a1;
                if (v41)
                {
                LABEL_85:
                    v46 = v19;
                LABEL_86:
                    sub_80028F3C(v43, v46);
                    if ((v41 || v19 == 17) && (unsigned int)*(uint8 *)(v17 + 34) - 1 < 2)
                    {
                        if (v41)
                        {
                            v61 = direction[0];
                            v62 = direction[1];
                            v63 = direction[2];
                            v64 = direction[3];
                            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 96)) = 0;
                            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 100)) = 0;
                            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 104)) = 0;
                        }
                        else if ((__int16)a2 == -1)
                        {
                            sub_80067448(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80135D78u))), v17, sf_draft_guest_address(direction));
                            direction[1] = 0;
                            sub_800C720C(sf_draft_guest_address(direction), sf_draft_guest_address(direction));
                            v61 = sub_800C6D4C(direction[0], -98304);
                            v62 = sub_800C6D4C(direction[1], -98304);
                            v63 = sub_800C6D4C(direction[2], -98304);
                            v62 += 0x20000;
                        }
                        else
                        {
                            sub_80067448(sf_draft_guest_address(a11_view), (*SF_DRAFT_PTR(_DWORD, (76 * (__int16)a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(direction));
                            direction[0] = -direction[0];
                            direction[2] = -direction[2];
                            direction[1] = 0;
                            sub_800C720C(sf_draft_guest_address(direction), sf_draft_guest_address(direction));
                            v61 = sub_800C6D4C(direction[0], -98304);
                            v62 = sub_800C6D4C(direction[1], -98304);
                            v63 = sub_800C6D4C(direction[2], -98304);
                            v62 += 114688;
                        }
                        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 112)) += v61;
                        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 116)) += v62;
                        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 12)) + 120)) += v63;
                    }
                    goto LABEL_96;
                }
                if ((**(_DWORD **)(v17 + 16) & 2) != 0)
                {
                    if ((unsigned int)(v19 - 15) < 2 || (v43 = a1 << 16, v19 == 18))
                    {
                        v44 = sub_800EC8F4();
                        v43 = a1 << 16;
                        if (v44 % 100 >= 41)
                        {
                            v45 = sub_800EC8F4();
                            v43 = (__int16)a1;
                            v46 = v45 % 6 + 101;
                            goto LABEL_86;
                        }
                    }
                }
                else
                {
                    v43 = a1 << 16;
                }
            }
            v43 >>= 16;
            goto LABEL_85;
        }
        if ((unsigned int)*(uint8 *)(v17 + 34) - 1 < 2)
        {
            v49 = (*SF_DRAFT_PTR(uint32, 0x800120ACu));
            v65 = (*SF_DRAFT_PTR(uint32, 0x800120A4u));
            v66 = (*SF_DRAFT_PTR(uint32, 0x800120A8u));
            v67 = (*SF_DRAFT_PTR(uint32, 0x800120ACu));
            v68 = (*SF_DRAFT_PTR(uint32, 0x800120B0u));
            if ((__int16)a2 != -1)
                sub_80067448(sf_draft_guest_address(a11_view), (*SF_DRAFT_PTR(_DWORD, (76 * (__int16)a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52))), sf_draft_guest_address(&v65));
            v50 = *SF_DRAFT_PTR(__int16, (v17 + 2));
            if (v50 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
                goto LABEL_110;
            if (!(*SF_DRAFT_PTR(uint8, 0x801169C0u)))
            {
                v51 = sub_800EC8F4();
                sub_8006BC98(1, v51 % 5 + 53, v17, 0);
                v50 = *SF_DRAFT_PTR(__int16, (v17 + 2));
            }
            if (v50 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            {
            LABEL_110:
                v52 = v17;
                if (!v65 && !v66 && !v67)
                    goto LABEL_115;
                v53 = 1;
                goto LABEL_114;
            }
            if (!(*SF_DRAFT_PTR(uint8, 0x801169C0u)))
            {
                v52 = v17;
                if (v65 || v66 || v67)
                {
                    v53 = 0;
                LABEL_114:
                    sub_8007EB38(v52, sf_draft_guest_address(&v65), v53);
                    goto LABEL_115;
                }
                sub_8007EFD0(v17);
            }
        }
    LABEL_115:
        v48 = *(void (**)(_DWORD, _DWORD))(SF_DRAFT_GP + 932);
    LABEL_116:
        if (v48)
            v48((__int16)a1, v69);
        if (v34)
        {
        LABEL_120:
            sub_80015364(0xDu, 4u, v69, (__int16)a1, 0, 0, 0, 0);
            return;
        }
    LABEL_119:
        if (*SF_DRAFT_PTR(_BYTE, (v17 + 34)) != 14)
            return;
        goto LABEL_120;
    }
}

void sub_80079AFC(sint32 a1)
{
    FUNCTION_MARKER(0x80079AFCu, "SCUS_942.40");
    /* Unverified native translation from the complete original handler */
    uint32 entity = (uint32)a1;
    uint32 node = r_u32(0x8012D724u);
    uint32 owner_model = r_u32(entity + 8u);
    uint32 position[4], other_position[3], result[40], geometry[18];
    uint32 backup[8], template_bounds[8], effect[4], words[4];
    uint32 state, transform, model, bounds, flags, other, count = 0;
    uint32 i, group, x, y, z;
    sint32 identity, type, offset, distance;
    bool actor, expanded;

    sub_800E95B4(50);
    position[0] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 20u);
    position[1] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 24u);
    position[2] = r_u32(r_u32(r_u32(entity + 8u) + 12u) + 28u);
    position[1] = 0u - position[1];
    state = r_u32(entity + 12u);
    for (i = 0; i < 4; ++i)
        position[i] = r_u32(state + 268u + 4u * i);
    transform = r_u32(owner_model + 12u);
    for (group = 0; group < 2; ++group)
    {
        for (i = 0; i < 4; ++i)
            words[i] = r_u32(transform + group * 16u + i * 4u);
        for (i = 0; i < 4; ++i)
            w_u32(0x80130C98u + group * 16u + i * 4u, words[i]);
    }
    w_u32(0x80130CB0u, 0u - 17u - position[1]);
    sub_800CD35C(0x80130C98u);
    w_u32(0x80128E20u, 3);
    w_u32(0x80128E28u, 0x80128E2Cu);
    x = r_u32(0x80130CACu);
    y = r_u32(0x80130CB0u);
    z = r_u32(0x80130CB4u);
    w_u32(0x8012C7B8u, x);
    w_u32(0x8012C7C0u, z);
    x = (uint32)r_s16(0x80130C9Cu);
    z = (uint32)r_s16(0x80130CA2u);
    transform = (uint32)r_s16(0x80130CA8u);
    w_u32(0x80116A34u, 0x8012FCE0u);
    w_u32(0x8012C7BCu, y);
    w_u32(0x8012C7BCu, 0u - y);
    w_u32(0x8012C7CCu, z);
    w_u32(0x8012C7C8u, x);
    w_u32(0x8012C7D0u, transform);
    w_u32(0x8012C7CCu, 0u - z);

    while (node)
    {
        model = r_u32(node);
        flags = r_u8(model + 11u);
        bounds = r_u32(model + 16u);
        if (model == owner_model || !(flags & 6u))
            goto next_node;
        if (r_u32(bounds + 116u) == 0xFFFFFFFFu)
            sub_80076990(bounds);
        other_position[0] = r_u32(r_u32(model + 12u) + 20u);
        other_position[1] = r_u32(r_u32(model + 12u) + 24u);
        other_position[2] = r_u32(r_u32(model + 12u) + 28u);
        other_position[1] = 0u - other_position[1];
        distance = sub_80079A70(sf_draft_guest_address(position), sf_draft_guest_address(other_position));
        if (r_s16(bounds + 58u) < distance)
            goto next_node;
        if (flags & 2u)
        {
            other = r_u32(r_u32(0x80115CCCu) + 76u * (r_u16(model + 20u) & 0x3FFu) + 52u);
            x = r_u8(other + 34u);
            actor = x - 1u < 2u;
            expanded = x == 14u;
            if ((sint32)count >= 10)
                sub_800DDC34(1, 0, 0x800122E4u, 683);
            if (expanded)
            {
                x = r_u32(bounds + 16u);
                y = r_u32(bounds + 24u);
                w_u32(bounds + 16u, x + 16u);
                x = r_u32(bounds);
                w_u32(bounds + 24u, y + 16u);
                y = r_u32(bounds + 8u);
                w_u32(bounds, x - 16u);
                w_u32(bounds + 8u, y - 16u);
            }
            else if (actor)
            {
                identity = r_s16(other + 2u);
                x = r_u8(r_u32(0x80115CCCu) + 76u * (uint32)identity + 36u);
                transform = r_u32(0x8010C388u + 32u * x);
                for (i = 0; i < 8; ++i)
                    template_bounds[i] = r_u32(0x800122F0u + 4u * i);
                for (i = 0; i < 8; ++i)
                    backup[i] = r_u32(bounds + 4u * i);
                for (i = 0; i < 8; ++i)
                    w_u32(bounds + 4u * i, template_bounds[i]);
                if (transform && ((r_u32(r_u32(other + 16u)) & 0x100u) || r_s16(0x80130C88u) == 4))
                {
                    if (!(r_u32(transform + 40u) & 0x04000000u))
                        sub_800DDC34(1, 0, 0x800122E4u, 711);
                    x = (uint32)r_s16(r_u32(transform + 32u) + 18u);
                    w_u32(bounds + 24u, x + 16u);
                }
            }
            /* Missing game dependencies retain their named fail-fast boundaries */
            sub_80079228(other, entity, count, flags & 4u);
            count += 1u;
            if (expanded)
            {
                x = r_u32(bounds + 16u);
                y = r_u32(bounds + 24u);
                w_u32(bounds + 16u, x - 16u);
                x = r_u32(bounds);
                w_u32(bounds + 24u, y - 16u);
                y = r_u32(bounds + 8u);
                w_u32(bounds, x + 16u);
                w_u32(bounds + 8u, y + 16u);
            }
            else if (actor)
            {
                for (i = 0; i < 8; ++i)
                    w_u32(bounds + 4u * i, backup[i]);
            }
            if (expanded)
                w_u16(model + 22u, 1);
        }
        if (flags & 4u)
        {
            other = r_u32(r_u32(0x80115CCCu) + 76u * (r_u16(model + 20u) & 0x3FFu) + 52u);
            identity = r_s16(other + 2u);
            type = 666;
            if (identity != 666)
            {
                x = r_u32(r_u32(0x80115CCCu) + 76u * (uint32)identity);
                type = r_s16(r_u32(0x80116B98u) + 20u * x);
            }
            offset = type == 32 ? -120 : (type == 48 || type == 37 || type == 39 || type == 90 ? 1 : -50);
            sub_80077DB0(r_u32(model + 12u), 0x8012FCE0u);
            /* The original output spans both model fields and the coordinate words */
            result[18] = model;
            sub_80076630(sf_draft_guest_address(geometry), bounds, offset, (r_u8(model + 11u) & 8u) != 0);
            if (!sub_80077278(sf_draft_guest_address(geometry), -666, sf_draft_guest_address(result), 0x8012C7B8u))
                goto next_node;
            sub_80077BFC(0x8010E1ECu);
            if (!sub_80077B48(result[8], result[9], result[10]))
                goto next_node;
            for (i = 0; i < 8; ++i)
                backup[i] = r_u32(0x8012DB60u + 4u * i);
            for (group = 0; group < 2; ++group)
            {
                for (i = 0; i < 4; ++i)
                    words[i] = r_u32(0x80130CD8u + 16u * group + 4u * i);
                for (i = 0; i < 4; ++i)
                    w_u32(0x8012DB60u + 16u * group + 4u * i, words[i]);
            }
            for (i = 0; i < 8; ++i)
                w_u32(0x80130CD8u + 4u * i, backup[i]);
            sub_80077DB0(r_u32(model + 12u), 0x8012FCE0u);
            result[38] = model;
            if (!sub_80077278(sf_draft_guest_address(geometry), -666, sf_draft_guest_address(result), 0x8012C7B8u))
                goto next_node;
            sub_80077BFC(0x8010E1ECu);
            if (!sub_80077B48(result[8], result[9], result[10]))
                goto next_node;
            for (i = 0; i < 4; ++i)
                effect[i] = r_u32(0x80012310u + 4u * i);
            if (other)
            {
                state = r_u32(other + 12u);
                if (state)
                    for (i = 0; i < 4; ++i)
                        effect[i] = r_u32(state + 388u + 4u * i);
            }
            if ((flags & 2u) && (effect[0] || effect[1] || effect[2]))
            {
                state = r_u32(entity + 12u);
                for (i = 0; i < 3; ++i)
                {
                    x = r_u32(state + 388u + 4u * i);
                    w_u32(state + 388u + 4u * i, x + effect[i]);
                }
            }
            identity = r_s16(other + 2u);
            type = r_s16(entity + 2u);
            sub_80015364(26u, 1u, type, identity, 0, 0, 0, 0);
        }
    next_node:
        node = r_u32(node + 8u);
    }
}
