// ADDR: 0x1680dc
// SYMBOL: sub_1680DC
int sub_1680DC()
{
  int v0; // r1
  int v1; // r4
  int v2; // r0
  int v3; // r2
  int v4; // r3
  float v5; // s0
  int result; // r0
  int v7; // r2
  int v8; // r2
  float v9; // s2
  float v10; // s4
  float v11[4]; // [sp+0h] [bp-10h] BYREF

  v0 = dword_381B58;
  v1 = dword_381B58 + 6584;
  v2 = *(_DWORD *)(dword_381B58 + 6584);
  if ( v2 )
  {
    v3 = *(_DWORD *)(dword_381B58 + 6608);
    v4 = *(_DWORD *)(dword_381B58 + 6652);
    *(_DWORD *)(dword_381B58 + 6612) = v3;
    if ( v4 == v3 )
      *(_BYTE *)(v1 + 72) = 1;
    if ( *(_BYTE *)(v0 + 232) && (v5 = *(float *)(v0 + 224), v5 >= -256000.0) )
    {
      v8 = *(_DWORD *)(v2 + 764);
      v9 = *(float *)(v0 + 228) - *(float *)(v1 + 56);
      v10 = *(float *)(v8 + 12);
      v11[0] = v5 - *(float *)(v1 + 52);
      v11[1] = v9;
      if ( v10 != v11[0] || *(float *)(v8 + 16) != v9 )
      {
        if ( !(*(unsigned __int8 *)(v8 + 9) << 31) && *(float *)(v0 + 11512) <= 0.0 )
          *(_DWORD *)(v0 + 11512) = *(_DWORD *)(v0 + 28);
        ((void (__fastcall *)(int, float *, int))sub_16820C)(v8, v11, 1);
        v2 = *(_DWORD *)v1;
      }
      return sub_168010(v2);
    }
    else
    {
      *(_BYTE *)(v1 + 36) = v3 != 0;
      if ( v3 )
      {
        *(_WORD *)(v1 + 38) = 0;
        *(_DWORD *)(v1 + 32) = 0;
      }
      result = 0;
      *(_DWORD *)(v1 + 44) = 0;
      *(_DWORD *)(v1 + 48) = 0;
      *(_DWORD *)(v1 + 24) = 0;
      *(_DWORD *)(v1 + 60) = 0;
      *(_BYTE *)(v1 + 37) = 0;
      *(_BYTE *)(v1 + 40) = 0;
      *(_DWORD *)v1 = 0;
    }
  }
  else
  {
    result = *(_DWORD *)(dword_381B58 + 6644);
    if ( result )
    {
      result = *(_DWORD *)(result + 80);
      if ( result == *(_DWORD *)(dword_381B58 + 6608) )
      {
        v7 = *(_DWORD *)(dword_381B58 + 6652);
        *(_DWORD *)(dword_381B58 + 6612) = result;
        if ( v7 == result )
          *(_BYTE *)(v1 + 72) = 1;
        if ( !*(_BYTE *)(v0 + 232) )
        {
          *(_BYTE *)(v1 + 36) = result != 0;
          if ( result )
          {
            *(_WORD *)(v1 + 38) = 0;
            *(_DWORD *)(v1 + 32) = 0;
          }
          result = 0;
          *(_DWORD *)(v1 + 44) = 0;
          *(_DWORD *)(v1 + 48) = 0;
          *(_DWORD *)(v1 + 24) = 0;
          *(_DWORD *)(v1 + 60) = 0;
          *(_BYTE *)(v1 + 37) = 0;
          *(_BYTE *)(v1 + 40) = 0;
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1684a0
// SYMBOL: sub_1684A0
int sub_1684A0()
{
  int v0; // r9
  int v1; // r10
  int v2; // r8
  int v3; // r0
  __int64 v4; // r0
  float v5; // r11
  float v6; // lr
  float v7; // s4
  float v8; // s6
  int v9; // r5
  int v10; // r6
  int v11; // r2
  int v12; // r4
  bool v13; // zf
  float v14; // r3
  float v15; // r4
  float v16; // s2
  int v17; // r6
  int v18; // r0
  int v19; // r12
  int *v20; // lr
  char v21; // r3
  int v22; // r6
  int v23; // r2
  double *v24; // r1
  int v25; // r5
  bool v26; // r4
  int v27; // r4
  int v28; // r5
  int v29; // r1
  int v30; // r2
  int v31; // r2
  bool v32; // zf
  bool v33; // r2
  int v34; // r1
  _BOOL4 v35; // r1
  int v36; // r3
  int result; // r0

  v0 = 0;
  v1 = dword_381B58;
  v2 = dword_381B58 + 5488;
  v3 = *(_DWORD *)(dword_381B58 + 6584);
  if ( v3 && (*(_BYTE *)(v3 + 9) & 2) == 0 )
    v0 = *(_DWORD *)(dword_381B58 + 6584);
  v4 = *(_QWORD *)v2;
  v5 = *(float *)(dword_381B58 + 5492);
  v6 = *(float *)v2;
  if ( *(_BYTE *)(dword_381B58 + 175) )
  {
    v7 = 4.0;
    v8 = 4.0;
    if ( *((float *)&v4 + 1) >= 4.0 )
      v8 = *(float *)(dword_381B58 + 5492);
    if ( *(float *)&v4 >= 4.0 )
      v7 = *(float *)v2;
    v5 = v8;
    v6 = v7;
  }
  v9 = *(_DWORD *)(dword_381B58 + 6508);
  if ( v9 < 1 )
  {
LABEL_23:
    *(_DWORD *)(dword_381B58 + 6576) = v0;
    if ( !v0 )
    {
      v0 = 0;
      v17 = 0;
      goto LABEL_26;
    }
  }
  else
  {
    v10 = *(_DWORD *)(dword_381B58 + 6516) - 4;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 4 * v9);
      if ( *(_BYTE *)(v11 + 122) )
      {
        if ( !*(_BYTE *)(v11 + 129) )
        {
          v12 = *(_DWORD *)(v11 + 8);
          if ( (v12 & 0x200) == 0 )
          {
            v13 = (v12 & 0x1000042) == 0;
            v15 = *(float *)(dword_381B58 + 5492);
            v14 = *(float *)v2;
            if ( v13 )
              v14 = v6;
            v16 = *(float *)(dword_381B58 + 224);
            if ( v13 )
              v15 = v5;
            if ( v16 >= (float)(*(float *)(v11 + 480) - v14)
              && *(float *)(dword_381B58 + 228) >= (float)(*(float *)(v11 + 484) - v15)
              && v16 < (float)(*(float *)(v11 + 488) + v14) )
            {
              break;
            }
          }
        }
      }
      if ( (unsigned int)v9-- <= 1 )
        goto LABEL_23;
    }
    if ( !v0 )
      v0 = *(_DWORD *)(v10 + 4 * v9);
    *(_DWORD *)(dword_381B58 + 6576) = v0;
  }
  v17 = *(_DWORD *)(v0 + 764);
LABEL_26:
  *(_DWORD *)(v2 + 1092) = v17;
  v18 = sub_1683BC();
  if ( v18 && v17 && *(_DWORD *)(v17 + 764) != v18 )
  {
    while ( v17 != v18 )
    {
      v17 = *(_DWORD *)(v17 + 760);
      if ( !v17 )
      {
        v0 = 0;
        *(_DWORD *)(v2 + 1088) = 0;
        *(_DWORD *)(v2 + 1092) = 0;
        break;
      }
    }
  }
  v19 = *(_DWORD *)(v1 + 8);
  v20 = (int *)(v1 + 12084);
  v21 = 0;
  v22 = -1;
  v23 = 0;
  if ( (v19 & 0x10) != 0 )
  {
    v0 = 0;
    *(_DWORD *)(v2 + 1088) = 0;
    *(_DWORD *)(v2 + 1092) = 0;
  }
  v24 = (double *)(v1 + 944);
  do
  {
    v25 = v1 + v23;
    if ( *(_BYTE *)(v1 + v23 + 984) )
    {
      if ( v0 )
        v26 = 1;
      else
        v26 = *(_DWORD *)(v2 + 1324) != 0;
      *(_BYTE *)(v25 + 999) = v26;
    }
    v27 = *(unsigned __int8 *)(v25 + 232);
    v28 = v27 | v21 & 1;
    v21 = v27 | v21 & 1;
    if ( v28 )
      v21 = 1;
    if ( v27 )
    {
      if ( v22 == -1 )
      {
        v22 = v23;
      }
      else if ( *v24 < *(double *)(v1 + 8 * v22 + 944) )
      {
        v22 = v23;
      }
    }
    ++v23;
    ++v24;
  }
  while ( v23 != 5 );
  if ( v22 == -1 )
  {
    v29 = 1;
  }
  else
  {
    v29 = *(unsigned __int8 *)(v1 + v22 + 999);
    if ( *(_BYTE *)(v1 + v22 + 999) )
      v29 = 1;
  }
  if ( *(_BYTE *)(v2 + 1960) )
    v30 = (*(unsigned __int8 *)(v2 + 1964) >> 4) & 1;
  else
    v30 = 0;
  if ( !(v30 | v29) )
  {
    v0 = 0;
    *(_DWORD *)(v2 + 1088) = 0;
    *(_DWORD *)(v2 + 1092) = 0;
  }
  v31 = *v20;
  if ( *v20 != -1 )
    goto LABEL_66;
  if ( !v29 )
    goto LABEL_65;
  v32 = v0 == 0;
  v33 = 1;
  if ( !v0 )
    v32 = v28 == 0;
  if ( v32 )
  {
LABEL_65:
    v31 = *(_DWORD *)(v2 + 1324);
LABEL_66:
    v33 = v31 != 0;
  }
  v34 = *(_DWORD *)(v1 + 12088);
  *(_BYTE *)(v1 + 852) = v33;
  if ( v34 == -1 )
    v34 = *(_DWORD *)(v2 + 1120) | v18;
  v35 = v34 != 0;
  v36 = *(unsigned __int8 *)(v1 + 857);
  result = v19 & 9;
  *(_BYTE *)(v1 + 854) = !__CFADD__(*(_DWORD *)(v1 + 12092) - 1, 2);
  if ( result != 1 )
    result = v35;
  if ( !v36 )
    result = v35;
  *(_BYTE *)(v1 + 853) = result;
  return result;
}


// ======================================================================
// ADDR: 0x16a7dc
// SYMBOL: sub_16A7DC
char *__fastcall sub_16A7DC(const char *a1)
{
  char *result; // r0
  char *v2; // r4
  size_t v3[3]; // [sp+4h] [bp-Ch] BYREF

  v3[0] = 0;
  result = (char *)sub_165694(a1, "rb", v3, 0);
  if ( result )
  {
    v2 = result;
    sub_170C94(result);
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    return (char *)off_2390B0(v2, dword_381B60);
  }
  return result;
}


// ======================================================================
// ADDR: 0x16a834
// SYMBOL: sub_16A834
FILE *__fastcall sub_16A834(const char *a1)
{
  FILE *result; // r0
  const void *v3; // r5
  FILE *v4; // r4
  size_t n[3]; // [sp+4h] [bp-Ch] BYREF

  result = 0;
  *(_DWORD *)(dword_381B58 + 11512) = 0;
  if ( a1 )
  {
    n[0] = 0;
    v3 = (const void *)sub_170E70(n);
    result = fopen(a1, "wt");
    if ( result )
    {
      v4 = result;
      fwrite(v3, 1u, n[0], result);
      return (FILE *)fclose(v4);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x16a884
// SYMBOL: sub_16A884
int __fastcall sub_16A884(int result)
{
  int v1; // r1
  int v2; // r12
  float v3; // s0
  int v4; // r3
  float v5; // s0
  int v6; // r1
  int v7; // r2
  __int64 v8; // kr00_8

  v1 = dword_381B58;
  v2 = dword_381B58 + 6340;
  v3 = (float)(*(float *)(dword_381B58 + 152) * *(float *)(result + 16)) * *(float *)(result + 68);
  if ( v3 <= 1.0 )
    v3 = 1.0;
  v4 = *(_DWORD *)(dword_381B58 + 6572);
  *(_DWORD *)(dword_381B58 + 6340) = result;
  *(float *)(v2 + 8) = v3;
  if ( v4 )
    v5 = v3 * *(float *)(v4 + 628);
  else
    v5 = 0.0;
  v6 = v1 + 6352;
  v7 = *(_DWORD *)(result + 56);
  *(float *)(v2 + 4) = v5;
  v8 = *(_QWORD *)(v7 + 44);
  *(float *)(v6 + 12) = v5;
  *(_QWORD *)v6 = v8;
  *(_DWORD *)(v6 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x16a8f8
// SYMBOL: sub_16A8F8
int __fastcall sub_16A8F8(int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r2
  int v5; // lr
  int v6; // r3
  bool v7; // zf
  int v8; // r0
  int v9; // r0

  v2 = *(_DWORD *)(dword_381B58 + 6520);
  if ( a1 )
  {
    v3 = v2 - 1;
    while ( v3 + 1 >= 1 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6528) + 4 * v3--);
      if ( v4 == a1 )
      {
        v2 = v3 + 1;
        break;
      }
    }
  }
  if ( v2 < 1 )
  {
LABEL_19:
    v9 = 0;
  }
  else
  {
    v5 = *(_DWORD *)(dword_381B58 + 6528) - 4;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 4 * v2);
      v7 = v6 == a2;
      if ( v6 != a2 )
        v7 = *(_BYTE *)(v6 + 123) == 0;
      if ( !v7 )
      {
        v8 = *(_DWORD *)(v6 + 8);
        if ( (v8 & 0x1000000) == 0 && (v8 & 0x40200) != 0x40200 )
          break;
      }
      if ( (unsigned int)v2-- <= 1 )
        goto LABEL_19;
    }
    v9 = *(_DWORD *)(v6 + 776);
    if ( !v9 )
      v9 = *(_DWORD *)(v5 + 4 * v2);
  }
  return sub_168010(v9);
}


// ======================================================================
// ADDR: 0x16a980
// SYMBOL: sub_16A980
int __fastcall sub_16A980(char *a1, _BYTE *a2, unsigned int a3)
{
  int v4; // r5
  int v5; // r6
  unsigned int v6; // r0
  int *v7; // r8
  int v8; // r0
  int v9; // r4
  int v10; // r11
  int v11; // r1
  unsigned int v12; // r6
  float v13; // s16
  float v14; // s18
  int (__fastcall *v15)(int, int); // r2
  int v16; // r1
  void **v17; // r0
  unsigned int v18; // r1
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r4
  int v24; // r3
  int v25; // r0
  int v26; // lr
  float v27; // s2
  float v28; // s2
  float v29; // s0
  char v30; // r1
  float v31; // s0
  float v32; // s2
  bool v33; // r0
  int v34; // r0
  int v35; // r4
  int v36; // r1
  _DWORD *v37; // r8
  void *v38; // r5
  const void *v39; // r1
  int v40; // r0
  int v41; // r0
  int v42; // r4
  int v43; // r1
  _DWORD *v44; // r5
  void *v45; // r8
  const void *v46; // r1
  int v47; // r0
  int v48; // r8
  _BOOL4 v49; // r3
  int v50; // r0
  int v51; // r2
  int v52; // r1
  int v53; // r0
  int v54; // r0
  int v55; // r1
  int v56; // r2
  int v57; // r4
  int v58; // r1
  int v59; // r10
  int v60; // r11
  _DWORD *v61; // r5
  void *v62; // r8
  const void *v63; // r1
  int v64; // r0
  int v65; // r0
  int v66; // r12
  int v67; // r4
  int v68; // lr
  int v69; // r5
  int v70; // r1
  int v71; // r6
  int v72; // r1
  int v73; // r3
  int *v74; // r6
  int v75; // r4
  int v76; // r0
  void *v77; // r9
  const void *v78; // r1
  int v79; // r0
  int v80; // r2
  int v81; // r4
  int v82; // r0
  int v83; // r3
  int v84; // r2
  float *v85; // r1
  int v86; // r6
  int v87; // r0
  _BOOL4 v88; // r10
  int v89; // r0
  int v90; // r0
  float v91; // s0
  float v92; // s4
  int v93; // r1
  float v94; // s2
  int v95; // r0
  int v96; // r1
  int v97; // r3
  int v98; // r2
  char v99; // r3
  int v100; // r0
  unsigned int v101; // r6
  unsigned int v102; // r3
  float *v103; // r5
  float v104; // s0
  float *v105; // r1
  float v106; // s2
  float v107; // s0
  int v108; // r3
  int v109; // r4
  char v110; // r0
  int v111; // r1
  int v112; // r11
  int v113; // r8
  void *v114; // r0
  const void *v115; // r1
  void *v116; // r5
  int v117; // r0
  int v118; // r5
  int v119; // r0
  _BOOL4 v120; // r11
  int v121; // r4
  char *v122; // r6
  int v123; // r1
  int v124; // r2
  int v125; // r0
  int v126; // r0
  int v127; // r2
  float v128; // s0
  float *v129; // r0
  float v130; // s2
  float v131; // s2
  _DWORD *v132; // r3
  __int64 v133; // r2
  _BOOL4 v134; // r8
  float v135; // s2
  int v136; // s4
  float v137; // s4
  float v138; // s2
  float v139; // s6
  float v140; // s8
  int v141; // r3
  float v142; // s2
  bool v143; // zf
  int v144; // r2
  int v145; // r1
  float v146; // s16
  float v147; // s18
  int v148; // r1
  unsigned __int64 v149; // r2
  int v150; // r0
  int v151; // r12
  float v152; // s6
  int v153; // r0
  int v154; // r2
  float v155; // s2
  float v156; // s0
  unsigned int v157; // r3
  int v158; // r2
  int v159; // r0
  float v160; // s4
  float v161; // s6
  int v162; // s0
  int v163; // s2
  int v164; // r0
  int v165; // r2
  int v166; // r6
  int v167; // r1
  _DWORD *v168; // r4
  void *v169; // r5
  const void *v170; // r1
  int v171; // r0
  int v172; // r0
  float v173; // s0
  _DWORD *v174; // r6
  int v175; // r0
  int v176; // r2
  float v177; // s6
  float v178; // s0
  float v179; // s6
  float v180; // s4
  int v181; // r1
  float v182; // s2
  _DWORD *v183; // r0
  int v184; // r10
  float *v185; // r5
  int v186; // r6
  int v187; // r2
  float v188; // s0
  float v189; // s16
  float v190; // s0
  float v191; // s22
  int v192; // r0
  unsigned int v193; // r3
  int v194; // r5
  int v195; // r3
  char v196; // r4
  int v197; // r0
  int v198; // r8
  float v199; // s0
  float v200; // s2
  __int64 v201; // kr20_8
  __int64 *v202; // r2
  __int64 v203; // d17
  float v204; // s10
  float v205; // s12
  float v206; // s2
  int v207; // s1
  int v208; // s6
  float v209; // s14
  float v210; // s8
  float v211; // s1
  int v212; // r2
  float v213; // s10
  float v214; // s8
  int v215; // r10
  float v216; // s6
  float v217; // s12
  char v218; // r2
  float v219; // s10
  float v220; // s0
  float v221; // s14
  float v222; // s7
  float v223; // s2
  float v224; // s0
  float *v225; // r2
  _QWORD *v226; // r1
  float v227; // s10
  float v228; // s12
  _QWORD *v229; // r0
  __int64 v230; // d17
  _BOOL4 v231; // r6
  int v232; // r5
  int v233; // r0
  _BOOL4 v234; // r5
  int v235; // r1
  float v236; // s0
  __int64 v237; // d17
  int v238; // r0
  float v239; // s0
  float v240; // s2
  float v241; // s10
  float v242; // s12
  float v243; // s4
  float v244; // s0
  int v245; // r4
  float v246; // s0
  float v247; // s2
  __int64 v248; // d17
  int v249; // r0
  int v250; // r0
  _BOOL4 v251; // r6
  int v252; // r8
  int v253; // r0
  int v254; // r4
  float v255; // s16
  int v256; // r5
  float v257; // s24
  int v258; // s18
  int v259; // r2
  unsigned __int64 *v260; // r0
  float v261; // s0
  unsigned __int64 v262; // d17
  int v263; // r0
  int v264; // r9
  int v265; // r1
  __int64 v266; // d17
  float v267; // s0
  int v268; // r3
  float v269; // s0
  bool v270; // fnf
  int v271; // r0
  int v272; // r11
  int v273; // r1
  float v274; // s2
  float v275; // s4
  float v276; // s6
  float v277; // s8
  float v278; // s10
  int v279; // r0
  unsigned __int64 *v280; // r0
  float v281; // s0
  unsigned __int64 v282; // d17
  int v283; // r0
  float v284; // s0
  float v285; // s26
  float v286; // s2
  float v287; // s4
  float v288; // s6
  float v289; // s12
  int v290; // r5
  unsigned __int64 v291; // d16
  __int64 v292; // d17
  float v293; // s0
  int v294; // r0
  float v295; // s26
  int v296; // r4
  float v297; // s0
  __int64 v298; // d17
  int v299; // r0
  float v300; // s26
  int v301; // r11
  char *v302; // r4
  float v303; // s22
  float v304; // s23
  float v305; // s21
  float v306; // s17
  float v307; // s19
  int v308; // r10
  __int64 v309; // r0
  float v310; // s28
  float v311; // s30
  int v312; // r9
  int v313; // r1
  void *v314; // r0
  const void *v315; // r1
  void *v316; // r6
  int v317; // r0
  int v318; // r6
  __int64 v319; // r0
  int v320; // r5
  int v321; // r1
  void *v322; // r0
  const void *v323; // r1
  void *v324; // r10
  int v325; // r0
  int v326; // r5
  __int64 v327; // kr30_8
  int v328; // r0
  int v329; // r6
  float v330; // s22
  int v331; // s16
  unsigned __int64 v332; // d16
  __int64 v333; // d17
  float v334; // s2
  int v335; // r4
  float v336; // s0
  int v337; // r0
  int v338; // r4
  int v339; // r0
  float v340; // s26
  float *v341; // r6
  float v342; // s28
  float v343; // s24
  float v344; // s30
  int v345; // r0
  float v346; // s6
  float v347; // s26
  int v348; // r3
  float v349; // s2
  int v350; // r0
  int v351; // r4
  float v352; // s16
  __int64 v353; // d17
  float v354; // s0
  int v355; // r0
  float v356; // s16
  float v357; // s4
  float v358; // s8
  int v359; // r4
  unsigned __int64 v360; // d16
  __int64 v361; // d17
  float v362; // s0
  float v363; // s0
  int v364; // r0
  int v365; // r5
  int v366; // r0
  int v367; // r8
  float v368; // s2
  float v369; // s4
  float v370; // s12
  float v371; // s8
  float v372; // s0
  float v373; // s6
  float v374; // s16
  float v375; // s2
  float v376; // s4
  float v377; // s10
  float v378; // s8
  float v379; // s6
  int v380; // r4
  __int64 v381; // d17
  float v382; // s0
  int v383; // r0
  float v384; // s2
  float v385; // s8
  float v386; // s0
  float v387; // s4
  float v388; // s10
  float v389; // s6
  float v390; // s1
  int v391; // r1
  int v392; // r0
  float v393; // s5
  int v394; // r1
  float v395; // s3
  float v396; // s1
  float v397; // s5
  float v398; // s3
  float v399; // s3
  float v400; // s1
  float v401; // s3
  float v402; // s1
  float v403; // s10
  float v404; // s8
  float v405; // s10
  float v406; // s14
  float v407; // s8
  float v408; // s1
  float v409; // s14
  int v410; // r6
  int v411; // r0
  int v412; // r1
  float v413; // s6
  float v414; // s8
  float v415; // s4
  float v416; // s6
  float v417; // s0
  unsigned int v418; // r1
  unsigned int v419; // r3
  _DWORD *v420; // r4
  void *v421; // r0
  const void *v422; // r1
  void *v423; // r8
  int v424; // r0
  int v425; // r0
  int v426; // r1
  int v427; // r2
  _DWORD *v428; // r6
  void *v429; // r0
  const void *v430; // r1
  void *v431; // r5
  int v432; // r0
  int v433; // r0
  _DWORD *v434; // r4
  float *v435; // r0
  const void *v436; // r1
  int v437; // r0
  int v438; // r0
  _DWORD *v439; // r5
  void *v440; // r0
  const void *v441; // r1
  void *v442; // r6
  int v443; // r0
  int v444; // r0
  bool v445; // cc
  int v446; // r0
  void *v447; // r0
  const void *v448; // r1
  void *v449; // r4
  int v450; // r0
  int v451; // r2
  _DWORD *v452; // r5
  int v453; // r1
  int v454; // r0
  int v455; // r2
  int v456; // r6
  int v457; // r1
  float *v458; // r0
  const void *v459; // r1
  int v460; // r0
  int v461; // r0
  int v462; // r1
  int v463; // r1
  int v464; // r4
  int v465; // r2
  int v466; // r5
  float v467; // s16
  float v468; // s0
  float v469; // s18
  int v470; // r9
  float *v471; // r6
  int v472; // r0
  float v473; // s2
  int v474; // r0
  int v475; // r0
  int v476; // r9
  float v477; // s22
  float v478; // s2
  float v479; // s2
  float v480; // s10
  float v481; // s6
  float v482; // s2
  float v483; // s4
  float v484; // s6
  float v485; // s6
  float v486; // s0
  float v487; // s8
  float v488; // s0
  float v489; // s6
  float v490; // s8
  float v491; // s1
  float v492; // s0
  float v493; // s0
  float v494; // r0
  int v495; // r1
  int v496; // r2
  float v497; // s2
  float v498; // s0
  float v499; // s6
  _BOOL4 v500; // r0
  float v501; // s4
  __int64 v502; // d17
  int v503; // r0
  __int16 v504; // r2
  _BOOL4 v505; // r1
  int v506; // r2
  _BOOL4 v507; // r1
  int v509; // r11
  int v510; // r9
  int v511; // r4
  float v512; // s28
  float v513; // s16
  float v514; // s26
  int v515; // r4
  float v516; // s28
  float *v517; // r5
  float v518; // s18
  float v519; // s30
  float v520; // s25
  float v521; // s17
  float v522; // s27
  float v523; // s19
  float v524; // s2
  float v525; // s0
  float v526; // s6
  float v527; // s2
  float v528; // s4
  float v529; // s0
  int v530; // r0
  int v531; // r0
  int v532; // r1
  int v533; // r1
  int v534; // r0
  float v535; // s4
  float v536; // s8
  int v537; // r1
  unsigned __int64 *v538; // r1
  float v539; // s0
  unsigned __int64 v540; // d17
  int v541; // r5
  int v542; // r0
  int v543; // r0
  int v544; // r1
  int v545; // r0
  float v546; // s0
  float v547; // s2
  float v548; // s0
  float v549; // r0
  float v550; // s2
  int v551; // r0
  float v552; // s16
  int v553; // r0
  float v554; // s4
  float v555; // s6
  float v556; // s2
  int v557; // r0
  float v558; // s0
  float v559; // s2
  __int64 v560; // d17
  float v561; // s18
  int v562; // r0
  float v563; // s0
  float v564; // s2
  int v565; // r3
  int v566; // r2
  int v567; // r0
  int v568; // r0
  int v569; // r1
  float v570; // s2
  __int64 v571; // r2
  float v572; // [sp+0h] [bp-160h]
  int v573; // [sp+0h] [bp-160h]
  float v574; // [sp+0h] [bp-160h]
  int v575; // [sp+10h] [bp-150h]
  int v576; // [sp+14h] [bp-14Ch]
  int v577; // [sp+18h] [bp-148h]
  float *v578; // [sp+1Ch] [bp-144h]
  int v579; // [sp+20h] [bp-140h]
  float v580; // [sp+20h] [bp-140h]
  _BOOL4 v581; // [sp+24h] [bp-13Ch]
  int v582; // [sp+24h] [bp-13Ch]
  int v584; // [sp+2Ch] [bp-134h]
  unsigned int v585; // [sp+2Ch] [bp-134h]
  int v586; // [sp+30h] [bp-130h]
  int v587; // [sp+30h] [bp-130h]
  _BOOL4 v589; // [sp+38h] [bp-128h]
  float *v590; // [sp+3Ch] [bp-124h]
  int v591; // [sp+40h] [bp-120h]
  float v592; // [sp+40h] [bp-120h]
  int v593; // [sp+44h] [bp-11Ch]
  int v594; // [sp+44h] [bp-11Ch]
  int v595; // [sp+48h] [bp-118h]
  int v596; // [sp+4Ch] [bp-114h]
  int v597; // [sp+50h] [bp-110h]
  int v598; // [sp+54h] [bp-10Ch]
  int v599; // [sp+58h] [bp-108h]
  __int64 v600; // [sp+60h] [bp-100h] BYREF
  __int64 v601; // [sp+68h] [bp-F8h] BYREF
  __int64 v602; // [sp+70h] [bp-F0h] BYREF
  __int64 v603; // [sp+78h] [bp-E8h] BYREF
  _DWORD v604[5]; // [sp+80h] [bp-E0h] BYREF
  float v605[2]; // [sp+94h] [bp-CCh] BYREF
  __int64 v606; // [sp+9Ch] [bp-C4h] BYREF
  float v607; // [sp+A4h] [bp-BCh] BYREF
  float v608; // [sp+A8h] [bp-B8h]
  int v609; // [sp+ACh] [bp-B4h]
  float v610[2]; // [sp+B0h] [bp-B0h] BYREF
  float v611[2]; // [sp+B8h] [bp-A8h] BYREF
  float v612[2]; // [sp+C0h] [bp-A0h] BYREF
  unsigned __int64 v613; // [sp+C8h] [bp-98h] BYREF
  float v614; // [sp+D0h] [bp-90h] BYREF
  float v615; // [sp+D4h] [bp-8Ch]
  unsigned __int64 v616; // [sp+D8h] [bp-88h] BYREF
  __int64 v617; // [sp+E0h] [bp-80h] BYREF
  __int64 v618; // [sp+E8h] [bp-78h] BYREF
  float v619; // [sp+F0h] [bp-70h] BYREF
  float v620; // [sp+F4h] [bp-6Ch]
  float v621; // [sp+F8h] [bp-68h] BYREF
  float v622; // [sp+FCh] [bp-64h]

  v4 = 0;
  v5 = dword_381B58;
  v6 = sub_16560C(a1, 0, 0);
  v7 = (int *)(v5 + 6556);
  v8 = sub_1658B8((unsigned int *)(v5 + 6556), v6);
  v9 = v5 + 5404;
  v10 = v5 + 6696;
  v593 = v5;
  v11 = v5 + 6712;
  v12 = v8;
  v599 = v11;
  v609 = v8;
  v584 = v8;
  v598 = v9;
  if ( !v8 )
  {
    if ( (*(_BYTE *)(v9 + 1268) & 2) != 0 )
    {
      v13 = *(float *)(v10 + 8);
      v14 = *(float *)(v10 + 12);
    }
    else
    {
      v13 = 0.0;
      v14 = 0.0;
    }
    v15 = off_2390AC;
    v16 = dword_381B60;
    ++*(_DWORD *)(v593 + 880);
    v12 = v15(820, v16);
    v17 = sub_1666C8((void **)v12, v593, a1);
    v18 = (unsigned int)v17[1];
    v17[2] = (void *)a3;
    LODWORD(v616) = v17;
    sub_1659EC(v7, v18, v12);
    *(_DWORD *)(v12 + 12) = 1114636288;
    *(_DWORD *)(v12 + 16) = 1114636288;
    if ( (a3 & 0x100) == 0 )
    {
      v19 = *(_DWORD *)(dword_381B58 + 11540);
      if ( v19 )
      {
        v20 = *(_DWORD *)(dword_381B58 + 11548);
        v21 = 0;
        while ( 1 )
        {
          v22 = v20 + v21;
          if ( *(_DWORD *)(v20 + v21 + 4) == *(_DWORD *)(v12 + 4) )
            break;
          --v19;
          v21 += 28;
          if ( !v19 )
            goto LABEL_13;
        }
        v23 = *(_DWORD *)(v12 + 176);
        v24 = *(_DWORD *)(v593 + 11548);
        *(_DWORD *)(v12 + 172) &= ~4u;
        *(_DWORD *)(v12 + 176) = v23 & 0xFFFFFFFB;
        v25 = -1227133513 * ((v20 - v24 + v21) >> 2);
        v9 = v598;
        v26 = *(_DWORD *)(v12 + 180);
        v27 = (float)(int)*(float *)(v22 + 12);
        *(float *)(v12 + 12) = (float)(int)*(float *)(v22 + 8);
        *(float *)(v12 + 16) = v27;
        v28 = *(float *)(v22 + 20);
        v29 = *(float *)(v22 + 16);
        v30 = *(_BYTE *)(v22 + 24);
        *(_DWORD *)(v12 + 180) = v26 & 0xFFFFFFFB;
        *(_DWORD *)(v12 + 632) = v25;
        *(_BYTE *)(v12 + 125) = v30;
        if ( (float)((float)(v28 * v28) + (float)(v29 * v29)) > 0.00001 )
        {
          v14 = (float)(int)v28;
          v13 = (float)(int)v29;
        }
      }
    }
LABEL_13:
    *(_QWORD *)(v12 + 224) = *(_QWORD *)(v12 + 12);
    v31 = (float)(int)v14;
    v32 = (float)(int)v13;
    *(float *)(v12 + 24) = v31;
    *(float *)(v12 + 20) = v32;
    *(float *)(v12 + 28) = v32;
    *(float *)(v12 + 32) = v31;
    *(float *)(v12 + 36) = v32;
    *(float *)(v12 + 40) = v31;
    if ( (a3 & 0x40) != 0 )
    {
      *(_BYTE *)(v12 + 152) = 0;
      *(_DWORD *)(v12 + 144) = 2;
      *(_DWORD *)(v12 + 148) = 2;
    }
    else
    {
      if ( (int)v13 <= 0 )
        *(_DWORD *)(v12 + 144) = 2;
      if ( (int)v14 <= 0 )
        *(_DWORD *)(v12 + 148) = 2;
      v33 = *(int *)(v12 + 144) > 0 || *(_DWORD *)(v12 + 148) > 0;
      *(_BYTE *)(v12 + 152) = v33;
    }
    v34 = *(_DWORD *)(v9 + 1116);
    if ( v34 == *(_DWORD *)(v9 + 1120) )
    {
      v35 = v34 + 1;
      if ( v34 )
        v36 = v34 + v34 / 2;
      else
        v36 = 8;
      if ( v36 > v35 )
        v35 = v36;
      if ( v34 < v35 )
      {
        if ( dword_381B58 )
          ++*(_DWORD *)(dword_381B58 + 880);
        v37 = (_DWORD *)v598;
        v38 = (void *)off_2390AC(4 * v35, dword_381B60);
        v39 = *(const void **)(v598 + 1124);
        if ( v39 )
        {
          j_memcpy(v38, v39, 4 * *(_DWORD *)(v598 + 1116));
          v40 = *(_DWORD *)(v598 + 1124);
          if ( v40 && dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v40, dword_381B60);
          v37 = (_DWORD *)v598;
        }
        v34 = v37[279];
        v37[280] = v35;
        v37[281] = v38;
      }
    }
    v9 = v598;
    *(_DWORD *)(*(_DWORD *)(v598 + 1124) + 4 * v34) = v616;
    ++*(_DWORD *)(v598 + 1116);
    if ( (a3 & 0x2000) != 0 )
    {
      sub_1717CC(v593 + 6508, &v616);
      v12 = v616;
    }
    else
    {
      v41 = *(_DWORD *)(v598 + 1104);
      if ( v41 == *(_DWORD *)(v598 + 1108) )
      {
        v42 = v41 + 1;
        if ( v41 )
          v43 = v41 + v41 / 2;
        else
          v43 = 8;
        if ( v43 > v42 )
          v42 = v43;
        if ( v41 < v42 )
        {
          if ( dword_381B58 )
            ++*(_DWORD *)(dword_381B58 + 880);
          v44 = (_DWORD *)v598;
          v45 = (void *)off_2390AC(4 * v42, dword_381B60);
          v46 = *(const void **)(v598 + 1112);
          if ( v46 )
          {
            j_memcpy(v45, v46, 4 * *(_DWORD *)(v598 + 1104));
            v47 = *(_DWORD *)(v598 + 1112);
            if ( v47 && dword_381B58 )
              --*(_DWORD *)(dword_381B58 + 880);
            off_2390B0(v47, dword_381B60);
            v44 = (_DWORD *)v598;
          }
          v41 = v44[276];
          v44[277] = v42;
          v44[278] = v45;
        }
      }
      v9 = v598;
      *(_DWORD *)(*(_DWORD *)(v598 + 1112) + 4 * v41) = v616;
      ++*(_DWORD *)(v598 + 1104);
    }
    v4 = 0;
    v609 = v12;
  }
  v48 = *(_DWORD *)(v9 + 1092);
  v591 = *(_DWORD *)(v12 + 168);
  v597 = *(_DWORD *)(v12 + 560);
  if ( v597 < v48 - 1 )
    v4 = 1;
  if ( (_UNKNOWN *)(a3 & (unsigned int)&unk_C0200) == &unk_C0200 )
    a3 |= 6u;
  if ( (a3 & 0x4000000) != 0 )
    v49 = *(_DWORD *)(v12 + 140) != *(_DWORD *)(*(_DWORD *)(v599 + 108) + 36 * *(_DWORD *)(v599 + 112))
       || v597 < v48 - 1
       || v12 != *(_DWORD *)(*(_DWORD *)(v599 + 108) + 36 * *(_DWORD *)(v599 + 112) + 4);
  else
    v49 = v4;
  v50 = v591 > 0 || v49;
  *(_BYTE *)(v12 + 128) = v50;
  if ( v50 == 1 )
  {
    v51 = *(_DWORD *)(v12 + 180) | 8;
    v52 = *(_DWORD *)(v12 + 176) | 8;
    *(_DWORD *)(v12 + 172) |= 8u;
    *(_DWORD *)(v12 + 176) = v52;
    *(_DWORD *)(v12 + 180) = v51;
  }
  if ( v597 == v48 )
  {
    a3 = *(_DWORD *)(v12 + 8);
  }
  else
  {
    *(_DWORD *)(v12 + 560) = v48;
    *(_DWORD *)(v12 + 8) = a3;
    v53 = *(_DWORD *)(v9 + 1164);
    *(_WORD *)(v12 + 136) = v53;
    *(_WORD *)(v12 + 134) = 0;
    *(_DWORD *)(v9 + 1164) = v53 + 1;
  }
  v54 = *(_DWORD *)(v9 + 1140);
  if ( v54 )
    v55 = *(_DWORD *)(*(_DWORD *)(v9 + 1148) + 4 * v54 - 4);
  else
    v55 = 0;
  if ( v597 == v48 )
  {
    v595 = *(_DWORD *)(v12 + 760);
  }
  else
  {
    v56 = a3 & 0x5000000;
    if ( (a3 & 0x5000000) != 0 )
      v56 = v55;
    v595 = v56;
  }
  v589 = v49;
  if ( v54 == *(_DWORD *)(v9 + 1144) )
  {
    v57 = v54 + 1;
    if ( v54 )
      v58 = v54 + v54 / 2;
    else
      v58 = 8;
    if ( v58 > v57 )
      v57 = v58;
    if ( v54 < v57 )
    {
      v59 = v10;
      v60 = v48;
      if ( dword_381B58 )
        ++*(_DWORD *)(dword_381B58 + 880);
      v61 = (_DWORD *)v598;
      v62 = (void *)off_2390AC(4 * v57, dword_381B60);
      v63 = *(const void **)(v598 + 1148);
      if ( v63 )
      {
        j_memcpy(v62, v63, 4 * *(_DWORD *)(v598 + 1140));
        v64 = *(_DWORD *)(v598 + 1148);
        if ( v64 && dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
        off_2390B0(v64, dword_381B60);
        v61 = (_DWORD *)v598;
      }
      v54 = v61[285];
      v61[287] = v62;
      v48 = v60;
      v10 = v59;
      v61[286] = v57;
    }
  }
  v590 = (float *)a3;
  *(_DWORD *)(*(_DWORD *)(v598 + 1148) + 4 * v54) = v609;
  *(_DWORD *)(v598 + 1168) = 0;
  v65 = v609;
  v66 = *(_DWORD *)(dword_381B58 + 6776);
  v67 = *(_DWORD *)(v609 + 412);
  v68 = *(_DWORD *)(dword_381B58 + 6788);
  v69 = *(_DWORD *)(dword_381B58 + 6800);
  v70 = *(_DWORD *)(dword_381B58 + 6824);
  v71 = *(_DWORD *)(v609 + 452);
  ++*(_DWORD *)(v598 + 1140);
  *(_WORD *)(v65 + 428) = v70;
  *(_WORD *)(v65 + 424) = v71;
  *(_WORD *)(v65 + 426) = v67;
  *(_WORD *)(v65 + 430) = v66;
  *(_WORD *)(v65 + 432) = v68;
  *(_WORD *)(v65 + 434) = v69;
  v579 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
  {
    v72 = *(_DWORD *)(v599 + 112);
    v73 = *(_DWORD *)(v599 + 116);
    v74 = (int *)(*(_DWORD *)(v599 + 108) + 36 * v72);
    v74[1] = v65;
    if ( v72 == v73 )
    {
      v75 = v72 + 1;
      if ( v72 )
        v76 = v72 + v72 / 2;
      else
        v76 = 8;
      if ( v76 > v75 )
        v75 = v76;
      if ( v72 < v75 )
      {
        if ( dword_381B58 )
          ++*(_DWORD *)(dword_381B58 + 880);
        v77 = (void *)off_2390AC(36 * v75, dword_381B60);
        v78 = *(const void **)(v599 + 120);
        if ( v78 )
        {
          j_memcpy(v77, v78, 36 * *(_DWORD *)(v599 + 112));
          v79 = *(_DWORD *)(v599 + 120);
          if ( v79 && dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v79, dword_381B60);
        }
        *(_DWORD *)(v599 + 116) = v75;
        *(_DWORD *)(v599 + 120) = v77;
        v72 = *(_DWORD *)(v599 + 112);
        a3 = (unsigned int)v590;
      }
    }
    j_memcpy((void *)(*(_DWORD *)(v599 + 120) + 36 * v72), v74, 0x24u);
    v65 = v609;
    v80 = *v74;
    ++*(_DWORD *)(v599 + 112);
    *(_DWORD *)(v65 + 140) = v80;
  }
  v596 = a3 & 0x1000000;
  v81 = v598;
  if ( v591 >= 1 && !v596 )
    *(_DWORD *)(v65 + 780) = 0;
  if ( !(*(unsigned __int8 *)(v598 + 1268) << 31) )
  {
    v82 = 0;
LABEL_119:
    v586 = v82;
    goto LABEL_121;
  }
  v83 = *(_DWORD *)(v65 + 172);
  v84 = *(_DWORD *)(v598 + 1272);
  v85 = (float *)(v593 + 6688);
  v86 = v84 & v83;
  if ( (v84 & v83) != 0 )
    v86 = 1;
  v586 = v86;
  if ( (v84 & v83) != 0
    && (float)((float)(*(float *)(v10 + 4) * *(float *)(v10 + 4)) + (float)(*(float *)v10 * *(float *)v10)) > 0.00001 )
  {
    *(_QWORD *)(v65 + 184) = *(_QWORD *)v85;
    *(_QWORD *)(v65 + 192) = *(_QWORD *)v10;
    *(_DWORD *)(v65 + 172) = v83 & 0xFFFFFFF1;
    v82 = 1;
    goto LABEL_119;
  }
  sub_16820C(v65, v85, v84);
LABEL_121:
  v87 = *(_DWORD *)(v598 + 1268);
  if ( (v87 & 2) != 0 )
  {
    v88 = 0;
    if ( (*(_DWORD *)(v598 + 1276) & *(_DWORD *)(v609 + 176)) != 0 )
    {
      v581 = *(float *)(v10 + 12) > 0.0;
      v88 = *(float *)(v10 + 8) > 0.0;
    }
    else
    {
      v581 = 0;
    }
    sub_16F2FA(v609, v593 + 6704);
    v87 = *(_DWORD *)(v598 + 1268);
  }
  else
  {
    v88 = 0;
    v581 = 0;
  }
  if ( (v87 & 4) != 0 )
  {
    v90 = v609;
    v91 = *(float *)(v599 + 4);
    *(_QWORD *)(v609 + 52) = *(_QWORD *)v599;
    if ( v91 != 0.0 )
    {
      v92 = 0.0;
      v93 = *(_DWORD *)(v90 + 8);
      v94 = 0.0;
      if ( !(v93 << 31) )
        v94 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
            + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v90 + 628));
      if ( (v93 & 0x400) != 0 )
        v92 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
            + (float)(*(float *)(v90 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v90 + 628)));
      *(float *)(v90 + 56) = (float)(v94 + v92) + v91;
    }
  }
  else if ( v597 != v48 )
  {
    v89 = v609;
    *(_DWORD *)(v609 + 52) = 0;
    *(_DWORD *)(v89 + 56) = 0;
  }
  v95 = *(_DWORD *)(v598 + 1268);
  if ( (v95 & 8) != 0 )
  {
    v96 = v609;
    v97 = *(_DWORD *)(v598 + 1280);
    v98 = *(_DWORD *)(v609 + 180);
    if ( !v97 || (v97 & v98) != 0 )
    {
      v99 = *(_BYTE *)(v599 + 8);
      *(_DWORD *)(v609 + 180) = v98 & 0xFFFFFFF1;
      *(_BYTE *)(v96 + 125) = v99;
    }
  }
  if ( (v95 & 0x20) != 0 )
    sub_168010(v609);
  v100 = v609;
  if ( *(_BYTE *)(v609 + 128) )
  {
    v101 = *(_DWORD *)(v609 + 180) & 0xFFFFFFF7;
    v102 = *(_DWORD *)(v609 + 176) & 0xFFFFFFF7;
    *(_DWORD *)(v609 + 172) &= ~8u;
    *(_DWORD *)(v100 + 176) = v102;
    *(_DWORD *)(v100 + 180) = v101;
  }
  v103 = (float *)(v593 + 5400);
  if ( v597 == v48 )
  {
    v104 = *(float *)(v100 + 628);
    v105 = (float *)(dword_381B58 + 6344);
    v106 = *(float *)(dword_381B58 + 6348);
    *(_DWORD *)(dword_381B58 + 6572) = v100;
    v107 = v106 * v104;
    v105[5] = v107;
    *v105 = v107;
    sub_16DDF0(v100 + 512, v100 + 520, 1);
    v108 = v595;
LABEL_625:
    v503 = v609;
    goto LABEL_627;
  }
  v578 = (float *)(v593 + 5400);
  sub_16F2AC(v100, a3, v595);
  v109 = v609;
  v110 = (char)a2;
  if ( a2 )
    v110 = 1;
  v111 = *(_DWORD *)(v609 + 456);
  *(_BYTE *)(v609 + 130) = v110;
  *(_BYTE *)(v109 + 122) = 1;
  *(_QWORD *)(v109 + 464) = unk_16B1C8;
  *(_QWORD *)(v109 + 472) = 0x7F7FFFFF7F7FFFFFLL;
  if ( v111 <= 0 )
  {
    v112 = v48;
    v113 = 1;
    if ( !v111 )
      v113 = 8;
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v114 = (void *)off_2390AC(4 * v113, dword_381B60);
    v115 = *(const void **)(v109 + 460);
    v116 = v114;
    if ( v115 )
    {
      j_memcpy(v114, v115, 4 * *(_DWORD *)(v109 + 452));
      v117 = *(_DWORD *)(v109 + 460);
      if ( v117 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v117, dword_381B60);
    }
    *(_DWORD *)(v109 + 456) = v113;
    *(_DWORD *)(v109 + 460) = v116;
    v48 = v112;
  }
  v118 = v609;
  v577 = v48;
  v119 = *(_DWORD *)(v599 + 196);
  *(_DWORD *)(v109 + 452) = 1;
  if ( !v119 )
  {
    a3 = (unsigned int)v590;
    v120 = v579;
LABEL_166:
    v121 = v586;
    goto LABEL_167;
  }
  a3 = (unsigned int)v590;
  v120 = v579;
  v121 = v586;
  if ( v584 && (*(_DWORD *)(v118 + 8) & 0x80000) == 0 )
  {
    v122 = *(char **)v118;
    if ( strcmp(a1, *(const char **)v118) )
    {
      LODWORD(v616) = *(_DWORD *)(v118 + 76);
      *(_DWORD *)v609 = sub_1654DC(v122, (size_t *)&v616, a1);
      v118 = v609;
      *(_DWORD *)(v609 + 76) = v616;
    }
    goto LABEL_166;
  }
LABEL_167:
  sub_16EEBC(&v616, v118);
  v123 = v609;
  v124 = HIDWORD(v616);
  *(_DWORD *)(v609 + 44) = v616;
  *(_DWORD *)(v123 + 48) = v124;
  v125 = *(_DWORD *)(v123 + 164);
  if ( v125 >= 1 )
    *(_DWORD *)(v123 + 164) = v125 - 1;
  v126 = *(_DWORD *)(v123 + 168);
  if ( v126 >= 1 )
    *(_DWORD *)(v123 + 168) = v126 - 1;
  if ( !v584 && (!v88 || !v581) )
    *(_DWORD *)(v123 + 168) = 1;
  v127 = a3 & 0x6000000;
  if ( v589 )
  {
    if ( v127 )
    {
      *(_DWORD *)(v123 + 168) = 1;
      if ( (a3 & 0x40) != 0 )
      {
        if ( !v88 )
        {
          *(_DWORD *)(v123 + 20) = 0;
          *(_DWORD *)(v123 + 28) = 0;
        }
        if ( !v581 )
        {
          *(_DWORD *)(v123 + 24) = 0;
          *(_DWORD *)(v123 + 32) = 0;
        }
        *(_DWORD *)(v123 + 44) = 0;
        *(_DWORD *)(v123 + 48) = 0;
      }
    }
  }
  v128 = *(float *)(v123 + 628);
  v129 = (float *)dword_381B58;
  v130 = *(float *)(dword_381B58 + 6348);
  *(_DWORD *)(dword_381B58 + 6572) = v123;
  v131 = v130 * v128;
  v129[1591] = v131;
  v129[1586] = v131;
  if ( v596 )
  {
    v132 = (_DWORD *)(v598 + 40);
  }
  else
  {
    v132 = (_DWORD *)(v598 + 12);
    if ( (a3 & 0x8000000) == 0 )
      v132 = (_DWORD *)(v598 + 48);
    if ( !v127 )
      v132 = (_DWORD *)(v598 + 12);
  }
  *(_DWORD *)(v123 + 72) = *v132;
  v133 = *(_QWORD *)v598;
  *(_QWORD *)(v123 + 60) = *(_QWORD *)v598;
  v134 = v596 != 0;
  v135 = *(float *)&v133;
  if ( v596 && (a3 & 0x4010000) == 0 )
  {
    v135 = 0.0;
    v136 = 0;
    if ( (a3 & 0x400) != 0 )
      v136 = *(_DWORD *)(v598 + 4);
    *(_DWORD *)(v123 + 64) = v136;
    *(_DWORD *)(v123 + 60) = 0;
  }
  v137 = *(float *)(v598 + 68);
  if ( v135 >= v137 )
    v137 = v135;
  v138 = *(float *)(v599 + 40);
  if ( v137 >= v138 )
    v138 = v137;
  *(float *)(v123 + 324) = v138;
  *(_DWORD *)(v123 + 328) = *(_DWORD *)(v599 + 44);
  if ( (a3 & 0x21) != 0 )
  {
    *(_BYTE *)(v123 + 125) = 0;
  }
  else
  {
    v139 = *(float *)(v123 + 16);
    if ( *(unsigned __int8 *)(v123 + 8) << 31 )
      v140 = 0.0;
    else
      v140 = (float)(v129[1365] + v129[1365]) + (float)(v129[1587] * v128);
    v141 = *(_DWORD *)(v598 + 1172);
    v142 = *(float *)(v123 + 12) + *(float *)(v123 + 28);
    v616 = *(_QWORD *)(v123 + 12);
    v143 = v141 == v123;
    *((float *)&v617 + 1) = v139 + v140;
    *(float *)&v617 = v142;
    if ( v141 == v123 )
      v143 = *(_DWORD *)(v598 + 1184) == 0;
    if ( v143 && !*(_DWORD *)(v598 + 1192) && sub_1674C8((float *)&v616, (float *)&v617, 1) && *(_BYTE *)(v593 + 989) )
      *(_BYTE *)(v609 + 126) = 1;
    v123 = v609;
    if ( *(_BYTE *)(v609 + 126) )
    {
      v144 = *(unsigned __int8 *)(v609 + 9);
      *(_BYTE *)(v609 + 125) ^= 1u;
      if ( !(v144 << 31) && *(float *)(dword_381B58 + 11512) <= 0.0 )
        *(_DWORD *)(dword_381B58 + 11512) = *(_DWORD *)(dword_381B58 + 28);
      sub_168010(v123);
      v123 = v609;
    }
  }
  *(_BYTE *)(v123 + 126) = 0;
  sub_16F134(&v607);
  v145 = v609;
  v575 = a3 & 0x40;
  if ( (a3 & 0x40) != 0 && !*(_BYTE *)(v609 + 125) )
  {
    v147 = 3.4028e38;
    v146 = 3.4028e38;
    if ( !v88 )
    {
      v146 = v607;
      *(float *)(v609 + 28) = v607;
    }
    if ( !v581 )
    {
      v147 = v608;
      *(float *)(v145 + 32) = v608;
    }
  }
  else
  {
    if ( *(int *)(v609 + 144) <= 0 )
    {
      v146 = 3.4028e38;
      v147 = 3.4028e38;
      if ( *(int *)(v609 + 148) <= 0 )
        goto LABEL_240;
    }
    else if ( v88 )
    {
      v146 = 3.4028e38;
    }
    else
    {
      if ( *(_BYTE *)(v609 + 152) )
      {
        v146 = v607;
        if ( *(float *)(v609 + 28) >= v607 )
          v146 = *(float *)(v609 + 28);
      }
      else
      {
        v146 = v607;
      }
      *(float *)(v609 + 28) = v146;
    }
    v147 = 3.4028e38;
    if ( !v581 && *(int *)(v145 + 148) >= 1 )
    {
      if ( *(_BYTE *)(v145 + 152) )
      {
        v147 = v608;
        if ( *(float *)(v145 + 32) >= v608 )
          v147 = *(float *)(v145 + 32);
      }
      else
      {
        v147 = v608;
      }
      *(float *)(v145 + 32) = v147;
    }
    if ( !*(_BYTE *)(v145 + 125) && !(*(unsigned __int8 *)(v145 + 9) << 31) && *(float *)(dword_381B58 + 11512) <= 0.0 )
      *(_DWORD *)(dword_381B58 + 11512) = *(_DWORD *)(dword_381B58 + 28);
  }
LABEL_240:
  sub_16EF60(&v616, v145, *(_DWORD *)(v145 + 28), *(_DWORD *)(v145 + 32));
  v148 = v609;
  v149 = v616;
  v150 = *(unsigned __int8 *)(v609 + 125);
  *(_QWORD *)(v609 + 28) = v616;
  if ( v150 == 0 || v134 )
  {
    v151 = v598;
  }
  else
  {
    v151 = v598;
    if ( *(unsigned __int8 *)(v148 + 8) << 31 )
      v152 = 0.0;
    else
      v152 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
           + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v148 + 628));
    *((float *)&v149 + 1) = (float)(*(float *)(v148 + 16) + v152) - *(float *)(v148 + 16);
    *(float *)&v149 = (float)(*(float *)(v148 + 12) + *(float *)&v149) - *(float *)(v148 + 12);
  }
  *(_QWORD *)(v148 + 20) = v149;
  if ( !v150 )
  {
    v153 = 36;
    v154 = 40;
    if ( v146 != 3.4028e38 )
      v153 = 28;
    if ( v147 != 3.4028e38 )
      v154 = 32;
    v155 = *(float *)(v153 + v148);
    v156 = *(float *)(v154 + v148);
    if ( (a3 & 0x4000) != 0 )
    {
      v158 = 1;
      *(_BYTE *)(v148 + 121) = 1;
      if ( (a3 & 0x8000) != 0 )
      {
        *(_BYTE *)(v148 + 120) = 1;
        goto LABEL_267;
      }
      v160 = *(float *)(v148 + 44);
    }
    else
    {
      v157 = a3 & 8;
      v158 = 1;
      v159 = (*(float *)(v148 + 48) > v156) & ((v157 >> 3) ^ 1);
      *(_BYTE *)(v148 + 121) = v159;
      if ( (a3 & 0x8000) != 0 )
      {
        *(_BYTE *)(v148 + 120) = 1;
        if ( v159 )
          goto LABEL_266;
        goto LABEL_263;
      }
      v160 = *(float *)(v148 + 44);
      if ( !v159 )
      {
        v161 = 0.0;
        v159 = 0;
        goto LABEL_258;
      }
    }
    v161 = *(float *)(v151 + 100);
    v159 = 1;
LABEL_258:
    if ( v160 <= (float)(v155 - v161) || (a3 & 8) != 0 )
    {
      v158 = 0;
      *(_BYTE *)(v148 + 120) = 0;
LABEL_266:
      if ( !v159 )
      {
        v162 = 0;
        goto LABEL_269;
      }
LABEL_267:
      v162 = *(_DWORD *)(v151 + 100);
LABEL_269:
      if ( v158 )
        v163 = *(_DWORD *)(v151 + 100);
      else
        v163 = 0;
      *(_DWORD *)(v148 + 112) = v162;
      *(_DWORD *)(v148 + 116) = v163;
      goto LABEL_273;
    }
    v158 = (a3 >> 11) & 1;
    *(_BYTE *)(v148 + 120) = (a3 & 0x800) != 0;
    if ( ((a3 & 0x800) == 0) | v159 )
      goto LABEL_266;
    v157 = 0;
LABEL_263:
    v159 = *(float *)(v148 + 48) > (float)(v156 - *(float *)(v151 + 100)) && v157 == 0;
    v158 = 1;
    *(_BYTE *)(v148 + 121) = v159;
    goto LABEL_266;
  }
LABEL_273:
  if ( v589 )
  {
    *(_DWORD *)(v148 + 160) = -1;
    if ( !(!v120 | v121) )
      *(_QWORD *)(v148 + 12) = *(_QWORD *)(*(_DWORD *)(v599 + 120) + 36 * *(_DWORD *)(v599 + 112) - 16);
  }
  v585 = a3 & 0x3000000;
  if ( v596 )
  {
    v165 = *(_DWORD *)(v595 + 336);
    v164 = *(_DWORD *)(v595 + 332);
    *(_WORD *)(v148 + 134) = v164;
    if ( v164 == v165 )
    {
      v166 = v164 + 1;
      if ( v164 )
        v167 = v164 + v164 / 2;
      else
        v167 = 8;
      if ( v167 > v166 )
        v166 = v167;
      if ( v164 < v166 )
      {
        if ( dword_381B58 )
          ++*(_DWORD *)(dword_381B58 + 880);
        v168 = (_DWORD *)v595;
        v169 = (void *)off_2390AC(4 * v166, dword_381B60);
        v170 = *(const void **)(v595 + 340);
        if ( v170 )
        {
          j_memcpy(v169, v170, 4 * *(_DWORD *)(v595 + 332));
          v171 = *(_DWORD *)(v595 + 340);
          if ( v171 && dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v171, dword_381B60);
          v168 = (_DWORD *)v595;
        }
        v164 = v168[83];
        v168[84] = v166;
        v168[85] = v169;
        v151 = v598;
        v121 = v586;
      }
    }
    *(_DWORD *)(*(_DWORD *)(v595 + 340) + 4 * v164) = v609;
    ++*(_DWORD *)(v595 + 332);
    v172 = v120;
    if ( v120 )
      v172 = 1;
    if ( v172 | v121 || v585 == 50331648 )
    {
      v148 = v609;
    }
    else
    {
      v148 = v609;
      *(_QWORD *)(v609 + 12) = *(_QWORD *)(v595 + 200);
    }
  }
  v173 = *(float *)(v148 + 184);
  if ( v173 == 3.4028e38 || *(_DWORD *)(v148 + 168) )
  {
    v174 = (_DWORD *)v151;
    if ( (a3 & 0x10000000) != 0 || !(!v120 | v121) && v591 >= 1 || !(((a3 & 0x2000000) == 0) | v121) && v585 != 50331648 )
    {
      sub_16F368(&v616);
      v175 = v609;
      v176 = HIDWORD(v616);
      *(_DWORD *)(v609 + 12) = v616;
      *(_DWORD *)(v175 + 16) = v176;
    }
  }
  else
  {
    v174 = (_DWORD *)v151;
    v177 = *(float *)(v148 + 188) - (float)(*(float *)(v148 + 32) * *(float *)(v148 + 196));
    v178 = v173 - (float)(*(float *)(v148 + 28) * *(float *)(v148 + 192));
    if ( *(float *)(v151 + 152) >= v177 )
      v177 = *(float *)(v151 + 152);
    if ( *(float *)(v151 + 148) >= v178 )
      v178 = *(float *)(v151 + 148);
    v616 = __PAIR64__(LODWORD(v177), LODWORD(v178));
    sub_16820C(v148, (float *)&v616, 0);
  }
  v605[0] = 0.0;
  v605[1] = 0.0;
  v606 = *(_QWORD *)(dword_381B58 + 16);
  if ( !(v121 | v134)
    && *(int *)(v609 + 144) <= 0
    && *(int *)(v609 + 148) <= 0
    && *(float *)(v593 + 16) > 0.0
    && *(float *)(v593 + 20) > 0.0 )
  {
    v179 = *((float *)v174 + 38);
    v180 = *((float *)v174 + 37);
    if ( *((float *)v174 + 36) >= v179 )
      v179 = *((float *)v174 + 36);
    if ( *((float *)v174 + 35) >= v180 )
      v180 = *((float *)v174 + 35);
    v616 = __PAIR64__(LODWORD(v179), LODWORD(v180));
    sub_16F5D0(v609, v605, &v616);
  }
  v181 = v609;
  v582 = a3 & 0x2000000;
  v182 = (float)(int)*(float *)(v609 + 16);
  *(float *)(v609 + 12) = (float)(int)*(float *)(v609 + 12);
  *(float *)(v181 + 16) = v182;
  if ( v596 )
  {
    v120 = v120;
    v183 = v174 + 9;
    v184 = v120;
  }
  else if ( !v120 || (v120 = 1, (a3 & 0x8000000) != 0) )
  {
    v183 = v174 + 2;
    v184 = 1;
  }
  else
  {
    v183 = v174 + 11;
    v184 = 1;
    v120 = 1;
  }
  *(_DWORD *)(v181 + 68) = *v183;
  v185 = (float *)v174;
  sub_16F690(&v616, v181, 1);
  v186 = v609;
  v187 = HIDWORD(v616);
  v188 = *(float *)(v609 + 68);
  *(_DWORD *)(v609 + 88) = v616;
  *(_DWORD *)(v186 + 92) = v187;
  *(_DWORD *)(v186 + 96) = 2139095039;
  *(_DWORD *)(v186 + 100) = 2139095039;
  v189 = v188 + 1.0;
  v190 = v185[235];
  memset(v604, 0, 16);
  v191 = v189 + (float)(v190 * 0.2);
  if ( (float)(v190 * 1.35) >= v191 )
    v191 = v190 * 1.35;
  v192 = !v589 | ((unsigned __int16)(a3 & 0x1000) >> 12);
  v193 = __clz(v585);
  v194 = v192 ^ 1;
  if ( !v120 )
    v194 = v193 >> 5;
  if ( v192 )
    v194 = v192 ^ 1;
  v195 = 2;
  v587 = v194;
  if ( !*(_BYTE *)(v593 + 175) )
    v195 = 1;
  v594 = v195;
  if ( *(_BYTE *)(v186 + 125) )
  {
    v196 = -1;
    v197 = v186;
    v198 = v595;
    goto LABEL_343;
  }
  v198 = v595;
  if ( (*(_BYTE *)(v186 + 8) & 0x42) != 0
    || *(int *)(v186 + 144) > 0
    || *(int *)(v186 + 148) > 0
    || !*(_BYTE *)(v186 + 123) )
  {
    v196 = -1;
    v197 = v186;
    goto LABEL_343;
  }
  v509 = dword_381B58;
  v510 = dword_381B58 + 6344;
  v511 = *(unsigned __int8 *)(dword_381B58 + 175);
  v512 = *(float *)(dword_381B58 + 6344);
  v602 = 0x7F7FFFFF7F7FFFFFLL;
  *(_DWORD *)(v186 + 304) = 1;
  *(_DWORD *)(v186 + 308) = 2;
  v600 = 0x7F7FFFFF7F7FFFFFLL;
  sub_16FF3C("#RESIZE");
  v513 = v189 + (float)(v512 * 0.2);
  v514 = 0.0;
  if ( (float)(v512 * 1.35) >= v513 )
    v513 = v512 * 1.35;
  v576 = v511;
  v143 = v511 == 0;
  v515 = 0;
  v516 = 4.0;
  if ( v143 )
    v516 = 0.0;
  v517 = (float *)&unk_BB358;
  v592 = v607;
  v580 = v608;
  v518 = (float)(int)(float)((float)(int)v513 * 0.75);
  v519 = -v518;
  do
  {
    v520 = v517[2];
    v521 = *v517;
    v522 = v517[3];
    v523 = v517[1];
    v524 = *(float *)(v186 + 12)
         + (float)((float)((float)(*(float *)(v186 + 12) + *(float *)(v186 + 20)) - *(float *)(v186 + 12)) * *v517);
    v525 = *(float *)(v186 + 16)
         + (float)((float)((float)(*(float *)(v186 + 16) + *(float *)(v186 + 24)) - *(float *)(v186 + 16)) * v523);
    v526 = v524 - (float)(v516 * v520);
    v527 = v524 + (float)(v520 * v518);
    v528 = v525 - (float)(v516 * v522);
    v529 = v525 + (float)(v522 * v518);
    v613 = __PAIR64__(LODWORD(v528), LODWORD(v526));
    v614 = v527;
    v615 = v529;
    if ( v526 > v527 )
    {
      v614 = v526;
      *(float *)&v613 = v527;
    }
    if ( v528 > v529 )
    {
      v615 = v528;
      *((float *)&v613 + 1) = v529;
    }
    v530 = sub_166E14(v186, v515);
    sub_17AD64(&v613, v530, &v621, &v619, 8224);
    v531 = LOBYTE(v619);
    if ( (LOBYTE(v621) | LOBYTE(v619)) << 24 )
    {
      v532 = 5;
      if ( !(v515 << 31) )
        v532 = 6;
      *(_DWORD *)(v510 + 1100) = v532;
    }
    if ( v531 )
    {
      if ( !*(_BYTE *)(v509 + 989) || v515 )
      {
        v535 = *(float *)(v510 + 292);
        v536 = *(float *)(v509 + 224);
        *((float *)&v616 + 1) = (float)((float)(v516 * v522)
                                      + (float)((float)((float)(v522 * v519) - (float)(v516 * v522)) * v523))
                              + (float)(*(float *)(v509 + 228) - *(float *)(v510 + 296));
        *(float *)&v616 = (float)((float)(v516 * v520)
                                + (float)((float)((float)(v520 * v519) - (float)(v516 * v520)) * v521))
                        + (float)(v536 - v535);
        sub_17194C(v186, &v616, v517, &v602, &v600);
      }
      else
      {
        sub_16EF60(&v600, v186, LODWORD(v592), LODWORD(v580));
        v533 = *(_DWORD *)(dword_381B58 + 6608);
        v534 = dword_381B58 + 6608;
        *(_BYTE *)(dword_381B58 + 6620) = v533 != 0;
        if ( v533 )
        {
          *(_WORD *)(v534 + 14) = 0;
          *(_DWORD *)(v534 + 8) = 0;
        }
        *(_DWORD *)(v534 + 20) = 0;
        *(_DWORD *)(v534 + 24) = 0;
        *(_DWORD *)v534 = 0;
        *(_DWORD *)(v534 + 36) = 0;
        *(_BYTE *)(v534 + 13) = 0;
        *(_BYTE *)(v534 + 16) = 0;
      }
    }
    if ( !v515 || LOBYTE(v619) || LOBYTE(v621) )
    {
      v537 = 31;
      if ( !LOBYTE(v621) )
        v537 = 30;
      if ( LOBYTE(v619) )
        v537 = 32;
      v538 = (unsigned __int64 *)(dword_381B58 + 5400 + 16 * v537 + 172);
      v539 = *(float *)(dword_381B58 + 5400);
      v540 = v538[1];
      v616 = *v538;
      LODWORD(v617) = v540;
      *((float *)&v617 + 1) = v539 * *((float *)&v540 + 1);
      v604[v515] = sub_165778((float *)&v616);
    }
    ++v515;
    v517 += 6;
  }
  while ( v594 != v515 );
  v196 = -1;
  if ( v576 )
  {
    v541 = 0;
    while ( 1 )
    {
      sub_171A1C(&v616, v186, v541);
      v542 = sub_166E14(v186, v541 + 4);
      sub_17AD64(&v616, v542, &v619, &v618, 32);
      if ( LOBYTE(v619) )
        break;
      if ( (_BYTE)v618 )
      {
        v545 = 4;
        if ( !(v541 << 31) )
          v545 = 3;
        *(_DWORD *)(v510 + 1100) = v545;
LABEL_698:
        v613 = *(_QWORD *)(v186 + 12);
        v621 = 0.0;
        v622 = 0.0;
        switch ( v541 )
        {
          case 0:
            v546 = *(float *)(v510 + 296);
            v547 = *(float *)(v509 + 228);
            v621 = 0.0;
            v622 = 0.0;
            goto LABEL_702;
          case 1:
            v548 = *(float *)(v510 + 292);
            v549 = 1.0;
            v550 = *(float *)(v509 + 224);
            v622 = 0.0;
            goto LABEL_704;
          case 2:
            v546 = *(float *)(v510 + 296);
            v547 = *(float *)(v509 + 228);
            v621 = 0.0;
            v622 = 1.0;
LABEL_702:
            *((float *)&v613 + 1) = (float)(v547 - v546) + 4.0;
            break;
          case 3:
            v548 = *(float *)(v510 + 292);
            v549 = 0.0;
            v550 = *(float *)(v509 + 224);
            v622 = 0.0;
LABEL_704:
            v621 = v549;
            *(float *)&v613 = (float)(v550 - v548) + 4.0;
            break;
          default:
            break;
        }
        sub_17194C(v186, &v613, &v621, &v602, &v600);
        v196 = v541;
      }
LABEL_706:
      if ( ++v541 == 4 )
        goto LABEL_707;
    }
    v543 = (unsigned __int8)v618;
    if ( *(float *)(v510 + 256) <= 0.04 && !(_BYTE)v618 )
      goto LABEL_706;
    v544 = 4;
    if ( !(v541 << 31) )
      v544 = 3;
    *(_DWORD *)(v510 + 1100) = v544;
    if ( !v543 )
      goto LABEL_706;
    goto LABEL_698;
  }
LABEL_707:
  v198 = v595;
  v551 = *(_DWORD *)(v510 + 556);
  --*(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 452);
  if ( v551 && *(_DWORD *)(v551 + 764) == v186 )
  {
    v552 = 0.0;
    v553 = *(_DWORD *)(v510 + 532);
    if ( v553 == 3 )
    {
      if ( !*(_BYTE *)(v509 + 249) )
      {
        v514 = 0.0;
        v552 = 0.0;
LABEL_715:
        if ( v514 != 0.0 )
        {
          v554 = *(float *)(v509 + 164);
          v555 = *(float *)(v509 + 168);
          v556 = *(float *)(v509 + 24);
          *(_BYTE *)(v510 + 591) = 1;
          if ( v554 < v555 )
            v555 = v554;
          v557 = dword_381B58;
          *(_BYTE *)(v510 + 576) = 0;
          v557 += 5400;
          v558 = (float)(v556 * 600.0) * v555;
          v559 = *(float *)v557;
          v560 = *(_QWORD *)(v557 + 692);
          v616 = *(_QWORD *)(v557 + 684);
          LODWORD(v617) = v560;
          v561 = (float)(int)v558;
          *((float *)&v617 + 1) = v559 * *((float *)&v560 + 1);
          v562 = sub_165778((float *)&v616);
          v563 = *(float *)(v186 + 28) + (float)(v514 * v561);
          v564 = *(float *)(v186 + 32) + (float)(v552 * v561);
          v604[0] = v562;
          sub_16EF60(&v600, v186, LODWORD(v563), LODWORD(v564));
        }
        goto LABEL_719;
      }
      sub_170850((int)&v616, 1, 0, 0, 0.0);
      v553 = *(_DWORD *)(v510 + 532);
      v552 = *((float *)&v616 + 1);
      v514 = *(float *)&v616;
    }
    if ( v553 == 4 )
    {
      sub_170850((int)&v616, 2, 0, 0, 0.0);
      v552 = *((float *)&v616 + 1);
      v514 = *(float *)&v616;
    }
    goto LABEL_715;
  }
LABEL_719:
  if ( *(float *)&v600 != 3.4028e38 )
  {
    v565 = *(unsigned __int8 *)(v186 + 9);
    v566 = HIDWORD(v600);
    v567 = dword_381B58;
    *(_DWORD *)(v186 + 28) = v600;
    *(_DWORD *)(v186 + 32) = v566;
    if ( !(v565 << 31) && *(float *)(v567 + 11512) <= 0.0 )
      *(_DWORD *)(v567 + 11512) = *(_DWORD *)(v567 + 28);
  }
  a3 = (unsigned int)v590;
  if ( *(float *)&v602 != 3.4028e38 )
  {
    v568 = dword_381B58;
    v569 = *(unsigned __int8 *)(v186 + 9) << 31;
    v570 = (float)(int)*((float *)&v602 + 1);
    *(float *)(v186 + 12) = (float)(int)*(float *)&v602;
    *(float *)(v186 + 16) = v570;
    if ( !v569 && *(float *)(v568 + 11512) <= 0.0 )
      *(_DWORD *)(v568 + 11512) = *(_DWORD *)(v568 + 28);
  }
  v197 = v609;
  v571 = *(_QWORD *)(v186 + 28);
  *(_DWORD *)(v186 + 304) = 0;
  *(_DWORD *)(v186 + 308) = 1;
  *(_QWORD *)(v186 + 20) = v571;
LABEL_343:
  v199 = *(float *)(v197 + 20);
  *(_BYTE *)(v197 + 131) = v196;
  if ( v199 <= 0.0 || v582 || v575 )
    v200 = *(float *)(v598 + 940) * 16.0;
  else
    v200 = v199 * 0.65;
  v201 = *(_QWORD *)(v197 + 28);
  *(_QWORD *)(v197 + 36) = v201;
  v202 = (__int64 *)v605;
  *(float *)(v197 + 564) = (float)(int)v200;
  if ( v585 != 50331648 )
    v202 = (__int64 *)(v198 + 464);
  if ( v184 )
    v202 = (__int64 *)v605;
  v203 = v202[1];
  v602 = *v202;
  v603 = v203;
  v204 = *(float *)(v197 + 16);
  v205 = *(float *)(v197 + 12);
  v206 = v204 + *(float *)(v197 + 24);
  v207 = HIDWORD(v602);
  v208 = v602;
  v209 = *((float *)&v203 + 1);
  v210 = *(float *)&v203;
  if ( v205 >= *(float *)&v602 )
    v208 = *(_DWORD *)(v197 + 12);
  if ( v204 >= *((float *)&v602 + 1) )
    v207 = *(_DWORD *)(v197 + 16);
  if ( v206 < *((float *)&v603 + 1) )
    v209 = v204 + *(float *)(v197 + 24);
  if ( (float)(v205 + v199) < *(float *)&v603 )
    v210 = v205 + v199;
  *(_DWORD *)(v197 + 484) = v207;
  v211 = 0.0;
  v212 = *(unsigned __int8 *)(v197 + 8);
  *(float *)(v197 + 492) = v209;
  *(_DWORD *)(v197 + 480) = v208;
  *(float *)(v197 + 488) = v210;
  if ( !(v212 << 31) )
    v211 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v197 + 628));
  v213 = v204 + v211;
  v214 = *(float *)(v197 + 72);
  v215 = v599;
  v600 = *(_QWORD *)(v197 + 12);
  v216 = v214 + *(float *)&v600;
  *(float *)&v601 = v205 + *(float *)&v201;
  v217 = 0.0;
  *((float *)&v601 + 1) = v213;
  v218 = *(_BYTE *)(v197 + 9);
  *(float *)(v197 + 496) = v214 + *(float *)&v600;
  if ( (v218 & 4) != 0 )
    v217 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(v197 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v197 + 628)));
  v219 = v213 + v217;
  v220 = v199 + *(float *)(v197 + 12);
  v221 = v214;
  if ( *(float *)(v197 + 112) >= v214 )
    v221 = *(float *)(v197 + 112);
  v222 = (float)(*(float *)(v197 + 60) * 0.5) - v214;
  if ( *(float *)(v197 + 116) >= v214 )
    v214 = *(float *)(v197 + 116);
  v223 = v206 - v214;
  v224 = v220 - v221;
  v225 = (float *)(v598 + 64);
  if ( (a3 & 0x401) == 1 )
    v225 = (float *)(v197 + 72);
  v226 = (_QWORD *)(v197 + 528);
  v227 = v219 + *v225;
  v228 = (float)(int)v222;
  if ( (int)v222 < 1 )
    v228 = 0.0;
  *(float *)(v197 + 500) = v227;
  *(float *)(v197 + 504) = v224;
  *(float *)(v197 + 508) = v223;
  *(float *)(v197 + 532) = (float)(int)(float)(v227 + 0.5);
  *(float *)(v197 + 540) = (float)(int)(float)(v223 + 0.5);
  *(float *)(v197 + 536) = (float)(int)(float)((float)(v224 + 0.5) - v228);
  *(float *)(v197 + 528) = (float)(int)(float)((float)(v216 + 0.5) + v228);
  v229 = (_QWORD *)(v197 + 512);
  v230 = v226[1];
  *v229 = *v226;
  v229[1] = v230;
  sub_16F848();
  sub_172794(*(_DWORD *)(v609 + 636));
  sub_172D4E(*(_DWORD *)(v609 + 636), *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v598 + 936) + 56) + 8));
  v231 = 0;
  sub_16DDF0(&v602, &v603, 0);
  if ( (a3 & 0x8000000) != 0 )
  {
    v232 = v609;
    v231 = 0;
    if ( v232 == sub_1683BC() )
      v231 = *(_DWORD *)(v232 + 168) < 1;
  }
  v233 = *(_DWORD *)(v599 + 192);
  if ( v233 )
    v234 = v609 == *(_DWORD *)(v233 + 764);
  else
    v234 = 0;
  if ( v231 || v234 )
  {
    v235 = 736;
    if ( v231 )
      v235 = 752;
    v236 = *(float *)(v599 + 488) * *(float *)(dword_381B58 + 5400);
    v237 = *(_QWORD *)(dword_381B58 + 5400 + v235 + 180);
    v616 = *(_QWORD *)(dword_381B58 + 5400 + v235 + 172);
    LODWORD(v617) = v237;
    *((float *)&v617 + 1) = *((float *)&v237 + 1) * v236;
    v238 = sub_165778((float *)&v616);
    sub_174194(*(_DWORD *)(v609 + 636), (int)v605, (int)&v606, v238, 0.0, 15);
  }
  if ( v234 && v609 == *(_DWORD *)(v599 + 192) )
  {
    v239 = *(float *)(v609 + 12);
    v240 = *(float *)(v609 + 16);
    v241 = *(float *)(v598 + 940);
    v242 = v239 - v241;
    v243 = (float)(v239 + *(float *)(v609 + 20)) + v241;
    v244 = (float)(v240 + *(float *)(v609 + 24)) + v241;
    *((float *)&v613 + 1) = v240 - v241;
    *(float *)&v613 = v242;
    v614 = v243;
    v615 = v244;
    if ( v605[0] < v242 || *(float *)&v606 > v243 )
    {
      v245 = *(_DWORD *)(v609 + 636);
      v246 = *(float *)(v599 + 204) * 0.25;
      v247 = *(float *)(dword_381B58 + 5400);
      v248 = *(_QWORD *)(dword_381B58 + 6300);
      v616 = *(_QWORD *)(dword_381B58 + 6292);
      LODWORD(v617) = v248;
      *((float *)&v617 + 1) = *((float *)&v248 + 1) * (float)(v246 * v247);
      v249 = sub_165778((float *)&v616);
      sub_174194(v245, (int)&v613, (int)&v614, v249, *(float *)(v598 + 8), 15);
    }
  }
  v250 = *(_DWORD *)(v599 + 188);
  if ( !v250 )
    v250 = *(_DWORD *)(v599 + 124);
  if ( v587 )
  {
    v251 = 1;
  }
  else if ( v250 )
  {
    v251 = *(_DWORD *)(v609 + 768) == *(_DWORD *)(v250 + 768);
  }
  else
  {
    v251 = 0;
  }
  v252 = v609;
  v253 = dword_381B58;
  v254 = dword_381B58 + 5400;
  v255 = *(float *)(v609 + 68);
  v256 = dword_381B58 + 6748;
  v257 = *(float *)(v609 + 72);
  if ( *(_BYTE *)(v609 + 125) )
  {
    v258 = *(_DWORD *)(dword_381B58 + 5468);
    v259 = 12;
    *(float *)(dword_381B58 + 5468) = v257;
    if ( v251 )
    {
      v259 = 12;
      if ( !*(_BYTE *)(v256 + 186) )
        v259 = 11;
    }
    v260 = (unsigned __int64 *)(v253 + 16 * v259 + 5572);
    v261 = *(float *)v254;
    v262 = v260[1];
    v616 = *v260;
    LODWORD(v617) = v262;
    *((float *)&v617 + 1) = v261 * *((float *)&v262 + 1);
    v263 = sub_165778((float *)&v616);
    sub_1661EC(*(float *)&v600, *((float *)&v600 + 1), *(float *)&v601, *((float *)&v601 + 1), v263, 1, v255);
    *(_DWORD *)(v254 + 68) = v258;
    goto LABEL_485;
  }
  v264 = *(_DWORD *)(v609 + 8);
  if ( (v264 & 0x80) != 0 )
  {
    v272 = *(_DWORD *)(v609 + 8) & 1;
  }
  else
  {
    v265 = 3;
    if ( (v264 & 0x1000000) == 0 )
      v265 = 2;
    if ( (v264 & 0x6000000) != 0 )
      v265 = 4;
    v266 = *(_QWORD *)(dword_381B58 + 16 * v265 + 5580);
    v267 = *(float *)v254;
    v616 = *(_QWORD *)(dword_381B58 + 16 * v265 + 5572);
    LODWORD(v617) = v266;
    *((float *)&v617 + 1) = v267 * *((float *)&v266 + 1);
    v268 = sub_165778((float *)&v616);
    if ( (*(_BYTE *)(v254 + 1272) & 0x40) != 0 )
    {
      v269 = *(float *)v256;
      if ( *(float *)v256 != 1.0 )
      {
        v270 = v269 < 0.0;
        if ( v269 > 1.0 )
          v269 = 1.0;
        if ( v270 )
          v269 = 0.0;
        v268 = v268 & 0xFFFFFF | ((int)(float)((float)(v269 * 255.0) + 0.5) << 24);
      }
    }
    v271 = *(_DWORD *)(v252 + 636);
    v272 = v264 & 1;
    if ( (v264 & 1) != 0 )
    {
      v273 = 15;
      v274 = 0.0;
    }
    else
    {
      v273 = 12;
      v274 = (float)(*(float *)(v254 + 60) + *(float *)(v254 + 60))
           + (float)(*(float *)(v254 + 948) * *(float *)(v252 + 628));
    }
    v275 = *(float *)(v252 + 12);
    v276 = *(float *)(v252 + 16);
    v277 = *(float *)(v252 + 20);
    v278 = *(float *)(v252 + 24);
    *(float *)&v616 = v275 + 0.0;
    *((float *)&v616 + 1) = v274 + v276;
    *((float *)&v613 + 1) = v276 + v278;
    *(float *)&v613 = v275 + v277;
    sub_174194(v271, (int)&v616, (int)&v613, v268, v255, v273);
  }
  if ( !v272 )
  {
    v279 = 160;
    if ( v251 )
      v279 = 176;
    v280 = (unsigned __int64 *)(v279 + dword_381B58 + 5400 + 172);
    v281 = *(float *)(dword_381B58 + 5400);
    v282 = v280[1];
    v616 = *v280;
    LODWORD(v617) = v282;
    *((float *)&v617 + 1) = v281 * *((float *)&v282 + 1);
    v283 = sub_165778((float *)&v616);
    sub_174194(*(_DWORD *)(v252 + 636), (int)&v600, (int)&v601, v283, v255, 3);
  }
  if ( (v264 & 0x400) != 0 )
  {
    sub_171AD0(&v613, v252);
    v284 = *(float *)(v252 + 12);
    v285 = v255;
    v286 = *(float *)(v252 + 16);
    v287 = v284 + *(float *)(v252 + 20);
    v288 = v286 + *(float *)(v252 + 24);
    if ( *((float *)&v613 + 1) >= v286 )
      v286 = *((float *)&v613 + 1);
    if ( *(float *)&v613 >= v284 )
      LODWORD(v284) = v613;
    if ( v614 < v287 )
      v287 = v614;
    if ( v615 < v288 )
      v288 = v615;
    v289 = v257 + v284;
    v613 = __PAIR64__(LODWORD(v286), LODWORD(v284));
    v290 = *(_DWORD *)(v252 + 636);
    v614 = v287;
    v615 = v288;
    v291 = *(_QWORD *)(dword_381B58 + 5780);
    v292 = *(_QWORD *)(dword_381B58 + 5788);
    v619 = v287 - v257;
    v293 = *(float *)(dword_381B58 + 5400);
    v622 = v286 + 0.0;
    v621 = v289;
    v616 = v291;
    v617 = v292;
    v620 = v288;
    if ( !v272 )
      v285 = 0.0;
    *((float *)&v617 + 1) = v293 * *((float *)&v292 + 1);
    v294 = sub_165778((float *)&v616);
    sub_174194(v290, (int)&v621, (int)&v619, v294, v285, 3);
    v295 = *(float *)(v254 + 68);
    if ( v295 > 0.0 && v615 < (float)(*(float *)(v252 + 16) + *(float *)(v252 + 24)) )
    {
      v621 = *(float *)&v613;
      v619 = v614;
      v620 = v615;
      v622 = v615;
      v296 = *(_DWORD *)(v252 + 636);
      v297 = *(float *)(dword_381B58 + 5400);
      v298 = *(_QWORD *)(dword_381B58 + 5660);
      v616 = *(_QWORD *)(dword_381B58 + 5652);
      LODWORD(v617) = v298;
      *((float *)&v617 + 1) = v297 * *((float *)&v298 + 1);
      v299 = sub_165778((float *)&v616);
      v572 = v295;
      sub_173FCC(v296, (int)&v621, (int)&v619, v299);
    }
  }
  if ( *(_BYTE *)(v252 + 120) )
    sub_17B908(0);
  if ( *(_BYTE *)(v252 + 121) )
    sub_17B908(1);
  if ( (v264 & 2) == 0 )
  {
    v300 = v255 + v257;
    v301 = 0;
    v302 = (char *)&unk_BB364;
    v303 = (float)(int)v191;
    do
    {
      v304 = v303;
      v305 = v257;
      v306 = *((float *)v302 - 1);
      v307 = *(float *)v302;
      if ( (v301 & 1) == 0 )
      {
        v304 = v257;
        v305 = v303;
      }
      v308 = *(_DWORD *)(v252 + 636);
      v309 = *(_QWORD *)(v308 + 88);
      v310 = *(float *)(v252 + 12)
           + (float)((float)((float)(*(float *)(v252 + 12) + *(float *)(v252 + 20)) - *(float *)(v252 + 12))
                   * *((float *)v302 - 3));
      v311 = *(float *)(v252 + 16)
           + (float)((float)((float)(*(float *)(v252 + 16) + *(float *)(v252 + 24)) - *(float *)(v252 + 16))
                   * *((float *)v302 - 2));
      *(float *)&v616 = v310 + (float)(v305 * v306);
      *((float *)&v616 + 1) = v311 + (float)(v304 * v307);
      if ( (_DWORD)v309 == HIDWORD(v309) )
      {
        v312 = v309 + 1;
        if ( (_DWORD)v309 )
          v313 = v309 + (int)v309 / 2;
        else
          v313 = 8;
        if ( v313 > v312 )
          v312 = v313;
        if ( (int)v309 < v312 )
        {
          if ( dword_381B58 )
            ++*(_DWORD *)(dword_381B58 + 880);
          v314 = (void *)off_2390AC(8 * v312, dword_381B60);
          v315 = *(const void **)(v308 + 96);
          v316 = v314;
          if ( v315 )
          {
            j_memcpy(v314, v315, 8 * *(_DWORD *)(v308 + 88));
            v317 = *(_DWORD *)(v308 + 96);
            if ( v317 && dword_381B58 )
              --*(_DWORD *)(dword_381B58 + 880);
            off_2390B0(v317, dword_381B60);
          }
          LODWORD(v309) = *(_DWORD *)(v308 + 88);
          *(_DWORD *)(v308 + 92) = v312;
          *(_DWORD *)(v308 + 96) = v316;
        }
      }
      *(_QWORD *)(*(_DWORD *)(v308 + 96) + 8 * v309) = v616;
      ++*(_DWORD *)(v308 + 88);
      v318 = *(_DWORD *)(v252 + 636);
      v319 = *(_QWORD *)(v318 + 88);
      *(float *)&v616 = v310 + (float)(v304 * v306);
      *((float *)&v616 + 1) = v311 + (float)(v305 * v307);
      if ( (_DWORD)v319 == HIDWORD(v319) )
      {
        v215 = v599;
        v320 = v319 + 1;
        if ( (_DWORD)v319 )
          v321 = v319 + (int)v319 / 2;
        else
          v321 = 8;
        if ( v321 > v320 )
          v320 = v321;
        if ( (int)v319 >= v320 )
          goto LABEL_473;
        if ( dword_381B58 )
          ++*(_DWORD *)(dword_381B58 + 880);
        v322 = (void *)off_2390AC(8 * v320, dword_381B60);
        v323 = *(const void **)(v318 + 96);
        v324 = v322;
        if ( v323 )
        {
          j_memcpy(v322, v323, 8 * *(_DWORD *)(v318 + 88));
          v325 = *(_DWORD *)(v318 + 96);
          if ( v325 && dword_381B58 )
            --*(_DWORD *)(dword_381B58 + 880);
          off_2390B0(v325, dword_381B60);
        }
        LODWORD(v319) = *(_DWORD *)(v318 + 88);
        *(_DWORD *)(v318 + 92) = v320;
        *(_DWORD *)(v318 + 96) = v324;
      }
      v215 = v599;
LABEL_473:
      HIDWORD(v319) = *(_DWORD *)(v318 + 96);
      v326 = HIDWORD(v616);
      *(_DWORD *)(HIDWORD(v319) + 8 * v319) = v616;
      *(_DWORD *)(HIDWORD(v319) + 8 * v319 + 4) = v326;
      ++*(_DWORD *)(v318 + 88);
      v327 = *(_QWORD *)(v302 + 4);
      v328 = *(_DWORD *)(v252 + 636);
      v573 = *((_DWORD *)v302 + 2);
      *((float *)&v616 + 1) = v311 + (float)(v307 * v300);
      *(float *)&v616 = v310 + (float)(v306 * v300);
      sub_1739BC(v328, &v616, LODWORD(v255), v327, v573);
      v329 = *(_DWORD *)(v252 + 636);
      sub_173720(v329, *(_DWORD *)(v329 + 96), *(_DWORD *)(v329 + 88), v604[v301]);
      v302 += 24;
      *(_DWORD *)(v329 + 88) = 0;
      ++v301;
    }
    while ( v594 != v301 );
  }
  v330 = *(float *)(v252 + 72);
  v331 = *(int *)(v252 + 68);
  a3 = dword_381B58 + 5400;
  if ( v330 > 0.0 && (*(_BYTE *)(v252 + 8) & 0x80) == 0 )
  {
    v332 = *(_QWORD *)(dword_381B58 + 5652);
    v333 = *(_QWORD *)(dword_381B58 + 5660);
    v334 = *(float *)(v252 + 16) + *(float *)(v252 + 24);
    v335 = *(_DWORD *)(v252 + 636);
    *(float *)&v613 = *(float *)(v252 + 12) + *(float *)(v252 + 20);
    *((float *)&v613 + 1) = v334;
    v336 = *(float *)a3;
    v616 = v332;
    LODWORD(v617) = v333;
    *((float *)&v617 + 1) = v336 * *((float *)&v333 + 1);
    v337 = sub_165778((float *)&v616);
    sub_1740F8(v335, v252 + 12, &v613, v337, v331, 15, LODWORD(v330));
  }
  v338 = *(char *)(v252 + 131);
  if ( v338 != -1 )
  {
    v339 = (unsigned __int8)byte_381BE0;
    __dmb(0xBu);
    if ( !(v339 << 31) && j___cxa_guard_acquire((__guard *)&byte_381BE0) )
    {
      qword_381B70[0] = 0x3F80000000000000LL;
      qword_381B70[1] = 0LL;
      qword_381B70[2] = 1065353216LL;
      qword_381B70[3] = 0xBF8000004096CBE4LL;
      qword_381B70[4] = 0x3F80000000000000LL;
      qword_381B70[5] = 0x3F80000000000000LL;
      qword_381B70[6] = 1065353216LL;
      qword_381B70[7] = 0xBF80000000000000LL;
      qword_381B70[8] = 0x3F8000003F800000LL;
      qword_381B70[9] = 0x3F80000000000000LL;
      qword_381B70[10] = 0x3F8000003FC90FDBLL;
      qword_381B70[11] = 0LL;
      qword_381B70[12] = 1065353216LL;
      qword_381B70[13] = 0x40490FDB00000000LL;
      j___cxa_guard_release((__guard *)&byte_381BE0);
    }
    sub_171A1C(&v613, v252, v338);
    v340 = *((float *)&v613 + 1);
    v341 = (float *)qword_381B70 + 7 * v338;
    v342 = v615 - *((float *)&v613 + 1);
    v343 = *(float *)&v613;
    v344 = v614 - *(float *)&v613;
    v345 = *(_DWORD *)(v252 + 636);
    v574 = v341[6];
    v346 = (float)((float)(*(float *)&v613 + (float)((float)(v614 - *(float *)&v613) * v341[2])) + 0.5)
         + (float)(*(float *)&v331 * *v341);
    *((float *)&v616 + 1) = (float)((float)(*((float *)&v613 + 1)
                                          + (float)((float)(v615 - *((float *)&v613 + 1)) * v341[3]))
                                  + 0.5)
                          + (float)(*(float *)&v331 * v341[1]);
    *(float *)&v616 = v346;
    sub_173B2C(v345, (int)&v616, v331, COERCE_INT(v574 + -0.7854), v574, 10);
    v347 = v340 + (float)(v342 * v341[5]);
    v348 = *((int *)v341 + 6);
    v349 = v341[1];
    v350 = *(_DWORD *)(v252 + 636);
    *(float *)&v616 = (float)((float)(v343 + (float)(v344 * v341[4])) + 0.5) + (float)(*(float *)&v331 * *v341);
    *((float *)&v616 + 1) = (float)(v347 + 0.5) + (float)(*(float *)&v331 * v349);
    sub_173B2C(v350, (int)&v616, v331, v348, *(float *)&v348 + 0.7854, 10);
    v351 = *(_DWORD *)(v252 + 636);
    v352 = v330;
    v353 = *(_QWORD *)(dword_381B58 + 6044);
    v354 = *(float *)(dword_381B58 + 5400);
    v616 = *(_QWORD *)(dword_381B58 + 6036);
    v617 = v353;
    if ( v330 <= 2.0 )
      v352 = 2.0;
    *((float *)&v617 + 1) = v354 * *((float *)&v617 + 1);
    v355 = sub_165778((float *)&v616);
    sub_172FDA(v351, *(_DWORD *)(v351 + 96), *(_DWORD *)(v351 + 88), v355, 0, v352);
    *(_DWORD *)(v351 + 88) = 0;
  }
  v356 = *(float *)(a3 + 68);
  LOBYTE(a3) = (_BYTE)v590;
  if ( v356 > 0.0 && !(*(unsigned __int8 *)(v252 + 8) << 31) )
  {
    v357 = *(float *)(v252 + 12);
    v358 = *(float *)(v252 + 20);
    v359 = *(_DWORD *)(v252 + 636);
    v360 = *(_QWORD *)(dword_381B58 + 5652);
    v361 = *(_QWORD *)(dword_381B58 + 5660);
    v362 = (float)(*(float *)(v252 + 16)
                 + (float)((float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
                         + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v252 + 628))))
         + -1.0;
    *(float *)&v613 = v330 + v357;
    *((float *)&v613 + 1) = v362;
    v622 = v362;
    v621 = (float)(v357 + v358) - v330;
    v363 = *(float *)(dword_381B58 + 5400);
    v616 = v360;
    LODWORD(v617) = v361;
    *((float *)&v617 + 1) = v363 * *((float *)&v361 + 1);
    v364 = sub_165778((float *)&v616);
    v572 = v356;
    sub_173FCC(v359, (int)&v613, (int)&v621, v364);
  }
