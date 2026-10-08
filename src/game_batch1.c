#include "game_draft.h"

void sf_draft_missing_gte_800CDE88_1(sint32 input1, sint32 input2, sint32 input3);
void sf_draft_missing_gte_800CDE88_2(sint32 input1, sint32 input2, sint32 input3);
void sf_draft_missing_gte_800CDE88_3(sint32 input1, sint32 input2, sint32 input3);
void sf_draft_missing_gte_800CDE88_4(sint32 input1, sint32 input2, sint32 input3);
void sf_draft_missing_gte_800CDE88_5(sint32 input1, sint32 input2, sint32 input3);
/* TODO Resolve external dependency signatures */
uint32 sub_800CDD04();
uint32 sub_800CDE04();

sint32 sub_80096A90(sint32 a1, uint32 a2, sint32 a3, sint32 a4, uint32 a9)
{
    FUNCTION_MARKER(0x80096A90u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _DWORD *a9_view = SF_DRAFT_PTR(_DWORD, a9);
  int motion_vectors[12];
  int bounds[8];
  int contact[32];
  int v10; 
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
  _DWORD *v29; 
  _DWORD *v30; 
  int *v31; 
  unsigned int v32; 
  _DWORD *v33; 
  int v34; 
  char v35; 
  __int16 *v36; 
  __int16 *v37; 
  int v38; 
  __int16 *v39; 
  char v40; 
  sint32 v41; 
  bool v42; // dc
  __int16 *v43; 
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
  int v54; 
  int v55; 
  signed int v56; 
  int v57; 
  int v58; 
  _DWORD *v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  __int16 **v64; 
  int v65; 
  __int16 **v66; 
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
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int result; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v99; 
  int v101; 
  int v103; 
  int v105; 
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
  bool v163; 
  _DWORD *v164; 
  int v165; 
  int v166; 
  int v167; 
  int v168; 
  char v169; 
  char v170; 
  uint8 v171; 
  unsigned int v172; 
  int v173; 
  char v174; 
  int v175; 
  int v176; 
  _DWORD *v177; 

  v161 = a1;
  v162 = a4;
  v169 = 0;
  v170 = 0;
  v171 = 0;
  v173 = -1;
  v174 = 0;
  v10 = *SF_DRAFT_PTR(_DWORD, (a1 + 16));
  if ( *SF_DRAFT_PTR(_BYTE, (v10 + 8)) == 9 || (*SF_DRAFT_PTR(_DWORD, v10) & 0x400) != 0 )
    v174 = 1;
  v146 = (*SF_DRAFT_PTR(uint32, 0x800135C4u));
  v147 = (*SF_DRAFT_PTR(uint32, 0x800135C8u));
  v148 = (*SF_DRAFT_PTR(uint32, 0x800135CCu));
  v149 = (*SF_DRAFT_PTR(uint32, 0x800135D0u));
  v150 = (*SF_DRAFT_PTR(uint32, 0x800135C4u));
  v151 = (*SF_DRAFT_PTR(uint32, 0x800135C8u));
  v152 = (*SF_DRAFT_PTR(uint32, 0x800135CCu));
  v153 = (*SF_DRAFT_PTR(uint32, 0x800135D0u));
  v163 = 0;
  if ( a9_view )
    v163 = v162 != 0;
  if ( v163 )
    *a9_view = 0;
  v177 = (_DWORD *)(a9_view);
  v12 = sub_80097F98(v161);
  v13 = a2_view[80];
  v97 = a2_view[79];
  v101 = a2_view[81];
  v103 = a2_view[82];
  v99 = v13 - a2_view[5];
  v105 = v13 + a2_view[5] + a2_view[6];
  v14 = a2_view[84];
  v15 = a2_view[85];
  v16 = a2_view[86];
  motion_vectors[0] = a2_view[83];
  motion_vectors[1] = v14;
  motion_vectors[2] = v15;
  motion_vectors[3] = v16;
  v17 = a2_view[5];
  v168 = v17;
  motion_vectors[4] = v97;
  motion_vectors[6] = v101;
  motion_vectors[7] = v103;
  motion_vectors[5] = v99 + v17;
  motion_vectors[8] = v97;
  motion_vectors[10] = v101;
  motion_vectors[11] = v103;
  v164 = SF_DRAFT_PTR(_DWORD, v12);
  v165 = 1228 * v17;
  motion_vectors[9] = v105 - v17;
  v18 = 1228 * v17;
  if ( 1228 * v17 < 0 )
    v18 = -1228 * v17;
  v167 = v17;
  v19 = 26208;
  if ( v18 >= 26208 )
    v19 = v18;
  v20 = 1228 * v168;
  if ( 1228 * v168 < 0 )
    v20 = -1228 * v168;
  v166 = 1228 * v168;
  v21 = 26208;
  if ( v20 >= 26208 )
    v21 = v20;
  v22 = motion_vectors[1] + v19;
  if ( motion_vectors[1] < 0 )
    v22 = v19;
  if ( v22 < 0 )
  {
    v25 = motion_vectors[1] + v19;
    if ( motion_vectors[1] < 0 )
      v25 = v19;
    v24 = motion_vectors[5] - (-v25 >> 12);
  }
  else
  {
    v23 = motion_vectors[1] + v19;
    if ( motion_vectors[1] < 0 )
      v23 = v19;
    v24 = motion_vectors[5] + (v23 >> 12);
  }
  if ( motion_vectors[1] > 0 || motion_vectors[1] - v21 < 0 )
  {
    if ( motion_vectors[1] > 0 )
      v27 = v21 >> 12;
    else
      v27 = (v21 - motion_vectors[1]) >> 12;
    v26 = motion_vectors[9] - v27;
  }
  else
  {
    v26 = motion_vectors[9] + ((motion_vectors[1] - v21) >> 12);
  }
  v28 = v168;
  if ( v167 >= v168 )
    v28 = v167;
  if ( v19 < v21 )
    v95 = v21;
  else
    v95 = v19;
  if ( v19 < v21 )
    v96 = v21;
  else
    v96 = v19;
  v29 = v164;
  sub_80094DEC(sf_draft_guest_address(a2_view + 79), v28, v99, v105, sf_draft_guest_address(motion_vectors), v95, v96, sf_draft_guest_address(bounds));
  v30 = v177;
  contact[10] = 19648;
  contact[12] = 26208;
  contact[13] = a3;
  if ( v29 )
  {
    v31 = v29 + 2;
    do
    {
      v32 = (unsigned int)v29 + 26;
      v33 = (_DWORD *)((char *)v29 + 26);
      v34 = ((unsigned int)v29 + 26) & 3;
      v35 = 0;
      if ( v34 )
      {
        v35 = 8 * v34;
        v33 = SF_DRAFT_PTR(_DWORD, (v32 & 0xFFFFFFFC));
      }
      if ( (*v33 & (1 << v35)) != 0 )
        goto LABEL_104;
      v36 = (__int16 *)v29[7];
      v37 = (__int16 *)v29[8];
      v38 = v29[2];
      v39 = (__int16 *)v29[9];
      if ( v38 == 3 )
      {
        if ( v36[1] >= bounds[1] || v37[1] >= bounds[1] || (v40 = 0, v39[1] >= bounds[1]) )
        {
          if ( bounds[5] >= v36[1] || bounds[5] >= v37[1] || (v40 = 0, bounds[5] >= v39[1]) )
          {
            if ( *v36 >= bounds[0] || *v37 >= bounds[0] || (v40 = 0, *v39 >= bounds[0]) )
            {
              if ( bounds[4] >= *v36 || bounds[4] >= *v37 || (v40 = 0, bounds[4] >= *v39) )
              {
                if ( v36[2] >= bounds[2] || v37[2] >= bounds[2] || (v40 = 0, v39[2] >= bounds[2]) )
                {
                  if ( bounds[6] < v36[2] && bounds[6] < v37[2] )
                  {
                    v41 = bounds[6] < v39[2];
LABEL_89:
                    v40 = 0;
                    if ( v41 )
                      goto LABEL_91;
                  }
                  goto LABEL_90;
                }
              }
            }
          }
        }
      }
      else
      {
        v42 = v38 != 4;
        v40 = 0;
        if ( !v42 )
        {
          v43 = (__int16 *)v29[10];
          if ( v36[1] >= bounds[1] || v37[1] >= bounds[1] || v39[1] >= bounds[1] || (v40 = 0, v43[1] >= bounds[1]) )
          {
            if ( bounds[5] >= v36[1] || bounds[5] >= v37[1] || bounds[5] >= v39[1] || (v40 = 0, bounds[5] >= v43[1]) )
            {
              if ( *v36 >= bounds[0] || *v37 >= bounds[0] || *v39 >= bounds[0] || (v40 = 0, *v43 >= bounds[0]) )
              {
                if ( bounds[4] >= *v36 || bounds[4] >= *v37 || bounds[4] >= *v39 || (v40 = 0, bounds[4] >= *v43) )
                {
                  if ( v36[2] >= bounds[2] || v37[2] >= bounds[2] || v39[2] >= bounds[2] || (v40 = 0, v43[2] >= bounds[2]) )
                  {
                    if ( bounds[6] < v36[2] && bounds[6] < v37[2] && bounds[6] < v39[2] )
                    {
                      v41 = bounds[6] < v43[2];
                      goto LABEL_89;
                    }
LABEL_90:
                    v40 = 1;
                  }
                }
              }
            }
          }
        }
      }
LABEL_91:
      if ( v40 == 1 )
      {
        v44 = *v31;
        *SF_DRAFT_PTR(_WORD, v32) |= 2u;
        if ( v24 >= *(__int16 *)(v31[5] + 2)
          || v24 >= *(__int16 *)(v31[6] + 2)
          || v24 >= *(__int16 *)(v31[7] + 2)
          || v44 == 4 && v24 >= *(__int16 *)(v31[8] + 2) )
        {
          *SF_DRAFT_PTR(_WORD, v32) |= 8u;
        }
        if ( *(__int16 *)(v31[5] + 2) >= v26
          || *(__int16 *)(v31[6] + 2) >= v26
          || *(__int16 *)(v31[7] + 2) >= v26
          || v44 == 4 && *(__int16 *)(v31[8] + 2) >= v26 )
        {
          *SF_DRAFT_PTR(_WORD, v32) |= 4u;
        }
      }
LABEL_104:
      v29 = (_DWORD *)v29[1];
      v31 = v29 + 2;
    }
    while ( v29 );
  }
  v172 = 0;
  v45 = 1;
  v175 = v24 - 20;
  do
  {
    v46 = (int)v164;
    if ( v164 )
    {
      do
      {
        if ( (*SF_DRAFT_PTR(_WORD, (v46 + 26)) & 2) != 0 )
        {
          v47 = *SF_DRAFT_PTR(_DWORD, (v46 + 8));
          v48 = *SF_DRAFT_PTR(__int16, (v46 + 22));
          (*(uint8 *)&contact[14]) = 0;
          if ( v172 == v45 )
          {
            if ( (*SF_DRAFT_PTR(_WORD, (v46 + 26)) & 8) != 0
              && v48 >= -2047
              && (v48 >= 2896
               || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 28)) + 2)) >= v175
               || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 32)) + 2)) >= v175
               || *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 36)) + 2)) >= v175
               || v47 == 4 && *SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 40)) + 2)) >= v175) )
            {
              contact[9] = v46 + 8;
              v49 = a2_view[84];
              v50 = a2_view[85];
              v51 = a2_view[86];
              contact[5] = a2_view[83];
              contact[6] = v49;
              contact[7] = v50;
              contact[8] = v51;
              contact[12] = 26208;
              v176 = v45;
              v177 = v30;
              contact[11] = v165;
              contact[4] = v167;
              sub_80096A30(sf_draft_guest_address(contact));
              v45 = v176;
              v30 = v177;
            }
          }
          else if ( (*SF_DRAFT_PTR(_WORD, (v46 + 26)) & 4) != 0 && v48 < 2048 )
          {
            contact[9] = v46 + 8;
            v52 = a2_view[84];
            v53 = a2_view[85];
            v54 = a2_view[86];
            contact[5] = a2_view[83];
            contact[6] = v52;
            contact[7] = v53;
            contact[8] = v54;
            contact[11] = v166;
            if ( v174 )
              v55 = 26208;
            else
              v55 = v168 << 11;
            contact[12] = v55;
            v176 = v45;
            v177 = v30;
            contact[4] = v168;
            sub_80096A30(sf_draft_guest_address(contact));
            v30 = v177;
            v45 = v176;
          }
          if ( (*(uint8 *)&contact[14]) )
          {
            v56 = ((unsigned int)(*(uint16 *)(v46 + 26) << 18) >> 22) - 1;
            if ( v56 >= 0 )
            {
              v57 = v46 + 26;
              if ( v56 != v173 )
              {
                v58 = 14;
                if ( (v57 & 3) != 0 )
                {
                  v58 = 8 * (v57 & 3) + 14;
                  v57 &= 0xFFFFFFFC;
                }
                if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v58 >> 5) + v57)) & (v45 << (v58 & 0x1F))) != 0 )
                {
                  v59 = SF_DRAFT_PTR(_DWORD, (76 * v56 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu))));
                  if ( *(_BYTE *)(v59[13] + 34) != 7 )
                  {
                    if ( (unsigned int)(*(uint16 *)(v46 + 26) << 18) >> 22 == 667
                      || (v60 = *(__int16 *)(20 * *v59 + (*SF_DRAFT_PTR(uint32, 0x80116B98u))), v60 != 32) && v60 != 55 )
                    {
                      v61 = *SF_DRAFT_PTR(__int16, (v161 + 2));
                      v62 = ((unsigned int)(*(uint16 *)(v46 + 26) << 18) >> 22) - 1;
                      v176 = v45;
                      v177 = v30;
                      sub_80015364(0x1Au, 1u, v61, v62, 0, 0, 0, 0);
                      v30 = v177;
                      v45 = v176;
                    }
                  }
                }
              }
            }
            v173 = v56;
            if ( (*(uint8 *)&contact[14]) == v45 )
            {
              if ( v48 >= 2897 )
              {
                v63 = 0;
                if ( v47 > 0 )
                {
                  v64 = (__int16 **)(v46 + 28);
                  do
                  {
                    v65 = 0;
                    if ( v63 != v47 - 1 )
                      v65 = v63 + 1;
                    v66 = (__int16 **)(4 * v65 + v46 + 28);
                    v67 = **v66 - **v64;
                    v154 = v67;
                    v68 = (*v66)[1];
                    v69 = (*v64)[1];
                    if ( v67 < 0 )
                      v67 = -v67;
                    v157 = v67;
                    v70 = v68 - v69;
                    v155 = v70;
                    v71 = (*v66)[2];
                    v72 = (*v64)[2];
                    if ( v70 < 0 )
                      v70 = -v70;
                    v158 = v70;
                    v73 = v71 - v72;
                    v74 = v73;
                    if ( v73 < 0 )
                      v74 = -v73;
                    v156 = v73;
                    v159 = v74;
                    if ( v67 < v70 )
                    {
                      v157 = v70;
                      v158 = v67;
                    }
                    v75 = v157;
                    if ( v157 < v74 )
                    {
                      v157 = v74;
                      v159 = v75;
                    }
                    if ( (unsigned int)(v157 + ((v158 + v159) >> 2) - 1) < 0xA )
                      (*(uint8 *)&contact[14]) = 0;
                    ++v63;
                    ++v64;
                  }
                  while ( v63 < v47 );
                }
              }
              if ( (*(uint8 *)&contact[14]) == v45 )
              {
                if ( v56 >= 0
                  && v56 != 666
                  && *SF_DRAFT_PTR(_WORD, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v56 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))) == 55 )
                {
                  v76 = *SF_DRAFT_PTR(_DWORD, (v161 + 16));
                  if ( (*SF_DRAFT_PTR(_DWORD, v76) & 8) != 0 || *SF_DRAFT_PTR(_BYTE, (v76 + 8)) == 8 || (*SF_DRAFT_PTR(_DWORD, v76) & 0x400) != 0 )
                    (*(uint8 *)&contact[14]) = 0;
                }
                v77 = v46 + 26;
                if ( (*(uint8 *)&contact[14]) == v45 )
                {
                  v78 = 15;
                  if ( (v77 & 3) != 0 )
                  {
                    v78 = 8 * (v77 & 3) + 15;
                    v77 &= 0xFFFFFFFC;
                  }
                  if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v78 >> 5) + v77)) & (v45 << (v78 & 0x1F))) == 0 )
                  {
                    v79 = 0;
                    if ( (int)*v30 > 0 )
                    {
                      v80 = v162;
                      while ( 1 )
                      {
                        if ( contact[15] < 20960 || *SF_DRAFT_PTR(int, (*SF_DRAFT_PTR(_DWORD, v80) + 136)) < 20960 )
                        {
                          v81 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v80) + 140)) + 18;
                          v82 = 15;
                          if ( (v81 & 3) != 0 )
                          {
                            v82 = 8 * (v81 & 3) + 15;
                            v81 &= 0xFFFFFFFC;
                          }
                          if ( (*SF_DRAFT_PTR(_DWORD, (4 * (v82 >> 5) + v81)) & (v45 << (v82 & 0x1F))) == 0 )
                          {
                            v83 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v80) + 68));
                            v84 = **(__int16 **)(v46 + 16);
                            v176 = v45;
                            v177 = v30;
                            v85 = sub_800C6D4C(v84, v83);
                            v86 = sub_800C6D4C((*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 16)) + 2))), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v80) + 72))));
                            v160 = v85
                                 + v86
                                 + sub_800C6D4C((*SF_DRAFT_PTR(__int16, (*SF_DRAFT_PTR(_DWORD, (v46 + 16)) + 4))), (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v80) + 76))));
                            v45 = v176;
                            v30 = v177;
                            if ( v160 < -4014 )
                              break;
                          }
                        }
                        ++v79;
                        v80 += 4;
                        if ( v79 >= (sint32)*v30 )
                          goto LABEL_176;
                      }
                      (*(uint8 *)&contact[14]) = 0;
                    }
                  }
