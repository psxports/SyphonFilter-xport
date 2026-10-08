#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

extern uint32 sub_800D8E60();
extern uint32 sub_800E29B0();
extern uint32 sub_800E4214();

extern uint32 sub_800E90D4(uint32 parent, uint32 output);



extern uint32 sub_800ED6FC();
extern uint32 sub_800F2C24();
extern uint32 sub_800F58E8();
extern uint32 sub_800F5B18();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8008B164u 0x8008b164
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8008B164(sint32 a1, sint32 a2, sint8 a3)
{
  FUNCTION_MARKER(0x8008B164u, "SCUS_942.40");
  int v4; 
  _DWORD *v5; 
  int v6; 
  int v8; 
  int result; 
  _DWORD *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 

  v4 = a2;
  v5 = 0;
  v6 = 0;
  switch ( a2 )
  {
    case 15:
      v6 = 1;
      v4 = 6;
      break;
    case 14:
      v6 = 2;
      v4 = 6;
      break;
    case 6:
      v6 = 3;
      break;
  }
  sub_8008AD30(a1, v4);
  v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( (*SF_DRAFT_PTR(_DWORD, (v8 + 404)) & (1 << v4)) == 0 || !a1 )
    return 0;
  result = 0;
  if ( !v8 )
    return result;
  v10 = SF_DRAFT_PTR(_DWORD, r_u32((v8 + 408)));
  if ( !v10 )
    return 0;
  switch ( v4 )
  {
    case 3:
      v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8010D0A0u)));
      break;
    case 4:
      v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8010D10Cu)));
      break;
    case 5:
      v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8010D178u)));
      break;
    case 6:
      if ( v6 == 1 && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x8000) != 0
        || v6 == 2 && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x4000) != 0
        || v6 == 3 )
      {
        v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8010D1E4u)));
      }
      break;
    case 7:
      v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x8010D250u)));
      break;
    default:
      break;
  }
  if ( !v5 )
    return 0;
  result = 1;
  if ( a3 )
  {
    v11 = v5[1];
    v12 = v5[2];
    v13 = v5[3];
    v10[31] = *v5;
    v10[32] = v11;
    v10[33] = v12;
    v10[34] = v13;
    v14 = v5[9];
    v15 = v5[10];
    v16 = v5[11];
    v10[35] = v5[8];
    v10[36] = v14;
    v10[37] = v15;
    v10[38] = v16;
    v17 = v5[13];
    v18 = v5[14];
    v19 = v5[15];
    v10[39] = v5[12];
    v10[40] = v17;
    v10[41] = v18;
    v10[42] = v19;
    return 1;
  }
  return result;
}

// FUNCTION_MARKER 0x800F60F4u 0x800f60f4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800F60F4(sint32 a1)
{
  FUNCTION_MARKER(0x800F60F4u, "SCUS_942.40");
  int v1; 
  int v3; 
  uint16 v4; 

  v1 = 998;
  while ( v1-- >= 0 )
    ;
  v3 = -234881022;
  v4 = 17640;
  (*SF_DRAFT_PTR(uint8, 0x8011566Au)) = 6;
  (*SF_DRAFT_PTR(uint8, 0x80115668u)) = 0;
  (*SF_DRAFT_PTR(uint8, 0x80115669u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x80115664u)) = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80115658u)) == 2 )
    goto LABEL_23;
  if ( (*SF_DRAFT_PTR(uint32, 0x80115658u)) >= 3 )
  {
    if ( (*SF_DRAFT_PTR(uint32, 0x80115658u)) == 3 )
    {
      v4 = -30256;
      goto LABEL_23;
    }
    if ( (*SF_DRAFT_PTR(uint32, 0x80115658u)) == 5 )
    {
      (*SF_DRAFT_PTR(uint8, 0x8011566Au)) = 0;
      if ( a1 )
      {
        v3 = -234881021;
        v4 = 1;
      }
      else
      {
        (*SF_DRAFT_PTR(uint8, 0x80115668u)) = 1;
      }
      goto LABEL_23;
    }
  }
  else if ( !(*SF_DRAFT_PTR(uint32, 0x80115658u)) )
  {
    (*SF_DRAFT_PTR(uint8, 0x8011566Au)) = 127;
    return;
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x8011565Cu)) )
    return;
  if ( (*SF_DRAFT_PTR(uint32, 0x80115658u)) >= 70 )
  {
    if ( !(*SF_DRAFT_PTR(uint32, 0x80115658u)) )
      _break(7u, 0);
    v4 = (uint16)(4233600 / (sint32)r_u32(0x80115658u));
  }
  else
  {
    if ( !(*SF_DRAFT_PTR(uint32, 0x80115658u)) )
      _break(7u, 0);
    ++(*SF_DRAFT_PTR(uint8, 0x80115669u));
    v4 = (uint16)(2116800 / (sint32)r_u32(0x80115658u));
  }
LABEL_23:
  if ( (*SF_DRAFT_PTR(uint8, 0x80115668u)) )
  {
    sub_800E3F34();
    sub_800E4214((int)(*SF_DRAFT_PTR(uint32, 0x80115660u)));
  }
  else
  {
    sub_800E3F34();
    sub_800F653C(v3);
    sub_800F6404(v3, v4, 4096);
    if ( !(*SF_DRAFT_PTR(uint8, 0x8011566Au)) )
      (*SF_DRAFT_PTR(uint32, 0x80115664u)) = sub_800E41B4(0, 0u);
    sub_800E41B4((sint8)r_u8(0x8011566Au),
        !r_u8(0x8011566Au) ? 0x800F6364u :
        (r_u8(0x80115669u) ? 0x800F63B0u : r_u32(0x80115660u)));
  }
  sub_800E3F44();
}

