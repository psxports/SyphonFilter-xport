#include "game_draft.h"

uint32 sf_native_clear_sequence(uint32 initial_result);
void sub_8005FCC8(void);
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
#include <stdio.h>
#include <stdlib.h>

sint32 sub_8006BC98(sint32 a1, uint32 a2, sint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8006BC98u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a4_view = SF_DRAFT_PTR(int, a4);
  int v7; 
  int v8; 
  int *v9; 
  int v10; 
  bool v11; // dc
  int v13; 
  int v14; 
  int var8[4]; 
  if ( a1 == 3 )
  {
    sub_800C087C((*SF_DRAFT_PTR(uint32, 0x8011E8ACu)), (__int16)a2, -2, -2);
    v7 = -65536;
  }
  else
  {
    sub_8006B90C(a1, a2, a3, sf_draft_guest_address(a4_view), sf_draft_guest_address(SF_DRAFT_PTR(_WORD, var8[2])), sf_draft_guest_address(SF_DRAFT_PTR(_WORD, var8[3])));
    v9 = &SF_DRAFT_PTR(uint32, 0x8011E8A0u)[a1];
    v10 = sub_800BFC68((*v9), (__int16)a2, (SLOWORD(var8[0])), (SHIWORD(var8[0])));
    if ( (__int16)v10 == -1 )
      v10 = a2;
    v7 = v10 << 16;
    if ( a3 )
    {
      v11 = sub_800C2B84((*v9), (__int16)v10) == 0;
      v7 = v10 << 16;
      if ( !v11 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          ++v13;
          if ( SF_DRAFT_PTR(uint32, 0x8011E8C8u)[v14] == -1 )
          {
            v8 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2972));
            SF_DRAFT_PTR(uint32, 0x8011E8C8u)[v14] = a1;
            SF_DRAFT_PTR(uint32, 0x8011E8CCu)[v14] = (__int16)v10;
            SF_DRAFT_PTR(uint32, 0x8011E8D0u)[v14] = a3;
            *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2972)) = v8 + 1;
            v7 = v10 << 16;
            return v7 >> 16;
          }
          v14 += 3;
        }
        while ( v13 < 10 );
        v7 = v10 << 16;
      }
    }
  }
  return v7 >> 16;
}

sint32 sub_800C7628(uint32 target, sint32 flags)
{
    FUNCTION_MARKER(0x800C7628u, "SCUS_942.40");
    uint32 matrix;
    uint32 first_child;
    uint32 second_child;
    uint32 source;
    uint32 combined;
    uint32 words[8];
    uint32 index;
    if (!target)
        return 43;
    matrix = *SF_DRAFT_PTR(uint32, target + 32u);
    if (!matrix)
        return 43;
    first_child = *SF_DRAFT_PTR(uint32, matrix + 36u);
    second_child = *SF_DRAFT_PTR(uint32, matrix + 40u);
    combined = *SF_DRAFT_PTR(uint32, matrix + 44u);
    if (first_child)
        sub_800C7628(first_child, flags);
    combined |= (uint32)flags;
    source = *SF_DRAFT_PTR(uint32, matrix + 32u);
    if (combined && source)
        sub_800C733C(source, matrix, target);
    else if (!source && (combined || !second_child))
    {
        /* Read the full original word group before writing its destination */
        for (index = 0; index < 8; ++index)
            words[index] = *SF_DRAFT_PTR(uint32, matrix + 4u * index);
        for (index = 0; index < 8; ++index)
            *SF_DRAFT_PTR(uint32, target + 4u * index) = words[index];
    }
    if (second_child)
        sub_800C7628(second_child, (sint32)combined);
    *SF_DRAFT_PTR(uint32, matrix + 44u) = 0;
    return 0;
}

sint32 sub_800DF83C(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a5)
{
    FUNCTION_MARKER(0x800DF83Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint32 *a3_view = SF_DRAFT_PTR(uint32, a3);
  unsigned int v9; 
  unsigned int v12; 
  int v13; 
  int result; 
  unsigned int v15; 
  unsigned int v16; 
  sint32 native_handle = a1;
  v9 = (uint32)a5;
  v12 = sub_800DE414(8);
  *a3_view = sf_draft_guest_address(SF_DRAFT_PTR(int, v12));
  if ( !v12 )
    return 3;
  v13 = sub_800DF148(native_handle, sf_draft_guest_address(&v15));
  if ( v13 )
  {
    sub_800DF3B0(sf_draft_guest_address(&native_handle));
    goto LABEL_14;
  }
  if ( a4 )
  {
    if ( v9 < v15 )
      sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x800139E0u)), 216);
    *SF_DRAFT_PTR(int, *a3_view) = a4;
    goto LABEL_10;
  }
  *SF_DRAFT_PTR(int, *a3_view) = sub_800DE414(v15);
  if ( !*SF_DRAFT_PTR(int, *a3_view) )
    return 3;
LABEL_10:
  v13 = sub_800DF198(native_handle, *SF_DRAFT_PTR(int, *a3_view), v15, sf_draft_guest_address(&v16));
  if ( v13 )
  {
    sub_800DF3B0(sf_draft_guest_address(&native_handle));
  }
  else
  {
    v13 = sub_800DF3B0(sf_draft_guest_address(&native_handle));
    result = 0;
    if ( !v13 )
      return result;
  }
  sub_800DE4A4(*SF_DRAFT_PTR(int, *a3_view));
LABEL_14:
  sub_800DE4A4((int)*a3_view);
  return v13;
}

uint32 sub_800D837C()
{
    FUNCTION_MARKER(0x800D837Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v0; 
  int v1; 
  char *v2; 
  int v3; 
  uint8 *v4; 
  int *v5; 
  uint8 *v6; 
  int v7; 
  v0 = 0;
  v1 = 180;
  v2 = &(*SF_DRAFT_PTR(uint8, 0x80122478u));
  v3 = 0;
  v4 = (uint8 *)(&(*SF_DRAFT_PTR(uint16, 0x80122672u)));
  v5 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012252Cu)));
  v6 = (uint8 *)(&(*SF_DRAFT_PTR(uint16, 0x8012265Au)));
  v7 = 0;
  do
  {
    if ( (uint8)SF_DRAFT_PTR(uint8, 0x80122659u)[v7] == 128 )
    {
      sub_800D7AEC(sf_draft_guest_address(v2), sf_draft_guest_address(v6), v0);
      sub_800D7AEC(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x801224B4u)[v3]), sf_draft_guest_address(((uint8 *)(&SF_DRAFT_PTR(uint32, 0x8012265Cu)[1]) + v7 + 2)), v0);
      sub_800D7AEC(sf_draft_guest_address(&SF_DRAFT_PTR(uint32, 0x801224F0u)[v3]), sf_draft_guest_address(((uint8 *)(&SF_DRAFT_PTR(uint32, 0x8012265Cu)[3]) + v7 + 2)), v0);
      sub_800D7AEC(sf_draft_guest_address(v5), sf_draft_guest_address(v4), v0);
    }
    else
    {
      sub_800D7AEC(sf_draft_guest_address(v2), sf_draft_guest_address(((uint8 *)(&SF_DRAFT_PTR(uint8, 0x80122658u)[v7]))), v0);
      SF_DRAFT_PTR(uint8, 0x80122401u)[v1] = 0;
      SF_DRAFT_PTR(uint8, 0x8012243Du)[v1] = 0;
      SF_DRAFT_PTR(uint8, 0x80122479u)[v1] = 0;
    }
    v1 += 240;
    v2 += 240;
    v3 += 60;
    v4 += 34;
    v5 += 60;
    v6 += 34;
    ++v0;
    v7 += 34;
  }
  while ( v0 < 2 );
  return 0;
}