LABEL_176:
                  if ( (*(uint8 *)&contact[14]) == v45 )
                  {
                    if ( v146 < contact[29] )
                    if ( contact[29] < v150 )
                    if ( v147 < contact[30] )
                    if ( contact[30] < v151 )
                    if ( v148 < contact[31] )
                    if ( contact[31] < v152 )
                    if ( v48 < 2048 )
                    {
                      if ( v48 >= -2048 )
                        v171 = 1;
                    }
                    else if ( v172 == v45 )
                    {
                      v169 = 1;
                      if ( v48 >= 2896 )
                        v170 = 1;
                    }
                    if ( v163 == v45 && (int)*v30 < 15 )
                    {
                      v87 = *(_DWORD *)(4 * *v30 + v162);
                      v176 = v45;
                      v177 = v30;
                      sub_80097ED8(v46 + 8, v87);
                      v45 = v176;
                      v30 = v177;
                      if ( v56 >= 0
                        && v56 != 666
                        && ((v88 = *SF_DRAFT_PTR(__int16, (20 * *SF_DRAFT_PTR(_DWORD, (76 * v56 + (*SF_DRAFT_PTR(uint32, 0x80115CCCu)))) + (*SF_DRAFT_PTR(uint32, 0x80116B98u)))), v88 == 15)
                         || v88 == 67) )
                      {
                        v89 = v162;
                        *(_DWORD *)(*(_DWORD *)(4 * *v177 + v162) + 124) = 0;
                        *(_DWORD *)(*(_DWORD *)(4 * *v30 + v89) + 128) = 0;
                      }
                      else
                      {
                        v90 = v162;
                        *(_DWORD *)(*(_DWORD *)(4 * *v177 + v162) + 124) = 6195;
                        *(_DWORD *)(*(_DWORD *)(4 * *v30 + v90) + 128) = 2162;
                      }
                      v91 = v162;
                      *(_DWORD *)(*(_DWORD *)(4 * (*v30)++ + v91) + 140) = v46 + 8;
                    }
                  }
                }
              }
            }
          }
        }
        v46 = *SF_DRAFT_PTR(_DWORD, (v46 + 4));
      }
      while ( v46 );
    }
    ++v172;
  }
  while ( v172 < 2 );
  v154 = (v146 + v150) / 3;
  v155 = (v147 + v151) / 3;
  v156 = (v148 + v152) / 3;
  a2_view[87] += v154;
  a2_view[88] += v155;
  v92 = (int)v164;
  v42 = v164 == 0;
  a2_view[89] += v156;
  if ( !v42 )
  {
    do
    {
      *SF_DRAFT_PTR(_WORD, (v92 + 26)) &= 0xFFF1u;
      v92 = *SF_DRAFT_PTR(_DWORD, (v92 + 4));
    }
    while ( v92 );
  }
  if ( v170 )
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v161 + 12)) + 404)) |= 0x100000u;
  if ( v169 )
    *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v161 + 12)) + 404)) |= 4u;
  result = v171;
  if ( v171 )
  {
    v94 = *SF_DRAFT_PTR(_DWORD, (v161 + 12));
    result = *SF_DRAFT_PTR(_DWORD, (v94 + 404)) | 2;
    *SF_DRAFT_PTR(_DWORD, (v94 + 404)) = result;
  }
  return result;
}

