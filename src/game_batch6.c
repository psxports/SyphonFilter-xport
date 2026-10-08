#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

extern uint32 sub_800F27A4();
extern uint32 sub_800F594C();
extern uint32 sub_800F7AFC();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8006FED0u 0x8006fed0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_8006FED0(sint32 a1)
{
  FUNCTION_MARKER(0x8006FED0u, "SCUS_942.40");
  int v131;
  int v127;
  int result; 
  int v3; 
  int *v4; 
  int v5; 
  int v6; 
  int v7; 
  int *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  _DWORD *v14; 
  int v15; 
  int v16; 
  int v17; 
  _DWORD *v18; 
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
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  _DWORD *v54; 
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
  _DWORD *v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  _DWORD *v74; 
  int v75; 
  int v76; 
  int v77; 
  _DWORD *v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  _DWORD *v84; 
  int v85; 
  int v86; 
  int v87; 
  _DWORD *v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int *v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
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
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
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
  int v140; 
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
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  int v180; 

  result = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
  v108 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
  v109 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
  v110 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
  v111 = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
  if ( a1 )
  {
    result = *SF_DRAFT_PTR(_DWORD, (a1 + 12));
    if ( result )
    {
      v3 = *SF_DRAFT_PTR(_DWORD, (result + 408));
      v4 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
      if ( v3 )
      {
        v5 = v4[1];
        v6 = v4[2];
        v7 = v4[3];
        v104 = *v4;
        v105 = v5;
        v106 = v6;
        v107 = v7;
        v9 = v3;
        v8 = SF_DRAFT_PTR(int, sub_80028C7C(*SF_DRAFT_PTR(__int16, (a1 + 2))));
        if ( v8 )
        {
          v110 -= *((char *)v8 + 2) << 12;
          v108 -= *(char *)v8 << 12;
          v10 = v105 - *((char *)v8 + 1);
        }
        else
        {
          v135 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
          v136 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
          v137 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
          v138 = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
          v11 = v4[68];
          v12 = v4[69];
          v13 = v4[70];
          v139 = v4[67];
          v141 = v12;
          v142 = v13;
          v140 = v11 - 9;
          v10 = v11 - 9 + (*SF_DRAFT_PTR(uint32, 0x800122B8u));
        }
        v105 = v10;
        v14 = SF_DRAFT_PTR(_DWORD, v4[102]);
        v15 = v14[19];
        v16 = v14[20];
        v17 = v14[21];
        v112 = v14[18];
        v113 = v15;
        v114 = v16;
        v115 = v17;
        v18 = SF_DRAFT_PTR(_DWORD, v4[102]);
        v19 = v18[23];
        v20 = v18[24];
        v21 = v18[25];
        v116 = v18[22];
        v117 = v19;
        v118 = v20;
        v119 = v21;
        if ( *SF_DRAFT_PTR(_BYTE, (v9 + 68)) )
        {
          v135 = v116 - v112;
          v136 = v117 - v113;
          v137 = v118 - v114;
          if ( v116 == v112 && (v22 = v113, v118 == v114) )
          {
            v125 = 4096;
            v124 = 0;
            v126 = 0;
            v120 = v112;
            if ( v117 < v113 )
              v22 = v117;
            v121 = v22;
            v122 = v114;
          }
          else
          {
            v140 = 0;
            v139 = v137;
            v141 = -v135;
            sub_800EBAD0(sf_draft_guest_address(&v135), sf_draft_guest_address(&v139), sf_draft_guest_address(&v124));
            sub_800C720C(sf_draft_guest_address(&v124), sf_draft_guest_address(&v124));
            sub_800E0364(sf_draft_guest_address(&v112), sf_draft_guest_address(&v104), sf_draft_guest_address(&v143));
            sub_800E0364(sf_draft_guest_address(&v116), sf_draft_guest_address(&v104), sf_draft_guest_address(&v144));
            if ( v144 < v143 )
            {
              v120 = v116;
              v121 = v117;
              v122 = v118;
              v123 = v119;
            }
            else
            {
              v120 = v112;
              v121 = v113;
              v122 = v114;
              v123 = v115;
            }
          }
          v129 = 0;
          v128 = v135;
          v130 = v137;
          sub_800D9580(sf_draft_guest_address(&v128), sf_draft_guest_address(&v145));
          if ( v145 )
          {
            v128 = sub_800C6D90(v128, v145);
            v130 = sub_800C6D90(v130, v145);
          }
          else
          {
            v128 = 0;
            v129 = 0;
            v130 = 0;
          }
          v145 <<= 12;
          v23 = v121;
          v24 = v122;
          v25 = v123;
          v4[80] = v120;
          v4[81] = v23;
          v4[82] = v24;
          v4[83] = v25;
          v26 = v125;
          v27 = v126;
          v28 = (sf_draft_unbound_stack_field(0x8006FED0u, 0x6Cu), 0u);
          v4[84] = v124;
          v4[85] = v26;
          v4[86] = v27;
          v4[87] = v28;
          *SF_DRAFT_PTR(_DWORD, (v9 + 104)) = v145;
          v29 = v129;
          v30 = v130;
          v31 = (sf_draft_unbound_stack_field(0x8006FED0u, 0x7Cu), 0u);
          *SF_DRAFT_PTR(_DWORD, (v9 + 108)) = v128;
          *SF_DRAFT_PTR(_DWORD, (v9 + 112)) = v29;
          *SF_DRAFT_PTR(_DWORD, (v9 + 116)) = v30;
          *SF_DRAFT_PTR(_DWORD, (v9 + 120)) = v31;
          *SF_DRAFT_PTR(_BYTE, (v9 + 68)) = 0;
          *SF_DRAFT_PTR(_BYTE, (v9 + 308)) = sub_8009498C(sf_draft_guest_address(&v124),  v9 + 312);
        }
        else
        {
          v32 = v4[81];
          v33 = v4[82];
          v34 = v4[83];
          v120 = v4[80];
          v121 = v32;
          v122 = v33;
          v123 = v34;
          v35 = v4[85];
          v36 = v4[86];
          v37 = v4[87];
          v124 = v4[84];
          v125 = v35;
          v126 = v36;
          v127 = v37;
          v145 = *SF_DRAFT_PTR(_DWORD, (v9 + 104));
          v38 = *SF_DRAFT_PTR(_DWORD, (v9 + 112));
          v39 = *SF_DRAFT_PTR(_DWORD, (v9 + 116));
          v40 = *SF_DRAFT_PTR(_DWORD, (v9 + 120));
          v128 = *SF_DRAFT_PTR(_DWORD, (v9 + 108));
          v129 = v38;
          v130 = v39;
          v131 = v40;
        }
        v41 = a1;
        if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 4) != 0 )
        {
          v146 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
          v147 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
          v148 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
          v149 = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
          if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x100000) != 0 )
          {
            v110 -= *SF_DRAFT_PTR(_DWORD, (v9 + 172));
            v109 -= *SF_DRAFT_PTR(_DWORD, (v9 + 176));
            v150 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 4));
            v151 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 10));
            v42 = *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 8)) + 12)) + 16));
            v151 = -v151;
            v155 = 0;
            v156 = -v150;
            v152 = v42;
            v154 = v42;
            if ( v108 )
            {
              v132 = sub_800C6D4C(v42, v108);
              v133 = sub_800C6D4C(v155, v108);
              v134 = sub_800C6D4C(v156, v108);
              v146 += v132;
              v147 += v133;
              v148 += v134;
            }
            if ( v110 )
            {
              v132 = sub_800C6D4C(v150, v110);
              v133 = sub_800C6D4C(v151, v110);
              v134 = sub_800C6D4C(v152, v110);
              v146 += v132;
              v147 += v133;
              v148 += v134;
            }
            v43 = sub_800C6D4C(v146, v124);
            v44 = sub_800C6D4C(v147, v125);
            v162 = v43 + v44 + sub_800C6D4C(v148, v126);
            v158 = sub_800C6D4C(v124, v162);
            v159 = sub_800C6D4C(v125, v162);
            v160 = sub_800C6D4C(v126, v162);
            v146 -= v158;
            v148 -= v160;
            v147 = v147 - v159 + v109;
          }
          v45 = v4[25];
          v46 = v4[26];
          v47 = v4[27];
          v150 = v4[24];
          v151 = v45;
          v152 = v46;
          v153 = v47;
          v146 += v150;
          v147 += v45;
          v148 += v46;
          v48 = v4[29];
          v49 = v4[30];
          v50 = v4[31];
          v154 = v4[28];
          v155 = v48;
          v156 = v49;
          v157 = v50;
          v146 += v154;
          v148 += v49;
          v147 += v48;
          v51 = sub_800C6D4C(v146, v124);
          v52 = sub_800C6D4C(v147, v125);
          v53 = v51 + v52 + sub_800C6D4C(v148, v126);
          v163 = v53;
          if ( v53 < 0 )
          {
            if ( !*SF_DRAFT_PTR(_DWORD, (v9 + 176)) )
            {
              if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) & 0x100000) != 0 )
              {
                v150 = sub_800C6D4C(v124, 52428);
                v151 = sub_800C6D4C(v125, 52428);
                v152 = sub_800C6D4C(v126, 52428);
                v146 += v150;
                v147 += v151;
                v148 += v152;
              }
              else
              {
                v146 = sub_800C6D4C(v124, v53 + 52428);
                v147 = sub_800C6D4C(v125, v163 + 52428);
                v148 = sub_800C6D4C(v126, v163 + 52428);
              }
            }
            v146 = -v146;
            v147 = -v147;
            v148 = -v148;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 112)) += v146;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 116)) += v147;
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 120)) += v148;
          }
          v41 = a1;
        }
        sub_800493F0(v41, 1, 0);
        sub_80049690(a1, 1, 0);
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x100u;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~4u;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) &= ~0x100000u;
        v154 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
        v155 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
        v156 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
        v157 = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
        v54 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
        v55 = v54[21];
        v56 = v54[22];
        v57 = v54[23];
        v150 = v54[20];
        v151 = v55;
        v152 = v56;
        v153 = v57;
        v132 = ((v104 - v120) << 12) + v150;
        v133 = ((v105 - v121) << 12) + v55;
        v134 = ((v106 - v122) << 12) + v56;
        v58 = sub_800C6D4C(v132, v124);
        v59 = sub_800C6D4C(v133, v125);
        v164 = v58 + v59 + sub_800C6D4C(v134, v126);
        if ( v164 < 19649 )
        {
          v60 = sub_800C6D4C(v150, v124);
          v62 = sub_800C6D4C(v151, v125);
          v61 = sub_800C6D4C(v152, v126);
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 4u;
          v165 = -(v60 + v62 + v61);
          if ( v125 >= 2896 )
            *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 404)) |= 0x100000u;
          v154 = sub_800C6D4C(v124, -v164);
          v155 = sub_800C6D4C(v125, -v164);
          v156 = sub_800C6D4C(v126, -v164);
        }
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 80)) += v154;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 84)) += v155;
        v63 = v145;
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 88)) += v156;
        *SF_DRAFT_PTR(_DWORD, (v9 + 172)) = 0;
        *SF_DRAFT_PTR(_DWORD, (v9 + 176)) = 0;
        if ( v63 || (v64 = a1, v113 == v117) )
        {
          v158 = (*SF_DRAFT_PTR(uint32, 0x800122B4u));
          v159 = (*SF_DRAFT_PTR(uint32, 0x800122B8u));
          v160 = (*SF_DRAFT_PTR(uint32, 0x800122BCu));
          v161 = (*SF_DRAFT_PTR(uint32, 0x800122C0u));
          v65 = SF_DRAFT_PTR(_DWORD, r_u32((a1 + 12)));
          v66 = v65[21];
          v67 = v65[22];
          v68 = v65[23];
          v166 = v65[20];
          v167 = v66;
          v168 = v67;
          v169 = v68;
          v69 = v166 >> 12;
          if ( v166 < 0 )
            v69 = -(-v166 >> 12);
          v166 = v69;
          if ( v167 < 0 )
            v70 = -(-v167 >> 12);
          else
            v70 = v167 >> 12;
          v167 = v70;
          if ( v168 < 0 )
            v71 = -(-v168 >> 12);
          else
            v71 = v168 >> 12;
          v168 = v71;
          v170 = v104 + v166;
          v172 = v106 + v71;
          v171 = v105 + v167;
          v174 = v105 + v167 - v113;
          v175 = v106 + v71 - v114;
          v173 = v104 + v166 - v112;
          if ( v112 == v116 && v113 == v117 && v114 == v118 )
          {
            v158 = -4096 * (v104 + v166 - v112);
            v159 = 0;
            v160 = -4096 * (v106 + v71 - v114);
          }
          else
          {
            v72 = v173 * v128 + v175 * v130;
            v179 = v72;
            if ( v72 >= -6 )
            {
              v82 = v173 * v130;
              if ( v145 + 6 >= v72 )
              {
                v176 = v130;
                v177 = 0;
                v178 = -v128;
                v92 = v175 * -v128;
                v93 = v82 + v92;
                if ( v82 + v92 < 0 )
                  v93 = -v93;
                v180 = v82 + v92;
                if ( v93 >= 26209 )
                {
                  v158 = sub_800C6D4C(v130, -(v82 + v92));
                  v159 = sub_800C6D4C(v177, -v180);
                  v160 = sub_800C6D4C(v178, -v180);
                }
              }
              else
              {
                v83 = v117 - v171;
                v158 = (v116 - v170) << 12;
                if ( v117 - v171 < 0 )
                  v83 = 0;
                v159 = v83 << 12;
                v160 = (v118 - v172) << 12;
                if ( v125 < 2896 && v113 >= v117 )
                {
                  *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 68)) = 1;
                  v84 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
                  v85 = v117;
                  v86 = v118;
                  v87 = v119;
                  v84[18] = v116;
                  v84[19] = v85;
                  v84[20] = v86;
                  v84[21] = v87;
                  v88 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
                  v89 = v117;
                  v90 = v118;
                  v91 = v119;
                  v88[22] = v116;
                  v88[23] = v89;
                  v88[24] = v90;
                  v88[25] = v91;
                }
              }
            }
            else
            {
              v158 = -4096 * v173;
              if ( v174 > 0 )
                v73 = 0;
              else
                v73 = -4096 * v174;
              v159 = v73;
              v160 = -4096 * v175;
              if ( v125 < 2896 && v117 >= v113 )
              {
                *SF_DRAFT_PTR(_BYTE, (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)) + 68)) = 1;
                v74 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
                v75 = v113;
                v76 = v114;
                v77 = v115;
                v74[18] = v112;
                v74[19] = v75;
                v74[20] = v76;
                v74[21] = v77;
                v78 = SF_DRAFT_PTR(_DWORD, r_u32((*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 408)));
                v79 = v113;
                v80 = v114;
                v81 = v115;
                v78[22] = v112;
                v78[23] = v79;
                v78[24] = v80;
                v78[25] = v81;
              }
            }
          }
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 80)) += v158;
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 84)) += v159;
          *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 88)) += v160;
          v64 = a1;
        }
        sub_80048F3C(v64, 1, 0);
        v94 = SF_DRAFT_PTR(int, r_u32((a1 + 12)));
        v95 = v94[1];
        v96 = v94[2];
        v97 = v94[3];
        v166 = *v94;
        v167 = v95;
        v168 = v96;
        v169 = v97;
        v170 = v116 - v112;
        v171 = v117 - v113;
        v172 = v118 - v114;
        if ( v116 == v112 && (v98 = v113, v118 == v114) )
        {
          if ( v117 < v113 )
            v98 = v117;
        }
        else
        {
          v99 = v170;
          if ( v170 < 0 )
            v99 = -v170;
          v100 = v172;
          if ( v172 < 0 )
            v100 = -v172;
          if ( v100 >= v99 )
          {
            v103 = v171 * (v168 - v114);
            if ( !v172 )
              _break(7u, 0);
            if ( v172 == -1 && v103 == 0x80000000 )
              _break(6u, 0);
            v102 = v103 / v172;
          }
          else
          {
            v101 = v171 * (v166 - v112);
            if ( !v170 )
              _break(7u, 0);
            if ( v170 == -1 && v101 == 0x80000000 )
              _break(6u, 0);
            v102 = v101 / v170;
          }
          v98 = v113 + v102;
        }
        *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (a1 + 12)) + 300)) = v98;
        sub_8006F8C0(a1);
        sub_8006FB70(a1, v164);
        return sub_8006FC48(a1);
      }
    }
  }
  return result;
}

