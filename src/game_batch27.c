#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */
extern sint32 sub_800EA3A4(sint32 angle);




/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8004EC5Cu 0x8004ec5c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004EC5C(sint32 a1, sint32 a2, uint32 a3, sint32 a4)
{
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x8004EC5Cu, "SCUS_942.40");
  char v8; 
  int v9; 
  int v10; 
  int result; 
  int v12; 
  int v13; 
  int v14; 
  int v15 = SF_DRAFT_GP;
  int v16; 
  int v17; 
  int v18 = SF_DRAFT_GP;
  int v19; 
  int v20; 
  __int16 v21; 
  int v22 = SF_DRAFT_GP;
  bool v23; 
  int v24; 
  int v25 = SF_DRAFT_GP;
  int v26; 
  int v27 = SF_DRAFT_GP;
  int v28; 
  int v29; 
  int v30; 
  __int16 v31; 
  int v32 = SF_DRAFT_GP;
  int v33; 
  sint32 direction[3];
  sint32 position[3]; 
  int v39; 
  int v40; 
  int v41; 

  v8 = -16;
  v9 = 0;
  v10 = 0;
  if ( a2 >= 0 )
    v10 = *SF_DRAFT_PTR(_DWORD, (76 * a2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  if ( !(*SF_DRAFT_PTR(uint32, 0x80115E80u)) || (result = 0, a2 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) )
  {
    v12 = a4;
    if ( v10 )
    {
      v8 = sub_800D0028(*SF_DRAFT_PTR(_DWORD, (v10 + 8)));
      v12 = a4;
    }
    sub_800C720C(v12, sf_draft_guest_address(direction));
    position[0] = *native_a3 + (direction[0] >> 10);
    position[1] = native_a3[1] + (direction[1] >> 10);
    position[2] = native_a3[2] + (direction[2] >> 10);
    sub_8004C354(sf_draft_guest_address(&position[0]));
    sub_8004C5C8(1365, 0, 255);
    sub_8004C654(15, 200);
    if ( a2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      v13 = direction[0] * *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 4));
      v39 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 4));
      v40 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 10));
      v14 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 16));
      v9 = 8;
      v40 = -v40;
      v41 = v14;
      if ( v13 + direction[2] * v14 <= 0 )
        v8 -= 20;
      else
        v8 += 50;
    }
    sub_8004C70C(sf_draft_guest_address(direction),  0x1FFF,  1);
    if ( v10 )
      v16 = v9 | 0x10430;
    else
      v16 = v9 | 0x430;
    *SF_DRAFT_PTR(_DWORD, (v15 + 3348)) = v16;
    v17 = sub_8004C0E8(20, 0);
    v19 = v17;
    v20 = v17;
    if ( !v17 )
      return v19;
    *SF_DRAFT_PTR(_BYTE, (v17 + 35)) = 8;
    *SF_DRAFT_PTR(_WORD, (v17 + 26)) = -1024;
    v21 = *SF_DRAFT_PTR(_WORD, (v18 + 3824));
    *SF_DRAFT_PTR(_DWORD, (v19 + 44)) = 7;
    *SF_DRAFT_PTR(_DWORD, (v19 + 48)) = 3;
    *SF_DRAFT_PTR(_WORD, (v19 + 28)) = v21;
    sub_8004C7B0(v20, 20);
    result = v19;
    if ( a1 >= 0 )
    {
      if ( v10 )
      {
        v23 = a2 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        *SF_DRAFT_PTR(_WORD, (v19 + 20)) = a2;
        if ( v23 )
        {
          *SF_DRAFT_PTR(_BYTE, (v19 + 38)) = v8;
          result = v19;
          if ( (*SF_DRAFT_PTR(_DWORD, r_u32((v10 + 16))) & 2) == 0 )
            return result;
          sub_8004C354(sf_draft_guest_address(&position[0]));
          sub_8004C5C8(1365, 0, 255);
          sub_8004C654(8, 128);
          *SF_DRAFT_PTR(_DWORD, (v32 + 3348)) = 131624;
          sub_8004C70C(sf_draft_guest_address(direction),  511,  0);
          v33 = sub_8004C0E8(6, 0);
          v28 = v33;
          v29 = v33;
          if ( !v33 )
            return v19;
          v30 = 6;
          *SF_DRAFT_PTR(_BYTE, (v33 + 35)) = 6;
          *SF_DRAFT_PTR(_WORD, (v33 + 26)) = -16;
          *SF_DRAFT_PTR(_WORD, (v33 + 28)) = 0;
          *SF_DRAFT_PTR(_DWORD, (v33 + 44)) = 9;
          *SF_DRAFT_PTR(_DWORD, (v33 + 48)) = 0;
          goto LABEL_26;
        }
        v24 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v10 + 24)) + 12));
        *SF_DRAFT_PTR(_BYTE, (v19 + 38)) = v8;
        if ( v24 >= 51 || (result = v19, v24 >= *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v10 + 24)) + 8))) )
        {
          if ( *SF_DRAFT_PTR(__int16, (v22 + 3824)) >= position[1] )
            return v19;
          sub_8004C5F0(12, 0xC8u);
          *SF_DRAFT_PTR(_DWORD, (v25 + 3348)) = 66704;
          sub_8004C70C(sf_draft_guest_address(direction),  0x7FFF,  0);
          v26 = sub_8004C0E8(8, 0);
          v28 = v26;
          v29 = v26;
          if ( !v26 )
            return v19;
          v30 = 8;
          *SF_DRAFT_PTR(_BYTE, (v26 + 35)) = 3;
          v31 = *SF_DRAFT_PTR(_WORD, (v27 + 3824));
          *SF_DRAFT_PTR(_WORD, (v26 + 26)) = -5259;
          *SF_DRAFT_PTR(_DWORD, (v26 + 44)) = 7;
          *SF_DRAFT_PTR(_DWORD, (v26 + 48)) = 3;
          *SF_DRAFT_PTR(_WORD, (v26 + 28)) = v31;
LABEL_26:
          sub_8004C7B0(v29, v30);
          *SF_DRAFT_PTR(_BYTE, (v28 + 38)) = v8;
          *SF_DRAFT_PTR(_WORD, (v28 + 20)) = a2;
          return v19;
        }
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x80031488u 0x80031488
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80031488(sint32 a1)
{
  FUNCTION_MARKER(0x80031488u, "SCUS_942.40");
  __int16 *v2; 
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  BOOL v9; 
  int v10; 
  int v11; 
  int v12; 
  bool v13; 
  int v14; 
  int v15; 
  int result; 
  int v17; 
  BOOL v18; 
  BOOL v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  v2 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
  v3 = *SF_DRAFT_PTR(_DWORD, (76 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v4 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
  v23 = *v4;
  v24 = v4[2];
  v21 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 12)) + 20));
  v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 8)) + 12)) + 28));
  LOWORD(v5) = 0;
  v6 = sub_800EC124(
         *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16)),
         *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4)));
  v7 = sub_800EC124(v22 - v24, v21 - v23);
  v8 = v6 - v7;
  v9 = v8 < 2049;
  if ( v8 < 0 )
  {
    v8 += 4096;
    v9 = v8 < 2049;
  }
  if ( !v9 )
    v8 = 4096 - v8;
  if ( *SF_DRAFT_PTR(_BYTE, (a1 + 34)) == 2 )
    sub_80061F78(*SF_DRAFT_PTR(__int16, (a1 + 2)), v8);
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    if ( v8 >= 113 )
    {
      if ( v8 >= 1025 )
        v5 = (1024 - v8) >> 5;
    }
    else
    {
      v5 = (113 - v8) >> 1;
    }
    v10 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if ( v10 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      v14 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    }
    else
    {
      v11 = 76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      v12 = *SF_DRAFT_PTR(uint8, (v11 + 36));
      v13 = v12 != 0;
      v14 = 32 * v12;
      if ( !v13 )
      {
        v15 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
        if ( v15 == 4096 )
          v14 = 608;
        else
          v14 = v15 == 0x2000 ? 0x280 : 0;
      }
    }
    v13 = ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v14)) >> 3) & 7) != 2;
    result = v8 < 1201;
    if ( !v13 && v8 >= 1201 )
      LOWORD(v5) = -3000;
    v2[28] = v5;
  }
  else if ( (*SF_DRAFT_PTR(uint8, 0x80116944u)) && (result = -5000, *SF_DRAFT_PTR(__int16, (v3 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u))) )
  {
    v2[27] = -5000;
  }
  else
  {
    result = *SF_DRAFT_PTR(_DWORD, (v3 + 16));
    if ( result && (result = *SF_DRAFT_PTR(_DWORD, result) & 8) != 0 )
    {
      v17 = v7
          - sub_800EC124(
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 12)) + 40)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 40)),
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 12)) + 32)) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 32)));
      v18 = v17 < 2049;
      if ( v17 < 0 )
      {
        v17 += 4096;
        v18 = v17 < 2049;
      }
      v13 = v18;
      v19 = v17 < 1025;
      if ( !v13 )
      {
        v17 = 4096 - v17;
        v19 = v17 < 1025;
      }
      v13 = v19;
      v20 = 16 * v17;
      if ( !v13 )
      {
        v17 = 2048 - v17;
        v20 = 16 * v17;
      }
      result = (8 * (v20 - v17)) >> 11;
      v2[27] = -(__int16)result;
    }
    else
    {
      v2[27] = 0;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800340ACu 0x800340ac
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800340AC(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  _DWORD * native_a4 = SF_DRAFT_PTR(_DWORD, a4);
  FUNCTION_MARKER(0x800340ACu, "SCUS_942.40");
  int v8; 
  int i; 
  int result; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v16; 
  int v17; 
  int v18; 
  _BYTE *v19; 
  int v20; 
  __int16 *v21; 
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

  v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 40));
  for ( i = 0; v8; ++i )
    v8 = *SF_DRAFT_PTR(_DWORD, (v8 + 4));
  result = 0;
  if ( i )
  {
    v11 = sub_800EC8F4();
    v12 = v11 % i;
    if ( i == -1 && v11 == 0x80000000 )
      _break(6u, 0);
    v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 40));
    if ( v12 > 0 )
    {
      v14 = 1;
      do
        v13 = *SF_DRAFT_PTR(_DWORD, (v13 + 4));
      while ( v14++ < v12 );
    }
    v16 = v13;
    if ( native_a2 )
    {
      v17 = 0;
      do
      {
        v18 = *SF_DRAFT_PTR(_DWORD, (v13 + 12));
        if ( (v18 & 3) != 0 )
          goto LABEL_16;
        v19 = SF_DRAFT_PTR(_BYTE, (v18 - 12));
        if ( *SF_DRAFT_PTR(_DWORD, (v13 + 8)) == 4 )
          v19 = SF_DRAFT_PTR(_BYTE, (v18 - 1));
        if ( (*v19 & 0x40) != 0 )
LABEL_16:
          v20 = 0;
        else
          v20 = *SF_DRAFT_PTR(_DWORD, (v18 - 4)) & 0x7FFFFFFF;
        if ( v20 )
        {
          v21 = SF_DRAFT_PTR(__int16, r_u32((v13 + 28)));
          if ( *SF_DRAFT_PTR(__int16, r_u32((v13 + 16))) * (*v21 - *native_a2)
             - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 16)) + 2)) * (-v21[1] - native_a2[1])
             + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v13 + 16)) + 4)) * (v21[2] - native_a2[2]) <= 0 )
          {
            v17 = 1;
            v16 = v13;
          }
        }
        v13 = *SF_DRAFT_PTR(_DWORD, (v13 + 4));
        v22 = (uint8)v17;
        if ( !v13 )
        {
          v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 40));
          v22 = (uint8)v17;
        }
        v23 = (uint8)v17;
      }
      while ( !v22 && v13 && v13 != v16 );
    }
    else
    {
      v17 = 1;
      v23 = 1;
    }
    result = v17;
    if ( v23 == 1 )
    {
      *native_a3 = *SF_DRAFT_PTR(__int16, r_u32((v16 + 28)));
      native_a3[1] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v16 + 28)) + 2));
      v24 = 1;
      native_a3[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v16 + 28)) + 4));
      v25 = v16 + 8;
      if ( *SF_DRAFT_PTR(int, (v16 + 8)) > 1 )
      {
        v26 = v16 + 12;
        do
        {
          v29 = *SF_DRAFT_PTR(__int16, r_u32((v26 + 20))) - *native_a3;
          v31 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v26 + 20)) + 2)) - native_a3[1];
          v33 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v26 + 20)) + 4)) - native_a3[2];
          v27 = sub_800EC8F4() & 0xFFF;
          v30 = sub_800C6D4C(v29, v27);
          v32 = sub_800C6D4C(v31, v27);
          v28 = sub_800C6D4C(v33, v27);
          *native_a3 += v30;
          native_a3[1] += v32;
          ++v24;
          native_a3[2] += v28;
          v26 += 4;
        }
        while ( v24 < *SF_DRAFT_PTR(sint32, v25) );
      }
      native_a3[1] = (0u - native_a3[1]);
      *native_a4 = *SF_DRAFT_PTR(__int16, r_u32((v25 + 8)));
      native_a4[1] = (0u - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v25 + 8)) + 2)));
      native_a4[2] = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v25 + 8)) + 4));
      return v17;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8001ABE4u 0x8001abe4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001ABE4(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x8001ABE4u, "SCUS_942.40");
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
  sint32 displacement[3];
  sint32 direction[3]; 
  int v26; 
  int v27; 
  int v28; 