LABEL_485:
  v365 = v609;
  v366 = *(_DWORD *)(v215 + 192);
  v367 = v595;
  if ( v366 == v609 )
  {
    v368 = *(float *)(v366 + 12);
    v369 = *(float *)(v366 + 16);
    v370 = v368 + *(float *)(v366 + 20);
    v371 = v369 + *(float *)(v366 + 24);
    v372 = *(float *)(v366 + 68);
    v373 = *(float *)(v598 + 940);
    v374 = *(float *)(v598 + 8);
    v375 = v368 - v373;
    v376 = v369 - v373;
    v377 = v371 + v373;
    v378 = v370 + v373;
    if ( v372 >= v374 )
      v374 = *(float *)(v366 + 68);
    v613 = __PAIR64__(LODWORD(v376), LODWORD(v375));
    v615 = v377;
    v614 = v370 + v373;
    if ( v605[0] >= v375 && *(float *)&v606 <= v378 )
    {
      v374 = v372;
      v379 = -1.0 - v373;
      v615 = v377 + v379;
      v614 = v378 + v379;
      *((float *)&v613 + 1) = v376 - v379;
      *(float *)&v613 = v375 - v379;
    }
    v380 = *(_DWORD *)(v366 + 636);
    v381 = *(_QWORD *)(dword_381B58 + 6300);
    v382 = *(float *)(v215 + 204) * *(float *)(dword_381B58 + 5400);
    v616 = *(_QWORD *)(dword_381B58 + 6292);
    LODWORD(v617) = v381;
    *((float *)&v617 + 1) = *((float *)&v381 + 1) * v382;
    v383 = sub_165778((float *)&v616);
    sub_1740F8(v380, &v613, &v614, v383, LODWORD(v374), -1, 1077936128);
    v365 = v609;
  }
  v384 = *(float *)(v365 + 12);
  v385 = *(float *)(v365 + 88);
  v386 = *(float *)(v365 + 16);
  v387 = *(float *)(v365 + 92);
  v388 = *(float *)(v365 + 60);
  v389 = *(float *)(v365 + 64);
  v390 = 0.0;
  v391 = *(_DWORD *)(v365 + 8);
  v392 = v391 & 1;
  *(float *)(v365 + 544) = (float)(v384 - v385) + v388;
  v393 = 0.0;
  if ( (v391 & 1) == 0 )
    v393 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v365 + 628));
  v394 = v391 & 0x400;
  if ( v394 )
    v390 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(v365 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v365 + 628)));
  v395 = (float)((float)((float)(v386 - v387) + v389) + v393) + v390;
  v396 = *(float *)(v365 + 52);
  *(float *)(v365 + 548) = v395;
  if ( v396 == 0.0 )
  {
    v397 = *(float *)(v365 + 112);
    v398 = *(float *)(v365 + 72);
    if ( v397 < v398 )
      v398 = *(float *)(v365 + 112);
    v396 = (float)(*(float *)(v365 + 20) - v397) + v398;
  }
  v399 = (float)((float)(v384 - v385) - v388) + v396;
  v400 = *(float *)(v365 + 56);
  *(float *)(v365 + 552) = v399;
  if ( v400 == 0.0 )
  {
    v401 = *(float *)(v365 + 116);
    v402 = *(float *)(v365 + 72);
    if ( v401 < v402 )
      v402 = *(float *)(v365 + 116);
    v400 = (float)(*(float *)(v365 + 24) - v401) + v402;
  }
  *(_DWORD *)(v365 + 440) = 0;
  *(_DWORD *)(v365 + 444) = 0;
  v403 = (float)(v388 + 0.0) - v385;
  *(float *)(v365 + 436) = v403;
  *(float *)(v365 + 556) = (float)((float)(v386 - v387) - v389) + v400;
  v404 = 0.0;
  if ( !v392 )
    v404 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v365 + 628));
  v405 = v403 + 0.0;
  v406 = 0.0;
  if ( v394 )
    v406 = (float)(*(float *)(dword_381B58 + 5460) + *(float *)(dword_381B58 + 5460))
         + (float)(*(float *)(v365 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(v365 + 628)));
  v407 = v404 + v406;
  v408 = *(float *)(v365 + 116);
  v409 = *(float *)(v365 + 48);
  v410 = 0;
  v411 = *(_DWORD *)(v365 + 336);
  v412 = *(_DWORD *)(v365 + 316);
  *(_DWORD *)(v365 + 248) = 0;
  *(_DWORD *)(v365 + 252) = 0;
  *(_BYTE *)(v365 + 322) = 0;
  v413 = v389 + v407;
  v414 = *(float *)(v365 + 32);
  *(float *)(v365 + 216) = v405 + v384;
  v415 = v413 - v387;
  v416 = v409 - (float)(v414 - v408);
  v417 = v386 + v415;
  if ( v416 <= 0.0 )
    v416 = 0.0;
  *(_QWORD *)(v365 + 232) = 0LL;
  *(_QWORD *)(v365 + 240) = 0LL;
  *(_DWORD *)(v365 + 312) = v412;
  *(_DWORD *)(v365 + 316) = 0;
  *(float *)(v365 + 220) = v417;
  v418 = *(_DWORD *)(v365 + 216);
  v419 = *(_DWORD *)(v365 + 220);
  *(_BYTE *)(v365 + 320) = 0;
  *(_BYTE *)(v365 + 321) = v416 > 0.0;
  *(_QWORD *)(v365 + 200) = __PAIR64__(v419, v418);
  *(_QWORD *)(v365 + 208) = __PAIR64__(v419, v418);
  v420 = (_DWORD *)v365;
  *(_DWORD *)(v365 + 224) = v418;
  *(_DWORD *)(v365 + 228) = v419;
  if ( v411 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v421 = (void *)off_2390AC(0, dword_381B60);
    v422 = *(const void **)(v365 + 340);
    v423 = v421;
    if ( v422 )
    {
      j_memcpy(v421, v422, 4 * *(_DWORD *)(v365 + 332));
      v424 = *(_DWORD *)(v365 + 340);
      if ( v424 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v424, dword_381B60);
    }
    *(_DWORD *)(v365 + 336) = 0;
    *(_DWORD *)(v365 + 340) = v423;
    v420 = (_DWORD *)v609;
    LOBYTE(a3) = (_BYTE)v590;
    v367 = v595;
  }
  v425 = 1;
  v420[87] = 1;
  *(_DWORD *)(v365 + 332) = 0;
  if ( v367 )
  {
    v425 = *(_DWORD *)(v367 + 348);
    v410 = *(_DWORD *)(v367 + 364);
  }
  v426 = v420[95];
  v420[90] = -1;
  v420[91] = v410;
  v427 = v420[141];
  v428 = v420;
  v420[88] = v425;
  v420[89] = -1;
  v420[92] = v427;
  v420[93] = -1082130432;
  if ( v426 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v429 = (void *)off_2390AC(0, dword_381B60);
    v430 = (const void *)v420[96];
    v431 = v429;
    if ( v430 )
    {
      j_memcpy(v429, v430, 4 * v420[94]);
      v432 = v420[96];
      if ( v432 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v432, dword_381B60);
    }
    v420[95] = 0;
    v420[96] = v431;
    v428 = (_DWORD *)v609;
    LOBYTE(a3) = (_BYTE)v590;
  }
  v433 = v428[98];
  v420[94] = 0;
  v434 = v428;
  if ( v433 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v435 = (float *)off_2390AC(0, dword_381B60);
    v436 = (const void *)v428[99];
    a3 = (unsigned int)v435;
    if ( v436 )
    {
      j_memcpy(v435, v436, 4 * v428[97]);
      v437 = v428[99];
      if ( v437 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v437, dword_381B60);
    }
    v428[98] = 0;
    v428[99] = a3;
    v434 = (_DWORD *)v609;
    LOBYTE(a3) = (_BYTE)v590;
  }
  v438 = v434[101];
  v428[97] = 0;
  v439 = v434;
  if ( v438 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v440 = (void *)off_2390AC(0, dword_381B60);
    v441 = (const void *)v434[102];
    v442 = v440;
    if ( v441 )
    {
      j_memcpy(v440, v441, 4 * v434[100]);
      v443 = v434[102];
      if ( v443 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v443, dword_381B60);
    }
    v434[101] = 0;
    v434[102] = v442;
    v439 = (_DWORD *)v609;
    LOBYTE(a3) = (_BYTE)v590;
  }
  v439[112] = 0;
  v434[100] = 0;
  v444 = v439[104];
  v439[86] = v439 + 151;
  v445 = v444 <= -1;
  v446 = (int)v439;
  v439[64] = 0;
  v439[65] = 0;
  if ( v445 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v447 = (void *)off_2390AC(0, dword_381B60);
    v448 = (const void *)v439[105];
    v449 = v447;
    if ( v448 )
    {
      j_memcpy(v447, v448, 44 * v439[103]);
      v450 = v439[105];
      if ( v450 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v450, dword_381B60);
    }
    v439[104] = 0;
    v439[105] = v449;
    v446 = v609;
    LOBYTE(a3) = (_BYTE)v590;
  }
  v451 = *(_DWORD *)(v598 + 68);
  v439[103] = 0;
  sub_17BDB8(v446 + 568, 3, v451, v589, LODWORD(v572));
  if ( v596 )
  {
    v452 = (_DWORD *)v609;
    v453 = *(_DWORD *)(v595 + 364);
    if ( *(_DWORD *)(v609 + 364) != v453 )
    {
      v455 = *(_DWORD *)(v609 + 380);
      v454 = *(_DWORD *)(v609 + 376);
      *(_DWORD *)(v609 + 364) = v453;
      if ( v454 == v455 )
      {
        v456 = v454 + 1;
        if ( v454 )
          v457 = v454 + v454 / 2;
        else
          v457 = 8;
        if ( v457 > v456 )
          v456 = v457;
        if ( v454 < v456 )
        {
          if ( dword_381B58 )
            ++*(_DWORD *)(dword_381B58 + 880);
          v458 = (float *)off_2390AC(4 * v456, dword_381B60);
          v459 = (const void *)v452[96];
          a3 = (unsigned int)v458;
          if ( v459 )
          {
            j_memcpy(v458, v459, 4 * v452[94]);
            v460 = v452[96];
            if ( v460 && dword_381B58 )
              --*(_DWORD *)(dword_381B58 + 880);
            off_2390B0(v460, dword_381B60);
          }
          v452[95] = v456;
          v452[96] = a3;
          v454 = v452[94];
          LOBYTE(a3) = (_BYTE)v590;
        }
      }
      *(_DWORD *)(v452[96] + 4 * v454) = v452[91];
      ++v452[94];
    }
  }
  v461 = v609;
  v462 = *(_DWORD *)(v609 + 144);
  if ( v462 >= 1 )
    *(_DWORD *)(v609 + 144) = v462 - 1;
  v463 = *(_DWORD *)(v461 + 148);
  v103 = v578;
  if ( v463 >= 1 )
    *(_DWORD *)(v461 + 148) = v463 - 1;
  if ( v587 )
  {
    sub_168010(v461);
    sub_16F910(v609, 0);
  }
  if ( (a3 & 1) == 0 )
  {
    v464 = v609;
    v465 = dword_381B58;
    *(_DWORD *)(v609 + 304) = 1;
    *(_DWORD *)(v464 + 308) = 2;
    v466 = *(_DWORD *)(v464 + 364);
    v467 = *(float *)(v465 + 5456);
    v468 = *(float *)(v465 + 6344);
    v469 = v467;
    *(_DWORD *)(v464 + 364) = v466 | 0x10;
    v470 = *(_DWORD *)(v464 + 8);
    v621 = 0.0;
    v622 = 0.0;
    v619 = 0.0;
    v620 = 0.0;
    v471 = (float *)(v465 + 5428);
    if ( a2 )
    {
      v469 = v467 + v468;
      v622 = *((float *)&v600 + 1);
      v621 = (float)(*(float *)&v601 - (float)(v467 + v468)) - v467;
    }
    if ( (v470 & 0x20) == 0 )
    {
      v472 = *(_DWORD *)(v465 + 5436);
      if ( v472 )
      {
        if ( v472 == 1 )
        {
          v469 = v468 + v469;
          v620 = *((float *)&v600 + 1);
          v619 = (float)(*(float *)&v601 - v469) - v467;
        }
      }
      else
      {
        v620 = *((float *)&v600 + 1);
        v473 = (float)(v467 + *(float *)&v600) - v467;
        v467 = v467 + v468;
        v619 = v473;
      }
      v474 = sub_166AD4(v464, "#COLLAPSE", 0);
      if ( sub_17B36C(v474, &v619) )
        *(_BYTE *)(v464 + 126) = 1;
    }
    if ( a2 )
    {
      v475 = sub_166AD4(v464, "#CLOSE", 0);
      if ( sub_17B1A4(v475, &v621) )
        *a2 = 0;
    }
    v476 = v470 & 0x100000;
    v477 = 0.0;
    *(_DWORD *)(v464 + 364) = v466;
    *(_DWORD *)(v464 + 304) = 0;
    *(_DWORD *)(v464 + 308) = 1;
    if ( v476 )
    {
      sub_1660A4((float *)&v616, (unsigned int)"*", 0, 0, -1.0);
      v477 = *(float *)&v616;
    }
    sub_1660A4((float *)&v616, (unsigned int)a1, 0, 1, -1.0);
    *(float *)&v618 = v477 + *(float *)&v616;
    *((float *)&v618 + 1) = *((float *)&v616 + 1) + 0.0;
    v478 = v471[7];
    if ( v467 > v478 )
      v467 = v467 + v471[13];
    if ( v469 > v478 )
      v469 = v469 + v471[13];
    v479 = *v471;
    if ( *v471 <= 0.0 || v479 >= 1.0 )
    {
      v482 = *(float *)&v600;
      v483 = *(float *)&v601;
    }
    else
    {
      v480 = v469;
      v481 = v479 + -0.5;
      v482 = *(float *)&v600;
      v483 = *(float *)&v601;
      if ( v467 >= v469 )
        v480 = v467;
      v484 = fabsf(v481);
      v485 = 1.0 - (float)(v484 + v484);
      v486 = (float)((float)((float)(*(float *)&v601 - *(float *)&v600) - v467) - v469)
           - (float)(v477 + *(float *)&v616);
      v487 = v485;
      if ( v485 > 1.0 )
        v487 = 1.0;
      if ( v480 < v486 )
        v486 = v480;
      if ( v485 < 0.0 )
        v487 = 0.0;
      v488 = v487 * v486;
      v489 = v488;
      if ( v469 >= v488 )
        v489 = v469;
      if ( v467 >= v488 )
        v488 = v467;
      v469 = v489;
      v467 = v488;
    }
    HIDWORD(v616) = HIDWORD(v600);
    HIDWORD(v617) = HIDWORD(v601);
    *(float *)&v617 = v483 - v469;
    *(float *)&v616 = v482 + v467;
    v490 = v471[13];
    v615 = *((float *)&v601 + 1);
    HIDWORD(v613) = HIDWORD(v600);
    *(float *)&v613 = v482 + v467;
    v614 = (float)(v483 - v469) + v490;
    sub_166154((char *)&v616, (float *)&v617, a1, 0, &v618, v471, (float *)&v613);
    if ( v476 )
    {
      v491 = *(float *)&v616 + (float)((float)((float)(*(float *)&v617 - *(float *)&v616) - *(float *)&v618) * *v471);
      if ( *(float *)&v616 >= v491 )
        v491 = *(float *)&v616;
      v492 = v471[229] * -0.25;
      v611[0] = *(float *)&v617 + 0.0;
      v493 = (float)(int)v492;
      v612[0] = (float)((float)(2.0 - v477) + (float)(*(float *)&v618 + v491)) + 0.0;
      v612[1] = (float)(*((float *)&v616 + 1) + 0.0) + v493;
      v494 = v471[1];
      v611[1] = *((float *)&v617 + 1) + v493;
      v610[0] = 0.0;
      v610[1] = v494;
      sub_166154((char *)v612, v611, "*", 0, 0, v610, (float *)&v613);
    }
    LOBYTE(a3) = (_BYTE)v590;
    v103 = v578;
  }
  v495 = v609;
  v496 = dword_381B58;
  v497 = *(float *)(dword_381B58 + 5488);
  v498 = *(float *)(dword_381B58 + 5492);
  v499 = *(float *)&v600 - v497;
  *(_DWORD *)(v609 + 264) = *(_DWORD *)(v609 + 80);
  v500 = 0;
  v501 = *(float *)(v496 + 224);
  if ( v501 >= v499 )
    v500 = *(float *)(v496 + 228) < (float)(v498 + *((float *)&v601 + 1))
        && v501 < (float)(v497 + *(float *)&v601)
        && *(float *)(v496 + 228) >= (float)(*((float *)&v600 + 1) - v498);
  *(_DWORD *)(v495 + 268) = v500;
  v502 = v601;
  *(_QWORD *)(v495 + 272) = v600;
  *(_QWORD *)(v495 + 280) = v502;
  sub_16DDF0(v495 + 512, v495 + 520, 1);
  v81 = v598;
  v108 = v595;
  if ( v597 == v577 )
    goto LABEL_625;
  v503 = v609;
  *(_BYTE *)(v609 + 124) = 0;
