#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);


/* TODO Resolve external dependency signatures */
uint32 sub_80017530();
uint32 sub_80017698();
uint32 sub_8001D1F0();
uint32 sub_80020BC0();
uint32 sub_80020F48();
uint32 sub_80022024();
uint32 sub_80023130();
uint32 sub_8002CFAC();
uint32 sub_8002D224();
uint32 sub_8002D2F8();
uint32 sub_80040BA8();
uint32 sub_80040E7C();
uint32 sub_80040F04();
uint32 sub_8006C9D4();
uint32 sub_80088E58();
uint32 sub_8008C5E0();
uint32 sub_8008C6A4();
uint32 sub_80092808();
uint32 sub_800CFC9C();
uint32 sub_800CFD84();
uint32 sub_800F5914();
uint32 sub_800F594C();
uint32 sub_800F79B4();
uint32 sub_800F7A94();
uint32 sub_800F7AFC();
uint32 sub_800F8794();
uint32 sub_800F903C();
uint32 sub_800FED54();

sint32 sub_800426A0(uint32 a1)
{
    FUNCTION_MARKER(0x800426A0u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int *v2; 

  int v4; 
  int *v5; 
  int v6; 
  int *v7; 
  int v8; 
  int *v9; 

  int v11; 

  int v13; 
  int *v14; 
  int *v15; 
  int v16; 
  int *v17; 
  int *v18; 
  int v19; 
  int *v20; 
  int *v21; 
  int v22; 
  int *v23; 
  int *v24; 
  int v25; 

  int *v27; 
  int v28; 
  int *v29; 
  int v30; 
  int v32; 

  __int16 v34; 
  __int16 v35; 
  int *v36; 
  __int16 v37; 
  unsigned int v38; 
  int v39; 
  int v40; 
  int *v41; 
  int *v42; 
  int v43; 
  int *v44; 

  int v46; 
  int *v47; 
  int *v48; 
  int *v49; 
  int v50; 

  int *v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  uint16 v62; 
  uint16 v63; 
  uint16 v64; 
  uint16 v65; 
  uint16 v66; 
  int v67; 
  int v68; 
  int *v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int *v80; 
  int v81; 
  int v82; 
  int v83; 
  __int64 v84; // kr00_8
  int v85; 
  __int16 v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int *v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 

  v2 = SF_DRAFT_PTR(int, sub_80039F60(46));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010C370u)) >= 0 )
  {
LABEL_12:
    if ( !(uint8)sub_80040B50(a1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C370u)))) )
      return 0;
    v11 = (*SF_DRAFT_PTR(uint32, 0x8010C370u));
    if ( (*SF_DRAFT_PTR(uint32, 0x8010C370u)) >= 0 )
    {
      if ( !a1 )
      {
LABEL_39:
        v53 = 0;
        v54 = (50 * v11) >> 31;
        v55 = 0;
        v56 = (v11 << 12) / 12;
        v57 = (-50 * v11) >> 31;
        v58 = (int)((uint64)(35791394150LL * v11) >> 32) >> 1;
        v59 = (int)((0xFFFFFFF7AAAAAA9ALL * v11) >> 32) >> 1;
        *((_WORD *)v2 + 36) = v56;
        *((_WORD *)v2 + 14) = v56;
        *((_WORD *)v2 + 103) = v56;
        *((_WORD *)v2 + 81) = v56;
        *((_WORD *)v2 + 59) = v56;
        do
        {
          v60 = v58 - v54;
          if ( !v53 )
            v60 = v59 - v57;
          v61 = v60 + 2;
          if ( !v53 )
            v61 = v60 - 2;
          v62 = -140;
          if ( v53 )
            v62 = 140;
          v63 = -137;
          if ( v53 )
            v63 = 137;
          v64 = -155;
          if ( v53 )
            v64 = 155;
          v65 = 1;
          if ( v53 )
            v65 = -1;
          v66 = -2;
          if ( v53 )
          {
            v66 = 2;
            v67 = 31 * v11 / 12;
          }
          else
          {
            v67 = -31 * v11 / 12;
          }
          v68 = v58 - v54;
          if ( !v53 )
            v68 = v59 - v57;
          v69 = &SF_DRAFT_PTR(uint32, 0x8011C498u)[v55];
          v70 = v60 << 16;
          if ( v53 )
            v71 = v70 | 0xFFFF;
          else
            v71 = v70 | 1;
          v69[4] = v71;
          v72 = v62 | (v60 << 16);
          v73 = v61 << 16;
          v69[16] = v72;
          v69[5] = v72;
          if ( v53 )
            v74 = v73 | 0xFFFF;
          else
            v74 = v73 | 1;
          v69[6] = v74;
          v55 += 36;
          ++v53;
          v75 = v63 | (-65536 * v60);
          v69[7] = v62 | (v61 << 16);
          v69[15] = v63 | (v60 << 16);
          v69[14] = v62 | (-65536 * v60);
          v69[22] = v63 | (-65536 * v61);
          v69[25] = v64 | (-65536 * v60);
          v69[23] = v64 | (-65536 * v61);
          v69[31] = v66 | (v67 << 16);
          v69[32] = v65 | (v67 << 16);
          v69[34] = v65 | (v68 << 16);
          v69[13] = v75;
          v69[24] = v75;
          v69[33] = v66 | (v68 << 16);
        }
        while ( v53 < 2 );
        v76 = 0;
        v77 = 10 * v11;
        v78 = -4;
        v79 = 0;
        do
        {
          v80 = &SF_DRAFT_PTR(uint32, 0x8011C138u)[v79];
          v81 = (v78 * v77 / 12) << 16;
          v82 = (uint16)(139 - (__int16)(5 * v11) / 12) | v81;
          if ( (v76 & 1) == 0 )
            v82 = (uint16)(139 - 8 * v11 / 12) | v81;
          v80[4] = v82;
          v83 = v78 * v77;
          v84 = 715827883LL * v78 * v77;
          ++v78;
          v79 += 6;
          ++v76;
          v80[5] = (uint16)((__int16)v11 / 3 + 139) | (((SHIDWORD(v84) >> 1) - (v83 >> 31)) << 16);
        }
        while ( v76 < 9 );
        v85 = 0;
        v86 = -140;
        v87 = 0;
        do
        {
          v88 = (uint16)(v86 / 10);
          SF_DRAFT_PTR(uint32, 0x8011C210u)[v87 + 4] = v88 | ((-55 * v11 / 12) << 16);
          if ( (v85 & 1) != 0 )
            v89 = (uint16)(v86 / 10) | ((-48 * v11 / 12) << 16);
          else
            v89 = v88 | ((-46 * v11 / 12) << 16);
          SF_DRAFT_PTR(uint32, 0x8011C210u)[v87 + 5] = v89;
          v86 -= 140;
          ++v85;
          v87 += 6;
        }
        while ( v85 < 9 );
        v90 = 52;
        v91 = 0;
        v92 = SF_DRAFT_PTR(int, 0x8011C5B8u);
        do
        {
          v93 = 2 * v91 + 4;
          v90 = v90 - 2 - v93;
          ++v91;
          v92[4] = (v90 << 16) | 0xFF6B;
          v92[5] = (v90 << 16) | 0xFF70;
          v94 = (v90 + v93 * v11 / 12) << 16;
          v92[6] = v94 | 0xFF6B;
          v92[7] = v94 | 0xFF70;
          v92 += 9;
        }
        while ( v91 < 8 );
        v95 = (uint16)(140 - v11);
        (*SF_DRAFT_PTR(uint32, 0x8011C850u)) = (uint16)(140 - v11 / 4);
        (*SF_DRAFT_PTR(uint32, 0x8011C854u)) = v95 | 0x30000;
        (*SF_DRAFT_PTR(uint32, 0x8011C858u)) = v95 | 0xFFFD0000;
        (*SF_DRAFT_PTR(uint32, 0x8011C86Cu)) = ((-50 * v11 / 12) << 16) | 0xFFBA;
        v96 = (-43 * v11 / 12) << 16;
        (*SF_DRAFT_PTR(uint32, 0x8011C870u)) = v96 | 0xFFBE;
        (*SF_DRAFT_PTR(uint32, 0x8011C874u)) = v96 | 0xFFB6;
        sub_80040F04(v11);
        return 1;
      }
    }
    else if ( !a1 )
    {
      v13 = 0;
      sub_80040E7C();
      v14 = SF_DRAFT_PTR(int, 0x8011C840u);
      do
      {
        v15 = v14;
        v14 += 7;
        ++v13;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v15));
      }
      while ( v13 < 2 );
      v16 = 0;
      v17 = SF_DRAFT_PTR(int, 0x8011C138u);
      do
      {
        v18 = v17;
        v17 += 6;
        ++v16;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v18));
      }
      while ( v16 < 18 );
      v19 = 0;
      v20 = SF_DRAFT_PTR(int, 0x8011C498u);
      do
      {
        v21 = v20;
        v20 += 9;
        ++v19;
        sub_800C7BF8((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v21));
      }
      while ( v19 < 16 );
      v22 = 0;
      v23 = v2;
      do
      {
        v24 = v23;
        v23 += 11;
        ++v22;
        sub_800C7B68((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v24));
      }
      while ( v22 < 5 );
      v25 = 25;
      sub_800CFD84(*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u))));
      sub_8003CA74(5255208, 15171179, 13684944);
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 5;
      do
      {
        v27 = SF_DRAFT_PTR(int, sub_80039F60(v25++));
        *((_BYTE *)v27 + 22) = 0x80;
        *((_BYTE *)v27 + 21) = 0x80;
        *((_BYTE *)v27 + 20) = 0x80;
      }
      while ( v25 < 28 );
      v28 = 0;
      v29 = SF_DRAFT_PTR(int, 0x8011B87Cu);
      v30 = 0;
      do
      {
        SF_DRAFT_PTR(uint32, 0x8011B880u)[v30] = 1088913003;
        v30 += 6;
        ++v28;
        *((_BYTE *)v29 + 7) |= 2u;
        v29 += 6;
      }
      while ( v28 < 4 );
      return 0;
    }
    v32 = 0;
    if ( !(*SF_DRAFT_PTR(uint32, 0x8010C370u)) )
    {
      sub_80040BA8(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)));
      *((_WORD *)v2 + 34) = -1;
      v34 = (*((_WORD *)v2 + 70) >> 1) - 1;
      v35 = *((_WORD *)v2 + 48);
      v36 = v2;
      *((_WORD *)v2 + 12) = *((_WORD *)v2 + 4);
      v37 = v35 + v34;
      v38 = *((uint16 *)v2 + 70);
      *((_WORD *)v2 + 56) = v37;
      *((_WORD *)v2 + 78) = (v38 >> 1) - 1;
      *((_WORD *)v2 + 100) = 1 - (v38 >> 1);
      do
      {
        *((_BYTE *)v36 + 22) = 32;
        *((_BYTE *)v36 + 21) = 32;
        *((_BYTE *)v36 + 20) = 32;
        v39 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
        ++v32;
        *((_WORD *)v36 + 3) = 0;
        *((_WORD *)v36 + 2) = 0;
        v36[10] = sub_800DE5E0(v39 + 144, sf_draft_guest_address(v36));
        v36 += 11;
      }
      while ( v32 < 5 );
      v40 = 0;
      v41 = SF_DRAFT_PTR(int, 0x8011C498u);
      v42 = &(*SF_DRAFT_PTR(uint32, 0x8011C4A0u));
      v43 = 0;
      v44 = SF_DRAFT_PTR(int, 0x8011C498u);
      do
      {
        v41 += 9;
        SF_DRAFT_PTR(uint32, 0x8011C4A4u)[v43] = 672161808;
        v43 += 9;
        ++v40;
        *((_BYTE *)v42 + 7) |= 2u;
        v42 += 9;
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v44));
        v44 = v41;
      }
      while ( v40 < 16 );
      sub_80040FDC(((*SF_DRAFT_PTR(uint32, 0x8011C138u))), 18, 1073168, 1);
      v46 = 0;
      v47 = SF_DRAFT_PTR(int, 0x8011C840u);
      v48 = SF_DRAFT_PTR(int, 0x8011C848u);
      v49 = SF_DRAFT_PTR(int, 0x8011C840u);
      do
      {
        v47 += 7;
        ++v46;
        *((_BYTE *)v48 + 7) |= 2u;
        v48 += 7;
        sub_800C7BB0((*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376))), sf_draft_guest_address(v49));
        v49 = v47;
      }
      while ( v46 < 2 );
      v50 = 25;
      sub_800CFC9C(*SF_DRAFT_PTR(uint32, (*SF_DRAFT_PTR(uint32, 0x80115D84u))), 0);
      sub_8003CA74(2641968, 4259648, 2150432);
      *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 700)) = 5;
      do
      {
        v52 = SF_DRAFT_PTR(int, sub_80039F60(v50++));
        *((_BYTE *)v52 + 22) = 32;
        *((_BYTE *)v52 + 20) = 32;
        *((_BYTE *)v52 + 21) = -96;
      }
      while ( v50 < 28 );
    }
    goto LABEL_39;
  }
  v4 = 0;
  if ( !*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 732)) )
  {
    v5 = SF_DRAFT_PTR(int, 0x8011C840u);
    while ( 1 )
    {
      ++v4;
      if ( *v5 )
        break;
      v5 += 7;
      if ( v4 >= 2 )
      {
        v6 = 0;
        v7 = SF_DRAFT_PTR(int, 0x8011C138u);
        while ( 1 )
        {
          ++v6;
          if ( *v7 )
            return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 3;
          v7 += 6;
          if ( v6 >= 18 )
          {
            v8 = 0;
            v9 = SF_DRAFT_PTR(int, 0x8011C498u);
            while ( 1 )
            {
              ++v8;
              if ( *v9 )
                return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 3;
              v9 += 9;
              if ( v8 >= 16 )
                goto LABEL_12;
            }
          }
        }
      }
    }
  }
  return *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 724)) == 3;
}