int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 

  if ( *native_a1 != native_a1[12]
    || native_a1[4]
    || native_a1[8]
    || native_a1[1] != native_a1[13]
    || native_a1[5]
    || native_a1[9]
    || native_a1[2] != native_a1[14]
    || native_a1[6]
    || (result = native_a1[10]) != 0 )
  {
    displacement[0] = native_a1[12] - *native_a1;
    v3 = native_a1[13] - native_a1[1];
    displacement[1] = v3;
    v4 = native_a1[14] - native_a1[2];
    displacement[2] = v4;
    if ( displacement[0] || v3 || v4 )
    {
      sub_800C720C(sf_draft_guest_address(&displacement[0]), sf_draft_guest_address(&direction[0]));
      v30 = 0;
      v5 = sub_800C6D4C(displacement[0], direction[0]);
      v6 = sub_800C6D4C(displacement[1], direction[1]);
      v33 = v5 + v6 + sub_800C6D4C(displacement[2], direction[2]);
      v7 = sub_800C6D4C(native_a1[4], direction[0]);
      v8 = sub_800C6D4C(native_a1[5], direction[1]);
      v31 = v7 + v8 + sub_800C6D4C(native_a1[6], direction[2]);
      v9 = sub_800C6D4C(native_a1[8], direction[0]);
      v10 = sub_800C6D4C(native_a1[9], direction[1]);
      v32 = v9 + v10 + sub_800C6D4C(native_a1[10], direction[2]);
      v34 = native_a1[24];
      v35 = native_a1[25];
      v36 = native_a1[26];
      sub_8001A7AC(sf_draft_guest_address(&v30));
      v26 = sub_800C6D4C(direction[0], v31);
      v27 = sub_800C6D4C(direction[1], v31);
      v28 = sub_800C6D4C(direction[2], v31);
    }
    else
    {
      v26 = 0;
      v27 = 0;
      v28 = 0;
    }
    native_a1[8] = v26 - native_a1[4];
    native_a1[9] = v27 - native_a1[5];
    native_a1[10] = v28 - native_a1[6];
    v11 = v27;
    v12 = v28;
    v13 = (sf_draft_unbound_stack_field(0x8001ABE4u, 0x3Cu), 0u);
    native_a1[4] = v26;
    native_a1[5] = v11;
    native_a1[6] = v12;
    native_a1[7] = v13;
    if ( v26 < 0 )
      v14 = v26 - 4095;
    else
      v14 = v26 + 4095;
    v15 = v14 >> 12;
    if ( v14 < 0 )
      v15 = -(-v14 >> 12);
    v26 = v15;
    if ( v27 < 0 )
      v16 = v27 - 4095;
    else
      v16 = v27 + 4095;
    v17 = v16 >> 12;
    if ( v16 < 0 )
      v17 = -(-v16 >> 12);
    v27 = v17;
    if ( v28 < 0 )
      v18 = v28 - 4095;
    else
      v18 = v28 + 4095;
    if ( v18 < 0 )
      v19 = -(-v18 >> 12);
    else
      v19 = v18 >> 12;
    v28 = v19;
    *native_a1 += v26;
    native_a1[1] += v27;
    result = native_a1[2] + v28;
    native_a1[2] = result;
  }
  return result;
}