// FUNCTION_MARKER 0x8003CA74u 0x8003ca74
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003CA74(sint32 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x8003CA74u, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int *v10; 
  int v11; 
  int v12; 
  int *v13; 
  int v14; 
  int v15; 
  int *v16; 
  int v17; 
  int v18; 
  int v19; 
  int *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int result; 
  int v26 = SF_DRAFT_GP;

  v4 = 0;
  v5 = a1 & 0xFFFFFF;
  v6 = SF_DRAFT_PTR(uint32, 0x8011BB4Cu);
  v7 = 0;
  *SF_DRAFT_PTR(_DWORD, (v3 + 3200)) = v5;
  do
  {
    SF_DRAFT_PTR(uint32, 0x8011BB50u)[v7] = v5 | 0x28000000;
    v7 += 9;
    ++v4;
    *((_BYTE *)v6 + 7) |= 2u;
    v6 += 9;
  }
  while ( v4 < 2 );
  v8 = a2 & 0xFFFFFF;
  v9 = 0;
  v10 = SF_DRAFT_PTR(uint32, 0x8011BC00u);
  (*SF_DRAFT_PTR(uint32, 0x8011BBE0u)) = 805306368;
  v11 = 0;
  (*SF_DRAFT_PTR(uint32, 0x8011BBE8u)) = v5;
  (*SF_DRAFT_PTR(uint32, 0x8011BBF0u)) = v5;
  *SF_DRAFT_PTR(_DWORD, (v3 + 3248)) = v8;
  HIBYTE((*SF_DRAFT_PTR(uint32, 0x8011BBE0u))) = 50;
  do
  {
    SF_DRAFT_PTR(uint32, 0x8011BC04u)[v11] = v8 | 0x40000000;
    v11 += 6;
    ++v9;
    *((_BYTE *)v10 + 7) |= 2u;
    v10 += 6;
  }
  while ( v9 < 5 );
  v12 = 0;
  v13 = SF_DRAFT_PTR(uint32, 0x8011BC78u);
  v14 = 0;
  do
  {
    SF_DRAFT_PTR(uint32, 0x8011BC7Cu)[v14] = v8 | 0x40000000;
    v14 += 6;
    ++v12;
    *((_BYTE *)v13 + 7) |= 2u;
    v13 += 6;
  }
  while ( v12 < 4 );
  v15 = 0;
  v16 = SF_DRAFT_PTR(int, 0x8011B87Cu);
  v17 = 0;
  do
  {
    SF_DRAFT_PTR(uint32, 0x8011B880u)[v17] = v8 | 0x40000000;
    v17 += 6;
    ++v15;
    *((_BYTE *)v16 + 7) |= 2u;
    v16 += 6;
  }
  while ( v15 < 6 );
  v18 = 0;
  v19 = v8 | 0x28000000;
  v20 = SF_DRAFT_PTR(uint32, 0x8011BB94u);
  v21 = 0;
  do
  {
    SF_DRAFT_PTR(uint32, 0x8011BB98u)[v21] = v19;
    v21 += 9;
    ++v18;
    *((_BYTE *)v20 + 7) |= 2u;
    v20 += 9;
  }
  while ( v18 < 2 );
  v22 = *SF_DRAFT_PTR(uint16, (v3 + 680));
  *SF_DRAFT_PTR(_DWORD, (v3 + 728)) = a3;
  if ( v22 != 0xFFFF )
    sub_80086E44(v22, (uint8)a3, BYTE1(a3), BYTE2(a3));
  v23 = *SF_DRAFT_PTR(uint16, (v3 + 682));
  if ( v23 != 0xFFFF )
    sub_80086E44(v23, (uint8)a3, BYTE1(a3), BYTE2(a3));
  v24 = *SF_DRAFT_PTR(uint16, (v3 + 684));
  if ( v24 != 0xFFFF )
    sub_80086E44(v24, (uint8)a3, BYTE1(a3), BYTE2(a3));
  sub_80086E44(*SF_DRAFT_PTR(uint16, (v3 + 696)), (uint8)a3, BYTE1(a3), BYTE2(a3));
  result = 5;
  *SF_DRAFT_PTR(_DWORD, (v26 + 700)) = 5;
  return result;
}

