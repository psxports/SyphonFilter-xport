#include "game_draft.h"
#include <stdio.h>
#include <stdlib.h>
static uint32 sf_draft_missing_padding_8001EE00(uint32 offset)
{
    fprintf(stderr, "TODO 8001EE00 original unwritten padding +%X\n", offset);
    abort();
}

static uint32 sf_draft_missing_padding_800654F4(uint32 offset)
{
    fprintf(stderr, "TODO 800654F4 original unwritten padding +%X\n", offset);
    abort();
}

uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);


/* TODO Resolve external dependency signatures */
uint32 sub_80056F8C();

sint32 sub_80072274(sint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80072274u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
    _DWORD *a4_view = SF_DRAFT_PTR(_DWORD, a4);
  _DWORD *v6; 
  int v8; 
  _DWORD *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int result; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
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

  v6 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 12));
  v16 = v6[24];
  v17 = v6[25];
  v18 = v6[26];
  v19 = v6[27];
  v23 = v6[28];
  v24 = v6[29];
  v25 = v6[30];
  v26 = v6[31];
  v8 = v6[65];
  if ( v8 == 4096 )
  {
    v27 = v6[24];
    v28 = v6[25];
    v29 = v6[26];
  }
  else
  {
    v27 = sub_800C6D4C(v16, v8);
    v28 = sub_800C6D4C(v17, v8);
    v29 = sub_800C6D4C(v18, v8);
  }
  if ( a2 && (v9 = *(_DWORD **)(a2 + 12)) != 0 )
  {
    v20 = v9[24];
    v21 = v9[25];
    v22 = v9[26];
    *a3_view = v16 - v20;
    a3_view[1] = v17 - v21;
    a3_view[2] = v18 - v22;
    v10 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 12)) + 260));
    if ( v10 <= 0 )
    {
      if ( v8 == 4096 )
      {
        v33 = v20;
        v34 = v21;
        v35 = v22;
        goto LABEL_16;
      }
      v33 = sub_800C6D4C(v20, v8);
      v11 = sub_800C6D4C(v21, v8);
      v12 = v22;
      v13 = v8;
    }
    else
    {
      if ( v10 == 4096 )
      {
        v30 = v20;
        v31 = v21;
        v32 = v22;
      }
      else
      {
        v30 = sub_800C6D4C(v20, v10);
        v31 = sub_800C6D4C(v21, v10);
        v32 = sub_800C6D4C(v22, v10);
      }
      v36 = sub_800C6D90(v8, v8 + v10);
      v33 = sub_800C6D4C(v27 + v30, v36);
      v11 = sub_800C6D4C(v28 + v31, v36);
      v12 = v29 + v32;
      v13 = v36;
    }
    v34 = v11;
    v35 = sub_800C6D4C(v12, v13);
  }
  else
  {
    *a3_view = v16;
    a3_view[1] = v17;
    a3_view[2] = v18;
    a3_view[3] = v19;
    v33 = 0;
    v34 = 0;
    v35 = 0;
  }
LABEL_16:
  if ( v8 == 4096 )
  {
    *a4_view = v23;
    a4_view[1] = v24;
    a4_view[2] = v25;
    a4_view[3] = v26;
  }
  else
  {
    *a4_view = sub_800C6D4C(v23, v8);
    a4_view[1] = sub_800C6D4C(v24, v8);
    a4_view[2] = sub_800C6D4C(v25, v8);
  }
  *a4_view -= v33 - v27;
  v14 = a4_view[2];
  a4_view[1] -= v34 - v28;
  result = 1;
  a4_view[2] = v14 - (v35 - v29);
  return result;
}

sint32 sub_8005A694(sint32 a1)
{
    FUNCTION_MARKER(0x8005A694u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  char v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v18; 

  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
  v5 = v4 & 3;
  if ( (v4 & 0x4000) != 0 )
  {
    v6 = 6;
    if ( **(__int16 **)(a1 + 20) >= 0 )
      goto LABEL_47;
    v5 = v4 & 3;
  }
  if ( !v5 )
  {
    v7 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 8;
    if ( (v4 & 0x8000000) == 0 || (v7 = v4 & 8, !*SF_DRAFT_PTR(_BYTE, (v3 + 72))) )
    {
      if ( !v7 )
      {
        v6 = 6;
        if ( *SF_DRAFT_PTR(_BYTE, (v3 + 72)) )
        {
          v6 = 7;
          if ( *SF_DRAFT_PTR(__int16, (v3 + 44)) < 800
            && (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x2000) != 0
            && *(uint8 *)(v3 + 71) >= 0x50u
            && (*SF_DRAFT_PTR(_WORD, (a1 + 2)) & 1) != 0
            && !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3252)) )
          {
            v6 = 6;
          }
        }
        goto LABEL_47;
      }
    }
  }
  v6 = 7;
  if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 13 )
  {
LABEL_47:
    *SF_DRAFT_PTR(_BYTE, (v3 + 70)) = v6;
    return v6;
  }
  v8 = **(__int16 **)(a1 + 20);
  v18 = 3200;
  if ( v8 >= 0 )
    sub_800E0364(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 12))), sf_draft_guest_address(&v18));
  v9 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( !*SF_DRAFT_PTR(_BYTE, (v9 + 36)) )
  {
    v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000;
    if ( v10 != 4096
      && v10 != 0x2000
      && (v18 < 480 || (int)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)) + 212)) & 0xFFFF3FFF) >= 2744) )
    {
      if ( **(__int16 **)(a1 + 20) >= 0 )
      {
        v11 = *(uint8 *)(SF_DRAFT_GP + 2912);
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = 1;
        v6 = 5;
        if ( !v11 )
        {
          v12 = sub_800EC8F4();
          if ( (v12 & 0xFu) < 0xD )
            sub_8006C620(v12 & 1 | 0x120, a1, 0);
          *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2912)) = 1;
        }
        goto LABEL_30;
      }
      goto LABEL_23;
    }
  }
  if ( **(__int16 **)(a1 + 20) < 0 || v18 >= 1601 )
  {
LABEL_23:
    (*SF_DRAFT_PTR(uint32, 0x8011CEB8u)) = (*SF_DRAFT_PTR(uint32, 0x8011E660u)) - (*SF_DRAFT_PTR(uint32, 0x8011E650u));
    (*SF_DRAFT_PTR(uint32, 0x8011CEC0u)) = (*SF_DRAFT_PTR(uint32, 0x8011E668u)) - (*SF_DRAFT_PTR(uint32, 0x8011E658u));
    (*SF_DRAFT_PTR(uint32, 0x8011CEBCu)) = 0;
    sub_800C720C(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CEB8u))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CEB8u))));
    if ( (*SF_DRAFT_PTR(uint32, 0x8011CEB8u)) * *SF_DRAFT_PTR(_DWORD, v3) + (*SF_DRAFT_PTR(uint32, 0x8011CEC0u)) * *SF_DRAFT_PTR(_DWORD, (v3 + 8)) < 0 || *SF_DRAFT_PTR(__int16, (v3 + 44)) < 320 )
    {
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = -1;
      v6 = 7;
      goto LABEL_30;
    }
  }
  v13 = *SF_DRAFT_PTR(__int16, (v3 + 44));
  if ( v13 < 1601 )
  {
    v6 = 7;
    if ( v13 >= 641 )
    {
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912)) = 1;
      v6 = 6;
    }
  }
  else
  {
    v6 = 5;
  }