// FUNCTION_MARKER 0x8005AE20u 0x8005ae20
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8005AE20(sint32 a1)
{
  FUNCTION_MARKER(0x8005AE20u, "SCUS_942.40");
  int result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  __int16 *v9; 
  int v10; 
  _DWORD *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  bool v16; 
  int v17; 
  int v18; 
  char v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  result = *SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v4 = 0;
  if ( result >= 0 )
  {
    result = *SF_DRAFT_PTR(uint8, (v3 + 65));
    if ( !*SF_DRAFT_PTR(_BYTE, (v3 + 65)) )
    {
      v5 = *SF_DRAFT_PTR(__int16, (a1 + 2));
      if ( v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
        result = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
        if ( !(*SF_DRAFT_PTR(uint32, 0x80115FB8u)) )
          return result;
      }
      else
      {
        v6 = 76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if ( !*SF_DRAFT_PTR(_BYTE, (v6 + 36)) )
        {
          v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 36)) & 0x3000;
          result = 0x2000;
          if ( v7 != 4096 && v7 != 0x2000 )
            return result;
        }
      }
      v8 = *SF_DRAFT_PTR(uint8, (v3 + 75));
      result = 4;
      if ( v8 != 1 && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 4 )
      {
        result = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8));
        if ( result > 0 )
        {
          result = 2;
          if ( !*SF_DRAFT_PTR(_BYTE, (v3 + 76)) )
          {
            if ( v8 == 2 )
              v4 = 1;
            if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x100) != 0 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 88)) > 0 )
            {
              result = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 24)) + 8));
              if ( result > 0 )
                v4 = 1;
            }
            else
            {
              v9 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
              result = *v9;
              if ( result >= 0 )
              {
                v10 = v9[46];
                if ( v10 >= 0 )
                {
                  result = 4 * v10;
                  if ( (*((_DWORD *)v9 + 1) & 8) != 0 )
                  {
                    v11 = SF_DRAFT_PTR(_DWORD, r_u32((76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)));
                    result = *SF_DRAFT_PTR(__int16, (v11[6] + 8));
                    if ( result > 0 )
                    {
                      result = v11[7];
                      if ( !result )
                      {
                        v21 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v11[2] + 12)) + 20));
                        v22 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v11[2] + 12)) + 24));
                        v12 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v11[2] + 12)) + 28));
                        v22 = -v22;
                        v23 = v12;
                        sub_800E0364(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011E660u)), sf_draft_guest_address(&v21), sf_draft_guest_address(&v24));
                        result = v24 < 641;
                        if ( v24 >= 641 )
                          v4 = 1;
                      }
                    }
                  }
                }
              }
            }
            if ( v4 )
            {
              v13 = *SF_DRAFT_PTR(__int16, (a1 + 2));
              if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              {
                v17 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
              }
              else
              {
                v14 = 76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
                v15 = *SF_DRAFT_PTR(uint8, (v14 + 36));
                v16 = v15 != 0;
                v17 = 32 * v15;
                if ( !v16 )
                {
                  v18 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000;
                  if ( v18 == 4096 )
                    v17 = 608;
                  else
                    v17 = v18 == 0x2000 ? 0x280 : 0;
                }
              }
              v19 = 3;
              if ( ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v17)) >> 8) & 7) == 0 )
                v19 = 1;
              if ( (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x20) == 0 )
                sub_80059108(a1);
              v20 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
              if ( (*v20 & 0x100) == 0 )
              {
                if ( v20 )
                {
                  sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 43);
                  *SF_DRAFT_PTR(_BYTE, (v3 + 76)) = 10;
                }
              }
              result = (sub_800EC8F4() & 3) + 1;
              *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = v19 * result;
            }
          }
        }
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8005554Cu 0x8005554c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8005554C(sint32 a1)
{
  FUNCTION_MARKER(0x8005554Cu, "SCUS_942.40");
  int v2; 
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int result; 
  int v10 = SF_DRAFT_GP;
  int *v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23 = SF_DRAFT_GP;
  int v24; 
  int v25; 
  int v26 = SF_DRAFT_GP;
  int v27; 
  int v28 = SF_DRAFT_GP;
  int v29; 
  int v30; 
  int v31 = SF_DRAFT_GP;
  int v32; 
  int v33 = SF_DRAFT_GP;
  int v34; 
  int v35; 
  int v36 = SF_DRAFT_GP;
  int v37[4]; 
  sint32 projected_initial[3];
  sint32 projected_current[3]; 
  int v43; 

  v2 = *SF_DRAFT_PTR(__int16, (a1 + 30));
  v3 = *SF_DRAFT_PTR(uint8, (a1 + 35));
  v4 = SF_DRAFT_PTR(int, 0x80137740u + 104u * (uint32)v2);
  sub_800C6EAC(sf_draft_guest_address(v4), sf_draft_guest_address(projected_initial));
  v37[0] = *v4;
  v5 = 0;
  v6 = v4[1] + v3;
  v7 = projected_initial[1];
  v37[1] = v6;
  v37[2] = v4[2];
  sub_800C6EAC(sf_draft_guest_address(v37), sf_draft_guest_address(projected_initial));
  v8 = projected_initial[1] - v7;
  if ( *SF_DRAFT_PTR(uint8, (a1 + 36)) < v8 )
    v8 = *SF_DRAFT_PTR(uint8, (a1 + 36));
  result = sub_80055530(v8);
  *SF_DRAFT_PTR(_DWORD, (v10 + 2652)) = result;
  if ( v2 >= 0 )
  {
    result = 2 * v2;
    while ( 1 )
    {
      v11 = SF_DRAFT_PTR(int, 0x80137740u + 104u * (uint32)v2);
      v12 = *((__int16 *)v11 + 49);
      v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 44));
      v43 = *((__int16 *)v11 + 19);
      if ( v13 == 9 )
      {
        v14 = sub_80054FBC(a1, sf_draft_guest_address(v11));
        v15 = a1;
        if ( !v14 )
          goto LABEL_19;
      }
      v16 = v11[8];
      v17 = (v16 & 0xFF000000) != 0 ? v16 & 0xFFFFFF | 0x20000000 : v16 | 0x20000000;
      v11[13] = v17;
      v18 = v11;
      if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 2) != 0 && (((_BYTE)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) + (_BYTE)v2) & 0xF) == 0 )
        break;
