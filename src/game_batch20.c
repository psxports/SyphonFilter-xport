#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);

sint32 sub_8004AE84(sint32 a1)
{
    FUNCTION_MARKER(0x8004AE84u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  _DWORD *v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int result; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31[6]; 
  int v32; 
  v25 = (*SF_DRAFT_PTR(uint32, 0x80011F30u));
  v26 = (*SF_DRAFT_PTR(uint32, 0x80011F34u));
  v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 208));
  if ( v2 < 0 )
    v3 = -(-v2 >> 12);
  else
    v3 = v2 >> 12;
  v27 = v3;
  v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 212));
  if ( v4 < 0 )
    v5 = -(-v4 >> 12);
  else
    v5 = v4 >> 12;
  v28 = v5;
  v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 216));
  if ( v6 < 0 )
    v7 = -(-v6 >> 12);
  else
    v7 = v6 >> 12;
  v29 = v7;
  v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 200)) + v7;
  v23 = v8;
  if ( v8 >= 2049 )
  {
    v9 = v8 - 4096;
LABEL_13:
    v23 = v9;
    goto LABEL_14;
  }
  v9 = v8 + 4096;
  if ( v8 < -2048 )
    goto LABEL_13;
LABEL_14:
  v24 = v23 << 12;
  v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  if ( (*SF_DRAFT_PTR(_DWORD, v10) & 8) == 0 || *SF_DRAFT_PTR(_BYTE, (v10 + 8)) != 1 || (v11 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12))), (v11[101] & 0x100) != 0) )
  {
    v19 = v24;
    if ( v24 < 0 )
    {
      v20 = -v24;
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  v12 = v11[10];
  v13 = v11[11];
  v27 = v11[8];
  v29 = v12;
  v30 = v13;
  v28 = 0;
  sub_800D9580(sf_draft_guest_address(&v27), sf_draft_guest_address(v31));
  if ( v24 <= 326223 )
  {
    if ( v31[0] <= 45856 )
      goto LABEL_29;
  }
  else if ( v31[0] < 13089 )
  {
LABEL_29:
    v19 = v24;
    if ( v24 < 0 )
    {
      v20 = -v24;
LABEL_34:
      v18 = v20 >> 1;
      goto LABEL_35;
    }
LABEL_32:
    v18 = -(v19 >> 1);
    goto LABEL_35;
  }
  v14 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
  v15 = v14[41];
  v16 = v14[42];
  v17 = v14[43];
  v31[2] = v14[40];
  v31[3] = v15;
  v31[4] = v16;
  v31[5] = v17;
  v32 = -4 * v15;
  if ( -4 * v15 <= 792257 )
  {
    if ( -4 * v15 >= -792257 )
      v32 = -4 * v15;
    else
      v32 = -792257;
  }
  else
  {
    v32 = 792257;
  }
  if ( v32 - v24 < 0 )
    v18 = -((v24 - v32) >> 3);
  else
    v18 = (v32 - v24) >> 3;
LABEL_35:
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 208)) += v25;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 212)) += v26;
  v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  result = *SF_DRAFT_PTR(_DWORD, (v21 + 216)) + v18;
  *SF_DRAFT_PTR(_DWORD, (v21 + 216)) = result;
  return result;
}

sint32 sub_8005A2B0(sint32 a1)
{
    FUNCTION_MARKER(0x8005A2B0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int *v3; 
  int v4; 
  int v6; 
  __int16 *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int result; 
  sint32 direction[3];
  int v23[4]; 
  v2 = 0;
  v3 = &(*SF_DRAFT_PTR(uint32, 0x8011E650u));
  v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  sub_8003320C(a1, 0);
  v6 = *SF_DRAFT_PTR(__int16, (v4 + 44));
  if ( v6 >= *SF_DRAFT_PTR(sint32, (SF_DRAFT_GP + 3432)) - 160
    && ((*SF_DRAFT_PTR(_DWORD, (v4 + 32)) & 1) == 0 || *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20))) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) )
  {
    goto LABEL_22;
  }
  v7 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
  if ( *v7 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) )
    {
      if ( v6 < 2560 )
      {
        v2 = 1;
        if ( (*((_DWORD *)v7 + 1) & 2) != 0 )
          goto LABEL_22;
      }
    }
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v4 + 72)) )
  {
    v8 = 1934;
    v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) - 160;
  }
  else
  {
    v8 = 682;
    if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 18 )
      v9 = 1184;
    else
      v9 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) - (((6 * (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3432)) - 160)) >> 4) + 160);
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v4 + 72)) != 2 )
  {
    direction[0] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
    direction[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
    v11 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
    direction[1] = 0;
    goto LABEL_20;
  }
  v10 = *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a1 + 20)));
  if ( v10 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    direction[0] = *SF_DRAFT_PTR(_DWORD, (v4 + 16)) - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
    direction[1] = *SF_DRAFT_PTR(_DWORD, (v4 + 20)) - (*SF_DRAFT_PTR(uint32, 0x8011E664u));
    v11 = *SF_DRAFT_PTR(_DWORD, (v4 + 24)) - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
LABEL_20:
    direction[2] = v11;
    goto LABEL_21;
  }
  if ( v10 < 0 )
  {
    direction[0] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24))) + 4));
    direction[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24))) + 10));
    v17 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24))) + 16));
    direction[1] = -direction[1];
    direction[0] = -direction[0];
    direction[2] = v17;
    v11 = -v17;
    goto LABEL_20;
  }
  v12 = 76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  direction[0] = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v12 + 52)) + 12))) - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
  direction[1] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 52)) + 12)) + 4)) - (*SF_DRAFT_PTR(uint32, 0x8011E664u));
  direction[2] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v12 + 52)) + 12)) + 8)) - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
  v13 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (v12 + 52)) + 12)));
  v14 = v13[1];
  v15 = v13[2];
  v16 = v13[3];
  v23[0] = *v13;
  v23[1] = v14;
  v23[2] = v15;
  v23[3] = v16;
  v3 = v23;
LABEL_21:
  sub_800C720C(sf_draft_guest_address(&direction[0]), sf_draft_guest_address(&direction[0]));
  v2 = sub_80034450((*SF_DRAFT_PTR(__int16, (a1 + 2))), sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011E660u))), sf_draft_guest_address(&direction[0]), v9, v8, sf_draft_guest_address(v3));
