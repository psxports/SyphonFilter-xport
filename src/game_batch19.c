#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
static uint32 sf_draft_missing_padding_80088770(uint32 offset)
{
    fprintf(stderr, "TODO 80088770 original unwritten padding +%X\n", offset);
    abort();
}

sint32 sub_8013D830();
sint32 sub_8013D8A0();
sint32 sub_8013E01C();
sint32 sub_8013E154();
sint32 sub_8013E4E0();
sint32 sub_8013E7BC();
sint32 sub_8013E83C();

void sf_draft_missing_gte_800C733C_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800C733C_2(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800C733C_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800C733C_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800C733C_5(sint32 *output1, sint32 *output2, sint32 *output3);
void sf_draft_missing_gte_800C733C_6(sint32 input1, sint32 input2, sint32 input3, sint32 *output4, sint32 *output5, sint32 *output6, sint32 input7, sint32 input8, sint32 input9, sint32 *output10, sint32 *output11, sint32 *output12);
void sf_draft_missing_gte_800D2168_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D2168_10(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D2168_11(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800D2168_12(sint32 *output1);
void sf_draft_missing_gte_800D2168_13(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8);
void sf_draft_missing_gte_800D2168_2(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800D2168_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D2168_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D2168_5(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800D2168_6(sint32 *output1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D2168_7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11);
void sf_draft_missing_gte_800D2168_8(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800D2168_9(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
/* TODO Resolve external dependency signatures */
uint32 sub_80087E74();
sint32 sub_800FDF94(uint32 header, sint16 bank, uint32 spu_base);
sint32 sub_800FE3E4(uint32 source, uint16 bank);
sint32 sub_800FE594(uint32 source, uint32 bytes, sint16 bank);

void sub_80088770(sint32 a1)
{
    FUNCTION_MARKER(0x80088770u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  _DWORD *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  bool v9; // dc
  int v10; 
  char v11; 
  _DWORD *v12; 
  int v13; 
  int v14; 
  int v16; 
  int v17; 
  int v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  int v24; 

  int v26; 
  uint32 v27; 
  uint32 v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int direction[4]; 

  if ( !a1 )
    return;
  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( !v2 )
    return;
  v3 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v2 + 416));
  if ( !v3 )
    return;
  if ( *v3 == 1 )
  {
    *SF_DRAFT_PTR(_DWORD, (v2 + 404)) &= ~0x100u;
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 404));
    v6 = -524289;
  }
  else
  {
    v7 = *SF_DRAFT_PTR(_DWORD, (v2 + 404));
    if ( (v7 & 4) != 0 )
      *SF_DRAFT_PTR(_DWORD, (v2 + 404)) = v7 & 0xFFFFFEFF;
    v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 404));
    if ( (v6 & 0x100000) == 0 )
      goto LABEL_11;
    v5 = -524289;
  }
  *SF_DRAFT_PTR(_DWORD, (v4 + 404)) = v6 & v5;
LABEL_11:
  sub_8008836C(a1, sf_draft_guest_address(&v26), sf_draft_guest_address(&v27), sf_draft_guest_address(&v28), sf_draft_guest_address(&v29));
  v8 = SF_DRAFT_PTR(int, v27);
  v9 = v27 == 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416)) + 60)) = v27;
  if ( v9 || *v8 != 3 )
  {
    v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    v11 = *SF_DRAFT_PTR(_BYTE, (v10 + 11)) & 0x7F;
  }
  else
  {
    v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    v11 = *SF_DRAFT_PTR(_BYTE, (v10 + 11)) | 0x80;
  }
  *SF_DRAFT_PTR(_BYTE, (v10 + 11)) = v11;
  if ( v27 )
  {
    v30 = r_s16(r_u32(v27 + 20u));
    v31 = r_s16(r_u32(v27 + 20u) + 2u);
    v32 = r_s16(r_u32(v27 + 20u) + 4u);
    direction[0] = r_s16(r_u32(v27 + 8u));
    direction[1] = r_s16(r_u32(v27 + 8u) + 2u);
    direction[2] = r_s16(r_u32(v27 + 8u) + 4u);
    v12 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 12));
    v13 = v31;
    v14 = v32;
    v12[80] = v30;
    v12[81] = v13;
    v12[82] = v14;
    v12[83] = sf_draft_missing_padding_80088770(0x34u);
    v16 = direction[1];
    v17 = direction[2];
    v12[84] = direction[0];
    v12[85] = v16;
    v12[86] = v17;
    v12[87] = sf_draft_missing_padding_80088770(0x44u);
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 308)) = sub_8009498C(sf_draft_guest_address(direction), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 312));
  }
  else
  {
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 308)) = 0;
  }
  if ( (_BYTE)v26 && v29 < 65 && r_s16(v27 + 14u) < 2896 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 4) != 0 )
  {
    v19 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( **(_DWORD **)(v19 + 416) != 1 )
    {
      v20 = *SF_DRAFT_PTR(_DWORD, (v19 + 404));
      if ( (v20 & 0x100000) == 0 )
      {
        *SF_DRAFT_PTR(_DWORD, (v19 + 404)) = v20 & 0xFFFFFEFF;
        v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v22 = *SF_DRAFT_PTR(_DWORD, (v21 + 404)) | 0x80000;
LABEL_30:
        *SF_DRAFT_PTR(_DWORD, (v21 + 404)) = v22;
        return;
      }
    }
  }
  if ( !(_BYTE)v26 || v29 >= 65 )
  {
    v23 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( **(_DWORD **)(v23 + 416) != 1 )
    {
      v24 = *SF_DRAFT_PTR(_DWORD, (v23 + 404));
      if ( (v24 & 4) == 0 )
      {
        *SF_DRAFT_PTR(_DWORD, (v23 + 404)) = v24 | 0x100;
        v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v22 = *SF_DRAFT_PTR(_DWORD, (v21 + 404)) & 0xFFF7FFFF;
        goto LABEL_30;
      }
    }
  }
}

void sub_8006B2D4(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006B2D4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v4; 

  int v6; 
  int *v7; 
  int v8; 

  int v10; 
  int v11; 

  unsigned int v13; 

  _DWORD *v16 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP); 
  _DWORD *v17; 
  _DWORD *v18; 
  int v19; 
  int v20; 

  char v27[32]; 
  _DWORD *v28; 
  int v29; 
  int v30; 
  int v31[3]; 

  v4 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      do
        v6 = 3;
      while ( sub_800DFB74(a1, a2, sf_draft_guest_address(&v28)) );
      v7 = &(*SF_DRAFT_PTR(uint32, 0x8011E8ACu));
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2944)) = *v28 + 4 * *SF_DRAFT_PTR(_DWORD, *v28);
      do
      {
        *v7 = 0;
        --v6;
        --v7;
      }
      while ( v6 >= 0 );
      v8 = sub_800DFCD0(sf_draft_guest_address(v28));
      if ( v8 >= 10 )
        sub_800DDC34(1, 0, 0x80012174u, 449);
      v10 = 0;
      if ( v8 <= 0 )
        break;
      v11 = 0;
      while ( 1 )
      {
        sub_800DFCF4(sf_draft_guest_address(v28), v11, sf_draft_guest_address(&v29));
        sub_800DFF9C(sf_draft_guest_address(v28), v10, sf_draft_guest_address(&v30));
        sub_800EC894(sf_draft_guest_address(v27), v30);
        v27[(uint8)sub_800EC8A4(sf_draft_guest_address(v27)) - 1] = 72;
        sub_800DFD64((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 948))), sf_draft_guest_address(v27), sf_draft_guest_address(v31));
        if ( sub_800EC884(v30, 0x80116028u) )
        {
          if ( sub_800EC884(v30, 0x80116030u) )
          {
            if ( sub_800EC884(v30, 0x80116038u) )
            {
              if ( !sub_800EC884(v30, 0x80012180u) )
                v4 = 3;
            }
            else
            {
              v4 = 2;
            }
          }
          else
          {
            v4 = 0;
          }
        }
        else
        {
          v4 = 1;
        }
        v13 = 0;
        SF_DRAFT_PTR(uint32, 0x8011E8A0u)[v4] = sub_800BED04((v31[0]), v29);
        do
        {
          if ( sub_800BF02C() << 16 )
            break;
        }
        while ( v13++ < 0x61A8 );
        ++v10;
        if ( v13 >= 0x61A8 )
          break;
        v11 = v10;
        if ( v10 >= v8 )
          goto LABEL_22;
      }
    }