LABEL_627:
  v504 = *(_WORD *)(v503 + 132);
  *(_DWORD *)(v81 + 1268) = 0;
  *(_WORD *)(v503 + 132) = v504 + 1;
  if ( v596 )
  {
    if ( (a3 & 0x40) == 0
      && *(int *)(v503 + 144) <= 0
      && *(int *)(v503 + 148) <= 0
      && (*(float *)(v503 + 480) >= *(float *)(v503 + 488) || *(float *)(v503 + 484) >= *(float *)(v503 + 492)) )
    {
      *(_DWORD *)(v503 + 164) = 1;
    }
    if ( v108 && (*(_BYTE *)(v108 + 125) || *(_BYTE *)(v108 + 129)) )
      *(_DWORD *)(v503 + 164) = 1;
  }
  if ( *v103 <= 0.0 )
  {
    v505 = 1;
    *(_DWORD *)(v503 + 164) = 1;
  }
  else
  {
    v505 = *(int *)(v503 + 164) > 0 || *(_DWORD *)(v503 + 168) > 0;
  }
  v506 = *(unsigned __int8 *)(v503 + 125);
  *(_BYTE *)(v503 + 129) = v505;
  if ( !v506 && *(_BYTE *)(v503 + 122) && !v505 || *(int *)(v503 + 144) > 0 )
  {
    v507 = 0;
  }
  else
  {
    v507 = 0;
    if ( *(int *)(v503 + 148) <= 0 )
      v507 = *(_DWORD *)(v503 + 168) < 1;
  }
  *(_BYTE *)(v503 + 127) = v507;
  return !v507;
}