// FUNCTION_MARKER 0x800498B4u 0x800498b4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800498B4(void)
{
  FUNCTION_MARKER(0x800498B4u, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int i; 
  int v2; 
  int result; 
  int v4; 
  int v5; 
  int v6; 
 
  int v9; 
  int v10; 
  int v11; 
sint32 bounds[8];
  sint16 corners[32]; 
  __int16 v19[10]; 
  int v20; 
  int v21; 
  int v22; 

  for ( i = *SF_DRAFT_PTR(_DWORD, (v0 + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v2 + 420)) )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (i + 12));
    if ( (unsigned int)*SF_DRAFT_PTR(uint8, (i + 34)) - 1 >= 2 )
    {
      result = 3;
      if ( *SF_DRAFT_PTR(_BYTE, (v2 + 265)) == 3 )
      {
        v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (i + 8)) + 12));
        v19[0] = *SF_DRAFT_PTR(_WORD, v4);
        v19[1] = (0u - *SF_DRAFT_PTR(_WORD, (v4 + 2)));
        v19[2] = *SF_DRAFT_PTR(_WORD, (v4 + 4));
        v19[3] = (0u - *SF_DRAFT_PTR(_WORD, (v4 + 6)));
        v19[4] = *SF_DRAFT_PTR(_WORD, (v4 + 8));
        v19[5] = (0u - *SF_DRAFT_PTR(_WORD, (v4 + 10)));
        v19[6] = *SF_DRAFT_PTR(_WORD, (v4 + 12));
        v19[7] = (0u - *SF_DRAFT_PTR(_WORD, (v4 + 14)));
        v19[8] = *SF_DRAFT_PTR(_WORD, (v4 + 16));
        v20 = *SF_DRAFT_PTR(_DWORD, (v4 + 20));
        v21 = (0u - *SF_DRAFT_PTR(_DWORD, (v4 + 24)));
        v22 = *SF_DRAFT_PTR(_DWORD, (v4 + 28));
        sub_800D8E60(*SF_DRAFT_PTR(_DWORD, (i + 8)),  0, sf_draft_guest_address(bounds));
        v5 = -bounds[1];
        bounds[1] = -bounds[5];
        bounds[5] = v5;
        sub_800E29B0(sf_draft_guest_address(bounds), sf_draft_guest_address(corners), sf_draft_guest_address(v19));
        v6 = 1;
        
        
        v9 = corners[0];
        v10 = corners[1];
        v11 = corners[2];
        do
        {
          if ( corners[4 * v6 + 1] < v10 )
          {
            v9 = corners[4 * v6];
            v10 = corners[4 * v6 + 1];
            v11 = corners[4 * v6 + 2];
          }
          
          ++v6;
          
        }
        while ( v6 < 8 );
        result = v9;
        *SF_DRAFT_PTR(_DWORD, (v2 + 268)) = v9;
        *SF_DRAFT_PTR(_DWORD, (v2 + 272)) = v10;
        *SF_DRAFT_PTR(_DWORD, (v2 + 276)) = v11;
        *SF_DRAFT_PTR(_DWORD, (v2 + 280)) = (sf_draft_unbound_stack_field(0x800498B4u, 0x1Cu), 0u);
      }
    }
    else
    {
      result = sub_80048B0C(i);
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8003BE84u 0x8003be84
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8003BE84(sint32 a1, sint32 a2)
{
  FUNCTION_MARKER(0x8003BE84u, "SCUS_942.40");
  int *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  int *v9; 
  int v10; 
  signed int v11; 
  unsigned int v12; 
  char v13; 
  int v14; 
  int v15; 
  int v16; 
  __int16 *v17; 
  int v18; 
  int v19; 
  int result; 
  int v21; 
  int *v22; 
  int *v23; 
  int *v24; 
  __int16 v25; 
  int v26; 
  int v27[3]; 
  int v28[2]; 

  SF_DRAFT_PTR(uint32, 0x8011BB2Cu)[a1] = a2;
  v2 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8011B904u)[9 * a1]);
  if ( a2 >= 0 )
  {
    if ( a2 >= 1363 )
    {
      v6 = a2 - 1363;
      if ( a2 >= 2727 )
      {
        v3 = 255;
      }
      else
      {
        v7 = (768 * v6) >> 12;
        if ( 768 * v6 < 0 )
          v7 = -((-768 * v6) >> 12);
        v3 = ((uint8)~(_BYTE)v7 << 8) | 0xFF;
      }
    }
    else
    {
      v4 = 768 * a2;
      v5 = v4 >> 12;
      if ( v4 < 0 )
        v5 = -(-v4 >> 12);
      v3 = (uint8)v5 | 0xFF00;
    }
  }
  else
  {
    v3 = 16409700;
  }
  v8 = v27;
  v9 = &v26;
  v10 = v2[3];
  v27[0] = v3;
  v26 = v10;
  do
  {
    v11 = *(uint8 *)v8;
    v12 = *(uint8 *)v9;
    if ( (sint32)v11 >= (sint32)v12 )
    {
      v14 = v12 + 10;
      if ( v14 < v11 )
        LOBYTE(v11) = v14;
      *(_BYTE *)v8 = v11;
    }
    else
    {
      if ( v11 < (int)(v12 - 10) )
        v13 = *(_BYTE *)v9 - 10;
      else
        v13 = *(_BYTE *)v8;
      *(_BYTE *)v8 = v13;
    }
    v8 = SF_DRAFT_PTR(int, ((char *)v8 + 1));
    v9 = SF_DRAFT_PTR(int, ((char *)v9 + 1));
  }
  while ( sf_draft_guest_address(v8) < sf_draft_guest_address(v27) + 3 );
  v15 = v27[0];
  v16 = (*SF_DRAFT_PTR(uint32, 0x80116B9Cu));
  v2[3] = v27[0] | 0x28000000;
  v17 = SF_DRAFT_PTR(__int16, r_u32((v16 + 20)));
  v18 = a1;
  v19 = *v17;
  result = SF_DRAFT_PTR(uint16, 0x8011BA00u)[v18];
  if ( v19 == result )
  {
    result = 5242880;
    if ( (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) )
    {
      v26 = v15;
      v27[0] = 5255208;
      v21 = (sub_800EA474((*SF_DRAFT_PTR(uint32, 0x801169A4u)) << 8) + 4096) >> 5;
      v22 = v28;
      v23 = v27;
      v24 = &v26;
      HIBYTE(v28[0]) = 0;
      do
      {
        v25 = v21 * *(uint8 *)v24;
        v24 = SF_DRAFT_PTR(int, ((char *)v24 + 1));
        *(_BYTE *)v22 = (uint16)(v25 + (256 - v21) * *(uint8 *)v23) >> 8;
        v22 = SF_DRAFT_PTR(int, ((char *)v22 + 1));
        v23 = SF_DRAFT_PTR(int, ((char *)v23 + 1));
      }
      while ( sf_draft_guest_address(v22) < sf_draft_guest_address(v28) + 3 );
      result = v28[0] | 0x28000000;
      (*SF_DRAFT_PTR(uint32, 0x8011B9E8u)) = v28[0] | 0x28000000;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800C6298u 0x800c6298
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_800C6298(sint32 a1)
{
  FUNCTION_MARKER(0x800C6298u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int *result; 
  unsigned int v3; 
  BOOL v4; 
  int v5; 
  _DWORD * v6 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  int v7 = SF_DRAFT_GP;
  int *v8; 
  int v9; 
  int v10 = SF_DRAFT_GP;
  int v11 = SF_DRAFT_GP;
  int *v12; 
  bool v13; 
  int v14 = SF_DRAFT_GP;
  int v15 = SF_DRAFT_GP;
  __int16 v16; 
  int v17 = SF_DRAFT_GP;
  int v18 = SF_DRAFT_GP;
  char v19; 
  uint8 v20; 

  if ( a1 == 1 )
  {
    result = SF_DRAFT_PTR(int, r_u32((v1 + 1988)));
    if ( result )
    {
      v3 = *SF_DRAFT_PTR(_DWORD, (v1 + 1980)) + 32;
      v4 = *SF_DRAFT_PTR(_DWORD, (v1 + 3092)) < v3;
      *SF_DRAFT_PTR(_DWORD, (v1 + 1980)) = v3;
      if ( v4 )
      {
        v5 = *SF_DRAFT_PTR(_DWORD, (v1 + 3080));
        if ( (v5 & 0xFFFFFFu) <= 0xFFFF || ((*SF_DRAFT_PTR(uint32, 0x801165F4u)) & 0xFFFFFFu) < (v5 & 0xFFFFFFu) || (v5 & 3) != 0 )
        {
          sub_800EC914(SF_DRAFT_PTR(const char, 0x8001388Cu));
          *SF_DRAFT_PTR(_DWORD, (v1 + 3080)) = 0x80122328u;
        }
        if ( *SF_DRAFT_PTR(_DWORD, r_u32((v1 + 3080))) )
        {
          if ( sub_8006AFD0() )
          {
            v8 = SF_DRAFT_PTR(int, v6[770]);
            v6[773] = 64;
            v9 = *v8;
            v6[495] = 0;
            v6[499] = 0;
            v19 = 1;
            v6[772] = v9;
            v20 = *((_BYTE *)v8 + 4);
            v6[774] = v20;
            sub_800ED6FC(13, sf_draft_guest_address(&v19));
            sub_800C64C0(6, *SF_DRAFT_PTR(_DWORD, (v10 + 3088)));
            v12 = SF_DRAFT_PTR(int, r_u32((v11 + 3080)));
            *v12 = 0;
            v12 += 3;
            *SF_DRAFT_PTR(_DWORD, (v11 + 3080)) = sf_draft_guest_address(v12);
            v13 = 0x8012237Cu >= sf_draft_guest_address(v12);
            result = SF_DRAFT_PTR(int, 0x80122328u);
            if ( !v13 )
              *SF_DRAFT_PTR(_DWORD, (v11 + 3080)) = 0x80122328u;
          }
          else
          {
            sub_800ED6FC(9, 0);
            *SF_DRAFT_PTR(_DWORD, (v7 + 1988)) = 0;
            return sub_800C6264();
          }
        }
        else
        {
          sub_800ED6FC(9, 0);
          result = SF_DRAFT_PTR(int, 1);
          *SF_DRAFT_PTR(_DWORD, (v14 + 1988)) = 0;
          *SF_DRAFT_PTR(_DWORD, (v14 + 2004)) = 1;
        }
      }
      else
      {
        result = SF_DRAFT_PTR(int, r_u32((v1 + 1996)));
        if ( !result )
        {
          *SF_DRAFT_PTR(_DWORD, (v1 + 1996)) = 1;
          sub_800ED99C(0x80122388u, 16u);
          result = (int *)*(SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(uint32, 0x80122388u))) + *SF_DRAFT_PTR(_DWORD, (v15 + 3096)));
          *SF_DRAFT_PTR(_DWORD, (v15 + 3092)) = sf_draft_guest_address(result);
        }
      }
    }
  }
  else
  {
    result = SF_DRAFT_PTR(int, 5);
    if ( a1 == 5 )
    {
      v16 = *SF_DRAFT_PTR(_WORD, (v1 + 2000)) + 1;
      *SF_DRAFT_PTR(_WORD, (v1 + 2000)) = v16;
      result = SF_DRAFT_PTR(int, (v16 < 6));
      if ( !result )
      {
        sub_800ED6FC(9, 0);
        *SF_DRAFT_PTR(_DWORD, (v17 + 1988)) = 0;
        result = SF_DRAFT_PTR(int, sub_800C6264());
        *SF_DRAFT_PTR(_WORD, (v18 + 2000)) = 0;
      }
    }
  }
  return sf_draft_guest_address(result);
}

// FUNCTION_MARKER 0x800558C0u 0x800558c0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800558C0(sint32 a1)
{
  sint32 screen_point[3];
  FUNCTION_MARKER(0x800558C0u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 
  int v4; 
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
  int v16; 
  int result; 
  int v21[4]; 

  v3 = *SF_DRAFT_PTR(__int16, (a1 + 30));
  v4 = 0;
  if ( v3 >= 0 )
  {
    v5 = 2 * v3;
    do
    {
      v6 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x80137740u)[8 * v5 + 8 * v3 + 2 * v3]);
      v7 = *((__int16 *)v6 + 19);
      v8 = *((uint16 *)v6 + 18) - 1;
      *((_WORD *)v6 + 18) = v8;
      if ( v8 << 16 )
      {
        v21[0] = *((__int16 *)v6 + 40);
        v21[1] = *((__int16 *)v6 + 41);
        v21[2] = *((__int16 *)v6 + 42);
        sub_800C6EAC(sf_draft_guest_address(v6), sf_draft_guest_address(&screen_point[0]));
        if ( screen_point[2] <= 0 || (v6[16] = screen_point[0] - (screen_point[1] << 16), sub_800C6EAC(sf_draft_guest_address(v21), sf_draft_guest_address(&screen_point[0])), screen_point[2] <= 0) )
        {
          v6[16] = 67109888;
          v6[14] = 67109888;
        }
        else
        {
          v6[14] = screen_point[0] - (screen_point[1] << 16);
          v9 = (screen_point[2] >> 2) - (screen_point[2] >> 4) + *SF_DRAFT_PTR(char, (a1 + 38)) - 16;
          if ( v9 < 0 )
            v6[11] = 0;
          else
            v6[11] = v9;
        }
        v10 = v6[4];
        *v6 += v10;
        v11 = v6[5];
        *((_WORD *)v6 + 40) += v10;
        if ( v11 < 0 )
          v12 = -(-v11 >> 12);
        else
          v12 = v11 >> 12;
        v13 = v6[6];
        v14 = v6[1] + v12;
        *((_WORD *)v6 + 41) += v12;
        v15 = v6[2];
        v16 = v6[6];
        v4 = v3;
        v6[1] = v14;
        LOWORD(v14) = *((_WORD *)v6 + 42) + v13;
        v6[2] = v15 + v16;
        *((_WORD *)v6 + 42) = v14;
        v3 = v7;
      }
      else
      {
        sub_8004BEDC(a1, sf_draft_guest_address(v6), v4, v3);
        v3 = v7;
      }
      v5 = 2 * v3;
    }
    while ( v3 >= 0 );
  }
  result = *SF_DRAFT_PTR(__int16, (a1 + 30));
  if ( result < 0 )
    *SF_DRAFT_PTR(_DWORD, (v1 + 2684)) = 0;
  return result;
}

