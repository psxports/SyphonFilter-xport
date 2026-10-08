#include "game_draft.h"
void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
static uint32 sf_draft_missing_stale_8001E710(uint32 local_offset)
{
    fprintf(stderr, "TODO 8001E710 original unwritten local +%X\n", local_offset);
    abort();
}


void sf_draft_missing_gte_800770F8_1(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800770F8_2(sint32 *output1);
void sf_draft_missing_gte_800770F8_3(sint32 *output1, sint32 *output2, sint32 *output3);
void sf_draft_missing_gte_800D39D8_1(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, uint32 memory6, uint32 memory7, uint32 memory8, sint32 *output9, sint32 *output10, sint32 *output11);
void sf_draft_missing_gte_800D39D8_2(sint32 input1, sint32 input2);
void sf_draft_missing_gte_800D39D8_3(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D39D8_4(sint32 *output1, sint32 *output2, sint32 *output3, sint32 input4, sint32 input5);
void sf_draft_missing_gte_800D39D8_5(sint32 *output1, sint32 *output2);
void sf_draft_missing_gte_800D39D8_6(sint32 *output1);
void sf_draft_missing_gte_800D39D8_7(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5, sint32 input6, sint32 input7, sint32 input8);
void sf_draft_missing_gte_800D5824_1(sint32 *output1, sint32 *output2, sint32 *output3);
void sf_draft_missing_gte_800D5824_2(sint32 *output1, sint32 *output2, sint32 *output3);
/* TODO Resolve external dependency signatures */
uint32 sub_80059488();
uint32 sub_80086540();
uint32 sub_800C67CC();
uint32 sub_800C6AC0();
uint32 sub_800CD630();
uint32 sub_800CD68C();

sint32 sub_800288BC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x800288BCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v4; 
  int v7; 
  int v8; 
  __int16 v9; 
  __int16 *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int result; 

  v4 = a2;
  v7 = 0;
  v8 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  do
  {
    v9 = 0;
    v10 = SF_DRAFT_PTR(__int16, *(__int16 **)(a2 + 24));
    while ( 1 )
    {
      v11 = *v10;
      v10 += 12;
      if ( v11 < 0 )
        break;
      ++v9;
    }
    *SF_DRAFT_PTR(_WORD, (a2 + 42)) = v9;
    ++v7;
    a2 += 44;
  }
  while ( v7 < 108 );
  v12 = sub_800DE414(24);
  if ( !v12 )
    sub_800DDC34(1, 0, 0x80115E44u, 615);
  v13 = sub_800DE414(172);
  if ( !v13 )
    sub_800DDC34(1, 0, 0x80115E44u, 619);
  v14 = sub_800DE414(4 * a4);
  *SF_DRAFT_PTR(_DWORD, (v13 + 4)) = v14;
  if ( !v14 )
    sub_800DDC34(1, 0, 0x80115E44u, 622);
  v15 = 0;
  v16 = v13;
  *SF_DRAFT_PTR(_BYTE, v13) = 0;
  *SF_DRAFT_PTR(_BYTE, (v13 + 1)) = a4;
  *SF_DRAFT_PTR(_DWORD, (v13 + 8)) = -1;
  *SF_DRAFT_PTR(_WORD, (v13 + 108)) = 0;
  do
  {
    *SF_DRAFT_PTR(_DWORD, (v16 + 12)) = 255;
    *SF_DRAFT_PTR(_DWORD, (v16 + 24)) = 0;
    ++v15;
    v16 += 4;
  }
  while ( v15 < 3 );
  *SF_DRAFT_PTR(_BYTE, (v12 + 8)) = 1;
  *SF_DRAFT_PTR(_BYTE, (v12 + 9)) = 1;
  *SF_DRAFT_PTR(_DWORD, (v12 + 12)) = v13;
  *SF_DRAFT_PTR(_DWORD, (v12 + 16)) = v4;
  *SF_DRAFT_PTR(_DWORD, (v12 + 20)) = a3;
  *SF_DRAFT_PTR(_DWORD, (v8 + 16)) = v12;
  *SF_DRAFT_PTR(_DWORD, v12) = 0;
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v8 + 16)) + 4)) = 0;
  result = 20;
  if ( !(*SF_DRAFT_PTR(uint32, 0x8010B5D4u)) )
  {
    (*SF_DRAFT_PTR(uint8, 0x8010B5D0u)) = 0;
    (*SF_DRAFT_PTR(uint8, 0x8010B5D1u)) = 20;
    result = sub_800DE414(172);
    (*SF_DRAFT_PTR(uint32, 0x8010B5D4u)) = result;
    if ( !result )
    {
      sub_800DDC34(1, 0, 0x80115E44u, 663);
      /* TODO Resolve incidental return if the fatal handler returns */
      abort();
    }
  }
  return result;
}

uint32 sub_8003129C(sint32 a1)
{
    FUNCTION_MARKER(0x8003129Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  __int16 *v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  __int16 v7; 
  int v8; 
  _DWORD *result; 
  int v10; 
  bool v11; // dc
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 

  v2 = SF_DRAFT_PTR(__int16, *(__int16 **)(a1 + 20));
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    v3 = **(_DWORD **)(a1 + 16);
    v4 = (v3 >> 20) & 1;
    if ( (v3 & 2) == 0 || v4 != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2560)) || (v3 & 0x1001400) != 0 )
    {
      v5 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2560)) = v4;
      *((_DWORD *)v2 + 51) = v5;
    }
    v6 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v2 + 51)) >> 2;
    if ( v6 >= 0x65 )
      LOWORD(v6) = 100;
    v7 = *(_WORD *)(*((_DWORD *)v2 + 12) + 20) * v6;
    v8 = *((_DWORD *)v2 + 12);
    v2[32] = v7;
    result = SF_DRAFT_PTR(_DWORD, v7);
    v10 = *SF_DRAFT_PTR(__int16, (v8 + 22));
    if ( v10 < v7 )
      v2[32] = v10;
  }
  else
  {
    result = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*(_DWORD *)(76 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52) + 16));
    if ( result )
    {
      v11 = (*result & 0x400) == 0;
      v12 = *result & 8;
      if ( v11 )
      {
        if ( v12 )
        {
          v14 = *((_DWORD *)v2 + 12);
          *((_DWORD *)v2 + 51) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
          result = SF_DRAFT_PTR(_DWORD, *(uint16 *)(v14 + 32));
          v2[34] = (__int16)result;
        }
        else
        {
          v15 = *((_DWORD *)v2 + 12);
          v16 = *((_DWORD *)v2 + 51);
          v17 = *SF_DRAFT_PTR(__int16, (v15 + 32));
          if ( v16 < 0 )
          {
            v16 = -v16;
            v17 = *SF_DRAFT_PTR(__int16, (v15 + 34));
          }
          v18 = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - v16) >> 2;
          if ( v18 >= 0x65 )
            v18 = 100;
          v19 = (0u - v18) * *SF_DRAFT_PTR(__int16, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 76));
          result = SF_DRAFT_PTR(_DWORD, (v17 - v19));
          if ( v17 < v19 )
            v2[34] = (__int16)result;
        }
      }
      else
      {
        v13 = *((_DWORD *)v2 + 12);
        *((_DWORD *)v2 + 51) = (0u - (*SF_DRAFT_PTR(uint32, 0x80116A88u)));
        result = SF_DRAFT_PTR(_DWORD, *(uint16 *)(v13 + 34));
        v2[34] = (__int16)result;
      }
    }
    else
    {
      v2[34] = 0;
    }
  }
  return sf_draft_guest_address(result);
}