LABEL_30:
  v14 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( *SF_DRAFT_PTR(_BYTE, (v14 + 36)) || (v15 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000, v15 == 4096) || v15 == 0x2000 )
  {
    if ( *SF_DRAFT_PTR(int, (SF_DRAFT_GP + 912)) >= 0 )
      goto LABEL_47;
  }
  v16 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 912));
  if ( v16 > 0 )
  {
    if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) != 2 && (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x10000) == 0 )
    {
      sub_80028F3C((*SF_DRAFT_PTR(__int16, (a1 + 2))), 10);
      *SF_DRAFT_PTR(_DWORD, (v3 + 32)) |= 0x10000u;
    }
    goto LABEL_47;
  }
  if ( v16 >= 0 )
    goto LABEL_47;
  sub_80059108(a1);
  *SF_DRAFT_PTR(_BYTE, (v3 + 70)) = v6;
  return v6;
}

sint32 sub_80045F84(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80045F84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  int *v8; 
  int v9; 
  char v10; 
  int *v11; 
  int v12; 
  int *v13; 
  int *v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int *v22; 
  int result; 
  int v24; 
  int v25; 
  int v26; 

  int *v28; 
  int *v29; 
  int *v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int *v37; 
  int v38; 

  v4 = -1;
  v5 = 0;
  v6 = SF_DRAFT_PTR(int, 0x8011C97Cu);
  v7 = 0;
  do
  {
    v8 = &SF_DRAFT_PTR(uint32, 0x8012B828u)[v5];
    if ( *v8 == a1 )
    {
      v9 = SF_DRAFT_PTR(uint32, 0x80127CE8u)[v5];
      v10 = *SF_DRAFT_PTR(_BYTE, (v9 + 10));
      *SF_DRAFT_PTR(_DWORD, (v9 + 24)) = 0;
      *SF_DRAFT_PTR(_BYTE, (v9 + 9)) = 17;
      *SF_DRAFT_PTR(_DWORD, (v9 + 24)) = 0;
      *SF_DRAFT_PTR(_BYTE, (v9 + 10)) = v10 & 0xEF;
      if ( !a2 )
      {
        v11 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
        *v8 = (-1);
        *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = 0;
        sub_800C8218((*v11), v9);
        v6 += 9;
        goto LABEL_16;
      }
      v12 = sub_800CCCD4((*SF_DRAFT_PTR(_DWORD, (v9 + 12)) + 20));
      v13 = v6;
      if ( v12 )
      {
        v4 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 16)) + 32)) + 2));
        *v8 = (v4);
        v14 = SF_DRAFT_PTR(int, *(int **)(v9 + 12));
        v15 = v14 + 8;
        do
        {
          v16 = v14[1];
          v17 = v14[2];
          v18 = v14[3];
          *v13 = (*v14);
          v13[1] = v16;
          v13[2] = v17;
          v13[3] = v18;
          v14 += 4;
          v13 += 4;
        }
        while ( v14 != v15 );
        *v13 = (*v14);
        SF_DRAFT_PTR(uint32, 0x8011C99Cu)[v7] = 0;
        *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = sf_draft_guest_address(v6);
        *(_WORD *)v6 = 0;
        *((_WORD *)v6 + 6) = 0;
        *((_WORD *)v6 + 4) = 0;
        *((_WORD *)v6 + 5) = 0;
        sub_800EA514(sf_draft_guest_address(v6), sf_draft_guest_address(v6));
        v6[6] = (0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300)) + 40));
        v19 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        LOWORD(v20) = *(uint8 *)(v19 + 36);
        if ( !*SF_DRAFT_PTR(_BYTE, (v19 + 36)) )
        {
          v21 = *SF_DRAFT_PTR(_DWORD, (v19 + 36)) & 0x3000;
          if ( v21 == 4096 )
            LOWORD(v20) = 19;
          else
            v20 = v21 == 0x2000 ? 0x14 : 0;
        }
        *SF_DRAFT_PTR(_WORD, (v9 + 22)) = v20;
      }
      else
      {
        v22 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
        *v8 = (-1);
        *SF_DRAFT_PTR(_DWORD, (v9 + 12)) = 0;
        sub_800C8218((*v22), v9);
      }
      *SF_DRAFT_PTR(_BYTE, (76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) = 0;
    }
    v6 += 9;
LABEL_16:
    ++v5;
    v7 += 9;
  }
  while ( v5 < 30 );
  result = a2;
  if ( a2 )
  {
    v24 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if ( v24 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (result = *SF_DRAFT_PTR(_DWORD, (76 * v24 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) & 0x4000) != 0 )
    {
      v25 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
      result = *SF_DRAFT_PTR(__int16, (v25 + 6));
      if ( *SF_DRAFT_PTR(_WORD, (v25 + 6)) )
      {
        result = *SF_DRAFT_PTR(__int16, (v25 + 8));
        if ( result <= 0 )
        {
          if ( v4 >= 0 )
            goto LABEL_26;
          result = sub_800CCCD4((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
          if ( result )
          {
            result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (result + 16)) + 32));
            v4 = *SF_DRAFT_PTR(__int16, (result + 2));
          }
          if ( v4 >= 0 )
          {
LABEL_26:
            v26 = sub_80045B10(v4, sf_draft_guest_address(&v38));
            v28 = SF_DRAFT_PTR(int, *(int **)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 52));
            v29 = &SF_DRAFT_PTR(uint32, 0x8011C97Cu)[9 * v38];
            v30 = v28 + 8;
            do
            {
              v31 = v28[1];
              v32 = v28[2];
              v33 = v28[3];
              *v29 = (*v28);
              v29[1] = v31;
              v29[2] = v32;
              v29[3] = v33;
              v28 += 4;
              v29 += 4;
            }
            while ( v28 != v30 );
            *v29 = (*v28);
            v34 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300));
            v35 = 9 * v38;
            SF_DRAFT_PTR(uint32, 0x8011C99Cu)[v35] = 0;
            SF_DRAFT_PTR(uint32, 0x8011C994u)[v35] = -(v34 + 40);
            *SF_DRAFT_PTR(_WORD, (v26 + 22)) = 128;
            v36 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            if ( v36 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              *SF_DRAFT_PTR(_DWORD, (76 * v36 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) &= ~0x4000u;
            v37 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
            *SF_DRAFT_PTR(_DWORD, (v26 + 16)) = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3192));
            return sub_800C818C(*v37, v26);
          }
        }
      }
    }
  }
  return result;
}