sint32 sub_800DBBD4(uint32 a1, uint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800DBBD4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
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
  int v15; 
  int v16; 
  __int16 v17; 
  __int16 v18; 
  int v19; 
  __int16 v20; 
  _DWORD v21[8]; 
  if ( a2_view != a1_view )
  {
    if ( a2_view )
    {
      if ( !a1_view )
      {
        sub_800DA474(sf_draft_guest_address(a2_view), sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a3)));
        result = 0;
        goto LABEL_9;
      }
      sub_800DA474(sf_draft_guest_address(a2_view), sf_draft_guest_address(v21));
      sub_800EB0D4(sf_draft_guest_address(v21), sf_draft_guest_address(a1_view), a3);
    }
    else
    {
      v11 = a1_view[1];
      v12 = a1_view[2];
      v13 = a1_view[3];
      *SF_DRAFT_PTR(_DWORD, a3) = *a1_view;
      *SF_DRAFT_PTR(_DWORD, (a3 + 4)) = v11;
      *SF_DRAFT_PTR(_DWORD, (a3 + 8)) = v12;
      *SF_DRAFT_PTR(_DWORD, (a3 + 12)) = v13;
      v14 = a1_view[5];
      v15 = a1_view[6];
      v16 = a1_view[7];
      *SF_DRAFT_PTR(_DWORD, (a3 + 16)) = a1_view[4];
      *SF_DRAFT_PTR(_DWORD, (a3 + 20)) = v14;
      *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = v15;
      *SF_DRAFT_PTR(_DWORD, (a3 + 28)) = v16;
    }
    result = 0;
    goto LABEL_9;
  }
  v5 = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
  v6 = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
  *SF_DRAFT_PTR(_DWORD, a3) = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
  *SF_DRAFT_PTR(_DWORD, (a3 + 4)) = v5;
  *SF_DRAFT_PTR(_DWORD, (a3 + 8)) = v6;
  v7 = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
  v8 = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
  *SF_DRAFT_PTR(_DWORD, (a3 + 12)) = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
  *SF_DRAFT_PTR(_DWORD, (a3 + 16)) = v7;
  *SF_DRAFT_PTR(_DWORD, (a3 + 20)) = v8;
  v9 = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
  *SF_DRAFT_PTR(_DWORD, (a3 + 28)) = v9;
  result = 0;
LABEL_9:
  v17 = *SF_DRAFT_PTR(_WORD, (a3 + 10));
  *SF_DRAFT_PTR(_WORD, (a3 + 2)) = -*SF_DRAFT_PTR(_WORD, (a3 + 2));
  v18 = *SF_DRAFT_PTR(_WORD, (a3 + 6));
  *SF_DRAFT_PTR(_WORD, (a3 + 10)) = -v17;
  v19 = *SF_DRAFT_PTR(_DWORD, (a3 + 24));
  *SF_DRAFT_PTR(_WORD, (a3 + 6)) = -v18;
  v20 = *SF_DRAFT_PTR(_WORD, (a3 + 14));
  *SF_DRAFT_PTR(_DWORD, (a3 + 24)) = -v19;
  *SF_DRAFT_PTR(_WORD, (a3 + 14)) = -v20;
  return result;
}

sint32 sub_8005F090(void)
{
    FUNCTION_MARKER(0x8005F090u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int result; 
  int v3; 
  int v4; 
  int *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int *v13; 
  v1 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
  result = (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3172))) < 2;
  if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3172))) >= 2 )
  {
    v3 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2876));
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3360)) = 0;
    if ( v3 >= 0 && (unsigned int)(v1 - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2880))) < 0x14 )
      *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3360)) = 1;
    v4 = 0;
    v5 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012F120u)));
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3196)) = 0;
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = 0;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 >= 0 )
        break;
      ++v4;
      ++v5;
      if ( v4 >= 6 )
        goto LABEL_9;
    }
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = v4 + 1;
LABEL_9:
    v7 = 4 * v6;
    if ( v6 >= 0 )
    {
      v8 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      v9 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
      do
      {
        v10 = *SF_DRAFT_PTR(_DWORD, (4 * (4 * (v7 + v6) - v6) + v8 + 52));
        v11 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v10 + 24)) + 8));
        ++*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3360));
        if ( v11 > 0 && *SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (v10 + 20))) == v9 )
          ++*SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3196));
        v12 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 3238));
        v6 = -1;
        if ( v12 < 6 )
        {
          v13 = &SF_DRAFT_PTR(uint32, 0x8012F120u)[v12];
          while ( 1 )
          {
            v6 = *v13;
            if ( *v13 >= 0 )
              break;
            ++v12;
            ++v13;
            if ( v12 >= 6 )
              goto LABEL_19;
          }
          *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3238)) = v12 + 1;
        }
LABEL_19:
        v7 = 4 * v6;
      }
      while ( v6 >= 0 );
    }
    result = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3172)) = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
  }
  return result;
}

uint32 sub_800D8B9C(uint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800D8B9Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v7; 
  int v8; 
  _DWORD *v9; 
  int v10; 
  int v11; 
  int v12; 
  _DWORD *v13; 
  v7 = -1;
  if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2402)) == -1 )
    sub_800D9054();
  if ( a1_view != SF_DRAFT_PTR(_DWORD, -1) )
  {
    v8 = 0;
    if ( *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2400)) > 0 )
    {
      v9 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (SF_DRAFT_GP + 3136)));
      while ( *v9 )
      {
        if ( SF_DRAFT_PTR(_DWORD, *v9) == a1_view )
        {
          v7 = v8;
          break;
        }
        ++v8;
        ++v9;
        if ( v8 >= *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2400)) )
          break;
      }
    }
  }
  if ( v7 == -1 )
  {
    v7 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2402));
    v10 = sub_800DE414(120);
    v11 = *SF_DRAFT_PTR(__int16, (SF_DRAFT_GP + 2402));
    *SF_DRAFT_PTR(_DWORD, (4 * v11 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3140)))) = v10;
    v12 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3136));
    *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 2402)) = v11 + 1;
    *SF_DRAFT_PTR(_DWORD, (4 * v11 + v12)) = sf_draft_guest_address(a1_view);
    *SF_DRAFT_PTR(_DWORD, (v10 + 40)) = a3;
    *SF_DRAFT_PTR(_DWORD, (v10 + 116)) = -1;
    if ( (a3 & 0x400000) != 0 )
      sub_800CBBD8(sf_draft_guest_address(a1_view));
  }
  v13 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (4 * v7 + *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3140)))));
  v13[8] = 0;
  v13[9] = 0;
  v13[11] = 0;
  if ( a2 )
    *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = sf_draft_guest_address(v13);
  return sf_draft_guest_address(v13);
}

