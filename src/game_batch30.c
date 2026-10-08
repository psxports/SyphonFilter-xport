#include "game_draft.h"
uint32 sf_draft_c818c_unbound_a1_at_15198(uint32 context);
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_800329A4();



/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80014FF8u 0x80014ff8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80014FF8(void)
{
  FUNCTION_MARKER(0x80014FF8u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2; 
  _DWORD *v3; 
  int v4 = SF_DRAFT_GP;
  int v5; 
  int v6; 
  __int16 *v7; 
  int v8; 
  int *v9; 
  uint32 v10; 
  _BYTE v12[40]; 

  ++(*SF_DRAFT_PTR(uint32, 0x80116A88u));
  sub_8008B4E0(1);
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v12);
  sub_8001D5AC();
  sub_8001B040();
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v12);
  memset(&v12[16], 0, 16);
  sub_80015364(4, 5, 65534, 65534, 0, 0, 0, 0);
  sub_80049FDC();
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v12);
  sub_80016E68();
  sub_80016EDC();
  sub_8008B564();
  sub_80029D88();
  v1 = *SF_DRAFT_PTR(_DWORD, (v0 + 16));
  if ( !v1 || v1 == 5 )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (v0 + 44));
    if ( v2 )
    {
      *SF_DRAFT_PTR(_DWORD, (v0 + 44)) = v2 + 1;
      if ( v2 < 61 )
        strcpy(SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x8010D024u)), "GABERR");
      else
        *SF_DRAFT_PTR(_DWORD, (v0 + 44)) = 0;
    }
    v3 = SF_DRAFT_PTR(_DWORD, r_u32(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)));
    if ( v3 && !*v3 && !(*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
    {
      sf_draft_c818c_unbound_a1_at_15198(0x8012D698u);
      *SF_DRAFT_PTR(_DWORD, (v4 + 44)) = 1;
    }
    v5 = 0;
    sub_80016994();
    sub_800156DC(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80116C68u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011775Cu)));
    v6 = (*SF_DRAFT_PTR(uint32, 0x8011775Cu));
    if ( (*SF_DRAFT_PTR(uint32, 0x8011775Cu)) > 0 )
    {
      v7 = SF_DRAFT_PTR(uint16, 0x80117760u);
      do
      {
        v8 = *((_DWORD *)v7 + 2);
        if ( !(*SF_DRAFT_PTR(uint32, 0x8011775Cu)) )
          break;
        if ( v8 == 0xFFFF )
        {
          sf_draft_call((uint32)(SF_DRAFT_PTR(uint32, 0x80102AE0u)[3 * (uint16)*v7]), 1u, (const uint32[]){sf_draft_guest_address(v7)});
        }
        else if ( (unsigned int)(v8 - 65533) >= 2 )
        {
          v9 = v8 == 666 ? SF_DRAFT_PTR(int, 0x8010330Cu) : SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x801028A4u)[*SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))))
                                                                            + (*SF_DRAFT_PTR(uint32, 0x80116B98u))))]);
          v10 = *v9;
          if ( v10 )
            sf_draft_call(v10, 1u, (const uint32[]){sf_draft_guest_address(v7)});
        }
        else
        {
          sf_draft_call(r_u32(12u * (uint16)*v7 + r_u32(0x80130C8Cu) + 4u), 1u, (const uint32[]){sf_draft_guest_address(v7)});
        }
        ++v5;
        v7 += 14;
      }
      while ( v5 < v6 );
    }
    sub_80014B3C();
  }
  sub_8004A0B4();
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v12);
  sub_80094888();
  (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v12);
  return sub_8001AF64();
}

