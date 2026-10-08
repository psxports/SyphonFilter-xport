#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

extern uint32 sub_8005DC08();

extern uint32 sub_800E95D4();

extern uint32 sub_800E9CA4();



/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80080930u 0x80080930
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
uint32 sub_80080930(uint8 a1)
{
  FUNCTION_MARKER(0x80080930u, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int i; 
  int v15 = SF_DRAFT_GP;
  int j; 
  int v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  _DWORD *v21; 
  bool v22; 
  bool v23; 
  BOOL v24; 
  int result; 
  uint8 v26; 
  int v27; 
  uint8 *v28; 
  uint8 *v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  _DWORD *v34; 
  int k; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  _DWORD *v40; 
  int v41; 
  int v42; 
  int v43; 
  uint8 *m; 
  int v45; 
  int v46; 
  int v47; 
  _DWORD *v48; 
  int v49; 
  int n; 
  int v51; 
  _DWORD *v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  _DWORD *v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  __int16 v64; 
  bool v65; 
  int v66; 
  int v67; 
  int v68; 
  int ii; 
  int *v70; 
  int v71; 
  int v72; 
  _DWORD *v73; 
  char v74; 
  int v75; 
  int v76 = SF_DRAFT_GP;
  int v77; 
  int v78; 
  int v79; 

  int v81; 
  int v82; 
  int v83; 
  __int16 v84; 
  __int16 v85; 
  __int16 v86; 
  __int16 v87; 
  __int16 v88; 
  __int16 v89; 
  __int16 v90; 
  __int16 v91; 
  __int16 v92; 
  sint16 matrix_output[9];
  __int16 v102; 
  __int16 v103; 
  __int16 v104; 
  __int16 v105; 
  __int16 v106; 
  __int16 v107; 
  __int16 v108; 
  __int16 v109; 
  __int16 v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  int v116; 
  int v117; 
  int v118; 
  int v119; 
  int v120; 
  char v121; 

  v5 = -1;
  v6 = 0;
  v7 = -1;
  v8 = 0;
  v121 = 0;
  v120 = (*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u)));
  if ( a1 )
    *SF_DRAFT_PTR(_BYTE, (v3 + 1056)) = 1;
  v9 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v77 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12)) + 20));
  v78 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12)) + 24));
  v10 = v78;
  v11 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 8)) + 12));
  ++*SF_DRAFT_PTR(_DWORD, (v3 + 1052));
  v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 28));
  v13 = *SF_DRAFT_PTR(uint8, (v3 + 1056));
  v78 = -v10;
  v79 = v12;
  if ( v13 )
  {
    for ( i = 0; i < *SF_DRAFT_PTR(sint32, (v3 + 3400)); ++i )
      SF_DRAFT_PTR(uint8, 0x8012C7D8u)[i] = 0;
    sub_800C831C(0x8012C7D8u);
    v5 = (*SF_DRAFT_PTR(uint16, 0x80116946u));
    sub_80081A30((*SF_DRAFT_PTR(uint16, 0x80116946u)), *SF_DRAFT_PTR(uint8, (v15 + 1056)));
    (*SF_DRAFT_PTR(uint16, 0x80116946u)) = -1;
    goto LABEL_31;
  }
  for ( j = 0; j < *SF_DRAFT_PTR(sint32, (v3 + 3400)); ++j )
  {
    v17 = (uint8)SF_DRAFT_PTR(uint8, 0x8012C7D8u)[j];
    if ( v6 >= v17 )
    {
      if ( v8 < v17 && v7 != v5 )
      {
        v8 = (uint8)SF_DRAFT_PTR(uint8, 0x8012C7D8u)[j];
        v7 = j;
      }
    }
    else
    {
      v8 = v6;
      v7 = v5;
      v6 = (uint8)SF_DRAFT_PTR(uint8, 0x8012C7D8u)[j];
      v5 = j;
    }
  }
  if ( v8 >= 2 && v7 >= 0 )
  {
    v18 = *SF_DRAFT_PTR(_DWORD, (v3 + 3372));
    v19 = 60 * v7 + v18;
    v20 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (60 * v5 + v18)) + 16)));
    v21 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, v19) + 16)));
    v22 = 0;
    if ( v77 >= (sint32)*v20 && v77 < (sint32)v20[4] && v79 >= (sint32)v20[2] )
      v22 = v79 < (sint32)v20[6];
    v23 = 0;
    if ( v77 >= (sint32)*v21 )
    {
      v24 = v22;
      if ( v77 >= (sint32)v21[4] || (v24 = v22, v79 < (sint32)v21[2]) )
      {
LABEL_25:
        if ( !v24 )
        {
          if ( SF_DRAFT_PTR(uint8, 0x8012C7D8u)[(*SF_DRAFT_PTR(uint16, 0x80116946u))] )
          {
            v5 = (*SF_DRAFT_PTR(uint16, 0x80116946u));
          }
          else if ( v23 || v7 == (*SF_DRAFT_PTR(uint16, 0x80116946u)) )
          {
            v5 = v7;
          }
        }
        goto LABEL_31;
      }
      v23 = v79 < (sint32)v21[6];
    }
    v24 = v22;
    goto LABEL_25;
  }
