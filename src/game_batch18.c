#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_80056D40();
extern uint32 sub_80084CC0();
extern uint32 sub_80084D70();
extern uint32 sub_800CFC9C();
extern uint32 sub_800CFD84();
extern uint32 sub_800D0E94();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x800D0F08u 0x800d0f08
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D0F08(sint32 a1, sint32 a2, sint8 a3)
{
  FUNCTION_MARKER(0x800D0F08u, "SCUS_942.40");
  int v4; 
  _BYTE *v5; 
  int *v6; 
  int result; 
  int v8; 
  void (*v9)(int, int, _DWORD); 
  int v10; 
  uint8 *v11; 
  int v12; 
  int v13; 
  int v14; 
  unsigned int v15; 
  __int16 v16; 
  __int16 v17; 
  uint8 *v18; 
  int v19; 
  int v20; 
  __int16 *v21; 
  uint8 *v22; 
  int v23; 
  __int16 *v24; 
  int v25; 
  _DWORD *v26; 
  int v27; 
  __int16 v28; 
  int v29; 
  __int16 v30; 
  int v31; 
  _DWORD *v32; 
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
  uint8 v46; 
  __int16 v47; 
  __int16 v48; 
  int v49; 
  _DWORD *v50; 
  _DWORD *v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  bool v58; 
  uint32 rotation_matrix[8];
int v67; 
  char v68; 
  int v69; 
  int v70; 
  bool v71; 
  int v72; 
  uint16 v73; 
  uint16 v74; 
  int *v75; 

  v67 = a1;
  v74 = 0x7FFF;
  v4 = *SF_DRAFT_PTR(_DWORD, (a2 + 8));
  v5 = SF_DRAFT_PTR(_BYTE, r_u32((a2 + 16)));
  v68 = a3;
  v71 = (v4 & 0x20000000) != 0;
  LOBYTE(v4) = *v5;
  v69 = a1;
  v6 = SF_DRAFT_PTR(int, r_u32((a1 + 24)));
  result = v4 & 0xF0;
  v70 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 16)) + 32));
  if ( result != 240 )
    return result;
  v8 = (uint8)v5[1];
  v72 = v8;
  *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = v8;
  if ( v71 )
  {
    v12 = *SF_DRAFT_PTR(uint8, (a2 + 8));
    if ( v72 == 252 )
    {
      v5 = SF_DRAFT_PTR(_BYTE, r_u32((a2 + 12)));
      *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = sf_draft_guest_address(v5);
      v72 = (uint8)v5[1];
    }
    v13 = *SF_DRAFT_PTR(_DWORD, (a2 + 40));
    if ( v13 == 0x8000 )
    {
      v74 = 11053;
    }
    else if ( v13 == 0x4000 )
    {
      v74 = 21714;
    }
    v14 = v12 - 1;
    if ( v14 )
      v15 = *SF_DRAFT_PTR(_DWORD, (a2 + 8)) & 0xFFFFFF00 | v14;
    else
      v15 = *SF_DRAFT_PTR(_DWORD, (a2 + 8)) & 0xDFFFFF00;
    *SF_DRAFT_PTR(_DWORD, (a2 + 8)) = v15;
  }
  else
  {
    if ( v8 == 252 && (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) & 0x10000000) != 0 )
    {
      v5 = SF_DRAFT_PTR(_BYTE, r_u32((a2 + 12)));
      *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = sf_draft_guest_address(v5);
      v72 = (uint8)v5[1];
      *SF_DRAFT_PTR(_DWORD, (a2 + 20)) = v72;
    }
    if ( (*SF_DRAFT_PTR(_DWORD, (a2 + 32)) & 0x4000000) != 0 && (uint8)*SF_DRAFT_PTR(_DWORD, (a2 + 32)) == v72 )
    {
      v9 = *(void (**)(int, int, _DWORD))(a2 + 28);
      if ( v9 )
      {
        v10 = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        v9(v67, v72 | 0x4000000, *SF_DRAFT_PTR(_DWORD, (a2 + 36)));
        result = *SF_DRAFT_PTR(_DWORD, (a2 + 12));
        v11 = v5 + 2;
        if ( result != v10 )
          return result;
        goto LABEL_22;
      }
    }
  }
  v11 = v5 + 2;