// FUNCTION_MARKER 0x800CF77Cu 0x800cf77c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CF77C(uint32 a1, sint32 a2, uint32 a3)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  _WORD * native_a3 = SF_DRAFT_PTR(_WORD, a3);
  sint32 position[4];
  FUNCTION_MARKER(0x800CF77Cu, "SCUS_942.40");
  _DWORD *v4; 
  int v6; 
  _DWORD *v7; 
  int v8; 
  int result; 
  char v10[16]; 
  __int16 v11; 
  __int16 v12; 
  __int16 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  v4 = SF_DRAFT_PTR(_DWORD, r_u32((a2 + 12)));
  v11 = v4[5];
  v12 = v4[6];
  v6 = v4[7];
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = v6;
  sub_800DC780(*SF_DRAFT_PTR(_DWORD, (a2 + 12)),  0, sf_draft_guest_address(&position[0]));
  for ( ; native_a1; native_a1 = SF_DRAFT_PTR(_DWORD, native_a1[2]) )
  {
    v7 = SF_DRAFT_PTR(_DWORD, r_u32((*native_a1 + 16)));
    if ( ((sint32)v7[10] & 0x1000000) != 0 && (sint32)*v7 < position[0] && position[0] < (sint32)v7[4] && (sint32)v7[2] < position[2] && position[2] < (sint32)v7[6] )
      sub_800D298C(v7[8], sf_draft_guest_address(v10));
  }
  v8 = v14;
  result = 0;
  if ( v14 )
  {
    if ( v14 == -1 && v15 == 0x80000000 )
      _break(6u, 0);
    *native_a3 = 16 * (v15 / v14);
    if ( v8 == -1 && v16 == 0x80000000 )
      _break(6u, 0);
    native_a3[1] = 16 * (v16 / v8);
    if ( v8 == -1 && v17 == 0x80000000 )
      _break(6u, 0);
    result = 0;
    native_a3[2] = 16 * (v17 / v8);
  }
  else
  {
    native_a3[2] = 450;
    native_a3[1] = 450;
    *native_a3 = 450;
  }
  return result;
}