LABEL_17:
      sub_800C6EAC(sf_draft_guest_address(v18), sf_draft_guest_address(&projected_current[0]));
      if ( projected_current[2] > 0 )
      {
        if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x100) == 0 )
        {
          v21 = (projected_current[2] >> 2) - (projected_current[2] >> 4) + *SF_DRAFT_PTR(char, (a1 + 38)) - 16;
          if ( v21 < 0 )
            v11[11] = 0;
          else
            v11[11] = v21;
        }
        v22 = sub_800EA474(v12);
        v25 = projected_current[0] + (v22 >> (12 - *SF_DRAFT_PTR(_BYTE, (v23 + 2652))));
        v24 = sub_800EA3A4(v12);
        v11[14] = (uint16)v25 - ((projected_current[1] + (v24 >> (12 - *SF_DRAFT_PTR(_DWORD, (v26 + 2652))))) << 16);
        v27 = sub_800EA474(v12 + *((__int16 *)v11 + 43));
        v30 = projected_current[0] + (v27 >> (12 - *SF_DRAFT_PTR(_DWORD, (v28 + 2652))));
        v29 = sub_800EA3A4(v12 + *((__int16 *)v11 + 43));
        v11[15] = (uint16)v30 - ((projected_current[1] + (v29 >> (12 - *SF_DRAFT_PTR(_DWORD, (v31 + 2652))))) << 16);
        v32 = sub_800EA474(v12 + *((__int16 *)v11 + 46));
        v35 = projected_current[0] + (v32 >> (12 - *SF_DRAFT_PTR(_DWORD, (v33 + 2652))));
        v34 = sub_800EA3A4(v12 + *((__int16 *)v11 + 46));
        v11[16] = (uint16)v35 - ((projected_current[1] + (v34 >> (12 - *SF_DRAFT_PTR(_DWORD, (v36 + 2652))))) << 16);
        v5 = v2;
        if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) & 0x200) != 0 )
          *((_BYTE *)v11 + 55) |= 2u;
        goto LABEL_26;
      }
      v15 = a1;
LABEL_19:
      sub_8004BEDC(v15, sf_draft_guest_address(v11), v5, v2);
LABEL_26:
      v2 = v43;
      result = 2 * v43;
      if ( v43 < 0 )
        return result;
    }
    v19 = 0xFFFFFF;
    if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
    {
      v20 = 553648127;
      if ( (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 12 )
      {
LABEL_16:
        v11[13] = v20;
        v18 = v11;
        goto LABEL_17;
      }
      v19 = 65280;
    }
    v20 = v19 | 0x20000000;
    goto LABEL_16;
  }
  return result;
}

// FUNCTION_MARKER 0x8003194Cu 0x8003194c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8003194C(sint32 a1)
{
  FUNCTION_MARKER(0x8003194Cu, "SCUS_942.40");
  int v2; 
  __int16 *v3; 
  __int16 v4; 
  unsigned int result; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  void (*v12)(int); 
  int v13; 
  int v14; 
  int v15; 
  bool v16; 
  int v17; 
  int v18; 
  int v19; 
  char *v20; 
  __int16 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 

  v2 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v3 = SF_DRAFT_PTR(__int16, r_u32((v2 + 20)));
  v4 = 0;
  if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) <= 0 || (*SF_DRAFT_PTR(uint16, 0x801169A0u)) == a1 )
  {
    sub_80031918(*SF_DRAFT_PTR(_DWORD, (v2 + 20)));
    result = -1;
    *v3 = -1;
    return result;
  }
  v6 = *v3;
  if ( v6 < 0 )
    return sub_80031918(*SF_DRAFT_PTR(_DWORD, (v2 + 20)));
  v7 = *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v8 = 0;
  v9 = 0;
  do
  {
    *SF_DRAFT_PTR(__int16, ((char *)v3 + (v9 >> 15) + 52)) = 0;
    v9 = ++v8 << 16;
  }
  while ( (__int16)v8 < 15 );
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *(void (**)(int))((char *)v3 + (v11 >> 14) + 8);
    if ( !v12 )
      break;
    v12(v2);
    v11 = ++v10 << 16;
  }
  while ( (__int16)v10 < 10 );
  if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v7 + 34)) - 1 < 2
    && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 8)) + 28)) + 4))
     + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 8)) + 28)) + 6))
     + *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v7 + 8)) + 28)) + 8)) < 1024 )
  {
    v13 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      if ( !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u)) )
        v4 = -20;
      goto LABEL_18;
    }
    v4 = -40;
  }
  v13 = *SF_DRAFT_PTR(__int16, (v2 + 2));
