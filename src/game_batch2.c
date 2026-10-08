#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);

sint32 sub_80036A1C(sint32 a1)
{
    FUNCTION_MARKER(0x80036A1Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  int v2; 
  int *v3; 
  int v4; 
  int v5; 
  uint8 v6; 
  uint8 v7; 
  bool v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int *v18; 
  int v19; 
  int v20; 
  int v21; 
  int *v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int *v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int *v32; 
  int v33; 
  int v34; 
  int v35; 
  int *v36; 
  int v37; 
  int *v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int *v43; 
  int v44; 
  int v45; 
  int v46; 
  bool v47; // dc
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
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int *v67; 
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
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int *v94; 
  int *v95; 
  int *v96; 
  int v97; 
  int v98; 
  int v99; 
  int *v100; 
  int result; 
  int v102; 
  int v103; 
  int *v104; 
  int v105; 
  int v106; 
  int v107; 
  int *v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int *v115; 
  int v116; 
  int v117; 
  int v118; 
  int *v119; 
  int *v120; 
  int v121; 
  int v122; 
  int v123; 
  int *v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v130; 

  int v132; 
  int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140[4]; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  int v169; 
  int v170; 
  v2 = *SF_DRAFT_PTR(_DWORD, (76 * (*SF_DRAFT_PTR(uint32, 0x801169D4u)) + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)) + 52));
  v132 = SF_DRAFT_PTR(uint32, 0x80011440u)[7];
  v3 = SF_DRAFT_PTR(int, (a1 + 160));
  v4 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 408)) + 60));
  if ( v4 == 5 || (v5 = 0, (unsigned int)(v4 - 8) < 2) )
    v5 = 1;
  v6 = 0;
  if ( !v5 )
    goto LABEL_7;
  v7 = 0;
  if ( ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v2 + 16))) >> 1) & 1) != 0 )
  {
    v6 = 1;
LABEL_7:
    v7 = 0;
  }
  if ( sub_8001C960(6) || sub_8001C960(7) || sub_8001C960(8) || sub_8001C960(9) )
    v7 = 1;
  v8 = sub_8001C960(0);
  if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80115E80u)) - 2) >= 2 )
  {
    *SF_DRAFT_PTR(_DWORD, (a1 + 372)) = 0;
    goto LABEL_34;
  }
  sub_800D84E8(SF_DRAFT_PTR(uint32, sf_draft_guest_address(&v133)), 0);
  v9 = *SF_DRAFT_PTR(_DWORD, (a1 + 32));
  v10 = v133 + 4;
  v11 = (v133 + 4) & 3;
  v12 = v133 + 4;
  if ( v11 )
  {
    v9 += 8 * v11;
    v12 = v10 & 0xFFFFFFFC;
  }
  if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v9 >> 5) + v12)) & (1 << (v9 & 0x1F))) != 0 )
  {
    v13 = *SF_DRAFT_PTR(_DWORD, (a1 + 372));
    v14 = v13 - 45;
    if ( v13 <= 0 )
    {
      if ( v14 < -45 )
        v14 = -45;
      *SF_DRAFT_PTR(_DWORD, (a1 + 372)) = v14;
      goto LABEL_29;
    }
  }
  else
  {
    v15 = *SF_DRAFT_PTR(_DWORD, (a1 + 48));
    if ( v11 )
    {
      v15 += 8 * v11;
      v10 &= 0xFFFFFFFC;
    }
    if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v15 >> 5) + v10)) & (1 << (v15 & 0x1F))) != 0 )
    {
      v16 = *SF_DRAFT_PTR(_DWORD, (a1 + 372));
      if ( v16 >= 0 )
      {
        v17 = 45;
        if ( v16 + 45 < 46 )
          v17 = v16 + 45;
        *SF_DRAFT_PTR(_DWORD, (a1 + 372)) = v17;
        goto LABEL_29;
      }
    }
  }
  *SF_DRAFT_PTR(_DWORD, (a1 + 372)) = 0;
LABEL_29:
  SF_DRAFT_PTR(int, sub_8002FC18())[839] = *SF_DRAFT_PTR(_DWORD, (a1 + 372));
  *(SF_DRAFT_PTR(_BYTE, sub_8002FC18()) + 3392) = 1;
  v18 = SF_DRAFT_PTR(int, sub_8002FC18());
  sub_80018994(sf_draft_guest_address(v18), 3, 8, 1);
  sub_800189FC((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 0, 0, 4);
  v19 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668));
  v20 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668));
  v21 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668));
  v134 = *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668));
  v135 = v19;
  v136 = v20;
  v137 = v21;
  v22 = SF_DRAFT_PTR(int, sub_8002FC18());
  if ( v22[757] )
  {
    v23 = v22[760];
    v24 = v22[761];
    v25 = v22[762];
    v138 = v22[759];
    v139 = v23;
    v140[0] = v24;
    v140[1] = v25;
  }
  else
  {
    v138 = v22[759];
  }
  sub_80044968(v134, v135, v138);