sint32 sub_8007F650(uint32 a1)
{
  struct { int v44, v45, v46; } point;
  struct { int v60, v61, v62; } angles;
    FUNCTION_MARKER(0x8007F650u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    struct { int v47, v48, v49; __int16 v50; unsigned __int16 v51; int v52, v53, v54, v55; } matrix;
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int v2; 
  int v3; 
  int result; 
  int v5; 
  int v6; 
  bool v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *v11; 
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
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 

  v2 = a1_view[1];
  v3 = *(uint8 *)a1_view;
  result = (unsigned int)*(uint8 *)(v2 + 34) - 1 < 2;
  if ( (unsigned int)*(uint8 *)(v2 + 34) - 1 >= 2 )
    return result;
  v5 = *SF_DRAFT_PTR(_DWORD, (v2 + 8));
  result = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v5 + 16)) + 40)) & 0x400000;
  if ( !result )
    return result;
  result = *SF_DRAFT_PTR(_BYTE, (v5 + 8)) & 0x10;
  if ( (*SF_DRAFT_PTR(_BYTE, (v5 + 8)) & 0x10) != 0 )
    return result;
  result = *SF_DRAFT_PTR(_DWORD, (v2 + 12));
  if ( !result )
    return result;
  v36 = (*SF_DRAFT_PTR(uint32, 0x80012330u));
  v37 = (*SF_DRAFT_PTR(uint32, 0x80012334u));
  v38 = (*SF_DRAFT_PTR(uint32, 0x80012338u));
  v39 = (*SF_DRAFT_PTR(uint32, 0x80012330u));
  v40 = (*SF_DRAFT_PTR(uint32, 0x80012334u));
  v41 = (*SF_DRAFT_PTR(uint32, 0x80012338u));
  v6 = a1_view[10];
  v7 = 0;
  if ( a1_view[3] )
    v7 = (unsigned int)(v6 - 1) < 2;
  v42 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 4));
  v43 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12)) + 16));
  if ( v3 )
  {
    v8 = a1_view[17];
    if ( v8 && v7 )
    {
      v9 = -79;
      if ( v6 == 1 )
        v9 = -56;
      v36 = (*SF_DRAFT_PTR(uint32, 0x80012330u)) + -v9 * v8 / 10;
      if ( v6 == 1 )
        v39 = (*SF_DRAFT_PTR(uint32, 0x80012330u)) + 79 * a1_view[17] / 10;
    }
    v10 = -170;
    if ( a1_view[19] )
    {
      if ( a1_view[20] * v42 + a1_view[22] * v43 > 0 )
        v10 = 170;
      v36 += -v10 * a1_view[19] / 10;
    }
    if ( !v7 )
      goto LABEL_46;
    if ( a1_view[5] != 2 )
    {
      v7 = 0;
LABEL_46:
      if ( v36 || v37 || v38 )
      {
        point.v44 = -*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 36)) + 104));
        point.v45 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 36)) + 106));
        v23 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 36)) + 108));
        point.v44 += v36;
        point.v45 += v37;
        point.v46 = v38 - v23;
        sub_800DBF98((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 52))), sf_draft_guest_address(&point.v44));
      }
      if ( v39 || v40 || v41 || (result = 1, v7) && (result = 113, v6 == 1) )
      {
        point.v44 = v39 + 113;
        point.v45 = v40;
        point.v46 = v41;
        return sub_800DBF98((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 36))), sf_draft_guest_address(&point.v44));
      }
      return result;
    }
    v56 = (*SF_DRAFT_PTR(uint32, 0x80012330u));
    v57 = (*SF_DRAFT_PTR(uint32, 0x80012334u));
    v58 = (*SF_DRAFT_PTR(uint32, 0x80012338u));
    v59 = (*SF_DRAFT_PTR(uint32, 0x8001233Cu));
    v11 = 0;
    if ( v6 == 1 )
    {
      v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 44));
    }
    else if ( v6 == 2 )
    {
      v11 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 32));
    }
    point.v44 = v11[5];
    point.v45 = v11[6];
    v12 = v11[7];
    point.v45 = -point.v45;
    point.v46 = v12;
    matrix.v47 = a1_view[6] - point.v44;
    matrix.v48 = a1_view[7] - point.v45;
    matrix.v49 = a1_view[8] - v12;
    matrix.v53 = sub_800EC124(matrix.v47, matrix.v49);
    sub_800E0B8C(sf_draft_guest_address(&matrix.v47), sf_draft_guest_address(&matrix.v52));
    matrix.v54 = 0;
    v57 = sub_800EC124(v42, v43);
    v13 = matrix.v52 - v56;
    angles.v60 = matrix.v52 - v56;
    if ( matrix.v52 - v56 < 2049 )
    {
      v14 = v13 + 4096;
      if ( v13 >= -2048 )
        goto LABEL_28;
    }
    else
    {
      v14 = v13 - 4096;
    }
    angles.v60 = v14;