sint32 sub_800CDE88(sint32 a1, uint32 a2, sint32 a3)
{
  union { sint32 vector[3]; uint16 halves[6]; } color_vector;
    FUNCTION_MARKER(0x800CDE88u, "SCUS_942.40");
    /* TODO Infer geometry values at missing GTE boundary */
    sint32 geometry_value_0, geometry_value_1, geometry_value_2, geometry_value_3, geometry_value_4, geometry_value_5, geometry_value_6, geometry_value_7, geometry_value_8;
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
    int *a2_view = SF_DRAFT_PTR(int, a2);
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 

  int result; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  char v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int *v23; 
  unsigned int v24; 
  int v25; 
  int *v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  bool v33; // dc
  sint32 v34; 
  int v35; 
  int v36; 
  sint32 v37; 
  sint32 v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  sint32 v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v65; 
  _DWORD *v67; 
  _DWORD *v68; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  unsigned int v76; 
  int v81; 
  int v82; 
  int v83; 
  __int16 v84[16]; 
  int v85; 
  int v86; 
  int v87; 
  __int16 v88; 
  __int16 v89; 
  __int16 v90; 
  __int16 v91; 
  __int16 v92; 
  __int16 v93; 
  __int16 v94; 
  __int16 v95; 
  __int16 v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100[2]; 
  int v101; 
  int v102[4]; 
  int v105; 
  int *v106; 
  _DWORD *v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v114; 
  int v115; 
  char v116; 
  int v117; 
  bool v118; 
  char v119; 
  char v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  char v125; 
  _DWORD *v126; 
  int v127; 
  unsigned int v128; 

  v105 = a1;
  v106 = (int *)(a2_view);
  v111 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u));
  v110 = *(uint8 *)(a1 + 9);
  v109 = SF_DRAFT_PTR(uint32, 0x8013D564u)[5 * a3];
  if ( v110 )
    v111 = (uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) + ((int)(uint16)(*SF_DRAFT_PTR(uint32, 0x80116458u)) >> 3);
  v118 = 0;
  v112 = v111 + ((4096 - v111) >> (BYTE2((*SF_DRAFT_PTR(uint32, 0x80116458u))) - 1));
  v4 = *(uint16 *)(v105 + 6);
  v113 = (4096 - v111) >> (BYTE2((*SF_DRAFT_PTR(uint32, 0x80116458u))) - 1);
  v117 = v4;
  v114 = (*SF_DRAFT_PTR(uint32, 0x80116450u));
  v116 = (*SF_DRAFT_PTR(uint8, 0x80116A90u));
  v115 = (*SF_DRAFT_PTR(uint32, 0x8012FA40u));
  if ( (v4 & 0x10) != 0 )
    v118 = (*SF_DRAFT_PTR(uint32, 0x80116B28u)) == (*SF_DRAFT_PTR(uint32, 0x80116540u));
  v119 = 0;
  if ( !v110 && (v4 & 0x10) == 0 && ((v117 & 0x80) != 0 || ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) != 0) )
    v119 = 1;
  v122 = (*SF_DRAFT_PTR(uint32, 0x80116070u));
  v5 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, ((*SF_DRAFT_PTR(uint32, 0x80116070u)) + 16)) + 40));
  v85 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v105) + 20));
  v6 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v105) + 24));
  v120 = 0;
  v86 = v6;
  v7 = v5 & 0x20000;
  v8 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, v105) + 28));
  v86 = -v6;
  v87 = v8;
  v9 = sub_800CCCD4(sf_draft_guest_address(&v85));
  if ( v9 )
    v121 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v9 + 16)) + 40)) & 0x20000;
  else
    v121 = 666;
  if ( v121 == v7 && v121 != 666 )
    v120 = 1;
  result = (*SF_DRAFT_PTR(uint32, 0x80116448u)) < 9;
  if ( (*SF_DRAFT_PTR(uint32, 0x80116448u)) >= 9 )
  {
    v12 = *SF_DRAFT_PTR(_DWORD, (v105 + 140));
    *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_GP + 2224)) = v109;
    if ( v12 )
    {
      v88 = *(_WORD *)SF_DRAFT_PTR(uint32, 0x8012D698u)[0];
      v89 = -*SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 2));
      v90 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 4));
      v91 = -*SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 6));
      v92 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 8));
      v93 = -*SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 10));
      v94 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 12));
      v95 = -*SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 14));
      v96 = *SF_DRAFT_PTR(_WORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 16));
      v97 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 20));
      v98 = (0u - *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 24)));
      v13 = *SF_DRAFT_PTR(_DWORD, (SF_DRAFT_PTR(uint32, 0x8012D698u)[0] + 28));
      v100[0] = -v88;
      v101 = -v94;
      v100[1] = 0;
      v99 = v13;
      sub_800C720C(sf_draft_guest_address(v100), sf_draft_guest_address(v100));
      v102[1] = 4096;
      v102[0] = -v101;
      v102[2] = v100[0];
      sub_800C720C(sf_draft_guest_address(v102), sf_draft_guest_address(&color_vector));
      sub_800E1088(sf_draft_guest_address(&color_vector), 0, sf_draft_guest_address(v84));
    }
    result = 4 * a3;
    if ( v106 )
    {
      v128 = 20 * a3;
      do
      {
        v14 = *v106;
        v107 = SF_DRAFT_PTR(_DWORD, *(_DWORD **)(*v106 + 16));
        result = v107[10] & 0x6000000;
        v108 = v107[10];
        if ( !result )
          goto LABEL_172;
        result = *SF_DRAFT_PTR(_BYTE, (v14 + 8)) & 8;
        v15 = 0;
        if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 8)) & 8) != 0 )
          goto LABEL_172;
        v16 = 0;
        v17 = 0;
        v123 = v112;
        v124 = v113;
        v18 = *SF_DRAFT_PTR(_BYTE, (v14 + 9));
        v126 = 0;
        v125 = v18;
        if ( (v108 & 0x400000) == 0 || (v19 = 20000, (*SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0x40) == 0) )
        {
          v19 = 900;
          if ( !v119 )
          {
            v19 = 2000;
            if ( (v108 & 0x10000) == 0 || (v126 = *(_DWORD **)(v14 + 24)) != 0 )
            {
              v19 = 4500;
            }
            else if ( v107[9] )
            {
              v20 = *SF_DRAFT_PTR(_DWORD, (v14 + 12));
              if ( *SF_DRAFT_PTR(_DWORD, (v20 + 32)) )
              {
                sub_800DC0B8(v20, 0, (sint32)sf_draft_guest_address(v84));
              }
              else
              {
                *SF_DRAFT_PTR(_WORD, v20) = v84[0];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 2)) = -v84[1];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 4)) = v84[2];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 6)) = -v84[3];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 8)) = v84[4];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 10)) = -v84[5];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 12)) = v84[6];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 14)) = -v84[7];
                *SF_DRAFT_PTR(_WORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 16)) = v84[8];
              }
            }
          }
        }
        if ( (v108 & 0x100000) == 0 )
        {
          v21 = 0;
          if ( (*SF_DRAFT_PTR(uint32, 0x80116A58u)) > 0 )
          {
            v22 = 0;
            while ( 1 )
            {
              v23 = &SF_DRAFT_PTR(uint32, 0x8012FD08u)[v22];
              v24 = SF_DRAFT_PTR(uint32, 0x8012FD08u)[v22 + 3];
              v25 = *SF_DRAFT_PTR(_DWORD, (v14 + 12));
              v127 = SLOWORD(SF_DRAFT_PTR(uint32, 0x8012FD08u)[v22 + 3]);
              v81 = *SF_DRAFT_PTR(_DWORD, (v25 + 20));
              v26 = &SF_DRAFT_PTR(uint32, 0x8012FD08u)[v22];
              v82 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 24));
              v27 = v24 >> 31;
              v28 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v14 + 12)) + 28));
              v82 = -v82;
              v83 = v28;
              v29 = sub_800CDE04(&v81, v26);
              v30 = *SF_DRAFT_PTR(_DWORD, (v14 + 4));
              v31 = v29;
              if ( !v30 )
                break;
              v32 = (uint8)v27;
              if ( (*SF_DRAFT_PTR(uint16, 0x80116974u)) == v21 )
                goto LABEL_40;
              if ( (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v30 + 16)) + 40)) & 0x100000) == 0 )
                break;
