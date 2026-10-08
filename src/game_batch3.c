#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
/* TODO Resolve exact missing SDK declarations and adapters */
extern uint32 sub_8005FBCC();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x80063B5Cu 0x80063b5c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_80063B5C(void)
{
  FUNCTION_MARKER(0x80063B5Cu, "SCUS_942.40");
  _WORD * v0 = SF_DRAFT_PTR(_WORD, SF_DRAFT_GP);
  int v1; 
  int result; 
  __int16 v3; 
  int v4; 
  int v5; 
  int *v6; 
  int v7; 
  int v8; 
  int v9; 
  bool v10; 
  int v11; 
  int *v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18 = SF_DRAFT_GP;
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  _DWORD *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  unsigned int v29; 
  int *v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  __int16 v35; 
  _DWORD *v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  unsigned int v44; 
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
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  __int16 v60; 
  int v61; 
  unsigned int v62; 
  unsigned int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
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
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  char v84; 
  int v85 = SF_DRAFT_GP;
  int v86; 
  char v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  char v95[8]; 
  int v96; 
  int v97; 
  int v98; 
  int v99[4]; 
  int *v100; 
  int *v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  char v111; 
  int *v112; 
  int v113; 
  int v114; 
  int v115; 
  int *v116; 
  __int16 v117; 
  __int16 v118; 
  int v119; 
  char *v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  char v126[8]; 
  int v127[2]; 
  int v128; 
  int v129; 
  int *v130; 
  int v131; 
  char *v132; 
  int v133; 
  int v134; 
  int v135; 
  char *v136; 
  int *v137; 
  char v138; 
  char v139; 
  int v140; 
  int v141; 
  int v142; 

  v1 = 0;
  result = (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) < 5;
  v142 = 2;
  if ( (unsigned int)(*SF_DRAFT_PTR(uint32, 0x80116A88u)) < 5 )
    return result;
  v141 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  while ( 1 )
  {
    v3 = v0[1743];
    v4 = v3;
    v0[1619] = v3;
    v5 = -1;
    if ( v3 < 6 )
    {
      v6 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8012F120u)[v3]);
      while ( 1 )
      {
        v5 = *v6;
        if ( *v6 >= 0 )
          break;
        ++v4;
        ++v6;
        if ( v4 >= 6 )
          goto LABEL_7;
      }
      v0[1619] = v4 + 1;
    }