LABEL_22:
    sub_800DE4A4((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2944))));
    if ( !sub_800DFD64((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 948))), 0x80116040u, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x801167F4u)))) )
      sub_800BF158((v16[739]));
    v17 = SF_DRAFT_PTR(_DWORD, v16[736]);
    if ( *v17 )
    {
      v18 = &v17[*v17];
      v16[738] = sf_draft_guest_address(v18);
      sub_800BF158(sf_draft_guest_address(v18));
    }
    else
    {
      v16[738] = 0;
    }
    sub_800BF2A0(3, 5);
    v19 = 0;
    sub_800C2C38();
    v20 = 0;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 956)) = 1;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2964)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2968)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2972)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2976)) = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2980)) = -1;
    do
    {
      SF_DRAFT_PTR(uint32, 0x8011E8C8u)[v20] = -1;
      SF_DRAFT_PTR(uint32, 0x8011E8CCu)[v20] = -1;
      SF_DRAFT_PTR(uint32, 0x8011E8D0u)[v20] = 0;
      ++v19;
      v20 += 3;
    }
    while ( v19 < 10 );
    sub_8006AFD8();
    sub_800C3814(0, (*SF_DRAFT_PTR(char, (SF_DRAFT_GP + 952))));
    sub_800C3814(1, (*SF_DRAFT_PTR(char, (SF_DRAFT_GP + 953))));
    sub_800C3814(2, (*SF_DRAFT_PTR(char, (SF_DRAFT_GP + 954))));
    sub_800C3A8C(*(uint8 *)(SF_DRAFT_GP + 955));
    sub_8006CF48(1);
    sub_8006C824();
  }
}

sint32 sub_80087208(uint32 a1)
{
    FUNCTION_MARKER(0x80087208u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);

  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  _BYTE *v12; 
  int v13; 
  int v14; 
  _BYTE *v15; 
  uint8 v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  int v20; 
  unsigned int v21; 
  char v22; 
  char v23; 
  uint8 v24; 
  unsigned int v25; 
  char v26; 
  unsigned int v27; 
  unsigned int v28; 
  uint8 *v29; 
  int result; 

  v3 = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) - a1_view[1];
  if ( (a1_view[5] & 2) == 0 )
  {
    v4 = v3 * *((uint16 *)a1_view + 11);
    v5 = v4 >> 12;
    if ( v4 < 0 )
      v5 = -(-v4 >> 12);
    v3 = v5;
  }
  v6 = *((uint16 *)a1_view + 6);
  if ( v6 >= v3 )
  {
    v6 = v3;
    if ( *((_WORD *)a1_view + 6) )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x801169A4u)) != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1228)) && ((a1_view[5] & 4) != 0 || (*SF_DRAFT_PTR(uint32, 0x80115C78u)) == 4) )
      {
        v7 = (*SF_DRAFT_PTR(uint32, 0x80115C78u));
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1228)) = (*SF_DRAFT_PTR(uint32, 0x801169A4u));
        if ( v7 == 7 )
          v8 = 3;
        else
          v8 = 4;
        sub_8006BC98(5, v8, 0, 0);
        v6 = v3;
      }
    }
  }
  if ( v6 + (*((uint16 *)a1_view + 11) >> 12) >= 0 && v6 < *((uint16 *)a1_view + 6) )
  {
    v9 = 1;
    if ( (a1_view[5] & 2) == 0 )
      v9 = *((uint16 *)a1_view + 11) >> 12;
    v10 = 0;
    if ( v9 )
    {
      do
      {
        v11 = v6 + v10;
        if ( v6 + v10 >= *((uint16 *)a1_view + 6) )
          break;
        if ( v11 >= 0 )
        {
          v12 = (_BYTE *)(*a1_view + 44 * v11);
          v12[20] = -1;
          v12[21] = -1;
          v12[22] = -1;
        }
        ++v10;
      }
      while ( v10 < v9 );
    }
  }
  v13 = *a1_view;
  v14 = 0;
  if ( v6 > 0 )
  {
    v15 = SF_DRAFT_PTR(_BYTE, (v13 + 22));
    while ( 1 )
    {
      v16 = *(v15 - 2);
      v17 = *((uint8 *)a1_view + 16);
      v18 = (int)(v17 - v16) / 4;
      v19 = *((uint8 *)a1_view + 17) - (uint8)*(v15 - 1);
      v20 = *((uint8 *)a1_view + 18) - (uint8)*v15;
      v21 = (unsigned int)(v19 + (v19 < 0 ? 3 : 0)) >> 2;
      if ( (_BYTE)v18 )
        break;
      v22 = v16 + 1;
      if ( v16 < v17 )
        goto LABEL_29;
      v22 = v16 - 1;
      if ( v17 < v16 )
        goto LABEL_29;
LABEL_30:
      if ( (_BYTE)v21 )
      {
        v23 = *(v15 - 1) + v21;
LABEL_34:
        *(v15 - 1) = v23;
        goto LABEL_35;
      }
      v24 = *(v15 - 1);
      v25 = *((uint8 *)a1_view + 17);
      v23 = v24 + 1;
      if ( v24 < v25 )
        goto LABEL_34;
      v23 = v24 - 1;
      if ( v25 < v24 )
        goto LABEL_34;
LABEL_35:
      if ( (uint8)(v20 / 4) )
      {
        v26 = *v15 + v20 / 4;
      }
      else
      {
        v27 = *((uint8 *)a1_view + 18);
        v28 = (uint8)*v15;
        v26 = *v15 + 1;
        if ( v28 >= v27 )
        {
          v26 = *v15 - 1;
          if ( v27 >= v28 )
            goto LABEL_40;
        }
      }
      *v15 = (v26);
LABEL_40:
      ++v14;
      v15 += 44;
      v13 += 44;
      if ( v14 >= v6 )
        goto LABEL_41;
    }
    v22 = v16 + v18;
LABEL_29:
    *(v15 - 2) = v22;
    goto LABEL_30;
  }
LABEL_41:
  v29 = (uint8 *)(v13 - 44);
  if ( v6 != *((uint16 *)a1_view + 6) )
    return 1;
  result = 1;
  if ( v29[20] == *((uint8 *)a1_view + 16) )
  {
    result = 1;
    if ( v29[22] == *((uint8 *)a1_view + 17) )
    {
      result = 0;
      if ( v29[21] != *((uint8 *)a1_view + 18) )
        return 1;
    }
  }
  return result;
}

