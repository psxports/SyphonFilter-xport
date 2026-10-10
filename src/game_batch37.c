#include "game_draft.h"
#include <stdlib.h>
uint32 sub_800C9714();

__declspec(noreturn) sint32 sf_draft_missing_callback_i32(uint32 target);
__declspec(noreturn) void sf_draft_missing_callback_void(uint32 target);
void sf_draft_missing_gte_800CF0E4_1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
void sf_draft_missing_gte_800CF0E4_10(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800CF0E4_11(sint32 *output1);
void sf_draft_missing_gte_800CF0E4_12(void);
void sf_draft_missing_gte_800CF0E4_13(sint32 *output1);
void sf_draft_missing_gte_800CF0E4_14(uint32 memory1, uint32 memory2, uint32 memory3);
void sf_draft_missing_gte_800CF0E4_15(sint32 input1);
void sf_draft_missing_gte_800CF0E4_16(sint32 input1);
void sf_draft_missing_gte_800CF0E4_17(sint32 input1);
void sf_draft_missing_gte_800CF0E4_18(sint32 input1);
void sf_draft_missing_gte_800CF0E4_19(sint32 input1);
void sf_draft_missing_gte_800CF0E4_2(sint32 input1);
void sf_draft_missing_gte_800CF0E4_20(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800CF0E4_21(sint32 input1, sint32 input2, sint32 input3);
void sf_draft_missing_gte_800CF0E4_22(uint32 memory1, uint32 memory2, uint32 memory3);
void sf_draft_missing_gte_800CF0E4_3(sint32 input1);
void sf_draft_missing_gte_800CF0E4_4(sint32 input1);
void sf_draft_missing_gte_800CF0E4_5(sint32 input1);
void sf_draft_missing_gte_800CF0E4_6(sint32 input1);
void sf_draft_missing_gte_800CF0E4_7(sint32 input1);
void sf_draft_missing_gte_800CF0E4_8(void);
void sf_draft_missing_gte_800CF0E4_9(sint32 *output1);
/* TODO Resolve external dependency signatures */
uint32 sub_80027DF8(void);
uint32 sub_800C83C4();
uint32 sub_800CD734();
uint32 sub_800E3F54();
uint32 sub_800E7F54();
uint32 sub_800E90D4(uint32 parent, uint32 output);
sint32 sub_800E95D4(sint32 light, uint32 descriptor);
sint32 sub_800E9B44(sint32 mode);
void sub_800E9BC4(uint32 descriptor);

uint32 sub_800C973C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C973Cu, "SCUS_942.40");

    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    struct
    {
        int v101, v102, v103;
    } crossVector;

    unsigned int v3;
    sint32 v5;
    int v6;
    int v7;
    sint32 v8;
    int v9;
    int v10;
    sint32 v11;
    int v12;
    uint8 v13;
    int v14;

    _DWORD *v16;
    _DWORD *v17;
    int v18;
    int v19;
    int v20;
    int v21;
    unsigned int v22;
    int v23;
    int v24;
    int *v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int *v30;
    _DWORD *v31;
    _DWORD *v32;
    int v33;
    int v34;
    int v35;
    int v36;
    int v37;
    int v38;
    __int16 v39;
    int v40;
    int v41;
    _DWORD *v42;
    _DWORD *v43;
    int *v44;
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
    int *v56;
    int v57;
    int v58;
    int v59;
    int v60;
    int v61;
    int v62;
    int v64;
    int *v65;

    int v67;
    int v68;
    int *v69;
    int v70;
    int v71;
    int v72;

    int v74;

    int v76;
    int v77;
    bool v78; // dc
    sint32 v79;
    int v80;
    __int16 v81;
    int v82;
    int v83;
    int *v84;
    int *v85;
    int v86;
    int v87;
    sint32 v88;
    int v89;
    int *v90;
    int v91;
    int result;
    int v93;
    int v94;

    int v96;
    int v97;

    int v105[4];
    int v106;
    int v107;
    int v108;
    int v109;
    int v110;
    int v111;
    int v112;
    int v113;
    int v114;
    int v115;
    int v116;
    int v117;
    int v118;
    int v119;
    int v120;
    int v121;
    int v122;
    uint8 v123;
    uint8 v124;
    uint8 v125;

    v3 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 2020));
    v123 = a1;
    v125 = 0;
    v5 = v3 < 3;
    v124 = (*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 2;
    if (!v5)
        v125 = (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1;
    v6 = 0;
    if (v123)
        v6 = (*SF_DRAFT_PTR(uint32, 0x8012D734u));
    if (*SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 3260)) != v125 && !v5)
    {
        if (v125)
        {
            v7 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108)) - 8188;
            (*SF_DRAFT_PTR(uint32, 0x801168BCu)) -= 8188;
            v8 = (*SF_DRAFT_PTR(uint32, 0x801168BCu)) + v7 < (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8013D5FCu));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108)) = v7;
            if (!v8)
            {
                v9 = 1378;
            LABEL_12:
                sub_800DDC34(1, 0, 0x800138A4u, v9);
            }
        }
        else
        {
            v10 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108)) + 8188;
            (*SF_DRAFT_PTR(uint32, 0x801168BCu)) += 8188;
            v11 = (*SF_DRAFT_PTR(uint32, 0x801168BCu)) + v10 < (unsigned int)(*SF_DRAFT_PTR(uint32, 0x8013D5D4u));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108)) = v10;
            if (!v11)
            {
                v9 = 1384;
                goto LABEL_12;
            }
        }
        *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3260)) = v125;
        sub_800E5000(0);
    }
    v12 = (*SF_DRAFT_PTR(uint32, 0x80116598u));
    v13 = v123;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2016)) = a2;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3232)) = 0;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3520)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2100)) = 0;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3624)) = v13;
    (*SF_DRAFT_PTR(uint32, 0x80116594u)) = v12;
    if (v6)
    {
        v105[0] = (*SF_DRAFT_PTR(uint32, 0x800138B0u));
        v105[1] = (*SF_DRAFT_PTR(uint32, 0x800138B4u));
        v105[2] = (*SF_DRAFT_PTR(uint32, 0x800138B8u));
        v105[3] = (*SF_DRAFT_PTR(uint32, 0x800138BCu));
        crossVector.v101 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 4));
        crossVector.v102 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 10));
        v14 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v6 + 12)) + 16));
        crossVector.v102 = 0;
        crossVector.v103 = v14;
        sub_800EBA78(sf_draft_guest_address(&crossVector), sf_draft_guest_address(v105), 0x8013C628u);
        sub_800E95D4(0, 0x8010E00Cu);
        sub_800E95D4(1, 0x8013C628u);
        sub_800E95D4(2, 0x8010E00Cu);
    }
    if (!v124)
    {
        sub_800C8BB0(v123);
        v124 = (*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 2;
    }
    sub_800E9F74((SF_DRAFT_PTR(uint32, 0x801168B8u)[*SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2040))]));
    if (!v124)
    {
        v16 = SF_DRAFT_PTR(_DWORD, r_u32(SF_DRAFT_GP + 2044u));
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3568)) = 0;
        for (*SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3340)) = -1; v16; v16 = SF_DRAFT_PTR(_DWORD, v16[2]))
        {
            v17 = SF_DRAFT_PTR(_DWORD, *v16);
            v18 = r_s16(r_u32((uint32)*v16 + 8u) + 4u);
            v106 = v18;
            v19 = r_s16(v17[2] + 10u);
            v107 = v19;
            v20 = r_s16(v17[2] + 16u);
            v107 = -v19;
            v108 = v20;
            if ((v17[1] & 1) != 0)
            {
                v107 = v19;
                v21 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3568));
                v106 = -v18;
                v108 = -v20;
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3340)) = v21;
            }
            v22 = (uint16)sub_800EC124(v108, v106);
            v23 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3568));
            v24 = 4 * v23;
            v25 = &SF_DRAFT_PTR(uint32, 0x8012FD08u)[4 * v23];
            *v25 = r_u32(v17[2] + 20u);
            v26 = r_u32(v17[2] + 24u);
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3568)) = v23 + 1;
            v25[1] = v26;
            v27 = r_u32(v17[2] + 28u);
            v25[1] = -v25[1];
            v25[2] = v27;
            if (v17[7] == 255)
                v22 = (uint16)v22 | 0x80000000;
            else
                v22 = (uint16)v22;
            SF_DRAFT_PTR(uint32, 0x8012FD14u)[v24] = v22;
        }
        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2068)) && v123)
            sub_800C83C4();
        if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2192)))
        {
            (*SF_DRAFT_PTR(uint32, 0x801311F0u)) = (*SF_DRAFT_PTR(uint32, 0x80130EE0u));
            (*SF_DRAFT_PTR(uint32, 0x801311F4u)) = (*SF_DRAFT_PTR(uint32, 0x80130EE4u));
            (*SF_DRAFT_PTR(uint32, 0x801311F8u)) = (*SF_DRAFT_PTR(uint32, 0x80130EE8u));
            (*SF_DRAFT_PTR(uint32, 0x801311FCu)) = (*SF_DRAFT_PTR(uint32, 0x80130EECu));
            (*SF_DRAFT_PTR(uint32, 0x80131200u)) = (*SF_DRAFT_PTR(uint32, 0x80130EF0u));
            (*SF_DRAFT_PTR(uint32, 0x80131204u)) = (*SF_DRAFT_PTR(uint32, 0x80130EF4u));
            (*SF_DRAFT_PTR(uint32, 0x80131208u)) = (*SF_DRAFT_PTR(uint32, 0x80130EF8u));
            (*SF_DRAFT_PTR(uint32, 0x8013120Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130EFCu));
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2192)) = 0;
            sub_800E90D4(0, 0x8013C5D8u);
            (*SF_DRAFT_PTR(uint32, 0x80131210u)) = (int)0x8013C5D8u;
        }
    }
    v28 = *SF_DRAFT_PTR(uint16, (SF_DRAFT_GP + 2020)) - 1;
    if (v28 >= 0)
    {
        v29 = 61 * v28;
        do
        {
            v30 = &SF_DRAFT_PTR(uint32, 0x8012D698u)[v29];
            if (v28 && (*((_WORD *)v30 + 3) & 1) != 0)
            {
                v31 = SF_DRAFT_PTR(_DWORD, *v30);
                v32 = SF_DRAFT_PTR(_DWORD, r_u32(0x8012D698u));
                v33 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 4));
                v34 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 8));
                v35 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 12));
                *v31 = r_u32(r_u32(0x8012D698u));
                v31[1] = v33;
                v31[2] = v34;
                v31[3] = v35;
                v36 = v32[5];
                v37 = v32[6];
                v38 = v32[7];
                v31[4] = v32[4];
                v31[5] = v36;
                v31[6] = v37;
                v31[7] = v38;
            }
            if (v30[5] > 0)
            {
                v30[35] = (*SF_DRAFT_PTR(uint32, 0x8012D724u));
                v30[36] = (*SF_DRAFT_PTR(uint32, 0x8012D728u));
                v30[38] = (*SF_DRAFT_PTR(uint32, 0x8012D730u));
            }
            v39 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2040)) + 2 * *((uint8 *)v30 + 9);
            v40 = SF_DRAFT_PTR(uint32, 0x8013D560u)[5 * v39];
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2042)) = v39;
            if (v40)
            {
                v41 = v124;
                *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2022)) = v28;
                if (!v41)
                {
                    if (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2044)))
                    {
                        v42 = SF_DRAFT_PTR(_DWORD, r_u32(SF_DRAFT_GP + 2044u));
                        do
                        {
                            v43 = SF_DRAFT_PTR(_DWORD, *v42);
                            v44 = SF_DRAFT_PTR(int, r_u32((uint32)*v42 + 8u));
                            v45 = v44[1];
                            v46 = v44[2];
                            v47 = v44[3];
                            v109 = *v44;
                            v110 = v45;
                            v111 = v46;
                            v112 = v47;
                            v48 = v44[5];
                            v49 = v44[6];
                            v50 = v44[7];
                            v113 = v44[4];
                            v114 = v48;
                            v115 = v49;
                            v116 = v50;
                            if ((v43[1] & 1) != 0)
                            {
                                v117 = SHIWORD(v109);
                                v118 = (__int16)v111;
                                v119 = SHIWORD(v112);
                                v106 = -(__int16)v109;
                                v107 = -SHIWORD(v110);
                                v108 = -(__int16)v112;
                                v120 = -(__int16)v110;
                                v121 = -SHIWORD(v111);
                                v122 = -(__int16)v113;
                                LOWORD(v109) = -(__int16)v109;
                                HIWORD(v110) = -HIWORD(v110);
                                LOWORD(v112) = -(__int16)v112;
                                LOWORD(v110) = -(__int16)v110;
                                HIWORD(v111) = -HIWORD(v111);
                                LOWORD(v113) = -(__int16)v113;
                            }
                            (*SF_DRAFT_PTR(uint32, 0x8013C5D8u)) = 0;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5DCu)) = v109;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5E0u)) = v110;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5E4u)) = v111;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5E8u)) = v112;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5ECu)) = v113;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5F0u)) = v114;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5F4u)) = v115;
                            (*SF_DRAFT_PTR(uint32, 0x8013C5F8u)) = v116;
                            sub_800E9F84(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801311F0u))));
                            v51 = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
                            v52 = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
                            v43[8] = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
                            v43[9] = v51;
                            v43[10] = v52;
                            v53 = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
                            v54 = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
                            v43[11] = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
                            v43[12] = v53;
                            v43[13] = v54;
                            v55 = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
                            v43[14] = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
                            v43[15] = v55;
                            v42 = SF_DRAFT_PTR(_DWORD, v42[2]);
                        } while (v42);
                    }
                    if (!v124)
                        goto LABEL_48;
                }
                if (v30 == &(*SF_DRAFT_PTR(uint32, 0x8012D78Cu)) && ((*SF_DRAFT_PTR(uint16, 0x8012D792u)) & 4) != 0)
                {
                LABEL_48:
                    if ((*((_WORD *)v30 + 3) & 1) != 0)
                        sub_800E9C44(0, 0, 0x8013D560u + 20u * (uint32)r_s16(SF_DRAFT_GP + 2042u));
                    if (v30[5] >= 0)
                    {
                        sub_800E95B4(*((uint16 *)v30 + 2));
                        v56 = SF_DRAFT_PTR(int, *v30);
                        v30[6] = 0;
                        v57 = v56[1];
                        v58 = v56[2];
                        v59 = v56[3];
                        v30[7] = *v56;
                        v30[8] = v57;
                        v30[9] = v58;
                        v30[10] = v59;
                        v60 = v56[5];
                        v61 = v56[6];
                        v62 = v56[7];
                        v30[11] = v56[4];
                        v30[12] = v60;
                        v30[13] = v61;
                        v30[14] = v62;
                        sub_800E9F84(sf_draft_guest_address(v30 + 26));
                        if (r_u32(SF_DRAFT_GP + 0x7FCu) || r_s32(SF_DRAFT_GP + 0x808u) > 0 || (*((_WORD *)v30 + 3) & 0x10) != 0)
                        {
                            (*SF_DRAFT_PTR(uint32, 0x8013C688u)) = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
                            (*SF_DRAFT_PTR(uint32, 0x8013C68Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
                            (*SF_DRAFT_PTR(uint32, 0x8013C690u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
                            (*SF_DRAFT_PTR(uint32, 0x8013C694u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
                            (*SF_DRAFT_PTR(uint32, 0x8013C698u)) = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
                            (*SF_DRAFT_PTR(uint32, 0x8013C69Cu)) = (*SF_DRAFT_PTR(uint32, 0x80130CECu));
                            (*SF_DRAFT_PTR(uint32, 0x8013C6A0u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
                            (*SF_DRAFT_PTR(uint32, 0x8013C6A4u)) = (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
                        }
                        w_u32(SF_DRAFT_GP + 0x7E8u, r_u32(SF_DRAFT_GP + 0x7F0u));
                        sub_800E9B44(1);
                        sub_800E9BC4(0x8012D77Cu);
                    }
                    sub_800D1910((16 * *((uint8 *)v30 + 224)), (16 * *((uint8 *)v30 + 225)), (16 * *((uint8 *)v30 + 226)));
                    if ((*((_WORD *)v30 + 3) & 1) != 0)
                        sub_800C84F4(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8012D698u)[v29]), v123);
                }
            }
            --v28;
            v29 -= 61;
        } while (v28 >= 0);
    }
    v64 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2040));
    v65 = &SF_DRAFT_PTR(uint32, 0x8012CD10u)[5 * v64];
    v67 = SF_DRAFT_PTR(uint32, 0x801168B8u)[v64] + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2108)) - (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
    sub_800E9C44(0, 0, sf_draft_guest_address(v65));
    if (*SF_DRAFT_PTR(int, (SF_DRAFT_GP + 2016)) < 8 || v67 >= 101)
        sub_800C8EE8(sf_draft_guest_address(v65));
    if (!v124 && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2054)) && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3624)) && v67 >= 5201)
    {
        v68 = (*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 0x10;
        if (((*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 0x10) == 0 || (v69 = SF_DRAFT_PTR(int, r_u32(SF_DRAFT_GP + 3600u)), (v70 = v69[10]) == 0))
        {
            v70 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 36));
            v69 = SF_DRAFT_PTR(int, r_u32(SF_DRAFT_GP + 3600u));
        }
        sub_800C9140(v69[7], v70, v69[5], 0, (sint32)sf_draft_guest_address(v65), 0);
        v71 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600));
        if (*SF_DRAFT_PTR(_DWORD, (v71 + 44)) && *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2036)))
        {
            *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2036)) = 0;
            if (!v68 || (v72 = *SF_DRAFT_PTR(_DWORD, (v71 + 48))) == 0)
                v72 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3600)) + 44));
            sub_800C9140(r_u32(r_u32(SF_DRAFT_GP + 3600u) + 32u), v72, 4, 2047, (sint32)(0x8013D560u + 20u * (uint32)r_s16(SF_DRAFT_GP + 0x7FAu)), 1);
            sub_800CD6D8(0x80135DB8u);
            sub_800CD710(0x80135DB8u, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0]), 0);
            v74 = sub_800EC8F4();
            sub_800CD724(0x80135DB8u, v74 % 30 + 60, 31, 31);
            sub_800CD734(0x80135DB8u);
            v76 = sub_800EC8F4();
            sub_800C8A9C(0x800C9714u, v76 % 2 + 2, 0);
        }
    }
    v77 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2016));
    v78 = v77 == 0x7FFFFFFF;
    v79 = v77 < 60;
    if (!v78)
    {
        /* Native call stack replaces the original scratchpad SP switch */
        sub_800C964C();
        v79 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2016)) < 60;
    }
    if (v79)
    {
        v80 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3328));
        if (v80 >= 10000)
            LOWORD(v80) = 9999;
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2096)) = v80;
    }
    else
    {
        *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2096)) = (sint32)(r_u32(0x8012C8A0u) - SF_DRAFT_PTR(uint32, 0x801168B8u)[r_s16(SF_DRAFT_GP + 2040u)]) / 40;
    }
    v81 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2038));
    v82 = v124;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2038)) = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2040));
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2040)) = v81;
    if (v82)
        goto LABEL_100;
    if (SF_DRAFT_PTR(uint32, 0x8013D560u)[0])
    {
        sub_800E3F54(1);
        sub_800E5000(0);
        if (((*SF_DRAFT_PTR(uint16, 0x8012D69Eu)) & 0x10) != 0)
        {
            v83 = 1;
            v84 = SF_DRAFT_PTR(int, 0x8010E198u);
            do
            {
                v85 = &SF_DRAFT_PTR(uint32, 0x8012DFD8u)[17 * (((*SF_DRAFT_PTR(uint32, 0x80116538u)) + v83) % 5)];
                v86 = v85[1];
                if (v85[16])
                {
                    if (v86)
                    {
                        v87 = v85[2];
                        v78 = v86 == v87;
                        v88 = v86 < v87;
                        if (!v78)
                        {
                            v89 = v85[4];
                            if (v88)
                            {
                                v90 = SF_DRAFT_PTR(int, (v86 + 4));
                                do
                                {
                                    if (v86 == v89)
                                        v89 = v85[4];
                                    v91 = v90[4] - 8 * v83;
                                    if ((unsigned int)v91 < 4)
                                        v91 = 4;
                                    *v90 = (*v84);
                                    if (v91 < 8189)
                                        sub_800E7F54(SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2038))] + 4 * (v91 >> 2), v86);
                                    v86 += 24;
                                    v90 += 6;
                                } while (v86 < v85[2]);
                            }
                        }
                    }
                }
                ++v83;
                ++v84;
            } while (v83 < 4);
        }
    }
    if (v124)
    {
    LABEL_100:
        if ((*SF_DRAFT_PTR(uint32, 0x8012D734u)))
        {
            *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x8012D734u)) + 40)) = 0;
            *SF_DRAFT_PTR(_BYTE, ((*SF_DRAFT_PTR(uint32, 0x8012D734u)) + 10)) &= ~2u;
        }
        sub_800E5000(0);
        sub_800E3F54(0);
        sub_800D769C();
        return 1;
    }
    else
    {
        if (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3624)))
        {
            v93 = v123;
            do
            {
                v94 = sub_800E3F54(-1);
                if (v93)
                    v96 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2196)) + *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2076));
                else
                    v96 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2196)) + 2;
            } while (v94 < v96);
        }
        else
        {
            sub_800E3F54(2);
        }
        v97 = sub_800E3F54(-1);
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2196)) = v97;
        if (v125 && *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2096)) >= *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3328)))
        {
            sub_80027DF8();
            (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) &= ~1u;
            sub_800E5000(0);
        }
        else
        {
            sub_800D769C();
        }
        result = 0;
        ++*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2080));
    }
    return result;
}