sint32 sub_800DFD64(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800DFD64u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int v6; 
  int result; 
  int v8; 
  int v9; 
  uint8 *v11; 
  int v12; 
  if ( !a1 )
    return 1;
  if ( !*SF_DRAFT_PTR(_DWORD, a1) )
    return 1;
  if ( !a2 )
    return 1;
  v6 = 0;
  if ( !a3_view )
    return 1;
  v8 = 0;
  if ( *SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, a1) + 4)) <= 0 )
    return 5;
  do
  {
    if ( !sub_800EC884(a2, *SF_DRAFT_PTR(_DWORD, a1) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 12)) + v6) )
      break;
    v9 = *SF_DRAFT_PTR(_DWORD, a1) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 12));
    if ( *SF_DRAFT_PTR(uint8, (v9 + v6++)) )
    {
      v11 = SF_DRAFT_PTR(uint8, (v6 + v9));
      do
      {
        v12 = *v11++;
        ++v6;
      }
      while ( v12 );
    }
    ++v8;
  }
  while ( v8 < *SF_DRAFT_PTR(sint32, (*SF_DRAFT_PTR(_DWORD, a1) + 4)) );
  result = 0;
  if ( v8 >= *SF_DRAFT_PTR(sint32, (*SF_DRAFT_PTR(_DWORD, a1) + 4)) )
    return 5;
  *a3_view = *SF_DRAFT_PTR(_DWORD, a1)
      + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 16))
      + *SF_DRAFT_PTR(_DWORD, (4 * v8 + *SF_DRAFT_PTR(_DWORD, a1) + *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, a1) + 8))));
  return result;
}

sint32 sub_80045554(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x80045554u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v5; 
  int v6; 
  __int16 *v7; 
  int v8; 
  int v9; 
  int v10; 
  int result; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  uint16 v16; 
  int v17; 
  bool v18; // dc
  int v19; 
  v5 = 8 * a1;
  v6 = (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Du)[32 * a1];
  v7 = &SF_DRAFT_PTR(uint16, 0x8012F0B0u)[2 * a1];
  if ( SF_DRAFT_PTR(uint8, 0x8010C38Du)[32 * a1] )
  {
    v8 = SF_DRAFT_PTR(uint32, 0x8010C390u)[v5] & 7;
    if ( v8 )
    {
      v9 = (uint16)*v7;
      v10 = v6 * v8;
      if ( v9 >= v6 * (v8 + 1) )
        return 0;
      v12 = v9 + a2;
      v13 = v12 - v10;
      if ( v10 < v12 )
      {
        LOWORD(v12) = v6 * v8;
        if ( v13 )
        {
          v14 = (uint16)v7[1] + v13;
          if ( v6 < v14 )
          {
            a2 -= v14 - v6;
            LOWORD(v14) = v6;
          }
          v7[1] = v14;
        }
      }
      v15 = (uint16)v7[1];
      *v7 = v12;
      if ( !v15 )
        sub_800463D0((a1));
    }
    else
    {
      v16 = v7[1] + a2;
      v7[1] = v16;
      v17 = (uint8)SF_DRAFT_PTR(uint8, 0x8010C38Du)[v5 * 4];
      v18 = (uint8)v17 >= (unsigned int)v16;
      v19 = v16 - v17;
      if ( !v18 )
      {
        a2 -= v19;
        v7[1] = (uint8)v17;
      }
    }
  }
  else
  {
    v7[1] += a2;
  }
  result = a2;
  if ( a1 == *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 848)) )
  {
    sub_8003FDD0();
    return a2;
  }
  return result;
}

sint32 sub_80087528(sint32 a1)
{
    FUNCTION_MARKER(0x80087528u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v2; 
  _BYTE *i; 
  uint8 v4; 
  int v5; 
  int v6; 
  int v7; 
  char v8; 
  char v9; 
  uint8 v10; 
  unsigned int v11; 
  char v12; 
  unsigned int v13; 
  unsigned int v14; 
  result = *SF_DRAFT_PTR(uint16, (a1 + 12));
  v2 = 0;
  if ( *SF_DRAFT_PTR(_WORD, (a1 + 12)) )
  {
    for ( i = SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, a1) + 22)); ; i += 44 )
    {
      v4 = *(i - 2);
      v5 = (*SF_DRAFT_PTR(uint8, (a1 + 16)) - v4) / 8;
      v6 = (*SF_DRAFT_PTR(uint8, (a1 + 17)) - (uint8)*(i - 1)) / 8;
      v7 = (*SF_DRAFT_PTR(uint8, (a1 + 18)) - (uint8)*i) / 8;
      if ( v5 )
        break;
      v8 = v4 + 1;
      if ( v4 < (unsigned int)*SF_DRAFT_PTR(uint8, (a1 + 16)) )
        goto LABEL_7;
      v8 = v4 - 1;
      if ( *SF_DRAFT_PTR(uint8, (a1 + 16)) < (unsigned int)v4 )
        goto LABEL_7;
LABEL_8:
      if ( v6 )
      {
        v9 = *(i - 1) + v6;
LABEL_12:
        *(i - 1) = v9;
        goto LABEL_13;
      }
      v10 = *(i - 1);
      v11 = *SF_DRAFT_PTR(uint8, (a1 + 17));
      v9 = v10 + 1;
      if ( v10 < v11 )
        goto LABEL_12;
      v9 = v10 - 1;
      if ( v11 < v10 )
        goto LABEL_12;
LABEL_13:
      if ( v7 )
      {
        v12 = *i + v7;
      }
      else
      {
        v13 = *SF_DRAFT_PTR(uint8, (a1 + 18));
        v14 = (uint8)*i;
        v12 = *i + 1;
        if ( v14 >= v13 )
        {
          v12 = *i - 1;
          if ( v13 >= v14 )
            goto LABEL_18;
        }
      }
      *i = v12;
LABEL_18:
      result = ++v2 < *SF_DRAFT_PTR(uint16, (a1 + 12));
      if ( v2 >= *SF_DRAFT_PTR(uint16, (a1 + 12)) )
        return result;
    }
    v8 = v4 + v5;
LABEL_7:
    *(i - 2) = v8;
    goto LABEL_8;
  }
  return result;
}

sint32 sub_8002A634(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x8002A634u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v4; 
  int v5; 
  _DWORD *v6; 
  int v7; 
  bool v8; // dc
  int v9; 
  int v10; 
  int result; 
  v2 = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0 )
  {
    v4 = a2;
    v5 = a1;
    v6 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80115CCCu)));
    do
    {
      v7 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( !v7 || (v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 8)) != 0, v9 = 0, !v8) )
        v9 = 1;
      if ( v9 )
        goto LABEL_14;
      if ( v2 == 666 )
      {
        if ( v4 != 666 )
          goto LABEL_14;
      }
      else if ( v4 != *SF_DRAFT_PTR(__int16, (20 * *v6 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) )
      {
        goto LABEL_14;
      }
      if ( v6[12] == v5 )
      {
        v10 = v6[13];
        if ( v10 )
        {
          result = v6[13];
          if ( *SF_DRAFT_PTR(_BYTE, (v10 + 34)) != 4 )
            return result;
        }
      }
LABEL_14:
      ++v2;
      v6 += 19;
    }
    while ( v2 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) );
  }
  return *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
}