// FUNCTION_MARKER 0x80075F98u 0x80075f98
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80075F98(sint32 a1)
{
  FUNCTION_MARKER(0x80075F98u, "SCUS_942.40");
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  bool v10; 
  int v11; 
  int v12; 
  int v13 = SF_DRAFT_GP;
  int v14 = SF_DRAFT_GP;
  _DWORD *v15; 
  int v16; 
  int v17; 
  int v18; 
  _DWORD *v19; 
  int v20; 
  int v21; 
  int v22; 
  char v24[72]; 
  uint32 projection[19];
  uint32 projection_aux[4]; 

  v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32)) + 4));
  projection[18] = sf_draft_guest_address(projection_aux);
  (*SF_DRAFT_PTR(uint32, 0x80128E20u)) = 3;
  (*SF_DRAFT_PTR(uint32, 0x80128E28u)) = (int)(*SF_DRAFT_PTR(uint32, 0x80128E2Cu));
  v3 = v2;
  v4 = 0;
  if ( v2 >= 0 )
  {
    v5 = 4 * v2;
    while ( 1 )
    {
      v6 = *SF_DRAFT_PTR(_DWORD, (v5 + *SF_DRAFT_PTR(_DWORD, (a1 + 24))));
      v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32)) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32)) + 20)) + 32 * v3;
      if ( v3 != v2 )
        goto LABEL_11;
      v8 = 76 * *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(_WORD, (a1 + 20)) & 0x3FF) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      v9 = *SF_DRAFT_PTR(uint8, (v8 + 36));
      v10 = v9 != 0;
      v11 = 32 * v9;
      if ( !v10 )
      {
        v12 = *SF_DRAFT_PTR(_DWORD, (v8 + 36)) & 0x3000;
        if ( v12 == 4096 )
          v11 = 608;
        else
          v11 = v12 == 0x2000 ? 0x280 : 0;
      }
      v7 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C388u))) + v11));
      if ( v7 )
        break;
      v4 *= 2;
LABEL_13:
      --v3;
      v5 = 4 * v3;
      if ( v3 < 0 )
        return v4;
    }
    v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 32));
LABEL_11:
    projection_aux[3] = (uint32)v6;
    sub_80076630(sf_draft_guest_address(v24),  v7,  0,  0);
    sub_80077BFC(v6);
    v4 *= 2;
    if ( sub_80077278(sf_draft_guest_address(v24),  *SF_DRAFT_PTR(__int16, (v13 + 3484)), sf_draft_guest_address(projection), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8012C7B8u))) )
    {
      v15 = SF_DRAFT_PTR(_DWORD, r_u32((v14 + 3208)));
      v16 = projection[9];
      v17 = projection[10];
      v18 = projection[11];
      v15[8] = projection[8];
      v15[9] = v16;
      v15[10] = v17;
      v15[11] = v18;
      v19 = SF_DRAFT_PTR(_DWORD, r_u32((v14 + 3208)));
      v4 |= 1u;
      v20 = projection[5];
      v21 = projection[6];
      v22 = projection[7];
      v19[4] = projection[4];
      v19[5] = v20;
      v19[6] = v21;
      v19[7] = v22;
    }
    goto LABEL_13;
  }
  return v4;
}

// FUNCTION_MARKER 0x800CB250u 0x800cb250
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800CB250(sint32 a1, uint32 a2, sint16 a3, sint32 a4, sint8 a9, sint8 a10, sint32 a11, uint32 a12)
{
  _DWORD * native_a2 = SF_DRAFT_PTR(_DWORD, a2);
  uint32 *native_a12 = SF_DRAFT_PTR(uint32, a12);
  sint32 position[3];
  FUNCTION_MARKER(0x800CB250u, "SCUS_942.40");
  int v12 = SF_DRAFT_GP;
  __int16 v17; 
  int *v18; 
  int result; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  v17 = *SF_DRAFT_PTR(_WORD, (v12 + 2020));
  *SF_DRAFT_PTR(_WORD, (v12 + 2020)) = v17 + 1;
  v18 = SF_DRAFT_PTR(int, 0x8012D698u + 244u * (uint32)(sint32)v17);
  result = sub_800DB558(sf_draft_guest_address(v18));
  if ( !result )
  {
    v18[5] = -1;
    *((_WORD *)v18 + 2) = a3;
    *((_BYTE *)v18 + 8) = a9;
    v18[3] = a4;
    *((_BYTE *)v18 + 9) = (uint8)v17;
    *((_BYTE *)v18 + 10) = a10;
    *((_WORD *)v18 + 3) = 0;
    v18[35] = 0;
    v18[36] = 0;
    v18[37] = 0;
    v18[38] = 0;
    v18[39] = 0;
    *((_BYTE *)v18 + 18) = 0;
    *((_BYTE *)v18 + 17) = 0;
    *((_BYTE *)v18 + 16) = 0;
    *((_BYTE *)v18 + 240) = 0;
    *((_BYTE *)v18 + 224) = 0x80;
    *((_BYTE *)v18 + 225) = 0x80;
    *((_BYTE *)v18 + 226) = 0x80;
    v20 = (*SF_DRAFT_PTR(uint32, 0x80130EE4u));
    v21 = (*SF_DRAFT_PTR(uint32, 0x80130EE8u));
    v18[26] = (*SF_DRAFT_PTR(uint32, 0x80130EE0u));
    v18[27] = v20;
    v18[28] = v21;
    v22 = (*SF_DRAFT_PTR(uint32, 0x80130EF0u));
    v23 = (*SF_DRAFT_PTR(uint32, 0x80130EF4u));
    v18[29] = (*SF_DRAFT_PTR(uint32, 0x80130EECu));
    v18[30] = v22;
    v18[31] = v23;
    v24 = (*SF_DRAFT_PTR(uint32, 0x80130EFCu));
    v18[32] = (*SF_DRAFT_PTR(uint32, 0x80130EF8u));
    v18[33] = v24;
    sub_800E90D4(0, sf_draft_guest_address(v18 + 6));
    v25 = *v18;
    v18[34] = sf_draft_guest_address(v18 + 6);
    sub_800DC780(v25,  a1, sf_draft_guest_address(&position[0]));
    position[0] += *native_a2;
    position[1] += native_a2[1];
    position[2] += native_a2[2];
    sub_800DC8AC(*v18,  a1, sf_draft_guest_address(&position[0]));
    result = 0;
    *native_a12 = sf_draft_guest_address(v18);
  }
  return result;
}