sint32 sub_80059CF4(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x80059CF4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int result; 

  v6 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v8 = -1;
  if ( *SF_DRAFT_PTR(_BYTE, (v6 + 72))
    && ((v9 = *SF_DRAFT_PTR(__int16, (a1 + 2)), v9 == 666)
     || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v9 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 2) )
  {
    if ( (*SF_DRAFT_PTR(_DWORD, (v6 + 32)) & 0x20000000) != 0 )
    {
      if ( (uint16)(*SF_DRAFT_PTR(_WORD, (12 * a3 + a2 + 6)) & 0xF00) >> 8 == 6
        && (v12 = a2, (int)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 212)) & 0xFFFF3FFF) < *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3514)) - 409) )
      {
        v13 = -1;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) |= 0x80000u;
        *SF_DRAFT_PTR(_BYTE, (v6 + 65)) = 0;
      }
      else
      {
        v13 = *(uint8 *)(v6 + 68);
        v12 = a2;
      }
      v8 = sub_80059488(v12, a3, v13);
    }
    else
    {
      v8 = sub_80059574(a1, a2);
    }
  }
  else
  {
    v10 = *SF_DRAFT_PTR(char, (12 * a3 + a2 + 8));
    v11 = (uint16)(*SF_DRAFT_PTR(_WORD, (12 * v10 + a2 + 6)) & 0xF00) >> 8;
    if ( v10 >= 0 && v11 != 1 && v11 != 7 )
      v8 = *SF_DRAFT_PTR(char, (12 * a3 + a2 + 8));
  }
  result = 0;
  if ( v8 >= 0 )
  {
    result = 1;
    if ( *(uint8 *)(v6 + 67) == v8 )
    {
      return 0;
    }
    else
    {
      *SF_DRAFT_PTR(_BYTE, (v6 + 68)) = *SF_DRAFT_PTR(_BYTE, (v6 + 67));
      *SF_DRAFT_PTR(_BYTE, (v6 + 67)) = v8;
      *SF_DRAFT_PTR(_BYTE, (v6 + 73)) = -1;
    }
  }
  return result;
}

void sub_8006B618(void)
{
    FUNCTION_MARKER(0x8006B618u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v0; 

  int v2; 
  int v3; 
  int v5; 
  int v6; 
  int v7; 

  sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\INGAME.XH;1"));
  sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v5), 0);
  v0 = sub_800BF09C(v5);
  sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\BEEPSX.VH;1"));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2960)) = v0;
  sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v6), 0);
  v2 = sub_800DE4F8();
  sub_800EC894(0x8001218Cu, sf_draft_guest_address("\\COMMON\\BEEPSX.VB;1"));
  v3 = v2;
  sub_80015850(SF_DRAFT_PTR(const char, 0x8001218Cu), sf_draft_guest_address(&v7), 0);
  if ( v7 && v6 )
  {
    (*SF_DRAFT_PTR(uint32, 0x8011E8B4u)) = sub_800BED04(v6, v7);
    while ( !(sub_800BF02C() << 16) )
      ;
  }
  sub_800BF2A0(3, 5);
  sub_800DE4EC(v3);
}

void sub_800D39D8(uint32 A0)
{
    sint32 gte_intermediate_s4;
    FUNCTION_MARKER(0x800D39D8u, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, geometry_value_4, geometry_value_5, geometry_value_6, geometry_value_7, geometry_value_8, geometry_value_9, geometry_value_10, geometry_value_11, geometry_value_12, geometry_value_13, geometry_value_14, geometry_value_15;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 *A0_view = SF_DRAFT_PTR(uint16, A0);
  geometry_value_7 = (*SF_DRAFT_PTR(uint32, 0x80130CD8u));
  geometry_value_8 = (*SF_DRAFT_PTR(uint32, 0x80130CDCu));
  geometry_value_9 = (*SF_DRAFT_PTR(uint32, 0x80130CE0u));
  geometry_value_10 = (*SF_DRAFT_PTR(uint32, 0x80130CE4u));
  geometry_value_11 = (*SF_DRAFT_PTR(uint32, 0x80130CE8u));
  sf_draft_missing_gte_800D39D8_1(geometry_value_7, geometry_value_8, geometry_value_9, geometry_value_10, geometry_value_11, (uint32)A0 + 20u, (uint32)A0 + 24u, (uint32)A0 + 28u, &geometry_value_4, &geometry_value_5, &geometry_value_6);
  geometry_value_9 = *((_DWORD *)A0_view + 3);
  geometry_value_7 = *A0_view | *((_DWORD *)A0_view + 1) & 0xFFFF0000;
  sf_draft_missing_gte_800D39D8_2(geometry_value_7, geometry_value_9);
  geometry_value_9 = (__int16)A0_view[7];
  geometry_value_7 = A0_view[1] | (*((_DWORD *)A0_view + 2) << 16);
  sf_draft_missing_gte_800D39D8_3(&geometry_value_10, &geometry_value_11, &geometry_value_12, geometry_value_7, geometry_value_9);
  geometry_value_9 = *((_DWORD *)A0_view + 4);
  geometry_value_7 = A0_view[2] | *((_DWORD *)A0_view + 2) & 0xFFFF0000;
  sf_draft_missing_gte_800D39D8_4(&geometry_value_13, &geometry_value_14, &geometry_value_15, geometry_value_7, geometry_value_9);
  geometry_value_0 = (geometry_value_13 << 16) | (uint16)geometry_value_10;
  geometry_value_3 = (uint16)geometry_value_12 | (geometry_value_15 << 16);
  sf_draft_missing_gte_800D39D8_5(&geometry_value_7, &geometry_value_8);
  geometry_value_1 = (uint16)geometry_value_7 | (geometry_value_11 << 16);
  geometry_value_2 = (geometry_value_8 << 16) | (uint16)geometry_value_14;
  sf_draft_missing_gte_800D39D8_6(&gte_intermediate_s4);
  geometry_value_4 = geometry_value_4 + (*SF_DRAFT_PTR(uint32, 0x80130CECu));
  geometry_value_5 = geometry_value_5 + (*SF_DRAFT_PTR(uint32, 0x80130CF0u));
  geometry_value_6 = geometry_value_6 + (*SF_DRAFT_PTR(uint32, 0x80130CF4u));
  sf_draft_missing_gte_800D39D8_7(geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, gte_intermediate_s4, geometry_value_4, geometry_value_5, geometry_value_6);
}

sint32 sub_80084998(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80084998u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *v4; 
  int v5; 
  char *v6; 
  _DWORD *v7; 
  _DWORD *v8; 
  int result; 
  int *v10; 
  int v11; 

  v4 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
  v5 = 0;
  v6 = &(*SF_DRAFT_PTR(uint8, 0x80120EFFu));
  do
  {
    if ( *(__int16 *)(v6 + 1) == a1
      && *(__int16 *)(v6 + 3) == a2
      && *(__int16 *)(v6 + 5) == a3
      && *(__int16 *)(v6 + 7) == a4 )
    {
      *v4 |= 3u;
      v7 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(v6 + 9));
      while ( v7 )
      {
        if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) < *(_DWORD *)(*v7 + 8) )
        {
          v7 = (_DWORD *)v7[2];
        }
        else
        {
          v8 = (_DWORD *)v7[2];
          sub_80087660(*v7);
          sub_800DE6E0(sf_draft_guest_address(v4 + 4), sf_draft_guest_address(v7));
          v7 = v8;
        }
      }
      *v6 = 0;
      return (uint8)v5;
    }
    ++v5;
    v6 += 20;
    v4 += 5;
  }
  while ( v5 < 6 );
  v10 = &(*SF_DRAFT_PTR(uint32, 0x80120EF8u));
  v11 = 0;
  if ( ((*SF_DRAFT_PTR(uint32, 0x80120EF8u)) & 1) != 0 )
  {
    while ( 1 )
    {
      v10 += 5;
      if ( v11 >= 6 )
        break;
      ++v11;
      if ( (*v10 & 1) == 0 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    result = (uint8)v11;
    if ( v11 < 6 )
    {
      *((_BYTE *)v10 + 6) = 0x80;
      *((_BYTE *)v10 + 5) = 0x80;
      *((_BYTE *)v10 + 4) = 0x80;
      *((_WORD *)v10 + 4) = a1;
      *((_WORD *)v10 + 5) = a2;
      *((_WORD *)v10 + 6) = a3;
      *((_WORD *)v10 + 7) = a4;
      *((_BYTE *)v10 + 7) = 0;
      *v10 = (3);
      return result;
    }
  }
  return 255;
}

sint32 sub_80055D90(void)
{
    FUNCTION_MARKER(0x80055D90u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v1; 
  int v2; 
  char v3; 
  int v4; 
  bool v5; // dc
  char v6; 
  char v7; 

  int v9; 
  int v10; 

  int v12; 
  int v13; 
  int result; 
  int v15; 
  int v16; 
  int v17; 

  v1 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712));
  v2 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2716));
  if ( v1 != v2 )
  {
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2660)) = 0;
    if ( v1 )
    {
      if ( v2 )
      {
LABEL_8:
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2716)) = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712));
        goto LABEL_9;
      }
      v3 = 4;
      if ( !(*SF_DRAFT_PTR(uint32, 0x8011CE08u)) )
      {
        sub_800CD630(&(*SF_DRAFT_PTR(uint32, 0x8011CE08u)));
        v3 = 4;
      }
    }
    else
    {
      v3 = 16;
    }
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2656)) = v3;
    goto LABEL_8;
  }
