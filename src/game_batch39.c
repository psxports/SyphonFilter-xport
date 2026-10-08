#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

extern uint32 sub_80018BCC();

extern uint32 sub_800CCABC();
extern uint32 sub_800CDB80();




extern uint32 sub_800EA904(sint32 value);
extern uint32 sub_800EAC44();



extern uint32 sub_800EDA20();
extern uint32 sub_800F0384();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800D9580u 0x800d9580
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D9580(uint32 a1, uint32 a2)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x800D9580u, "SCUS_942.40");
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16[4]; 

  v13 = (*SF_DRAFT_PTR(uint32, 0x8001392Cu));
  v14 = (*SF_DRAFT_PTR(uint32, 0x80013930u));
  v15 = (*SF_DRAFT_PTR(uint32, 0x80013934u));
  v16[0] = (*SF_DRAFT_PTR(uint32, 0x8001392Cu));
  v16[1] = (*SF_DRAFT_PTR(uint32, 0x80013930u));
  v16[2] = (*SF_DRAFT_PTR(uint32, 0x80013934u));
  v16[3] = (*SF_DRAFT_PTR(uint32, 0x80013938u));
  v4 = *native_a1;
  v5 = v4;
  if ( v4 < 0 )
    v5 = -v4;
  if ( v5 > 1712317 )
    goto LABEL_10;
  v6 = native_a1[1];
  v7 = v6;
  if ( v6 < 0 )
    v7 = -v6;
  if ( v7 > 1712317 )
    goto LABEL_10;
  v8 = native_a1[2];
  v9 = v8;
  if ( v8 < 0 )
    v9 = -v8;
  if ( v9 <= 1712317 )
  {
    if ( v5 < 26755 && v7 < 26755 && v9 < 26755 )
    {
      *native_a2 = sub_800EA904(v4 * v4 + v6 * v6 + v8 * v8);
    }
    else
    {
      if ( *native_a1 )
        v13 = sub_800C6D4C(*native_a1, *native_a1);
      v11 = native_a1[1];
      if ( v11 )
        v14 = sub_800C6D4C(v11, native_a1[1]);
      v12 = native_a1[2];
      if ( v12 )
        v15 = sub_800C6D4C(v12, native_a1[2]);
      *native_a2 = sub_800EAC44(v13 + v14 + v15);
    }
    return 0;
  }
  else
  {
LABEL_10:
    sub_800E0364(sf_draft_guest_address(v16), sf_draft_guest_address(native_a1), sf_draft_guest_address(native_a2));
    return 0;
  }
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6F50_stage1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6F50_stage2(uint32 memory1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6F50_stage3(uint32 memory1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D6F50_stage4(uint32 memory1);
// FUNCTION_MARKER 0x800D6F50u 0x800d6f50
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D6F50(uint32 a1, sint32 a2)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  FUNCTION_MARKER(0x800D6F50u, "SCUS_942.40");
  sint32 temporary_t0; /* TODO Geometry value type */
  int v2; 
  _DWORD *v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  _DWORD *v10; 
  int *v11; 
  int *v12; 
  int *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int result; 

  v2 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
  v3 = SF_DRAFT_PTR(_DWORD, native_a1[1]);
  temporary_t0 = *native_a1;
  v5 = 528482304;
  v6 = (int)(HIWORD(native_a1[3]) + 2) / 3;
  do
  {
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6F50_stage1(((uint32)temporary_t0 + 0), ((uint32)temporary_t0 + 4), ((uint32)temporary_t0 + 8), ((uint32)temporary_t0 + 0xC), ((uint32)temporary_t0 + 0x10), ((uint32)temporary_t0 + 0x14));
    temporary_t0 += 24;
    --v6;
    v7 = v3[1];
    v8 = v3[2];
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6F50_stage2((uint32)v5);
    *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = *v3;
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6F50_stage3((uint32)v5 + 8u);
    *SF_DRAFT_PTR(_DWORD, (v5 + 12)) = v7;
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D6F50_stage4((uint32)v5 + 16u);
    *SF_DRAFT_PTR(_DWORD, (v5 + 20)) = v8;
    v3 += 3;
    v5 += 24;
  }
  while ( v6 );
  v9 = *((__int16 *)native_a1 + 6);
  v10 = SF_DRAFT_PTR(_DWORD, native_a1[2]);
  do
  {
    v11 = SF_DRAFT_PTR(int, (8 * (uint8)BYTE1(*v10) + 528482304));
    v12 = SF_DRAFT_PTR(int, (8 * (uint8)BYTE2(*v10) + 528482304));
    v13 = SF_DRAFT_PTR(int, (8 * (uint8)HIBYTE(*v10) + 528482304));
    v14 = *SF_DRAFT_PTR(_DWORD, (8 * (uint8)*v10 + 0x1F800000));
    *SF_DRAFT_PTR(_DWORD, (v2 + 4)) = *SF_DRAFT_PTR(_DWORD, (8 * (uint8)*v10 + 0x1F800004));
    *SF_DRAFT_PTR(_DWORD, (v2 + 8)) = v14;
    v15 = *v11;
    *SF_DRAFT_PTR(_DWORD, (v2 + 12)) = v11[1];
    *SF_DRAFT_PTR(_DWORD, (v2 + 16)) = v15;
    v16 = *v12;
    *SF_DRAFT_PTR(_DWORD, (v2 + 20)) = v12[1];
    *SF_DRAFT_PTR(_DWORD, (v2 + 24)) = v16;
    v17 = *v13;
    *SF_DRAFT_PTR(_DWORD, (v2 + 28)) = v13[1];
    *SF_DRAFT_PTR(_DWORD, (v2 + 32)) = v17;
    *SF_DRAFT_PTR(_DWORD, v2) = *SF_DRAFT_PTR(_DWORD, a2);
    *SF_DRAFT_PTR(_BYTE, (v2 + 3)) = 8;
    *SF_DRAFT_PTR(_DWORD, a2) = v2;
    *SF_DRAFT_PTR(_BYTE, (a2 + 3)) = 0;
    v2 += 36;
    --v9;
    ++v10;
  }
  while ( v9 > 0 );
  result = 0;
  (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v2;
  return result;
}

// FUNCTION_MARKER 0x80094668u 0x80094668
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80094668(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x80094668u, "SCUS_942.40");
  int v6; 
  bool v7; 
  int result; 
  int *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  _DWORD *v14; 
  int v15; 
  int v16; 
  _DWORD *v17; 
  _DWORD *v18; 
  _DWORD v19[4]; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  sint32 v24[3]; 
  _DWORD v26[32]; 
  _DWORD v27[32]; 
  char v28[16]; 

  if ( !a1 )
    return 0;
  v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( !v6 || !*SF_DRAFT_PTR(_DWORD, (v6 + 408)) || !(uint8)sub_80093AC0(a1, sf_draft_guest_address(v19), sf_draft_guest_address(v26),  a3) )
    return 0;
  v7 = (uint8)sub_800937DC(a1, sf_draft_guest_address(v28)) == 0;
  result = 0;
  if ( v7 )
    return result;
  v9 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
  v10 = v9[1];
  v11 = v9[2];
  v12 = v9[3];
  v20 = *v9;
  v21 = v10;
  v22 = v11;
  v23 = v12;
  v21 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300));
  v13 = (*SF_DRAFT_PTR(uint32, 0x80115E80u));
  v14 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
  v14[83] = v20;
  v14[84] = v21;
  v14[85] = v22;
  if ( v13 != 2 || (v15 = (*SF_DRAFT_PTR(uint32, 0x8013C730u))) == 0 )
    v15 = (*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u)));
  sub_800C8C8C(v15, (sint32)sf_draft_guest_address(v14 + 78));
  sub_800C6EAC(sf_draft_guest_address(v19), sf_draft_guest_address(v24));
  if ( v24[2] <= 0 )
    return 0;
  v16 = 0;
  if ( a3 > 0 )
  {
    v17 = v27;
    v18 = v26;
    do
    {
      sub_800C6EAC(sf_draft_guest_address(v18), sf_draft_guest_address(v17));
      v17 += 4;
      ++v16;
      v18 += 4;
    }
    while ( v16 < a3 );
  }
  sub_800938CC(a2, sf_draft_guest_address(v24), sf_draft_guest_address(v27), a3, sf_draft_guest_address(v28));
  return 1;
}