LABEL_18:
  if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v17 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
  }
  else
  {
    v14 = 76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v15 = *SF_DRAFT_PTR(uint8, (v14 + 36));
    v16 = v15 != 0;
    v17 = 32 * v15;
    if ( !v16 )
    {
      v18 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000;
      if ( v18 == 4096 )
        v17 = 608;
      else
        v17 = v18 == 0x2000 ? 0x280 : 0;
    }
  }
  v19 = 0;
  v3[44] = (*(SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(uint32, 0x8010C398u))) + v17) & 0x3F) + v4;
  do
  {
    v20 = (char *)v3 + (v19++ << 16 >> 15);
    v21 = v3[44] + *((_WORD *)v20 + 26);
    v3[44] = v21;
  }
  while ( (__int16)v19 < 15 );
  if ( (v21 & 0x8000) != 0 )
    v3[44] = 0;
  result = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
  if ( a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    result = v3[44] < 15;
    if ( v3[44] < 15 )
    {
      result = *((_DWORD *)v3 + 1) & 2;
      if ( result )
      {
        result = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116B7Cu));
        if ( (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) )
        {
          v22 = *SF_DRAFT_PTR(__int16, (v2 + 2));
          if ( v22 == a1 )
          {
            v25 = 32 * (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
          }
          else
          {
            v23 = 76 * v22 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            v24 = *SF_DRAFT_PTR(uint8, (v23 + 36));
            v16 = v24 != 0;
            v25 = 32 * v24;
            if ( !v16 )
            {
              v26 = *SF_DRAFT_PTR(_DWORD, (v23 + 36)) & 0x3000;
              if ( v26 == 4096 )
                v25 = 608;
              else
                v25 = v26 == 0x2000 ? 0x280 : 0;
            }
          }
          v16 = ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v25)) >> 3) & 7) != 1;
          result = 15;
          if ( !v16 )
            v3[44] = 15;
        }
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8001D5ACu 0x8001d5ac
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001D5AC(void)
{
  FUNCTION_MARKER(0x8001D5ACu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2 = SF_DRAFT_GP;
  int v3; 
  int v4 = SF_DRAFT_GP;
  int v5; 
  int v6; 
  int v7; 
  int v8 = SF_DRAFT_GP;
  int v9; 
  _DWORD *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  BOOL v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  int v23; 
  BOOL result; 
  int v25; 
  sint32 position[4]; 
  int v30; 
  int v31; 

  v1 = *SF_DRAFT_PTR(_DWORD, (v0 + 284));
  v30 = 0;
  v31 = 0;
  sub_800189FC(v1, 0, 1, 0);
  v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 284));
  v30 = *SF_DRAFT_PTR(_DWORD, (v3 + 3348));
  sub_800189FC(v3, 0, 2, 0);
  v5 = 0;
  v6 = 0;
  v31 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 284)) + 3348));
  do
  {
    if ( v6 )
    {
      if ( v6 == 1 )
        v5 = (*SF_DRAFT_PTR(uint32, 0x80119198u));
    }
    else
    {
      v5 = (*SF_DRAFT_PTR(uint32, 0x80119194u));
    }
    if ( !v5 )
      goto LABEL_42;
    v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 8)) + 12));
    if ( v7 != v30 && v7 != v31 )
      goto LABEL_42;
    if ( !*SF_DRAFT_PTR(_DWORD, (v5 + 12)) || (unsigned int)*SF_DRAFT_PTR(uint8, (v5 + 34)) - 1 >= 2 )
      goto LABEL_42;
    if ( v7 == v30 )
      sub_80020514((*SF_DRAFT_PTR(uint32, 0x801191ECu)), sf_draft_guest_address(&position[0]));
    else
      sub_80020578((*SF_DRAFT_PTR(uint32, 0x801191ECu)), sf_draft_guest_address(&position[0]));
    if ( sub_8001C960(6) || sub_8001C960(7) || sub_8001C960(8) )
      goto LABEL_39;
    v9 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
    if ( v9 )
    {
      v10 = SF_DRAFT_PTR(_DWORD, r_u32((v9 + 416)));
      if ( v10 && *v10 == 1 )
        goto LABEL_39;
      v9 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
    }
    if ( !*SF_DRAFT_PTR(_BYTE, (v9 + 264)) )
      goto LABEL_39;
    if ( !v9 || !*SF_DRAFT_PTR(_DWORD, (v9 + 416)) )
    {
      v11 = (0u - *SF_DRAFT_PTR(_DWORD, (v7 + 24))) - *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 12)) + 300));
      if ( v11 < 234 )
        position[1] = position[1] + 105 - v11;
      if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 5 )
        goto LABEL_39;
      v12 = *SF_DRAFT_PTR(_DWORD, (v5 + 16));
      if ( *SF_DRAFT_PTR(_BYTE, (v12 + 8)) != 2 && (*SF_DRAFT_PTR(_DWORD, v12) & 0x100000) == 0 )
        goto LABEL_39;
      v13 = position[1] - 32;
      goto LABEL_38;
    }
    v25 = (0u - *SF_DRAFT_PTR(_DWORD, (v7 + 24)));
    v14 = v25 - sub_80088ACC(v5, 1);
    if ( !v6 )
    {
      v15 = v14 < 234;
      if ( (*SF_DRAFT_PTR(uint32, 0x801191ECu)) != 12 )
        goto LABEL_36;
      if ( (*SF_DRAFT_PTR(uint32, 0x801191F0u)) != 9 )
      {
        v13 = position[1] - 32;
LABEL_38:
        position[1] = v13;
        goto LABEL_39;
      }
    }
    v15 = v14 < 234;
LABEL_36:
    if ( v15 )
    {
      v13 = position[1] + 105 - v14;
      goto LABEL_38;
    }