static uint32 sf_triangle_signed_add(uint32 left, uint32 right)
{
    sint64 sum = (sint64)(sint32)left + (sint64)(sint32)right;
    if (sum < -2147483648LL || sum > 2147483647LL)
    {
        fprintf(stderr, "Original CF0E4 signed arithmetic overflow\n");
        abort();
    }
    return (uint32)sum;
}

static void sf_triangle_load_position(uint32 value, uint32 shift, uint32 index)
{
    if (shift == 3u)
    {
        sf_gte_write_data(index * 2u, r_u32(value));
        sf_gte_write_data(index * 2u + 1u, r_u32(value + 4u));
    }
    else
    {
        uint32 x = (uint32)((sint32)(value << 22) >> 22) & 0xffffu;
        uint32 y = (uint32)((sint32)(value << 12) >> 6) & 0xffff0000u;
        sf_gte_write_data(index * 2u, x | y);
        sf_gte_write_data(index * 2u + 1u, (uint32)((sint32)value >> 20));
    }
}

sint32 sub_800CF0E4(sint32 a1, uint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800CF0E4u, "SCUS_942.40");
    uint32 limit = r_u32(0x801164A0u);
    uint32 minimum = r_u32(0x80116518u);
    uint32 packet, remaining, positions, normals, polygon, shift, indices;
    uint32 next_vertex[3];
    uint32 i;
    limit = sf_triangle_signed_add(limit, 0xffffffe2u);
    w_u32(0x1F800010u, limit);
    w_u32(0x1F800014u, minimum);
    packet = r_u32(0x8012C8A0u);
    remaining = r_u16((uint32)a1 + 4u);
    positions = r_u16((uint32)a1 + 6u);
    normals = r_u16((uint32)a1 + 8u);
    positions = sf_triangle_signed_add(positions, (uint32)a1);
    normals = sf_triangle_signed_add(normals, (uint32)a1);
    polygon = (uint32)a1 + 24u;
    indices = r_u32(polygon + 8u);
    shift = (sint32)indices < 0 ? 2u : 3u;
    for (i = 0; i < 3u; ++i)
        next_vertex[i] = positions + (((indices >> (8u * i)) & 255u) << shift);
    if (shift != 3u)
        for (i = 0; i < 3u; ++i)
            next_vertex[i] = r_u32(next_vertex[i]);
    for (;;)
    {
        uint32 color, flags = (uint32)a4, depth, texture, uv, bucket;
        PsxGteSnapshot state;
        sint32 facing;
        int exhausted = 0;
        for (i = 0; i < 3u; ++i)
            sf_triangle_load_position(next_vertex[i], shift, i);
        sf_gte_execute(0x280030u);
        indices = r_u32(polygon + 24u);
        psx_gte_snapshot(&state);
        color = state.back_color[0] ? 0x34ffffffu : 0x3400ff00u;
        for (i = 0; i < 3u; ++i)
            next_vertex[i] = positions + (((indices >> (8u * i)) & 255u) << shift);
        if (shift != 3u)
            for (i = 0; i < 3u; ++i)
                next_vertex[i] = r_u32(next_vertex[i]);
        indices = r_u32(polygon + 8u);
        depth = sf_gte_read_data(16u);
        depth = sf_triangle_signed_add(depth, sf_gte_read_data(17u));
        depth = sf_triangle_signed_add(depth, sf_gte_read_data(18u)) >> 2;
        sf_gte_execute(0x1400006u);
        if (((indices >> 24) & 127u) == 1u && (a2 & 128u))
            goto next_polygon;
        if (((indices >> 24) & 127u) == 0u)
        {
            if (!(a2 & 16u))
                goto next_polygon;
            flags = 0x80000000u;
        }
        facing = (sint32)sf_gte_read_data(24u);
        if (facing < 0)
            goto next_polygon;
        w_u32(packet + 20u, sf_gte_read_data(13u));
        w_u32(packet + 32u, sf_gte_read_data(14u));
        w_u32(packet + 8u, sf_gte_read_data(12u));
        texture = r_u32(polygon);
        if (((uint32)a4 & 32u) || (sint32)texture < 0)
            color |= 0x02000000u;
        if ((sint32)flags >= 0)
        {
            uint32 normal_indices = r_u32(polygon + 12u);
            for (i = 0; i < 3u; ++i)
            {
                uint32 normal = r_u32(normals + (((normal_indices >> (8u * i)) & 255u) << shift));
                uint32 x = (uint32)((sint32)((normal & 255u) << 24) >> 18) & 0xffffu;
                uint32 y = (uint32)((sint32)((normal & 0xff00u) << 16) >> 2);
                sf_gte_write_data(i * 2u, x | y);
                sf_gte_write_data(i * 2u + 1u, (uint32)((sint32)(normal << 8) >> 18));
            }
            sf_gte_write_data(6u, color);
            sf_gte_write_data(8u, 0u);
            sf_gte_execute(0xF80416u);
        }
        else
        {
            sf_gte_write_data(20u, color);
            sf_gte_write_data(21u, color);
            sf_gte_write_data(22u, color);
            texture = (texture & 0xff9fffffu) | 0x00200000u;
        }
        uv = r_u32(polygon + 4u);
        w_u32(packet + 12u, (texture & 0xffffu) | ((((texture >> 24) & 127u) + 480u) << 22) | 0x00300000u);
        texture = (uv & 0xffffu) | (texture & 0x00ff0000u);
        if (((texture >> 16) & 15u) < 6u)
            texture = sf_triangle_signed_add(texture, 0x00060000u);
        w_u32(packet + 24u, texture);
        w_u32(packet + 36u, uv >> 16);
        bucket = (depth & 0xfffcu) + (uint32)a3;
        minimum = r_u32(0x1F800014u);
        if ((sint32)bucket < (sint32)minimum)
            bucket = minimum;
        w_u32(packet, r_u32(bucket));
        w_u8(packet + 3u, 9u);
        w_u32(bucket, packet);
        w_u8(bucket + 3u, 0u);
        w_u32(packet + 4u, sf_gte_read_data(20u));
        w_u32(packet + 16u, sf_gte_read_data(21u));
        w_u32(packet + 28u, sf_gte_read_data(22u));
        packet += 40u;
        exhausted = (sint32)r_u32(0x1F800010u) < (sint32)packet;
    next_polygon:
        remaining -= 1u;
        if (exhausted)
        {
            w_u32(0x8011649Cu, 1u);
            break;
        }
        polygon += 16u;
        if ((sint32)remaining <= 0)
            break;
    }
    w_u32(0x8012C8A0u, packet);
    return 0;
}