// FUNCTION_MARKER 0x80039B44u 0x80039b44
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80039B44(uint32 a1, sint32 a2, sint32 a3, sint16 a4)
{
  _WORD * native_a1 = SF_DRAFT_PTR(_WORD, a1);
  FUNCTION_MARKER(0x80039B44u, "SCUS_942.40");
  unsigned int v5; 
  unsigned int v6; 
  int result; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  uint32 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  uint32 v16; 
  unsigned int v17; 
  unsigned int v18; 
  uint32 v19; 
  int v20; 

  if ( a2 == 2 )
  {
    v5 = (uint16)native_a1[4];
    v6 = (uint16)native_a1[26];
    native_a1[3] = a4;
    native_a1[25] = a4;
    result = a3 + (v6 >> 1);
    native_a1[2] = a3 - (v5 >> 1);
    native_a1[24] = result;
  }
  else if ( a2 == 3 )
  {
    v8 = (uint16)native_a1[26];
    v9 = (uint16)native_a1[4];
    v10 = (uint16)native_a1[48];
    native_a1[3] = a4;
    native_a1[24] = a3;
    native_a1[25] = a4;
    native_a1[47] = a4;
    result = v8 >> 1;
    native_a1[2] = a3 - (v9 >> 1) - result;
    native_a1[46] = a3 + (v10 >> 1) + result;
  }
  else
  {
    result = 4;
    if ( a2 == 1 )
    {
      native_a1[2] = a3;
      native_a1[3] = a4;
    }
    else
    {
      result = 5;
      if ( a2 == 4 )
      {
        v11 = (uint16)native_a1[4];
        v12 = (uint16)native_a1[26];
        v13 = (uint16)native_a1[26];
        native_a1[3] = a4;
        native_a1[25] = a4;
        native_a1[47] = a4;
        native_a1[69] = a4;
        native_a1[2] = a3 - (v11 >> 1) - v12;
        v14 = (uint16)native_a1[48];
        native_a1[24] = a3 - (v13 >> 1);
        v15 = (uint16)native_a1[70] >> 1;
        native_a1[46] = a3 + (v14 >> 1);
        result = (uint16)native_a1[48] + a3 + v15;
        native_a1[68] = result;
      }
      else if ( a2 == 5 )
      {
        v16 = (uint32)a3 - ((uint16)native_a1[4] >> 1) - (uint16)native_a1[26] - ((uint16)native_a1[48] >> 1);
        v17 = (uint16)native_a1[26];
        v18 = (uint16)native_a1[48];
        native_a1[3] = a4;
        native_a1[25] = a4;
        native_a1[46] = a3;
        native_a1[47] = a4;
        native_a1[69] = a4;
        native_a1[91] = a4;
        native_a1[2] = v16;
        v19 = (uint32)a3 + ((uint16)native_a1[70] >> 1);
        native_a1[24] = a3 - (v17 >> 1) - (v18 >> 1);
        v20 = a3 + ((uint16)native_a1[48] >> 1);
        native_a1[68] = v19 + ((uint16)native_a1[48] >> 1);
        result = (uint16)native_a1[92] >> 1;
        native_a1[90] = (uint16)native_a1[70] + (uint32)v20 + (uint32)result;
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x80049E1Cu 0x80049e1c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80049E1C(void)
{
  FUNCTION_MARKER(0x80049E1Cu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2; 
  int v3; 
  bool v4; 
  int v5; 
  int v6; 

  v1 = *SF_DRAFT_PTR(_DWORD, (v0 + 876));
  if ( v1 )
  {
    do
    {
      v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 12));
      v3 = *SF_DRAFT_PTR(_DWORD, (v2 + 420));
      if ( *SF_DRAFT_PTR(_BYTE, (v2 + 352)) )
      {
        if ( *SF_DRAFT_PTR(_BYTE, (v2 + 264)) && (*SF_DRAFT_PTR(_DWORD, (v2 + 404)) & 0x100000) != 0 || (v4 = 0, !*SF_DRAFT_PTR(_BYTE, (v2 + 257))) )
        {
          v4 = 0;
          if ( (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 32)) + 0x2000) < 0x4001 )
          {
            v4 = 0;
            if ( (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 36)) + 0x2000) < 0x4001 )
            {
              v4 = 0;
              if ( (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 40)) + 0x2000) < 0x4001 )
              {
                v4 = 0;
                if ( (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 160)) + 0x2000) < 0x4001 )
                {
                  v4 = 0;
                  if ( (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 164)) + 0x2000) < 0x4001 )
                    v4 = (unsigned int)(*SF_DRAFT_PTR(_DWORD, (v2 + 168)) + 0x2000) < 0x4001;
                }
              }
            }
          }
        }
        if ( !v4 )
          goto LABEL_20;
        v5 = *SF_DRAFT_PTR(_DWORD, (v1 + 8));
        if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 16)) + 40)) & 0x400000) != 0
          && ((*SF_DRAFT_PTR(_BYTE, (v5 + 8)) & 0x10) != 0 || !*SF_DRAFT_PTR(_DWORD, (v1 + 12)))
          || (v6 = 0, *SF_DRAFT_PTR(_BYTE, (v2 + 256))) )
        {
          v6 = 1;
        }
        if ( v6 )
LABEL_20:
          *SF_DRAFT_PTR(_BYTE, (v2 + 353)) = 0;
        else
          ++*SF_DRAFT_PTR(_BYTE, (v2 + 353));
        if ( *SF_DRAFT_PTR(uint8, (v2 + 353)) >= (unsigned int)*SF_DRAFT_PTR(uint8, (v2 + 352)) )
          sub_80048A70(v1);
      }
      v1 = v3;
    }
    while ( v3 );
  }
}

// FUNCTION_MARKER 0x8008798Cu 0x8008798c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008798C(uint32 a1, sint32 a2)
{
  _BYTE * native_a1 = SF_DRAFT_PTR(_BYTE, a1);
  FUNCTION_MARKER(0x8008798Cu, "SCUS_942.40");
  char *v3; 
  int v4; 
  int v5; 
  int v6; 
  int result; 
  int v8; 
  char v9; 
  char v10; 

  v3 = 0;
  switch ( *native_a1 )
  {
    case 'c':
    case 'o':
      v3 = SF_DRAFT_PTR(uint8, 0x800124C7u);
      break;
    case 'l':
      v5 = (uint8)native_a1[1];
      if ( v5 == 49 )
      {
        v3 = SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint16, 0x800124BEu));
      }
      else if ( v5 == 50 )
      {
        v3 = SF_DRAFT_PTR(char, 0x800124B8u);
      }
      break;
    case 'r':
      v6 = (uint8)native_a1[1];
      if ( v6 == 49 )
      {
        v3 = SF_DRAFT_PTR(char, 0x800124C1u);
      }
      else if ( v6 == 50 )
      {
        v3 = SF_DRAFT_PTR(uint8, 0x800124BBu);
      }
      break;
    case 's':
      v4 = (uint8)native_a1[1];
      if ( v4 == 113 )
      {
        v3 = SF_DRAFT_PTR(char, 0x800124CDu);
      }
      else if ( v4 >= 114 )
      {
        if ( v4 == 116 )
          v3 = SF_DRAFT_PTR(char, 0x800124D9u);
      }
      else if ( v4 == 101 )
      {
        v3 = SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x800124D0u)));
      }
      break;
    case 't':
      v3 = SF_DRAFT_PTR(char, 0x800124C4u);
      break;
    case 'x':
      v3 = SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint16, 0x800124CAu));
      break;
    default:
      break;
  }
  if ( !v3 )
    return 0;
  v8 = (uint8)v3[2];
  v9 = *v3;
  v10 = v3[1];
  *SF_DRAFT_PTR(_WORD, (a2 + 10)) = 8;
  result = v8 + 2;
  *SF_DRAFT_PTR(_WORD, (a2 + 8)) = v8;
  *SF_DRAFT_PTR(_BYTE, (a2 + 14)) = v9;
  *SF_DRAFT_PTR(_BYTE, (a2 + 15)) = v10;
  return result;
}