sint32 sub_8001E350(void)
{
  struct { int v30, v31, v32, v33, v34, v35, v36; int padding[1]; } matrix;
    FUNCTION_MARKER(0x8001E350u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  _DWORD *v1; 

  _DWORD *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 

  _DWORD *v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  _DWORD *v15; 
  _DWORD *v16; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  __int16 v37[4]; 
  int v38; 
  int var4[3]; 

  v1 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v29 = (*SF_DRAFT_PTR(uint32, 0x800101DCu));
  if ( v1[595] )
  {
    v18 = v1[598];
    v19 = v1[599];
  }
  v37[0] = -(__int16)v1[597];
  v37[1] = v18;
  v37[2] = -(__int16)v19;
  sub_800EBE94(sf_draft_guest_address(v37), sf_draft_guest_address(&matrix));
  v3 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  HIWORD(matrix.v30) = -HIWORD(matrix.v30);
  v4 = -HIWORD(matrix.v32);
  HIWORD(matrix.v32) = -HIWORD(matrix.v32);
  HIWORD(matrix.v31) = -HIWORD(matrix.v31);
  HIWORD(matrix.v33) = -HIWORD(matrix.v33);
  v20 = (__int16)v4;
  v21 = (__int16)matrix.v34;
  if ( v3[514] )
  {
    v5 = v3[517];
    v6 = v3[518];
    v7 = v3[519];
    v38 = v3[516];
    var4[0] = v5;
    var4[1] = v6;
    var4[2] = v7;
  }
  else
  {
    v38 = v3[516];
  }
  v22 = sub_800C6D4C((__int16)matrix.v31, v38);
  v23 = sub_800C6D4C(v20, v38);
  v24 = sub_800C6D4C(v21, v38);
  sub_800189FC((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 0, 1, 1);
  v10 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v25 = v10[839] + (*SF_DRAFT_PTR(uint32, 0x8011921Cu)) - v22;
  v26 = v10[840] + (*SF_DRAFT_PTR(uint32, 0x80119220u)) - v23;
  v27 = v10[841] + (*SF_DRAFT_PTR(uint32, 0x80119224u)) - v24;
  if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) == 1 )
  {
    v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    if ( v11[109] )
    {
      v12 = v11[124];
      v13 = v11[125];
      v14 = v11[126];
      matrix.v30 = v11[123];
      matrix.v31 = v12;
      matrix.v32 = v13;
      matrix.v33 = v14;
    }
    else
    {
      matrix.v30 = v11[123];
    }
    matrix.v34 = matrix.v30 - v25;
    matrix.v35 = matrix.v31 - v26;
    matrix.v36 = matrix.v32 - v27;
    sub_800D9580(sf_draft_guest_address(&matrix.v34), sf_draft_guest_address(var4));
    if ( var4[0] < 17 )
    {
      v25 = matrix.v30;
      v26 = matrix.v31;
      v27 = matrix.v32;
      v28 = matrix.v33;
    }
    else
    {
      sub_800C720C(sf_draft_guest_address(&matrix.v34), sf_draft_guest_address(&matrix.v34));
      matrix.v34 = sub_800C6D4C(matrix.v34, 16);
      matrix.v35 = sub_800C6D4C(matrix.v35, 16);
      matrix.v36 = sub_800C6D4C(matrix.v36, 16);
      v25 += matrix.v34;
      v26 += matrix.v35;
      v27 += matrix.v36;
    }
  }
  v15 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v15[839] = v25;
  v15[840] = v26;
  v15[841] = v27;
  v15[842] = v28;
  v16 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v16[844] = 1;
  v16[845] = 1;
  v16[846] = 1;
  v16[847] = v29;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 0, 1);
  return 1;
}

sint32 sub_8001EE00(void)
{
    FUNCTION_MARKER(0x8001EE00u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  _DWORD *v1; 
  int v2; 
  int v3; 
  int v4; 
  _DWORD *v5; 
  int v6; 
  int v7; 
  int v8; 

  _DWORD *v10; 
  int v11; 
  int v12; 
  int v13; 
  _DWORD *v14; 
  int v15; 
  int v16; 
  int v17; 

  _DWORD *v19; 
  int v20; 
  int v21; 
  _DWORD *v23; 
  int v24; 
  int v25; 
  int v26; 

  _DWORD *v28; 
  _DWORD *v30; 
  int v31; 
  int v32; 
  int v33; 

  _DWORD *v35; 
  _DWORD *v37; 
  int v38; 
  int v39; 
  int v40; 
  int v42; 
  int v43[4]; 
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
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 

  if ( (*SF_DRAFT_PTR(uint8, 0x8011921Au)) == 1 )
  {
    sub_8001E8A4();
  }
  else
  {
    sub_8001D9A4();
    sub_8001E314();
    sub_8001B51C();
    sub_8001E350();
    sub_8001E710(sf_draft_guest_address(v43));
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v42);
    sub_80020258();
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x801191F4u)) == 7 && !(*SF_DRAFT_PTR(uint32, 0x801191ECu)) )
  {
    v44 = SF_DRAFT_PTR(uint32, 0x800101F0u)[0];
    v45 = SF_DRAFT_PTR(uint32, 0x800101F0u)[1];
    v46 = SF_DRAFT_PTR(uint32, 0x800101F8u)[0];
    v47 = SF_DRAFT_PTR(uint32, 0x800101F8u)[1];
    v48 = SF_DRAFT_PTR(uint32, 0x80010200u)[0];
    v49 = SF_DRAFT_PTR(uint32, 0x80010200u)[1];
    v50 = SF_DRAFT_PTR(uint32, 0x80010208u)[0];
    v51 = SF_DRAFT_PTR(uint32, 0x80010208u)[1];
    v1 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v60 = -1;
    v56 = SF_DRAFT_PTR(uint32, 0x80010208u)[2];
    v57 = SF_DRAFT_PTR(uint32, 0x80010214u)[0];
    v58 = SF_DRAFT_PTR(uint32, 0x80010214u)[1];
    v59 = SF_DRAFT_PTR(uint32, 0x80010214u)[2];
    v2 = SF_DRAFT_PTR(uint32, 0x800101F0u)[1];
    v3 = SF_DRAFT_PTR(uint32, 0x800101F8u)[0];
    v4 = SF_DRAFT_PTR(uint32, 0x800101F8u)[1];
    v1[839] = SF_DRAFT_PTR(uint32, 0x800101F0u)[0];
    v1[840] = v2;
    v1[841] = v3;
    v1[842] = v4;
    v5 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v6 = v49;
    v7 = v50;
    v8 = v51;
    v5[844] = v48;
    v5[845] = v6;
    v5[846] = v7;
    v5[847] = v8;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
    sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 0, 5);
    v10 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v11 = v45;
    v12 = v46;
    v13 = v47;
    v10[839] = v44;
    v10[840] = v11;
    v10[841] = v12;
    v10[842] = v13;
    v14 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v15 = v49;
    v16 = v50;
    v17 = v51;
    v14[844] = v48;
    v14[845] = v15;
    v14[846] = v16;
    v14[847] = v17;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
    sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 3, 5);
    v65 = (*SF_DRAFT_PTR(uint32, 0x800101C0u));
    v66 = (*SF_DRAFT_PTR(uint32, 0x800101C4u));
    v67 = (*SF_DRAFT_PTR(uint32, 0x800101C8u));
    v68 = (*SF_DRAFT_PTR(uint32, 0x800101CCu));
    v19 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v61 = v60;
    v62 = v60;
    v63 = v60;
    v20 = v60;
    v21 = v60;
    v19[839] = v60;
    v19[840] = v20;
    v19[841] = v21;
    v19[842] = sf_draft_missing_padding_8001EE00(0x74u);
    v23 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v24 = v66;
    v25 = v67;
    v26 = v68;
    v23[844] = v65;
    v23[845] = v24;
    v23[846] = v25;
    v23[847] = v26;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
    sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 2, 5);
    v28 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v52 = 0;
    v53 = 1630208;
    v54 = 0;
    v28[839] = 0;
    v28[840] = 1630208;
    v28[841] = 0;
    v28[842] = sf_draft_missing_padding_8001EE00(0x4Cu);
    v30 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v31 = v57;
    v32 = v58;
    v33 = v59;
    v30[844] = v56;
    v30[845] = v31;
    v30[846] = v32;
    v30[847] = v33;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
    sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 6, 4);
    v35 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v52 = 0;
    v53 = -1;
    v54 = 0;
    v35[839] = 0;
    v35[840] = -1;
    v35[841] = 0;
    v35[842] = sf_draft_missing_padding_8001EE00(0x4Cu);
    v37 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
    v38 = v57;
    v39 = v58;
    v40 = v59;
    v37[844] = v56;
    v37[845] = v38;
    v37[846] = v39;
    v37[847] = v40;
    *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
    sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 6, 5);
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x80119394u)) && (*SF_DRAFT_PTR(uint32, 0x80119394u)) > 0 )
    --(*SF_DRAFT_PTR(uint32, 0x80119394u));
  (*SF_DRAFT_PTR(uint8, 0x8011921Au)) = 0;
  return 1;
}