LABEL_22:
  result = v2;
  if ( v2 )
  {
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 2) != 0 )
    {
      sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
      return v2;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

sint32 sub_80076630(sint32 a1, uint32 a2, sint32 a3, sint8 a4)
{
    FUNCTION_MARKER(0x80076630u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  sint32 v9; 
  sint32 v10; 
  sint32 v11; 
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
  v5 = a3;
  v16 = *a2_view;
  v17 = a2_view[1];
  v18 = a2_view[2];
  v19 = a2_view[4];
  v20 = a2_view[5];
  v21 = a2_view[6];
  v6 = 0;
  if ( !a3 || a3 == 666 )
  {
    v12 = v19 - v16;
    if ( v20 - v17 < v21 - v18 )
    {
      if ( v12 < v21 - v18 )
        goto LABEL_26;
    }
    else if ( v12 < v20 - v17 )
    {
LABEL_26:
      v13 = v21 - v18;
      if ( v20 - v17 >= v21 - v18 )
        v13 = v20 - v17;
      goto LABEL_29;
    }
    v13 = v19 - v16;
LABEL_29:
    if ( a3 )
      LOWORD(v14) = v13 + 160;
    else
      v14 = (v13 >> 1) + 160;
    *SF_DRAFT_PTR(_WORD, (a1 + 10)) = v14;
    goto LABEL_33;
  }
  if ( a3 <= 0 )
  {
    v5 = -a3;
    v7 = v20 - v17;
    v22 = v20 - v17;
    v23 = v21 - v18;
    if ( a4 )
      v20 += 160;
    v8 = v7;
    if ( v20 == 166 )
    {
      v6 = v7;
    }
    else
    {
      if ( v21 - v18 < v7 )
        v8 = v21 - v18;
      v6 = v19 - v16;
      v9 = a3 > 0;
      if ( v8 >= v19 - v16 )
      {
LABEL_13:
        if ( !v9 )
        {
          v10 = a3 > 0;
          if ( v6 != v19 - v16 )
            goto LABEL_16;
        }
        goto LABEL_15;
      }
      v6 = v8;
    }
    v9 = a3 > 0;
    goto LABEL_13;
  }
LABEL_15:
  LOWORD(v19) = v19 + v5;
  LOWORD(v16) = v16 - v5;
  v10 = a3 > 0;
LABEL_16:
  if ( v10 || (v11 = a3 > 0, v6 == v22) )
  {
    LOWORD(v20) = v20 + v5;
    LOWORD(v17) = v17 - v5;
    v11 = a3 > 0;
  }
  if ( v11 || v6 == v23 )
  {
    v21 += v5;
    LOWORD(v18) = v18 - v5;
  }
LABEL_33:
  *SF_DRAFT_PTR(_DWORD, a1) = 128;
  *SF_DRAFT_PTR(_DWORD, (a1 + 68)) = 0;
  *SF_DRAFT_PTR(_WORD, (a1 + 36)) = v16;
  *SF_DRAFT_PTR(_WORD, (a1 + 38)) = v17;
  *SF_DRAFT_PTR(_WORD, (a1 + 40)) = v18;
  *SF_DRAFT_PTR(_WORD, (a1 + 44)) = v19;
  *SF_DRAFT_PTR(_WORD, (a1 + 46)) = v17;
  *SF_DRAFT_PTR(_WORD, (a1 + 48)) = v18;
  *SF_DRAFT_PTR(_WORD, (a1 + 52)) = v16;
  *SF_DRAFT_PTR(_WORD, (a1 + 54)) = v17;
  *SF_DRAFT_PTR(_WORD, (a1 + 56)) = v21;
  *SF_DRAFT_PTR(_WORD, (a1 + 60)) = v19;
  *SF_DRAFT_PTR(_WORD, (a1 + 62)) = v17;
  *SF_DRAFT_PTR(_WORD, (a1 + 64)) = v21;
  *SF_DRAFT_PTR(_WORD, (a1 + 4)) = v16;
  *SF_DRAFT_PTR(_WORD, (a1 + 6)) = v20;
  *SF_DRAFT_PTR(_WORD, (a1 + 8)) = v18;
  *SF_DRAFT_PTR(_WORD, (a1 + 12)) = v19;
  *SF_DRAFT_PTR(_WORD, (a1 + 14)) = v20;
  *SF_DRAFT_PTR(_WORD, (a1 + 16)) = v18;
  *SF_DRAFT_PTR(_WORD, (a1 + 20)) = v16;
  *SF_DRAFT_PTR(_WORD, (a1 + 22)) = v20;
  *SF_DRAFT_PTR(_WORD, (a1 + 24)) = v21;
  *SF_DRAFT_PTR(_WORD, (a1 + 28)) = v19;
  *SF_DRAFT_PTR(_WORD, (a1 + 30)) = v20;
  result = v21;
  *SF_DRAFT_PTR(_WORD, (a1 + 32)) = v21;
  return result;
}

sint32 sub_80088ACC(sint32 a1, uint8 a2)
{
    FUNCTION_MARKER(0x80088ACCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int result; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int *v14; 
  int v15; 
  int v16; 
  int v17; 
  v3 = 0;
  if ( a1 )
  {
    v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( v5 )
      v3 = *SF_DRAFT_PTR(_DWORD, (v5 + 416)) != 0 ? SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v5 + 416))) : 0;
  }
  if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) != 8 )
  {
    v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 300));
    v13 = *SF_DRAFT_PTR(_DWORD, (v11 + 272)) - 9;
    v14 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 16)));
    v15 = *v14;
    v16 = a2;
    if ( (*v14 & 0x9000) == 0 )
    {
      v17 = *((uint8 *)v14 + 8);
      if ( v17 != 4 && v17 != 10 )
      {
        v16 = a2;
        if ( (v15 & 0x800000) != 0 )
          goto LABEL_27;
        v16 = a2;
        if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x100) != 0 )
          goto LABEL_27;
        if ( v12 != -2147483647 && v13 - v12 < 65 )
        {
          if ( !v3 )
            return v12;
          result = v12;
          if ( *v3 != 1 )
            return result;
        }
      }
      v16 = a2;
    }
LABEL_27:
    if ( v16 )
      return v13;
    else
      return *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 4)) - 105;
  }
  if ( (unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 34)) - 1 < 2 )
  {
    v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v6 + 16)) + 40)) & 0x400000) != 0 && (*SF_DRAFT_PTR(_BYTE, (v6 + 8)) & 0x10) == 0 )
    {
      if ( *SF_DRAFT_PTR(_DWORD, (a1 + 12)) )
      {
        if ( v3 )
        {
          if ( *v3 == 1 )
          {
            v7 = v3[2];
            if ( v7 )
            {
              v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 60));
              if ( v8 == 8 || v8 == 2 )
                return (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * *SF_DRAFT_PTR(_DWORD, (v3[2] + 60)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)))) + 24))))
                     - 212;
            }
          }
        }
      }
    }
  }
  v10 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 24)) + 32)) + 24))));
  return v10 - 212;
}