LABEL_7:
    v7 = 4 * v5;
    if ( v5 < 0 )
    {
      v8 = v142;
      v0[1619] = 0;
      v142 = v8 - 1;
      if ( v8 == 1 )
      {
        v0[1743] = 0;
        goto LABEL_201;
      }
      v9 = (uint16)v0[1622] + 1;
      v0[1622] = v9;
      if ( v9 << 16 > 0 )
        v0[1622] = -1;
      v10 = v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
      v5 = (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
      if ( !v10 )
      {
        v7 = 4 * (*SF_DRAFT_PTR(uint32, 0x80116AB0u));
        goto LABEL_21;
      }
      v11 = 0;
      v12 = SF_DRAFT_PTR(int, 0x8012F120u);
      while ( 1 )
      {
        v5 = *v12;
        if ( *v12 >= 0 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= 6 )
          goto LABEL_19;
      }
      v0[1619] = v11 + 1;
LABEL_19:
      v7 = 4 * v5;
      if ( v5 < 0 )
        break;
    }
LABEL_21:
    v13 = (*SF_DRAFT_PTR(uint32, 0x80115CCCu));
    v14 = (*SF_DRAFT_PTR(uint16, 0x80130C88u));
    v15 = *SF_DRAFT_PTR(_DWORD, (4 * (4 * (v7 + v5) - v5) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
    v0[1743] = v0[1619];
    if ( v14 == 9 )
    {
      v16 = *SF_DRAFT_PTR(__int16, (v15 + 2));
      if ( v16 != 666 && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v16 + v13)) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 3 )
      {
        v17 = *SF_DRAFT_PTR(_DWORD, (v15 + 20));
        v19 = *SF_DRAFT_PTR(_DWORD, (v17 + 4)) >> 3;
        sf_draft_call((uint32)(0x80149AC0u), 2u, (const uint32[]){v17 + 212, sf_draft_guest_address(v95)});
        v20 = (uint8)v95[0];
        if ( (v19 & 1) != v95[0] )
        {
          if ( v95[0] )
          {
            sub_8003D000(*SF_DRAFT_PTR(__int16, (v15 + 2)));
          }
          else if ( *SF_DRAFT_PTR(_DWORD, (v15 + 28)) )
          {
            sub_8003CCD8(*SF_DRAFT_PTR(__int16, (v15 + 2)));
          }
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) & 0xFFFFFFF7 | (8 * (v95[0] & 1));
          v20 = (uint8)v95[0];
        }
        if ( !v20 )
          *SF_DRAFT_PTR(_WORD, r_u32((v141 + 20))) = -1;
        result = *SF_DRAFT_PTR(uint16, (v18 + 3238));
        *SF_DRAFT_PTR(_WORD, (v18 + 3486)) = result;
        return result;
      }
      if ( v5 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 12)) + 404)) & 0x100000) == 0 && (__int16)v0[1622] < 0 )
        goto LABEL_200;
    }
    if ( (uint8)sub_800CF9E8(*SF_DRAFT_PTR(_DWORD, (v15 + 8))) )
    {
      if ( (__int16)v0[1622] < 0 )
      {
        v22 = *SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        v23 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 12)));
        v24 = v23[68];
        v25 = v23[69];
        v26 = v23[70];
        v99[0] = v23[67];
        v99[2] = v25;
        v99[3] = v26;
        v99[1] = v24 + 32;
        v96 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 20));
        v97 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 24));
        v27 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 28));
        v28 = -v97;
        v97 = -v97;
        v98 = v27;
        if ( (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 11)) & 0x20) == 0 )
          v97 = v28 - 134;
        v100 = &v96;
        v102 = 666;
        v101 = v99;
        v103 = 0;
        v105 = (int)&v111;
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        sub_8003A3C8((int)&v100);
        v1 = 1;
        if ( !v111 )
        {
          v29 = 0;
          if ( (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
          {
            v30 = SF_DRAFT_PTR(int, 0x80130F10u);
            do
            {
              v31 = *v30;
              v32 = -1;
              if ( *v30 && *SF_DRAFT_PTR(_DWORD, (v31 + 8)) == 1 )
                v32 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v31 + 72)) + 20)) & 0x3FF;
              if ( v32 < 0 )
              {
                ++v29;
                if ( *SF_DRAFT_PTR(_DWORD, (v31 + 8)) != 2 )
                  break;
              }
              else
              {
                if ( (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (76 * v32 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52)) + 34)) - 1 >= 2 )
                  break;
                ++v29;
                if ( v32 == *SF_DRAFT_PTR(__int16, (v22 + 2)) )
                {
                  v111 = 1;
                  break;
                }
              }
              ++v30;
            }
            while ( v29 < (*SF_DRAFT_PTR(uint32, 0x80116B74u)) );
          }
        }
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + 20)) + 4)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + 20)) + 4)) & 0xFFFFFFDF | (32 * (v111 & 1));
        v33 = *SF_DRAFT_PTR(_DWORD, (v22 + 16));
        if ( (*SF_DRAFT_PTR(_DWORD, (v33 + 4)) & 0x80) != 0 || *SF_DRAFT_PTR(_BYTE, (v33 + 8)) == 8 || (*SF_DRAFT_PTR(uint8, 0x80116944u)) )
        {
          v34 = *SF_DRAFT_PTR(_DWORD, (v22 + 8));
          v35 = -16;
        }
        else
        {
          v35 = sub_80063B10(*SF_DRAFT_PTR(_DWORD, (v22 + 8)));
          v34 = *SF_DRAFT_PTR(_DWORD, (v22 + 8));
        }
        *SF_DRAFT_PTR(_WORD, (v34 + 22)) = v35;
        if ( !v111 && *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x80130F10u)[0] + 4)) < 0x80u )
        {
          *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 11)) &= ~0x40u;
          if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v22 + 24)) + 8)) == -1 )
            *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 11)) &= ~0x20u;
          goto LABEL_200;
        }
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 11)) |= 0x40u;
        if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v22 + 20)) + 4)) & 8) != 0
          || !v111
          || v5 == (*SF_DRAFT_PTR(uint32, 0x80116AB0u))
          || (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 8)) & 0x40) == 0 )
        {
LABEL_73:
          if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v22 + 24)) + 8)) > 0 )
            goto LABEL_200;
        }
        else if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v22 + 24)) + 8)) > 0 )
        {
          if ( sub_8001C950() != 11 )
            sub_8005AD04(v22, 1);
          goto LABEL_73;
        }
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 8)) + 11)) |= 0x20u;
        goto LABEL_200;
      }
      v36 = 0;
      if ( v0[1622] )
        goto LABEL_200;
      v37 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v15 + 24)) + 8));
      v38 = 0;
      v139 = 0;
      v126[0] = 0;
      if ( v37 <= 0 )
      {
        v39 = *SF_DRAFT_PTR(_DWORD, (v15 + 28));
        if ( v39 )
        {
          if ( !*SF_DRAFT_PTR(_BYTE, (v39 + 65)) )
            goto LABEL_200;
        }
      }
      v40 = *SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
      v41 = *SF_DRAFT_PTR(_DWORD, (v40 + 20));
      if ( v5 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
      {
        v42 = *SF_DRAFT_PTR(_DWORD, (v40 + 28));
        v43 = *SF_DRAFT_PTR(_DWORD, (v42 + 32));
        v44 = (v43 & 0x800000) != 0 ? v43 & 0xFF7FFFFF : v43 | 0x800000;
        *SF_DRAFT_PTR(_DWORD, (v42 + 32)) = v44;
        if ( *SF_DRAFT_PTR(__int16, r_u32((v40 + 20))) != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))
          && v5 != *SF_DRAFT_PTR(__int16, r_u32(((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 20)))
          && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 28)) + 32)) & 0x800000) != 0 )
        {
          v45 = v5 == 666 ? 666 : *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v5 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u))));
          if ( v45 != 53 && v45 != 76 && v45 != 92 )
            v38 = 1;
        }
      }
      if ( v38 )
      {
        v92 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 20));
        v93 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 24));
        v46 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 28));
        v93 = -v93 - 8;
        v94 = v46;
        v89 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24))) + 20));
        v90 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24))) + 24));
        v47 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116B9Cu)) + 8)) + 24))) + 28)) - v46;
        v89 -= v92;
        v91 = v47;
        v112 = &v92;
        v116 = &v89;
        v119 = 6400;
        v90 = -v90 - 8 - v93;
        v114 = 0;
        v115 = 0;
        v120 = v126;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v125 = 0;
        sub_8003A7FC((int)&v112);
        if ( !v126[0] )
          v126[0] = sub_80063A6C(v5, (*SF_DRAFT_PTR(uint32, 0x80116AB0u)));
        if ( (*SF_DRAFT_PTR(_DWORD, (v41 + 4)) & 8) == 0
          && v126[0]
          && v5 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u))
          && (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 8)) & 0x40) != 0
          && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v40 + 24)) + 8)) > 0 )
        {
          sub_8005AD04(v40, 1);
        }
        v1 = 1;
        goto LABEL_187;
      }
      if ( v5 != (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 20)) + 4)) & 8) == 0 )
      {
        v48 = *SF_DRAFT_PTR(_DWORD, (v40 + 28));
        if ( (*SF_DRAFT_PTR(_DWORD, (v48 + 32)) & 0x800000) != 0
          && !*SF_DRAFT_PTR(_BYTE, (v48 + 65))
          && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v40 + 24)) + 8)) > 0 )
        {
          v112 = SF_DRAFT_PTR(int, r_u32((**(_DWORD **)(*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24) + 20)));
          v113 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 24));
          v49 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 28));
          v113 = -v113 - 8;
          v114 = v49;
          v104 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 20));
          v105 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 24));
          v50 = *SF_DRAFT_PTR(_DWORD, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 28));
          v127[0] = (int)&v104;
          v127[1] = (int)&v112;
          v105 = -v105;
          v128 = 0;
          v106 = v50;
          v129 = v40;
          v132 = &v138;
          v133 = 0;
          v134 = 0;
          v135 = 0;
          v136 = 0;
          v137 = 0;
          sub_8003A3C8(sf_draft_guest_address(v127));
          v1 = 1;
          if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 20)) + 4)) & 8) == 0
            && v138
            && (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 8)) & 0x40) != 0
            && sub_8001C950() != 11 )
          {
            sub_8005AD04(v40, 1);
          }
          goto LABEL_200;
        }
      }
      v51 = *SF_DRAFT_PTR(__int16, r_u32((v40 + 20)));
      if ( v51 >= 0 )
      {
        v15 = *SF_DRAFT_PTR(_DWORD, (76 * v51 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
        if ( v15 )
        {
          if ( *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 24)) && *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))
            || (v52 = *SF_DRAFT_PTR(_DWORD, (v40 + 28))) != 0
            && (*SF_DRAFT_PTR(_DWORD, (v52 + 32)) & 0x1000000) != 0
            && *SF_DRAFT_PTR(__int16, (v15 + 2)) == *SF_DRAFT_PTR(_DWORD, (76 * *SF_DRAFT_PTR(__int16, (v40 + 2)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 48)) )
          {
            if ( *SF_DRAFT_PTR(__int16, (v15 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(uint32, 0x8012F144u)) )
            {
              v89 = (*SF_DRAFT_PTR(uint32, 0x8012F138u));
              v90 = (*SF_DRAFT_PTR(uint32, 0x8012F13Cu));
              v91 = (*SF_DRAFT_PTR(uint32, 0x8012F140u));
            }
            else
            {
              if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v15 + 34)) - 1 >= 2 )
              {
                v89 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 12)) + 20));
                v90 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 12)) + 24));
                v53 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 12)) + 28));
                v54 = -v90;
              }
              else
              {
                v89 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 24))) + 20));
                v90 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 24))) + 24));
                v53 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v15 + 8)) + 24))) + 28));
                v54 = -v90 - 8;
              }
              v90 = v54;
              v91 = v53;
            }
            v92 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 20));
            v93 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 24));
            v1 = 1;
            v55 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 28));
            v89 -= v92;
            v93 = -v93 - 8;
            v94 = v55;
            v90 -= v93;
            v91 -= v55;
          }
        }
      }
      if ( !v1 )
      {
        v1 = 1;
        if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v40 + 34)) - 1 >= 2 )
        {
          v92 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 20));
          v93 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 24));
          v61 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 28));
          v93 = -v93;
          v94 = v61;
        }
        else
        {
          v92 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 20));
          v93 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 24));
          v56 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24))) + 28));
          v93 = -v93 - 8;
          v94 = v56;
          if ( *SF_DRAFT_PTR(__int16, (v40 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) && (*SF_DRAFT_PTR(_DWORD, r_u32((v40 + 16))) & 0x2000000) != 0 )
          {
            v89 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 4));
            v90 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 10));
            v57 = *SF_DRAFT_PTR(__int16, (*(_DWORD *)(*SF_DRAFT_PTR(uint32, r_u32(0x80115D84u))) + 16));
            v90 = 0;
            goto LABEL_138;
          }
          if ( (*SF_DRAFT_PTR(_DWORD, r_u32((v40 + 16))) & 0x1000120) == 288 )
          {
            LOWORD(v116) = *SF_DRAFT_PTR(_WORD, r_u32((*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)));
            v58 = (0u - *SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 2)));
            HIWORD(v116) = (0u - *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 2)));
            v117 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 4));
            v118 = (0u - *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 6)));
            LOWORD(v119) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 8));
            HIWORD(v119) = (0u - *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 10)));
            LOWORD(v120) = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 12));
            v59 = (0u - *SF_DRAFT_PTR(uint16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 14)));
            HIWORD(v120) = (0u - *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 14)));
            v60 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 24)) + 32)) + 16));
            v89 = -(__int16)v58;
            v90 = -(__int16)v119;
            v91 = -(__int16)v59;
            LOWORD(v121) = v60;
            goto LABEL_139;
          }
        }
        v89 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 4));
        v90 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 10));
        v57 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 12)) + 16));
        v90 = -v90;