LABEL_53:
              ++v21;
              v22 = 4 * v21;
              if ( v21 >= (sint32)r_u32(0x80116A58u) )
                goto LABEL_54;
            }
            v32 = (uint8)v27;
LABEL_40:
            v33 = v32 != 0;
            v34 = v31 < 1281;
            if ( !v33 )
              v34 = v31 < 2081;
            if ( v34 )
            {
              v81 -= *v23;
              v82 -= v23[1];
              v83 -= v23[2];
              v35 = sub_800EC124(v83, v81);
              v36 = v35 - v127;
              v33 = v35 - v127 >= 0;
              v37 = v35 - v127 < 2049;
              if ( !v33 )
              {
                v36 += 4096;
                v37 = v36 < 2049;
              }
              v33 = v37;
              v38 = v36 < 600;
              if ( !v33 )
              {
                v36 = 4096 - v36;
                v38 = v36 < 600;
              }
              v39 = v31 >> 9;
              if ( v38 )
              {
                v40 = 600 - v36;
                if ( v39 < 2 )
                  LOBYTE(v39) = 2;
                v41 = v40 >> v39;
                v15 += v41;
                if ( (_BYTE)v27 )
                {
                  v15 = v41 >> 2;
                  v16 += v41 >> 4;
                  v17 += v41 >> 4;
                }
                else
                {
                  v16 += v41;
                  v17 += v41;
                }
              }
            }
            goto LABEL_53;
          }
        }