LABEL_31:
  result = a1;
  if ( v5 >= 0 )
  {
    v26 = 0;
    if ( a1 || (v27 = 0, v5 != (*SF_DRAFT_PTR(uint16, 0x80116946u))) )
    {
      v28 = SF_DRAFT_PTR(uint8, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * (*SF_DRAFT_PTR(uint16, 0x80116946u)) + 144));
      v29 = SF_DRAFT_PTR(uint8, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * v5 + 144));
      if ( (*SF_DRAFT_PTR(uint16, 0x80116946u)) >= 0 )
      {
        v30 = 0;
        sub_8008005C();
        do
        {
          v31 = *v28;
          if ( v31 == 255 || (v32 = v31 << 16, v30 == 14) )
          {
            LOWORD(v31) = (*SF_DRAFT_PTR(uint16, 0x80116946u));
            v32 = (uint16)(*SF_DRAFT_PTR(uint16, 0x80116946u)) << 16;
          }
          v33 = v32 >> 16;
          if ( v32 >> 16 != 254 )
          {
            if ( !(uint8)sub_800808C4(SHIWORD(v32), sf_draft_guest_address(v29),  0) && v33 != v5 )
            {
              v34 = SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A30u)) + 8 * v33));
              sub_80081CB4(v33);
              for ( k = 0; k < (sint32)*v34; ++k )
              {
                v36 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * k + v34[1])) + 52));
                v37 = *SF_DRAFT_PTR(__int16, (v36 + 2));
                if ( v37 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && *SF_DRAFT_PTR(_DWORD, r_u32((v36 + 8))) )
                  sub_80081790(v37, 0);
              }
            }
            SF_DRAFT_PTR(uint8, 0x8012C7D8u)[(__int16)v31] = 0;
          }
          ++v28;
          ++v30;
        }
        while ( (__int16)v31 != (*SF_DRAFT_PTR(uint16, 0x80116946u)) );
      }
      v38 = 0;
      sub_80081A30(v5, *SF_DRAFT_PTR(uint8, (v3 + 1056)));
      do
      {
        v39 = *v29;
        if ( v39 == 255 )
          break;
        if ( v39 == 254 )
        {
          v26 = 1;
        }
        else
        {
          v40 = SF_DRAFT_PTR(_DWORD, r_u32((60 * v39 + *SF_DRAFT_PTR(_DWORD, (v3 + 3372)))));
          v41 = v26;
          if ( !*v40 )
          {
            sub_80081A30(*v29, *SF_DRAFT_PTR(uint8, (v3 + 1056)));
            v41 = v26;
          }
          if ( v41 && *v40 )
            sub_80081CB4(v39);
        }
        ++v38;
        ++v29;
      }
      while ( v38 < 14 );
      v42 = *SF_DRAFT_PTR(_DWORD, (60 * v5 + *SF_DRAFT_PTR(_DWORD, (v3 + 3372))));
      (*SF_DRAFT_PTR(uint16, 0x80116946u)) = v5;
      *SF_DRAFT_PTR(_DWORD, (v3 + 1032)) = v42;
      v27 = 0;
    }
    v43 = *SF_DRAFT_PTR(_DWORD, (v3 + 1052));
    for ( m = SF_DRAFT_PTR(uint8, ((*SF_DRAFT_PTR(uint32, 0x80116A60u)) + 15 * v5 + 144)); ; ++m )
    {
      v45 = *m;
      if ( (unsigned int)(v45 - 254) < 2 || (v46 = v45 << 16, v27 == 14) )
      {
        v121 = 1;
        v46 = v5 << 16;
      }
      v47 = v46 >> 16;
      v48 = SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116A30u)) + 8 * v47));
      if ( *SF_DRAFT_PTR(_DWORD, r_u32((60 * v47 + *SF_DRAFT_PTR(_DWORD, (v3 + 3372))))) )
      {
        v49 = 0;
        for ( n = *SF_DRAFT_PTR(sint32, (60 * v47 + *SF_DRAFT_PTR(sint32, (v3 + 3372)))); v49 < (sint32)*v48; ++v49 )
        {
          v51 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (4 * v49 + v48[1])) + 52));
          if ( !v51 || (*SF_DRAFT_PTR(_BYTE, (v51 + 35)) & 4) == 0 && *SF_DRAFT_PTR(_BYTE, (v51 + 34)) != 2 && (v49 & 1) == (v43 & 1) )
            continue;
          v52 = SF_DRAFT_PTR(_DWORD, r_u32((v51 + 8)));
          if ( !v52 )
            continue;
          v81 = *SF_DRAFT_PTR(_DWORD, (v52[3] + 20));
          v82 = *SF_DRAFT_PTR(_DWORD, (v52[3] + 24));
          v53 = *SF_DRAFT_PTR(_DWORD, (v52[3] + 28));
          v82 = -v82;
          v83 = v53;
          v54 = sub_8007FFD0(sf_draft_guest_address(&v77), sf_draft_guest_address(&v81));
          if ( *SF_DRAFT_PTR(_BYTE, (v51 + 33)) )
            v55 = 32 * *SF_DRAFT_PTR(uint8, (v51 + 33));
          else
            v55 = (*SF_DRAFT_PTR(uint32, 0x80116B54u));
          if ( !v52[1] )
            v52[1] = n;
          if ( v55 < v54 || (v56 = 1, (*SF_DRAFT_PTR(_BYTE, (v51 + 35)) & 2) != 0) )
          {
            v57 = *SF_DRAFT_PTR(__int16, (v51 + 2));
            if ( v57 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              continue;
            v56 = 0;
            if ( !*v52 )
              continue;
          }
          else
          {
            v57 = *SF_DRAFT_PTR(__int16, (v51 + 2));
          }
          sub_80081790(v57, v56);
        }
      }
      if ( v121 )
        break;
      ++v27;
    }
    v58 = SF_DRAFT_PTR(_DWORD, r_u32((v120 + 140)));
    if ( v58 )
    {
      v102 = **(_WORD **)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u)));
      v59 = (0u - *SF_DRAFT_PTR(uint16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 2)));
      v103 = (0u - *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 2)));
      v104 = *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 4));
      v60 = (0u - *SF_DRAFT_PTR(uint16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 6)));
      v105 = (0u - *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 6)));
      v106 = *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 8));
      v61 = (0u - *SF_DRAFT_PTR(uint16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 10)));
      v107 = (0u - *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 10)));
      v108 = *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 12));
      v62 = (0u - *SF_DRAFT_PTR(uint16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 14)));
      v109 = (0u - *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 14)));
      v110 = *SF_DRAFT_PTR(_WORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 16));
      v111 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 20));
      v112 = (0u - *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 24)));
      v63 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 28));
      v114 = (__int16)v59;
      v115 = v106;
      v116 = (__int16)v62;
      v81 = -v102;
      v82 = -(__int16)v60;
      v83 = -v108;
      v117 = -v104;
      v118 = -(__int16)v61;
      v119 = -v110;
      v84 = -v102;
      v87 = -(__int16)v60;
      v90 = -v108;
      v85 = v59;
      v88 = v106;
      v91 = v62;
      v113 = v63;
      v86 = -v104;
      v89 = -(__int16)v61;
      v92 = -v110;
      if ( (_WORD)v60 )
      {
        v82 = 0;
        sub_800C720C(sf_draft_guest_address(&v81), sf_draft_guest_address(&v81));
      }
      v115 = 4096;
      matrix_output[4] = 4096;
      v118 = 0;
      v114 = 0;
      v116 = 0;
      matrix_output[1] = 0;
      matrix_output[7] = 0;
      matrix_output[5] = 0;
      v117 = -v83;
      v119 = v81;
      matrix_output[0] = v81;
      matrix_output[3] = v82;
      matrix_output[6] = v83;
      matrix_output[2] = -(__int16)v83;
      matrix_output[8] = v81;
      do
      {
        v64 = *SF_DRAFT_PTR(_WORD, (*v58 + 20));
        v65 = (v64 & 0x2000) == 0;
        v66 = v64 & 0x3FF;
        if ( !v65 )
        {
          v67 = *SF_DRAFT_PTR(_DWORD, (76 * v66 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
          if ( (*SF_DRAFT_PTR(_BYTE, (v67 + 32)) & 0x40) != 0 )
            sub_80015364(0xAu, 2u, 65534, *SF_DRAFT_PTR(__int16, (v67 + 2)), 0, 0, 0, 0);
          if ( (*SF_DRAFT_PTR(_BYTE, (v67 + 32)) & 8) != 0 )
          {
            v68 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12));
            if ( *SF_DRAFT_PTR(_DWORD, (v68 + 32)) )
              goto LABEL_98;
            *SF_DRAFT_PTR(_WORD, v68) = v84;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 2)) = -v85;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 4)) = v86;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 6)) = -v87;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 8)) = v88;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 10)) = -v89;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 12)) = v90;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 14)) = -v91;
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 16)) = v92;
          }
          else if ( (*SF_DRAFT_PTR(_BYTE, (v67 + 32)) & 0x20) != 0 )
          {
            v68 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12));
            if ( *SF_DRAFT_PTR(_DWORD, (v68 + 32)) )
            {
LABEL_98:
              sub_800DC0B8(v68, 0, sf_draft_guest_address(matrix_output));
              goto LABEL_99;
            }
            *SF_DRAFT_PTR(_WORD, v68) = matrix_output[0];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 2)) = -matrix_output[1];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 4)) = matrix_output[2];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 6)) = -matrix_output[3];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 8)) = matrix_output[4];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 10)) = -matrix_output[5];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 12)) = matrix_output[6];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 14)) = -matrix_output[7];
            *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v67 + 8)) + 12)) + 16)) = matrix_output[8];
          }
        }