// ======================================================================
// ADDR: 0x16ea2c
// SYMBOL: sub_16EA2C
bool __fastcall sub_16EA2C(int a1, int a2)
{
  int v2; // r4
  float v3; // s0
  bool v4; // zf

  v2 = 0;
  if ( a1 >= 0 )
  {
    v3 = *(float *)(dword_381B58 + 4 * a1 + 1112);
    v4 = v3 == 0.0;
    if ( v3 == 0.0 )
      v2 = 1;
    else
      v4 = a2 == 0;
    if ( !v4 )
    {
      v2 = 0;
      if ( v3 > *(float *)(dword_381B58 + 136) )
        return sub_16E9B0(a1, *(float *)(dword_381B58 + 136), *(float *)(dword_381B58 + 140)) > 0;
    }
  }
  return v2;
}


// ======================================================================
// ADDR: 0x16f690
// SYMBOL: sub_16F690
float *__fastcall sub_16F690(float *result, int a2, int a3)
{
  float v3; // s0
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float *v7; // r12
  float v8; // s8
  int v9; // r2
  float v10; // s6
  float v11; // s2
  float v12; // s4
  float v13; // s2
  int v14; // r2
  float v15; // s0
  float v16; // s8

  v3 = *(float *)(a2 + 96);
  if ( v3 >= 3.4028e38 )
    v4 = *(float *)(a2 + 88);
  else
    v4 = v3 - (float)(*(float *)(a2 + 104) * (float)(*(float *)(a2 + 28) - *(float *)(a2 + 112)));
  v5 = *(float *)(a2 + 100);
  if ( v5 >= 3.4028e38 )
  {
    v11 = *(float *)(a2 + 92);
  }
  else
  {
    v6 = *(float *)(a2 + 108);
    v7 = (float *)(dword_381B58 + 5460);
    if ( a3 && v6 <= 0.0 )
      v5 = 0.0;
    if ( a3
      && v6 >= 1.0
      && v5 >= (float)((float)(*(float *)(a2 + 48) - *(float *)(a2 + 64)) + *(float *)(dword_381B58 + 5476)) )
    {
      v5 = *(float *)(a2 + 48);
    }
    v8 = 0.0;
    v9 = *(_DWORD *)(a2 + 8);
    v10 = 0.0;
    if ( !(v9 << 31) )
      v10 = (float)(*v7 + *v7) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628));
    if ( (v9 & 0x400) != 0 )
      v8 = (float)(*v7 + *v7)
         + (float)(*(float *)(a2 + 328) + (float)(*(float *)(dword_381B58 + 6348) * *(float *)(a2 + 628)));
    v11 = (float)(v5 - (float)((float)(1.0 - v6) * (float)(v10 + v8)))
        - (float)(v6 * (float)(*(float *)(a2 + 32) - *(float *)(a2 + 116)));
  }
  v12 = 0.0;
  if ( v11 >= 0.0 )
    v12 = v11;
  v13 = 0.0;
  if ( v4 >= 0.0 )
    v13 = v4;
  v14 = *(unsigned __int8 *)(a2 + 125);
  *result = v13;
  result[1] = v12;
  if ( !v14 && !*(_BYTE *)(a2 + 127) )
  {
    v15 = *(float *)(a2 + 44) - (float)(*(float *)(a2 + 28) - *(float *)(a2 + 112));
    v16 = *(float *)(a2 + 48) - (float)(*(float *)(a2 + 32) - *(float *)(a2 + 116));
    if ( v15 <= 0.0 )
      v15 = 0.0;
    if ( v16 <= 0.0 )
      v16 = 0.0;
    if ( v13 < v15 )
      v15 = v13;
    if ( v12 < v16 )
      v16 = v12;
    *result = v15;
    result[1] = v16;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16f910
// SYMBOL: sub_16F910
int __fastcall sub_16F910(int a1, int a2)
{
  int v2; // r12
  int v3; // r2
  int result; // r0
  int v5; // r1
  int v6; // r12

  v2 = *(_DWORD *)(a1 + 8);
  v3 = dword_381B58 + 6836;
  if ( (v2 & 0x40000) != 0 )
  {
    result = *(_DWORD *)(a1 + 780);
  }
  else if ( (v2 & 0x5000000) != 0x1000000 || (result = *(_DWORD *)(a1 + 780)) == 0 || a2 )
  {
    v5 = *(_DWORD *)(dword_381B58 + 6924);
    v6 = *(_DWORD *)v3;
    *(_WORD *)(dword_381B58 + 6936) = 257;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v6 + 4 * v5 + 780) = 0;
    result = v3 + 108;
    *(_BYTE *)(v3 + 102) = 0;
    *(_QWORD *)(v3 + 108) = 0x7F7FFFFF7F7FFFFFLL;
    *(_QWORD *)(v3 + 116) = 0xFF7FFFFFFF7FFFFFLL;
    *(_DWORD *)(v3 + 104) = 0;
    return result;
  }
  *(_DWORD *)(dword_381B58 + 6840) = result;
  return result;
}