// FUNCTION_MARKER 0x80019B94u 0x80019b94
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80019B94(sint32 a1, sint32 a2, uint32 a3)
{
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x80019B94u, "SCUS_942.40");
  int v6; 
  __int16 v7; 
  int v8; 
  int result; 
  __int16 v10; 
  __int16 v11; 
  __int16 v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __int16 v19[10]; 
  int v20; 
  int v21; 
  int v22; 
  __int16 v23; 
  __int16 v24; 
  __int16 v25; 
  __int16 v26; 
  __int16 v27; 
  __int16 v28; 
  __int16 v29; 
  __int16 v30; 
  __int16 v31; 

  v10 = (*SF_DRAFT_PTR(uint32, 0x80010168u));
  v11 = (*SF_DRAFT_PTR(uint32, 0x8001016Cu));
  v12 = (*SF_DRAFT_PTR(uint32, 0x80010170u));
  v23 = *SF_DRAFT_PTR(_WORD, a2);
  v24 = (0u - *SF_DRAFT_PTR(_WORD, (a2 + 2)));
  v25 = *SF_DRAFT_PTR(_WORD, (a2 + 4));
  v26 = (0u - *SF_DRAFT_PTR(_WORD, (a2 + 6)));
  v27 = *SF_DRAFT_PTR(_WORD, (a2 + 8));
  v6 = (0u - *SF_DRAFT_PTR(uint16, (a2 + 10)));
  v28 = (0u - *SF_DRAFT_PTR(_WORD, (a2 + 10)));
  v29 = *SF_DRAFT_PTR(_WORD, (a2 + 12));
  v30 = (0u - *SF_DRAFT_PTR(_WORD, (a2 + 14)));
  v7 = *SF_DRAFT_PTR(_WORD, (a2 + 16));
  v13 = v25;
  v14 = (__int16)v6;
  v31 = v7;
  v15 = v7;
  if ( (_WORD)v6 )
  {
    v14 = 0;
    sub_800C720C(sf_draft_guest_address(&v13), sf_draft_guest_address(&v13));
  }
  v19[3] = 0;
  v19[0] = v15;
  v19[6] = -(__int16)v13;
  v19[1] = v10;
  v19[4] = v11;
  v19[7] = v12;
  v19[2] = v13;
  v19[5] = v14;
  v19[8] = v15;
  v16 = *SF_DRAFT_PTR(_DWORD, (a2 + 20));
  v17 = *SF_DRAFT_PTR(_DWORD, (a2 + 24));
  v8 = *SF_DRAFT_PTR(_DWORD, (a2 + 28));
  v20 = v16;
  v17 = -v17;
  v21 = v17;
  v18 = v8;
  v22 = v8;
  sub_800EADF4(sf_draft_guest_address(v19),  a1, sf_draft_guest_address(native_a3));
  *native_a3 += v20;
  native_a3[1] += v21;
  result = native_a3[2] + v22;
  native_a3[2] = result;
  return result;
}

// FUNCTION_MARKER 0x800CC47Cu 0x800cc47c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800CC47C(void)
{
  FUNCTION_MARKER(0x800CC47Cu, "SCUS_942.40");
  int v0 = SF_DRAFT_GP;
  int v1; 
  int v2; 
  int *v3; 
  int v4; 
  int v5; 
  char v6; 
  int v7; 
  _DWORD *v8; 
  char v9; 
  int v10; 
  __int16 v11; 
  int v12; 
  int v13; 
  int v15; 

  v1 = 0;
  if ( *SF_DRAFT_PTR(int, (v0 + 2140)) > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012FA38u)[v2]);
      v4 = SF_DRAFT_PTR(uint32, 0x8012FA38u)[v2 + 10];
      v5 = SF_DRAFT_PTR(uint32, 0x8012FA38u)[v2 + 2];
      if ( v1 == 1 )
        break;
      if ( v4 )
      {
        v7 = *SF_DRAFT_PTR(_DWORD, (v4 + 12));
        v8 = SF_DRAFT_PTR(_DWORD, (v7 + 20));
        v9 = *SF_DRAFT_PTR(_BYTE, (v4 + 10));
        *SF_DRAFT_PTR(_DWORD, (v4 + 40)) = 0;
        *SF_DRAFT_PTR(_BYTE, (v4 + 10)) = v9 | 2;
        goto LABEL_7;
      }
LABEL_19:
      ++v1;
      v2 += 11;
      if ( v1 >= *SF_DRAFT_PTR(sint32, (v0 + 2140)) )
        goto LABEL_20;
    }
    v7 = *SF_DRAFT_PTR(_DWORD, (v5 + 12));
    v8 = SF_DRAFT_PTR(_DWORD, (v7 + 20));
    v6 = *SF_DRAFT_PTR(_BYTE, (v5 + 10));
    *SF_DRAFT_PTR(_DWORD, (v5 + 40)) = 0;
    *SF_DRAFT_PTR(_BYTE, (v5 + 10)) = v6 | 2;