LABEL_99:
        v58 = SF_DRAFT_PTR(_DWORD, v58[2]);
      }
      while ( v58 );
    }
    for ( ii = 0; ii < *SF_DRAFT_PTR(sint32, (v3 + 1028)); ++ii )
    {
      v70 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012FD70u)[ii]);
      v71 = *(__int16 *)v70;
      v72 = *SF_DRAFT_PTR(_DWORD, (76 * v71 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      v73 = SF_DRAFT_PTR(_DWORD, r_u32((v72 + 8)));
      if ( *((_BYTE *)v70 + 2) )
      {
        if ( !*v73 )
        {
          v74 = 0;
          if ( v71 != (*SF_DRAFT_PTR(sint32, 0x80116AB0u)) && v71 >= 0 && v71 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) )
          {
            if ( *SF_DRAFT_PTR(_BYTE, (v72 + 34)) == 2 )
              v74 = sub_80060500(*SF_DRAFT_PTR(__int16, (v72 + 2)));
            if ( *SF_DRAFT_PTR(__int16, (v72 + 2)) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(_BYTE, (v72 + 34)) != 2 || v74) )
            {
              if ( (*SF_DRAFT_PTR(_BYTE, (v72 + 32)) & 2) != 0 )
                sub_80015364(6u, 1u, 65534, *(__int16 *)v70, 0, 0, 0, 0);
              sub_800C818C(v120, sf_draft_guest_address(v73));
            }
          }
        }
      }
      else if ( *v73 )
      {
        if ( (*SF_DRAFT_PTR(_BYTE, (v72 + 32)) & 4) != 0 )
          sub_80015364(5u, 4u, 65534, v71, 0, 0, 0, 0);
        v75 = *(__int16 *)v70;
        if ( v75 != (*SF_DRAFT_PTR(sint32, 0x80116AB0u)) && v75 >= 0 && v75 < (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) )
        {
          sub_800C8218(v120, sf_draft_guest_address(v73));
          if ( (*SF_DRAFT_PTR(_BYTE, (v72 + 35)) & 8) != 0 )
            *SF_DRAFT_PTR(_BYTE, (v72 + 35)) = *SF_DRAFT_PTR(_BYTE, (v72 + 35)) & 0xF5 | 2;
        }
      }
    }
    result = *SF_DRAFT_PTR(uint8, (v3 + 1056));
    *SF_DRAFT_PTR(_DWORD, (v3 + 1028)) = 0;
    if ( result )
    {
      result = sub_80082724();
      *SF_DRAFT_PTR(_BYTE, (v76 + 1056)) = 0;
    }
  }
  return result;
}