LABEL_9:
  if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712)) )
  {
    v4 = *(uint8 *)(SF_DRAFT_GP + 2656);
    v5 = v4 == 0;
    v6 = v4 - 1;
    if ( !v5 )
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2656)) = v6;
    v7 = sub_800EC8F4();
    v9 = 32 * (4 - *(uint8 *)(SF_DRAFT_GP + 2656)) + (v7 & 0x1F);
    v10 = ((v9 / 2 + (sub_800EC8F4() & 0x1F)) << 8) + v9;
    v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2712));
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2656)) = 4;
    v13 = *SF_DRAFT_PTR(_DWORD, (v12 + 4));
    if ( (v13 & 0x80000) != 0 )
    {
      v10 |= 0x80000000;
      *SF_DRAFT_PTR(_DWORD, (v12 + 4)) = v13 & 0xFFF7FFFF;
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2660)) = 1;
    }
    sub_800CD624(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CE08u))), (2 * *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2720)) + 100), v10);
    return sub_800DC8AC(((*SF_DRAFT_PTR(uint32, 0x8011CE34u))), 0, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CE38u))));
  }
  else
  {
    v15 = *(uint8 *)(SF_DRAFT_GP + 2656);
    v5 = v15 == 0;
    v16 = 8 * v15;
    if ( v5
      || (v17 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2720)),
          --*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2656)),
          sub_800CD624(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011CE08u))), 2 * v17 + 100, ((unsigned int)(v16 + 15) >> 1 << 8) + v16 + 15),
          result = *(uint8 *)(SF_DRAFT_GP + 2656),
          !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2656))) )
    {
      result = (*SF_DRAFT_PTR(uint32, 0x8011CE08u));
      if ( (*SF_DRAFT_PTR(uint32, 0x8011CE08u)) )
      {
        result = sub_800CD68C(&(*SF_DRAFT_PTR(uint32, 0x8011CE08u)));
        *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2716)) = 0;
      }
    }
  }
  return result;
}

sint32 sub_8001E710(uint32 a1)
{
    FUNCTION_MARKER(0x8001E710u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);

  _DWORD *v2; 
  int v4; 
  int v5; 
  int v6; 

  _DWORD *v8; 
  _DWORD *v9; 
  int v10; 
  int v11; 
  int v12; 
  _DWORD *v13; 
  int v14; 
  int v15; 
  int v16; 
  int v18; 
  int v19; 
  int v20[4]; 
  int displacement[3]; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  v2 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v24 = (*SF_DRAFT_PTR(uint32, 0x800101C0u));
  v25 = (*SF_DRAFT_PTR(uint32, 0x800101C4u));
  v26 = (*SF_DRAFT_PTR(uint32, 0x800101C8u));
  v27 = (*SF_DRAFT_PTR(uint32, 0x800101CCu));
  if ( v2[595] )
  {
    v4 = v2[598];
    v5 = v2[599];
    v6 = v2[600];
    v20[0] = v2[597];
    v20[1] = v4;
    v20[2] = v5;
    v20[3] = v6;
  }
  else
  {
    v20[0] = v2[597];
  }
  displacement[0] = 0;
  displacement[1] = 0;
  displacement[2] = 704;
  sub_800E098C(sf_draft_guest_address(displacement), sf_draft_guest_address(v20), sf_draft_guest_address(displacement));
  v8 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v8[109] )
  {
    v18 = v8[124];
    v19 = v8[125];
  }
  *a1_view = v8[123] + displacement[0];
  a1_view[1] = v18 + displacement[1];
  v9 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  a1_view[2] = v19 + displacement[2];
  v10 = a1_view[1];
  v11 = a1_view[2];
  v12 = a1_view[3];
  v9[839] = *a1_view;
  v9[840] = v10;
  v9[841] = v11;
  v9[842] = v12;
  v13 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  v14 = v25;
  v15 = v26;
  v16 = v27;
  v13[844] = v24;
  v13[845] = v14;
  v13[846] = v15;
  v13[847] = v16;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284)) + 3392)) = 0;
  sub_80018994((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 284))), 1, 2, 1);
  return 1;
}

sint32 sub_800C087C(sint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800C087Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  char v9; 
  int v11; 
  int v12; 

  bool v14; // dc

  int result; 

  v9 = a3;
  if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1884)) )
    sub_800C0C74();
  v11 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  if ( a3 != -2 )
  {
    if ( a3 == -1 )
      *SF_DRAFT_PTR(_BYTE, (24 * a2 + v11 + 9)) = *SF_DRAFT_PTR(_BYTE, (24 * a2 + v11 + 12));
    else
      *SF_DRAFT_PTR(_BYTE, (24 * a2 + v11 + 9)) = v9;
  }
  if ( a4 != -2 )
  {
    if ( a4 == -1 )
      *SF_DRAFT_PTR(_WORD, (24 * a2 + v11 + 10)) = *SF_DRAFT_PTR(_WORD, (24 * a2 + v11 + 14));
    else
      *SF_DRAFT_PTR(_WORD, (24 * a2 + v11 + 10)) = a4;
  }
  sub_800C5D68();
  v12 = 24 * a2 + v11;
  sub_800C5D58(*(uint8 *)(v12 + 9), (*SF_DRAFT_PTR(__int16, (v12 + 10))));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1884)) = v11;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1888)) = a1;
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1892)) = a2;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1896)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1900)) = 0;
  v14 = (__int16)sub_800BFC68(a1, a2, *(uint8 *)(v12 + 9), (*SF_DRAFT_PTR(_WORD, (v12 + 10)))) != -1;
  result = 1;
  if ( !v14 )
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1896)) = 1;
  return result;
}

sint32 sub_80059FCC(sint32 a1, sint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80059FCCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v7; 
  int v8; 
  int result; 

  void ( *v12)(_DWORD); 

  v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 32));
  if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) <= 0 || (result = *SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 8, (v8 & 8) == 0) )
  {
    result = 5;
    if ( !*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 904)) )
    {
      if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 5 && *SF_DRAFT_PTR(_BYTE, (v7 + 82)) == 4 )
        a2 = 2;
      sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
      result = *(uint8 *)(v7 + 72);
      if ( a2 != result )
      {
        if ( a4 )
        {
          if ( a2 == 2 )
          {
            v12 = *(void ( **)(_DWORD))(SF_DRAFT_GP + 888);
            if ( v12 )
              v12(*SF_DRAFT_PTR(__int16, (a1 + 2)));
          }
        }
        result = 2;
        if ( a2 != *(uint8 *)(v7 + 72) )
        {
          if ( a2 == 2 || (v8 & 1) != 0 )
          {
            *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 2;
            sub_80059108(a1);
            if ( *(uint8 *)(SF_DRAFT_GP + 3360) >= 2u && (sub_800EC8F4() & 3) == 0
              || (result = *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82) < 3u,
                  *(uint8 *)(*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82) >= 3u) )
            {
              result = 9;
              if ( (*SF_DRAFT_PTR(_DWORD, (v7 + 32)) & 0x100) != 0 )
              {
                if ( *SF_DRAFT_PTR(_BYTE, (v7 + 82)) != 9 )
                  return sub_80056740(a1, 4);
              }
              else
              {
                return sub_80056740(a1, 3);
              }
            }
          }
          else
          {
            *SF_DRAFT_PTR(_BYTE, (v7 + 72)) = 1;
            return sub_80058FC0(a1);
          }
        }
      }
    }
  }
  return result;
}

