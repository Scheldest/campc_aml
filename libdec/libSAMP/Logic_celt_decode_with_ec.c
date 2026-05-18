// ADDR: 0x198380
// SYMBOL: sub_198380
int __fastcall sub_198380(int *a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r9
  int v5; // r3
  __int64 v6; // kr00_8
  int v7; // r5
  int *v8; // r10
  bool v9; // zf
  int v10; // r0
  int v11; // r3
  int v12; // lr
  int v13; // r1
  unsigned int v14; // r0
  char *v15; // r0
  int v16; // r2
  int v17; // r8
  int v18; // r12
  int v19; // r11
  __int16 *v20; // r4
  int v21; // r1
  int v22; // r5
  int v23; // r8
  int v24; // r5
  int v25; // r9
  int v26; // r0
  int v27; // r4
  int v28; // r0
  int v29; // r1
  int v30; // r0
  int v31; // r11
  int v32; // r9
  int v33; // r10
  char *v34; // r8
  int v35; // r4
  size_t v36; // r5
  int v38; // r11
  int v39; // r9
  int v40; // r0
  int v41; // r5
  int v42; // r8
  size_t *v43; // r3
  int v44; // r0
  int *v45; // r8
  int v46; // r1
  char *v47; // r0
  int v48; // r1
  char *v49; // r0
  char *v50; // r9
  int v51; // r5
  int i; // r0
  int v53; // r2
  int v54; // r5
  __int16 *v55; // r11
  int v56; // r1
  int j; // r0
  int v58; // lr
  int v59; // r12
  int v60; // r4
  int v61; // r3
  int v62; // r5
  int v63; // r9
  int v64; // r1
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r1
  int v69; // r0
  int v70; // r1
  int v71; // r0
  int v72; // r1
  int v73; // r0
  int v74; // r1
  int v75; // r0
  int v76; // r1
  int v77; // r0
  int v78; // r1
  int v79; // r0
  int v80; // r1
  int v81; // r0
  int v82; // r1
  int v83; // r0
  int v84; // r1
  int v85; // r0
  int v86; // r1
  int v87; // r0
  int v88; // r1
  int v89; // r0
  int v90; // r1
  int v91; // r0
  int v92; // r1
  int v93; // r0
  int v94; // r1
  int v95; // r0
  int v96; // r2
  int v97; // r1
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  const void *v102; // r4
  void *v103; // r5
  __int16 v104; // r0
  int v105; // r1
  __int16 v106; // r2
  char *v107; // r12
  char *v108; // r4
  int v109; // r3
  signed int v110; // r1
  signed int v111; // r0
  unsigned int v112; // r0
  int v113; // r1
  int v114; // r3
  int v115; // r2
  __int16 v116; // r5
  __int16 v117; // r4
  __int16 v118; // r0
  int v119; // r1
  __int16 v120; // r2
  int v121; // r3
  signed int v122; // r1
  signed int v123; // r2
  int v124; // r0
  __int16 v125; // r9
  char *v126; // r5
  __int16 v127; // r12
  int v128; // r2
  int v129; // lr
  int v130; // r9
  char *v131; // r1
  unsigned int v132; // r3
  int v133; // r0
  int v134; // r5
  int v135; // r5
  char *v136; // r5
  int v137; // r0
  int v138; // r4
  int v139; // r2
  char *v140; // r0
  int *v141; // r1
  int v142; // r3
  int v143; // r1
  int v144; // r2
  int v145; // t1
  int v146; // r0
  __int16 v147; // r0
  int v148; // r3
  char *v149; // r1
  __int16 *v150; // r5
  __int16 v151; // t1
  __int16 v152; // r4
  int v153; // lr
  char *v154; // r11
  int v155; // r1
  int v156; // r2
  int v157; // r3
  int v158; // r0
  int v159; // r5
  int v160; // r0
  int v161; // r2
  int v162; // r1
  int v163; // r4
  int v164; // r9
  int v165; // r11
  int v166; // r10
  int v167; // r1
  int v168; // r0
  int v169; // r12
  int v170; // r5
  int v171; // [sp+Ch] [bp-99Ch]
  int v172; // [sp+24h] [bp-984h]
  size_t v173; // [sp+28h] [bp-980h] BYREF
  int v174; // [sp+2Ch] [bp-97Ch]
  int v175; // [sp+30h] [bp-978h]
  int v176; // [sp+34h] [bp-974h]
  int v177; // [sp+38h] [bp-970h]
  size_t v178; // [sp+3Ch] [bp-96Ch]
  size_t v179; // [sp+40h] [bp-968h]
  int v180; // [sp+44h] [bp-964h]
  int v181; // [sp+48h] [bp-960h]
  int v182; // [sp+4Ch] [bp-95Ch]
  int *v183; // [sp+50h] [bp-958h]
  char *v184; // [sp+54h] [bp-954h]
  char *v185; // [sp+58h] [bp-950h]
  int v186; // [sp+5Ch] [bp-94Ch]
  int v187; // [sp+60h] [bp-948h]
  int v188; // [sp+64h] [bp-944h]
  int v189; // [sp+68h] [bp-940h]
  int v190; // [sp+6Ch] [bp-93Ch]
  int v191; // [sp+70h] [bp-938h]
  int v192; // [sp+74h] [bp-934h]
  int v193; // [sp+78h] [bp-930h]
  int v194; // [sp+7Ch] [bp-92Ch]
  int v195; // [sp+80h] [bp-928h]
  int v196; // [sp+84h] [bp-924h]
  int v197; // [sp+88h] [bp-920h]
  int v198; // [sp+8Ch] [bp-91Ch]
  int v199; // [sp+90h] [bp-918h]
  int v200; // [sp+94h] [bp-914h]
  int v201; // [sp+98h] [bp-910h]
  int v202; // [sp+9Ch] [bp-90Ch]
  int v203; // [sp+A0h] [bp-908h]
  int v204; // [sp+A4h] [bp-904h]
  int v205; // [sp+A8h] [bp-900h]
  int v206; // [sp+ACh] [bp-8FCh]
  int v207; // [sp+B0h] [bp-8F8h]
  char *v208; // [sp+B4h] [bp-8F4h]
  char *v209; // [sp+B8h] [bp-8F0h]
  size_t *v210; // [sp+BCh] [bp-8ECh]
  int v211; // [sp+C0h] [bp-8E8h]
  int v212; // [sp+C4h] [bp-8E4h]
  int v213; // [sp+C8h] [bp-8E0h]
  int v214; // [sp+CCh] [bp-8DCh]
  __int16 *v215; // [sp+D0h] [bp-8D8h]
  int v216; // [sp+D4h] [bp-8D4h]
  int v217; // [sp+D8h] [bp-8D0h]
  int v218; // [sp+DCh] [bp-8CCh]
  int v219; // [sp+E0h] [bp-8C8h]
  int *v220; // [sp+E4h] [bp-8C4h]
  int v221; // [sp+E8h] [bp-8C0h]
  int v222; // [sp+ECh] [bp-8BCh]
  int v223; // [sp+F0h] [bp-8B8h]
  int v224; // [sp+F4h] [bp-8B4h]
  int v225; // [sp+F8h] [bp-8B0h]
  int v226; // [sp+FCh] [bp-8ACh]
  int v227; // [sp+100h] [bp-8A8h]
  int v228; // [sp+104h] [bp-8A4h]
  int v229; // [sp+108h] [bp-8A0h]
  int v230; // [sp+10Ch] [bp-89Ch]
  int v231; // [sp+110h] [bp-898h]
  int v232; // [sp+114h] [bp-894h]
  int v233; // [sp+118h] [bp-890h]
  int v234; // [sp+11Ch] [bp-88Ch]
  int v235; // [sp+120h] [bp-888h]
  int v236; // [sp+124h] [bp-884h]
  int v237; // [sp+128h] [bp-880h]
  int v238; // [sp+12Ch] [bp-87Ch]
  int v239; // [sp+130h] [bp-878h]
  int v240; // [sp+134h] [bp-874h]
  int v241; // [sp+138h] [bp-870h]
  int *v242; // [sp+13Ch] [bp-86Ch]
  int v243; // [sp+140h] [bp-868h]
  int v244; // [sp+144h] [bp-864h]
  int v245; // [sp+148h] [bp-860h]
  char *v246; // [sp+14Ch] [bp-85Ch]
  char *v247; // [sp+150h] [bp-858h]
  int v248; // [sp+154h] [bp-854h]
  int v249; // [sp+158h] [bp-850h]
  int v250; // [sp+15Ch] [bp-84Ch]
  int *v251; // [sp+160h] [bp-848h]
  char *v252; // [sp+164h] [bp-844h]
  int v253; // [sp+168h] [bp-840h]
  int v254; // [sp+16Ch] [bp-83Ch] BYREF
  _DWORD v255[2]; // [sp+170h] [bp-838h] BYREF
  _DWORD v256[2]; // [sp+178h] [bp-830h] BYREF
  int v257; // [sp+180h] [bp-828h] BYREF
  __int16 v258; // [sp+184h] [bp-824h]
  __int16 v259; // [sp+186h] [bp-822h]
  __int16 v260; // [sp+188h] [bp-820h]
  __int16 v261; // [sp+18Ah] [bp-81Eh]
  __int16 v262; // [sp+18Ch] [bp-81Ch]
  __int16 v263; // [sp+18Eh] [bp-81Ah]
  __int16 v264; // [sp+190h] [bp-818h]
  __int16 v265; // [sp+192h] [bp-816h]
  __int16 v266; // [sp+194h] [bp-814h]
  __int16 v267; // [sp+196h] [bp-812h]
  __int16 v268; // [sp+198h] [bp-810h]
  __int16 v269; // [sp+19Ah] [bp-80Eh]
  __int16 v270; // [sp+19Ch] [bp-80Ch]
  __int16 v271; // [sp+19Eh] [bp-80Ah]
  __int16 v272; // [sp+1A0h] [bp-808h]
  __int16 v273; // [sp+1A2h] [bp-806h]
  __int16 v274; // [sp+1A4h] [bp-804h]
  __int16 v275; // [sp+1A6h] [bp-802h]
  __int16 v276; // [sp+1A8h] [bp-800h]
  __int16 v277; // [sp+1AAh] [bp-7FEh]
  __int16 v278; // [sp+1ACh] [bp-7FCh]
  __int16 v279; // [sp+1AEh] [bp-7FAh]
  int v280; // [sp+450h] [bp-558h] BYREF

  v249 = a3;
  v3 = 0;
  v4 = *a1;
  v5 = a1[2];
  v6 = *(_QWORD *)(*a1 + 4);
  v247 = *(char **)(*a1 + 24);
  v221 = a2;
  v213 = -a2;
  v219 = v6;
  v251 = a1;
  do
  {
    v256[v3] = a1 + 22;
    v255[v3++] = (char *)a1 + 8280 - 4 * a2;
    a1 += v6 + 2048;
  }
  while ( v3 < v5 );
  v7 = v251[5];
  v214 = v251[13];
  v223 = v5;
  v8 = &v251[(v6 + 2048) * v5 + 22];
  if ( v214 <= 4 )
  {
    v9 = v7 == 0;
    if ( !v7 )
      v9 = v251[14] == 0;
    if ( v9 )
    {
      v38 = v4;
      if ( v214 )
      {
        v220 = v251 + 9;
        v39 = v251[12];
        v40 = 26214;
      }
      else
      {
        v41 = v251[9];
        j_pitch_downsample((int)v256, &v257, 2048, v5, v41);
        j_pitch_search(&v280, &v257, 1328, 620, &v254, v41);
        v39 = 720 - v254;
        v220 = v251 + 9;
        v40 = 0x7FFF;
        v251[12] = 720 - v254;
      }
      v175 = v40;
      v42 = 1024;
      if ( 2 * v39 < 1024 )
        v42 = 2 * v39;
      v211 = (int)&v173 - ((4 * v219 + 7) & 0xFFFFFFF8);
      v43 = &v173 - 524;
      v177 = ~v42;
      v208 = (char *)&v173 + 2 * ~v42 + 2;
      v174 = 2 * v219 - 2;
      v207 = 2025 - v221;
      v209 = (char *)&v173 - ((2 * v42 + 7) & 0xFFFFFFF8);
      v206 = 2026 - v221;
      v205 = 2027 - v221;
      v204 = 2028 - v221;
      v203 = 2029 - v221;
      v202 = 2030 - v221;
      v201 = 2031 - v221;
      v200 = 2033 - v221;
      v199 = 2034 - v221;
      v198 = 2035 - v221;
      v197 = 2036 - v221;
      v196 = 2037 - v221;
      v195 = 2038 - v221;
      v194 = 2039 - v221;
      v193 = 2041 - v221;
      v192 = 2042 - v221;
      v191 = 2043 - v221;
      v190 = 2044 - v221;
      v189 = 2045 - v221;
      v188 = 2046 - v221;
      v187 = 2047 - v221;
      v249 = 2048 - (v221 + v39);
      v248 = 1024 - v39;
      v246 = (char *)&v173 - v42;
      v185 = (char *)&v173 - 2 * v42;
      v250 = (int)(&v173 - 512);
      v215 = *(__int16 **)(v38 + 52);
      v182 = 2024 - v221;
      v181 = 2032 - v221;
      v180 = 2040 - v221;
      v217 = 2048 - v221;
      v173 = 4 * (v219 + v221);
      v179 = 4 * (2048 - v221);
      v176 = v42 >> 1;
      v44 = 2 * v42;
      v212 = v42;
      v45 = v8;
      v46 = 0;
      v178 = v44;
      v216 = v39;
      v210 = &v173;
      v218 = v219 + v221;
      v186 = v219 / 2;
      v183 = v8;
      v184 = (char *)&v173 + 2;
      while ( 1 )
      {
        v222 = v46;
        v47 = (char *)v256[v46];
        v48 = 0;
        v252 = v47;
        v49 = v47 + 4000;
        do
        {
          *((_WORD *)v43 + v48) = (unsigned int)(*(_DWORD *)&v49[4 * v48] + 2048) >> 12;
          ++v48;
        }
        while ( v48 != 1048 );
        v50 = v246;
        if ( !v214 )
        {
          j__celt_autocorr((void *)v250, (int)&v257, (int)v215, v219, 24, 1024, *v220);
          v51 = 0x20000;
          v257 += v257 >> 13;
          for ( i = 1; i != 25; ++i )
          {
            v53 = v51 * i;
            v51 += 0x20000;
            *(&v257 + i) = *(&v257 + i)
                         - (((unsigned __int16)*(&v257 + i) * (v53 >> 16)) >> 15)
                         - 2 * SHIWORD(v53) * (__int16)HIWORD(*(&v257 + i));
          }
          v54 = 3 * v222;
          v55 = (__int16 *)&v8[12 * v222];
          j__celt_lpc();
          v247 = (char *)(8 * v54 + 23);
          v245 = 8 * v54 + 22;
          v244 = 8 * v54 + 21;
          v243 = 8 * v54 + 20;
          v242 = (int *)(8 * v54 + 19);
          v241 = 8 * v54 + 18;
          v240 = 8 * v54 + 17;
          v239 = 8 * v54 + 16;
          v238 = 8 * v54 + 15;
          v237 = 8 * v54 + 14;
          v236 = 8 * v54 + 13;
          v235 = 8 * v54 + 12;
          v234 = 8 * v54 + 11;
          v233 = 8 * v54 + 10;
          v232 = 8 * v54 + 9;
          v231 = 8 * v54 + 8;
          v230 = (8 * v54) | 7;
          v229 = (8 * v54) | 6;
          v228 = (8 * v54) | 5;
          v227 = (8 * v54) | 4;
          v226 = (8 * v54) | 3;
          v225 = (8 * v54) | 2;
          v224 = (8 * v54) | 1;
          while ( 1 )
          {
            v58 = *((__int16 *)v8 + (_DWORD)v247);
            v59 = *((__int16 *)v8 + v245);
            v60 = *((__int16 *)v8 + v244);
            v61 = *((__int16 *)v8 + v243);
            v62 = *((__int16 *)v8 + (_DWORD)v242);
            v63 = *((__int16 *)v8 + v225);
            v64 = *((__int16 *)v8 + v224);
            if ( v64 < 0 )
              v64 = -v64;
            v65 = *v55;
            if ( v65 < 0 )
              v65 = -v65;
            v66 = v65 + v64;
            if ( v63 < 0 )
              v63 = -v63;
            v67 = v66 + v63;
            v68 = *((__int16 *)v8 + v226);
            if ( v68 < 0 )
              v68 = -v68;
            v50 = v246;
            v69 = v67 + v68;
            v70 = *((__int16 *)v8 + v227);
            if ( v70 < 0 )
              v70 = -v70;
            v71 = v69 + v70;
            v72 = *((__int16 *)v8 + v228);
            if ( v72 < 0 )
              v72 = -v72;
            v73 = v71 + v72;
            v74 = *((__int16 *)v8 + v229);
            if ( v74 < 0 )
              v74 = -v74;
            v75 = v73 + v74;
            v76 = *((__int16 *)v8 + v230);
            if ( v76 < 0 )
              v76 = -v76;
            v77 = v75 + v76;
            v78 = *((__int16 *)v8 + v231);
            if ( v78 < 0 )
              v78 = -v78;
            v79 = v77 + v78;
            v80 = *((__int16 *)v8 + v232);
            if ( v80 < 0 )
              v80 = -v80;
            v81 = v79 + v80;
            v82 = *((__int16 *)v8 + v233);
            if ( v82 < 0 )
              v82 = -v82;
            v83 = v81 + v82;
            v84 = *((__int16 *)v8 + v234);
            if ( v84 < 0 )
              v84 = -v84;
            v85 = v83 + v84;
            v86 = *((__int16 *)v8 + v235);
            if ( v86 < 0 )
              v86 = -v86;
            v87 = v85 + v86;
            v88 = *((__int16 *)v8 + v236);
            if ( v88 < 0 )
              v88 = -v88;
            v89 = v87 + v88;
            v90 = *((__int16 *)v8 + v237);
            if ( v90 < 0 )
              v90 = -v90;
            v91 = v89 + v90;
            v92 = *((__int16 *)v8 + v238);
            if ( v92 < 0 )
              v92 = -v92;
            v93 = v91 + v92;
            v94 = *((__int16 *)v8 + v239);
            if ( v94 < 0 )
              v94 = -v94;
            v95 = v93 + v94;
            v96 = *((__int16 *)v8 + v240);
            v97 = *((__int16 *)v8 + v241);
            if ( v96 < 0 )
              v96 = -v96;
            if ( v97 < 0 )
              v97 = -v97;
            v98 = v95 + v96 + v97;
            if ( v62 < 0 )
              v62 = -v62;
            if ( v61 < 0 )
              v61 = -v61;
            v99 = v98 + v62 + v61;
            if ( v60 < 0 )
              v60 = -v60;
            if ( v59 < 0 )
              v59 = -v59;
            v100 = v99 + v60 + v59;
            if ( v58 < 0 )
              v58 = -v58;
            if ( v100 + v58 + 4096 < 0xFFFF )
              break;
            LOWORD(v56) = 0x7FFF;
            for ( j = 0; j != 24; ++j )
            {
              v56 = (32440 * (__int16)v56) >> 15;
              *((_WORD *)v45 + j) = (unsigned int)((__int16)v56 * *((__int16 *)v45 + j)) >> 15;
            }
          }
        }
        v101 = *v220;
        v102 = v209;
        v103 = v185;
        v245 = (int)&v8[12 * v222];
        j_celt_fir_c(v185, v245, v209, v212, 24, v101);
        j_memcpy(v103, v102, v178);
        v104 = 0;
        if ( v216 < 1 )
        {
          v110 = 0;
          v107 = v208;
          v108 = v184;
        }
        else
        {
          v105 = v177;
          v106 = 0;
          v107 = v208;
          v108 = v184;
          do
          {
            v109 = *(__int16 *)&v184[2 * v105++];
            if ( v104 >= v109 )
              v104 = v109;
            if ( v106 <= v109 )
              v106 = v109;
          }
          while ( v105 != -1 );
          v110 = v106;
        }
        v111 = -v104;
        if ( v110 > v111 )
          v111 = v110;
        if ( v111 >= 1 && (int)(31 - __clz(v111)) >= 10 )
        {
          v118 = 0;
          if ( v216 < 1 )
          {
            v122 = 0;
          }
          else
          {
            v119 = v177;
            v120 = 0;
            do
            {
              v121 = *(__int16 *)&v108[2 * v119++];
              if ( v118 >= v121 )
                v118 = v121;
              if ( v120 <= v121 )
                v120 = v121;
            }
            while ( v119 != -1 );
            v122 = v120;
          }
          v123 = -v118;
          if ( v122 > v123 )
            v123 = v122;
          v112 = 2 * (31 - __clz(v123)) - 20;
          if ( v123 < 1 )
            LOBYTE(v112) = -20;
          if ( v216 < 1 )
          {
LABEL_129:
            v115 = 1;
            v113 = 1;
            goto LABEL_130;
          }
        }
        else
        {
          LOBYTE(v112) = 0;
          if ( v216 < 1 )
            goto LABEL_129;
        }
        v113 = 1;
        v114 = 0;
        v115 = 1;
        do
        {
          v116 = *(_WORD *)&v107[2 * v114];
          v117 = *(_WORD *)&v50[2 * v114++];
          v113 += (unsigned int)(v116 * v116) >> v112;
          v115 += (unsigned int)(v117 * v117) >> v112;
        }
        while ( v114 < v176 );
LABEL_130:
        if ( v115 >= v113 )
          v115 = v113;
        v124 = j_frac_div32(v115 >> 1);
        v125 = j_celt_sqrt(v124);
        v126 = v252;
        j_memmove(v252, &v252[4 * v221], v179);
        if ( v218 < 1 )
        {
          v130 = 0;
        }
        else
        {
          v127 = v125;
          v128 = 0;
          v129 = v216;
          v130 = 0;
          v131 = &v126[4 * v217];
          v132 = (unsigned int)(v127 * (__int16)v175) >> 15;
          v133 = v218;
          do
          {
            if ( v128 >= v129 )
            {
              v128 -= v129;
              v132 = (unsigned int)(v127 * (__int16)v132) >> 15;
            }
            --v133;
            *(_DWORD *)v131 = (*(__int16 *)(v250 + 2 * (v248 + v128)) * (__int16)v132) >> 15 << 12;
            v131 += 4;
            v134 = v249 + v128++;
            v135 = 16 * *(_DWORD *)&v252[4 * v134] + 0x8000;
            v130 += (unsigned int)(SHIWORD(v135) * SHIWORD(v135)) >> 10;
          }
          while ( v133 );
        }
        v136 = v252;
        LOWORD(v257) = (unsigned int)(*(_DWORD *)&v252[4 * v187] + 2048) >> 12;
        HIWORD(v257) = (unsigned int)(*(_DWORD *)&v252[4 * v188] + 2048) >> 12;
        v258 = (unsigned int)(*(_DWORD *)&v252[4 * v189] + 2048) >> 12;
        v259 = (unsigned int)(*(_DWORD *)&v252[4 * v190] + 2048) >> 12;
        v260 = (unsigned int)(*(_DWORD *)&v252[4 * v191] + 2048) >> 12;
        v261 = (unsigned int)(*(_DWORD *)&v252[4 * v192] + 2048) >> 12;
        v262 = (unsigned int)(*(_DWORD *)&v252[4 * v193] + 2048) >> 12;
        v263 = (unsigned int)(*(_DWORD *)&v252[4 * v180] + 2048) >> 12;
        v264 = (unsigned int)(*(_DWORD *)&v252[4 * v194] + 2048) >> 12;
        v265 = (unsigned int)(*(_DWORD *)&v252[4 * v195] + 2048) >> 12;
        v266 = (unsigned int)(*(_DWORD *)&v252[4 * v196] + 2048) >> 12;
        v267 = (unsigned int)(*(_DWORD *)&v252[4 * v197] + 2048) >> 12;
        v268 = (unsigned int)(*(_DWORD *)&v252[4 * v198] + 2048) >> 12;
        v269 = (unsigned int)(*(_DWORD *)&v252[4 * v199] + 2048) >> 12;
        v270 = (unsigned int)(*(_DWORD *)&v252[4 * v200] + 2048) >> 12;
        v271 = (unsigned int)(*(_DWORD *)&v252[4 * v181] + 2048) >> 12;
        v272 = (unsigned int)(*(_DWORD *)&v252[4 * v201] + 2048) >> 12;
        v273 = (unsigned int)(*(_DWORD *)&v252[4 * v202] + 2048) >> 12;
        v274 = (unsigned int)(*(_DWORD *)&v252[4 * v203] + 2048) >> 12;
        v275 = (unsigned int)(*(_DWORD *)&v252[4 * v204] + 2048) >> 12;
        v276 = (unsigned int)(*(_DWORD *)&v252[4 * v205] + 2048) >> 12;
        v277 = (unsigned int)(*(_DWORD *)&v252[4 * v206] + 2048) >> 12;
        v278 = (unsigned int)(*(_DWORD *)&v252[4 * v207] + 2048) >> 12;
        v279 = (unsigned int)(*(_DWORD *)&v252[4 * v182] + 2048) >> 12;
        v137 = *v220;
        v138 = v218;
        v247 = v252 + 0x2000;
        j_celt_iir(&v252[4 * v213 + 0x2000], v245, &v252[4 * v213 + 0x2000], v218, 24, &v257, v137);
        if ( v138 < 1 )
        {
          v143 = 0;
          if ( v130 <= 0 )
            goto LABEL_158;
        }
        else
        {
          v139 = v138;
          v140 = &v136[4 * v217];
          v141 = (int *)v140;
          do
          {
            v142 = *v141;
            if ( *v141 <= -300000000 )
              v142 = -300000000;
            if ( v142 >= 300000000 )
              v142 = 300000000;
            --v139;
            *v141++ = v142;
          }
          while ( v139 );
          v143 = 0;
          v136 = v252;
          v144 = v138;
          do
          {
            v145 = *(_DWORD *)v140;
            v140 += 4;
            --v144;
            v143 += (unsigned int)((__int16)((unsigned int)(16 * v145 + 0x8000) >> 16)
                                 * (__int16)((unsigned int)(16 * v145 + 0x8000) >> 16)) >> 10;
          }
          while ( v144 );
          if ( v130 <= v143 >> 2 )
          {
LABEL_158:
            if ( v138 >= 1 )
              sub_22178C((int)&v136[4 * v217], v173);
            goto LABEL_160;
          }
        }
        if ( v130 < v143 )
        {
          v146 = j_frac_div32((v130 >> 1) + 1);
          v147 = j_celt_sqrt(v146);
          if ( v219 >= 1 )
          {
            v148 = v219;
            v149 = &v252[4 * v217];
            v150 = v215;
            do
            {
              v151 = *v150++;
              --v148;
              v152 = 0x7FFF - ((unsigned int)((__int16)(0x7FFF - v147) * v151) >> 15);
              *(_DWORD *)v149 = 2 * (__int16)HIWORD(*(_DWORD *)v149) * v152
                              + ((v152 * (unsigned __int16)*(_DWORD *)v149) >> 15);
              v149 += 4;
            }
            while ( v148 );
          }
          v153 = v218;
          v154 = v252;
          if ( v221 >= 1 )
          {
            v155 = v213;
            v156 = v147;
            v157 = v219;
            v158 = 2 * v147;
            do
            {
              v159 = (int)&v154[4 * v155 + 4 * v157++];
              *(_DWORD *)(v159 + 0x2000) = v158 * (*(int *)(v159 + 0x2000) >> 16)
                                         + ((v156 * (unsigned __int16)*(_DWORD *)(v159 + 0x2000)) >> 15);
            }
            while ( v157 < v153 );
          }
        }
LABEL_160:
        v160 = v251[9];
        v161 = v251[15];
        v162 = v251[18];
        v163 = v219;
        v171 = (__int16)-*((_WORD *)v251 + 34);
        v164 = v211;
        v172 = v160;
        j_comb_filter(v211, v247, v161, v161, v219, v171, v171, v162, v162, 0, 0);
        v165 = v186;
        v166 = (int)v215;
        if ( v163 >= 2 )
        {
          v167 = v174;
          v168 = 0;
          do
          {
            v169 = *(_DWORD *)(v164 + 2 * v167);
            v170 = *(__int16 *)(v166 + v167);
            v167 -= 2;
            *(_DWORD *)&v247[4 * v168] = (((unsigned __int16)*(_DWORD *)(v164 + 4 * v168) * v170) >> 15)
                                       + (((unsigned __int16)v169 * *(__int16 *)(v166 + 2 * v168)) >> 15)
                                       + 2
                                       * (SHIWORD(v169) * *(__int16 *)(v166 + 2 * v168)
                                        + (__int16)HIWORD(*(_DWORD *)(v164 + 4 * v168)) * (__int16)v170);
            ++v168;
          }
          while ( v165 != v168 );
        }
        v45 += 12;
        v43 = v210;
        v46 = v222 + 1;
        v8 = v183;
        if ( v222 + 1 >= v223 )
          goto LABEL_34;
      }
    }
  }
  v250 = 3 * v5;
  v10 = v221 * v5;
  v11 = 512;
  if ( !v214 )
    v11 = 1536;
  v243 = v4;
  v12 = *(_DWORD *)(v4 + 12);
  v13 = v251[6];
  v14 = (2 * v10 + 7) & 0xFFFFFFF8;
  if ( v13 < v12 )
    v12 = v251[6];
  v15 = (char *)&v173 - v14;
  v16 = v12;
  if ( v7 > v12 )
    v16 = v7;
  v252 = v15;
  v248 = v16;
  v244 = v7;
  if ( v7 < v13 )
  {
    v17 = v13 - v244;
    v18 = (int)v251 + 2 * v244 + (4 * v219 + 8240) * v223 + 88;
    v19 = 0;
    do
    {
      v20 = (__int16 *)v18;
      v21 = v17;
      do
      {
        v22 = *v20 - v11;
        if ( v22 < v20[6 * HIDWORD(v6)] )
          LOWORD(v22) = v20[6 * HIDWORD(v6)];
        --v21;
        *v20++ = v22;
      }
      while ( v21 );
      ++v19;
      v18 += 2 * HIDWORD(v6);
    }
    while ( v19 < v223 );
  }
  v23 = v223;
  v242 = &v8[4 * v250];
  v24 = v251[10];
  if ( v223 < 1 )
  {
    v25 = v221;
  }
  else
  {
    v25 = v221;
    if ( v244 < v12 )
    {
      v246 = 0;
      v26 = 0;
      do
      {
        v245 = v26;
        v27 = v244;
        v250 = v26 * v25;
        do
        {
          v28 = *(__int16 *)&v247[2 * v27++];
          v29 = *(__int16 *)&v247[2 * v27] - v28;
          v30 = v28 << v249;
          v31 = v29 << v249;
          v32 = v30 + v250;
          if ( v29 << v249 >= 1 )
          {
            v33 = v29 << v249;
            v34 = &v252[2 * (_DWORD)&v246[v30]];
            do
            {
              v24 = j_celt_lcg_rand(v24);
              --v33;
              *(_WORD *)v34 = v24 >> 20;
              v34 += 2;
            }
            while ( v33 );
          }
          j_renormalise_vector(&v252[2 * v32], v31, 0x7FFF, v251[9]);
        }
        while ( v27 < v248 );
        v25 = v221;
        v23 = v223;
        v246 += v221;
        v26 = v245 + 1;
      }
      while ( v245 + 1 != v223 );
    }
  }
  v35 = 0;
  v251[10] = v24;
  v36 = 4 * (2048 - v25 + ((unsigned int)v219 >> 1));
  do
  {
    j_memmove((void *)v256[v35], (const void *)(v256[v35] + 4 * v25), v36);
    ++v35;
  }
  while ( v35 < v23 );
  sub_1994A8(v243, (int)v252, (int)v255, (int)v242, v244, v248, v23, v23, 0, v249, v251[4], 0, v251[9]);
LABEL_34:
  v251[13] = v214 + 1;
  return _stack_chk_guard - v253;
}