LABEL_54:
        if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 9)) & 0x80) != 0 )
        {
          v123 += v123 >> 1;
          v124 = v123 - v111;
        }
        sub_800CEDA4((*SF_DRAFT_PTR(_DWORD, (v14 + 12))));
        v42 = v19;
        if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0x20) != 0 )
        {
          v43 = 1024;
        }
        else
        {
          v43 = 400;
          if ( v110 )
            v43 = 140;
          v42 = v19;
        }
        v44 = sub_800CF06C(v42, v43);
        result = *SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0x40;
        if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0x40) == 0 )
        {
          if ( !v44 )
            goto LABEL_122;
          if ( v114 )
          {
            result = v123 < v44;
            if ( v123 < v44 )
              goto LABEL_122;
          }
        }
        if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 9)) & 0x10) != 0 )
          v45 = (*SF_DRAFT_PTR(_BYTE, (v14 + 9)) & 0xF) << 8;
        else
          v45 = 3072;
        v46 = 4095;
        if ( v45 + 16 * v15 < 4096 )
          v46 = v45 + 16 * v15;
        geometry_value_1 = v46;
        if ( (v117 & 0x10) != 0 )
        {
          geometry_value_1 = 0;
          geometry_value_3 = 1023;
          geometry_value_2 = -(*(uint8 *)(v14 + 11) >> 7) & 0x190;
        }
        else
        {
          if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 9)) & 0x40) == 0 )
          {
            geometry_value_2 = v46;
            if ( v15 < 31 || v17 >= v15 )
            {
              geometry_value_3 = v46;
              goto LABEL_98;
            }
            v58 = v46 >> 6;
            if ( v15 >= 256 )
            {
              v59 = v15 < 256;
              if ( v58 < 255 )
                goto LABEL_92;
              v60 = v46 >> 6;
LABEL_95:
              geometry_value_1 = 16 * v60;
            }
            else
            {
              v59 = v15 < 256;
              if ( v58 >= v15 )
              {
                v60 = v46 >> 6;
                goto LABEL_95;
              }
LABEL_92:
              geometry_value_1 = 16 * v15;
              if ( !v59 )
                geometry_value_1 = 4080;
            }
            geometry_value_2 = 0;
            geometry_value_3 = 0;
            goto LABEL_98;
          }
          v50 = *SF_DRAFT_PTR(_DWORD, (v14 + 24));
          v51 = v50 >> 16;
          if ( !v50 )
          {
            sub_800CF77C(((*SF_DRAFT_PTR(uint32, 0x8012D724u))), v14, sf_draft_guest_address(&color_vector));
            v50 = ((uint16)color_vector.vector[0] << 16 >> 20 << 16) + (HIWORD(color_vector.vector[0]) << 16 >> 20 << 8) + (color_vector.halves[2] << 16 >> 20);
            *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = v50;
            if ( !v50 )
              *SF_DRAFT_PTR(_DWORD, (v14 + 24)) = 1;
            v51 = v50 >> 16;
          }
          v52 = v51;
          v53 = BYTE1(v50);
          v54 = (uint8)v50;
          if ( v15 )
          {
            v55 = v51 + v15;
            if ( v51 + v15 >= 256 )
              v55 = 255;
            v52 = v55;
            v56 = BYTE1(v50) + v16;
            if ( v56 >= 256 )
              v56 = 255;
            v53 = v56;
            v57 = (uint8)v50 + v17;
            if ( v57 >= 256 )
              v57 = 255;
            v54 = v57;
          }
          geometry_value_1 = 16 * v52;
          geometry_value_3 = 16 * v53;
          geometry_value_2 = 16 * v54;
        }