sint32 sub_800674E4(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800674E4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
  char v8; 
  int v9; 
  int v10; 

  int v12; 
  char v13; 
  int v14; 

  int v16; 

  int v18; 

  int v20; 

  int v22; 
  int v23; 
  _DWORD *v24 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP); 
  int v25; 
  int v26; 
  bool v27; // dc
  int v28; 
  int v29; 
  int v30; 
  int v31; 
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

  v8 = sub_800EC8F4();
  v40 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 4));
  v41 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 10));
  v9 = v8 & 3;
  v10 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 16));
  v41 = -v41;
  v12 = *(uint8 *)(SF_DRAFT_GP + 940);
  v13 = 0;
  v42 = v10;
  if ( v12 )
  {
    v14 = sub_800EA474(455);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2920)) = v14;
    v16 = sub_800EA474(455);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2924)) = v16;
    v18 = sub_800EA474(739);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2928)) = v18;
    v20 = sub_800EA474(739);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2932)) = v20;
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 940)) = 0;
  }
  v22 = a2_view[2];
  v23 = a2_view[3];
  v33 = *a2_view;
  v35 = v22;
  v36 = v23;
  v34 = 0;
  sub_800C720C(sf_draft_guest_address(&v33), sf_draft_guest_address(&v33));
  v41 = 0;
  sub_800C720C(sf_draft_guest_address(&v40), sf_draft_guest_address(&v40));
  v38 = 0;
  v39 = -v40;
  v37 = v42;
  *a4_view = 4;
  v25 = v33 * v37 + v34 * v38 + v35 * v39;
  v43 = v25;
  if ( v25 < 0 )
    v26 = -(-v25 >> 12);
  else
    v26 = v25 >> 12;
  v27 = v26 < (sint32)v24[731];
  v43 = v26;
  if ( v27 )
  {
    if ( (sint32)(0u - v24[730]) >= v26 )
      v13 = 1;
  }
  else
  {
    v13 = 2;
  }
  v28 = v33 * v40 + v34 * v41 + v35 * v42;
  v43 = v28;
  if ( v28 < 0 )
    v29 = -(-v28 >> 12);
  else
    v29 = v28 >> 12;
  v27 = v29 < (sint32)v24[733];
  v43 = v29;
  if ( v27 )
  {
    v30 = v13 & 2;
    if ( (sint32)(0u - v24[732]) < v29 )
      goto LABEL_18;
    v13 |= 4u;
  }
  else
  {
    v13 |= 8u;
  }
  v30 = v13 & 2;
LABEL_18:
  if ( v30 )
  {
    *a3_view = (*SF_DRAFT_PTR(uint32, 0x8010CE58u));
    v31 = 6;
    if ( (v9 & 1) != 0 )
      return 5;
    return v31;
  }
  if ( (v13 & 1) != 0 )
  {
    *a3_view = (*SF_DRAFT_PTR(uint32, 0x8010CE68u));
    v31 = 12;
    if ( (v9 & 1) != 0 )
      return 11;
    return v31;
  }
  if ( (v13 & 0xC) != 0 )
  {
    *a3_view = (*SF_DRAFT_PTR(uint32, 0x8010CE78u));
    *a4_view = 2;
    v31 = 13;
    if ( (v9 & 1) != 0 )
      return 14;
    return v31;
  }
  *a3_view = (*SF_DRAFT_PTR(uint32, 0x8010CE48u));
  return SF_DRAFT_PTR(uint32, 0x8010CE48u)[v9];
}

sint32 sub_800CBF44(uint32 a1, uint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800CBF44u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v7; 
  int *v8; 
  int v9; 
  int i; 
  int v11; 
  int *v12; 
  _DWORD *v13; 
  int v14; 
  int v15; 
  int *v16; 
  int v17; 
  int v18; 
  int *v19; 
  int v20; 
  bool v21; // dc
  int v22; 
  int v23; 
  int v24; 
  int result; 
  __int16 v26[10]; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 

  v31 = a1_view[3];
  *(_DWORD *)(a1_view[4] + 32) = sf_draft_guest_address(a2_view);
  *(_DWORD *)(a1_view[4] + 40) |= 0x400000u;
  a1_view[6] = 0;
  a1_view[9] = 0;
  v30 = a3;
  if ( !a4 || !a2_view[4] )
  {
    v8 = SF_DRAFT_PTR(int, sub_800DE414(8));
    v7 = sub_800DE414(60 * a4);
    v9 = v7;
    if ( a4 )
    {
      *v8 = (a4);
      v8[1] = v7;
      a2_view[4] = sf_draft_guest_address(v8);
    }
    for ( i = 0; ; ++i )
    {
      if ( a4 )
      {
        if ( i >= a4 )
          goto LABEL_25;
      }
      else if ( i > 0 )
      {
        goto LABEL_25;
      }
      v11 = sub_800DE414((4 * a2_view[1]));
      v12 = SF_DRAFT_PTR(int, v11);
      if ( a4 )
      {
        v13 = SF_DRAFT_PTR(_DWORD, (v9 + 60 * i));
        *v13 = 0;
        v13[1] = v11;
        v13[2] = sub_800DE414((8 * a2_view[1]));
      }
      else
      {
        a1_view[6] = v11;
        a1_view[9] = sub_800DE414((8 * a2_view[1]));
      }
      v14 = 0;
      v15 = (int)&a2_view[a2_view[2] + 9];
      if ( (int)a2_view[1] > 0 )
      {
        v16 = v12;
        do
        {
          v26[0] = *SF_DRAFT_PTR(_WORD, (v15 + 16));
          v26[3] = *SF_DRAFT_PTR(_WORD, (v15 + 18));
          v26[6] = *SF_DRAFT_PTR(_WORD, (v15 + 20));
          v26[1] = *SF_DRAFT_PTR(_WORD, (v15 + 22));
          v26[4] = *SF_DRAFT_PTR(_WORD, (v15 + 24));
          v26[7] = *SF_DRAFT_PTR(_WORD, (v15 + 26));
          v26[2] = *SF_DRAFT_PTR(_WORD, (v15 + 28));
          v26[5] = *SF_DRAFT_PTR(_WORD, (v15 + 30));
          v26[8] = *SF_DRAFT_PTR(_WORD, (v15 + 32));
          v27 = *SF_DRAFT_PTR(__int16, (v15 + 34));
          v28 = *SF_DRAFT_PTR(__int16, (v15 + 36));
          ++v14;
          v29 = *SF_DRAFT_PTR(__int16, (v15 + 38));
          sub_800DB5EC(sf_draft_guest_address(v16), 0);
          *SF_DRAFT_PTR(_DWORD, (v15 + 60)) = *v16;
          v17 = *v16++;
          sub_800DC3D0(v17, sf_draft_guest_address(v26));
          v15 += *SF_DRAFT_PTR(_DWORD, v15);
        }
        while ( v14 < (sint32)a2_view[1] );
        v14 = 0;
      }
      v18 = (int)&a2_view[a2_view[2] + 9];
      if ( (int)a2_view[1] > 0 )
      {
        v19 = v12;
        do
        {
          v20 = *SF_DRAFT_PTR(__int16, (v18 + 56));
          v21 = v20 < 0;
          v22 = v20;
          if ( v21 )
            v23 = v31;
          else
            v23 = v12[v22];
          v24 = *v19++;
          ++v14;
          sub_800CBF10(v24, v23);
          v18 += *SF_DRAFT_PTR(_DWORD, v18);
        }
        while ( v14 < (sint32)a2_view[1] );
      }
    }
  }
  a1_view[6] = 0;
  a1_view[9] = 0;
LABEL_25:
  result = a1_view[4];
  *SF_DRAFT_PTR(_DWORD, (result + 44)) = v30;
  a1_view[8] = 0;
  return result;
}