// FUNCTION_MARKER 0x8001B224u 0x8001b224
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001B224(uint32 a1, uint32 a2)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x8001B224u, "SCUS_942.40");
  int v2 = SF_DRAFT_GP;
  __int16 ***v5; 
  int v6; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int result; 
  int v20[4]; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  __int16 v30; 
  __int16 v31; 
  __int16 v32; 
  __int16 v33; 
  __int16 v34; 
  __int16 v35; 
  __int16 v36; 
  __int16 v37; 
  __int16 v38; 

  if ( (*SF_DRAFT_PTR(uint8, 0x8011921Au)) )
  {
    v7 = SF_DRAFT_PTR(_DWORD, r_u32((v2 + 284)));
    if ( v7[595] )
    {
      v8 = v7[610];
      v9 = v7[611];
      v10 = v7[612];
      v20[0] = v7[609];
      v20[1] = v8;
      v20[2] = v9;
      v20[3] = v10;
    }
    else
    {
      v20[0] = v7[609];
    }
    sub_800E0FE8(sf_draft_guest_address(v20), sf_draft_guest_address(&v24));
  }
  else
  {
    v5 = *(__int16 ****)(v2 + 284);
    v30 = ***v5;
    v31 = -(**v5)[1];
    v32 = (**v5)[2];
    v6 = -(uint16)(**v5)[3];
    v33 = -(**v5)[3];
    v34 = (**v5)[4];
    v35 = -(**v5)[5];
    v36 = (**v5)[6];
    v37 = -(**v5)[7];
    v38 = (**v5)[8];
    v29 = v36;
    v27 = v30;
    v28 = (__int16)v6;
    v24 = -v36;
    v25 = 0;
    v26 = v30;
  }
  if ( v25 )
  {
    v25 = 0;
    sub_800C720C(sf_draft_guest_address(&v24), sf_draft_guest_address(&v24));
  }
  v22 = 0;
  v21 = v26;
  v23 = -v24;
  v11 = sub_800C6D4C(v26, *native_a1);
  v12 = *native_a1;
  v21 = v11;
  v22 = sub_800C6D4C(v22, v12);
  v23 = sub_800C6D4C(v23, *native_a1);
  v13 = native_a1[1];
  v14 = sub_800C6D4C(v24, native_a1[2]);
  v15 = native_a1[2];
  v24 = v14;
  v25 = sub_800C6D4C(v25, v15);
  v26 = sub_800C6D4C(v26, native_a1[2]);
  *native_a2 = 0;
  v16 = *native_a2;
  native_a2[1] = 0;
  native_a2[2] = 0;
  *native_a2 = v16 + v21;
  native_a2[1] += v22;
  v17 = native_a2[1];
  native_a2[2] += v23;
  v18 = *native_a2;
  native_a2[1] = v17 + v13;
  *native_a2 = v18 + v24;
  native_a2[1] += v25;
  result = native_a2[2] + v26;
  native_a2[2] = result;
  return result;
}

