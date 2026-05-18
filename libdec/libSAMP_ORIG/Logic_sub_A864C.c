// ADDR: 0x885c0
// SYMBOL: sub_885C0
char *__fastcall sub_885C0(char *result, const char *a2, int a3)
{
  int v3; // r4

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v3 = 0;
    }
    else
    {
      v3 = a3 - 1;
      result = strncpy(result, a2, a3 - 1);
    }
    result[v3] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x8865a
// SYMBOL: sub_8865A
char *__fastcall sub_8865A(int dest)
{
  int v1; // r5
  int i; // r0
  int v4; // r2
  bool v5; // zf
  char *v6; // r1
  char *v7; // r6
  int v8; // r2
  char *v9; // r3
  char *v10; // r2
  int v11; // r3
  int v12; // t1
  bool v13; // zf
  char *result; // r0

  v1 = -dest;
  for ( i = 0; ; ++i )
  {
    v4 = *(unsigned __int8 *)(dest + i);
    v5 = v4 == 9;
    if ( v4 != 9 )
      v5 = v4 == 32;
    if ( !v5 )
      break;
    --v1;
  }
  v6 = (char *)(dest + i);
  v7 = (char *)(dest + i);
  if ( *(_BYTE *)(dest + i) )
  {
    v8 = 0;
    do
      v9 = (char *)(dest + v8++);
    while ( v9[i + 1] );
    v7 = &v6[v8];
    if ( &v6[v8] > v6 )
    {
      v10 = &v6[v8];
      while ( 1 )
      {
        v12 = (unsigned __int8)*--v10;
        v11 = v12;
        v13 = v12 == 32;
        if ( v12 != 32 )
          v13 = v11 == 9;
        if ( !v13 )
          break;
        v7 = v10;
        if ( v10 <= v6 )
        {
          v7 = (char *)(dest + i);
          break;
        }
      }
    }
  }
  if ( i )
    j_memmove((void *)dest, v6, (size_t)&v7[v1]);
  result = &v7[dest];
  v7[dest + v1] = 0;
  return result;
}