sint32 sub_8008012C(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8008012Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  _DWORD *v3 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP); 
  char v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; // dc
  sint32 v14; 
  int v15; 
  int result; 
  int i; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  _DWORD *v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  _DWORD *v30; 
  _DWORD *v31; 
  int v32; 
  int v33; 
  int v34; 

  v6 = 0;
  v7 = 0;
  v8 = v3[826];
  v9 = *(uint8 *)(a2 + 8) / (int)v3[833];
  v10 = 0;
  if ( v8 > 0 )
  {
    v11 = v3[905];
    do
    {
      if ( *SF_DRAFT_PTR(_DWORD, (v11 + 4)) == a1 )
      {
        v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 16));
        v13 = v12 <= 0;
        v14 = v12 < 2;
        if ( v13 )
          return 0;
        if ( !v14 )
        {
          v15 = v3[863];
          v6 = 1;
          *SF_DRAFT_PTR(_DWORD, (v11 + 16)) = 0;
          v3[863] = v15 - 1;
        }
      }
      ++v7;
      v11 += 20;
    }
    while ( v7 < v8 );
  }
  result = -1;
  if ( !v6 )
  {
    if ( (sint32)v3[863] < v9 )
    {
      sub_8008005C();
      if ( (sint32)v3[863] < v9 )
        _break(0, 0xFFu);
    }
    for ( i = v9; (sint32)v3[890] < v9; i = v9 )
    {
      v18 = 0x7FFFFFFF;
      v19 = v3[826];
      v20 = 0;
      if ( v19 > 0 )
      {
        v21 = v3[905];
        do
        {
          v22 = *SF_DRAFT_PTR(_DWORD, (v21 + 16));
          if ( v22 >= 2 && v22 < v18 )
            v18 = *SF_DRAFT_PTR(_DWORD, (v21 + 16));
          ++v20;
          v21 += 20;
        }
        while ( v20 < (sint32)v3[826] );
        v19 = v3[826];
      }
      v23 = 0;
      if ( v19 > 0 )
      {
        v24 = 0;
        do
        {
          v25 = SF_DRAFT_PTR(_DWORD, v3[905] + v24);
          v26 = v25[4];
          if ( v26 == v18 )
          {
            if ( v26 == -1 )
              sub_800DDC34(1, 0, 0x80012350u, 274);
            v27 = v3[890];
            v25[4] = 1;
            v25[1] = 0;
            v25[3] = -1;
            v3[890] = v27 + 1;
          }
          ++v23;
          v24 += 20;
        }
        while ( v23 < (sint32)v3[826] );
      }
    }
    v28 = 0;
    if ( i <= 0 )
    {
      return v10;
    }
    else
    {
      v29 = v3[826];
      v30 = SF_DRAFT_PTR(_DWORD, v3[905]);
      v31 = (_DWORD *)(a3_view);
      while ( 1 )
      {
        result = v10;
        if ( v28 >= v29 )
          break;
        if ( v30[4] == 1 )
        {
          --i;
          v30[1] = a1;
          v30[2] = a2;
          v32 = *(uint8 *)(a2 + 9);
          v33 = v3[863];
          ++v10;
          v30[4] = -1;
          v30[3] = v32;
          *v31++ = sf_draft_guest_address(v30);
          v34 = v3[890];
          v3[863] = v33 - 1;
          v3[890] = v34 - 1;
        }
        v30 += 5;
        ++v28;
        if ( i <= 0 )
          return v10;
      }
    }
  }
  return result;
}