// ======================================================================
// ADDR: 0x199154
// SYMBOL: sub_199154
int __fastcall sub_199154(int **a1, _WORD *a2, int a3, int a4, int a5, __int16 *a6, int *a7, int a8)
{
  _WORD *v8; // r10
  int v9; // r6
  bool v10; // zf
  int v11; // r4
  int v12; // r9
  _WORD *v13; // r3
  int *v14; // r1
  int *v15; // r11
  int v16; // r12
  int v17; // lr
  int v18; // r5
  int v19; // t1
  int v20; // r0
  int v21; // t1
  int v22; // r4
  int v23; // r2
  int v24; // r2
  int v25; // r5
  int v26; // r0
  int v27; // r9
  int v28; // r2
  int v29; // r5
  int v30; // r4
  int v31; // r0
  int v32; // r2
  int v33; // r4
  int v34; // r1
  int v35; // r8
  int v36; // lr
  int *v37; // r11
  int v38; // r12
  int v39; // r5
  _DWORD *v40; // r2
  int v41; // r8
  int v42; // r0
  int v43; // t1
  int v44; // r1
  int v45; // r5
  int v46; // r8
  int v47; // r9
  int v48; // r0
  int v49; // r3
  int v50; // r1
  int v51; // r4
  __int16 v52; // r0
  int v53; // r3
  int v54; // r6
  int v55; // r2
  int v56; // r5
  _WORD *v57; // r0
  int v58; // r2
  int v59; // t1
  int v60; // r1
  int v61; // r6
  int v62; // r3
  int v63; // r4
  int v64; // r11
  _DWORD *v65; // r3
  int v66; // r0
  int v67; // r2
  int v68; // r4
  __int16 v69; // r1
  int v70; // r5
  int v71; // r4
  int *v72; // r2
  int v73; // r0
  int v74; // r3
  int v75; // r1
  int v76; // r1
  int v77; // r6
  int v79; // [sp+0h] [bp-50h] BYREF
  int v80; // [sp+4h] [bp-4Ch]
  int v81; // [sp+8h] [bp-48h]
  char *v82; // [sp+Ch] [bp-44h]
  int v83; // [sp+10h] [bp-40h]
  int **v84; // [sp+14h] [bp-3Ch]
  int v85; // [sp+18h] [bp-38h]
  int v86; // [sp+1Ch] [bp-34h]
  int v87; // [sp+20h] [bp-30h]
  int v88; // [sp+24h] [bp-2Ch]
  int v89; // [sp+28h] [bp-28h]
  int v90; // [sp+2Ch] [bp-24h]

  v84 = a1;
  v8 = a2;
  v9 = a3;
  v85 = a4;
  if ( a4 != 2 )
    goto LABEL_18;
  v10 = a5 == 1;
  if ( a5 == 1 )
    v10 = a8 == 0;
  if ( !v10 )
  {
LABEL_18:
    v31 = sub_220A40(a3, a5);
    v32 = a5;
    v82 = (char *)&v79 - ((4 * v9 + 7) & 0xFFFFFFF8);
    v33 = *a6;
    v34 = 0;
    v35 = a8;
    v83 = v9;
    v36 = 2 * v85;
    v88 = 2 * v33;
    v86 = 0;
    v89 = v33;
    v80 = 4 * a5;
    v81 = v31;
    while ( 1 )
    {
      v87 = v34;
      v37 = v84[v34];
      v38 = a7[v34];
      if ( v32 >= 2 )
        break;
      if ( v35 )
      {
        v45 = v88;
        if ( v9 >= 1 )
        {
          v46 = 0;
          v47 = v9;
          do
          {
            v48 = *v37 + v38;
            v49 = v48 >> 16;
            v50 = (unsigned __int16)v48 * v33;
            v51 = v48 + 2048;
            v52 = 0x7FFF;
            v53 = v49 * v45;
            v54 = -32768;
            if ( v51 >> 12 > -32768 )
              v54 = v51 >> 12;
            v38 = v53 + (v50 >> 15);
            if ( v54 >= 0x7FFF )
              LOWORD(v54) = 0x7FFF;
            v55 = *(__int16 *)((char *)v8 + v46) + (__int16)v54;
            if ( v55 < 0x8000 )
            {
              if ( v55 <= -32768 )
                LOWORD(v55) = 0x8000;
              v52 = v55;
            }
            *(_WORD *)((char *)v8 + v46) = v52;
            v46 += v36;
            --v47;
            v33 = v89;
            v45 = v88;
            ++v37;
          }
          while ( v47 );
        }
      }
      else
      {
        v56 = v88;
        v57 = v8;
        v58 = v9;
        if ( v9 >= 1 )
        {
          do
          {
            v59 = *v37++;
            v60 = v59 + v38 + 2048;
            v61 = ((v59 + v38) >> 16) * v56;
            v62 = (unsigned __int16)(v59 + v38) * v33;
            v63 = -32768;
            v56 = v88;
            if ( v60 >> 12 > -32768 )
              v63 = v60 >> 12;
            if ( v63 >= 0x7FFF )
              LOWORD(v63) = 0x7FFF;
            --v58;
            *v57 = v63;
            v38 = v61 + (v62 >> 15);
            v33 = v89;
            v57 = (_WORD *)((char *)v57 + v36);
          }
          while ( v58 );
        }
      }
      v44 = v87;
      v35 = a8;
      a7[v87] = v38;
      v32 = a5;
      v9 = v83;
      if ( v86 )
        goto LABEL_43;
      v86 = 0;
LABEL_65:
      v34 = v44 + 1;
      ++v8;
      if ( v34 >= v85 )
        return _stack_chk_guard - v90;
    }
    v39 = v35;
    v40 = v82;
    v41 = v88;
    v42 = v9;
    if ( v9 >= 1 )
    {
      do
      {
        v43 = *v37++;
        --v42;
        *v40++ = v43 + v38;
        v38 = v41 * ((v43 + v38) >> 16) + ((v33 * (unsigned __int16)(v43 + v38)) >> 15);
        v33 = v89;
      }
      while ( v42 );
    }
    v44 = v87;
    v35 = v39;
    v32 = a5;
    a7[v87] = v38;
    v86 = 1;
LABEL_43:
    v64 = v80;
    if ( v35 )
    {
      if ( v81 >= 1 )
      {
        v65 = v82;
        v66 = 0;
        v67 = v81;
        do
        {
          v68 = *v65 + 2048;
          v69 = 0x7FFF;
          v70 = -32768;
          if ( v68 >> 12 > -32768 )
            v70 = v68 >> 12;
          if ( v70 >= 0x7FFF )
            LOWORD(v70) = 0x7FFF;
          v71 = *(__int16 *)((char *)v8 + v66) + (__int16)v70;
          if ( v71 < 0x8000 )
          {
            if ( v71 <= -32768 )
              LOWORD(v71) = 0x8000;
            v69 = v71;
          }
          *(_WORD *)((char *)v8 + v66) = v69;
          v65 = (_DWORD *)((char *)v65 + v64);
          v66 += v36;
          --v67;
        }
        while ( v67 );
        v9 = v83;
        v33 = v89;
        v44 = v87;
        v32 = a5;
      }
    }
    else if ( v81 >= 1 )
    {
      v72 = (int *)v82;
      v73 = 0;
      v74 = v81;
      do
      {
        v75 = *v72;
        v72 = (int *)((char *)v72 + v64);
        v76 = v75 + 2048;
        v77 = -32768;
        if ( v76 >> 12 > -32768 )
          v77 = v76 >> 12;
        if ( v77 >= 0x7FFF )
          LOWORD(v77) = 0x7FFF;
        --v74;
        *(_WORD *)((char *)v8 + v73) = v77;
        v73 += v36;
      }
      while ( v74 );
      v9 = v83;
      v44 = v87;
      v32 = a5;
    }
    goto LABEL_65;
  }
  v11 = a7[1];
  v12 = *a7;
  if ( a3 >= 1 )
  {
    v13 = a2 + 1;
    v14 = v84[1];
    v15 = *v84;
    v16 = *a6;
    v17 = 2 * v16;
    do
    {
      v19 = *v14++;
      v18 = v19;
      v21 = *v15++;
      v20 = v21;
      v22 = v11 + v18;
      v23 = -32768;
      if ( (v22 + 2048) >> 12 > -32768 )
        v23 = (v22 + 2048) >> 12;
      if ( v23 >= 0x7FFF )
        LOWORD(v23) = 0x7FFF;
      *v13 = v23;
      v24 = v20 + v12;
      v25 = v20 + v12 + 2048;
      v26 = -32768;
      if ( v25 >> 12 > -32768 )
        v26 = v25 >> 12;
      v27 = (unsigned __int16)v24 * v16;
      v28 = v24 >> 16;
      v29 = (unsigned __int16)v22 * v16;
      v30 = (v22 >> 16) * v17;
      if ( v26 >= 0x7FFF )
        LOWORD(v26) = 0x7FFF;
      *(v13 - 1) = v26;
      v13 += 2;
      --v9;
      v11 = v30 + (v29 >> 15);
      v12 = v28 * v17 + (v27 >> 15);
    }
    while ( v9 );
  }
  *a7 = v12;
  a7[1] = v11;
  return _stack_chk_guard - v90;
}