uint32 sub_80015364(uint32 a1, uint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12)
{
    FUNCTION_MARKER(0x80015364u, "SCUS_942.40");
    /* TODO Resolve incoming v0 on zero-event return */
    uint32 count, slot, callback, table, arguments[5], i;
    uint32 owner_record, model_index, model_record;

    struct
    {
        sint16 event, mode;
        sint32 subject, owner, x, y, z, extra;
    } event;

    a1 &= 255u;
    a2 &= 255u;
    if (!a1)
    {
        /* TODO The original returns incoming v0 without assigning it */
        fprintf(stderr, "TODO 80015364: Incoming return value unavailable for zero event\n");
        abort();
    }
    count = r_u32(0x80116C68u);
    if ((sint32)count >= 100)
        return count << 3;
    slot = 0x80116C6Cu + count * 28u;
    arguments[0] = slot;
    arguments[1] = (uint32)a9;
    arguments[2] = (uint32)a10;
    arguments[3] = (uint32)a11;
    arguments[4] = (uint32)a12;
    if (a3 == 65535)
    {
        table = 0x80102AE4u + 12u * a1;
        callback = r_u32(table);
        if (callback)
        {
            callback = r_u32(table);
            sf_draft_call(callback, 5, arguments);
        }
    }
    else if (a3 == 65534)
    {
        table = r_u32(0x80130C8Cu) + 12u * a1 + 8u;
        callback = r_u32(table);
        if (callback)
        {
            callback = r_u32(table);
            sf_draft_call(callback, 5, arguments);
        }
    }
    if (a2 == 5)
    {
        if (a4 == 65535)
        {
            w_u32(slot + 12u, (uint32)a9);
            callback = r_u32(0x80102AE0u + 12u * a1);
            return sf_draft_call(callback, 1, arguments);
        }
        if (a4 == 65534)
        {
            callback = r_u32(r_u32(0x80130C8Cu) + 12u * a1 + 4u);
            return sf_draft_call(callback, 1, arguments);
        }
        if (a4 == 65533)
        {
            event.event = (sint16)a1;
            event.mode = (sint16)a2;
            event.subject = a3;
            event.owner = a4;
            callback = r_u32(r_u32(0x80130C8Cu) + 12u * a1 + 4u);
            /* TODO Only the twelve-byte header is written; callback payload use needs review */
            arguments[0] = sf_draft_guest_address(&event);
            return sf_draft_call(callback, 1, arguments);
        }
        if (a4 == 666)
            table = 0x8010330Cu;
        else
        {
            owner_record = r_u32(0x80115CCCu) + 76u * (uint32)a4;
            model_index = r_u32(owner_record);
            model_record = r_u32(0x80116B98u) + 20u * model_index;
            table = 0x801028A4u + 4u * (uint32)r_s16(model_record);
        }
        callback = r_u32(table);
        event.event = (sint16)a1;
        event.mode = (sint16)a2;
        event.subject = a3;
        event.owner = a4;
        event.x = a9;
        event.y = a10;
        event.z = a11;
        event.extra = a12;
        if (callback)
        {
            arguments[0] = sf_draft_guest_address(&event);
            return sf_draft_call(callback, 1, arguments);
        }
        return a2;
    }
    count = r_u32(0x80116C68u);
    for (i = 0; (sint32)i < (sint32)count; ++i)
    {
        uint32 existing = 0x80116C6Cu + 28u * i;
        if (r_u16(existing) == a1 && r_u32(existing + 4u) == (uint32)a3 && r_u32(existing + 8u) == (uint32)a4 && a4 != 65534)
            return (uint32)a4;
    }
    w_u16(slot, (uint16)a1);
    w_u16(slot + 2u, (uint16)a2);
    w_u32(slot + 4u, (uint32)a3);
    w_u32(slot + 8u, (uint32)a4);
    w_u32(slot + 12u, (uint32)a9);
    count = r_u32(0x80116C68u) + 1u;
    w_u32(0x80116C68u, count);
    return count;
}