sint32 sub_8001A924(uint32 a1)
{
    FUNCTION_MARKER(0x8001A924u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
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
  int v19; 
  struct { int v20[2]; int v21; } direction; 
  struct { int v22[2]; int v23; } normalized; 
  int v24; 
  int v25; 
  int v26; 
  struct { int v27, v28, v29, v30, padding[2], v31, v32, v33; } motion; 

  if ( *a1_view != a1_view[12] || a1_view[4] || a1_view[8] || a1_view[2] != a1_view[14] || a1_view[6] || (result = a1_view[10]) != 0 )
  {
    v3 = a1_view[12];
    v4 = *a1_view;
    direction.v20[1] = 0;
    direction.v20[0] = v3 - v4;
    v5 = a1_view[2];
    v6 = a1_view[14] - v5;
    direction.v21 = a1_view[14] - v5;
    if ( direction.v20[0] || v6 )
    {
      sub_800C720C(sf_draft_guest_address(direction.v20), sf_draft_guest_address(normalized.v22));
      motion.v27 = 0;
      v7 = sub_800C6D4C((direction.v20[0]), (normalized.v22[0]));
      motion.v30 = v7 + sub_800C6D4C(direction.v21, normalized.v23);
      v8 = sub_800C6D4C((a1_view[4]), (normalized.v22[0]));
      motion.v28 = v8 + sub_800C6D4C((a1_view[6]), normalized.v23);
      v9 = sub_800C6D4C((a1_view[8]), (normalized.v22[0]));
      motion.v29 = v9 + sub_800C6D4C((a1_view[10]), normalized.v23);
      motion.v31 = a1_view[24];
      motion.v32 = a1_view[25];
      motion.v33 = a1_view[26];
      sub_8001A7AC(sf_draft_guest_address(&motion.v27));
      v24 = sub_800C6D4C((normalized.v22[0]), motion.v28);
      v25 = normalized.v22[1];
      v26 = sub_800C6D4C(normalized.v23, motion.v28);
    }
    else
    {
      v24 = 0;
      v25 = 0;
      v26 = 0;
    }
    v10 = a1_view[9];
    a1_view[8] = v24 - a1_view[4];
    a1_view[9] = v10;
    a1_view[10] = v26 - a1_view[6];
    v11 = v24;
    a1_view[5] = a1_view[5];
    a1_view[4] = v11;
    a1_view[6] = v26;
    if ( v24 < 0 )
      v12 = v24 - 4095;
    else
      v12 = v24 + 4095;
    v13 = v12 >> 12;
    if ( v12 < 0 )
      v13 = -(-v12 >> 12);
    v24 = v13;
    if ( v25 < 0 )
      v14 = v25 - 4095;
    else
      v14 = v25 + 4095;
    v15 = v14 >> 12;
    if ( v14 < 0 )
      v15 = -(-v14 >> 12);
    v25 = v15;
    if ( v26 < 0 )
      v16 = v26 - 4095;
    else
      v16 = v26 + 4095;
    if ( v16 < 0 )
      v17 = -(-v16 >> 12);
    else
      v17 = v16 >> 12;
    v26 = v17;
    v18 = a1_view[1];
    *a1_view += v24;
    v19 = a1_view[2];
    a1_view[1] = v18;
    result = v19 + v26;
    a1_view[2] = result;
  }
  return result;
}

void sub_800C733C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800C733Cu, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, geometry_value_4, geometry_value_5, geometry_value_6, geometry_value_7, geometry_value_8, geometry_value_9;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    uint16 *a2_view = SF_DRAFT_PTR(uint16, a2);
    unsigned int *a3_view = SF_DRAFT_PTR(unsigned int, a3);
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v29; 
  int v32; 
  int v41; 
  int v42; 

  geometry_value_0 = (4 * *a1_view) & 0xFFFCFFFC;
  geometry_value_1 = (4 * a1_view[1]) & 0xFFFCFFFC;
  geometry_value_2 = (4 * a1_view[2]) & 0xFFFCFFFC;
  geometry_value_3 = (4 * a1_view[3]) & 0xFFFCFFFC;
  geometry_value_4 = (4 * a1_view[4]) & 0xFFFCFFFC;
  sf_draft_missing_gte_800C733C_1(geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, geometry_value_4);
  geometry_value_2 = *((_DWORD *)a2_view + 3);
  geometry_value_0 = *a2_view | *((_DWORD *)a2_view + 1) & 0xFFFF0000;
  sf_draft_missing_gte_800C733C_2(geometry_value_0, geometry_value_2);
  geometry_value_2 = (__int16)a2_view[7];
  geometry_value_0 = a2_view[1] | (*((_DWORD *)a2_view + 2) << 16);
  sf_draft_missing_gte_800C733C_3(&geometry_value_3, &geometry_value_4, &geometry_value_5, geometry_value_0, geometry_value_2);
  geometry_value_2 = *((_DWORD *)a2_view + 4);
  geometry_value_0 = a2_view[2] | *((_DWORD *)a2_view + 2) & 0xFFFF0000;
  sf_draft_missing_gte_800C733C_4(&geometry_value_6, &geometry_value_7, &geometry_value_8, geometry_value_0, geometry_value_2);
  *a3_view = (geometry_value_6 << 16 >> 2) & 0xFFFF0000 | (uint16)(geometry_value_3 >> 2);
  a3_view[3] = (geometry_value_8 << 16 >> 2) & 0xFFFF0000 | (uint16)(geometry_value_5 >> 2);
  sf_draft_missing_gte_800C733C_5(&geometry_value_0, &geometry_value_1, &geometry_value_9);
  a3_view[4] = geometry_value_9 >> 2;
  a3_view[1] = (uint16)(geometry_value_0 >> 2) | (geometry_value_4 << 16 >> 2) & 0xFFFF0000;
  a3_view[2] = (geometry_value_1 << 16 >> 2) & 0xFFFF0000 | (uint16)(geometry_value_7 >> 2);
  v23 = *((_DWORD *)a2_view + 5);
  v24 = *((_DWORD *)a2_view + 6);
  v25 = *((_DWORD *)a2_view + 7);
  if ( v23 >= 0 )
  {
    geometry_value_3 = v23 >> 15;
    geometry_value_0 = *((_DWORD *)a2_view + 5) & 0x7FFF;
  }
  else
  {
    v26 = -v23;
    geometry_value_3 = -(v26 >> 15);
    geometry_value_0 = -(v26 & 0x7FFF);
  }
  if ( v24 >= 0 )
  {
    geometry_value_4 = v24 >> 15;
    geometry_value_1 = *((_DWORD *)a2_view + 6) & 0x7FFF;
  }
  else
  {
    v29 = -v24;
    geometry_value_4 = -(v29 >> 15);
    geometry_value_1 = -(v29 & 0x7FFF);
  }
  if ( v25 >= 0 )
  {
    geometry_value_5 = v25 >> 15;
    geometry_value_2 = *((_DWORD *)a2_view + 7) & 0x7FFF;
  }
  else
  {
    v32 = -v25;
    geometry_value_5 = -(v32 >> 15);
    geometry_value_2 = -(v32 & 0x7FFF);
  }
  sf_draft_missing_gte_800C733C_6(geometry_value_3, geometry_value_4, geometry_value_5, &geometry_value_3, &geometry_value_4, &geometry_value_5, geometry_value_0, geometry_value_1, geometry_value_2, &geometry_value_0, &geometry_value_1, &geometry_value_2);
  v41 = (geometry_value_1 + 8 * geometry_value_4 + 4 * a1_view[6]) >> 2;
  v42 = (geometry_value_2 + 8 * geometry_value_5 + 4 * a1_view[7]) >> 2;
  a3_view[5] = (geometry_value_0 + 8 * geometry_value_3 + 4 * a1_view[5]) >> 2;
  a3_view[6] = v41;
  a3_view[7] = v42;
}

sint32 sub_80018014(uint32 a1, uint32 a2, uint32 a3, uint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12, sint32 a13, uint32 a14, uint32 a15, uint32 a16)
{
    FUNCTION_MARKER(0x80018014u, "SCUS_942.40");
    uint16 attributes[4], counter;
    uint32 object, i, values[4];
    sint32 index = a9;
    uint8 type = (uint8)a11;
    if (!a1 || !a10)
        return 0;
    sub_800EC8E4(a1, 0, 3400);
    if (!a3)
        a3 = 0x80102D70u;
    if (index < 0)
        index = 682;
    if (type >= 5)
        type = r_u8(SF_DRAFT_GP + 276u);
    if (!a4)
        a4 = 0x80102D80u;
    if (!a14)
        a14 = 0x80102D90u;
    sub_800CACF0(index, sf_draft_guest_address(attributes));
    if (a2)
        w_u32(a1, a2);
    else
    {
        sub_800CB250(0, a3, (sint16)attributes[0], a10, (sint8)type, 11, a12, a1);
        counter = r_u16(SF_DRAFT_GP + 278u);
        object = r_u32(a1);
        w_u32(object + 20u, (uint32)(sint32)(sint16)counter);
        w_u16(r_u32(a1) + 6u, (uint16)(r_u16(r_u32(a1) + 6u) | 8u));
        object = r_u32(r_u32(a1));
        w_u16(SF_DRAFT_GP + 278u, (uint16)(counter + 1u));
        sub_800DBFD4(object, 0, a4);
    }
    w_u32(a1 + 12u, r_u32(r_u32(a1)));
    for (i = 0; i < 4; ++i)
        values[i] = r_u32(a3 + i * 4u);
    for (i = 0; i < 4; ++i)
        w_u32(a1 + 16u + i * 4u, values[i]);
    w_u32(a1 + 32u, 0);
    w_u32(a1 + 36u, 0);
    w_u32(a1 + 40u, 0);
    w_u32(a1 + 48u, 0);
    w_u32(a1 + 52u, 0);
    w_u32(a1 + 56u, 0);
    for (i = 0; i < 4; ++i)
        values[i] = r_u32(a4 + i * 4u);
    for (i = 0; i < 4; ++i)
        w_u32(a1 + 64u + i * 4u, values[i]);
    w_u32(a1 + 80u, 0);
    w_u32(a1 + 84u, 0);
    w_u32(a1 + 88u, 0);
    w_u32(a1 + 96u, 0);
    w_u32(a1 + 100u, 0);
    w_u32(a1 + 104u, 0);
    sub_80018804(a1, 0, 0);
    sub_8001888C(a1, 0, 0);
    sub_800184BC(a1, a13, a14);
    w_u32(a1 + 3356u, (uint32)index);
    sub_80018994(a1, 1, 8, 0);
    w_u32(a1 + 3356u, (uint32)index);
    w_u8(a1 + 3392u, 1);
    sub_80018994(a1, 1, 8, 1);
    if ((uint8)a15 == 1)
        sub_800182C0(a1, 1);
    sub_80018388(a1, (uint8)a16);
    return 1;
}