sint32 sub_800DB730(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DB730u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 
  int v5; 
  __int16 v6[10]; 
  int v7; 
  int v8; 
  int v9; 

  if ( !a1 )
  {
    result = 24;
    if ( !a2 )
      return result;
LABEL_5:
    if ( !*SF_DRAFT_PTR(_DWORD, (a2 + 32)) )
    {
      result = sub_800DB648(a2, 0);
      if ( result )
        return result;
    }
    goto LABEL_7;
  }
  if ( a2 )
    goto LABEL_5;
LABEL_7:
  result = 0;
  if ( !a1 )
    return result;
  v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
  if ( !v5 )
  {
    result = sub_800DB648(a1, a2);
    if ( result )
      return result;
    return 0;
  }
  if ( *SF_DRAFT_PTR(_DWORD, (v5 + 32)) )
    sub_800DB8D4(a1);
  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) = a2;
  if ( a2 )
  {
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 36)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40));
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) + 40)) = a1;
  }
  result = 0;
  if ( !*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 44)) )
  {
    v6[0] = *SF_DRAFT_PTR(_WORD, a1);
    v6[1] = -*SF_DRAFT_PTR(_WORD, (a1 + 2));
    v6[2] = *SF_DRAFT_PTR(_WORD, (a1 + 4));
    v6[3] = -*SF_DRAFT_PTR(_WORD, (a1 + 6));
    v6[4] = *SF_DRAFT_PTR(_WORD, (a1 + 8));
    v6[5] = -*SF_DRAFT_PTR(_WORD, (a1 + 10));
    v6[6] = *SF_DRAFT_PTR(_WORD, (a1 + 12));
    v6[7] = -*SF_DRAFT_PTR(_WORD, (a1 + 14));
    v6[8] = *SF_DRAFT_PTR(_WORD, (a1 + 16));
    v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 20));
    v8 = (0u - *SF_DRAFT_PTR(_DWORD, (a1 + 24)));
    v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
    sub_800DC40C(a1, 0, sf_draft_guest_address(v6));
    return 0;
  }
  return result;
}

sint32 sub_8006C620(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x8006C620u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int result; 

  bool v8; // dc
  __int16 v9; 
  __int16 v10; 
  __int16 v11; 


  sint16 volume[2]; 

  if ( (uint8)sub_800826C0() )
  {
LABEL_4:
    sub_8006B90C(4, 0xFFFFFFFF, a2, 0, sf_draft_guest_address(&volume[0]), sf_draft_guest_address(&volume[1]));
    v8 = sub_800C04A4(r_u32(SF_DRAFT_GP + 2960u), (sint16)a1, volume[0], volume[1], 1, 1, (!a2 || r_s16(a2 + 2u) != (sint32)r_u32(0x80116AB0u))) == 0;
    result = -1;
    if ( v8 )
      return result;
    (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -1;
    v9 = -1;
    (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = a1;
    (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
    if ( a2 )
      v9 = *SF_DRAFT_PTR(_WORD, (a2 + 2));
    (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = v9;
    if ( (*SF_DRAFT_PTR(uint32, 0x80128DACu)) == -4 )
    {
      (*SF_DRAFT_PTR(uint32, 0x80128DACu)) = -1;
      v10 = (*SF_DRAFT_PTR(uint16, 0x80128DB0u));
      v11 = (*SF_DRAFT_PTR(uint16, 0x80128DB2u));
      (*SF_DRAFT_PTR(uint16, 0x80128DB4u)) = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DB0u)) = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DB2u)) = -1;
      (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = v10;
      (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = v11;
    }
    return sub_800C8A9C(0x8006C440u, 5, -524288000);
  }
  result = sub_800C60B4();
  if ( result )
  {
    if ( !a3 )
      return result;
    goto LABEL_4;
  }
  result = -2;
  if ( !a3 )
    return result;
  (*SF_DRAFT_PTR(uint32, 0x80128DA0u)) = -2;
  (*SF_DRAFT_PTR(uint16, 0x80128DA8u)) = a1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA4u)) = -1;
  (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = -1;
  if ( a2 )
    (*SF_DRAFT_PTR(uint16, 0x80128DA6u)) = *SF_DRAFT_PTR(_WORD, (a2 + 2));
  return sub_800C8A9C(0x8006C440u, 5, -524288000);
}

sint32 sub_8002BDC0(sint32 a1)
{
    FUNCTION_MARKER(0x8002BDC0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v1; 
  int v2; 
  bool v3; // dc
  int result; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 

  if ( a1 >= (sint32)r_u32(0x801169B0u) || a1 < 0 )
    v1 = 0;
  else
    v1 = (*SF_DRAFT_PTR(uint32, 0x80116994u)) + 60 * a1;
  v2 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v1) + 16)) + 32));
  v3 = sub_800C6A94(v2) == 0;
  result = 9;
  if ( !v3 )
  {
    v5 = 0;
    if ( (*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0 )
    {
      v6 = 0;
      do
      {
        v7 = *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if ( v7 && *SF_DRAFT_PTR(_BYTE, (v7 + 34)) == 4 && (*SF_DRAFT_PTR(_BYTE, v7) & 2) == 0 )
        {
          if ( v5 == 666 )
            v8 = 666;
          else
            v8 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
          v9 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v7 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
          if ( v8 == 20 || v8 == 40 || v8 == 109 || v8 == 52 )
            sub_800C67CC(v2, (__int16)v9);
          else
            sub_800C6AC0(v2, (__int16)v9, 0);
        }
        ++v5;
        v6 += 76;
      }
      while ( v5 < (sint32)r_u32(0x80116A5Cu) );
    }
    return 9;
  }
  return result;
}

void sub_800D3D50(uint32 record, uint32 rgbflags, uint32 index, uint32 polygon, uint32 primitive, uint32 mode, uint32 buffer_base, uint32 channel_mask, uint32 *vertex_buffer, sint16 coords[4])
{
    uint32 owner, node, color, rgb, red, green, blue;
    FUNCTION_MARKER(0x800D3D50u, "SCUS_942.40");
    /* TODO Native renderer contract requires runtime validation */
    w_u32(rgbflags, r_u32(rgbflags) | (0x40000000u >> (index & 31u)));
    owner = r_u32(record);
    if (r_u32(owner + 40u))
    {
        w_u32(owner + 24u, r_u32(owner + 24u) + 1u);
        rgb = r_u32(rgbflags + 4u);
        w_u32(owner + 28u, r_u32(owner + 28u) + (rgb & 255u));
        w_u32(owner + 32u, r_u32(owner + 32u) + ((rgb >> 8) & 255u));
        w_u32(owner + 36u, r_u32(owner + 36u) + ((rgb >> 16) & 255u));
    }
    node = r_u32(owner + 12u);
    if (!node) return;
    color = sub_800D3CB4(r_u32(rgbflags + 4u), node, channel_mask);
    w_u32(rgbflags + 4u, color);
    if ((sint32)node < 0)
    {
        uint32 change = mode != 1u;
        if (mode == 1u)
        {
            *vertex_buffer = (buffer_base + ((uint32)(sint32)r_s16(polygon + 6u) << 3)) & 0xFFFFFFu;
            change = (primitive & 0xFFFFFFu) < *vertex_buffer;
        }
        if (change)
        {
            rgb = r_u16(primitive + 6u);
            red = (rgb >> 7) & 0xF8u;
            green = (rgb >> 2) & 0xF8u;
            blue = (rgb << 3) & 0xF8u;
            if (red >= 7u) red = 7u;
            if (green >= 13u) green = 13u;
            if (blue >= 18u) blue = 18u;
            w_u16(primitive + 6u, (uint16)((((red + 4u) >> 3) << 10) | (((green + 4u) >> 3) << 5) | ((blue + 4u) >> 3) | 0x8000u));
        }
    }
    coords[0] = r_s16(record + 4u);
    coords[1] = r_s16(record + 6u);
    coords[2] = r_s16(record + 8u);
    coords[3] = r_s16(record + 10u);
}