LABEL_34:
  if ( sub_8001C960(6) || sub_8001C960(7) || sub_8001C960(8) )
  {
    v134 = SF_DRAFT_PTR(uint32, 0x80011440u)[4];
    v135 = SF_DRAFT_PTR(uint32, 0x80011440u)[5];
    v136 = SF_DRAFT_PTR(uint32, 0x80011440u)[6];
    v137 = SF_DRAFT_PTR(uint32, 0x80011440u)[7];
    v26 = *SF_DRAFT_PTR(_DWORD, (a1 + 376));
    if ( v26 < 0 )
      v26 = -v26;
    v27 = 0;
    if ( (unsigned int)v26 >= 0x14 )
    {
      sub_8003A2A8(v2, sf_draft_guest_address(v140));
      v141 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 20));
      v142 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 24));
      v27 = v140;
      v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, 0x80115D84u)) + 28));
      v142 = -v142;
      v140[0] = v141;
      v143 = v28;
      v140[2] = v28;
    }
    sub_800628C8(sf_draft_guest_address(v27));
    v29 = *SF_DRAFT_PTR(_DWORD, (a1 + 24));
    if ( v29 == 1 )
    {
      v134 = 128;
      v30 = *SF_DRAFT_PTR(_DWORD, (a1 + 376));
      if ( v30 > 0 )
      {
        if ( v30 < 20 )
          *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = v30 + 1;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = 1;
      }
    }
    else if ( v29 == 2 )
    {
      v134 = -128;
      v31 = *SF_DRAFT_PTR(_DWORD, (a1 + 376));
      if ( v31 < 0 )
      {
        if ( v31 >= -19 )
          *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = v31 - 1;
      }
      else
      {
        *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = -1;
      }
    }
    else
    {
      v134 = 0;
      *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = 0;
    }
    v32 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    v33 = v135;
    v34 = v136;
    v35 = v137;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = v134;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v32 + 2146335668)) = v33;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v32 + 2146335668)) = v34;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v32 + 2146335668)) = v35;
    v36 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = 1;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v36 + 2146335668)) = 0;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v36 + 2146335668)) = 0;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v36 + 2146335668)) = v132;
    SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
    sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 1, 1, 1);
  }
  else
  {
    *SF_DRAFT_PTR(_DWORD, (a1 + 376)) = 0;
    sub_800628C8(0);
  }
  if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80115E80u)) - 2) < 2 || (*SF_DRAFT_PTR(uint32, 0x80115E80u)) == 4 )
  {
    v37 = 184320;
    v145 = 184320;
LABEL_126:
    v42 = v7;
    goto LABEL_127;
  }
  if ( v7 )
  {
    sub_8001C960(9);
LABEL_68:
    v37 = 311296;
    goto LABEL_69;
  }
  if ( !v8 )
    goto LABEL_68;
  v38 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v2 + 16)));
  v39 = *((uint8 *)v38 + 8);
  v37 = 311296;
  if ( v39 != 10 )
  {
    v40 = *v38;
    if ( (v40 & 0x8000) == 0 && v39 != 12 && v39 != 7 && (v40 & 0x2000) == 0 && v39 != 4 && (v40 & 0x1000) == 0 )
      v37 = 466944;
  }
LABEL_69:
  v41 = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
  v145 = v37;
  if ( !v41 && !*SF_DRAFT_PTR(_DWORD, (a1 + 240)) )
  {
    v42 = v7;
    if ( !*SF_DRAFT_PTR(_DWORD, (a1 + 244)) )
      goto LABEL_127;
  }
  v43 = SF_DRAFT_PTR(int, *SF_DRAFT_PTR(uint32, (v2 + 16)));
  v44 = *((uint8 *)v43 + 8);
  if ( v44 != 10 )
  {
    v45 = *v43;
    if ( (v45 & 0x8000) == 0 && v44 != 12 && v44 != 7 && (v45 & 0x2000) == 0 )
    {
      if ( v44 == 4 || (v45 & 0x1000) != 0 )
        goto LABEL_80;
      if ( *SF_DRAFT_PTR(_DWORD, (a1 + 356)) )
      {
        v48 = (4 * v145) >> 12;
        if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) < 0 )
        {
          v47 = -sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) >= 1025;
          v49 = v48;
          if ( v47 )
          {
LABEL_90:
            v51 = v49 / 4;
LABEL_125:
            v145 = v51 << 12;
            goto LABEL_126;
          }
        }
        else
        {
          v47 = sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) < 1025;
          v49 = v48;
          if ( !v47 )
            goto LABEL_90;
        }
        if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) >= 0 )
          goto LABEL_89;
        goto LABEL_122;
      }
      if ( v6 )
        goto LABEL_126;
      v52 = *SF_DRAFT_PTR(_DWORD, (a1 + 256));
      if ( v52 != 1 )
      {
        v53 = *SF_DRAFT_PTR(_DWORD, (a1 + 260));
        if ( v53 != 1 && v52 && v53 )
        {
          if ( *SF_DRAFT_PTR(_DWORD, (a1 + 348)) >= 2u )
          {
            v48 = (4 * v145) >> 12;
            if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) > 0 )
            {
              v50 = v48 * sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244)))));
              goto LABEL_124;
            }
            v58 = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
            v59 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))));
LABEL_123:
            v50 = v48 * -sub_800EC124(v58, v59);
            goto LABEL_124;
          }
          v48 = (4 * v145) >> 12;
          if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) >= 0 )
          {
LABEL_89:
            v50 = v48 * sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244)));
LABEL_124:
            v51 = v50 / 4096;
            goto LABEL_125;
          }
LABEL_122:
          v58 = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
          v59 = *SF_DRAFT_PTR(_DWORD, (a1 + 244));
          goto LABEL_123;
        }
      }
      if ( *SF_DRAFT_PTR(_DWORD, (a1 + 348)) >= 2u )
      {
        if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) <= 0 )
        {
          if ( -sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) - 284 <= 0 )
          {
            v145 = 0;
            goto LABEL_126;
          }
          goto LABEL_101;
        }
        if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) - 284 > 0 )
        {
LABEL_101:
          v54 = (4 * v145) >> 12;
          if ( (v145 & 0x20000000) != 0 )
            v54 = -((-4 * v145) >> 12);
          if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) <= 0 )
          {
            v55 = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
            v56 = (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))));