LABEL_22:
  v16 = *v11;
  v17 = v11[1];
  v18 = v11 + 2;
  v19 = 0;
  v20 = *SF_DRAFT_PTR(_DWORD, (v70 + 4));
  v73 = v17 | (v16 << 8);
  if ( v20 > 0 )
  {
    v21 = SF_DRAFT_PTR(__int16, a2);
    v75 = v6;
    v22 = v18 + 2;
    do
    {
      v23 = *v18;
      v24 = SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v69 + 36)) + 8 * v19));
      v25 = *v75;
      if ( v71 )
      {
        v26 = SF_DRAFT_PTR(_DWORD, r_u32((v25 + 32)));
        v27 = v74 >> 1;
        if ( (v74 & 1) != 0 )
        {
          v28 = sub_800D0E94(*v24, v21[26]);
          v29 = v24[1];
          *v24 = v28;
          v30 = sub_800D0E94(v29, v21[27]);
          v31 = v24[2];
          v24[1] = v30;
          v24[2] = sub_800D0E94(v31, v21[28]);
          sub_800D1608(sf_draft_guest_address(v24), sf_draft_guest_address(&rotation_matrix[0]));
          rotation_matrix[5] = v26[5];
          rotation_matrix[6] = v26[6];
          rotation_matrix[7] = v26[7];
          v32 = SF_DRAFT_PTR(_DWORD, r_u32((v25 + 32)));
          v33 = rotation_matrix[1];
          v34 = rotation_matrix[2];
          v35 = rotation_matrix[3];
          *v32 = rotation_matrix[0];
          v32[1] = v33;
          v32[2] = v34;
          v32[3] = v35;
          v36 = rotation_matrix[5];
          v37 = rotation_matrix[6];
          v38 = rotation_matrix[7];
          v32[4] = (uint32)((uint16 *)rotation_matrix)[8] | ((sf_draft_unbound_stack_field(0x800D0F08u, 0x22u), 0u) << 16);
          v32[5] = v36;
          v32[6] = v37;
          v32[7] = v38;
          *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v25 + 32)) + 44)) = 1;
          v27 = v74 >> 1;
        }
        v74 = v27;
      }
      if ( (v73 & 1) != 0 )
      {
        if ( v71 )
        {
          if ( (v23 & 0x80) != 0 )
          {
            if ( (v23 & 0x40) != 0 )
            {
              v22 += 4;
              v18 += 4;
            }
            else if ( (v23 & 0x20) != 0 )
            {
              v22 += 6;
              v18 += 6;
            }
            else
            {
              v22 += 3;
              v18 += 3;
            }
          }
          else
          {
            v22 += 2;
            v18 += 2;
          }
          if ( v72 == 1 || !v19 )
          {
            v22 += 3;
            v18 += 3;
          }
        }
        else
        {
          if ( (v23 & 0x80) != 0 )
          {
            if ( (v23 & 0x40) != 0 )
            {
              v41 = *(v22 - 1);
              v42 = *v22;
              v43 = v22[1];
              v22 += 4;
              v18 += 4;
              *v24 += ((v23 << 26) | ((v41 & 0xF0) << 18)) >> 22;
              v24[1] += ((v41 << 28) | ((v42 & 0xFC) << 20)) >> 22;
              v40 = (uint16)v24[2] + ((v42 << 30 >> 22) | v43);
            }
            else if ( (v23 & 0x20) != 0 )
            {
              if ( (v23 & 0x10) != 0 )
                v46 = v23 | 0xE0;
              else
                v46 = v23 & 0x1F;
              v18 += 6;
              *v24 = (v46 << 8) + *(v22 - 1);
              v24[1] = (*v22 << 8) + v22[1];
              v47 = v22[2];
              v48 = v22[3];
              v22 += 6;
              LOWORD(v40) = (v47 << 8) + v48;
            }
            else
            {
              v44 = *(v22 - 1);
              v45 = *v22;
              v22 += 3;
              v18 += 3;
              *v24 += ((v23 << 27) | ((v44 & 0xC0) << 19)) >> 25;
              v24[1] += ((v44 << 26) | ((v45 & 0x80) << 18)) >> 25;
              v40 = (uint16)v24[2] + (v45 << 25 >> 25);
            }
          }
          else
          {
            v39 = *(v22 - 1);
            v22 += 2;
            v18 += 2;
            *v24 += (__int16)((_WORD)v23 << 9) >> 11;
            v24[1] += ((v23 << 30) | ((v39 & 0xE0) << 22)) >> 27;
            v40 = (uint16)v24[2] + (v39 << 27 >> 27);
          }
          v24[2] = v40;
          if ( v72 == 1 )
          {
            rotation_matrix[5] = (char)*v18;
            v18 += 3;
            rotation_matrix[6] = -(char)*(v22 - 1);
            v49 = (char)*v22;
            v22 += 3;
          }
          else
          {
            v50 = SF_DRAFT_PTR(_DWORD, r_u32((v25 + 32)));
            if ( !v19 )
            {
              v22 += 3;
              v18 += 3;
            }
            rotation_matrix[5] = v50[5];
            rotation_matrix[6] = v50[6];
            v49 = v50[7];
          }
          rotation_matrix[7] = v49;
          if ( v68 )
          {
            sub_800D1608(sf_draft_guest_address(v24), sf_draft_guest_address(&rotation_matrix[0]));
            v51 = SF_DRAFT_PTR(_DWORD, r_u32((v25 + 32)));
            v52 = rotation_matrix[1];
            v53 = rotation_matrix[2];
            v54 = rotation_matrix[3];
            *v51 = rotation_matrix[0];
            v51[1] = v52;
            v51[2] = v53;
            v51[3] = v54;
            v55 = rotation_matrix[5];
            v56 = rotation_matrix[6];
            v57 = rotation_matrix[7];
            v51[4] = rotation_matrix[4];
            v51[5] = v55;
            v51[6] = v56;
            v51[7] = v57;
            *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v25 + 32)) + 44)) = 1;
          }
        }
      }
      v21 += 4;
      ++v19;
      ++v75;
      v58 = v19 < *SF_DRAFT_PTR(sint32, (v70 + 4));
      v73 >>= 1;
    }
    while ( v58 );
  }
  *SF_DRAFT_PTR(_DWORD, (a2 + 16)) = sf_draft_guest_address(v18);
  result = 252;
  if ( !v71 && v18[1] == 252 )
  {
    if ( (*SF_DRAFT_PTR(_DWORD, (a2 + 8)) & 0x10000000) == 0 )
      return sub_800CB994(v67, *SF_DRAFT_PTR(__int16, (a2 + 4)));
    v58 = (*SF_DRAFT_PTR(_DWORD, (a2 + 44)))-- == 1;
    if ( v58 )
    {
      return sub_800CB994(v67, *SF_DRAFT_PTR(__int16, (a2 + 4)));
    }
    else
    {
      result = *SF_DRAFT_PTR(_DWORD, (a2 + 32)) & 0x10000000;
      if ( result )
      {
        result = *SF_DRAFT_PTR(_DWORD, (a2 + 28));
        if ( result )
          return sf_draft_call((uint32)(result), 3u, (const uint32[]){v67, 0x10000000, *SF_DRAFT_PTR(_DWORD, (a2 + 36))});
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800734E4u 0x800734e4
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800734E4(sint32 a1, sint32 a2, uint32 a3, sint32 a4, sint32 a9, uint32 a10)
{
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  bool * native_a10 = SF_DRAFT_PTR(bool, a10);
  sint32 position0[3];
  sint32 position1[3];
  sint32 offset0[3];
  sint32 offset1[3];
  FUNCTION_MARKER(0x800734E4u, "SCUS_942.40");
  BOOL v11; 
  int result; 
  int v15; 
  _DWORD *v16; 
  _DWORD *v17; 
  int v18; 
  int v19; 
  int v20; 
  bool v21; 
  int v22; 
  int v23; 
  int *v24; 
  _DWORD *v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v45; 
  int v46; 
  int v47; 
  int v48[4]; 
  _DWORD v49[4]; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54[4]; 
  int v55; 
  int v56; 
  int v57; 
  int v58[4]; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 

  v61 = a2;
  v11 = *native_a10;
  *native_a10 = 0;
  v62 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 416));
  if ( !a9 )
    return 1;
  sub_80072274(a1,  v61, sf_draft_guest_address(&position0[0]), sf_draft_guest_address(&position1[0]));
  sub_8007265C(a1,  sf_draft_guest_address(native_a3), sf_draft_guest_address(&offset0[0]), sf_draft_guest_address(&offset1[0]));
  if ( *SF_DRAFT_PTR(_DWORD, (v62 + 44)) )
  {
    position0[1] += offset0[1];
    position1[1] += offset1[1];
  }
  else
  {
    position0[0] += offset0[0];
    position0[1] += offset0[1];
    position0[2] += offset0[2];
    position1[0] += offset1[0];
    position1[1] += offset1[1];
    position1[2] += offset1[2];
  }
  sub_8007159C(sf_draft_guest_address(&position1[0]), sf_draft_guest_address(v48), sf_draft_guest_address(v49), sf_draft_guest_address(&v53), a4, (int)&a9);
  v45 = position1[0] - v48[0];
  v46 = position1[1] - v48[1];
  v47 = position1[2] - v48[2];
  if ( !a9 )
    return 1;
  if ( *SF_DRAFT_PTR(_DWORD, (v62 + 44)) && a9 != 3 )
  {
    offset0[1] = 0;
    offset1[1] = 0;
    sub_80072F84(sf_draft_guest_address(&offset0[0]), a4, a9, sf_draft_guest_address(v49), (int)&offset0[0], 0);
    sub_80072F84(sf_draft_guest_address(&offset1[0]), a4, a9, sf_draft_guest_address(v49), (int)&offset1[0], 0);
    position0[0] += offset0[0];
    position0[1] += offset0[1];
    position0[2] += offset0[2];
    position1[0] += offset1[0];
    position1[1] += offset1[1];
    position1[2] += offset1[2];
  }
  v50 = 0;
  v51 = 0;
  v52 = 0;
  sub_80072F84(sf_draft_guest_address(&position0[0]), a4, a9, sf_draft_guest_address(v49), sf_draft_guest_address(v54), (int)&v59);
  v15 = 0;
  if ( a9 > 0 )
  {
    v16 = SF_DRAFT_PTR(_DWORD, a4);
    do
    {
      v17 = (_DWORD *)*v16;
      v18 = v54[1];
      v19 = v54[2];
      v20 = v54[3];
      v17[22] = v54[0];
      v17[23] = v18;
      v17[24] = v19;
      v17[25] = v20;
      ++v15;
      ++v16;
    }
    while ( v15 < a9 );
  }
  if ( v11 )
    v21 = v59 >= 6529;
  else
    v21 = v59 >= 13089;
  v22 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v23 = 0;
  if ( a9 > 0 )
  {
    v24 = SF_DRAFT_PTR(int, a4);
    do
    {
      v25 = (_DWORD *)*v24;
      v26 = *SF_DRAFT_PTR(_DWORD, (*v24 + 72));
      if ( v26 < (sint32)native_a3[9] || (sint32)native_a3[10] < v26 )
      {
        if ( v21 )
        {
          v25 = (_DWORD *)*v24;
          v27 = *SF_DRAFT_PTR(_DWORD, (*v24 + 128));
          if ( v27 != 4096 )
          {
            v28 = native_a3[12];
            if ( v28 != 4096 )
            {
LABEL_38:
              *SF_DRAFT_PTR(_DWORD, (*v24 + 132)) = sub_800C6D4C(v27, v28);
              goto LABEL_39;
            }
            goto LABEL_37;
          }
          v25[33] = native_a3[12];
        }
        else
        {
          v25 = (_DWORD *)*v24;
          v27 = *SF_DRAFT_PTR(_DWORD, (*v24 + 124));
          if ( v27 != 4096 )
          {
            v28 = native_a3[11];
            if ( v28 != 4096 )
              goto LABEL_38;
            goto LABEL_37;
          }
          v25[33] = native_a3[11];
        }
      }
      else if ( v21 )
      {
        v27 = v25[32];
        if ( v27 != 4096 )
        {
          v28 = native_a3[14];
          if ( v28 != 4096 )
            goto LABEL_38;
          goto LABEL_37;
        }
        v25[33] = native_a3[14];
      }
      else
      {
        v27 = v25[31];
        if ( v27 != 4096 )
        {
          v28 = native_a3[13];
          if ( v28 != 4096 )
            goto LABEL_38;
LABEL_37:
          v25[33] = v27;
          goto LABEL_39;
        }
        v25[33] = native_a3[13];
      }
LABEL_39:
      sub_80073190(*v24, sf_draft_guest_address(&v60));
      if ( v21 )
      {
        sub_800731E4(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, (*v24 + 88))),  v60, sf_draft_guest_address(v58));
        v55 += v58[0];
        v56 += v58[1];
        v57 += v58[2];
      }
      else
      {
        v23 += v60;
      }
      ++v22;
      ++v24;
    }
    while ( v22 < a9 );
  }
  if ( v21 )
  {
    v50 = v55 - v45;
    v51 = v56 - v46;
    v52 = v57 - v47;
  }
  else
  {
    if ( v53 >= v23 )
    {
      v21 = 1;
      v50 = -v45;
      v29 = v46;
      v30 = -v47;
    }
    else
    {
      v50 = -position1[0];
      v29 = position1[1];
      v30 = -position1[2];
    }
    v52 = v30;
    v51 = -v29;
  }
  v31 = a1;
  if ( !*SF_DRAFT_PTR(_DWORD, (v62 + 16)) )
  {
    sub_800732D8(sf_draft_guest_address(native_a3),  a4,  a9, sf_draft_guest_address(&v50));
    v31 = a1;
  }
  sub_8002254C(v31, sf_draft_guest_address(&v50));
  if ( v61 )
  {
    v50 = -v50;
    v52 = -v52;
    v51 = -v51;
    sub_8002254C(v61, sf_draft_guest_address(&v50));
  }
  result = 1;
  *native_a10 = v21;
  return result;
}