LABEL_28:
    v15 = matrix.v53 - v57;
    angles.v61 = matrix.v53 - v57;
    if ( matrix.v53 - v57 < 2049 )
    {
      v16 = v15 + 4096;
      if ( v15 >= -2048 )
        goto LABEL_32;
    }
    else
    {
      v16 = v15 - 4096;
    }
    angles.v61 = v16;
LABEL_32:
    v17 = matrix.v54 - v58;
    angles.v62 = matrix.v54 - v58;
    if ( matrix.v54 - v58 < 2049 )
    {
      v18 = v17 + 4096;
      if ( v17 >= -2048 )
        goto LABEL_36;
    }
    else
    {
      v18 = v17 - 4096;
    }
    angles.v62 = v18;
LABEL_36:
    v19 = -512;
    if ( angles.v61 >= -512 )
    {
      if ( angles.v61 < 513 )
      {
LABEL_40:
        if ( v6 == 2 )
          v36 += ((angles.v60 > 0) - angles.v60) >> 1;
        matrix.v52 = v56 + angles.v60;
        matrix.v54 = v58 + angles.v62;
        matrix.v53 = v57 + angles.v61;
        v20 = v58 + angles.v62 - 1024;
        if ( v6 == 1 )
        {
          matrix.v52 = v56 + angles.v60 + 56;
          v20 = v58 + angles.v62 - 1024;
        }
        matrix.v54 = v20;
        v21 = matrix.v53;
        v22 = matrix.v55;
        a1_view[12] = matrix.v52;
        a1_view[13] = v21;
        a1_view[14] = v20;
        a1_view[15] = v22;
        goto LABEL_46;
      }
      v19 = 512;
    }
    angles.v61 = v19;
    goto LABEL_40;
  }
  if ( v7 )
  {
    v24 = a1_view[13];
    v25 = a1_view[14];
    v26 = a1_view[15];
    v56 = a1_view[12];
    v57 = v24;
    v58 = v25;
    v59 = v26;
    v27 = 0;
    if ( v6 == 1 )
    {
      v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 44));
    }
    else if ( v6 == 2 )
    {
      v27 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 24)) + 32));
    }
    LOWORD(angles.v60) = -(__int16)v56;
    HIWORD(angles.v60) = v57;
    LOWORD(angles.v61) = -(__int16)v58;
    sub_800EBE94(sf_draft_guest_address(&angles), sf_draft_guest_address(&matrix));
    v28 = -HIWORD(matrix.v47);
    v29 = -HIWORD(matrix.v48);
    HIWORD(matrix.v47) = -HIWORD(matrix.v47);
    HIWORD(matrix.v48) = -HIWORD(matrix.v48);
    v30 = -HIWORD(matrix.v49);
    v31 = -matrix.v51;
    HIWORD(matrix.v49) = -HIWORD(matrix.v49);
    matrix.v51 = -matrix.v51;
    if ( v6 == 1 || v6 == 2 )
    {
      v32 = v30 << 16;
      v33 = (__int16)matrix.v47;
      v34 = matrix.v50;
      v35 = (__int16)matrix.v49;
      angles.v61 = (__int16)v29;
      v63 = -(__int16)v28;
      v65 = -(__int16)v31;
      v67 = -(v32 >> 16);
      LOWORD(matrix.v47) = -(__int16)v28;
      matrix.v50 = -(__int16)v31;
      LOWORD(matrix.v49) = -HIWORD(v32);
      HIWORD(matrix.v49) = v29;
      angles.v60 = v33;
      angles.v62 = v34;
      v64 = -v35;
      v66 = -(__int16)matrix.v48;
      v68 = -(__int16)matrix.v52;
      HIWORD(matrix.v48) = -(__int16)v35;
      HIWORD(matrix.v47) = -(__int16)matrix.v48;
      matrix.v51 = -(__int16)matrix.v52;
      LOWORD(matrix.v48) = v33;
      LOWORD(matrix.v52) = v34;
    }
    if ( *SF_DRAFT_PTR(_DWORD, (v27 + 32)) )
    {
      sub_800DC0B8(v27, 0, (sint32)sf_draft_guest_address(&matrix));
    }
    else
    {
      *SF_DRAFT_PTR(_WORD, v27) = matrix.v47;
      *SF_DRAFT_PTR(_WORD, (v27 + 2)) = -HIWORD(matrix.v47);
      *SF_DRAFT_PTR(_WORD, (v27 + 4)) = matrix.v48;
      *SF_DRAFT_PTR(_WORD, (v27 + 6)) = -HIWORD(matrix.v48);
      *SF_DRAFT_PTR(_WORD, (v27 + 8)) = matrix.v49;
      *SF_DRAFT_PTR(_WORD, (v27 + 10)) = -HIWORD(matrix.v49);
      *SF_DRAFT_PTR(_WORD, (v27 + 12)) = matrix.v50;
      *SF_DRAFT_PTR(_WORD, (v27 + 14)) = -matrix.v51;
      *SF_DRAFT_PTR(_WORD, (v27 + 16)) = matrix.v52;
    }
  }
  return sub_800C777C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12))));
}