sint32 sub_8005F834(void)
{
    FUNCTION_MARKER(0x8005F834u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v2; 
  int v3; 
  uint8 *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  bool v10; // dc
  uint8 *v11; 
  int v12; 
  int v13; 
  int v14; 
  int *v15; 
  int v16; 
  int v17; 
  int v18; 
  _WORD *v19; 
  __int16 v20; 
  int v21; 
  __int16 v22; 
  __int16 v23; 
  int v24; 
  if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2876)) >= 0 )
  {
    result = 0;
    if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2880))) < 0x15 )
      return result;
  }
  v2 = 0;
  v3 = 0;
  v4 = SF_DRAFT_PTR(uint8, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * (*SF_DRAFT_PTR(uint16, 0x80116946u)) + 144));
  while ( 1 )
  {
    v5 = *v4;
    if ( v5 >= (*SF_DRAFT_PTR(sint32, 0x801169B0u)) )
      break;
    ++v4;
    if ( !((*SF_DRAFT_PTR(uint32, 0x80116994u)) + 60 * v5) )
      break;
    ++v3;
  }
  v6 = v3 - 1;
  if ( (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3836)) & 1) != 0 )
  {
    v7 = -2;
    v8 = -1;
  }
  else
  {
    v6 = -1;
    v7 = v3;
    v8 = 1;
  }
  v9 = v6;
  v10 = v6 == v7;
  result = 0;
  if ( v10 )
    return result;
  v11 = SF_DRAFT_PTR(uint8, (v9 + (*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * (*SF_DRAFT_PTR(uint16, 0x80116946u)) + 144));
  while ( 1 )
  {
    if ( v9 == -1 )
    {
      if ( (*SF_DRAFT_PTR(uint16, 0x80116946u)) >= (*SF_DRAFT_PTR(uint32, 0x801169B0u)) || (*SF_DRAFT_PTR(uint16, 0x80116946u)) < 0 )
        v12 = 0;
      else
        v12 = (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 60 * (*SF_DRAFT_PTR(uint16, 0x80116946u));
      v13 = (*SF_DRAFT_PTR(uint16, 0x80116946u));
    }
    else
    {
      v14 = *v11;
      if ( v14 >= (*SF_DRAFT_PTR(sint32, 0x801169B0u)) )
        v12 = 0;
      else
        v12 = (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 60 * v14;
      v13 = *v11;
    }
    if ( !v12 )
      return 0;
    v15 = SF_DRAFT_PTR(int, ((*SF_DRAFT_PTR(uint32, 0x80116B10u)) + 8 * v13));
    v16 = 0;
    if ( *v15 > 0 )
      break;
LABEL_44:
    v9 += v8;
    v11 += v8;
    if ( v9 == v7 )
      return 0;
  }
  while ( 1 )
  {
    if ( (*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3836)) & 1) != 0 )
      v17 = *SF_DRAFT_PTR(uint8, (*v15 - v16 + v15[1] - 1));
    else
      v17 = *SF_DRAFT_PTR(uint8, (v15[1] + v16));
    v18 = 1 << (v17 & 0x1F);
    if ( (v2 & v18) != 0 )
      goto LABEL_43;
    v19 = SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80116ADCu)) + 16 * v17));
    v2 |= v18;
    if ( (*v19 & 0x8000) != 0 )
      break;
    if ( (*SF_DRAFT_PTR(uint8, 0x801169FCu))
      && (*SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80116ADCu)) + 16 * v17)) & 0x7FF) != 0
      && !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3880))
      && sub_8005F58C(v17) )
    {
      v23 = *v19 & 0xF800 | ((*v19 & 0x7FF) - 1) & 0x7FF;
      v24 = ((*v19 & 0x7FF) - 1) & 0x7FF;
      *v19 = v23;
      if ( v24 )
        goto LABEL_42;
      v22 = v23 & 0xBFFF;
      if ( (v23 & 0x8000) == 0 )
        goto LABEL_40;
      goto LABEL_41;
    }
LABEL_43:
    if ( ++v16 >= *v15 )
      goto LABEL_44;
  }
  if ( (*SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80116ADCu)) + 16 * v17)) & 0x4000) == 0 || !sub_8005F58C(v17) )
    goto LABEL_43;
  v20 = *v19 & 0xF800 | ((*v19 & 0x7FF) - 1) & 0x7FF;
  v21 = ((*v19 & 0x7FF) - 1) & 0x7FF;
  *v19 = v20;
  if ( v21 )
    goto LABEL_42;
  v22 = v20 & 0xBFFF;
  if ( (v20 & 0x8000) == 0 )
  {
LABEL_40:
    *v19 = v22;
    goto LABEL_42;
  }
LABEL_41:
  sub_8005FCD0(v17);
LABEL_42:
  ++*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3836));
  return 1;
}

BOOL sub_800184BC(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800184BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
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
  _DWORD *v15; 
  unsigned int v16; 
  int v17; 
  char v18; 
  int v19; 
  uint8 v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  uint32 v25; 
  bool v26; 
  int v27; 
  v26 = 1;
  if ( a3 )
    *SF_DRAFT_PTR(_DWORD, (a1 + 3396)) = a3;
  else
    v26 = *SF_DRAFT_PTR(_DWORD, (a1 + 3396)) != 0;
  if ( v26 )
  {
    v4 = 0;
    v5 = 8;
    v27 = 12;
    v6 = 432;
    v25 = *SF_DRAFT_PTR(uint32, a1 + 8);
    *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = a2;
    do
    {
      v7 = a1 + v6;
      v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) + v27;
      v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 3396)) + v5;
      if ( a1 + v6 && v9 && v8 )
      {
        *SF_DRAFT_PTR(_BYTE, v7) = *SF_DRAFT_PTR(_BYTE, v8);
        *SF_DRAFT_PTR(_DWORD, (v7 + 4)) = *SF_DRAFT_PTR(_DWORD, (v8 + 4));
        v10 = *SF_DRAFT_PTR(_DWORD, (v7 + 4));
        *SF_DRAFT_PTR(_DWORD, (v7 + 8)) = *SF_DRAFT_PTR(_DWORD, (v8 + 8));
        *SF_DRAFT_PTR(_DWORD, (v7 + 188)) = -2147483647;
        *SF_DRAFT_PTR(_DWORD, (v7 + 156)) = -2147483647;
        if ( v10 )
        {
          *SF_DRAFT_PTR(_DWORD, (v7 + 192)) = -2147483647;
          *SF_DRAFT_PTR(_DWORD, (v7 + 160)) = -2147483647;
          *SF_DRAFT_PTR(_DWORD, (v7 + 196)) = -2147483647;
          *SF_DRAFT_PTR(_DWORD, (v7 + 164)) = -2147483647;
          *SF_DRAFT_PTR(_DWORD, (v7 + 204)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 172)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 208)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 176)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 212)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 180)) = 0x7FFFFFFF;
        }
        else
        {
          *SF_DRAFT_PTR(_DWORD, (v7 + 204)) = 0x7FFFFFFF;
          *SF_DRAFT_PTR(_DWORD, (v7 + 172)) = 0x7FFFFFFF;
        }
        sub_800C6E48(v7 + 220, v9, 12);
        sub_800C6E48(v7 + 268, v9, 12);
        if ( *SF_DRAFT_PTR(_DWORD, (v7 + 4)) )
        {
          *SF_DRAFT_PTR(_DWORD, (v7 + 140)) = 0;
          *SF_DRAFT_PTR(_DWORD, (v7 + 144)) = 0;
          *SF_DRAFT_PTR(_DWORD, (v7 + 148)) = 0;
        }
        else
        {
          *SF_DRAFT_PTR(_DWORD, (v7 + 140)) = 0;
        }
      }
      else
      {
        v26 = 0;
      }
      v5 += 48;
      v6 += 324;
      ++v4;
      v27 += 28;
    }
    while ( v4 < 9 );
    if ( v26 )
    {
      v11 = 0;
      if ( *SF_DRAFT_PTR(_BYTE, (a1 + 2052)) == 1 )
      {
        v12 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 3396)));
        *SF_DRAFT_PTR(_BYTE, (a1 + 3392)) = 1;
        *SF_DRAFT_PTR(_DWORD, (a1 + 3356)) = v12;
        sub_80018994(a1, 1, 5, 1);
        v11 = 0;
      }
      v13 = 12;
      v14 = 432;
      do
      {
        v15 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + v13));
        v16 = v15[4];
        v17 = a1 + v14;
        if ( v16 >= 2 )
          v18 = 0;
        else
          v18 = sub_80018994(a1, 0, v15[3], v16);
        v19 = *SF_DRAFT_PTR(_DWORD, (a1 + 3372));
        v20 = 0;
        if ( v15[5] != -1 && v15[6] != -1 )
          v20 = sub_800189FC(a1, 0, v15[5], v15[6]);
        v21 = *SF_DRAFT_PTR(_DWORD, (a1 + 3352));
        v22 = v20;
        if ( v18 == 1 )
        {
          *SF_DRAFT_PTR(_DWORD, (v17 + 316)) = v19;
        }
        else
        {
          if ( v20 == 1 && v15[6] )
            *SF_DRAFT_PTR(_DWORD, (v17 + 316)) = *SF_DRAFT_PTR(_DWORD, (a1 + 3372));
          else
            *SF_DRAFT_PTR(_DWORD, (v17 + 316)) = 0;
          v22 = v20;
        }
        if ( v22 != 1 || v15[6] )
          *SF_DRAFT_PTR(_DWORD, (v17 + 320)) = 0;
        else
          *SF_DRAFT_PTR(_DWORD, (v17 + 320)) = v21;
        v13 += 28;
        ++v11;
        v14 += 324;
      }
      while ( v11 < 9 );
      if ( v26 )
      {
        v23 = *SF_DRAFT_PTR(uint32, a1 + 8);
        if ( v23 != v25 )
          return (bool)sf_draft_call(*SF_DRAFT_PTR(uint32, v23), 1, (const uint32[]){(uint32)a1});
      }
    }
  }
  return v26;
}