// FUNCTION_MARKER 0x80067294u 0x80067294
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80067294(void)
{
  FUNCTION_MARKER(0x80067294u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2; 
  int v3; 
  int *v4; 
  char v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9[8]; 

  v1 = *SF_DRAFT_PTR(uint8, (v0 + 2936));
  v2 = 16;
  if ( v1 != 16 )
  {
    v3 = 8 * v1;
    do
    {
      v4 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8011E680u)[v3]);
      v5 = LOBYTE(SF_DRAFT_PTR(uint32, 0x8011E680u)[v3 + 7]) - 1;
      LOBYTE(SF_DRAFT_PTR(uint32, 0x8011E680u)[v3 + 7]) = v5;
      if ( v5 )
      {
        v2 = v1;
      }
      else
      {
        v9[0] = *v4;
        v9[1] = *((__int16 *)v4 + 4);
        v9[2] = v4[1];
        v9[4] = *((__int16 *)v4 + 5);
        v9[5] = *((__int16 *)v4 + 6);
        v9[6] = *((__int16 *)v4 + 7);
        v6 = *((__int16 *)v4 + 8);
        if ( v6 >= 0 )
        {
          v8 = *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
          if ( (*SF_DRAFT_PTR(_DWORD, r_u32((v8 + 8))) || v6 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)))
            && (*SF_DRAFT_PTR(_BYTE, (v8 + 34)) != 2 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 28)) + 32)) & 0x200) != 0) )
          {
            sub_80068770(v6, *((sint16 *)v4 + 10), *((sint16 *)v4 + 11), *((sint16 *)v4 + 9), v4[6], *((uint8 *)v4 + 30), sf_draft_guest_address(v9), (sint32)sf_draft_guest_address(v9 + 4));
          }
          v7 = sf_draft_guest_address(v4);
        }
        else
        {
          sub_8006784C(*((sint16 *)v4 + 10), 0, v4[6], sf_draft_guest_address(v9), sf_draft_guest_address(v9 + 4));
          v7 = sf_draft_guest_address(v4);
        }
        sub_8006725C(v7, v2);
      }
      v1 = *((uint8 *)v4 + 29);
      v3 = 8 * v1;
    }
    while ( v1 != 16 );
  }
}

// FUNCTION_MARKER 0x800DE120u 0x800de120
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DE120(sint32 a1, sint32 a2, sint16 a3, sint16 a4, sint32 a9, sint16 a10)
{
  FUNCTION_MARKER(0x800DE120u, "SCUS_942.40");
  int result; 
  int v15; 
  char v16; 
  char v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  __int16 v22; 

  if ( !a1 )
    return 19;
  v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 12)) & 3;
  v16 = 2 - v15;
  v17 = sub_800E7F14(v15, 0, *SF_DRAFT_PTR(__int16, (a1 + 16)), *SF_DRAFT_PTR(__int16, (a1 + 18)));
  *SF_DRAFT_PTR(_DWORD, a2) = v15 << 24;
  v18 = v17 & 0x1F;
  *SF_DRAFT_PTR(_WORD, (a2 + 4)) = a3 - (*SF_DRAFT_PTR(uint16, 0x8012C7B0u));
  *SF_DRAFT_PTR(_WORD, (a2 + 6)) = a4 - (*SF_DRAFT_PTR(uint16, 0x8012C7B2u));
  if ( a9 << 16 )
    *SF_DRAFT_PTR(_WORD, (a2 + 8)) = a9;
  else
    *SF_DRAFT_PTR(_WORD, (a2 + 8)) = *SF_DRAFT_PTR(uint16, (a1 + 20)) << v16;
  if ( a10 )
    *SF_DRAFT_PTR(_WORD, (a2 + 10)) = a10;
  else
    *SF_DRAFT_PTR(_WORD, (a2 + 10)) = *SF_DRAFT_PTR(_WORD, (a1 + 22));
  v19 = *SF_DRAFT_PTR(uint16, (a2 + 8));
  v20 = *SF_DRAFT_PTR(uint16, (a2 + 10));
  *SF_DRAFT_PTR(_WORD, (a2 + 12)) = v18;
  *SF_DRAFT_PTR(_WORD, (a2 + 24)) = v19 >> 1;
  *SF_DRAFT_PTR(_WORD, (a2 + 26)) = v20 >> 1;
  if ( v18 >= 0x10 )
    v21 = (v18 - 16) << 6;
  else
    v21 = v18 << 6;
  *SF_DRAFT_PTR(_BYTE, (a2 + 14)) = (*SF_DRAFT_PTR(__int16, (a1 + 16)) - v21) << v16;
  *SF_DRAFT_PTR(_BYTE, (a2 + 15)) = (uint8)*SF_DRAFT_PTR(_WORD, (a1 + 18));
  result = 0;
  *SF_DRAFT_PTR(_WORD, (a2 + 16)) = *SF_DRAFT_PTR(_WORD, (a1 + 28));
  v22 = *SF_DRAFT_PTR(_WORD, (a1 + 30));
  *SF_DRAFT_PTR(_BYTE, (a2 + 20)) = 0x80;
  *SF_DRAFT_PTR(_BYTE, (a2 + 21)) = 0x80;
  *SF_DRAFT_PTR(_BYTE, (a2 + 22)) = 0x80;
  *SF_DRAFT_PTR(_DWORD, (a2 + 32)) = 0;
  *SF_DRAFT_PTR(_WORD, (a2 + 28)) = 4096;
  *SF_DRAFT_PTR(_WORD, (a2 + 30)) = 4096;
  *SF_DRAFT_PTR(_DWORD, (a2 + 36)) = 0;
  *SF_DRAFT_PTR(_WORD, (a2 + 18)) = v22;
  return result;
}