LABEL_98:
        if ( v114 && v111 < v44 )
        {
          v61 = v123 - v44;
          v62 = (__int16)geometry_value_1 * (v123 - v44);
          if ( !v124 )
            _break(7u, 0);
          if ( v124 == -1 && v62 == 0x80000000 )
            _break(6u, 0);
          geometry_value_1 = v62 / v124;
          v63 = (__int16)geometry_value_3 * v61;
          if ( v124 == -1 && v63 == 0x80000000 )
            _break(6u, 0);
          geometry_value_0 = v63 / v124;
          v65 = (__int16)geometry_value_2 * v61;
          if ( v124 == -1 && v65 == 0x80000000 )
            _break(6u, 0);
          geometry_value_7 = v65 / v124;
          sf_draft_missing_gte_800CDE88_1(geometry_value_1, geometry_value_0, geometry_value_7);
        }
        else
        {
          sf_draft_missing_gte_800CDE88_2(geometry_value_1, geometry_value_3, geometry_value_2);
        }
        result = *SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0x7F;
        *SF_DRAFT_PTR(_BYTE, (v14 + 10)) = result;
        if ( !v126 )
        {
          if ( *SF_DRAFT_PTR(_WORD, (v14 + 22)) == 1 )
          {
            v72 = *(uint16 *)(v115 + 22);
          }
          else
          {
            v72 = -10;
            if ( (v108 & 0x4000000) != 0 && (*SF_DRAFT_PTR(_BYTE, (v14 + 11)) & 1) != 0 )
              v72 = -24;
          }
LABEL_138:
          if ( v120 && (v73 = *SF_DRAFT_PTR(_DWORD, (v14 + 4))) != 0 && v121 != (*SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v73 + 16)) + 40)) & 0x20000)
            || (v74 = v72 << 16, (*SF_DRAFT_PTR(uint32, 0x80116474u)) == 8)
            && (v74 = v72 << 16, *SF_DRAFT_PTR(_DWORD, (v14 + 4)) == v122)
            && (v74 = v72 << 16, v44 >= 1251) )
          {
            v72 += 24;
            v74 = v72 << 16;
          }
          SF_DRAFT_PTR(uint32, 0x8013D564u)[v128 / 4] = v109 + (v74 >> 14);
          if ( (v108 & 0x10000000) != 0 )
          {
            sub_800CDD04(v14);
          }
          else if ( (v108 & 0x10000) != 0 )
          {
            if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 8)) & 0x20) != 0 )
              sub_800C777C(r_u32(v14 + 12));
          }
          else
          {
            *SF_DRAFT_PTR(_WORD, (v14 + 22)) = 0;
          }
          if ( (v108 & 0x400000) != 0 )
          {
            sub_800D0DA8(v14);
            sub_800CFE64(v107[8], *(uint16 *)(v105 + 6) << 16, (SF_DRAFT_PTR(uint32, 0x8013D564u)[v128 / 4]), v14);
            result = v72 << 16;
          }
          else
          {
            if ( (*SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 4) != 0 )
              v75 = v107[9];
            else
              v75 = v107[8];
            if ( (v108 & 0x10000) != 0 && !v126 && v107[9] )
            {
              v76 = (*SF_DRAFT_PTR(uint32, 0x80116488u)) & 0xF;
              if ( v76 < 8 )
                geometry_value_8 = 4095 - 250 * v76;
              else
                geometry_value_8 = 4095 - 250 * (15 - v76);
              if ( (v117 & 0x10) == 0 )
              {
                sf_draft_missing_gte_800CDE88_3(geometry_value_8, geometry_value_8, geometry_value_8);
              }
              v75 = v107[9];
            }
            if ( v119 )
            {
              geometry_value_4 = 300;
              geometry_value_5 = 300;
              geometry_value_6 = 300;
              sf_draft_missing_gte_800CDE88_4(geometry_value_4, geometry_value_5, geometry_value_6);
            }
            if ( v118 )
              v125 |= 0x20u;
            sub_800CF0E4(v75, *(uint8 *)(v14 + 10), (SF_DRAFT_PTR(uint32, 0x8013D564u)[v128 / 4]), v125);
            result = v72 << 16;
          }
          if ( result )
            SF_DRAFT_PTR(uint32, 0x8013D564u)[v128 / 4] = v109;
LABEL_172:
          v106 = (int *)v106[2];
          continue;
        }
        v67 = v126;
        geometry_value_1 = v126[7];
        if ( v116 )
        {
          result = *v126;
          if ( *v126 )
          {
            if ( v126 != SF_DRAFT_PTR(_DWORD, v115) || (result = (*SF_DRAFT_PTR(uint32, 0x80116528u)) < 37, (*SF_DRAFT_PTR(uint32, 0x80116528u)) >= 37) )
            {
              result = v117 & 0x10;
              if ( (v117 & 0x10) == 0 )
              {
                result = (*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1;
                if ( ((*SF_DRAFT_PTR(uint16, 0x8012D97Au)) & 1) == 0 )
                {
                  v68 = v126;
LABEL_124:
                  *SF_DRAFT_PTR(_BYTE, (v14 + 10)) = *SF_DRAFT_PTR(_BYTE, (v14 + 10)) & 0xF | *((_BYTE *)v68 + 10) & 0xF0 | 0x80;
                  if ( (*((_BYTE *)v68 + 9) & 0x20) != 0 )
                    v125 |= 0x20u;
                  if ( (v117 & 0x10) == 0 )
                  {
                    geometry_value_6 = *(uint16 *)(geometry_value_1 + 4);
                    geometry_value_4 = *(uint16 *)(geometry_value_1 + 6);
                    geometry_value_5 = *(uint16 *)(geometry_value_1 + 8);
                    sf_draft_missing_gte_800CDE88_5(geometry_value_6, geometry_value_4, geometry_value_5);
                  }
                  v72 = -48;
                  if ( (*((_BYTE *)v67 + 11) & 0x10) == 0 )
                    v72 = sub_800D0028(sf_draft_guest_address(v67));
                  if ( v44 < 60 && (v72 & 0x8000) != 0 )
                    v72 = 0;
                  goto LABEL_138;
                }
              }
              v68 = v126;
              if ( v126 != SF_DRAFT_PTR(_DWORD, v115) )
                goto LABEL_124;
LABEL_122:
              v106 = (int *)v106[2];
              continue;
            }
          }
        }
        v106 = (int *)v106[2];
      }
      while ( v106 );
    }
  }
  return result;
}