LABEL_115:
            v57 = -sub_800EC124(v55, v56) - 284;
            goto LABEL_116;
          }
          v57 = sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), (sint32)(0u - (*SF_DRAFT_PTR(_DWORD, (a1 + 244))))) - 284;
          goto LABEL_116;
        }
LABEL_80:
        v145 = 0;
        goto LABEL_126;
      }
      if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) < 0 )
      {
        if ( -sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) - 284 <= 0 )
          goto LABEL_80;
      }
      else if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) - 284 <= 0 )
      {
        v145 = 0;
        goto LABEL_126;
      }
      v54 = (4 * v145) >> 12;
      if ( (v145 & 0x20000000) != 0 )
        v54 = -((-4 * v145) >> 12);
      if ( sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) < 0 )
      {
        v55 = *SF_DRAFT_PTR(_DWORD, (a1 + 236));
        v56 = *SF_DRAFT_PTR(_DWORD, (a1 + 244));
        goto LABEL_115;
      }
      v57 = sub_800EC124(*SF_DRAFT_PTR(_DWORD, (a1 + 236)), *SF_DRAFT_PTR(_DWORD, (a1 + 244))) - 284;
LABEL_116:
      v145 = (v54 * v57 / 2960) << 12;
      goto LABEL_126;
    }
  }
  v46 = *SF_DRAFT_PTR(_DWORD, (a1 + 244));
  if ( v46 < 0 )
    v46 = -v46;
  v47 = v46 < 2634;
  v42 = v7;
  if ( !v47 )
    goto LABEL_80;
LABEL_127:
  if ( v42 )
    v60 = *SF_DRAFT_PTR(_DWORD, (a1 + 192));
  else
    v60 = *SF_DRAFT_PTR(_DWORD, (a1 + 252));
  v145 = sub_800C6D4C(v145, v60);
  v61 = *SF_DRAFT_PTR(_DWORD, (a1 + 256));
  v62 = v6;
  if ( v61 != 1 )
  {
    v63 = *SF_DRAFT_PTR(_DWORD, (a1 + 260));
    if ( v63 != 1 )
    {
      if ( v61 )
      {
        v47 = v63 != 0;
        v64 = v7;
        if ( v47 )
        {
LABEL_144:
          if ( v64 )
          {
            if ( (unsigned int)((*SF_DRAFT_PTR(uint32, 0x80115E80u)) - 2) < 2 || (*SF_DRAFT_PTR(uint32, 0x80115E80u)) == 4 )
            {
              v147 = 294;
              v148 = 4096;
              v67 = SF_DRAFT_PTR(int, sub_8002FC18());
              if ( v67[757] )
              {
                v68 = v67[760];
                v69 = v67[761];
                v70 = v67[762];
                v146 = v67[759];
                v147 = v68;
                v148 = v69;
                v149 = v70;
              }
              else
              {
                v146 = v67[759];
              }
              v147 = v147 * v146 / 827;
LABEL_168:
              if ( v147 >= 4097 )
                v147 = 4096;
              if ( v148 >= 4097 )
                v148 = 4096;
              v147 = sub_800C6D4C(v147, v145);
              v148 = sub_800C6D4C(v148, v37);
              if ( v145 && v147 < 61 )
                v147 = 61;
              if ( v148 < 61 )
                v148 = 61;
              v76 = *SF_DRAFT_PTR(_DWORD, (a1 + 208));
              v77 = *SF_DRAFT_PTR(_DWORD, (a1 + 212));
              v78 = *SF_DRAFT_PTR(_DWORD, (a1 + 216));
              v141 = *SF_DRAFT_PTR(_DWORD, (a1 + 204));
              v142 = v76;
              v143 = v77;
              v144 = v78;
              v79 = *SF_DRAFT_PTR(_DWORD, (a1 + 180));
              v80 = *SF_DRAFT_PTR(_DWORD, (a1 + 184));
              v81 = *SF_DRAFT_PTR(_DWORD, (a1 + 188));
              v134 = *SF_DRAFT_PTR(_DWORD, (a1 + 176));
              v135 = v79;
              v136 = v80;
              v137 = v81;
              if ( !v134 && !v135 && !v136 && (v141 || v142 || v143) )
              {
                sub_800C720C(sf_draft_guest_address(&v141), sf_draft_guest_address(&v134));
                v134 = -v134;
                v136 = -v136;
                v135 = -v135;
              }
              v151 = 0;
              v150 = v136;
              v152 = -v134;
              v82 = sub_800C6D4C(v141, v134);
              v83 = sub_800C6D4C(v142, v135);
              v153 = v82 + v83 + sub_800C6D4C(v143, v136);
              v84 = sub_800C6D4C(v141, v150);
              v85 = sub_800C6D4C(v142, v151);
              v154 = v84 + v85 + sub_800C6D4C(v143, v152);
              if ( v145 >= v153 )
              {
                v86 = v145;
                if ( v153 < 0 )
                {
                  v87 = v153 + v148;
                  if ( v153 + v148 > 0 )
                    v87 = 0;
                  v153 = v87;
LABEL_194:
                  if ( v154 <= 0 )
                  {
                    if ( v154 >= 0 )
                    {
LABEL_201:
                      v134 = sub_800C6D4C(v134, v153);
                      v135 = sub_800C6D4C(v135, v153);
                      v136 = sub_800C6D4C(v136, v153);
                      v150 = sub_800C6D4C(v150, v154);
                      v151 = sub_800C6D4C(v151, v154);
                      v152 = sub_800C6D4C(v152, v154);
                      *SF_DRAFT_PTR(_DWORD, (a1 + 204)) = v134 + v150;
                      *SF_DRAFT_PTR(_DWORD, (a1 + 208)) = v135 + v151;
                      *SF_DRAFT_PTR(_DWORD, (a1 + 212)) = v136 + v152;
                      goto LABEL_202;
                    }
                    v88 = v154 + v147;
                    if ( v154 + v147 > 0 )
                      v88 = 0;
                  }
                  else
                  {
                    v88 = v154 - v147;
                    if ( v154 - v147 < 0 )
                      v88 = 0;
                  }
                  v154 = v88;
                  goto LABEL_201;
                }
                if ( v153 + v147 < v145 )
                  v86 = v153 + v147;
              }
              else
              {
                v86 = v153 - v148;
                if ( v145 >= v153 - v148 )
                  v86 = v145;
              }
              v153 = v86;
              goto LABEL_194;
            }
            if ( sub_8001C960(9) )
            {
              v147 = 256;
              v71 = 3072;
LABEL_167:
              v148 = v71;
              goto LABEL_168;
            }
            if ( (*SF_DRAFT_PTR(uint32, 0x80115E80u)) != 5 )
            {
              v147 = 128;
              v71 = 614;
              goto LABEL_167;
            }
            v72 = 341;
          }
          else
          {
            v73 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 408)) + 60));
            if ( v73 == 5 || (v74 = 0, (unsigned int)(v73 - 8) < 2) )
              v74 = 1;
            if ( v74 || (v75 = 0, ((*SF_DRAFT_PTR(_DWORD, *SF_DRAFT_PTR(uint32, (v2 + 16))) >> 1) & 1) != 0) )
              v75 = 1;
            v47 = v75 == 0;
            v72 = 273;
            if ( !v47 )
            {
              v72 = 409;
              if ( (unsigned int)*SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8)) - 1 >= 2 )
              {
                v72 = 273;
                if ( *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (v2 + 16)) + 8)) == 9 )
                  v72 = 409;
              }
            }
          }
          v147 = v72;
          v71 = 4096;
          goto LABEL_167;
        }
      }
    }
    v62 = v6;
  }
  v47 = v62 != 0;
  v64 = v7;
  if ( v47 )
    goto LABEL_144;
  v64 = v7;
  if ( !v8 )
    goto LABEL_144;
  v64 = v7;
  if ( *SF_DRAFT_PTR(_DWORD, (a1 + 356)) )
    goto LABEL_144;
  v65 = *v3;
  v47 = *v3 > 0;
  *SF_DRAFT_PTR(_DWORD, (a1 + 212)) = 0;
  if ( v47 )
  {
    v66 = v145;
  }
  else if ( v65 >= 0 )
  {
    v66 = 0;
  }
  else
  {
    v66 = -v145;
  }
  *SF_DRAFT_PTR(_DWORD, (a1 + 204)) = v66;