sint32 sub_8006DAE0(sint32 a1)
{
    FUNCTION_MARKER(0x8006DAE0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int *v2; 
  _DWORD *v3; 
  _DWORD *v4; 
  int v5; 
  _DWORD *v6; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  sint32 position_output[3];
  sint32 translated_position[3];
  sint32 delta_position[3];
  int v23; 
  v11 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
  v12 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
  v13 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
  v2 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 12)));
  v3 = SF_DRAFT_PTR(_DWORD, v2[104]);
  v8 = *v2;
  v9 = v2[1];
  v10 = v2[2];
  v4 = SF_DRAFT_PTR(_DWORD, v3[9]);
  if ( v4 )
  {
    sub_800DD8C0(sf_draft_guest_address(v4 + 1), (*v4), 0, sf_draft_guest_address(&position_output[0]));
    translated_position[0] = position_output[0] - v8 + v11;
    translated_position[1] = position_output[1] - v9 + v12;
    translated_position[2] = position_output[2] - v10 + v13;
    sub_80048420(sf_draft_guest_address(v4 + 15));
    sub_80048354(sf_draft_guest_address(v4 + 15), sf_draft_guest_address(&translated_position[0]));
    if ( *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416))) == 3 )
    {
      delta_position[0] = v4[31] - v4[15];
      delta_position[1] = v4[32] - v4[16];
      delta_position[2] = v4[33] - v4[17];
      sub_800D9580(sf_draft_guest_address(&delta_position[0]), sf_draft_guest_address(&v23));
      if ( v23 >= 17 )
        sub_800D97D4(sf_draft_guest_address(v4 + 35), 16, sf_draft_guest_address(&delta_position[0]));
      translated_position[0] = v4[15] + delta_position[0];
      translated_position[1] = v4[16] + delta_position[1];
      translated_position[2] = v4[17] + delta_position[2];
      sub_80048354(sf_draft_guest_address(v4 + 15), sf_draft_guest_address(&translated_position[0]));
    }
  }
  v5 = v3[13];
  if ( v5 )
  {
    sub_800DD8C0(v5 + 4, *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)), 0, sf_draft_guest_address(&position_output[0]));
    translated_position[0] = position_output[0] - v8;
    translated_position[1] = position_output[1] - v9;
    translated_position[2] = position_output[2] - v10;
    sub_80048420(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (v5 + 60))));
    sub_80048354(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (v5 + 60))), sf_draft_guest_address(&translated_position[0]));
  }
  v6 = SF_DRAFT_PTR(_DWORD, v3[14]);
  for ( result = 1; v6; result = 1 )
  {
    if ( v6 != SF_DRAFT_PTR(_DWORD, v3[9]) )
    {
      sub_800DD8C0(sf_draft_guest_address(v6 + 1), (*v6), 0, sf_draft_guest_address(&position_output[0]));
      translated_position[0] = position_output[0] - v8 + v11;
      translated_position[2] = position_output[2] - v10 + v13;
      translated_position[1] = position_output[1] - v9 + v12;
      sub_80048420(sf_draft_guest_address(v6 + 15));
      sub_80048354(sf_draft_guest_address(v6 + 15), sf_draft_guest_address(&translated_position[0]));
    }
    v6 = SF_DRAFT_PTR(_DWORD, v6[93]);
  }
  return result;
}

sint32 sub_8006D708(sint32 a1)
{
    FUNCTION_MARKER(0x8006D708u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int *v7; 
  _DWORD *v8; 
  int v9; 
  int result; 
  int v11; 
  _DWORD *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  v2 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416)));
  sub_8006DAE0(a1);
  sub_8006DDEC(a1, 1);
  v3 = v2[9];
  if ( v3 && *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416))) == 3 )
    sub_800734E4(a1, 0, v3, *SF_DRAFT_PTR(_DWORD, (v3 + 368)), *SF_DRAFT_PTR(sint32, v3 + 364), sf_draft_guest_address(v2 + 16));
  v4 = v2[13];
  if ( v4 )
    sub_800734E4(a1, 0, v4, *SF_DRAFT_PTR(_DWORD, (v4 + 368)), *SF_DRAFT_PTR(sint32, v4 + 364), sf_draft_guest_address(v2 + 16));
  sub_800493F0(a1, 1, 0);
  if ( (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 10)) & 2) != 0 )
    sub_80049690(a1, 1, 0);
  v5 = a1;
  if ( *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416))) == 3 )
  {
    v6 = v2[10];
    if ( !v6 )
    {
      sub_8006DA20(a1, -1);
      v5 = a1;
      v6 = v2[10];
    }
    v2[9] = v6;
    sub_8006DA20(v5, 0);
    v5 = a1;
  }
  sub_8006DDEC(v5, 0);
  v7 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 12)));
  v15 = *v7;
  v16 = v7[1];
  v17 = v7[2];
  v18 = v7[20];
  v19 = v7[21];
  v20 = v7[22];
  v21 = v7[23];
  v8 = SF_DRAFT_PTR(_DWORD, v2[11]);
  if ( !v8 )
    v8 = SF_DRAFT_PTR(_DWORD, v2[9]);
  v9 = v2[9];
  result = 1;
  if ( v8 )
  {
    v8[79] = v15 + v8[15];
    v8[80] = v16 + v8[16];
    v8[81] = v17 + v8[17];
    v8[83] = v18 + v8[35];
    v8[84] = v19 + v8[36];
    v11 = v8[37];
    v8[87] = 0;
    v8[88] = 0;
    v8[89] = 0;
    v8[85] = v20 + v11;
    if ( v8 == SF_DRAFT_PTR(_DWORD, v2[11]) )
    {
      sub_80096A90(a1, sf_draft_guest_address(v8), 0x7FFFFFFF, *SF_DRAFT_PTR(_DWORD, (v9 + 368)), (uint32)v9 + 364);
    }
    else
    {
      v8[91] = 0;
      *SF_DRAFT_PTR(_DWORD, (v9 + 364)) = 0;
    }
    if ( *SF_DRAFT_PTR(_DWORD, (v9 + 364)) )
    {
      v12 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
      v13 = v19 + v8[88];
      v14 = v20 + v8[89];
      v12[20] = v18 + v8[87];
      v12[21] = v13;
      v12[22] = v14;
      v12[23] = v21;
    }
    return 1;
  }
  return result;
}