LABEL_39:
    if ( v7 == v30 )
    {
      v16 = SF_DRAFT_PTR(_DWORD, r_u32((v8 + 284)));
      v17 = position[1];
      v18 = position[2];
      v19 = position[3];
      v16[67] = position[0];
      v16[68] = v17;
      v16[69] = v18;
      v16[70] = v19;
      ++v6;
      goto LABEL_43;
    }
    v20 = SF_DRAFT_PTR(_DWORD, r_u32((v8 + 284)));
    v21 = position[1];
    v22 = position[2];
    v23 = position[3];
    v20[102] = position[0];
    v20[103] = v21;
    v20[104] = v22;
    v20[105] = v23;
LABEL_42:
    ++v6;
LABEL_43:
    result = v6 < 2;
  }
  while ( v6 < 2 );
  return result;
}

// FUNCTION_MARKER 0x8004B20Cu 0x8004b20c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8004B20C(sint32 a1, uint32 a2)
{
  sint32 *native_a2 = SF_DRAFT_PTR(sint32, a2);
  FUNCTION_MARKER(0x8004B20Cu, "SCUS_942.40");
  int *result; 
  int *v4; 
  sint32 v6; 
  sint32 v7; 
  sint32 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  bool v14; 
  unsigned int v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 

  result = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
  v4 = SF_DRAFT_PTR(int, result[102]);
  if ( (result[101] & 0x104) == 4 )
  {
    if ( a1 == *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) )
      return sub_80038E1C(sf_draft_guest_address(native_a2));
    v6 = v4[7];
    v7 = v4[8];
    v8 = v4[9];
    *native_a2 = v4[6];
    native_a2[1] = v6;
    native_a2[2] = v7;
    native_a2[3] = v8;
    if ( *native_a2 || native_a2[1] || native_a2[2] != 0 )
    {
      v9 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 212));
      if ( v9 < 0 )
        v10 = -(-v9 >> 12);
      else
        v10 = v9 >> 12;
      v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 196)) + v10;
      v26 = v11;
      if ( v11 < 2049 )
      {
        v12 = v11 + 4096;
        if ( v11 >= -2048 )
          goto LABEL_14;
      }
      else
      {
        v12 = v11 - 4096;
      }
      v26 = v12;
LABEL_14:
      v27 = sub_800EC124(*native_a2, native_a2[2]);
      if ( (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x4000000) != 0
        || ((v13 = v4[15], v14 = v13 == 5, v15 = v13 - 8, v14) || v15 < 2)
        && (v16 = v4[16], v14 = v16 == 5, v17 = v16 - 8, !v14)
        && v17 >= 2
        || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8)) == 9 )
      {
        v18 = 0;
      }
      else
      {
        v19 = v4[15];
        v14 = v19 == 5;
        v20 = v19 - 8;
        if ( v14 || v20 < 2 )
        {
          v21 = v4[16];
          v14 = v21 == 5;
          v22 = v21 - 8;
          if ( v14 || v22 < 2 )
          {
            v18 = *v4;
            v23 = v26;
            goto LABEL_28;
          }
        }
        v18 = v4[1];
      }
      v23 = v26;