BOOL sub_800156DC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800156DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int *v9; 
  int v10; 
  int v11; 
  char *v12; 
  sint32 result; 
  v4 = 0;
  v5 = 0;
  v6 = *a1_view;
  do
  {
    if ( !v6 )
      break;
    v7 = 0;
    if ( v6 > 0 )
    {
      v8 = 1;
      v9 = a1_view;
      v10 = 28 * v4 + 4;
      do
      {
        if ( *((uint16 *)v9 + 3) == v5 )
        {
          v11 = *((uint16 *)v9 + 2);
          if ( *((_WORD *)v9 + 2) )
          {
            if ( !(*SF_DRAFT_PTR(uint8, 0x801168D8u)) || v11 != 10 && v11 != 17 )
            {
              v12 = (char *)a2_view + v10;
              v10 += 28;
              ++v4;
              sub_800C6E48(sf_draft_guest_address(v12), sf_draft_guest_address(&a1_view[v8]), 7);
              *((_WORD *)v9 + 2) = 0;
            }
          }
        }
        v8 += 7;
        ++v7;
        v9 += 7;
      }
      while ( v7 < v6 );
    }
    result = ++v5 < 5;
  }
  while ( v5 < 5 );
  *a1_view = 0;
  *a2_view = v4;
  return result;
}

sint32 sub_8002254C(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002254Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  if ( !a1 )
    return 0;
  v4 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
  if ( !v4 )
    return 0;
  v6 = *SF_DRAFT_PTR(_DWORD, (v4 + 260));
  if ( v6 <= 0 || v6 == 4096 )
  {
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 112)) += *a2_view;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 116)) += a2_view[1];
    v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v9 = a2_view[2];
  }
  else
  {
    v10 = sub_800C6D90(*a2_view, *SF_DRAFT_PTR(_DWORD, (v4 + 260)));
    v11 = sub_800C6D90(a2_view[1], v6);
    v7 = sub_800C6D90(a2_view[2], v6);
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 112)) += v10;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 116)) += v11;
    v8 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    v9 = v7;
  }
  *SF_DRAFT_PTR(_DWORD, (v8 + 120)) += v9;
  return 1;
}

sint32 sub_800D97D4(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800D97D4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
    int *a3_view = SF_DRAFT_PTR(int, a3);
  int v6; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sub_800D9580(sf_draft_guest_address(a1_view), sf_draft_guest_address(&v12));
  v6 = v12;
  result = 7;
  if ( v12 )
  {
    v8 = *a1_view * a2;
    if ( v12 == -1 && v8 == 0x80000000 )
      _break(6u, 0);
    *a3_view = v8 / v12;
    v9 = a1_view[1] * a2;
    if ( !v6 )
      _break(7u, 0);
    if ( v6 == -1 && v9 == 0x80000000 )
      _break(6u, 0);
    a3_view[1] = v9 / v6;
    v10 = a1_view[2] * a2;
    v11 = v10 / v6;
    if ( v6 == -1 && v10 == 0x80000000 )
      _break(6u, 0);
    result = 0;
    a3_view[2] = v11;
  }
  return result;
}

sint32 sub_800CB424(sint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800CB424u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a3_view = SF_DRAFT_PTR(int, a3);
  unsigned int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  char v19[32]; 
  __int16 v20; 
  __int16 v21; 
  int v22; 
  sub_800D7A4C(SF_DRAFT_PTR(uint16, sf_draft_guest_address(&v20)), SF_DRAFT_PTR(uint16, sf_draft_guest_address(&v21)));
  sub_800DBBD4(*SF_DRAFT_PTR(_DWORD, a2), 0, sf_draft_guest_address(v19));
  sub_800E22F0(a1, sf_draft_guest_address(v19), sf_draft_guest_address(a3_view));
  if ( !v20 )
    return 7;
  v6 = a3_view[2];
  if ( !v6 )
    return 7;
  v8 = sub_800C6D90(*a3_view, v6);
  v9 = *SF_DRAFT_PTR(uint16, (a2 + 4));
  v22 = v8;
  v10 = sub_800C6D4C(v8, v9);
  v11 = a3_view[1];
  v12 = a3_view[2];
  *a3_view = v10;
  v13 = sub_800C6D90(v11, v12);
  v14 = v13 * 4 * v21;
  v15 = 3 * v20;
  v16 = v14 / v15;
  if ( v15 == -1 && v14 == 0x80000000 )
    _break(6u, 0);
  v17 = v14 / v15;
  v18 = *SF_DRAFT_PTR(uint16, (a2 + 4));
  v22 = v16;
  a3_view[1] = sub_800C6D4C(v17, v18);
  return 1;
}

sint32 sub_8003CED0(uint32 a1)
{
    FUNCTION_MARKER(0x8003CED0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a1_view = SF_DRAFT_PTR(int, a1);
  int v1; 
  int v2; 
  unsigned int v3; 
  int result; 
  if ( !a1_view )
    goto LABEL_9;
  v1 = *a1_view;
  if ( *a1_view < 0 )
    v1 = -v1;
  if ( v1 >= 24 )
    goto LABEL_9;
  v2 = a1_view[1];
  if ( v2 < 0 )
    v2 = -v2;
  if ( v2 < 20 )
  {
    v3 = ~(_BYTE)(*SF_DRAFT_PTR(uint32, 0x801169A4u)) & 7;
    (*SF_DRAFT_PTR(uint32, 0x80135E04u)) = (((32 * v3) | 0x1F) << 16) | ((uint8)(32 * v3) << 8) | (uint8)(32 * v3) | 0x28000000;
    sub_8003B138(sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x80135DF8u))), __PAIR32__(*((_WORD *)a1_view + 2), *(_WORD *)a1_view - 153) + 5242880, v3 >> 1, v3 >> 1);
    result = HIBYTE((*SF_DRAFT_PTR(uint32, 0x80135E04u))) | 2;
    HIBYTE((*SF_DRAFT_PTR(uint32, 0x80135E04u))) |= 2u;
  }
  else
  {
LABEL_9:
    result = 67109888;
    (*SF_DRAFT_PTR(uint32, 0x80135E08u)) = 67109888;
    (*SF_DRAFT_PTR(uint32, 0x80135E0Cu)) = 67109888;
    (*SF_DRAFT_PTR(uint32, 0x80135E10u)) = 67109888;
  }
  return result;
}

sint32 sub_8008BD14(void)
{
    FUNCTION_MARKER(0x8008BD14u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v1; 
  int v2; 
  int i; 
  int v4; 
  int v5; 
  __int16 *v6; 
  v1 = 0;
  v2 = 0;
  do
  {
    SF_DRAFT_PTR(uint16, 0x80121758u)[v2] = -1;
    SF_DRAFT_PTR(uint16, 0x8012175Cu)[v2] = -1;
    SF_DRAFT_PTR(uint16, 0x8012175Au)[v2] = -1;
    ++v1;
    v2 += 3;
  }
  while ( v1 < 2 );
  for ( i = 0; i < 16; i += 4 )
  {
    SF_DRAFT_PTR(uint16, 0x80121738u)[i] = -1;
    SF_DRAFT_PTR(uint8, 0x8012173Au)[i * 2] = 0;
    SF_DRAFT_PTR(uint8, 0x8012173Bu)[i * 2] = 0;
    SF_DRAFT_PTR(uint16, 0x8012173Cu)[i] = 0;
    SF_DRAFT_PTR(uint16, 0x8012173Eu)[i] = 0;
  }
  v4 = 0;
  v5 = (*SF_DRAFT_PTR(uint32, 0x80116A88u));
  v6 = &(*SF_DRAFT_PTR(uint16, 0x80121764u));
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3028)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3032)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3780)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3768)) = 0;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3168)) = v5;
  do
  {
    *v6 = -1;
    SF_DRAFT_PTR(uint8, 0x8012179Cu)[v4++] = 0;
    ++v6;
  }
  while ( v4 < 27 );
  *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 3020)) = -1;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3024)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3036)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3040)) = 0;
  *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 3320)) = 0;
  sub_8008BE80(0);
  sub_8008BE90(0);
  sub_8008D624(0);
  sub_80091CF8(0);
  sub_8008DE18(0);
  sub_80090614(0);
  return sub_80091220(0);
}