sint32 sub_800D5824(uint32 fourthSXY, uint32 triangle)
{
    FUNCTION_MARKER(0x800D5824u, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0, geometry_value_1, geometry_value_2;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v0 = (sint32)fourthSXY; 
  int v1 = (sint32)triangle; 
  int result; 
  __int16 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v16; 
  int v17; 

  result = 0;
  sf_draft_missing_gte_800D5824_1(&geometry_value_0, &geometry_value_1, &geometry_value_2);
  v6 = v0;
  v7 = geometry_value_0 >> 16;
  v8 = geometry_value_1 >> 16;
  v9 = geometry_value_2 >> 16;
  v10 = v0 >> 16;
  v11 = v7;
  v12 = v7;
  if ( v8 >= v7 )
    v11 = v8;
  if ( v7 >= v8 )
    v12 = v8;
  if ( v9 >= v11 )
    v11 = v9;
  if ( v12 >= v9 )
    v12 = v9;
  if ( !v1 )
  {
    if ( v10 >= v11 )
      v11 = v10;
    if ( v12 >= v10 )
      v12 = v10;
  }
  if ( v12 - 120 > 0 || v11 + 120 < 0 )
    return 0;
  if ( v11 - v12 >= 351 )
    result = 1;
  sf_draft_missing_gte_800D5824_2(&geometry_value_0, &geometry_value_1, &geometry_value_2);
  if ( !v1 )
    LOWORD(v10) = v6;
  geometry_value_0 = (__int16)geometry_value_0;
  v16 = geometry_value_0;
  v17 = (__int16)geometry_value_0;
  if ( (__int16)geometry_value_1 >= (__int16)geometry_value_0 )
    v16 = (__int16)geometry_value_1;
  if ( (__int16)geometry_value_0 >= (__int16)geometry_value_1 )
    v17 = (__int16)geometry_value_1;
  if ( (__int16)geometry_value_2 >= v16 )
    v16 = (__int16)geometry_value_2;
  if ( v17 >= (__int16)geometry_value_2 )
    v17 = (__int16)geometry_value_2;
  if ( !v1 )
  {
    if ( (__int16)v10 >= v16 )
      v16 = (__int16)v10;
    if ( v17 >= (__int16)v10 )
      v17 = (__int16)v10;
  }
  if ( v17 - 192 > 0 || v16 + 192 < 0 )
    return 0;
  if ( v16 - v17 >= 501 )
    return 1;
  return result;
}

sint32 sub_800D9110(uint32 a1, sint32 a2, sint32 a3, uint32 a4, uint32 a9, sint32 a10)
{
    FUNCTION_MARKER(0x800D9110u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    int *a9_view = SF_DRAFT_PTR(int, a9);
  int v13; 
  _DWORD *v14; 
  int v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int result; 

  v13 = sub_800DE414(44);
  v15 = sub_800DE414(20);
  v14 = (_DWORD *)(sub_800D8B9C(sf_draft_guest_address(a1_view), v13, 0x400000));
  v16 = v14;
  if ( !a4 )
    v14[10] |= 0x2000000u;
  v17 = (*SF_DRAFT_PTR(uint32, 0x8010E1D0u));
  v18 = (*SF_DRAFT_PTR(uint32, 0x8010E1D4u));
  *v14 = (0x8010E1CCu);
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = (*SF_DRAFT_PTR(uint32, 0x8010E1D8u));
  v19 = (*SF_DRAFT_PTR(uint32, 0x8010E1E0u));
  v20 = (*SF_DRAFT_PTR(uint32, 0x8010E1E4u));
  v14[4] = (*SF_DRAFT_PTR(uint32, 0x8010E1DCu));
  v14[5] = v19;
  v14[6] = v20;
  v14[7] = (*SF_DRAFT_PTR(uint32, 0x8010E1E8u));
  sub_800DB5EC(v13 + 12, 0);
  *SF_DRAFT_PTR(_BYTE, (v13 + 9)) = 0x80;
  *SF_DRAFT_PTR(_DWORD, v13) = 0;
  *SF_DRAFT_PTR(_DWORD, (v13 + 4)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v13 + 8)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v13 + 10)) = 0;
  *SF_DRAFT_PTR(_BYTE, (v13 + 11)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v13 + 16)) = sf_draft_guest_address(v16);
  *SF_DRAFT_PTR(_WORD, (v13 + 20)) = 0;
  *SF_DRAFT_PTR(_WORD, (v13 + 22)) = 0;
  *SF_DRAFT_PTR(_DWORD, (v13 + 40)) = 0;
  *SF_DRAFT_PTR(_WORD, (v15 + 8)) = 500;
  *SF_DRAFT_PTR(_WORD, (v15 + 6)) = 500;
  *SF_DRAFT_PTR(_WORD, (v15 + 4)) = 500;
  *SF_DRAFT_PTR(_WORD, (v15 + 16)) = 0;
  *SF_DRAFT_PTR(_WORD, (v15 + 14)) = 0;
  *SF_DRAFT_PTR(_WORD, (v15 + 12)) = 0;
  *SF_DRAFT_PTR(_DWORD, v15) = 0;
  *SF_DRAFT_PTR(_DWORD, (v13 + 28)) = v15;
  sub_800CBF44(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, v13)), sf_draft_guest_address(a1_view), a2, a10);
  result = 0;
  *a9_view = v13;
  return result;
}

uint32 sub_800297A8(sint32 a1)
{
    FUNCTION_MARKER(0x800297A8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int v3; 
  int *v4; 
  int *v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  _DWORD *v13; 
  int v14; 
  uint32 v15; 
  sint32 result; 

  v2 = 0;
  v3 = 0;
  v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 12)) + 8));
  v5 = v4;
  v6 = v4;
  do
  {
    if ( v6[4] == 2 )
    {
      v7 = v6[7];
      v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
      v9 = v6[12];
      v10 = *SF_DRAFT_PTR(_DWORD, (v8 + 16));
      v11 = *SF_DRAFT_PTR(_DWORD, (v8 + 20));
      v12 = 32 * v6[1];
      *v4 = (v2);
      v13 = SF_DRAFT_PTR(_DWORD, (v10 + 44 * v7));
      v14 = v11 + v12;
      sub_800284C8(a1, sf_draft_guest_address(v13), sf_draft_guest_address((_BYTE *)v4 + v3 + 40), v9);
      if ( *SF_DRAFT_PTR(_BYTE, (v14 + 20)) )
      {
        v15 = v13[7];
        if ( v15 )
          sf_draft_call((uint32)v15, 2u, (const uint32[]){(uint32)r_s16((uint32)a1 + 2u), (uint32)v7});
      }
      if ( *SF_DRAFT_PTR(_BYTE, (v14 + 21)) )
      {
        if ( v13[8] )
          sub_80015364(v13[8] & 255u, 5u, r_s16((uint32)a1 + 2u), r_s16((uint32)a1 + 2u), 0, 0, 0, 0);
      }
      v6[4] = 0;
      v6[1] = 255;
      v6[7] = 0;
      *((_BYTE *)v5 + 40) = 0;
      *((_BYTE *)v5 + 41) = 0;
      v6[12] = 0;
    }
    v5 = (int *)((char *)v5 + 2);
    v3 += 2;
    result = ++v2 < 3;
    ++v6;
  }
  while ( v2 < 3 );
  return result;
}