// FUNCTION_MARKER 0x800CB7B0u 0x800cb7b0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800CB7B0(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint16 a9)
{
  FUNCTION_MARKER(0x800CB7B0u, "SCUS_942.40");
  int v12; 
  uint8 *v14; 
  _DWORD *v15; 
  int v16; 
  _DWORD *v17; 
  int *result; 
  int v19; 
  int *v20; 

  v12 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  if ( (*SF_DRAFT_PTR(_DWORD, (v12 + 40)) & 0x2000000) != 0 )
    v14 = *(uint8 **)(v12 + 44);
  else
    v14 = *(uint8 **)(4 * a2 + *SF_DRAFT_PTR(_DWORD, (v12 + 44)));
  v15 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 32)));
  if ( *v14 == 234 )
    v14 += 256 * v14[2] + v14[1];
  if ( v15 )
  {
    while ( 1 )
    {
      v16 = *v15;
      v17 = SF_DRAFT_PTR(_DWORD, v15[2]);
      result = 0;
      if ( *(uint8 **)(*v15 + 12) == v14 )
        break;
      v19 = *SF_DRAFT_PTR(_DWORD, (v16 + 40));
      if ( v19 == a4 || !a4 || (v15 = SF_DRAFT_PTR(_DWORD, v15[2]), !v19) )
      {
        sub_800CB994(a1, *SF_DRAFT_PTR(__int16, (v16 + 4)));
        v15 = v17;
      }
      if ( !v15 )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v20 = SF_DRAFT_PTR(int, sub_800CB61C());
    if ( v20 )
    {
      *v20 = sub_800DE5E0(a1 + 32, (sint32)sf_draft_guest_address(v20));
      v20[2] = 0x40000000;
      if ( a3 )
        v20[2] = 1342177280;
      v20[3] = sf_draft_guest_address(v14);
      v20[4] = sf_draft_guest_address(v14);
      v20[5] = -1;
      v20[6] = -1;
      *((_WORD *)v20 + 2) = a2;
      *((_WORD *)v20 + 3) = a9;
      v20[12] = 0;
      v20[8] = 0;
      v20[7] = 0;
      v20[9] = 0;
      v20[10] = a4;
      v20[11] = a3;
      sub_800CD230(a1, a2, 1);
      return sf_draft_guest_address(v20);
    }
    else
    {
      return 0;
    }
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x80014B3Cu 0x80014b3c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80014B3C(void)
{
  FUNCTION_MARKER(0x80014B3Cu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int result; 
  char v2; 
  int v3 = SF_DRAFT_GP;
  int v4 = SF_DRAFT_GP;
  uint16 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9 = SF_DRAFT_GP;
  int v10; 
  int v11; 
  int v12 = SF_DRAFT_GP;
  __int16 v13; 
  int v14 = SF_DRAFT_GP;
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20 = SF_DRAFT_GP;
  int v21 = SF_DRAFT_GP;

  result = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116AF0u));
  if ( (*SF_DRAFT_PTR(uint8, 0x80116AF0u)) )
  {
    if ( *SF_DRAFT_PTR(uint8, (v0 + 33)) == 255 )
    {
      v2 = sub_80084998(-20, -90, 50, 45);
      *SF_DRAFT_PTR(_BYTE, (v3 + 33)) = v2;
      sub_800848D4((*SF_DRAFT_PTR(uint32, 0x80118250u)), 5);
      v5 = sub_8008582C(*SF_DRAFT_PTR(uint8, (v4 + 33)), 0x80115C8Cu, -1, (*SF_DRAFT_PTR(uint32, 0x80118250u)));
      v6 = v5;
      v7 = 255;
      v8 = 96;
      *SF_DRAFT_PTR(_WORD, (v9 + 2496)) = v5;
      v10 = 160;
    }
    else
    {
      result = (*SF_DRAFT_PTR(uint32, 0x801169A4u)) & 7;
      if ( ((*SF_DRAFT_PTR(uint32, 0x801169A4u)) & 7) != 0 )
        return result;
      if ( *SF_DRAFT_PTR(_BYTE, (v0 + 2500)) )
      {
        v11 = *SF_DRAFT_PTR(uint16, (v0 + 2496));
        *SF_DRAFT_PTR(_BYTE, (v0 + 2500)) = 0;
        result = sub_80086EA0(v11, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80115C70u)));
        *SF_DRAFT_PTR(_WORD, (v12 + 2496)) = result;
        return result;
      }
      v13 = sub_80086EA0(*SF_DRAFT_PTR(uint16, (v0 + 2496)), 0x80115C8Cu);
      *SF_DRAFT_PTR(_WORD, (v14 + 2496)) = v13;
      v15 = sub_800EC8F4();
      v17 = (uint8)(v15 + v15 / 255);
      v16 = sub_800EC8F4();
      v19 = (uint8)(v16 + v16 / 255);
      v18 = sub_800EC8F4();
      v7 = v17;
      v8 = v19;
      v6 = *SF_DRAFT_PTR(uint16, (v20 + 2496));
      v10 = (uint8)(v18 % 255);
    }
    sub_80086E44(v6, v7, v8, v10);
    result = 1;
    *SF_DRAFT_PTR(_BYTE, (v21 + 2500)) = 1;
  }
  return result;
}

// FUNCTION_MARKER 0x800DF198u 0x800df198
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800DF198(sint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
  unsigned int * native_a4 = SF_DRAFT_PTR(unsigned int, a4);
  FUNCTION_MARKER(0x800DF198u, "SCUS_942.40");
  int v4 = SF_DRAFT_GP;
  int result; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  bool v17; 
  int v18; 

  if ( a1 && a2 && (*SF_DRAFT_PTR(int, (a1 + 8)) < 0 || a3 >= 0x800) && native_a4 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (a1 + 16)) )
    {
      v10 = a3 >> 11;
      if ( *SF_DRAFT_PTR(_BYTE, (v4 + 2460)) == 1 && (result = sub_800DF6EC(0), v10 = a3 >> 11, result) )
      {
        *native_a4 = 0;
      }
      else
      {
        v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
        if ( v11 < v10 << 11 )
        {
          v12 = (v11 + 2047) >> 11;
          *native_a4 = v11;
        }
        else
        {
          v12 = v10;
          *native_a4 = v10 << 11;
        }
        v13 = 0;
        v14 = 0;
LABEL_16:
        v15 = v13;
        do
        {
          ++v13;
          if ( v15 >= 10 )
            break;
          v14 = sub_800ED5C0(2, a1 + 12, 0);
          if ( !v14 )
            goto LABEL_16;
          sub_800F0384(v12, a2, 128);
          v16 = sub_800F0520(0, 0);
          v14 = v16 != -1;
          v17 = v16 == -1;
          v15 = v13;
        }
        while ( v17 );
        if ( v14 )
        {
          v18 = sub_800EDB24(a1 + 12);
          sub_800EDA20(v18 + v12, a1 + 12);
          result = 0;
          *SF_DRAFT_PTR(_DWORD, (a1 + 16)) -= *native_a4;
        }
        else
        {
          *native_a4 = 0;
          sub_800DF43C(36u);
          return 36;
        }
      }
    }
    else
    {
      *native_a4 = 0;
      return 0;
    }
  }
  else
  {
    *native_a4 = 0;
    return 1;
  }
  return result;
}

// FUNCTION_MARKER 0x8006C440u 0x8006c440
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006C440(void)
{
  FUNCTION_MARKER(0x8006C440u, "SCUS_942.40");
  int result; 
  int v1 = SF_DRAFT_GP;
  int v2; 


  _WORD *v5; 




  result = -2;
  if ( (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) == -1 )
  {
    if ( sub_800C60B4() )
    {
      if ( (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) != -1 && (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) != -1 )
      {
        sub_8006B90C(4, 0xFFFFFFFF, *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), 0, (int)&v5, (int)&v5 + 2);
        sub_800C1234(*SF_DRAFT_PTR(_DWORD, (v1 + 2960)), (*SF_DRAFT_PTR(uint16, 0x80128DA8u)), (__int16)v5, SHIWORD(v5));
      }
      (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -1;
      return sub_800C8A9C(0x8006C440u, 1, -524288000);
    }
    else
    {
      if ( (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) != -1 && (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) != -1 )
        sub_80015364((*SF_DRAFT_PTR(uint16, 0x80128DA4u)), 4u, 0xFFFF, (*SF_DRAFT_PTR(uint16, 0x80128DA6u)), 0, 0, 0, 0);
      sub_800C5ED4();
      sub_80082EC0();
      result = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = -1;
    }
  }
  else if ( (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) == -2 )
  {
    v2 = 0;
    if ( (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) != -1 )
      v2 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    return sub_8006C620((*SF_DRAFT_PTR(uint16, 0x80128DA8u)), v2, 1);
  }
  return result;
}

// FUNCTION_MARKER 0x800E1E64u 0x800e1e64
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800E1E64(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  char * native_a3 = SF_DRAFT_PTR(char, a3);
  _DWORD * native_a4 = SF_DRAFT_PTR(_DWORD, a4);
  FUNCTION_MARKER(0x800E1E64u, "SCUS_942.40");
  int v5; 
  int v6; 
  char v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  v9 = native_a2[9] - native_a2[5];
  v10 = native_a2[11] - native_a2[7];
  v11 = native_a2[1] - native_a2[5];
  v12 = native_a2[3] - native_a2[7];
  v5 = v11 * v10 - v12 * v9;
  if ( v11 * v10 == v12 * v9 )
  {
    v7 = 0;
  }
  else
  {
    v6 = ((native_a1[2] - native_a2[7]) * v11 - (*native_a1 - native_a2[5]) * v12) * (native_a2[10] - native_a2[6])
       + ((*native_a1 - native_a2[5]) * v10 - (native_a1[2] - native_a2[7]) * v9) * (native_a2[2] - native_a2[6]);
    if ( v5 == -1 && v6 == 0x80000000 )
      _break(6u, 0);
    v7 = 1;
    *native_a4 = native_a2[6] + v6 / v5;
  }
  *native_a3 = v7;
  return 0;
}