LABEL_7:
    v3[1] = v7;
    v3[3] = 0;
    *((_WORD *)v3 + 8) = *v8;
    v10 = v8[1];
    if ( v1 )
      v11 = v10 + 128;
    else
      v11 = v10 + 40;
    *((_WORD *)v3 + 9) = v11;
    v12 = v8[2];
    v3[6] = 0;
    v3[9] = 0;
    v3[8] = 0;
    v3[7] = 0;
    *((_WORD *)v3 + 10) = v12;
    if ( v1 == 1 )
    {
      v13 = *SF_DRAFT_PTR(_DWORD, (v0 + 2128)) + 64;
    }
    else
    {
      v13 = *SF_DRAFT_PTR(_DWORD, (v0 + 2128));
      *((_WORD *)v3 + 11) = v13;
      if ( !v1 )
      {
LABEL_15:
        if ( v4 )
        {
          if ( (*SF_DRAFT_PTR(_BYTE, (v4 + 10)) & 0x10) != 0 )
          {
            v3[3] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v4 + 16)) + 28));
            if ( v1 )
            {
              v15 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, r_u32((v4 + 24))) + 16));
              *((_WORD *)v3 + 8) -= *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, r_u32((v4 + 24))) + 4)) >> 5;
              *((_WORD *)v3 + 10) -= v15 >> 5;
            }
          }
        }
        goto LABEL_19;
      }
      LOWORD(v13) = v13 - 140;
    }
    *((_WORD *)v3 + 11) = v13;
    goto LABEL_15;
  }
LABEL_20:
  SF_DRAFT_PTR(uint32, 0x8012FA3Cu)[11 * *SF_DRAFT_PTR(_DWORD, (v0 + 2140))] = 0;
  sub_800CC700();
}

// FUNCTION_MARKER 0x800C0A78u 0x800c0a78
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
void sub_800C0A78(sint32 a1)
{
  FUNCTION_MARKER(0x800C0A78u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int *v6; 
  int v7 = SF_DRAFT_GP;
  int v8; 
  int v9; 
  int v10; 
  int v11 = SF_DRAFT_GP;
  int v12; 
  int v13; 
  int v14 = SF_DRAFT_GP;

  v2 = *SF_DRAFT_PTR(_DWORD, (v1 + 1884));
  if ( v2 )
  {
    v3 = *SF_DRAFT_PTR(__int16, (v1 + 1892));
    v4 = 24 * v3 + v2;
    if ( *SF_DRAFT_PTR(char, (v4 + 4)) != -1 && *SF_DRAFT_PTR(_DWORD, (v1 + 1896)) != a1 )
    {
      if ( a1 )
      {
        *SF_DRAFT_PTR(_DWORD, (v1 + 1900)) = 0;
        v5 = 0;
        v6 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012FF98u)[sub_800C302C(*SF_DRAFT_PTR(uint8, (v4 + 3)))]);
        if ( *SF_DRAFT_PTR(__int16, (*v6 + 6)) > 0 )
        {
          do
          {
            if ( sub_800F2C24(
                   *SF_DRAFT_PTR(uint8, (24 * *SF_DRAFT_PTR(__int16, (v7 + 1892)) + *SF_DRAFT_PTR(_DWORD, (v7 + 1884)) + 3)),
                   (__int16)v5) << 16 )
            {
              v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 1900));
              *SF_DRAFT_PTR(_DWORD, (v7 + 1896)) = 1;
              SF_DRAFT_PTR(uint8, 0x80130D08u)[v8] = v5;
              v9 = *SF_DRAFT_PTR(__int16, (v7 + 1892));
              ++*SF_DRAFT_PTR(_DWORD, (v7 + 1900));
              sub_800F58E8(*SF_DRAFT_PTR(uint8, (24 * v9 + *SF_DRAFT_PTR(_DWORD, (v7 + 1884)) + 3)), (__int16)v5);
            }
            ++v5;
          }
          while ( v5 < *SF_DRAFT_PTR(__int16, (*v6 + 6)) );
        }
      }
      else
      {
        v10 = *SF_DRAFT_PTR(_DWORD, (v1 + 1900));
        *SF_DRAFT_PTR(_DWORD, (v1 + 1896)) = 0;
        if ( v10 )
        {
          v12 = 0;
          sub_800E3F34();
          if ( *SF_DRAFT_PTR(int, (v11 + 1900)) > 0 )
          {
            do
            {
              v13 = (uint8)SF_DRAFT_PTR(uint8, 0x80130D08u)[v12++];
              sub_800F5B18(*SF_DRAFT_PTR(uint8, (24 * *SF_DRAFT_PTR(__int16, (v11 + 1892)) + *SF_DRAFT_PTR(_DWORD, (v11 + 1884)) + 3)), v13);
            }
            while ( v12 < *SF_DRAFT_PTR(sint32, (v11 + 1900)) );
          }
          *SF_DRAFT_PTR(_DWORD, (v11 + 1900)) = 0;
          sub_800E3F44();
        }
        else if ( (__int16)sub_800BFC68(*SF_DRAFT_PTR(_DWORD, (v1 + 1888)), v3, *SF_DRAFT_PTR(uint8, (v4 + 9)), *SF_DRAFT_PTR(_WORD, (v4 + 10))) == -1 )
        {
          *SF_DRAFT_PTR(_DWORD, (v14 + 1896)) = 1;
        }
      }
    }
  }
}

// FUNCTION_MARKER 0x80045138u 0x80045138
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80045138(void)
{
  FUNCTION_MARKER(0x80045138u, "SCUS_942.40");
  int v0; 
  int *v1; 
  int v2; 
  int v3; 
  int v4; 
  int *v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int *v11; 
  int v12; 
  int *v13; 
  BOOL result; 
  int v15[4]; 
  int v16; 
  __int16 v17; 
  __int16 v18; 

  v0 = 0;
  v1 = SF_DRAFT_PTR(uint32, 0x8012B828u);
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = SF_DRAFT_PTR(uint32, 0x80127CE8u)[v2];
    if ( *v1 < 0 )
      goto LABEL_16;
    if ( !*SF_DRAFT_PTR(_DWORD, r_u32((60 * *v1 + (*SF_DRAFT_PTR(uint32, 0x80116994u))))) )
    {
      if ( !*SF_DRAFT_PTR(_DWORD, (v4 + 12)) )
        goto LABEL_16;
      v13 = SF_DRAFT_PTR(int, 0x80115D84u);
      *SF_DRAFT_PTR(_DWORD, (v4 + 12)) = 0;
      v12 = *v13;
      goto LABEL_15;
    }
    if ( !*SF_DRAFT_PTR(_DWORD, (v4 + 12)) )
    {
      v5 = SF_DRAFT_PTR(int, 0x80115D84u);
      *SF_DRAFT_PTR(_DWORD, (v4 + 12)) = SF_DRAFT_PTR(uint32, 0x8011C97Cu)[v3];
      sub_800C818C(*v5, v4);
    }
    v6 = SF_DRAFT_PTR(int, r_u32(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 12)));
    v7 = v6[1];
    v8 = v6[2];
    v9 = v6[3];
    v15[0] = *v6;
    v15[2] = v8;
    v15[3] = v9;
    v15[1] = -v7;
    sub_800E0364(sf_draft_guest_address(v15),  *SF_DRAFT_PTR(_DWORD, (v4 + 12)) + 20, sf_draft_guest_address(&v16));
    if ( v16 < 192 )
    {
      sub_8008C900(*SF_DRAFT_PTR(uint8, (v4 + 22)), sf_draft_guest_address(&v17), sf_draft_guest_address(&v18));
      v10 = v18 ? (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Fu)[32 * v18] : 0;
      if ( v18 != 15 )
      {
        sub_8008CC68(0xFFFFFFFFu, v17, v18, v10, 0);
        if ( (uint8)sub_8008CF8C(0) )
        {
          v11 = SF_DRAFT_PTR(int, 0x80115D84u);
          *v1 = -1;
          v12 = *v11;
LABEL_15:
          sub_800C8218(v12, v4);
        }
      }
    }