LABEL_138:
        v91 = v57;
LABEL_139:
        v15 = 0;
      }
      v127[0] = (int)&v92;
      v130 = &v89;
      v131 = 6400;
      v132 = v126;
      v133 = v41 + 100;
      v134 = v41 + 132;
      v136 = &v139;
      v128 = v40;
      v129 = 0;
      v135 = 0;
      v137 = (int *)&v100;
      sub_8003A7FC(sf_draft_guest_address(v127));
      v62 = 0;
      if ( !(*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
        goto LABEL_162;
      v63 = 0;
      while ( 1 )
      {
        v64 = SF_DRAFT_PTR(uint32, 0x80130F10u)[v63];
        v65 = -1;
        if ( v64 && *SF_DRAFT_PTR(_DWORD, (v64 + 8)) == 1 )
          v65 = *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v64 + 72)) + 20)) & 0x3FF;
        if ( v65 != v5 )
        {
          v36 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_PTR(uint32, 0x80130F10u)[v63]);
          if ( v65 < 0 )
          {
            if ( *SF_DRAFT_PTR(_DWORD, (v64 + 8)) != 2 )
            {
LABEL_155:
              v126[0] = 0;
              goto LABEL_162;
            }
            v36 = 0;
          }
          else
          {
            v66 = *SF_DRAFT_PTR(_DWORD, (76 * v65 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
            if ( v15 && v65 == *SF_DRAFT_PTR(__int16, (v15 + 2)) )
            {
              if ( (unsigned int)*SF_DRAFT_PTR(uint8, (v66 + 34)) - 1 < 2 )
                sub_80075F98(*SF_DRAFT_PTR(_DWORD, (v66 + 8)));
              v67 = v36[9];
              v68 = v36[10];
              v69 = v36[11];
              *SF_DRAFT_PTR(_DWORD, (v41 + 100)) = v36[8];
              *SF_DRAFT_PTR(_DWORD, (v41 + 104)) = v67;
              *SF_DRAFT_PTR(_DWORD, (v41 + 108)) = v68;
              *SF_DRAFT_PTR(_DWORD, (v41 + 112)) = v69;
              v70 = v36[5];
              v71 = v36[6];
              v72 = v36[7];
              *SF_DRAFT_PTR(_DWORD, (v41 + 132)) = v36[4];
              *SF_DRAFT_PTR(_DWORD, (v41 + 136)) = v70;
              *SF_DRAFT_PTR(_DWORD, (v41 + 140)) = v71;
              *SF_DRAFT_PTR(_DWORD, (v41 + 144)) = v72;
              v126[0] = 1;
              if ( v62 + 1 < (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
                v36 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_PTR(uint32, 0x80130F14u)[v62]);
              else
                v36 = 0;
LABEL_162:
              if ( v36 )
              {
                v73 = v36[9];
                v74 = v36[10];
                v75 = v36[11];
                *SF_DRAFT_PTR(_DWORD, (v41 + 116)) = v36[8];
                *SF_DRAFT_PTR(_DWORD, (v41 + 120)) = v73;
                *SF_DRAFT_PTR(_DWORD, (v41 + 124)) = v74;
                *SF_DRAFT_PTR(_DWORD, (v41 + 128)) = v75;
                v76 = v36[5];
                v77 = v36[6];
                v78 = v36[7];
                *SF_DRAFT_PTR(_DWORD, (v41 + 148)) = v36[4];
                *SF_DRAFT_PTR(_DWORD, (v41 + 152)) = v76;
                *SF_DRAFT_PTR(_DWORD, (v41 + 156)) = v77;
                *SF_DRAFT_PTR(_DWORD, (v41 + 160)) = v78;
                *SF_DRAFT_PTR(_WORD, (v41 + 96)) = *SF_DRAFT_PTR(_WORD, (v36[19] + 2)) & 0x3F;
                v79 = -1;
                if ( v36[2] == 1 )
                  v79 = *SF_DRAFT_PTR(_WORD, (v36[18] + 20)) & 0x3FF;
                if ( v79 < 0 || v79 >= (*SF_DRAFT_PTR(sint32, 0x80116A5Cu)) )
                  *SF_DRAFT_PTR(_WORD, (v41 + 92)) = -1;
                else
                  *SF_DRAFT_PTR(_WORD, (v41 + 92)) = v79;
              }
              else
              {
                sub_800C720C(sf_draft_guest_address(&v89), sf_draft_guest_address(&v89));
                *SF_DRAFT_PTR(_DWORD, (v41 + 148)) = v89;
                *SF_DRAFT_PTR(_DWORD, (v41 + 152)) = v90;
                *SF_DRAFT_PTR(_DWORD, (v41 + 156)) = v91;
                *SF_DRAFT_PTR(_DWORD, (v41 + 116)) = v92 + v89;
                *SF_DRAFT_PTR(_DWORD, (v41 + 120)) = v93 + v90;
                v80 = v94;
                v81 = v91;
                *SF_DRAFT_PTR(_WORD, (v41 + 92)) = -1;
                *SF_DRAFT_PTR(_WORD, (v41 + 96)) = 25;
                *SF_DRAFT_PTR(_DWORD, (v41 + 124)) = v80 + v81;
              }
              if ( *SF_DRAFT_PTR(__int16, (v15 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              {
                if ( (*SF_DRAFT_PTR(uint32, 0x8012F144u)) )
                {
                  if ( !v126[0] )
                  {
                    sub_800E0364(sf_draft_guest_address(&v92),  v41 + 116, sf_draft_guest_address(&v140));
                    if ( *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v40 + 28)) + 44)) < v140 )
                      v126[0] = 1;
                  }
                }
              }
              *SF_DRAFT_PTR(_DWORD, (v41 + 4)) = *SF_DRAFT_PTR(_DWORD, (v41 + 4)) & 0xFFFFFFFD | (2 * (v126[0] & 1));
              v10 = v139 == 0;
              *SF_DRAFT_PTR(_WORD, (v41 + 90)) = *SF_DRAFT_PTR(_WORD, (v15 + 2));
              if ( v10 || (uint8)(sf_draft_unbound_stack_field(0x80063B5Cu, 0x5Cu), 0u) != 2 )
                *SF_DRAFT_PTR(_WORD, (v41 + 94)) = -1;
              else
                *SF_DRAFT_PTR(_WORD, (v41 + 94)) = *((_WORD *)v100 + 1);
              if ( *SF_DRAFT_PTR(__int16, (v15 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              {
                if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v40 + 20)) + 4)) & 8) != 0 )
                  goto LABEL_185;
                if ( !v126[0] )
                  goto LABEL_186;
                if ( (*SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v40 + 8)) + 8)) & 0x40) != 0 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v40 + 24)) + 8)) > 0 )
                  sub_8005AD04(v40, 1);