// FUNCTION_MARKER 0x800CFE64u 0x800cfe64
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CFE64(uint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x800CFE64u, "SCUS_942.40");
  int v4 = SF_DRAFT_GP;
  int v9; 
  int v11; 
  _WORD *v12; 
  uint32 v13; 
  int v14 = SF_DRAFT_GP;
  int v15; 
  int v16; 
  int v17; 

  v9 = *native_a1 & 1;
  if ( (*SF_DRAFT_PTR(_DWORD, (a4 + 8)) & 0xA0) != 0 )
  {
    sub_800C777C( sf_draft_guest_address(SF_DRAFT_PTR(unsigned int, r_u32((a4 + 12)))));
    *SF_DRAFT_PTR(_BYTE, (a4 + 8)) &= ~0x80u;
  }
  if ( (*SF_DRAFT_PTR(_BYTE, (a4 + 8)) & 0x14) != 0 )
  {
    if ( (*SF_DRAFT_PTR(_BYTE, (a4 + 8)) & 4) != 0 )
      *SF_DRAFT_PTR(_BYTE, (a4 + 8)) &= ~4u;
    return;
  }
  else
  {
    v11 = sf_draft_guest_address(native_a1);
    if ( (*SF_DRAFT_PTR(_BYTE, (a4 + 10)) & 0x10) != 0 )
    {
      v12 = SF_DRAFT_PTR(uint16, r_u32(r_u32((uint32)a4 + 24u)));
      v13 = r_u32(r_u32((uint32)a4 + 28u));
      LOWORD(v15) = v12[2];
      v16 = -(__int16)v12[5];
      LOWORD(v17) = v12[8];
      if ( v13 == 0x8010E0E0u )
      {
        v15 = -(__int16)v12[2];
        LOWORD(v16) = v12[5];
        v17 = -(__int16)v12[8];
      }
      *SF_DRAFT_PTR(_DWORD, (v4 + 2228)) = v13;
      LOWORD((*SF_DRAFT_PTR(uint32, 0x8012DB98u))) = v15;
      HIWORD((*SF_DRAFT_PTR(uint32, 0x8012DB98u))) = v16;
      LOWORD((*SF_DRAFT_PTR(uint32, 0x8012DB9Cu))) = v17;
      v11 = sf_draft_guest_address(native_a1);
    }
    sub_800CFDB0(v11, a4);
    if ( (_BYTE)v9 )
      sub_800D2424(sf_draft_guest_address(native_a1),  a2,  a3,  a4);
    else
      sub_800D1BE0(sf_draft_guest_address(native_a1),  a2,  a3,  a4);
    *SF_DRAFT_PTR(_BYTE, (a4 + 8)) |= 0x40u;
    *SF_DRAFT_PTR(_DWORD, (v14 + 2228)) = 0x8010E02Cu;
  }
  return;
}

// FUNCTION_MARKER 0x80019F24u 0x80019f24
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019F24(sint32 a1)
{
  FUNCTION_MARKER(0x80019F24u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v4; 
  BOOL v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  v2 = 0;
  v3 = 432;
  do
  {
    v4 = a1 + v3;
    if ( a1 + v3 && *SF_DRAFT_PTR(_BYTE, v4) == 1 )
    {
      v5 = *SF_DRAFT_PTR(_DWORD, (v4 + 4)) != 0;
      sub_80019A3C(sf_draft_guest_address(SF_DRAFT_PTR(int, (v4 + 92))), sf_draft_guest_address(SF_DRAFT_PTR(int, (v4 + 60))),  *SF_DRAFT_PTR(_DWORD, (v4 + 4)) != 0);
      sub_8001A0A4(a1 + v3);
      if ( v5 )
      {
        if ( *SF_DRAFT_PTR(_DWORD, (v4 + 140)) )
          *SF_DRAFT_PTR(_DWORD, (v4 + 140)) = 0;
        else
          *SF_DRAFT_PTR(_DWORD, (v4 + 60)) = *SF_DRAFT_PTR(_DWORD, (v4 + 76));
        if ( *SF_DRAFT_PTR(_DWORD, (v4 + 144)) )
          *SF_DRAFT_PTR(_DWORD, (v4 + 144)) = 0;
        else
          *SF_DRAFT_PTR(_DWORD, (v4 + 64)) = *SF_DRAFT_PTR(_DWORD, (v4 + 80));
        if ( *SF_DRAFT_PTR(_DWORD, (v4 + 148)) )
          *SF_DRAFT_PTR(_DWORD, (v4 + 148)) = 0;
        else
          *SF_DRAFT_PTR(_DWORD, (v4 + 68)) = *SF_DRAFT_PTR(_DWORD, (v4 + 84));
      }
      else if ( *SF_DRAFT_PTR(_DWORD, (v4 + 140)) )
      {
        *SF_DRAFT_PTR(_DWORD, (v4 + 140)) = 0;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (v4 + 60)) = *SF_DRAFT_PTR(_DWORD, (v4 + 76));
      }
      v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 192));
      v7 = *SF_DRAFT_PTR(_DWORD, (v4 + 196));
      v8 = *SF_DRAFT_PTR(_DWORD, (v4 + 200));
      *SF_DRAFT_PTR(_DWORD, (v4 + 156)) = *SF_DRAFT_PTR(_DWORD, (v4 + 188));
      *SF_DRAFT_PTR(_DWORD, (v4 + 160)) = v6;
      *SF_DRAFT_PTR(_DWORD, (v4 + 164)) = v7;
      *SF_DRAFT_PTR(_DWORD, (v4 + 168)) = v8;
      v9 = *SF_DRAFT_PTR(_DWORD, (v4 + 208));
      v10 = *SF_DRAFT_PTR(_DWORD, (v4 + 212));
      v11 = *SF_DRAFT_PTR(_DWORD, (v4 + 216));
      *SF_DRAFT_PTR(_DWORD, (v4 + 172)) = *SF_DRAFT_PTR(_DWORD, (v4 + 204));
      *SF_DRAFT_PTR(_DWORD, (v4 + 176)) = v9;
      *SF_DRAFT_PTR(_DWORD, (v4 + 180)) = v10;
      *SF_DRAFT_PTR(_DWORD, (v4 + 184)) = v11;
      sub_800C6E48(v4 + 220, v4 + 268, 12);
    }
    ++v2;
    v3 += 324;
  }
  while ( v2 < 9 );
  return 1;
}

