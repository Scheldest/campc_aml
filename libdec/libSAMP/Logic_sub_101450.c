// ADDR: 0x12ab98
// SYMBOL: sub_12AB98
int __fastcall sub_12AB98(int a1, int a2, int a3, int a4, int a5, float a6)
{
  int v6; // r6
  int v9; // r3

  v6 = *(_DWORD *)(a1 + 4);
  v9 = sub_165778(a4, a2);
  if ( a5 )
    return sub_174194(v6, a2, a3, v9, 0.0, 15);
  else
    return sub_1740F8(v6, a2, a3, v9, 0, 15, LODWORD(a6));
}


// ======================================================================
// ADDR: 0x12b5d0
// SYMBOL: sub_12B5D0
int __fastcall sub_12B5D0(int a1, int a2)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  int result; // r0
  int v8; // r12
  int v9; // s16
  int v10; // s18
  _DWORD *v11; // r4
  int *v12; // r11
  int v13; // r1
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r6
  int v19; // r5
  int v20; // r9
  int v21; // r8
  int v22; // r10
  void (__fastcall *v23)(int *, int); // r2
  int v24; // r0
  int v25; // [sp+4h] [bp-64h]
  int v26; // [sp+8h] [bp-60h]
  int v27; // [sp+Ch] [bp-5Ch]
  int v28; // [sp+10h] [bp-58h]
  int *v29; // [sp+14h] [bp-54h]

  v4 = sub_11C908();
  v5 = sub_11C920();
  v27 = a1;
  v6 = sub_12B7EC(a1, a2);
  result = sub_12B778(v6);
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 >= 1 )
  {
    v9 = v4;
    result = 0;
    v10 = v5;
    v25 = a2;
    v11 = *(_DWORD **)(a1 + 32);
    v28 = 0;
    do
    {
      v12 = *(int **)(*(_DWORD *)(a2 + 4) + 4 * result);
      v13 = v12[6];
      if ( v13 >= 1 )
      {
        v14 = (_DWORD *)v12[8];
        v15 = v12[6];
        do
        {
          --v15;
          v16 = v14[4];
          *v11 = *v14;
          v17 = v14[1];
          v11[2] = v9;
          v11[3] = v10;
          v11[4] = v16;
          v11[1] = v17;
          v11[5] = v14[2];
          v18 = v14[3];
          v14 += 5;
          v11[6] = v18;
          v11 += 7;
        }
        while ( v15 );
      }
      if ( *v12 >= 1 )
      {
        v19 = v12[5];
        v20 = 0;
        v21 = 0;
        v26 = result;
        v29 = v12;
        do
        {
          v22 = v12[2];
          v23 = *(void (__fastcall **)(int *, int))(v22 + v20 + 32);
          if ( v23 )
          {
            v23(v12, v22 + v20);
          }
          else
          {
            sub_11C8F0();
            off_263758(1, *(_DWORD *)(v22 + v20 + 20));
            off_263768(3, *(_DWORD *)(v27 + 32) + 28 * v28, v29[6], v19, *(_DWORD *)(v22 + v20));
            v12 = v29;
            off_263758(1, 0);
            sub_11C8F0();
          }
          v24 = *(_DWORD *)(v22 + v20);
          v20 += 40;
          ++v21;
          v19 += 2 * v24;
        }
        while ( v21 < *v12 );
        a2 = v25;
        v13 = v12[6];
        result = v26;
        v8 = *(_DWORD *)(v25 + 8);
      }
      ++result;
      v28 += v13;
    }
    while ( result < v8 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x167f70
// SYMBOL: sub_167F70
int sub_167F70()
{
  int result; // r0

  result = *(unsigned __int8 *)(dword_381B58 + 7132);
  if ( *(_BYTE *)(dword_381B58 + 7132) )
    return dword_381B58 + 7132;
  return result;
}


// ======================================================================
// ADDR: 0x168738
// SYMBOL: sub_168738
int sub_168738()
{
  int v0; // r9
  unsigned __int8 *v1; // r1
  int *v2; // r8
  float v3; // s0
  float v4; // s0
  unsigned __int8 *v5; // r4
  float v6; // s0
  double v7; // d17
  _BYTE *v8; // r5
  int v9; // r2
  int v10; // r0
  unsigned __int8 *v11; // r5
  int v12; // r1
  __int64 v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r1
  float v19; // s0
  int v20; // r0
  int v21; // r2
  bool v22; // zf
  float v23; // s0
  int v24; // r5
  int v25; // r1
  float v26; // s0
  char v27; // r2
  int v28; // r3
  int v29; // r0
  float *v30; // r4
  float v31; // s4
  int v32; // r6
  int v33; // r10
  int v34; // r9
  int v35; // r0
  int v36; // r8
  int v37; // r2
  int v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r4
  int i; // r1
  float v50; // s4
  bool v51; // fzf
  bool v52; // fnf
  float v53; // s4
  float v54; // s6
  float *v55; // r2
  int v56; // r0
  int v57; // r2
  int v58; // r5
  int v59; // r3
  _QWORD *v60; // r0
  __int64 v61; // d17
  int v62; // r1
  __int64 v63; // d17
  _QWORD *v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r8
  int v68; // r5
  _DWORD *v69; // r2
  _DWORD *v70; // r1
  int v71; // r5
  float v72; // s0
  float v73; // s2
  int v74; // r0
  float v75; // s8
  float v76; // s10
  float v77; // s20
  float v78; // s22
  float v79; // s16
  float v80; // s18
  int v81; // r0
  int v82; // r0
  float v83; // s0
  float v84; // s2
  float v85; // s6
  float v86; // s8
  float v87; // s10
  int v88; // r0
  int v89; // r2
  int v90; // r0
  int v91; // r4
  __int64 v92; // r2
  int v93; // r4
  _QWORD *v94; // r2
  __int64 v95; // d17
  bool v96; // nf
  _DWORD *v97; // r0
  _DWORD *v98; // r1
  int v99; // r6
  int v100; // r8
  int v101; // r6
  int v102; // r11
  float v103; // s6
  float v104; // s0
  int v105; // r4
  float v106; // s2
  int v107; // r5
  int v108; // r5
  __int64 v109; // r0
  int v110; // r5
  float v111; // s0
  int v112; // r0
  int v113; // r0
  int v114; // r1
  float v115; // s16
  bool v116; // fnf
  float v117; // s20
  float v118; // r0
  bool v119; // fzf
  bool v120; // fnf
  int v121; // r0
  float v122; // s0
  bool v123; // fnf
  int v124; // r0
  int v125; // r4
  int v126; // r1
  int v127; // r4
  int v128; // r3
  int v129; // r0
  int v130; // r0
  float v131; // s0
  int v132; // r0
  int v133; // r0
  float v134; // s0
  float v135; // s2
  int v136; // r11
  float v137; // s8
  float v138; // s4
  float v139; // s10
  int v140; // r6
  int v141; // r4
  int v142; // r0
  float v143; // s4
  float v144; // s6
  int v145; // r0
  int v146; // r0
  int v147; // r11
  int v148; // r2
  int v149; // r0
  int v150; // r4
  int v151; // r0
  int v152; // r5
  int v153; // r0
  int v154; // r4
  int v155; // r0
  int v156; // r0
  int v157; // r0
  int v158; // r0
  unsigned int v159; // r0
  bool v160; // r0
  int v161; // r0
  int v162; // r1
  int v163; // r2
  _DWORD *v164; // r4
  int v165; // r0
  int v166; // r2
  int v167; // r3
  int v168; // r5
  int v169; // r0
  int v170; // r0
  int v171; // r3
  _DWORD *v172; // r0
  int v173; // r8
  int v174; // r12
  int v175; // r1
  float *v176; // r1
  float v177; // s0
  int v178; // r2
  unsigned int v179; // r2
  int32x4_t v180; // q8
  int v181; // r0
  unsigned int v182; // r11
  int v183; // r5
  int v184; // r6
  float v185; // s16
  float v186; // r0
  int v187; // r6
  float v188; // s16
  float v189; // s16
  float v190; // s16
  float v191; // r0
  float v192; // s16
  unsigned int v193; // r0
  int v194; // r2
  int v195; // r1
  float *v196; // r3
  bool v197; // r5
  char v198; // r5
  float v199; // s18
  float v200; // s0
  float v201; // s2
  float v202; // s0
  float v203; // s2
  int v204; // r6
  int v205; // r5
  int v206; // r0
  int v207; // r2
  float v208; // s0
  float v209; // s2
  float v210; // s0
  float v211; // s2
  float v212; // s0
  bool v213; // zf
  float v214; // s2
  float v215; // s4
  float v216; // s0
  float v217; // s0
  float v218; // s2
  float v219; // s4
  float v220; // s0
  float *v221; // r0
  float v222; // s0
  float v223; // s2
  float v224; // s6
  float v225; // s10
  float v226; // s8
  float v227; // s0
  float v228; // s12
  float v229; // s2
  float v230; // s14
  float v231; // s7
  float v232; // s12
  float v233; // s6
  float v234; // s10
  float v235; // s8
  int v236; // r0
  float v237; // s0
  float *v238; // r1
  float v239; // s2
  float v240; // s4
  float v241; // s10
  float v242; // s2
  float v243; // s4
  int v244; // r0
  float v245; // s0
  float v246; // s6
  float v247; // s8
  float v248; // s12
  float v249; // s1
  float v250; // s6
  float v251; // s0
  float v252; // s2
  int v253; // r1
  float v254; // s2
  int v255; // r5
  int v256; // r2
  int v257; // r3
  int v258; // lr
  unsigned __int8 *v259; // r8
  int v260; // r12
  _BYTE *v261; // r11
  float v262; // s6
  int v263; // r9
  double v264; // d17
  float v265; // s8
  double v266; // d18
  float v267; // s6
  float v268; // s6
  float v269; // s8
  int v270; // r1
  int v271; // r1
  int v272; // r4
  float v273; // s6
  float v274; // s8
  float v275; // s6
  float v276; // s8
  float v277; // s6
  float *v278; // r4
  float v279; // s10
  float *v280; // r1
  int v281; // r0
  float v282; // s0
  float *v283; // r1
  float v284; // s0
  float v285; // s0
  int v286; // r0
  int v287; // r12
  float v288; // s2
  float v289; // s6
  float v290; // s2
  float v291; // s0
  unsigned __int8 *v292; // lr
  int v293; // r0
  int v294; // r4
  _BYTE *v295; // r8
  bool v296; // zf
  _BYTE *v297; // r6
  int v298; // r0
  int v299; // r1
  bool v300; // cf
  int v301; // r1
  int v302; // r1
  int v303; // r0
  int v304; // r1
  int v305; // r1
  int v306; // r1
  int v307; // r0
  int *v308; // r1
  int v309; // t1
  char v310; // r6
  void *v311; // r0
  const void *v312; // r1
  void *v313; // r4
  int v314; // r0
  int v315; // r0
  void *v316; // r0
  void *v317; // r4
  const void *v318; // r1
  int v319; // r0
  int v320; // r0
  _DWORD *v321; // r1
  int v322; // r3
  int result; // r0
  int v324; // r0
  int v325; // r0
  int v326; // r1
  int v327; // r0
  int v328; // r0
  int v329; // r0
  float v330; // s8
  float v331; // s6
  float v332; // s0
  float *v333; // r2
  int v334; // r6
  float *v335; // r1
  float v336; // s2
  float v337; // s6
  float v338; // s4
  float v339; // s6
  int v340; // s4
  float v341; // s6
  float v342; // s8
  float v343; // s6
  float v344; // s2
  float v345; // s4
  bool v346; // fnf
  int v347; // r1
  float v348; // s0
  int v349; // r2
  int v350; // lr
  int v351; // r2
  float v352; // s18
  float v353; // s4
  float v354; // s6
  float v355; // s6
  float v356; // s8
  float v357; // s6
  float v358; // s0
  float v359; // s4
  float v360; // s6
  float v361; // s4
  int v362; // r0
  float v363; // s0
  float v364; // s2
  float v365; // s0
  float v366; // s0
  int v367; // [sp+8h] [bp-90h]
  _DWORD *v368; // [sp+Ch] [bp-8Ch]
  int v369; // [sp+10h] [bp-88h]
  unsigned __int8 *v370; // [sp+14h] [bp-84h]
  int v371; // [sp+18h] [bp-80h]
  int v372; // [sp+1Ch] [bp-7Ch]
  int v373; // [sp+20h] [bp-78h]
  int v374; // [sp+24h] [bp-74h]
  int v375; // [sp+24h] [bp-74h]
  int v376; // [sp+24h] [bp-74h]
  int v377; // [sp+2Ch] [bp-6Ch]
  int v378; // [sp+2Ch] [bp-6Ch]
  float v379[4]; // [sp+30h] [bp-68h] BYREF
  float v380[2]; // [sp+40h] [bp-58h] BYREF
  __int64 v381; // [sp+48h] [bp-50h] BYREF
  float v382; // [sp+50h] [bp-48h]
  float v383; // [sp+54h] [bp-44h]

  v0 = dword_381B58;
  v371 = dword_381B58 + 11492;
  if ( *(_BYTE *)(dword_381B58 + 175) && (*(_BYTE *)(dword_381B58 + 12) & 2) == 0 )
    *(_BYTE *)(dword_381B58 + 175) = 0;
  v1 = (unsigned __int8 *)(v0 + 5564);
  v2 = (int *)(v0 + 11432);
  if ( !*(_BYTE *)(v371 + 16) )
  {
    if ( *(_DWORD *)(v0 + 32) )
    {
      sub_16A7DC();
      v1 = (unsigned __int8 *)(v0 + 5564);
    }
    *(_BYTE *)(v371 + 16) = 1;
  }
  v3 = *(float *)(v371 + 20);
  if ( v3 > 0.0 )
  {
    v4 = v3 - *(float *)(v0 + 24);
    *(float *)(v371 + 20) = v4;
    if ( v4 <= 0.0 )
    {
      if ( *(_DWORD *)(v0 + 32) )
      {
        v5 = v1;
        sub_16A834();
        v1 = v5;
      }
      else
      {
        *(_BYTE *)(v0 + 856) = 1;
      }
      *(_DWORD *)(v371 + 20) = 0;
    }
  }
  v6 = *(float *)(v0 + 24);
  v7 = *(double *)(v1 + 924);
  *(_BYTE *)(v0 + 1) = 1;
  v8 = *(_BYTE **)(v0 + 148);
  v9 = dword_381B58;
  *(_DWORD *)(v0 + 11472) = 0;
  *(_DWORD *)(v0 + 6568) = 0;
  v10 = *(_DWORD *)(v9 + 160);
  ++*((_DWORD *)v1 + 233);
  *v8 = 1;
  v11 = v1;
  *(double *)(v1 + 924) = v7 + v6;
  if ( !v10 )
    v10 = **(_DWORD **)(*(_DWORD *)(v9 + 148) + 60);
  v372 = v0 + 6824;
  sub_16A884(v10);
  v12 = v11[1];
  v13 = *(_QWORD *)(v0 + 16);
  v14 = *v11;
  *((_DWORD *)v11 + 201) = *((_DWORD *)v11 + 1);
  *((_DWORD *)v11 + 202) = 0;
  *((_DWORD *)v11 + 203) = 0;
  *((_QWORD *)v11 + 102) = v13;
  *((_DWORD *)v11 + 206) = v14;
  if ( v12 )
  {
    v14 |= 2u;
    *((_DWORD *)v11 + 206) = v14;
  }
  if ( (*(_BYTE *)(v0 + 12) & 8) != 0 )
    *((_DWORD *)v11 + 206) = v14 | 4;
  v370 = v11;
  sub_172794(v0 + 7204);
  sub_172D4E(v0 + 7204, *(_DWORD *)(*(_DWORD *)(v0 + 148) + 8));
  sub_172D22(v0 + 7204);
  sub_172794(v0 + 7324);
  sub_172D4E(v0 + 7324, *(_DWORD *)(*(_DWORD *)(v0 + 148) + 8));
  sub_172D22(v0 + 7324);
  *(_QWORD *)(v0 + 7136) = 0LL;
  *(_QWORD *)(v0 + 7144) = 0LL;
  *(_DWORD *)(v0 + 7172) = 0;
  v15 = *(unsigned __int8 *)(v0 + 7448);
  *(_QWORD *)(v0 + 7152) = 0LL;
  *(_QWORD *)(v0 + 7160) = 0LL;
  *(_BYTE *)(v0 + 7132) = 0;
  *(_DWORD *)(v0 + 7168) = 0;
  if ( v15 )
  {
    v16 = *(_DWORD *)(v0 + 7472);
    if ( v16 == *(_DWORD *)(v0 + 6608) )
    {
      v17 = dword_381B58 + 6608;
      if ( *(_DWORD *)(dword_381B58 + 6608) == v16 )
        *(_DWORD *)(dword_381B58 + 6612) = v16;
      if ( *(_DWORD *)(v17 + 44) == v16 )
        *(_BYTE *)(v17 + 48) = 1;
    }
  }
  if ( *(_DWORD *)(v0 + 6596) )
  {
    v18 = *(_DWORD *)(v0 + 6588);
    if ( v18 )
    {
      if ( *(_DWORD *)(v0 + 6608) == v18 )
        *(_DWORD *)(v0 + 6604) = 0;
      goto LABEL_32;
    }
LABEL_34:
    v20 = *(_DWORD *)(v0 + 6608);
    v18 = 0;
    goto LABEL_36;
  }
  v18 = *(_DWORD *)(v0 + 6588);
  *(_DWORD *)(v0 + 6600) = 0;
  *(_DWORD *)(v0 + 6604) = 0;
  if ( !v18 )
    goto LABEL_34;
LABEL_32:
  v19 = *(float *)(v0 + 24);
  v20 = *(_DWORD *)(v0 + 6608);
  *(float *)(v0 + 6600) = v19 + *(float *)(v0 + 6600);
  if ( v20 == v18 )
    v20 = v18;
  else
    *(float *)(v0 + 6604) = v19 + *(float *)(v0 + 6604);
LABEL_36:
  *(_DWORD *)(v0 + 6596) = v18;
  *(_BYTE *)(v0 + 6592) = 0;
  *(_DWORD *)(v0 + 6588) = 0;
  v21 = *(_DWORD *)(v0 + 6612);
  v22 = v21 == v20;
  if ( v21 != v20 )
    v22 = v20 == 0;
  if ( !v22 && *(_DWORD *)(v0 + 6652) == v20 )
  {
    v37 = *(_DWORD *)(dword_381B58 + 6608);
    v38 = dword_381B58 + 6608;
    *(_BYTE *)(dword_381B58 + 6620) = v37 != 0;
    if ( v37 )
    {
      *(_WORD *)(v38 + 14) = 0;
      *(_DWORD *)(v38 + 8) = 0;
    }
    *(_DWORD *)v38 = 0;
    v20 = *(_DWORD *)(v0 + 6608);
    *(_DWORD *)(v38 + 20) = 0;
    *(_DWORD *)(v38 + 24) = 0;
    *(_DWORD *)(v38 + 36) = 0;
    *(_BYTE *)(v38 + 13) = 0;
    *(_BYTE *)(v38 + 16) = 0;
  }
  v23 = *(float *)(v0 + 24);
  if ( v20 )
    *(float *)(v0 + 6616) = v23 + *(float *)(v0 + 6616);
  v24 = 0;
  v25 = *v2;
  v26 = v23 + *(float *)(v0 + 6668);
  v27 = *(_BYTE *)(v0 + 6623);
  v28 = *(_DWORD *)(v0 + 6644);
  *(_DWORD *)(v0 + 6652) = v20;
  *(_BYTE *)(v0 + 6656) = 0;
  *(_BYTE *)(v0 + 6624) = 0;
  *(_DWORD *)(v0 + 6612) = 0;
  *(_BYTE *)(v0 + 6620) = 0;
  *(_DWORD *)(v0 + 6660) = v28;
  *(_BYTE *)(v0 + 6657) = v27;
  *(float *)(v0 + 6668) = v26;
  if ( v25 && v20 != v25 )
    *v2 = 0;
  v29 = *(_DWORD *)(v0 + 7548);
  v30 = (float *)(v0 + 1112);
  *(_DWORD *)(v0 + 7548) = 0;
  *(_DWORD *)(v0 + 7552) = v29;
  *(_DWORD *)(v0 + 7544) = 2139095039;
  *(_BYTE *)(v0 + 7449) = 0;
  j_memcpy((void *)(v0 + 3160), (const void *)(v0 + 1112), 0x800u);
  do
  {
    v31 = -1.0;
    if ( *(_BYTE *)(v0 + 252 + v24) )
    {
      v31 = 0.0;
      if ( *v30 >= 0.0 )
        v31 = *v30 + *(float *)(v0 + 24);
    }
    ++v24;
    *v30++ = v31;
  }
  while ( v24 != 512 );
  v368 = (_DWORD *)(v0 + 6544);
  v369 = v0;
  v32 = 0;
  v33 = dword_381B58;
  v34 = dword_381B58 + 6608;
  v35 = *(_DWORD *)(dword_381B58 + 8);
  *(_BYTE *)(dword_381B58 + 855) = 0;
  v36 = v35 & 1;
  if ( (v35 & 2) != 0 )
  {
    if ( *(unsigned __int8 *)(v33 + 12) << 31 )
    {
      if ( *(float *)(v33 + 764) > 0.0
        || *(float *)(v33 + 772) > 0.0
        || *(float *)(v33 + 768) > 0.0
        || *(float *)(v33 + 776) > 0.0 )
      {
        *(_DWORD *)(v34 + 268) = 4;
      }
      v32 = 1;
    }
    else
    {
      v32 = 0;
    }
  }
  if ( (v35 & 1) != 0 )
  {
    v39 = *(_DWORD *)(v33 + 100);
    if ( v39 >= 0 && *(_BYTE *)(v39 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 764) = 1065353216;
    }
    v40 = *(_DWORD *)(v33 + 104);
    if ( v40 >= 0 && *(_BYTE *)(v40 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 772) = 1065353216;
    }
    v41 = *(_DWORD *)(v33 + 108);
    if ( v41 >= 0 && *(_BYTE *)(v41 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 768) = 1065353216;
    }
    v42 = *(_DWORD *)(v33 + 56);
    if ( v42 >= 0 && *(_BYTE *)(v42 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 836) = 1065353216;
    }
    v43 = *(_DWORD *)(v33 + 60);
    if ( v43 >= 0 && *(_BYTE *)(v43 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 840) = 1065353216;
    }
    v44 = *(_DWORD *)(v33 + 64);
    if ( v44 >= 0 && *(_BYTE *)(v44 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 844) = 1065353216;
    }
    v45 = *(_DWORD *)(v33 + 68);
    if ( v45 >= 0 && *(_BYTE *)(v45 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 848) = 1065353216;
    }
    v46 = *(_DWORD *)(v33 + 52);
    if ( v46 >= 0 && *(_BYTE *)(v46 + v33 + 252) )
    {
      *(_DWORD *)(v34 + 268) = 3;
      *(_DWORD *)(v33 + 832) = 1065353216;
    }
    v47 = *(unsigned __int8 *)(v33 + 248);
    if ( *(_BYTE *)(v33 + 248) )
      *(_DWORD *)(v33 + 820) = 1065353216;
    if ( *(_BYTE *)(v33 + 249) )
      *(_DWORD *)(v33 + 824) = 1065353216;
    if ( *(_BYTE *)(v33 + 250) && !v47 )
      *(_DWORD *)(v33 + 828) = 1065353216;
  }
  v48 = v33 + 5208;
  j_memcpy((void *)(v33 + 5296), (const void *)(v33 + 5208), 0x58u);
  for ( i = 0; i != 88; i += 4 )
  {
    v50 = *(float *)(v33 + 764 + i);
    v51 = v50 == 0.0;
    v52 = v50 < 0.0;
    v53 = -1.0;
    if ( !v52 && !v51 )
    {
      v53 = 0.0;
      v54 = *(float *)(v48 + i);
      if ( v54 >= 0.0 )
        v53 = v54 + *(float *)(v33 + 24);
    }
    v55 = (float *)(v48 + i);
    *v55 = v53;
  }
  v56 = *(_DWORD *)(v34 + 332);
  if ( v56 )
  {
    if ( *(_BYTE *)(v34 + 326) )
    {
      if ( !*(_BYTE *)(v34 + 330) )
        goto LABEL_107;
    }
    else if ( !*(_BYTE *)(v34 + 330) )
    {
      v62 = *(_DWORD *)(v34 + 316);
      v108 = *(_DWORD *)(dword_381B58 + 6836);
      *(_DWORD *)(dword_381B58 + 6840) = v56;
      *(_DWORD *)(v108 + 4 * v62 + 780) = v56;
      goto LABEL_106;
    }
    v57 = *(_DWORD *)(v34 + 316);
    v58 = *(_DWORD *)(dword_381B58 + 6836);
    v59 = dword_381B58 + 6836;
    *(_DWORD *)(dword_381B58 + 6840) = v56;
    *(_DWORD *)(v58 + 4 * v57 + 780) = v56;
    v60 = (_QWORD *)(v58 + 16 * v57 + 788);
    v61 = *(_QWORD *)(v33 + 6952);
    *v60 = *(_QWORD *)(v33 + 6944);
    v60[1] = v61;
    v62 = *(_DWORD *)(v34 + 316);
    *(_BYTE *)(v59 + 99) = 1;
    *(_WORD *)(v59 + 97) = 1;
LABEL_106:
    v63 = *(_QWORD *)(v33 + 6952);
    v64 = (_QWORD *)(*(_DWORD *)(v34 + 228) + 16 * v62 + 788);
    *v64 = *(_QWORD *)(v33 + 6944);
    v64[1] = v63;
  }
LABEL_107:
  v65 = *(unsigned __int8 *)(v34 + 353);
  v374 = v32;
  v377 = v36;
  *(_DWORD *)(v34 + 332) = 0;
  *(_WORD *)(v34 + 329) = 0;
  *(_DWORD *)(v34 + 256) = 0;
  if ( !v65 )
    goto LABEL_130;
  v66 = dword_381B58;
  v67 = dword_381B58 + 6836;
  v68 = *(_DWORD *)(dword_381B58 + 6984);
  v69 = (_DWORD *)(dword_381B58 + 7024);
  if ( v68 || *(_DWORD *)(dword_381B58 + 7064) )
  {
    v70 = (_DWORD *)(dword_381B58 + 7064);
    v22 = v68 == 0;
    v71 = dword_381B58 + 7064;
    if ( !v22 )
      v71 = dword_381B58 + 6984;
    if ( (*(_BYTE *)(dword_381B58 + 6964) & 0x20) != 0 && *v69 && *v69 != *(_DWORD *)(dword_381B58 + 6840) )
      v71 = dword_381B58 + 7024;
    if ( (_DWORD *)v71 != v70 )
    {
      if ( !*v70 || *(_DWORD *)(*(_DWORD *)(dword_381B58 + 7072) + 760) != *(_DWORD *)v67 )
        goto LABEL_121;
      v72 = *(float *)(v71 + 12);
      v73 = *(float *)(dword_381B58 + 7076);
      if ( v73 >= v72 )
      {
        if ( v73 == v72 && *(float *)(dword_381B58 + 7080) < *(float *)(v71 + 16) )
          v71 = dword_381B58 + 7064;
        goto LABEL_121;
      }
    }
    v71 = dword_381B58 + 7064;
LABEL_121:
    if ( !*(_DWORD *)(dword_381B58 + 6924) )
    {
      v74 = *(_DWORD *)(v71 + 8);
      v75 = *(float *)(v74 + 12);
      v76 = *(float *)(v74 + 16);
      v77 = v75 + *(float *)(v71 + 32);
      v78 = v76 + *(float *)(v71 + 36);
      v79 = *(float *)(v71 + 24) + v75;
      v80 = *(float *)(v71 + 28) + v76;
      v382 = v77;
      v383 = v78;
      v81 = *(_DWORD *)(v71 + 8);
      *((float *)&v381 + 1) = v80;
      *(float *)&v381 = v79;
      sub_172008(v81, &v381);
      sub_16F690(v380, *(_DWORD *)(v71 + 8), 0);
      v82 = *(_DWORD *)(v71 + 8);
      v83 = *(float *)(v82 + 88) - v380[0];
      v84 = *(float *)(v82 + 92) - v380[1];
      v85 = v84 + *(float *)(v71 + 28);
      v86 = v83 + *(float *)(v71 + 32);
      v87 = v84 + *(float *)(v71 + 36);
      *(float *)(v71 + 24) = v83 + *(float *)(v71 + 24);
      *(float *)(v71 + 28) = v85;
      *(float *)(v71 + 32) = v86;
      *(float *)(v71 + 36) = v87;
      if ( *(unsigned __int8 *)(v82 + 11) << 31 )
      {
        v88 = *(_DWORD *)(v82 + 760);
        v379[3] = v78 + v84;
        v379[2] = v77 + v83;
        v379[1] = v80 + v84;
        v379[0] = v79 + v83;
        sub_172008(v88, v379);
      }
      v66 = dword_381B58;
    }
    v89 = *(_DWORD *)(v66 + 6608);
    v90 = v66 + 6608;
    *(_BYTE *)(v90 + 12) = v89 != 0;
    if ( v89 )
    {
      *(_WORD *)(v90 + 14) = 0;
      *(_DWORD *)(v90 + 8) = 0;
    }
    LODWORD(v92) = *(_DWORD *)v71;
    v91 = *(_DWORD *)(v67 + 4);
    HIDWORD(v92) = *(_DWORD *)(v71 + 8);
    *(_DWORD *)(v90 + 20) = 0;
    *(_DWORD *)(v90 + 24) = 0;
    *(_DWORD *)v90 = 0;
    *(_DWORD *)(v90 + 36) = 0;
    *(_BYTE *)(v90 + 13) = 0;
    *(_BYTE *)(v90 + 16) = 0;
    *(_DWORD *)v67 = HIDWORD(v92);
    if ( v91 != (_DWORD)v92 )
    {
      HIDWORD(v92) = *(_DWORD *)(v71 + 4);
      *(_QWORD *)(v67 + 28) = v92;
    }
    HIDWORD(v92) = *(_DWORD *)(v67 + 88);
    v93 = *(_DWORD *)(v90 + 228);
    *(_DWORD *)(v90 + 232) = v92;
    *(_DWORD *)(v93 + 4 * HIDWORD(v92) + 780) = v92;
    v94 = (_QWORD *)(v93 + 16 * HIDWORD(v92) + 788);
    v95 = *(_QWORD *)(v71 + 32);
    *v94 = *(_QWORD *)(v71 + 24);
    v94[1] = v95;
    *(_BYTE *)(v90 + 327) = 1;
    *(_WORD *)(v90 + 325) = 1;
    *(_BYTE *)(v67 + 124) = 0;
    goto LABEL_130;
  }
  if ( *(_DWORD *)(dword_381B58 + 6840) )
    *(_WORD *)(dword_381B58 + 6934) = 256;
LABEL_130:
  if ( *(_DWORD *)(v34 + 360) == 2 )
  {
    if ( !*(_DWORD *)(v34 + 376) && !*(_DWORD *)(v34 + 456) )
      *(_BYTE *)(v34 + 326) = 0;
    *(_DWORD *)(v34 + 360) = 0;
  }
  if ( *(_BYTE *)(v34 + 325) && *(_BYTE *)(v34 + 324) )
  {
    v96 = (*(_BYTE *)(v33 + 8) & 4) != 0;
    if ( (*(_BYTE *)(v33 + 8) & 4) != 0 )
      v96 = (*(_BYTE *)(v33 + 12) & 4) != 0;
    if ( v96 && !*(_BYTE *)(v34 + 326) && *(_BYTE *)(v34 + 327) && *(_DWORD *)(v34 + 228) )
    {
      sub_170190(&v381);
      v109 = v381;
      *(_QWORD *)(v33 + 892) = v381;
      *(_QWORD *)(v33 + 224) = v109;
      *(_BYTE *)(v33 + 855) = 1;
    }
    *(_BYTE *)(v34 + 325) = 0;
  }
  v97 = *(_DWORD **)(v34 + 228);
  *(_DWORD *)(v34 + 252) = 0;
  *(_BYTE *)(v34 + 324) = 0;
  if ( v97 )
  {
    v98 = v97;
    while ( (v98[2] & 0x15000000) == 0x1000000 )
    {
      v98 = (_DWORD *)v98[190];
      if ( !v98 )
        goto LABEL_148;
    }
    if ( v98 != v97 )
      v98[194] = v97;
LABEL_148:
    if ( v97[194] && !*(_DWORD *)(v34 + 316) )
      v97[194] = 0;
  }
  v99 = dword_381B58;
  v100 = dword_381B58 + 5220;
  if ( sub_1683BC() )
  {
    v101 = v377;
    *(_DWORD *)(v100 + 1680) = 0;
    goto LABEL_279;
  }
  v102 = *(_DWORD *)(v100 + 1680);
  v373 = v99 + 6912;
  if ( !*(_DWORD *)(v100 + 1684) )
  {
    if ( !v102 )
      goto LABEL_163;
LABEL_162:
    v105 = 0;
    goto LABEL_181;
  }
  if ( v102 )
    goto LABEL_162;
  v103 = *(float *)(v99 + 7200);
  v104 = 0.0;
  if ( (float)(*(float *)(v99 + 6916) + (float)(*(float *)(v99 + 24) * -10.0)) >= 0.0 )
    v104 = *(float *)(v99 + 6916) + (float)(*(float *)(v99 + 24) * -10.0);
  *(float *)(v99 + 6916) = v104;
  if ( v103 <= 0.0 && v104 <= 0.0 )
    *(_DWORD *)(v100 + 1684) = 0;
LABEL_163:
  v105 = 0;
  v102 = 0;
  v106 = 0.0;
  if ( *(float *)v100 == 0.0 )
    v106 = 1.0;
  if ( *(float *)v100 < 0.0 )
    v106 = 0.0;
  if ( v106 > 0.0 )
    v105 = 1;
  if ( *(_BYTE *)(v99 + 248) )
  {
    if ( *(int *)(v99 + 52) >= 0 && ((int (*)(void))sub_16EA2C)() )
    {
      v102 = 0;
      v107 = *(_BYTE *)(v99 + 8) & 1;
      goto LABEL_182;
    }
    v102 = 0;
  }
LABEL_181:
  v107 = 0;
LABEL_182:
  if ( (v105 || v107)
    && ((v113 = *(_DWORD *)(v100 + 1616)) != 0 || (v113 = sub_172130(*(_DWORD *)(v100 + 1300) - 1, -2147483647, -1)) != 0) )
  {
    v111 = *(float *)(v99 + 24) + 0.0;
    *(_DWORD *)(v100 + 1680) = v113;
    *(_DWORD *)(v100 + 1684) = v113;
    *(_BYTE *)(v99 + 6920) = v107 ^ 1;
    *(_DWORD *)(v99 + 6916) = 0;
    v112 = 4;
    if ( v107 )
      v112 = 3;
    v110 = v99 + 6912;
    *(_DWORD *)(v100 + 1656) = v112;
    *(float *)v373 = v111;
  }
  else
  {
    v110 = v99 + 6912;
    v111 = *(float *)(v99 + 24) + *(float *)v373;
    *(float *)v373 = v111;
    if ( !v102 )
    {
      v127 = 0;
      v128 = 0;
      goto LABEL_231;
    }
    v112 = *(_DWORD *)(v100 + 1656);
  }
  v114 = v99;
  if ( v112 == 4 )
  {
    v115 = (float)(v111 + -0.2) / 0.05;
    v116 = v115 < 0.0;
    if ( v115 > 1.0 )
      v115 = 1.0;
    if ( v116 )
      v115 = 0.0;
    if ( *(float *)(v110 + 4) >= v115 )
      v115 = *(float *)(v110 + 4);
    *(float *)(v110 + 4) = v115;
    v117 = COERCE_FLOAT(((int (__fastcall *)(int, int))sub_1706F8)(12, 4));
    v118 = sub_1706F8(13, 4);
    v114 = v99;
    v119 = v118 == 0.0;
    v120 = v118 < 0.0;
    v121 = v117 > 0.0;
    if ( !v120 && !v119 )
      --v121;
    if ( v121 )
    {
      sub_172184(v121, v99);
      v115 = 1.0;
      v114 = dword_381B58;
      *(_DWORD *)(v110 + 4) = 1065353216;
    }
    if ( *(float *)(v114 + 776) <= 0.0 )
    {
      v129 = *(_BYTE *)(v110 + 8) & (v115 < 1.0);
      *(_BYTE *)(v110 + 8) = v129;
      if ( v129 )
      {
        if ( *(_DWORD *)(v100 + 1616) )
        {
          v128 = 0;
          v127 = 1;
        }
        else
        {
          v127 = 0;
          v128 = 0;
        }
      }
      else
      {
        v128 = *(_DWORD *)(v100 + 1680);
        v127 = 0;
      }
      *(_DWORD *)(v100 + 1680) = 0;
      goto LABEL_231;
    }
    if ( !*(_DWORD *)(v100 + 1680) )
    {
LABEL_218:
      v127 = 0;
      v128 = 0;
      goto LABEL_231;
    }
    v112 = *(_DWORD *)(v100 + 1656);
  }
  if ( v112 != 3 )
    goto LABEL_218;
  v122 = (float)(*(float *)v110 + -0.2) / 0.05;
  v123 = v122 < 0.0;
  if ( v122 > 1.0 )
    v122 = 1.0;
  if ( v123 )
    v122 = 0.0;
  if ( *(float *)(v110 + 4) >= v122 )
    v122 = *(float *)(v110 + 4);
  v124 = *(_DWORD *)(v114 + 52);
  *(float *)(v110 + 4) = v122;
  if ( v124 >= 0 )
  {
    v125 = 1;
    if ( ((int (*)(void))sub_16EA2C)() )
    {
      if ( !*(_BYTE *)(v99 + 249) )
        v125 = -1;
      sub_172184(v125, v126);
    }
  }
  if ( *(_BYTE *)(v99 + 248) )
    goto LABEL_218;
  v128 = *(_DWORD *)(v100 + 1680);
  v127 = 0;
LABEL_231:
  v130 = dword_381B58 + 5272;
  v131 = *(float *)(dword_381B58 + 5272);
  if ( v131 == 0.0 )
    *(_BYTE *)(v110 + 8) = 1;
  if ( (!*(_DWORD *)(v100 + 1388) || *(_BYTE *)(v100 + 1401))
    && *(_BYTE *)(v110 + 8)
    && v131 < 0.0
    && *(float *)(v130 + 88) >= 0.0 )
  {
    v127 |= (*(float *)(v99 + 224) >= -256000.0 && *(float *)(v99 + 228) >= -256000.0) == (*(float *)(v99 + 896) >= -256000.0
                                                                                        && *(float *)(v99 + 892) >= -256000.0);
  }
  v132 = *(_DWORD *)(v100 + 1680);
  if ( !v132 || (*(_BYTE *)(v132 + 8) & 4) != 0 )
    goto LABEL_254;
  v133 = *(_DWORD *)(v100 + 1656);
  if ( v133 != 3 )
  {
    v134 = 0.0;
    v135 = 0.0;
    goto LABEL_246;
  }
  if ( !*(_BYTE *)(v99 + 249) )
  {
    v367 = v128;
    sub_170850((int)&v381, 1, 0, 0, 0.0);
    v128 = v367;
    v133 = *(_DWORD *)(v100 + 1656);
    v135 = *((float *)&v381 + 1);
    v134 = *(float *)&v381;
LABEL_246:
    if ( v133 == 4 )
    {
      v136 = v128;
      sub_170850((int)&v381, 4, 0, 0, 0.0);
      v128 = v136;
      v135 = *((float *)&v381 + 1);
      v134 = *(float *)&v381;
    }
    goto LABEL_248;
  }
  v134 = 0.0;
  v135 = 0.0;
LABEL_248:
  if ( v134 != 0.0 )
  {
    v137 = *(float *)(v99 + 164);
    v138 = *(float *)(v99 + 24) * 800.0;
    v139 = *(float *)(v99 + 168);
    v140 = v127;
    v141 = v128;
    if ( v137 < v139 )
      v139 = v137;
    v142 = *(_DWORD *)(*(_DWORD *)(v100 + 1680) + 764);
    v143 = (float)(int)(float)(v138 * v139);
    v144 = *(float *)(v142 + 12) + (float)(v134 * v143);
    *((float *)&v381 + 1) = *(float *)(v142 + 16) + (float)(v135 * v143);
    *(float *)&v381 = v144;
    sub_16820C(v142, (float *)&v381, 1);
    v145 = *(_DWORD *)(v100 + 1680);
    *(_BYTE *)(v110 + 23) = 1;
    v128 = v141;
    v127 = v140;
    if ( !(*(unsigned __int8 *)(v145 + 9) << 31) && *(float *)(dword_381B58 + 11512) <= 0.0 )
      *(_DWORD *)(dword_381B58 + 11512) = *(_DWORD *)(dword_381B58 + 28);
  }
LABEL_254:
  v101 = v377;
  if ( v128 )
  {
    v146 = *(_DWORD *)(v100 + 1616);
    if ( !v146 || v128 != *(_DWORD *)(v146 + 764) )
    {
      v147 = v127;
      v148 = *(_DWORD *)(dword_381B58 + 6608);
      v149 = dword_381B58 + 6608;
      *(_BYTE *)(dword_381B58 + 6620) = v148 != 0;
      if ( v148 )
      {
        *(_WORD *)(v149 + 14) = 0;
        *(_DWORD *)(v149 + 8) = 0;
      }
      *(_DWORD *)(v149 + 20) = 0;
      *(_DWORD *)(v149 + 24) = 0;
      *(_DWORD *)v149 = 0;
      *(_DWORD *)(v149 + 36) = 0;
      *(_BYTE *)(v149 + 13) = 0;
      v150 = *(_DWORD *)(v128 + 776);
      *(_BYTE *)(v149 + 16) = 0;
      *(_WORD *)(v110 + 22) = 256;
      if ( !v150 )
        v150 = v128;
      sub_1683F8(v150);
      sub_168010(v150);
      if ( !*(_DWORD *)(v150 + 780) )
        sub_16F910(v150, 0);
      v151 = *(_DWORD *)(v150 + 312);
      v127 = v147;
      if ( v151 == 2 )
        *(_DWORD *)(v110 + 12) = 1;
    }
    *(_DWORD *)(v100 + 1680) = 0;
  }
  if ( v127 )
  {
    v152 = *(_DWORD *)(v100 + 1616);
    if ( v152 )
    {
      v153 = *(_DWORD *)(v100 + 1616);
      do
      {
        v154 = v153;
        v153 = *(_DWORD *)(v153 + 760);
      }
      while ( v153 && (*(_BYTE *)(v154 + 312) & 2) == 0 && (*(_DWORD *)(v154 + 8) & 0x15000000) == 0x1000000 );
      if ( v154 == v152 )
      {
        v155 = *(_DWORD *)(v100 + 1616);
      }
      else
      {
        sub_168010(v154);
        v155 = *(_DWORD *)(v100 + 1616);
        *(_DWORD *)(v154 + 776) = v152;
      }
      *(_WORD *)(v373 + 22) = 256;
      if ( (*(_BYTE *)(v155 + 312) & 2) != 0 )
        v156 = *(_DWORD *)(v373 + 12) ^ 1;
      else
        v156 = 0;
      sub_171FC0(v156);
    }
  }
LABEL_279:
  v157 = v101;
  if ( v101 )
    v157 = 1;
  if ( (v157 | v374) != 1 || (v158 = *(_DWORD *)(v34 + 228)) == 0 )
  {
    *(_BYTE *)(v33 + 857) = 0;
LABEL_288:
    v160 = *(_DWORD *)(v34 + 292) != 0;
    goto LABEL_289;
  }
  v159 = *(_DWORD *)(v158 + 8) & 0x40000;
  *(_BYTE *)(v33 + 857) = (v159 >> 18) ^ 1;
  if ( v159 || !*(_DWORD *)(v34 + 232) || *(_BYTE *)(v34 + 326) )
    goto LABEL_288;
  v160 = 1;
LABEL_289:
  *(_BYTE *)(v33 + 858) = v160;
  v161 = dword_381B58 + 5212;
  if ( *(float *)(dword_381B58 + 5212) == 0.0 )
  {
    if ( *(_DWORD *)v34 )
    {
      if ( (*(_BYTE *)(v34 + 24) & 2) == 0 )
      {
        v162 = dword_381B58 + 6616;
        v163 = *(_DWORD *)(dword_381B58 + 6608);
        *(_BYTE *)(dword_381B58 + 6620) = v163 != 0;
        if ( v163 )
        {
          *(_WORD *)(v162 + 6) = 0;
          *(_DWORD *)v162 = 0;
        }
        *(_DWORD *)(v162 + 12) = 0;
        *(_DWORD *)(v162 + 16) = 0;
        *(_DWORD *)(v161 + 1396) = 0;
        *(_DWORD *)(v162 + 28) = 0;
        *(_BYTE *)(v162 + 5) = 0;
        *(_BYTE *)(v162 + 8) = 0;
      }
    }
    else
    {
      v164 = *(_DWORD **)(v34 + 228);
      if ( v164 && (v164[2] & 0x5000000) == 0x1000000 && (v165 = v164[190]) != 0 )
      {
        sub_168010(v165);
        v166 = *(unsigned __int8 *)(v34 + 327);
        v167 = v164[21];
        v168 = *(_DWORD *)(dword_381B58 + 6836);
        *(_DWORD *)(dword_381B58 + 6840) = v167;
        *(_BYTE *)(v34 + 324) = 0;
        *(_DWORD *)(v168 + 780) = v167;
        if ( v166 )
          *(_BYTE *)(v34 + 325) = 1;
      }
      else
      {
        v169 = *(_DWORD *)(v34 + 204);
        if ( v169 < 1 )
        {
          if ( *(_DWORD *)(v34 + 316) )
          {
            sub_171FC0(0);
          }
          else
          {
            if ( v164 && (v164[2] & 0x5000000) != 0x1000000 )
              v164[195] = 0;
            *(_DWORD *)(v34 + 232) = 0;
          }
        }
        else
        {
          v170 = v169 - 1;
          if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v34 + 212) + 36 * v170 + 4) + 11) & 8) == 0 )
            sub_1702CC(v170);
        }
      }
    }
  }
  v171 = *(_DWORD *)(v34 + 232);
  v172 = (_DWORD *)(v34 + 236);
  *(_QWORD *)(v34 + 236) = 0LL;
  *(_QWORD *)(v34 + 244) = 0LL;
  if ( !v171 || *(_BYTE *)(v34 + 326) || *(_DWORD *)(v34 + 292) )
    goto LABEL_312;
  v175 = *(_DWORD *)(v34 + 228);
  if ( !v175 )
    goto LABEL_326;
  if ( (*(_BYTE *)(v175 + 10) & 4) != 0 )
    goto LABEL_312;
  v176 = (float *)(dword_381B58 + 5208);
  if ( *(float *)(dword_381B58 + 764) > 0.0 )
  {
    v177 = 0.0;
    if ( *v176 == 0.0 )
      v177 = 1.0;
    if ( *v176 < 0.0 )
      v177 = 0.0;
    v178 = *(_DWORD *)v34;
    if ( !*(_DWORD *)v34 && v177 > 0.0 )
    {
      *v172 = v171;
      goto LABEL_545;
    }
    if ( !v178 || v178 == v171 )
    {
LABEL_545:
      *(_DWORD *)(v34 + 240) = v171;
      if ( v177 > 0.0 )
        *(_DWORD *)(v34 + 244) = v171;
      goto LABEL_549;
    }
LABEL_548:
    if ( v178 != v171 )
      goto LABEL_312;
    goto LABEL_549;
  }
  v178 = *(_DWORD *)v34;
  if ( *(_DWORD *)v34 )
    goto LABEL_548;