LABEL_185:
                if ( !v126[0] )
LABEL_186:
                  v126[0] = sub_80063A6C(v5, (*SF_DRAFT_PTR(uint32, 0x80116AB0u)));
LABEL_187:
                *SF_DRAFT_PTR(_DWORD, (v41 + 4)) = *SF_DRAFT_PTR(_DWORD, (v41 + 4)) & 0xFFFFFFEF | (16 * (v126[0] & 1));
              }
              else if ( *SF_DRAFT_PTR(__int16, (v40 + 2)) == (*SF_DRAFT_PTR(uint32, 0x80116AB0u)) )
              {
                if ( v126[0] )
                {
                  v82 = *SF_DRAFT_PTR(__int16, (v41 + 92));
                  if ( v82 >= 0 )
                  {
                    v83 = *SF_DRAFT_PTR(_DWORD, (76 * v82 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
                    if ( *SF_DRAFT_PTR(_BYTE, (v83 + 34)) == 2 )
                    {
                      if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v15 + 28)) + 72)) )
                        sub_80058FC0(v15);
                      if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v83 + 28)) + 72)) )
                        sub_80059108(v83);
                    }
                  }
                }
                if ( v15 )
                {
                  v84 = v126[0];
                  if ( !v126[0] )
                  {
                    v84 = sub_80063A6C((*SF_DRAFT_PTR(uint32, 0x80116AB0u)), v5);
                    v126[0] = v84;
                  }
                  *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) & 0xFFFFFFEF | (16 * (v84 & 1));
                }
              }
              goto LABEL_200;
            }
            if ( *SF_DRAFT_PTR(_BYTE, (v66 + 34)) == 2 )
            {
              if ( sub_80075F98(*SF_DRAFT_PTR(_DWORD, (v66 + 8))) )
                goto LABEL_155;
            }
            else
            {
              if ( v65 == 666 )
                goto LABEL_155;
              if ( *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v65 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) != 66 )
              {
                v126[0] = 0;
                goto LABEL_162;
              }
            }
          }
        }
        v63 = ++v62;
        if ( v62 >= (*SF_DRAFT_PTR(uint32, 0x80116B74u)) )
          goto LABEL_162;
      }
    }
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) &= ~2u;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) &= ~0x10u;
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 20)) + 4)) &= ~0x20u;
    *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v15 + 28)) + 54)) = 0;
    v21 = *SF_DRAFT_PTR(_DWORD, (v15 + 28));
    if ( (*SF_DRAFT_PTR(_DWORD, (v21 + 32)) & 0x20) == 0 )
      goto LABEL_200;
    if ( *SF_DRAFT_PTR(uint8, (v21 + 79)) >= 0x51u )
    {
      sub_8005FBCC(v15);
      goto LABEL_200;
    }
    if ( !v0[1622] )
      goto LABEL_201;
LABEL_200:
    if ( v1 )
      goto LABEL_201;
  }
  v0[1619] = 0;
LABEL_201:
  if ( v5 >= 0 )
  {
    (*SF_DRAFT_PTR(uint32, 0x1F800000)) = sf_draft_guest_address(&v88);
    sub_80062BC0(v5);
    v86 = *SF_DRAFT_PTR(uint8, (v85 + 3321));
    v10 = v86 == 0;
    v87 = v86 - 1;
    if ( !v10 )
      *SF_DRAFT_PTR(_BYTE, (v85 + 3321)) = v87;
  }
  return sub_800638E4();
}