// FUNCTION_MARKER 0x80044008u 0x80044008
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80044008(unsigned __int8 a1)
{
  FUNCTION_MARKER(0x80044008u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 
  BOOL result; 
  bool v5; 
  int v6 = SF_DRAFT_GP;
  int v7; 
  int v8 = SF_DRAFT_GP;
  int v9 = SF_DRAFT_GP;
  uint8 v10; 
  int v11 = SF_DRAFT_GP;
  int v12 = SF_DRAFT_GP;
  int v13 = SF_DRAFT_GP;
  int v14 = SF_DRAFT_GP;
  int v15 = SF_DRAFT_GP;
  int v16 = SF_DRAFT_GP;
  int *v17; 
  int v18; 
  int *v19; 
  int v20 = SF_DRAFT_GP;
  int *v21; 
  int v22; 
  int *v23; 
  int v24; 
  int v25 = SF_DRAFT_GP;
  int *v26; 
  int v27; 
  int v28; 
  int v29; 
  uint16 v30; 
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
  uint16 v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 

  if ( (*SF_DRAFT_PTR(uint32, 0x8010C378u)) >= 0 )
  {
    v3 = a1;
  }
  else
  {
    v3 = a1;
    if ( SF_DRAFT_PTR(uint32, 0x8011C138u)[0] )
      return *SF_DRAFT_PTR(_DWORD, (v1 + 724)) == 5;
  }
  v5 = (uint8)sub_80040B50(v3, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8010C378u))) == 0;
  result = 0;
  if ( !v5 )
  {
    v7 = (*SF_DRAFT_PTR(uint32, 0x8010C378u));
    if ( v3 )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x8010C378u)) >= 9 && *SF_DRAFT_PTR(uint8, (v6 + 686)) == 255 )
      {
        v10 = sub_80084998(-132, 36, 100, 100);
        *SF_DRAFT_PTR(_BYTE, (v11 + 686)) = v10;
        sub_80084D70(v10, 1);
        sub_80084DD0(*SF_DRAFT_PTR(uint8, (v12 + 686)), 127, 82, 39);
        sub_80084CC0(*SF_DRAFT_PTR(uint8, (v13 + 686)), 1);
        sub_8008582C(*SF_DRAFT_PTR(uint8, (v14 + 686)), SF_DRAFT_PTR(uint32, 0x8010DEB0u)[0],  45,  0);
        sub_8008582C(*SF_DRAFT_PTR(uint8, (v15 + 686)), SF_DRAFT_PTR(uint32, 0x8010DEB4u)[0],  45,  0);
        sub_8008582C(*SF_DRAFT_PTR(uint8, (v16 + 686)), (*SF_DRAFT_PTR(uint32, 0x8010DEB8u)), 30, 0);
      }
    }
    else if ( *SF_DRAFT_PTR(uint8, (v6 + 686)) != 255 )
    {
      sub_8006BC98(2, 36, 0, 0);
      sub_80084C30(*SF_DRAFT_PTR(uint8, (v8 + 686)));
      *SF_DRAFT_PTR(_BYTE, (v9 + 686)) = -1;
    }
    if ( v7 || !a1 )
    {
      v22 = 4 * v7;
      if ( v7 < 0 )
      {
        v22 = 4 * v7;
        if ( !a1 )
        {
          v23 = SF_DRAFT_PTR(int, 0x8011C138u);
          v24 = 0;
          sub_800CFD84((*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))));
          sub_8003CA74(5255208, 15171179, 13684944);
          do
          {
            v26 = v23;
            v23 += 6;
            ++v24;
            sub_800C7BF8(*SF_DRAFT_PTR(_DWORD, (v25 + 3376)), sf_draft_guest_address(v26));
            v22 = 4 * v7;
          }
          while ( v24 < 28 );
        }
      }
    }
    else
    {
      v17 = SF_DRAFT_PTR(int, 0x8011C138u);
      v18 = 0;
      sub_800CFC9C((*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))), 1);
      sub_8003CA74(1986688, 5091071, 2150608);
      sub_8006BC98(2, 35, 0, 0);
      v19 = SF_DRAFT_PTR(int, 0x8011C138u);
      do
      {
        sub_800C8148(sf_draft_guest_address(v19),  5091071,  0,  0);
        v21 = v17;
        v17 += 6;
        ++v18;
        sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (v20 + 3376)), sf_draft_guest_address(v21));
        v19 = v17;
      }
      while ( v18 < 28 );
      (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = 7864320;
      (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = -7864320;
      (*SF_DRAFT_PTR(uint32, 0x8011C1D8u)) = 192;
      (*SF_DRAFT_PTR(uint32, 0x8011C1F0u)) = 65344;
      v22 = 0;
    }
    v27 = v22 + v7;
    v28 = 26;
    if ( 120 - 2 * (v22 + v7) >= 26 )
      v28 = 120 - 2 * (v22 + v7);
    (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = v28 << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (v28 << 16) | 0x2A;
    (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = -65536 * v28;
    (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = (-65536 * v28) | 0x2A;
    v29 = (v28 + 8) << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = (-65536 * v28) | 0xFFD6;
    (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = v29 | 0xFFD6;
    (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = v29 | 0xFFD6;
    (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = v29 | 0xFFE0;
    (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = (v28 << 16) | 0xFFD6;
    (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = (v28 << 16) | 0xFFD6;
    v30 = 36;
    if ( 192 - 16 * v7 >= 36 )
      v30 = 192 - 16 * v7;
    v31 = (uint16)-v30;
    (*SF_DRAFT_PTR(uint32, 0x8011C208u)) = v30 | 0xA0000;
    (*SF_DRAFT_PTR(uint32, 0x8011C1DCu)) = v30;
    (*SF_DRAFT_PTR(uint32, 0x8011C1F4u)) = (uint16)v31;
    (*SF_DRAFT_PTR(uint32, 0x8011C20Cu)) = v30 | 0xFFF60000;
    (*SF_DRAFT_PTR(uint32, 0x8011C220u)) = v31 | 0xA0000;
    (*SF_DRAFT_PTR(uint32, 0x8011C224u)) = v31 | 0xFFF60000;
    v32 = 58 * v7 / 12 - 29;
    if ( v32 < 0 )
      v32 = 0;
    v33 = 8 * v27 / 12 - 20;
    if ( v33 < 0 )
      v33 = 0;
    v34 = v33 - 7;
    if ( v32 || v33 )
    {
      v35 = (uint16)-(__int16)v32;
      v36 = -65536 * v34;
      (*SF_DRAFT_PTR(uint32, 0x8011C238u)) = v35 | (-65536 * v34);
      v37 = v34 << 16;
      (*SF_DRAFT_PTR(uint32, 0x8011C250u)) = v35 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C23Cu)) = v35 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C268u)) = (uint16)v32 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C254u)) = (uint16)v32 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C280u)) = (uint16)v32 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C26Cu)) = (uint16)v32 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C298u)) = v35 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C284u)) = v35 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C29Cu)) = v35 | v37;
      (*SF_DRAFT_PTR(uint32, 0x8011C2B0u)) = (uint16)v32 | v36;
      (*SF_DRAFT_PTR(uint32, 0x8011C2C8u)) = (uint16)v32 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C2B4u)) = (uint16)v32 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C2E0u)) = v35 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C2CCu)) = v35 | (-65536 * v33);
      (*SF_DRAFT_PTR(uint32, 0x8011C2F8u)) = v35 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C2E4u)) = v35 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C310u)) = (uint16)v32 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C2FCu)) = (uint16)v32 | (v33 << 16);
      (*SF_DRAFT_PTR(uint32, 0x8011C314u)) = (uint16)v32 | v37;
    }
    else
    {
      (*SF_DRAFT_PTR(uint32, 0x8011C314u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C310u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2FCu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2F8u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2E4u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2E0u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2CCu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2C8u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2B4u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C2B0u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C29Cu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C298u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C284u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C280u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C26Cu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C268u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C254u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C250u)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C23Cu)) = 67109888;
      (*SF_DRAFT_PTR(uint32, 0x8011C238u)) = 67109888;
    }
    v38 = 11 * v7;
    v39 = 32 * v7 / 12;
    v40 = 41 * v7 / 12;
    v41 = v39;
    if ( v39 >= 17 )
      LOWORD(v39) = 16;
    v42 = v38 - v39;
    if ( v41 >= 17 )
      v41 = 16;
    v43 = 16 * v7;
    if ( v38 - v41 < 0 )
      v42 = 0;
    v44 = v43 / 12;
    if ( v43 / 12 >= 9 )
      v44 = 8;
    v45 = v43 / 12;
    v46 = v40 - v44;
    if ( v43 / 12 >= 9 )
      v45 = 8;
    result = 1;
    if ( v40 - v45 < 0 )
      v46 = 0;
    v47 = (uint16)(-11 * v7);
    (*SF_DRAFT_PTR(uint32, 0x8011C340u)) = v47 | (-65536 * v40);
    (*SF_DRAFT_PTR(uint32, 0x8011C328u)) = v47 | (-65536 * v40);
    v48 = (uint16)-v42;
    (*SF_DRAFT_PTR(uint32, 0x8011C32Cu)) = v47 | (-65536 * v46);
    (*SF_DRAFT_PTR(uint32, 0x8011C344u)) = v48 | (-65536 * v40);
    (*SF_DRAFT_PTR(uint32, 0x8011C35Cu)) = (uint16)(11 * v7) | (-65536 * v46);
    (*SF_DRAFT_PTR(uint32, 0x8011C374u)) = v42 | (-65536 * v40);
    (*SF_DRAFT_PTR(uint32, 0x8011C370u)) = (uint16)(11 * v7) | (-65536 * v40);
    (*SF_DRAFT_PTR(uint32, 0x8011C358u)) = (*SF_DRAFT_PTR(uint32, 0x8011C370u));
    v49 = v46 << 16;
    (*SF_DRAFT_PTR(uint32, 0x8011C3A0u)) = (uint16)(11 * v7) | (v40 << 16);
    (*SF_DRAFT_PTR(uint32, 0x8011C388u)) = (*SF_DRAFT_PTR(uint32, 0x8011C3A0u));
    (*SF_DRAFT_PTR(uint32, 0x8011C38Cu)) = (uint16)(11 * v7) | v49;
    (*SF_DRAFT_PTR(uint32, 0x8011C3A4u)) = v42 | (v40 << 16);
    (*SF_DRAFT_PTR(uint32, 0x8011C3D0u)) = v47 | (v40 << 16);
    (*SF_DRAFT_PTR(uint32, 0x8011C3B8u)) = v47 | (v40 << 16);
    (*SF_DRAFT_PTR(uint32, 0x8011C3BCu)) = v47 | v49;
    (*SF_DRAFT_PTR(uint32, 0x8011C3D4u)) = v48 | (v40 << 16);
  }
  return result;
}