sint32 sub_800456D0(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800456D0u, "SCUS_942.40");
    uint32 table, row, flags, source, value, i, z;
    row = 76u * (uint32)r_s16((uint32)a1 + 2u) + r_u32(0x80115CCCu);
    value = r_u8(row + 36u);
    if (value >= 26u)
        return 0;
    if (value)
        table = 0x8010C384u + 32u * value;
    else
    {
        flags = r_u32(76u * (uint32)r_s16((uint32)a1 + 2u) + r_u32(0x80115CCCu) + 36u) & 0x3000u;
        table = flags == 0x1000u ? 0x8010C5E4u : flags == 0x2000u ? 0x8010C604u : 0x8010C384u;
    }
    w_u32(a2, 0);
    w_u32(a2 + 4u, (uint32)(sint32)(sint8)r_u8(table + 26u));
    w_u32(a2 + 8u, (uint32)(sint32)(sint8)r_u8(table + 27u));
    for (i = 0; i < 9u; ++i)
    {
        source = r_u32(r_u32(r_u32((uint32)a1 + 8u) + 24u) + 32u);
        value = r_u16(source + i * 2u);
        if (i & 1u)
            value = 0u - value;
        w_u16(0x8011C948u + i * 2u, (uint16)value);
    }
    for (i = 20u; i <= 28u; i += 4u)
    {
        source = r_u32(r_u32(r_u32((uint32)a1 + 8u) + 24u) + 32u);
        value = r_u32(source + i);
        if (i == 24u)
            value = 0u - value;
        w_u32(0x8011C948u + i, value);
    }
    sub_800EADF4(0x8011C948u, a2, a2);
    w_u32(a2, r_u32(a2) + r_u32(0x8011C95Cu));
    value = r_u32(a2 + 4u) + r_u32(0x8011C960u);
    z = r_u32(a2 + 8u);
    w_u32(a2 + 4u, value);
    w_u32(a2 + 8u, z + r_u32(0x8011C964u));
    return 1;
}

sint32 sub_8008A0AC(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8008A0ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v7; 
  int v8; 
  int **v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21[10]; 
  int v22; 
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

  result = (uint8)sub_800356CC(a1);
  v7 = 0;
  if ( result )
  {
    v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 36));
    v21[0] = 4;
    result = a2 + 40;
    if ( v8 > 0 )
    {
      v9 = (int **)(a2 + 40);
      do
      {
        v10 = (*v9)[1];
        v11 = (*v9)[2];
        v12 = (*v9)[3];
        v32 = **v9;
        v33 = v10;
        v34 = v11;
        v35 = v12;
        v13 = (*v9)[5];
        v14 = (*v9)[6];
        v15 = (*v9)[7];
        v36 = (*v9)[4];
        v37 = v13;
        v38 = v14;
        v39 = v15;
        v16 = (*v9)[13];
        v17 = (*v9)[14];
        v18 = (*v9)[15];
        v40 = (*v9)[12];
        v41 = v16;
        v42 = v17;
        v43 = v18;
        v44 = sub_800C6D4C(v40, 8);
        v45 = sub_800C6D4C(v41, 8);
        v46 = sub_800C6D4C(v42, 8);
        v32 += v44;
        v33 += v45;
        v34 += v46;
        v36 += v44;
        v37 += v45;
        v38 += v46;
        v21[1] = v36;
        v21[2] = v37;
        v21[3] = v38;
        v21[4] = v39;
        v21[5] = v32;
        v21[6] = v33;
        v21[7] = v34;
        v21[8] = v35;
        v21[9] = v32;
        v22 = v33;
        v23 = v34;
        v24 = v35;
        v25 = v36;
        v26 = v37;
        v27 = v38;
        v28 = v39;
        if ( a3 )
          v19 = v33 + 384;
        else
          v19 = v33 + 64;
        v22 = v19;
        if ( a3 )
          v20 = v26 + 384;
        else
          v20 = v26 + 64;
        v26 = v20;
        ++v9;
        ++v7;
        v29 = -v40;
        v31 = -v42;
        v30 = -v41;
        sub_80087E74(a1, v21, 0);
        result = v7 < v8;
      }
      while ( v7 < v8 );
    }
  }
  return result;
}