sint32 sub_8008A41C(uint32 a1)
{
    FUNCTION_MARKER(0x8008A41Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a1_view = SF_DRAFT_PTR(_DWORD, a1);
  int *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  _DWORD *i; 
  _BYTE *v12; 
  int *v13; 
  _BYTE *v14; 
  int v15; 
  int v16; 
  _DWORD *v17; 
  int v18; 
  __int16 **v19; 
  int result; 
  int v21; 
  int *v22; 
  int v23; 
  __int16 **v24; 
  int v25; 
  __int16 **v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int *v31; 
  int v32; 
  int *v33; 
  int v34; 
  char v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40[10]; 

  (*SF_DRAFT_PTR(uint8, 0x8010D254u)) = 0;
  (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) = 0;
  if ( SF_DRAFT_PTR(uint32, 0x8010D038u)[0] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D038u)[0]));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D040u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D040u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D03Cu)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D03Cu)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D0A4u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D0A4u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D0ACu)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D0ACu)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D0A8u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D0A8u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D110u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D110u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D118u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D118u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D114u)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D114u)));
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D17Cu)) )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << (*SF_DRAFT_PTR(uint32, 0x8010D17Cu)));
  if ( SF_DRAFT_PTR(uint32, 0x8010D180u)[1] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D180u)[1]));
  if ( SF_DRAFT_PTR(uint32, 0x8010D180u)[0] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D180u)[0]));
  if ( SF_DRAFT_PTR(uint32, 0x8010D1E8u)[0] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[0]));
  if ( SF_DRAFT_PTR(uint32, 0x8010D1E8u)[2] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[2]));
  if ( SF_DRAFT_PTR(uint32, 0x8010D1E8u)[1] )
    *(_DWORD *)(a1_view[3] + 404) &= ~(1 << SLOBYTE(SF_DRAFT_PTR(uint32, 0x8010D1E8u)[1]));
  v2 = (int *)a1_view[3];
  v3 = v2[1];
  v4 = v2[2];
  v5 = v2[3];
  (*SF_DRAFT_PTR(uint32, 0x8010D258u)) = *v2;
  (*SF_DRAFT_PTR(uint32, 0x8010D25Cu)) = v3;
  (*SF_DRAFT_PTR(uint32, 0x8010D260u)) = v4;
  (*SF_DRAFT_PTR(uint32, 0x8010D264u)) = v5;
  (*SF_DRAFT_PTR(uint32, 0x8010D298u)) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 32) + 20);
  (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 32) + 24);
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 32) + 28);
  (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D29Cu)));
  (*SF_DRAFT_PTR(uint32, 0x8010D2A0u)) = v6;
  (*SF_DRAFT_PTR(uint32, 0x8010D2A8u)) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 8) + 20);
  (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 8) + 24);
  (*SF_DRAFT_PTR(uint32, 0x8010D2B0u)) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1_view[2] + 24) + 8) + 28);
  (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D2ACu)));
  (*SF_DRAFT_PTR(uint32, 0x8010D288u)) = (*SF_DRAFT_PTR(uint32, 0x8010D258u));
  (*SF_DRAFT_PTR(uint32, 0x8010D28Cu)) = v3;
  (*SF_DRAFT_PTR(uint32, 0x8010D290u)) = v4;
  (*SF_DRAFT_PTR(uint32, 0x8010D294u)) = v5;
  (*SF_DRAFT_PTR(uint32, 0x8010D28Cu)) = sub_80088ACC(sf_draft_guest_address(a1_view), 0);
  (*SF_DRAFT_PTR(uint32, 0x8010D268u)) = *(__int16 *)(*(_DWORD *)(a1_view[2] + 12) + 4);
  (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)) = *(__int16 *)(*(_DWORD *)(a1_view[2] + 12) + 10);
  v7 = *(__int16 *)(*(_DWORD *)(a1_view[2] + 12) + 16);
  (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)) = (0u - (*SF_DRAFT_PTR(uint32, 0x8010D26Cu)));
  (*SF_DRAFT_PTR(uint32, 0x8010D270u)) = v7;
  (*SF_DRAFT_PTR(uint32, 0x8010D278u)) = *(_DWORD *)(a1_view[3] + 96) + *(_DWORD *)(a1_view[3] + 112);
  (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) = *(_DWORD *)(a1_view[3] + 100) + *(_DWORD *)(a1_view[3] + 116);
  (*SF_DRAFT_PTR(uint32, 0x8010D280u)) = *(_DWORD *)(a1_view[3] + 104) + *(_DWORD *)(a1_view[3] + 120);
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D278u)) < 0 )
    v8 = (0u - ((0u - (*SF_DRAFT_PTR(uint32, 0x8010D278u))) >> 12));
  else
    v8 = (*SF_DRAFT_PTR(uint32, 0x8010D278u)) >> 12;
  (*SF_DRAFT_PTR(uint32, 0x8010D278u)) = v8;
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) < 0 )
    v9 = (0u - ((0u - (*SF_DRAFT_PTR(uint32, 0x8010D27Cu))) >> 12));
  else
    v9 = (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) >> 12;
  (*SF_DRAFT_PTR(uint32, 0x8010D27Cu)) = v9;
  if ( (*SF_DRAFT_PTR(uint32, 0x8010D280u)) < 0 )
    v10 = (0u - ((0u - (*SF_DRAFT_PTR(uint32, 0x8010D280u))) >> 12));
  else
    v10 = (*SF_DRAFT_PTR(uint32, 0x8010D280u)) >> 12;
  (*SF_DRAFT_PTR(uint32, 0x8010D280u)) = v10;
  for ( i = (_DWORD *)(*(_DWORD **)(a1_view[2] + 40)); i; i = (_DWORD *)i[1] )
  {
    v12 = (_BYTE *)i[3];
    v13 = i + 2;
    if ( *v12 )
    {
      v14 = v12 - 12;
      if ( i[2] == 4 )
        v14 = v12 - 1;
      if ( (*v14 & 8) == 0 )
      {
        v15 = *v13;
        v39 = *(__int16 *)(i[4] + 2);
        v16 = 0;
        v17 = i + 7;
        if ( *v13 > 0 )
        {
          v18 = (uint8)*v12;
          v19 = (__int16 **)(i + 7);
          do
          {
            if ( ((v18 >> (2 * v16)) & 3) != 0 )
            {
              result = (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) < 32;
              v21 = v16 + 1;
              if ( (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) >= 32 )
                return result;
              v22 = &SF_DRAFT_PTR(uint32, 0x8010D038u)[22 * (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) + 160];
              if ( v21 == v15 )
                v21 = 0;
              v23 = v21;
              if ( v39 < 2049 )
              {
                v26 = (__int16 **)&v17[v23];
                *v22 = (**v26);
                v22[1] = (*v26)[1];
                v22[2] = (*v26)[2];
                v22[4] = **v19;
                v22[5] = (*v19)[1];
                v25 = (int)*v19;
              }
              else
              {
                *v22 = (**v19);
                v22[1] = (*v19)[1];
                v24 = (__int16 **)&v17[v23];
                v22[2] = (*v19)[2];
                v22[4] = **v24;
                v22[5] = (*v24)[1];
                v25 = (int)*v24;
              }
              v22[6] = *SF_DRAFT_PTR(__int16, (v25 + 4));
              v27 = v22[1];
              v28 = v22[2];
              v22[8] = v22[4] - *v22;
              v29 = v22[6] - v28;
              v22[9] = v22[5] - v27;
              v22[10] = v29;
              v30 = 0;
              if ( (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) <= 0 )
                goto LABEL_64;
              v31 = SF_DRAFT_PTR(int, 0x8010D038u);
              do
              {
                if ( v31[160] == *v22
                  && v31[161] == v22[1]
                  && v31[162] == v22[2]
                  && v31[164] == v22[4]
                  && v31[165] == v22[5]
                  && v31[166] == v22[6] )
                {
                  break;
                }
                ++v30;
                v31 += 22;
              }
              while ( v30 < (sint32)r_u32(0x8010DDB8u) );
              if ( v30 >= (sint32)r_u32(0x8010DDB8u) )
              {
LABEL_64:
                v32 = v22[10];
                v40[1] = 0;
                v40[0] = -v32;
                v40[2] = v22[8];
                sub_800C720C(sf_draft_guest_address(v40), sf_draft_guest_address(v22 + 12));
                v22[19] = (v18 >> (2 * v16)) & 3;
                ++(*SF_DRAFT_PTR(uint32, 0x8010DDB8u));
              }
            }
            ++v16;
            ++v19;
          }
          while ( v16 < v15 );
        }
      }
    }
  }
  v33 = (int *)a1_view[4];
  v34 = *((uint8 *)v33 + 8);
  v35 = 0;
  if ( v34 == 4 || (v36 = *v33, (v36 & 0x1000) != 0) || v34 == 10 || (v36 & 0x8000) != 0 || v34 == 12 )
    v35 = 1;
  v37 = 0;
  SF_DRAFT_PTR(uint32, 0x8010D044u)[6] = 0;
  if ( (*SF_DRAFT_PTR(uint32, 0x8010DDB8u)) > 0 )
  {
    v38 = 160;
    do
    {
      sub_80088E58((int)a1_view, (int)(*SF_DRAFT_PTR(uint32, 0x8010D038u)), &SF_DRAFT_PTR(uint32, 0x8010D038u)[v38], v35);
      ++v37;
      v38 += 22;
    }
    while ( v37 < (sint32)r_u32(0x8010DDB8u) );
  }
  return sub_8008A0AC(sf_draft_guest_address(a1_view), ((*SF_DRAFT_PTR(uint32, 0x8010D038u))), v35);
}