LABEL_202:
  v89 = *SF_DRAFT_PTR(_DWORD, (a1 + 212));
  v129 = *SF_DRAFT_PTR(_DWORD, (a1 + 204));
  v90 = v89;
  if ( v89 < 0 )
    v90 = -v89;
  if ( v90 < 4097 )
  {
    v91 = 1;
    if ( v89 <= 0 )
      v91 = v89 >> 31;
  }
  else if ( v89 < 0 )
  {
    v91 = -(-v89 >> 12);
  }
  else
  {
    v91 = v89 >> 12;
  }
  v128 = v91;
  v92 = *SF_DRAFT_PTR(_DWORD, (a1 + 204));
  if ( v129 < 0 )
    v92 = -v129;
  if ( v92 < 4097 )
  {
    v93 = 1;
    if ( v129 <= 0 )
      v93 = v129 >> 31;
  }
  else if ( v129 < 0 )
  {
    v93 = -(-v129 >> 12);
  }
  else
  {
    v93 = v129 >> 12;
  }
  v130 = v93;
  if ( !*SF_DRAFT_PTR(_BYTE, (a1 + 384)) )
    v128 = -v128;
  if ( *SF_DRAFT_PTR(_DWORD, (a1 + 348)) == 3 )
    v130 = 2048;
  v94 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = v128;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v94 + 2146335668)) = v130;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v94 + 2146335668)) = 0;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v94 + 2146335668)) = (sf_draft_unbound_stack_field(0x80036A1Cu, 0x1Cu), 0u);
  v95 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = 1;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v95 + 2146335668)) = 1;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v95 + 2146335668)) = 0;
  *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v95 + 2146335668)) = v132;
  SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 1;
  sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 3, 6, 1);
  if ( sub_8001C960(0) )
  {
    v96 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    v155 = SF_DRAFT_PTR(uint32, 0x80011460u)[0];
    v156 = SF_DRAFT_PTR(uint32, 0x80011460u)[1];
    v157 = SF_DRAFT_PTR(uint32, 0x80011460u)[2];
    v158 = SF_DRAFT_PTR(uint32, 0x80011460u)[3];
    v97 = SF_DRAFT_PTR(uint32, 0x80011460u)[1];
    v98 = SF_DRAFT_PTR(uint32, 0x80011460u)[2];
    v99 = SF_DRAFT_PTR(uint32, 0x80011460u)[3];
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = SF_DRAFT_PTR(uint32, 0x80011460u)[0];
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v96 + 2146335668)) = v97;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v96 + 2146335668)) = v98;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v96 + 2146335668)) = v99;
    v100 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = 1;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v100 + 2146335668)) = 0;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v100 + 2146335668)) = 0;
    *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v100 + 2146335668)) = v132;
    SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
    sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 1, 6, 2);
  }
  v47 = !sub_8001C960(0);
  result = 1;
  if ( !v47 )
  {
    v102 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v2 + 12)) + 408)) + 60));
    if ( v102 == 5 || (v103 = 0, (unsigned int)(v102 - 8) < 2) )
      v103 = 1;
    v47 = v103 == 0;
    result = 1;
    if ( !v47 )
    {
      v155 = SF_DRAFT_PTR(uint32, 0x80011470u)[0];
      v156 = SF_DRAFT_PTR(uint32, 0x80011470u)[1];
      v157 = SF_DRAFT_PTR(uint32, 0x80011478u)[0];
      v158 = SF_DRAFT_PTR(uint32, 0x80011478u)[1];
      v159 = SF_DRAFT_PTR(uint32, 0x80011480u)[0];
      v160 = SF_DRAFT_PTR(uint32, 0x80011480u)[1];
      v161 = SF_DRAFT_PTR(uint32, 0x80011480u)[2];
      v162 = SF_DRAFT_PTR(uint32, 0x80011480u)[3];
      v104 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      v105 = SF_DRAFT_PTR(uint32, 0x80011470u)[1];
      v106 = SF_DRAFT_PTR(uint32, 0x80011478u)[0];
      v107 = SF_DRAFT_PTR(uint32, 0x80011478u)[1];
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = SF_DRAFT_PTR(uint32, 0x80011470u)[0];
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v104 + 2146335668)) = v105;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v104 + 2146335668)) = v106;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v104 + 2146335668)) = v107;
      v108 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = 1;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v108 + 2146335668)) = 0;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v108 + 2146335668)) = 1;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v108 + 2146335668)) = v132;
      SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
      sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 1, 0, 6);
      v163 = v155;
      v164 = v156;
      v165 = v157;
      v166 = v158;
      if ( v155 > 0 )
      {
        v109 = v155 * v159;
        if ( v155 * v159 < 0 )
          v110 = -(-v109 >> 12);
        else
          v110 = v109 >> 12;
        v163 = v110;
      }
      if ( v164 > 0 )
      {
        v111 = v164 * v160;
        if ( v164 * v160 < 0 )
          v112 = -(-v111 >> 12);
        else
          v112 = v111 >> 12;
        v164 = v112;
      }
      if ( v165 > 0 )
      {
        v113 = v165 * v161;
        if ( v165 * v161 < 0 )
          v114 = -(-v113 >> 12);
        else
          v114 = v113 >> 12;
        v165 = v114;
      }
      v115 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      v116 = v164;
      v117 = v165;
      v118 = v166;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = v163;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v115 + 2146335668)) = v116;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v115 + 2146335668)) = v117;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v115 + 2146335668)) = v118;
      v119 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = 1;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v119 + 2146335668)) = 0;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v119 + 2146335668)) = 1;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v119 + 2146335668)) = v132;
      SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
      sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 1, 3, 6);
      v167 = SF_DRAFT_PTR(uint32, 0x80011440u)[0];
      v168 = SF_DRAFT_PTR(uint32, 0x80011440u)[1];
      v169 = SF_DRAFT_PTR(uint32, 0x80011440u)[2];
      v170 = SF_DRAFT_PTR(uint32, 0x80011440u)[3];
      v120 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      v163 = v155;
      v164 = v155;
      v165 = v155;
      v121 = v155;
      v122 = v155;
      v123 = v166;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119168u))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = v155;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011916Cu))) + (_DWORD)v120 + 2146335668)) = v121;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119170u))) + (_DWORD)v120 + 2146335668)) = v122;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119174u))) + (_DWORD)v120 + 2146335668)) = v123;
      v124 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x80115D84u)));
      v125 = v168;
      v126 = v169;
      v127 = v170;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x8011917Cu))) + (_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668)) = v167;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119180u))) + (_DWORD)v124 + 2146335668)) = v125;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119184u))) + (_DWORD)v124 + 2146335668)) = v126;
      *SF_DRAFT_PTR(int, (SF_DRAFT_PTR(char, &(*SF_DRAFT_PTR(uint32, 0x80119188u))) + (_DWORD)v124 + 2146335668)) = v127;
      SF_DRAFT_PTR(uint8, 0x8011918Cu)[(_DWORD)(*SF_DRAFT_PTR(uint32, 0x80115D84u)) + 2146335668] = 0;
      sub_80018994((*SF_DRAFT_PTR(uint32, 0x80115D84u)), 1, 2, 6);
      return 1;
    }
  }
  return result;
}

