#include "game_draft.h"
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);
#include "game_draft.h"
/* TODO Resolve exact missing SDK declarations and adapters */

extern uint32 sub_800F27A4();

/* TODO Integrate guest pointer and missing SDK adapters before use */

// FUNCTION_MARKER 0x8006FED0u 0x8006fed0
/* TODO Unverified semantic draft; resolve SDK and guest object adapters */
/* Preserve negative coordinate truncation including the original INT_MIN case */
static sint32 sf_6fed0_coordinate_step(sint32 value)
{
    if (value >= 0)
        return value >> 12;
    return (sint32)(0u - (uint32)((sint32)(0u - (uint32)value) >> 12));
}

sint32 sub_8006FED0(sint32 a1)
{
    FUNCTION_MARKER(0x8006FED0u, "SCUS_942.40");
    sint32 entity_position[4];
    sint32 position_adjustment[4];
    sint32 route_start[4];
    sint32 route_end[4];
    sint32 contact_position[4];
    sint32 contact_normal[4];
    sint32 route_tangent[4];
    sint32 route_delta[4];
    sint32 cross_axis[4];
    uint32 destination;
    int result;
    uint32 v3;
    uint32 v4;
    int v5;
    int v6;
    int v7;
    uint32 v8;
    uint32 v9;
    int v10;
    int v11;
    int v12;
    int v13;
    uint32 v14;
    int v15;
    int v16;
    int v17;
    uint32 v18;
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
    uint32 v54;
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
    uint32 v65;
    int v66;
    int v67;
    int v68;
    int v69;
    int v70;
    int v71;
    int v72;
    int v73;
    uint32 v74;
    int v75;
    int v76;
    int v77;
    uint32 v78;
    int v79;
    int v80;
    int v81;
    int v82;
    int v83;
    uint32 v84;
    int v85;
    int v86;
    int v87;
    uint32 v88;
    int v89;
    int v90;
    int v91;
    int v92;
    int v93;
    uint32 v94;
    int v95;
    int v96;
    int v97;
    int v98;
    int v99;
    int v100;
    int v101;
    int v102;
    int v103;
    int v132;
    int v133;
    int v134;
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

    result = r_s32(0x800122B4u);
    position_adjustment[0] = result;
    position_adjustment[1] = r_s32(0x800122B8u);
    position_adjustment[2] = r_s32(0x800122BCu);
    position_adjustment[3] = r_s32(0x800122C0u);
    if (a1)
    {
        result = r_s32((uint32)a1 + 12u);
        if (result)
        {
            v3 = r_u32((uint32)result + 408u);
            v4 = (uint32)result;
            if (v3)
            {
                entity_position[0] = r_s32(v4);
                v5 = r_s32(v4 + 4u);
                v6 = r_s32(v4 + 8u);
                v7 = r_s32(v4 + 12u);
                entity_position[1] = v5;
                entity_position[2] = v6;
                entity_position[3] = v7;
                v9 = v3;
                v8 = (uint32)sub_80028C7C(r_s16((uint32)a1 + 2u));
                if (v8)
                {
                    position_adjustment[2] = (sint32)((uint32)position_adjustment[2] - ((uint32)(sint32)r_s8(v8 + 2u) << 12));
                    position_adjustment[0] = (sint32)((uint32)position_adjustment[0] - ((uint32)(sint32)r_s8(v8) << 12));
                    v10 = (sint32)((uint32)entity_position[1] - (uint32)(sint32)r_s8(v8 + 1u));
                }
                else
                {
                    route_delta[0] = r_s32(0x800122B4u);
                    route_delta[1] = r_s32(0x800122B8u);
                    route_delta[2] = r_s32(0x800122BCu);
                    route_delta[3] = r_s32(0x800122C0u);
                    cross_axis[0] = r_s32(v4 + 268u);
                    v11 = r_s32(v4 + 272u);
                    v12 = r_s32(v4 + 276u);
                    v13 = r_s32(v4 + 280u);
                    cross_axis[2] = v12;
                    cross_axis[3] = v13;
                    cross_axis[1] = (sint32)((uint32)v11 - 9u);
                    v10 = (sint32)((uint32)cross_axis[1] + (uint32)route_delta[1]);
                }
                entity_position[1] = v10;
                v14 = r_u32(v4 + 408u);
                route_start[0] = r_s32(v14 + 72u);
                v15 = r_s32(v14 + 76u);
                v16 = r_s32(v14 + 80u);
                v17 = r_s32(v14 + 84u);
                route_start[1] = v15;
                route_start[2] = v16;
                route_start[3] = v17;
                v18 = r_u32(v4 + 408u);
                route_end[0] = r_s32(v18 + 88u);
                v19 = r_s32(v18 + 92u);
                v20 = r_s32(v18 + 96u);
                v21 = r_s32(v18 + 100u);
                route_end[1] = v19;
                route_end[2] = v20;
                route_end[3] = v21;
                if (r_u8((v9 + 68)))
                {
                    route_delta[0] = (sint32)((uint32)route_end[0] - (uint32)route_start[0]);
                    route_delta[1] = (sint32)((uint32)route_end[1] - (uint32)route_start[1]);
                    route_delta[2] = (sint32)((uint32)route_end[2] - (uint32)route_start[2]);
                    if (route_end[0] == route_start[0] && (v22 = route_start[1], route_end[2] == route_start[2]))
                    {
                        contact_normal[1] = 4096;
                        contact_normal[0] = 0;
                        contact_normal[2] = 0;
                        contact_position[0] = route_start[0];
                        if (route_end[1] < route_start[1])
                            v22 = route_end[1];
                        contact_position[1] = v22;
                        contact_position[2] = route_start[2];
                        /* TODO Original vertical route has no fourth-word producer */
                        contact_position[3] = (sf_draft_unbound_stack_field(0x8006FED0u, 0x5Cu), 0);
                    }
                    else
                    {
                        cross_axis[1] = 0;
                        cross_axis[0] = route_delta[2];
                        cross_axis[2] = (sint32)(0u - (uint32)route_delta[0]);
                        sub_800EBAD0(sf_draft_guest_address(&route_delta[0]), sf_draft_guest_address(&cross_axis[0]), sf_draft_guest_address(&contact_normal[0]));
                        sub_800C720C(sf_draft_guest_address(&contact_normal[0]), sf_draft_guest_address(&contact_normal[0]));
                        sub_800E0364(sf_draft_guest_address(&route_start[0]), sf_draft_guest_address(&entity_position[0]), sf_draft_guest_address(&v143));
                        sub_800E0364(sf_draft_guest_address(&route_end[0]), sf_draft_guest_address(&entity_position[0]), sf_draft_guest_address(&v144));
                        if (v144 < v143)
                        {
                            contact_position[0] = route_end[0];
                            contact_position[1] = route_end[1];
                            contact_position[2] = route_end[2];
                            contact_position[3] = route_end[3];
                        }
                        else
                        {
                            contact_position[0] = route_start[0];
                            contact_position[1] = route_start[1];
                            contact_position[2] = route_start[2];
                            contact_position[3] = route_start[3];
                        }
                    }
                    route_tangent[1] = 0;
                    route_tangent[0] = route_delta[0];
                    route_tangent[2] = route_delta[2];
                    sub_800D9580(sf_draft_guest_address(&route_tangent[0]), sf_draft_guest_address(&v145));
                    if (v145)
                    {
                        route_tangent[0] = sub_800C6D90(route_tangent[0], v145);
                        route_tangent[2] = sub_800C6D90(route_tangent[2], v145);
                    }
                    else
                    {
                        route_tangent[0] = 0;
                        route_tangent[1] = 0;
                        route_tangent[2] = 0;
                    }
                    v145 = (sint32)((uint32)v145 << 12);
                    v23 = contact_position[1];
                    v24 = contact_position[2];
                    v25 = contact_position[3];
                    w_u32(v4 + 320u, (uint32)(contact_position[0]));
                    w_u32(v4 + 324u, (uint32)(v23));
                    w_u32(v4 + 328u, (uint32)(v24));
                    w_u32(v4 + 332u, (uint32)(v25));
                    v26 = contact_normal[1];
                    v27 = contact_normal[2];
                    v28 = (sf_draft_unbound_stack_field(0x8006FED0u, 0x6Cu), 0u);
                    w_u32(v4 + 336u, (uint32)(contact_normal[0]));
                    w_u32(v4 + 340u, (uint32)(v26));
                    w_u32(v4 + 344u, (uint32)(v27));
                    w_u32(v4 + 348u, (uint32)(v28));
                    w_u32((v9 + 104), (uint32)(v145));
                    v29 = route_tangent[1];
                    v30 = route_tangent[2];
                    v31 = (sf_draft_unbound_stack_field(0x8006FED0u, 0x7Cu), 0u);
                    w_u32((v9 + 108), (uint32)(route_tangent[0]));
                    w_u32((v9 + 112), (uint32)(v29));
                    w_u32((v9 + 116), (uint32)(v30));
                    w_u32((v9 + 120), (uint32)(v31));
                    w_u8((v9 + 68), (uint8)(0));
                    w_u8((v9 + 308), (uint8)(sub_8009498C(sf_draft_guest_address(&contact_normal[0]), v9 + 312)));
                }
                else
                {
                    contact_position[0] = r_s32(v4 + 320u);
                    v32 = r_s32(v4 + 324u);
                    v33 = r_s32(v4 + 328u);
                    v34 = r_s32(v4 + 332u);
                    contact_position[1] = v32;
                    contact_position[2] = v33;
                    contact_position[3] = v34;
                    contact_normal[0] = r_s32(v4 + 336u);
                    v35 = r_s32(v4 + 340u);
                    v36 = r_s32(v4 + 344u);
                    v37 = r_s32(v4 + 348u);
                    contact_normal[1] = v35;
                    contact_normal[2] = v36;
                    contact_normal[3] = v37;
                    v145 = r_u32((v9 + 104));
                    route_tangent[0] = r_u32((v9 + 108));
                    v38 = r_u32((v9 + 112));
                    v39 = r_u32((v9 + 116));
                    v40 = r_u32((v9 + 120));
                    route_tangent[1] = v38;
                    route_tangent[2] = v39;
                    route_tangent[3] = v40;
                }
                v41 = a1;
                if ((r_u32((r_u32(((uint32)a1 + 12)) + 404)) & 4) != 0)
                {
                    v146 = r_s32(0x800122B4u);
                    v147 = r_s32(0x800122B8u);
                    v148 = r_s32(0x800122BCu);
                    v149 = r_s32(0x800122C0u);
                    if ((r_u32((r_u32(((uint32)a1 + 12)) + 404)) & 0x100000) != 0)
                    {
                        position_adjustment[2] = (sint32)((uint32)position_adjustment[2] - r_u32(v9 + 172u));
                        position_adjustment[1] = (sint32)((uint32)position_adjustment[1] - r_u32(v9 + 176u));
                        v150 = r_s16((r_u32((r_u32(((uint32)a1 + 8)) + 12)) + 4));
                        v151 = r_s16((r_u32((r_u32(((uint32)a1 + 8)) + 12)) + 10));
                        v42 = r_s16((r_u32((r_u32(((uint32)a1 + 8)) + 12)) + 16));
                        v151 = (sint32)(0u - (uint32)v151);
                        v155 = 0;
                        v156 = (sint32)(0u - (uint32)v150);
                        v152 = v42;
                        v154 = v42;
                        if (position_adjustment[0])
                        {
                            v132 = sub_800C6D4C(v42, position_adjustment[0]);
                            v133 = sub_800C6D4C(v155, position_adjustment[0]);
                            v134 = sub_800C6D4C(v156, position_adjustment[0]);
                            v146 = (sint32)((uint32)v146 + (uint32)v132);
                            v147 = (sint32)((uint32)v147 + (uint32)v133);
                            v148 = (sint32)((uint32)v148 + (uint32)v134);
                        }
                        if (position_adjustment[2])
                        {
                            v132 = sub_800C6D4C(v150, position_adjustment[2]);
                            v133 = sub_800C6D4C(v151, position_adjustment[2]);
                            v134 = sub_800C6D4C(v152, position_adjustment[2]);
                            v146 = (sint32)((uint32)v146 + (uint32)v132);
                            v147 = (sint32)((uint32)v147 + (uint32)v133);
                            v148 = (sint32)((uint32)v148 + (uint32)v134);
                        }
                        v43 = sub_800C6D4C(v146, contact_normal[0]);
                        v44 = sub_800C6D4C(v147, contact_normal[1]);
                        v162 = (sint32)((uint32)v43 + (uint32)v44 + (uint32)sub_800C6D4C(v148, contact_normal[2]));
                        v158 = sub_800C6D4C(contact_normal[0], v162);
                        v159 = sub_800C6D4C(contact_normal[1], v162);
                        v160 = sub_800C6D4C(contact_normal[2], v162);
                        v146 = (sint32)((uint32)v146 - (uint32)v158);
                        v148 = (sint32)((uint32)v148 - (uint32)v160);
                        v147 = (sint32)((uint32)v147 - (uint32)v159 + (uint32)position_adjustment[1]);
                    }
                    v150 = r_s32(v4 + 96u);
                    v45 = r_s32(v4 + 100u);
                    v46 = r_s32(v4 + 104u);
                    v47 = r_s32(v4 + 108u);
                    v151 = v45;
                    v152 = v46;
                    v153 = v47;
                    v146 = (sint32)((uint32)v146 + (uint32)v150);
                    v147 = (sint32)((uint32)v147 + (uint32)v45);
                    v148 = (sint32)((uint32)v148 + (uint32)v46);
                    v154 = r_s32(v4 + 112u);
                    v48 = r_s32(v4 + 116u);
                    v49 = r_s32(v4 + 120u);
                    v50 = r_s32(v4 + 124u);
                    v155 = v48;
                    v156 = v49;
                    v157 = v50;
                    v146 = (sint32)((uint32)v146 + (uint32)v154);
                    v148 = (sint32)((uint32)v148 + (uint32)v49);
                    v147 = (sint32)((uint32)v147 + (uint32)v48);
                    v51 = sub_800C6D4C(v146, contact_normal[0]);
                    v52 = sub_800C6D4C(v147, contact_normal[1]);
                    v53 = (sint32)((uint32)v51 + (uint32)v52 + (uint32)sub_800C6D4C(v148, contact_normal[2]));
                    v163 = v53;
                    if (v53 < 0)
                    {
                        if (!r_u32((v9 + 176)))
                        {
                            if ((r_u32((r_u32(((uint32)a1 + 12)) + 404)) & 0x100000) != 0)
                            {
                                v150 = sub_800C6D4C(contact_normal[0], 52428);
                                v151 = sub_800C6D4C(contact_normal[1], 52428);
                                v152 = sub_800C6D4C(contact_normal[2], 52428);
                                v146 = (sint32)((uint32)v146 + (uint32)v150);
                                v147 = (sint32)((uint32)v147 + (uint32)v151);
                                v148 = (sint32)((uint32)v148 + (uint32)v152);
                            }
                            else
                            {
                                v146 = sub_800C6D4C(contact_normal[0], (sint32)((uint32)v53 + 52428u));
                                v147 = sub_800C6D4C(contact_normal[1], (sint32)((uint32)v163 + 52428u));
                                v148 = sub_800C6D4C(contact_normal[2], (sint32)((uint32)v163 + 52428u));
                            }
                        }
                        v146 = (sint32)(0u - (uint32)v146);
                        v147 = (sint32)(0u - (uint32)v147);
                        v148 = (sint32)(0u - (uint32)v148);
                        {
                            destination = (r_u32(((uint32)a1 + 12)) + 112);
                            w_u32(destination, r_u32(destination) + (uint32)(v146));
                        }
                        {
                            destination = (r_u32(((uint32)a1 + 12)) + 116);
                            w_u32(destination, r_u32(destination) + (uint32)(v147));
                        }
                        {
                            destination = (r_u32(((uint32)a1 + 12)) + 120);
                            w_u32(destination, r_u32(destination) + (uint32)(v148));
                        }
                    }
                    v41 = a1;
                }
                sub_800493F0(v41, 1, 0);
                sub_80049690(a1, 1, 0);
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 404);
                    w_u32(destination, r_u32(destination) & (uint32)(~0x100u));
                }
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 404);
                    w_u32(destination, r_u32(destination) & (uint32)(~4u));
                }
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 404);
                    w_u32(destination, r_u32(destination) & (uint32)(~0x100000u));
                }
                v154 = r_s32(0x800122B4u);
                v155 = r_s32(0x800122B8u);
                v156 = r_s32(0x800122BCu);
                v157 = r_s32(0x800122C0u);
                v54 = (r_u32(((uint32)a1 + 12)));
                v150 = r_s32(v54 + 80u);
                v55 = r_s32(v54 + 84u);
                v56 = r_s32(v54 + 88u);
                v57 = r_s32(v54 + 92u);
                v151 = v55;
                v152 = v56;
                v153 = v57;
                v132 = (sint32)((((uint32)entity_position[0] - (uint32)contact_position[0]) << 12) + (uint32)v150);
                v133 = (sint32)((((uint32)entity_position[1] - (uint32)contact_position[1]) << 12) + (uint32)v55);
                v134 = (sint32)((((uint32)entity_position[2] - (uint32)contact_position[2]) << 12) + (uint32)v56);
                v58 = sub_800C6D4C(v132, contact_normal[0]);
                v59 = sub_800C6D4C(v133, contact_normal[1]);
                v164 = (sint32)((uint32)v58 + (uint32)v59 + (uint32)sub_800C6D4C(v134, contact_normal[2]));
                if (v164 < 19649)
                {
                    v60 = sub_800C6D4C(v150, contact_normal[0]);
                    v62 = sub_800C6D4C(v151, contact_normal[1]);
                    v61 = sub_800C6D4C(v152, contact_normal[2]);
                    {
                        destination = (r_u32(((uint32)a1 + 12)) + 404);
                        w_u32(destination, r_u32(destination) | (uint32)(4u));
                    }
                    v165 = (sint32)(0u - ((uint32)v60 + (uint32)v62 + (uint32)v61));
                    if (contact_normal[1] >= 2896)
                    {
                        destination = (r_u32(((uint32)a1 + 12)) + 404);
                        w_u32(destination, r_u32(destination) | (uint32)(0x100000u));
                    }
                    v154 = sub_800C6D4C(contact_normal[0], (sint32)(0u - (uint32)v164));
                    v155 = sub_800C6D4C(contact_normal[1], (sint32)(0u - (uint32)v164));
                    v156 = sub_800C6D4C(contact_normal[2], (sint32)(0u - (uint32)v164));
                }
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 80);
                    w_u32(destination, r_u32(destination) + (uint32)(v154));
                }
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 84);
                    w_u32(destination, r_u32(destination) + (uint32)(v155));
                }
                v63 = v145;
                {
                    destination = (r_u32(((uint32)a1 + 12)) + 88);
                    w_u32(destination, r_u32(destination) + (uint32)(v156));
                }
                w_u32((v9 + 172), (uint32)(0));
                w_u32((v9 + 176), (uint32)(0));
                if (v63 || (v64 = a1, route_start[1] == route_end[1]))
                {
                    v158 = r_s32(0x800122B4u);
                    v159 = r_s32(0x800122B8u);
                    v160 = r_s32(0x800122BCu);
                    v161 = r_s32(0x800122C0u);
                    v65 = (r_u32(((uint32)a1 + 12)));
                    v166 = r_s32(v65 + 80u);
                    v66 = r_s32(v65 + 84u);
                    v67 = r_s32(v65 + 88u);
                    v68 = r_s32(v65 + 92u);
                    v167 = v66;
                    v168 = v67;
                    v169 = v68;
                    v69 = sf_6fed0_coordinate_step(v166);
                    v166 = v69;
                    v70 = sf_6fed0_coordinate_step(v167);
                    v167 = v70;
                    v71 = sf_6fed0_coordinate_step(v168);
                    v168 = v71;
                    v170 = (sint32)((uint32)entity_position[0] + (uint32)v166);
                    v172 = (sint32)((uint32)entity_position[2] + (uint32)v71);
                    v171 = (sint32)((uint32)entity_position[1] + (uint32)v167);
                    v174 = (sint32)((uint32)entity_position[1] + (uint32)v167 - (uint32)route_start[1]);
                    v175 = (sint32)((uint32)entity_position[2] + (uint32)v71 - (uint32)route_start[2]);
                    v173 = (sint32)((uint32)entity_position[0] + (uint32)v166 - (uint32)route_start[0]);
                    if (route_start[0] == route_end[0] && route_start[1] == route_end[1] && route_start[2] == route_end[2])
                    {
                        v158 = (sint32)(0u - ((uint32)v173 << 12));
                        v159 = 0;
                        v160 = (sint32)(0u - ((uint32)v175 << 12));
                    }
                    else
                    {
                        v72 = (sint32)((uint32)v173 * (uint32)route_tangent[0] + (uint32)v175 * (uint32)route_tangent[2]);
                        v179 = v72;
                        if (v72 >= -6)
                        {
                            v82 = (sint32)((uint32)v173 * (uint32)route_tangent[2]);
                            if ((sint32)((uint32)v145 + 6u) >= v72)
                            {
                                v176 = route_tangent[2];
                                v177 = 0;
                                v178 = (sint32)(0u - (uint32)route_tangent[0]);
                                v92 = (sint32)((uint32)v175 * (0u - (uint32)route_tangent[0]));
                                v93 = (sint32)((uint32)v82 + (uint32)v92);
                                if (v93 < 0)
                                    v93 = (sint32)(0u - (uint32)v93);
                                v180 = (sint32)((uint32)v82 + (uint32)v92);
                                if (v93 >= 26209)
                                {
                                    v158 = sub_800C6D4C(route_tangent[2], (sint32)(0u - ((uint32)v82 + (uint32)v92)));
                                    v159 = sub_800C6D4C(v177, (sint32)(0u - (uint32)v180));
                                    v160 = sub_800C6D4C(v178, (sint32)(0u - (uint32)v180));
                                }
                            }
                            else
                            {
                                v83 = (sint32)((uint32)route_end[1] - (uint32)v171);
                                v158 = (sint32)(((uint32)route_end[0] - (uint32)v170) << 12);
                                if (v83 < 0)
                                    v83 = 0;
                                v159 = (sint32)((uint32)v83 << 12);
                                v160 = (sint32)(((uint32)route_end[2] - (uint32)v172) << 12);
                                if (contact_normal[1] < 2896 && route_start[1] >= route_end[1])
                                {
                                    w_u8((r_u32((r_u32(((uint32)a1 + 12)) + 408)) + 68), (uint8)(1));
                                    v84 = (r_u32((r_u32(((uint32)a1 + 12)) + 408)));
                                    v85 = route_end[1];
                                    v86 = route_end[2];
                                    v87 = route_end[3];
                                    w_u32(v84 + 72u, (uint32)(route_end[0]));
                                    w_u32(v84 + 76u, (uint32)(v85));
                                    w_u32(v84 + 80u, (uint32)(v86));
                                    w_u32(v84 + 84u, (uint32)(v87));
                                    v88 = (r_u32((r_u32(((uint32)a1 + 12)) + 408)));
                                    v89 = route_end[1];
                                    v90 = route_end[2];
                                    v91 = route_end[3];
                                    w_u32(v88 + 88u, (uint32)(route_end[0]));
                                    w_u32(v88 + 92u, (uint32)(v89));
                                    w_u32(v88 + 96u, (uint32)(v90));
                                    w_u32(v88 + 100u, (uint32)(v91));
                                }
                            }
                        }
                        else
                        {
                            v158 = (sint32)(0u - ((uint32)v173 << 12));
                            if (v174 > 0)
                                v73 = 0;
                            else
                                v73 = (sint32)(0u - ((uint32)v174 << 12));
                            v159 = v73;
                            v160 = (sint32)(0u - ((uint32)v175 << 12));
                            if (contact_normal[1] < 2896 && route_end[1] >= route_start[1])
                            {
                                w_u8((r_u32((r_u32(((uint32)a1 + 12)) + 408)) + 68), (uint8)(1));
                                v74 = (r_u32((r_u32(((uint32)a1 + 12)) + 408)));
                                v75 = route_start[1];
                                v76 = route_start[2];
                                v77 = route_start[3];
                                w_u32(v74 + 72u, (uint32)(route_start[0]));
                                w_u32(v74 + 76u, (uint32)(v75));
                                w_u32(v74 + 80u, (uint32)(v76));
                                w_u32(v74 + 84u, (uint32)(v77));
                                v78 = (r_u32((r_u32(((uint32)a1 + 12)) + 408)));
                                v79 = route_start[1];
                                v80 = route_start[2];
                                v81 = route_start[3];
                                w_u32(v78 + 88u, (uint32)(route_start[0]));
                                w_u32(v78 + 92u, (uint32)(v79));
                                w_u32(v78 + 96u, (uint32)(v80));
                                w_u32(v78 + 100u, (uint32)(v81));
                            }
                        }
                    }
                    {
                        destination = (r_u32(((uint32)a1 + 12)) + 80);
                        w_u32(destination, r_u32(destination) + (uint32)(v158));
                    }
                    {
                        destination = (r_u32(((uint32)a1 + 12)) + 84);
                        w_u32(destination, r_u32(destination) + (uint32)(v159));
                    }
                    {
                        destination = (r_u32(((uint32)a1 + 12)) + 88);
                        w_u32(destination, r_u32(destination) + (uint32)(v160));
                    }
                    v64 = a1;
                }
                sub_80048F3C(v64, 1, 0);
                v94 = (r_u32(((uint32)a1 + 12)));
                v166 = r_s32(v94);
                v95 = r_s32(v94 + 4u);
                v96 = r_s32(v94 + 8u);
                v97 = r_s32(v94 + 12u);
                v167 = v95;
                v168 = v96;
                v169 = v97;
                v170 = (sint32)((uint32)route_end[0] - (uint32)route_start[0]);
                v171 = (sint32)((uint32)route_end[1] - (uint32)route_start[1]);
                v172 = (sint32)((uint32)route_end[2] - (uint32)route_start[2]);
                if (route_end[0] == route_start[0] && (v98 = route_start[1], route_end[2] == route_start[2]))
                {
                    if (route_end[1] < route_start[1])
                        v98 = route_end[1];
                }
                else
                {
                    v99 = v170;
                    if (v170 < 0)
                        v99 = (sint32)(0u - (uint32)v170);
                    v100 = v172;
                    if (v172 < 0)
                        v100 = (sint32)(0u - (uint32)v172);
                    if (v100 >= v99)
                    {
                        v103 = (sint32)((uint32)v171 * ((uint32)v168 - (uint32)route_start[2]));
                        if (!v172)
                            _break(7u, 0);
                        if (v172 == -1 && v103 == 0x80000000)
                            _break(6u, 0);
                        v102 = v103 / v172;
                    }
                    else
                    {
                        v101 = (sint32)((uint32)v171 * ((uint32)v166 - (uint32)route_start[0]));
                        if (!v170)
                            _break(7u, 0);
                        if (v170 == -1 && v101 == 0x80000000)
                            _break(6u, 0);
                        v102 = v101 / v170;
                    }
                    v98 = (sint32)((uint32)route_start[1] + (uint32)v102);
                }
                w_u32((r_u32(((uint32)a1 + 12)) + 300), (uint32)(v98));
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
    if (a1 == -1)
    {
        uint32 row, column;
        for (column = 0u; column < 8u; ++column)
            w_u8(0x80116867u - column, 0u);
        for (row = 0u; row < 32u; ++row)
        {
            w_u8(0x8010DF8Cu + row, 0u);
            w_u8(0x8010DFACu + row, 0u);
            w_u8(0x8010DFCCu + row, 0u);
            w_u8(0x8010DFECu + row, 0u);
            w_u32(0x8010DF0Cu + 4u * row, 0u);
        }
        for (row = 0u; row < 832u; row += 52u)
        {
            w_u8(0x80121FE8u + row, 0u);
            w_u8(0x80121FE9u + row, 0u);
            for (column = 0u; column < 16u; ++column)
            {
                w_u8(0x80121FEAu + row + column, 0u);
                w_u8(0x80121FFAu + row + column, 0u);
                w_u8(0x8012200Au + row + column, 0u);
            }
            w_u8(0x8012201Au + row, 0u);
            w_u8(0x8012201Bu + row, 0u);
        }
    LABEL_10:
        *SF_DRAFT_PTR(_BYTE, (v3 + 1978)) = 0;
        return 0;
    }
    if (!SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2])
    {
        switch ((__int16)a3)
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5])
                    goto LABEL_96;
                sub_800F74BC(a1, (__int16)a2);
                return 0;
            case 4:
                result = 0;
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] == 1)
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                    goto LABEL_131;
                v42 = (sint32)((uint32)a3 << 16);
                v43 = SF_DRAFT_PTR(uint32, 0x80134238u)[5 * (__int16)a3 - 60];
                *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 1;
                v44 = 0;
                if (v43 > 0)
                {
                    do
                    {
                        if (!*SF_DRAFT_PTR(_WORD, (v3 + 1976)))
                            break;
                        v45 = 5 * ((v42 >> 16) - 12);
                        sub_800C4B1C(a1, (__int16)v5, r_u8(0x8013423Cu + 4u * (uint32)v45 + (uint32)v44));
                        ++v44;
                    } while (v44 < SF_DRAFT_PTR(sint32, 0x80134238u)[v45]);
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5])
                {
                LABEL_96:
                    result = 0;
                    if (v41 == 1)
                        SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[a2] = 0;
                    return result;
                }
                *SF_DRAFT_PTR(_WORD, (v3 + 1976)) = 0;
                sub_800F74BC(a1, (__int16)a2);
                sub_800C34C0(*SF_DRAFT_PTR(_WORD, (v46 + 1972)), *SF_DRAFT_PTR(_WORD, (v46 + 1974)), sf_draft_guest_address(&v71), sf_draft_guest_address((uint16 *)&v71 + 1), 1);
                sub_800F7AFC(a1, (sint32)r_u8(0x80116858u + (uint32)(sint32)v6) - 1, (__int16)v71, SHIWORD(v71));
                sub_800F594C(a1, (sint32)r_u8(0x80116858u + (uint32)(sint32)v6) - 1, 1, 0);
                if (!*SF_DRAFT_PTR(_BYTE, (v3 + 1978)))
                    return 0;
                v47 = 0;
                if (*SF_DRAFT_PTR(_BYTE, (v3 + 1978)))
                {
                    v48 = SF_DRAFT_PTR(char, 0x80116860u);
                    do
                    {
                        ++v47;
                        sub_800F7AFC(a1, (uint8)*v48, (__int16)v71, SHIWORD(v71));
                        sub_800F594C(a1, (uint8)*v48++, 1, 0);
                    } while (v47 < *SF_DRAFT_PTR(uint8, (v3 + 1978)));
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                    goto LABEL_131;
                SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3 - 48;
                v50 = (uint8)(a3 - 48);
                if (SF_DRAFT_PTR(uint8, 0x80121FE9u)[52 * v50])
                    v51 = (uint8)SF_DRAFT_PTR(uint8, 0x80116867u)[(uint8)SF_DRAFT_PTR(uint8, 0x80121FE9u)[52 * v50]];
                else
                    v51 = *SF_DRAFT_PTR(_DWORD, (v3 + 1968));
                v52 = 0;
                if (SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]])
                {
                    v53 = (__int16)a2;
                    v54 = SF_DRAFT_PTR(int, 0x8010DF0Cu + 4u * (uint32)(sint32)(sint16)a2);
                    v55 = (__int16)v5;
                    do
                    {
                        v56 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[v55];
                        if (r_u8(0x80121FFAu + 2u * (uint32)v56 + (uint32)v52) - 1 >= v51 || (v57 = v55, v51 >= r_u8(0x8012200Au + 2u * (uint32)v56 + (uint32)v52) + 1))
                        {
                            *v54 |= 1u << ((r_u8(0x80121FEAu + 52u * r_u8(0x8010DFECu + (uint32)v53) + (uint32)v52) - 1u) & 31u);
                        }
                        else
                        {
                            SF_DRAFT_PTR(uint32, 0x8010DF0Cu)[v57] &= ~(1u << ((r_u8(0x80121FEAu + 2u * (uint32)v56 + (uint32)v52) - 1u) & 31u));
                        }
                        ++v52;
                        v55 = (__int16)v5;
                    } while (v52 < (uint8)SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]]);
                }
                sub_800F27A4(a1, (sint16)v5, r_u32(0x8010DF0Cu + 4u * (uint32)(sint32)(sint16)v5));
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                {
                    result = 0;
                    if (v58 == 1)
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
                if (v28)
                    return 0;
                v64 = 0;
                if (v63)
                {
                    v65 = SF_DRAFT_PTR(char, 0x80116860u);
                    do
                    {
                        ++v64;
                        sub_800F7AFC(a1, (uint8)*v65, (__int16)v71, SHIWORD(v71));
                        sub_800F594C(a1, (uint8)*v65++, 1, 0);
                    } while (v64 < *SF_DRAFT_PTR(uint8, (v3 + 1978)));
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                    goto LABEL_131;
                v67 = (uint8)SF_DRAFT_PTR(uint8, 0x80116800u)[(__int16)a3];
                if (v67 >= 0x7E)
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
                if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                {
                LABEL_131:
                    v28 = v29 != v30;
                    result = 0;
                    if (!v28)
                        SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v26] = 0;
                }
                else
                {
                    v68 = (uint8)SF_DRAFT_PTR(uint8, 0x801167F8u)[(__int16)a3];
                    v28 = v68 == 0;
                    v69 = v68 - 1;
                    if (v28)
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
    switch (SF_DRAFT_PTR(uint8, 0x8010DFCCu)[(__int16)a2])
    {
        case 1:
            if (!SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] = a3;
                v31 = (sint32)((uint32)a2 << 16);
                goto LABEL_68;
            }
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1)
                goto LABEL_67;
            SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] = 0;
            v31 = (sint32)((uint32)a2 << 16);
            goto LABEL_68;
        case 2:
            v32 = (__int16)a2;
            if (!SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                v31 = (sint32)((uint32)a2 << 16);
                if ((uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] == (__int16)a3)
                    goto LABEL_68;
                goto LABEL_63;
            }
            v31 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1)
                goto LABEL_68;
            goto LABEL_66;
        case 3:
            v19 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2] = a3;
            }
            else
            {
                SF_DRAFT_PTR(uint8, 0x80121FE8u)[52 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]] = a3;
                v19 = (sint32)((uint32)a2 << 16);
            }
            v20 = v19 >> 16;
            SF_DRAFT_PTR(uint8, 0x8010DFACu)[v20] = 1;
            SF_DRAFT_PTR(uint8, 0x8010DFCCu)[v20] = 11;
            return 0;
        case 4:
            v22 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
                goto LABEL_29;
            v23 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] % 3u;
            if ((uint8)SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] % 3u)
            {
                if (v23 == 2)
                {
                    v24 = SF_DRAFT_PTR(__int16, 0x80121FFAu);
                    v25 = 26 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2];
                }
                else
                {
                    v22 = (sint32)((uint32)a2 << 16);
                    if (v23 != 1)
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
            v22 = (sint32)((uint32)a2 << 16);
        LABEL_29:
            v26 = v22 >> 16;
            v27 = SF_DRAFT_PTR(uint8, 0x8010DFACu)[v22 >> 16] - 1;
            SF_DRAFT_PTR(uint8, 0x8010DFACu)[v26] = v27;
            v28 = v27 != 0;
            result = 0;
            if (v28)
                return result;
            v29 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v26];
            v30 = 1;
            goto LABEL_131;
        case 8:
            v32 = (__int16)a2;
            if (!SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                v33 = *SF_DRAFT_PTR(_DWORD, (v3 + 1968));
                v34 = (__int16)a3;
                goto LABEL_62;
            }
            v31 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] == 1)
                goto LABEL_66;
            goto LABEL_68;
        case 9:
            v32 = (__int16)a2;
            if (!SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                v31 = (sint32)((uint32)a2 << 16);
                if (*SF_DRAFT_PTR(_DWORD, (v3 + 1968)) == (__int16)a3)
                    goto LABEL_68;
                goto LABEL_63;
            }
            v31 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1)
                goto LABEL_68;
            goto LABEL_66;
        case 10:
            v32 = (__int16)a2;
            if (!SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
            {
                v31 = (sint32)((uint32)a2 << 16);
                if ((__int16)a3 - 1 >= *SF_DRAFT_PTR(sint32, (v3 + 1968)))
                    goto LABEL_68;
                goto LABEL_63;
            }
            v31 = (sint32)((uint32)a2 << 16);
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2] != 1)
                goto LABEL_68;
            goto LABEL_66;
        case 11:
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2])
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
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5])
                goto LABEL_64;
            if (SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)v5] == 2)
                goto LABEL_60;
            v31 = (sint32)((uint32)v5 << 16);
            if ((__int16)a3 - 1 < (uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]])
                goto LABEL_63;
            goto LABEL_68;
        case 13:
            v32 = (__int16)a2;
            v35 = (uint8)SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)a2];
            if (SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[(__int16)v5])
            {
            LABEL_64:
                if (SF_DRAFT_PTR(uint8, 0x8010DFACu)[v32] == 1)
                {
                    v31 = (sint32)((uint32)v5 << 16);
                    if (v35 != 1)
                        goto LABEL_68;
                LABEL_66:
                    SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v32] = 0;
                }
            }
            else
            {
                if (SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)v5] == 2)
                {
                LABEL_60:
                    SF_DRAFT_PTR(uint8, 0x8010DFECu)[v32] = a3 - 1;
                    v31 = (sint32)((uint32)v5 << 16);
                    goto LABEL_68;
                }
                v34 = (__int16)a3;
                v33 = (uint8)SF_DRAFT_PTR(uint8, 0x80116868u)[(uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)v5]];
            LABEL_62:
                if (v33 < v34 + 1)
                {
                LABEL_63:
                    SF_DRAFT_PTR(uint8, 0x8010DF8Cu)[v32] = 1;
                    v31 = (sint32)((uint32)v5 << 16);
                    goto LABEL_68;
                }
            }
        LABEL_67:
            v31 = (sint32)((uint32)v5 << 16);
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
            w_u8(0x8013423Bu + 20u * r_u8(0x8010DFECu + (uint32)(sint32)(sint16)a2) + r_u8(0x8010DFACu + (uint32)(sint32)(sint16)a2), (uint8)a3);
            v39 = SF_DRAFT_PTR(uint32, 0x80134238u)[5 * (uint8)SF_DRAFT_PTR(uint8, 0x8010DFECu)[(__int16)a2]];
            v40 = SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] + 1;
            SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = v40;
            v28 = v39 >= v40;
            result = 0;
            if (!v28)
                SF_DRAFT_PTR(uint8, 0x8010DFACu)[(__int16)a2] = 0;
            return result;
        default:
            return 0;
    }
    return result;
}