LABEL_549:
  if ( v176[2] == 0.0 )
    *(_DWORD *)(v34 + 248) = v171;
LABEL_312:
  v173 = *(_DWORD *)(v34 + 228);
  if ( !v173 )
  {
LABEL_326:
    v173 = 0;
    v174 = 1;
    goto LABEL_327;
  }
  v174 = 0;
  if ( (*(_BYTE *)(v173 + 10) & 4) != 0 )
    *(_BYTE *)(v34 + 326) = 1;
LABEL_327:
  v179 = *(_DWORD *)(v34 + 264);
  *(_BYTE *)(v34 + 353) = 0;
  if ( v179 )
  {
    v180 = vdupq_n_s32(v179);
    *(_QWORD *)v172 = v180.n128_u64[0];
    *(_QWORD *)(v34 + 244) = v180.n128_u64[1];
  }
  v181 = *(_DWORD *)v34;
  *(_DWORD *)(v34 + 264) = 0;
  if ( v181 )
    v182 = *(_DWORD *)(v34 + 20);
  else
    v182 = -1;
  if ( *(_DWORD *)(v34 + 360) )
  {
    *(_DWORD *)(v34 + 360) = 2;
  }
  else
  {
    v183 = -1;
    *(_DWORD *)(v34 + 356) = 0;
    *(_DWORD *)(v34 + 364) = -1;
    if ( !v174 )
    {
      v183 = -1;
      if ( !*(_DWORD *)(v34 + 292) )
      {
        if ( v182 )
        {
          if ( (*(_BYTE *)(v173 + 10) & 4) != 0 )
          {
            v183 = -1;
          }
          else
          {
            if ( v182 << 31 )
            {
              v184 = v171;
              v185 = sub_1706F8(4, 3);
              v186 = sub_1706F8(18, 3);
              v171 = v184;
              if ( (float)(v185 + v186) <= 0.0 )
              {
                v183 = -1;
              }
              else
              {
                v183 = 0;
                *(_DWORD *)(v34 + 364) = 0;
              }
            }
            else
            {
              v183 = -1;
            }
            v187 = v171;
            if ( (v182 & 2) != 0 )
            {
              v188 = sub_1706F8(5, 3);
              if ( (float)(v188 + sub_1706F8(19, 3)) > 0.0 )
              {
                v183 = 1;
                *(_DWORD *)(v34 + 364) = 1;
              }
            }
            if ( (v182 & 4) != 0 )
            {
              v189 = sub_1706F8(6, 3);
              if ( (float)(v189 + sub_1706F8(20, 3)) > 0.0 )
              {
                v183 = 2;
                *(_DWORD *)(v34 + 364) = 2;
              }
            }
            if ( (v182 & 8) != 0 )
            {
              v190 = sub_1706F8(7, 3);
              v191 = sub_1706F8(21, 3);
              v174 = 0;
              v171 = v187;
              if ( (float)(v190 + v191) > 0.0 )
              {
                *(_DWORD *)(v34 + 364) = 3;
                v183 = 3;
              }
            }
            else
            {
              v171 = v187;
              v174 = 0;
            }
          }
        }
      }
    }
    *(_DWORD *)(v34 + 372) = v183;
    v101 = v377;
  }
  v192 = 0.0;
  if ( !v101 )
    goto LABEL_357;
  if ( *(_DWORD *)(dword_381B58 + 6972) != -1 )
    goto LABEL_357;
  v204 = dword_381B58 + 6348;
  v205 = *(_DWORD *)(dword_381B58 + 6836);
  if ( !v205 || (*(_BYTE *)(v205 + 10) & 4) != 0 || *(_DWORD *)(dword_381B58 + 6900) || *(_DWORD *)(dword_381B58 + 6924) )
    goto LABEL_357;
  v206 = *(_DWORD *)(dword_381B58 + 72);
  if ( v206 < 0 )
  {
    v207 = 0;
  }
  else
  {
    v207 = *(unsigned __int8 *)(dword_381B58 + v206 + 252);
    if ( *(_BYTE *)(dword_381B58 + v206 + 252) )
      v207 = 1;
  }
  v350 = *(_DWORD *)(dword_381B58 + 76);
  v351 = v207 & (v182 >> 2);
  if ( v350 <= -1 )
  {
    if ( v351 )
    {
LABEL_561:
      v376 = v174;
      v378 = v171;
      if ( *(_DWORD *)(v205 + 312) || !*(_BYTE *)(v205 + 321) )
      {
        v192 = 0.0;
        v352 = (float)((float)(*(float *)(v205 + 508) - *(float *)(v205 + 500))
                     - (float)(*(float *)v204 * *(float *)(v205 + 628)))
             + (float)(*(float *)(v205 + 800) - *(float *)(v205 + 792));
        if ( v352 <= 0.0 )
          v352 = 0.0;
        if ( !sub_16EA2C(v206, 1) )
        {
          v362 = sub_16EA2C(v350, 1);
          v171 = v378;
          v174 = v376;
          if ( v362 )
          {
            v192 = v352;
            *(_DWORD *)(v204 + 632) = 3;
            *(_DWORD *)(v204 + 624) = 2;
            *(_DWORD *)(v204 + 616) = 48;
          }
          goto LABEL_357;
        }
        v192 = -v352;
        *(_DWORD *)(v204 + 632) = 2;
        *(_DWORD *)(v204 + 624) = 3;
        *(_DWORD *)(v204 + 616) = 48;
        goto LABEL_582;
      }
      if ( ((int (*)(void))sub_16EA2C)() )
      {
        v363 = *(float *)(v205 + 92);
        v364 = v363 + *(float *)(v205 + 228);
        v365 = v363 - (float)(*(float *)(v205 + 508) - *(float *)(v205 + 500));
      }
      else
      {
        if ( !sub_16EA2C(v350, 1) )
        {
LABEL_582:
          v171 = v378;
          v174 = v376;
          goto LABEL_357;
        }
        v366 = *(float *)(v205 + 92);
        v364 = v366 + *(float *)(v205 + 228);
        v365 = v366 + (float)(*(float *)(v205 + 508) - *(float *)(v205 + 500));
      }
      *(float *)(v205 + 92) = v365;
      *(float *)(v205 + 228) = v364 - v365;
      goto LABEL_582;
    }
  }
  else if ( v351 != ((*(_BYTE *)(dword_381B58 + v350 + 252) != 0) & (v182 >> 3)) )
  {
    goto LABEL_561;
  }