sint32 sub_800DC0B8(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DC0B8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    char *a2_view = SF_DRAFT_PTR(char, a2);
  int result; 
  __int16 v6; 
  __int16 v7; 
  int v8; 
  __int16 v9; 
  int v10; 
  char *v11; 
  char *v12; 
  char *v13; 
  bool v14; // dc
  __int16 v15; 
  __int16 v16; 
  int v17; 
  __int16 v18; 
  char v19[20]; 
  int v20; 
  int v21; 
  int v22; 
  char v23[32]; 
  if ( !a1 )
    return 24;
  v6 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
  *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -*SF_DRAFT_PTR(_WORD, (a3 + 2));
  v7 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
  *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v6;
  v8 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
  *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v7;
  v9 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v8;
  *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v9;
  v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
  if ( v10 )
  {
    v11 = SF_DRAFT_PTR(char, *SF_DRAFT_PTR(uint32, (v10 + 32)));
    if ( a2_view == v11 )
    {
      *SF_DRAFT_PTR(_WORD, v10) = *SF_DRAFT_PTR(_WORD, a3);
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 2)) = *SF_DRAFT_PTR(_WORD, (a3 + 2));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 4)) = *SF_DRAFT_PTR(_WORD, (a3 + 4));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 6)) = *SF_DRAFT_PTR(_WORD, (a3 + 6));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 8)) = *SF_DRAFT_PTR(_WORD, (a3 + 8));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 10)) = *SF_DRAFT_PTR(_WORD, (a3 + 10));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 12)) = *SF_DRAFT_PTR(_WORD, (a3 + 12));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 14)) = *SF_DRAFT_PTR(_WORD, (a3 + 14));
      *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 16)) = *SF_DRAFT_PTR(_WORD, (a3 + 16));
LABEL_14:
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 44)) = 1;
LABEL_18:
      result = 0;
      goto LABEL_19;
    }
    if ( a2_view )
    {
      v14 = v11 != 0;
      v12 = a2_view;
      if ( !v14 )
      {
        v13 = SF_DRAFT_PTR(char, a3);
        goto LABEL_13;
      }
    }
    else
    {
      if ( v11 )
      {
        sub_800EBBC4(sf_draft_guest_address(v11), sf_draft_guest_address(v19));
        v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 20));
        v21 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 24));
        v12 = v19;
        v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 28));
        v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
        v13 = SF_DRAFT_PTR(char, a3);
LABEL_13:
        sub_800EACE4(sf_draft_guest_address(v12), sf_draft_guest_address(v13), v10);
        goto LABEL_14;
      }
      v12 = 0;
    }
    sub_800EACE4(sf_draft_guest_address(v12), a3, sf_draft_guest_address(v23));
    sub_800EBBC4(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)), sf_draft_guest_address(v19));
    v20 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 20));
    v21 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 24));
    v12 = v19;
    v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) + 28));
    v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
    v13 = v23;
    goto LABEL_13;
  }
  if ( !a2_view )
  {
    *SF_DRAFT_PTR(_WORD, a1) = *SF_DRAFT_PTR(_WORD, a3);
    *SF_DRAFT_PTR(_WORD, (a1 + 2)) = *SF_DRAFT_PTR(_WORD, (a3 + 2));
    *SF_DRAFT_PTR(_WORD, (a1 + 4)) = *SF_DRAFT_PTR(_WORD, (a3 + 4));
    *SF_DRAFT_PTR(_WORD, (a1 + 6)) = *SF_DRAFT_PTR(_WORD, (a3 + 6));
    *SF_DRAFT_PTR(_WORD, (a1 + 8)) = *SF_DRAFT_PTR(_WORD, (a3 + 8));
    *SF_DRAFT_PTR(_WORD, (a1 + 10)) = *SF_DRAFT_PTR(_WORD, (a3 + 10));
    *SF_DRAFT_PTR(_WORD, (a1 + 12)) = *SF_DRAFT_PTR(_WORD, (a3 + 12));
    *SF_DRAFT_PTR(_WORD, (a1 + 14)) = *SF_DRAFT_PTR(_WORD, (a3 + 14));
    *SF_DRAFT_PTR(_WORD, (a1 + 16)) = *SF_DRAFT_PTR(_WORD, (a3 + 16));
    goto LABEL_18;
  }
  sub_800EACE4(sf_draft_guest_address(a2_view), a3, a1);
  result = 0;
LABEL_19:
  v15 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
  *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -*SF_DRAFT_PTR(_WORD, (a3 + 2));
  v16 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
  *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v15;
  v17 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
  *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v16;
  v18 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v17;
  *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v18;
  return result;
}

sint32 sub_8004A240(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10)
{
    FUNCTION_MARKER(0x8004A240u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v10; 
  int result; 
  int v12; 
  int v13; 
  if ( !a1 )
    return 0;
  v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  result = 0;
  if ( !v10 )
    return result;
  v12 = v10 + 408;
  if ( !*SF_DRAFT_PTR(_DWORD, (v10 + 408)) )
  {
    v13 = sub_800DE414(344);
    *SF_DRAFT_PTR(_DWORD, (v10 + 408)) = v13;
    if ( !v13 )
      return 0;
  }
  *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v12)) = a9;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 4)) = a10;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 8)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 12)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 16)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 24)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 28)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 32)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 40)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 44)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 48)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 52)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 60)) = 5;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 64)) = 5;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, v12) + 68)) = 1;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 72)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 76)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 80)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 88)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 92)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 96)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 104)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 108)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 112)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 116)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 124)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 128)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 132)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 140)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 144)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 148)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 156)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 160)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 164)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 172)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 176)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 180)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 184)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 188)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 196)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 200)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 204)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 240)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 244)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 248)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 256)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 260)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 264)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 272)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 276)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 280)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 288)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 292)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 296)) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v12) + 304)) = -2147483647;
  result = 1;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, v12) + 308)) = 0;
  return result;
}