// ======================================================================
// ADDR: 0xa819c
// SYMBOL: sub_A819C
int __fastcall sub_A819C(char *a1, signed int a2, int a3, int *a4, const char *a5)
{
  int v5; // r3
  int result; // r0
  double v7; // d16

  if ( (a3 & 0xFFFFFFFE) == 6 )
    return sub_886C0(a1, a2, a5, *a4, *a4, a4[1]);
  if ( (a3 & 0xFFFFFFFE) == 4 )
  {
    v5 = *a4;
    return sub_886C0(a1, a2, a5, v5);
  }
  else
  {
    switch ( a3 )
    {
      case 0:
        v5 = *(char *)a4;
        return sub_886C0(a1, a2, a5, v5);
      case 1:
        v5 = *(unsigned __int8 *)a4;
        return sub_886C0(a1, a2, a5, v5);
      case 2:
        v5 = *(__int16 *)a4;
        return sub_886C0(a1, a2, a5, v5);
      case 3:
        v5 = *(unsigned __int16 *)a4;
        return sub_886C0(a1, a2, a5, v5);
      case 8:
        v7 = *(float *)a4;
        goto LABEL_14;
      case 9:
        v7 = *(double *)a4;
LABEL_14:
        result = sub_886C0(a1, a2, a5, a4, v7);
        break;
      default:
        result = 0;
        break;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa8214
// SYMBOL: sub_A8214
bool __fastcall sub_A8214(const char *a1, const char *a2, int a3, double *a4, const char *a5)
{
  const char *v6; // r8
  int v9; // r0
  int v10; // r1
  int v11; // r11
  int v12; // r0
  double *v13; // r1
  size_t v14; // r2
  double v15; // d16
  float v16; // s0
  int v18; // r0
  __int16 v19; // r0
  int v20; // r0
  float v21; // s0
  int v22; // r0
  size_t v23; // [sp+0h] [bp-48h]
  double v25; // [sp+8h] [bp-40h] BYREF
  double v26; // [sp+10h] [bp-38h] BYREF
  int v27; // [sp+1Ch] [bp-2Ch] BYREF
  _BYTE s1[8]; // [sp+20h] [bp-28h] BYREF

  v6 = a5;
  while ( 2 )
  {
    v9 = *(unsigned __int8 *)a1;
    switch ( *a1 )
    {
      case 9:
      case 0x20:
        ++a1;
        continue;
      case 0x2A:
      case 0x2B:
      case 0x2F:
        do
        {
          do
            v10 = *(unsigned __int8 *)++a1;
          while ( v10 == 32 );
        }
        while ( v10 == 9 );
        v11 = v9;
        if ( !*a1 )
          return 0;
        goto LABEL_9;
      default:
        v11 = 0;
        if ( !*a1 )
          return 0;
LABEL_9:
        v23 = *((_DWORD *)&unk_1115FC + 3 * a3);
        _memcpy_chk(s1, a4);
        if ( !a5 )
          v6 = (const char *)*((_DWORD *)&unk_1115FC + 3 * a3 + 2);
        v27 = 0;
        if ( a3 == 9 )
        {
          v25 = 0.0;
          v26 = *a4;
          if ( (!v11 || sscanf(a2, "%lf", &v26) >= 1) && sscanf(a1, "%lf", &v25) >= 1 )
          {
            if ( v11 == 42 )
            {
              v13 = a4;
              v15 = v26 * v25;
            }
            else
            {
              v13 = a4;
              if ( v11 == 47 )
              {
                v14 = v23;
                if ( v25 != 0.0 )
                  *a4 = v26 / v25;
                return memcmp(s1, v13, v14) != 0;
              }
              if ( v11 == 43 )
                v15 = v26 + v25;
              else
                v15 = v25;
            }
            v14 = v23;
            *v13 = v15;
            return memcmp(s1, v13, v14) != 0;
          }
          return 0;
        }
        if ( a3 == 8 )
        {
          LODWORD(v26) = *(_DWORD *)a4;
          LODWORD(v25) = 0;
          if ( (!v11 || sscanf(a2, "%f", &v26) >= 1) && sscanf(a1, "%f", &v25) >= 1 )
          {
            if ( v11 == 42 )
            {
              v13 = a4;
              v16 = *(float *)&v26 * *(float *)&v25;
            }
            else
            {
              v13 = a4;
              if ( v11 == 47 )
              {
                v14 = v23;
                if ( *(float *)&v25 != 0.0 )
                  *(float *)a4 = *(float *)&v26 / *(float *)&v25;
                return memcmp(s1, v13, v14) != 0;
              }
              if ( v11 == 43 )
                v16 = *(float *)&v26 + *(float *)&v25;
              else
                v16 = *(float *)&v25;
            }
            v14 = v23;
            *(float *)v13 = v16;
            return memcmp(s1, v13, v14) != 0;
          }
          return 0;
        }
        if ( a3 != 4 )
        {
          if ( (unsigned int)(a3 - 5) > 2 )
          {
            sscanf(a1, v6, &v26);
            v13 = a4;
            v14 = v23;
            switch ( a3 )
            {
              case 0:
                *(_BYTE *)a4 = __ssat(8u, LODWORD(v26));
                break;
              case 1:
                *(_BYTE *)a4 = __usat(8u, LODWORD(v26));
                break;
              case 2:
                v19 = __ssat(0x10u, LODWORD(v26));
                goto LABEL_57;
              case 3:
                v19 = __usat(0x10u, LODWORD(v26));
LABEL_57:
                *(_WORD *)a4 = v19;
                break;
              default:
                return memcmp(s1, v13, v14) != 0;
            }
          }
          else
          {
            sscanf(a1, v6, a4);
            v14 = v23;
            v13 = a4;
          }
          return memcmp(s1, v13, v14) != 0;
        }
        LODWORD(v26) = *(_DWORD *)a4;
        LODWORD(v25) = 0;
        if ( !v11 )
          goto LABEL_41;
        if ( sscanf(a2, v6, &v26) < 1 )
          return 0;
        switch ( v11 )
        {
          case '*':
            v20 = sscanf(a1, "%f", &v25);
            v14 = v23;
            v13 = a4;
            if ( v20 )
            {
              v21 = *(float *)&v25 * (float)SLODWORD(v26);
LABEL_63:
              *(_DWORD *)v13 = (int)v21;
            }
            break;
          case '/':
            v22 = sscanf(a1, "%f", &v25);
            v14 = v23;
            v13 = a4;
            if ( v22 )
            {
              v21 = (float)SLODWORD(v26) / *(float *)&v25;
              goto LABEL_63;
            }
            break;
          case '+':
            v12 = sscanf(a1, "%d", &v27);
            v14 = v23;
            v13 = a4;
            if ( v12 )
              *(_DWORD *)a4 = LODWORD(v26) + v27;
            return memcmp(s1, v13, v14) != 0;
          default:
LABEL_41:
            v18 = sscanf(a1, v6, &v27);
            v14 = v23;
            v13 = a4;
            if ( v18 == 1 )
              *(_DWORD *)a4 = v27;
            return memcmp(s1, v13, v14) != 0;
        }
        return memcmp(s1, v13, v14) != 0;
    }
  }
}


// ======================================================================
// ADDR: 0xab8bc
// SYMBOL: sub_AB8BC
bool __fastcall sub_AB8BC(
        unsigned int a1,
        const char *a2,
        char *a3,
        int a4,
        __int64 *a5,
        unsigned int a6,
        void (*a7)(void),
        float a8)
{
  int v9; // r6
  int v10; // r9
  _BOOL4 v11; // r8
  int v13; // r10
  __int64 v14; // r4
  float v15; // r6
  float v16; // s0
  float v17; // s2
  float v18; // s0
  unsigned __int64 v19; // r0
  float v20; // s8
  float v21; // s0
  int v22; // r0
  float v23; // s0
  int v24; // r1
  __int64 v25; // r0
  int *v26; // r6
  int v27; // r8
  _BOOL4 v28; // r4
  int v29; // r12
  __int64 v30; // r0
  int v31; // r3
  int v32; // r6
  _BOOL4 v33; // r10
  _BOOL4 v34; // r5
  int v35; // r4
  int v36; // r11
  int v37; // r10
  _BOOL4 v38; // r2
  int v39; // r5
  int v40; // r0
  int v41; // r0
  int v42; // r1
  int v43; // r6
  int v44; // r11
  _BOOL4 v45; // r4
  size_t *v46; // r8
  int *v47; // r6
  size_t *v48; // r11
  signed int v49; // r0
  signed int v50; // r1
  int v51; // r5
  size_t v52; // r4
  int v53; // r0
  void *v54; // r0
  const void *v55; // r1
  void *v56; // r0
  int v57; // r0
  int v58; // r4
  int v59; // r1
  int v60; // r5
  void *v61; // r0
  const void *v62; // r1
  int v63; // r0
  void *v64; // r0
  const void *v65; // r1
  void *v66; // r4
  _WORD *v67; // r0
  int v68; // r8
  __int64 v69; // r0
  int v70; // r2
  int v71; // r3
  _DWORD *v72; // r4
  unsigned int v73; // r10
  int v74; // r0
  _BOOL4 v75; // r4
  int v76; // r0
  int v77; // r0
  _DWORD *v78; // r6
  int v79; // r0
  int v80; // r9
  unsigned int v81; // r11
  int v82; // r10
  int v83; // r0
  _DWORD *v84; // r5
  int v85; // r0
  int v86; // r6
  int v87; // r4
  int v88; // r1
  void *v89; // r0
  const void *v90; // r1
  void *v91; // r8
  _WORD *v92; // r0
  int v93; // r0
  int v94; // r1
  int v95; // r2
  int v96; // r3
  int v97; // r6
  int v98; // r1
  unsigned int v99; // r10
  unsigned int v100; // r9
  char *v101; // r0
  float *v102; // r11
  _BOOL4 v103; // r1
  int v104; // r0
  int v105; // r1
  int v106; // r2
  int v107; // r1
  float v108; // r5
  int v109; // r0
  int v110; // r2
  int v111; // r6
  int v112; // r4
  _BOOL4 v113; // r1
  int v114; // r1
  int *v115; // r5
  unsigned int v116; // r0
  unsigned int v117; // r1
  bool v118; // zf
  int v119; // r6
  int v120; // r0
  bool v121; // zf
  int v122; // r0
  void *v123; // r0
  const void *v124; // r1
  void *v125; // r4
  int v126; // r10
  int v127; // r11
  bool v128; // zf
  int v129; // r11
  int v130; // r9
  int v131; // r1
  int v132; // r0
  int v133; // r5
  int v134; // r4
  int v135; // r1
  void *v136; // r0
  const void *v137; // r1
  void *v138; // r9
  _WORD *v139; // r2
  unsigned int v140; // r0
  int v141; // r0
  int v142; // r12
  int v143; // r1
  int v144; // r1
  int v145; // r0
  int v146; // r6
  unsigned int v147; // r10
  int v148; // r4
  _BOOL4 v149; // r0
  int v150; // r0
  unsigned int v151; // r2
  int v152; // r3
  int v153; // r4
  unsigned int v154; // r1
  unsigned int v155; // r2
  unsigned int v156; // r6
  int v157; // r5
  int v158; // r0
  int v159; // r10
  int v160; // r0
  int v161; // r6
  int v162; // r0
  int v163; // r0
  const char *v164; // r4
  int v165; // r0
  bool v166; // zf
  char *v167; // r0
  int v168; // r2
  int v169; // r4
  int v170; // r5
  int v171; // r3
  unsigned int v172; // r10
  unsigned __int64 v173; // r4
  float v174; // r6
  float v175; // r9
  int v176; // r0
  float v177; // r2
  float v178; // r0
  float v179; // s20
  float v180; // s30
  float v181; // s22
  float v182; // s26
  float v183; // s24
  float v184; // s18
  float v185; // s16
  const char *v186; // r4
  int v187; // r10
  unsigned int v188; // r3
  int v189; // r9
  unsigned int v190; // r11
  int v191; // r0
  const char *v192; // r5
  int v193; // r3
  int v194; // r0
  int v195; // r2
  int v196; // t1
  int v197; // r1
  float v198; // s28
  float *v199; // r9
  int v200; // r2
  unsigned int v201; // r6
  int v202; // r5
  int v203; // r0
  _WORD *i; // r1
  size_t v205; // r0
  unsigned __int16 *v206; // r0
  int v207; // lr
  float v208; // s17
  float v209; // s4
  int v210; // r3
  int v211; // t1
  float *v212; // r2
  float v213; // s19
  float v214; // s29
  float v215; // s0
  float v216; // s31
  unsigned __int16 *v217; // r0
  int v218; // r1
  float v219; // s4
  int v220; // r3
  int v221; // t1
  float *v222; // r2
  float v223; // s19
  int v224; // r2
  int v225; // r3
  float v226; // s6
  int v227; // r1
  float v228; // s2
  float v229; // s2
  unsigned int v230; // r0
  float v231; // s2
  float v232; // s0
  float v233; // s4
  float v234; // s21
  float v235; // s0
  int v236; // r5
  int v237; // r6
  unsigned int v238; // r10
  float v239; // s23
  float v240; // s25
  int v241; // r0
  float v242; // s2
  float v243; // s29
  unsigned int v244; // r5
  unsigned __int16 *v245; // r9
  float v246; // s0
  int v247; // t1
  float v248; // s2
  int v249; // r0
  float j; // s4
  int v251; // r2
  int v252; // t1
  float *v253; // r3
  float v254; // s6
  _DWORD *v255; // r0
  int v256; // r1
  int v257; // r2
  float *v258; // r0
  float v259; // s6
  float v260; // s10
  float v261; // s14
  float v262; // s2
  float v263; // s4
  float v264; // s6
  float *v265; // r10
  int v266; // r2
  int v267; // r0
  int v268; // r1
  float v269; // r2
  _DWORD *v270; // r0
  int v271; // r1
  float v272; // s0
  _BOOL4 v273; // r0
  int v274; // r6
  float v275; // s0
  float v276; // s16
  float v277; // s18
  float v278; // s6
  _DWORD *v279; // r5
  unsigned int v280; // r3
  float v281; // s2
  int v282; // r0
  int v283; // r1
  float v284; // s0
  float v285; // s2
  int v286; // r0
  unsigned __int16 *v287; // r0
  unsigned __int16 *v288; // r1
  int v289; // t1
  int v290; // r1
  int v291; // r2
  _BOOL4 v292; // r11
  _BOOL4 v293; // r2
  _BOOL4 v294; // r5
  int v295; // r0
  bool v296; // zf
  int v297; // r11
  int v298; // r9
  _BOOL4 v299; // r0
  int v300; // r8
  int v301; // r6
  int v302; // r0
  int v303; // r10
  _BOOL4 v304; // r0
  int v305; // r1
  int v306; // r0
  int v307; // r0
  int v308; // r1
  int v309; // r0
  int v310; // r5
  int v311; // r0
  _BOOL4 v312; // r1
  int v313; // r0
  int v314; // r5
  int v315; // r0
  _BOOL4 v316; // r0
  int v317; // r0
  _BOOL4 v318; // r0
  _BOOL4 v319; // r0
  int v320; // r6
  int v321; // r8
  _BOOL4 v322; // r5
  int v323; // r0
  int v324; // r1
  int v325; // r0
  _BOOL4 v326; // r0
  _BOOL4 v327; // r6
  int v328; // r1
  int v329; // r0
  int v330; // r4
  _DWORD *v331; // r1
  int v332; // r0
  unsigned int v333; // r0
  int v334; // r0
  int v335; // r1
  int v336; // r1
  int v337; // r0
  _BOOL4 v338; // r0
  bool v339; // zf
  int v340; // r0
  _BOOL4 v341; // r0
  bool v342; // zf
  int v343; // r0
  int v344; // r0
  float v345; // s2
  int v346; // r1
  float v347; // s16
  float v348; // s0
  int v349; // r4
  int v350; // r0
  int v351; // r2
  int v352; // r0
  int v353; // r0
  _BOOL4 v354; // r0
  int v355; // r0
  int v356; // r0
  _BOOL4 v357; // r0
  bool v358; // zf
  unsigned __int32 *p_r_info; // r1
  int v360; // r0
  int v361; // r1
  int v362; // r0
  int v363; // r0
  int v364; // r0
  int v365; // r0
  int v366; // r0
  int v367; // r0
  int v368; // r6
  int v369; // r8
  char *v370; // r0
  unsigned __int8 *v371; // r6
  size_t v372; // r0
  _WORD *v373; // r8
  int v374; // r4
  int v375; // r5
  int v376; // r4
  int v377; // r5
  __int64 v378; // r0
  int v379; // [sp+0h] [bp-170h]
  unsigned int v380; // [sp+0h] [bp-170h]
  _BOOL4 v381; // [sp+14h] [bp-15Ch]
  int v382; // [sp+18h] [bp-158h]
  _BYTE *v383; // [sp+1Ch] [bp-154h]
  int v384; // [sp+20h] [bp-150h]
  _BYTE *v385; // [sp+24h] [bp-14Ch]
  _BOOL4 v386; // [sp+28h] [bp-148h]
  _BOOL4 v387; // [sp+28h] [bp-148h]
  char *v388; // [sp+2Ch] [bp-144h]
  int v389; // [sp+30h] [bp-140h]
  _BOOL4 v390; // [sp+34h] [bp-13Ch]
  int v391; // [sp+34h] [bp-13Ch]
  int v392; // [sp+38h] [bp-138h]
  int v393; // [sp+38h] [bp-138h]
  const char *v394; // [sp+38h] [bp-138h]
  _BOOL4 v395; // [sp+38h] [bp-138h]
  int v396; // [sp+3Ch] [bp-134h]
  void *desta; // [sp+40h] [bp-130h]
  void *destb; // [sp+40h] [bp-130h]
  _BOOL4 dest; // [sp+40h] [bp-130h]
  int v400; // [sp+44h] [bp-12Ch]
  int v401; // [sp+44h] [bp-12Ch]
  int v402; // [sp+48h] [bp-128h]
  int v403; // [sp+48h] [bp-128h]
  _BOOL4 v404; // [sp+48h] [bp-128h]
  int v405; // [sp+4Ch] [bp-124h]
  int v406; // [sp+50h] [bp-120h]
  int v407; // [sp+50h] [bp-120h]
  _BOOL4 v408; // [sp+54h] [bp-11Ch]
  int v409; // [sp+54h] [bp-11Ch]
  int v410; // [sp+58h] [bp-118h]
  int v411; // [sp+58h] [bp-118h]
  int v412; // [sp+58h] [bp-118h]
  int v413; // [sp+60h] [bp-110h]
  unsigned int v416; // [sp+68h] [bp-108h]
  int v417; // [sp+6Ch] [bp-104h]
  _BOOL4 v418; // [sp+6Ch] [bp-104h]
  int v419; // [sp+6Ch] [bp-104h]
  int v420; // [sp+70h] [bp-100h]
  int v422; // [sp+78h] [bp-F8h]
  int v423; // [sp+7Ch] [bp-F4h]
  int v424; // [sp+80h] [bp-F0h]
  unsigned int v425; // [sp+84h] [bp-ECh]
  float v426; // [sp+88h] [bp-E8h] BYREF
  float v427; // [sp+8Ch] [bp-E4h]
  __int64 v428; // [sp+90h] [bp-E0h] BYREF
  unsigned __int64 v429; // [sp+98h] [bp-D8h] BYREF
  float v430; // [sp+A0h] [bp-D0h]
  float v431; // [sp+A4h] [bp-CCh]
  unsigned __int64 v432; // [sp+A8h] [bp-C8h] BYREF
  float v433; // [sp+B0h] [bp-C0h] BYREF
  __int64 v434; // [sp+B4h] [bp-BCh]
  unsigned __int64 v435; // [sp+BCh] [bp-B4h]
  __int64 v436; // [sp+C4h] [bp-ACh]
  __int64 v437; // [sp+CCh] [bp-A4h]
  int v438; // [sp+D4h] [bp-9Ch]
  unsigned __int64 v439; // [sp+D8h] [bp-98h] BYREF
  float v440; // [sp+E0h] [bp-90h]
  float v441; // [sp+E4h] [bp-8Ch]
  unsigned __int64 v442; // [sp+E8h] [bp-88h] BYREF
  float v443; // [sp+F0h] [bp-80h]
  float v444; // [sp+F4h] [bp-7Ch]
  float v445; // [sp+FCh] [bp-74h] BYREF
  float v446; // [sp+100h] [bp-70h]
  float v447[2]; // [sp+104h] [bp-6Ch] BYREF

  v9 = dword_1ACF68;
  v10 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v10 + 124) = 1;
  if ( *(_BYTE *)(v10 + 127) )
    return 0;
  v13 = v9 + 5456;
  v422 = v9;
  v425 = a6 & 0x100000;
  if ( (a6 & 0x100000) != 0 )
    sub_97DC8();
  v424 = sub_8AAD4(v10, a1, 0);
  sub_899BC(v447, a1, 0, 1, -1.0);
  v14 = *a5;
  v15 = sub_97224();
  if ( v425 )
    v16 = COERCE_FLOAT(sub_97894()) * 8.0;
  else
    v16 = v447[1];
  sub_972C4(&v445, *(float *)&v14, *((float *)&v14 + 1), v15, (float)(*(float *)(v13 + 4) + *(float *)(v13 + 4)) + v16);
  v17 = *(float *)(v10 + 200) + v445;
  v18 = *(float *)(v10 + 204) + v446;
  v19 = *(_QWORD *)(v10 + 200);
  v20 = 0.0;
  v442 = v19;
  v443 = v17;
  v444 = v18;
  v21 = v18 + 0.0;
  if ( v447[0] > 0.0 )
    v20 = v447[0] + *(float *)(v13 + 24);
  v439 = v19;
  v441 = v21;
  v440 = v20 + v17;
  if ( v425 )
  {
    if ( sub_8B314((float *)&v439, v424, (float *)&v442) )
    {
      *(float *)&v432 = v443 - *(float *)&v442;
      *((float *)&v432 + 1) = v444 - *((float *)&v442 + 1);
      if ( sub_95C50(v424, (float *)&v432, 0) )
      {
        v413 = *(_DWORD *)(dword_1ACF68 + 6572);
        v22 = *(_DWORD *)(v413 + 308);
        v23 = v445 - *(float *)(v413 + 112);
        v24 = *(_DWORD *)(v413 + 316);
        *(_BYTE *)(v413 + 124) = 1;
        *(_DWORD *)(v413 + 316) = v22 | v24;
        v445 = v23;
        goto LABEL_16;
      }
      sub_96284();
    }
    else
    {
      HIDWORD(v30) = *(_DWORD *)(v13 + 4);
      LODWORD(v30) = &v439;
      sub_8B2C0(v30);
    }
    sub_97F20();
    return 0;
  }
  HIDWORD(v25) = *(_DWORD *)(v13 + 4);
  LODWORD(v25) = &v439;
  sub_8B2C0(v25);
  v413 = v10;
  if ( !sub_8B314((float *)&v439, v424, (float *)&v442) )
    return 0;
LABEL_16:
  v388 = (char *)a1;
  v26 = (int *)(v422 + 7644);
  v402 = sub_8B914((float *)&v442, v424);
  if ( v402 )
    *(_DWORD *)(v13 + 1988) = 1;
  v27 = v422 + 7644;
  v417 = *v26;
  v423 = v13;
  v28 = 0;
  if ( *v26 != v424 )
    v27 = 0;
  v29 = sub_8BA6C((_DWORD *)v10, v424);
  if ( v29 )
    v28 = *(_DWORD *)(v13 + 1648) == v10 && *(_DWORD *)(v13 + 1656) == *(_DWORD *)(v10 + 356);
  v420 = v422 + 7644;
  if ( v402 )
  {
    v31 = *(unsigned __int8 *)(v422 + 984);
    if ( *(_BYTE *)(v422 + 984) )
      v31 = 1;
  }
  else
  {
    v31 = 0;
  }
  v408 = v28;
  v32 = *(_DWORD *)(v13 + 1152);
  if ( v32 == v424 )
    goto LABEL_37;
  if ( *(_DWORD *)(v13 + 1400) != v424 )
  {
    if ( *(_DWORD *)(v13 + 1388) == v424 )
    {
      v33 = *(_DWORD *)(v13 + 1420) == 3;
      goto LABEL_38;
    }
LABEL_37:
    v33 = 0;
    goto LABEL_38;
  }
  v33 = 1;
LABEL_38:
  v34 = 0;
  v390 = v33;
  if ( v425 && v417 == v424 )
  {
    v35 = v31;
    v410 = v29;
    if ( v32 )
    {
      v34 = 0;
      v36 = v423;
      v37 = v413;
    }
    else
    {
      v37 = v413;
      v36 = v423;
      v39 = *(_DWORD *)(v423 + 1196);
      v40 = sub_8AEAC(v413, (unsigned int)"#SCROLLY", 0);
      v32 = *(_DWORD *)(v423 + 1152);
      v34 = v39 == v40;
    }
    v41 = v32 - sub_8AEAC(v37, (unsigned int)"#SCROLLY", 0);
    v32 = *(_DWORD *)(v36 + 1152);
    v33 = v390;
    v29 = v410;
    v31 = v35;
    v38 = v41 == 0;
  }
  else
  {
    v38 = 0;
  }
  if ( v32 == v424 )
  {
    v42 = v27;
    v43 = 0;
    v44 = v29 | v31 | v34 | v33 | v38;
  }
  else
  {
    v45 = v425 == 0;
    v43 = (v33 | (a6 >> 4)) & v45;
    if ( (v29 | v31 | v34 | v33 | v38) == 1 )
    {
      v418 = v38;
      v405 = v29 | v31 | v34 | v33;
      v406 = v31;
      v46 = (size_t *)(v422 + 7668);
      v392 = (v33 | (a6 >> 4)) & v45;
      v47 = (int *)(v422 + 7656);
      v411 = v29;
      *(_DWORD *)(v422 + 11324) = -1097229926;
      v48 = (size_t *)(v422 + 7680);
      v49 = strlen(a3);
      v50 = *(_DWORD *)(v422 + 7684);
      v51 = v49 + 1;
      v52 = v49 + 1;
      if ( v50 <= v49 )
      {
        if ( v50 )
          v53 = v50 + v50 / 2;
        else
          v53 = 8;
        if ( v53 > v51 )
          v51 = v53;
        if ( v50 < v51 )
        {
          v54 = (void *)sub_885E4(v51);
          v55 = *(const void **)(v422 + 7688);
          if ( v55 )
          {
            desta = v54;
            j_memcpy(v54, v55, *v48);
            sub_88614(*(_DWORD *)(v422 + 7688));
            v54 = desta;
          }
          *(_DWORD *)(v422 + 7684) = v51;
          *(_DWORD *)(v422 + 7688) = v54;
        }
      }
      v56 = *(void **)(v422 + 7688);
      *v48 = v52;
      j_memcpy(v56, a3, v52);
      LODWORD(v432) = 0;
      v57 = *(_DWORD *)(v422 + 7660);
      v58 = a4 + 1;
      if ( v57 <= a4 )
      {
        if ( v57 )
          v59 = v57 + v57 / 2;
        else
          v59 = 8;
        v60 = a4 + 1;
        if ( v59 > v58 )
          v60 = v59;
        if ( v57 < v60 )
        {
          v61 = (void *)sub_885E4(2 * v60);
          v62 = *(const void **)(v422 + 7664);
          if ( v62 )
          {
            destb = v61;
            j_memcpy(v61, v62, 2 * *v47);
            sub_88614(*(_DWORD *)(v422 + 7664));
            v61 = destb;
          }
          *(_DWORD *)(v422 + 7660) = v60;
          *(_DWORD *)(v422 + 7664) = v61;
        }
      }
      v63 = *(_DWORD *)(v422 + 7672);
      *v47 = v58;
      if ( v63 <= -1 )
      {
        v64 = (void *)sub_885E4(0);
        v65 = *(const void **)(v422 + 7676);
        v66 = v64;
        if ( v65 )
        {
          j_memcpy(v64, v65, *v46);
          sub_88614(*(_DWORD *)(v422 + 7676));
        }
        *(_DWORD *)(v422 + 7672) = 0;
        *(_DWORD *)(v422 + 7676) = v66;
      }
      *(_BYTE *)(v422 + 7692) = 0;
      v67 = *(_WORD **)(v422 + 7664);
      *v46 = 0;
      LODWORD(v69) = sub_88838(v67, a4, (unsigned __int8 *)a3, 0, (unsigned __int8 **)&v432);
      v68 = v424;
      HIDWORD(v69) = v432 - (_DWORD)a3;
      v118 = *(_DWORD *)v420 == v424;
      *(_QWORD *)(v422 + 7648) = v69;
      if ( v118 )
      {
        HIDWORD(v69) = *(_DWORD *)(v422 + 7704);
        v70 = *(_DWORD *)(v422 + 7708);
        if ( SHIDWORD(v69) >= (int)v69 )
          HIDWORD(v69) = v69;
        if ( v70 >= (int)v69 )
          v70 = v69;
        if ( *(_DWORD *)(v422 + 7712) < (int)v69 )
          LODWORD(v69) = *(_DWORD *)(v422 + 7712);
        *(_DWORD *)(v422 + 7704) = HIDWORD(v69);
        *(_DWORD *)(v422 + 7708) = v70;
        *(_DWORD *)(v422 + 7712) = v69;
        v38 = v418;
        v71 = v406;
        v43 = v392;
      }
      else
      {
        v43 = v392;
        *(_DWORD *)(v422 + 11320) = 999;
        *(_DWORD *)(v422 + 11310) = 6488064;
        *(_BYTE *)(v422 + 7720) = v425 == 0;
        *(_DWORD *)(v422 + 7716) = 0x10000;
        *(_DWORD *)v420 = v424;
        *(_DWORD *)(v422 + 11316) = 0;
        *(_DWORD *)(v422 + 7724) = 0;
        *(_DWORD *)(v422 + 7700) = 0;
        *(_DWORD *)(v422 + 7704) = 0;
        *(_DWORD *)(v422 + 7708) = 0;
        *(_DWORD *)(v422 + 7712) = 0;
        if ( !v425 )
          v43 = v392 | v408;
        v38 = v418;
        v71 = v406;
      }
      if ( (a6 & 0x2000) != 0 )
        *(_BYTE *)(v422 + 7716) = 1;
      if ( v425 )
      {
        v72 = (_DWORD *)v423;
      }
      else
      {
        v72 = (_DWORD *)v423;
        if ( (!v408 & v411) != 0 )
        {
          v43 = 1;
        }
        else if ( v71 && *(_BYTE *)(v422 + 248) )
        {
          v43 = 1;
        }
      }
      v44 = 1;
      if ( v72[288] == v424 )
      {
        v73 = a6;
      }
      else
      {
        v73 = a6;
        if ( v405 == 1 )
        {
          sub_8AF74(v424, v10);
          sub_8AFEC(v424, v10);
          sub_8C628(v10);
          v76 = 131074;
          if ( (a6 & 0x440) == 0 )
            v76 = 2;
          v72[294] = v76;
          v44 = 1;
          if ( (a6 & (unsigned int)&loc_100080) == 0 )
            v72[293] = 12;
          v38 = v418;
        }
      }
      goto LABEL_106;
    }
    v42 = v27;
    v44 = 0;
  }
  v72 = (_DWORD *)v423;
  v68 = v424;
  v73 = a6;
  v74 = *(_DWORD *)(v423 + 1152);
  if ( v74 != v424 || v417 == v424 )
  {
    v420 = v42;
    goto LABEL_107;
  }
  v75 = v38;
  sub_8B080();
  v38 = v75;
  v72 = (_DWORD *)v423;
  v420 = 0;
LABEL_106:
  v74 = v72[288];
LABEL_107:
  v393 = v43;
  if ( v74 == v68 )
  {
    v77 = *(unsigned __int8 *)(v422 + 984);
    if ( *(_BYTE *)(v422 + 984) )
      v77 = 1;
    v400 = v77 & (v44 ^ 1);
    v78 = (_DWORD *)v420;
    v419 = 1;
  }
  else
  {
    v78 = (_DWORD *)v420;
    v79 = v420;
    if ( v420 )
      v79 = 1;
    v419 = v79 & v38;
    v400 = 0;
  }
  v80 = v73 & 0x4000;
  v81 = v73;
  if ( v78 )
  {
    v82 = (v78[16] != v78[17]) & (unsigned __int8)v419;
    v83 = v80;
    if ( v80 )
      v83 = 1;
    if ( (v83 & v419) == 1 )
    {
      LODWORD(v432) = 0;
      v84 = v78;
      v85 = v78[4];
      v86 = a4 + 1;
      v87 = a4 + 1;
      if ( v85 <= a4 )
      {
        if ( v85 )
          v88 = v85 + v85 / 2;
        else
          v88 = 8;
        if ( v88 > v86 )
          v86 = v88;
        v84 = (_DWORD *)v420;
        if ( v85 < v86 )
        {
          v89 = (void *)sub_885E4(2 * v86);
          v90 = *(const void **)(v420 + 20);
          v91 = v89;
          if ( v90 )
          {
            j_memcpy(v89, v90, 2 * *(_DWORD *)(v420 + 12));
            sub_88614(*(_DWORD *)(v420 + 20));
          }
          *(_DWORD *)(v420 + 16) = v86;
          *(_DWORD *)(v420 + 20) = v91;
        }
      }
      v92 = (_WORD *)v84[5];
      v84[3] = v87;
      v93 = sub_88838(v92, v87, (unsigned __int8 *)a3, 0, (unsigned __int8 **)&v432);
      v94 = v84[15];
      v95 = v84[16];
      v96 = v84[17];
      v97 = v432 - (_DWORD)a3;
      v84[1] = v93;
      v84[2] = v97;
      if ( v94 >= v93 )
        v94 = v93;
      if ( v95 >= v93 )
        v95 = v93;
      if ( v96 < v93 )
        v93 = v96;
      v84[17] = v93;
      v84[15] = v94;
      v84[16] = v95;
      v72 = (_DWORD *)v423;
      v68 = v424;
      v82 = (unsigned __int8)v82 & (v95 != v93);
      v78 = v84;
    }
  }
  else
  {
    v82 = 0;
  }
  v412 = v82;
  v409 = v80;
  if ( v419 | v82 || v72[288] == v68 )
  {
    v98 = 0;
    v99 = v81;
    if ( !v80 )
    {
      if ( v78 )
      {
        v98 = *((unsigned __int8 *)v78 + 48);
        if ( *((_BYTE *)v78 + 48) )
          v98 = 1;
      }
    }
  }
  else
  {
    v98 = 0;
    v99 = v81;
  }
  v100 = v99 & 0x8000;
  v396 = v98;
  if ( a2 )
  {
    v101 = a3;
    if ( v98 )
      v101 = (char *)v78[8];
    v102 = (float *)v78;
    v103 = *v101 == 0;
  }
  else
  {
    v102 = (float *)v78;
    v103 = 0;
  }
  v407 = v103;
  v386 = v100 == 0;
  dest = v386 || v103;
  if ( !v386 && !v103 )
  {
    v104 = sub_A37CC(*(_DWORD *)(v423 + 884), 42);
    v105 = *(_DWORD *)(v423 + 884);
    *(_DWORD *)(v422 + 11360) = *(_DWORD *)(v105 + 16);
    *(_DWORD *)(v422 + 11412) = *(_DWORD *)(v105 + 68);
    *(_QWORD *)(v422 + 11392) = *(_QWORD *)(v105 + 48);
    v106 = *(_DWORD *)(v105 + 56);
    *(_DWORD *)(v422 + 11416) = *(_DWORD *)(v105 + 72);
    v107 = *(_DWORD *)(v105 + 76);
    *(_DWORD *)(v422 + 11388) = v104;
    *(_DWORD *)(v422 + 11400) = v106;
    *(_DWORD *)(v422 + 11420) = v107;
    *(_DWORD *)(v422 + 11356) = *(_DWORD *)(v104 + 4);
    sub_973C4(v422 + 11344);
  }
  v108 = a8;
  if ( *(_DWORD *)(v423 + 1152) != v68 )
  {
    v110 = v68;
    v389 = 0;
    v111 = (int)v102;
    goto LABEL_200;
  }
  *((_DWORD *)v102 + 923) = a7;
  *((_DWORD *)v102 + 922) = v99;
  v102[924] = a8;
  *((_DWORD *)v102 + 13) = a4;
  *(_DWORD *)(v422 + 12092) = 1;
  v109 = *(unsigned __int8 *)(v422 + 232);
  v389 = *((_DWORD *)v102 + 2);
  *(_BYTE *)(v423 + 1165) = v109 ^ 1;
  v112 = *(unsigned __int8 *)(v422 + 173);
  if ( v393 || (v113 = v112 == 0, (v402 & v113) == 1) && *(_BYTE *)(v422 + 989) )
  {
    v114 = *((_DWORD *)v102 + 1);
    *((_BYTE *)v102 + 75) = 0;
    *((_BYTE *)v102 + 3685) = 1;
    *((_DWORD *)v102 + 15) = v114;
    v102[16] = 0.0;
    *((_DWORD *)v102 + 17) = v114;
  }
  else if ( v113 | v402 ^ 1 || !*(_BYTE *)(v422 + 989) )
  {
    if ( *(_BYTE *)(v422 + 984) && !*((_BYTE *)v102 + 3685) )
    {
      if ( v402 )
      {
        v286 = sub_AF2B0(v102);
        *((_DWORD *)v102 + 15) = v286;
        *((_DWORD *)v102 + 16) = v286;
        *((_DWORD *)v102 + 17) = v286;
        v102[920] = -0.3;
        *((_BYTE *)v102 + 75) = 0;
      }
    }
    else if ( v109 && !*((_BYTE *)v102 + 3685) && (*(float *)(v422 + 884) != 0.0 || *(float *)(v422 + 888) != 0.0) )
    {
      sub_AE804(v102, v102 + 15);
      *((_BYTE *)v102 + 3684) = 1;
      v102[920] = -0.3;
    }
  }
  else
  {
    sub_AD8D4(v102, 65548);
    sub_AD8D4(v102, 196621);
  }
  if ( *((_BYTE *)v102 + 3685) && !*(_BYTE *)(v422 + 232) )
    *((_BYTE *)v102 + 3685) = 0;
  v115 = (int *)(v422 + 5384);
  if ( *(_BYTE *)(v422 + 248) )
  {
    v116 = *(unsigned __int8 *)(v422 + 250);
    v117 = __clz(v116);
    v118 = v116 == 0;
    if ( *(_BYTE *)(v422 + 250) )
      v118 = v112 == 0;
    v119 = v117 >> 5;
    if ( v118 )
    {
      if ( (v99 & 0x400) != 0 )
        goto LABEL_184;
      goto LABEL_189;
    }
  }
  else if ( !v112 )
  {
    v119 = 0;
    if ( (v99 & 0x400) != 0 )
      goto LABEL_184;
    goto LABEL_189;
  }
  v119 = *(unsigned __int8 *)(v422 + 251);
  if ( *(_BYTE *)(v422 + 251) )
    v119 = 1;
  if ( (v99 & 0x400) != 0 )
  {
LABEL_184:
    v120 = *(_DWORD *)(dword_1ACF68 + 52);
    if ( v120 >= 0 && !(!sub_95484(v120, 1) | v119) )
    {
      v121 = v409 == 0;
      if ( !v409 )
        v121 = *(_BYTE *)(v422 + 249) == 0;
      if ( v121 )
      {
        v287 = *(unsigned __int16 **)(v422 + 5392);
        v288 = &v287[*v115];
        while ( v287 < v288 )
        {
          v289 = *v287++;
          if ( v289 == 9 )
            goto LABEL_189;
        }
        LODWORD(v432) = 9;
        if ( sub_AE838(&v432, v99, a7, LODWORD(a8)) )
          sub_AD8D4(v420, v432);
      }
    }
  }
LABEL_189:
  if ( *v115 < 1 )
  {
    v110 = v424;
    v111 = v420;
  }
  else
  {
    v122 = v409;
    if ( v409 )
      v122 = 1;
    if ( !(v122 | v119 | v390) )
    {
      v146 = 0;
      do
      {
        LODWORD(v432) = *(unsigned __int16 *)(*(_DWORD *)(v422 + 5392) + 2 * v146);
        if ( ((_DWORD)v432 != 9 || !*(_BYTE *)(v422 + 249)) && sub_AE838(&v432, v99, a7, LODWORD(a8)) )
          sub_AD8D4(v420, v432);
        ++v146;
      }
      while ( v146 < *v115 );
    }
    v111 = v420;
    if ( *(int *)(v422 + 5388) <= -1 )
    {
      v123 = (void *)sub_885E4(0);
      v124 = *(const void **)(v422 + 5392);
      v125 = v123;
      if ( v124 )
      {
        j_memcpy(v123, v124, 2 * *v115);
        sub_88614(*(_DWORD *)(v422 + 5392));
      }
      *(_DWORD *)(v422 + 5388) = 0;
      *(_DWORD *)(v422 + 5392) = v125;
      v111 = v420;
    }
    v110 = v424;
    *v115 = 0;
  }
  v108 = a8;
LABEL_200:
  v391 = v99 & 0x40000;
  v126 = v110;
  if ( *(_DWORD *)(v423 + 1152) != v110 )
  {
    v11 = 0;
    v127 = v423;
    goto LABEL_661;
  }
  if ( *(_BYTE *)(v423 + 1164) )
  {
    v394 = 0;
LABEL_211:
    v129 = 0;
    v11 = 0;
    v130 = v409;
    goto LABEL_212;
  }
  if ( v400 )
  {
    v394 = 0;
    v400 = 1;
    goto LABEL_211;
  }
  v147 = a6;
  v401 = a6 & 0x10000;
  v148 = *(unsigned __int8 *)(v422 + 249);
  v382 = *(unsigned __int8 *)(v422 + 173);
  if ( !*(_BYTE *)(v422 + 173) )
  {
    if ( *(_BYTE *)(v422 + 248) )
    {
      if ( *(_BYTE *)(v422 + 251) )
        v149 = 0;
      else
        v149 = (*(unsigned __int8 *)(v422 + 250) | v148) == 0;
      v290 = 1;
    }
    else
    {
      v290 = 0;
      v149 = 0;
    }
    v383 = (_BYTE *)(v422 + 248);
    v385 = (_BYTE *)(v422 + 250);
    v291 = v290;
LABEL_501:
    v292 = 0;
    v395 = v291 == 0;
    v293 = 0;
    if ( !v290 )
      goto LABEL_493;
LABEL_502:
    if ( *(_BYTE *)(v422 + 249) )
    {
      v404 = 0;
LABEL_504:
      if ( v149 )
      {
        v381 = 0;
        goto LABEL_514;
      }
      v296 = !v292;
      v387 = 0;
      v297 = 0;
      v384 = 0;
LABEL_507:
      v298 = 0;
      goto LABEL_572;
    }
    if ( *v385 )
    {
      if ( v149 )
      {
        v299 = 0;
LABEL_513:
        v381 = v299;
        v404 = 0;
LABEL_514:
        v295 = *(_DWORD *)(dword_1ACF68 + 124);
        v294 = 0;
        v300 = 0;
        v384 = 0;
        if ( v295 <= -1 )
          goto LABEL_542;
LABEL_515:
        v301 = 1;
        if ( sub_95484(v295, 1) )
        {
          v384 = (v409 | v100) == 0;
          if ( v409 | v100 )
          {
            v300 = v294;
            v111 = v420;
          }
          else
          {
            v111 = v420;
            v300 = v294;
            if ( v425 )
              v384 = *(_DWORD *)(v420 + 64) != *(_DWORD *)(v420 + 68);
          }
          goto LABEL_542;
        }
        goto LABEL_520;
      }
    }
    else
    {
      if ( v149 )
      {
        v299 = *(unsigned __int8 *)(v422 + 251) == 0;
        goto LABEL_513;
      }
      if ( *(_BYTE *)(v422 + 251) )
      {
        v298 = 0;
        v387 = 0;
        v384 = 0;
        v404 = 0;
LABEL_571:
        v319 = v292;
        v297 = 0;
        v296 = !v319;
LABEL_572:
        v320 = 0;
        v321 = 0;
        v322 = 0;
        if ( v296 )
          goto LABEL_594;
        goto LABEL_589;
      }
      v313 = *(_DWORD *)(dword_1ACF68 + 88);
      if ( v313 > -1 )
      {
        v310 = 0;
        v384 = 0;
        v312 = 0;
        v300 = 0;
        goto LABEL_554;
      }
    }
    v296 = !v292;
    v387 = 0;
    v384 = 0;
    v297 = 0;
    v404 = 0;
    goto LABEL_507;
  }
  if ( !*(_BYTE *)(v422 + 251) )
  {
    v290 = *(unsigned __int8 *)(v422 + 248);
    v383 = (_BYTE *)(v422 + 248);
    v291 = *(unsigned __int8 *)(v422 + 250);
    v385 = (_BYTE *)(v422 + 250);
    v149 = 0;
    goto LABEL_501;
  }
  if ( *(_BYTE *)(v422 + 248) )
    v149 = 0;
  else
    v149 = (*(unsigned __int8 *)(v422 + 250) | v148) == 0;
  v292 = *(_BYTE *)(v422 + 249) && !*(_BYTE *)(v422 + 248) && *(unsigned __int8 *)(v422 + 250) == 0;
  v383 = (_BYTE *)(v422 + 248);
  v385 = (_BYTE *)(v422 + 250);
  v293 = *(unsigned __int8 *)(v422 + 250) == 0;
  v395 = v293;
  if ( *(_BYTE *)(v422 + 248) )
    goto LABEL_502;
LABEL_493:
  v404 = v293;
  if ( !*(_BYTE *)(v422 + 249) || *v385 )
    goto LABEL_504;
  v294 = *(unsigned __int8 *)(v422 + 251) == 0;
  if ( v149 )
  {
    v295 = *(_DWORD *)(dword_1ACF68 + 124);
    if ( v295 <= -1 )
    {
      if ( *(_BYTE *)(v422 + 251) )
      {
        v384 = 0;
        v381 = 0;
        v300 = 0;
        goto LABEL_542;
      }
      v381 = 0;
      v302 = *(_DWORD *)(dword_1ACF68 + 92);
      v300 = 1;
      v384 = 0;
      if ( v302 > -1 )
        goto LABEL_523;
      goto LABEL_542;
    }
    v381 = 0;
    goto LABEL_515;
  }
  v301 = 0;
  v381 = 0;
LABEL_520:
  if ( !v294 )
  {
    v303 = 0;
    v384 = 0;
    goto LABEL_540;
  }
  v302 = *(_DWORD *)(dword_1ACF68 + 92);
  if ( v302 > -1 )
  {
    v300 = v301;
    v111 = v420;
LABEL_523:
    v303 = 1;
    v304 = sub_95484(v302, 1);
    v305 = v100;
    v306 = !v304;
    if ( v100 )
      v305 = 1;
    v307 = v306 | v305;
    v308 = v409;
    if ( v409 )
      v308 = 1;
    v309 = v307 | v308;
    v384 = v309 ^ 1;
    if ( !v309 && v425 )
    {
      v384 = *(_DWORD *)(v111 + 64) != *(_DWORD *)(v111 + 68);
      if ( v300 )
      {
        v300 = 1;
        v147 = a6;
        goto LABEL_542;
      }
      v310 = 0;
      v300 = 1;
      goto LABEL_551;
    }
    v301 = v300;
LABEL_540:
    if ( v301 )
    {
      v300 = v303;
      v147 = a6;
      v111 = v420;
      goto LABEL_542;
    }
    v300 = v303;
    v310 = 0;
LABEL_551:
    LOWORD(v147) = a6;
    goto LABEL_552;
  }
  v118 = v301 == 0;
  v111 = v420;
  v300 = 1;
  v310 = 0;
  v384 = 0;
  if ( v118 )
    goto LABEL_552;
LABEL_542:
  v311 = *(_DWORD *)(dword_1ACF68 + 116);
  if ( v311 <= -1 )
  {
    if ( !v381 )
    {
      v298 = 0;
      goto LABEL_562;
    }
    v310 = 1;
LABEL_553:
    v312 = v404;
    v313 = *(_DWORD *)(dword_1ACF68 + 88);
    if ( v313 <= -1 )
    {
      v118 = v310 == 0;
      v298 = 0;
      v314 = 0;
      if ( !v118 )
        goto LABEL_562;
LABEL_565:
      v318 = v300 && (v317 = *(_DWORD *)(dword_1ACF68 + 88), v317 > -1) && sub_95484(v317, 1) && v409 == 0;
      v387 = v318;
      if ( v314 )
        goto LABEL_580;
      goto LABEL_571;
    }
LABEL_554:
    v404 = v312;
    v298 = v386 & sub_95484(v313, 1);
    if ( v425 && v298 )
    {
      v298 = *(_DWORD *)(v420 + 64) != *(_DWORD *)(v420 + 68);
      if ( v310 )
        goto LABEL_562;
LABEL_560:
      v314 = 0;
      goto LABEL_565;
    }
LABEL_559:
    if ( v310 )
      goto LABEL_562;
    goto LABEL_560;
  }
  v310 = 1;
  if ( !sub_95484(v311, 1) )
  {
LABEL_552:
    if ( !v381 )
    {
      v298 = 0;
      goto LABEL_559;
    }
    goto LABEL_553;
  }
  if ( (v147 & 0x108000) == 0x100000 )
    v298 = *(_DWORD *)(v111 + 64) != *(_DWORD *)(v111 + 68);
  else
    v298 = (v100 >> 15) ^ 1;
LABEL_562:
  v315 = *(_DWORD *)(dword_1ACF68 + 120);
  if ( v315 <= -1 )
  {
    v316 = v300 && (v323 = *(_DWORD *)(dword_1ACF68 + 88), v323 > -1) && sub_95484(v323, 1) && v409 == 0;
    goto LABEL_579;
  }
  v314 = 1;
  if ( !sub_95484(v315, 1) )
    goto LABEL_565;
  v316 = v409 == 0;
LABEL_579:
  v387 = v316;
LABEL_580:
  v324 = dword_1ACF68;
  v325 = *(_DWORD *)(dword_1ACF68 + 132);
  if ( v325 < 0 )
  {
    v326 = 0;
  }
  else
  {
    v326 = sub_95484(v325, 1);
    v324 = dword_1ACF68;
  }
  v327 = v292;
  v297 = 1;
  v328 = *(_DWORD *)(v324 + 128);
  v322 = (v409 | v401) == 0;
  v321 = v322 && v326;
  if ( v328 <= -1 )
  {
    if ( !v327 )
    {
LABEL_586:
      v322 = 0;
      goto LABEL_594;
    }
  }
  else
  {
    if ( sub_95484(v328, 1) )
      goto LABEL_594;
    v297 = 1;
    if ( !v327 )
      goto LABEL_586;
  }
  v320 = v321;
LABEL_589:
  v329 = *(_DWORD *)(dword_1ACF68 + 132);
  v322 = v329 >= 0 && sub_95484(v329, 1) && (v409 | v401) == 0;
  v321 = v320;
LABEL_594:
  v330 = v148 << 17;
  v111 = v420;
  v331 = (_DWORD *)dword_1ACF68;
  v332 = *(_DWORD *)(dword_1ACF68 + 56);
  if ( v332 >= 0 )
  {
    if ( sub_95484(v332, 1) )
    {
      v333 = (unsigned int)&elf_hash_bucket[1077];
      if ( v395 )
        v333 = 0x10000;
      if ( v404 )
        v333 = (unsigned int)&elf_hash_bucket[1075];
      goto LABEL_653;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v334 = v331[15];
  if ( v334 >= 0 )
  {
    if ( sub_95484(v334, 1) )
    {
      v335 = (int)&elf_hash_bucket[1077] + 1;
      if ( v395 )
        v335 = 65537;
      if ( v404 )
        v335 = (int)&elf_hash_bucket[1075] + 1;
      v336 = v335 | v330;
      goto LABEL_654;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v337 = v331[16];
  if ( v337 >= 0 )
  {
    v338 = sub_95484(v337, 1);
    v339 = v425 == 0;
    if ( v425 )
      v339 = !v338;
    if ( !v339 )
    {
      if ( *v383 )
      {
        v127 = v423;
        v344 = v413;
        v345 = 0.0;
        if ( (float)(*(float *)(v413 + 84) - *(float *)(v423 + 888)) >= 0.0 )
          v345 = *(float *)(v413 + 84) - *(float *)(v423 + 888);
        v346 = LODWORD(v345);
LABEL_635:
        sub_975D4(v344, v346);
        v349 = 0;
        v11 = 0;
        v400 = 0;
        v126 = v424;
LABEL_658:
        v130 = v409;
LABEL_659:
        v108 = a8;
        goto LABEL_660;
      }
      v352 = -2;
      if ( v404 )
        v352 = 2;
      goto LABEL_652;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v340 = v331[17];
  if ( v340 >= 0 )
  {
    v341 = sub_95484(v340, 1);
    v342 = v425 == 0;
    if ( v425 )
      v342 = !v341;
    if ( !v342 )
    {
      if ( *v383 )
      {
        v127 = v423;
        v347 = *(float *)(v413 + 84) + *(float *)(v423 + 888);
        v348 = COERCE_FLOAT(sub_97904());
        v344 = v413;
        if ( v347 < v348 )
          v348 = v347;
        v346 = LODWORD(v348);
        goto LABEL_635;
      }
      v352 = -1;
      if ( v404 )
        v352 = 3;
LABEL_652:
      v333 = v352 + 65540;
LABEL_653:
      v336 = v333 | v330;
      goto LABEL_654;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v343 = v331[20];
  if ( v343 >= 0 )
  {
    if ( sub_95484(v343, 1) )
    {
      v333 = 65542;
      if ( !*v383 )
        v333 = (unsigned int)&elf_hash_bucket[1075];
      goto LABEL_653;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v350 = v331[21];
  if ( v350 >= 0 )
  {
    if ( sub_95484(v350, 1) )
    {
      v351 = 65543;
      if ( !*v383 )
        v351 = 65541;
      v336 = v351 | v330;
      goto LABEL_654;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v353 = v331[23];
  if ( v353 >= 0 )
  {
    v354 = sub_95484(v353, 1);
    if ( !v409 && v354 )
    {
      v336 = v330 | 0x10008;
      goto LABEL_654;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v356 = v331[24];
  if ( v356 >= 0 )
  {
    v357 = sub_95484(v356, 1);
    if ( !v409 && v357 )
    {
      v127 = v423;
      v130 = 0;
      if ( *(_DWORD *)(v420 + 64) == *(_DWORD *)(v420 + 68) )
      {
        if ( v395 )
        {
          v358 = v382 == 0;
          if ( v382 )
            v358 = *(_BYTE *)(v422 + 251) == 0;
          if ( v358 || *v385 || *v383 )
            goto LABEL_709;
          p_r_info = &stru_30000.r_info;
        }
        else
        {
          p_r_info = (_DWORD *)(&stru_30008 + 4);
        }
        sub_AD8D4(v420, p_r_info);
      }
LABEL_709:
      sub_AD8D4(v420, v330 | ((unsigned int)&elf_hash_bucket[1076] + 1));
      v349 = 0;
      v11 = 0;
      v400 = 0;
      v126 = v424;
      goto LABEL_659;
    }
    v331 = (_DWORD *)dword_1ACF68;
  }
  v360 = v331[26];
  if ( v360 < 0 )
    goto LABEL_689;
  if ( !sub_95484(v360, 1) )
  {
    v331 = (_DWORD *)dword_1ACF68;
LABEL_689:
    v362 = v331[27];
    if ( v362 >= 0 )
    {
      v349 = 1;
      if ( sub_95484(v362, 1) )
      {
        v11 = 0;
        v355 = 1;
        goto LABEL_657;
      }
    }
    if ( (v321 | v322) == 1 )
    {
      v363 = 7;
      if ( v321 )
        v363 = 6;
      sub_AD8D4(v420, v363 + 65540);
      v364 = *(_DWORD *)(v420 + 60);
      *(_DWORD *)(v420 + 64) = v364;
      *(_DWORD *)(v420 + 68) = v364;
      goto LABEL_655;
    }
    if ( v297 )
    {
      v365 = *(_DWORD *)(dword_1ACF68 + 112);
      if ( v365 >= 0 && sub_95484(v365, 1) )
      {
        v349 = 0;
        v366 = *(_DWORD *)(v420 + 4);
        *(_BYTE *)(v420 + 3684) = 1;
        *(_BYTE *)(v420 + 75) = 0;
        *(_DWORD *)(v420 + 60) = v366;
        *(_DWORD *)(v420 + 64) = 0;
        *(_DWORD *)(v420 + 68) = v366;
        goto LABEL_656;
      }
    }
    if ( (v384 | v298) == 1 )
    {
      if ( *(_DWORD *)(v422 + 204) )
      {
        v368 = *(_DWORD *)(v420 + 68);
        v367 = *(_DWORD *)(v420 + 64);
        if ( v367 == v368 )
        {
          v368 = 0;
          v369 = *(_DWORD *)(v420 + 4);
        }
        else
        {
          v369 = *(_DWORD *)(v420 + 64);
          if ( v367 < v368 )
          {
            v369 = *(_DWORD *)(v420 + 68);
            v368 = *(_DWORD *)(v420 + 64);
          }
        }
        v376 = sub_889DE(*(_DWORD *)(v420 + 20) + 2 * v368, *(_DWORD *)(v420 + 20) + 2 * v369) + 1;
        v377 = sub_885E4(v376);
        sub_8892C(v377, v376, (_WORD *)(*(_DWORD *)(v420 + 20) + 2 * v368), *(_DWORD *)(v420 + 20) + 2 * v369);
        sub_8BBE8(v377);
        sub_88614(v377);
      }
      if ( v384 )
      {
        LODWORD(v378) = *(_DWORD *)(v420 + 68);
        HIDWORD(v378) = *(_DWORD *)(v420 + 64);
        if ( HIDWORD(v378) == (_DWORD)v378 )
        {
          v378 = *(unsigned int *)(v420 + 4);
          *(_BYTE *)(v420 + 75) = 0;
          *(_QWORD *)(v420 + 60) = v378;
          *(_DWORD *)(v420 + 68) = v378;
        }
        v111 = v420;
        v127 = v423;
        v126 = v424;
        v130 = v409;
        v108 = a8;
        v349 = 0;
        v11 = 0;
        *(_BYTE *)(v420 + 3684) = 1;
        v400 = 0;
        if ( HIDWORD(v378) != (_DWORD)v378 )
        {
          sub_AEBCE(v420, v420 + 60);
          *(_BYTE *)(v420 + 75) = 0;
          v11 = 0;
          v400 = 0;
        }
        goto LABEL_660;
      }
    }
    else if ( v387 )
    {
      v370 = sub_8BBC8();
      if ( v370 )
      {
        v371 = (unsigned __int8 *)v370;
        v372 = strlen(v370);
        v373 = (_WORD *)sub_885E4(2 * v372 + 2);
        if ( *v371 )
        {
          v374 = 0;
          do
          {
            v375 = sub_88448((int *)&v432, v371, 0);
            if ( !(_DWORD)v432 )
              break;
            if ( !WORD1(v432) && sub_AE838(&v432, a6, a7, LODWORD(a8)) )
              v373[v374++] = v432;
            v371 += v375;
          }
          while ( *v371 );
          v373[v374] = 0;
          if ( v374 >= 1 )
          {
            sub_AE9B8(v420, v420 + 60, v373, v374);
            *(_BYTE *)(v420 + 3684) = 1;
          }
        }
        else
        {
          *v373 = 0;
        }
        sub_88614((int)v373);
      }
    }
    v349 = 0;
    v11 = 0;
    v400 = 0;
LABEL_738:
    v127 = v423;
    v126 = v424;
    v111 = v420;
    goto LABEL_658;
  }
  if ( !v425 )
  {
    v11 = 1;
    v349 = 0;
    v355 = 1;
    goto LABEL_657;
  }
  v361 = (unsigned __int8)*v383;
  if ( (v147 & 0x800) == 0 )
  {
    v130 = v409;
    v108 = a8;
    v127 = v423;
    v126 = v424;
    v400 = v361 != 0;
    if ( v409 | v361 )
    {
      v349 = 0;
      v11 = v361 != 0;
      goto LABEL_660;
    }
LABEL_722:
    LODWORD(v432) = 10;
    if ( !sub_AE838(&v432, a6, a7, LODWORD(v108)) )
      goto LABEL_655;
    v336 = v432;
LABEL_654:
    sub_AD8D4(v111, v336);
LABEL_655:
    v349 = 0;
LABEL_656:
    v11 = 0;
    v355 = 0;
LABEL_657:
    v400 = v355;
    v127 = v423;
    v126 = v424;
    goto LABEL_658;
  }
  v349 = 0;
  v11 = v361 == 0;
  if ( v409 )
  {
    v400 = v361 == 0;
    goto LABEL_738;
  }
  v127 = v423;
  v126 = v424;
  v111 = v420;
  v130 = 0;
  v108 = a8;
  v400 = v361 == 0;
  if ( *v383 )
    goto LABEL_722;
LABEL_660:
  v412 |= (*(_DWORD *)(v111 + 64) != *(_DWORD *)(v111 + 68)) & (unsigned __int8)v419;
  if ( *(_DWORD *)(v127 + 1152) != v126 )
  {
LABEL_661:
    v169 = v126;
    v403 = 0;
    v172 = a6;
    if ( !v400 )
      goto LABEL_286;
    goto LABEL_284;
  }
  v128 = v130 == 0;
  if ( !v130 )
    v128 = v349 == 1;
  if ( !v128 || (v394 = *(const char **)(v111 + 44), !strcmp(a3, v394)) )
  {
    v129 = 0;
    v394 = 0;
    if ( !v349 )
    {
      v129 = 0;
      goto LABEL_212;
    }
  }
  else
  {
    v129 = *(_DWORD *)(v111 + 36) - 1;
    if ( !v349 )
      goto LABEL_212;
  }
  if ( ((unsigned __int8)(a6 & 0x20) >> 5) ^ 1 | !v11 )
    goto LABEL_267;
LABEL_212:
  if ( !v130 )
  {
    v131 = *(_DWORD *)(v111 + 12);
    v132 = *(_DWORD *)(v111 + 28);
    *(_BYTE *)(v111 + 48) = 1;
    v133 = 4 * v131 + 1;
    v134 = v133;
    if ( v132 < v133 )
    {
      if ( v132 )
        v135 = v132 + v132 / 2;
      else
        v135 = 8;
      if ( v135 > v133 )
        v133 = v135;
      v111 = v420;
      if ( v132 < v133 )
      {
        v136 = (void *)sub_885E4(v133);
        v137 = *(const void **)(v420 + 32);
        v138 = v136;
        if ( v137 )
        {
          j_memcpy(v136, v137, *(_DWORD *)(v420 + 24));
          sub_88614(*(_DWORD *)(v420 + 32));
        }
        *(_DWORD *)(v420 + 28) = v133;
        *(_DWORD *)(v420 + 32) = v138;
        v130 = v409;
      }
    }
    v139 = *(_WORD **)(v111 + 20);
    v140 = *(_DWORD *)(v111 + 32);
    *(_DWORD *)(v111 + 24) = v134;
    sub_8892C(v140, v134, v139, 0);
    v126 = v424;
    v108 = a8;
  }
  if ( (a6 & 0x1C0) == 0 )
    goto LABEL_264;
  if ( (a6 & 0x40) != 0 )
  {
    v141 = *(_DWORD *)(dword_1ACF68 + 52);
    if ( v141 >= 0 && sub_95484(v141, 1) )
    {
      v142 = 0;
      v143 = 64;
LABEL_253:
      v151 = *(_DWORD *)(v111 + 52);
      v152 = *(_DWORD *)(v111 + 60);
      v434 = 0LL;
      v435 = 0LL;
      v433 = v108;
      v437 = 0LL;
      v436 = v151;
      v438 = 0;
      v153 = v111;
      v432 = __PAIR64__(a6, v143);
      v154 = *(_DWORD *)(v111 + 32);
      v155 = *(_DWORD *)(v111 + 8);
      v156 = *(_DWORD *)(v111 + 20);
      HIDWORD(v434) = v142;
      v435 = __PAIR64__(v155, v154);
      v157 = sub_889DE(v156, v156 + 2 * v152);
      v158 = *(_DWORD *)(v153 + 64);
      LODWORD(v437) = v157;
      v159 = sub_889DE(v156, v156 + 2 * v158);
      v160 = *(_DWORD *)(v153 + 68);
      HIDWORD(v437) = v159;
      v161 = sub_889DE(v156, v156 + 2 * v160);
      v438 = v161;
      ((void (__fastcall *)(unsigned __int64 *))a7)(&v432);
      if ( (_DWORD)v437 != v157 )
      {
        v162 = sub_888C4((unsigned __int8 *)v435, v437 + v435);
        *(_BYTE *)(v420 + 3684) = 1;
        *(_DWORD *)(v420 + 60) = v162;
      }
      if ( HIDWORD(v437) != v159 )
        *(_DWORD *)(v420 + 64) = sub_888C4((unsigned __int8 *)v435, HIDWORD(v437) + v435);
      v126 = v424;
      v118 = v438 == v161;
      v111 = v420;
      v130 = v409;
      v108 = a8;
      if ( !v118 )
        *(_DWORD *)(v420 + 68) = sub_888C4((unsigned __int8 *)v435, v438 + v435);
      if ( BYTE4(v436) )
      {
        if ( v391 && SHIDWORD(v435) > v389 )
          sub_AE7B0();
        *(_DWORD *)(v420 + 4) = sub_88838(*(_WORD **)(v420 + 20), *(_DWORD *)(v420 + 12), (unsigned __int8 *)v435, 0, 0);
        v163 = HIDWORD(v435);
        *(_DWORD *)(v420 + 3680) = -1097229926;
        *(_DWORD *)(v420 + 8) = v163;
      }
      goto LABEL_264;
    }
  }
  if ( (a6 & 0x80) != 0 )
  {
    v144 = dword_1ACF68;
    v145 = *(_DWORD *)(dword_1ACF68 + 64);
    if ( v145 >= 0 )
    {
      if ( sub_95484(v145, 1) )
      {
        v142 = 3;
        v143 = 128;
        goto LABEL_253;
      }
      v144 = dword_1ACF68;
    }
    v150 = *(_DWORD *)(v144 + 68);
    if ( v150 >= 0 && sub_95484(v150, 1) )
    {
      v142 = 4;
      v143 = 128;
      goto LABEL_253;
    }
  }
  if ( (a6 & 0x100) != 0 )
  {
    v142 = 21;
    v143 = 256;
    goto LABEL_253;
  }
LABEL_264:
  if ( !v130 )
  {
    v164 = *(const char **)(v111 + 32);
    if ( strcmp(v164, a3) )
    {
      v129 = *(_DWORD *)(v111 + 8);
      v394 = v164;
    }
  }
LABEL_267:
  v165 = (int)v394;
  if ( v394 )
    v165 = 1;
  v403 = v165;
  if ( v394 )
  {
    v166 = v391 == 0;
    if ( v391 )
      v166 = v389 == v129;
    if ( v166 )
    {
      v167 = a3;
      v168 = a4;
    }
    else
    {
      v171 = a4;
      v434 = 0LL;
      v435 = 0LL;
      v436 = 0LL;
      v437 = 0LL;
      if ( v129 + 1 > a4 )
        v171 = v129 + 1;
      LODWORD(v436) = v171;
      v438 = 0;
      HIDWORD(v432) = a6;
      LODWORD(v432) = 0x40000;
      v435 = __PAIR64__(v129, (unsigned int)a3);
      v433 = v108;
      a7();
      v168 = v436;
      v167 = (char *)v435;
      v129 = v436 - 1;
      if ( SHIDWORD(v435) < (int)v436 - 1 )
        v129 = HIDWORD(v435);
    }
    v170 = v400;
    if ( v129 + 1 < v168 )
      v168 = v129 + 1;
    v169 = v126;
    a3 = v167;
    sub_885C0(v167, v394, v168);
  }
  else
  {
    v169 = v126;
    v170 = v400;
  }
  *(_DWORD *)(v111 + 3688) = 0;
  *(_DWORD *)(v111 + 3692) = 0;
  *(_DWORD *)(v111 + 3696) = 0;
  v127 = v423;
  v172 = a6;
  if ( v170 )
  {
LABEL_284:
    if ( *(_DWORD *)(v127 + 1152) == v169 )
      sub_8B080();
  }
LABEL_286:
  if ( !v425 )
  {
    sub_8A1F8(&v442, v169, 1);
    v173 = v442;
    v174 = v443;
    v175 = v444;
    v176 = sub_88C10(7, 1.0);
    v177 = v174;
    v379 = v176;
    v178 = *(float *)&v173;
    v172 = a6;
    v169 = v424;
    v111 = v420;
    sub_89B34(v178, *((float *)&v173 + 1), v177, v175, v379, 1, *(float *)(v127 + 8));
  }
  v179 = *(float *)&v442;
  v180 = v445;
  v181 = *((float *)&v442 + 1);
  v182 = *(float *)&v442 + v445;
  v183 = *((float *)&v442 + 1) + v446;
  v429 = v442;
  v430 = *(float *)&v442 + v445;
  v431 = *((float *)&v442 + 1) + v446;
  if ( v425 )
  {
    v184 = *(float *)(v413 + 204);
    v428 = *(_QWORD *)(v413 + 200);
    v185 = *(float *)&v428;
  }
  else
  {
    v185 = *(float *)&v442 + *(float *)v127;
    v184 = *((float *)&v442 + 1) + *(float *)(v127 + 4);
    *(float *)&v428 = v185;
    *((float *)&v428 + 1) = v184;
  }
  if ( v396 )
    a3 = *(char **)(v111 + 32);
  if ( !v407 )
  {
    if ( (v419 | v412) == 1 )
    {
      v186 = &a3[*(_DWORD *)(v111 + 8)];
      goto LABEL_298;
    }
    if ( v425 )
    {
      v192 = a3;
LABEL_304:
      v193 = v407;
      v186 = v192 - 1;
      v194 = 0;
      do
      {
        v196 = *(unsigned __int8 *)++v186;
        v195 = v196;
        v197 = v194 + 1;
        if ( v196 == 10 )
          ++v194;
      }
      while ( v195 );
      v198 = *(float *)(v127 + 888) * (float)v197;
      v199 = 0;
      goto LABEL_382;
    }
    if ( *(_DWORD *)(v127 + 1152) == v169 )
    {
      v205 = *(_DWORD *)(v111 + 8);
      v192 = a3;
    }
    else
    {
      v192 = a3;
      v205 = strlen(a3);
    }
    v198 = 0.0;
    v186 = &v192[v205];
LABEL_380:
    v180 = 0.0;
    v193 = v407;
    if ( v186 - v192 >= 0x200000 )
    {
      a3 = (char *)v192;
      goto LABEL_463;
    }
    v199 = (float *)&v429;
LABEL_382:
    v230 = sub_88C10(v193, 1.0);
    a3 = (char *)v192;
    sub_9D89C(
      *(_DWORD **)(v413 + 636),
      *(_DWORD *)(v127 + 884),
      *(float *)(v127 + 888),
      (int)&v428,
      v230,
      v192,
      v186,
      0.0,
      v199);
    goto LABEL_459;
  }
  v186 = &a2[strlen(a2)];
  if ( !(v419 | v412) )
  {
    if ( v425 )
    {
      v180 = v445;
      v192 = a2;
      goto LABEL_304;
    }
    v198 = 0.0;
    v192 = a2;
    goto LABEL_380;
  }
  a3 = (char *)a2;
LABEL_298:
  v187 = -1000;
  v188 = *(_DWORD *)(v111 + 20);
  if ( v419 )
  {
    v189 = -1;
    v190 = v188 + 2 * *(_DWORD *)(v111 + 60);
    v191 = 1;
  }
  else
  {
    v190 = 0;
    v189 = -1000;
    v191 = 0;
  }
  if ( v412 )
  {
    v200 = *(_DWORD *)(v111 + 68);
    ++v191;
    v187 = -1;
    if ( *(_DWORD *)(v111 + 64) < v200 )
      v200 = *(_DWORD *)(v111 + 64);
    v201 = v188 + 2 * v200;
  }
  else
  {
    v201 = 0;
  }
  v202 = 0;
  v203 = v191 + (v425 >> 20);
  for ( i = (_WORD *)v188; ; ++i )
  {
    while ( 1 )
    {
      if ( *i != 10 )
      {
        if ( !*i )
          goto LABEL_336;
        goto LABEL_317;
      }
      ++v202;
      if ( v189 != -1 )
      {
        if ( v187 != -1 )
          goto LABEL_317;
        goto LABEL_321;
      }
      if ( (unsigned int)i < v190 )
        break;
      if ( v203 < 2 )
      {
        v189 = v202;
        goto LABEL_336;
      }
      --v203;
      v189 = v202;
      if ( v187 == -1 )
        goto LABEL_321;
LABEL_317:
      ++i;
    }
    v189 = -1;
    if ( v187 != -1 )
      goto LABEL_317;
LABEL_321:
    if ( (unsigned int)i >= v201 )
      break;
    v187 = -1;
  }
  if ( v203 >= 2 )
  {
    --v203;
    v187 = v202;
    goto LABEL_317;
  }
  v187 = v202;
LABEL_336:
  v416 = v188;
  v206 = (unsigned __int16 *)sub_88644(v190, v188);
  v207 = *(_DWORD *)(dword_1ACF68 + 6340);
  v208 = 0.0;
  v209 = 0.0;
  while ( (unsigned int)v206 < v190 )
  {
    v211 = *v206++;
    v210 = v211;
    if ( v211 != 13 )
    {
      if ( v210 == 10 )
      {
        if ( v208 >= v209 )
          v209 = v208;
        v208 = v209;
        v209 = 0.0;
      }
      else
      {
        v212 = (float *)(v207 + 12);
        if ( *(_DWORD *)v207 > v210 )
          v212 = (float *)(*(_DWORD *)(v207 + 8) + 4 * v210);
        v209 = v209 + (float)((float)(*(float *)(dword_1ACF68 + 6344) / *(float *)(v207 + 16)) * *v212);
      }
    }
  }
  if ( v189 == -1 )
    v189 = v202 + 1;
  v198 = 0.0;
  v213 = *(float *)(v423 + 888);
  v214 = 0.0;
  v215 = v213;
  if ( v208 < v209 )
    v208 = v209;
  v216 = 0.0;
  if ( v187 == -1 )
    v187 = v202 + 1;
  if ( v187 >= 0 )
  {
    v217 = (unsigned __int16 *)sub_88644(v201, v416);
    v218 = *(_DWORD *)(dword_1ACF68 + 6340);
    v214 = 0.0;
LABEL_354:
    v219 = 0.0;
    while ( (unsigned int)v217 < v201 )
    {
      v221 = *v217++;
      v220 = v221;
      if ( v221 != 13 )
      {
        if ( v220 == 10 )
        {
          if ( v214 >= v219 )
            v219 = v214;
          v214 = v219;
          goto LABEL_354;
        }
        v222 = (float *)(v218 + 12);
        if ( *(_DWORD *)v218 > v220 )
          v222 = (float *)(*(_DWORD *)(v218 + 8) + 4 * v220);
        v219 = v219 + (float)((float)(*(float *)(dword_1ACF68 + 6344) / *(float *)(v218 + 16)) * *v222);
      }
    }
    v215 = *(float *)(v423 + 888);
    if ( v214 < v219 )
      v214 = v219;
    v216 = v215 * (float)v187;
  }
  v223 = v213 * (float)v189;
  v180 = 0.0;
  if ( v425 )
  {
    v180 = v445;
    v198 = v215 * (float)(v202 + 1);
  }
  if ( v419 )
  {
    v224 = v420;
    v225 = v412;
    if ( *(_BYTE *)(v420 + 3684) )
    {
      if ( (a6 & 0x1000) != 0 )
      {
        v227 = v413;
        *(_DWORD *)(v420 + 56) = 0;
      }
      else
      {
        v226 = *(float *)(v420 + 56);
        v227 = v413;
        v228 = v445 * 0.25;
        if ( v208 >= v226 )
        {
          if ( (float)(v208 - v445) >= v226 )
          {
            v229 = (float)(v208 - v445) + v228;
            goto LABEL_386;
          }
        }
        else
        {
          v229 = v208 - v228;
          if ( v229 <= 0.0 )
            v229 = 0.0;
LABEL_386:
          *(float *)(v420 + 56) = (float)(int)v229;
        }
      }
      if ( v425 )
      {
        v231 = v223 - v215;
        v232 = *(float *)(v227 + 84);
        if ( v231 >= v232 )
        {
          v231 = *(float *)(v227 + 84);
          if ( (float)(v223 - v446) >= v232 )
            v231 = v223 - v446;
        }
        else if ( v231 <= 0.0 )
        {
          v231 = 0.0;
        }
        v233 = *(float *)(v227 + 204);
        *(float *)(v227 + 84) = v231;
        v184 = v233 + (float)(v232 - v231);
        *(float *)(v227 + 204) = v184;
        *((float *)&v428 + 1) = v184;
      }
      *(_BYTE *)(v420 + 3684) = 0;
    }
  }
  else
  {
    v224 = v420;
    v225 = v412;
  }
  v234 = *(float *)(v224 + 56);
  if ( v225 )
  {
    v235 = 0.6;
    if ( v419 )
      v235 = 1.0;
    v237 = *(_DWORD *)(v420 + 68);
    v236 = *(_DWORD *)(v420 + 64);
    v238 = sub_88C10(42, v235);
    v239 = 2.0;
    v240 = -1.0;
    if ( v425 )
    {
      v239 = 0.0;
      v240 = 0.0;
    }
    v241 = v236;
    if ( v236 < v237 )
    {
      v241 = v237;
      v237 = v236;
    }
    if ( v237 < v241 )
    {
      v242 = v214 + v185;
      v243 = v216 + v184;
      v244 = v416 + 2 * v241;
      v245 = (unsigned __int16 *)(v416 + 2 * v237);
      v246 = *(float *)(v423 + 888);
      do
      {
        if ( v243 > (float)(v183 + v246) )
          break;
        if ( v243 >= v181 )
        {
          v248 = v242 - v234;
          v249 = *(_DWORD *)(dword_1ACF68 + 6340);
          for ( j = 0.0; ; j = j + (float)((float)(*(float *)(dword_1ACF68 + 6344) / *(float *)(v249 + 16)) * *v253) )
          {
            do
            {
              if ( (unsigned int)v245 >= v244 )
              {
                v254 = 0.0;
                goto LABEL_422;
              }
              v252 = *v245++;
              v251 = v252;
            }
            while ( v252 == 13 );
            if ( v251 == 10 )
              break;
            v253 = (float *)(v249 + 12);
            if ( *(_DWORD *)v249 > v251 )
              v253 = (float *)(*(_DWORD *)(v249 + 8) + 4 * v251);
          }
          if ( j <= 0.0 )
            j = 0.0;
          v254 = j;
          j = 0.0;
LABEL_422:
          if ( v254 < j )
            v254 = j;
          if ( v254 <= 0.0 )
          {
            v255 = *(_DWORD **)(v423 + 884);
            v256 = *v255;
            v257 = v255[2];
            v258 = (float *)(v255 + 3);
            if ( v256 > 32 )
              v258 = (float *)(v257 + 128);
            v254 = (float)(int)(float)(*v258 * 0.5);
          }
          v259 = v248 + v254;
          v260 = v248 + 0.0;
          v261 = v183;
          v262 = v182;
          if ( (float)(v239 + v243) < v183 )
            v261 = v239 + v243;
          if ( v259 < v182 )
            v262 = v259;
          v263 = v179;
          if ( v260 >= v179 )
            v263 = v260;
          v264 = v181;
          if ( (float)(v243 + (float)(v240 - v246)) >= v181 )
            v264 = v243 + (float)(v240 - v246);
          *(float *)&v434 = v261;
          v433 = v262;
          v432 = __PAIR64__(LODWORD(v264), LODWORD(v263));
          if ( v181 < v261 && v183 > v264 && v179 < v262 && v182 > v263 )
          {
            sub_9D624(*(_DWORD *)(v413 + 636), (int)&v432, &v433, v238, 0.0, 15);
            v246 = *(float *)(v423 + 888);
          }
        }
        else
        {
          do
          {
            if ( (unsigned int)v245 >= v244 )
              break;
            v247 = *v245++;
          }
          while ( v247 != 10 );
        }
        v243 = v243 + v246;
        v242 = v185;
      }
      while ( (unsigned int)v245 < v244 );
    }
  }
  v127 = v423;
  v265 = 0;
  if ( v425 )
  {
LABEL_444:
    v267 = sub_88C10(v407, 1.0);
    v269 = *(float *)(v423 + 888);
    v268 = *(_DWORD *)(v423 + 884);
    *((float *)&v432 + 1) = v184;
    v380 = v267;
    v270 = *(_DWORD **)(v413 + 636);
    *(float *)&v432 = v185 - v234;
    sub_9D89C(v270, v268, v269, (int)&v432, v380, a3, v186, 0.0, v265);
    v266 = v420;
  }
  else
  {
    v266 = v420;
    if ( v186 - a3 < 0x200000 )
    {
      v265 = (float *)&v429;
      goto LABEL_444;
    }
  }
  if ( v419 )
  {
    v172 = a6;
    v271 = *(unsigned __int8 *)(v422 + 174);
    v272 = *(float *)(v422 + 24) + *(float *)(v266 + 3680);
    *(float *)(v266 + 3680) = v272;
    v273 = 1;
    if ( v271 )
    {
      v274 = v409;
      if ( v272 > 0.0 )
        v273 = fmodf(v272, 1.2) <= 0.8;
    }
    else
    {
      v274 = v409;
    }
    v275 = v208 + v185;
    v276 = v223 + v184;
    v277 = v275 - v234;
    v278 = v276 - *(float *)(v423 + 888);
    *(float *)&v432 = v275 - v234;
    *(float *)&v434 = v276 + -1.5;
    v433 = (float)(v275 - v234) + 1.0;
    *((float *)&v432 + 1) = v278 + 0.5;
    if ( v273
      && *((float *)&v429 + 1) < (float)(v276 + -1.5)
      && v431 > (float)(v278 + 0.5)
      && *(float *)&v429 < (float)(v277 + 1.0)
      && v430 > v277 )
    {
      v427 = v276 + -1.5;
      v426 = v275 - v234;
      v279 = *(_DWORD **)(v413 + 636);
      v280 = sub_88C10(0, 1.0);
      sub_9D43C(v279, (float *)&v432, &v426, v280, 1.0);
    }
    if ( !v274 )
    {
      *(float *)(v422 + 11496) = v276 - *(float *)(v423 + 888);
      *(float *)(v422 + 11492) = v277 + -1.0;
    }
  }
  else
  {
    v172 = a6;
  }
LABEL_459:
  if ( v425 )
  {
    v281 = v198 + *(float *)(v127 + 888);
    v282 = *(_DWORD *)(dword_1ACF68 + 6572);
    v283 = *(unsigned __int8 *)(v282 + 127);
    *(_BYTE *)(v282 + 124) = 1;
    v426 = v180 + 0.0;
    v427 = v281;
    if ( !v283 )
    {
      v284 = (float)(v180 + 0.0) + *(float *)(v282 + 200);
      v285 = v281 + *(float *)(v282 + 204);
      v432 = *(_QWORD *)(v282 + 200);
      v433 = v284;
      *(float *)&v434 = v285;
      sub_8B104((unsigned int)&v426);
      sub_8B314((float *)&v432, 0, 0);
    }
    sub_96284();
    sub_97F20();
  }
LABEL_463:
  if ( dest )
  {
    if ( *(_BYTE *)(v422 + 11552) )
      sub_892E0((int)&v428, a3, (int)v186);
  }
  else
  {
    sub_97518();
  }
  if ( v447[0] > 0.0 )
    sub_89110(
      COERCE_INT(v443 + *(float *)(v127 + 24)),
      COERCE_INT(*((float *)&v442 + 1) + *(float *)(v127 + 4)),
      v388,
      0,
      1);
  if ( !(v403 ^ 1 | ((v172 & 0x200000) >> 21)) )
    sub_8B0DC();
  if ( (v172 & 0x20) == 0 )
    return v403;
  return v11;
}


// ======================================================================