sint32 sub_800DEEF4(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800DEEF4u, "SCUS_942.40");
    union { uint8 bytes[24]; uint32 words[6]; } file;
    uint32 handle;
    uint32 *output_slot;
    sint32 result, found = 0, attempts = 0;
    if (!a1 || !a2) return 1;
    output_slot = SF_DRAFT_PTR(uint32, a2);
    if (r_u8(SF_DRAFT_GP + 0x99Cu) == 1) {
        result = sub_800DF6EC(0);
        if (result) return result;
    }
    handle = sub_800DED2C();
    *output_slot = handle;
    if (!handle) return 3;
    while (attempts < 5 && !found) {
        ++attempts;
        found = sub_800DEB50((sint32)sf_draft_guest_address(&file), a1);
    }
    if (!found || !file.words[1]) {
        sint32 error = found ? 4 : 5;
        w_u32(*output_slot + 4u, 0xCACACACAu);
        *output_slot = 0u;
        sub_800DF43C(error);
        return error;
    }
    result = sub_800EDB24(sf_draft_guest_address(&file));
    w_u32(*output_slot, file.words[0]);
    w_u32(*output_slot + 4u, file.words[1]);
    w_u32(*output_slot + 8u, (uint32)result + ((file.words[1] + 2047u) >> 11) - 1u);
    w_u32(*output_slot + 12u, file.words[0]);
    w_u32(*output_slot + 16u, file.words[1]);
    return sub_800DEDB4(*output_slot);
}

sint32 sub_80066D74(sint32 a1)
{
    FUNCTION_MARKER(0x80066D74u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  _DWORD *v2; 
  int v3; 
  int v4; 
  int v5; 
  char v6; 
  char v7; 

  __int16 v10[4]; 

  v2 = SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
  v3 = v2[13];
  if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 14 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 32)) & 1) == 0 )
    goto LABEL_15;
  v4 = 666;
  if ( a1 != 666 )
    v4 = *(__int16 *)(20 * *v2 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)));
  if ( v4 == 53 )
  {
    if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v3 + 24)) + 8)) <= 0 )
    {
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3342)) = 1;
    }
    else
    {
      v6 = sub_8006C180();
      v5 = v3;
      if ( v6 || *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 82)) == 5 )
        return sub_80059FCC(v5, 2, 0, 1);
      v10[0] = 342;
      v10[1] = 346;
      v7 = sub_800EC8F4();
      sub_8006C620((v10[v7 & 1] + (*SF_DRAFT_PTR(_WORD, (v3 + 2)) & 3)), v3, 0);
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 28)) + 80)) = (sub_800EC8F4() & 0x3F) + 0x80;
    }
LABEL_15:
    v5 = v3;
    return sub_80059FCC(v5, 2, 0, 1);
  }
  if ( v4 != 76 && v4 != 92 )
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2908)) = 1;
  v5 = v3;
  return sub_80059FCC(v5, 2, 0, 1);
}

sint32 sub_8003D99C(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003D99Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int result; 
  int *v12; 

  v2 = 2 * a1;
  v3 = &SF_DRAFT_PTR(uint32, 0x80011B7Cu)[a1];
  if ( a2 || (v4 = 12 * a1, SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1] != SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1]) )
  {
    v5 = SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1]) - SLOWORD(SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1]);
    if ( a2 )
    {
      v6 = v5 + 8;
      if ( SF_DRAFT_PTR(uint32, 0x8011B884u)[12 * a1] == SF_DRAFT_PTR(uint32, 0x8011B888u)[12 * a1] )
      {
        v7 = 6 * (v2 + 1);
        v8 = *((__int16 *)v3 + 1);
        v9 = (uint16)(*(_WORD *)v3 - 3);
        SF_DRAFT_PTR(uint32, 0x8011B884u)[v7] = v9 | (v8 << 16);
        SF_DRAFT_PTR(uint32, 0x8011B888u)[v7] = v9 | ((v8 + 4) << 16);
        SF_DRAFT_PTR(uint32, 0x8011B884u)[6 * v2] = v9 | ((v8 + 5) << 16);
        v6 = v5 + 8;
      }
      LOWORD(v10) = v6;
      if ( v6 >= 53 )
      {
        LOWORD(v10) = 53;
        result = 1;
LABEL_11:
        SF_DRAFT_PTR(uint32, 0x8011B888u)[6 * v2] = (uint16)(*(_WORD *)v3 + v10 - 3) | ((*((__int16 *)v3 + 1) + 5) << 16);
        return result;
      }
    }
    else
    {
      v10 = v5 - 8;
      result = 0;
      if ( v10 >= 0 )
        goto LABEL_11;
      LOWORD(v10) = 0;
    }
    result = 0;
    goto LABEL_11;
  }
  result = 1;
  v12 = &SF_DRAFT_PTR(uint32, 0x8011B874u)[6 * v2 + 6];
  v12[5] = 67109888;
  v12[4] = 67109888;
  SF_DRAFT_PTR(uint32, 0x8011B874u)[v4 + 5] = 67109888;
  SF_DRAFT_PTR(uint32, 0x8011B884u)[v4] = 67109888;
  return result;
}

sint32 sub_8001A7AC(uint32 a1)
{
    FUNCTION_MARKER(0x8001A7ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v2; 
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

  v2 = *a1_view;
  v3 = a1_view[3];
  if ( *a1_view == v3 )
  {
    if ( !a1_view[1] )
    {
      result = a1_view[2];
      if ( !result )
        return result;
    }
    v3 = a1_view[3];
    v2 = *a1_view;
  }
  v5 = (v3 - v2) * a1_view[8];
  v6 = a1_view[7];
  v7 = v5 - a1_view[1];
  v12 = v7;
  if ( v6 >= 0 )
  {
    if ( v6 < v7 || (v6 = -v6, v7 < v6) )
      v12 = v6;
  }
  v8 = a1_view[1] + v12;
  v13 = v8;
  if ( (v8 <= 0 || v5 > 0) && (v8 >= 0 || v5 < 0) )
  {
    if ( v8 > 0 && v8 >= v5 || v8 < 0 && v5 >= v8 )
      v13 = v5;
  }
  else
  {
    v13 = 0;
  }
  v9 = a1_view[6];
  if ( v9 >= 0 )
  {
    if ( v9 < v13 || (v9 = -v9, v13 < v9) )
      v13 = v9;
  }
  a1_view[2] = v13 - a1_view[1];
  a1_view[1] = v13;
  if ( v13 < 0 )
    v10 = v13 - 4095;
  else
    v10 = v13 + 4095;
  if ( v10 < 0 )
    v11 = -(-v10 >> 12);
  else
    v11 = v10 >> 12;
  result = *a1_view + v11;
  *a1_view = result;
  return result;
}

sint32 sub_80080758(sint32 a1)
{
    FUNCTION_MARKER(0x80080758u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v2; 
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 

  v2 = 0;
  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
  v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3372)) + 60 * v3));
  v5 = v4[1];
  v6 = *v4;
  v7 = v5;
  do
  {
    v8 = v4[1];
    ++v4;
    ++v2;
    *SF_DRAFT_PTR(_DWORD, (v7 + 140)) = v8;
    v7 += 4;
  }
  while ( v2 < 4 );
  v9 = 0;
  v10 = v5;
  do
  {
    v11 = *SF_DRAFT_PTR(_DWORD, (v10 + 4));
    v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3332)) << 11;
    if ( !v12 )
      _break(7u, 0);
    v13 = v11 / v12;
    if ( v11 != -1 && v11 )
    {
      if ( (int)(v11 / v12) >= 4 )
        sub_800DDC34(1, 0, 0x80012350u, 486);
      v14 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3332)) << 11;
      if ( !v14 )
        _break(7u, 0);
      *SF_DRAFT_PTR(_DWORD, (v10 + 4)) = *SF_DRAFT_PTR(_DWORD, (4 * v13 + v5 + 140)) + v11 % v14;
    }
    ++v9;
    v10 += 4;
  }
  while ( v9 < 33 );
  sub_80080494(v3);
  sub_80082FD8(v6);
  sub_800D2850(v5, (*SF_DRAFT_PTR(_DWORD, (v6 + 16))));
  sub_80076990(r_u32(v6 + 16));
  sub_8002BDC0(v3);
  return sub_80080674(v3);
}