sint32 sub_800654F4(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800654F4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v5; 
  _DWORD *v6; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  char *v10; 
  char *v11; 
  int v12; 
  __int16 *v13; 
  int result; 




  int v21; 
  int v23; 
  int v24; 
  int v26; 
  int v27; 
  int v28; 
  int v30; 
  int v31; 
  int v32; 
  int v33;
  int direction[3]; 

  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 77)) = a2;
  sub_80032784(a1, sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011CF28u)[54 * a2]), 2, 2u);
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 2)) = 1;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 180)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 184)) = 0;
  *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011D438u)[106 * a2]);
  sub_80048884(a1, 0, 0, 0, 0);
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) = sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011DE28u)[86 * a2]);
  sub_8004A240(a1, 30144, 99584, 4096, 819, 819);
  sub_800223E0(a1, -1, 1);
  sub_8006E0D8(a1, -2147483647, 0, 0, -1, -1);
  SF_DRAFT_PTR(uint32, 0x8011E638u)[a2] = 160;
  sub_80017140((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(&v30), 0x80116798u);
  v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2864));
  v21 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 68) + v5));
  v23 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 68) + v5 + 2));
  v24 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 68) + v5 + 4));
  v26 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 67) + v5));
  v27 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 67) + v5 + 2));
  v28 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 67) + v5 + 4));
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 68)) = 1;
  v6 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408));
  v6[18] = v21;
  v6[19] = v23;
  v6[20] = v24;
  v6[21] = sf_draft_missing_padding_800654F4(0x2Cu);
  v7 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408));
  v7[22] = v26;
  v7[23] = v27;
  v7[24] = v28;
  v7[25] = sf_draft_missing_padding_800654F4(0x3Cu);
  v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  if ( (*SF_DRAFT_PTR(_DWORD, (v8 + 32)) & 0x20) != 0 )
  {
    v9 = 0;
    if ( !*SF_DRAFT_PTR(_BYTE, (v8 + 67)) )
    {
      v10 = SF_DRAFT_PTR(char, *(char **)(SF_DRAFT_GP + 2864));
      v31 = *(__int16 *)v10;
      v32 = *((__int16 *)v10 + 1);
      v33 = *((__int16 *)v10 + 2);
      v11 = v10;
      while ( 1 )
      {
        v12 = v11[8];
        ++v9;
        if ( v12 > 0 )
          break;
        v11 = &v10[v9];
        if ( v9 >= 3 )
          goto LABEL_7;
      }
      v13 = (__int16 *)&v10[12 * v12];
      direction[0] = *v13;
      direction[1] = v13[1];
      direction[2] = v13[2];
LABEL_7:
      direction[1] = 0;
      direction[0] = v31 - direction[0];
      direction[2] = v33 - direction[2];
      sub_800DD0DC((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12))), 0, sf_draft_guest_address(direction), 0);
    }
  }
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) &= ~0x400u;
  result = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  *SF_DRAFT_PTR(_BYTE, (result + 69)) = 0;
  SF_DRAFT_PTR(uint8, 0x8011678Cu)[a2] = 0;
  return result;
}