uint32 sub_80086EA0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80086EA0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _BYTE *a2_view = SF_DRAFT_PTR(_BYTE, a2);
    int *v2;
    int v3;
    int v4;
    uint8 v5;
    int v6;
    int v8;
    __int16 v9;
    _BYTE *v10;

    int v12;
    _WORD *v13;
    _BYTE *i;
    int v15;
    int v16;
    uint16 v17;
    int v18;
    int v19;
    char v20;
    char v21;
    uint8 v22;
    int v24;

    v22 = a1;
    v2 = SF_DRAFT_PTR(int, sub_80083584(a1));
    v3 = 0;
    v4 = (int)sf_draft_guest_address(v2);
    v5 = 0;
    if (!v2)
        return 0xFFFF;
    if ((*SF_DRAFT_PTR(uint32, 0x801169A4u)) >= (unsigned int)v2[2])
        return 0xFFFF;
    v6 = *v2;
    if (!*v2)
        return 0xFFFF;
    v8 = *SF_DRAFT_PTR(__int16, (v6 + 4));
    v9 = *SF_DRAFT_PTR(_WORD, (v6 + 6));
    v12 = sub_800EC8A4(a2);
    v24 = v8;
    if (v12 > 0)
    {
        v13 = SF_DRAFT_PTR(_WORD, (v6 + 6));
        for (i = (_BYTE *)(a2_view); (int)i < (int)&a2_view[v12]; ++i)
        {
            v15 = (uint8)*i;
            v5 += v15;
            if (v15 == 32)
            {
                v8 += 4;
            }
            else
            {
                if ((uint8)*i >= 0x21u)
                    goto LABEL_15;
                if (v15 == 9)
                {
                    v8 += 25;
                }
                else
                {
                    if (v15 != 10)
                    {
                    LABEL_15:
                        v16 = (uint8)*i;
                        *(v13 - 1) = v8;
                        *v13 = (v9);
                        if (v16 == 37)
                        {
                            v8 += sub_8008798C(sf_draft_guest_address(++i), v6);
                            if (*i == 108 || (unsigned int)(uint8)*i - 114 < 2)
                                ++i;
                        }
                        else
                        {
                            v8 += (uint8)sub_800876F0(v16, v6, *SF_DRAFT_PTR(uint8, v4 + 20) >> 7);
                        }
                        ++v3;
                        v13 += 22;
                        v6 += 44;
                        goto LABEL_21;
                    }
                    v8 = v24;
                    v9 += v13[2];
                }
            }
        LABEL_21:
            v10 = (_BYTE *)(a2_view);
        }
    }
    if (v3 < *SF_DRAFT_PTR(uint16, v4 + 12))
    {
        do
        {
            sub_800C7B68((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3324))), v6);
            v17 = *SF_DRAFT_PTR(_WORD, (v4 + 12)) - 1;
            *SF_DRAFT_PTR(_WORD, (v4 + 12)) = v17;
            v6 += 44;
        } while (v3 < v17);
    }
    v18 = *SF_DRAFT_PTR(uint16, v4 + 12);
    if (v18 < v3)
    {
        do
        {
            v19 = *SF_DRAFT_PTR(_DWORD, v4) + 44 * (uint16)v18;
            if (!*SF_DRAFT_PTR(_DWORD, (v19 + 40)))
                *SF_DRAFT_PTR(_DWORD, (v19 + 40)) = sub_800DE5E0(r_u32(SF_DRAFT_GP + 3324u) + 144u, v19);
            if (*SF_DRAFT_PTR(_WORD, (v4 + 12)))
            {
                v20 = *SF_DRAFT_PTR(_BYTE, (v19 - 23));
                v21 = *SF_DRAFT_PTR(_BYTE, (v19 - 22));
                *SF_DRAFT_PTR(_BYTE, (v19 + 20)) = *SF_DRAFT_PTR(_BYTE, (v19 - 24));
                *SF_DRAFT_PTR(_BYTE, (v19 + 21)) = v20;
                *SF_DRAFT_PTR(_BYTE, (v19 + 22)) = v21;
            }
            else
            {
                *SF_DRAFT_PTR(_BYTE, (v19 + 20)) = *SF_DRAFT_PTR(_BYTE, (v4 + 16));
                *SF_DRAFT_PTR(_BYTE, (v19 + 21)) = *SF_DRAFT_PTR(_BYTE, (v4 + 17));
                *SF_DRAFT_PTR(_BYTE, (v19 + 22)) = *SF_DRAFT_PTR(_BYTE, (v4 + 18));
            }
            *SF_DRAFT_PTR(_WORD, (v19 + 28)) = 4096;
            *SF_DRAFT_PTR(_WORD, (v19 + 30)) = 4096;
            LOWORD(v18) = *SF_DRAFT_PTR(_WORD, (v4 + 12)) + 1;
            *SF_DRAFT_PTR(_WORD, (v4 + 12)) = v18;
        } while ((uint16)v18 < v3);
    }
    sub_800835C8(v4);
    *SF_DRAFT_PTR(_BYTE, (v4 + 21)) = v5;
    return (v5 << 8) | v22;
}