LABEL_16:
    ++v1;
    ++v2;
    result = ++v0 < 30;
    v3 += 9;
  }
  while ( v0 < 30 );
  return result;
}

// FUNCTION_MARKER 0x8001629Cu 0x8001629c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_8001629C(void)
{
  FUNCTION_MARKER(0x8001629Cu, "SCUS_942.40");
  int v0; 
  int v1; 
  int v2 = SF_DRAFT_GP;
  int i; 
  int v4; 
  int v5 = SF_DRAFT_GP;
  uint32 result; 





  v0 = sub_8006B854(2);
  sub_8006B824(2, 0);
  v1 = (*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u)));
  (*SF_DRAFT_PTR(uint8, 0x80116962u)) = 1;
  sub_800C7A8C(v1);
  sub_800D7A28(384, 240);
  sub_800D79E8(0);
  sub_800CADE4(0, 0);
  sub_8013E8F4();
  sub_80082EC0();
  sub_80082EC0();
  if ( *SF_DRAFT_PTR(_DWORD, (v2 + 16)) == 3 )
    sub_80016094();
  if ( (*SF_DRAFT_PTR(uint8, 0x8013D558u)) )
  {
    sub_800CA618();
    if ( *SF_DRAFT_PTR(_DWORD, (v2 + 16)) == 4 )
      goto LABEL_13;
    if ( (*SF_DRAFT_PTR(uint8, 0x8013D549u)) != 33 )
    {
      for ( i = 0; i < 12; ++i )
      {
        v4 = (uint8)SF_DRAFT_PTR(uint8, 0x80102AE8u)[i];
        if ( SF_DRAFT_PTR(uint8, 0x80127CA8u)[v4] )
          sub_8008040C(v4, 0);
      }
      sub_80082724();
    }
  }
  if ( *SF_DRAFT_PTR(_DWORD, (v2 + 16)) != 4 )
  {
    sub_80016F90(2);
    sub_800E5000(0);
    sub_800CA718();
    sub_800E5000(0);
    sub_800CA780(-1, 7, 0x8001625Cu);
  }
LABEL_13:
  (*SF_DRAFT_PTR(uint8, 0x8013D558u)) = 0;
  if ( (*SF_DRAFT_PTR(uint8, 0x8013D549u)) )
  {
    if ( (*SF_DRAFT_PTR(uint8, 0x8013D549u)) == 33 )
      sub_800C8A9C(0x80016BFCu, 2, 0);
    else
      sub_80015364((*SF_DRAFT_PTR(uint8, 0x8013D549u)), 3u, (*SF_DRAFT_PTR(uint32, 0x8013D54Cu)), (*SF_DRAFT_PTR(uint32, 0x8013D550u)), 0, 0, 0, 0);
  }
  sub_8006B824(2, v0);
  sub_800CA618();
  result = r_u32(v5 + 24);
  if ( result )
  {
    *SF_DRAFT_PTR(_DWORD, (v5 + 24)) = 0;
    return sf_draft_call(result, 0, NULL);
  }
  return result;
}

// FUNCTION_MARKER 0x80035D58u 0x80035d58
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80035D58(uint32 a1)
{
  _DWORD * native_a1 = SF_DRAFT_PTR(_DWORD, a1);
  FUNCTION_MARKER(0x80035D58u, "SCUS_942.40");
  int v2; 
  int v3; 
  int result; 
  uint8 v5; 
  int v6; 
  int *v7; 
  int v8; 
  int v9; 
  signed int v10; 
  signed int v11; 
  int v12; 
  int v13; 
  int v14; 

  v2 = (*SF_DRAFT_PTR(uint32, 0x8010BB9Cu));
  v3 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  native_a1[88] = native_a1[89];
  result = 8;
  v5 = 0;
  if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 16)) + 8)) == 8 )
    goto LABEL_24;
  v6 = 0;
  v7 = SF_DRAFT_PTR(int, v2);
  while ( 1 )
  {
    v8 = *v7;
    v9 = v7[1];
    v10 = 5;
    v13 = *v7;
    v14 = v9;
    if ( ((unsigned int)&v13 & 3) != 0 )
      v10 = 8 * ((unsigned int)&v13 & 3) + 5;
    *(&v13 + (v10 >> 5)) &= ~(1 << (v10 & 0x1F));
    v11 = 5;
    if ( ((unsigned int)&v14 & 3) != 0 )
      v11 = 8 * ((unsigned int)&v14 & 3) + 5;
    *(&v14 + (v11 >> 5)) &= ~(1 << (v11 & 0x1F));
    if ( v6 != 3 && (v8 || v9) && (v7[2] || v7[3] || v7[4]) )
      break;
    ++v6;
    v7 += 7;
    if ( v6 >= 4 )
      goto LABEL_15;
  }
  v5 = 1;
LABEL_15:
  v12 = native_a1[6];
  result = v5;
  if ( v12 )
  {
    result = 1;
    if ( v5 )
    {
      native_a1[89] = 1;
    }
    else
    {
      result = 3;
      if ( v12 == 2 )
        native_a1[89] = 2;
      else
        native_a1[89] = 3;
    }
    return result;
  }
  if ( v5
    || (result = (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v3 + 16)) + 8)) - 1 < 2,
        (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v3 + 16)) + 8)) - 1 >= 2)
    || (result = (unsigned int)(native_a1[89] - 2) < 2, (unsigned int)(native_a1[89] - 2) >= 2) )
  {
LABEL_24:
    native_a1[89] = 0;
  }
  return result;
}