sint32 sub_80029924(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80029924u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint8 *a2_view = SF_DRAFT_PTR(uint8, a2);
  int v3; 
  int v4; 
  int v5; 
  uint8 v6; 
  int v7; 
  int v8; 
  int v9; 
  _DWORD *v10; 
  _BYTE *v11; 
  int v12; 
  int v13; 
  int v14; 
  void ( *v15)(_DWORD, int); 
  int v16; 
  int v17; 
  int *v18; 
  void ( *v19)(_DWORD, _DWORD); 
  int result; 
  uint8 *v21; 
  int v23; 
  int v25; 
  uint8 v26; 
  char v27; 

  v21 = (uint8 *)(a2_view);
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  v4 = *SF_DRAFT_PTR(_DWORD, (v3 + 12)) + 8;
  v25 = *SF_DRAFT_PTR(_DWORD, (v3 + 20));
  do
  {
    v26 = 0;
    v23 = 0;
    if ( *v21 )
    {
      do
      {
        v27 = 0;
        v5 = *(_DWORD *)(4 * v23 + *((_DWORD *)v21 + 1));
        v6 = 0;
        if ( v5 )
        {
          v7 = 0;
          v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
          v9 = *SF_DRAFT_PTR(_DWORD, (v8 + 16));
          SF_DRAFT_PTR(uint8, 0x80119440u)[v5] = 0;
          v10 = SF_DRAFT_PTR(_DWORD, (v9 + 44 * v5));
          v11 = SF_DRAFT_PTR(_BYTE, (v8 + 8));
          if ( v10[6] )
            v7 = sub_800287AC(a1, sf_draft_guest_address(v10), v8 + 8);
          *SF_DRAFT_PTR(_DWORD, v4) = -1;
          v12 = 0;
          v13 = v4;
          while ( *SF_DRAFT_PTR(_DWORD, (v13 + 4)) == 255
               || *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 6)
               && *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 7)
               && *SF_DRAFT_PTR(_DWORD, (v13 + 4)) != *((uint8 *)sub_800282C4(sf_draft_guest_address(v10), ((uint8)v11[1]), v7) + 8) )
          {
            ++v12;
            v13 += 4;
            if ( v12 >= 3 )
              goto LABEL_13;
          }
          *SF_DRAFT_PTR(_DWORD, v4) = v12;
LABEL_13:
          if ( sub_800283E0(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11)) )
          {
            sub_80029048(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11), v7);
            sub_800284C8(a1, sf_draft_guest_address(v10), sf_draft_guest_address(v11), v7);
            if ( !v25 || *SF_DRAFT_PTR(_DWORD, v4) == -1 || *SF_DRAFT_PTR(_DWORD, (4 * *SF_DRAFT_PTR(_DWORD, v4) + v4 + 16)) != 1 )
            {
              v27 = 1;
              v6 = 1;
            }
            v14 = v6;
            if ( v27 )
            {
              v15 = (void ( *)(_DWORD, int))v10[7];
              if ( v15 )
                v15(*SF_DRAFT_PTR(__int16, (a1 + 2)), v5);
              v14 = v6;
            }
            if ( v14 && v10[8] )
              sub_80015364((v10[8]), 2u, (*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), 0, 0, 0, 0);
            v26 = 1;
            *(_DWORD *)(4 * v23 + *((_DWORD *)v21 + 1)) = 0;
          }
          if ( *SF_DRAFT_PTR(_WORD, (v4 + 100)) )
          {
            v16 = 0;
            if ( *SF_DRAFT_PTR(__int16, (v4 + 100)) > 0 )
            {
              v17 = 104;
              do
              {
                v18 = SF_DRAFT_PTR(int, sub_800282C4((*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 16))), *(uint8 *)(v4 + v17 + 9), (*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 12)))));
                v19 = (void ( *)(_DWORD, _DWORD))v18[4];
                if ( v19 )
                  v19(*SF_DRAFT_PTR(__int16, (v4 + v17)), *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (v4 + v17 + 16)) + 4));
                if ( *((_BYTE *)v18 + 20) )
                  sub_80015364((*((_BYTE *)v18 + 20)), 5u, (*SF_DRAFT_PTR(__int16, (a1 + 2))), (*SF_DRAFT_PTR(__int16, (a1 + 2))), 0, 0, 0, 0);
                ++v16;
                v17 += 20;
              }
              while ( v16 < *SF_DRAFT_PTR(__int16, (v4 + 100)) );
            }
            *SF_DRAFT_PTR(_WORD, (v4 + 100)) = 0;
          }
        }
        ++v23;
      }
      while ( v23 < *v21 );
    }
    result = v26;
  }
  while ( v26 );
  *v21 = 0;
  return result;
}

sint32 sub_80032340(sint32 a1)
{
    FUNCTION_MARKER(0x80032340u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int v3; 
  __int16 v4; 
  __int16 v5; 
  int v6; 
  int result; 
  int v8; 
  int *v9; 
  int v10; 
  int v11; 
  _DWORD *v12; 
  int v13; 
  int v14; 
  char v15; 
  int v16; 
  int v17; 
  int v18; 
  int *v19; 

  v2 = -1;
  v3 = -1;
  v4 = (*SF_DRAFT_PTR(uint32, 0x80116B54u));
  v5 = 32000;
  if ( *SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2 )
  {
    v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    v2 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
    if ( v6 && (*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 1) != 0 || (*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 0x100000) != 0 && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 13 )
      v2 = sub_80056F8C(*SF_DRAFT_PTR(__int16, (a1 + 2)));
  }
  else
  {
    result = (*SF_DRAFT_PTR(uint16, 0x801169A0u));
    v8 = 0;
    if ( (*SF_DRAFT_PTR(uint16, 0x801169A0u)) >= 0 )
      return result;
    (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = 0;
    v9 = SF_DRAFT_PTR(int, 0x8012F120u);
    while ( 1 )
    {
      v10 = *v9;
      if ( *v9 >= 0 )
        break;
      ++v8;
      ++v9;
      if ( v8 >= 6 )
        goto LABEL_13;
    }
    (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v8 + 1;
LABEL_13:
    if ( v10 >= 0 )
    {
      v11 = 4 * v10;
      do
      {
        v12 = (_DWORD *)(4 * (4 * (v11 + v10) - v10) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)));
        v13 = v12[13];
        if ( v13 && *SF_DRAFT_PTR(_DWORD, (v13 + 24)) )
        {
          v14 = 666;
          if ( v10 != 666 )
            v14 = *(__int16 *)(20 * *v12 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)));
          if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))
            || (v15 = 0, v14 != 53)
            && v14 != 76
            && v14 != 92
            && (!(*SF_DRAFT_PTR(uint32, 0x801169BCu)) || (uint8)sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x801169BCu))), 1u, (const uint32[]){(uint32)(*SF_DRAFT_PTR(__int16, (v13 + 2)))})) )
          {
            v15 = 1;
          }
          if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 24)) + 8)) <= 0 || !v15 )
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) &= ~1u;
          if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) & 8) != 0 )
          {
            v16 = *SF_DRAFT_PTR(__int16, (v13 + 2));
            if ( v16 != *SF_DRAFT_PTR(__int16, (a1 + 2)) && (!(*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) || v16 != **(__int16 **)(a1 + 20)) )
            {
              v17 = (uint8)sub_80031F2C(a1, v16, 1);
              if ( v17 != 1 )
                goto LABEL_43;
              if ( (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 20)) + 4)) & 0x10) == 0 )
                v17 = 2;
              if ( v17 == 1 )
              {
                if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44)) < v4 )
                {
                  v2 = *SF_DRAFT_PTR(__int16, (v13 + 2));
                  v4 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44));
                }
              }
              else
              {
LABEL_43:
                if ( (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) && v17 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44)) < v5 )
                {
                  v3 = *SF_DRAFT_PTR(__int16, (v13 + 2));
                  v5 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v13 + 28)) + 44));
                }
              }
            }
          }
        }
        v18 = (*SF_DRAFT_PTR(uint16, 0x8011690Eu));
        v10 = -1;
        if ( (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) < 6 )
        {
          v19 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[(*SF_DRAFT_PTR(uint16, 0x8011690Eu))];
          while ( 1 )
          {
            v10 = *v19;
            if ( *v19 >= 0 )
              break;
            ++v18;
            ++v19;
            if ( v18 >= 6 )
              goto LABEL_49;
          }
          (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v18 + 1;
        }
LABEL_49:
        v11 = 4 * v10;
      }
      while ( v10 >= 0 );
    }
  }
  if ( v3 != -1 )
  {
    result = v2;
    if ( v2 != -1 )
      return result;
    return v3;
  }
  return v2;
}