sint32 sub_8004308C(uint8 a1)
{
    FUNCTION_MARKER(0x8004308Cu, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  _DWORD *v1 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int *v7; 
  int result; 
  int v9; 
  _DWORD *v10 = SF_DRAFT_PTR(_DWORD, SF_DRAFT_GP);
  int v11; 
  int v12; 
  int v13; 
  int *v14; 
  int v16; 
  int *v17; 
  int v18; 
  _DWORD *v19; 
  _DWORD *v20; 
  int v21; 
  int v22; 
  sint32 v23; 
  _DWORD *v24; 
  _DWORD *v25; 
  int v26; 
  char v27; 
  bool v28; // dc
  _DWORD *v29; 
  int v30; 
  int v32; 
  _DWORD *v33; 
  int v35; 
  _DWORD *v36; 
  int v38; 
  int v39; 
  int v40; 
  _DWORD *v41; 
  int v42; 
  int v43; 
  _DWORD *v44; 
  int v45; 
  uint16 v46; 
  uint16 v47; 
  int v49; 
  _DWORD *v50; 
  char v51; 
  int v52; 
  _DWORD *v53; 
  __int16 v54; 
  __int16 v55; 
  _DWORD *v56; 
  uint16 v57; 
  int v58; 
  int v59; 
  _DWORD *v60; 
  int v62; 
  char v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  _DWORD *v71; 
  _DWORD *v72; 
  int i; 
  _DWORD *v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int j; 
  int v80; 
  int k; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  if ( (*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 0 )
  {
LABEL_5:
    v5 = a1;
    if ( !v1[179] )
    {
      v6 = 0;
      if ( (*SF_DRAFT_PTR(uint32, 0x8010C374u)) != -1 )
      {
        (*SF_DRAFT_PTR(uint32, 0x8010C374u)) = -1;
        v7 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
        do
        {
          if ( *v7 )
            sub_800C7BF8(v1[844], sf_draft_guest_address(v7));
          ++v6;
          v7 += 6;
        }
        while ( v6 < 36 );
        return a1;
      }
      return a1;
    }
    v9 = (*SF_DRAFT_PTR(uint32, 0x8010C374u));
    if ( !(uint8)sub_80040B50(a1, sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8010C374u)))) )
      return 0;
    v11 = 30 * v9 / 12;
    v12 = 30 * (*SF_DRAFT_PTR(uint32, 0x8010C374u)) / 12;
    v85 = 26 * v9 / 12;
    v86 = 26 * (*SF_DRAFT_PTR(uint32, 0x8010C374u)) / 12;
    v87 = 2 * v9;
    v88 = 2 * (*SF_DRAFT_PTR(uint32, 0x8010C374u));
    if ( (*SF_DRAFT_PTR(uint32, 0x8010C374u)) > 0 )
    {
      if ( (*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 12 && (!v5 || (*SF_DRAFT_PTR(uint32, 0x8010C374u)) >= 13) )
        return v5 == 0;
    }
    else
    {
      if ( v5 )
      {
        sub_800C8148((*SF_DRAFT_PTR(uint32, 0x8011C138u)), 15753456, 67109888, 67109888);
        v13 = 1;
        v14 = &(*SF_DRAFT_PTR(uint32, 0x8011C150u));
        do
        {
          sub_800C8148(sf_draft_guest_address(v14), 11822170, 67109888, 67109888);
          ++v13;
          v14 += 6;
        }
        while ( v13 < 36 );
        result = a1;
        if ( SF_DRAFT_PTR(uint32, 0x8011C138u)[0] )
          return result;
        sub_800C7BB0(*SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376)), (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
        return a1;
      }
      if ( (*SF_DRAFT_PTR(uint32, 0x8010C374u)) < 0 )
        return 0;
    }
    v16 = a1;
    if ( SF_DRAFT_PTR(uint32, 0x8011BB44u)[0] )
    {
      sub_8003D100();
      v16 = a1;
    }
    if ( v16 )
    {
      v17 = &SF_DRAFT_PTR(uint32, 0x80011BB0u)[2 * v11];
      v18 = v10[179];
      v19 = SF_DRAFT_PTR(_DWORD, (v18 + 36 * v11));
      v20 = SF_DRAFT_PTR(_DWORD, (v10[180] + 48 * v11));
      if ( !*SF_DRAFT_PTR(_DWORD, (v18 + 1080)) )
      {
        sub_800C7BB0(v10[844], v18 + 1080);
        v21 = v10[179];
        *SF_DRAFT_PTR(_DWORD, (v21 + 1092)) = 682910800;
        *SF_DRAFT_PTR(_BYTE, (v21 + 1095)) |= 2u;
      }
      v22 = 30 * v9 / 12;
      v23 = v12 < 30;
      if ( v11 < v12 )
      {
        v24 = v17 + 3;
        v25 = v19 + 1;
        do
        {
          v26 = *(v24 - 1);
          sub_800C7CEC(sf_draft_guest_address(v19), 10503740, *v17, *(v24 - 2), v26, *v24);
          v27 = *((_BYTE *)v25 + 11);
          *v25 = 6;
          *((_BYTE *)v25 + 11) = v27 | 2;
          if ( !*v19 )
            sub_800C7BB0(v10[844], sf_draft_guest_address(v19));
          v25 += 9;
          v19 += 9;
          if ( v22 != 14 )
          {
            sub_800C8148(sf_draft_guest_address(v20), 11822170, *v17, v26);
            v28 = *v20 != 0;
            v20[1] = 5;
            if ( !v28 )
              sub_800C7BB0(v10[844], sf_draft_guest_address(v20));
          }
          v29 = v20 + 6;
          if ( v22 != 16 )
          {
            sub_800C8148(sf_draft_guest_address(v29), 11822170, *(v24 - 2), *v24);
            v28 = *v29 != 0;
            v29[1] = 5;
            if ( !v28 )
              sub_800C7BB0(v10[844], sf_draft_guest_address(v29));
          }
          v20 = v29 + 6;
          v24 += 2;
          ++v22;
          v17 += 2;
        }
        while ( v22 < v12 );
        v23 = v12 < 30;
      }
      if ( v23 )
      {
        v30 = v17[3];
        sub_800C7CEC(sf_draft_guest_address(v19), 16757880, *v17, v17[1], v17[2], v30);
        v32 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
        v19[1] = 6;
        sub_800C7BB0(v32, sf_draft_guest_address(v19));
        sub_800C8148(sf_draft_guest_address(v20), 16757880, v17[1], v30);
        v33 = v20;
        v35 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
        v20[1] = 5;
        v36 = v20 + 6;
        sub_800C7BB0(v35, sf_draft_guest_address(v33));
        sub_800C8148(sf_draft_guest_address(v36), 16757880, v17[1], v30);
        v38 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
        v36[1] = 5;
        sub_800C7BB0(v38, sf_draft_guest_address(v36));
      }
      switch ( v12 )
      {
        case 6:
        case 7:
          goto LABEL_55;
        case 8:
        case 9:
          goto LABEL_52;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
          goto LABEL_49;
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
          if ( !(*SF_DRAFT_PTR(uint32, 0x8011C150u)) )
            sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C150u))));
          (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = 262259;
          (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = (uint16)(-56 * (v12 - 26) / 4 + 115) | 0x40000;
LABEL_49:
          if ( !(*SF_DRAFT_PTR(uint32, 0x8011C180u)) )
            sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C180u))));
          (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = 6488010;
          (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = (uint16)((__int16)(-115 * (v12 - 10)) / 20 - 54) | 0x620000;
LABEL_52:
          if ( !SF_DRAFT_PTR(uint32, 0x8011C198u)[0] )
            sub_800C7BB0(v10[844], (*SF_DRAFT_PTR(uint32, 0x8011C198u)));
          (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = 5963607;
          (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = ((8 * (v12 - 8) / 22 + 90) << 16) | 0xFF57;
LABEL_55:
          if ( !(*SF_DRAFT_PTR(uint32, 0x8011C1B0u)) )
            sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C1B0u))));
          (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = 3407703;
          (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = ((-81 * (v12 - 6) / 24 + 51) << 16) | 0xFF57;
          break;
        default:
          break;
      }
      if ( !(*SF_DRAFT_PTR(uint32, 0x8011C168u)) )
        sub_800C7BB0(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C168u))));
      v39 = v85;
      v40 = v10[180];
      (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = -6160349;
      v41 = SF_DRAFT_PTR(_DWORD, (v40 + 24 * v85 + 1440));
      (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)((__int16)(78 * v12) / 30 + 35) | 0xFFA20000;
      if ( v86 >= v85 )
      {
        v42 = 10 * v85 - 180;
        v43 = 10 * v85;
        v44 = v41 + 1;
        do
        {
          v45 = v43 - 89;
          if ( v39 >= 18 )
            v45 = -10 - v42;
          if ( v39 )
          {
            if ( v39 >= 18 )
            {
              v46 = 156;
              if ( v39 == 18 )
                v46 = 154;
            }
            else
            {
              v46 = 34;
            }
          }
          else
          {
            v46 = 31;
          }
          v47 = -156;
          if ( v39 >= 7 )
          {
            if ( v39 == 7 )
            {
              v47 = -151;
            }
            else
            {
              v47 = -147;
              if ( v39 >= 18 )
              {
                if ( v39 == 18 )
                {
                  v47 = 43;
                }
                else
                {
                  v47 = 43;
                  if ( v39 < 25 )
                    v47 = 42;
                }
              }
            }
          }
          if ( v39 == v86 )
          {
            if ( v86 < 26 )
            {
              sub_800C8148(sf_draft_guest_address(v41), 15774840, v47 | (v45 << 16), v46 | (v45 << 16));
              v49 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
              v50 = v41;
              *v44 = 5;
LABEL_83:
              sub_800C7BB0(v49, sf_draft_guest_address(v50));
            }
          }
          else
          {
            sub_800C8148(sf_draft_guest_address(v41), 9190470, v47 | (v45 << 16), v46 | (v45 << 16));
            v51 = *((_BYTE *)v44 + 11);
            *v44 = 5;
            *((_BYTE *)v44 + 11) = v51 | 2;
            v50 = v41;
            if ( !*v41 )
            {
              v49 = v10[844];
              goto LABEL_83;
            }
          }
          v44 += 6;
          v41 += 6;
          v42 += 10;
          ++v39;
          v43 += 10;
        }
        while ( v86 >= v39 );
      }
      v52 = v85;
      v53 = SF_DRAFT_PTR(_DWORD, (v10[180] + 24 * v85 + 2064));
      if ( v86 >= v85 )
      {
        v54 = 12 * v85 - 192;
        v55 = 12 * v85;
        v56 = v53 + 1;
        do
        {
          v57 = v55 - 151;
          if ( v52 >= 16 )
            v57 = v54 + 44;
          if ( v52 )
          {
            v58 = 88;
            if ( v52 >= 15 )
            {
              v58 = 86;
              if ( v52 != 15 )
              {
                if ( v52 == 16 )
                {
                  v58 = -10;
                }
                else
                {
                  v58 = -9;
                  if ( v52 < 25 )
                    v58 = -5;
                }
              }
            }
          }
          else
          {
            v58 = -20;
          }
          if ( v52 )
          {
            v59 = -95;
            if ( v52 >= 15 )
            {
              v59 = -91;
              if ( v52 != 15 )
              {
                if ( v52 == 16 )
                {
                  v59 = -82;
                }
                else
                {
                  v59 = -84;
                  if ( v52 < 25 )
                    v59 = -85;
                }
              }
            }
          }
          else
          {
            v59 = -94;
          }
          if ( v52 == v86 )
          {
            if ( v86 < 26 )
            {
              sub_800C8148(sf_draft_guest_address(v53), 15774840, v57 | (v58 << 16), v57 | (v59 << 16));
              v60 = v53;
              v62 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 3376));
              *v56 = 5;
LABEL_110:
              sub_800C7BB0(v62, sf_draft_guest_address(v60));
            }
          }
          else
          {
            sub_800C8148(sf_draft_guest_address(v53), 9190470, v57 | (v58 << 16), v57 | (v59 << 16));
            v63 = *((_BYTE *)v56 + 11);
            *v56 = 5;
            *((_BYTE *)v56 + 11) = v63 | 2;
            v60 = v53;
            if ( !*v53 )
            {
              v62 = v10[844];
              goto LABEL_110;
            }
          }
          v56 += 6;
          v53 += 6;
          v54 += 12;
          ++v52;
          v55 += 12;
        }
        while ( v86 >= v52 );
      }
      v64 = v87;
      v65 = v10[180] + 2688;
      if ( v87 < v88 )
      {
        v66 = 24 * v87 + v65;
        v67 = v66;
        do
        {
          v66 += 24;
          sub_800C7BB0(v10[844], v67);
          ++v64;
          v67 = v66;
        }
        while ( v64 < v88 );
      }
      if ( v64 < 12 )
      {
        v68 = 24 * v64 + v65;
        (*SF_DRAFT_PTR(uint32, 0x8011C148u)) = *SF_DRAFT_PTR(_DWORD, (v68 + 16));
        (*SF_DRAFT_PTR(uint32, 0x8011C14Cu)) = *SF_DRAFT_PTR(_DWORD, (v68 + 20));
        return 1;
      }
      v69 = v10[844];
    }
    else
    {
      v70 = v10[179];
      v71 = SF_DRAFT_PTR(_DWORD, (v70 + 36 * v12));
      v72 = SF_DRAFT_PTR(_DWORD, (v10[180] + 48 * v12));
      if ( *SF_DRAFT_PTR(_DWORD, (v70 + 1080)) )
        sub_800C7BF8(v10[844], v70 + 1080);
      for ( i = v12; i < v11; v71 += 9 )
      {
        if ( *v71 )
          sub_800C7BF8(v10[844], sf_draft_guest_address(v71));
        if ( *v72 )
          sub_800C7BF8(v10[844], sf_draft_guest_address(v72));
        v74 = v72 + 6;
        if ( *v74 )
          sub_800C7BF8(v10[844], sf_draft_guest_address(v74));
        v72 = v74 + 6;
        ++i;
      }
      switch ( v12 )
      {
        case 6:
        case 7:
          goto LABEL_136;
        case 8:
        case 9:
          goto LABEL_135;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
          if ( (*SF_DRAFT_PTR(uint32, 0x8011C150u)) )
            sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C150u))));
          goto LABEL_134;
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
          v75 = -56 * (v12 - 26);
          v76 = v75 >> 2;
          if ( v75 < 0 )
            v76 = (v75 + 3) >> 2;
          (*SF_DRAFT_PTR(uint32, 0x8011C160u)) = 262259;
          (*SF_DRAFT_PTR(uint32, 0x8011C164u)) = (uint16)(v76 + 115) | 0x40000;