void sub_800D2168(uint32 A0)
{
    sint32 gte_intermediate_s4;
    FUNCTION_MARKER(0x800D2168u, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, geometry_value_4, geometry_value_5, geometry_value_6, geometry_value_7, geometry_value_8, geometry_value_9, geometry_value_10, geometry_value_11, geometry_value_12, geometry_value_13, geometry_value_14, geometry_value_15;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 *A0_view = SF_DRAFT_PTR(uint16, A0);
  geometry_value_7 = (*SF_DRAFT_PTR(uint32, 0x1F8003B0));
  geometry_value_8 = (*SF_DRAFT_PTR(uint32, 0x1F8003B4));
  geometry_value_9 = (*SF_DRAFT_PTR(uint32, 0x1F8003B8));
  geometry_value_10 = (*SF_DRAFT_PTR(uint32, 0x1F8003BC));
  geometry_value_11 = (*SF_DRAFT_PTR(uint32, 0x1F8003C0));
  sf_draft_missing_gte_800D2168_1(geometry_value_7, geometry_value_8, geometry_value_9, geometry_value_10, geometry_value_11);
  geometry_value_9 = *((_DWORD *)A0_view + 3);
  geometry_value_7 = *A0_view | *((_DWORD *)A0_view + 1) & 0xFFFF0000;
  sf_draft_missing_gte_800D2168_2(geometry_value_7, geometry_value_9);
  geometry_value_9 = (__int16)A0_view[7];
  geometry_value_7 = A0_view[1] | (*((_DWORD *)A0_view + 2) << 16);
  sf_draft_missing_gte_800D2168_3(&geometry_value_10, &geometry_value_11, &geometry_value_12, geometry_value_7, geometry_value_9);
  geometry_value_9 = *((_DWORD *)A0_view + 4);
  geometry_value_7 = A0_view[2] | *((_DWORD *)A0_view + 2) & 0xFFFF0000;
  sf_draft_missing_gte_800D2168_4(&geometry_value_13, &geometry_value_14, &geometry_value_15, geometry_value_7, geometry_value_9);
  geometry_value_0 = (geometry_value_13 << 16) | (uint16)geometry_value_10;
  geometry_value_3 = (uint16)geometry_value_12 | (geometry_value_15 << 16);
  sf_draft_missing_gte_800D2168_5(&geometry_value_7, &geometry_value_8);
  geometry_value_1 = (uint16)geometry_value_7 | (geometry_value_11 << 16);
  geometry_value_2 = (geometry_value_8 << 16) | (uint16)geometry_value_14;
  sf_draft_missing_gte_800D2168_6(&gte_intermediate_s4, geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3);
  geometry_value_7 = (*SF_DRAFT_PTR(uint32, 0x1F8003D0));
  geometry_value_8 = (*SF_DRAFT_PTR(uint32, 0x1F8003D4));
  geometry_value_9 = (*SF_DRAFT_PTR(uint32, 0x1F8003D8));
  geometry_value_10 = (*SF_DRAFT_PTR(uint32, 0x1F8003DC));
  geometry_value_11 = (*SF_DRAFT_PTR(uint32, 0x1F8003E0));
  sf_draft_missing_gte_800D2168_7(geometry_value_7, geometry_value_8, geometry_value_9, geometry_value_10, geometry_value_11, (uint32)A0 + 20u, (uint32)A0 + 24u, (uint32)A0 + 28u, &geometry_value_4, &geometry_value_5, &geometry_value_6);
  geometry_value_9 = *((_DWORD *)A0_view + 3);
  geometry_value_7 = *A0_view | *((_DWORD *)A0_view + 1) & 0xFFFF0000;
  sf_draft_missing_gte_800D2168_8(geometry_value_7, geometry_value_9);
  geometry_value_9 = (__int16)A0_view[7];
  geometry_value_7 = A0_view[1] | (*((_DWORD *)A0_view + 2) << 16);
  sf_draft_missing_gte_800D2168_9(&geometry_value_10, &geometry_value_11, &geometry_value_12, geometry_value_7, geometry_value_9);
  geometry_value_9 = *((_DWORD *)A0_view + 4);
  geometry_value_7 = A0_view[2] | *((_DWORD *)A0_view + 2) & 0xFFFF0000;
  sf_draft_missing_gte_800D2168_10(&geometry_value_13, &geometry_value_14, &geometry_value_15, geometry_value_7, geometry_value_9);
  geometry_value_0 = (geometry_value_13 << 16) | (uint16)geometry_value_10;
  geometry_value_3 = (uint16)geometry_value_12 | (geometry_value_15 << 16);
  sf_draft_missing_gte_800D2168_11(&geometry_value_7, &geometry_value_8);
  geometry_value_1 = (uint16)geometry_value_7 | (geometry_value_11 << 16);
  geometry_value_2 = (geometry_value_8 << 16) | (uint16)geometry_value_14;
  sf_draft_missing_gte_800D2168_12(&gte_intermediate_s4);
  geometry_value_4 = geometry_value_4 + (*SF_DRAFT_PTR(uint32, 0x1F8003E4));
  geometry_value_5 = geometry_value_5 + (*SF_DRAFT_PTR(uint32, 0x1F8003E8));
  geometry_value_6 = geometry_value_6 + (*SF_DRAFT_PTR(uint32, 0x1F8003EC));
  sf_draft_missing_gte_800D2168_13(geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, gte_intermediate_s4, geometry_value_4, geometry_value_5, geometry_value_6);
}

uint32 sub_80093540(void)
{
    FUNCTION_MARKER(0x80093540u, "SCUS_942.40");
    sint32 row, column, group, slot;
    sint32 vector[3];
    sint32 length;
    w_u32(SF_DRAFT_GP + 0xE80u, 0u);
    for (group = 0; group < 6; ++group)
        for (slot = 3; slot >= 0; --slot)
            w_u32(0x8012B8A8u + (uint32)(group * 192 + slot * 48), 0u);
    for (row = 0; row < 32; ++row)
    {
        for (column = 0; column < 16; ++column)
        {
            sint32 numerator, scale, x, y, maximum, product, shade;
            vector[0] = (column - 7) * 512;
            vector[1] = (row - 15) * 256;
            vector[2] = 0;
            sub_800D9580(sf_draft_guest_address(vector), sf_draft_guest_address(&length));
            numerator = (sint32)((uint32)(4096 - length) * 155u);
            numerator /= 3;
            scale = numerator / 4096;
            x = vector[0] < 0 ? -vector[0] : vector[0];
            y = vector[1] < 0 ? -vector[1] : vector[1];
            maximum = x > y ? x : y;
            product = (sint32)((uint32)scale * (uint32)(4096 - maximum / 4));
            shade = product / 4096;
            if (shade < 0) shade = 0;
            else if (shade >= 32) shade = 31;
            w_u16(0x8013C190u + (uint32)(row * 32 + column * 2),
                (uint16)(0x8000u | (uint32)shade | ((uint32)shade << 5) | ((uint32)shade << 10)));
        }
    }
    return 0;
}

uint32 sub_800BED9C(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800BED9Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v6; 
  int *v7; 
  int *result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  char *v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  int v26; 
  int v27; 
  int v28; 
  int v29; 
  char *v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  char v36[1680]; 

  if ( a1_view[2] == -1 )
  {
    v6 = 8;
    v7 = SF_DRAFT_PTR(int, 0x801311D0u);
    do
    {
      if ( !*v7 )
        break;
      ++v6;
      ++v7;
    }
    while ( v6 < 16 );
    result = 0;
    if ( v6 == 16 )
      return sf_draft_guest_address(result);
    a1_view[2] = v6;
  }
  v9 = a1_view[2];
  v10 = 0;
  if ( !SF_DRAFT_PTR(uint32, 0x8010DECCu)[v9] )
    return 0;
  v11 = a1_view[1];
  v12 = *((uint8 *)a1_view + 12);
  v13 = *a1_view;
  v14 = (sint32)(a1 + (uint32)v11);
  if ( *((_BYTE *)a1_view + 12) )
  {
    v15 = v36;
    v16 = (int *)((char *)a1_view + v11);
    do
    {
      v17 = v16[1];
      v18 = v16[2];
      v19 = v16[3];
      *(_DWORD *)v15 = (*v16);
      *((_DWORD *)v15 + 1) = v17;
      *((_DWORD *)v15 + 2) = v18;
      *((_DWORD *)v15 + 3) = v19;
      v20 = v16[5];
      *((_DWORD *)v15 + 4) = v16[4];
      *((_DWORD *)v15 + 5) = v20;
      v15 += 24;
      ++v10;
      v16 += 6;
    }
    while ( v10 < v12 );
  }
  v21 = *((__int16 *)a1_view + 4);
  *a1_view = 1447117424;
  v22 = a1_view[2];
  a1_view[1] = 7;
  v23 = (__int16)sub_800FDF94(sf_draft_guest_address(a1_view), (sint16)v21, SF_DRAFT_PTR(uint32, 0x8010DECCu)[v22]);
  if ( v23 == -1 )
    return 0;
  a1_view[2] = v23;
  if ( a3 )
    v24 = sub_800FE594(a2, a3, (__int16)v23) << 16;
  else
    v24 = sub_800FE3E4(a2, (__int16)v23) << 16;
  v26 = v24 >> 16;
  v27 = a1_view[2];
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1924)) = sf_draft_guest_address(a1_view);
  *a1_view = v13;
  a1_view[1] = v14;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1920)) = v27;
  v28 = 0;
  if ( v12 )
  {
    v29 = (sint32)(a1 + (uint32)v11);
    v30 = v36;
    do
    {
      v31 = *((_DWORD *)v30 + 1);
      v32 = *((_DWORD *)v30 + 2);
      v33 = *((_DWORD *)v30 + 3);
      *SF_DRAFT_PTR(_DWORD, v29) = *(_DWORD *)v30;
      *SF_DRAFT_PTR(_DWORD, (v29 + 4)) = v31;
      *SF_DRAFT_PTR(_DWORD, (v29 + 8)) = v32;
      *SF_DRAFT_PTR(_DWORD, (v29 + 12)) = v33;
      v34 = *((_DWORD *)v30 + 5);
      *SF_DRAFT_PTR(_DWORD, (v29 + 16)) = *((_DWORD *)v30 + 4);
      *SF_DRAFT_PTR(_DWORD, (v29 + 20)) = v34;
      v35 = *SF_DRAFT_PTR(_WORD, v29) & 0x1F;
      if ( (unsigned int)(v35 - 7) >= 2 && (unsigned int)(v35 - 9) >= 2 )
      {
        *SF_DRAFT_PTR(_BYTE, (v29 + 2)) = v9;
        if ( v35 != 2 )
          *SF_DRAFT_PTR(_BYTE, (v29 + 3)) = *SF_DRAFT_PTR(_BYTE, (v29 + 7));
      }
      v29 += 24;
      ++v28;
      v30 += 24;
    }
    while ( v28 < v12 );
  }
  result = 0;
  if ( v26 == -1 )
  {
    a1_view[1] = v11;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1920)) = -1;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1924)) = 0;
    return sf_draft_guest_address(result);
  }
  result = (int *)(a1_view);
  if ( a3 )
  {
    if ( v26 < 0 )
      return 0;
  }
  return sf_draft_guest_address(result);
}