sint32 sub_80035F4C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80035F4Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int result; 
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
  int v20; 
  __int16 v21; 
  __int16 v22; 
  __int16 v23; 
  __int16 v24; 

  if ( a3 == 1 )
  {
    result = a3;
    if ( !*a1_view )
    {
      result = a3;
      if ( !a1_view[2] )
      {
        *a2_view = 0;
        a2_view[1] = 0;
        a2_view[2] = 0;
        return result;
      }
    }
  }
  else
  {
    result = a3;
  }
  if ( result || *a2_view || (result = a2_view[2]) != 0 )
  {
    v21 = **(_WORD **)*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    v22 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 4));
    v6 = (__int16)-*SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 6));
    v23 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 12));
    v24 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 16));
    if ( (v6 & 0x8000u) != 0 )
      v6 = -(__int16)v6;
    v12 = v21;
    v15 = v23;
    v17 = v22;
    v20 = v24;
    if ( v6 < 2896 )
    {
      v17 = -v23;
      v20 = v21;
    }
    else
    {
      v12 = v24;
      v15 = -v22;
    }
    if ( a3 == 1 )
    {
      v13 = sub_800C6D4C(v12, (*a1_view));
      v14 = sub_800C6D4C(0, (*a1_view));
      v16 = sub_800C6D4C(v15, (*a1_view));
      v18 = sub_800C6D4C(v17, (a1_view[2]));
      v19 = sub_800C6D4C(0, (a1_view[2]));
      v7 = sub_800C6D4C(v20, (a1_view[2]));
      *a2_view = v13 + v18;
      a2_view[1] = v14 + v19;
      result = v16 + v7;
      a2_view[2] = result;
    }
    else
    {
      v8 = sub_800C6D4C((*a2_view), v12);
      v9 = sub_800C6D4C((a2_view[1]), 0);
      *a1_view = v8 + v9 + sub_800C6D4C((a2_view[2]), v15);
      a1_view[1] = 0;
      v10 = sub_800C6D4C((*a2_view), v17);
      v11 = sub_800C6D4C((a2_view[1]), 0);
      result = sub_800C6D4C((a2_view[2]), v20);
      a1_view[2] = v10 + v11 + result;
    }
  }
  else
  {
    *a1_view = 0;
    a1_view[1] = 0;
    a1_view[2] = 0;
  }
  return result;
}

sint32 sub_8006CFBC(sint32 a1)
{
    FUNCTION_MARKER(0x8006CFBCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v2; 
  int v3; 
  signed int v4; 
  _DWORD *v5; 
  int v6; 
  int v7; 
  int *v8; 
  int v9; 
  int v10; 
  int v11; 
  int *v12; 
  int v13; 
  _DWORD *v14; 
  _DWORD *v15; 
  int v16; 
  signed int v17; 
  int v18; 
  int v19; 
  int *v20; 
  int v21; 
  int v22; 
  int v23; 
  int *v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  struct { int v30, v31, v32; } position;
  struct { int v33, v34, v35; } other;
  int distances[6]; 
  int v37[4]; 

  v2 = 0;
  v3 = 21312;
  v4 = 0;
  v5 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12));
  v6 = 0;
  v7 = v5[5];
  v8 = SF_DRAFT_PTR(int, 0x8012F120u);
  (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = 0;
  position.v30 = v7;
  v9 = v5[6];
  v37[0] = -1;
  position.v31 = v9;
  v10 = v5[7];
  position.v31 = -v9;
  position.v32 = v10;
  while ( 1 )
  {
    v11 = *v8;
    if ( *v8 >= 0 )
      break;
    ++v6;
    ++v8;
    if ( v6 >= 6 )
      goto LABEL_4;
  }
  (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v6 + 1;
LABEL_4:
  if ( v11 >= 0 )
  {
    v12 = distances;
    v13 = 4 * v11;
    do
    {
      v14 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(4 * (4 * (v13 + v11) - v11) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      v15 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v14[2] + 12));
      other.v33 = v15[5];
      other.v34 = v15[6];
      v16 = v15[7];
      other.v34 = -other.v34;
      other.v35 = v16;
      v17 = *(_DWORD *)(v14[5] + 212) & 0xFFFF3FFF;
      if ( (*(_DWORD *)(v14[7] + 32) & 2) != 0 )
        v17 = 2744;
      if ( v4 < v17 )
        v4 = v17;
      if ( v17 > 0 && *(__int16 *)(v14[6] + 8) > 0 )
      {
        sub_800E0364(sf_draft_guest_address(&position.v30), sf_draft_guest_address(&other.v33), sf_draft_guest_address(v37));
        v18 = v37[0];
        if ( v37[0] >= v3 )
        {
          *v12 = v37[0];
        }
        else
        {
          v3 = v37[0];
          /* The first self-store is overwritten before any observation */
          if (v2) *v12 = distances[0];
          distances[0] = v18;
        }
        if ( v2 < 5 )
        {
          ++v12;
          ++v2;
        }
      }
      v19 = (*SF_DRAFT_PTR(uint16, 0x8011690Eu));
      v11 = -1;
      if ( (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) < 6 )
      {
        v20 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[(*SF_DRAFT_PTR(uint16, 0x8011690Eu))];
        while ( 1 )
        {
          v11 = *v20;
          if ( *v20 >= 0 )
            break;
          ++v19;
          ++v20;
          if ( v19 >= 6 )
            goto LABEL_22;
        }
        (*SF_DRAFT_PTR(uint16, 0x8011690Eu)) = v19 + 1;
      }
LABEL_22:
      v13 = 4 * v11;
    }
    while ( v11 >= 0 );
  }
  v21 = 0;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Eu));
      v22 = 0;
    }
    else if ( (unsigned int)(v4 - 1351) >= 0x571 )
    {
      if ( (unsigned int)(v4 - 2744) >= 0x548 )
      {
        v22 = 0;
        if ( v4 == 4096 )
          v21 = (*SF_DRAFT_PTR(sint8, 0x8010D021u));
      }
      else
      {
        v21 = (*SF_DRAFT_PTR(sint8, 0x8010D020u));
        v22 = 0;
      }
    }
    else
    {
      v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Fu));
      v22 = 0;
    }
  }
  else
  {
    v21 = (*SF_DRAFT_PTR(sint8, 0x8010D01Du));
    v22 = 0;
  }
  v23 = 0;
  if ( v2 > 0 )
  {
    v24 = distances;
    do
    {
      v25 = (3200 - *v24) >> 5;
      if ( !(*SF_DRAFT_PTR(sint8, 0x8010D01Cu)) )
        _break(7u, 0);
      if ( (*SF_DRAFT_PTR(sint8, 0x8010D01Cu)) == -1 && v25 == 0x80000000 )
        _break(6u, 0);
      v26 = v25 / (*SF_DRAFT_PTR(sint8, 0x8010D01Cu));
      if ( v26 < 0 )
        v26 = 0;
      v27 = SF_DRAFT_PTR(sint8, 0x8010D018u)[v22] * v26;
      if ( !(*SF_DRAFT_PTR(sint8, 0x8010D01Cu)) )
        _break(7u, 0);
      if ( (*SF_DRAFT_PTR(sint8, 0x8010D01Cu)) == -1 && v27 == 0x80000000 )
        _break(6u, 0);
      ++v24;
      ++v22;
      v23 += v27 / (*SF_DRAFT_PTR(sint8, 0x8010D01Cu));
    }
    while ( v22 < v2 );
  }
  v28 = v21 + v23 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2968));
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2964)) )
    v28 += (*SF_DRAFT_PTR(sint8, 0x8010D022u));
  if ( v28 < 101 )
  {
    if ( v28 <= 0 )
      v28 = 1;
  }
  else
  {
    v28 = 100;
  }
  return sub_8006CF68(v28);
}