// FUNCTION_MARKER 0x800835C8u 0x800835c8
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800835C8(sint32 a1)
{
  FUNCTION_MARKER(0x800835C8u, "SCUS_942.40");
  unsigned int v2; 
  int v3; 
  BOOL result; 
  unsigned int v5; 
  uint16 *v6; 
  __int16 *v7; 
  int v8; 
  int v9; 
  _WORD *v10; 
  int v11; 

  v2 = *SF_DRAFT_PTR(_DWORD, a1);
  v3 = *SF_DRAFT_PTR(uint16, (a1 + 12));
  result = *SF_DRAFT_PTR(_DWORD, a1) < (unsigned int)(*SF_DRAFT_PTR(_DWORD, a1) + 44 * v3);
  v5 = *SF_DRAFT_PTR(_DWORD, a1);
  if ( *SF_DRAFT_PTR(_DWORD, a1) < (unsigned int)(*SF_DRAFT_PTR(_DWORD, a1) + 44 * v3) )
  {
    v6 = SF_DRAFT_PTR(uint16, (v2 + 8));
    do
    {
      if ( (__int16)*(v6 - 2) < (__int16)v6[20] )
      {
        v7 = SF_DRAFT_PTR(__int16, (v5 + 4));
        do
        {
          if ( v5 >= *SF_DRAFT_PTR(_DWORD, a1) + 44 * (unsigned int)*SF_DRAFT_PTR(uint16, (a1 + 12)) - 44 )
            break;
          v7 += 22;
          v6 += 22;
          v5 += 44;
        }
        while ( *v7 < v7[22] );
      }
      if ( (*SF_DRAFT_PTR(_BYTE, (a1 + 20)) & 0x40) != 0 )
      {
        v8 = *SF_DRAFT_PTR(__int16, (a1 + 14)) - ((__int16)*(v6 - 2) + *v6);
      }
      else
      {
        if ( (*SF_DRAFT_PTR(_BYTE, (a1 + 20)) & 8) != 0 )
          v9 = ((__int16)*(v6 - 2) + *v6 - *SF_DRAFT_PTR(__int16, (v2 + 4))) / 2 + *SF_DRAFT_PTR(__int16, (v2 + 4));
        else
          v9 = *SF_DRAFT_PTR(__int16, (v2 + 4));
        v8 = *SF_DRAFT_PTR(__int16, (a1 + 14)) - v9;
      }
      if ( v8 )
      {
        v10 = SF_DRAFT_PTR(_WORD, (v2 + 4));
        if ( v5 >= v2 )
        {
          do
          {
            v2 += 44;
            *v10 += v8;
            v10 += 22;
          }
          while ( v5 >= v2 );
          v6 += 22;
          goto LABEL_19;
        }
      }
      else
      {
        v2 = v5 + 44;
      }
      v6 += 22;
LABEL_19:
      v11 = 44 * *SF_DRAFT_PTR(uint16, (a1 + 12));
      result = v2 < *SF_DRAFT_PTR(_DWORD, a1) + v11;
      v5 += 44;
    }
    while ( v2 < *SF_DRAFT_PTR(_DWORD, a1) + v11 );
  }
  return result;
}

// FUNCTION_MARKER 0x80015E80u 0x80015e80
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_80015E80(uint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x80015E80u, "SCUS_942.40");
  int v2 = SF_DRAFT_GP;
  int v3; 
  int v4 = SF_DRAFT_GP;
  int v5; 
  int v6; 

  *SF_DRAFT_PTR(_DWORD, (v2 + 16)) = a1;
  switch ( a1 )
  {
    case 0u:
      sub_8006C12C(0);
      sub_80082EC0();
      break;
    case 1u:
    case 2u:
    case 5u:
    case 6u:
    case 8u:
    case 9u:
      return;
    case 3u:
      sub_80082DE0();
      break;
    case 4u:
      if ( a2 )
      {
        sub_8006C7CC();
        sub_80082724();
        v3 = (*SF_DRAFT_PTR(uint32, 0x80115CD4u));
        *SF_DRAFT_PTR(_DWORD, (v4 + 24)) = 0;
        if ( v3 )
        {
          (*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) = 0;
          sub_800CCABC();
          sub_800CA618();
          sub_800E5000(0);
        }
        sub_80015A00(SF_DRAFT_PTR(const char, 0x80010090u), 0x80146630u, 1);
        sub_80015B68(SF_DRAFT_PTR(const char, 0x80010050u), 0);
        if ( (*SF_DRAFT_PTR(uint32, 0x80115CD4u)) )
        {
          sub_800CA618();
          sub_800DE4EC((*SF_DRAFT_PTR(uint32, 0x80115CD4u)));
          sub_800CDB80();
          v5 = sub_800DE3FC();
          sub_800CB000(v5);
        }
      }
      break;
    case 7u:
      if ( a2 )
      {
        (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) &= ~1u;
        sub_80015CF0( sf_draft_guest_address(SF_DRAFT_PTR(const char, 0x80115CA8u)), 14, (int)0x80015CA0u);
      }
      break;
    case 0xAu:
      if ( a1 >= 0xA )
      {
        v6 = 1462;
        goto LABEL_14;
      }
      break;
    default:
      v6 = 1467;
LABEL_14:
      sub_800DDC34(1, 0, 0x8001009Cu, v6);
      break;
  }
}