sint32 sub_80074D54(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80074D54u, "SCUS_942.40");
    /* TODO Unverified draft; resolve guest adapters and inferred layouts */
  struct { int v66, v67, v68, v69; } point;
  struct { __int16 v84, v85, v86, v87, v88, v89, v90, v91, v92; __int16 padding; int v93, v94, v95; } matrix;
    _BYTE *a1_view = SF_DRAFT_PTR(_BYTE, a1);
    _DWORD *a2_view = SF_DRAFT_PTR(_DWORD, a2);
    _BYTE *a3_view = SF_DRAFT_PTR(_BYTE, a3);
  uint8 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  _DWORD *v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int result; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  _DWORD *v27; 
  int v28; 
  _DWORD *v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  _DWORD *v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int *v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int *v53; 
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
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  char v104; 
  uint32 v105; 
  int v106; 
  int v107; 
  int v108; 

  a2_view[1] = a2_view[6];
  *a3_view = 0;
  v6 = a1_view[4];
  v7 = a2_view[7];
  v8 = a2_view[2];
  v9 = a2_view[3];
  v10 = a2_view[4];
  v11 = a2_view[5];
  point.v66 = v8;
  point.v67 = v9;
  point.v68 = v10;
  point.v69 = v11;
  if ( v6 == 2 )
  {
    v70 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 20);
    v71 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 24);
    v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 28);
    v71 = -v71;
    goto LABEL_18;
  }
  if ( v6 >= 3u )
  {
    if ( v6 != 3 )
      goto LABEL_19;
    v16 = (_DWORD *)(*(_DWORD **)(*(_DWORD *)a1_view + 16));
    v17 = v16[4] + *v16;
    v70 = v17;
    v71 = v16[5] + v16[1];
    v72 = v16[6] + v16[2];
    if ( v17 < 0 )
      v18 = -(-v17 >> 1);
    else
      v18 = v17 >> 1;
    v70 = v18;
    if ( v71 < 0 )
      v19 = -(-v71 >> 1);
    else
      v19 = v71 >> 1;
    v71 = v19;
    if ( v72 < 0 )
      v15 = -(-v72 >> 1);
    else
      v15 = v72 >> 1;
LABEL_18:
    v72 = v15;
    goto LABEL_19;
  }
  if ( v6 == 1 )
  {
    v12 = *(_DWORD *)(*(_DWORD *)a1_view + 8);
    v13 = *(_DWORD *)(*(_DWORD *)a1_view + 12);
    v14 = *(_DWORD *)(*(_DWORD *)a1_view + 16);
    v70 = *(_DWORD *)(*(_DWORD *)a1_view + 4);
    v71 = v12;
    v72 = v13;
    v73 = v14;
  }
LABEL_19:
  v20 = v70 - point.v66;
  if ( v70 - point.v66 < 0 )
    v20 = point.v66 - v70;
  v74 = v70 - point.v66;
  result = 1;
  if ( v7 < v20 )
    return result;
  v22 = v71 - point.v67;
  if ( v71 - point.v67 < 0 )
    v22 = point.v67 - v71;
  v75 = v71 - point.v67;
  result = 1;
  if ( v7 < v22 )
    return result;
  v23 = v72 - point.v68;
  if ( v72 - point.v68 < 0 )
    v23 = point.v68 - v72;
  v76 = v72 - point.v68;
  result = 1;
  if ( v7 < v23 )
    return result;
  if ( v6 == 2 )
  {
    v27 = (_DWORD *)(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 16));
    v77 = v27[4] - *v27;
    v78 = v27[5] - v27[1];
    v28 = v27[6] - v27[2];
    goto LABEL_37;
  }
  if ( v6 >= 3u )
  {
    if ( v6 != 3 )
      goto LABEL_38;
    v29 = (_DWORD *)(*(_DWORD **)(*(_DWORD *)a1_view + 16));
    v77 = v29[4] - *v29;
    v78 = v29[5] - v29[1];
    v30 = v29[6];
    v31 = v29[2];
    v77 >>= 1;
    v78 >>= 1;
    v79 = v30 - v31;
    v28 = (v30 - v31) >> 1;
LABEL_37:
    v79 = v28;
    goto LABEL_38;
  }
  if ( v6 == 1 )
  {
    v24 = *(_DWORD *)(*(_DWORD *)a1_view + 56);
    v25 = *(_DWORD *)(*(_DWORD *)a1_view + 60);
    v26 = *(_DWORD *)(*(_DWORD *)a1_view + 64);
    v80 = *(_DWORD *)(*(_DWORD *)a1_view + 52);
    v81 = v24;
    v82 = v25;
    v83 = v26;
    v77 = v80 >> 1;
    v79 = v25 >> 1;
    v78 = v24 >> 1;
  }
LABEL_38:
  v32 = v77 + v78 + v79;
  result = 1;
  if ( v32 < v20 )
    return result;
  result = 1;
  if ( v32 < v22 )
    return result;
  result = 1;
  if ( v32 < v23 )
    return result;
  v33 = v23;
  if ( v22 >= v20 )
  {
    if ( v23 < v22 )
      v33 = v22;
  }
  else if ( v23 < v20 )
  {
    v33 = v20;
  }
  if ( v78 >= v77 )
  {
    v34 = v77 >= v79 ? v78 + v77 : v78 + v79;
  }
  else
  {
    v34 = v78 + v77;
    if ( v78 < v79 )
      v34 = v77 + v79;
  }
  result = 1;
  if ( v34 < v33 )
    return result;
  v35 = v6;
  if ( v6 == 2 )
  {
    v35 = v6;
    if ( *(_DWORD *)a1_view == a2_view[6] )
      return 1;
  }
  if ( v35 == 2 )
    goto LABEL_61;
  if ( v35 < 3 )
  {
    if ( v35 != 1 )
      goto LABEL_63;
LABEL_61:
    v104 = 0;
    goto LABEL_63;
  }
  if ( v35 == 3 )
    v104 = 1;