// FUNCTION_MARKER 0x80020258u 0x80020258
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80020258(void)
{
  FUNCTION_MARKER(0x80020258u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  _DWORD *v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6 = SF_DRAFT_GP;
  _DWORD *v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33[4]; 
  int v34[4]; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  uint32 rotation_matrix[8]; 
  __int16 v44[4]; 

  v1 = SF_DRAFT_PTR(_DWORD, r_u32((v0 + 284)));
  if ( v1[109] )
  {
    v2 = v1[124];
    v3 = v1[125];
    v4 = v1[126];
    v29 = v1[123];
    v30 = v2;
    v31 = v3;
    v32 = v4;
  }
  else
  {
    v29 = v1[123];
  }
  (*SF_DRAFT_PTR(uint8, 0x80119219u)) = 0;
  if ( (*SF_DRAFT_PTR(uint8, 0x80119218u)) && (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 4 && (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 11 && (*SF_DRAFT_PTR(uint32, 0x801191F0u)) != 3 )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 4 || (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 10 || (*SF_DRAFT_PTR(uint32, 0x801191F0u)) == 2 )
      v5 = 2;
    else
      v5 = 1;
    sub_800189FC(*SF_DRAFT_PTR(_DWORD, (v0 + 284)), 0, v5, 1);
    v7 = SF_DRAFT_PTR(_DWORD, r_u32((v6 + 284)));
    v8 = v7[840];
    v9 = v7[841];
    v10 = v7[842];
    v25 = v7[839];
    v26 = v8;
    v27 = v9;
    v28 = v10;
    if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 16)) + 8)) == 8 )
      v26 += 64;
    v33[0] = v29 - v25;
    v33[1] = v30 - v26;
    v11 = SF_DRAFT_PTR(_DWORD, r_u32((v6 + 284)));
    v33[2] = v31 - v27;
    if ( v11[595] )
    {
      v12 = v11[610];
      v13 = v11[611];
      v14 = v11[612];
      v35 = v11[609];
      v36 = v12;
      v37 = v13;
      v38 = v14;
    }
    else
    {
      v35 = v11[609];
    }
    v44[0] = -(__int16)v35;
    v44[1] = v36;
    v44[2] = -(__int16)v37;
    sub_800EBE94(sf_draft_guest_address(v44), sf_draft_guest_address(&rotation_matrix[0]));
    HIWORD(rotation_matrix[0]) = -HIWORD(rotation_matrix[0]);
    v15 = -HIWORD(rotation_matrix[2]);
    HIWORD(rotation_matrix[2]) = -HIWORD(rotation_matrix[2]);
    HIWORD(rotation_matrix[1]) = -HIWORD(rotation_matrix[1]);
    HIWORD(rotation_matrix[3]) = -HIWORD(rotation_matrix[3]);
    v34[0] = (__int16)rotation_matrix[1];
    v34[1] = (__int16)v15;
    v34[2] = ((sint16 *)rotation_matrix)[8];
    if ( (uint8)sub_800959EC(sf_draft_guest_address(&v25), sf_draft_guest_address(v33), sf_draft_guest_address(v34), sf_draft_guest_address(&v29)) )
      (*SF_DRAFT_PTR(uint8, 0x80119219u)) = 1;
  }
  v16 = SF_DRAFT_PTR(_DWORD, r_u32((v0 + 284)));
  rotation_matrix[0] = 1;
  rotation_matrix[1] = 1;
  rotation_matrix[2] = 1;
  v17 = v30;
  v18 = v31;
  v19 = v32;
  v16[839] = v29;
  v16[840] = v17;
  v16[841] = v18;
  v16[842] = v19;
  v20 = SF_DRAFT_PTR(_DWORD, r_u32((v0 + 284)));
  v21 = rotation_matrix[1];
  v22 = rotation_matrix[2];
  v23 = rotation_matrix[3];
  v20[844] = rotation_matrix[0];
  v20[845] = v21;
  v20[846] = v22;
  v20[847] = v23;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v0 + 284)) + 3392)) = 0;
  sub_80018994(*SF_DRAFT_PTR(_DWORD, (v0 + 284)), 1, 3, 1);
  return 1;
}