sint32 sub_8006B90C(sint32 a1, uint32 a2, sint32 a3, uint32 a4, uint32 a9, uint32 a10)
{
    FUNCTION_MARKER(0x8006B90Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a4_view = SF_DRAFT_PTR(int, a4);
    _WORD *a9_view = SF_DRAFT_PTR(_WORD, a9);
    _WORD *a10_view = SF_DRAFT_PTR(_WORD, a10);

  int result; 
  int v14; 
  _DWORD *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30[4]; 
  int v31; 

  if ( a3 && *SF_DRAFT_PTR(__int16, (a3 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (result = 4, a4_view) )
  {
    if ( a3 )
    {
      v14 = *SF_DRAFT_PTR(_DWORD, (a3 + 8));
      if ( !v14 )
      {
        v15 = SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (a3 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        v27 = v15[6];
        v28 = v15[7];
        v29 = v15[8];
LABEL_10:
        v24 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 20));
        v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 24));
        v17 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u)))) + 28));
        v25 = -v25;
        v26 = v17;
        sub_800E0220(sf_draft_guest_address(&v24), sf_draft_guest_address(&v27), sf_draft_guest_address(&v31));
        if ( a1 == 4 )
          v18 = 127;
        else
          v18 = sub_800C19D0((SF_DRAFT_PTR(uint32, 0x8011E8A0u)[a1]), (__int16)a2, -1);
        v31 -= 640;
        if ( v31 < 0 )
          v31 = 0;
        if ( a1 != 2 || a2 - 29 >= 4 || (v19 = 1600, (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 18) )
        {
          if ( a1 != 1 || a2 - 38 >= 4 || (v19 = 1600, (*SF_DRAFT_PTR(uint16, 0x80130C88u))) )
          {
            if ( a1 || a2 != 11 )
            {
              v19 = 3840;
              if ( a1 == 4 )
                v19 = 1920;
            }
            else
            {
              v19 = 1600;
            }
          }
        }
        v20 = (__int16)v18 * v31 / v19;
        LOWORD(v21) = v18 - v20;
        if ( (v18 - v20) << 16 <= 0 )
        {
          LOWORD(v21) = 0;
          if ( !a1 )
            v21 = a2 < 2 ? 0x1E : 0;
        }
        sub_800DD8C0(sf_draft_guest_address(&v27), 0, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u))))), sf_draft_guest_address(v30));
        v22 = 360 * sub_800EC124(v30[0], v30[2]);
        v23 = (unsigned int)v22 >> 12;
        if ( v22 < 0 )
          v23 = -(-v22 >> 12);
        result = v23 << 16;
        if ( (v23 & 0x8000) != 0 )
          LOWORD(v23) = v23 + 360;
        goto LABEL_35;
      }
      v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 20));
      v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a3 + 8)) + 12)) + 24));
      v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a3 + 8)) + 12)) + 28));
      v28 = -v28;
    }
    else
    {
      v27 = *a4_view;
      v28 = a4_view[1];
      v16 = a4_view[2];
    }
    v29 = v16;
    goto LABEL_10;
  }
  LOWORD(v21) = -1;
  LOWORD(v23) = -1;
  if ( a1 == 4 )
  {
    result = *(uint8 *)(SF_DRAFT_GP + 954) << 24;
    LOWORD(v21) = *SF_DRAFT_PTR(char, (SF_DRAFT_GP + 954));
  }
LABEL_35:
  *a9_view = v21;
  *a10_view = v23;
  return result;
}