sint32 sub_8006DDEC(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8006DDECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v3; 
  int *v5; 
  int result; 
  int v7; 
  _DWORD *v8; 
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
  int v19; 
  int v20; 

  v3 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416));
  v5 = SF_DRAFT_PTR(int, sub_80028C7C((*SF_DRAFT_PTR(__int16, (a1 + 2)))));
  if ( v5 )
  {
    result = 1;
    if ( a2 != 1 )
      return result;
    if ( !*SF_DRAFT_PTR(_DWORD, (v3 + 44)) )
    {
      v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 48));
      *SF_DRAFT_PTR(_DWORD, (v3 + 48)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v3 + 44)) = v7;
    }
    v8 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v3 + 44));
    if ( !v8 )
      return 1;
    v18 = 0;
    v9 = *((char *)v5 + 1);
    v10 = v8[5];
    v20 = 0;
    v19 = v10 - v9;
    sub_800DD950(sf_draft_guest_address(&v18), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12))), 0, sf_draft_guest_address(&v18));
    sub_80048420(sf_draft_guest_address(v8 + 15));
    sub_80048354(sf_draft_guest_address(v8 + 15), sf_draft_guest_address(&v18));
    v11 = *(char *)v5;
    *SF_DRAFT_PTR(_DWORD, (v3 + 16)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v3 + 12)) = -4096 * v11;
    *SF_DRAFT_PTR(_DWORD, (v3 + 20)) = -4096 * *((char *)v5 + 2);
    if ( !sub_80035638(a1) )
      goto LABEL_12;
    v12 = **(_DWORD **)(a1 + 16);
    if ( (v12 & 0x100000) != 0 )
    {
      v13 = (0u - *SF_DRAFT_PTR(_DWORD, (v3 + 20)));
    }
    else
    {
      if ( (v12 & 4) == 0 )
      {
LABEL_12:
        v14 = *SF_DRAFT_PTR(_DWORD, (v3 + 36));
        v15 = 0;
        if ( v14 )
        {
          v16 = *SF_DRAFT_PTR(_DWORD, (v14 + 364));
          v8[91] = v16;
          if ( v16 > 0 )
          {
            do
            {
              *(_DWORD *)(4 * v15 + v8[92]) = *SF_DRAFT_PTR(_DWORD, (4 * v15 + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 36)) + 368))));
              ++v15;
            }
            while ( v15 < (sint32)v8[91] );
          }
        }
        else
        {
          v8[91] = 0;
        }
        *SF_DRAFT_PTR(_DWORD, (v3 + 36)) = sf_draft_guest_address(v8);
        *SF_DRAFT_PTR(_BYTE, (v3 + 29)) = 1;
        *SF_DRAFT_PTR(_BYTE, (v3 + 30)) = 1;
        *SF_DRAFT_PTR(_BYTE, (v3 + 31)) = 1;
        goto LABEL_24;
      }
      v13 = -2 * *SF_DRAFT_PTR(_DWORD, (v3 + 20));
    }
    *SF_DRAFT_PTR(_DWORD, (v3 + 20)) = v13;
    goto LABEL_12;
  }
  result = 1;
  if ( !a2 )
  {
    if ( !*SF_DRAFT_PTR(_DWORD, (v3 + 48)) )
    {
      v17 = *SF_DRAFT_PTR(_DWORD, (v3 + 44));
      *SF_DRAFT_PTR(_DWORD, (v3 + 44)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v3 + 48)) = v17;
    }
    v8 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v3 + 44));
    result = 1;
    if ( v8 )
    {
      if ( !*SF_DRAFT_PTR(_DWORD, (v3 + 36)) )
        return 1;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 36)) + 128)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 36)) + 20)) + v8[5];
      sub_80048420(sf_draft_guest_address(v8 + 15));
      sub_80048354(sf_draft_guest_address(v8 + 15), sf_draft_guest_address(&v18));
LABEL_24:
      v8[6] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 288)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 272));
      return 1;
    }
  }
  return result;
}

sint32 sub_8013E578(void)
{
    FUNCTION_MARKER(0x8013E578u, "MOVIE.OVL");
    /* TODO Native draft from actual loaded overlay */
  int result; 

  int v2; 
  int v3; 

  if ( !(*SF_DRAFT_PTR(uint8, 0x80141A20u)) )
    return 28;
  if ( (*SF_DRAFT_PTR(uint8, 0x80141A2Eu)) && !(*SF_DRAFT_PTR(uint8, 0x80141A2Cu)) )
  {
    v2 = sub_8013D8A0();
    if ( v2 )
    {
LABEL_29:
      sub_8013E8F4();
      return v2;
    }
    (*SF_DRAFT_PTR(uint8, 0x80141A2Eu)) = 0;
  }
  if ( (*SF_DRAFT_PTR(uint8, 0x80141A29u)) )
  {
    v3 = 0;
    if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Cu)) )
    {
      while ( 1 )
      {
        (*SF_DRAFT_PTR(uint8, 0x80141A2Bu)) = 0;
        v2 = sub_8013E01C();
        if ( v2 )
          goto LABEL_29;
        if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Bu)) )
          goto LABEL_16;
        v2 = sub_8013D830((*SF_DRAFT_PTR(uint32, 0x801419E0u)));
        if ( v2 )
          goto LABEL_29;
        v2 = sub_8013D8A0();
        if ( v2 )
          goto LABEL_29;
        ++v3;
        if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Bu)) )
        {
LABEL_16:
          (*SF_DRAFT_PTR(uint8, 0x80141A29u)) = 0;
          (*SF_DRAFT_PTR(uint8, 0x80141A28u)) = 0;
          break;
        }
        result = 4;
        if ( v3 >= 10 )
          return result;
      }
    }
  }
  v2 = sub_8013E154();
  if ( v2 )
    goto LABEL_29;
  if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Cu)) )
  {
    v2 = sub_8013E01C();
    if ( v2 )
      goto LABEL_29;
  }
  v2 = sub_8013E7BC();
  if ( v2 )
    goto LABEL_29;
  result = 0;
  if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Bu)) )
    return result;
  v2 = sub_8013E7BC();
  if ( v2 )
    goto LABEL_29;
  v2 = sub_8013E4E0();
  if ( v2 )
    goto LABEL_29;
  if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Du)) )
  {
    v2 = sub_8013E83C();
    if ( v2 )
      goto LABEL_29;
  }
  (*SF_DRAFT_PTR(uint8, 0x80141A2Bu)) = 0;
  result = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x801419F0u)) )
  {
    result = 0;
    if ( !(*SF_DRAFT_PTR(uint8, 0x80141A2Du)) )
    {
      (*SF_DRAFT_PTR(uint32, 0x801419F0u)) = 0;
      sub_8013E8F4();
      return 0;
    }
  }
  return result;
}