LABEL_28:
      sub_800E1480(v23, v27, v18, 1, sf_draft_guest_address(&v27), sf_draft_guest_address(&v28));
      v24 = v28 << 12;
      v25 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
      if ( v18 == 4096 )
      {
        result = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (v25 + 212)) + v24));
        *SF_DRAFT_PTR(_DWORD, (v25 + 212)) = sf_draft_guest_address(result);
      }
      else
      {
        result = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (v25 + 228)) + v24));
        *SF_DRAFT_PTR(_DWORD, (v25 + 228)) = sf_draft_guest_address(result);
      }
    }
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80096708u 0x80096708
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80096708(sint32 a1)
{
  FUNCTION_MARKER(0x80096708u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  BOOL v15; 
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

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 36));
  *SF_DRAFT_PTR(_BYTE, (a1 + 56)) = 0;
  v16 = *SF_DRAFT_PTR(__int16, r_u32((v2 + 8)));
  v17 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 36)) + 8)) + 2));
  v18 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 36)) + 8)) + 4));
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
  if ( v3 < 0 )
    v4 = -(-v3 >> 12);
  else
    v4 = v3 >> 12;
  v19 = v4;
  v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
  if ( v5 < 0 )
    v6 = -(-v5 >> 12);
  else
    v6 = v5 >> 12;
  v20 = v6;
  v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v8 = v7 >> 12;
  if ( v7 < 0 )
    v8 = -(-v7 >> 12);
  v9 = -(v19 * v16 + v20 * v17 + v8 * v18);
  result = v9 < -21696;
  v32 = v9;
  if ( v9 >= -21696 )
  {
    v21 = *SF_DRAFT_PTR(_DWORD, a1) - *SF_DRAFT_PTR(__int16, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 36)) + 20)));
    v11 = v21 * v16;
    v23 = *SF_DRAFT_PTR(_DWORD, (a1 + 4)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 36)) + 20)) + 2));
    v12 = v23 * v17;
    v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 8)) - *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 36)) + 20)) + 4));
    v22 = v21 << 12;
    v24 = v23 << 12;
    v25 = v13 << 12;
    v14 = v11 + v12 + v13 * v18;
    v33 = v14;
    result = v14 + v19 * v16 + v20 * v17 + v8 * v18 - (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) << 12);
    if ( *SF_DRAFT_PTR(sint32, (a1 + 40)) >= result )
    {
      result = 1;
      if ( v14 >= (sint32)(0u - (uint32)*SF_DRAFT_PTR(sint32, (a1 + 44))) )
      {
        *SF_DRAFT_PTR(_BYTE, (a1 + 56)) = 1;
        v15 = *SF_DRAFT_PTR(sint32, (a1 + 52)) < v9;
        *SF_DRAFT_PTR(_DWORD, (a1 + 60)) = v14;
        *SF_DRAFT_PTR(_DWORD, (a1 + 64)) = v9;
        if ( v15 )
        {
          v34 = sub_800C6D90(v14, v9);
          v29 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (a1 + 20)), v34);
          v30 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (a1 + 24)), v34);
          v31 = sub_800C6D4C(*SF_DRAFT_PTR(_DWORD, (a1 + 28)), v34);
        }
        else
        {
          v26 = sub_800C6D4C(v16, v9 - v14);
          v27 = sub_800C6D4C(v17, v32 - v33);
          v28 = sub_800C6D4C(v18, v32 - v33);
          v29 = *SF_DRAFT_PTR(_DWORD, (a1 + 20)) + v26;
          v30 = *SF_DRAFT_PTR(_DWORD, (a1 + 24)) + v27;
          v31 = *SF_DRAFT_PTR(_DWORD, (a1 + 28)) + v28;
        }
        *SF_DRAFT_PTR(_DWORD, (a1 + 68)) = v22 + v29;
        *SF_DRAFT_PTR(_DWORD, (a1 + 72)) = v24 + v30;
        result = v25 + v31;
        *SF_DRAFT_PTR(_DWORD, (a1 + 76)) = v25 + v31;
      }
    }
  }
  return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6C14_stage1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 *output7, sint32 *output8, sint32 *output9, sint32 *output10, sint32 *output11, sint32 *output12, sint32 input13, sint32 input14, sint32 *output15);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6C14_stage2(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6C14_stage3(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6C14_stage4(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
// FUNCTION_MARKER 0x800D6C14u 0x800d6c14
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D6C14(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x800D6C14u, "SCUS_942.40");
  sint32 temporary_t9; /* TODO Geometry value type */
  sint32 temporary_t8; /* TODO Geometry value type */
  sint32 temporary_t7; /* TODO Geometry value type */
  sint32 temporary_t6; /* TODO Geometry value type */
  sint32 temporary_t3; /* TODO Geometry value type */
  sint32 temporary_t2; /* TODO Geometry value type */
  sint32 temporary_t1; /* TODO Geometry value type */
  sint32 temporary_t0; /* TODO Geometry value type */
  sint32 temporary_s7; /* TODO Geometry value type */
  sint32 temporary_s6; /* TODO Geometry value type */
  sint32 temporary_s5; /* TODO Geometry value type */
  sint32 temporary_s4; /* TODO Geometry value type */
  int i; 
  int v4; 
  int v5; 
  int v8; 
  int v18; 
  int v19; 
  int v20; 
  int v22; 
  int *v23; 
  int v24; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int *v38; 
  int v40; 

  for ( i = a1 - 4; ; i = v40 )
  {
    v4 = i + 4;
    v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 4));
    if ( v5 == -1 )
      break;
    v40 = v4;
    ++(*SF_DRAFT_PTR(uint32, 0x800D6C0Cu));
    if ( a2 )
      goto LABEL_13;
    temporary_s5 = *SF_DRAFT_PTR(__int16, (v5 + 10));
    temporary_s7 = *SF_DRAFT_PTR(__int16, (v5 + 14));
    v8 = (*SF_DRAFT_PTR(__int16, (v5 + 18)) + *SF_DRAFT_PTR(__int16, (v5 + 16))) >> 1 << 16;
    temporary_s4 = *SF_DRAFT_PTR(uint16, (v5 + 8)) | v8;
    temporary_s6 = *SF_DRAFT_PTR(uint16, (v5 + 12)) | v8;
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6C14_stage1(temporary_s4, temporary_s5, temporary_s4, temporary_s7, temporary_s6, temporary_s5, &temporary_t0, &temporary_t1, &temporary_t2, &temporary_t7, &temporary_t8, &temporary_t9, temporary_s6, temporary_s7, &temporary_t3);
    v18 = temporary_t7 << 16;
    if ( temporary_t0 + temporary_t1 + temporary_t2 + temporary_t3 )
    {
      v19 = temporary_t8 << 16;
      if ( !temporary_t0 )
        goto LABEL_13;
      v20 = temporary_t9 << 16;
      if ( !temporary_t1 )
        goto LABEL_13;
      /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6C14_stage2(&temporary_t6);
      v22 = temporary_t6 << 16;
      if ( !temporary_t2 || !temporary_t3 || (v18 ^ v19) < 0 || (v18 ^ v20) < 0 || (v18 ^ v22) < 0 )
      {
LABEL_13:
        ++(*SF_DRAFT_PTR(uint32, 0x800D6C10u));
        v23 = SF_DRAFT_PTR(int, (v5 + 44));
        v24 = *SF_DRAFT_PTR(_DWORD, (v5 + 36)) + v5;
        temporary_t0 = v24;
        v26 = (*SF_DRAFT_PTR(__int16, (v5 + 6)) + 2) / 3;
        v27 = 528482304;
        do
        {
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6C14_stage3(((uint32)temporary_t0 + 0), ((uint32)temporary_t0 + 4), ((uint32)temporary_t0 + 8), ((uint32)temporary_t0 + 0xC), ((uint32)temporary_t0 + 0x10), ((uint32)temporary_t0 + 0x14));
          temporary_t0 += 24;
          --v26;
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6C14_stage4(((uint32)temporary_t2 + 0), ((uint32)temporary_t2 + 4), ((uint32)temporary_t2 + 0xC), ((uint32)temporary_t2 + 0x10), ((uint32)temporary_t2 + 0x18), ((uint32)temporary_t2 + 0x1C));
          v27 += 36;
        }
        while ( v26 );
        v28 = *SF_DRAFT_PTR(__int16, (v5 + 4));
        do
        {
          v29 = *v23;
          v30 = v23[2];
          v31 = *SF_DRAFT_PTR(_DWORD, (((v23[1] >> 22) & 0x3FC) + 0x1F800000));
          v32 = *SF_DRAFT_PTR(_DWORD, (((v30 >> 22) & 0x3FC) + 0x1F800000));
          v33 = *SF_DRAFT_PTR(_DWORD, (((4 * v30) & 0x3FC) + 0x1F800000));
          if ( (*v23 & 0x7FFFFFFF) != 0
            && ((*SF_DRAFT_PTR(_DWORD, (((v23[1] >> 22) & 0x3FC) + 0x1F800000)) ^ *SF_DRAFT_PTR(_DWORD, (((v30 >> 14) & 0x3FC)
                                                                                              + 0x1F800000))) < 0
             || (v31 ^ v32) < 0
             || v29 < 0 && (v31 ^ v33) < 0) )
          {
            v34 = v31 << 16;
            v35 = v32 << 16;
            v36 = v33 << 16;
            if ( (v34 ^ (*SF_DRAFT_PTR(_DWORD, (((v30 >> 14) & 0x3FC) + 0x1F800000)) << 16)) < 0
              || (v34 ^ v35) < 0
              || v29 < 0 && (v34 ^ v36) < 0 )
            {
              v37 = (*SF_DRAFT_PTR(uint32, 0x80116A38u));
              if ( (*SF_DRAFT_PTR(uint32, 0x80116A38u)) < 20 && (a3 || (*v23 & 0x40000000) == 0) )
              {
                v38 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012FC08u)[2 * (*SF_DRAFT_PTR(uint32, 0x80116A38u))]);
                *v38 = sf_draft_guest_address(v23);
                v38[1] = v24;
                (*SF_DRAFT_PTR(uint32, 0x80116A38u)) = v37 + 1;
              }
            }
          }
          --v28;
          v23 += 4;
        }
        while ( v28 > 0 );
      }
    }
  }
  return 0;
}