// FUNCTION_MARKER 0x800C4B1Cu 0x800c4b1c
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
sint32 sub_800C4B1C(sint16 a1, sint32 a2, sint32 a3)
{
  FUNCTION_MARKER(0x800C4B1Cu, "SCUS_942.40");
  int v3 = SF_DRAFT_GP;
  int v5; 
  __int16 v6; 
  int v7; 
  char *v8; 
  int v9; 
  int *v10; 
  int v11; 
  __int16 *v12; 
  __int16 *v13; 
  __int16 *v14; 
  __int16 *v15; 
  __int16 *v16; 
  __int16 *v17; 
  int result; 
  int v19; 
  int v20; 
  char v21; 
  int v22; 
  unsigned int v23; 
  __int16 *v24; 
  int v25; 
  int v26; 
  char v27; 
  bool v28; 
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
  uint8 v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46 = SF_DRAFT_GP;
  int v47; 
  char *v48; 
  char v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int *v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59 = SF_DRAFT_GP;
  int v60 = SF_DRAFT_GP;
  int v61 = SF_DRAFT_GP;
  int v62; 
  BOOL v63; 
  int v64; 
  char *v65; 
  char v66; 
  unsigned int v67; 
  int v68; 
  char v69; 

  int v71; 



  v5 = a2;
  v6 = a3;
  if ( a1 == -1 )
  {
    v7 = 7;
    v8 = SF_DRAFT_PTR(char, 0x80116867u);
    do
    {
      *v8 = 0;
      --v7;
      --v8;
    }
    while ( v7 >= 0 );
    v9 = 0;
    v10 = SF_DRAFT_PTR(int, 0x8010DF0Cu);
    do
    {
      SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v9] = 0;
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[v9] = 0;
      SF_DRAFT_PTR(uint8, 0x8010DFCCu)[v9] = 0;
      SF_DRAFT_PTR(uint8, 0x8010DFECu)[v9] = 0;
      *v10 = 0;
      ++v9;
      ++v10;
    }
    while ( v9 < 32 );
    v11 = 0;
    v12 = SF_DRAFT_PTR(__int16, 0x8012200Au);
    v13 = SF_DRAFT_PTR(__int16, 0x80121FFAu);
    v14 = SF_DRAFT_PTR(__int16, 0x80121FEAu);
    do
    {
      v15 = v12;
      v16 = v13;
      v17 = v14;
      SF_DRAFT_PTR(uint8, 0x80121FE8u)[v11] = 0;
      SF_DRAFT_PTR(uint8, 0x80121FE9u)[v11] = 0;
      do
      {
        *(_BYTE *)v17 = 0;
        *(_BYTE *)v16 = 0;
        *(_BYTE *)v15 = 0;
        v15 = SF_DRAFT_PTR(__int16, ((char *)v15 + 1));
        v16 = SF_DRAFT_PTR(__int16, ((char *)v16 + 1));
        v17 = SF_DRAFT_PTR(__int16, ((char *)v17 + 1));
      }
      while ( (sint32)sf_draft_guest_address(v15) < (sint32)sf_draft_guest_address(v12 + 8) );
      SF_DRAFT_PTR(uint8, 0x8012201Au)[v11] = 0;
      SF_DRAFT_PTR(uint8, 0x8012201Bu)[v11] = 0;
      v11 += 52;
      v12 += 26;
      v13 += 26;
      v14 += 26;
    }
    while ( v11 < 832 );
LABEL_10:
    *SF_DRAFT_PTR(_BYTE, (v3 + 1978)) = 0;
    return 0;
  }
  if ( !SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] )
  {
    switch ( (__int16)a3 )
    {
      case 0:
      case 1:
      case 2:
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = 0;
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = a3 + 8;
        return 0;
      case 3:
        a2 = (__int16)a2;
        v41 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5];
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5] )
          goto LABEL_96;
        sub_800F74BC(a1, (__int16)a2);
        return 0;
      case 4:
        result = 0;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] == 1 )
        {
          SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] = 2;
          return 0;
        }
        return result;
      case 5:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 2;
        goto LABEL_131;
      case 6:
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 2;
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 12;
        return 0;
      case 7:
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 2;
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 13;
        return 0;
      case 8:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        *SF_DRAFT_PTR(_BYTE, (v3 + 1979)) = 1;
        return 0;
      case 11:
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 14;
        return 0;
      case 12:
      case 13:
      case 14:
      case 15:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        v42 = a3 << 16;
        v43 = SF_DRAFT_PTR(uint32, 0x80134238u)[5 * (__int16)a3 - 60];
        *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 1;
        v44 = 0;
        if ( v43 > 0 )
        {
          do
          {
            if ( !*SF_DRAFT_PTR(_WORD, (v3 + 1976)) )
              break;
            v45 = 5 * ((v42 >> 16) - 12);
            sub_800C4B1C(a1, (__int16)v5, *((uint8 *)SF_DRAFT_PTR(uint32, 0x8013423Cu)[v45] + v44++));
          }
          while ( v44 < SF_DRAFT_PTR(sint32, 0x80134238u)[v45] );
        }
        *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 0;
        return 0;
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
        a2 = (__int16)a2;
        v41 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5];
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5] )
        {
LABEL_96:
          result = 0;
          if ( v41 == 1 )
            SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[a2] = 0;
          return result;
        }
        *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 0;
        sub_800F74BC(a1, (__int16)a2);
        sub_800C34C0(*SF_DRAFT_PTR(_WORD, (v46 + 1972)), *SF_DRAFT_PTR(_WORD, (v46 + 1974)), sf_draft_guest_address(&v71), sf_draft_guest_address((uint16 *)&v71 + 1), 1);
        sub_800F7AFC(a1, *(SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(uint16, 0x80116858u))) + v6) - 1, (__int16)v71, SHIWORD(v71));
        sub_800F594C(a1, *(SF_DRAFT_PTR(uint8, (*SF_DRAFT_PTR(uint16, 0x80116858u))) + v6) - 1, 1, 0);
        if ( !*SF_DRAFT_PTR(_BYTE, (v3 + 1978)) )
          return 0;
        v47 = 0;
        if ( *SF_DRAFT_PTR(_BYTE, (v3 + 1978)) )
        {
          v48 = SF_DRAFT_PTR(char, 0x80116860u);
          do
          {
            ++v47;
            sub_800F7AFC(a1, (uint8)*v48, (__int16)v71, SHIWORD(v71));
            sub_800F594C(a1, (uint8)*v48++, 1, 0);
          }
          while ( v47 < *SF_DRAFT_PTR(uint8, (v3 + 1978)) );
        }
        goto LABEL_10;
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        SF_DRAFT_PTR(uint8, 0x80116860u)[*SF_DRAFT_PTR(uint8, (v3 + 1978))] = SF_DRAFT_PTR(uint8, 0x80116850u)[(__int16)a3] - 1;
        v49 = *SF_DRAFT_PTR(_BYTE, (v3 + 1978)) + 1;
        goto LABEL_123;
      case 32:
      case 33:
      case 34:
      case 35:
      case 36:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
        v36 = (__int16)a2;
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 32;
        v37 = 3;
        goto LABEL_134;
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 48;
        v50 = (uint8)(a3 - 48);
        if ( SF_DRAFT_PTR(uint8, 0x80121FE9u)[52 * v50] )
          v51 = (uint8)SF_DRAFT_PTR(uint8, 0x80116867u)[(uint8)SF_DRAFT_PTR(uint8, 0x80121FE9u)[52 * v50]];
        else
          v51 = *SF_DRAFT_PTR(_DWORD, (v3 + 1968));
        v52 = 0;
        if ( SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] )
        {
          v53 = (__int16)a2;
          v54 = SF_DRAFT_PTR(int, SF_DRAFT_PTR(uint32, 0x8010DF0Cu)[(__int16)a2]);
          v55 = (__int16)v5;
          do
          {
            v56 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[v55];
            if ( *((uint8 *)SF_DRAFT_PTR(uint16, 0x80121FFAu)[v56] + v52) - 1 >= v51
              || (v57 = v55, v51 >= *((uint8 *)SF_DRAFT_PTR(uint16, 0x8012200Au)[v56] + v52) + 1) )
            {
              *v54 |= 1 << (*(SF_DRAFT_PTR(_BYTE, SF_DRAFT_PTR(uint16, 0x80121FEAu)[26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[v53]]) + v52) - 1);
            }
            else
            {
              SF_DRAFT_PTR(uint32, 0x8010DF0Cu)[v57] &= ~(1 << (*(SF_DRAFT_PTR(_BYTE, SF_DRAFT_PTR(uint16, 0x80121FEAu)[v56]) + v52) - 1));
            }
            ++v52;
            v55 = (__int16)v5;
          }
          while ( v52 < (uint8)SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]] );
        }
        sub_800F27A4(a1);
        return 0;
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
        v58 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
        {
          result = 0;
          if ( v58 == 1 )
            SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] = 0;
          return result;
        }
        *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 0;
        sub_800F74BC(a1, (__int16)a2);
        sub_800C34C0(*SF_DRAFT_PTR(_WORD, (v59 + 1972)), *SF_DRAFT_PTR(_WORD, (v59 + 1974)), sf_draft_guest_address(&v71), sf_draft_guest_address((uint16 *)&v71 + 1), 1);
        sub_800F7AFC(a1, (__int16)(v6 + 16 * *SF_DRAFT_PTR(uint8, (v60 + 1979)) - 64), (__int16)v71, SHIWORD(v71));
        sub_800F594C(a1, (__int16)(v6 + 16 * *SF_DRAFT_PTR(uint8, (v61 + 1979)) - 64), 1, 0);
        v62 = *SF_DRAFT_PTR(uint8, (v3 + 1978));
        *SF_DRAFT_PTR(_BYTE, (v3 + 1979)) = 0;
        v28 = v62 == 0;
        v63 = v58 < v62;
        if ( v28 )
          return 0;
        v64 = 0;
        if ( v63 )
        {
          v65 = SF_DRAFT_PTR(char, 0x80116860u);
          do
          {
            ++v64;
            sub_800F7AFC(a1, (uint8)*v65, (__int16)v71, SHIWORD(v71));
            sub_800F594C(a1, (uint8)*v65++, 1, 0);
          }
          while ( v64 < *SF_DRAFT_PTR(uint8, (v3 + 1978)) );
        }
        break;
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 91:
      case 92:
      case 93:
      case 94:
      case 95:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        SF_DRAFT_PTR(uint8, 0x80116860u)[*SF_DRAFT_PTR(uint8, (v3 + 1978))] = a3 - 80 + 16 * *SF_DRAFT_PTR(_BYTE, (v3 + 1979));
        v66 = *SF_DRAFT_PTR(_BYTE, (v3 + 1978));
        *SF_DRAFT_PTR(_BYTE, (v3 + 1979)) = 0;
        v49 = v66 + 1;