LABEL_357:
  v193 = *(_DWORD *)(v34 + 364);
  v194 = 1;
  if ( v193 == -1 )
  {
    v195 = 0;
  }
  else
  {
    *(_BYTE *)(v34 + 353) = 1;
    v194 = 0;
    *(_DWORD *)(v34 + 368) = v193;
    if ( !v171 )
    {
      *(_DWORD *)(v34 + 332) = 0;
      *(_WORD *)(v34 + 329) = 257;
      *(_BYTE *)(v34 + 326) = 0;
    }
    v195 = 1;
  }
  v196 = (float *)(dword_381B58 + 6348);
  if ( *(_BYTE *)(dword_381B58 + 6961) )
  {
    v197 = 1;
  }
  else
  {
    v198 = *(_BYTE *)(dword_381B58 + 6937);
    v197 = v198 != 0;
  }
  *(_BYTE *)(dword_381B58 + 6936) = v197;
  if ( !v174 && (*(_BYTE *)(v173 + 10) & 4) == 0 && !*(_DWORD *)(v34 + 292) )
  {
    v199 = (float)(int)(float)((float)((float)((float)(*v196 * *(float *)(v173 + 628)) * 100.0) * *(float *)(v33 + 24))
                             + 0.5);
    if ( !*(_DWORD *)(v173 + 312) && !((*(_BYTE *)(v173 + 321) == 0) | v194) )
    {
      if ( v193 > 1 )
      {
        if ( (v193 & 0xFFFFFFFE) == 2 )
        {
          v208 = 1.0;
          if ( v193 == 2 )
            v208 = -1.0;
          v209 = *(float *)(v173 + 92);
          v210 = (float)(int)(float)(v209 + (float)(v208 * v199));
          v211 = (float)(v209 + *(float *)(v173 + 228)) - v210;
          *(float *)(v173 + 92) = v210;
          *(float *)(v173 + 228) = v211;
        }
      }
      else
      {
        v200 = 1.0;
        if ( !v193 )
          v200 = -1.0;
        v201 = *(float *)(v173 + 88);
        v202 = (float)(int)(float)(v201 + (float)(v200 * v199));
        v203 = (float)(v201 + *(float *)(v173 + 224)) - v202;
        *(float *)(v173 + 88) = v202;
        *(float *)(v173 + 224) = v203;
      }
    }
    sub_170850((int)&v381, 4, 0, 1036831949, 10.0);
    v212 = *(float *)&v381;
    v213 = *(float *)&v381 == 0.0;
    if ( *(float *)&v381 != 0.0 )
      v213 = *(_BYTE *)(v173 + 120) == 0;
    if ( !v213 )
    {
      v214 = *(float *)(v173 + 88);
      v215 = *(float *)(v173 + 224);
      *(_BYTE *)(v34 + 352) = 1;
      v216 = (float)(int)(float)(v214 + (float)(v212 * v199));
      *(float *)(v173 + 88) = v216;
      *(float *)(v173 + 224) = (float)(v214 + v215) - v216;
    }
    v217 = *((float *)&v381 + 1);
    if ( *((float *)&v381 + 1) != 0.0 )
    {
      v218 = *(float *)(v173 + 92);
      v219 = *(float *)(v173 + 228);
      *(_BYTE *)(v34 + 352) = 1;
      v220 = (float)(int)(float)(v218 + (float)(v217 * v199));
      *(float *)(v173 + 92) = v220;
      *(float *)(v173 + 228) = (float)(v218 + v219) - v220;
    }
    v195 = *(unsigned __int8 *)(v34 + 353);
  }
  *(_DWORD *)(v34 + 376) = 0;
  *(_DWORD *)(v34 + 380) = 0;
  *(_DWORD *)(v34 + 384) = 0;
  *(_DWORD *)(v34 + 416) = 0;
  *(_DWORD *)(v34 + 420) = 0;
  *(_DWORD *)(v34 + 424) = 0;
  *(_DWORD *)(v34 + 456) = 0;
  *(_DWORD *)(v34 + 460) = 0;
  *(_DWORD *)(v34 + 464) = 0;
  *(_QWORD *)(v34 + 388) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(v34 + 396) = 0x7F7FFFFF7F7FFFFFLL;
  *(_DWORD *)(v34 + 404) = 2139095039;
  *(_QWORD *)(v34 + 428) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(v34 + 436) = 0x7F7FFFFF7F7FFFFFLL;
  *(_DWORD *)(v34 + 444) = 2139095039;
  *(_QWORD *)(v34 + 468) = 0x7F7FFFFF7F7FFFFFLL;
  *(_QWORD *)(v34 + 476) = 0x7F7FFFFF7F7FFFFFLL;
  *(_DWORD *)(v34 + 408) = -8388609;
  *(_DWORD *)(v34 + 412) = -8388609;
  *(_DWORD *)(v34 + 488) = -8388609;
  *(_DWORD *)(v34 + 492) = -8388609;
  *(_DWORD *)(v34 + 448) = -8388609;
  *(_DWORD *)(v34 + 452) = -8388609;
  *(_DWORD *)(v34 + 484) = 2139095039;
  if ( v195 && *(_BYTE *)(v34 + 352) && !*(_DWORD *)(v34 + 316) )
  {
    v221 = *(float **)(v34 + 228);
    v222 = v221[3];
    v223 = v221[4];
    v224 = (float)(v221[124] - v222) + -1.0;
    v225 = (float)(v221[127] - v223) + 1.0;
    v226 = (float)(v221[126] - v222) + 1.0;
    v227 = v221[199];
    v228 = (float)(v221[125] - v223) + -1.0;
    v229 = v221[197];
    if ( v229 < v224 || v227 > v226 )
    {
      v230 = (float)(*(float *)(dword_381B58 + 6348) * v221[157]) * 0.5;
      v231 = v230;
      if ( (float)(v225 - v228) < v230 )
        v231 = v225 - v228;
      v232 = v228 + v231;
      if ( (float)(v226 - v224) < v230 )
        v230 = v226 - v224;
      v233 = v224 + v230;
      v234 = v225 - v231;
      v235 = v226 - v230;
      if ( v221[198] >= v232 )
        v232 = v221[198];
      if ( v229 >= v233 )
        v233 = v221[197];
      if ( v221[200] < v234 )
        v234 = v221[200];
      if ( v227 < v235 )
        v235 = v221[199];
      v221[197] = v233;
      v221[198] = v232;
      v221[199] = v235;
      v221[200] = v234;
      *(_DWORD *)(v34 + 232) = 0;
    }
    *(_BYTE *)(v34 + 352) = 0;
  }
  v236 = *(_DWORD *)(v34 + 228);
  if ( v236 )
  {
    v237 = 0.0;
    v238 = (float *)(v236 + 16 * *(_DWORD *)(v34 + 316));
    if ( v238[197] > v238[199] )
    {
      v239 = 0.0;
      v240 = 0.0;
      v241 = 0.0;
    }
    else
    {
      v239 = 0.0;
      v240 = 0.0;
      v241 = 0.0;
      if ( v238[198] <= v238[200] )
      {
        v237 = v238[197];
        v239 = v238[198];
        v240 = v238[199];
        v241 = v238[200];
      }
    }
    v247 = *(float *)(v236 + 12);
    v248 = *(float *)(v236 + 16);
    v249 = v237 + v247;
    v245 = v240 + v247;
    v243 = v239 + v248;
    v246 = v241 + v248;
    v244 = dword_381B58;
    v242 = v249 + 1.0;
  }
  else
  {
    v242 = 1.0;
    v243 = 0.0;
    v244 = dword_381B58;
    v245 = *(float *)(dword_381B58 + 16);
    v246 = *(float *)(dword_381B58 + 20);
  }
  v250 = v192 + v246;
  if ( v242 < v245 )
    v245 = v242;
  *(_DWORD *)(v34 + 288) = 0;
  *(float *)(v34 + 272) = v245;
  *(float *)(v34 + 280) = v245;
  *(float *)(v34 + 276) = v192 + v243;
  *(float *)(v34 + 284) = v250;
  v251 = *(float *)(v244 + 224);
  v252 = *(float *)(v244 + 228);
  if ( v251 >= -256000.0 )
  {
    v252 = (float)(int)v252;
    v251 = (float)(int)v251;
    *(float *)(v244 + 7640) = v252;
    *(float *)(v244 + 7636) = v251;
    *(float *)(v244 + 224) = v251;
    *(float *)(v244 + 228) = v252;
  }
  if ( v251 < -256000.0 || v252 < -256000.0 || (v330 = *(float *)(v244 + 896), v330 < -256000.0) )
  {
    *(_DWORD *)(v244 + 884) = 0;
    *(_DWORD *)(v244 + 888) = 0;
  }
  else
  {
    v331 = v251 - *(float *)(v244 + 892);
    *(float *)(v244 + 884) = v331;
    *(float *)(v244 + 888) = v252 - v330;
    if ( v331 != 0.0 )
      *(_BYTE *)(v244 + 6935) = 0;
  }
  v253 = *(_DWORD *)(v244 + 224);
  v254 = *(float *)(v244 + 228);
  *(float *)(v244 + 896) = v254;
  v375 = v253;
  *(_DWORD *)(v244 + 892) = v253;
  v255 = 263;
  v256 = 0;
  v257 = 0;
  v258 = 0;
  do
  {
    v259 = (unsigned __int8 *)(v244 + v258);
    if ( !*(_BYTE *)(v244 + v258 + 232) )
    {
      v259[984] = 0;
      v259[989] = 0;
      v261 = v259 + 984;
      v273 = *(float *)(v244 + v257 + 1012);
      *(_DWORD *)(v244 + v257 + 1012) = -1082130432;
      v272 = v273 >= 0.0;
      v259[994] = v272;
      *(float *)(v244 + v257 + 1032) = v273;
LABEL_440:
      if ( !v272 )
        v259[1004] = 0;
      goto LABEL_455;
    }
    v260 = v244 + v257;
    v261 = v259 + 984;
    v262 = *(float *)(v244 + v257 + 1012);
    v259[994] = 0;
    v259[984] = v262 < 0.0;
    *(float *)(v244 + v257 + 1032) = v262;
    if ( v262 >= 0.0 )
    {
      v274 = *(float *)(v244 + 24);
      v259[989] = 0;
      v275 = v262 + v274;
      v276 = 0.0;
      *(float *)(v260 + 1012) = v275;
      v277 = 0.0;
      if ( v251 >= -256000.0 && v254 >= -256000.0 )
      {
        v277 = v254 - *(float *)(v244 + v256 + 904);
        v276 = v251 - *(float *)(v244 + 8 * v258 + 900);
      }
      v278 = (float *)(v244 + 8 * v258 + 1056);
      v279 = (float)(v277 * v277) + (float)(v276 * v276);
      if ( *(float *)(v260 + 1092) >= v279 )
        v279 = *(float *)(v260 + 1092);
      if ( v276 < 0.0 )
        v276 = -v276;
      if ( v277 < 0.0 )
        v277 = -v277;
      *(float *)(v260 + 1092) = v279;
      v280 = (float *)(v244 + 4 * v255);
      if ( *v280 >= v276 )
        v276 = *v280;
      if ( *v278 >= v277 )
        v277 = *v278;
      *v280 = v276;
      *v278 = v277;
    }
    else
    {
      v263 = v244 + v256;
      v264 = *(double *)(v244 + 6488);
      v265 = *(float *)(v244 + 40);
      v266 = *(double *)(v244 + v256 + 944);
      *(_DWORD *)(v260 + 1012) = 0;
      v259[989] = 0;
      v267 = v264 - v266;
      if ( v265 > v267 )
      {
        v268 = 0.0;
        v269 = 0.0;
        if ( v251 >= -256000.0 && v254 >= -256000.0 )
        {
          v269 = v254 - *(float *)(v263 + 904);
          v268 = v251 - *(float *)(v244 + 8 * v258 + 900);
        }
        v264 = -3.40282347e38;
        if ( (float)((float)(v269 * v269) + (float)(v268 * v268)) < (float)(*(float *)(v244 + 44) * *(float *)(v244 + 44)) )
        {
          v264 = -3.40282347e38;
          v259[989] = 1;
        }
      }
      v270 = v244 + 8 * v258;
      *(double *)(v263 + 944) = v264;
      *(_DWORD *)(v270 + 900) = v375;
      *(float *)(v270 + 904) = v254;
      v259[1004] = v259[989];
      *(_DWORD *)(v244 + 4 * v255) = 0;
      *(_DWORD *)(v270 + 1056) = 0;
      v271 = v259[232];
      *(_DWORD *)(v260 + 1092) = 0;
      if ( !v271 )
      {
        v272 = v259[994];
        goto LABEL_440;
      }
    }
LABEL_455:
    if ( *v261 )
      *(_BYTE *)(v244 + 6935) = 0;
    ++v258;
    v255 += 2;
    v256 += 8;
    v257 += 4;
  }
  while ( v258 != 5 );
  v281 = *(_DWORD *)(v371 + 584);
  v282 = *(float *)(v369 + 24);
  v283 = (float *)(v369 + 4 * v281 + 11596);
  *(float *)(v371 + 588) = *(float *)(v371 + 588) + (float)(v282 - *v283);
  *v283 = v282;
  v284 = *(float *)(v371 + 588);
  *(_DWORD *)(v371 + 584) = (v281 + 1) % 120;
  if ( v284 <= 0.0 )
    v285 = 3.4028e38;
  else
    v285 = 1.0 / (float)(v284 / 120.0);
  *(float *)(v369 + 860) = v285;
  sub_1680DC();
  sub_1684A0();
  v286 = sub_1683BC();
  v287 = v372;
  if ( v286 || *(_DWORD *)(v372 + 76) && *(float *)(v372 + 92) > 0.0 )
  {
    v288 = *(float *)(v369 + 24);
    v289 = 1.0;
    if ( (float)(*(float *)(v372 + 376) + (float)(v288 * 6.0)) < 1.0 )
      v289 = *(float *)(v372 + 376) + (float)(v288 * 6.0);
    *(float *)(v372 + 376) = v289;
  }
  else
  {
    v290 = *(float *)(v369 + 24);
    v291 = 0.0;
    if ( (float)(*(float *)(v372 + 376) + (float)(v290 * -10.0)) >= 0.0 )
      v291 = *(float *)(v372 + 376) + (float)(v290 * -10.0);
    *(float *)(v372 + 376) = v291;
  }
  *(_DWORD *)v371 = 1065353216;
  *(_DWORD *)(v371 + 4) = 1065353216;
  v292 = v370;
  v293 = dword_381B58;
  *(_DWORD *)(v371 + 600) = -1;
  v294 = *(_DWORD *)(v293 + 6576);
  *(_DWORD *)(v372 + 620) = 0;
  *(_DWORD *)(v371 + 592) = -1;
  *(_DWORD *)(v371 + 596) = -1;
  if ( v294 )
  {
    if ( !*(_BYTE *)(v294 + 125) )
    {
      v332 = *(float *)(v293 + 240);
      if ( v332 != 0.0 )
      {
        if ( *(_BYTE *)(v293 + 248) && *(_BYTE *)(v293 + 156) )
        {
          v344 = *(float *)(v294 + 628);
          v345 = v344 + (float)(v332 * 0.1);
          v346 = v345 < 0.5;
          if ( v345 > 2.5 )
            v345 = 2.5;
          if ( v346 )
            v345 = 0.5;
          v347 = *(unsigned __int8 *)(v294 + 11);
          *(float *)(v294 + 628) = v345;
          if ( !(v347 << 31) )
          {
            v348 = *(float *)(v294 + 12)
                 + (float)((float)((float)((float)(1.0 - (float)(v345 / v344)) * *(float *)(v294 + 20))
                                 * (float)(*(float *)(v293 + 224) - *(float *)(v294 + 12)))
                         / *(float *)(v294 + 20));
            *((float *)&v381 + 1) = *(float *)(v294 + 16)
                                  + (float)((float)((float)((float)(1.0 - (float)(v345 / v344)) * *(float *)(v294 + 24))
                                                  * (float)(*(float *)(v293 + 228) - *(float *)(v294 + 16)))
                                          / *(float *)(v294 + 24));
            *(float *)&v381 = v348;
            sub_16820C(v294, (float *)&v381, 0);
            v292 = v370;
            v287 = v372;
            *(float32x4_t *)(v294 + 20) = vcvtq_f32_s32(vcvtq_s32_f32(vmulq_n_f32(*(float32x4_t *)(v294 + 20), v345 / v344)));
          }
        }
        else
        {
          v333 = (float *)(v293 + 6348);
          do
          {
            v334 = *(_DWORD *)(v294 + 8);
            v335 = (float *)v294;
            if ( (v334 & 0x1000218) != 0x1000010 )
              break;
            v294 = *(_DWORD *)(v294 + 760);
          }
          while ( v294 );
          if ( (v334 & 0x210) == 0 && (v332 != 0.0 || *(float *)(v293 + 244) != 0.0) && !*(_BYTE *)(v293 + 248) )
          {
            v336 = (float)((float)(v335[138] - v335[136]) + (float)(v335[15] + v335[15])) * 0.67;
            if ( v332 != 0.0 )
            {
              v337 = *v333 * v335[157];
              if ( *(_BYTE *)(v293 + 249) )
              {
                v338 = v337 + v337;
                v339 = (float)((float)(v335[138] - v335[136]) + (float)(v335[15] + v335[15])) * 0.67;
                if ( v338 < v336 )
                  v339 = v338;
                v340 = (int)v339;
                v341 = v335[22];
                v342 = v341 + v335[56];
                v343 = v341 - (float)(v332 * (float)v340);
                v335[22] = v343;
                v335[56] = v342 - v343;
              }
              else
              {
                v353 = (float)((float)(v335[139] - v335[137]) + (float)(v335[16] + v335[16])) * 0.67;
                v354 = v337 * 5.0;
                if ( v354 < v353 )
                  v353 = v354;
                v355 = v335[23];
                v356 = v355 + v335[57];
                v357 = v355 - (float)(v332 * (float)(int)v353);
                v335[23] = v357;
                v335[57] = v356 - v357;
              }
            }
            v358 = *(float *)(v293 + 244);
            if ( v358 != 0.0 && !*(_BYTE *)(v293 + 249) )
            {
              v359 = v335[22];
              v360 = v359 + v335[56];
              if ( (float)((float)(*v333 * v335[157]) + (float)(*v333 * v335[157])) < v336 )
                v336 = (float)(*v333 * v335[157]) + (float)(*v333 * v335[157]);
              v361 = v359 - (float)(v358 * (float)(int)v336);
              v335[22] = v361;
              v335[56] = v360 - v361;
            }
          }
        }
      }
    }
  }
  v295 = *(_BYTE **)(v287 + 12);
  v296 = v295 == 0;
  if ( v295 )
    v296 = v295[122] == 0;
  if ( v296 || (v295[10] & 4) != 0 || *(_BYTE *)(v369 + 248) || (v324 = *(_DWORD *)(dword_381B58 + 52), v324 <= -1) )
  {
    *(_BYTE *)(v287 + 304) = 0;
LABEL_477:
    v297 = *(_BYTE **)(v287 + 284);
    goto LABEL_478;
  }
  v325 = sub_16EA2C(v324, 1);
  v287 = v372;
  v292 = v370;
  v326 = v368[16];
  *(_BYTE *)(v372 + 304) = v325;
  if ( !v325 || v326 )
    goto LABEL_477;
  v327 = *(_DWORD *)(v372 + 16);
  *(_DWORD *)(v372 + 296) = 0x7FFFFFFF;
  *(_DWORD *)(v372 + 284) = v295;
  if ( v327 && (v328 = *(_DWORD *)(v372 + 104), v328 != 0x7FFFFFFF) )
  {
    v349 = -1;
    if ( !*(_BYTE *)(v369 + 249) )
      v349 = 1;
    v329 = v328 + v349 + 1;
  }
  else
  {
    v329 = (char)-*(_BYTE *)(v369 + 249);
  }
  v297 = v295;
  *(_DWORD *)(v372 + 300) = v329;