// ======================================================================
// ADDR: 0x1994a8
// SYMBOL: sub_1994A8
int __fastcall sub_1994A8(
        int a1,
        int a2,
        size_t *a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 v13; // kr00_8
  int v14; // r2
  int v15; // r8
  int *v16; // r5
  int v17; // r2
  size_t v18; // r12
  int v19; // r9
  int v20; // lr
  bool v21; // zf
  char *v22; // r6
  int v23; // r12
  int v24; // r11
  int v25; // r4
  int v26; // r8
  int v27; // r10
  int v28; // r5
  int v29; // r9
  int v30; // r6
  int v31; // r1
  int v32; // r0
  int v33; // r4
  int v34; // r5
  int v35; // r3
  size_t v36; // r0
  int v37; // r11
  size_t *v38; // r8
  int v39; // r10
  bool v40; // zf
  int v41; // r11
  int v42; // r6
  int v43; // r0
  int v44; // r2
  int v45; // r4
  int v46; // r11
  int v47; // r6
  int v48; // r9
  __int64 v49; // kr18_8
  int v50; // r10
  bool v51; // cc
  char *v52; // r2
  int v53; // r8
  int v54; // r6
  int v55; // r1
  int v56; // r3
  int *v57; // r6
  int v58; // r0
  int *v59; // r1
  int v60; // t1
  int v61; // r6
  char *v62; // r9
  int v63; // r5
  int v64; // r4
  int v65; // r11
  int v66; // r5
  int v67; // r6
  int v68; // r11
  int v69; // r9
  int v70; // r0
  int *v71; // r3
  int v72; // r6
  int v73; // r5
  int v75; // [sp+18h] [bp-60h] BYREF
  __int64 v76; // [sp+1Ch] [bp-5Ch]
  int v77; // [sp+24h] [bp-54h]
  int v78; // [sp+28h] [bp-50h]
  int v79; // [sp+2Ch] [bp-4Ch]
  int v80; // [sp+30h] [bp-48h]
  int v81; // [sp+34h] [bp-44h]
  size_t n; // [sp+38h] [bp-40h]
  int v83; // [sp+3Ch] [bp-3Ch]
  int v84; // [sp+40h] [bp-38h]
  int v85; // [sp+44h] [bp-34h]
  int v86; // [sp+48h] [bp-30h]
  size_t *v87; // [sp+4Ch] [bp-2Ch]
  int v88; // [sp+50h] [bp-28h]
  int v89; // [sp+54h] [bp-24h]

  v13 = *(_QWORD *)(a1 + 4);
  v80 = *(_DWORD *)(a1 + 8);
  v14 = *(_DWORD *)(a1 + 36);
  v15 = v14 << a9;
  if ( !a8 )
    v14 <<= a9;
  v86 = v14;
  v16 = (int *)((char *)&v75 - ((4 * v15 + 7) & 0xFFFFFFF8));
  v17 = *(_DWORD *)(a1 + 28);
  v18 = 1 << a9;
  if ( !a8 )
    v17 -= a9;
  v19 = 1 << a9;
  v83 = v17;
  if ( !a8 )
    v19 = 1;
  v20 = HIDWORD(a10);
  v84 = v19;
  v85 = v13;
  v21 = a6 == 1;
  if ( a6 == 1 )
    v21 = a7 == 2;
  if ( v21 )
  {
    n = 4 * v15;
    j_denormalise_bands(a1, a2, (int)&v75 - ((4 * v15 + 7) & 0xFFFFFFF8), a4, a5, SHIDWORD(a5), v18, a10, SHIDWORD(a10));
    v22 = (char *)(a3[1] + ((2 * (v13 + ((unsigned int)v13 >> 31))) & 0xFFFFFFFC));
    j_memcpy(v22, (char *)&v75 - ((4 * v15 + 7) & 0xFFFFFFF8), n);
    if ( v19 >= 1 )
    {
      v23 = a1 + 56;
      v81 = v15;
      v24 = a1;
      v87 = a3;
      v25 = v84;
      v26 = v85;
      v27 = v83;
      v79 = (int)v16;
      v28 = 0;
      v86 *= 4;
      do
      {
        v29 = v23;
        j_clt_mdct_backward_c(v23, v22, *v87 + v28, *(_DWORD *)(v24 + 52), v26, v27, v84, a11);
        v23 = v29;
        --v25;
        v22 += 4;
        v28 += v86;
      }
      while ( v25 );
      v30 = v79;
      v15 = v81;
      a3 = v87;
      v31 = v86;
      v32 = v24;
      if ( v84 >= 1 )
      {
        v33 = v84;
        v34 = 0;
        v88 = v24;
        do
        {
          v35 = *(_DWORD *)(v32 + 52);
          v36 = a3[1];
          v37 = v15;
          v38 = a3;
          v39 = v31;
          j_clt_mdct_backward_c(v23, v30, v36 + v34, v35, v85, v83, v84, a11);
          v32 = v88;
          v31 = v39;
          a3 = v38;
          v15 = v37;
          v23 = v29;
          v34 += v31;
          --v33;
          v30 += 4;
        }
        while ( v33 );
      }
    }
  }
  else
  {
    v40 = a6 == 2;
    if ( a6 == 2 )
      v40 = a7 == 1;
    if ( v40 )
    {
      v81 = v15;
      n = *a3;
      v52 = (char *)&v75 - ((4 * v15 + 7) & 0xFFFFFFF8);
      v53 = a2;
      v54 = a4;
      j_denormalise_bands(a1, a2, (int)v52, a4, a5, SHIDWORD(a5), v18, a10, SHIDWORD(a10));
      v55 = v53 + 2 * v81;
      v15 = v81;
      v56 = v54 + 2 * v80;
      v57 = (int *)(n + ((2 * (v13 + ((unsigned int)v13 >> 31))) & 0xFFFFFFFC));
      j_denormalise_bands(a1, v55, (int)v57, v56, a5, SHIDWORD(a5), 1 << a9, a10, SHIDWORD(a10));
      if ( v15 >= 1 )
      {
        v58 = v15;
        v59 = v16;
        do
        {
          v60 = *v57++;
          --v58;
          *v59 = (v60 >> 1) + (*v59 >> 1);
          ++v59;
        }
        while ( v58 );
      }
      v61 = v84;
      v62 = (char *)v16;
      v88 = a1;
      if ( v84 >= 1 )
      {
        v63 = 0;
        v64 = v84;
        v86 *= 4;
        v65 = v88 + 56;
        do
        {
          j_clt_mdct_backward_c(v65, v62, *a3 + v63, *(_DWORD *)(v88 + 52), v85, v83, v61, a11);
          --v64;
          v62 += 4;
          v63 += v86;
        }
        while ( v64 );
      }
    }
    else
    {
      v79 = (int)&v75 - ((4 * v15 + 7) & 0xFFFFFFF8);
      n = 1 << a9;
      if ( v19 <= 0 )
      {
        v66 = v79;
        v86 = 2 * v15;
        v67 = 0;
        v85 = 2 * v80;
        do
        {
          v68 = a4;
          v69 = a2;
          j_denormalise_bands(a1, a2, v66, a4, a5, SHIDWORD(a5), v18, a10, v20);
          v20 = HIDWORD(a10);
          v18 = n;
          ++v67;
          a2 = v69 + v86;
          a4 = v68 + v85;
        }
        while ( v67 < a7 );
      }
      else
      {
        HIDWORD(v76) = a1 + 56;
        v88 = a1;
        v41 = v79;
        v42 = a10;
        LODWORD(v76) = 4 * v86;
        v86 = 0;
        v43 = HIDWORD(a5);
        v44 = a5;
        v81 = v15;
        v77 = a2;
        v78 = a4;
        v87 = a3;
        do
        {
          j_denormalise_bands(v88, a2 + 2 * v86 * v15, v41, a4 + 2 * v86 * v80, v44, v43, v18, v42, v20);
          v45 = v41;
          v46 = v84;
          v47 = v83;
          v48 = 0;
          v49 = v76;
          v50 = v84;
          do
          {
            j_clt_mdct_backward_c(HIDWORD(v49), v45, v87[v86] + v48, *(_DWORD *)(v88 + 52), v85, v47, v46, a11);
            v48 += v49;
            v45 += 4;
            --v50;
          }
          while ( v50 );
          a3 = v87;
          v51 = ++v86 < a7;
          a2 = v77;
          a4 = v78;
          v41 = v79;
          v18 = n;
          v15 = v81;
          v20 = HIDWORD(a10);
          v42 = a10;
          v43 = HIDWORD(a5);
          v44 = a5;
        }
        while ( v51 );
      }
    }
  }
  if ( v15 >= 1 )
  {
    v70 = 0;
    do
    {
      v71 = (int *)a3[v70];
      v72 = v15;
      do
      {
        v73 = *v71;
        if ( *v71 <= -300000000 )
          v73 = -300000000;
        if ( v73 >= 300000000 )
          v73 = 300000000;
        --v72;
        *v71++ = v73;
      }
      while ( v72 );
      ++v70;
    }
    while ( v70 < a7 );
  }
  return _stack_chk_guard - v89;
}


// ======================================================================