void sub_8002D58C(sint32 a1)
{
    FUNCTION_MARKER(0x8002D58Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */

  int v2; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  __int16 v7; 
  __int16 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  uint32 v13; 
  uint32 v14; 
  int v15; 

  uint32 v17; 
  int v18; 
  _DWORD *v19; 
  int v20; 
  _DWORD *v21; 
  int v22; 
  bool v23; 
  int v24; 
  int v25; 
  __int16 v26; 
  uint32 v27; 
  _DWORD *v28; 
  __int16 v29; 
  uint32 v30; 
  int v31; 
  __int16 v32; 
  int v33; 
  struct { int v37, v38, v39; } point; 
  int v41[6]; 

  v2 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
  v3 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 76 * *SF_DRAFT_PTR(__int16, (a1 + 8));
  if ( v2 == 666 )
    v4 = 666;
  else
    v4 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
  switch ( *SF_DRAFT_PTR(_WORD, a1) )
  {
    case 2:
      *SF_DRAFT_PTR(_WORD, (v3 + 36)) &= 0xFF9Fu;
      v33 = 104;
      goto LABEL_91;
    case 0x12:
      if ( v4 == 104 )
      {
        v14 = r_u32(SF_DRAFT_GP + 504u);
        v15 = -1;
        if ( v14 )
          { uint32 args[1] = {(uint32)(sint32)(sint16)v2}; v15 = (sint32)sf_draft_call((uint32)v14, 1, args); }
        if ( v15 >= 0 )
          sub_8006BC98(0, v15, (*SF_DRAFT_PTR(_DWORD, (v3 + 52))), 0);
        return;
      }
      if ( v4 >= 105 )
      {
        if ( v4 == 116 )
        {
          v18 = *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 40));
          sub_8002D2F8(*SF_DRAFT_PTR(_DWORD, (a1 + 8)), 116);
          if ( v18 == 1 )
            sub_80022024(0);
          else
            sub_80022024(1u);
          return;
        }
        if ( v4 < 117 )
        {
          if ( v4 != 105 )
          {
            v5 = *SF_DRAFT_PTR(_DWORD, (a1 + 8));
            if ( v4 == 115 )
            {
              sub_8002D2F8(v5, 115);
              v17 = r_u32(SF_DRAFT_GP + 500u);
              if ( v17 )
                sf_draft_call(v17, 2, (const uint32[]){(uint32)(sint32)(sint16)v2, 115});
            }
          }
          return;
        }
        if ( v4 != 119 )
        {
          if ( v4 == 127 )
          {
            v26 = *SF_DRAFT_PTR(_WORD, (v3 + 36));
            if ( (v26 & 0x40) == 0 )
            {
              v27 = r_u32(SF_DRAFT_GP + 508u);
              *SF_DRAFT_PTR(_WORD, (v3 + 36)) = v26 | 0x40;
              if ( v27 )
                { uint32 args[2] = {r_u32((uint32)a1 + 12u), 1}; sf_draft_call(v27, 2, args); }
            }
          }
          return;
        }
        v19 = SF_DRAFT_PTR(_DWORD, (76 * (__int16)v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        v20 = *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
        point.v37 = v19[6];
        point.v38 = v19[7];
        point.v39 = v19[8];
        sub_8001CC64(1u, 0, sf_draft_guest_address(&point), 0, 1);
        if ( v20 == -1 )
          return;
        if ( v20 == 666 )
          return;
        v21 = SF_DRAFT_PTR(_DWORD, (76 * v20 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        if ( *(_WORD *)(20 * *v21 + (*SF_DRAFT_PTR(uint32, 0x80116B98u))) != 34 )
          return;
        v22 = v21[12];
        v23 = 1;
        if ( v22 != -1 )
        {
          v24 = *SF_DRAFT_PTR(_DWORD, (76 * v22 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
          v25 = 1;
          if ( *SF_DRAFT_PTR(_BYTE, (v24 + 34)) != 13 )
            goto LABEL_61;
          v23 = *SF_DRAFT_PTR(_DWORD, (v24 + 4)) >= (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u));
        }
        v25 = v23;
LABEL_61:
        if ( v25 )
          sub_8002CFAC(v20, -1);
        return;
      }
      if ( v4 != 34 )
      {
        if ( v4 < 35 )
        {
          if ( v4 == 14 && (*SF_DRAFT_PTR(_WORD, (v3 + 36)) & 0x20) == 0 )
          {
            if ( (uint8)sub_80017698(0) )
              *SF_DRAFT_PTR(_WORD, (v3 + 36)) |= 0x20u;
          }
          return;
        }
        if ( v4 == 93 )
        {
          if ( (*SF_DRAFT_PTR(_WORD, (v3 + 36)) & 0x20) == 0 )
          {
            v6 = r_u32(SF_DRAFT_GP + 492u);
            if ( !v6 || (uint8)sf_draft_call(v6, 1, (const uint32[]){(uint32)(sint32)(sint16)v2}) )
            {
              v7 = *SF_DRAFT_PTR(_WORD, (v3 + 36));
              (*SF_DRAFT_PTR(uint8, 0x80116A91u)) = 0;
              *SF_DRAFT_PTR(_WORD, (v3 + 36)) = v7 | 0x20;
              sub_8002D224(v2);
            }
          }
          return;
        }
        if ( v4 != 95 )
          return;
      }
      v8 = *SF_DRAFT_PTR(_WORD, (v3 + 36));
      if ( (v8 & 0x20) == 0 )
      {
        v9 = 76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
        v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 48));
        *SF_DRAFT_PTR(_WORD, (v3 + 36)) = v8 | 0x20;
        if ( v4 == 95 && *SF_DRAFT_PTR(_DWORD, (v9 + 40)) == 99 )
        {
          if ( !(*SF_DRAFT_PTR(uint8, 0x80116B24u))
            && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 24)) + 8)) > 0
            && *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 16)) + 8)) != 6 )
          {
            v11 = sub_800EC8A4(SF_DRAFT_PTR(uint32, 0x801162E0u)[0]);
            sub_80017530((int)SF_DRAFT_PTR(uint32, 0x801162E0u)[0], 2 * v11 + 24);
            sub_80092808();
          }
        }
        else
        {
          if ( v4 != 34 || v10 == -1 )
            v12 = 0;
          else
            v12 = *SF_DRAFT_PTR(_DWORD, (76 * v10 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
          if ( v12 && *SF_DRAFT_PTR(_BYTE, (v12 + 34)) == 13 )
          {
            if ( *SF_DRAFT_PTR(_DWORD, (v12 + 4)) >= (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) )
            {
              *SF_DRAFT_PTR(_WORD, (v3 + 36)) &= ~0x20u;
              sub_8002CFAC(v2, -1);
            }
          }
          else
          {
            v13 = r_u32(SF_DRAFT_GP + 496u);
LABEL_80:
            if ( v13 )
              sf_draft_call(v13, 1, (const uint32[]){(uint32)(sint32)(sint16)v2});
          }
        }
      }
      return;
    case 0x13:
      if ( v4 == 119 )
      {
        v28 = SF_DRAFT_PTR(_DWORD, (76 * (__int16)v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
        v41[0] = v28[6];
        v41[1] = v28[7];
        v41[2] = v28[8];
        if ( sub_8001C960(4) )
          sub_80020210();
        sub_8001CC64(0, 0, sf_draft_guest_address(v41), 0, 1);
      }
      else if ( v4 == 127 )
      {
        v29 = *SF_DRAFT_PTR(_WORD, (v3 + 36));
        if ( (v29 & 0x40) != 0 )
        {
          v30 = r_u32(SF_DRAFT_GP + 508u);
          *SF_DRAFT_PTR(_WORD, (v3 + 36)) = v29 & 0xFFBF;
          if ( v30 )
            { uint32 args[2] = {r_u32((uint32)a1 + 12u), 0}; sf_draft_call(v30, 2, args); }
        }
      }
      return;
    case 0x29:
      **(_DWORD **)(a1 + 12) = *SF_DRAFT_PTR(__int16, (v3 + 36));
      return;
    case 0x2A:
      if ( v2 == 666 )
        v4 = 666;
      else
        v4 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
      v32 = **(uint8 **)(a1 + 12);
      *SF_DRAFT_PTR(_WORD, (v3 + 36)) = v32;
      if ( (v32 & 0x20) != 0 && v4 == 116 )
        goto LABEL_92;
      v33 = 127;
      if ( (v32 & 0x40) != 0 )
      {
LABEL_91:
        if ( v4 == v33 )
LABEL_92:
          sub_80015364(0x12u, 3u, v2, v2, 0, 0, 0, 0);
      }
      return;
    case 0x2D:
      if ( v2 == 666 )
        v31 = 666;
      else
        v31 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v2 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
      if ( v31 != 95 && v31 != 34 )
        return;
      v13 = r_u32(SF_DRAFT_GP + 512u);
      goto LABEL_80;
    default:
      return;
  }
}

void sub_8002134C(uint32 a1)
{
    FUNCTION_MARKER(0x8002134Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    uint16 *a1_view = SF_DRAFT_PTR(uint16, a1);

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
  _DWORD *v12; 
  char v13; 
  int v14; 
  _DWORD *v15; 
  int v16; 
  int v17; 
  _DWORD *v18; 
  int v19; 
  int v20; 
  _DWORD *v21; 
  int v22; 
  int v23; 
  _DWORD *v24; 
  int v25; 
  int v26; 

  int v28; 
  int v29; 
  int v30; 
  char v31; 
  int v32; 
  int v33; 
  _DWORD v34[5]; 
  int v35[2]; 
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
  int v51; 

  v2 = *(_DWORD *)(76 * *((_DWORD *)a1_view + 2) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52);
  if ( !v2 )
    return;
  v3 = *a1_view;
  if ( v3 != 10 )
  {
    if ( v3 < 11 )
    {
      if ( v3 == 2 )
      {
        v28 = *SF_DRAFT_PTR(__int16, (v2 + 2));
        if ( v28 != 666 )
        {
          v29 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v28 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
          if ( v29 == 8 || v29 == 9 )
          {
            v30 = *SF_DRAFT_PTR(_DWORD, (v2 + 24));
            *SF_DRAFT_PTR(_BYTE, (v2 + 34)) = 0;
            *SF_DRAFT_PTR(_WORD, (v30 + 8)) = 10;
            v31 = *SF_DRAFT_PTR(_BYTE, (v2 + 35));
            *SF_DRAFT_PTR(_BYTE, v2) = 0;
            *SF_DRAFT_PTR(_BYTE, (v2 + 35)) = v31 | 2;
            v32 = sub_800DE414(28);
            *SF_DRAFT_PTR(_DWORD, (v2 + 8)) = v32;
            *SF_DRAFT_PTR(_DWORD, (v32 + 16)) = 0;
            sub_800DB558((*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12));
            v33 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
            *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 36)) = 0;
            sub_800DC40C((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 8)) + 12))), 0, (v33 + 76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + 4));
            sf_draft_call((uint32)(0x8015389Cu), 2u, (const uint32[]){(uint32)(v2), (uint32)(1)});
          }
        }
      }
      return;
    }
    if ( v3 != 18 )
    {
      if ( v3 == 19 )
        *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) = 0;
      return;
    }
    v4 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    if ( v4 == 666
      || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v4 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 8
      || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) <= 0
      || (*SF_DRAFT_PTR(uint8, 0x80116AF0u)) )
    {
      return;
    }
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3448)) = 1;
    sub_8008C5E0();
    sub_80016F90(2);
    if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) )
      sub_80028F3C(((*SF_DRAFT_PTR(uint32, 0x80116AB0u))), 13);
    v5 = *SF_DRAFT_PTR(__int16, (v2 + 2));
    v6 = SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
    v7 = v6[12];
    if ( v7 == -1 )
    {
      v8 = v2;
    }
    else
    {
      v9 = 76 * v7 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
      v8 = *SF_DRAFT_PTR(_DWORD, (v9 + 52));
      v10 = -1;
      if ( v5 == 666 || *(_WORD *)(20 * *v6 + (*SF_DRAFT_PTR(uint32, 0x80116B98u))) != 93 )
      {
        v11 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v8 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
        if ( v11 != -1 && v11 != 666 )
        {
          v12 = SF_DRAFT_PTR(_DWORD, (76 * v11 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
          if ( *(_WORD *)(20 * *v12 + (*SF_DRAFT_PTR(uint32, 0x80116B98u))) == 93 )
            v10 = v12[10];
        }
      }
      else
      {
        v10 = *SF_DRAFT_PTR(_DWORD, (v9 + 40));
        v8 = v2;
      }
      if ( v10 == -1 )
      {
        if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 19 )
          *SF_DRAFT_PTR(_BYTE, v2) = 1;
      }
      else
      {
        sub_8006C9D4((*SF_DRAFT_PTR(uint16, 0x80130C88u)), v10);
        if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) && (*SF_DRAFT_PTR(uint16, 0x80130C88u)) != 7 )
          sub_80028F3C(((*SF_DRAFT_PTR(uint32, 0x80116AB0u))), 98);
        else
          sub_80028F3C(((*SF_DRAFT_PTR(uint32, 0x80116AB0u))), 92);
      }
    }
    sub_8001D1F0(1u, v2, v8, 1);
  }
  LOWORD(v35[0]) = 1;
  if ( !*SF_DRAFT_PTR(_BYTE, v2) )
  {
    sub_8008B4E0(0);
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v34);
    sub_80020BC0(v2);
    sub_8008B564();
  }
  v13 = 1;
  if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) > 0 )
  {
    if ( *SF_DRAFT_PTR(_DWORD, (v2 + 12)) )
    {
      v34[4] = sf_draft_guest_address((char *)v35 + 1);
      sub_80023130(v2, 0, 1, v35);
    }
    v3 = *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v2 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48));
    if ( v3 == -1 )
      goto LABEL_41;
    v14 = *SF_DRAFT_PTR(_DWORD, (76 * v3 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v13 = 0;
    if ( v14 )
    {
      v3 = v2;
      if ( *SF_DRAFT_PTR(_DWORD, (v14 + 12)) )
      {
        sub_80020F48(v2, v14);
LABEL_41:
        v13 = 0;
      }
    }
  }
  v15 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v15[352] )
  {
    v16 = v15[355];
    v3 = v15[356];
    v17 = v15[357];
    v36 = v15[354];
    v37 = v16;
    v38 = v3;
    v39 = v17;
  }
  else
  {
    v36 = v15[354];
  }
  v18 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v18[352] )
  {
    v19 = v18[367];
    v3 = v18[368];
    v20 = v18[369];
    v40 = v18[366];
    v41 = v19;
    v42 = v3;
    v43 = v20;
  }
  else
  {
    v40 = v18[366];
  }
  v21 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v21[271] )
  {
    v22 = v21[274];
    v3 = v21[275];
    v23 = v21[276];
    v44 = v21[273];
    v45 = v22;
    v46 = v3;
    v47 = v23;
  }
  else
  {
    v44 = v21[273];
  }
  v24 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(SF_DRAFT_GP + 284));
  if ( v24[271] )
  {
    v25 = v24[286];
    v3 = v24[287];
    v26 = v24[288];
    v48 = v24[285];
    v49 = v25;
    v50 = v3;
    v51 = v26;
  }
  else
  {
    v48 = v24[285];
  }
  if ( LOBYTE(v35[0])
    && !(uint8)sub_8006C180()
    && (unsigned int)(v36 - v40 + 3) < 7
    && (unsigned int)(v37 - v41 + 3) < 7
    && (unsigned int)(v38 - v42 + 3) < 7
    && (unsigned int)(v44 - v48 + 3) < 7
    && (unsigned int)(v45 - v49 + 3) < 7
    && (unsigned int)(v46 - v50 + 3) < 7 )
  {
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) = 0;
  }
  if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v2 + 24)) + 8)) <= 0 )
  {
    if ( *SF_DRAFT_PTR(_BYTE, v2) )
      v13 = 1;
    sub_8001D1F0(0, *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)), v13);
    sub_80020210();
    sub_80016F90(0);
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3448)) = 0;
    sub_8008C6A4();
    if ( (*SF_DRAFT_PTR(uint32, 0x80116B34u)) )
      sf_draft_call((uint32)((*SF_DRAFT_PTR(uint32, 0x80116B34u))), 0u, NULL);
    if ( (*SF_DRAFT_PTR(uint8, 0x801168D0u)) )
      sub_80085D04((SF_DRAFT_PTR(uint32, 0x8011634Cu)[0]), 80);
  }
  else
  {
    sub_80015364(0xAu, 4u, (*SF_DRAFT_PTR(__int16, (v2 + 2))), (*SF_DRAFT_PTR(__int16, (v2 + 2))), (v35[0]), (v35[1]), v36, v37);
  }
}

