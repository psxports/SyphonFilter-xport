#include "game_draft.h"

/* Unverified native draft with reviewed angle and matrix padding */
typedef union sf_7A49C_object
{
    sint32 w[8];
    sint16 h[16];
    uint8 b[32];
} sf_7A49C_object;

sint32 sub_8007A49C(sint32 a1)
{
    FUNCTION_MARKER(0x8007A49Cu, "SCUS_942.40");
    uint32 v2;
    sint32 v3;
    sint32 v4;
    uint32 v5;
    sint32 v6;
    sint32 result;
    uint32 v8;
    sint32 v9;
    sint32 v10;
    uint32 v11;
    sint16 v12;
    sint32 v13;
    sint32 v14;
    sint32 v15;
    uint32 v16;
    sint32 v17;
    sint32 v18;
    sint32 v19;
    sint32 v20;
    sint32 v21;
    sint32 v22;
    sint32 v23;
    sint32 v24;
    sint32 v25;
    sint32 v26;
    sint32 v27;
    sint32 v28;
    sint32 v29;
    sint32 v30;
    sint32 v31;
    sint32 v32;
    sint32 v33;
    sint32 v34;
    sint32 v35;
    sint32 v36;
    sint32 v37;
    sint32 v38;
    sint32 v39;
    sint32 v40;
    sint32 v41;
    sint32 v42;
    sint32 v43;
    sint32 v44;
    sint32 v45;
    sint32 v46;
    sint32 v47;
    sint32 v48;
    sint32 v49;
    sint32 v50;
    sint32 v51;
    sint32 v52;
    sint32 v53;
    sint32 v54;
    sint32 v55;
    sint32 v56;
    sint32 v57;
    sint32 v58;
    sint32 v59;
    sint32 v60;
    sint32 v61;
    sint32 v62;
    sint32 v63;
    sint32 v64;
    sint32 v65;
    sint32 v66;
    sint32 v67;
    sint32 v68;
    sint32 v69;
    sint32 v70;
    sint32 v71;
    sint32 v72;
    sint32 v73;
    sint32 v74;
    sint32 v75;
    sint32 v76;
    sint32 v77;
    sint32 v78;
    sint32 v79;
    sint32 v80;
    sint32 v81;
    sint32 v82;
    sint32 v83;
    sint32 v84;
    sint32 v85;
    uint32 v86;
    sint32 v87;
    sint32 v88;
    sint32 v89;
    sint32 v90;
    sint32 v91;
    sint32 v92;
    sint32 v93;
    sint32 v94;
    sint32 v95;
    sint32 v96;
    sint32 v97;
    sint32 v98;
    sint32 v99;
    sint32 v100;
    sint32 v101;
    sint32 v102;
    sint32 v103;
    sint32 v104;
    sint32 v105;
    sint32 v106;
    sint32 v107;
    sint32 v108;
    sint32 v109;
    sint32 v110;
    bool v111;
    sint32 v112;
    sint32 v113;
    sint32 v114;
    sint32 v115;
    sint32 v116;
    sint32 v117;
    sint32 v118;
    sint32 v119;
    sint32 v120;
    sint32 v121;
    sint32 v122;
    sint32 v123;
    sint32 v124;
    sint32 v125;
    sint32 v126;
    sint32 v127;
    sint32 v128;
    sint32 v129;
    sint32 v130;
    sint32 v131;
    sint32 v132;
    sint32 v133;
    sint32 v134;
    sint32 v135;
    sint32 v136;
    sint32 v137;
    sint32 v138;
    sint32 v139;
    sint32 v140;
    sint32 v141;
    sint32 v142;
    sint32 v143;
    sint32 v144;
    sint32 v145;
    sint32 v146;
    sint32 v147;
    sint32 v148;
    sint32 v149;
    sint32 v150;
    sint32 v151;
    sint32 v152;
    sint32 v153;
    sint32 v154;
    sint32 v155;
    sint32 v156;
    sint32 v157;
    sint32 v158;
    sint32 v159;
    sint32 v160;
    sint32 v161;
    sint32 v162;
    sint32 v163;
    sint32 v164;
    sint32 v165;
    sint32 v166;
    sint32 v167;
    sint32 v168;
    sint32 v169;
    sint32 v170;
    sint32 v171;
    sint32 v172;
    sint32 v173;
    sint32 v174;
    sint32 v175;
    sint32 v176;
    sint32 v177;
    sint32 v178;
    sint32 v179;
    sint32 v180;
    sint32 v181;
    sint32 v182;
    sint32 v183;
    sint32 v184;
    sint32 v185;
    sint32 v186;
    sint32 v187;
    sint32 v188;
    sint32 v189;
    sint32 v190;
    sint32 v191;
    sint32 v192;
    sint32 v193;
    sint32 v194;
    sint32 v195;
    sint32 v196;
    sint32 v197;
    sint32 v198;
    sint32 v199;
    sint32 v200;
    sint32 v201;
    sint32 v202;
    uint32 v203;
    sint32 v204;
    sint32 v205;
    sint32 v206;
    sint32 v207;
    sint32 v208;
    sint32 v209;
    sint32 v210;
    sint32 v211;
    sint32 v212;
    sint32 v213;
    sint32 v214;
    sint32 v215;
    sint32 v216;
    sint32 v217;
    sint32 v218;
    sint32 v219;
    sint32 v220;
    sint32 v221;
    sint32 v222;
    sint32 v223;
    sint32 v224;
    sint32 v225;
    sint32 v226;
    sint32 v227;
    sint32 v228;
    uint32 v229;
    sint32 v230;
    sint32 v231;
    sint32 v232;
    sint32 v233;
    sint32 v234;
    sint32 v235;
    sint32 v236;
    sint32 v237;
    sint32 v424;
    bool v425;
    sint8 v426;
    sint8 v427;
    uint32 v428;
    uint32 v429;
    uint32 v430;
    bool v431;
    bool v432;
    sf_7A49C_object angleScratch;
    sf_7A49C_object delta;
    sf_7A49C_object rotationVector;
    sf_7A49C_object baseMatrix;
    sf_7A49C_object otherMatrix;
    sf_7A49C_object resultMatrix;
    sf_7A49C_object rightMatrix;
    sf_7A49C_object position;
    sf_7A49C_object relative;
    sf_7A49C_object baseAngles;
    sf_7A49C_object otherAngles;
    sf_7A49C_object rightAngles;
    sf_7A49C_object cachedAngles;
    sf_7A49C_object scratchAngles;
    sf_7A49C_object intermediateMatrix;
    sf_7A49C_object outputMatrix;
    sf_7A49C_object modelMatrix;
    sf_7A49C_object initialVector;
    sf_7A49C_object axisVector;
    sf_7A49C_object transformedVector;
    sf_7A49C_object basisVector;
    sf_7A49C_object scratchMatrixA;
    sf_7A49C_object scratchVector;
    sf_7A49C_object scratchMatrixB;
    sf_7A49C_object shortAngles;
    sf_7A49C_object pair;
    sf_7A49C_object distancePair;
    sf_7A49C_object dataVectorA;
    sf_7A49C_object dataVectorB;
    sf_7A49C_object dataVectorC;
    sf_7A49C_object dataVectorD;
    sf_7A49C_object dataVectorE;
    sf_7A49C_object dataVectorF;
    sf_7A49C_object dataVectorG;
    sf_7A49C_object dataVectorH;
    sf_7A49C_object dataVectorI;
    sf_7A49C_object dataVectorJ;
    sf_7A49C_object distanceOut;
    sf_7A49C_object dataVectorK;
    sf_7A49C_object dataVectorL;
    sf_7A49C_object dataVectorM;
    sf_7A49C_object nearDistance;
    sf_7A49C_object dataVectorN;
    sf_7A49C_object dataVectorO;
    /* DC0B8 restores this unused translation word after rotation publication */
    outputMatrix.w[6] = 0;
    v432 = 0;
    v425 = (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(12))))))) != 0;
    v2 = *((uint32 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(4))))));
    v424 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(40))))));
    v3 = *((uint8 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(44))))));
    v4 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)4)))))));
    v5 = (sint32)((uint32)(a1) + (uint32)(24));
    v426 = *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(64))))));
    v6 = *((uint8 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v4) + (uint32)(8))))));
    v427 = *((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(72))))));
    if (v6 == 1)
        v432 = ((*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)v4)))) & 8) != 0;
    initialVector.w[0] = r_u32(0x80012330u);
    initialVector.w[1] = r_u32(0x80012334u);
    initialVector.w[2] = r_u32(0x80012338u);
    result = r_u32(0x8001233Cu);
    initialVector.w[3] = r_u32(0x8001233Cu);
    if (v2)
    {
        result = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)3)))))));
        if (result)
        {
            if (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(result) + (uint32)(408)))))))
            {
                v8 = *((uint32 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(result) + (uint32)(408))))));
                sub_800C777C(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(12)))))));
                v9 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))));
                v10 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v9) + (uint32)(12))))));
                v11 = *((uint32 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v9) + (uint32)(24))))));
                v12 = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)v10)));
                v13 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v11) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)14)))))));
                v14 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v11) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)13)))))));
                v428 = *((uint32 *)sf_draft_guest_ptr((uint32)v11));
                v15 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v11) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)11)))))));
                v429 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v11) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)9)))))));
                v16 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v11) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)8)))))));
                baseMatrix.h[0] = v12;
                v430 = v16;
                baseMatrix.h[1] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(2))))))));
                baseMatrix.h[2] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(4))))));
                baseMatrix.h[3] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(6))))))));
                baseMatrix.h[4] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(8))))));
                v17 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(10))))))));
                baseMatrix.h[5] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(10))))))));
                baseMatrix.h[6] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(12))))));
                baseMatrix.h[7] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(14))))))));
                baseMatrix.h[8] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(16))))));
                baseMatrix.w[5] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(20))))));
                baseMatrix.w[6] = (sint32)(0u - (uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(24))))))));
                baseMatrix.w[7] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(28))))));
                axisVector.w[0] = baseMatrix.h[2];
                axisVector.w[1] = (sint16)v17;
                axisVector.w[2] = baseMatrix.h[8];
                baseAngles.w[1] = sub_800EC124(baseMatrix.h[2], baseMatrix.h[8]);
                sub_800E0B8C(sf_draft_guest_address(&axisVector.w[0]), sf_draft_guest_address(&baseAngles.w[0]));
                baseAngles.w[2] = 0;
                v18 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(104))))));
                rotationVector.w[0] = (sint32)(0u - (uint32)(v18));
                rotationVector.w[1] = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(106))))));
                v19 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(108))))));
                ((uint16 *)(&axisVector.w[0]))[0] = v18;
                ((uint16 *)(&axisVector.w[0]))[1] = rotationVector.w[1];
                rotationVector.w[2] = (sint32)(0u - (uint32)(v19));
                ((uint16 *)(&axisVector.w[1]))[0] = v19;
                sub_800EBE94(sf_draft_guest_address(&axisVector.w[0]), sf_draft_guest_address(&modelMatrix.b[0]));
                modelMatrix.h[1] = (sint32)(0u - (uint32)(modelMatrix.h[1]));
                modelMatrix.h[3] = (sint32)(0u - (uint32)(modelMatrix.h[3]));
                modelMatrix.h[5] = (sint32)(0u - (uint32)(modelMatrix.h[5]));
                modelMatrix.h[7] = (sint32)(0u - (uint32)(modelMatrix.h[7]));
                if (r_u32(0x801169A4u) != ((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)49)))))))) + (uint32)(1))))
                {
                    v20 = baseAngles.w[1];
                    v21 = baseAngles.w[2];
                    v22 = 0;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60))))))) = baseAngles.w[0];
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61))))))) = v20;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62))))))) = v21;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)63))))))) = v22;
                }
                if (r_u32(0x801169A4u) != ((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)50)))))))) + (uint32)(1))))
                {
                    v23 = baseAngles.w[1];
                    v24 = baseAngles.w[2];
                    v25 = 0;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)64))))))) = baseAngles.w[0];
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)65))))))) = v23;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)66))))))) = v24;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)67))))))) = v25;
                }
                if (r_u32(0x801169A4u) != ((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)51)))))))) + (uint32)(1))))
                {
                    v26 = baseAngles.w[1];
                    v27 = baseAngles.w[2];
                    v28 = 0;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68))))))) = baseAngles.w[0];
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69))))))) = v26;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = v27;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)71))))))) = v28;
                    v29 = baseAngles.w[1];
                    v30 = baseAngles.w[2];
                    v31 = 0;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72))))))) = baseAngles.w[0];
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73))))))) = v29;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)74))))))) = v30;
                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)75))))))) = v31;
                }
                v431 = 0;
                if (v3 && (v424 != 2))
                    v431 = v424 == 2;
                otherMatrix.h[0] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)v13)));
                otherMatrix.h[1] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(2))))))));
                otherMatrix.h[2] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(4))))));
                otherMatrix.h[3] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(6))))))));
                otherMatrix.h[4] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(8))))));
                otherMatrix.h[5] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(10))))))));
                otherMatrix.h[6] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(12))))));
                otherMatrix.h[7] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(14))))))));
                otherMatrix.h[8] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(16))))));
                otherMatrix.w[5] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(20))))));
                otherMatrix.w[6] = (sint32)(0u - (uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(24))))))));
                otherMatrix.w[7] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v13) + (uint32)(28))))));
                sub_800EACE4(sf_draft_guest_address(&otherMatrix.h[0]), sf_draft_guest_address(&modelMatrix.b[0]), sf_draft_guest_address(&resultMatrix.h[0]));
                otherMatrix.h[0] = (sint32)(0u - (uint32)(otherMatrix.h[0]));
                otherMatrix.h[3] = (sint32)(0u - (uint32)(otherMatrix.h[3]));
                otherMatrix.h[6] = (sint32)(0u - (uint32)(otherMatrix.h[6]));
                otherMatrix.h[2] = (sint32)(0u - (uint32)(otherMatrix.h[2]));
                otherMatrix.h[5] = (sint32)(0u - (uint32)(otherMatrix.h[5]));
                otherMatrix.h[8] = (sint32)(0u - (uint32)(otherMatrix.h[8]));
                axisVector.w[0] = (sint32)(0u - (uint32)(resultMatrix.h[0]));
                resultMatrix.h[0] = (sint32)(0u - (uint32)(resultMatrix.h[0]));
                transformedVector.w[0] = resultMatrix.h[1];
                transformedVector.w[1] = resultMatrix.h[4];
                transformedVector.w[2] = resultMatrix.h[7];
                axisVector.w[1] = (sint32)(0u - (uint32)(resultMatrix.h[3]));
                axisVector.w[2] = (sint32)(0u - (uint32)(resultMatrix.h[6]));
                basisVector.w[0] = (sint32)(0u - (uint32)(resultMatrix.h[2]));
                basisVector.w[1] = (sint32)(0u - (uint32)(resultMatrix.h[5]));
                basisVector.w[2] = (sint32)(0u - (uint32)(resultMatrix.h[8]));
                resultMatrix.h[3] = (sint32)(0u - (uint32)(resultMatrix.h[3]));
                resultMatrix.h[6] = (sint32)(0u - (uint32)(resultMatrix.h[6]));
                resultMatrix.h[2] = (sint32)(0u - (uint32)(resultMatrix.h[2]));
                resultMatrix.h[5] = (sint32)(0u - (uint32)(resultMatrix.h[5]));
                resultMatrix.h[8] = (sint32)(0u - (uint32)(resultMatrix.h[8]));
                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)49))))))) = r_u32(0x801169A4u);
                scratchMatrixA.w[0] = resultMatrix.h[0];
                scratchMatrixA.w[1] = resultMatrix.h[3];
                scratchMatrixA.w[2] = resultMatrix.h[6];
                scratchVector.w[0] = resultMatrix.h[1];
                scratchVector.w[1] = resultMatrix.h[4];
                scratchVector.w[2] = resultMatrix.h[7];
                scratchMatrixA.w[4] = resultMatrix.h[2];
                scratchMatrixA.w[5] = resultMatrix.h[5];
                scratchMatrixA.w[6] = resultMatrix.h[8];
                otherAngles.w[1] = sub_800EC124(resultMatrix.h[2], resultMatrix.h[8]);
                sub_800E0B8C(sf_draft_guest_address(&scratchMatrixA.w[4]), sf_draft_guest_address(&otherAngles.w[0]));
                otherAngles.w[2] = 0;
                sub_800E0A8C(sf_draft_guest_address(&scratchMatrixA.w[0]), sf_draft_guest_address(&otherAngles.w[0]), sf_draft_guest_address(&scratchMatrixA.w[0]));
                otherAngles.w[2] = sub_800EC124(scratchMatrixA.w[1], scratchMatrixA.w[0]);
                position.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(20))))));
                position.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(24))))));
                v32 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(28))))));
                position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                position.w[2] = v32;
                relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                relative.w[2] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))))) - (uint32)(v32));
                angleScratch.w[1] = sub_800EC124(relative.w[0], relative.w[2]);
                sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                angleScratch.w[2] = 0;
                angleScratch.w[0] = 0;
                axisVector.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))) - (uint32)(baseAngles.w[0]));
                if (axisVector.w[0] < 2049)
                {
                    v33 = (sint32)((uint32)(axisVector.w[0]) + (uint32)(4096));
                    if (axisVector.w[0] >= ((sint32)(0u - (uint32)(2048))))
                        goto LABEL_19;
                }
                else
                {
                    v33 = (sint32)((uint32)(axisVector.w[0]) - (uint32)(4096));
                }
                axisVector.w[0] = v33;
            LABEL_19:
                axisVector.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))) - (uint32)(baseAngles.w[1]));
                if (axisVector.w[1] < 2049)
                {
                    v34 = (sint32)((uint32)(axisVector.w[1]) + (uint32)(4096));
                    if (axisVector.w[1] >= ((sint32)(0u - (uint32)(2048))))
                        goto LABEL_23;
                }
                else
                {
                    v34 = (sint32)((uint32)(axisVector.w[1]) - (uint32)(4096));
                }
                axisVector.w[1] = v34;
            LABEL_23:
                axisVector.w[2] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))) - (uint32)(baseAngles.w[2]));
                if (axisVector.w[2] < 2049)
                {
                    v35 = (sint32)((uint32)(axisVector.w[2]) + (uint32)(4096));
                    if (axisVector.w[2] >= ((sint32)(0u - (uint32)(2048))))
                        goto LABEL_27;
                }
                else
                {
                    v35 = (sint32)((uint32)(axisVector.w[2]) - (uint32)(4096));
                }
                axisVector.w[2] = v35;
            LABEL_27:
                v36 = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                transformedVector.w[0] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                if (((sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]))) < 2049)
                {
                    v37 = (sint32)((uint32)(v36) + (uint32)(4096));
                    if (v36 >= ((sint32)(0u - (uint32)(2048))))
                        goto LABEL_31;
                }
                else
                {
                    v37 = (sint32)((uint32)(v36) - (uint32)(4096));
                }
                transformedVector.w[0] = v37;
            LABEL_31:
                v38 = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                transformedVector.w[1] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                if (((sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]))) < 2049)
                {
                    v39 = (sint32)((uint32)(v38) + (uint32)(4096));
                    if (v38 >= ((sint32)(0u - (uint32)(2048))))
                        goto LABEL_35;
                }
                else
                {
                    v39 = (sint32)((uint32)(v38) - (uint32)(4096));
                }
                transformedVector.w[1] = v39;
            LABEL_35:
                v40 = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                transformedVector.w[2] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                if (((sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]))) < 2049)
                {
                    v41 = (sint32)((uint32)(v40) + (uint32)(4096));
                    if (v40 >= ((sint32)(0u - (uint32)(2048))))
                    {
                    LABEL_39:
                        if (v3 && v425)
                        {
                            if (v432)
                            {
                                if (transformedVector.w[1] < 0)
                                {
                                    v42 = (sint32)((uint32)(transformedVector.w[1]) + (uint32)(739));
                                    if (((sint32)((uint32)(transformedVector.w[1]) + (uint32)(739))) > 0)
                                        v42 = 0;
                                }
                                else
                                {
                                    v42 = (sint32)((uint32)(transformedVector.w[1]) - (uint32)(739));
                                    if (((sint32)((uint32)(transformedVector.w[1]) - (uint32)(739))) < 0)
                                        v42 = 0;
                                }
                                goto LABEL_50;
                            }
                            if (v424 != 1)
                                goto LABEL_53;
                            if (transformedVector.w[1] > 0)
                            {
                                v42 = transformedVector.w[1] / 3;
                            LABEL_50:
                                transformedVector.w[1] = v42;
                                goto LABEL_53;
                            }
                            if (transformedVector.w[1] < 0)
                                transformedVector.w[1] = ((sint32)((uint32)(120) * (uint32)(transformedVector.w[1]))) / 180;
                        }
                    LABEL_53:
                        initialVector.w[0] = transformedVector.w[0];
                        initialVector.w[1] = transformedVector.w[1];
                        initialVector.w[2] = transformedVector.w[2];
                        initialVector.w[3] = transformedVector.w[3];
                        v43 = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(baseAngles.w[0]));
                        cachedAngles.w[0] = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(baseAngles.w[0]));
                        if (((sint32)((uint32)(otherAngles.w[0]) - (uint32)(baseAngles.w[0]))) < 2049)
                        {
                            v44 = (sint32)((uint32)(v43) + (uint32)(4096));
                            if (v43 >= ((sint32)(0u - (uint32)(2048))))
                                goto LABEL_57;
                        }
                        else
                        {
                            v44 = (sint32)((uint32)(v43) - (uint32)(4096));
                        }
                        cachedAngles.w[0] = v44;
                    LABEL_57:
                        v45 = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(baseAngles.w[1]));
                        cachedAngles.w[1] = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(baseAngles.w[1]));
                        if (((sint32)((uint32)(otherAngles.w[1]) - (uint32)(baseAngles.w[1]))) < 2049)
                        {
                            v46 = (sint32)((uint32)(v45) + (uint32)(4096));
                            if (v45 >= ((sint32)(0u - (uint32)(2048))))
                                goto LABEL_61;
                        }
                        else
                        {
                            v46 = (sint32)((uint32)(v45) - (uint32)(4096));
                        }
                        cachedAngles.w[1] = v46;
                    LABEL_61:
                        v47 = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(baseAngles.w[2]));
                        cachedAngles.w[2] = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(baseAngles.w[2]));
                        if (((sint32)((uint32)(otherAngles.w[2]) - (uint32)(baseAngles.w[2]))) < 2049)
                        {
                            v48 = (sint32)((uint32)(v47) + (uint32)(4096));
                            if (v47 >= ((sint32)(0u - (uint32)(2048))))
                                goto LABEL_65;
                        }
                        else
                        {
                            v48 = (sint32)((uint32)(v47) - (uint32)(4096));
                        }
                        cachedAngles.w[2] = v48;
                    LABEL_65:
                        v49 = (sint32)((uint32)(axisVector.w[0]) + (uint32)(cachedAngles.w[0]));
                        v50 = (sint32)((uint32)(axisVector.w[1]) + (uint32)(cachedAngles.w[1]));
                        axisVector.w[0] = (sint32)((uint32)(axisVector.w[0]) + (uint32)(cachedAngles.w[0]));
                        axisVector.w[1] = (sint32)((uint32)(axisVector.w[1]) + (uint32)(cachedAngles.w[1]));
                        axisVector.w[2] = (sint32)((uint32)(axisVector.w[2]) + (uint32)(cachedAngles.w[2]));
                        transformedVector.w[0] = (sint32)((uint32)(transformedVector.w[0]) + (uint32)(cachedAngles.w[0]));
                        transformedVector.w[1] = (sint32)((uint32)(transformedVector.w[1]) + (uint32)(cachedAngles.w[1]));
                        transformedVector.w[2] = (sint32)((uint32)(transformedVector.w[2]) + (uint32)(cachedAngles.w[2]));
                        if (v426)
                        {
                            v51 = (sint32)((uint32)(v49) - (uint32)(56));
                            if (v424 == 2)
                                v51 = (sint32)((uint32)(v49) - (uint32)(64));
                            axisVector.w[0] = v51;
                            axisVector.w[1] = (sint32)((uint32)(v50) + (uint32)(99));
                        }
                        if ((!v3) || (!v425))
                        {
                            transformedVector.w[0] = cachedAngles.w[0];
                            transformedVector.w[1] = cachedAngles.w[1];
                            transformedVector.w[2] = cachedAngles.w[2];
                            transformedVector.w[3] = 0;
                        }
                        if (!v427)
                        {
                        LABEL_88:
                            v63 = (sint32)(0u - (uint32)(682));
                            if ((axisVector.w[0] < ((sint32)(0u - (uint32)(682)))) || ((v63 = 682, axisVector.w[0] >= 683)))
                                axisVector.w[0] = v63;
                            v64 = (sint32)(0u - (uint32)(625));
                            if ((axisVector.w[1] < ((sint32)(0u - (uint32)(625)))) || ((v64 = 625, axisVector.w[1] >= 626)))
                                axisVector.w[1] = v64;
                            v65 = (sint32)(0u - (uint32)(682));
                            if ((transformedVector.w[0] < ((sint32)(0u - (uint32)(682)))) || ((v65 = 682, transformedVector.w[0] >= 683)))
                                transformedVector.w[0] = v65;
                            v66 = (sint32)(0u - (uint32)(625));
                            if ((transformedVector.w[1] < ((sint32)(0u - (uint32)(625)))) || ((v66 = 625, transformedVector.w[1] >= 626)))
                                transformedVector.w[1] = v66;
                            delta.w[0] = (sint32)((uint32)(transformedVector.w[0]) - (uint32)(axisVector.w[0]));
                            delta.w[1] = (sint32)((uint32)(transformedVector.w[1]) - (uint32)(axisVector.w[1]));
                            delta.w[2] = (sint32)((uint32)(transformedVector.w[2]) - (uint32)(axisVector.w[2]));
                            if (((sint32)((uint32)(transformedVector.w[0]) - (uint32)(axisVector.w[0]))) < 0)
                                v67 = (sint32)(0u - (uint32)(((sint32)((uint32)(axisVector.w[0]) - (uint32)(transformedVector.w[0]))) >> 2));
                            else
                                v67 = ((sint32)((uint32)(transformedVector.w[0]) - (uint32)(axisVector.w[0]))) >> 2;
                            delta.w[0] = v67;
                            if (delta.w[1] < 0)
                                v68 = (sint32)(0u - (uint32)(((sint32)(0u - (uint32)(delta.w[1]))) >> 2));
                            else
                                v68 = delta.w[1] >> 2;
                            delta.w[1] = v68;
                            axisVector.w[1] = (sint32)((uint32)(axisVector.w[1]) + (uint32)(v68));
                            axisVector.w[0] = (sint32)((uint32)(axisVector.w[0]) + (uint32)(delta.w[0]));
                            axisVector.w[2] = (sint32)((uint32)(axisVector.w[2]) + (uint32)(delta.w[2]));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60))))))) = (sint32)((uint32)(axisVector.w[0]) - (uint32)(cachedAngles.w[0]));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61))))))) = (sint32)((uint32)(axisVector.w[1]) - (uint32)(cachedAngles.w[1]));
                            v69 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62))))))) = (sint32)((uint32)(axisVector.w[2]) - (uint32)(cachedAngles.w[2]));
                            v70 = (sint32)((uint32)(v69) + (uint32)(baseAngles.w[0]));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60))))))) = v70;
                            if (v70 < 2049)
                            {
                                v71 = (sint32)((uint32)(v70) + (uint32)(4096));
                                if (v70 >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_110;
                            }
                            else
                            {
                                v71 = (sint32)((uint32)(v70) - (uint32)(4096));
                            }
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60))))))) = v71;
                        LABEL_110:
                            v72 = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))) + (uint32)(baseAngles.w[1]));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61))))))) = v72;
                            if (v72 < 2049)
                            {
                                v73 = (sint32)((uint32)(v72) + (uint32)(4096));
                                if (v72 >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_114;
                            }
                            else
                            {
                                v73 = (sint32)((uint32)(v72) - (uint32)(4096));
                            }
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61))))))) = v73;
                        LABEL_114:
                            v74 = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))) + (uint32)(baseAngles.w[2]));
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62))))))) = v74;
                            if (v74 < 2049)
                            {
                                v75 = (sint32)((uint32)(v74) + (uint32)(4096));
                                if (v74 >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_118;
                            }
                            else
                            {
                                v75 = (sint32)((uint32)(v74) - (uint32)(4096));
                            }
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62))))))) = v75;
                        LABEL_118:
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62))))))) = 0;
                            scratchAngles.w[2] = 0;
                            v76 = (sint32)((uint32)(axisVector.w[1]) - (uint32)(cachedAngles.w[1]));
                            scratchAngles.w[0] = (sint32)((uint32)(axisVector.w[0]) - (uint32)(cachedAngles.w[0]));
                            scratchAngles.w[1] = (sint32)((uint32)(axisVector.w[1]) - (uint32)(cachedAngles.w[1]));
                            ((uint16 *)(&scratchVector.w[0]))[0] = (sint32)((uint32)(cachedAngles.w[0]) - (uint32)(axisVector.w[0]));
                            if (v431)
                            {
                                ((uint16 *)(&scratchVector.w[1]))[0] = 0;
                                scratchAngles.w[1] = (sint32)((uint32)(v76) + (uint32)(baseAngles.w[1]));
                                ((uint16 *)(&scratchVector.w[0]))[1] = (sint32)((uint32)(v76) + (uint32)(baseAngles.w[1]));
                                sub_800EBE94(sf_draft_guest_address(&scratchVector.w[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                                outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                outputMatrix.h[5] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                            }
                            else
                            {
                                ((uint16 *)(&scratchVector.w[0]))[1] = (sint32)((uint32)(axisVector.w[1]) - (uint32)(cachedAngles.w[1]));
                                ((uint16 *)(&scratchVector.w[1]))[0] = 0;
                                sub_800EBE94(sf_draft_guest_address(&scratchVector.w[0]), sf_draft_guest_address(&intermediateMatrix.b[0]));
                                intermediateMatrix.h[1] = (sint32)(0u - (uint32)(intermediateMatrix.h[1]));
                                intermediateMatrix.h[3] = (sint32)(0u - (uint32)(intermediateMatrix.h[3]));
                                intermediateMatrix.h[5] = (sint32)(0u - (uint32)(intermediateMatrix.h[5]));
                                intermediateMatrix.h[7] = (sint32)(0u - (uint32)(intermediateMatrix.h[7]));
                                sub_800EACE4(sf_draft_guest_address(&baseMatrix.h[0]), sf_draft_guest_address(&intermediateMatrix.b[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                            }
                            v77 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(112))))));
                            rotationVector.w[0] = (sint32)(0u - (uint32)(v77));
                            rotationVector.w[1] = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(114))))));
                            v78 = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(116))))));
                            ((uint16 *)(&scratchVector.w[0]))[0] = v77;
                            ((uint16 *)(&scratchVector.w[0]))[1] = rotationVector.w[1];
                            rotationVector.w[2] = (sint32)(0u - (uint32)(v78));
                            ((uint16 *)(&scratchVector.w[1]))[0] = v78;
                            sub_800EBE94(sf_draft_guest_address(&scratchVector.w[0]), sf_draft_guest_address(&scratchMatrixA.w[0]));
                            ((uint16 *)(&scratchMatrixA.w[0]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixA.w[0]))[1]));
                            ((uint16 *)(&scratchMatrixA.w[1]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixA.w[1]))[1]));
                            ((uint16 *)(&scratchMatrixA.w[2]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixA.w[2]))[1]));
                            scratchMatrixA.h[7] = (sint32)(0u - (uint32)(scratchMatrixA.h[7]));
                            sub_800EACE4(sf_draft_guest_address(&outputMatrix.h[0]), sf_draft_guest_address(&scratchMatrixA.w[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                            sub_800EACE4(sf_draft_guest_address(&outputMatrix.h[0]), sf_draft_guest_address(&modelMatrix.b[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                            scratchMatrixB.w[0] = outputMatrix.h[1];
                            scratchMatrixB.w[1] = outputMatrix.h[4];
                            scratchMatrixB.w[2] = outputMatrix.h[7];
                            scratchVector.w[0] = outputMatrix.h[0];
                            scratchVector.w[1] = outputMatrix.h[3];
                            scratchVector.w[2] = outputMatrix.h[6];
                            scratchMatrixB.w[4] = outputMatrix.h[2];
                            scratchMatrixB.w[5] = outputMatrix.h[5];
                            scratchMatrixB.w[6] = outputMatrix.h[8];

                            sub_800DC0B8(v14, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                            scratchMatrixB.w[0] = outputMatrix.h[1];
                            scratchMatrixB.w[1] = outputMatrix.h[4];
                            scratchMatrixB.w[2] = outputMatrix.h[7];
                            scratchVector.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                            scratchVector.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                            scratchVector.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                            scratchMatrixB.w[4] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                            scratchMatrixB.w[5] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                            scratchMatrixB.w[6] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                            outputMatrix.h[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                            outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                            outputMatrix.h[6] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                            outputMatrix.h[2] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                            outputMatrix.h[5] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                            outputMatrix.h[8] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                            sub_800DB9C0(v14);
                            resultMatrix.h[0] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)v14)));
                            v79 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(2))))))));
                            resultMatrix.h[1] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(2))))))));
                            resultMatrix.h[2] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(4))))));
                            v80 = (sint32)(0u - (uint32)(resultMatrix.h[2]));
                            v81 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(6))))))));
                            resultMatrix.h[3] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(6))))))));
                            resultMatrix.h[4] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(8))))));
                            v82 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(10))))))));
                            resultMatrix.h[5] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(10))))))));
                            resultMatrix.h[6] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(12))))));
                            v83 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(14))))))));
                            resultMatrix.h[7] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(14))))))));
                            resultMatrix.h[8] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(16))))));
                            resultMatrix.w[5] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(20))))));
                            resultMatrix.w[6] = (sint32)(0u - (uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(24))))))));
                            v84 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v14) + (uint32)(28))))));
                            v85 = (sint32)(0u - (uint32)(resultMatrix.h[8]));
                            scratchMatrixA.w[0] = (sint16)v79;
                            scratchMatrixA.w[1] = resultMatrix.h[4];
                            scratchMatrixA.w[2] = (sint16)v83;
                            resultMatrix.w[7] = v84;
                            scratchMatrixA.w[5] = (sint32)(0u - (uint32)((sint16)v82));
                            resultMatrix.h[5] = (sint32)(0u - (uint32)((sint16)v82));
                            scratchMatrixA.w[4] = v80;
                            scratchMatrixA.w[6] = v85;
                            resultMatrix.h[0] = (sint32)(0u - (uint32)(resultMatrix.h[0]));
                            resultMatrix.h[3] = (sint32)(0u - (uint32)((sint16)v81));
                            resultMatrix.h[6] = (sint32)(0u - (uint32)(resultMatrix.h[6]));
                            resultMatrix.h[1] = v79;
                            resultMatrix.h[7] = v83;
                            resultMatrix.h[2] = (sint32)(0u - (uint32)(resultMatrix.h[2]));
                            resultMatrix.h[8] = (sint32)(0u - (uint32)(resultMatrix.h[8]));
                            basisVector.w[0] = v80;
                            basisVector.w[1] = scratchMatrixA.w[5];
                            basisVector.w[2] = v85;
                            otherAngles.w[1] = sub_800EC124(v80, v85);
                            sub_800E0B8C(sf_draft_guest_address(&basisVector.w[0]), sf_draft_guest_address(&otherAngles.w[0]));
                            otherAngles.w[2] = 0;
                            if (!v425)
                                goto LABEL_483;
                            v86 = v428;
                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)50))))))) = r_u32(0x801169A4u);
                            sub_800DB9C0(v86);
                            position.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v428) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)5)))))));
                            position.w[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v428) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)6)))))));
                            v87 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v428) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)7)))))));
                            position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                            position.w[2] = v87;
                            relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                            relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                            relative.w[2] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))))) - (uint32)(v87));
                            angleScratch.w[1] = sub_800EC124(relative.w[0], relative.w[2]);
                            sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                            angleScratch.w[2] = 0;
                            scratchMatrixA.w[4] = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)56)))))))));
                            if (scratchMatrixA.w[4] < 2049)
                            {
                                v88 = (sint32)((uint32)(scratchMatrixA.w[4]) + (uint32)(4096));
                                if (scratchMatrixA.w[4] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_126;
                            }
                            else
                            {
                                v88 = (sint32)((uint32)(scratchMatrixA.w[4]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[4] = v88;
                        LABEL_126:
                            scratchMatrixA.w[5] = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)57)))))))));
                            if (scratchMatrixA.w[5] < 2049)
                            {
                                v89 = (sint32)((uint32)(scratchMatrixA.w[5]) + (uint32)(4096));
                                if (scratchMatrixA.w[5] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_130;
                            }
                            else
                            {
                                v89 = (sint32)((uint32)(scratchMatrixA.w[5]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[5] = v89;
                        LABEL_130:
                            scratchMatrixA.w[6] = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)58)))))))));
                            if (scratchMatrixA.w[6] < 2049)
                            {
                                v90 = (sint32)((uint32)(scratchMatrixA.w[6]) + (uint32)(4096));
                                if (scratchMatrixA.w[6] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_134;
                            }
                            else
                            {
                                v90 = (sint32)((uint32)(scratchMatrixA.w[6]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[6] = v90;
                        LABEL_134:
                            basisVector.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)64)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)56)))))))));
                            if (basisVector.w[0] < 2049)
                            {
                                v91 = (sint32)((uint32)(basisVector.w[0]) + (uint32)(4096));
                                if (basisVector.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_138;
                            }
                            else
                            {
                                v91 = (sint32)((uint32)(basisVector.w[0]) - (uint32)(4096));
                            }
                            basisVector.w[0] = v91;
                        LABEL_138:
                            basisVector.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)65)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)57)))))))));
                            if (basisVector.w[1] < 2049)
                            {
                                v92 = (sint32)((uint32)(basisVector.w[1]) + (uint32)(4096));
                                if (basisVector.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_142;
                            }
                            else
                            {
                                v92 = (sint32)((uint32)(basisVector.w[1]) - (uint32)(4096));
                            }
                            basisVector.w[1] = v92;
                        LABEL_142:
                            basisVector.w[2] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)66)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)58)))))))));
                            if (basisVector.w[2] < 2049)
                            {
                                v93 = (sint32)((uint32)(basisVector.w[2]) + (uint32)(4096));
                                if (basisVector.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_146;
                            }
                            else
                            {
                                v93 = (sint32)((uint32)(basisVector.w[2]) - (uint32)(4096));
                            }
                            basisVector.w[2] = v93;
                        LABEL_146:
                            basisVector.w[0] = (sint32)((uint32)(basisVector.w[0]) - (uint32)(scratchMatrixA.w[4]));
                            basisVector.w[2] = (sint32)((uint32)(basisVector.w[2]) - (uint32)(scratchMatrixA.w[6]));
                            basisVector.w[1] = (sint32)((uint32)(basisVector.w[1]) - (uint32)(scratchMatrixA.w[5]));
                            scratchVector.w[0] = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))));
                            if (scratchVector.w[0] < 2049)
                            {
                                v94 = (sint32)((uint32)(scratchVector.w[0]) + (uint32)(4096));
                                if (scratchVector.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_150;
                            }
                            else
                            {
                                v94 = (sint32)((uint32)(scratchVector.w[0]) - (uint32)(4096));
                            }
                            scratchVector.w[0] = v94;
                        LABEL_150:
                            scratchVector.w[1] = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))));
                            if (scratchVector.w[1] < 2049)
                            {
                                v95 = (sint32)((uint32)(scratchVector.w[1]) + (uint32)(4096));
                                if (scratchVector.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_154;
                            }
                            else
                            {
                                v95 = (sint32)((uint32)(scratchVector.w[1]) - (uint32)(4096));
                            }
                            scratchVector.w[1] = v95;
                        LABEL_154:
                            scratchVector.w[2] = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))));
                            if (scratchVector.w[2] < 2049)
                            {
                                v96 = (sint32)((uint32)(scratchVector.w[2]) + (uint32)(4096));
                                if (scratchVector.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_158;
                            }
                            else
                            {
                                v96 = (sint32)((uint32)(scratchVector.w[2]) - (uint32)(4096));
                            }
                            scratchVector.w[2] = v96;
                        LABEL_158:
                            scratchMatrixA.w[0] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))));
                            if (scratchMatrixA.w[0] < 2049)
                            {
                                v97 = (sint32)((uint32)(scratchMatrixA.w[0]) + (uint32)(4096));
                                if (scratchMatrixA.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_162;
                            }
                            else
                            {
                                v97 = (sint32)((uint32)(scratchMatrixA.w[0]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[0] = v97;
                        LABEL_162:
                            scratchMatrixA.w[1] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))));
                            if (scratchMatrixA.w[1] < 2049)
                            {
                                v98 = (sint32)((uint32)(scratchMatrixA.w[1]) + (uint32)(4096));
                                if (scratchMatrixA.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                    goto LABEL_166;
                            }
                            else
                            {
                                v98 = (sint32)((uint32)(scratchMatrixA.w[1]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[1] = v98;
                        LABEL_166:
                            scratchMatrixA.w[2] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))));
                            if (scratchMatrixA.w[2] < 2049)
                            {
                                v99 = (sint32)((uint32)(scratchMatrixA.w[2]) + (uint32)(4096));
                                if (scratchMatrixA.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                {
                                LABEL_170:
                                    scratchMatrixA.w[0] = (sint32)((uint32)(scratchMatrixA.w[0]) - (uint32)(scratchVector.w[0]));
                                    scratchMatrixA.w[1] = (sint32)((uint32)(scratchMatrixA.w[1]) - (uint32)(scratchVector.w[1]));
                                    scratchMatrixA.w[2] = (sint32)((uint32)(scratchMatrixA.w[2]) - (uint32)(scratchVector.w[2]));
                                    if (v431 && (otherAngles.w[0] > 0))
                                    {
                                        scratchMatrixB.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(20))))));
                                        scratchMatrixB.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(24))))));
                                        v100 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(28))))));
                                        scratchMatrixB.w[1] = (sint32)(0u - (uint32)(scratchMatrixB.w[1]));
                                        scratchMatrixB.w[2] = v100;
                                        sub_800E027C(sf_draft_guest_address(&scratchMatrixB.w[0]), (sint32)((uint32)(a1) + (uint32)(24)), sf_draft_guest_address(&distancePair.w[0]));
                                        sub_800E027C(sf_draft_guest_address(&scratchMatrixB.w[0]), sf_draft_guest_address(&position.w[0]), sf_draft_guest_address(&distancePair.w[1]));
                                        if (distancePair.w[0] < ((sint32)((uint32)(distancePair.w[1]) + (uint32)(32))))
                                        {
                                            scratchMatrixA.w[0] = 0;
                                            scratchMatrixA.w[2] = 0;
                                            v101 = (sint32)((uint32)(baseAngles.w[1]) - (uint32)(otherAngles.w[1]));
                                            scratchMatrixA.w[1] = (sint32)((uint32)(baseAngles.w[1]) - (uint32)(otherAngles.w[1]));
                                            if (((sint32)((uint32)(baseAngles.w[1]) - (uint32)(otherAngles.w[1]))) >= 2049)
                                            {
                                                v102 = (sint32)((uint32)(v101) - (uint32)(4096));
                                            LABEL_176:
                                                scratchMatrixA.w[1] = v102;
                                                goto LABEL_177;
                                            }
                                            v102 = (sint32)((uint32)(v101) + (uint32)(4096));
                                            if (v101 < ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_176;
                                        }
                                    }
                                LABEL_177:
                                    if ((!(*((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(16)))))))) && (*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(40))))))))
                                        basisVector.w[0] = (sint32)((uint32)(basisVector.w[0]) + (uint32)(56));
                                    if (v426)
                                    {
                                        if (v424 == 2)
                                            v103 = (sint32)((uint32)(basisVector.w[0]) + (uint32)(64));
                                        else
                                            v103 = (sint32)((uint32)(basisVector.w[0]) + (uint32)(28));
                                        basisVector.w[0] = v103;
                                        basisVector.w[1] = (sint32)((uint32)(basisVector.w[1]) + (uint32)(49));
                                    }
                                    v104 = (sint32)(0u - (uint32)(682));
                                    if ((basisVector.w[0] < ((sint32)(0u - (uint32)(682)))) || ((v104 = 682, basisVector.w[0] >= 683)))
                                        basisVector.w[0] = v104;
                                    v105 = (sint32)(0u - (uint32)(796));
                                    if ((basisVector.w[1] < ((sint32)(0u - (uint32)(796)))) || ((v105 = 796, basisVector.w[1] >= 797)))
                                        basisVector.w[1] = v105;
                                    v106 = (sint32)(0u - (uint32)(682));
                                    if ((scratchMatrixA.w[0] < ((sint32)(0u - (uint32)(682)))) || ((v106 = 682, scratchMatrixA.w[0] >= 683)))
                                        scratchMatrixA.w[0] = v106;
                                    v107 = (sint32)(0u - (uint32)(796));
                                    if ((scratchMatrixA.w[1] < ((sint32)(0u - (uint32)(796)))) || ((v107 = 796, scratchMatrixA.w[1] >= 797)))
                                        scratchMatrixA.w[1] = v107;
                                    delta.w[0] = (sint32)((uint32)(scratchMatrixA.w[0]) - (uint32)(basisVector.w[0]));
                                    delta.w[1] = (sint32)((uint32)(scratchMatrixA.w[1]) - (uint32)(basisVector.w[1]));
                                    delta.w[2] = (sint32)((uint32)(scratchMatrixA.w[2]) - (uint32)(basisVector.w[2]));
                                    if (((sint32)((uint32)(scratchMatrixA.w[0]) - (uint32)(basisVector.w[0]))) < 0)
                                        v108 = (sint32)(0u - (uint32)(((sint32)((uint32)(basisVector.w[0]) - (uint32)(scratchMatrixA.w[0]))) >> 2));
                                    else
                                        v108 = ((sint32)((uint32)(scratchMatrixA.w[0]) - (uint32)(basisVector.w[0]))) >> 2;
                                    delta.w[0] = v108;
                                    if (delta.w[1] < 0)
                                        v109 = (sint32)(0u - (uint32)(((sint32)(0u - (uint32)(delta.w[1]))) >> 2));
                                    else
                                        v109 = delta.w[1] >> 2;
                                    delta.w[1] = v109;
                                    basisVector.w[1] = (sint32)((uint32)(basisVector.w[1]) + (uint32)(v109));
                                    basisVector.w[0] = (sint32)((uint32)(basisVector.w[0]) + (uint32)(delta.w[0]));
                                    v110 = (sint32)((uint32)(basisVector.w[0]) + (uint32)(otherAngles.w[0]));
                                    basisVector.w[2] = (sint32)((uint32)(basisVector.w[2]) + (uint32)(delta.w[2]));
                                    v111 = ((sint32)((uint32)(basisVector.w[0]) + (uint32)(otherAngles.w[0]))) < 2049;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)64))))))) = (sint32)((uint32)(basisVector.w[0]) + (uint32)(otherAngles.w[0]));
                                    if (v111)
                                    {
                                        v112 = (sint32)((uint32)(v110) + (uint32)(4096));
                                        if (v110 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_207;
                                    }
                                    else
                                    {
                                        v112 = (sint32)((uint32)(v110) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)64))))))) = v112;
                                LABEL_207:
                                    v113 = (sint32)((uint32)(basisVector.w[1]) + (uint32)(otherAngles.w[1]));
                                    v111 = ((sint32)((uint32)(basisVector.w[1]) + (uint32)(otherAngles.w[1]))) < 2049;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)65))))))) = (sint32)((uint32)(basisVector.w[1]) + (uint32)(otherAngles.w[1]));
                                    if (v111)
                                    {
                                        v114 = (sint32)((uint32)(v113) + (uint32)(4096));
                                        if (v113 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_211;
                                    }
                                    else
                                    {
                                        v114 = (sint32)((uint32)(v113) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)65))))))) = v114;
                                LABEL_211:
                                    v115 = (sint32)((uint32)(basisVector.w[2]) + (uint32)(otherAngles.w[2]));
                                    v111 = ((sint32)((uint32)(basisVector.w[2]) + (uint32)(otherAngles.w[2]))) < 2049;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)66))))))) = (sint32)((uint32)(basisVector.w[2]) + (uint32)(otherAngles.w[2]));
                                    if (v111)
                                    {
                                        v116 = (sint32)((uint32)(v115) + (uint32)(4096));
                                        if (v115 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_215;
                                    }
                                    else
                                    {
                                        v116 = (sint32)((uint32)(v115) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)66))))))) = v116;
                                LABEL_215:
                                    v117 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)64)))))));
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)66))))))) = 0;
                                    ((uint16 *)(&scratchMatrixB.w[4]))[0] = (sint32)(0u - (uint32)((sint16)v117));
                                    ((uint16 *)(&scratchMatrixB.w[4]))[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)65)))))));
                                    ((uint16 *)(&scratchMatrixB.w[5]))[0] = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)(264u)))))));
                                    sub_800EBE94(sf_draft_guest_address(&scratchMatrixB.w[4]), sf_draft_guest_address(&outputMatrix.h[0]));
                                    dataVectorA.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                    dataVectorA.w[1] = outputMatrix.h[4];
                                    dataVectorA.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                    scratchMatrixB.w[4] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                    scratchMatrixB.w[5] = outputMatrix.h[3];
                                    scratchMatrixB.w[6] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                    dataVectorB.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                    dataVectorB.w[1] = outputMatrix.h[5];
                                    dataVectorB.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                    outputMatrix.h[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                    outputMatrix.h[6] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                    outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                    outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                    outputMatrix.h[2] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                    outputMatrix.h[8] = (sint32)(0u - (uint32)(outputMatrix.h[8]));

                                    sub_800DC0B8(v428, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                    scratchMatrixB.w[4] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                    outputMatrix.h[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                    dataVectorA.w[0] = outputMatrix.h[1];
                                    dataVectorA.w[1] = outputMatrix.h[4];
                                    dataVectorA.w[2] = outputMatrix.h[7];
                                    scratchMatrixB.w[5] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                    scratchMatrixB.w[6] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                    dataVectorB.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                    dataVectorB.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                    dataVectorB.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                    outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                    outputMatrix.h[6] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                    outputMatrix.h[2] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                    outputMatrix.h[5] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                    outputMatrix.h[8] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                    if (!v425)
                                    {
                                    LABEL_483:
                                        sub_800C777C(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(12)))))));
                                        v232 = baseAngles.w[1];
                                        v233 = baseAngles.w[2];
                                        v234 = 0;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)52))))))) = baseAngles.w[0];
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)53))))))) = v232;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)54))))))) = v233;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)55))))))) = v234;
                                        result = otherAngles.w[0];
                                        v235 = otherAngles.w[1];
                                        v236 = otherAngles.w[2];
                                        v237 = 0;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)56))))))) = otherAngles.w[0];
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)57))))))) = v235;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)58))))))) = v236;
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)59))))))) = v237;
                                        return result;
                                    }
                                    if (v424 == 1)
                                    {
                                        v118 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69)))))));
                                        v119 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70)))))));
                                        v120 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)71)))))));
                                        dataVectorA.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68)))))));
                                        dataVectorA.w[1] = v118;
                                        dataVectorA.w[2] = v119;
                                        dataVectorA.w[3] = v120;
                                        position.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(20))))));
                                        position.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(24))))));
                                        v121 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v10) + (uint32)(28))))));
                                        position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                                        position.w[2] = v121;
                                        relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                                        relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                                        v122 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))));
                                        relative.w[1] = (sint32)((uint32)(relative.w[1]) - (uint32)(192));
                                        relative.w[2] = (sint32)((uint32)(v122) - (uint32)(v121));
                                        angleScratch.w[1] = sub_800EC124(relative.w[0], (sint32)((uint32)(v122) - (uint32)(v121)));
                                        sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                                        angleScratch.w[2] = 0;
                                        v123 = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                                        scratchMatrixB.w[4] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                                        if (((sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]))) < 2049)
                                        {
                                            v124 = (sint32)((uint32)(v123) + (uint32)(4096));
                                            if (v123 >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_221;
                                        }
                                        else
                                        {
                                            v124 = (sint32)((uint32)(v123) - (uint32)(4096));
                                        }
                                        scratchMatrixB.w[4] = v124;
                                    LABEL_221:
                                        v125 = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                                        scratchMatrixB.w[5] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                                        if (((sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]))) < 2049)
                                        {
                                            v126 = (sint32)((uint32)(v125) + (uint32)(4096));
                                            if (v125 >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_225;
                                        }
                                        else
                                        {
                                            v126 = (sint32)((uint32)(v125) - (uint32)(4096));
                                        }
                                        scratchMatrixB.w[5] = v126;
                                    LABEL_225:
                                        v127 = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                                        scratchMatrixB.w[6] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                                        if (((sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]))) < 2049)
                                        {
                                            v128 = (sint32)((uint32)(v127) + (uint32)(4096));
                                            if (v127 >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_229;
                                        }
                                        else
                                        {
                                            v128 = (sint32)((uint32)(v127) - (uint32)(4096));
                                        }
                                        scratchMatrixB.w[6] = v128;
                                    LABEL_229:
                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)51))))))) = r_u32(0x801169A4u);
                                        sub_800DB9C0(v15);
                                        position.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(20))))));
                                        position.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(24))))));
                                        v129 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(28))))));
                                        position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                                        position.w[2] = v129;
                                        relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                                        relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                                        relative.w[2] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))))) - (uint32)(v129));
                                        angleScratch.w[1] = sub_800EC124(relative.w[0], relative.w[2]);
                                        sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                                        angleScratch.w[2] = 0;
                                        dataVectorD.w[0] = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)56)))))))));
                                        if (dataVectorD.w[0] < 2049)
                                        {
                                            v130 = (sint32)((uint32)(dataVectorD.w[0]) + (uint32)(4096));
                                            if (dataVectorD.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_233;
                                        }
                                        else
                                        {
                                            v130 = (sint32)((uint32)(dataVectorD.w[0]) - (uint32)(4096));
                                        }
                                        dataVectorD.w[0] = v130;
                                    LABEL_233:
                                        dataVectorD.w[1] = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)57)))))))));
                                        if (dataVectorD.w[1] < 2049)
                                        {
                                            v131 = (sint32)((uint32)(dataVectorD.w[1]) + (uint32)(4096));
                                            if (dataVectorD.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_237;
                                        }
                                        else
                                        {
                                            v131 = (sint32)((uint32)(dataVectorD.w[1]) - (uint32)(4096));
                                        }
                                        dataVectorD.w[1] = v131;
                                    LABEL_237:
                                        dataVectorD.w[2] = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)58)))))))));
                                        if (dataVectorD.w[2] < 2049)
                                        {
                                            v132 = (sint32)((uint32)(dataVectorD.w[2]) + (uint32)(4096));
                                            if (dataVectorD.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_241;
                                        }
                                        else
                                        {
                                            v132 = (sint32)((uint32)(dataVectorD.w[2]) - (uint32)(4096));
                                        }
                                        dataVectorD.w[2] = v132;
                                    LABEL_241:
                                        dataVectorB.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)56)))))))));
                                        if (dataVectorB.w[0] < 2049)
                                        {
                                            v133 = (sint32)((uint32)(dataVectorB.w[0]) + (uint32)(4096));
                                            if (dataVectorB.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_245;
                                        }
                                        else
                                        {
                                            v133 = (sint32)((uint32)(dataVectorB.w[0]) - (uint32)(4096));
                                        }
                                        dataVectorB.w[0] = v133;
                                    LABEL_245:
                                        dataVectorB.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)57)))))))));
                                        if (dataVectorB.w[1] < 2049)
                                        {
                                            v134 = (sint32)((uint32)(dataVectorB.w[1]) + (uint32)(4096));
                                            if (dataVectorB.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_249;
                                        }
                                        else
                                        {
                                            v134 = (sint32)((uint32)(dataVectorB.w[1]) - (uint32)(4096));
                                        }
                                        dataVectorB.w[1] = v134;
                                    LABEL_249:
                                        dataVectorB.w[2] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)58)))))))));
                                        if (dataVectorB.w[2] < 2049)
                                        {
                                            v135 = (sint32)((uint32)(dataVectorB.w[2]) + (uint32)(4096));
                                            if (dataVectorB.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_253;
                                        }
                                        else
                                        {
                                            v135 = (sint32)((uint32)(dataVectorB.w[2]) - (uint32)(4096));
                                        }
                                        dataVectorB.w[2] = v135;
                                    LABEL_253:
                                        dataVectorB.w[0] = (sint32)((uint32)(dataVectorB.w[0]) - (uint32)(dataVectorD.w[0]));
                                        dataVectorB.w[2] = (sint32)((uint32)(dataVectorB.w[2]) - (uint32)(dataVectorD.w[2]));
                                        dataVectorB.w[1] = (sint32)((uint32)(dataVectorB.w[1]) - (uint32)(dataVectorD.w[1]));
                                        dataVectorE.w[0] = (sint32)((uint32)(otherAngles.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))));
                                        if (dataVectorE.w[0] < 2049)
                                        {
                                            v136 = (sint32)((uint32)(dataVectorE.w[0]) + (uint32)(4096));
                                            if (dataVectorE.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_257;
                                        }
                                        else
                                        {
                                            v136 = (sint32)((uint32)(dataVectorE.w[0]) - (uint32)(4096));
                                        }
                                        dataVectorE.w[0] = v136;
                                    LABEL_257:
                                        dataVectorE.w[1] = (sint32)((uint32)(otherAngles.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))));
                                        if (dataVectorE.w[1] < 2049)
                                        {
                                            v137 = (sint32)((uint32)(dataVectorE.w[1]) + (uint32)(4096));
                                            if (dataVectorE.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_261;
                                        }
                                        else
                                        {
                                            v137 = (sint32)((uint32)(dataVectorE.w[1]) - (uint32)(4096));
                                        }
                                        dataVectorE.w[1] = v137;
                                    LABEL_261:
                                        dataVectorE.w[2] = (sint32)((uint32)(otherAngles.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))));
                                        if (dataVectorE.w[2] < 2049)
                                        {
                                            v138 = (sint32)((uint32)(dataVectorE.w[2]) + (uint32)(4096));
                                            if (dataVectorE.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_265;
                                        }
                                        else
                                        {
                                            v138 = (sint32)((uint32)(dataVectorE.w[2]) - (uint32)(4096));
                                        }
                                        dataVectorE.w[2] = v138;
                                    LABEL_265:
                                        dataVectorC.w[0] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))));
                                        if (dataVectorC.w[0] < 2049)
                                        {
                                            v139 = (sint32)((uint32)(dataVectorC.w[0]) + (uint32)(4096));
                                            if (dataVectorC.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_269;
                                        }
                                        else
                                        {
                                            v139 = (sint32)((uint32)(dataVectorC.w[0]) - (uint32)(4096));
                                        }
                                        dataVectorC.w[0] = v139;
                                    LABEL_269:
                                        dataVectorC.w[1] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))));
                                        if (dataVectorC.w[1] < 2049)
                                        {
                                            v140 = (sint32)((uint32)(dataVectorC.w[1]) + (uint32)(4096));
                                            if (dataVectorC.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_273;
                                        }
                                        else
                                        {
                                            v140 = (sint32)((uint32)(dataVectorC.w[1]) - (uint32)(4096));
                                        }
                                        dataVectorC.w[1] = v140;
                                    LABEL_273:
                                        dataVectorC.w[2] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))));
                                        if (dataVectorC.w[2] < 2049)
                                        {
                                            v141 = (sint32)((uint32)(dataVectorC.w[2]) + (uint32)(4096));
                                            if (dataVectorC.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_277;
                                        }
                                        else
                                        {
                                            v141 = (sint32)((uint32)(dataVectorC.w[2]) - (uint32)(4096));
                                        }
                                        dataVectorC.w[2] = v141;
                                    LABEL_277:
                                        dataVectorC.w[0] = (sint32)((uint32)(dataVectorC.w[0]) - (uint32)(dataVectorE.w[0]));
                                        dataVectorC.w[1] = (sint32)((uint32)(dataVectorC.w[1]) - (uint32)(dataVectorE.w[1]));
                                        dataVectorC.w[2] = (sint32)((uint32)(dataVectorC.w[2]) - (uint32)(dataVectorE.w[2]));
                                        position.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(20))))));
                                        position.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(24))))));
                                        v142 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(28))))));
                                        position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                                        position.w[2] = v142;
                                        dataVectorG.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                                        dataVectorG.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                                        v143 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))));
                                        dataVectorG.w[1] = (sint32)((uint32)(dataVectorG.w[1]) - (uint32)(64));
                                        dataVectorG.w[2] = (sint32)((uint32)(v143) - (uint32)(v142));
                                        dataVectorH.w[1] = sub_800EC124(dataVectorG.w[0], (sint32)((uint32)(v143) - (uint32)(v142)));
                                        sub_800E0B8C(sf_draft_guest_address(&dataVectorG.w[0]), sf_draft_guest_address(&dataVectorH.w[0]));
                                        dataVectorH.w[2] = 0;
                                        dataVectorF.w[0] = (sint32)((uint32)(dataVectorH.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))));
                                        if (dataVectorF.w[0] < 2049)
                                        {
                                            v144 = (sint32)((uint32)(dataVectorF.w[0]) + (uint32)(4096));
                                            if (dataVectorF.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_281;
                                        }
                                        else
                                        {
                                            v144 = (sint32)((uint32)(dataVectorF.w[0]) - (uint32)(4096));
                                        }
                                        dataVectorF.w[0] = v144;
                                    LABEL_281:
                                        dataVectorF.w[1] = (sint32)((uint32)(dataVectorH.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))));
                                        if (dataVectorF.w[1] < 2049)
                                        {
                                            v145 = (sint32)((uint32)(dataVectorF.w[1]) + (uint32)(4096));
                                            if (dataVectorF.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_285;
                                        }
                                        else
                                        {
                                            v145 = (sint32)((uint32)(dataVectorF.w[1]) - (uint32)(4096));
                                        }
                                        dataVectorF.w[1] = v145;
                                    LABEL_285:
                                        dataVectorF.w[2] = (sint32)((uint32)(dataVectorH.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))))));
                                        if (dataVectorF.w[2] < 2049)
                                        {
                                            v146 = (sint32)((uint32)(dataVectorF.w[2]) + (uint32)(4096));
                                            if (dataVectorF.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                goto LABEL_289;
                                        }
                                        else
                                        {
                                            v146 = (sint32)((uint32)(dataVectorF.w[2]) - (uint32)(4096));
                                        }
                                        dataVectorF.w[2] = v146;
                                    LABEL_289:
                                        v147 = (sint32)((uint32)(360) * (uint32)(dataVectorF.w[1] / 5));
                                        if (v147 < 0)
                                        {
                                            if (((sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(360))) * (uint32)(dataVectorF.w[1] / 5))) >> 12) + (uint32)(30))) < 21)
                                                goto LABEL_297;
                                        }
                                        else if (((sint32)((uint32)(30) - (uint32)(v147 >> 12))) < 21)
                                        {
                                            goto LABEL_297;
                                        }
                                        v148 = (sint32)((uint32)(360) * (uint32)(dataVectorF.w[1] / 5));
                                        if (v148 < 0)
                                        {
                                            v149 = 455;
                                            if (((sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(360))) * (uint32)(dataVectorF.w[1] / 5))) >> 12) + (uint32)(30))) >= 41)
                                                goto LABEL_305;
                                        }
                                        else if (((sint32)((uint32)(30) - (uint32)(v148 >> 12))) >= 41)
                                        {
                                            v149 = 455;
                                            goto LABEL_305;
                                        }
                                    LABEL_297:
                                        v150 = (sint32)((uint32)(360) * (uint32)(dataVectorF.w[1] / 5));
                                        if (v150 < 0)
                                        {
                                            v149 = 227;
                                            if (((sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(360))) * (uint32)(dataVectorF.w[1] / 5))) >> 12) + (uint32)(30))) < 21)
                                                goto LABEL_305;
                                        }
                                        else if (((sint32)((uint32)(30) - (uint32)(v150 >> 12))) < 21)
                                        {
                                            v149 = 227;
                                            goto LABEL_305;
                                        }
                                        v151 = (sint32)((uint32)(360) * (uint32)(dataVectorF.w[1] / 5));
                                        if (v151 < 0)
                                            v152 = (sint32)((uint32)((sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(360))) * (uint32)(dataVectorF.w[1] / 5))) >> 12) + (uint32)(30))) << (uint32)(12));
                                        else
                                            v152 = (sint32)((uint32)((sint32)((uint32)(30) - (uint32)(v151 >> 12))) << (uint32)(12));
                                        v149 = v152 / 360;
                                    LABEL_305:
                                        if (*((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(16)))))))
                                        {
                                            v153 = v149;
                                        }
                                        else
                                        {
                                            v154 = dataVectorF.w[0];
                                            v153 = 113;
                                            if (dataVectorF.w[0] >= 0)
                                            {
                                            LABEL_311:
                                                if ((v154 < 0) && (dataVectorF.w[1] < 0))
                                                {
                                                    v155 = 113;
                                                    if (((sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(80))) * (uint32)(dataVectorF.w[1]))) / 90) - (uint32)(796))) < 114)
                                                        v155 = (sint32)((uint32)(((sint32)((uint32)((sint32)(0u - (uint32)(80))) * (uint32)(dataVectorF.w[1]))) / 90) - (uint32)(796));
                                                    if (((sint32)((uint32)(dataVectorC.w[0]) + (uint32)(v153))) < v155)
                                                        v153 = (sint32)((uint32)(v155) - (uint32)(dataVectorC.w[0]));
                                                }
                                                dataVectorC.w[0] = (sint32)((uint32)(dataVectorC.w[0]) + (uint32)(v153));
                                                dataVectorC.w[1] = (sint32)((uint32)(dataVectorC.w[1]) + (uint32)(170));
                                                if (v426)
                                                {
                                                    dataVectorB.w[0] = (sint32)((uint32)(dataVectorB.w[0]) + (uint32)(14));
                                                    dataVectorB.w[1] = (sint32)((uint32)(dataVectorB.w[1]) + (uint32)(26));
                                                }
                                                v156 = (sint32)(0u - (uint32)(796));
                                                if ((dataVectorB.w[0] < ((sint32)(0u - (uint32)(796)))) || ((v156 = 796, dataVectorB.w[0] >= 797)))
                                                    dataVectorB.w[0] = v156;
                                                v157 = (sint32)(0u - (uint32)(568));
                                                if ((dataVectorB.w[1] < ((sint32)(0u - (uint32)(568)))) || ((v157 = 1592, dataVectorB.w[1] >= 1593)))
                                                    dataVectorB.w[1] = v157;
                                                v158 = (sint32)(0u - (uint32)(796));
                                                if ((dataVectorC.w[0] < ((sint32)(0u - (uint32)(796)))) || ((v158 = 796, dataVectorC.w[0] >= 797)))
                                                    dataVectorC.w[0] = v158;
                                                v159 = (sint32)(0u - (uint32)(568));
                                                if ((dataVectorC.w[1] < ((sint32)(0u - (uint32)(568)))) || ((v159 = 1592, dataVectorC.w[1] >= 1593)))
                                                    dataVectorC.w[1] = v159;
                                                delta.w[2] = (sint32)((uint32)(dataVectorC.w[2]) - (uint32)(dataVectorB.w[2]));
                                                delta.w[0] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorC.w[0]) - (uint32)(dataVectorB.w[0]))))) / 16;
                                                delta.w[1] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorC.w[1]) - (uint32)(dataVectorB.w[1]))))) / 16;
                                                dataVectorB.w[1] = (sint32)((uint32)(dataVectorB.w[1]) + (uint32)(delta.w[1]));
                                                dataVectorB.w[0] = (sint32)((uint32)(dataVectorB.w[0]) + (uint32)(delta.w[0]));
                                                dataVectorB.w[2] = dataVectorC.w[2];
                                                v160 = (sint32)((uint32)(dataVectorB.w[0]) + (uint32)(otherAngles.w[0]));
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68))))))) = (sint32)((uint32)(dataVectorB.w[0]) + (uint32)(otherAngles.w[0]));
                                                if (v160 < 2049)
                                                {
                                                    v161 = (sint32)((uint32)(v160) + (uint32)(4096));
                                                    if (v160 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_335;
                                                }
                                                else
                                                {
                                                    v161 = (sint32)((uint32)(v160) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68))))))) = v161;
                                            LABEL_335:
                                                v162 = (sint32)((uint32)(dataVectorB.w[1]) + (uint32)(otherAngles.w[1]));
                                                v111 = ((sint32)((uint32)(dataVectorB.w[1]) + (uint32)(otherAngles.w[1]))) < 2049;
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69))))))) = (sint32)((uint32)(dataVectorB.w[1]) + (uint32)(otherAngles.w[1]));
                                                if (v111)
                                                {
                                                    v163 = (sint32)((uint32)(v162) + (uint32)(4096));
                                                    if (v162 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_339;
                                                }
                                                else
                                                {
                                                    v163 = (sint32)((uint32)(v162) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69))))))) = v163;
                                            LABEL_339:
                                                v164 = (sint32)((uint32)(dataVectorB.w[2]) + (uint32)(otherAngles.w[2]));
                                                v111 = ((sint32)((uint32)(dataVectorB.w[2]) + (uint32)(otherAngles.w[2]))) < 2049;
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = (sint32)((uint32)(dataVectorB.w[2]) + (uint32)(otherAngles.w[2]));
                                                if (v111)
                                                {
                                                    v165 = (sint32)((uint32)(v164) + (uint32)(4096));
                                                    if (v164 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_343;
                                                }
                                                else
                                                {
                                                    v165 = (sint32)((uint32)(v164) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = v165;
                                            LABEL_343:
                                                v166 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68)))))));
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = (sint32)(0u - (uint32)(341));
                                                shortAngles.h[0] = (sint32)(0u - (uint32)((sint16)v166));
                                                shortAngles.h[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69)))))));
                                                shortAngles.h[2] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)(280u)))))));
                                                sub_800EBE94(sf_draft_guest_address(&shortAngles.h[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                                                dataVectorH.w[0] = outputMatrix.h[0];
                                                dataVectorH.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                dataVectorH.w[2] = outputMatrix.h[6];
                                                dataVectorI.w[0] = outputMatrix.h[1];
                                                dataVectorI.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                dataVectorI.w[2] = outputMatrix.h[7];
                                                dataVectorJ.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                dataVectorJ.w[1] = outputMatrix.h[5];
                                                dataVectorJ.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                outputMatrix.h[0] = outputMatrix.h[1];
                                                outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                outputMatrix.h[6] = outputMatrix.h[7];
                                                outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                outputMatrix.h[4] = outputMatrix.h[5];
                                                outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                outputMatrix.h[2] = dataVectorH.w[0];
                                                outputMatrix.h[5] = dataVectorH.w[1];
                                                outputMatrix.h[8] = dataVectorH.w[2];

                                                sub_800DC0B8(v15, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                                dataVectorJ.w[0] = outputMatrix.h[2];
                                                dataVectorJ.w[1] = outputMatrix.h[5];
                                                dataVectorJ.w[2] = outputMatrix.h[8];
                                                dataVectorH.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                                dataVectorH.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                dataVectorH.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                                dataVectorI.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                                dataVectorI.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                dataVectorI.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                                outputMatrix.h[0] = outputMatrix.h[2];
                                                outputMatrix.h[3] = outputMatrix.h[5];
                                                outputMatrix.h[6] = outputMatrix.h[8];
                                                outputMatrix.h[1] = dataVectorH.w[0];
                                                outputMatrix.h[4] = dataVectorH.w[1];
                                                outputMatrix.h[7] = dataVectorH.w[2];
                                                outputMatrix.h[2] = dataVectorI.w[0];
                                                outputMatrix.h[5] = dataVectorI.w[1];
                                                outputMatrix.h[8] = dataVectorI.w[2];
                                                sub_800DB9C0(v15);
                                                rightMatrix.h[0] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)v15)));
                                                v167 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(2))))))));
                                                rightMatrix.h[1] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(2))))))));
                                                rightMatrix.h[2] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(4))))));
                                                v168 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(6))))))));
                                                rightMatrix.h[3] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(6))))))));
                                                rightMatrix.h[4] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(8))))));
                                                v169 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(10))))))));
                                                rightMatrix.h[5] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(10))))))));
                                                rightMatrix.h[6] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(12))))));
                                                v170 = (sint32)(0u - (uint32)(*((uint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(14))))))));
                                                rightMatrix.h[7] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(14))))))));
                                                rightMatrix.h[8] = *((_WORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(16))))));
                                                rightMatrix.w[5] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(20))))));
                                                rightMatrix.w[6] = (sint32)(0u - (uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(24))))))));
                                                v171 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(28))))));
                                                v172 = (sint32)(0u - (uint32)(rightMatrix.h[0]));
                                                v173 = (sint32)(0u - (uint32)(rightMatrix.h[6]));
                                                dataVectorI.w[0] = rightMatrix.h[2];
                                                dataVectorI.w[1] = (sint16)v169;
                                                dataVectorI.w[2] = rightMatrix.h[8];
                                                rightMatrix.w[7] = v171;
                                                dataVectorH.w[1] = (sint32)(0u - (uint32)(rightMatrix.h[4]));
                                                rightMatrix.h[5] = (sint32)(0u - (uint32)(rightMatrix.h[4]));
                                                dataVectorH.w[0] = (sint32)(0u - (uint32)((sint16)v167));
                                                dataVectorH.w[2] = (sint32)(0u - (uint32)((sint16)v170));
                                                rightMatrix.h[0] = rightMatrix.h[2];
                                                rightMatrix.h[3] = v169;
                                                rightMatrix.h[6] = rightMatrix.h[8];
                                                rightMatrix.h[1] = v172;
                                                rightMatrix.h[4] = (sint32)(0u - (uint32)((sint16)v168));
                                                rightMatrix.h[7] = v173;
                                                rightMatrix.h[2] = (sint32)(0u - (uint32)((sint16)v167));
                                                rightMatrix.h[8] = (sint32)(0u - (uint32)((sint16)v170));
                                                dataVectorG.w[0] = dataVectorH.w[0];
                                                dataVectorG.w[1] = dataVectorH.w[1];
                                                dataVectorG.w[2] = dataVectorH.w[2];
                                                rightAngles.w[1] = sub_800EC124(dataVectorH.w[0], dataVectorH.w[2]);
                                                sub_800E0B8C(sf_draft_guest_address(&dataVectorG.w[0]), sf_draft_guest_address(&rightAngles.w[0]));
                                                rightAngles.w[2] = 0;
                                                sub_800DB9C0(v429);
                                                position.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v429) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)5)))))));
                                                position.w[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v429) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)6)))))));
                                                v174 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v429) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)7)))))));
                                                position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                                                position.w[2] = v174;
                                                relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                                                relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                                                relative.w[2] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))))) - (uint32)(v174));
                                                angleScratch.w[1] = sub_800EC124(relative.w[0], relative.w[2]);
                                                sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                                                angleScratch.w[2] = 0;
                                                v175 = (sint32)((uint32)(rightAngles.w[0]) - (uint32)(dataVectorA.w[0]));
                                                dataVectorI.w[0] = (sint32)((uint32)(rightAngles.w[0]) - (uint32)(dataVectorA.w[0]));
                                                if (((sint32)((uint32)(rightAngles.w[0]) - (uint32)(dataVectorA.w[0]))) < 2049)
                                                {
                                                    v176 = (sint32)((uint32)(v175) + (uint32)(4096));
                                                    if (v175 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_347;
                                                }
                                                else
                                                {
                                                    v176 = (sint32)((uint32)(v175) - (uint32)(4096));
                                                }
                                                dataVectorI.w[0] = v176;
                                            LABEL_347:
                                                v177 = (sint32)((uint32)(rightAngles.w[1]) - (uint32)(dataVectorA.w[1]));
                                                dataVectorI.w[1] = (sint32)((uint32)(rightAngles.w[1]) - (uint32)(dataVectorA.w[1]));
                                                if (((sint32)((uint32)(rightAngles.w[1]) - (uint32)(dataVectorA.w[1]))) < 2049)
                                                {
                                                    v178 = (sint32)((uint32)(v177) + (uint32)(4096));
                                                    if (v177 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_351;
                                                }
                                                else
                                                {
                                                    v178 = (sint32)((uint32)(v177) - (uint32)(4096));
                                                }
                                                dataVectorI.w[1] = v178;
                                            LABEL_351:
                                                v179 = (sint32)((uint32)(rightAngles.w[2]) - (uint32)(dataVectorA.w[2]));
                                                dataVectorI.w[2] = (sint32)((uint32)(rightAngles.w[2]) - (uint32)(dataVectorA.w[2]));
                                                if (((sint32)((uint32)(rightAngles.w[2]) - (uint32)(dataVectorA.w[2]))) < 2049)
                                                {
                                                    v180 = (sint32)((uint32)(v179) + (uint32)(4096));
                                                    if (v179 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_355;
                                                }
                                                else
                                                {
                                                    v180 = (sint32)((uint32)(v179) - (uint32)(4096));
                                                }
                                                dataVectorI.w[2] = v180;
                                            LABEL_355:
                                                dataVectorG.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72)))))))) - (uint32)(dataVectorA.w[0]));
                                                if (dataVectorG.w[0] < 2049)
                                                {
                                                    v181 = (sint32)((uint32)(dataVectorG.w[0]) + (uint32)(4096));
                                                    if (dataVectorG.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_359;
                                                }
                                                else
                                                {
                                                    v181 = (sint32)((uint32)(dataVectorG.w[0]) - (uint32)(4096));
                                                }
                                                dataVectorG.w[0] = v181;
                                            LABEL_359:
                                                dataVectorG.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73)))))))) - (uint32)(dataVectorA.w[1]));
                                                if (dataVectorG.w[1] < 2049)
                                                {
                                                    v182 = (sint32)((uint32)(dataVectorG.w[1]) + (uint32)(4096));
                                                    if (dataVectorG.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_363;
                                                }
                                                else
                                                {
                                                    v182 = (sint32)((uint32)(dataVectorG.w[1]) - (uint32)(4096));
                                                }
                                                dataVectorG.w[1] = v182;
                                            LABEL_363:
                                                dataVectorG.w[2] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)74)))))))) - (uint32)(dataVectorA.w[2]));
                                                if (dataVectorG.w[2] < 2049)
                                                {
                                                    v183 = (sint32)((uint32)(dataVectorG.w[2]) + (uint32)(4096));
                                                    if (dataVectorG.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_367;
                                                }
                                                else
                                                {
                                                    v183 = (sint32)((uint32)(dataVectorG.w[2]) - (uint32)(4096));
                                                }
                                                dataVectorG.w[2] = v183;
                                            LABEL_367:
                                                dataVectorG.w[0] = (sint32)((uint32)(dataVectorG.w[0]) - (uint32)(dataVectorI.w[0]));
                                                dataVectorG.w[1] = (sint32)((uint32)(dataVectorG.w[1]) - (uint32)(dataVectorI.w[1]));
                                                v184 = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(rightAngles.w[0]));
                                                dataVectorG.w[2] = (sint32)((uint32)(dataVectorG.w[2]) - (uint32)(dataVectorI.w[2]));
                                                dataVectorH.w[0] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(rightAngles.w[0]));
                                                if (((sint32)((uint32)(angleScratch.w[0]) - (uint32)(rightAngles.w[0]))) < 2049)
                                                {
                                                    v185 = (sint32)((uint32)(v184) + (uint32)(4096));
                                                    if (v184 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_371;
                                                }
                                                else
                                                {
                                                    v185 = (sint32)((uint32)(v184) - (uint32)(4096));
                                                }
                                                dataVectorH.w[0] = v185;
                                            LABEL_371:
                                                v186 = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(rightAngles.w[1]));
                                                dataVectorH.w[1] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(rightAngles.w[1]));
                                                if (((sint32)((uint32)(angleScratch.w[1]) - (uint32)(rightAngles.w[1]))) < 2049)
                                                {
                                                    v187 = (sint32)((uint32)(v186) + (uint32)(4096));
                                                    if (v186 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_375;
                                                }
                                                else
                                                {
                                                    v187 = (sint32)((uint32)(v186) - (uint32)(4096));
                                                }
                                                dataVectorH.w[1] = v187;
                                            LABEL_375:
                                                v188 = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(rightAngles.w[2]));
                                                dataVectorH.w[2] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(rightAngles.w[2]));
                                                if (((sint32)((uint32)(angleScratch.w[2]) - (uint32)(rightAngles.w[2]))) < 2049)
                                                {
                                                    v189 = (sint32)((uint32)(v188) + (uint32)(4096));
                                                    if (v188 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_379;
                                                }
                                                else
                                                {
                                                    v189 = (sint32)((uint32)(v188) - (uint32)(4096));
                                                }
                                                dataVectorH.w[2] = v189;
                                            LABEL_379:
                                                dataVectorJ.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(20))))));
                                                dataVectorJ.w[1] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(24))))));
                                                v190 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v15) + (uint32)(28))))));
                                                dataVectorJ.w[1] = (sint32)(0u - (uint32)(dataVectorJ.w[1]));
                                                dataVectorJ.w[2] = v190;
                                                sub_800E0364((sint32)((uint32)(a1) + (uint32)(24)), sf_draft_guest_address(&dataVectorJ.w[0]), sf_draft_guest_address(&distanceOut.w[0]));
                                                if (distanceOut.w[0] < 97)
                                                {
                                                    dataVectorH.w[0] = (sint32)(0u - (uint32)(v153));
                                                    dataVectorH.w[1] = (sint32)(0u - (uint32)(170));
                                                }
                                                if (v426)
                                                {
                                                    dataVectorG.w[0] = (sint32)((uint32)(dataVectorG.w[0]) - (uint32)(85));
                                                    dataVectorG.w[1] = (sint32)((uint32)(dataVectorG.w[1]) + (uint32)(26));
                                                }
                                                if (dataVectorG.w[0] >= ((sint32)(0u - (uint32)(1706))))
                                                {
                                                    if (dataVectorG.w[0] > 0)
                                                        dataVectorG.w[0] = 0;
                                                }
                                                else
                                                {
                                                    dataVectorG.w[0] = (sint32)(0u - (uint32)(1706));
                                                }
                                                if (dataVectorG.w[1] >= ((sint32)(0u - (uint32)(1024))))
                                                {
                                                    if (dataVectorG.w[1] > 0)
                                                        dataVectorG.w[1] = 0;
                                                }
                                                else
                                                {
                                                    dataVectorG.w[1] = (sint32)(0u - (uint32)(1024));
                                                }
                                                if (dataVectorH.w[0] >= ((sint32)(0u - (uint32)(1706))))
                                                {
                                                    if (dataVectorH.w[0] > 0)
                                                        dataVectorH.w[0] = 0;
                                                }
                                                else
                                                {
                                                    dataVectorH.w[0] = (sint32)(0u - (uint32)(1706));
                                                }
                                                if (dataVectorH.w[1] >= ((sint32)(0u - (uint32)(1024))))
                                                {
                                                    if (dataVectorH.w[1] > 0)
                                                        dataVectorH.w[1] = 0;
                                                }
                                                else
                                                {
                                                    dataVectorH.w[1] = (sint32)(0u - (uint32)(1024));
                                                }
                                                delta.w[2] = (sint32)((uint32)(dataVectorH.w[2]) - (uint32)(dataVectorG.w[2]));
                                                delta.w[0] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorH.w[0]) - (uint32)(dataVectorG.w[0]))))) / 16;
                                                delta.w[1] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorH.w[1]) - (uint32)(dataVectorG.w[1]))))) / 16;
                                                dataVectorG.w[1] = (sint32)((uint32)(dataVectorG.w[1]) + (uint32)(delta.w[1]));
                                                dataVectorG.w[0] = (sint32)((uint32)(dataVectorG.w[0]) + (uint32)(delta.w[0]));
                                                dataVectorG.w[2] = dataVectorH.w[2];
                                                v191 = (sint32)((uint32)(dataVectorG.w[0]) + (uint32)(rightAngles.w[0]));
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72))))))) = (sint32)((uint32)(dataVectorG.w[0]) + (uint32)(rightAngles.w[0]));
                                                if (v191 < 2049)
                                                {
                                                    v192 = (sint32)((uint32)(v191) + (uint32)(4096));
                                                    if (v191 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_403;
                                                }
                                                else
                                                {
                                                    v192 = (sint32)((uint32)(v191) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72))))))) = v192;
                                            LABEL_403:
                                                v193 = (sint32)((uint32)(dataVectorG.w[1]) + (uint32)(rightAngles.w[1]));
                                                v111 = ((sint32)((uint32)(dataVectorG.w[1]) + (uint32)(rightAngles.w[1]))) < 2049;
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73))))))) = (sint32)((uint32)(dataVectorG.w[1]) + (uint32)(rightAngles.w[1]));
                                                if (v111)
                                                {
                                                    v194 = (sint32)((uint32)(v193) + (uint32)(4096));
                                                    if (v193 >= ((sint32)(0u - (uint32)(2048))))
                                                        goto LABEL_407;
                                                }
                                                else
                                                {
                                                    v194 = (sint32)((uint32)(v193) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73))))))) = v194;
                                            LABEL_407:
                                                v195 = (sint32)((uint32)(dataVectorG.w[2]) + (uint32)(rightAngles.w[2]));
                                                v111 = ((sint32)((uint32)(dataVectorG.w[2]) + (uint32)(rightAngles.w[2]))) < 2049;
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)74))))))) = (sint32)((uint32)(dataVectorG.w[2]) + (uint32)(rightAngles.w[2]));
                                                if (v111)
                                                {
                                                    v196 = (sint32)((uint32)(v195) + (uint32)(4096));
                                                    if (v195 >= ((sint32)(0u - (uint32)(2048))))
                                                    {
                                                    LABEL_411:
                                                        v197 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72)))))));
                                                        *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)74))))))) = (sint32)(0u - (uint32)(682));
                                                        shortAngles.h[0] = (sint32)(0u - (uint32)((sint16)v197));
                                                        shortAngles.h[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73)))))));
                                                        shortAngles.h[2] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)(296u)))))));
                                                        sub_800EBE94(sf_draft_guest_address(&shortAngles.h[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                                                        dataVectorK.w[0] = outputMatrix.h[0];
                                                        dataVectorK.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                        dataVectorK.w[2] = outputMatrix.h[6];
                                                        dataVectorL.w[0] = outputMatrix.h[1];
                                                        dataVectorL.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        dataVectorL.w[2] = outputMatrix.h[7];
                                                        dataVectorM.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                        dataVectorM.w[1] = outputMatrix.h[5];
                                                        dataVectorM.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                        outputMatrix.h[0] = outputMatrix.h[1];
                                                        outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        outputMatrix.h[6] = outputMatrix.h[7];
                                                        outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                        outputMatrix.h[4] = outputMatrix.h[5];
                                                        outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                        outputMatrix.h[2] = dataVectorK.w[0];
                                                        outputMatrix.h[5] = dataVectorK.w[1];
                                                        outputMatrix.h[8] = dataVectorK.w[2];

                                                        sub_800DC0B8(v429, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                                        dataVectorM.w[0] = outputMatrix.h[2];
                                                        dataVectorM.w[1] = outputMatrix.h[5];
                                                        dataVectorM.w[2] = outputMatrix.h[8];
                                                        dataVectorK.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                                        dataVectorK.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                        dataVectorK.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                                        dataVectorL.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                                        dataVectorL.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        dataVectorL.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                                        outputMatrix.h[0] = outputMatrix.h[2];
                                                        outputMatrix.h[3] = outputMatrix.h[5];
                                                        outputMatrix.h[6] = outputMatrix.h[8];
                                                        outputMatrix.h[1] = dataVectorK.w[0];
                                                        outputMatrix.h[4] = dataVectorK.w[1];
                                                        outputMatrix.h[7] = dataVectorK.w[2];
                                                        outputMatrix.h[2] = dataVectorL.w[0];
                                                        outputMatrix.h[5] = dataVectorL.w[1];
                                                        outputMatrix.h[8] = dataVectorL.w[2];
                                                        sub_800DB9C0(v430);
                                                        v198 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)73)))))));
                                                        v199 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)75)))))));
                                                        dataVectorJ.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)72)))))));
                                                        dataVectorJ.w[1] = v198;
                                                        dataVectorJ.w[3] = v199;
                                                        dataVectorJ.w[2] = (sint32)(0u - (uint32)(1024));
                                                        shortAngles.h[2] = 1024;
                                                        shortAngles.h[0] = (sint32)(0u - (uint32)((sint16)dataVectorJ.w[0]));
                                                        shortAngles.h[1] = v198;
                                                        sub_800EBE94(sf_draft_guest_address(&shortAngles.h[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                                                        dataVectorK.w[0] = outputMatrix.h[0];
                                                        dataVectorK.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                        dataVectorK.w[2] = outputMatrix.h[6];
                                                        dataVectorL.w[0] = outputMatrix.h[1];
                                                        dataVectorL.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        dataVectorL.w[2] = outputMatrix.h[7];
                                                        dataVectorM.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                        dataVectorM.w[1] = outputMatrix.h[5];
                                                        dataVectorM.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                        outputMatrix.h[0] = outputMatrix.h[1];
                                                        outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        outputMatrix.h[6] = outputMatrix.h[7];
                                                        outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                                        outputMatrix.h[4] = outputMatrix.h[5];
                                                        outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                                        outputMatrix.h[2] = dataVectorK.w[0];
                                                        outputMatrix.h[5] = dataVectorK.w[1];
                                                        outputMatrix.h[8] = dataVectorK.w[2];

                                                        sub_800DC0B8(v430, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                                        v200 = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                                        v201 = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                                        v202 = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                                        dataVectorM.w[0] = outputMatrix.h[2];
                                                        dataVectorM.w[1] = outputMatrix.h[5];
                                                        dataVectorM.w[2] = outputMatrix.h[8];
                                                        dataVectorK.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                                        dataVectorK.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                                        dataVectorK.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                                        dataVectorL.w[0] = v200;
                                                        dataVectorL.w[1] = v201;
                                                        dataVectorL.w[2] = v202;
                                                        outputMatrix.h[0] = outputMatrix.h[2];
                                                        outputMatrix.h[3] = outputMatrix.h[5];
                                                        outputMatrix.h[6] = outputMatrix.h[8];
                                                        outputMatrix.h[1] = dataVectorK.w[0];
                                                        outputMatrix.h[4] = dataVectorK.w[1];
                                                        outputMatrix.h[7] = dataVectorK.w[2];
                                                    LABEL_481:
                                                        outputMatrix.h[2] = v200;
                                                        outputMatrix.h[5] = v201;
                                                        outputMatrix.h[8] = v202;
                                                        goto LABEL_483;
                                                    }
                                                }
                                                else
                                                {
                                                    v196 = (sint32)((uint32)(v195) - (uint32)(4096));
                                                }
                                                *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)74))))))) = v196;
                                                goto LABEL_411;
                                            }
                                            if (v432)
                                                v153 = 227;
                                        }
                                        v154 = dataVectorF.w[0];
                                        goto LABEL_311;
                                    }
                                    if (v424 != 2)
                                    {
                                        rotationVector.w[0] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(88))))))));
                                        rotationVector.w[1] = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(90))))));
                                        rotationVector.w[2] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(92))))))));
                                        sub_800DBF98(v15, sf_draft_guest_address(&rotationVector.w[0]));
                                        rotationVector.w[0] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(72))))))));
                                        rotationVector.w[1] = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(74))))));
                                        rotationVector.w[2] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(76))))))));
                                        sub_800DBF98(v429, sf_draft_guest_address(&rotationVector.w[0]));
                                        rotationVector.w[0] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(64))))))));
                                        rotationVector.w[1] = *((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(66))))));
                                        rotationVector.w[2] = (sint32)(0u - (uint32)(*((sint16 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(36))))))) + (uint32)(68))))))));
                                        sub_800DBF98(v430, sf_draft_guest_address(&rotationVector.w[0]));
                                        goto LABEL_483;
                                    }
                                    v203 = v430;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)51))))))) = r_u32(0x801169A4u);
                                    sub_800DB9C0(v203);
                                    position.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)5)))))));
                                    position.w[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)6)))))));
                                    v204 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)7)))))));
                                    position.w[1] = (sint32)(0u - (uint32)(position.w[1]));
                                    position.w[2] = v204;
                                    relative.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)v5))) - (uint32)(position.w[0]));
                                    relative.w[1] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(28))))))) - (uint32)(position.w[1]));
                                    relative.w[2] = (sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(32))))))) - (uint32)(v204));
                                    angleScratch.w[1] = sub_800EC124(relative.w[0], relative.w[2]);
                                    sub_800E0B8C(sf_draft_guest_address(&relative.w[0]), sf_draft_guest_address(&angleScratch.w[0]));
                                    angleScratch.w[2] = 0;
                                    dataVectorL.w[0] = (sint32)((uint32)(baseAngles.w[0]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)52)))))))));
                                    if (dataVectorL.w[0] < 2049)
                                    {
                                        v205 = (sint32)((uint32)(dataVectorL.w[0]) + (uint32)(4096));
                                        if (dataVectorL.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_417;
                                    }
                                    else
                                    {
                                        v205 = (sint32)((uint32)(dataVectorL.w[0]) - (uint32)(4096));
                                    }
                                    dataVectorL.w[0] = v205;
                                LABEL_417:
                                    dataVectorL.w[1] = (sint32)((uint32)(baseAngles.w[1]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)53)))))))));
                                    if (dataVectorL.w[1] < 2049)
                                    {
                                        v206 = (sint32)((uint32)(dataVectorL.w[1]) + (uint32)(4096));
                                        if (dataVectorL.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_421;
                                    }
                                    else
                                    {
                                        v206 = (sint32)((uint32)(dataVectorL.w[1]) - (uint32)(4096));
                                    }
                                    dataVectorL.w[1] = v206;
                                LABEL_421:
                                    dataVectorL.w[2] = (sint32)((uint32)(baseAngles.w[2]) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)54)))))))));
                                    if (dataVectorL.w[2] < 2049)
                                    {
                                        v207 = (sint32)((uint32)(dataVectorL.w[2]) + (uint32)(4096));
                                        if (dataVectorL.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_425;
                                    }
                                    else
                                    {
                                        v207 = (sint32)((uint32)(dataVectorL.w[2]) - (uint32)(4096));
                                    }
                                    dataVectorL.w[2] = v207;
                                LABEL_425:
                                    dataVectorA.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)52)))))))));
                                    if (dataVectorA.w[0] < 2049)
                                    {
                                        v208 = (sint32)((uint32)(dataVectorA.w[0]) + (uint32)(4096));
                                        if (dataVectorA.w[0] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_429;
                                    }
                                    else
                                    {
                                        v208 = (sint32)((uint32)(dataVectorA.w[0]) - (uint32)(4096));
                                    }
                                    dataVectorA.w[0] = v208;
                                LABEL_429:
                                    dataVectorA.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)53)))))))));
                                    if (dataVectorA.w[1] < 2049)
                                    {
                                        v209 = (sint32)((uint32)(dataVectorA.w[1]) + (uint32)(4096));
                                        if (dataVectorA.w[1] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_433;
                                    }
                                    else
                                    {
                                        v209 = (sint32)((uint32)(dataVectorA.w[1]) - (uint32)(4096));
                                    }
                                    dataVectorA.w[1] = v209;
                                LABEL_433:
                                    dataVectorA.w[2] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70)))))))) - (uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)54)))))))));
                                    if (dataVectorA.w[2] < 2049)
                                    {
                                        v210 = (sint32)((uint32)(dataVectorA.w[2]) + (uint32)(4096));
                                        if (dataVectorA.w[2] >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_437;
                                    }
                                    else
                                    {
                                        v210 = (sint32)((uint32)(dataVectorA.w[2]) - (uint32)(4096));
                                    }
                                    dataVectorA.w[2] = v210;
                                LABEL_437:
                                    dataVectorA.w[0] = (sint32)((uint32)(dataVectorA.w[0]) - (uint32)(dataVectorL.w[0]));
                                    dataVectorA.w[1] = (sint32)((uint32)(dataVectorA.w[1]) - (uint32)(dataVectorL.w[1]));
                                    v211 = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                                    dataVectorA.w[2] = (sint32)((uint32)(dataVectorA.w[2]) - (uint32)(dataVectorL.w[2]));
                                    dataVectorK.w[0] = (sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]));
                                    if (((sint32)((uint32)(angleScratch.w[0]) - (uint32)(baseAngles.w[0]))) < 2049)
                                    {
                                        v212 = (sint32)((uint32)(v211) + (uint32)(4096));
                                        if (v211 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_441;
                                    }
                                    else
                                    {
                                        v212 = (sint32)((uint32)(v211) - (uint32)(4096));
                                    }
                                    dataVectorK.w[0] = v212;
                                LABEL_441:
                                    v213 = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                                    dataVectorK.w[1] = (sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]));
                                    if (((sint32)((uint32)(angleScratch.w[1]) - (uint32)(baseAngles.w[1]))) < 2049)
                                    {
                                        v214 = (sint32)((uint32)(v213) + (uint32)(4096));
                                        if (v213 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_445;
                                    }
                                    else
                                    {
                                        v214 = (sint32)((uint32)(v213) - (uint32)(4096));
                                    }
                                    dataVectorK.w[1] = v214;
                                LABEL_445:
                                    v215 = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                                    dataVectorK.w[2] = (sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]));
                                    if (((sint32)((uint32)(angleScratch.w[2]) - (uint32)(baseAngles.w[2]))) < 2049)
                                    {
                                        v216 = (sint32)((uint32)(v215) + (uint32)(4096));
                                        if (v215 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_449;
                                    }
                                    else
                                    {
                                        v216 = (sint32)((uint32)(v215) - (uint32)(4096));
                                    }
                                    dataVectorK.w[2] = v216;
                                LABEL_449:
                                    if (((dataVectorK.w[1] < 0) && ((v217 = (sint32)((uint32)(dataVectorK.w[1]) + (uint32)(4096)), initialVector.w[1] >= 114))) || ((dataVectorK.w[1] > 0) && ((v217 = (sint32)((uint32)(dataVectorK.w[1]) - (uint32)(4096)), initialVector.w[1] < ((sint32)(0u - (uint32)(113)))))))
                                        dataVectorK.w[1] = v217;
                                    v218 = (sint32)(0u - (uint32)(796));
                                    if ((dataVectorA.w[0] < ((sint32)(0u - (uint32)(796)))) || ((v218 = 796, dataVectorA.w[0] >= 797)))
                                        dataVectorA.w[0] = v218;
                                    v219 = (sint32)(0u - (uint32)(1024));
                                    if ((dataVectorA.w[1] < ((sint32)(0u - (uint32)(1024)))) || ((v219 = 1024, dataVectorA.w[1] >= 1025)))
                                        dataVectorA.w[1] = v219;
                                    v220 = (sint32)(0u - (uint32)(796));
                                    if ((dataVectorK.w[0] < ((sint32)(0u - (uint32)(796)))) || ((v220 = 796, dataVectorK.w[0] >= 797)))
                                        dataVectorK.w[0] = v220;
                                    v221 = (sint32)(0u - (uint32)(1024));
                                    if ((dataVectorK.w[1] < ((sint32)(0u - (uint32)(1024)))) || ((v221 = 1024, dataVectorK.w[1] >= 1025)))
                                        dataVectorK.w[1] = v221;
                                    delta.w[2] = (sint32)((uint32)(dataVectorK.w[2]) - (uint32)(dataVectorA.w[2]));
                                    delta.w[0] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorK.w[0]) - (uint32)(dataVectorA.w[0]))))) / 16;
                                    delta.w[1] = ((sint32)((uint32)(7) * (uint32)((sint32)((uint32)(dataVectorK.w[1]) - (uint32)(dataVectorA.w[1]))))) / 16;
                                    dataVectorA.w[1] = (sint32)((uint32)(dataVectorA.w[1]) + (uint32)(delta.w[1]));
                                    dataVectorA.w[0] = (sint32)((uint32)(dataVectorA.w[0]) + (uint32)(delta.w[0]));
                                    dataVectorA.w[2] = dataVectorK.w[2];
                                    v222 = (sint32)((uint32)(dataVectorA.w[0]) + (uint32)(baseAngles.w[0]));
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68))))))) = (sint32)((uint32)(dataVectorA.w[0]) + (uint32)(baseAngles.w[0]));
                                    if (v222 < 2049)
                                    {
                                        v223 = (sint32)((uint32)(v222) + (uint32)(4096));
                                        if (v222 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_470;
                                    }
                                    else
                                    {
                                        v223 = (sint32)((uint32)(v222) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68))))))) = v223;
                                LABEL_470:
                                    v224 = (sint32)((uint32)(dataVectorA.w[1]) + (uint32)(baseAngles.w[1]));
                                    v111 = ((sint32)((uint32)(dataVectorA.w[1]) + (uint32)(baseAngles.w[1]))) < 2049;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69))))))) = (sint32)((uint32)(dataVectorA.w[1]) + (uint32)(baseAngles.w[1]));
                                    if (v111)
                                    {
                                        v225 = (sint32)((uint32)(v224) + (uint32)(4096));
                                        if (v224 >= ((sint32)(0u - (uint32)(2048))))
                                            goto LABEL_474;
                                    }
                                    else
                                    {
                                        v225 = (sint32)((uint32)(v224) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69))))))) = v225;
                                LABEL_474:
                                    v226 = (sint32)((uint32)(dataVectorA.w[2]) + (uint32)(baseAngles.w[2]));
                                    v111 = ((sint32)((uint32)(dataVectorA.w[2]) + (uint32)(baseAngles.w[2]))) < 2049;
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = (sint32)((uint32)(dataVectorA.w[2]) + (uint32)(baseAngles.w[2]));
                                    if (v111)
                                    {
                                        v227 = (sint32)((uint32)(v226) + (uint32)(4096));
                                        if (v226 >= ((sint32)(0u - (uint32)(2048))))
                                        {
                                        LABEL_478:
                                            v228 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)68)))))));
                                            *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = (sint32)(0u - (uint32)(1024));
                                            shortAngles.h[0] = (sint32)(0u - (uint32)((sint16)v228));
                                            shortAngles.h[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)69)))))));
                                            shortAngles.h[2] = (sint32)(0u - (uint32)(*((_WORD *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)(280u)))))));
                                            sub_800EBE94(sf_draft_guest_address(&shortAngles.h[0]), sf_draft_guest_address(&outputMatrix.h[0]));
                                            dataVectorM.w[0] = outputMatrix.h[0];
                                            dataVectorM.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                            dataVectorM.w[2] = outputMatrix.h[6];
                                            dataVectorG.w[0] = outputMatrix.h[1];
                                            dataVectorG.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                            dataVectorG.w[2] = outputMatrix.h[7];
                                            dataVectorH.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            dataVectorH.w[1] = outputMatrix.h[5];
                                            dataVectorH.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[0] = outputMatrix.h[1];
                                            outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                            outputMatrix.h[6] = outputMatrix.h[7];
                                            outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            outputMatrix.h[4] = outputMatrix.h[5];
                                            outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[2] = dataVectorM.w[0];
                                            outputMatrix.h[5] = dataVectorM.w[1];
                                            outputMatrix.h[8] = dataVectorM.w[2];

                                            sub_800DC0B8(v430, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                            dataVectorH.w[0] = outputMatrix.h[2];
                                            dataVectorH.w[1] = outputMatrix.h[5];
                                            dataVectorH.w[2] = outputMatrix.h[8];
                                            dataVectorM.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                            dataVectorM.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                            dataVectorM.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                            dataVectorG.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                            dataVectorG.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                            dataVectorG.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                            outputMatrix.h[0] = outputMatrix.h[2];
                                            outputMatrix.h[3] = outputMatrix.h[5];
                                            outputMatrix.h[6] = outputMatrix.h[8];
                                            outputMatrix.h[1] = dataVectorM.w[0];
                                            outputMatrix.h[4] = dataVectorM.w[1];
                                            outputMatrix.h[7] = dataVectorM.w[2];
                                            outputMatrix.h[2] = dataVectorG.w[0];
                                            outputMatrix.h[5] = dataVectorG.w[1];
                                            outputMatrix.h[8] = dataVectorG.w[2];
                                            v229 = *((uint32 *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)2)))))))) + (uint32)(24))))))) + (uint32)(12))))));
                                            sub_800DB9C0(v229);
                                            dataVectorG.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v229) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)5)))))));
                                            dataVectorG.w[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v229) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)6)))))));
                                            v230 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v229) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)7)))))));
                                            dataVectorG.w[1] = (sint32)(0u - (uint32)(dataVectorG.w[1]));
                                            dataVectorG.w[2] = v230;
                                            dataVectorM.w[0] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)5)))))));
                                            dataVectorM.w[1] = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)6)))))));
                                            v231 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v430) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)7)))))));
                                            dataVectorM.w[1] = (sint32)(0u - (uint32)(dataVectorM.w[1]));
                                            dataVectorI.w[0] = outputMatrix.h[2];
                                            dataVectorI.w[1] = outputMatrix.h[5];
                                            dataVectorI.w[2] = outputMatrix.h[8];
                                            dataVectorM.w[2] = v231;
                                            dataVectorI.w[0] = sub_800C6D4C(outputMatrix.h[2], 38);
                                            dataVectorI.w[1] = sub_800C6D4C(dataVectorI.w[1], 38);
                                            dataVectorI.w[2] = sub_800C6D4C(dataVectorI.w[2], 38);
                                            dataVectorM.w[0] = (sint32)((uint32)(dataVectorM.w[0]) + (uint32)(dataVectorI.w[0]));
                                            dataVectorM.w[1] = (sint32)((uint32)(dataVectorM.w[1]) + (uint32)(dataVectorI.w[1]));
                                            dataVectorM.w[2] = (sint32)((uint32)(dataVectorM.w[2]) + (uint32)(dataVectorI.w[2]));
                                            sub_800E0364(sf_draft_guest_address(&dataVectorG.w[0]), sf_draft_guest_address(&dataVectorM.w[0]), sf_draft_guest_address(&nearDistance.w[0]));
                                            if (nearDistance.w[0] < 3)
                                            {
                                                dataVectorM.w[0] = (sint32)((uint32)(dataVectorM.w[0]) - (uint32)(dataVectorI.w[0]));
                                                dataVectorM.w[1] = (sint32)((uint32)(dataVectorM.w[1]) - (uint32)(dataVectorI.w[1]));
                                                dataVectorM.w[2] = (sint32)((uint32)(dataVectorM.w[2]) - (uint32)(dataVectorI.w[2]));
                                            }
                                            dataVectorH.w[0] = (sint32)((uint32)(dataVectorM.w[0]) - (uint32)(dataVectorG.w[0]));
                                            dataVectorH.w[1] = (sint32)((uint32)(dataVectorM.w[1]) - (uint32)(dataVectorG.w[1]));
                                            dataVectorH.w[2] = (sint32)((uint32)(dataVectorM.w[2]) - (uint32)(dataVectorG.w[2]));
                                            sub_800E1244(sf_draft_guest_address(&dataVectorH.w[0]), 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                            dataVectorN.w[0] = outputMatrix.h[1];
                                            dataVectorN.w[1] = outputMatrix.h[4];
                                            dataVectorN.w[2] = outputMatrix.h[7];
                                            dataVectorJ.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[0]));
                                            dataVectorJ.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[3]));
                                            dataVectorJ.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[6]));
                                            dataVectorO.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            dataVectorO.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                            dataVectorO.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[0] = outputMatrix.h[1];
                                            outputMatrix.h[3] = outputMatrix.h[4];
                                            outputMatrix.h[6] = outputMatrix.h[7];
                                            outputMatrix.h[1] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            outputMatrix.h[4] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                            outputMatrix.h[7] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[2] = dataVectorJ.w[0];
                                            outputMatrix.h[5] = dataVectorJ.w[1];
                                            outputMatrix.h[8] = dataVectorJ.w[2];

                                            sub_800DC0B8(v229, 0, sf_draft_guest_address(&outputMatrix.h[0]));
                                            v200 = (sint32)(0u - (uint32)(outputMatrix.h[1]));
                                            v201 = (sint32)(0u - (uint32)(outputMatrix.h[4]));
                                            v202 = (sint32)(0u - (uint32)(outputMatrix.h[7]));
                                            dataVectorJ.w[0] = outputMatrix.h[0];
                                            dataVectorJ.w[1] = outputMatrix.h[3];
                                            dataVectorJ.w[2] = outputMatrix.h[6];
                                            dataVectorN.w[0] = v200;
                                            dataVectorN.w[1] = v201;
                                            dataVectorN.w[2] = v202;
                                            dataVectorO.w[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            dataVectorO.w[1] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                            dataVectorO.w[2] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[0] = (sint32)(0u - (uint32)(outputMatrix.h[2]));
                                            outputMatrix.h[3] = (sint32)(0u - (uint32)(outputMatrix.h[5]));
                                            outputMatrix.h[6] = (sint32)(0u - (uint32)(outputMatrix.h[8]));
                                            outputMatrix.h[1] = dataVectorJ.w[0];
                                            outputMatrix.h[4] = dataVectorJ.w[1];
                                            outputMatrix.h[7] = dataVectorJ.w[2];
                                            goto LABEL_481;
                                        }
                                    }
                                    else
                                    {
                                        v227 = (sint32)((uint32)(v226) - (uint32)(4096));
                                    }
                                    *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)70))))))) = v227;
                                    goto LABEL_478;
                                }
                            }
                            else
                            {
                                v99 = (sint32)((uint32)(scratchMatrixA.w[2]) - (uint32)(4096));
                            }
                            scratchMatrixA.w[2] = v99;
                            goto LABEL_170;
                        }
                        basisVector.w[0] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)60)))))))) + (uint32)(cachedAngles.w[0]));
                        basisVector.w[1] = (sint32)((uint32)(*((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)61)))))))) + (uint32)(cachedAngles.w[1]));
                        v52 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v8) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)62)))))));
                        shortAngles.h[0] = (sint32)(0u - (uint32)((sint16)basisVector.w[0]));
                        shortAngles.h[1] = basisVector.w[1];
                        basisVector.w[2] = (sint32)((uint32)(v52) + (uint32)(cachedAngles.w[2]));
                        shortAngles.h[2] = (sint32)(0u - (uint32)((sint16)((sint32)((uint32)(v52) + (uint32)(cachedAngles.w[2])))));
                        sub_800EBE94(sf_draft_guest_address(&shortAngles.h[0]), sf_draft_guest_address(&scratchMatrixB.w[0]));
                        scratchMatrixA.w[5] = 0;
                        ((uint16 *)(&scratchMatrixB.w[0]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixB.w[0]))[1]));
                        v53 = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixB.w[2]))[1]));
                        ((uint16 *)(&scratchMatrixB.w[2]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixB.w[2]))[1]));
                        ((uint16 *)(&scratchMatrixB.w[1]))[1] = (sint32)(0u - (uint32)(((uint16 *)(&scratchMatrixB.w[1]))[1]));
                        scratchMatrixA.w[0] = (sint16)scratchMatrixB.w[1];
                        scratchMatrixB.h[7] = (sint32)(0u - (uint32)(scratchMatrixB.h[7]));
                        scratchMatrixA.w[1] = (sint16)v53;
                        scratchMatrixA.w[6] = (sint32)(0u - (uint32)((sint16)scratchMatrixB.w[1]));
                        scratchMatrixA.w[2] = (sint16)scratchMatrixB.w[4];
                        scratchMatrixA.w[4] = (sint16)scratchMatrixB.w[4];
                        v54 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(84))))));
                        v55 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(88))))));
                        v56 = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(92))))));
                        scratchVector.w[0] = *((_DWORD *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(a1) + (uint32)(80))))));
                        scratchVector.w[1] = v54;
                        scratchVector.w[2] = v55;
                        scratchVector.w[3] = v56;
                        v57 = (sint32)((uint32)((sint32)((uint32)((sint32)((uint32)(scratchVector.w[0]) * (uint32)((sint16)scratchMatrixB.w[1]))) + (uint32)((sint32)((uint32)(v54) * (uint32)(scratchMatrixA.w[1]))))) + (uint32)((sint32)((uint32)(v55) * (uint32)((sint16)scratchMatrixB.w[4]))));
                        pair.w[0] = v57;
                        if (v57 < 0)
                            v58 = (sint32)(0u - (uint32)(((sint32)(0u - (uint32)(v57))) >> 12));
                        else
                            v58 = v57 >> 12;
                        pair.w[0] = v58;
                        v59 = (sint32)((uint32)((sint32)((uint32)((sint32)((uint32)(scratchVector.w[0]) * (uint32)(scratchMatrixA.w[4]))) + (uint32)((sint32)((uint32)(scratchVector.w[1]) * (uint32)(scratchMatrixA.w[5]))))) + (uint32)((sint32)((uint32)(scratchVector.w[2]) * (uint32)(scratchMatrixA.w[6]))));
                        pair.w[1] = v59;
                        if (v59 < 0)
                            v60 = (sint32)(0u - (uint32)(((sint32)(0u - (uint32)(v59))) >> 12));
                        else
                            v60 = v59 >> 12;
                        v61 = *((uint32 *)sf_draft_guest_ptr((uint32)((sint32)((uint32)(v2) + (uint32)((sint32)((uint32)(4u) * (uint32)((uint32)4)))))));
                        pair.w[1] = v60;
                        if ((*((_BYTE *)sf_draft_guest_ptr((uint32)((uint32)((sint32)((uint32)(v61) + (uint32)(8))))))) == 8)
                        {
                            pair.w[1] = (sint32)(0u - (uint32)(v60));
                            pair.w[0] = (sint32)(0u - (uint32)(pair.w[0]));
                        }
                        if (pair.w[0] > 0)
                        {
                            axisVector.w[0] = (sint32)((uint32)(axisVector.w[0]) + (uint32)(113));
                            if (pair.w[1] <= 0)
                            {
                                v62 = (sint32)((uint32)(axisVector.w[1]) - (uint32)(113));
                                goto LABEL_87;
                            }
                        }
                        else
                        {
                            axisVector.w[0] = (sint32)((uint32)(axisVector.w[0]) - (uint32)(56));
                            if (pair.w[1] > 0)
                            {
                                v62 = (sint32)((uint32)(axisVector.w[1]) - (uint32)(113));
                            LABEL_87:
                                axisVector.w[1] = v62;
                                goto LABEL_88;
                            }
                        }
                        v62 = (sint32)((uint32)(axisVector.w[1]) + (uint32)(113));
                        goto LABEL_87;
                    }
                }
                else
                {
                    v41 = (sint32)((uint32)(v40) - (uint32)(4096));
                }
                transformedVector.w[2] = v41;
                goto LABEL_39;
            }
        }
    }
    return result;
}