LABEL_478:
  *(_DWORD *)(v287 + 280) = 0;
  *(_DWORD *)(v287 + 288) = 0x7FFFFFFF;
  *(_DWORD *)(v287 + 292) = 0x7FFFFFFF;
  if ( v297 )
  {
    v298 = *(_DWORD *)(v287 + 296);
    *(_DWORD *)(v287 + 280) = v297;
    if ( v298 != 0x7FFFFFFF )
    {
      v299 = *((_DWORD *)v297 + 89);
      v300 = __CFADD__(v299, 1);
      v301 = v299 + 1;
      if ( !v300 )
      {
        sub_2211C4(v298 + v301);
        v287 = v372;
        v292 = v370;
        *(_DWORD *)(v372 + 288) = v302;
      }
    }
    v303 = *(_DWORD *)(v287 + 300);
    if ( v303 != 0x7FFFFFFF )
    {
      v304 = *((_DWORD *)v297 + 90);
      v300 = __CFADD__(v304, 1);
      v305 = v304 + 1;
      if ( !v300 )
      {
        sub_2211C4(v303 + v305);
        v287 = v372;
        v292 = v370;
        *(_DWORD *)(v372 + 292) = v306;
      }
    }
    *(_DWORD *)(v287 + 296) = 0x7FFFFFFF;
    *(_DWORD *)(v287 + 300) = 0x7FFFFFFF;
    *(_DWORD *)(v287 + 284) = 0;
  }
  v307 = *((_DWORD *)v292 + 236);
  *(_DWORD *)(v287 + 104) = 0x7FFFFFFF;
  if ( v307 )
  {
    v308 = (int *)*((_DWORD *)v292 + 238);
    do
    {
      v309 = *v308++;
      --v307;
      v310 = *(_BYTE *)(v309 + 122);
      *(_WORD *)(v309 + 132) = 0;
      *(_BYTE *)(v309 + 124) = 0;
      *(_BYTE *)(v309 + 123) = v310;
      *(_BYTE *)(v309 + 122) = 0;
    }
    while ( v307 );
  }
  if ( v295 && !v295[123] )
  {
    sub_16A8F8(0, 0);
    v287 = v372;
  }
  if ( (int)v368[1] <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v311 = (void *)off_2390AC(0, dword_381B60);
    v312 = (const void *)v368[2];
    v313 = v311;
    if ( v312 )
    {
      j_memcpy(v311, v312, 4 * *v368);
      v314 = v368[2];
      if ( v314 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v314, dword_381B60);
    }
    v287 = v372;
    v368[1] = 0;
    v368[2] = v313;
  }
  v315 = *(_DWORD *)(v287 + 4);
  *v368 = 0;
  if ( v315 <= -1 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    v316 = (void *)off_2390AC(0, dword_381B60);
    v287 = v372;
    v317 = v316;
    v318 = *(const void **)(v372 + 8);
    if ( v318 )
    {
      j_memcpy(v316, v318, 36 * *(_DWORD *)v372);
      v319 = *(_DWORD *)(v372 + 8);
      if ( v319 && dword_381B58 )
        --*(_DWORD *)(dword_381B58 + 880);
      off_2390B0(v319, dword_381B60);
      v287 = v372;
    }
    *(_DWORD *)(v287 + 4) = 0;
    *(_DWORD *)(v287 + 8) = v317;
  }
  v320 = *(_DWORD *)(v287 + 12);
  *(_DWORD *)v287 = 0;
  sub_1683F8(v320);
  v321 = (_DWORD *)dword_381B58;
  v322 = *(_DWORD *)(dword_381B58 + 6672);
  *(_DWORD *)(dword_381B58 + 6704) = 1137180672;
  v321[1668] = v322 | 2;
  v321[1670] = 4;
  v321[1677] = 1137180672;
  sub_16A980("Debug##Default", 0, 0);
  result = 1;
  *(_BYTE *)(v369 + 2) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x16e5bc