LABEL_134:
          (*SF_DRAFT_PTR(uint32, 0x8011C190u)) = 6488010;
          (*SF_DRAFT_PTR(uint32, 0x8011C194u)) = (uint16)(-115 * (v12 - 10) / 20 - 54) | 0x620000;
LABEL_135:
          (*SF_DRAFT_PTR(uint32, 0x8011C1A8u)) = 5963607;
          (*SF_DRAFT_PTR(uint32, 0x8011C1ACu)) = ((8 * (v12 - 8) / 22 + 90) << 16) | 0xFF57;
LABEL_136:
          (*SF_DRAFT_PTR(uint32, 0x8011C1C0u)) = 3407703;
          (*SF_DRAFT_PTR(uint32, 0x8011C1C4u)) = ((-81 * (v12 - 6) / 24 + 51) << 16) | 0xFF57;
          break;
        default:
          if ( (*SF_DRAFT_PTR(uint32, 0x8011C180u)) )
            sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C180u))));
          if ( SF_DRAFT_PTR(uint32, 0x8011C198u)[0] )
            sub_800C7BF8(v10[844], (*SF_DRAFT_PTR(uint32, 0x8011C198u)));
          if ( (*SF_DRAFT_PTR(uint32, 0x8011C1B0u)) )
            sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C1B0u))));
          break;
      }
      v77 = 78 * v12 / 30;
      if ( v77 > 0 )
      {
        (*SF_DRAFT_PTR(uint32, 0x8011C178u)) = -6160349;
        (*SF_DRAFT_PTR(uint32, 0x8011C17Cu)) = (uint16)(v77 + 35) | 0xFFA20000;
      }
      else if ( (*SF_DRAFT_PTR(uint32, 0x8011C168u)) )
      {
        sub_800C7BF8(v10[844], sf_draft_guest_address(&(*SF_DRAFT_PTR(uint32, 0x8011C168u))));
      }
      v78 = v86;
      for ( j = v10[180] + 24 * v86 + 1440; v78 < v85; j += 24 )
      {
        ++v78;
        sub_800C7BF8(v10[844], j);
      }
      v80 = v86;
      for ( k = v10[180] + 24 * v86 + 2064; v80 < v85; k += 24 )
      {
        ++v80;
        sub_800C7BF8(v10[844], k);
      }
      v82 = v88;
      if ( v88 < v87 )
      {
        v83 = 24 * v88 + v10[180] + 2688;
        v84 = v83;
        do
        {
          v83 += 24;
          sub_800C7BF8(v10[844], v84);
          ++v82;
          v84 = v83;
        }
        while ( v82 < v87 );
      }
      result = 1;
      if ( !SF_DRAFT_PTR(uint32, 0x8011C138u)[0] )
        return result;
      v69 = v10[844];
    }
    sub_800C7BF8(v69, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
    return 1;
  }
  v3 = 0;
  v4 = SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(uint32, 0x8011C138u)));
  while ( 1 )
  {
    ++v3;
    if ( *v4 )
      return v1[181] == 4;
    v4 += 6;
    if ( v3 >= 6 )
      goto LABEL_5;
  }
}