// FUNCTION_MARKER 0x8001B584u 0x8001b584
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8001B584(sint32 a1, sint32 a2, sint8 a3)
{
  sint32 camera_position[4];
  FUNCTION_MARKER(0x8001B584u, "SCUS_942.40");
  int v209;
  int v3 = SF_DRAFT_GP;
  int v5; 
  _DWORD *v7; 
  _DWORD *v8; 
  int v9; 
  _DWORD *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  _DWORD *v15; 
  int v16 = SF_DRAFT_GP;
  _DWORD *v17; 
  int v18; 
  int v19; 
  int v20; 
  _DWORD *v21; 
  int v22 = SF_DRAFT_GP;
  _DWORD *v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  _DWORD *v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  _DWORD *v36; 
  int v37; 
  int v38; 
  int v39; 
  _DWORD *v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  int v49; 
  _DWORD *v50; 
  int v51; 
  int v52; 
  int v53; 
  _DWORD *v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59 = SF_DRAFT_GP;
  _DWORD *v60; 
  int v61; 
  int v62; 
  int v63; 
  _DWORD *v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  _DWORD *v70; 
  int v71; 
  int v72; 
  int v73; 
  _DWORD *v74; 
  _DWORD *v75; 
  _DWORD *v76; 
  int v77 = SF_DRAFT_GP;
  _DWORD *v78; 
  int v79 = SF_DRAFT_GP;
  int v80 = SF_DRAFT_GP;
  _DWORD *v81; 
  int v82; 
  int v83; 
  int v84; 
  _DWORD *v85; 
  int v86 = SF_DRAFT_GP;
  _DWORD *v87; 
  int v88; 
  int v89; 
  int v90; 
  _DWORD *v91; 
  _DWORD *v92; 
  int v93; 
  int v94; 
  int v95; 
  _DWORD *v96; 
  int v97 = SF_DRAFT_GP;
  _DWORD *v98; 
  int v99; 
  int v100; 
  int v101; 
  _DWORD *v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106 = SF_DRAFT_GP;
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  _DWORD *v111; 
  int v112; 
  int v113; 
  int v114; 
  _DWORD *v115; 
  int v116 = SF_DRAFT_GP;
  int *v117; 
  int v118; 
  int v119; 
  _DWORD *v120; 
  int v121; 
  int v122; 
  int v123; 
  _DWORD *v124; 
  int v125 = SF_DRAFT_GP;
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  int v133; 
  int v134; 
  _DWORD *v135; 
  int v136; 
  int v137; 
  int v138; 
  _DWORD *v139; 
  _DWORD *v140; 
  int v141; 
  int v142; 
  int v143; 
  _DWORD *v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148 = SF_DRAFT_GP;
  _DWORD *v149; 
  int v150; 
  int v151; 
  int v152; 
  _DWORD *v153; 
  int v154 = SF_DRAFT_GP;
  _DWORD *v155; 
  int v156; 
  int v157; 
  int v158; 
  _DWORD *v159; 
  _DWORD *v160; 
  int v161; 
  int v162; 
  int v163; 
  _DWORD *v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168 = SF_DRAFT_GP;
  _DWORD *v169; 
  int v170; 
  int v171; 
  int v172; 
  _DWORD *v173; 
  int v174 = SF_DRAFT_GP;
  _DWORD *v175; 
  int v176; 
  int v177; 
  int v178; 
  _DWORD *v179; 
  _DWORD *v180; 
  int v181; 
  int v182; 
  int v183; 
  _DWORD *v184; 
  int v185; 
  int v186; 
  int v187; 
  int v189; 
  int v190; 
  int v191; 
  int v192; 
int v198; 
  int v199; 
  int v200; 
  int v201; 
  int v202; 
  int v203; 
  int v204; 
  int v205; 
  int v206; 
  int v207; 
  int v208; 
int v210; 
  int v211; 
  int v212; 

  v5 = 60 * a1;
  v7 = SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119208u)) + 60 * a1));
  v190 = (*SF_DRAFT_PTR(uint32, 0x800101DCu));
  v8 = SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119204u)) + 168 * *v7));
  v9 = v8[16];
  v10 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
  (*SF_DRAFT_PTR(uint32, 0x801191F0u)) = 0;
  v11 = (*SF_DRAFT_PTR(uint32, 0x801191ECu));
  v12 = v8[39];
  v13 = v8[40];
  v14 = v8[41];
  v10[839] = v8[38];
  v10[840] = v12;
  v10[841] = v13;
  v10[842] = v14;
  v15 = SF_DRAFT_PTR(_DWORD, r_u32((v3 + 284)));
  v15[844] = 1;
  v15[845] = 1;
  v15[846] = 1;
  v15[847] = v190;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v3 + 284)) + 3392)) = 1;
  sub_80018994(*SF_DRAFT_PTR(_DWORD, (v3 + 284)), 1, 6, 3);
  v17 = SF_DRAFT_PTR(_DWORD, r_u32((v16 + 284)));
  v18 = v8[35];
  v19 = v8[36];
  v20 = v8[37];
  v17[839] = v8[34];
  v17[840] = v18;
  v17[841] = v19;
  v17[842] = v20;
  v21 = SF_DRAFT_PTR(_DWORD, r_u32((v16 + 284)));
  v21[844] = 1;
  v21[845] = 1;
  v21[846] = 1;
  v21[847] = v190;
  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v16 + 284)) + 3392)) = 1;
  sub_80018994(*SF_DRAFT_PTR(_DWORD, (v16 + 284)), 1, 6, 2);
  if ( (*SF_DRAFT_PTR(uint32, 0x80119398u)) )
  {
    v23 = SF_DRAFT_PTR(_DWORD, (v5 + (*SF_DRAFT_PTR(uint32, 0x80119208u))));
    v24 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80119398u))) + 8));
    v25 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80119398u))) + 12));
    v26 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80119398u))) + 16));
    v23[6] = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(uint32, 0x80119398u))) + 4));
    v23[7] = v24;
    v23[8] = v25;
    v23[9] = v26;
    if ( (*SF_DRAFT_PTR(uint32, 0x801191E8u)) )
    {
      sub_800DC8AC(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x801191C8u)),  0,  (*SF_DRAFT_PTR(uint32, 0x80119208u)) + v5 + 24);
    }
    else
    {
      (*SF_DRAFT_PTR(uint32, 0x801191DCu)) = *SF_DRAFT_PTR(_DWORD, (v5 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 24));
      (*SF_DRAFT_PTR(uint32, 0x801191E0u)) = (0u - *SF_DRAFT_PTR(_DWORD, (v5 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 28)));
      (*SF_DRAFT_PTR(uint32, 0x801191E4u)) = *SF_DRAFT_PTR(_DWORD, (v5 + (*SF_DRAFT_PTR(uint32, 0x80119208u)) + 32));
    }
  }
  v191 = -1;
  v192 = -1;
  switch ( a1 )
  {
    case 2:
    case 5:
    case 11:
      if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
      {
        v28 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
        if ( v28 )
          v7[1] = *SF_DRAFT_PTR(_DWORD, (v28 + 12));
      }
      if ( (*SF_DRAFT_PTR(uint32, 0x80119198u)) )
      {
        v29 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119198u)) + 8));
        if ( v29 )
          v7[2] = *SF_DRAFT_PTR(_DWORD, (v29 + 12));
      }
      v191 = 46603;
      v192 = 46603;
      goto LABEL_63;
    case 4:
    case 10:
      v7[1] = (*SF_DRAFT_PTR(uint32, 0x801191A0u));
      if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
      {
        v27 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
        if ( v27 )
          v7[2] = *SF_DRAFT_PTR(_DWORD, (v27 + 12));
      }
      if ( a1 == 4 )
      {
        v191 = 46603;
        v192 = 46603;
      }
      goto LABEL_63;
    case 6:
    case 7:
    case 8:
    case 9:
      if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
      {
        v30 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
        if ( v30 )
          v7[1] = *SF_DRAFT_PTR(_DWORD, (v30 + 12));
      }
      v7[2] = 0;
      v189 = 0;
      if ( a1 == 9 )
      {
        camera_position[0] = v8[12];
LABEL_33:
        v36 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v37 = camera_position[1];
        v38 = camera_position[2];
        v39 = camera_position[3];
        v36[839] = camera_position[0];
        v36[840] = v37;
        v36[841] = v38;
        v36[842] = v39;
        v40 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v40[844] = 1;
        v40[845] = v189;
        v40[846] = 0;
        v40[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v22 + 284)), 1, 6, 1);
        goto LABEL_63;
      }
      v31 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
      v189 = 1;
      if ( v31[595] )
      {
        v32 = v31[598];
        v33 = v31[599];
        v34 = v31[600];
        v198 = v31[597];
        v199 = v32;
        v200 = v33;
        v201 = v34;
      }
      else
      {
        v198 = v31[597];
      }
      v35 = v8[12];
      if ( v35 - v198 < 0 )
      {
        if ( v198 - v35 < 114 )
        {
LABEL_30:
          camera_position[0] = v8[12];
LABEL_32:
          camera_position[1] = v199;
          goto LABEL_33;
        }
      }
      else if ( v35 - v198 < 114 )
      {
        goto LABEL_30;
      }
      camera_position[0] = v198;
      goto LABEL_32;
    case 12:
      v41 = 60 * a1 + (*SF_DRAFT_PTR(uint32, 0x80119208u));
      (*SF_DRAFT_PTR(uint32, 0x801191F0u)) = *SF_DRAFT_PTR(_DWORD, (v41 + 12));
      (*SF_DRAFT_PTR(uint32, 0x80119194u)) = *SF_DRAFT_PTR(_DWORD, (v41 + 16));
      (*SF_DRAFT_PTR(uint32, 0x80119198u)) = *SF_DRAFT_PTR(_DWORD, (v41 + 20));
      v42 = *SF_DRAFT_PTR(_DWORD, (v41 + 28));
      v43 = *SF_DRAFT_PTR(_DWORD, (v41 + 32));
      v44 = *SF_DRAFT_PTR(_DWORD, (v41 + 36));
      camera_position[0] = *SF_DRAFT_PTR(_DWORD, (v41 + 24));
      camera_position[1] = v42;
      camera_position[2] = v43;
      camera_position[3] = v44;
      v45 = *SF_DRAFT_PTR(_DWORD, (v41 + 44));
      v46 = *SF_DRAFT_PTR(_DWORD, (v41 + 48));
      v47 = *SF_DRAFT_PTR(_DWORD, (v41 + 52));
      v202 = *SF_DRAFT_PTR(_DWORD, (v41 + 40));
      v203 = v45;
      v204 = v46;
      v205 = v47;
      (*SF_DRAFT_PTR(uint8, 0x8011921Au)) = *SF_DRAFT_PTR(_BYTE, (v41 + 56));
      v48 = *SF_DRAFT_PTR(_DWORD, (v41 + 12));
      if ( v48 == 2 )
      {
        (*SF_DRAFT_PTR(uint32, 0x80119198u)) = 0;
        v7[1] = sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x801191C8u));
        if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
        {
          v58 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
          if ( v58 )
            v7[2] = *SF_DRAFT_PTR(_DWORD, (v58 + 12));
        }
        sub_800DC8AC(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x801191C8u)),  0, sf_draft_guest_address(&camera_position[0]));
        v8[16] = 0;
      }
      else if ( v48 >= 3 )
      {
        if ( v48 == 3 )
        {
          (*SF_DRAFT_PTR(uint32, 0x80119194u)) = 0;
          (*SF_DRAFT_PTR(uint32, 0x80119198u)) = 0;
          v7[1] = sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x801191C8u));
          v7[2] = 0;
          sub_800DC8AC(sf_draft_guest_address(SF_DRAFT_PTR(uint32, 0x801191C8u)),  0, sf_draft_guest_address(&camera_position[0]));
          v60 = SF_DRAFT_PTR(_DWORD, r_u32((v59 + 284)));
          v206 = 1;
          v207 = 1;
          v208 = 0;
          v61 = v203;
          v62 = v204;
          v63 = v205;
          v60[839] = v202;
          v60[840] = v61;
          v60[841] = v62;
          v60[842] = v63;
          v64 = SF_DRAFT_PTR(_DWORD, r_u32((v59 + 284)));
          v65 = v207;
          v66 = v208;
          v67 = (sf_draft_unbound_stack_field(0x8001B584u, 0x7Cu), 0u);
          v64[844] = v206;
          v64[845] = v65;
          v64[846] = v66;
          v64[847] = v67;
          *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v59 + 284)) + 3392)) = 1;
          sub_80018994(*SF_DRAFT_PTR(_DWORD, (v59 + 284)), 2, 6, 1);
          v8[16] = 0;
        }
        else if ( v48 == 9 )
        {
          (*SF_DRAFT_PTR(uint32, 0x80119198u)) = 0;
          if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
          {
            v68 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
            if ( v68 )
              v7[1] = *SF_DRAFT_PTR(_DWORD, (v68 + 12));
          }
          v7[2] = 0;
        }
      }
      else if ( v48 == 1 )
      {
        (*SF_DRAFT_PTR(uint32, 0x80119198u)) = 0;
        if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
        {
          v49 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
          if ( v49 )
            v7[1] = *SF_DRAFT_PTR(_DWORD, (v49 + 12));
        }
        v50 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v7[2] = 0;
        v206 = 1;
        v207 = 1;
        v208 = 0;
        v51 = v203;
        v52 = v204;
        v53 = v205;
        v50[839] = v202;
        v50[840] = v51;
        v50[841] = v52;
        v50[842] = v53;
        v54 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v55 = v207;
        v56 = v208;
        v57 = (sf_draft_unbound_stack_field(0x8001B584u, 0x7Cu), 0u);
        v54[844] = v206;
        v54[845] = v55;
        v54[846] = v56;
        v54[847] = v57;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v22 + 284)), 2, 6, 1);
      }
      v191 = 46603;
      v192 = 46603;
      goto LABEL_63;
    default:
      if ( (*SF_DRAFT_PTR(uint32, 0x80119194u)) )
      {
        v69 = *SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80119194u)) + 8));
        if ( v69 )
          v7[1] = *SF_DRAFT_PTR(_DWORD, (v69 + 12));
      }
      v7[2] = v7[1];
      if ( a1 == 1 || a1 == 3 )
      {
        v70 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v71 = v8[13];
        v72 = v8[14];
        v73 = v8[15];
        v70[839] = v8[12];
        v70[840] = v71;
        v70[841] = v72;
        v70[842] = v73;
        v74 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
        v74[844] = 1;
        v74[845] = 0;
        v74[846] = 0;
        v74[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v22 + 284)), 1, 6, 1);
        if ( a1 == 1 )
        {
          v191 = 233016;
          v192 = 233016;
        }
      }
      else
      {
        v192 = 139810;
        v191 = 46603;
      }