uint32 sub_80097F98(uint32 a1)
{
    FUNCTION_MARKER(0x80097F98u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int *result; 
  int v7; 
  int *v8; 
  int *v9; 
  int v10; 
  int *v11; 
  int *v12; 
  int v13; 
  int *v14; 
  int v15; 
  int v16; 
  int v17; 
  v2 = a1_view[4];
  v3 = *SF_DRAFT_PTR(uint8, (v2 + 8));
  if ( v3 != 4 && (*SF_DRAFT_PTR(_DWORD, v2) & 0x810000) != 0x800000 )
    return *SF_DRAFT_PTR(uint32, a1_view[2] + 40);
  if ( v3 == 6 )
    return *SF_DRAFT_PTR(uint32, a1_view[2] + 40);
  if ( !a1_view )
    return *SF_DRAFT_PTR(uint32, a1_view[2] + 40);
  v4 = a1_view[3];
  if ( !v4 )
    return *SF_DRAFT_PTR(uint32, a1_view[2] + 40);
  v5 = 0;
  if ( !*SF_DRAFT_PTR(_DWORD, (v4 + 408)) )
    return *SF_DRAFT_PTR(uint32, a1_view[2] + 40);
  v7 = 0;
  v8 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80121FA0u)));
  v9 = &(*SF_DRAFT_PTR(uint32, 0x80121FB4u));
  do
  {
    SF_DRAFT_PTR(uint32, 0x80121FA0u)[v7] = 4;
    v10 = 0;
    v11 = v9;
    v12 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80121FC4u)));
    do
    {
      *v11++ = (int)&v12[8 * v5];
      ++v10;
      v12 += 2;
    }
    while ( v10 < 4 );
    SF_DRAFT_PTR(uint32, 0x80121FA8u)[v7] = (int)(v8 + 3);
    v13 = SF_DRAFT_PTR(uint32, 0x80121FA8u)[v7];
    SF_DRAFT_PTR(uint32, 0x80121FA4u)[v7] = (int)&SF_DRAFT_PTR(uint8, 0x80116850u)[v5];
    *SF_DRAFT_PTR(_WORD, (v13 + 6)) = 0;
    *(_BYTE *)(SF_DRAFT_PTR(uint32, 0x80121FA4u)[v7]) = 0;
    if ( v5 - 1 < 0 )
      SF_DRAFT_PTR(uint32, 0x80121F98u)[v7] = 0;
    else
      SF_DRAFT_PTR(uint32, 0x80121F98u)[v7] = (int)&SF_DRAFT_PTR(uint32, 0x80121F6Cu)[v7];
    if ( v5 + 1 > 0 )
      SF_DRAFT_PTR(uint32, 0x80121F9Cu)[v7] = 0;
    else
      SF_DRAFT_PTR(uint32, 0x80121F9Cu)[v7] = (int)&SF_DRAFT_PTR(uint32, 0x80121FC4u)[v7];
    v7 += 11;
    v8 += 11;
    ++v5;
    v9 += 11;
  }
  while ( v5 <= 0 );
  v14 = SF_DRAFT_PTR(int, a1_view[3]);
  v15 = *v14;
  v17 = v14[2];
  v16 = *SF_DRAFT_PTR(_DWORD, (v14[102] + 184));
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(uint32, 0x80121FB4u))) = *v14 - 256;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FB4u)) + 2)) = v16;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FB4u)) + 4)) = v17 - 256;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(uint32, 0x80121FB8u))) = v15 - 256;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FB8u)) + 2)) = v16;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FB8u)) + 4)) = v17 + 256;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(uint32, 0x80121FBCu))) = v15 + 256;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FBCu)) + 2)) = v16;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FBCu)) + 4)) = v17 + 256;
  *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(uint32, 0x80121FC0u))) = v15 + 256;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FC0u)) + 2)) = v16;
  *SF_DRAFT_PTR(_WORD, ((*SF_DRAFT_PTR(uint32, 0x80121FC0u)) + 4)) = v17 - 256;
  *(_WORD *)(SF_DRAFT_PTR(uint32, 0x80121FA8u)[0]) = 0;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x80121FA8u)[0] + 2)) = 4096;
  result = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80121F98u)));
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x80121FA8u)[0] + 4)) = 0;
  return sf_draft_guest_address(result);
}

BOOL sub_8007E314(uint8 a1)
{
    FUNCTION_MARKER(0x8007E314u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int *v3; 
  int v4; 
  char *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  sint32 result; 
  int v12; 
  v2 = a1;
  v3 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011F364u)));
  v4 = 0;
  v5 = SF_DRAFT_PTR(char, 0x8011F358u);
  do
  {
    v6 = SF_DRAFT_PTR(uint32, 0x8011F35Cu)[v4];
    if ( !SF_DRAFT_PTR(uint8, 0x8011F359u)[v4 * 4] )
      goto LABEL_35;
    if ( *v3 )
    {
      if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v6 + 34)) - 1 >= 2 )
        goto LABEL_23;
      v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 8));
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 16)) + 40)) & 0x400000) == 0
        || (*SF_DRAFT_PTR(_BYTE, (v7 + 8)) & 0x10) != 0
        || !*SF_DRAFT_PTR(_DWORD, (v6 + 12)) )
      {
        goto LABEL_23;
      }
      if ( SF_DRAFT_PTR(uint32, 0x8011F36Cu)[v4] == 1 )
        sub_8003A2A8((SF_DRAFT_PTR(uint32, 0x8011F370u)[v4]), sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x8011F370u)[v4]));
      if ( (uint8)sub_8007DFD4(sf_draft_guest_address(v5)) != 1 )
        goto LABEL_23;
      if ( SF_DRAFT_PTR(uint8, 0x8011F360u)[v4 * 4] )
        goto LABEL_22;
      if ( v2 )
      {
        if ( (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (SF_DRAFT_PTR(uint32, 0x8011F35Cu)[v4] + 16))) & 0x20000) == 0 )
        {
          sub_8007A49C(sf_draft_guest_address(v5));
          if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v6 + 16)) + 8)) == 8 )
            sub_80024C8C(SF_DRAFT_PTR(uint32, 0x8011F35Cu)[v4]);
        }
LABEL_23:
        if ( v2 )
          goto LABEL_35;
      }
    }
    else
    {
      if ( (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v6 + 16)) + 8)) - 5 < 2
        || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v6 + 16)) + 8)) == 9 )
      {
        goto LABEL_23;
      }
      if ( SF_DRAFT_PTR(uint8, 0x8011F360u)[v4 * 4] )
      {
LABEL_22:
        SF_DRAFT_PTR(uint8, 0x8011F358u)[v4 * 4] = a1;
        (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v12);
        sub_8007F650(sf_draft_guest_address(v5));
        goto LABEL_23;
      }
      if ( v2 )
      {
        sub_8007A49C(sf_draft_guest_address(v5));
        goto LABEL_23;
      }
    }
    if ( *v3 > 0 )
      *(_DWORD *)(&SF_DRAFT_PTR(uint8, 0x8011F358u)[v4 * 4 + 12]) = *v3 - 1;
    v8 = SF_DRAFT_PTR(uint32, 0x8011F39Cu)[v4];
    if ( v8 > 0 )
      *(_DWORD *)(&SF_DRAFT_PTR(uint8, 0x8011F358u)[v4 * 4 + 68]) = v8 - 1;
    v9 = SF_DRAFT_PTR(uint32, 0x8011F3A4u)[v4];
    if ( v9 > 0 )
      *(_DWORD *)(&SF_DRAFT_PTR(uint8, 0x8011F358u)[v4 * 4 + 76]) = v9 - 1;
    v10 = SF_DRAFT_PTR(uint32, 0x8011F364u)[v4];
    SF_DRAFT_PTR(uint8, 0x8011F398u)[v4 * 4] = 0;
    SF_DRAFT_PTR(uint8, 0x8011F3A0u)[v4 * 4] = 0;
    if ( !v10 && (!SF_DRAFT_PTR(uint8, 0x8011F360u)[v4 * 4] || !SF_DRAFT_PTR(uint32, 0x8011F39Cu)[v4] && !SF_DRAFT_PTR(uint32, 0x8011F3A4u)[v4]) )
      SF_DRAFT_PTR(uint8, 0x8011F359u)[v4 * 4] = 0;