// FUNCTION_MARKER 0x80054FBCu 0x80054fbc
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80054FBC(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x80054FBCu, "SCUS_942.40");
  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int result; 
  int v13; 
  int v14; 
  char v15; 
  int v16; 
  int v17; 
  int v18; 

  v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  v5 = 1;
  if ( (v4 & 0x80) == 0 )
    --*SF_DRAFT_PTR(_WORD, (a2 + 36));
  if ( !*SF_DRAFT_PTR(_WORD, (a2 + 36)) )
    return 0;
  if ( *SF_DRAFT_PTR(__int16, (a2 + 36)) < (int)*SF_DRAFT_PTR(uint8, (a1 + 34)) )
    *SF_DRAFT_PTR(_DWORD, (a2 + 32)) -= *SF_DRAFT_PTR(_DWORD, a1);
  if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x20000) != 0 )
  {
    v6 = SF_DRAFT_PTR(int, r_u32((*SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 20)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12)));
    *SF_DRAFT_PTR(_DWORD, a2) += v6[4] >> 12;
    *SF_DRAFT_PTR(_DWORD, (a2 + 4)) += v6[5] >> 12;
    *SF_DRAFT_PTR(_DWORD, (a2 + 8)) += v6[6] >> 12;
  }
  v7 = *SF_DRAFT_PTR(_DWORD, (a2 + 20));
  v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
  if ( v7 < 0 )
    v9 = v8 - (-v7 >> 12);
  else
    v9 = v8 + (v7 >> 12);
  *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = v9;
  v10 = *SF_DRAFT_PTR(_DWORD, (a2 + 8)) + *SF_DRAFT_PTR(_DWORD, (a2 + 24));
  *SF_DRAFT_PTR(_DWORD, a2) += *SF_DRAFT_PTR(_DWORD, (a2 + 16));
  *SF_DRAFT_PTR(_DWORD, (a2 + 8)) = v10;
  if ( (v4 & 0x4000) != 0 )
  {
    *SF_DRAFT_PTR(_DWORD, a2) += (*SF_DRAFT_PTR(uint32, 0x8012FA20u)) >> 5;
    *SF_DRAFT_PTR(_DWORD, (a2 + 8)) += (*SF_DRAFT_PTR(uint32, 0x8012FA28u)) >> 5;
  }
  *SF_DRAFT_PTR(_DWORD, (a2 + 20)) += *SF_DRAFT_PTR(__int16, (a1 + 26));
  if ( (v4 & 0x10) != 0 )
  {
    v11 = *SF_DRAFT_PTR(_DWORD, (a2 + 24)) - ((*SF_DRAFT_PTR(_DWORD, (a2 + 24)) + 1) >> 4);
    *SF_DRAFT_PTR(_DWORD, (a2 + 16)) -= (*SF_DRAFT_PTR(_DWORD, (a2 + 16)) + 1) >> 4;
    *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = v11;
  }
  result = 1;
  if ( (v4 & 0x20) == 0 )
  {
    v13 = *SF_DRAFT_PTR(__int16, (a1 + 28));
    if ( *SF_DRAFT_PTR(sint32, (a2 + 4)) >= v13 )
      return v5;
    if ( (v4 & 0x80) == 0 )
    {
      if ( (v4 & 0x40) != 0 )
      {
        v14 = *SF_DRAFT_PTR(uint16, (a2 + 36)) << 16;
        *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = (*SF_DRAFT_PTR(int, (a2 + 16)) >> 1) + (sub_800EC8F4() & (v14 >> 16)) - (v14 >> 17);
        *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = (*SF_DRAFT_PTR(int, (a2 + 24)) >> 1) + (sub_800EC8F4() & (v14 >> 16)) - (v14 >> 17);
        v15 = sub_800EC8F4();
        v16 = sub_800EC8F4() & (v14 >> 17);
        v17 = v14 >> 18;
        v18 = *SF_DRAFT_PTR(int, (a2 + 20)) >> ((v15 & 1) + 1);
        if ( v18 < 0 )
          v18 = -v18;
        *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = v18 + v16 - v17;
        *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = *SF_DRAFT_PTR(__int16, (a1 + 28));
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (a2 + 4)) = v13;
        *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = 0;
        *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = 0;
        *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = 0;
      }
      return v5;
    }
    return 0;
  }
  return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage2(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage5(sint32 *output1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage6(sint32 *output1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage8(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage9(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage10(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage11(sint32 *output1, sint32 *output2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage12(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800CEDA4_stage13(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8);
// FUNCTION_MARKER 0x800CEDA4u 0x800ceda4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CEDA4(uint32 A0)
{
  uint16 *native_A0 = SF_DRAFT_PTR(uint16, A0);
  FUNCTION_MARKER(0x800CEDA4u, "SCUS_942.40");
  sint32 temporary_t8; /* TODO Geometry value type */
  sint32 temporary_t7; /* TODO Geometry value type */
  sint32 temporary_t6; /* TODO Geometry value type */
  sint32 temporary_t5; /* TODO Geometry value type */
  sint32 temporary_t4; /* TODO Geometry value type */
  sint32 temporary_t3; /* TODO Geometry value type */
  sint32 temporary_t2; /* TODO Geometry value type */
  sint32 temporary_t1; /* TODO Geometry value type */
  sint32 temporary_t0; /* TODO Geometry value type */
  sint32 temporary_s7; /* TODO Geometry value type */
  sint32 temporary_s6; /* TODO Geometry value type */
  sint32 temporary_s5; /* TODO Geometry value type */
  sint32 temporary_s4; /* TODO Geometry value type */
  sint32 temporary_s3; /* TODO Geometry value type */
  sint32 temporary_s2; /* TODO Geometry value type */
  sint32 temporary_s1; /* TODO Geometry value type */
  sint32 temporary_s0; /* TODO Geometry value type */
  temporary_t0 = (*SF_DRAFT_PTR(uint32, 0x8012DB98u));
  temporary_t1 = (*SF_DRAFT_PTR(uint32, 0x8012DB9Cu));
  temporary_t2 = (*SF_DRAFT_PTR(uint32, 0x8012DBA0u));
  temporary_t3 = (*SF_DRAFT_PTR(uint32, 0x8012DBA4u));
  temporary_t4 = (*SF_DRAFT_PTR(uint32, 0x8012DBA8u));
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage1(temporary_t0, temporary_t1, temporary_t2, temporary_t3, temporary_t4);
  temporary_t2 = *((_DWORD *)native_A0 + 3);
  temporary_t0 = *native_A0 | *((_DWORD *)native_A0 + 1) & 0xFFFF0000;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage2(temporary_t0, temporary_t2);
  temporary_t2 = (__int16)native_A0[7];
  temporary_t0 = native_A0[1] | (*((_DWORD *)native_A0 + 2) << 16);
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage3(&temporary_t3, &temporary_t4, &temporary_t5, temporary_t0, temporary_t2);
  temporary_t2 = *((_DWORD *)native_A0 + 4);
  temporary_t0 = native_A0[2] | *((_DWORD *)native_A0 + 2) & 0xFFFF0000;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage4(&temporary_t6, &temporary_t7, &temporary_t8, temporary_t0, temporary_t2);
  temporary_s0 = (temporary_t6 << 16) | (uint16)temporary_t3;
  temporary_s3 = (uint16)temporary_t5 | (temporary_t8 << 16);
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage5(&temporary_t0, &temporary_t1);
  temporary_s1 = (uint16)temporary_t0 | (temporary_t4 << 16);
  temporary_s2 = (temporary_t1 << 16) | (uint16)temporary_t7;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage6(&temporary_s4, temporary_s0, temporary_s1, temporary_s2, temporary_s3);
  temporary_t0 = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
  temporary_t1 = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
  temporary_t2 = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
  temporary_t3 = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
  temporary_t4 = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage7(temporary_t0, temporary_t1, temporary_t2, temporary_t3, temporary_t4, (sf_draft_guest_address(native_A0) + 0x14), (sf_draft_guest_address(native_A0) + 0x18), (sf_draft_guest_address(native_A0) + 0x1C), &temporary_s5, &temporary_s6, &temporary_s7);
  temporary_t2 = *((_DWORD *)native_A0 + 3);
  temporary_t0 = *native_A0 | *((_DWORD *)native_A0 + 1) & 0xFFFF0000;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage8(temporary_t0, temporary_t2);
  temporary_t2 = (__int16)native_A0[7];
  temporary_t0 = native_A0[1] | (*((_DWORD *)native_A0 + 2) << 16);
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage9(&temporary_t3, &temporary_t4, &temporary_t5, temporary_t0, temporary_t2);
  temporary_t2 = *((_DWORD *)native_A0 + 4);
  temporary_t0 = native_A0[2] | *((_DWORD *)native_A0 + 2) & 0xFFFF0000;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage10(&temporary_t6, &temporary_t7, &temporary_t8, temporary_t0, temporary_t2);
  temporary_s0 = (temporary_t6 << 16) | (uint16)temporary_t3;
  temporary_s3 = (uint16)temporary_t5 | (temporary_t8 << 16);
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage11(&temporary_t0, &temporary_t1);
  temporary_s1 = (uint16)temporary_t0 | (temporary_t4 << 16);
  temporary_s2 = (temporary_t1 << 16) | (uint16)temporary_t7;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage12(&temporary_s4);
  temporary_s5 = temporary_s5 + (*SF_DRAFT_PTR(uint32, 0x80130CECu));
  temporary_s6 = temporary_s6 + (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
  temporary_s7 = temporary_s7 + (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800CEDA4_stage13(temporary_s0, temporary_s1, temporary_s2, temporary_s3, temporary_s4, temporary_s5, temporary_s6, temporary_s7);
}

// FUNCTION_MARKER 0x8003320Cu 0x8003320c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8003320C(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x8003320Cu, "SCUS_942.40");
  __int16 *v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  __int16 v9; 
  int v10; 
  unsigned int result; 

  v3 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
  v4 = *v3;
  if ( *SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2 )
  {
    v6 = -1;
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x1000000) != 0 )
    {
      v7 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v7 + 24)) + 8)) > 0 )
      {
        v8 = *SF_DRAFT_PTR(__int16, (v7 + 2));
        if ( v8 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 55 )
          v6 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
      }
    }
    if ( v6 < 0 )
      LOWORD(v6) = sub_80032340(a1);
    *v3 = v6;
  }
  else
  {
    if ( a2 && (v4 >= 0 || a2 == 2) )
    {
      if ( a2 == 1 )
      {
        v9 = sub_800329A4(a1);
        v10 = *((_DWORD *)v3 + 1);
        *v3 = v9;
        *((_DWORD *)v3 + 1) = v10 | 8;
      }
      else if ( a2 == 2 )
      {
        *v3 = -1;
        (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
      }
    }
    else if ( (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && v4 >= 0 )
    {
      if ( !(uint8)sub_80031F2C(a1, *v3, 0) )
        *v3 = -1;
    }
    else
    {
      *v3 = sub_80032340(a1);
    }
    if ( (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 18 || (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) == 21 && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) )
    {
      sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
    }
    else if ( (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x2000000) == 0 && !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) )
    {
      if ( *SF_DRAFT_PTR(__int16, r_u32((a1 + 20))) >= 0 && (uint8)sub_80031F2C(a1, *v3, 0) )
      {
        sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 43);
      }
      else
      {
        *v3 = -1;
        if ( a2 != 2 )
          sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
        (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 0;
      }
    }
    sub_80031E7C();
  }
  result = *v3;
  if ( result != v4 )
    return sub_80031918(sf_draft_guest_address(v3));
  return result;
}

// FUNCTION_MARKER 0x8006F8C0u 0x8006f8c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006F8C0(sint32 a1)
{
  FUNCTION_MARKER(0x8006F8C0u, "SCUS_942.40");
  int v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  _DWORD *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  _DWORD *v17; 
  int v18; 
  _DWORD *v19; 
  int result; 
  int v21; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 404));
  *SF_DRAFT_PTR(_DWORD, (v2 + 404)) = v3 & 0xFFFFFDFF;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x400u;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x800u;
  v4 = (v3 >> 9) & 1;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x200000u;
  v5 = (v3 >> 19) & 1;
  v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  v7 = (v3 >> 21) & 1;
  v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 408)) + 304));
  v21 = *SF_DRAFT_PTR(_DWORD, (v6 + 272));
  if ( !a1 || (v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 12))) == 0 || (v10 = SF_DRAFT_PTR(_DWORD, r_u32((v9 + 416)))) == 0 || (v11 = 0, *v10 != 1) )
  {
    v11 = 0;
    if ( v8 != -2147483647 )
      v11 = v8 - v21;
  }
  if ( (_BYTE)v4 )
    goto LABEL_11;
  v12 = (uint8)v7;
  if ( v11 >= 705 )
  {
    if ( !(_BYTE)v7 )
      goto LABEL_16;
    v12 = (uint8)v7;
    if ( !(_BYTE)v5 )
    {
LABEL_11:
      v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
      v14 = *SF_DRAFT_PTR(_DWORD, (v13 + 404));
      if ( (v14 & 0x100000) != 0 )
      {
        *SF_DRAFT_PTR(_DWORD, (v13 + 404)) = v14 | 0x400;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (v13 + 404)) = v14 | 0x200000;
        if ( v11 >= 1297 )
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 0x200u;
      }
      goto LABEL_25;
    }
  }
  if ( !v12 )
  {
LABEL_16:
    if ( *SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 36)) >= -73626 )
      goto LABEL_25;
  }
  v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  v16 = *SF_DRAFT_PTR(_DWORD, (v15 + 404));
  if ( (v16 & 0x100000) != 0 || a1 && v15 && (v17 = SF_DRAFT_PTR(_DWORD, r_u32((v15 + 416)))) != 0 && *v17 == 1 )
  {
    if ( v11 >= 289 )
      *SF_DRAFT_PTR(_DWORD, (v15 + 404)) = v16 | 0x800;
  }
  else
  {
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 0x200000u;
  }
LABEL_25:
  v18 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( (*SF_DRAFT_PTR(_DWORD, (v18 + 404)) & 0x100000) != 0
    || a1 && v18 && (v19 = SF_DRAFT_PTR(_DWORD, r_u32((v18 + 416)))) != 0 && *v19 == 1
    || (result = 1, v8 == -2147483647) )
  {
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 304)) = v21;
    return 1;
  }
  return result;
}