// FUNCTION_MARKER 0x8005DE18u 0x8005de18
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8005DE18(sint32 a1)
{
  FUNCTION_MARKER(0x8005DE18u, "SCUS_942.40");
  int v1 = SF_DRAFT_GP;
  int v3; 
  int v4; 
  int v5; 
  bool v6; 
  char v7; 
  int v8; 
  char v9; 
  int v10; 
  char v11; 
  int v12; 
  char v13; 
  int v14; 
  int v15; 
  int v16; 
  __int16 *v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
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
  char v37; 
  int v38; 
  int v39; 
  int v40 = SF_DRAFT_GP;
  int v41; 
  _DWORD *v42; 
  _DWORD *v43; 
  int v44; 
  int v45 = SF_DRAFT_GP;
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int *v52; 
  __int16 *v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int result; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
int v69; 
  int v70; 
  int v71; 
int v73; 

  v3 = *SF_DRAFT_PTR(_DWORD, (a1 + 28));
  v4 = *SF_DRAFT_PTR(uint8, (v3 + 83));
  v5 = *SF_DRAFT_PTR(uint8, (v3 + 70));
  v6 = v4 == 0;
  v7 = v4 - 1;
  if ( !v6 )
    *SF_DRAFT_PTR(_BYTE, (v3 + 83)) = v7;
  v8 = *SF_DRAFT_PTR(uint8, (v3 + 84));
  v6 = v8 == 0;
  v9 = v8 - 1;
  if ( !v6 )
    *SF_DRAFT_PTR(_BYTE, (v3 + 84)) = v9;
  v10 = *SF_DRAFT_PTR(uint8, (v3 + 76));
  v6 = v10 == 0;
  v11 = v10 - 1;
  if ( !v6 )
    *SF_DRAFT_PTR(_BYTE, (v3 + 76)) = v11;
  if ( *SF_DRAFT_PTR(_DWORD, (v3 + 60)) == 62 )
  {
    v12 = *SF_DRAFT_PTR(uint8, (v3 + 85));
    v6 = v12 == 0;
    v13 = v12 - 1;
    if ( v6 )
      *SF_DRAFT_PTR(_DWORD, (v3 + 60)) = 0;
    else
      *SF_DRAFT_PTR(_BYTE, (v3 + 85)) = v13;
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v3 + 80)) )
  {
    if ( ((*SF_DRAFT_PTR(uint32, 0x80116A88u)) & 1) == (*SF_DRAFT_PTR(_WORD, (a1 + 2)) & 1) )
      --*SF_DRAFT_PTR(_BYTE, (v3 + 80));
  }
  else if ( *SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 82)) >= 3u
         && *SF_DRAFT_PTR(_BYTE, (v3 + 72)) == 2
         && (*SF_DRAFT_PTR(_BYTE, (v3 + 82)) != 9 || (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x100) == 0) )
  {
    sub_80056740(a1, 5);
  }
  if ( *SF_DRAFT_PTR(_BYTE, (v3 + 72)) )
  {
    v14 = *SF_DRAFT_PTR(__int16, (a1 + 2));
    if ( (((_BYTE)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) + (_BYTE)v14) & 0x1F) == 0
      && (v14 == 666 || *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v14 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 92) )
    {
      sub_80057BB4(5, *SF_DRAFT_PTR(_DWORD, (a1 + 12)), 960, v14);
    }
  }
  if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x400) != 0 )
  {
    v15 = *SF_DRAFT_PTR(uint8, (v3 + 66));
    v16 = *SF_DRAFT_PTR(__int16, (v3 + 48));
    v17 = SF_DRAFT_PTR(__int16, (10 * v15 + *SF_DRAFT_PTR(_DWORD, (v3 + 40))));
    v18 = *v17;
    *SF_DRAFT_PTR(_WORD, (v1 + 3816)) = v17[3];
    if ( v16 == 0x7FFF )
      sub_8005C96C(a1, *SF_DRAFT_PTR(__int16, (10 * v15 + *SF_DRAFT_PTR(_DWORD, (v3 + 40)))));
    else
      *SF_DRAFT_PTR(_WORD, (v3 + 48)) = v16 - 1;
    if ( *SF_DRAFT_PTR(__int16, (v3 + 48)) <= 0 )
    {
      v19 = v15 + 1;
      if ( v18 )
      {
        v21 = 10 * v19;
        v22 = 10 * v19 + *SF_DRAFT_PTR(_DWORD, (v3 + 40));
        *SF_DRAFT_PTR(_WORD, (v3 + 48)) = *SF_DRAFT_PTR(_WORD, (v22 + 2));
        if ( *SF_DRAFT_PTR(_WORD, (v22 + 4)) )
          *SF_DRAFT_PTR(_WORD, (v3 + 48)) += *SF_DRAFT_PTR(_WORD, (v21 + *SF_DRAFT_PTR(_DWORD, (v3 + 40)) + 4)) & sub_800EC8F4();
        if ( *SF_DRAFT_PTR(_WORD, (v21 + *SF_DRAFT_PTR(_DWORD, (v3 + 40)) + 8)) )
          v23 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) | 0x8000;
        else
          v23 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0xFFFF7FFF;
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v23;
        if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x8000) != 0 )
          *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = 0;
        sub_8005C96C(a1, *SF_DRAFT_PTR(__int16, (10 * v19 + *SF_DRAFT_PTR(_DWORD, (v3 + 40)))));
        *SF_DRAFT_PTR(_BYTE, (v3 + 66)) = v19;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) &= ~0x400u;
        v20 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
        *SF_DRAFT_PTR(_WORD, (v3 + 48)) = 0;
        *SF_DRAFT_PTR(_BYTE, (v3 + 66)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v20 & 0xFFFF77FF | 0x800;
      }
    }
    v24 = *SF_DRAFT_PTR(_DWORD, (v3 + 4));
    v25 = *SF_DRAFT_PTR(_DWORD, (v3 + 8));
    (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = *SF_DRAFT_PTR(_DWORD, v3);
    (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = v24;
    (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v25;
    (*SF_DRAFT_PTR(uint32, 0x8011CF04u)) = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
    v5 = *SF_DRAFT_PTR(__int16, (v1 + 3816));
  }
  v26 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
  if ( (v26 & 0x400) != 0 )
    goto LABEL_81;
  v27 = *SF_DRAFT_PTR(_DWORD, (v1 + 2864));
  if ( v27 )
  {
    if ( (v26 & 0x40000) != 0 || (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 32)) & 0x80000) != 0 || (v26 & 0x1000) != 0 )
    {
      v5 = 5;
    }
    else if ( (v26 & 0x800) == 0 )
    {
      v66 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v27 + 4));
      v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 80));
      if ( v28 < 0 )
        v29 = -(-v28 >> 12);
      else
        v29 = v28 >> 12;
      v73 = v29;
      v30 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 88));
      v31 = v30 >> 12;
      if ( v30 < 0 )
        v31 = -(-v30 >> 12);
      v32 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 72));
      (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v27))
                     - (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 64))
                      + v73);
      (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = 0;
      (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v66 - (v32 + v31);
      if ( *SF_DRAFT_PTR(_DWORD, v3) * (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) + *SF_DRAFT_PTR(_DWORD, (v3 + 8)) * (v66 - (v32 + v31)) > 0 )
      {
        if ( (v26 & 0x200000) != 0 )
        {
          sub_80059EC0(a1, *SF_DRAFT_PTR(_DWORD, (v1 + 2864)));
          *SF_DRAFT_PTR(_DWORD, (v3 + 32)) &= ~0x200000u;
        }
        v34 = *SF_DRAFT_PTR(_DWORD, (v1 + 2864));
        v35 = (uint16)(*SF_DRAFT_PTR(_WORD, (12 * *(uint8 *)(v3 + 67) + v34 + 6)) & 0xF00) >> 8;
        if ( v35 == (uint16)(*SF_DRAFT_PTR(_WORD, (12 * *(uint8 *)(v3 + 68) + v34 + 6)) & 0xF00) >> 8 )
        {
          if ( *SF_DRAFT_PTR(_BYTE, (v3 + 72)) )
          {
            if ( v35 == 2 )
            {
              sub_80059108(a1);
              v5 = 6;
            }
          }
          else if ( v35 == 3 )
          {
            v5 = 7;
          }
        }
      }
      else
      {
        v33 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) = v33 & 0xFFDFFFFF;
        if ( (v33 & 0x4000) != 0 || *SF_DRAFT_PTR(_BYTE, (v3 + 72)) == 1 )
          sub_8005C9E4(*SF_DRAFT_PTR(_DWORD, (v1 + 2864)), a1, 6);
        else
          sub_8005C9E4(*SF_DRAFT_PTR(_DWORD, (v1 + 2864)), a1, 0);
      }
    }
    v26 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
    if ( v5 == 5 )
      goto LABEL_81;
    v36 = *SF_DRAFT_PTR(_DWORD, (v3 + 32)) & 0x1000;
    if ( (v26 & 0x800) == 0 )
      goto LABEL_82;
    v37 = *SF_DRAFT_PTR(_BYTE, (v3 + 69)) + 1;
    if ( (*SF_DRAFT_PTR(_BYTE, (v3 + 69)) & 0x1F) != 0 )
    {
      v5 = 5;
    }
    else
    {
      v38 = *SF_DRAFT_PTR(_DWORD, (v1 + 2864));
      v64 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v38));
      v65 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v38 + 2));
      v67 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v38 + 4));
      v39 = *SF_DRAFT_PTR(uint8, (v3 + 67));
      *SF_DRAFT_PTR(_BYTE, (v3 + 75)) = *SF_DRAFT_PTR(_BYTE, (12 * v39 + v38 + 6)) >> 4;
      if ( sub_80059CF4(a1, *SF_DRAFT_PTR(_DWORD, (v1 + 2864)), v39) )
      {
        v41 = *SF_DRAFT_PTR(_DWORD, (v40 + 2864));
        v69 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v41));
        v70 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v41 + 2));
        v71 = *SF_DRAFT_PTR(__int16, (12 * *(uint8 *)(v3 + 67) + v41 + 4));
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 68)) = 1;
        v42 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
        v42[18] = v64;
        v42[19] = v65;
        v42[20] = v67;
        v42[21] = (sf_draft_unbound_stack_field(0x8005DE18u, 0x1Cu), 0u);
        v43 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
        v43[22] = v69;
        v43[23] = v70;
        v43[24] = v71;
        v43[25] = (sf_draft_unbound_stack_field(0x8005DE18u, 0x2Cu), 0u);
        v44 = (*SF_DRAFT_PTR(uint32, 0x8011E660u));
        *SF_DRAFT_PTR(_DWORD, (v3 + 4)) = 0;
        *SF_DRAFT_PTR(_DWORD, v3) = v69 - v44;
        *SF_DRAFT_PTR(_DWORD, (v3 + 8)) = v71 - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
        *SF_DRAFT_PTR(_WORD, (v3 + 50)) = v65;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300)) = v65;
        sub_800C720C(v3, v3);
        v46 = *SF_DRAFT_PTR(_DWORD, (v3 + 4));
        v47 = *SF_DRAFT_PTR(_DWORD, (v3 + 8));
        (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = *SF_DRAFT_PTR(_DWORD, v3);
        (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = v46;
        (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v47;
        (*SF_DRAFT_PTR(uint32, 0x8011CF04u)) = *SF_DRAFT_PTR(_DWORD, (v3 + 12));
        v48 = *SF_DRAFT_PTR(uint8, (v3 + 72));
        *SF_DRAFT_PTR(_DWORD, (v3 + 32)) &= ~0x800u;
        if ( v48 )
        {
          v49 = *SF_DRAFT_PTR(_DWORD, (v45 + 2864));
          v50 = (uint16)(*SF_DRAFT_PTR(_WORD, (12 * *(uint8 *)(v3 + 67) + v49 + 6)) & 0xF00) >> 8;
          if ( v50 == (uint16)(*SF_DRAFT_PTR(_WORD, (12 * *(uint8 *)(v3 + 68) + v49 + 6)) & 0xF00) >> 8 )
          {
            *SF_DRAFT_PTR(_BYTE, (v3 + 65)) = 0;
            if ( v50 == 4 )
            {
              sub_80058FC0(a1);
            }
            else if ( v50 == 5 )
            {
              sub_800E0C00(v3, *SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 192);
              v5 = 7;
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 196)) = sub_800EC124(*SF_DRAFT_PTR(_DWORD, v3), *SF_DRAFT_PTR(_DWORD, (v3 + 8)));
              *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 200)) = 0;
              sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 46);
            }
          }
        }
        goto LABEL_80;
      }
      sub_8005C9E4(*SF_DRAFT_PTR(_DWORD, (v40 + 2864)), a1, 0);
      v5 = 5;
      v37 = *SF_DRAFT_PTR(_BYTE, (v3 + 69)) + 1;
    }
    *SF_DRAFT_PTR(_BYTE, (v3 + 69)) = v37;