LABEL_35:
    v3 += 24;
    v4 += 24;
    result = (int)v3 < (int)(*SF_DRAFT_PTR(uint32, 0x8011F604u));
    v5 += 96;
  }
  while ( (int)v3 < (int)(*SF_DRAFT_PTR(uint32, 0x8011F604u)) );
  return result;
}

sint32 sub_800493F0(sint32 a1, sint8 a2, uint8 a3)
{
    FUNCTION_MARKER(0x800493F0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v3; 
  int v4; 
  bool v5; // dc
  int result; 
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
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  v3 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
  v23 = (*SF_DRAFT_PTR(uint32, 0x80011F30u));
  v24 = (*SF_DRAFT_PTR(uint32, 0x80011F34u));
  v25 = (*SF_DRAFT_PTR(uint32, 0x80011F38u));
  v26 = (*SF_DRAFT_PTR(uint32, 0x80011F3Cu));
  v4 = a3;
  if ( a2 )
  {
    v7 = v3[24];
    v9 = v3[25];
    v11 = v3[26];
    v13 = v3[27];
    v15 = v3[28];
    v17 = v3[29];
    v19 = v3[30];
    v21 = v3[31];
    if ( v15 || v17 || v19 )
    {
      v7 += v15;
      v9 += v17;
      v11 += v19;
      v3[24] = v7;
      v3[25] = v9;
      v3[26] = v11;
      v3[27] = v13;
    }
    v3[8] = v7;
    v3[9] = v9;
    v3[10] = v11;
    v3[11] = v13;
    v3[12] = v15;
    v3[13] = v17;
    v3[14] = v19;
    v3[15] = v21;
    v3[28] = v23;
    v3[29] = v24;
    v3[30] = v25;
    v3[31] = v26;
    v4 = a3;
  }
  v5 = v4 == 0;
  result = 1;
  if ( !v5 )
  {
    v8 = v3[56];
    v10 = v3[57];
    v12 = v3[58];
    v14 = v3[59];
    v16 = v3[60];
    v18 = v3[61];
    v20 = v3[62];
    v22 = v3[63];
    if ( v16 || v18 || v20 )
    {
      v8 += v16;
      v10 += v18;
      v12 += v20;
      v3[56] = v8;
      v3[57] = v10;
      v3[58] = v12;
      v3[59] = v14;
    }
    v3[40] = v8;
    v3[41] = v10;
    v3[42] = v12;
    v3[43] = v14;
    v3[44] = v16;
    v3[45] = v18;
    v3[46] = v20;
    v3[47] = v22;
    v3[60] = v23;
    v3[61] = v24;
    v3[62] = v25;
    v3[63] = v26;
    return 1;
  }
  return result;
}

sint32 sub_8002BF74(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8002BF74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v4; 
  _DWORD *i; 
  __int16 v6; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22[3]; 
  v15 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 20));
  v16 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 24));
  v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 28));
  v16 = -v16;
  v17 = v4;
  sub_80018430((*SF_DRAFT_PTR(uint32, 0x80115D84u)), sf_draft_guest_address(&v21));
  for ( i = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v21 + 140))); i; i = SF_DRAFT_PTR(_DWORD, i[2]) )
  {
    v6 = *SF_DRAFT_PTR(_WORD, (*i + 20));
    v7 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (*i + 12)));
    if ( (v6 & 0x2000) == 0 )
      continue;
    v8 = v6 & 0x3FF;
    if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == v8 )
      continue;
    if ( v8 == 666 )
    {
      if ( a2 != 666 )
        continue;
    }
    else if ( *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v8 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != a2 )
    {
      continue;
    }
    v9 = *SF_DRAFT_PTR(_DWORD, (76 * (v6 & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v18 = v7[5];
    v19 = v7[6];
    v10 = v7[7];
    v19 = -v19;
    v20 = v10;
    sub_800E0364(sf_draft_guest_address(&v18), sf_draft_guest_address(&v15), sf_draft_guest_address(v22));
    if ( v22[0] < 128 )
      return v9;
  }
  v11 = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0 )
  {
    v12 = 0;
    do
    {
      v9 = *SF_DRAFT_PTR(_DWORD, (v12 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( v9 && v11 != *SF_DRAFT_PTR(__int16, (a1 + 2)) )
      {
        if ( v11 == 666 )
        {
          if ( a2 == 666 )
          {
LABEL_18:
            v18 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12)) + 20));
            v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12)) + 24));
            v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12)) + 28));
            v19 = -v19;
            v20 = v13;
            sub_800E0364(sf_draft_guest_address(&v18), sf_draft_guest_address(&v15), sf_draft_guest_address(v22));
            if ( v22[0] < 128 )
              return v9;
          }
        }
        else if ( *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (v12 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == a2 )
        {
          goto LABEL_18;
        }
      }
      ++v11;
      v12 += 76;
    }
    while ( v11 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) );
  }
  return 0;
}