// SYMBOL: sub_16E5BC
int sub_16E5BC()
{
  int v0; // r8
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r5
  int v4; // r2
  int v5; // r6
  int v6; // r10
  int v7; // r0
  int i; // r11
  int v9; // r1
  int v10; // r2
  bool v11; // zf
  int v12; // r0
  int v13; // r9
  int j; // r10
  int v15; // r0
  int v16; // r6
  int v17; // r0
  int v18; // r1
  int *v19; // r2
  int v20; // r1
  int result; // r0
  int v22; // r3
  int v23; // t1
  int (__fastcall *v24)(_BYTE *); // r1
  _BYTE *v25; // [sp+10h] [bp-30h]
  _DWORD v26[9]; // [sp+1Ch] [bp-24h]

  v0 = dword_381B58;
  v1 = (_DWORD *)(dword_381B58 + 5560);
  v2 = *(_DWORD *)(dword_381B58 + 6500);
  v3 = dword_381B58 + 7176;
  if ( v2 != *(_DWORD *)(dword_381B58 + 6496) )
  {
    sub_16DE84();
    v2 = v1[234];
  }
  v1[236] = v2;
  *(_DWORD *)(v0 + 864) = 0;
  *(_DWORD *)(v0 + 868) = 0;
  *(_DWORD *)(v0 + 872) = 0;
  sub_16E7C0(v3);
  if ( *(_DWORD *)(v3 + 52) )
    sub_16E87C(v3, v0 + 7204);
  v4 = v1[335];
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 9) & 0x20) != 0 )
      v5 = 0;
    else
      v5 = *(_DWORD *)(v4 + 764);
    v6 = v1[337];
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  v26[0] = v5;
  v7 = v1[237];
  v26[1] = v6;
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v9 = *(_DWORD *)(v1[239] + 4 * i);
      if ( *(_BYTE *)(v9 + 122) )
      {
        if ( !*(_BYTE *)(v9 + 129) )
        {
          v10 = *(_DWORD *)(v9 + 8);
          if ( (v10 & 0x1000000) == 0 )
          {
            v11 = v9 == v5;
            if ( v9 != v5 )
              v11 = v9 == v6;
            if ( !v11 )
            {
              v12 = dword_381B58 + 7188;
              if ( (v10 & 0x2000000) == 0 )
                v12 = dword_381B58 + 7176;
              sub_17176C(v12);
              v7 = v1[237];
            }
          }
        }
      }
    }
  }
  v25 = (_BYTE *)(v0 + 7132);
  v13 = 1;
  for ( j = 1; ; j = 2 )
  {
    if ( v5 && *(_BYTE *)(v5 + 122) && !*(_BYTE *)(v5 + 129) )
    {
      v15 = dword_381B58 + 7188;
      if ( (*(_DWORD *)(v5 + 8) & 0x2000000) == 0 )
        v15 = dword_381B58 + 7176;
      sub_17176C(v15);
    }
    if ( !(v13 << 31) )
      break;
    v5 = v26[j];
    v13 = 0;
  }
  sub_16DCC0((__int64 *)v3);
  if ( *(_BYTE *)(v0 + 172) )
    sub_178CC4(v0 + 7324, *(_DWORD *)(v0 + 224), *(_DWORD *)(v0 + 228), *v1, *(_DWORD *)(v3 + 268));
  if ( *(_DWORD *)(v3 + 172) )
    sub_16E87C(v3, v0 + 7324);
  v16 = *(_DWORD *)v3;
  *v25 = 1;
  v17 = dword_381B58;
  if ( v16 < 1 )
    v18 = 0;
  else
    v18 = *(_DWORD *)(v3 + 8);
  *(_QWORD *)(v0 + 7144) = 0LL;
  *(_QWORD *)(v0 + 7152) = 0LL;
  *(_DWORD *)(v0 + 7136) = v18;
  *(_DWORD *)(v0 + 7140) = v16;
  *(_QWORD *)(v0 + 7160) = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v0 + 7168) = *(_QWORD *)(v17 + 164);
  if ( v16 <= 0 )
  {
    result = 0;
    *(_DWORD *)(v0 + 864) = 0;
    *(_DWORD *)(v0 + 868) = 0;
  }
  else
  {
    v19 = *(int **)(v3 + 8);
    v20 = 0;
    result = v16;
    v22 = 0;
    do
    {
      v23 = *v19++;
      --result;
      v20 += *(_DWORD *)(v23 + 12);
      v22 += *(_DWORD *)(v23 + 24);
    }
    while ( result );
    *(_DWORD *)(v0 + 7144) = v20;
    *(_DWORD *)(v0 + 7148) = v22;
    *(_DWORD *)(v0 + 864) = v22;
    *(_DWORD *)(v0 + 868) = v20;
    v24 = *(int (__fastcall **)(_BYTE *))(v0 + 220);
    if ( v24 )
      return v24(v25);
  }
  return result;
}


// ======================================================================