sint32 sub_800C8C8C(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800C8C8Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  __int16 v11; 
  __int16 v12; 
  int v13; 
  __int16 v14; 
  __int16 v15; 
  __int16 v16; 
  int v17; 
  int v18; 
  int result; 
  v3 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, a1));
  *SF_DRAFT_PTR(_DWORD, (a1 + 24)) = 0;
  v5 = v3[1];
  v6 = v3[2];
  v7 = v3[3];
  *SF_DRAFT_PTR(_DWORD, (a1 + 28)) = *v3;
  *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = v5;
  *SF_DRAFT_PTR(_DWORD, (a1 + 36)) = v6;
  *SF_DRAFT_PTR(_DWORD, (a1 + 40)) = v7;
  v8 = v3[5];
  v9 = v3[6];
  v10 = v3[7];
  *SF_DRAFT_PTR(_DWORD, (a1 + 44)) = v3[4];
  *SF_DRAFT_PTR(_DWORD, (a1 + 48)) = v8;
  *SF_DRAFT_PTR(_DWORD, (a1 + 52)) = v9;
  *SF_DRAFT_PTR(_DWORD, (a1 + 56)) = v10;
  sub_800E95B4(*SF_DRAFT_PTR(uint16, (a1 + 4)));
  sub_800E9F84(a1 + 104);
  v11 = *SF_DRAFT_PTR(_WORD, (a2 + 10));
  *SF_DRAFT_PTR(_WORD, (a2 + 2)) = -*SF_DRAFT_PTR(_WORD, (a2 + 2));
  v12 = *SF_DRAFT_PTR(_WORD, (a2 + 6));
  *SF_DRAFT_PTR(_WORD, (a2 + 10)) = -v11;
  v13 = *SF_DRAFT_PTR(_DWORD, (a2 + 24));
  *SF_DRAFT_PTR(_WORD, (a2 + 6)) = -v12;
  v14 = *SF_DRAFT_PTR(_WORD, (a2 + 14));
  *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = -v13;
  *SF_DRAFT_PTR(_WORD, (a2 + 14)) = -v14;
  sub_800C6F44(sf_draft_guest_address(SF_DRAFT_PTR(uint16, a2)));
  v15 = *SF_DRAFT_PTR(_WORD, (a2 + 10));
  *SF_DRAFT_PTR(_WORD, (a2 + 2)) = -*SF_DRAFT_PTR(_WORD, (a2 + 2));
  v16 = *SF_DRAFT_PTR(_WORD, (a2 + 6));
  *SF_DRAFT_PTR(_WORD, (a2 + 10)) = -v15;
  v17 = *SF_DRAFT_PTR(_DWORD, (a2 + 24));
  *SF_DRAFT_PTR(_WORD, (a2 + 6)) = -v16;
  v18 = *SF_DRAFT_PTR(uint16, (a2 + 14));
  *SF_DRAFT_PTR(_DWORD, (a2 + 24)) = -v17;
  result = -v18;
  *SF_DRAFT_PTR(_WORD, (a2 + 14)) = result;
  return result;
}

sint32 sub_8005AD04(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8005AD04u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  char v4; 
  int result; 
  int v6; 
  v4 = a2;
  result = 666;
  if ( ((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) >> 3) & 1) != a2 )
  {
    v6 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if ( v6 == 666 || (result = 3, *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v6 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 3) )
    {
      if ( !*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 896)) )
      {
        if ( a2 )
        {
          if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) + 8)) > 0 )
          {
            sub_8003D000(v6);
            sub_80059F4C(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)));
          }
        }
        else
        {
          sub_8003CCD8(v6);
        }
      }
      result = 8 * (v4 & 1);
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 0xFFFFFFF7 | result;
    }
  }
  return result;
}

sint32 sub_800E098C(uint32 a1, sint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800E098Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
    _DWORD *a3_view = SF_DRAFT_PTR(_DWORD, a3);
  int v6; 
  int v7; 
  int v8; 
  uint32 v9[8];
  __int16 v14[4]; 
  if ( *a1_view || a1_view[1] || a1_view[2] )
  {
    v14[0] = -*SF_DRAFT_PTR(_WORD, a2);
    v14[1] = *SF_DRAFT_PTR(_DWORD, (a2 + 4));
    v14[2] = -(__int16)*SF_DRAFT_PTR(_DWORD, (a2 + 8));
    sub_800EBE94(sf_draft_guest_address(v14), sf_draft_guest_address(v9));
    ((sint16 *)v9)[1] = -((sint16 *)v9)[1];
    ((sint16 *)v9)[3] = -((sint16 *)v9)[3];
    ((sint16 *)v9)[5] = -((sint16 *)v9)[5];
    ((sint16 *)v9)[7] = -((sint16 *)v9)[7];
    sub_800EADF4(sf_draft_guest_address(v9), sf_draft_guest_address(a1_view), sf_draft_guest_address(a3_view));
    return 0;
  }
  else
  {
    v6 = a1_view[1];
    v7 = a1_view[2];
    v8 = a1_view[3];
    *a3_view = *a1_view;
    a3_view[1] = v6;
    a3_view[2] = v7;
    a3_view[3] = v8;
    return 0;
  }
}

sint32 sub_80081CB4(sint32 a1)
{
    FUNCTION_MARKER(0x80081CB4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  _DWORD *v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  v2 = *SF_DRAFT_PTR(_DWORD, (60 * a1 + v1[843]));
  v3 = 0;
  if ( (int)v1[826] > 0 )
  {
    v4 = v1[826];
    v5 = v1[263];
    v6 = SF_DRAFT_PTR(_DWORD, v1[905]);
    while ( 1 )
    {
      if ( v6[1] != v2 )
        goto LABEL_8;
      v7 = v6[4];
      if ( v7 )
        break;
      v8 = v1[863];
      v6[4] = v5;
      v1[863] = v8 + 1;
      ++v3;
LABEL_9:
      v6 += 5;
      if ( v3 >= v4 )
        goto LABEL_10;
    }
    if ( v7 < 0 )
    {
      v9 = v1[863];
      v10 = v1[890];
      v6[1] = 0;
      v6[3] = -1;
      v6[4] = 1;
      v1[863] = v9 + 1;
      v1[890] = v10 + 1;
    }
LABEL_8:
    ++v3;
    goto LABEL_9;
  }
LABEL_10:
  sub_80082ED4(a1);
  v11 = *SF_DRAFT_PTR(_DWORD, (v2 + 16));
  v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 32));
  if ( v12 >> 24 == -128 )
    *SF_DRAFT_PTR(_DWORD, (v11 + 32)) = v12 & 0x7FFFFFFF;
  return sub_80081E20(v2);
}