sint32 sub_80094DEC(uint32 a1, sint32 a2, sint32 a3, sint32 a4, uint32 a9, sint32 a10, sint32 a11, uint32 a12)
{
    FUNCTION_MARKER(0x80094DECu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a9_view = SF_DRAFT_PTR(int, a9);
    _DWORD *a12_view = SF_DRAFT_PTR(_DWORD, a12);
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  bool v16; // dc
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
  int result; 
  v12 = *a1_view;
  if ( *a9_view > 0 )
  {
    if ( a10 <= 0 )
      goto LABEL_5;
  }
  else if ( *a9_view - a10 >= 0 )
  {
LABEL_5:
    if ( *a9_view > 0 )
      v13 = v12 + (-a10 >> 12);
    else
      v13 = v12 + ((*a9_view - a10) >> 12);
    goto LABEL_12;
  }
  if ( *a9_view > 0 )
    v14 = a10 >> 12;
  else
    v14 = (a10 - *a9_view) >> 12;
  v13 = v12 - v14;
LABEL_12:
  *a12_view = v13 - a2;
  v15 = a9_view[1];
  v16 = v15 > 0;
  v17 = v15 - a11;
  if ( !v16 )
  {
    if ( v17 >= 0 )
      goto LABEL_16;
LABEL_19:
    v21 = a9_view[1];
    v16 = v21 > 0;
    v22 = a11 - v21;
    if ( v16 )
      v23 = a11 >> 12;
    else
      v23 = v22 >> 12;
    v20 = a3 - v23;
    goto LABEL_23;
  }
  if ( a11 > 0 )
    goto LABEL_19;
LABEL_16:
  v18 = a9_view[1];
  v16 = v18 <= 0;
  v19 = v18 - a11;
  if ( !v16 )
    v19 = -a11;
  v20 = a3 + (v19 >> 12);
LABEL_23:
  a12_view[1] = v20;
  v24 = a9_view[2];
  v25 = a1_view[2];
  v16 = v24 > 0;
  v26 = v24 - a10;
  if ( v16 )
  {
    if ( a10 <= 0 )
      goto LABEL_27;
  }
  else if ( v26 >= 0 )
  {
LABEL_27:
    v27 = a9_view[2];
    if ( v27 > 0 )
      v28 = v25 + (-a10 >> 12);
    else
      v28 = v25 + ((v27 - a10) >> 12);
    goto LABEL_34;
  }
  v29 = a9_view[2];
  v16 = v29 > 0;
  v30 = a10 - v29;
  if ( v16 )
    v31 = a10 >> 12;
  else
    v31 = v30 >> 12;
  v28 = v25 - v31;
LABEL_34:
  a12_view[2] = v28 - a2;
  v32 = *a1_view;
  v33 = *a9_view + a10;
  if ( *a9_view < 0 )
    v33 = a10;
  if ( v33 < 0 )
  {
    v36 = *a9_view + a10;
    if ( *a9_view < 0 )
      v36 = a10;
    v35 = v32 - (-v36 >> 12);
  }
  else
  {
    v34 = *a9_view;
    if ( *a9_view < 0 )
      v34 = 0;
    v35 = v32 + ((v34 + a10) >> 12);
  }
  a12_view[4] = v35 + a2;
  v37 = a9_view[1];
  v16 = v37 >= 0;
  v38 = v37 + a11;
  if ( !v16 )
    v38 = a11;
  if ( v38 < 0 )
  {
    v42 = a9_view[1];
    v16 = v42 >= 0;
    v43 = v42 + a11;
    if ( !v16 )
      v43 = a11;
    v41 = a4 - (-v43 >> 12);
  }
  else
  {
    v39 = a9_view[1];
    v16 = v39 >= 0;
    v40 = v39 + a11;
    if ( !v16 )
      v40 = a11;
    v41 = a4 + (v40 >> 12);
  }
  a12_view[5] = v41;
  v44 = a9_view[2];
  v45 = a1_view[2];
  v16 = v44 >= 0;
  v46 = v44 + a10;
  if ( !v16 )
    v46 = a10;
  if ( v46 < 0 )
  {
    v49 = a9_view[2];
    v16 = v49 >= 0;
    v50 = v49 + a10;
    if ( !v16 )
      v50 = a10;
    v48 = v45 - (-v50 >> 12);
  }
  else
  {
    v47 = a9_view[2];
    if ( v47 < 0 )
      v47 = 0;
    v48 = v45 + ((v47 + a10) >> 12);
  }
  result = v48 + a2;
  a12_view[6] = result;
  return result;
}

void sub_800C6510(sint32 a1)
{
    FUNCTION_MARKER(0x800C6510u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  uint16 *v3; 
  int v4; 
  int v5; 
  _DWORD *v6; 
  _DWORD *v7; 
  _DWORD *v8; 
  bool v9; // dc
  int v10; 
  int *i; 
  int v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int *v27; 
  int v28; 
  unsigned int v29; 
  int v30; 
  v3 = SF_DRAFT_PTR(uint16, *SF_DRAFT_PTR(uint32, (a1 + 128)));
  v4 = 16;
  if ( v3 )
  {
LABEL_2:
    while ( 1 )
    {
      v5 = *v3;
      if ( !v4 )
        break;
      v3 += 2;
      --v4;
      if ( v5 != 4095 )
      {
        if ( v5 == 0xFFFF )
          return;
        if ( (v5 & 0x8000) != 0 )
        {
          v6 = SF_DRAFT_PTR(_DWORD, (*(v3 - 1) + *SF_DRAFT_PTR(_DWORD, (a1 + 128))));
          v7 = SF_DRAFT_PTR(_DWORD, v6[2]);
          if ( !v7 )
          {
            v8 = v6 + 4;
            do
              v9 = *v8++ != -16728063;
            while ( v9 );
            v7 = v8 - 1;
            v6[2] = sf_draft_guest_address(v7);
          }
          v10 = v6[3];
          v6[1] = (uint8)*v7;
          for ( i = v7 + 1; ; ++i )
          {
            while ( 1 )
            {
              v12 = *i;
              if ( *i < 0 )
                break;
              v13 = 8 * HIBYTE(*i) + v1;
              v14 = *SF_DRAFT_PTR(uint16, (v13 + 6));
              v15 = v12 << 8 >> 24;
              v16 = (v14 >> 7) & 0xF8;
              if ( v10 < 0 )
                v17 = v16 - v15;
              else
                v17 = v15 + v16;
              if ( (v17 & 0x100) != 0 )
                goto LABEL_38;
              v18 = (unsigned int)(v17 + 4) >> 3 << 10;
              v19 = v12 << 16 >> 24;
              v20 = (v14 >> 2) & 0xF8;
              v21 = v10 < 0 ? v20 - v19 : v19 + v20;
              /* Original s5 accumulation has no memory or control-flow consumer */
              if ( (v21 & 0x100) != 0
                || ((v22 = v18 | (32 * ((unsigned int)(v21 + 4) >> 3)), v23 = (8 * v14) & 0xF8, v10 < 0) ? (v24 = v23 - (char)v12) : (v24 = (char)v12 + v23),
                    (v24 & 0x100) != 0) )
              {
LABEL_38:
                ++i;
              }
              else
              {
                *SF_DRAFT_PTR(_WORD, (v13 + 6)) = v22 | ((unsigned int)(v24 + 4) >> 3);
                ++i;
              }
            }
            if ( (v12 & 0xFF00) != 0 )
              break;
            if ( (uint8)*i == 255 )
              goto LABEL_2;
            v30 = *SF_DRAFT_PTR(_DWORD, (a1 + 4 + 4 * (uint8)*i));
            v1 = *SF_DRAFT_PTR(_DWORD, (v30 + 36)) + v30;
          }
          if ( (v12 & 0xA800) == 0 )
            _break(0, 0x80u);
          v25 = v6[1] - 1;
          if ( (v12 & 0x800) != 0 )
          {
            v26 = v6[3];
            if ( v26 >= 0 )
            {
              v6[3] = -v26;
              ++v25;
            }
          }
          if ( (int)v6[3] <= 0 )
          {
            if ( v25 )
            {
              v27 = i - 1;
              v28 = v25 | 0xC000;
            }
            else
            {
              v28 = 49153;
              v6[3] = 49153;
              v27 = i - 1;
            }
            v29 = v28 | 0xFF000000;
            do
              v9 = (*v27-- & 0xFFFFDFFF) != v29;
            while ( v9 );
            i = v27 + 1;
          }
          v6[2] = sf_draft_guest_address(i);
        }
      }
    }
  }
}