// FUNCTION_MARKER 0x80062220u 0x80062220
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80062220(sint32 a1)
{
  FUNCTION_MARKER(0x80062220u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  _DWORD *v3; 
  __int16 *v4; 
  int v5; 
  int result; 
  int v7; 
  int v8; 
  int v9; 
  bool v10; 
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
  int v27; 
  int v28; 
  int v29; 

  v3 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16)));
  v4 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
  v5 = *v4;
  result = *v3 & 0x100;
  if ( !result || !v3 )
    return result;
  v7 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32));
  if ( (v7 & 0x10) == 0 )
  {
    if ( v4[44] <= 0 && (v7 & 0x10000000) == 0 && (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80116A88u)) - *((_DWORD *)v4 + 41)) >= 0x28 )
      goto LABEL_59;
    v8 = 76 * *SF_DRAFT_PTR(__int16, (a1 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
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
    if ( ((*SF_DRAFT_PTR(unsigned int, (SF_DRAFT_PTR(char, (*SF_DRAFT_PTR(uint32, 0x8010C390u))) + v11)) >> 3) & 7) == 2
      && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x2000) == 0 )
    {
LABEL_59:
      result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 1;
      if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x20000000) == 0 )
      {
        if ( !result )
          return sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
        result = *SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
        if ( result < 0 )
          return sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 45);
      }
      return result;
    }
  }
  v13 = *SF_DRAFT_PTR(__int16, (a1 + 2));
  if ( *SF_DRAFT_PTR(__int16, (v1 + 2868)) != v13 )
  {
    result = 2;
    if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 72)) != 2 || v5 < 0 )
      return result;
    if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
    {
      result = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
      if ( !(*SF_DRAFT_PTR(uint32, 0x80115FB8u)) )
        return result;
    }
    else
    {
      v21 = 76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      result = 4 * v5;
      if ( *SF_DRAFT_PTR(_BYTE, (v21 + 36)) )
      {
LABEL_45:
        v23 = *SF_DRAFT_PTR(_DWORD, (4 * (4 * (result + v5) - v5) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        result = *SF_DRAFT_PTR(_DWORD, (v23 + 8));
        if ( result )
        {
          v24 = *SF_DRAFT_PTR(_DWORD, (v23 + 28));
          if ( !v24 || (result = *SF_DRAFT_PTR(_DWORD, (v24 + 32)) & 0x200) != 0 )
          {
            if ( v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(uint32, 0x8012F144u)) )
            {
              v27 = (*SF_DRAFT_PTR(uint32, 0x8012F138u));
              v28 = (*SF_DRAFT_PTR(uint32, 0x8012F13Cu));
              v29 = (*SF_DRAFT_PTR(uint32, 0x8012F140u));
            }
            else
            {
              if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v23 + 34)) - 1 >= 2 )
              {
                v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 12)) + 20));
                v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 12)) + 24));
                v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 12)) + 28));
                v26 = -v28;
              }
              else
              {
                v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 24))) + 20));
                v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 24))) + 24));
                v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v23 + 8)) + 24))) + 28));
                v26 = -v28 - 8;
              }
              v28 = v26;
              v29 = v25;
            }
            if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 20)) + 4)) & 2) == 0 && v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              return sub_8007E848(a1, *SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 16, 1, 1);
            else
              return sub_8007E848(a1, sf_draft_guest_address(&v27),  1,  1);
          }
        }
        return result;
      }
      v22 = *SF_DRAFT_PTR(_DWORD, (v21 + 36)) & 0x3000;
      if ( v22 != 4096 )
      {
        result = 4 * v5;
        if ( v22 != 0x2000 )
          return result;
        goto LABEL_45;
      }
    }
    result = 4 * v5;
    goto LABEL_45;
  }
  result = *SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x400;
  if ( result )
    return result;
  if ( v13 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    result = (*SF_DRAFT_PTR(uint32, 0x80115FB8u));
    if ( !(*SF_DRAFT_PTR(uint32, 0x80115FB8u)) )
      return result;
  }
  else
  {
    v14 = 76 * v13 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    if ( !*SF_DRAFT_PTR(_BYTE, (v14 + 36)) )
    {
      v15 = *SF_DRAFT_PTR(_DWORD, (v14 + 36)) & 0x3000;
      result = 0x2000;
      if ( v15 != 4096 && v15 != 0x2000 )
        return result;
    }
  }
  if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x10) != 0 )
  {
    v16 = sub_80056D40(*SF_DRAFT_PTR(__int16, (v1 + 2868)), 0);
    if ( v16 >= 0 )
    {
      v5 = v16;
      *SF_DRAFT_PTR(_WORD, r_u32((a1 + 20))) = v16;
    }
  }
  result = 4 * v5;
  if ( v5 >= 0 )
  {
    v17 = *SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    result = *SF_DRAFT_PTR(_DWORD, (v17 + 8));
    if ( result )
    {
      v18 = *SF_DRAFT_PTR(_DWORD, (v17 + 28));
      if ( !v18 || (result = *SF_DRAFT_PTR(_DWORD, (v18 + 32)) & 0x200) != 0 )
      {
        if ( v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(uint32, 0x8012F144u)) )
        {
          v27 = (*SF_DRAFT_PTR(uint32, 0x8012F138u));
          v28 = (*SF_DRAFT_PTR(uint32, 0x8012F13Cu));
          v29 = (*SF_DRAFT_PTR(uint32, 0x8012F140u));
        }
        else
        {
          if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v17 + 34)) - 1 >= 2 )
          {
            v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 12)) + 20));
            v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 12)) + 24));
            v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 12)) + 28));
            v20 = -v28;
          }
          else
          {
            v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 24))) + 20));
            v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 24))) + 24));
            v19 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v17 + 8)) + 24))) + 28));
            v20 = -v28 - 8;
          }
          v28 = v20;
          v29 = v19;
        }
        return sub_8007E848(a1, sf_draft_guest_address(&v27),  1,  0);
      }
    }
  }
  return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage1(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6, sint32 *output7, uint32 memory8, sint32 *output9, uint32 memory10, sint32 *output11, uint32 memory12);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage2(uint32 memory1, uint32 memory2, uint32 memory3, uint32 memory4, uint32 memory5, uint32 memory6);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage3(sint32 *output1, uint32 memory2, sint32 *output3, uint32 memory4, sint32 *output5, uint32 memory6, uint32 memory7, uint32 memory8, uint32 memory9, uint32 memory10);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage4(sint32 *output1, uint32 memory2, sint32 *output3, uint32 memory4);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage5(sint32 *output1, sint32 *output2, sint32 *output3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage6(sint32 *output1, sint32 *output2, sint32 *output3, sint32 *output4, sint32 *output5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage7(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage8(sint32 input1, sint32 input2);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage9(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage10(uint32 memory1, uint32 memory2, sint32 *output3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage11(sint32 *output1);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage12(sint32 input1, sint32 input2, sint32 input3, sint32 input4, sint32 input5);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage13(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage14(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage15(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage16(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage17(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage18(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage19(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage20(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage21(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage22(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage23(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage24(uint32 memory1, uint32 memory2, uint32 memory3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_80077278_stage25(uint32 memory1, uint32 memory2, uint32 memory3);
// FUNCTION_MARKER 0x80077278u 0x80077278
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80077278(sint32 A0, sint32 a2, uint32 a3, sint32 a4)
{
  _DWORD * native_a3 = SF_DRAFT_PTR(_DWORD, a3);
  FUNCTION_MARKER(0x80077278u, "SCUS_942.40");
  sint32 temporary_t8; /* TODO Geometry value type */
  sint32 temporary_t7; /* TODO Geometry value type */
  sint32 temporary_t6; /* TODO Geometry value type */
  sint32 temporary_t4; /* TODO Geometry value type */
  sint32 temporary_t3; /* TODO Geometry value type */
  sint32 temporary_t2; /* TODO Geometry value type */
  sint32 temporary_t1; /* TODO Geometry value type */
  sint32 temporary_t0; /* TODO Geometry value type */
  sint32 temporary_s5; /* TODO Geometry value type */
  int v4; 
  int v28; 
  int v29; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v41; 
  int v42; 
  bool i; 
  unsigned int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v52; 
  int v53; 
  int v54; 

  (*SF_DRAFT_PTR(uint32, 0x1F80000C)) = a2;
  (*SF_DRAFT_PTR(uint32, 0x80077270u)) = sf_draft_guest_address(native_a3);
  (*SF_DRAFT_PTR(uint32, 0x80077274u)) = a4;
  temporary_s5 = 0x1F800010u;
  v4 = 0;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage1(((uint32)A0 + 4), ((uint32)A0 + 8), ((uint32)A0 + 0xC), ((uint32)A0 + 0x10), ((uint32)A0 + 0x14), ((uint32)A0 + 0x18), &temporary_t6, ((uint32)temporary_s5 + 0), &temporary_t7, ((uint32)temporary_s5 + 8), &temporary_t8, ((uint32)temporary_s5 + 0x10));
  if ( a2 >= 0 && *SF_DRAFT_PTR(uint16, (A0 + 2)) == 0xFFFF && !temporary_t6 )
    return 0;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage2(((uint32)A0 + 0x1C), ((uint32)A0 + 0x20), ((uint32)A0 + 0x24), ((uint32)A0 + 0x28), ((uint32)A0 + 0x2C), ((uint32)A0 + 0x30));
  (*SF_DRAFT_PTR(uint32, 0x1F800014)) = temporary_t6;
  if ( temporary_t6 )
    v4 = 1;
  (*SF_DRAFT_PTR(uint32, 0x1F80001C)) = temporary_t7;
  if ( temporary_t7 )
    ++v4;
  (*SF_DRAFT_PTR(uint32, 0x1F800024)) = temporary_t8;
  if ( temporary_t8 )
    ++v4;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage3(&temporary_t6, ((uint32)temporary_s5 + 0x18), &temporary_t7, ((uint32)temporary_s5 + 0x20), &temporary_t8, ((uint32)temporary_s5 + 0x28), ((uint32)A0 + 0x34), ((uint32)A0 + 0x38), ((uint32)A0 + 0x3C), ((uint32)A0 + 0x40));
  (*SF_DRAFT_PTR(uint32, 0x1F80002C)) = temporary_t6;
  if ( temporary_t6 )
    ++v4;
  (*SF_DRAFT_PTR(uint32, 0x1F800034)) = temporary_t7;
  if ( temporary_t7 )
    ++v4;
  (*SF_DRAFT_PTR(uint32, 0x1F80003C)) = temporary_t8;
  if ( temporary_t8 )
    ++v4;
  if ( !v4 )
    return 0;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage4(&temporary_t6, ((uint32)temporary_s5 + 0x30), &temporary_t7, ((uint32)temporary_s5 + 0x38));
  (*SF_DRAFT_PTR(uint32, 0x1F800044)) = temporary_t6;
  if ( temporary_t6 )
    ++v4;
  (*SF_DRAFT_PTR(uint32, 0x1F80004C)) = temporary_t7;
  if ( temporary_t7 )
    ++v4;
  if ( a2 >= 0 && v4 < 3 )
    return 0;
  if ( v4 != 8 )
  {
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage5(&temporary_t0, &temporary_t1, &temporary_t2);
    v52 = temporary_t0;
    v53 = temporary_t1;
    v54 = temporary_t2;
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage6(&temporary_t0, &temporary_t1, &temporary_t2, &temporary_t3, &temporary_t4);
    temporary_t6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80116A34u)));
    temporary_t7 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 4));
    temporary_t8 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 8));
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage7(temporary_t6, temporary_t7, temporary_t8);
    temporary_t6 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 12));
    temporary_t7 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 16));
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage8(temporary_t6, temporary_t7);
    temporary_t6 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 20));
    temporary_t7 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 24));
    temporary_t8 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A34u)) + 28));
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage9(temporary_t6, temporary_t7, temporary_t8);
    v28 = 528482320;
    v29 = 8;
    do
    {
      --v29;
      if ( !*SF_DRAFT_PTR(_DWORD, (v28 + 4)) )
      {
        temporary_t7 = v28 - 528482320 + A0;
        /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage10(((uint32)temporary_t7 + 4), ((uint32)temporary_t7 + 8), &temporary_t7);
        if ( temporary_t7 )
        {
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage11(&temporary_t7);
          *SF_DRAFT_PTR(_DWORD, v28) = temporary_t7 ^ 0xFFFF;
        }
      }
      v28 += 8;
    }
    while ( v29 );
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage12(temporary_t0, temporary_t1, temporary_t2, temporary_t3, temporary_t4);
    temporary_t0 = v52;
    temporary_t1 = v53;
    temporary_t2 = v54;
    /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage13(temporary_t0, temporary_t1, temporary_t2);
  }
  v36 = 7;
  v37 = 528482328;
  if ( (*SF_DRAFT_PTR(uint32, 0x1F800010)) )
  {
    while ( 1 )
    {
      v38 = *SF_DRAFT_PTR(__int16, v37);
      v37 += 8;
      i = v38 == 0;
      v39 = v38 ^ (*SF_DRAFT_PTR(uint32, 0x1F800010));
      if ( i )
        break;
      --v36;
      if ( v39 < 0 )
        break;
      if ( v36 <= 0 )
        return 0;
    }
  }
  v41 = 7;
  v42 = 528482328;
  for ( i = HIWORD((*SF_DRAFT_PTR(uint32, 0x1F800010))) == 0; ; i = 0 )
  {
    v44 = *SF_DRAFT_PTR(_DWORD, v42);
    if ( i )
      break;
    v42 += 8;
    i = HIWORD(v44) == 0;
    v45 = v44 ^ (*SF_DRAFT_PTR(uint32, 0x1F800010));
    if ( i )
      break;
    --v41;
    if ( v45 < 0 )
      break;
    if ( v41 <= 0 )
      return 0;
  }
  v46 = 8;
  v47 = 528482320;
  v48 = 0;
  do
  {
    v49 = *SF_DRAFT_PTR(_DWORD, (v47 + 4));
    v47 += 8;
    v50 = v49 - a2;
    if ( v50 <= 0 )
    {
      temporary_t8 = v50 + a2;
      ++v48;
    }
    --v46;
  }
  while ( v46 > 0 );
  native_a3[1] = temporary_t8;
  *native_a3 = v48 >= 3;
  temporary_s5 = 528482320;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 0;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage14(((uint32)temporary_s5 + 0x28), ((uint32)temporary_s5 + 8), ((uint32)temporary_s5 + 0));
  if ( sub_800770F8(a3, (uint32)A0, 5u, 1u, 0u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 1;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage15(((uint32)temporary_s5 + 0x38), ((uint32)temporary_s5 + 0x18), ((uint32)temporary_s5 + 8));
  if ( sub_800770F8(a3, (uint32)A0, 7u, 3u, 1u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 2;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage16(((uint32)temporary_s5 + 0x38), ((uint32)temporary_s5 + 0x28), ((uint32)temporary_s5 + 0x20));
  if ( sub_800770F8(a3, (uint32)A0, 7u, 5u, 4u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 3;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage17(((uint32)temporary_s5 + 0x20), ((uint32)temporary_s5 + 0), ((uint32)temporary_s5 + 0x10));
  if ( sub_800770F8(a3, (uint32)A0, 4u, 0u, 2u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 4;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage18(((uint32)temporary_s5 + 0x30), ((uint32)temporary_s5 + 0x10), ((uint32)temporary_s5 + 0x18));
  if ( sub_800770F8(a3, (uint32)A0, 6u, 2u, 3u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 5;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage19(((uint32)temporary_s5 + 0x18), ((uint32)temporary_s5 + 0x10), ((uint32)temporary_s5 + 0));
  if ( sub_800770F8(a3, (uint32)A0, 3u, 2u, 0u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 6;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage20(((uint32)temporary_s5 + 0), ((uint32)temporary_s5 + 0x20), ((uint32)temporary_s5 + 0x28));
  if ( sub_800770F8(a3, (uint32)A0, 0u, 4u, 5u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 7;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage21(((uint32)temporary_s5 + 8), ((uint32)temporary_s5 + 0x28), ((uint32)temporary_s5 + 0x38));
  if ( sub_800770F8(a3, (uint32)A0, 1u, 5u, 7u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 8;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage22(((uint32)temporary_s5 + 0x20), ((uint32)temporary_s5 + 0x30), ((uint32)temporary_s5 + 0x38));
  if ( sub_800770F8(a3, (uint32)A0, 4u, 6u, 7u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 9;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage23(((uint32)temporary_s5 + 0x10), ((uint32)temporary_s5 + 0x30), ((uint32)temporary_s5 + 0x20));
  if ( sub_800770F8(a3, (uint32)A0, 2u, 6u, 4u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 10;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage24(((uint32)temporary_s5 + 0x18), ((uint32)temporary_s5 + 0x38), ((uint32)temporary_s5 + 0x30));
  if ( sub_800770F8(a3, (uint32)A0, 3u, 7u, 6u) )
    return 1;
  (*SF_DRAFT_PTR(uint32, 0x800770F4u)) = 11;
  /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_80077278_stage25(((uint32)temporary_s5 + 0), ((uint32)temporary_s5 + 8), ((uint32)temporary_s5 + 0x18));
  return sub_800770F8(a3, (uint32)A0, 0u, 1u, 3u) != 0;
}

// FUNCTION_MARKER 0x80095464u 0x80095464
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80095464(uint32 a1, uint32 a2, sint32 a3)
{
  int * native_a1 = SF_DRAFT_PTR(int, a1);
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x80095464u, "SCUS_942.40");
  __int16 *v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  BOOL v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int *v14; 
  char *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int *v22; 
  char *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int *v30; 
  char *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int *v38; 
  char *v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int *v46; 
  char *v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int *v54; 
  char *v55; 
  int v56; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  char v63[72]; 

  v3 = SF_DRAFT_PTR(__int16, native_a2[2]);
  v4 = *v3;
  if ( v4 < 0 )
    v4 = -v4;
  v5 = v3[1];
  v6 = v3[2];
  if ( v5 < 0 )
    v5 = -v5;
  v7 = v6;
  if ( v6 < 0 )
    v7 = -v6;
  if ( v5 < v7 )
  {
    v8 = v5 < v7;
    if ( v4 >= v7 )
    {
      v7 = v4;
      goto LABEL_14;
    }
  }
  else
  {
    v8 = v5 < v7;
    if ( v4 >= v5 )
    {
      v7 = v4;
      goto LABEL_14;
    }
  }
  if ( !v8 )
    v7 = v5;
LABEL_14:
  v60 = *native_a2;
  if ( v7 == v4 )
  {
    if ( *SF_DRAFT_PTR(__int16, native_a2[2]) >= 0 )
    {
      v17 = native_a1[1];
      if ( v17 < 0 )
        v18 = -v17 >> 12;
      else
        v18 = -(v17 >> 12);
      v58 = v18;
      v19 = native_a1[2];
      if ( v19 < 0 )
        v20 = -(-v19 >> 12);
      else
        v20 = v19 >> 12;
      v59 = v20;
      v61 = 0;
      v62 = 0;
      v21 = 1;
      v22 = native_a2 + 1;
      if ( *native_a2 > 1 )
      {
        v23 = v63;
        do
        {
          ++v21;
          *((_DWORD *)v23 + 1) = *SF_DRAFT_PTR(__int16, (native_a2[5] + 2)) - *SF_DRAFT_PTR(__int16, (v22[5] + 2));
          v24 = *SF_DRAFT_PTR(__int16, (v22[5] + 4));
          ++v22;
          *((_DWORD *)v23 + 3) = v24 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 4));
          v23 += 16;
        }
        while ( v21 < *native_a2 );
      }
    }
    else
    {
      v9 = native_a1[1];
      if ( v9 < 0 )
        v10 = -(-v9 >> 12);
      else
        v10 = v9 >> 12;
      v58 = v10;
      v11 = native_a1[2];
      if ( v11 < 0 )
        v12 = -(-v11 >> 12);
      else
        v12 = v11 >> 12;
      v59 = v12;
      v61 = 0;
      v62 = 0;
      v13 = 1;
      v14 = native_a2 + 1;
      if ( *native_a2 > 1 )
      {
        v15 = v63;
        do
        {
          ++v13;
          *((_DWORD *)v15 + 1) = *SF_DRAFT_PTR(__int16, (v14[5] + 2)) - *SF_DRAFT_PTR(__int16, (native_a2[5] + 2));
          v16 = *SF_DRAFT_PTR(__int16, (v14[5] + 4));
          ++v14;
          *((_DWORD *)v15 + 3) = v16 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 4));
          v15 += 16;
        }
        while ( v13 < *native_a2 );
      }
    }
  }
  else if ( v7 == v5 )
  {
    if ( *SF_DRAFT_PTR(__int16, (native_a2[2] + 2)) < 0 )
    {
      v33 = *native_a1;
      if ( *native_a1 < 0 )
        v34 = -v33 >> 12;
      else
        v34 = -(v33 >> 12);
      v58 = v34;
      v35 = native_a1[2];
      if ( v35 < 0 )
        v36 = -(-v35 >> 12);
      else
        v36 = v35 >> 12;
      v59 = v36;
      v61 = 0;
      v62 = 0;
      v37 = 1;
      v38 = native_a2 + 1;
      if ( *native_a2 > 1 )
      {
        v39 = v63;
        do
        {
          ++v37;
          *((_DWORD *)v39 + 1) = *SF_DRAFT_PTR(__int16, native_a2[5]) - *SF_DRAFT_PTR(__int16, v38[5]);
          v40 = *SF_DRAFT_PTR(__int16, (v38[5] + 4));
          ++v38;
          *((_DWORD *)v39 + 3) = v40 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 4));
          v39 += 16;
        }
        while ( v37 < *native_a2 );
      }
    }
    else
    {
      v25 = *native_a1;
      if ( *native_a1 < 0 )
        v26 = -(-v25 >> 12);
      else
        v26 = v25 >> 12;
      v58 = v26;
      v27 = native_a1[2];
      if ( v27 < 0 )
        v28 = -(-v27 >> 12);
      else
        v28 = v27 >> 12;
      v59 = v28;
      v61 = 0;
      v62 = 0;
      v29 = 1;
      v30 = native_a2 + 1;
      if ( *native_a2 > 1 )
      {
        v31 = v63;
        do
        {
          ++v29;
          *((_DWORD *)v31 + 1) = *SF_DRAFT_PTR(__int16, v30[5]) - *SF_DRAFT_PTR(__int16, native_a2[5]);
          v32 = *SF_DRAFT_PTR(__int16, (v30[5] + 4));
          ++v30;
          *((_DWORD *)v31 + 3) = v32 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 4));
          v31 += 16;
        }
        while ( v29 < *native_a2 );
      }
    }
  }
  else if ( *SF_DRAFT_PTR(__int16, (native_a2[2] + 4)) >= 0 )
  {
    v49 = *native_a1;
    if ( *native_a1 < 0 )
      v50 = -v49 >> 12;
    else
      v50 = -(v49 >> 12);
    v58 = v50;
    v51 = native_a1[1];
    if ( v51 < 0 )
      v52 = -(-v51 >> 12);
    else
      v52 = v51 >> 12;
    v59 = v52;
    v61 = 0;
    v62 = 0;
    v53 = 1;
    v54 = native_a2 + 1;
    if ( *native_a2 > 1 )
    {
      v55 = v63;
      do
      {
        ++v53;
        *((_DWORD *)v55 + 1) = *SF_DRAFT_PTR(__int16, native_a2[5]) - *SF_DRAFT_PTR(__int16, v54[5]);
        v56 = *SF_DRAFT_PTR(__int16, (v54[5] + 2));
        ++v54;
        *((_DWORD *)v55 + 3) = v56 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 2));
        v55 += 16;
      }
      while ( v53 < *native_a2 );
    }
  }
  else
  {
    v41 = *native_a1;
    if ( *native_a1 < 0 )
      v42 = -(-v41 >> 12);
    else
      v42 = v41 >> 12;
    v58 = v42;
    v43 = native_a1[1];
    if ( v43 < 0 )
      v44 = -(-v43 >> 12);
    else
      v44 = v43 >> 12;
    v59 = v44;
    v61 = 0;
    v62 = 0;
    v45 = 1;
    v46 = native_a2 + 1;
    if ( *native_a2 > 1 )
    {
      v47 = v63;
      do
      {
        ++v45;
        *((_DWORD *)v47 + 1) = *SF_DRAFT_PTR(__int16, v46[5]) - *SF_DRAFT_PTR(__int16, native_a2[5]);
        v48 = *SF_DRAFT_PTR(__int16, (v46[5] + 2));
        ++v46;
        *((_DWORD *)v47 + 3) = v48 - *SF_DRAFT_PTR(__int16, (native_a2[5] + 2));
        v47 += 16;
      }
      while ( v45 < *native_a2 );
    }
  }
  return (uint8)sub_800952A4(sf_draft_guest_address(&v58), sf_draft_guest_address(&v60),  a3);
}