uint32 sub_800CB000(sint32 a1)
{
    FUNCTION_MARKER(0x800CB000u, "SCUS_942.40");
    uint32 used = 36u * (uint32)((sint32)(sint16)r_u16(SF_DRAFT_GP + 3290u) + 4);
    uint32 count;
    uint32 index = 0u;
    uint32 record = 0x8012D698u;
    uint32 remaining;
    uint32 block_size;
    sint32 half;
    sint32 capacity;
    uint32 allocation;

    w_u32(SF_DRAFT_GP + 2120u, 0u);
    allocation = sub_800DE414(used);
    count = r_u16(SF_DRAFT_GP + 2020u);
    w_u32(0x800D304Cu, allocation);
    if (count)
    {
        do
        {
            if (index == count - 1u)
                used += (uint32)sub_800CFC08();
            used += (uint32)sub_800CAED0(record, 0);
            count = r_u16(SF_DRAFT_GP + 2020u);
            ++index;
            record += 244u;
        } while (index < count);
    }
    remaining = (uint32)a1 - used - 2048u;
    half = (sint32)remaining >> 1;
    block_size = (uint32)half & 0xFFFFFFF8u;
    w_u32(SF_DRAFT_GP + 2108u, block_size);
    w_u8(SF_DRAFT_GP + 3260u, 1u);
    w_u32(SF_DRAFT_GP + 2112u, block_size);
    capacity = half / 40;
    allocation = sub_800DE414(block_size);
    w_u32(0x801168BCu, allocation);
    allocation = sub_800DE414(r_u32(SF_DRAFT_GP + 2108u));
    w_u32(SF_DRAFT_GP + 3152u, allocation);
    w_u16(SF_DRAFT_GP + 3328u, (uint16)capacity);
    return (uint32)capacity;
}