LABEL_123:
        *SF_DRAFT_PTR(_BYTE, (v3 + 1978)) = v49;
        return 0;
      case 96:
      case 97:
      case 98:
      case 99:
      case 100:
      case 101:
      case 102:
      case 103:
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 96;
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 1;
        return 0;
      case 104:
      case 105:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 111:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
          goto LABEL_131;
        v67 = (uint8)SF_DRAFT_PTR(uint8, 0x80116800u)[(__int16)a3];
        if ( v67 >= 0x7E )
          return 0;
        SF_DRAFT_PTR(uint8, 0x80116800u)[(__int16)a3] = v67 + 1;
        return 0;
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 117:
      case 118:
      case 119:
        v26 = (__int16)a2;
        v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
        v30 = 1;
        if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
        {
LABEL_131:
          v28 = v29 != v30;
          result = 0;
          if ( !v28 )
            SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v26] = 0;
        }
        else
        {
          v68 = (uint8)SF_DRAFT_PTR(uint8, 0x801167F8u)[(__int16)a3];
          v28 = v68 == 0;
          v69 = v68 - 1;
          if ( v28 )
          {
            return 0;
          }
          else
          {
            SF_DRAFT_PTR(uint8, 0x801167F8u)[(__int16)a3] = v69;
            return 0;
          }
        }
        return result;
      case 120:
      case 121:
      case 122:
      case 123:
      case 124:
      case 125:
      case 126:
      case 127:
        v36 = (__int16)a2;
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 120;
        v37 = 2;