void sub_80038AB4(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80038AB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v4; 
  int v5; 
  int v6; 
  _DWORD *v7; 
  _DWORD *v8; 
  int v9; 
  _DWORD *v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  _DWORD *v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  uint8 v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  _DWORD *v28; 
  _DWORD *v29; 
  int v30; 
  int v31; 
  int v32; 

  v4 = a2 + 4;
  v5 = (a2 + 4) & 3;
  v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v7 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(a1 + 96));
  v8 = SF_DRAFT_PTR(_DWORD, (a1 + 100));
  if ( v5 )
  {
    v6 += 8 * v5;
    v4 &= 0xFFFFFFFC;
  }
  *SF_DRAFT_PTR(_BYTE, (a1 + 20)) = (*SF_DRAFT_PTR(_DWORD, (4 * (v6 >> 5) + v4)) & (1 << (v6 & 0x1F))) != 0;
  sub_800357CC(a1, a2);
  v9 = 0;
  v10 = v8;
  do
  {
    *v10 = 0;
    v10[1] = 0;
    v10[2] = 0;
    v10[10] = -1;
    v10[9] = -1;
    ++v9;
    v10 += 15;
  }
  while ( v9 < 4 );
  sub_800358DC(sf_draft_guest_address(SF_DRAFT_PTR(int, (a2 + 12))), 0, sf_draft_guest_address(v7 + 16));
  v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
  if ( v11 == 1 )
  {
    v7[23] = 4096;
  }
  else if ( v11 == 2 )
  {
    v7[23] = -4096;
  }
  else
  {
    v7[23] = 0;
  }
  v7[24] = 0;
  v7[25] = 0;
  if ( *SF_DRAFT_PTR(_BYTE, (a2 + 2)) )
  {
    sub_800358DC(sf_draft_guest_address(SF_DRAFT_PTR(int, (a2 + 28))), 1, sf_draft_guest_address(v7 + 9));
    sub_800358DC(sf_draft_guest_address(SF_DRAFT_PTR(int, (a2 + 44))), 1, sf_draft_guest_address(v7 + 2));
  }
  else
  {
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
  }
  sub_80035B24(a1);
  sub_80035C04(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
  v12 = 0;
  v13 = (unsigned int)v7;
  do
  {
    v14 = 0;
    v15 = v13 + 4;
    v16 = v8;
    do
    {
      v17 = v13;
      v18 = v14;
      if ( (v13 & 3) != 0 )
      {
        v18 = v14 + 8 * (v13 & 3);
        v17 = v13 & 0xFFFFFFFC;
      }
      v19 = v13 + 4;
      v20 = *SF_DRAFT_PTR(_DWORD, (4 * (v18 >> 5) + v17)) & (1 << (v18 & 0x1F));
      v21 = v14;
      if ( (v15 & 3) != 0 )
      {
        v21 = v14 + 8 * (v15 & 3);
        v19 = v15 & 0xFFFFFFFC;
      }
      v22 = 0;
      v23 = *SF_DRAFT_PTR(_DWORD, (4 * (v21 >> 5) + v19)) & (1 << (v21 & 0x1F));
      if ( !v20 )
        goto LABEL_24;
      v24 = 0;
      if ( v23 )
      {
        if ( *SF_DRAFT_PTR(_DWORD, (v13 + 8)) || (v24 = 0, *SF_DRAFT_PTR(_DWORD, (v13 + 16))) )
        {
          v22 = 1;
LABEL_24:
          v24 = v22;
        }
      }
      if ( v24 || (v25 = v22, v20) && (v25 = v22, *SF_DRAFT_PTR(_DWORD, (v13 + 8))) )
      {
        v26 = *SF_DRAFT_PTR(_DWORD, (v13 + 8));
        v16[9] = v12;
        *v16 = (v26);
        v25 = v22;
      }
      if ( v25 || v23 && *SF_DRAFT_PTR(_DWORD, (v13 + 16)) )
      {
        v27 = *SF_DRAFT_PTR(_DWORD, (v13 + 16));
        v16[10] = v12;
        v16[2] = v27;
      }
      ++v14;
      v16 += 15;
    }
    while ( v14 < 4 );
    ++v12;
    v13 += 28;
  }
  while ( v12 < 4 );
  v28 = v8;
  v29 = v8;
  do
  {
    sub_800D9580(sf_draft_guest_address(v29), sf_draft_guest_address(v28 + 8));
    if ( v28[8] )
    {
      sub_800C720C(sf_draft_guest_address(v28), sf_draft_guest_address(v28 + 4));
    }
    else
    {
      v28[4] = 0;
      v28[5] = 0;
      v28[6] = 0;
    }
    if ( (int)v28[8] >= 4097 )
    {
      v30 = v28[5];
      v31 = v28[6];
      v32 = v28[7];
      *v28 = v28[4];
      v28[1] = v30;
      v28[2] = v31;
      v28[3] = v32;
    }
    v28 += 15;
    v29 = v28;
  }
  while ( (int)v28 < (int)(v8 + 60) );
  sub_80035D58(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
  sub_80035F44(a1);
  sub_80038098(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
  sub_800362C4(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
  sub_80036A1C(a1);
  sub_800382B0(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
}

sint32 sub_80075B08(uint32 a1)
{
    FUNCTION_MARKER(0x80075B08u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    __int16 *a1_view = SF_DRAFT_PTR(__int16, a1);
  int v2; 
  int v3; 
  int v4; 
  int *v5; 
  int v6; 
  int result; 
  void ( *v8)(int *, __int16 *, char *); 
  uint8 v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 
  int *v14; 
  int v15; 
  int v16; 
  char v17; 
  sint32 i; 
  _DWORD *v19; 
  void ( *v20)(int *, __int16 *, char *); 
  void ( *v21)(int *, _DWORD, _DWORD); 
  char v22[8]; 
  int v23; 
  char v24; 
  char v25; 
  char v26; 
  char v27; 
  char v28; 
  int (*v29)(); 
  int v30; 
  unsigned int v31; 
  int v32; 

  v2 = -3;
  v3 = (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * *a1_view + 144;
  while ( 1 )
  {
    switch ( v2 )
    {
      case -3:
        v5 = &(*SF_DRAFT_PTR(uint32, 0x80128E50u));
        break;
      case -2:
        v5 = &(*SF_DRAFT_PTR(uint32, 0x801301F8u));
        break;
      case -1:
        v4 = *a1_view;
        v5 = 0;
        if ( v4 < (sint32)r_u32(0x801169B0u) )
        {
          v6 = 16 * v4;
          if ( v4 >= 0 )
LABEL_9:
            v5 = (int *)((*SF_DRAFT_PTR(uint32, 0x80116994u)) + 4 * (v6 - v4));
        }
        break;
      default:
        v4 = *(uint8 *)(v3 + v2);
        v6 = 16 * v4;
        if ( v4 < (sint32)r_u32(0x801169B0u) )
          goto LABEL_9;
        v5 = 0;
        break;
    }
    result = 1;
    if ( !v5 )
      return result;
    v8 = (void ( *)(int *, __int16 *, char *))*((_DWORD *)a1_view + 3);
    if ( v8 && v5[5] )
      v8(v5 + 5, a1_view + 6, v22);
    else
      v22[0] = 1;
    v9 = 0;
    if ( !v22[0] )
      goto LABEL_52;
    v10 = 0;
    v11 = *((_DWORD *)a1_view + 1);
    v24 = 1;
    v25 = 1;
    v23 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v28 = 0;
    v30 = 0;
    if ( v2 < -1 )
    {
      v12 = v11;
    }
    else if ( v11 == 4 || (v12 = v11) == 0 )
    {
      v9 = 1;
      v13 = *v5;
      v14 = &v23;
      sub_800CCA38(v13, sf_draft_guest_address(&v31), sf_draft_guest_address(&v32));
      goto LABEL_25;
    }
    v14 = (int *)v5[v12 + 10];
LABEL_25:
    v15 = v9;
    if ( v14 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = 0;
        if ( v15 )
        {
          for ( i = v10 < v31; i; i = v10 < v31 )
          {
            v19 = SF_DRAFT_PTR(_DWORD, (v32 + v16));
            v23 = v32 + v16;
            if ( !v11 && (*v19 & 1) != 0 )
            {
              v29 = 0;
              goto LABEL_38;
            }
            if ( v11 == 4 && (*v19 & 0x10) != 0 )
            {
              v29 = sub_800830AC;
              *((_BYTE *)v14 + 8) = (*v19 & 0x200) != 0;
              goto LABEL_38;
            }
            v16 += 72;
            ++v10;
          }
          v17 = 1;
LABEL_38:
          if ( v17 )
            goto LABEL_52;
        }
        if ( *((_DWORD *)a1_view + 38) )
          break;
LABEL_48:
        if ( v15 )
        {
          v16 += 72;
          ++v10;
        }
        else
        {
          v14 = (int *)v14[4];
        }
        if ( !v14 )
          goto LABEL_52;
      }
      v20 = (void ( *)(int *, __int16 *, char *))*((_DWORD *)a1_view + 38);
      v22[0] = 0;
      v20(v14, a1_view + 76, v22);
      v21 = (void ( *)(int *, _DWORD, _DWORD))v14[3];
      if ( v21 )
      {
        if ( v22[0] )
        {
          if ( *((_BYTE *)v14 + 8) )
            goto LABEL_46;
LABEL_45:
          v21(v14, *((_DWORD *)a1_view + 1), *((_DWORD *)a1_view + 39));
        }
        else if ( *((_BYTE *)v14 + 8) == 1 )
        {
          goto LABEL_45;
        }
      }
LABEL_46:
      if ( v22[0] )
      {
        result = 1;
        if ( *((_BYTE *)a1_view + 8) == 1 )
          return result;
      }
      goto LABEL_48;
    }
LABEL_52:
    ++v2;
  }
}