sint32 sub_80032A1C(uint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80032A1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v3; 
  int result; 
  int v5; 

  int v7; 

  int v11; 
  bool v12; // dc
  _WORD *v13; 

  v3 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  result = 3;
  if ( a2 == 2 )
  {
    v5 = *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)) )
    {
      (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 1;
      result = sub_8003320C(v5, 1);
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)) = 0;
    }
    else
    {
      v7 = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116B7Cu));
      result = sub_8003320C(v5, 0);
      if ( v7 )
      {
        if ( sub_80086104(*(uint16 *)(SF_DRAFT_GP + 578)) )
        {
          if ( **(__int16 **)(v3 + 20) >= 0 )
            return sub_80086018(*(uint16 *)(SF_DRAFT_GP + 578));
          else
            return sub_80086540(*(uint16 *)(SF_DRAFT_GP + 578), 40);
        }
        else
        {
          result = **(__int16 **)(v3 + 20);
          if ( result < 0 )
          {
            result = sub_80085D04((SF_DRAFT_PTR(uint32, 0x80116314u)[0]), 0);
            *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 578)) = result;
          }
        }
      }
    }
  }
  else if ( a2 == 3 )
  {
    v11 = (uint8)(*SF_DRAFT_PTR(uint8, 0x80116B7Cu));
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 580)) = 0;
    v12 = v11 == 0;
    result = 1;
    if ( v12 )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
        sub_80028F3C(a1, 13);
      v13 = SF_DRAFT_PTR(_WORD, *(_WORD **)(v3 + 20));
      (*SF_DRAFT_PTR(uint8, 0x80116B7Cu)) = 1;
      result = -1;
      *v13 = (-1);
    }
    else
    {
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 581)) = 1;
    }
  }
  return result;
}

sint32 sub_80033090(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80033090u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v4; 
  uint8 v5; 
  int v6; 
  int v7; 
  int *v8; 
  __int16 *v9; 
  int v10; 
  int v11; 
  bool v12; // dc
  int result; 
  int v14; 
  unsigned int v15; 

  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = (__int16)a1;
  v8 = SF_DRAFT_PTR(int, 0x8012C864u);
  v9 = SF_DRAFT_PTR(__int16, 0x8012C860u);
  while ( 1 )
  {
    v10 = *v9;
    if ( v10 == v7 )
      break;
    if ( v10 == -1 )
      v4 = v6;
    v8 += 2;
    ++v6;
    v9 += 4;
    if ( v6 >= 8 )
      goto LABEL_16;
  }
  if ( a2 == 43 )
  {
    *v8 = ((*SF_DRAFT_PTR(uint32, 0x80116A88u)));
LABEL_12:
    v5 = 1;
    goto LABEL_16;
  }
  if ( a2 == 44 )
  {
    *v9 = (-1);
    goto LABEL_12;
  }
  v5 = 1;
  if ( a2 != 45 )
  {
LABEL_16:
    v11 = v5;
    goto LABEL_17;
  }
  v11 = 1;
  if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *v8) >= 0x3D )
  {
    if ( v10 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) || (v11 = 1, !(*SF_DRAFT_PTR(uint32, 0x8012F9B8u))) )
    {
      sub_80028F3C(v10, 44);
      goto LABEL_12;
    }
  }
LABEL_17:
  v12 = v11 != 0;
  result = -1;
  if ( !v12 )
  {
    if ( v4 != -1 && a2 == 43 )
    {
      v14 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
      v15 = 8 * v4;
      SF_DRAFT_PTR(uint16, 0x8012C860u)[v15 / 2] = a1;
      SF_DRAFT_PTR(uint32, 0x8012C864u)[v15 / 4] = v14;
    }
    result = a1 << 16;
    if ( a2 == 45 && (__int16)a1 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      return sub_80028F3C((__int16)a1, 44);
  }
  return result;
}