// FUNCTION_MARKER 0x8007903Cu 0x8007903c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8007903C(sint32 a1)
{
  FUNCTION_MARKER(0x8007903Cu, "SCUS_942.40");
  int result; 
  _DWORD *v3; 
  _DWORD *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int *v17; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 

  (*SF_DRAFT_PTR(uint32, 0x80116B84u)) = 0;
  sub_80078DF4();
  result = (*SF_DRAFT_PTR(uint32, 0x80116B74u));
  if ( (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x80130F10u)[0] + 4)) < (unsigned int)(*SF_DRAFT_PTR(uint16, 0x80116A04u)) )
    {
      v3 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_PTR(uint32, 0x80130F10u)[0]);
      *SF_DRAFT_PTR(_BYTE, (a1 + 236)) = 1;
      *SF_DRAFT_PTR(_DWORD, (a1 + 232)) = v3[1];
      v4 = SF_DRAFT_PTR(_DWORD, v3[19]);
      v5 = v4[1];
      v6 = v4[2];
      v7 = v4[3];
      *SF_DRAFT_PTR(_DWORD, (a1 + 272)) = *v4;
      *SF_DRAFT_PTR(_DWORD, (a1 + 276)) = v5;
      *SF_DRAFT_PTR(_DWORD, (a1 + 280)) = v6;
      *SF_DRAFT_PTR(_DWORD, (a1 + 284)) = v7;
      *SF_DRAFT_PTR(_DWORD, (a1 + 288)) = v4[4];
      v8 = v3[9];
      v9 = v3[10];
      v10 = v3[11];
      *SF_DRAFT_PTR(_DWORD, (a1 + 240)) = v3[8];
      *SF_DRAFT_PTR(_DWORD, (a1 + 244)) = v8;
      *SF_DRAFT_PTR(_DWORD, (a1 + 248)) = v9;
      *SF_DRAFT_PTR(_DWORD, (a1 + 252)) = v10;
      v11 = v3[5];
      v12 = v3[6];
      v13 = v3[7];
      *SF_DRAFT_PTR(_DWORD, (a1 + 256)) = v3[4];
      *SF_DRAFT_PTR(_DWORD, (a1 + 260)) = v11;
      *SF_DRAFT_PTR(_DWORD, (a1 + 264)) = v12;
      *SF_DRAFT_PTR(_DWORD, (a1 + 268)) = v13;
    }
    result = (*SF_DRAFT_PTR(uint32, 0x80116B74u));
    v14 = 0;
    if ( (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
    {
      v15 = (*SF_DRAFT_PTR(uint32, 0x80116B74u));
      v16 = (*SF_DRAFT_PTR(uint16, 0x80116A04u));
      v17 = SF_DRAFT_PTR(int, 0x80130F10u);
      v18 = (*SF_DRAFT_PTR(uint16, 0x80116A04u)) + 20;
      while ( 1 )
      {
        v19 = *v17;
        v20 = *SF_DRAFT_PTR(_DWORD, (*v17 + 4));
        result = v16 < v20;
        if ( v16 < v20 )
          break;
        result = v20 < v18;
        if ( *SF_DRAFT_PTR(_DWORD, (v19 + 8)) != 2 )
          break;
        if ( v20 < v18 )
        {
          v21 = (*SF_DRAFT_PTR(uint32, 0x80116B84u))++;
          SF_DRAFT_PTR(uint32, 0x8013C5B8u)[v21] = *SF_DRAFT_PTR(_DWORD, r_u32((v19 + 76)));
        }
        result = ++v14 < v15;
        ++v17;
        if ( v14 >= v15 )
          return result;
      }
      (*SF_DRAFT_PTR(uint32, 0x801168F0u)) = *v17;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x80018A70u 0x80018a70
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80018A70(sint32 a1, uint32 a2, sint32 a3, sint32 a4)
{
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  FUNCTION_MARKER(0x80018A70u, "SCUS_942.40");
  int result; 
  uint8 v7; 
  _DWORD *v8; 
  int v9; 
  _DWORD *v10; 

  switch ( a3 )
  {
    case 0:
      result = (uint8)sub_80018C0C(a1, (sint32)(a2 + 12u), 0, native_a2[1], a4);
      if ( a1 == 1 )
      {
        native_a2[7] = 0;
        native_a2[8] = 0;
        native_a2[9] = 0;
        native_a2[11] = 0;
        native_a2[12] = 0;
        native_a2[13] = 0;
      }
      return result;
    case 1:
      return (uint8)sub_80018C6C(a1, sf_draft_guest_address(native_a2),  a4);
    case 2:
      v8 = native_a2 + 39;
      v9 = native_a2[1];
      v10 = native_a2 + 47;
      goto LABEL_10;
    case 3:
      v8 = native_a2 + 43;
      v9 = native_a2[1];
      v10 = native_a2 + 51;
      goto LABEL_10;
    case 4:
      v8 = native_a2 + 55;
      v9 = native_a2[1];
      v10 = native_a2 + 67;
      goto LABEL_10;
    case 5:
      v8 = native_a2 + 59;
      v9 = native_a2[1];
      v10 = native_a2 + 71;
      goto LABEL_10;
    case 6:
      v8 = native_a2 + 63;
      v9 = native_a2[1];
      v10 = native_a2 + 75;
LABEL_10:
      v7 = sub_80018C0C(a1, (sint32)sf_draft_guest_address(v8), (sint32)sf_draft_guest_address(v10), v9, a4);
      break;
    case 7:
      v7 = sub_80018BCC(a1, native_a2 + 35, 0, native_a2[1]);
      break;
    default:
      v7 = 0;
      break;
  }
  return v7;
}

// FUNCTION_MARKER 0x8008582Cu 0x8008582c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008582C(unsigned __int8 a1, uint32 a2, sint32 a3, sint32 a4)
{
  _BYTE * native_a2 = SF_DRAFT_PTR(_BYTE, a2);
  FUNCTION_MARKER(0x8008582Cu, "SCUS_942.40");
  int *v7; 
  int result; 
  uint16 v9; 
  int *v10; 
  int *v11; 
  __int16 v12; 
  __int16 v13; 
  int var8[4]; 

  if ( a1 < 7u )
    v7 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x80120EF8u)[5 * a1]);
  else
    v7 = 0;
  if ( !v7 )
    return 0xFFFF;
  sub_80085794(sf_draft_guest_address(v7), sf_draft_guest_address(var8), sf_draft_guest_address(SF_DRAFT_PTR(_WORD, var8) + 1));
  v9 = sub_8008507C(sf_draft_guest_address(v7), sf_draft_guest_address(native_a2), a3, a4, sf_draft_guest_address(var8), sf_draft_guest_address(var8) + 2);
  result = v9;
  if ( v9 != 0xFFFF )
  {
    v10 = SF_DRAFT_PTR(int, sub_80083584(v9));
    v10[6] = 0;
    sub_800DE644( sf_draft_guest_address(v7 + 4),  0, sf_draft_guest_address(v10));
    v11 = v10;
    if ( (*v7 & 4) != 0 )
    {
      *((_BYTE *)v10 + 20) |= 8u;
      v12 = *((_WORD *)v10 + 7);
      v13 = *((__int16 *)v7 + 6) / 2;
    }
    else
    {
      if ( (*v7 & 8) == 0 )
      {
LABEL_12:
        sub_800834D8();
        return v9;
      }
      *((_BYTE *)v10 + 20) |= 0x40u;
      v12 = *((_WORD *)v10 + 7);
      v13 = *((_WORD *)v7 + 6);
    }
    *((_WORD *)v10 + 7) = v12 + v13;
    sub_800835C8(sf_draft_guest_address(v10));
    goto LABEL_12;
  }
  return result;
}

// FUNCTION_MARKER 0x8003F4B0u 0x8003f4b0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003F4B0(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x8003F4B0u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7 = SF_DRAFT_GP;
  int result; 

  v3 = *native_a1 - *SF_DRAFT_PTR(__int16, (v1 + 3456));
  v4 = native_a1[1] - (*SF_DRAFT_PTR(uint16, 0x801169EAu));
  v5 = native_a1[2] - (*SF_DRAFT_PTR(uint16, 0x801169ECu));
  v6 = sub_800EA904(v3 * v3 + v4 * v4 + v5 * v5);
  result = v6 < 321;
  if ( v6 >= 321 )
  {
    *native_a1 = *SF_DRAFT_PTR(__int16, (v7 + 3456)) + 320 * v3 / v6;
    native_a1[1] = (*SF_DRAFT_PTR(uint16, 0x801169EAu)) + 320 * v4 / v6;
    result = (*SF_DRAFT_PTR(uint16, 0x801169ECu)) + 320 * v5 / v6;
    native_a1[2] = result;
  }
  return result;
}

// FUNCTION_MARKER 0x80031D00u 0x80031d00
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80031D00(sint32 a1)
{
  FUNCTION_MARKER(0x80031D00u, "SCUS_942.40");
  int v1; 
  __int16 *v2; 
  signed int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  BOOL v10; 
  BOOL v11; 
  int result; 

  v1 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v2 = SF_DRAFT_PTR(__int16, r_u32((v1 + 20)));
  v3 = *((_DWORD *)v2 + 53) & 0xFFFF3FFF;
  if ( *v2 < 0 )
    goto LABEL_8;
  v4 = *SF_DRAFT_PTR(__int16, (v1 + 2));
  if ( v4 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x80115FB8u)) )
      goto LABEL_10;
LABEL_8:
    v7 = 0;
    goto LABEL_9;
  }
  v5 = 76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
  if ( !*SF_DRAFT_PTR(_BYTE, (v5 + 36)) )
  {
    v6 = *SF_DRAFT_PTR(_DWORD, (v5 + 36)) & 0x3000;
    if ( v6 != 4096 && v6 != 0x2000 )
    {
      v7 = 0;
LABEL_9:
      v8 = *((_DWORD *)v2 + 1);
      v9 = *((_DWORD *)v2 + 43);
      *((_DWORD *)v2 + 46) = 0;
      *((_DWORD *)v2 + 1) = v8 & 0xFFFFFFFD;
      *((_DWORD *)v2 + 44) = v9;
LABEL_16:
      v11 = v7 < 4097;
      goto LABEL_17;
    }
  }
LABEL_10:
  v10 = v3 < 2744;
  if ( *SF_DRAFT_PTR(_BYTE, (v1 + 34)) == 2 )
  {
    v10 = v3 < 2744;
    if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v1 + 28)) + 72)) != 2 )
      goto LABEL_15;
  }
  if ( v10 )
    *((_DWORD *)v2 + 46) = 0;
  v7 = (v2[44] << 12) / 100;
  v11 = v7 < 4097;
  if ( v7 <= 0 )
  {
LABEL_15:
    v7 = 1;
    goto LABEL_16;
  }
LABEL_17:
  if ( !v11 )
    v7 = 4096;
  result = (*SF_DRAFT_PTR(uint32, 0x80115E80u));
  if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
  {
    result = *((_DWORD *)v2 + 53) & 0xC000;
    v7 |= result;
  }
  *((_DWORD *)v2 + 53) = v7;
  return result;
}