// FUNCTION_MARKER 0x8007DFD4u 0x8007dfd4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8007DFD4(sint32 a1)
{
  FUNCTION_MARKER(0x8007DFD4u, "SCUS_942.40");
  int v1; 
  int *v2; 
  int v3; 
  int result; 
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

  v1 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  v2 = SF_DRAFT_PTR(int, r_u32((v1 + 16)));
  v3 = *((uint8 *)v2 + 8);
  result = 0;
  if ( v3 == 7 )
    return result;
  v5 = *v2;
  result = 0;
  if ( (v5 & 0x2000) != 0 )
    return result;
  if ( v3 == 9 || (v5 & 0x400) != 0 )
    return 0;
  if ( v3 == 8 )
  {
    if ( (v5 & 0x200000) != 0 )
    {
      v6 = 76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      if ( *SF_DRAFT_PTR(_BYTE, (v6 + 36)) )
      {
        if ( *SF_DRAFT_PTR(_BYTE, (v6 + 36)) == 19 )
        {
          *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
LABEL_42:
          *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = 0;
          goto LABEL_43;
        }
      }
      else if ( (*SF_DRAFT_PTR(_DWORD, (v6 + 36)) & 0x3000) == 4096 )
      {
        goto LABEL_41;
      }
      v7 = 76 * *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      if ( *SF_DRAFT_PTR(_BYTE, (v7 + 36)) )
      {
        if ( *SF_DRAFT_PTR(_BYTE, (v7 + 36)) == 20 )
        {
          *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
          goto LABEL_42;
        }
LABEL_17:
        *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 1;
        goto LABEL_42;
      }
      v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 36)) & 0x3000;
      if ( v8 == 4096 || v8 != 0x2000 )
        goto LABEL_17;
    }
LABEL_41:
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
    goto LABEL_42;
  }
  v9 = 76 * *SF_DRAFT_PTR(__int16, (v1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( *SF_DRAFT_PTR(_BYTE, (v9 + 36)) )
  {
    if ( *SF_DRAFT_PTR(_BYTE, (v9 + 36)) == 19 )
      goto LABEL_28;
  }
  else
  {
    v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 36)) & 0x3000;
    if ( v10 == 4096 || v10 != 0x2000 )
      goto LABEL_28;
  }
  v11 = 76 * *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( !*SF_DRAFT_PTR(_BYTE, (v11 + 36)) )
  {
    v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 36)) & 0x3000;
    if ( v12 == 4096 || v12 != 0x2000 )
      goto LABEL_31;
LABEL_28:
    v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 16));
    if ( *SF_DRAFT_PTR(_BYTE, (v13 + 8)) == 2 && (*SF_DRAFT_PTR(_DWORD, v13) & 2) == 0 )
      goto LABEL_41;
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
    *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = 1;
    goto LABEL_43;
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v11 + 36)) == 20 )
    goto LABEL_28;
LABEL_31:
  v14 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 16));
  v15 = *SF_DRAFT_PTR(uint8, (v14 + 9));
  if ( v15 == 2 )
  {
LABEL_34:
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 1;
    *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = 1;
    goto LABEL_43;
  }
  if ( v15 == 6 )
  {
    if ( (*SF_DRAFT_PTR(_DWORD, v14) & 2) == 0 )
    {
      *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 1;
      goto LABEL_42;
    }
    goto LABEL_34;
  }
  if ( v15 != 3 )
  {
    if ( v15 != 7 )
      goto LABEL_41;
    if ( (*SF_DRAFT_PTR(_DWORD, v14) & 2) == 0 )
    {
      *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 2;
      goto LABEL_42;
    }
  }
  *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 2;
  *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = 1;
LABEL_43:
  result = 1;
  if ( (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 4)) + 16))) & 0x1000000) != 0 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (a1 + 40)) != 1 )
      return result;
    *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = 0;
  }
  return 1;
}

// FUNCTION_MARKER 0x8004CD24u 0x8004cd24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8004CD24(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x8004CD24u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v5; 
  int v6; 
  unsigned int v7; 
  int result; 
  bool v9; 
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

  v2 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v3 = 76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( *SF_DRAFT_PTR(_BYTE, (v3 + 36)) )
  {
    v5 = *SF_DRAFT_PTR(uint8, (v3 + 36));
  }
  else
  {
    v6 = *SF_DRAFT_PTR(_DWORD, (v3 + 36)) & 0x3000;
    if ( v6 == 4096 )
      v5 = 19;
    else
      v5 = v6 == 0x2000 ? 0x14 : 0;
  }
  v7 = v5 - 6;
  if ( !(*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
    goto LABEL_10;
  v7 = v5 - 6;
  if ( a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    goto LABEL_10;
  result = 0;
  if ( (unsigned int)(v5 - 12) < 2 )
    return result;
  v7 = v5 - 6;
  if ( v5 != 18 )
  {
LABEL_10:
    v9 = v7 < 2;
    result = 0;
    if ( v9 )
      return result;
    if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v2 + 34)) - 1 < 2
      && (a1 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 28)) + 32)) & 0x200) != 0) )
    {
      sub_800456D0(v2, sf_draft_guest_address(&v16));
      goto LABEL_18;
    }
    v10 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if ( v10 != 666 )
    {
      result = 0;
      if ( *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 3 )
        return result;
      v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 16));
      v16 = *SF_DRAFT_PTR(_DWORD, (v11 + 20));
      v17 = *SF_DRAFT_PTR(_DWORD, (v11 + 24));
      v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 28));
      v17 = -v17;
      v18 = v12;
      v13 = *SF_DRAFT_PTR(__int16, (v11 + 4));
      v19 = v13;
      v20 = *SF_DRAFT_PTR(__int16, (v11 + 10));
      v21 = *SF_DRAFT_PTR(__int16, (v11 + 16));
      v19 = sub_800C6D4C(v13, 256);
      v20 = sub_800C6D4C(-v20, 256);
      v21 = sub_800C6D4C(v21, 256);
      v16 += v19;
      v17 += v20;
      v18 += v21;
LABEL_18:
      sub_800E0364(sf_draft_guest_address(&v16),  a2, sf_draft_guest_address(&v22));
      v14 = *SF_DRAFT_PTR(__int16, (v2 + 2));
      if ( v14 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
        if ( (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) != 16 )
        {
LABEL_23:
          result = (v22 - 512) >> 9;
          goto LABEL_25;
        }
      }
      else
      {
        v15 = 76 * v14 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        if ( !*SF_DRAFT_PTR(_BYTE, (v15 + 36)) || *SF_DRAFT_PTR(_BYTE, (v15 + 36)) != 16 )
          goto LABEL_23;
      }
      result = v22 >> 7;
LABEL_25:
      if ( result >= 0 )
        return result;
    }
  }
  return 0;
}