// ======================================================================
// ADDR: 0x170190
// SYMBOL: sub_170190
float *__fastcall sub_170190(float *result)
{
  float *v1; // r3
  int v2; // lr
  float *v3; // r2
  float v4; // s8
  float v5; // s2
  float v6; // s4
  float v7; // s6
  float v8; // s0
  float v9; // s2
  float v10; // s8
  float v11; // s6

  if ( !*(_BYTE *)(dword_381B58 + 6934)
    && (v1 = (float *)(dword_381B58 + 5456), *(_BYTE *)(dword_381B58 + 6935))
    && (v2 = *(_DWORD *)(dword_381B58 + 6836)) != 0 )
  {
    v3 = (float *)(v2 + 16 * *(_DWORD *)(dword_381B58 + 6924));
    v4 = v3[200];
    v5 = v3[197];
    v6 = v4 - v3[198];
    v7 = v3[199] - v5;
    if ( *(float *)(dword_381B58 + 5460) < v6 )
      v6 = *(float *)(dword_381B58 + 5460);
    if ( (float)(*v1 * 4.0) < v7 )
      v7 = *v1 * 4.0;
    v8 = *(float *)(v2 + 16) + (float)(v4 - v6);
    v9 = *(float *)(v2 + 12) + (float)(v5 + v7);
    v10 = v8;
    if ( v8 > *(float *)(dword_381B58 + 20) )
      v10 = *(float *)(dword_381B58 + 20);
    v11 = v9;
    if ( v9 > *(float *)(dword_381B58 + 16) )
      v11 = *(float *)(dword_381B58 + 16);
    if ( v8 < 0.0 )
      v10 = 0.0;
    if ( v9 < 0.0 )
      v11 = 0.0;
    result[1] = (float)(int)v10;
    *result = (float)(int)v11;
  }
  else if ( *(float *)(dword_381B58 + 224) < -256000.0 )
  {
    *(_QWORD *)result = *(_QWORD *)(dword_381B58 + 7636);
  }
  else
  {
    *(_QWORD *)result = *(_QWORD *)(dword_381B58 + 224);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1706f8
// SYMBOL: sub_1706F8
int __fastcall sub_1706F8(int a1, int a2)
{
  int v2; // r0
  float v3; // s2
  float v4; // s0
  float v5; // s6
  float v6; // s4
  float v7; // s6
  int v8; // r0

  if ( a2 )
  {
    v2 = dword_381B58 + 4 * a1;
    v3 = *(float *)(v2 + 5208);
    if ( a2 == 2 && v3 < 0.0 )
    {
      v4 = 0.0;
      if ( *(float *)(v2 + 5296) >= 0.0 )
        v4 = 1.0;
    }
    else
    {
      v4 = 0.0;
      if ( v3 >= 0.0 )
      {
        switch ( a2 )
        {
          case 1:
            v4 = 0.0;
            if ( v3 == 0.0 )
              v4 = 1.0;
            break;
          case 3:
            if ( v3 == 0.0 )
              goto LABEL_20;
            v5 = 0.8;
            v6 = *(float *)(dword_381B58 + 136) * 0.8;
            if ( v3 > v6 )
              goto LABEL_23;
            break;
          case 4:
            if ( v3 == 0.0 )
              goto LABEL_20;
            v6 = *(float *)(dword_381B58 + 136);
            if ( v3 > v6 )
            {
              v7 = *(float *)(dword_381B58 + 140) + *(float *)(dword_381B58 + 140);
              goto LABEL_24;
            }
            break;
          case 5:
            if ( v3 == 0.0 )
            {
LABEL_20:
              v4 = 1.0;
            }
            else
            {
              v6 = *(float *)(dword_381B58 + 136) * 0.8;
              if ( v3 > v6 )
              {
                v5 = 0.3;
LABEL_23:
                v7 = *(float *)(dword_381B58 + 140) * v5;
LABEL_24:
                if ( v7 > 0.0 )
                {
                  v8 = (int)(float)((float)(v3 - v6) / v7)
                     - (int)(float)((float)((float)(v3 - *(float *)(dword_381B58 + 24)) - v6) / v7);
                  v4 = (float)(v8 & ~(v8 >> 31));
                }
              }
            }
            break;
          default:
            return LODWORD(v4);
        }
      }
    }
  }
  else
  {
    v4 = *(float *)(dword_381B58 + 4 * a1 + 764);
  }
  return LODWORD(v4);
}


// ======================================================================
// ADDR: 0x170850
// SYMBOL: sub_170850
int *__fastcall sub_170850(float *a1, int a2, int a3, float a4, float a5)
{
  char v8; // r6
  float v9; // s16
  float v10; // s18
  float v11; // s16
  float v12; // s18
  float v13; // s20
  float v14; // s20
  float v15; // s22
  float v16; // s24
  float v17; // s22
  float v18; // s24
  float v19; // s26
  int *result; // r0

  *a1 = 0.0;
  a1[1] = 0.0;
  v8 = a2;
  if ( a2 << 31 )
  {
    v11 = COERCE_FLOAT(sub_1706F8(19, a3));
    v12 = COERCE_FLOAT(sub_1706F8(18, a3));
    v13 = COERCE_FLOAT(sub_1706F8(21, a3));
    v10 = (float)(v11 - v12) + 0.0;
    v9 = (float)(v13 - COERCE_FLOAT(sub_1706F8(20, a3))) + 0.0;
    *a1 = v10;
    a1[1] = v9;
  }
  else
  {
    v9 = 0.0;
    v10 = 0.0;
  }
  if ( (v8 & 2) != 0 )
  {
    v14 = COERCE_FLOAT(sub_1706F8(5, a3));
    v15 = COERCE_FLOAT(sub_1706F8(4, a3));
    v16 = COERCE_FLOAT(sub_1706F8(7, a3));
    v10 = (float)(v14 - v15) + v10;
    v9 = (float)(v16 - COERCE_FLOAT(sub_1706F8(6, a3))) + v9;
    *a1 = v10;
    a1[1] = v9;
  }
  if ( (v8 & 4) != 0 )
  {
    v17 = COERCE_FLOAT(sub_1706F8(9, a3));
    v18 = COERCE_FLOAT(sub_1706F8(8, a3));
    v19 = COERCE_FLOAT(sub_1706F8(11, a3));
    v10 = (float)(v17 - v18) + v10;
    v9 = (float)(v19 - COERCE_FLOAT(sub_1706F8(10, a3))) + v9;
    *a1 = v10;
    a1[1] = v9;
  }
  result = &dword_381B58;
  if ( a4 != 0.0 && *(float *)(dword_381B58 + 820) > 0.0 )
  {
    v9 = v9 * a4;
    v10 = v10 * a4;
    *a1 = v10;
    a1[1] = v9;
  }
  if ( a5 != 0.0 )
  {
    result = (int *)dword_381B58;
    if ( *(float *)(dword_381B58 + 824) > 0.0 )
    {
      *a1 = v10 * a5;
      a1[1] = v9 * a5;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x171fc0
// SYMBOL: sub_171FC0
int __fastcall sub_171FC0(int a1)
{
  int v2; // r2
  int result; // r0
  int v4; // r1

  v2 = dword_381B58 + 6836;
  result = *(_DWORD *)(dword_381B58 + 6836);
  *(_DWORD *)(dword_381B58 + 6924) = a1;
  if ( a1 )
    return sub_16F910(result, 1);
  if ( *(_DWORD *)(result + 776) )
    result = *(_DWORD *)(result + 776);
  v4 = *(_DWORD *)(result + 780);
  *(_DWORD *)v2 = result;
  if ( !v4 )
    return sub_16F910(result, 1);
  *(_DWORD *)(v2 + 4) = v4;
  *(_WORD *)(v2 + 97) = 1;
  *(_BYTE *)(v2 + 99) = 1;
  *(_DWORD *)(result + 780) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x172008
// SYMBOL: sub_172008
int __fastcall sub_172008(int result, float *a2)
{
  float v2; // s8
  float v3; // s14
  float v4; // s1
  float v5; // s2
  float v6; // s10
  float v7; // s12
  float v8; // s6
  float v9; // s4
  float v10; // s0
  float *v11; // r1
  float v12; // s10
  float v13; // s0
  float v14; // s2

  v2 = 1.0;
  v3 = *a2;
  v4 = *(float *)(result + 496) + -1.0;
  v5 = *(float *)(result + 508) + 1.0;
  v6 = a2[2];
  v7 = *(float *)(result + 504) + 1.0;
  v8 = *(float *)(result + 500) + -1.0;
  v9 = a2[1];
  v10 = a2[3];
  if ( *a2 >= v4 && v6 <= v7 )
    return result;
  v11 = (float *)(dword_381B58 + 5472);
  if ( *(_BYTE *)(result + 120) )
  {
    if ( v3 < v4 )
    {
      v12 = (float)((float)(v3 - *(float *)(result + 12)) + *(float *)(result + 88)) - *v11;
      v2 = 0.0;
LABEL_9:
      *(float *)(result + 104) = v2;
      *(float *)(result + 96) = v12;
      goto LABEL_10;
    }
    if ( v6 >= v7 )
    {
      v12 = (float)((float)(v6 - *(float *)(result + 12)) + *(float *)(result + 88)) + *v11;
      goto LABEL_9;
    }
  }
LABEL_10:
  if ( v9 >= v8 )
  {
    if ( v10 < v5 )
      return result;
    v14 = 1.0;
    v13 = (float)((float)(v10 - *(float *)(result + 16)) + *(float *)(result + 92)) + v11[1];
  }
  else
  {
    v13 = (float)((float)(v9 - *(float *)(result + 16)) + *(float *)(result + 92)) - v11[1];
    v14 = 0.0;
  }
  *(float *)(result + 108) = v14;
  *(float *)(result + 100) = v13;
  return result;
}


// ======================================================================
// ADDR: 0x172130
// SYMBOL: sub_172130
int __fastcall sub_172130(int a1, int a2, int a3)
{
  int v3; // r3

  if ( a1 < 0 )
    return 0;
  while ( 1 )
  {
    v3 = 0;
    if ( a2 == a1 )
      break;
    if ( a1 >= *(_DWORD *)(dword_381B58 + 6520) )
      break;
    v3 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6528) + 4 * a1);
    if ( *(_BYTE *)(v3 + 122) )
    {
      if ( *(_DWORD *)(v3 + 764) == v3 && (*(_BYTE *)(v3 + 10) & 8) == 0 )
        break;
    }
    a1 += a3;
    if ( a1 <= -1 )
      return 0;
  }
  return v3;
}


// ======================================================================
// ADDR: 0x172184
// SYMBOL: sub_172184
int __fastcall sub_172184(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r8
  int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r0

  result = *(_DWORD *)(dword_381B58 + 6900);
  if ( (*(_BYTE *)(result + 11) & 8) == 0 )
  {
    v3 = dword_381B58 + 6520;
    v4 = *(_DWORD *)(dword_381B58 + 6520) - 1;
    v5 = v4;
    while ( v5 + 1 >= 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6528) + 4 * v5--);
      if ( v6 == result )
      {
        v7 = v5 + 1;
        goto LABEL_7;
      }
    }
    v7 = -1;
LABEL_7:
    v8 = sub_172130(v7 + a1, -2147483647, a1);
    if ( v8 || (v8 = sub_172130(v4 & (a1 >> 31), v7, a1)) != 0 )
    {
      *(_DWORD *)(v3 + 380) = v8;
      *(_DWORD *)(v3 + 384) = v8;
    }
    result = 0;
    *(_BYTE *)(v3 + 400) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x172d22
// SYMBOL: sub_172D22
int __fastcall sub_172D22(int *a1)
{
  return sub_172C12(
           a1,
           *(_DWORD *)(a1[10] + 20),
           *(float *)(a1[10] + 24),
           *(float *)(a1[10] + 28),
           *(float *)(a1[10] + 32),
           0);
}


// ======================================================================
// ADDR: 0x172d4e
// SYMBOL: sub_172D4E
int __fastcall sub_172D4E(int *a1, int a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r1
  void *v6; // r0
  const void *v7; // r1
  int v8; // r5

  v3 = a1[19];
  if ( v3 == a1[20] )
  {
    v4 = v3 + 1;
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 > v4 )
      v4 = v5;
    if ( v3 < v4 )
    {
      v6 = (void *)sub_1654B0(4 * v4);
      v7 = (const void *)a1[21];
      v8 = (int)v6;
      if ( v7 )
      {
        j_memcpy(v6, v7, 4 * a1[19]);
        sub_165578(a1[21]);
      }
      v3 = a1[19];
      a1[20] = v4;
      a1[21] = v8;
    }
  }
  *(_DWORD *)(a1[21] + 4 * v3) = a2;
  ++a1[19];
  return sub_172B7A(a1);
}


// ======================================================================
// ADDR: 0x2211c4
// SYMBOL: sub_2211C4
int __fastcall sub_2211C4(int a1, int a2)
{
  int v3; // [sp+0h] [bp-8h] BYREF

  return sub_2211E0(a1, a2, &v3);
}


// ======================================================================