LABEL_80:
    v26 = *SF_DRAFT_PTR(_DWORD, (v3 + 32));
    goto LABEL_81;
  }
  v5 = 5;
LABEL_81:
  v36 = v26 & 0x1000;
LABEL_82:
  if ( v36 )
  {
    sub_8005DC08(sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, a1)), sf_draft_guest_address(SF_DRAFT_PTR(_DWORD, v3)));
    goto LABEL_124;
  }
  if ( v5 == 5 )
  {
    v51 = a1;
    if ( *SF_DRAFT_PTR(_BYTE, (v3 + 72)) == 2 )
    {
      v52 = 0;
      if ( (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 0x20000000) == 0 )
      {
        v53 = SF_DRAFT_PTR(__int16, r_u32((a1 + 20)));
        v54 = *((_DWORD *)v53 + 1);
        v55 = 0;
        if ( (v54 & 8) != 0 )
        {
          v56 = *v53;
          if ( v56 >= 0 )
            v52 = SF_DRAFT_PTR(int, r_u32((76 * v56 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)));
          if ( v52 && (v54 & 0xA) != 0 )
          {
            if ( v56 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
            {
              (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = *SF_DRAFT_PTR(_DWORD, v52[3]) - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
              (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = *SF_DRAFT_PTR(_DWORD, (v52[3] + 4)) - (*SF_DRAFT_PTR(uint32, 0x8011E664u));
              v61 = *SF_DRAFT_PTR(_DWORD, (v52[3] + 8));
              (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = 0;
              (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v61 - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
              sub_800C720C(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)));
              goto LABEL_106;
            }
          }
          else
          {
            v57 = *SF_DRAFT_PTR(__int16, (a1 + 2));
            if ( v57 == 666 )
              v58 = 666;
            else
              v58 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v57 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
            if ( v58 != 53 )
              goto LABEL_102;
            if ( *((__int16 *)v52 + 1) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
            {
              if ( !(*SF_DRAFT_PTR(uint16, 0x80130C88u)) )
              {
                v59 = (*SF_DRAFT_PTR(uint32, 0x8011E668u));
                (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = 3559 - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
                v60 = 7143;
LABEL_101:
                (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v60 - v59;
LABEL_106:
                if ( v55 )
                {
                  (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = *SF_DRAFT_PTR(_DWORD, (v3 + 16)) - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
                  (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = *SF_DRAFT_PTR(_DWORD, (v3 + 20)) - (*SF_DRAFT_PTR(uint32, 0x8011E664u));
                  v62 = *SF_DRAFT_PTR(_DWORD, (v3 + 24));
                  (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = 0;
                  (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = v62 - (*SF_DRAFT_PTR(uint32, 0x8011E668u));
                  sub_800C720C(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)));
                }
                (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = 0;
                v51 = a1;
                v52 = SF_DRAFT_PTR(uint32, 0x8011CEF8u);
                goto LABEL_110;
              }
              if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 3 )
              {
                v59 = (*SF_DRAFT_PTR(uint32, 0x8011E668u));
                (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = 712 - (*SF_DRAFT_PTR(uint32, 0x8011E660u));
                v60 = -8796;
                goto LABEL_101;
              }
LABEL_102:
              (*SF_DRAFT_PTR(uint32, 0x8011CEF8u)) = 0;
              (*SF_DRAFT_PTR(uint32, 0x8011CF00u)) = 0;
              goto LABEL_106;
            }
          }
          v55 = 1;
          goto LABEL_106;
        }
      }
    }
    else
    {
      v52 = 0;
    }
LABEL_110:
    sub_8004A18C(v51, sf_draft_guest_address(v52),  5);
    if ( *SF_DRAFT_PTR(_BYTE, (v3 + 72)) == 2 && (v26 & 0x400) == 0 && !*SF_DRAFT_PTR(_DWORD, (v3 + 60)) )
      sub_8005D088(a1);
    goto LABEL_124;
  }
  *SF_DRAFT_PTR(_BYTE, (v3 + 74)) = 0;
  if ( v5 == 7 && (*SF_DRAFT_PTR(_DWORD, r_u32((a1 + 16))) & 2) != 0 && (v26 & 0x400) == 0 && !*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 28)) + 60)) )
  {
    sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 72);
    *SF_DRAFT_PTR(_DWORD, (v3 + 60)) = 72;
  }
  (*SF_DRAFT_PTR(uint32, 0x8011CEFCu)) = 0;
  sub_800C720C(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)), sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)));
  if ( *SF_DRAFT_PTR(_BYTE, (v3 + 82)) == 9 )
    v5 = 7;
  sub_8004A18C(a1, sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x8011CEF8u)),  v5);
  if ( (*SF_DRAFT_PTR(_DWORD, (v3 + 80)) & 0xFF00FF) == 0x20000 && *SF_DRAFT_PTR(__int16, r_u32((a1 + 20))) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
  {
    sub_80056740(a1, 3);
    *SF_DRAFT_PTR(_BYTE, (v3 + 80)) = -1;
  }
LABEL_124:
  sub_80028F3C(*SF_DRAFT_PTR(__int16, (a1 + 2)), 4);
  result = (*SF_DRAFT_PTR(uint16, 0x80116A9Cu));
  if ( (*SF_DRAFT_PTR(uint16, 0x80116A9Cu)) )
  {
    result = 9;
    if ( (((_BYTE)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) + 4 * (uint8)*SF_DRAFT_PTR(_WORD, (a1 + 2))) & 0x1F) == 0 )
    {
      if ( (*SF_DRAFT_PTR(uint16, 0x80130C88u)) == 9 )
        return ((int (*)(void))(*SF_DRAFT_PTR(uint8, 0x8014AC70u)))();
      else
        return ((int (*)(void))(*SF_DRAFT_PTR(uint8, 0x8014AB64u)))();
    }
  }
  return result;
}