sint32 sub_800287AC(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800287ACu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  __int16 *v7; 
  int v8; 
  int v9; 
  v3 = 255;
  v4 = -1;
  v5 = *SF_DRAFT_PTR(__int16, (a2 + 42));
  v6 = 0;
  if ( v5 > 0 )
  {
    v7 = SF_DRAFT_PTR(__int16, *SF_DRAFT_PTR(uint32, (a2 + 24)));
    v8 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16)));
    do
    {
      if ( (v8 & (1 << v7[1])) != 0 && v3 >= *((uint8 *)v7 + 12) )
      {
        v9 = *v7;
        if ( (v9 < 0 || !*v7 || v9 == *SF_DRAFT_PTR(uint8, (a3 + 1)))
          && ((*((_DWORD *)v7 + 1) & 0xFFFF0000) != -65536
           || *((uint8 *)v7 + 8) != 255
           || (*((_DWORD *)v7 + 3) & 0xFFFFFF00) != 0
           || *((_DWORD *)v7 + 4)
           || *((_BYTE *)v7 + 20)) )
        {
          v3 = *((uint8 *)v7 + 12);
          v4 = v7[1];
        }
      }
      ++v6;
      v7 += 12;
    }
    while ( v6 < v5 );
  }
  return v4 != -1 ? v4 : 0;
}

sint32 sub_800356CC(sint32 a1)
{
    FUNCTION_MARKER(0x800356CCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int *v3; 
  int v4; 
  int v5; 
  bool v6; // dc
  int v7; 
  int v8; 
  int v9; 
  result = 0;
  if ( *SF_DRAFT_PTR(__int16, (a1 + 2)) == (*SF_DRAFT_PTR(uint32, 0x801169D4u)) )
  {
    v3 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (a1 + 16)));
    v4 = *((uint8 *)v3 + 8);
    if ( v4 == 4
      || (v5 = *v3, (v5 & 0x1000) != 0)
      || v4 == 10
      || (v5 & 0x8000) != 0
      || v4 == 12
      || (result = 0, v4 == 2) )
    {
      v6 = sub_8003566C(a1);
      result = 0;
      if ( !v6 )
      {
        v7 = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
        v8 = *SF_DRAFT_PTR(_DWORD, (v7 + 404));
        if ( (v8 & 0x100) == 0 || (result = 0, *SF_DRAFT_PTR(int, (v7 + 36)) <= -94662) )
        {
          result = 0;
          if ( (v8 & 0x80000) == 0 )
          {
            v9 = *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 8));
            if ( v9 == 9 )
              return 0;
            result = 1;
            if ( v9 == 6 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}

sint32 sub_800C8A9C(sint32 a1, sint32 a2, sint32 a3)
{
    FUNCTION_MARKER(0x800C8A9Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v6; 
  int *v8; 
  int v9; 
  int *v10; 
  int *v11; 
  result = *SF_DRAFT_PTR(uint8, (SF_DRAFT_GP + 2180));
  v6 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2148));
  if ( *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2180)) )
  {
    for ( result = 132; result >= 0; result -= 12 )
      w_u32(0x80130078u + (uint32)result, 0u);
    *SF_DRAFT_PTR(_BYTE, (SF_DRAFT_GP + 2180)) = 0;
  }
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, v6));
      result = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, v6));
      if ( result == a1 )
      {
        result = v8[2];
        if ( result == a3 )
          break;
      }
      v6 = *SF_DRAFT_PTR(_DWORD, (v6 + 8));
      if ( !v6 )
        goto LABEL_12;
    }
    if ( a2 )
    {
      v8[1] = a2;
    }
    else
    {
      result = (sint32)sub_800DE6E0(0x801164CCu, (uint32)v6);
      *v8 = 0;
    }
  }
  else
  {
LABEL_12:
    v9 = 0;
    if ( a2 )
    {
      v10 = &(*SF_DRAFT_PTR(uint32, 0x80130078u));
      while ( 1 )
      {
        v11 = v10;
        result = v9 < 12;
        if ( !*v10 )
          break;
        ++v9;
        v10 += 3;
        if ( v9 >= 12 )
        {
          result = v9 < 12;
          break;
        }
      }
      if ( result )
      {
        *v11 = a1;
        v11[1] = a2;
        v11[2] = a3;
        return sub_800DE5E0(0x801164CCu, (sint32)sf_draft_guest_address(v11));
      }
    }
  }
  return result;
}

sint32 sub_800DB648(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800DB648u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  _DWORD *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  if ( !a1 )
    return 24;
  result = 1;
  if ( !*SF_DRAFT_PTR(_DWORD, (a1 + 32)) )
  {
    v5 = SF_DRAFT_PTR(_DWORD, sub_800DE414(48));
    *SF_DRAFT_PTR(_DWORD, (a1 + 32)) = sf_draft_guest_address(v5);
    if ( v5 )
    {
      v6 = (*SF_DRAFT_PTR(uint32, 0x8010E1F0u));
      v7 = (*SF_DRAFT_PTR(uint32, 0x8010E1F4u));
      *v5 = (*SF_DRAFT_PTR(uint32, 0x8010E1ECu));
      v5[1] = v6;
      v5[2] = v7;
      v8 = (*SF_DRAFT_PTR(uint32, 0x8010E1FCu));
      v9 = (*SF_DRAFT_PTR(uint32, 0x8010E200u));
      v5[3] = (*SF_DRAFT_PTR(uint32, 0x8010E1F8u));
      v5[4] = v8;
      v5[5] = v9;
      v10 = (*SF_DRAFT_PTR(uint32, 0x8010E208u));
      v5[6] = (*SF_DRAFT_PTR(uint32, 0x8010E204u));
      v5[7] = v10;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 32)) = 0;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 36)) = 0;
      *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 40)) = 0;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 32)) + 44)) = 0;
      sub_800DB730(a1, a2);
      return 0;
    }
    else
    {
      return 3;
    }
  }
  return result;
}

sint32 sub_8002A784(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x8002A784u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v4; 
  int v5; 
  int v6; 
  bool v7; // dc
  int v8; 
  int v9; 
  v2 = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0 )
  {
    v4 = a1;
    v5 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    do
    {
      v6 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( !v6 || (v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 8)) != 0, v8 = 0, !v7) )
        v8 = 1;
      if ( !v8 && (v9 = *SF_DRAFT_PTR(_DWORD, (v5 + 52))) != 0 && a2 == *SF_DRAFT_PTR(uint8, (v9 + 34)) )
      {
        ++v2;
        if ( *SF_DRAFT_PTR(_DWORD, (v5 + 48)) == v4 )
          return *SF_DRAFT_PTR(_DWORD, (v5 + 52));
      }
      else
      {
        ++v2;
      }
      v5 += 76;
    }
    while ( v2 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) );
  }
  return *SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
}

sint32 sub_8002A528(sint16 a1, sint16 a2)
{
    FUNCTION_MARKER(0x8002A528u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v4; 
  _DWORD *v5; 
  int v6; 
  bool v7; // dc
  int v8; 
  int result; 
  v2 = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116A5Cu)) > 0 )
  {
    v4 = a1;
    v5 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80115CCCu)));
    do
    {
      v6 = *SF_DRAFT_PTR(_DWORD, (76 * (__int16)v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      if ( !v6 || (v7 = *SF_DRAFT_PTR(_DWORD, (v6 + 8)) != 0, v8 = 0, !v7) )
        v8 = 1;
      if ( v8 )
      {
        if ( v2 == 666 )
        {
          if ( a2 == 666 )
          {
LABEL_11:
            result = v2;
            if ( v5[12] == v4 )
              return result;
          }
        }
        else if ( a2 == *SF_DRAFT_PTR(__int16, (20 * *v5 + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) )
        {
          goto LABEL_11;
        }
      }
      ++v2;
      v5 += 19;
    }
    while ( v2 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) );
  }
  return a1;
}