LABEL_63:
      v75 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
      v75[839] = v191;
      v75[840] = v192;
      v75[841] = -1;
      v75[842] = (sf_draft_unbound_stack_field(0x8001B584u, 0x3Cu), 0u);
      v76 = SF_DRAFT_PTR(_DWORD, r_u32((v22 + 284)));
      v76[844] = 1;
      v76[845] = 1;
      v76[846] = 0;
      v76[847] = v190;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v22 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v22 + 284)), 1, 6, 5);
      v78 = SF_DRAFT_PTR(_DWORD, r_u32((v77 + 284)));
      (*SF_DRAFT_PTR(uint32, 0x801191ECu)) = a1;
      sub_80018804(sf_draft_guest_address(v78),  v7[1], sf_draft_guest_address(v8));
      sub_8001888C(r_u32(v79 + 284), v7[2], sf_draft_guest_address(v8 + 4));
      v81 = SF_DRAFT_PTR(_DWORD, r_u32((v80 + 284)));
      v82 = v8[9];
      v83 = v8[10];
      v84 = v8[11];
      v81[839] = v8[8];
      v81[840] = v82;
      v81[841] = v83;
      v81[842] = v84;
      v85 = SF_DRAFT_PTR(_DWORD, r_u32((v80 + 284)));
      v85[844] = 1;
      v85[845] = 1;
      v85[846] = 1;
      v85[847] = v190;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v80 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v80 + 284)), 1, 1, 1);
      if ( v11 == 11 )
      {
        v87 = SF_DRAFT_PTR(_DWORD, r_u32((v86 + 284)));
        v88 = v8[9];
        v89 = v8[10];
        v90 = v8[11];
        v87[839] = v8[8];
        v87[840] = v88;
        v87[841] = v89;
        v87[842] = v90;
        v91 = SF_DRAFT_PTR(_DWORD, r_u32((v86 + 284)));
        v91[844] = 1;
        v91[845] = 1;
        v91[846] = 1;
        v91[847] = v190;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v86 + 284)), 1, 1, 0);
      }
      v92 = SF_DRAFT_PTR(_DWORD, r_u32((v86 + 284)));
      v93 = v8[13];
      v94 = v8[14];
      v95 = v8[15];
      v92[839] = v8[12];
      v92[840] = v93;
      v92[841] = v94;
      v92[842] = v95;
      v96 = SF_DRAFT_PTR(_DWORD, r_u32((v86 + 284)));
      v96[844] = 1;
      v96[845] = 1;
      v96[846] = 1;
      v96[847] = v190;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v86 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v86 + 284)), 1, 7, 1);
      if ( v11 == 11 )
      {
        v98 = SF_DRAFT_PTR(_DWORD, r_u32((v97 + 284)));
        v99 = v8[13];
        v100 = v8[14];
        v101 = v8[15];
        v98[839] = v8[12];
        v98[840] = v99;
        v98[841] = v100;
        v98[842] = v101;
        v102 = SF_DRAFT_PTR(_DWORD, r_u32((v97 + 284)));
        v102[844] = 1;
        v102[845] = 1;
        v102[846] = 1;
        v102[847] = v190;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v97 + 284)), 1, 7, 0);
      }
      v103 = *SF_DRAFT_PTR(_DWORD, (v97 + 284));
      v104 = v8[16];
      *SF_DRAFT_PTR(_BYTE, (v103 + 3392)) = 1;
      v105 = *SF_DRAFT_PTR(_DWORD, (v97 + 284));
      *SF_DRAFT_PTR(_DWORD, (v103 + 3356)) = v104;
      sub_80018994(v105, 1, 5, 1);
      if ( v11 == 11 )
      {
        v107 = *SF_DRAFT_PTR(_DWORD, (v106 + 284));
        *SF_DRAFT_PTR(_DWORD, (v107 + 3356)) = v8[16];
        sub_80018994(v107, 1, 5, 0);
      }
      v108 = v8[17];
      if ( v108 >= 0 )
      {
        v109 = *SF_DRAFT_PTR(_DWORD, (v106 + 284));
        *SF_DRAFT_PTR(_BYTE, (v109 + 3392)) = 1;
        v110 = *SF_DRAFT_PTR(_DWORD, (v106 + 284));
        *SF_DRAFT_PTR(_DWORD, (v109 + 3356)) = v108;
        sub_80018994(v110, 1, 8, 1);
      }
      v111 = SF_DRAFT_PTR(_DWORD, r_u32((v106 + 284)));
      v112 = v8[19];
      v113 = v8[20];
      v114 = v8[21];
      v111[839] = v8[18];
      v111[840] = v112;
      v111[841] = v113;
      v111[842] = v114;
      v115 = SF_DRAFT_PTR(_DWORD, r_u32((v106 + 284)));
      v115[844] = 1;
      v115[845] = 1;
      v115[846] = 1;
      v115[847] = v190;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v106 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v106 + 284)), 1, 6, 4);
      v198 = (*SF_DRAFT_PTR(uint32, 0x800101E0u));
      v199 = (*SF_DRAFT_PTR(uint32, 0x800101E4u));
      v200 = (*SF_DRAFT_PTR(uint32, 0x800101E8u));
      v201 = (*SF_DRAFT_PTR(uint32, 0x800101ECu));
      if ( (unsigned int)(a1 - 7) < 2 || (v117 = &v198, a1 == 6) )
        v117 = 0;
      v118 = v8[26];
      v119 = v8[22];
      v210 = v8[30];
      v211 = v118;
      v212 = v119;
      if ( v8 != SF_DRAFT_PTR(_DWORD, -120) )
      {
        v120 = SF_DRAFT_PTR(_DWORD, r_u32((v116 + 284)));
        v121 = v8[31];
        v122 = v8[32];
        v123 = v8[33];
        v120[839] = v8[30];
        v120[840] = v121;
        v120[841] = v122;
        v120[842] = v123;
        v124 = SF_DRAFT_PTR(_DWORD, r_u32((v116 + 284)));
        v124[844] = 1;
        v124[845] = 1;
        v124[846] = 1;
        v124[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v116 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v116 + 284)), 1, 0, 6);
        v126 = v8[31];
        v127 = v8[32];
        v128 = v8[33];
        v202 = v8[30];
        v203 = v126;
        v204 = v127;
        v205 = v128;
        if ( v117 )
        {
          if ( v202 > 0 )
          {
            v129 = v202 * *v117;
            if ( v129 < 0 )
              v130 = -(-v129 >> 12);
            else
              v130 = v129 >> 12;
            v202 = v130;
          }
          if ( v203 > 0 )
          {
            v131 = v203 * v117[1];
            if ( v131 < 0 )
              v132 = -(-v131 >> 12);
            else
              v132 = v131 >> 12;
            v203 = v132;
          }
          if ( v204 > 0 )
          {
            v133 = v204 * v117[2];
            if ( v133 < 0 )
              v134 = -(-v133 >> 12);
            else
              v134 = v133 >> 12;
            v204 = v134;
          }
        }
        v135 = SF_DRAFT_PTR(_DWORD, r_u32((v125 + 284)));
        v136 = v203;
        v137 = v204;
        v138 = v205;
        v135[839] = v202;
        v135[840] = v136;
        v135[841] = v137;
        v135[842] = v138;
        v139 = SF_DRAFT_PTR(_DWORD, r_u32((v125 + 284)));
        v139[844] = 1;
        v139[845] = 1;
        v139[846] = 1;
        v139[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v125 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v125 + 284)), 1, 3, 6);
      }
      v206 = (*SF_DRAFT_PTR(uint32, 0x800101C0u));
      v207 = (*SF_DRAFT_PTR(uint32, 0x800101C4u));
      v208 = (*SF_DRAFT_PTR(uint32, 0x800101C8u));
      v209 = (*SF_DRAFT_PTR(uint32, 0x800101CCu));
      v140 = SF_DRAFT_PTR(_DWORD, r_u32((v116 + 284)));
      v202 = v210;
      v203 = v210;
      v204 = v210;
      v141 = v210;
      v142 = v210;
      v143 = v205;
      v140[839] = v210;
      v140[840] = v141;
      v140[841] = v142;
      v140[842] = v143;
      v144 = SF_DRAFT_PTR(_DWORD, r_u32((v116 + 284)));
      v145 = v207;
      v146 = v208;
      v147 = v209;
      v144[844] = v206;
      v144[845] = v145;
      v144[846] = v146;
      v144[847] = v147;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v116 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v116 + 284)), 1, 2, 6);
      if ( v8 != SF_DRAFT_PTR(_DWORD, -104) )
      {
        v149 = SF_DRAFT_PTR(_DWORD, r_u32((v148 + 284)));
        v150 = v8[27];
        v151 = v8[28];
        v152 = v8[29];
        v149[839] = v8[26];
        v149[840] = v150;
        v149[841] = v151;
        v149[842] = v152;
        v153 = SF_DRAFT_PTR(_DWORD, r_u32((v148 + 284)));
        v153[844] = 1;
        v153[845] = 1;
        v153[846] = 1;
        v153[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v148 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v148 + 284)), 1, 0, 5);
        v155 = SF_DRAFT_PTR(_DWORD, r_u32((v154 + 284)));
        v156 = v8[27];
        v157 = v8[28];
        v158 = v8[29];
        v155[839] = v8[26];
        v155[840] = v156;
        v155[841] = v157;
        v155[842] = v158;
        v159 = SF_DRAFT_PTR(_DWORD, r_u32((v154 + 284)));
        v159[844] = 1;
        v159[845] = 1;
        v159[846] = 1;
        v159[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v154 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v154 + 284)), 1, 3, 5);
      }
      v206 = (*SF_DRAFT_PTR(uint32, 0x800101C0u));
      v207 = (*SF_DRAFT_PTR(uint32, 0x800101C4u));
      v208 = (*SF_DRAFT_PTR(uint32, 0x800101C8u));
      v209 = (*SF_DRAFT_PTR(uint32, 0x800101CCu));
      v160 = SF_DRAFT_PTR(_DWORD, r_u32((v148 + 284)));
      v202 = v211;
      v203 = v211;
      v204 = v211;
      v161 = v211;
      v162 = v211;
      v163 = v205;
      v160[839] = v211;
      v160[840] = v161;
      v160[841] = v162;
      v160[842] = v163;
      v164 = SF_DRAFT_PTR(_DWORD, r_u32((v148 + 284)));
      v165 = v207;
      v166 = v208;
      v167 = v209;
      v164[844] = v206;
      v164[845] = v165;
      v164[846] = v166;
      v164[847] = v167;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v148 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v148 + 284)), 1, 2, 5);
      if ( v8 != SF_DRAFT_PTR(_DWORD, -88) )
      {
        v169 = SF_DRAFT_PTR(_DWORD, r_u32((v168 + 284)));
        v170 = v8[23];
        v171 = v8[24];
        v172 = v8[25];
        v169[839] = v8[22];
        v169[840] = v170;
        v169[841] = v171;
        v169[842] = v172;
        v173 = SF_DRAFT_PTR(_DWORD, r_u32((v168 + 284)));
        v173[844] = 1;
        v173[845] = 1;
        v173[846] = 1;
        v173[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v168 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v168 + 284)), 1, 0, 4);
        v175 = SF_DRAFT_PTR(_DWORD, r_u32((v174 + 284)));
        v176 = v8[23];
        v177 = v8[24];
        v178 = v8[25];
        v175[839] = v8[22];
        v175[840] = v176;
        v175[841] = v177;
        v175[842] = v178;
        v179 = SF_DRAFT_PTR(_DWORD, r_u32((v174 + 284)));
        v179[844] = 1;
        v179[845] = 1;
        v179[846] = 1;
        v179[847] = v190;
        *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v174 + 284)) + 3392)) = 1;
        sub_80018994(*SF_DRAFT_PTR(_DWORD, (v174 + 284)), 1, 3, 4);
      }
      v206 = (*SF_DRAFT_PTR(uint32, 0x800101C0u));
      v207 = (*SF_DRAFT_PTR(uint32, 0x800101C4u));
      v208 = (*SF_DRAFT_PTR(uint32, 0x800101C8u));
      v209 = (*SF_DRAFT_PTR(uint32, 0x800101CCu));
      v180 = SF_DRAFT_PTR(_DWORD, r_u32((v168 + 284)));
      v202 = v212;
      v203 = v212;
      v204 = v212;
      v181 = v212;
      v182 = v212;
      v183 = v205;
      v180[839] = v212;
      v180[840] = v181;
      v180[841] = v182;
      v180[842] = v183;
      v184 = SF_DRAFT_PTR(_DWORD, r_u32((v168 + 284)));
      v185 = v207;
      v186 = v208;
      v187 = v209;
      v184[844] = v206;
      v184[845] = v185;
      v184[846] = v186;
      v184[847] = v187;
      *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v168 + 284)) + 3392)) = 1;
      sub_80018994(*SF_DRAFT_PTR(_DWORD, (v168 + 284)), 1, 2, 4);
      if ( a3 == 1 )
        sub_800201DC();
      v8[16] = v9;
      return 1;
  }
}