/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D0058_stage1(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D0058_stage2(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D0058_stage3(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D0058_stage4(sint32 input1, sint32 input2, sint32 input3);
/* Geometry operation preserves canonical SDK state */
extern void sf_draft_geometry_800D0058_stage5(sint32 input1, sint32 input2, sint32 input3);
// FUNCTION_MARKER 0x800D0058u 0x800d0058
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800D0058(sint32 a1, uint32 a2, sint32 a3)
{
  int * native_a2 = SF_DRAFT_PTR(int, a2);
  FUNCTION_MARKER(0x800D0058u, "SCUS_942.40");
  sint32 temporary_v0; /* TODO Geometry value type */
  sint32 temporary_s7; /* TODO Geometry value type */
  sint32 temporary_s5; /* TODO Geometry value type */
  sint32 temporary_s3; /* TODO Geometry value type */
  sint32 temporary_s2; /* TODO Geometry value type */
  sint32 temporary_s1; /* TODO Geometry value type */
  sint32 temporary_a3; /* TODO Geometry value type */
  sint32 temporary_a2; /* TODO Geometry value type */
  int v3 = SF_DRAFT_GP;
  int *v4; 
  int v5; 
  int v6; 
  int result; 
  __int16 v8; 
  int v9; 
  int v10; 
  int v11; 
  bool v12; 
  int v13; 
  int v14; 

  int v16; 
  int v17; 
  int v18; 
  int v19; 
  _DWORD *v20; 
  _DWORD *v21; 
  char v22; 
  int v23; 
  int v24; 
  __int16 *v25; 
  int v26; 
  _DWORD *v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  __int16 v34; 
  int v35; 
  int v36; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v49; 
  int v51; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  uint16 v58; 
  int v59; 
  int v60; 
  int v63; 
  int v64; 
  int *v65; 
  int v66; 
  int v67; 
  int *v68; 
  int v69; 
  int v70; 
  BOOL v71; 
  char v72; 
  int *v73; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int *v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  _BYTE v90[16]; 
  _DWORD v91[5]; 
  _BYTE v92[20]; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  uint8 v103; 
  char v104; 
  int v105; 
  int *v106; 
  __int16 v107; 
  bool v108; 
  bool v109; 
  unsigned int v110; 
  int v111; 
  int v112; 
  uint16 v113; 
  _DWORD *v114; 
  uint16 v115; 
  _DWORD *v116; 
  int v117; 

  v97 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u));
  v4 = native_a2;
  v93 = a1;
  v117 = a3;
  v95 = 0;
  v98 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u));
  v5 = *SF_DRAFT_PTR(uint8, (a1 + 9));
  v94 = SF_DRAFT_PTR(uint32, 0x8012FA40u)[0];
  v96 = v5;
  if ( v5 )
    v98 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) + ((int)(uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) >> 3);
  v6 = *SF_DRAFT_PTR(_DWORD, (v3 + 2236));
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v106 = 0;
  v99 = v98 + ((4096 - v98) >> (BYTE2((*SF_DRAFT_PTR(uint32, 0x80116458u))) - 1));
  v100 = (4096 - v98) >> (BYTE2((*SF_DRAFT_PTR(uint32, 0x80116458u))) - 1);
  v101 = (*SF_DRAFT_PTR(uint32, 0x80116450u));
  v105 = *SF_DRAFT_PTR(_DWORD, (v6 + 16));
  if ( v96 || (result = (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1, ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) == 0) )
  {
    v8 = *SF_DRAFT_PTR(_WORD, (v93 + 6));
    *SF_DRAFT_PTR(_DWORD, (v3 + 2276)) = 0;
    *SF_DRAFT_PTR(_DWORD, (v3 + 2228)) = (*SF_DRAFT_PTR(uint32, 0x8010E02Cu));
    if ( (v8 & 0x10) != 0 )
    {
      if ( *SF_DRAFT_PTR(_DWORD, (v3 + 3776)) == *SF_DRAFT_PTR(_DWORD, (v3 + 2264)) )
        v104 = 1;
      else
        v103 = 1;
    }
    if ( native_a2 && *SF_DRAFT_PTR(_BYTE, (v93 + 9)) )
      v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8012D724u)));
    if ( *SF_DRAFT_PTR(_BYTE, (v3 + 2280)) )
    {
      *SF_DRAFT_PTR(_BYTE, (v3 + 2280)) = 0;
      sub_800D0000();
    }
    if ( (*SF_DRAFT_PTR(_WORD, (v93 + 6)) & 0x10) != 0 )
    {
      v9 = *SF_DRAFT_PTR(_DWORD, (v3 + 2256)) + 1;
      v10 = *SF_DRAFT_PTR(_DWORD, (v3 + 2256));
      *SF_DRAFT_PTR(_DWORD, (v3 + 2256)) = v9;
      if ( v9 == 5 )
        *SF_DRAFT_PTR(_DWORD, (v3 + 2256)) = 0;
      v106 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012DFD8u)[17 * v10]);
      v106[16] = 0;
    }
    result = 0;
    if ( v4 )
    {
      v114 = v91;
      v116 = &v91[v95];
      do
      {
        v11 = *v4;
        v12 = 0;
        if ( v104 )
          v12 = *SF_DRAFT_PTR(_DWORD, (v11 + 16)) == v105;
        v13 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v11 + 16)) + 40));
        if ( (v13 & 0x400000) != 0
          && *SF_DRAFT_PTR(_DWORD, (v11 + 24))
          && *SF_DRAFT_PTR(_DWORD, (v11 + 36))
          && ((*SF_DRAFT_PTR(_BYTE, (v11 + 8)) & 8) == 0 || v12)
          && ((v13 & 0x2000000) == 0 || v12) )
        {
          v14 = 4500;
          if ( (*SF_DRAFT_PTR(_BYTE, (v11 + 10)) & 0x40) != 0 )
            v14 = 20000;
          sub_800C6F44(r_u32(v11 + 12));
          v16 = v14;
          if ( !v12 )
          {
            sub_800D0DA8(v11);
            v16 = v14;
          }
          v17 = sub_800D1898(v16, 240);
          if ( (__int16)v17 >= 1001 && !v96 )
            v17 = sub_800D1898(v14, 205);
          v18 = v17 << 16;
          if ( v11 != v94
            || (v19 = v96, *SF_DRAFT_PTR(_DWORD, (v3 + 2240)) = (__int16)v17, !v19)
            && (*SF_DRAFT_PTR(_WORD, (v93 + 6)) & 0x10) == 0
            && (v18 = v17 << 16, ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) == 0) )
          {
            if ( v18 )
            {
              if ( v95 >= 6 )
              {
                v116 = (uint32 *)v92;
                v95 = 5;
              }
              v20 = v116;
              *v116 = v11;
              v21 = v114;
              v116 = v20 + 1;
              ++v95;
              v114 = SF_DRAFT_PTR(_DWORD, ((char *)v114 + 2));
              if ( v12 )
                *((_WORD *)v21 + 12) = 200;
              else
                *((_WORD *)v21 + 12) = v17;
            }
            else
            {
              *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v11 + 28)) + 18)) = 100;
            }
          }
        }
        result = *SF_DRAFT_PTR(_BYTE, (v11 + 8)) & 0xBF;
        v22 = *SF_DRAFT_PTR(_BYTE, (v11 + 9)) & 0xDF;
        *SF_DRAFT_PTR(_BYTE, (v11 + 8)) = result;
        *SF_DRAFT_PTR(_BYTE, (v11 + 9)) = v22;
        v4 = SF_DRAFT_PTR(int, v4[2]);
      }
      while ( v4 );
    }
    v97 = 0;
    if ( v95 > 0 )
    {
      v110 = 20 * v117;
      v111 = 0;
      do
      {
        v23 = *(_DWORD *)&v90[v111 + 16];
        v24 = *SF_DRAFT_PTR(_DWORD, (v23 + 16));
        v25 = SF_DRAFT_PTR(__int16, r_u32((v23 + 28)));
        if ( v96 )
          v26 = v111 + (*SF_DRAFT_PTR(uint16, 0x80116460u)) + 2;
        else
          v26 = v111 + (*SF_DRAFT_PTR(uint16, 0x80116460u));
        v117 = v26;
        v108 = 0;
        v27 = SF_DRAFT_PTR(_DWORD, r_u32((v24 + 32)));
        v28 = *(uint16 *)&v92[2 * v97 + 4];
        if ( v104 )
          v108 = v24 == v105;
        v113 = *SF_DRAFT_PTR(_WORD, (v93 + 6));
        v29 = v25[2];
        v109 = v23 == v94;
        if ( v29 >= 4096 )
          LOWORD(v29) = 4095;
        v30 = v25[3];
        v115 = v29;
        if ( v30 >= 4096 )
          v30 = 4095;
        v31 = v25[4];
        temporary_s2 = v30;
        if ( v31 >= 4096 )
          v31 = 4095;
        temporary_s1 = v31;
        v112 = v24;
        v34 = sub_800D0028(v23);
        v25[9] = 0;
        v107 = v34;
        v35 = v103;
        v36 = v112;
        *SF_DRAFT_PTR(_DWORD, (v3 + 2248)) = 1536;
        temporary_s5 = 0;
        if ( v35 )
        {
          temporary_s7 = 3000;
          temporary_s3 = 0;
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D0058_stage1(temporary_s5, temporary_s7, temporary_s3);
          goto LABEL_102;
        }
        if ( v101 )
        {
          if ( v99 < (__int16)v28 && !v96 && (*SF_DRAFT_PTR(_BYTE, (v23 + 10)) & 0x10) == 0 )
          {
            v25[9] = 100;
            goto LABEL_141;
          }
          v40 = v28 << 16;
          if ( v98 < (__int16)v28 )
          {
            v41 = v99 - (__int16)v28;
            v42 = 100 * v41;
            if ( !v100 )
              _break(7u, 0);
            if ( v100 == -1 && v42 == 0x80000000 )
              _break(6u, 0);
            v43 = v42 / v100;
            v44 = 1536 * (v99 - (__int16)v28);
            if ( v100 == -1 && v44 == 0x80000000 )
              _break(6u, 0);
            v45 = v44 / v100;
            v46 = (__int16)v115 * v41;
            v47 = v100;
            if ( v100 == -1 && v46 == 0x80000000 )
              _break(6u, 0);
            temporary_a3 = v46 / v100;
            v49 = (__int16)temporary_s2 * v41;
            if ( v100 == -1 && v49 == 0x80000000 )
              _break(6u, 0);
            temporary_a2 = v49 / v100;
            v51 = (__int16)temporary_s1 * v41;
            v25[9] = 100 - v43;
            *SF_DRAFT_PTR(_DWORD, (v3 + 2248)) = v45;
            if ( v47 == -1 && v51 == 0x80000000 )
              _break(6u, 0);
            temporary_v0 = v51 / v47;
            /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D0058_stage2(temporary_a3, temporary_a2, temporary_v0);
            goto LABEL_102;
          }
        }
        else
        {
          v40 = v28 << 16;
        }
        v53 = v40 >> 16;
        if ( v40 >> 16 >= 512 && *SF_DRAFT_PTR(_DWORD, (v36 + 36)) )
        {
          v54 = 1024 - v53;
          v55 = 2 * (1024 - v53);
          if ( v54 < 0 )
          {
            v54 = 0;
            v55 = 0;
          }
          v56 = v55 + v54;
          *SF_DRAFT_PTR(_DWORD, (v3 + 2248)) = v56;
          v57 = 1536 - v56;
          if ( v57 > 0 )
          {
            v58 = v115 + v57;
            if ( (__int16)v115 + v57 >= 4096 )
              v58 = 4095;
            v115 = v58;
            v59 = temporary_s2 + v57;
            if ( (__int16)temporary_s2 + v57 >= 4096 )
              v59 = 4095;
            temporary_s2 = v59;
            v60 = temporary_s1 + v57;
            if ( (__int16)temporary_s1 + v57 >= 4096 )
              v60 = 4095;
            temporary_s1 = v60;
          }
          temporary_s5 = v115;
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D0058_stage3(temporary_s5, temporary_s2, temporary_s1);
        }
        else
        {
          temporary_s7 = v115;
          /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D0058_stage4(temporary_s7, temporary_s2, temporary_s1);
        }
LABEL_102:
        v112 = v36;
        sub_800E9C44(0,  0, SF_DRAFT_PTR(uint32, 0x8012EE58u)[5 * v117]);
        v63 = v112;
        if ( *SF_DRAFT_PTR(_DWORD, (v112 + 36)) && !v96 && (__int16)v28 >= 1024 )
          v27 = SF_DRAFT_PTR(_DWORD, r_u32((v112 + 36)));
        v64 = v28 << 16;
        if ( (v113 & 0x10) != 0 )
        {
          if ( !v103 && !v108 )
          {
            v113 = v113 & 0x7FEF | 0x8000;
LABEL_116:
            v64 = v28 << 16;
            goto LABEL_117;
          }
          v65 = v106;
          v102 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
          v66 = v106[16];
          *SF_DRAFT_PTR(_DWORD, (v3 + 2244)) = v106[3] + 8000;
          if ( v66 )
          {
            (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v106[2];
          }
          else
          {
            v67 = v65[3];
            v65[1] = v67;
            (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v67;
          }
          v68 = v106;
          v106[v106[16] + 4] = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
          v69 = v68[16];
          v68[16] = v69 + 1;
          v68[v69 + 10] = v28 << 16 >> 18;
          if ( v63 == v105 )
            goto LABEL_116;
          v27 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 2232)));
          v64 = v28 << 16;
          if ( !v27 )
          {
            sub_800DDC34(1, 0, 0x800138D0u, 638);
            v64 = v28 << 16;
          }
        }
LABEL_117:
        v70 = v64 >> 16;
        if ( v64 >> 16 >= 70 )
          goto LABEL_122;
        v71 = v109;
        if ( !v109 )
          goto LABEL_123;
        if ( (*SF_DRAFT_PTR(_BYTE, (v23 + 11)) & 0x20) != 0 )
          goto LABEL_122;
        if ( v70 >= 37 )
        {
          v72 = *SF_DRAFT_PTR(_BYTE, (v23 + 9)) | 0x20;
          v113 |= 0x8000u;
          *SF_DRAFT_PTR(_BYTE, (v23 + 9)) = v72;
LABEL_122:
          v71 = v109;
LABEL_123:
          v73 = SF_DRAFT_PTR(int, 0x8010E01Cu);
          if ( v71 )
            v73 = SF_DRAFT_PTR(int, 0x8013C628u);
          sub_800E95D4(1, sf_draft_guest_address(v73));
          temporary_s5 = 0;
          if ( v108 )
          {
            temporary_s7 = 0;
            temporary_s3 = 3072;
            /* Geometry operation uses the project SDK bridge */
  sf_draft_geometry_800D0058_stage5(temporary_s5, temporary_s7, temporary_s3);
            sub_800CFE64(sf_draft_guest_address(v27),  0x100000, SF_DRAFT_PTR(uint32, 0x8013D564u)[v110 / 4],  v23);
          }
          else if ( (*v27 & 1) != 0 )
          {
            sub_800CFE64(sf_draft_guest_address(v27),  (v113 << 16) + (__int16)v28, SF_DRAFT_PTR(uint32, 0x8012EE5Cu)[5 * v117] + 512,  v23);
          }
          else
          {
            v77 = SF_DRAFT_PTR(uint32, 0x8012EE5Cu)[5 * v117] + 512;
            (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(v90);
            sub_800CFE64(sf_draft_guest_address(v27),  (v113 << 16) + (__int16)v28,  v77,  v23);
          }
          if ( !v103 && !v108 )
            goto LABEL_135;
          v78 = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
          v79 = v106[1];
          v106[2] = (*SF_DRAFT_PTR(uint32, 0x8012C8A0u));
          if ( v78 - v79 >= 8001 )
            strcpy(SF_DRAFT_PTR(char, SF_DRAFT_PTR(uint32, 0x80116A28u)), "IR ERR");
          (*SF_DRAFT_PTR(uint32, 0x8012C8A0u)) = v102;
          if ( !v108 )
          {
LABEL_135:
            v80 = v28 << 16;
            if ( !v96 && !v109 )
            {
              v81 = *SF_DRAFT_PTR(_DWORD, (v3 + 2276));
              *SF_DRAFT_PTR(_DWORD, (v3 + 2276)) = v81 + 1;
              SF_DRAFT_PTR(uint32, 0x8012FCA8u)[v81] = v23;
              v80 = v28 << 16;
            }
            v82 = (v80 >> 18) + v107;
            if ( v82 <= 0 )
              v82 = 1;
            v83 = 5 * v117;
            SF_DRAFT_PTR(uint32, 0x8012EE64u)[v83] = v82;
            sub_800E9CA4(SF_DRAFT_PTR(uint32, 0x8012EE58u)[v83], SF_DRAFT_PTR(uint32, 0x8013D560u)[v110 / 4]);
          }
        }
LABEL_141:
        result = v97 + 1 < v95;
        v111 += 4;
        ++v97;
      }
      while ( v97 < v95 );
    }
    v84 = *SF_DRAFT_PTR(_DWORD, (v3 + 2276));
    v97 = 0;
    if ( v84 > 0 )
    {
      v85 = SF_DRAFT_PTR(int, 0x8012FCA8u);
      do
      {
        v86 = (*SF_DRAFT_PTR(uint32, 0x801164C4u));
        result = 2 * (*SF_DRAFT_PTR(uint32, 0x801164C4u));
        if ( (*SF_DRAFT_PTR(uint32, 0x801164C4u)) >= 10 )
          break;
        v87 = 11 * (*SF_DRAFT_PTR(uint32, 0x801164C4u));
        SF_DRAFT_PTR(uint32, 0x8012FA40u)[v87] = 0;
        v88 = *v85;
        (*SF_DRAFT_PTR(uint32, 0x801164C4u)) = v86 + 1;
        v89 = ++v97;
        SF_DRAFT_PTR(uint32, 0x8012FA60u)[v87] = v88;
        result = v89 < v84;
        ++v85;
      }
      while ( v89 < v84 );
    }
  }
  return result;
}