sint32 sub_8007FEC8(sint32 a1)
{
    FUNCTION_MARKER(0x8007FEC8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int v3; 
  int v4; 
  char *v5; 
  sint32 v6; 
  bool v7; // dc
  __int16 v8; 
  int v10; 
  int v11; 
  v10 = (*SF_DRAFT_PTR(uint32, 0x80116078u));
  v11 = (*SF_DRAFT_PTR(uint32, 0x8011607Cu));
  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 24)) & 0x1F;
  v3 = *SF_DRAFT_PTR(int, (a1 + 24)) >> 5;
  v4 = v2 + 6;
  if ( (*SF_DRAFT_PTR(_DWORD, (a1 + 24)) & 0xFu) >= 6 )
    v4 = v2 - 6;
  v5 = SF_DRAFT_PTR(char, 0x80127CA8u);
  SF_DRAFT_PTR(uint8, 0x80127CA8u)[32 * v3 + v2] = 1;
  if ( !v3 )
    v5 = SF_DRAFT_PTR(char, 0x80127CC8u);
  v5[v2] = 0;
  SF_DRAFT_PTR(uint8, 0x80127CA8u)[v4] = 0;
  SF_DRAFT_PTR(uint8, 0x80127CC8u)[v4] = 0;
  v6 = v2 < 28;
  if ( (v2 & 0xFu) < 6 )
  {
    v2 += 6;
    v6 = v2 < 28;
  }
  v7 = v6;
  v8 = v2 & 0xF;
  if ( !v7 )
  {
    HIWORD(v11) -= 32;
    v8 = v2 & 0xF;
  }
  LOWORD(v10) = v8 << 6;
  if ( v2 < 16 )
    HIWORD(v10) = 0;
  else
    HIWORD(v10) = 256;
  return sub_800E52AC(sf_draft_guest_address(&v10), *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3644)));
}

sint32 sub_8006BE10(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x8006BE10u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v5; 
  int *v6; 
  int v8; 
  int i; 
  if ( a1 == 3 )
    return (sint32)sf_native_clear_sequence(3);
  v6 = &SF_DRAFT_PTR(uint32, 0x8011E8A0u)[a1];
  sub_800C2900((uint32)*v6, (__int16)a2);
  result = sub_800C2B84((uint32)*v6, (__int16)a2);
  v8 = 0;
  if ( result )
  {
    for ( i = 0; ; i += 3 )
    {
      if ( SF_DRAFT_PTR(uint32, 0x8011E8C8u)[i] == a1 )
      {
        result = -1;
        if ( SF_DRAFT_PTR(uint32, 0x8011E8CCu)[i] == a2 )
          break;
      }
      result = ++v8 < 10;
      if ( v8 >= 10 )
        return result;
    }
    v5 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2972));
    SF_DRAFT_PTR(uint32, 0x8011E8C8u)[i] = -1;
    SF_DRAFT_PTR(uint32, 0x8011E8CCu)[i] = -1;
    SF_DRAFT_PTR(uint32, 0x8011E8D0u)[i] = 0;
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2972)) = v5 - 1;
  }
  return result;
}

sint32 sub_80049690(sint32 a1, sint8 a2, uint8 a3)
{
    FUNCTION_MARKER(0x80049690u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v3; 
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
  int v20; 
  int v21; 
  int v22; 
  v3 = SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 12)));
  v4 = a3;
  if ( a2 )
  {
    v5 = v3[21];
    v6 = v3[25];
    v3[20] += v3[24];
    v7 = v3[22];
    v8 = v3[26];
    v3[21] = v5 + v6;
    v9 = v3[20];
    v10 = v3[28];
    v3[22] = v7 + v8;
    v11 = v3[21];
    v12 = v3[29];
    v3[20] = v9 + v10;
    v13 = v3[22] + v3[30];
    v3[21] = v11 + v12;
    v3[22] = v13;
    v4 = a3;
  }
  if ( v4 )
  {
    v14 = v3[53];
    v15 = v3[57];
    v3[52] += v3[56];
    v16 = v3[54];
    v17 = v3[58];
    v3[53] = v14 + v15;
    v18 = v3[52];
    v19 = v3[60];
    v3[54] = v16 + v17;
    v20 = v3[53];
    v21 = v3[61];
    v3[52] = v18 + v19;
    v22 = v3[54] + v3[62];
    v3[53] = v20 + v21;
    v3[54] = v22;
  }
  return 1;
}

uint32 sub_800C49DC(sint32 a1, sint16 a2)
{
    FUNCTION_MARKER(0x800C49DCu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v4; 
  __int16 *result; 
  __int16 *v6; 
  __int16 *v7; 
  v4 = 24 * a2 + *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  result = SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_WORD, v4) & 0x1F));
  if ( result == SF_DRAFT_PTR(__int16, 1) )
  {
    v6 = SF_DRAFT_PTR(short, sub_800C484C(4, a1, a2));
    if ( v6 )
    {
      *SF_DRAFT_PTR(_BYTE, (v4 + 9)) = (uint8)(v6[8]);
      sub_800C4978(sf_draft_guest_address(v6));
    }
    v7 = SF_DRAFT_PTR(short, sub_800C484C(3, a1, a2));
    if ( v7 )
    {
      *SF_DRAFT_PTR(_WORD, (v4 + 10)) = v7[8];
      sub_800C4978(sf_draft_guest_address(v7));
    }
    result = SF_DRAFT_PTR(short, sub_800C484C(0, a1, a2));
    if ( result )
    {
      *SF_DRAFT_PTR(_BYTE, (v4 + 7)) = HIBYTE(result[8]);
      *SF_DRAFT_PTR(_BYTE, (v4 + 8)) = (uint8)(result[8]);
      return sub_800C4978(sf_draft_guest_address(result));
    }
  }
  return sf_draft_guest_address(result);
}

BOOL sub_800283E0(sint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800283E0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _BYTE *a3_view = SF_DRAFT_PTR(_BYTE, a3);
  _DWORD *v3; 
  sint32 result; 
  int v5; 
  int v6; 
  int v7; 
  bool v8; // dc
  v3 = SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 12)) + 8));
  if ( *v3 == -1 || (result = 1, v3[*v3 + 4] != 2) )
  {
    if ( !*a2_view || (result = 0, (*a2_view & (1 << *a3_view)) != 0) )
    {
      if ( a2_view[3] != -1 || (result = 0, !*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16)))) )
      {
        v5 = *SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16)));
        v6 = a2_view[2];
        v7 = v5 & v6;
        v8 = (v5 & v6) != v6;
        result = 0;
        if ( !v8 )
        {
          if ( a2_view[3] != -1 )
            return (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) & a2_view[3]) == 0;
          result = 0;
          if ( v5 == v7 )
            return (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (a1 + 16))) & a2_view[3]) == 0;
        }
      }
    }
  }
  return result;
}

