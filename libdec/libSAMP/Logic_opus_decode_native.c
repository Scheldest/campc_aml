// ADDR: 0x18f180
// SYMBOL: sub_18F180
int __fastcall sub_18F180(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r11
  int v8; // r5
  int v9; // r10
  int v10; // r8
  int v11; // r9
  __int64 v12; // kr00_8
  int v13; // lr
  int v14; // r5
  int v15; // r10
  int v16; // r6
  int v17; // r9
  int v18; // r2
  int v19; // r6
  int v20; // r12
  int v21; // r0
  bool v22; // zf
  int v23; // lr
  int v24; // r0
  char *v25; // r3
  _BOOL4 v26; // r0
  int v27; // r1
  int v28; // r4
  int v29; // r9
  int v30; // r3
  int v31; // r1
  int v32; // r4
  int v33; // r6
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r1
  char *v40; // r8
  char v41; // r5
  int v42; // r4
  int v43; // r0
  int v44; // r11
  int v45; // r0
  int v46; // r6
  int v47; // r5
  int v48; // r10
  _DWORD *v49; // r6
  int v50; // r0
  _DWORD *v51; // r10
  int v52; // r1
  int v53; // r3
  int v54; // r4
  int v55; // r8
  int v56; // r0
  int v57; // r1
  int v58; // r3
  unsigned int v59; // r2
  int v60; // r0
  int v61; // r4
  signed int v62; // r1
  bool v63; // cc
  char *v64; // r8
  int v65; // r0
  unsigned int v66; // r0
  char *v67; // r4
  int v68; // r0
  int v69; // r1
  int v70; // r5
  int v71; // r2
  int v72; // r5
  int v73; // r4
  int v75; // r0
  int v76; // r0
  int v77; // r0
  int v78; // r5
  int v79; // r2
  int v80; // r0
  int v81; // r1
  int v82; // r2
  int v83; // r0
  int i; // r1
  int v85; // r2
  int v86; // r3
  int v87; // r2
  int v88; // r6
  int v89; // r8
  _DWORD *v90; // r12
  int v91; // r3
  int v92; // r11
  bool v93; // cc
  int v94; // r1
  int v95; // r2
  int v96; // r5
  int v97; // r6
  int v98; // r0
  bool v99; // cc
  int v100; // r10
  int v101; // r0
  int v102; // r1
  int v103; // r2
  __int16 *v104; // r4
  int v105; // r5
  __int16 v106; // r0
  _DWORD *v107; // r2
  int v108; // r4
  int v109; // r1
  int v110; // r0
  bool v111; // cc
  int v112; // r11
  int v113; // r10
  __int16 *v114; // r2
  int v115; // r5
  char *v116; // r12
  __int16 v117; // r3
  int v118; // r0
  bool v119; // cc
  int v120; // lr
  int v121; // r3
  int v122; // r10
  int v123; // r6
  int v124; // r4
  __int16 *v125; // r5
  __int16 v126; // r8
  int v127; // r5
  int v128; // r3
  int v129; // r4
  char *v130; // r6
  int j; // r0
  int v132; // r0
  bool v133; // cc
  int v134; // r6
  int v135; // r10
  int v136; // r1
  int v137; // r11
  char *v138; // lr
  __int16 *v139; // r4
  int v140; // r5
  __int16 v141; // r0
  _DWORD *v142; // r12
  int v143; // lr
  int v144; // r0
  unsigned int v145; // r1
  int v146; // r0
  int v147; // r2
  int v148; // r0
  int v149; // r1
  int v150; // r0
  int v151; // r1
  int v152; // r2
  int k; // r3
  int v154; // r4
  unsigned int v155; // r0
  int v156; // r2
  int v157; // r3
  int v158; // [sp+10h] [bp-B8h] BYREF
  int v159; // [sp+14h] [bp-B4h]
  int v160; // [sp+18h] [bp-B0h]
  int v161; // [sp+1Ch] [bp-ACh]
  int v162; // [sp+20h] [bp-A8h]
  int v163; // [sp+24h] [bp-A4h]
  int v164; // [sp+28h] [bp-A0h]
  int v165; // [sp+2Ch] [bp-9Ch]
  int v166; // [sp+30h] [bp-98h]
  int v167; // [sp+34h] [bp-94h]
  int v168; // [sp+38h] [bp-90h]
  int v169; // [sp+3Ch] [bp-8Ch]
  int v170; // [sp+40h] [bp-88h]
  int v171; // [sp+44h] [bp-84h]
  char *v172; // [sp+48h] [bp-80h]
  int v173; // [sp+4Ch] [bp-7Ch]
  int v174; // [sp+50h] [bp-78h]
  int v175; // [sp+54h] [bp-74h]
  int v176; // [sp+58h] [bp-70h]
  _DWORD *v177; // [sp+5Ch] [bp-6Ch]
  int v178; // [sp+60h] [bp-68h]
  int v179; // [sp+64h] [bp-64h] BYREF
  int v180; // [sp+68h] [bp-60h] BYREF
  int v181; // [sp+6Ch] [bp-5Ch] BYREF
  char v182[4]; // [sp+70h] [bp-58h] BYREF
  int v183; // [sp+74h] [bp-54h]
  int v184; // [sp+84h] [bp-44h]
  unsigned int v185; // [sp+8Ch] [bp-3Ch]
  char v186; // [sp+A0h] [bp-28h] BYREF

  v6 = a1;
  v180 = 0;
  v8 = (unsigned __int64)(1374389535LL * (int)a1[3]) >> 32;
  v9 = a1[3] / 50;
  v10 = v9 >> 3;
  if ( v9 >> 3 > a5 )
    return -2;
  v178 = a4;
  v12 = *(_QWORD *)a1;
  v13 = v9 >> 1;
  v14 = 3 * ((v8 >> 3) + ((unsigned int)v8 >> 31));
  if ( v14 > a5 )
    v14 = a5;
  if ( a3 > 1 )
  {
    if ( !a2 )
    {
      v11 = v14;
      goto LABEL_24;
    }
    v169 = v9;
    v171 = HIDWORD(v12);
    v15 = v9 >> 2;
    v174 = v12;
    v175 = a1[13];
    v16 = a1[14];
    v17 = a1[16];
    v173 = a2;
    v177 = (_DWORD *)v13;
    j_ec_dec_init(v182, a2, a3);
    v18 = v16;
    v19 = v14 >= v13;
    v20 = v18 != 1002;
    v21 = v6[15];
    v176 = a3;
    v170 = v19 & v20;
    if ( v21 < 1 )
    {
      v28 = v17;
      v31 = 1;
      v19 &= v20;
      v11 = v14;
    }
    else
    {
      if ( v21 != 1002 )
      {
        v22 = v18 == 1002;
        if ( v18 == 1002 )
          v22 = v6[17] == 0;
        if ( v22 )
          goto LABEL_17;
      }
      if ( v18 == 1002 )
      {
        v28 = v17;
        v31 = 1;
        v19 = 0;
        v20 = 0;
        v18 = 1002;
        v11 = v14;
      }
      else
      {
        v20 = 1;
        if ( v21 == 1002 )
        {
LABEL_17:
          v23 = v6[2] * v15;
          v24 = 7;
          if ( v18 == 1002 )
            v24 = 2 * v23 + 7;
          v25 = (char *)&v158 - (v24 & 0xFFFFFFF8);
          v26 = 0;
          if ( v18 == 1002 )
          {
            v27 = v17;
            if ( v15 < v17 )
              v27 = v15;
            v28 = v17;
            v172 = v25;
            v29 = v20;
            sub_18F180(v6, 0, 0, v25, v27, 0);
            v20 = v29;
            v19 = v170;
            v18 = 1002;
            v26 = 1;
            v23 = 0;
            v30 = 1;
            v31 = 1;
            v11 = v14;
LABEL_50:
            v63 = v28 <= v11;
            v11 = v28;
            if ( !v63 )
              return -1;
            v166 = v18;
            v163 = v26 | v19;
            v164 = v10;
            v168 = v31;
            if ( v26 | v19 )
            {
              v38 = 0;
            }
            else
            {
              v39 = (int)v177;
              if ( (int)v177 <= v28 )
                v39 = v28;
              v38 = v6[2] * v39;
            }
            v40 = (char *)&v158 - ((2 * v38 + 7) & 0xFFFFFFF8);
            v41 = 0;
            v162 = v19;
            v167 = v15;
            v165 = (int)v40;
            if ( v20 != 1 )
            {
              v46 = 0;
              v168 = 0;
              v171 = 0;
              goto LABEL_104;
            }
            v159 = v23;
            v160 = v30;
            v161 = 1;
            v42 = (int)v6 + v171;
            if ( v19 )
              v40 = (char *)v178;
            if ( v6[15] == 1002 )
              j_silk_InitDecoder((char *)v6 + v171);
            v43 = sub_220A40(1000 * v11, v6[3]);
            if ( v43 <= 10 )
              v43 = 10;
            v6[8] = v43;
            v177 = v6;
            v44 = (int)(v6 + 4);
            if ( v168 == 1 )
            {
              v177[5] = v177[12];
              if ( v166 == 1000 )
              {
                if ( v175 == 1101 )
                {
                  v45 = 8000;
                }
                else
                {
                  v45 = 16000;
                  if ( v175 == 1102 )
                    v45 = 12000;
                }
              }
              else
              {
                v45 = 16000;
              }
              v177[7] = v45;
            }
            v47 = 0;
            v48 = 2 * a6;
            if ( !v173 )
              v48 = 1;
            if ( !v48 )
            {
              v51 = v177;
              while ( !j_silk_Decode(v42, v44, 0, v47 == 0, (int)v182, v40, (int)&v181, v51[11]) )
              {
                v47 += v181;
                v40 += 2 * v181 * v51[2];
                if ( v47 >= v11 )
                  goto LABEL_86;
              }
              return -3;
            }
            v49 = v177;
            do
            {
              if ( j_silk_Decode(v42, v44, v48, v47 == 0, (int)v182, v40, (int)&v181, v49[11]) )
              {
                v181 = v11;
                v50 = v49[2] * v11;
                if ( v50 >= 1 )
                  sub_22178C((int)v40, 2 * v50);
              }
              v47 += v181;
              v40 += 2 * v181 * v49[2];
            }
            while ( v47 < v11 );
LABEL_86:
            v46 = 0;
            if ( ((a6 == 0) & (unsigned __int8)v168) == 1 )
            {
              v6 = v177;
              v41 = 0;
              v52 = __clz(v185) + v184;
              v53 = v52 - 15;
              if ( v177[14] == 1001 )
                v53 = v52 + 5;
              v54 = v176;
              v63 = v53 <= 8 * v176;
              v20 = v161;
              v30 = v160;
              if ( !v63 )
              {
                v46 = 0;
                v168 = 0;
                v171 = 0;
                v23 = v159;
                goto LABEL_104;
              }
              if ( v166 != 1001 )
              {
                v55 = 1;
                v60 = j_ec_dec_bit_logp(v182, 1);
                v59 = v185;
                v57 = v184;
                v171 = v60;
                v58 = v54 - ((int)(__clz(v185) + v184 - 25) >> 3);
                goto LABEL_96;
              }
              v55 = j_ec_dec_bit_logp(v182, 12);
              if ( v55 )
              {
                v171 = j_ec_dec_bit_logp(v182, 1);
                v56 = j_ec_dec_uint(v182, 256);
                v57 = v184;
                v58 = v56 + 2;
                v59 = v185;
LABEL_96:
                v61 = v54 - v58;
                v62 = v57 + __clz(v59) - 32;
                v63 = 8 * v61 < v62;
                if ( 8 * v61 < v62 )
                  v58 = 0;
                v168 = v58;
                v183 -= v58;
                if ( 8 * v61 < v62 )
                  v61 = 0;
                v176 = v61;
                if ( v63 )
                  v55 = 0;
                v46 = v55;
                goto LABEL_103;
              }
              v46 = 0;
              v166 = 1001;
              v168 = 0;
              v171 = 0;
            }
            else
            {
              v6 = v177;
              v168 = 0;
              v171 = 0;
              v41 = 0;
            }
LABEL_103:
            v20 = v161;
            v30 = v160;
            v23 = v159;
LABEL_104:
            v64 = (char *)v6 + v174;
            v65 = 2 * v23 + 7;
            if ( v46 )
              v65 = 7;
            v66 = v65 & 0xFFFFFFF8;
            if ( !v46 )
              v41 = 1;
            v67 = (char *)&v158 - v66;
            v174 = (v30 != 0) & (unsigned __int8)v41;
            v68 = v174 & v20;
            if ( v20 )
              v20 = 17;
            if ( v68 == 1 )
            {
              v69 = v11;
              v70 = v20;
              if ( v167 < v11 )
                v69 = v167;
              sub_18F180(v6, 0, 0, v67, v69, 0);
              v20 = v70;
              v172 = v67;
            }
            v71 = 21;
            if ( v175 <= 1101 )
            {
              v73 = v176;
              v72 = v20;
              if ( !v175 )
              {
LABEL_124:
                if ( !j_opus_custom_decoder_ctl(v64, 10008, v6[12]) )
                {
                  if ( v46 )
                  {
                    v175 = (int)&v158 - ((2 * v6[2] * v167 + 7) & 0xFFFFFFF8);
                    if ( v171 )
                    {
                      if ( j_opus_custom_decoder_ctl(v64, 10010, 0) )
                        return -3;
                      v73 = v176;
                      j_celt_decode_with_ec(v64, v173 + v176, v168, v175, v167, 0, 0);
                      if ( j_opus_custom_decoder_ctl(v64, 4031, &v180) )
                        return -3;
                      v161 = 1;
                      v75 = 1;
                    }
                    else
                    {
                      v161 = 0;
                      v75 = 0;
                    }
                    v171 = v75;
                  }
                  else
                  {
                    v76 = v171;
                    if ( v171 )
                      v76 = 1;
                    v171 = v76;
                    v161 = 0;
                    v175 = (int)&v186;
                  }
                  if ( !j_opus_custom_decoder_ctl(v64, 10010, v72) )
                  {
                    if ( v166 == 1000 )
                    {
                      LOWORD(v179) = -1;
                      if ( !v162 )
                      {
                        v77 = v6[2] * v11;
                        if ( v77 >= 1 )
                          sub_22178C(v178, 2 * v77);
                      }
                      if ( v6[15] == 1001 && (v161 != 1 || !v6[17]) )
                      {
                        if ( j_opus_custom_decoder_ctl(v64, 10010, 0) )
                          return -3;
                        j_celt_decode_with_ec(v64, &v179, 2, v178, v164, 0, v170);
                      }
                      v78 = 0;
                    }
                    else
                    {
                      v79 = v169;
                      v80 = v6[15];
                      if ( v169 >= v11 )
                        v79 = v11;
                      v169 = v79;
                      if ( v166 != v80 && v80 >= 1 && !v6[17] && j_opus_custom_decoder_ctl(v64, 4028, v79) )
                        return -3;
                      v81 = v173;
                      if ( a6 )
                        v81 = 0;
                      v78 = j_celt_decode_with_ec(v64, v81, v73, v178, v169, v182, v170);
                    }
                    v82 = v178;
                    if ( !v163 )
                    {
                      v83 = v6[2] * v11;
                      if ( v83 >= 1 )
                      {
                        for ( i = 0; i < v83; ++i )
                        {
                          v85 = *(__int16 *)(v82 + 2 * i) + *(__int16 *)(v165 + 2 * i);
                          if ( v85 < 0x8000 )
                          {
                            if ( v85 <= -32768 )
                              LOWORD(v85) = 0x8000;
                          }
                          else
                          {
                            LOWORD(v85) = 0x7FFF;
                          }
                          v86 = v178;
                          *(_WORD *)(v178 + 2 * i) = v85;
                          v82 = v86;
                        }
                      }
                    }
                    if ( j_opus_custom_decoder_ctl(v64, 10015, &v179) )
                      return -3;
                    v170 = *(_DWORD *)(v179 + 52);
                    if ( v171 | (v46 == 0) )
                    {
LABEL_166:
                      v160 = v46;
                      v88 = v164;
                      v89 = v175;
                      v169 = v78;
                      v177 = v6;
                      if ( v161 == 1 )
                      {
                        v90 = v177;
                        v91 = v178;
                        v92 = v177[2];
                        v93 = v92 < 1;
                        if ( v92 >= 1 )
                          v93 = v164 < 1;
                        if ( !v93 )
                        {
                          v94 = 0;
                          v95 = v175;
                          do
                          {
                            v96 = v164;
                            v97 = 0;
                            do
                            {
                              --v96;
                              *(_WORD *)(v91 + v97) = *(_WORD *)(v95 + v97);
                              v97 += 2 * v92;
                            }
                            while ( v96 );
                            ++v94;
                            v95 += 2;
                            v91 += 2;
                          }
                          while ( v94 < v92 );
                        }
                        v98 = sub_220A40(48000, v90[3]);
                        v88 = v164;
                        v99 = v164 < 1;
                        if ( v164 >= 1 )
                          v99 = v92 < 1;
                        if ( !v99 )
                        {
                          v100 = 2 * v98;
                          v101 = 0;
                          v173 = v92;
                          v102 = v178 + 2 * v92 * v164;
                          v103 = v89 + 2 * v92 * v164;
                          do
                          {
                            v104 = (__int16 *)v170;
                            v105 = 0;
                            v175 = v101;
                            do
                            {
                              v106 = *v104;
                              v104 = (__int16 *)((char *)v104 + v100);
                              --v88;
                              *(_WORD *)(v102 + v105) = (unsigned int)((__int16)((unsigned int)(v106 * v106) >> 15)
                                                                     * *(__int16 *)(v102 + v105)
                                                                     + (__int16)(0x7FFF
                                                                               - ((unsigned int)(v106 * v106) >> 15))
                                                                     * *(__int16 *)(v103 + v105)) >> 15;
                              v105 += 2 * v92;
                            }
                            while ( v88 );
                            v102 += 2;
                            v103 += 2;
                            v88 = v164;
                            v101 = v175 + 1;
                          }
                          while ( v175 + 1 != v173 );
                        }
                      }
                      if ( v174 == 1 )
                      {
                        v107 = v177;
                        v108 = v88;
                        v109 = v177[2];
                        v175 = v109;
                        if ( v11 >= v167 )
                        {
                          v127 = v88;
                          v128 = v178;
                          v129 = v109 * v88;
                          v130 = v172;
                          if ( v129 >= 1 )
                          {
                            for ( j = 0; j < v129; ++j )
                              *(_WORD *)(v128 + 2 * j) = *(_WORD *)&v130[2 * j];
                          }
                          v132 = sub_220A40(48000, v107[3]);
                          v133 = v127 < 1;
                          v134 = v127;
                          if ( v127 >= 1 )
                            v133 = v175 < 1;
                          if ( !v133 )
                          {
                            v135 = 2 * v132;
                            v136 = v178 + 2 * v129;
                            v137 = 2 * v175;
                            v138 = &v172[2 * v129];
                            v174 = 0;
                            do
                            {
                              v139 = (__int16 *)v170;
                              v140 = 0;
                              do
                              {
                                v141 = *v139;
                                v139 = (__int16 *)((char *)v139 + v135);
                                --v134;
                                *(_WORD *)(v136 + v140) = (unsigned int)((__int16)((unsigned int)(v141 * v141) >> 15)
                                                                       * *(__int16 *)(v136 + v140)
                                                                       + (__int16)(0x7FFF
                                                                                 - ((unsigned int)(v141 * v141) >> 15))
                                                                       * *(__int16 *)&v138[v140]) >> 15;
                                v140 += v137;
                              }
                              while ( v134 );
                              v136 += 2;
                              v134 = v164;
                              v138 += 2;
                              ++v174;
                            }
                            while ( v174 != v175 );
                          }
                        }
                        else
                        {
                          v110 = sub_220A40(48000, v177[3]);
                          v111 = v88 < 1;
                          if ( v88 >= 1 )
                            v111 = v175 < 1;
                          if ( !v111 )
                          {
                            v112 = v178;
                            v113 = 2 * v175;
                            v174 = 0;
                            do
                            {
                              v114 = (__int16 *)v170;
                              v115 = 0;
                              v116 = v172;
                              do
                              {
                                v117 = *v114;
                                v114 += v110;
                                --v108;
                                *(_WORD *)(v112 + v115) = (unsigned int)((__int16)((unsigned int)(v117 * v117) >> 15)
                                                                       * *(__int16 *)(v112 + v115)
                                                                       + (__int16)(0x7FFF
                                                                                 - ((unsigned int)(v117 * v117) >> 15))
                                                                       * *(__int16 *)&v116[v115]) >> 15;
                                v115 += v113;
                              }
                              while ( v108 );
                              v112 += 2;
                              v108 = v164;
                              v172 = v116 + 2;
                              ++v174;
                            }
                            while ( v174 != v175 );
                          }
                        }
                      }
                      v142 = v177;
                      v143 = v178;
                      v144 = v177[10];
                      if ( v144 )
                      {
                        v145 = 21771 * (__int16)v144 + 0x4000;
                        v146 = (int)(2 * v145) >> 26;
                        if ( v146 <= 14 )
                        {
                          if ( v146 >= -15 )
                          {
                            v148 = -2 - v146;
                            v149 = (int)(((2
                                         * (__int16)((((2
                                                      * (__int16)((20408 * ((v145 >> 11) & 0x3FF0) + 971177984) >> 16)
                                                      * ((v145 >> 11) & 0x3FF0)) & 0x7FFF0000)
                                                    + 1494482944) >> 16)
                                         * ((v145 >> 11) & 0x3FF0)) & 0xFFFF0000)
                                       + 1073676288) >> 16;
                            v147 = v149 << -(char)v148;
                            if ( v148 > 0 )
                              v147 = v149 >> v148;
                          }
                          else
                          {
                            v147 = 0;
                          }
                        }
                        else
                        {
                          v147 = 2130706432;
                        }
                        v150 = v177[2] * v11;
                        if ( v150 >= 1 )
                        {
                          v151 = (unsigned __int16)v147;
                          v152 = v147 >> 16;
                          for ( k = 0; k < v150; ++k )
                          {
                            v154 = -32767;
                            if ( (__int16)v152 * *(__int16 *)(v143 + 2 * k)
                               + ((v151 * *(__int16 *)(v143 + 2 * k) + 0x8000) >> 16) > -32767 )
                              v154 = (__int16)v152 * *(__int16 *)(v143 + 2 * k)
                                   + ((v151 * *(__int16 *)(v143 + 2 * k) + 0x8000) >> 16);
                            if ( v154 >= 0x7FFF )
                              LOWORD(v154) = 0x7FFF;
                            *(_WORD *)(v143 + 2 * k) = v154;
                          }
                        }
                      }
                      if ( v176 >= 2 )
                        v155 = v185 ^ v180;
                      else
                        v155 = 0;
                      v156 = v160;
                      v22 = v160 == 0;
                      v157 = v169;
                      v142[15] = v166;
                      v142[19] = v155;
                      if ( !v22 )
                        v156 = 1;
                      v142[17] = (v171 ^ 1) & v156;
                      if ( v157 < 0 )
                        return v157;
                      return v11;
                    }
                    if ( !j_opus_custom_decoder_ctl(v64, 4028, v87) && !j_opus_custom_decoder_ctl(v64, 10010, 0) )
                    {
                      j_celt_decode_with_ec(v64, v173 + v176, v168, v175, v167, 0, 0);
                      if ( !j_opus_custom_decoder_ctl(v64, 4031, &v180) )
                      {
                        v173 = v6[2];
                        v118 = sub_220A40(48000, v6[3]);
                        v119 = v164 < 1;
                        if ( v164 >= 1 )
                          v119 = v173 < 1;
                        if ( !v119 )
                        {
                          v168 = 2 * v118;
                          v165 = 2 * v173;
                          v120 = 2 * v173;
                          v177 = 0;
                          v121 = v175 + 2 * v173 * v164;
                          v160 = v46;
                          v122 = v178 + 2 * (v11 - v164) * v173;
                          v169 = v78;
                          do
                          {
                            v123 = v164;
                            v124 = 0;
                            v125 = (__int16 *)v170;
                            do
                            {
                              v126 = *v125;
                              v125 += v118;
                              --v123;
                              *(_WORD *)(v122 + v124) = (unsigned int)((__int16)((unsigned int)(v126 * v126) >> 15)
                                                                     * *(__int16 *)(v121 + v124)
                                                                     + (__int16)(0x7FFF
                                                                               - ((unsigned int)(v126 * v126) >> 15))
                                                                     * *(__int16 *)(v122 + v124)) >> 15;
                              v124 += v120;
                            }
                            while ( v123 );
                            v121 += 2;
                            v46 = v160;
                            v122 += 2;
                            v78 = v169;
                            v177 = (_DWORD *)((char *)v177 + 1);
                          }
                          while ( v177 != (_DWORD *)v173 );
                        }
                        goto LABEL_166;
                      }
                    }
                  }
                }
                return -3;
              }
              if ( v175 == 1101 )
                v71 = 13;
            }
            else
            {
              v72 = v20;
              if ( (unsigned int)(v175 - 1102) >= 2 )
              {
                v73 = v176;
                if ( v175 == 1104 )
                  v71 = 19;
              }
              else
              {
                v71 = 17;
                v73 = v176;
              }
            }
            if ( j_opus_custom_decoder_ctl(v64, 10012, v71) )
              return -3;
            goto LABEL_124;
          }
          v28 = v17;
          v30 = 1;
          v31 = 1;
          v11 = v14;
          v19 = v170;
LABEL_49:
          v172 = 0;
          goto LABEL_50;
        }
        v28 = v17;
        v11 = v14;
        v31 = 1;
      }
    }
LABEL_48:
    v23 = 0;
    v26 = v18 == 1002;
    v30 = 0;
    goto LABEL_49;
  }
  v11 = a1[16];
  if ( v14 < v11 )
    v11 = v14;
LABEL_24:
  v18 = a1[15];
  if ( !v18 )
  {
    v36 = a1[2] * v11;
    if ( v36 >= 1 )
      sub_22178C(v178, 2 * v36);
    return v11;
  }
  if ( v11 <= v9 )
  {
    v176 = a3;
    v28 = v11;
    v171 = HIDWORD(v12);
    v174 = v12;
    v169 = v9;
    if ( v11 < v9 )
    {
      v28 = v9 >> 1;
      if ( v11 <= v13 )
      {
        v37 = v11;
        if ( v18 != 1000 )
          v37 = v9 >> 2;
        if ( v11 <= v9 >> 2 )
          v37 = v11;
        if ( v11 >= v13 )
          v37 = v11;
        v28 = v37;
      }
    }
    v15 = v9 >> 2;
    v175 = 0;
    v20 = v18 != 1002;
    v177 = (_DWORD *)v13;
    v31 = 0;
    v170 = (v11 >= v13) & (unsigned __int8)v20;
    v19 = v170;
    v173 = 0;
    goto LABEL_48;
  }
  v32 = v178;
  v33 = v11;
  while ( 1 )
  {
    v34 = v9;
    if ( v33 < v9 )
      v34 = v33;
    v35 = sub_18F180(v6, 0, 0, v32, v34, 0);
    if ( v35 < 0 )
      break;
    v33 -= v35;
    v32 += 2 * v35 * v6[2];
    if ( v33 <= 0 )
      return v11;
  }
  return v35;
}


// ======================================================================