LABEL_63:
  if ( !v104 )
  {
    if ( v6 == 2 )
    {
      matrix.v84 = **(_WORD **)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12);
      matrix.v85 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 2);
      matrix.v86 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 4);
      matrix.v87 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 6);
      matrix.v88 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 8);
      matrix.v89 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 10);
      matrix.v90 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 12);
      matrix.v91 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 14);
      matrix.v92 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 16);
      matrix.v93 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 20);
      matrix.v94 = (0u - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 24));
      v36 = *(_DWORD *)(*(_DWORD *)a1_view + 8);
    }
    else
    {
      if ( v6 < 3u )
      {
        if ( v6 == 1 )
          v105 = r_u32(a1) + 20;
        goto LABEL_74;
      }
      if ( v6 != 3 )
      {
LABEL_74:
        sub_800EADF4(v105, sf_draft_guest_address(&point), sf_draft_guest_address(&point));
        point.v66 += r_u32(v105 + 20);
        point.v67 += r_u32(v105 + 24);
        point.v68 += r_u32(v105 + 28);
        goto LABEL_94;
      }
      matrix.v84 = **(_WORD **)(*(_DWORD *)a1_view + 12);
      matrix.v85 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 2);
      matrix.v86 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 4);
      matrix.v87 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 6);
      matrix.v88 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 8);
      matrix.v89 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 10);
      matrix.v90 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 12);
      matrix.v91 = -*(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 14);
      matrix.v92 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 16);
      matrix.v93 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 20);
      matrix.v94 = (0u - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 12) + 24));
      v36 = *(_DWORD *)a1_view;
    }
    matrix.v95 = *SF_DRAFT_PTR(_DWORD, (*SF_DRAFT_PTR(_DWORD, (v36 + 12)) + 28));
    sub_800DA474(sf_draft_guest_address(&matrix), sf_draft_guest_address(&matrix));
    v105 = sf_draft_guest_address(&matrix);
    goto LABEL_74;
  }
  if ( v6 == 2 )
  {
    v80 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 20);
    v81 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 24);
    v37 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 12) + 28);
    v81 = -v81;
  }
  else if ( v6 >= 3u )
  {
    if ( v6 != 3 )
      goto LABEL_93;
    v38 = (_DWORD *)(*(_DWORD **)(*(_DWORD *)a1_view + 16));
    v39 = v38[4] + *v38;
    v80 = v39;
    v81 = v38[5] + v38[1];
    v82 = v38[6] + v38[2];
    if ( v39 < 0 )
      v40 = -(-v39 >> 1);
    else
      v40 = v39 >> 1;
    v80 = v40;
    if ( v81 < 0 )
      v41 = -(-v81 >> 1);
    else
      v41 = v81 >> 1;
    v81 = v41;
    if ( v82 < 0 )
      v37 = -(-v82 >> 1);
    else
      v37 = v82 >> 1;
  }
  else
  {
    if ( v6 != 1 )
      goto LABEL_93;
    v80 = (0u - *(_DWORD *)(*(_DWORD *)a1_view + 40));
    v81 = (0u - *(_DWORD *)(*(_DWORD *)a1_view + 44));
    v37 = (0u - *(_DWORD *)(*(_DWORD *)a1_view + 48));
  }
  v82 = v37;
LABEL_93:
  point.v66 -= v80;
  point.v67 -= v81;
  point.v68 -= v82;
LABEL_94:
  if ( v6 == 2 )
  {
    v45 = (int *)(*(int **)(*(_DWORD *)(*(_DWORD *)a1_view + 8) + 16));
    v46 = v45[1];
    v47 = v45[2];
    v48 = v45[3];
    v96 = *v45;
    v97 = v46;
    v98 = v47;
    v99 = v48;
    v49 = v45[5];
    v50 = v45[6];
    v51 = v45[7];
    v100 = v45[4];
    v102 = v50;
    v103 = v51;
    v52 = -v97;
    v97 = -v49;
    v101 = v52;
  }
  else if ( v6 >= 3u )
  {
    if ( v6 == 3 )
    {
      v53 = (int *)(*(int **)(*(_DWORD *)a1_view + 16));
      v54 = v53[1];
      v55 = v53[2];
      v56 = v53[3];
      v96 = *v53;
      v97 = v54;
      v98 = v55;
      v99 = v56;
      v57 = v53[5];
      v58 = v53[6];
      v59 = v53[7];
      v100 = v53[4];
      v102 = v58;
      v103 = v59;
      v60 = v100 + v96;
      v61 = -v57;
      v101 = -v97;
      v62 = v61 - v97;
      v97 = v61;
      v106 = v100 + v96;
      v107 = v62;
      v108 = v58 + v98;
      if ( v100 + v96 < 0 )
        v63 = -(-v60 >> 1);
      else
        v63 = v60 >> 1;
      v106 = v63;
      if ( v107 < 0 )
        v64 = -(-v107 >> 1);
      else
        v64 = v107 >> 1;
      v107 = v64;
      if ( v108 < 0 )
        v65 = -(-v108 >> 1);
      else
        v65 = v108 >> 1;
      v108 = v65;
      v96 -= v106;
      v97 -= v107;
      v98 -= v65;
      v100 -= v106;
      v101 -= v107;
      v102 -= v65;
    }
  }
  else if ( v6 == 1 )
  {
    v96 = 0;
    v97 = 0;
    v98 = 0;
    v42 = *(_DWORD *)(*(_DWORD *)a1_view + 56);
    v43 = *(_DWORD *)(*(_DWORD *)a1_view + 60);
    v44 = *(_DWORD *)(*(_DWORD *)a1_view + 64);
    v100 = *(_DWORD *)(*(_DWORD *)a1_view + 52);
    v101 = v42;
    v102 = v43;
    v103 = v44;
  }
  result = 1;
  if ( point.v66 >= v96 )
  {
    result = 1;
    if ( v100 >= point.v66 )
    {
      result = 1;
      if ( point.v67 >= v97 )
      {
        result = 1;
        if ( v101 >= point.v67 )
        {
          result = 1;
          if ( point.v68 >= v98 )
          {
            result = 1;
            if ( v102 >= point.v68 )
            {
              *a3_view = 1;
              result = 1;
              if ( v6 == 2 )
              {
                if ( (a1_view[6] & 2) != 0 )
                  sub_80015364(0x1Au, 1u, (*(__int16 *)(a2_view[6] + 2)), (*(__int16 *)(*(_DWORD *)a1_view + 2)), point.v66, point.v67, point.v68, point.v69);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