sint32 sub_800CD90C(uint32 arg0)
{
    uint32 index, rectangle, changed = 0u;
    uint16 height, y;
    FUNCTION_MARKER(0x800CD90Cu, "SCUS_942.40");
    for (index = 0u; index < 3u; ++index)
    {
        rectangle = r_u32(0x8012D6A4u + 244u * index);
        if (arg0 != 0u)
        {
            height = (uint16)r_s16(rectangle + 6u);
            if ((sint16)height >= 161)
            {
                changed = 1u;
                y = r_u16(rectangle + 2u);
                w_u16(rectangle + 6u, (uint16)(height - 4u));
                w_u16(rectangle + 2u, (uint16)(y + 2u));
            }
        }
        else
        {
            sint16 signed_height = r_s16(rectangle + 6u);
            height = r_u16(rectangle + 6u);
            if (signed_height < 161)
                continue;
            do
            {
                w_u16(rectangle + 6u, (uint16)(height - 4u));
                height = r_u16(rectangle + 6u);
                y = r_u16(rectangle + 2u);
                signed_height = r_s16(rectangle + 6u);
                w_u16(rectangle + 2u, (uint16)(y + 2u));
            } while (signed_height >= 161);
        }
    }
    if (arg0 != 0u)
    {
        if (changed != 0u)
            return sub_800C8A9C((sint32)0x800CD90Cu, 2, (sint32)arg0);
        return (sint32)sf_draft_call(arg0, 0u, NULL);
    }
    return (sint32)changed;
}

void sub_800212E4(uint32 arg0)
{
    FUNCTION_MARKER(0x800212E4u, "SCUS_942.40");
    uint32 pending = r_u32(SF_DRAFT_GP + 3448u);
    if (!pending)
    {
        uint32 phase = r_u32(0x80116984u);
        if (phase && phase != 9u)
        {
            if (arg0)
            {
                /* TODO Unknown callback targets retain dispatcher fail-fast handling */
                (void)sf_draft_call(arg0, 0u, NULL);
            }
            return;
        }
    }
    sub_80016834((sint32)0x800212E4u, 1, (sint32)arg0);
}

uint32 sub_80086018(uint32 a1)
{
    FUNCTION_MARKER(0x80086018u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

    int *result;

    result = SF_DRAFT_PTR(int, sub_80083584(a1));
    if (result)
    {
        sub_80086050(sf_draft_guest_address(result));
        return sub_800834D8();
    }
    return sf_draft_guest_address(result);
}