sint32 sub_800BFC68(sint32 a1, sint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800BFC68u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */


  int v7; 
  int v9; 
  int result; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  __int16 v20; 
  bool v21; // dc
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  __int16 v30; 
  int v31; 
  __int16 v32; 
  __int16 v33; 
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
  uint16 v48; 
  __int16 v49[7]; 

  v7 = a2;
  v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 4));
  if ( (__int16)a2 == -1 )
    return -1;
  result = -1;
  if ( *(uint8 *)(a1 + 12) - 1 < (__int16)a2 )
    return result;
  if ( !SF_DRAFT_PTR(uint32, 0x801311B0u)[*SF_DRAFT_PTR(_DWORD, (a1 + 8))] )
    return -1;
  v12 = 24 * (__int16)a2 + v9;
  if ( !SF_DRAFT_PTR(uint32, 0x801311B0u)[*(uint8 *)(v12 + 2)] )
    return -1;
  if ( (*SF_DRAFT_PTR(_WORD, v12) & 0x1F) == 11 )
  {
    v13 = 0;
    if ( *SF_DRAFT_PTR(_BYTE, (v12 + 5)) )
    {
      v14 = (__int16)a2;
      v15 = 24 * (__int16)a2 + v9;
      v16 = 0;
      while ( 1 )
      {
        v17 = v16 >> 16;
        v18 = 24 * ((v16 >> 16) + v14) + v9;
        if ( *SF_DRAFT_PTR(char, (v18 + 40)) == -1 )
          break;
        v19 = v13 + 1;
        if ( (*SF_DRAFT_PTR(_WORD, (v18 + 24)) & 0x1F) == 14 )
        {
          v20 = sub_800C3470((*SF_DRAFT_PTR(_DWORD, (v15 + 20))), v17);
          if ( sub_800FED54(v20, (*(uint8 *)(v15 + 2) << 8) | *(uint8 *)(v15 + 5), *(uint8 *)(v15 + 7)) << 16 )
            break;
          v19 = v13 + 1;
        }
        v13 = v19;
        v21 = (__int16)v19 < (int)*(uint8 *)(v15 + 5);
        v16 = v19 << 16;
        if ( !v21 )
          return -1;
      }
      v24 = sub_800BFC68(a1, (__int16)(a2 + v13 + 1), a3, a4) << 16;
      return v24 >> 16;
    }
    return -1;
  }
  if ( a3 != -2 )
  {
    if ( a3 == -1 )
      *SF_DRAFT_PTR(_BYTE, (v12 + 9)) = *SF_DRAFT_PTR(_BYTE, (v12 + 12));
    else
      *SF_DRAFT_PTR(_BYTE, (v12 + 9)) = a3;
  }
  if ( a4 != -2 )
  {
    if ( a4 == -1 )
      *SF_DRAFT_PTR(_WORD, (24 * (__int16)a2 + v9 + 10)) = *SF_DRAFT_PTR(_WORD, (24 * (__int16)a2 + v9 + 14));
    else
      *SF_DRAFT_PTR(_WORD, (24 * (__int16)a2 + v9 + 10)) = a4;
  }
  v22 = a2 << 16;
  if ( *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1944)) )
  {
    sub_800C2C38();
    v22 = a2 << 16;
  }
  switch ( *SF_DRAFT_PTR(_WORD, (24 * (v22 >> 16) + v9)) & 0x1F )
  {
    case 0:
      v23 = 24 * (__int16)a2 + v9;
      sub_800C34C0(*(uint8 *)(v23 + 9), (*SF_DRAFT_PTR(__int16, (v23 + 10))), sf_draft_guest_address(&v48), sf_draft_guest_address(v49), (sint16)r_u8(v23 + 18u));
      if ( v48 || (v24 = v7 << 16, v49[0]) )
      {
        sub_800E3F34();
        sub_800F79B4((*(uint8 *)(v23 + 2) << 8) | *(uint8 *)(v23 + 5), (*(uint8 *)(v23 + 7) << 8) | *(uint8 *)(v23 + 8), v48, (uint16)v49[0]);
        sub_800E3F44();
        v24 = v7 << 16;
      }
      return v24 >> 16;
    case 1:
      v40 = 24 * (__int16)a2 + v9;
      *SF_DRAFT_PTR(_WORD, (SF_DRAFT_GP + 1904)) = 0;
      result = -1;
      if ( *SF_DRAFT_PTR(char, (v40 + 16)) != -1 )
        return result;
      sub_800C34C0(*(uint8 *)(v40 + 9), (*SF_DRAFT_PTR(__int16, (v40 + 10))), sf_draft_guest_address(&v48), sf_draft_guest_address(v49), (sint16)r_u8(v40 + 18u));
      v41 = 0;
      sub_800E3F34();
      *SF_DRAFT_PTR(_DWORD, (v40 + 20)) = sub_800F79B4((*(uint8 *)(v40 + 2) << 8) | *(uint8 *)(v40 + 5), (*(uint8 *)(v40 + 7) << 8) | *(uint8 *)(v40 + 8), 1, 1);
      sub_800E3F44();
      LOBYTE(v43) = *SF_DRAFT_PTR(_BYTE, (v40 + 7));
      *SF_DRAFT_PTR(_BYTE, (v40 + 16)) = 0;
      *SF_DRAFT_PTR(_BYTE, (v40 + 17)) = v43;
      v42 = *SF_DRAFT_PTR(_DWORD, (v40 + 20));
      LOBYTE(v43) = v42;
      do
      {
        v21 = (v43 & 1) == 0;
        v44 = v41 + 1;
        if ( !v21 )
        {
          ++*SF_DRAFT_PTR(_BYTE, (v40 + 16));
          v44 = v41 + 1;
        }
        v41 = v44;
        v21 = (__int16)v44 < 24;
        v43 = v42 >> v44;
      }
      while ( v21 );
      v45 = 24 * (__int16)a2 + v9;
      if ( !*SF_DRAFT_PTR(_BYTE, (v45 + 16)) )
        *SF_DRAFT_PTR(_BYTE, (v45 + 16)) = -1;
      sub_800C30EC(v45, (sint16)v48, v49[0]);
      v24 = v7 << 16;
      return v24 >> 16;
    case 2:
      v46 = 24 * (__int16)a2 + v9;
      if ( *SF_DRAFT_PTR(_BYTE, (v46 + 3)) == 99 )
        goto LABEL_59;
      sub_800C34C0(*(uint8 *)(v46 + 9), (*SF_DRAFT_PTR(__int16, (v46 + 10))), sf_draft_guest_address(&v48), sf_draft_guest_address(v49), (sint16)r_u8(v46 + 18u));
      if ( !v48 && !v49[0] )
        goto LABEL_59;
      sub_800C2900(a1, (__int16)a2);
      v47 = *SF_DRAFT_PTR(char, (v46 + 4));
      if ( v47 == -1 )
      {
        sub_800F7A94(*(uint8 *)(v46 + 3), (__int16)v48, v49[0]);
        sub_800F5914(*(uint8 *)(v46 + 3), 1, *(uint8 *)(v46 + 5));
      }
      else
      {
        sub_800F7AFC(*(uint8 *)(v46 + 3), v47, (__int16)v48, v49[0]);
        sub_800F594C(*(uint8 *)(v46 + 3), *SF_DRAFT_PTR(char, (v46 + 4)), 1, *(uint8 *)(v46 + 5));
      }
      v24 = v7 << 16;
      return v24 >> 16;
    case 7:
    case 8:
    case 9:
    case 0xA:
LABEL_59:
      v7 = -1;
      goto LABEL_60;
    case 0xE:
      v25 = 24 * (__int16)a2 + v9;
      sub_800C34C0(*(uint8 *)(v25 + 9), (*SF_DRAFT_PTR(__int16, (v25 + 10))), sf_draft_guest_address(&v48), sf_draft_guest_address(v49), (sint16)r_u8(v25 + 18u));
      if ( !v48 )
      {
        v24 = v7 << 16;
        if ( !v49[0] )
          return v24 >> 16;
      }
      v26 = *SF_DRAFT_PTR(char, (v25 + 16));
      if ( v26 != -1 )
      {
        v27 = 0;
        if ( v26 > 0 )
        {
          v28 = 0;
          do
          {
            v29 = v28 >> 16;
            v30 = sub_800C3470((*SF_DRAFT_PTR(_DWORD, (v25 + 20))), v28 >> 16);
            v21 = sub_800FED54(v30, (*(uint8 *)(v25 + 2) << 8) | *(uint8 *)(v25 + 5), *(uint8 *)(v25 + 7)) << 16 != 0;
            v31 = v27 + 1;
            if ( !v21 )
            {
              v32 = sub_800C3470((*SF_DRAFT_PTR(_DWORD, (v25 + 20))), v29);
              sub_800F8794(v32, *(uint8 *)(v25 + 2), *(uint8 *)(v25 + 5), *(uint8 *)(v25 + 7));
              v33 = sub_800C3470((*SF_DRAFT_PTR(_DWORD, (v25 + 20))), v29);
              sub_800F903C(v33);
              v31 = v27 + 1;
            }
            v27 = v31;
            v21 = (__int16)v31 < *SF_DRAFT_PTR(char, (v25 + 16));
            v28 = v31 << 16;
          }
          while ( v21 );
        }
      }
      v34 = 0;
      sub_800E3F34();
      v35 = 24 * (__int16)a2 + v9;
      *SF_DRAFT_PTR(_DWORD, (v35 + 20)) = sub_800F79B4((*(uint8 *)(v35 + 2) << 8) | *(uint8 *)(v35 + 5), (*(uint8 *)(v35 + 7) << 8) | *(uint8 *)(v35 + 8), v48, (uint16)v49[0]);
      sub_800E3F44();
      *SF_DRAFT_PTR(_BYTE, (v35 + 16)) = 0;
      v36 = *SF_DRAFT_PTR(_DWORD, (v35 + 20));
      LOBYTE(v37) = v36;
      do
      {
        v21 = (v37 & 1) == 0;
        v38 = v34 + 1;
        if ( !v21 )
        {
          ++*SF_DRAFT_PTR(_BYTE, (v35 + 16));
          v38 = v34 + 1;
        }
        v34 = v38;
        v21 = (__int16)v38 < 24;
        v37 = v36 >> v38;
      }
      while ( v21 );
      v39 = 24 * (__int16)a2 + v9;
      v24 = v7 << 16;
      if ( *SF_DRAFT_PTR(_BYTE, (v39 + 16)) )
        return v24 >> 16;
      *SF_DRAFT_PTR(_BYTE, (v39 + 16)) = -1;
      goto LABEL_60;
    default:
LABEL_60:
      v24 = v7 << 16;
      break;
  }
  return v24 >> 16;
}