LABEL_134:
        SF_DRAFT_PTR(uint8, 0x8010DFCCu)[v36] = v37;
        return 0;
      default:
        return 0;
    }
    goto LABEL_10;
  }
  switch ( SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] )
  {
    case 1:
      if ( !SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] = a3;
        v31 = a2 << 16;
        goto LABEL_68;
      }
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1 )
        goto LABEL_67;
      SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] = 0;
      v31 = a2 << 16;
      goto LABEL_68;
    case 2:
      v32 = (__int16)a2;
      if ( !SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        v31 = a2 << 16;
        if ( (uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] == (__int16)a3 )
          goto LABEL_68;
        goto LABEL_63;
      }
      v31 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1 )
        goto LABEL_68;
      goto LABEL_66;
    case 3:
      v19 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3;
      }
      else
      {
        SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] = a3;
        v19 = a2 << 16;
      }
      v20 = v19 >> 16;
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[v20] = 1;
      SF_DRAFT_PTR(uint8, 0x8010DFCCu)[v20] = 11;
      return 0;
    case 4:
      v22 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
        goto LABEL_29;
      v23 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] % 3u;
      if ( (uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] % 3u )
      {
        if ( v23 == 2 )
        {
          v24 = SF_DRAFT_PTR(__int16, 0x80121FFAu);
          v25 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
        }
        else
        {
          v22 = a2 << 16;
          if ( v23 != 1 )
            goto LABEL_29;
          v25 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
          v24 = SF_DRAFT_PTR(__int16, 0x8012200Au);
        }
      }
      else
      {
        v24 = SF_DRAFT_PTR(__int16, 0x80121FEAu);
        v25 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
      }
      *((_BYTE *)&v24[v25] + ((uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] - 1) / 3) = a3;
      v22 = a2 << 16;