sint32 sub_800CADE4(sint32 a1, sint32 a2)
{
    FUNCTION_MARKER(0x800CADE4u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v2 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  v3 = (a1 + a2 + 7) & 0xFFFFFFF8;
  v4 = (*SF_DRAFT_PTR(uint32, 0x801168BCu)) + v2[527] + 16376;
  v5 = v4 - v3 - 8;
  v6 = v5 >> 1;
  if ( a1 )
  {
    result = v5 >> 1;
    if ( v4 < v3 )
    {
      sub_800EC914(SF_DRAFT_PTR(const char, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x800138C0u))));
      result = v6;
    }
    v11 = v2[788];
    v12 = v2[527];
    v13 = (*SF_DRAFT_PTR(uint32, 0x801168BCu));
    v2[527] = result;
    v2[788] = v3;
    (*SF_DRAFT_PTR(uint32, 0x801168BCu)) = (v3 + result + 3) & 0xFFFFFFFC;
    v2[550] = v11;
    v2[551] = v13;
    v2[552] = v12;
  }
  else
  {
    v7 = v2[552];
    result = 0;
    if ( v7 )
    {
      v9 = v2[550];
      v10 = v2[551];
      v2[527] = v7;
      v2[552] = 0;
      v2[788] = v9;
      (*SF_DRAFT_PTR(uint32, 0x801168BCu)) = v10;
      return 1;
    }
  }
  return result;
}

sint32 sub_8003D000(sint32 a1)
{
    FUNCTION_MARKER(0x8003D000u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int result; 
  v2 = (*SF_DRAFT_PTR(uint32, 0x80116934u));
  result = 2 * *SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 28)) + 77));
  *SF_DRAFT_PTR(__int16, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint16, 0x8011BA00u))) + result)) = a1;
  if ( v2 )
  {
    result = (*SF_DRAFT_PTR(uint16, 0x80116AAEu));
    if ( a1 == (*SF_DRAFT_PTR(uint16, 0x80116AAEu)) )
    {
      sub_80085EB0((uint16)a1, v2, 60, 0);
      result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 748));
      if ( result )
        result = sf_draft_call((uint32)result, 1, (const uint32[]){(uint32)(sint16)a1});
    }
  }
  if ( (*SF_DRAFT_PTR(uint32, 0x80116970u)) )
  {
    result = (*SF_DRAFT_PTR(uint16, 0x80116B00u));
    if ( a1 == (*SF_DRAFT_PTR(uint16, 0x80116B00u)) )
    {
      sub_80085EB0((uint16)a1, (*SF_DRAFT_PTR(uint32, 0x80116970u)), 60, 0);
      result = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 748));
      if ( result )
        return sf_draft_call((uint32)result, 1, (const uint32[]){(uint32)(sint16)a1});
    }
  }
  return result;
}

void sub_80049774(void)
{
    FUNCTION_MARKER(0x80049774u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int i; 
  int v2; 
  int v3; 
  int v4; 
  for ( i = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 876)); i; i = *SF_DRAFT_PTR(_DWORD, (v3 + 420)) )
  {
    v2 = *SF_DRAFT_PTR(_DWORD, (i + 8));
    v3 = *SF_DRAFT_PTR(_DWORD, (i + 12));
    if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 40)) & 0x400000) != 0 && ((*SF_DRAFT_PTR(_BYTE, (v2 + 8)) & 0x10) != 0 || !v3)
      || (v4 = 0, *SF_DRAFT_PTR(_BYTE, (v3 + 256))) )
    {
      v4 = 1;
    }
    if ( v4 )
    {
      sub_800482B8(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (v3 + 128))), 0);
    }
    else
    {
      sub_80048F3C(i, 0, 1);
      sub_800493F0(i, 0, 1u);
      sub_80049690(i, 0, 1u);
    }
  }
}

sint32 sub_80081790(sint32 a1, sint8 a2)
{
    FUNCTION_MARKER(0x80081790u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int result; 
  int v4; 
  int v5; 
  int *v6; 
  int *v7; 
  int v8; 
  if ( a2
    || (result = *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 35)) & 1,
        (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (76 * a1 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 35)) & 1) == 0) )
  {
    v4 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1028));
    v5 = 0;
    if ( v4 > 0 )
    {
      v6 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012FD70u)));
      do
      {
        result = *(__int16 *)v6;
        ++v5;
        if ( result == a1 )
        {
          *((_BYTE *)v6 + 2) = a2;
          return result;
        }
        ++v6;
      }
      while ( v5 < *SF_DRAFT_PTR(sint32, (SF_DRAFT_GP + 1028)) );
      v4 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1028));
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1028)) = v4 + 1;
    v7 = &SF_DRAFT_PTR(uint32, 0x8012FD70u)[v4];
    *((_BYTE *)v7 + 2) = a2;
    v8 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 1028));
    *(_WORD *)v7 = a1;
    result = 125;
    if ( v8 == 125 )
      { sub_800DDC34(1, 0, sf_draft_guest_address(SF_DRAFT_PTR(char, 0x80012350u)), 919); /* TODO A returning fatal handler leaves the native return undefined */ fprintf(stderr, "Unresolved return after fatal game assertion\n"); abort(); }
  }
  return result;
}

sint32 sub_80045B10(sint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80045B10u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v3; 
  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  v3 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 856));
  v4 = v3 + 1;
  v5 = -1;
  if ( v3 + 1 >= 30 )
    v4 = 0;
  if ( v4 == v3 )
    goto LABEL_22;
  v6 = &SF_DRAFT_PTR(uint32, 0x8012B828u)[v4];
  do
  {
    if ( *v6 == -1 )
      break;
    if ( (*v6 & 0x80000000) == 0 && v5 < 0 )
      v5 = v4;
    ++v4;
    ++v6;
    if ( v4 >= 30 )
    {
      v6 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012B828u)));
      v4 = 0;
    }
  }
  while ( v4 != *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 856)) );
  v7 = v4;
  if ( v4 == *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 856)) )
  {
LABEL_22:
    if ( *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x80127CE8u)[v4] + 12)) )
    {
      ++v4;
      if ( v5 >= 0 )
        v4 = v5;
    }
    v7 = v4;
  }
  SF_DRAFT_PTR(uint32, 0x8012B828u)[v7] = a1;
  *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 856)) = v4;
  if ( a2_view )
    *a2_view = v4;
  return SF_DRAFT_PTR(uint32, 0x80127CE8u)[v7];
}

uint32 sub_80082FD8(sint32 a1)
{
    FUNCTION_MARKER(0x80082FD8u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  unsigned int result; 
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  int v7[3]; 
  sub_800CCA38(a1, sf_draft_guest_address(&v6), sf_draft_guest_address(v7));
  result = v6;
  v2 = 0;
  if ( v6 )
  {
    v3 = 0;
    do
    {
      v4 = v7[0] + v3;
      v5 = *SF_DRAFT_PTR(uint8, (v7[0] + v3));
      if ( v5 == 16 && *SF_DRAFT_PTR(int, (v4 + 68)) < 0 )
        sub_8005FCC8();
      if ( v5 == 18 )
        *SF_DRAFT_PTR(_DWORD, (v4 + 68)) += v4 + 68;
      result = ++v2 < v6;
      v3 += 72;
    }
    while ( v2 < v6 );
  }
  return result;
}