// FUNCTION_MARKER 0x80015A00u 0x80015a00
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80015A00(const char *filename, uint32 destination, uint32 buffered)
{
  uint32 use_buffer = (uint8)buffered;
  uint32 filename_address = sf_draft_guest_address(filename);
  int * native_destination = SF_DRAFT_PTR(int, destination);
  FUNCTION_MARKER(0x80015A00u, "SCUS_942.40");
  int v5; 
  int i; 
  bool v9; 
  int *v10; 
  unsigned int v11; 
  char v12[56]; 
  int v13; 
  unsigned int v14; 
  char v15[8]; 

  v5 = 0;
  sub_800E5000(0);
  for ( i = 0; ; i = v5 )
  {
    do
    {
      ++v5;
      if ( i >= 6 )
        return 0;
      sub_800EC924(sf_draft_guest_address(v12),  sf_draft_guest_address("\\BIN\\%s;1"), filename_address);
      v9 = sub_800DEEF4(sf_draft_guest_address(v12), sf_draft_guest_address(&v13)) != 0;
      i = v5;
    }
    while ( v9 );
    sub_800DF148(v13, sf_draft_guest_address(&v14));
    v10 = SF_DRAFT_PTR(int, 0x8013D630u);
    if ( !use_buffer )
      v10 = native_destination;
    if ( !sub_800DF198(v13, sf_draft_guest_address(v10),  v14, sf_draft_guest_address(v15)) )
      break;
    sub_800DF3B0(sf_draft_guest_address(&v13));
  }
  if ( use_buffer )
  {
    v11 = 0x8014C0A8u - 0x80146630u;
    v14 = (v14 + 3) & 0xFFFFFFFC;
    if ( v14 < 0x8014C0A8u - 0x80146630u )
      v11 = v14;
    v14 = v11;
    sub_800C6E48(destination, 0x8013D630u,  v11 >> 2);
    sub_800DE3B4((sint32)(0x80146630u + v14));
    (*SF_DRAFT_PTR(uint8, 0x80102ACCu)) = 0;
  }
  sub_800DF3B0(sf_draft_guest_address(&v13));
  return v14;
}

// FUNCTION_MARKER 0x80019A3Cu 0x80019a3c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019A3C(uint32 a1, uint32 a2, sint8 a3)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x80019A3Cu, "SCUS_942.40");
  int v5; 
  int v6; 
  int result; 
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

  v11 = *native_a1;
  if ( a3 )
  {
    v12 = native_a1[1];
    v13 = native_a1[2];
    v15 = native_a1[4];
    v16 = native_a1[5];
    v17 = native_a1[6];
    v8 = native_a2[1];
    v9 = native_a2[2];
    v10 = native_a2[3];
    *native_a1 = *native_a2;
    native_a1[1] = v8;
    native_a1[2] = v9;
    native_a1[3] = v10;
    native_a1[4] = *native_a1 - v11;
    native_a1[5] = native_a1[1] - v12;
    native_a1[6] = native_a1[2] - v13;
    sub_800D94C8( sf_draft_guest_address(native_a1 + 4), sf_draft_guest_address(native_a1 + 4));
    native_a1[8] = native_a1[4] - v15;
    native_a1[9] = native_a1[5] - v16;
    result = native_a1[6] - v17;
    native_a1[10] = result;
  }
  else
  {
    v14 = native_a1[4];
    v5 = *native_a2;
    *native_a1 = *native_a2;
    v6 = (v5 - v11) << 12;
    native_a1[4] = v6;
    result = v6 - v14;
    native_a1[8] = result;
  }
  return result;
}

// FUNCTION_MARKER 0x80058E58u 0x80058e58
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80058E58(sint32 a1)
{
  FUNCTION_MARKER(0x80058E58u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3; 
  int *v4; 
  int v5; 
  int result; 
  _DWORD *v7; 
  int v8; 
  int v9; 
  int *v10; 
  int v11; 

  v2 = 0;
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  v4 = SF_DRAFT_PTR(int, 0x8012F120u);
  *SF_DRAFT_PTR(_WORD, (v1 + 3238)) = 0;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 >= 0 )
      break;
    ++v2;
    ++v4;
    if ( v2 >= 6 )
      goto LABEL_5;
  }
  *SF_DRAFT_PTR(_WORD, (v1 + 3238)) = v2 + 1;
LABEL_5:
  for ( result = 4 * v5; v5 >= 0; result = 4 * v5 )
  {
    v7 = SF_DRAFT_PTR(_DWORD, r_u32((4 * (4 * (result + v5) - v5) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)));
    if ( *SF_DRAFT_PTR(__int16, (v7[6] + 8)) > 0 )
    {
      v8 = v7[7];
      if ( v8 )
      {
        sub_800E0364(v7[3],  v3, sf_draft_guest_address(&v11));
        if ( v11 < 480 && *SF_DRAFT_PTR(_BYTE, (v8 + 72)) != 2 )
          sub_80059FCC(sf_draft_guest_address(v7),  1,  0,  1);
      }
    }
    v9 = *SF_DRAFT_PTR(__int16, (v1 + 3238));
    v5 = -1;
    if ( v9 < 6 )
    {
      v10 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012F120u)[v9]);
      while ( 1 )
      {
        v5 = *v10;
        if ( *v10 >= 0 )
          break;
        ++v9;
        ++v10;
        if ( v9 >= 6 )
          goto LABEL_16;
      }
      *SF_DRAFT_PTR(_WORD, (v1 + 3238)) = v9 + 1;
    }
LABEL_16:
    ;
  }
  return result;
}

// FUNCTION_MARKER 0x80073E48u 0x80073e48
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80073E48(void)
{
  FUNCTION_MARKER(0x80073E48u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int *v2; 
  int v3; 
  int *v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  v1 = 1;
  v2 = SF_DRAFT_PTR(int, 0x8011E9ACu);
  *SF_DRAFT_PTR(_DWORD, (v0 + 1008)) = 0;
  do
  {
    sub_80073B28(sf_draft_guest_address(v2), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x80116058u)));
    ++v1;
    v2 += 5;
  }
  while ( v1 < 115 );
  v3 = 4;
  v4 = SF_DRAFT_PTR(int, 0x80130230u);
  (*SF_DRAFT_PTR(uint32, 0x801301F8u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8013020Cu)) = 0;
  do
  {
    *v4 = 0;
    --v3;
    --v4;
  }
  while ( v3 >= 0 );
  v5 = 4;
  v6 = SF_DRAFT_PTR(int, 0x80128E88u);
  (*SF_DRAFT_PTR(uint32, 0x80128E50u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80128E64u)) = 0;
  do
  {
    *v6 = 0;
    --v5;
    --v6;
  }
  while ( v5 >= 0 );
  v7 = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x801169B0u)) > 0 )
  {
    v8 = 0;
    do
    {
      v9 = v8 + (*SF_DRAFT_PTR(uint32, 0x80116994u));
      *SF_DRAFT_PTR(_BYTE, (v9 + 24)) = 3;
      v10 = v8 + (*SF_DRAFT_PTR(uint32, 0x80116994u));
      *SF_DRAFT_PTR(_DWORD, (v9 + 20)) = *SF_DRAFT_PTR(_DWORD, v9);
      *SF_DRAFT_PTR(_BYTE, (v10 + 25)) = 1;
      *SF_DRAFT_PTR(_BYTE, (v8 + (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 26)) = 0;
      *SF_DRAFT_PTR(_BYTE, (v8 + (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 27)) = 0;
      v11 = v8 + (*SF_DRAFT_PTR(uint32, 0x80116994u));
      *SF_DRAFT_PTR(_BYTE, (v11 + 28)) = 0;
      v12 = (*SF_DRAFT_PTR(uint32, 0x80116994u));
      v13 = 4;
      *SF_DRAFT_PTR(_DWORD, (v11 + 32)) = 0;
      v14 = v8 + v12;
      v15 = v14 + 16;
      *SF_DRAFT_PTR(_DWORD, (v14 + 36)) = 0;
      do
      {
        *SF_DRAFT_PTR(_DWORD, (v15 + 40)) = 0;
        --v13;
        v15 -= 4;
      }
      while ( v13 >= 0 );
      ++v7;
      v8 += 60;
    }
    while ( v7 < (*SF_DRAFT_PTR(sint32, 0x801169B0u)) );
  }
  return 1;
}