LABEL_29:
      v26 = v22 >> 16;
      v27 = SF_DRAFT_PTR(uint8, 0x8010DFACu)[v22 >> 16] - 1;
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[v26] = v27;
      v28 = v27 != 0;
      result = 0;
      if ( v28 )
        return result;
      v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v26];
      v30 = 1;
      goto LABEL_131;
    case 8:
      v32 = (__int16)a2;
      if ( !SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        v33 = *SF_DRAFT_PTR(_DWORD, (v3 + 1968));
        v34 = (__int16)a3;
        goto LABEL_62;
      }
      v31 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] == 1 )
        goto LABEL_66;
      goto LABEL_68;
    case 9:
      v32 = (__int16)a2;
      if ( !SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        v31 = a2 << 16;
        if ( *SF_DRAFT_PTR(_DWORD, (v3 + 1968)) == (__int16)a3 )
          goto LABEL_68;
        goto LABEL_63;
      }
      v31 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1 )
        goto LABEL_68;
      goto LABEL_66;
    case 10:
      v32 = (__int16)a2;
      if ( !SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        v31 = a2 << 16;
        if ( (__int16)a3 - 1 >= *SF_DRAFT_PTR(sint32, (v3 + 1968)) )
          goto LABEL_68;
        goto LABEL_63;
      }
      v31 = a2 << 16;
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1 )
        goto LABEL_68;
      goto LABEL_66;
    case 11:
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] )
      {
        v21 = SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
      }
      else
      {
        SF_DRAFT_PTR(uint8, 0x80121FE9u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] = a3;
        v21 = SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]];
      }
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 3 * v21;
      SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 4;
      return 0;
    case 12:
      v32 = (__int16)a2;
      v35 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5] )
        goto LABEL_64;
      if ( SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)v5] == 2 )
        goto LABEL_60;
      v31 = v5 << 16;
      if ( (__int16)a3 - 1 < (uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]] )
        goto LABEL_63;
      goto LABEL_68;
    case 13:
      v32 = (__int16)a2;
      v35 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
      if ( SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5] )
      {
LABEL_64:
        if ( SF_DRAFT_PTR(uint8, 0x8010DFACu)[v32] == 1 )
        {
          v31 = v5 << 16;
          if ( v35 != 1 )
            goto LABEL_68;
LABEL_66:
          SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v32] = 0;
        }
      }
      else
      {
        if ( SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)v5] == 2 )
        {
LABEL_60:
          SF_DRAFT_PTR(uint8, 0x8010DFECu)[v32] = a3 - 1;
          v31 = v5 << 16;
          goto LABEL_68;
        }
        v34 = (__int16)a3;
        v33 = (uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]];
LABEL_62:
        if ( v33 < v34 + 1 )
        {
LABEL_63:
          SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v32] = 1;
          v31 = v5 << 16;
          goto LABEL_68;
        }
      }
LABEL_67:
      v31 = v5 << 16;
LABEL_68:
      --SF_DRAFT_PTR(uint8, 0x8010DFACu)[v31 >> 16];
      result = 0;
      break;
    case 14:
      v36 = (__int16)a2;
      SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 1;
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
      v37 = 15;
      goto LABEL_134;
    case 15:
      v38 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 1;
      SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2] = 16;
      SF_DRAFT_PTR(uint32, 0x80134238u)[5 * v38] = (__int16)a3;
      return 0;
    case 16:
      *(SF_DRAFT_PTR(_BYTE, SF_DRAFT_PTR(uint32, 0x80134238u)[5 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]])
      + (uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2]
      + 3) = a3;
      v39 = SF_DRAFT_PTR(uint32, 0x80134238u)[5 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]];
      v40 = SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] + 1;
      SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = v40;
      v28 = v39 >= v40;
      result = 0;
      if ( !v28 )
        SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 0;
      return result;
    default:
      return 0;
  }
  return result;
}