sint32 sub_800D59CC(uint32 a1, uint32 ordering_table)
{
    FUNCTION_MARKER(0x800D59CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v1; 
  uint32 cursor; 
  int v3; 
  unsigned int v4; 
  int v6; 
  int v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 

  v1 = *a1_view;
  cursor = r_u32(0x8012C8A0u);
  v3 = (uint16)a1_view[1];
  (*SF_DRAFT_PTR(uint32, 0x1F800010)) = HIWORD(a1_view[1]);
  (*SF_DRAFT_PTR(uint32, 0x1F800014)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
  (*SF_DRAFT_PTR(uint32, 0x1F800018)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
  (*SF_DRAFT_PTR(uint32, 0x1F80001C)) = (*SF_DRAFT_PTR(uint32, 0x1F800010));
  v4 = a1_view[2];
  v6 = v1;
  if ( v4 )
  {
    v7 = *((__int16 *)a1_view + 6);
    v8 = *((__int16 *)a1_view + 7);
    v9 = (unsigned int)((uint16)v4 + HIWORD(v4)) >> 1;
    v10 = ((unsigned int)(uint16)v4 + v7) >> 1;
    v11 = (unsigned int)(HIWORD(v4) + v8) >> 1;
    v12 = (unsigned int)(v7 + v8) >> 1;
    v13 = (v9 + v10 + v11 + v12) >> 2;
    (*SF_DRAFT_PTR(uint32, 0x1F800010)) = (3 * ((uint16)v4 + v9 + v7 + v13)) >> 4;
    (*SF_DRAFT_PTR(uint32, 0x1F800014)) = (3 * (v9 + HIWORD(v4) + v11 + v13)) >> 4;
    (*SF_DRAFT_PTR(uint32, 0x1F800018)) = (3 * (v7 + v12 + v10 + v13)) >> 4;
    (*SF_DRAFT_PTR(uint32, 0x1F80001C)) = (3 * (v12 + v8 + v11 + v13)) >> 4;
  }
  if ( (*SF_DRAFT_PTR(_BYTE, (v6 + 7)) & 8) != 0 && v3 == 8194 )
    sub_800D7110(v1, &cursor, ordering_table, (uint32)v3);
  else
    sub_800D5B50(v1, &cursor, ordering_table, (uint32)v3);
  w_u32(0x8012C8A0u, cursor);
  return 1;
}

sint32 sub_800C7D8C(sint32 a1, sint32 a2, sint32 a3, sint32 a4, sint32 a9, sint32 a10, sint32 a11, sint32 a12)
{
    FUNCTION_MARKER(0x800C7D8Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v13; 
  char v14; 
  unsigned int v15; 
  int v16; 
  __int16 v17; 
  int v18; 
  __int16 v19; 
  __int16 v20; 
  unsigned int v21; 
  int result; 
  int v23; 

  *SF_DRAFT_PTR(_DWORD, (a1 + 4)) = 0;
  *SF_DRAFT_PTR(_DWORD, (a1 + 8)) = 150994944;
  *SF_DRAFT_PTR(_DWORD, (a1 + 16)) = a2;
  *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = a3;
  *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = a4;
  *SF_DRAFT_PTR(_DWORD, (a1 + 12)) = a10 | 0x2C000000;
  *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = a9;
  v13 = *SF_DRAFT_PTR(_DWORD, (a11 + 12)) & 3;
  v14 = 0;
  if ( v13 )
  {
    if ( v13 == 1 )
      v14 = 1;
  }
  else
  {
    v14 = 2;
  }
  v15 = (uint16)sub_800E7F14(v13, a12, *SF_DRAFT_PTR(__int16, (a11 + 16)), *SF_DRAFT_PTR(__int16, (a11 + 18)));
  if ( v15 >= 0x10 )
    v16 = (*SF_DRAFT_PTR(__int16, (a11 + 16)) - ((v15 - 16) << 6)) << v14;
  else
    v16 = (*SF_DRAFT_PTR(__int16, (a11 + 16)) - (v15 << 6)) << v14;
  v17 = *SF_DRAFT_PTR(_WORD, (a11 + 18));
  if ( v17 >= 256 )
    LOBYTE(v17) = (uint8)r_u16(a11 + 18);
  v18 = *(uint16 *)(a11 + 20);
  v19 = *SF_DRAFT_PTR(_WORD, (a11 + 22));
  *SF_DRAFT_PTR(_BYTE, (a1 + 20)) = v16;
  *SF_DRAFT_PTR(_BYTE, (a1 + 21)) = (uint8)v17;
  v20 = *SF_DRAFT_PTR(_WORD, (a11 + 30));
  v21 = *(uint16 *)(a11 + 28);
  *SF_DRAFT_PTR(_BYTE, (a1 + 29)) = (uint8)v17;
  *SF_DRAFT_PTR(_WORD, (a1 + 30)) = v15;
  *SF_DRAFT_PTR(_BYTE, (a1 + 36)) = v16;
  result = (v21 >> 4) & 0x3F;
  v23 = v16 + (v18 << v14) - 1;
  LOBYTE(v19) = v17 + v19 - 1;
  *SF_DRAFT_PTR(_WORD, (a1 + 22)) = (v20 << 6) | result;
  *SF_DRAFT_PTR(_BYTE, (a1 + 28)) = v23;
  *SF_DRAFT_PTR(_BYTE, (a1 + 37)) = (uint8)v19;
  *SF_DRAFT_PTR(_BYTE, (a1 + 44)) = v23;
  *SF_DRAFT_PTR(_BYTE, (a1 + 45)) = (uint8)v19;
  return result;
}

sint32 sub_800770F8(uint32 output, uint32 source, uint32 index1, uint32 index2, uint32 index3)
{
    uint32 xy0, xy1, xy2, swap, vertices[3], i, context, transform;
    FUNCTION_MARKER(0x800770F8u, "SCUS_942.40");
    /* TODO Native geometry requires runtime validation */
    if (r_s32(0x1F80000Cu) <= 0)
    {
        xy0 = sf_gte_read_data(12u);
        xy2 = sf_gte_read_data(14u);
        sf_gte_write_data(14u, xy0);
        sf_gte_write_data(12u, xy2);
        swap = index1; index1 = index3; index3 = swap;
    }
    sf_gte_execute(0x4B400006u);
    if ((sint32)sf_gte_read_data(24u) <= 0) return 0;
    xy0 = sf_gte_read_data(12u);
    xy1 = sf_gte_read_data(13u);
    xy2 = sf_gte_read_data(14u);
    if (!((xy0 ^ xy1) & 0x80000000u) && !((xy0 ^ xy2) & 0x80000000u)) return 0;
    if (!((xy0 ^ xy1) & 0x8000u) && !((xy0 ^ xy2) & 0x8000u)) return 0;
    vertices[0] = source + (index1 << 3);
    vertices[1] = source + (index2 << 3);
    vertices[2] = source + (index3 << 3);
    for (i = 0; i < 3u; ++i)
    {
        uint32 first = r_u32(vertices[i] + 4u);
        uint32 second = r_u32(vertices[i] + 8u);
        w_u32(output + 48u + i * 8u, first);
        w_u32(output + 52u + i * 8u, second);
    }
    w_u32(0x80128E34u, output + 48u);
    w_u32(0x80128E38u, output + 56u);
    w_u32(0x80128E3Cu, output + 64u);
    context = r_u32(0x80077270u);
    transform = r_u32(context + 72u);
    if (transform)
    {
        transform = r_u32(transform + 12u);
        if (transform != 0x8010E1ECu) sub_80078BD0(0x80128E20u, transform);
    }
    context = r_u32(0x80077270u);
    return sub_80078724(r_u32(0x80077274u), 0x80128E20u, context + 32u, context + 16u) == 0;
}

sint32 sub_80051530(sint32 a1, uint32 a2, sint32 a3, sint32 a4)
{
    FUNCTION_MARKER(0x80051530u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);

  int v8; 
  int v9; 
  char v10; 
  char v11; 
  char v12; 
  _DWORD v14[4]; 

  sub_8004C354(sf_draft_guest_address(a2_view));
  sub_800C720C(a3, sf_draft_guest_address(v14));
  sub_8004C354(sf_draft_guest_address(a2_view));
  sub_8004C654(5, a4);
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3348)) = 32;
  sub_8004C758(sf_draft_guest_address(v14), 0x7FFF, 0);
  v8 = sub_8004C0E8(8, 0);
  v9 = v8;
  if ( v8 )
  {
    *SF_DRAFT_PTR(_DWORD, (v8 + 44)) = 7;
    *SF_DRAFT_PTR(_BYTE, (v8 + 35)) = 3;
    *SF_DRAFT_PTR(_WORD, (v8 + 28)) = 0;
    *SF_DRAFT_PTR(_WORD, (v8 + 26)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v8 + 48)) = 3;
    sub_8004C7B0(v8, 8);
    sub_8004C5C8(1365, 0, 255);
    sub_8004C654(10, a4);
    v10 = sub_800EC8F4();
    sub_8004C758(sf_draft_guest_address(v14), ((v10 & 3) << 16) | 0xFFF, 0);
    v11 = sub_800EC8F4();
    v9 = sub_8004C0E8((v11 & 3) + 1, 0);
    if ( v9 )
    {
      *SF_DRAFT_PTR(_BYTE, (v9 + 35)) = 10;
      *SF_DRAFT_PTR(_WORD, (v9 + 26)) = -10518;
      *SF_DRAFT_PTR(_WORD, (v9 + 28)) = 0;
      *SF_DRAFT_PTR(_DWORD, (v9 + 44)) = 9;
      *SF_DRAFT_PTR(_DWORD, (v9 + 48)) = 0;
      v12 = sub_800EC8F4();
      sub_8004C7B0(v9, (v12 & 3) + 1);
      *SF_DRAFT_PTR(_BYTE, (v9 + 36)) = 3;
    }
  }
  return v9;
}

uint32 sub_80035C04(uint32 a1)
{
    FUNCTION_MARKER(0x80035C04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  _DWORD *v2; 
  int v3; 
  int v4; 
  unsigned int v5; 
  int v6; 
  unsigned int v7; 
  _DWORD *v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  int v12; 
  sint32 result; 

  v2 = (_DWORD *)a1_view[24];
  switch ( sub_8001C950() )
  {
    case 1:
    case 4:
      v3 = 2;
      break;
    case 2:
      v3 = 3;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      v3 = 4;
      break;
    default:
      v3 = a1_view[6] != 0;
      break;
  }
  v4 = 0;
  v5 = (unsigned int)v2;
  v6 = a1_view[85] + 32 * v3;
  do
  {
    v7 = v5;
    v8 = SF_DRAFT_PTR(_DWORD, (v6 + 8 * *SF_DRAFT_PTR(_DWORD, (v5 + 24))));
    v9 = 5;
    if ( (v5 & 3) != 0 )
    {
      v9 = 8 * (v5 & 3) + 5;
      v7 = v5 & 0xFFFFFFFC;
    }
    v10 = *SF_DRAFT_PTR(_DWORD, (4 * (v9 >> 5) + v7)) & (1 << (v9 & 0x1F));
    v11 = v5 + 4;
    if ( !v10 )
      *SF_DRAFT_PTR(_DWORD, v5) = *v8;
    v12 = 5;
    if ( (v11 & 3) != 0 )
    {
      v12 = 8 * (v11 & 3) + 5;
      v11 &= 0xFFFFFFFC;
    }
    if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v12 >> 5) + v11)) & (1 << (v12 & 0x1F))) == 0 )
      *SF_DRAFT_PTR(_DWORD, (v5 + 4)) = v8[1];
    result = ++v4 < 4;
    v5 += 28;
  }
  while ( v4 < 4 );
  return result;
}
