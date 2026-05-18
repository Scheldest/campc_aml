// ADDR: 0x1750ac
// SYMBOL: sub_1750AC
int __fastcall sub_1750AC(int a1, const void *a2)
{
  float v3; // s0
  int v4; // r3
  int result; // r0
  float dest[32]; // [sp+8h] [bp-80h] BYREF

  if ( a2 )
  {
    j_memcpy(dest, a2, 0x74u);
  }
  else
  {
    sub_174FC6((int)dest);
    LOBYTE(dest[7]) = 1;
    LODWORD(dest[5]) = 1;
    LODWORD(dest[6]) = 1;
  }
  v3 = dest[4];
  if ( dest[4] <= 0.0 )
  {
    v3 = 13.0;
    dest[4] = 13.0;
  }
  if ( !LOBYTE(dest[18]) )
  {
    sub_1655A8((char *)&dest[18], 40, "ProggyClean.ttf, %dpx", (int)v3);
    v3 = dest[4];
  }
  v4 = (int)&unk_BBA30;
  if ( LODWORD(dest[12]) )
    v4 = LODWORD(dest[12]);
  result = sub_175354(a1, a7Hv0qsLQ65N42C, SLODWORD(v3), (int)dest, v4);
  *(_DWORD *)(result + 52) = 1065353216;
  return result;
}


// ======================================================================
// ADDR: 0x17598c
// SYMBOL: sub_17598C
int __fastcall sub_17598C(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r2
  int v7; // lr
  int v8; // r1
  int v9; // r0
  int v10; // r2
  __int64 v11; // r10
  unsigned int v12; // r1
  signed int v13; // r0
  int v14; // r1
  bool v15; // zf
  int v16; // r1
  bool v17; // zf
  double *v18; // r8
  int v19; // r4
  int v20; // r5
  int v21; // r0
  bool v22; // zf
  int v23; // r0
  int v24; // r0
  double v25; // d16
  int v26; // r1
  int v27; // r2
  double v28; // d16
  int v29; // r8
  int v30; // r6
  double v31; // d16
  int v32; // r5
  int v33; // r1
  double v34; // d16
  bool v35; // nf
  bool v36; // vf
  int v37; // r0
  int v38; // r2
  int v39; // r0
  int v40; // r1
  int v41; // r0
  double v42; // d16
  int v43; // r0
  unsigned int v44; // r0
  int v45; // r0
  int v46; // r2
  unsigned int v47; // r2
  int v48; // r2
  int v49; // r3
  unsigned int v50; // r6
  int v51; // r5
  unsigned int v52; // r4
  unsigned int v53; // r4
  bool v54; // zf
  _WORD *v55; // r2
  _WORD *v56; // r3
  int *v57; // r1
  int v58; // r0
  unsigned __int16 *v59; // r2
  int v60; // r3
  int v61; // r6
  int v62; // r5
  _DWORD *v63; // r6
  int v64; // r1
  int v65; // r5
  int v66; // r12
  int v67; // r1
  bool v68; // zf
  int v69; // r1
  bool v70; // zf
  unsigned int v71; // r1
  bool v72; // zf
  int v73; // r4
  int v74; // r5
  int v75; // r4
  __int64 v76; // kr00_8
  _DWORD *v77; // r10
  unsigned __int16 *v78; // r1
  unsigned int v79; // r6
  _DWORD *v80; // r8
  int *v81; // r9
  unsigned int v82; // r0
  unsigned int v83; // r10
  int v84; // r11
  unsigned int v85; // r4
  int v86; // r5
  int v87; // r2
  int v88; // r0
  int i; // r4
  _DWORD *v90; // r6
  int *v91; // r11
  int v92; // r10
  void *v93; // r0
  int v94; // r9
  const void *v95; // r1
  int *v96; // r5
  _DWORD *v97; // r1
  int v98; // r2
  unsigned int *v99; // r0
  _DWORD *v100; // r5
  const void **v101; // r6
  int v102; // r9
  unsigned int v103; // r10
  int j; // r5
  int v105; // r0
  int v106; // r1
  int v107; // r8
  int v108; // r1
  void *v109; // r0
  const void *v110; // r4
  _DWORD *v111; // r8
  int v112; // r6
  int *v113; // r4
  int v114; // r0
  int v115; // r5
  int v116; // r9
  int v117; // r1
  int v118; // r5
  int v119; // r0
  int v120; // r2
  int v121; // r4
  int v122; // r5
  int v123; // r11
  int v124; // lr
  int v125; // r1
  _DWORD *v126; // r2
  int v127; // r6
  int v128; // r12
  int v129; // r8
  _DWORD *v130; // r3
  int v131; // r9
  int v132; // r11
  int v133; // r0
  int v134; // r4
  int v135; // s0
  int v136; // r6
  int v137; // r0
  int v138; // r2
  int v139; // r11
  int v140; // r9
  int v141; // r0
  unsigned __int16 v142; // r1
  int v143; // r0
  unsigned __int16 v144; // r2
  int v145; // r11
  int v146; // r0
  _DWORD *v147; // r4
  int v148; // r9
  int v149; // r5
  bool v150; // zf
  int v151; // r1
  _DWORD *v152; // r0
  int v153; // r2
  int v154; // r3
  _DWORD *v155; // r2
  int k; // r4
  int v157; // r6
  size_t v158; // r2
  int *v159; // r5
  _DWORD *v160; // r6
  void *v161; // t1
  int v162; // r0
  unsigned __int16 *v163; // r1
  int v164; // r6
  int v165; // r2
  int v166; // r5
  int v167; // r0
  int v168; // r0
  int v169; // r0
  int v170; // r1
  int v171; // r0
  int v172; // r0
  __int64 v173; // kr08_8
  float v174; // s26
  int v175; // r12
  int v176; // r9
  float v177; // s0
  _DWORD *v178; // r1
  float v179; // s2
  float v180; // s22
  int v181; // r2
  unsigned int v182; // r1
  unsigned int v183; // r6
  float v184; // s24
  float v185; // s0
  float v186; // s28
  float v187; // s2
  int v188; // r0
  float v189; // s19
  float v190; // s18
  float v191; // s17
  int v192; // r4
  float v193; // s30
  float v194; // s27
  int v195; // r3
  __int16 v196; // r5
  __int16 v197; // r6
  int v198; // r8
  int v199; // r1
  int v200; // r4
  __int16 v201; // t1
  signed int v202; // r0
  int v203; // r2
  int v204; // r11
  int v205; // r5
  int v206; // r8
  int v207; // r4
  int v208; // r0
  int v209; // r1
  int v210; // r11
  unsigned __int8 *v211; // r0
  int v212; // r10
  int v213; // t1
  int v214; // r6
  int v215; // r5
  int v216; // r0
  int v217; // r4
  int v218; // r8
  int v219; // r4
  __int16 *v220; // r6
  int v221; // r9
  float v222; // s1
  int v223; // s0
  float v224; // s0
  float *v225; // r0
  int v226; // r0
  int v227; // r4
  int v228; // r6
  int v229; // r0
  int v230; // r1
  int v231; // r2
  int v232; // r9
  int v233; // r1
  int v234; // r8
  int v235; // lr
  float *v236; // r5
  int v237; // r3
  int v238; // r6
  int v239; // r0
  float v240; // s2
  int v241; // r2
  float v242; // s0
  int v243; // r4
  int v244; // r2
  float *v245; // r0
  float *v246; // r2
  float v247; // s6
  float v248; // s10
  _BOOL4 v249; // r0
  float v250; // s2
  float v251; // s8
  int v252; // r2
  int v253; // r2
  int v254; // r1
  int v255; // r0
  int v256; // r2
  double v257; // d16
  int v258; // r3
  int v259; // s0
  float v260; // s2
  int v261; // r2
  int v262; // r3
  __int64 v263; // d17
  double v264; // d16
  int v265; // r2
  int v266; // r3
  double *v267; // r8
  int v268; // r2
  _BYTE *v269; // r10
  int v270; // r4
  int v271; // r5
  _DWORD *v272; // r11
  int v273; // r6
  float v274; // s16
  float v275; // s31
  float v276; // s22
  int *v277; // r0
  float v278; // s24
  char v279; // r0
  float v280; // s0
  int v281; // r2
  float *v282; // r11
  int v283; // r10
  float v284; // s29
  float v285; // s26
  char *v286; // r0
  int v287; // r1
  float v288; // s4
  float v289; // s6
  float v290; // s10
  float v291; // s2
  float v292; // s28
  float v293; // s0
  bool v294; // fnf
  float v295; // s6
  float v296; // s8
  float v297; // s2
  int v298; // r6
  int v299; // r4
  float v300; // s19
  float v301; // s30
  double *v302; // r0
  int v303; // r1
  float *v304; // r2
  double *v305; // r0
  int v306; // r1
  float *v307; // r2
  int v308; // r1
  int v309; // r2
  float v310; // s0
  float v311; // s4
  int v312; // r0
  float v313; // s8
  float v314; // s8
  int v315; // r2
  float v316; // s12
  float v317; // s6
  float v318; // s10
  float v319; // s1
  float v320; // s12
  float *v321; // r3
  int v322; // r1
  float v323; // s3
  float v324; // s0
  float *v325; // r0
  _BYTE *v326; // r1
  int v327; // r2
  float v328; // s2
  int v329; // r3
  float *v330; // r0
  float *v331; // r1
  unsigned __int8 v332; // r4
  int v333; // r0
  _DWORD *v334; // r0
  float v335; // s2
  float v336; // s12
  float v337; // s6
  float v338; // s4
  float v339; // s0
  float v340; // s10
  _DWORD *v341; // r4
  unsigned int v342; // r10
  unsigned __int16 *v343; // r5
  int v344; // r1
  int v345; // r8
  unsigned int v346; // r9
  int v347; // r0
  int v348; // r5
  int v349; // r11
  signed int v350; // r6
  unsigned int v351; // r4
  int v352; // r0
  int v353; // r1
  int v354; // r2
  int v355; // r0
  int v356; // r1
  int v357; // r2
  int v358; // r0
  int v359; // r1
  int v360; // r0
  int v361; // r1
  int v362; // r6
  int v363; // r0
  int v364; // r1
  int v365; // r8
  int v366; // r1
  unsigned int v367; // lr
  int v368; // r3
  int v369; // r0
  int v370; // r6
  int v371; // r11
  unsigned int v372; // r9
  signed int v373; // lr
  int v374; // r0
  unsigned int v375; // r4
  int v376; // r1
  int v377; // r2
  int v378; // r3
  int v379; // r0
  int v380; // r1
  int v381; // r2
  int v382; // r3
  int v383; // r0
  int v384; // r1
  int v385; // r2
  _BYTE *v386; // r3
  int v387; // r0
  int v388; // r1
  int v389; // r2
  _BYTE *v390; // r3
  signed int v391; // r6
  int v392; // r5
  int v393; // r6
  int v394; // r8
  int v395; // r2
  int v396; // r1
  int v397; // r6
  float v398; // s10
  int v399; // r0
  __int16 v400; // r3
  float v401; // s6
  float v402; // s2
  float v403; // s8
  __int16 v404; // r1
  int v405; // r2
  float v406; // s0
  unsigned int m; // r0
  unsigned int v408; // r1
  int v409; // r3
  int v410; // lr
  int v411; // r9
  int v412; // r2
  int v413; // r3
  int v414; // r6
  int v415; // r5
  int n; // r4
  int v418; // r1
  _DWORD *v419; // r10
  int v420; // r0
  float v421; // s22
  float v422; // s24
  int v423; // r1
  int v424; // r6
  unsigned int v425; // r9
  int v426; // r8
  int v427; // r5
  int v428; // r4
  float v429; // s0
  float v430; // s26
  float v431; // s0
  float v432; // s4
  int v433; // r1
  float v434; // s22
  float v435; // s2
  _DWORD *v436; // r9
  float *v437; // r8
  _DWORD *v438; // r10
  float *v439; // r0
  int v440; // r11
  int v441; // r6
  float v442; // s24
  float *v443; // r0
  float v444; // s4
  float v445; // s0
  float v446; // s2
  float v447; // s2
  float v448; // s4
  int *v449; // r4
  int v450; // r0
  float v452; // [sp+1Ch] [bp-38Ch]
  float v453; // [sp+24h] [bp-384h]
  float v454; // [sp+28h] [bp-380h]
  float v455; // [sp+2Ch] [bp-37Ch]
  float v456; // [sp+30h] [bp-378h]
  int v457; // [sp+34h] [bp-374h]
  int v458; // [sp+38h] [bp-370h]
  int v459; // [sp+3Ch] [bp-36Ch]
  int v460; // [sp+44h] [bp-364h]
  unsigned int v461; // [sp+48h] [bp-360h]
  unsigned int v462; // [sp+4Ch] [bp-35Ch]
  int *v463; // [sp+50h] [bp-358h]
  _DWORD *v464; // [sp+54h] [bp-354h]
  int v465; // [sp+58h] [bp-350h]
  int v466; // [sp+64h] [bp-344h]
  int v467; // [sp+68h] [bp-340h]
  int v468; // [sp+6Ch] [bp-33Ch]
  int v469; // [sp+70h] [bp-338h]
  int v470; // [sp+70h] [bp-338h]
  int v471; // [sp+74h] [bp-334h]
  _DWORD *v472; // [sp+74h] [bp-334h]
  int v473; // [sp+78h] [bp-330h]
  int *v474; // [sp+7Ch] [bp-32Ch]
  int v475; // [sp+80h] [bp-328h]
  int v476; // [sp+84h] [bp-324h]
  int *v477; // [sp+88h] [bp-320h]
  _DWORD *v478; // [sp+8Ch] [bp-31Ch]
  _DWORD *v479; // [sp+90h] [bp-318h]
  int *v480; // [sp+94h] [bp-314h]
  _DWORD *v481; // [sp+98h] [bp-310h]
  _DWORD *v482; // [sp+9Ch] [bp-30Ch]
  int v483; // [sp+A0h] [bp-308h]
  int v484; // [sp+A0h] [bp-308h]
  unsigned int v485; // [sp+A4h] [bp-304h]
  int v486; // [sp+A8h] [bp-300h]
  int v487; // [sp+ACh] [bp-2FCh]
  _BYTE *v488; // [sp+ACh] [bp-2FCh]
  int *v489; // [sp+B0h] [bp-2F8h]
  unsigned int v490; // [sp+B4h] [bp-2F4h]
  int v491; // [sp+B8h] [bp-2F0h]
  int v492; // [sp+BCh] [bp-2ECh]
  int v493; // [sp+C0h] [bp-2E8h]
  int v494; // [sp+C0h] [bp-2E8h]
  int v495; // [sp+C4h] [bp-2E4h]
  int v496; // [sp+C8h] [bp-2E0h]
  int v497; // [sp+CCh] [bp-2DCh]
  int v498; // [sp+D0h] [bp-2D8h]
  unsigned __int16 *v499; // [sp+D0h] [bp-2D8h]
  int v500; // [sp+D4h] [bp-2D4h]
  int v501; // [sp+D4h] [bp-2D4h]
  unsigned __int16 *v502; // [sp+D4h] [bp-2D4h]
  int v503; // [sp+D8h] [bp-2D0h]
  int v504; // [sp+D8h] [bp-2D0h]
  int v505; // [sp+DCh] [bp-2CCh]
  _DWORD *v506; // [sp+DCh] [bp-2CCh]
  int v507; // [sp+DCh] [bp-2CCh]
  int v508; // [sp+E0h] [bp-2C8h]
  _DWORD *v509; // [sp+E0h] [bp-2C8h]
  _DWORD *v510; // [sp+E0h] [bp-2C8h]
  _WORD *v511; // [sp+E0h] [bp-2C8h]
  int v512; // [sp+E4h] [bp-2C4h]
  _DWORD **v513; // [sp+E4h] [bp-2C4h]
  int v514; // [sp+E4h] [bp-2C4h]
  _WORD *v515; // [sp+E4h] [bp-2C4h]
  int v516; // [sp+E8h] [bp-2C0h]
  int v517; // [sp+E8h] [bp-2C0h]
  int v518; // [sp+E8h] [bp-2C0h]
  int v519; // [sp+E8h] [bp-2C0h]
  unsigned int v520; // [sp+E8h] [bp-2C0h]
  int v521; // [sp+ECh] [bp-2BCh]
  int v522; // [sp+ECh] [bp-2BCh]
  _DWORD *v523; // [sp+ECh] [bp-2BCh]
  int *v524; // [sp+ECh] [bp-2BCh]
  int v525; // [sp+ECh] [bp-2BCh]
  int v526; // [sp+ECh] [bp-2BCh]
  int v527; // [sp+ECh] [bp-2BCh]
  int v528; // [sp+F0h] [bp-2B8h]
  int *v529; // [sp+F4h] [bp-2B4h]
  int v530; // [sp+F4h] [bp-2B4h]
  int v531; // [sp+F4h] [bp-2B4h]
  int v532; // [sp+F4h] [bp-2B4h]
  int v533; // [sp+F4h] [bp-2B4h]
  int v534; // [sp+F4h] [bp-2B4h]
  int v535; // [sp+F8h] [bp-2B0h]
  unsigned __int16 *v536; // [sp+F8h] [bp-2B0h]
  unsigned int v537; // [sp+F8h] [bp-2B0h]
  int *v538; // [sp+F8h] [bp-2B0h]
  unsigned int v539; // [sp+F8h] [bp-2B0h]
  int v540; // [sp+F8h] [bp-2B0h]
  _DWORD *v541; // [sp+FCh] [bp-2ACh]
  int *v542; // [sp+FCh] [bp-2ACh]
  unsigned int *v543; // [sp+FCh] [bp-2ACh]
  _DWORD *v544; // [sp+FCh] [bp-2ACh]
  unsigned int v545; // [sp+FCh] [bp-2ACh]
  _BYTE *v546; // [sp+FCh] [bp-2ACh]
  int *v547; // [sp+100h] [bp-2A8h]
  int v548; // [sp+100h] [bp-2A8h]
  int v549; // [sp+100h] [bp-2A8h]
  int v550; // [sp+100h] [bp-2A8h]
  float *v551; // [sp+100h] [bp-2A8h]
  int v552; // [sp+104h] [bp-2A4h]
  int v553; // [sp+104h] [bp-2A4h]
  int *v554; // [sp+104h] [bp-2A4h]
  int v555; // [sp+104h] [bp-2A4h]
  int v556; // [sp+104h] [bp-2A4h]
  int v557; // [sp+104h] [bp-2A4h]
  unsigned int v558; // [sp+104h] [bp-2A4h]
  unsigned int v559; // [sp+104h] [bp-2A4h]
  int *v560; // [sp+104h] [bp-2A4h]
  double v561; // [sp+108h] [bp-2A0h] BYREF
  int v562; // [sp+110h] [bp-298h]
  int v563; // [sp+118h] [bp-290h] BYREF
  int v564; // [sp+11Ch] [bp-28Ch]
  int v565; // [sp+120h] [bp-288h]
  char v566[4]; // [sp+124h] [bp-284h] BYREF
  char v567[4]; // [sp+128h] [bp-280h] BYREF
  int v568; // [sp+12Ch] [bp-27Ch] BYREF
  int v569; // [sp+130h] [bp-278h] BYREF
  int v570; // [sp+134h] [bp-274h] BYREF
  int v571; // [sp+138h] [bp-270h] BYREF
  int v572; // [sp+13Ch] [bp-26Ch] BYREF
  double v573; // [sp+140h] [bp-268h] BYREF
  int v574; // [sp+148h] [bp-260h]
  _DWORD v575[25]; // [sp+344h] [bp-64h] BYREF

  sub_177B4C();
  v474 = (int *)(a1 + 28);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  sub_175046(a1);
  v2 = *(_DWORD *)(a1 + 76);
  v497 = v2;
  if ( v2 < 1 )
  {
    v3 = 0;
  }
  else
  {
    if ( (unsigned int)v2 <= 8 )
      v2 = 8;
    v3 = sub_1654B0(196 * v2);
  }
  v495 = v3;
  v4 = *(_DWORD *)(a1 + 52);
  v505 = v4;
  if ( v4 < 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)v4 <= 8 )
      v4 = 8;
    v5 = sub_1654B0(24 * v4);
  }
  sub_22178C(v495, 196 * v497);
  v516 = v5;
  sub_22178C(v5, 24 * v505);
  v528 = a1;
  if ( *(int *)(a1 + 76) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(_DWORD *)(a1 + 52);
      v9 = *(_DWORD *)(a1 + 84);
      v552 = v495 + 196 * v7;
      *(_DWORD *)(v552 + 160) = -1;
      v547 = (int *)(v552 + 160);
      if ( v8 < 1 )
      {
LABEL_122:
        if ( v516 )
          sub_165578(v516);
        v73 = 0;
        goto LABEL_524;
      }
      v10 = 0;
      v541 = (_DWORD *)(v9 + 116 * v7);
      while ( v541[28] != *(_DWORD *)(*(_DWORD *)(v528 + 60) + 4 * v10) )
      {
        if ( ++v10 >= v8 )
          goto LABEL_122;
      }
      HIDWORD(v11) = -1;
      LODWORD(v11) = *(_DWORD *)(v9 + 116 * v7);
      *v547 = v10;
      v12 = *(unsigned __int8 *)v11;
      v13 = v541[3];
      if ( v12 <= 0x4E )
      {
        if ( *(_BYTE *)v11 )
        {
          if ( v12 != 49 )
            goto LABEL_41;
          if ( *(_BYTE *)(v11 + 1) )
          {
LABEL_40:
            HIDWORD(v11) = -1;
            goto LABEL_41;
          }
        }
        else if ( *(_BYTE *)(v11 + 1) != 1 )
        {
          goto LABEL_40;
        }
        if ( *(_BYTE *)(v11 + 2) || *(_BYTE *)(v11 + 3) )
          goto LABEL_40;
        goto LABEL_119;
      }
      if ( v12 == 79 )
      {
        v16 = *(unsigned __int8 *)(v11 + 1);
        v17 = v16 == 84;
        if ( v16 == 84 )
          v17 = *(_BYTE *)(v11 + 2) == 84;
        if ( !v17 || *(_BYTE *)(v11 + 3) != 79 )
          goto LABEL_40;
        goto LABEL_119;
      }
      if ( v12 != 116 )
        goto LABEL_41;
      v14 = *(unsigned __int8 *)(v11 + 1);
      if ( v14 == 114 )
        break;
      if ( v14 != 116 )
      {
        v15 = v14 == 121;
        if ( v14 == 121 )
          v15 = *(_BYTE *)(v11 + 2) == 112;
        if ( !v15 || *(_BYTE *)(v11 + 3) != 49 )
          goto LABEL_40;
LABEL_119:
        if ( v13 )
          v13 = -1;
        HIDWORD(v11) = v13;
        goto LABEL_41;
      }
      v69 = *(unsigned __int8 *)(v11 + 2);
      v70 = v69 == 99;
      if ( v69 == 99 )
        v70 = *(_BYTE *)(v11 + 3) == 102;
      if ( !v70 )
        goto LABEL_40;
      v71 = bswap32(*(_DWORD *)(v11 + 4));
      v72 = v71 == 0x20000;
      if ( v71 != 0x20000 )
        v72 = v71 == 0x10000;
      if ( !v72 || (int)bswap32(*(_DWORD *)(v11 + 8)) <= v13 )
        goto LABEL_40;
      HIDWORD(v11) = bswap32(*(_DWORD *)(v11 + 4 * v13 + 12));
LABEL_41:
      *(_DWORD *)(v552 + 60) = 0;
      *(_DWORD *)(v552 + 56) = 0;
      *(_DWORD *)(v552 + 52) = 0;
      v18 = (double *)(v552 + 52);
      *(_QWORD *)(v552 + 4) = v11;
      v521 = sub_178E38(v11, HIDWORD(v11), "cmap");
      v500 = sub_178E38(v11, HIDWORD(v11), "loca");
      *(_DWORD *)(v552 + 16) = v500;
      v512 = sub_178E38(v11, HIDWORD(v11), "head");
      *(_DWORD *)(v552 + 20) = v512;
      v508 = sub_178E38(v11, HIDWORD(v11), "glyf");
      *(_DWORD *)(v552 + 24) = v508;
      v19 = sub_178E38(v11, HIDWORD(v11), "hhea");
      *(_DWORD *)(v552 + 28) = v19;
      v20 = sub_178E38(v11, HIDWORD(v11), "hmtx");
      *(_DWORD *)(v552 + 32) = v20;
      *(_DWORD *)(v552 + 36) = sub_178E38(v11, HIDWORD(v11), "kern");
      v21 = v11;
      v535 = v11;
      LODWORD(v11) = v552 + 20;
      *(_DWORD *)(v552 + 40) = sub_178E38(v21, HIDWORD(v11), "GPOS");
      v22 = v521 == 0;
      if ( v521 )
        v22 = v512 == 0;
      if ( v22 || !v19 || !v20 )
        goto LABEL_122;
      if ( v508 )
      {
        if ( !v500 )
          goto LABEL_122;
      }
      else
      {
        v575[0] = 2;
        v572 = 0;
        v570 = 0;
        v571 = 0;
        v23 = sub_178E38(v535, HIDWORD(v11), "CFF ");
        if ( !v23 )
          goto LABEL_122;
        *(_DWORD *)v18 = v23 + v535;
        v24 = 0;
        *(_DWORD *)(v552 + 56) = 0;
        v25 = *v18;
        *(_DWORD *)(v552 + 60) = 0x20000000;
        v26 = *(_DWORD *)(v552 + 60);
        v573 = v25;
        *(_DWORD *)(v552 + 120) = 0;
        *(_QWORD *)(v552 + 100) = 0LL;
        *(_QWORD *)(v552 + 108) = 0LL;
        *(_DWORD *)(v552 + 116) = 0;
        v27 = HIDWORD(v25) + 2;
        v574 = v26;
        if ( v26 < HIDWORD(v25) + 2 )
          v27 = v26;
        if ( SHIDWORD(v25) < -2 )
          v27 = v26;
        if ( v27 < v26 )
          v24 = *(unsigned __int8 *)(LODWORD(v573) + v27);
        if ( v26 < v24 )
          v24 = v26;
        HIDWORD(v573) = v24;
        sub_178E84(&v561, &v573);
        sub_178E84(&v561, &v573);
        sub_178F3A(&v563, LODWORD(v561), HIDWORD(v561), v562, 0);
        sub_178E84(&v561, &v573);
        sub_178E84(&v561, &v573);
        v28 = v561;
        *(_DWORD *)(v552 + 84) = v562;
        *(double *)(v552 + 76) = v28;
        sub_178FFE(&v563, 17, 1, &v572);
        sub_178FFE(&v563, 262, 1, v575);
        sub_178FFE(&v563, 292, 1, &v571);
        sub_178FFE(&v563, 293, 1, &v570);
        v29 = v574;
        sub_1790EC(&v561, LODWORD(v573), HIDWORD(v573), v574, v563, v564, v565);
        v30 = v572;
        v31 = v561;
        v15 = v575[0] == 2;
        *(_DWORD *)(v552 + 96) = v562;
        *(double *)(v552 + 88) = v31;
        if ( !v15 || !v30 )
          goto LABEL_122;
        if ( v571 )
        {
          v32 = v570;
          if ( !v570 )
            goto LABEL_122;
          v33 = v571;
          if ( v29 < v571 )
            v33 = v29;
          if ( v571 < 0 )
            v33 = v29;
          HIDWORD(v573) = v33;
          sub_178E84(&v561, &v573);
          v29 = v574;
          v34 = v561;
          v36 = __OFSUB__(v574, v32);
          v35 = v574 - v32 < 0;
          v37 = LODWORD(v573);
          *(_DWORD *)(v552 + 108) = v562;
          *(_DWORD *)(v552 + 116) = 0;
          *(double *)(v552 + 100) = v34;
          v38 = v29 - v32;
          v39 = v37 + v32;
          v40 = v35 ^ v36 | (((v29 - v32) | v32) < 0);
          if ( v40 )
            v39 = 0;
          *(_DWORD *)(v552 + 112) = v39;
          if ( v40 )
            v38 = 0;
          *(_DWORD *)(v552 + 120) = v38;
        }
        v41 = v30;
        if ( v29 < v30 )
          v41 = v29;
        if ( v30 < 0 )
          v41 = v29;
        HIDWORD(v573) = v41;
        sub_178E84(&v561, &v573);
        LODWORD(v11) = v552 + 20;
        v42 = v561;
        *(_DWORD *)(v552 + 72) = v562;
        *(double *)(v552 + 64) = v42;
      }
      v43 = sub_178E38(v535, HIDWORD(v11), "maxp");
      if ( v43 )
        v44 = bswap32(*(unsigned __int16 *)(v43 + v535 + 4) << 16);
      else
        v44 = 0xFFFF;
      *(_DWORD *)(v552 + 12) = v44;
      v45 = v535 + v521;
      v46 = *(unsigned __int16 *)(v535 + v521 + 2);
      *(_DWORD *)(v552 + 44) = 0;
      v47 = bswap32(v46 << 16);
      if ( !v47 )
        goto LABEL_122;
      v48 = 8 * v47;
      v49 = 0;
      v50 = 0;
      do
      {
        v51 = v45 + v49;
        v52 = bswap32(*(unsigned __int16 *)(v45 + v49 + 4)) >> 16;
        if ( !v52 )
          goto LABEL_88;
        if ( v52 == 3 )
        {
          v53 = bswap32(*(unsigned __int16 *)(v51 + 6)) >> 16;
          v54 = v53 == 10;
          if ( v53 != 10 )
            v54 = v53 == 1;
          if ( v54 )
          {
LABEL_88:
            v50 = bswap32(*(_DWORD *)(v51 + 8)) + v521;
            *(_DWORD *)(v552 + 44) = v50;
          }
        }
        v49 += 8;
      }
      while ( v48 != v49 );
      if ( !v50 )
        goto LABEL_122;
      v55 = &unk_BBA30;
      v56 = (_WORD *)v541[12];
      *(_DWORD *)(v552 + 48) = bswap32(*(unsigned __int16 *)(*(_DWORD *)v11 + v535 + 50) << 16);
      v57 = (int *)(v552 + 164);
      v58 = *v547;
      if ( v56 )
        v55 = v56;
      *(_DWORD *)(v552 + 156) = v55;
      if ( *v55 )
      {
        v59 = v55 + 1;
        do
        {
          v60 = *v59;
          if ( !*v59 )
            break;
          v61 = *v57;
          v62 = v59[1];
          v59 += 2;
          if ( *v57 < v60 )
            v61 = v60;
          *v57 = v61;
        }
        while ( v62 );
      }
      ++v7;
      v63 = (_DWORD *)(v516 + 24 * v58);
      v64 = *v57;
      v65 = v63[1];
      v66 = *(_DWORD *)(v528 + 76);
      ++*v63;
      if ( v65 < v64 )
        v65 = v64;
      v63[1] = v65;
      a1 = v528;
      v6 = -1;
      if ( v7 >= v66 )
        goto LABEL_125;
    }
    v67 = *(unsigned __int8 *)(v11 + 2);
    v68 = v67 == 117;
    if ( v67 == 117 )
      v68 = *(_BYTE *)(v11 + 3) == 101;
    if ( !v68 )
      goto LABEL_40;
    goto LABEL_119;
  }
LABEL_125:
  if ( v497 < 1 )
  {
    v111 = (_DWORD *)a1;
    v548 = 0;
  }
  else
  {
    v74 = 0;
    v548 = 0;
    do
    {
      v75 = v495 + 196 * v74;
      v76 = *(_QWORD *)(v75 + 160);
      sub_177B80(v75 + 172, HIDWORD(v76) + 1, v6);
      v77 = (_DWORD *)(v516 + 24 * v76);
      if ( !v77[3] )
        sub_177B80(v77 + 3, v77[1] + 1, v6);
      v78 = *(unsigned __int16 **)(v75 + 156);
      v522 = v74;
      v79 = *v78;
      if ( *v78 )
      {
        v80 = (_DWORD *)(v75 + 168);
        v81 = v77 + 2;
        v6 = 1;
        v542 = (int *)(v75 + 180);
        v553 = v495 + 196 * v74;
        v529 = v77 + 5;
        do
        {
          v82 = v78[1];
          if ( !v78[1] )
            break;
          v536 = v78;
          if ( v79 <= v82 )
          {
            v83 = v82 + 1;
            v84 = *v529;
            do
            {
              v85 = v79 >> 5;
              v86 = 1 << (v79 & 0x1F);
              if ( (*(_DWORD *)(v84 + 4 * (v79 >> 5)) & v86) == 0 )
              {
                if ( sub_177BE0(v553, v79, 1) )
                {
                  v87 = *v81;
                  v88 = *v542;
                  ++*v80;
                  *v81 = v87 + 1;
                  *(_DWORD *)(v88 + 4 * v85) |= v86;
                  *(_DWORD *)(v84 + 4 * v85) |= v86;
                  ++v548;
                }
                v6 = 1;
              }
              ++v79;
            }
            while ( v83 != v79 );
          }
          v78 = v536 + 2;
          v79 = v536[2];
        }
        while ( v536[2] );
      }
      v74 = v522 + 1;
    }
    while ( v522 + 1 != v497 );
    for ( i = 0; i != v497; ++i )
    {
      v90 = (_DWORD *)(v495 + 196 * i);
      v91 = v90 + 46;
      v554 = v90 + 47;
      v92 = v90[42];
      if ( v90[47] < v92 )
      {
        v93 = (void *)sub_1654B0(4 * v92);
        v94 = (int)v93;
        v96 = v90 + 48;
        v95 = (const void *)v90[48];
        if ( v95 )
        {
          j_memcpy(v93, v95, 4 * *v91);
          sub_165578(*v96);
        }
        *v96 = v94;
        *v554 = v92;
      }
      v97 = v90 + 43;
      v98 = v90[43];
      v100 = v90 + 45;
      v99 = (unsigned int *)v90[45];
      if ( v98 >= 1 )
      {
        v523 = (_DWORD *)(v495 + 196 * i);
        v101 = (const void **)(v90 + 48);
        v102 = 0;
        v513 = (_DWORD **)v100;
        v530 = i;
        v537 = (unsigned int)&v99[v98];
        v509 = v97;
        do
        {
          v103 = *v99;
          v543 = v99;
          if ( *v99 )
          {
            for ( j = 0; j != 32; ++j )
            {
              if ( v103 >> j << 31 )
              {
                v105 = *v91;
                v106 = *v554;
                LODWORD(v573) = v102 + j;
                if ( v105 == v106 )
                {
                  v107 = v105 + 1;
                  if ( v105 )
                    v108 = v105 + v105 / 2;
                  else
                    v108 = 8;
                  if ( v108 > v107 )
                    v107 = v108;
                  if ( v105 < v107 )
                  {
                    v109 = (void *)sub_1654B0(4 * v107);
                    v110 = v109;
                    if ( *v101 )
                    {
                      j_memcpy(v109, *v101, 4 * *v91);
                      sub_165578((int)*v101);
                    }
                    *v101 = v110;
                    *v554 = v107;
                    v105 = *v91;
                  }
                }
                *((_DWORD *)*v101 + v105) = LODWORD(v573);
                ++*v91;
              }
            }
          }
          v102 += 32;
          v99 = v543 + 1;
        }
        while ( (unsigned int)(v543 + 1) < v537 );
        v100 = v513;
        i = v530;
        v90 = v523;
        v99 = *v513;
        v97 = v509;
      }
      if ( v99 )
      {
        *v97 = 0;
        v90[44] = 0;
        sub_165578((int)v99);
        *v100 = 0;
      }
    }
    v111 = (_DWORD *)v528;
  }
  v112 = v505;
  if ( v505 < 1 )
  {
    if ( !v516 )
      goto LABEL_178;
  }
  else
  {
    v113 = (int *)(v516 + 20);
    do
    {
      v114 = *v113;
      if ( *v113 )
      {
        *(v113 - 2) = 0;
        *(v113 - 1) = 0;
        sub_165578(v114);
        *v113 = 0;
      }
      v113 += 6;
      --v112;
    }
    while ( v112 );
  }
  sub_165578(v516);
LABEL_178:
  v565 = 0;
  v563 = 0;
  v564 = 0;
  v562 = 0;
  v561 = 0.0;
  if ( v548 < 1 )
  {
    v563 = v548;
    v120 = 0;
    v121 = 0;
    v122 = 0;
  }
  else
  {
    v115 = 8;
    if ( (unsigned int)v548 > 8 )
      v115 = v548;
    v116 = 8;
    v117 = sub_1654B0(16 * v115);
    v565 = v117;
    v563 = v548;
    v564 = v115;
    if ( (unsigned int)v548 > 8 )
      v116 = v548;
    v118 = v117;
    v119 = sub_1654B0(28 * v116);
    v120 = v118;
    v121 = v119;
    v122 = v119;
    HIDWORD(v561) = v116;
    v562 = v119;
  }
  LODWORD(v561) = v548;
  v123 = v120;
  sub_22178C(v120, 16 * v548);
  sub_22178C(v122, 28 * v548);
  if ( v497 < 1 )
  {
    v126 = v111;
    v555 = 0;
  }
  else
  {
    v555 = 0;
    v124 = 0;
    v125 = 0;
    v126 = v111;
    v127 = v123;
    v517 = 0;
    v498 = v121;
    v501 = v123;
    do
    {
      v128 = v495 + 196 * v125;
      v129 = *(_DWORD *)(v128 + 168);
      if ( v129 )
      {
        v130 = (_DWORD *)(v126[21] + 116 * v125);
        v514 = v125;
        v131 = v121;
        v132 = v127;
        v549 = v495 + 196 * v125;
        v133 = v121 + 28 * v517;
        v134 = v130[5];
        *(_DWORD *)(v128 + 148) = v127 + 16 * v124;
        v510 = v130 + 5;
        *(_DWORD *)(v128 + 128) = 0;
        *(_DWORD *)(v128 + 152) = v133;
        *(_DWORD *)(v128 + 140) = v133;
        v135 = v130[4];
        v136 = v130[6];
        v137 = *(_DWORD *)(v128 + 192);
        v506 = v130 + 6;
        v524 = (int *)(v128 + 192);
        v138 = *(_DWORD *)(v128 + 184);
        *(_BYTE *)(v128 + 144) = v134;
        v538 = (int *)(v128 + 184);
        *(_DWORD *)(v128 + 132) = v137;
        *(_DWORD *)(v128 + 136) = v138;
        *(_BYTE *)(v128 + 145) = v136;
        v544 = (_DWORD *)(v128 + 148);
        *(_DWORD *)(v128 + 124) = v135;
        v124 += v129;
        v517 += v129;
        if ( v138 < 1 )
        {
          v126 = (_DWORD *)v528;
          v127 = v132;
          v121 = v131;
        }
        else
        {
          v139 = 1;
          v140 = 0;
          v531 = *(_DWORD *)(v528 + 16);
          while ( 1 )
          {
            v141 = sub_177BE0(v549, *(_DWORD *)(v137 + v140), v138);
            sub_177D7C(v549, v141, &v573, v575, &v572, &v571);
            v142 = *v510 + v572 + v531 - LOWORD(v573) - 1;
            v143 = *v544 + 4 * v140;
            v144 = v571 + v531 - LOWORD(v575[0]) + *v506 - 1;
            *(_WORD *)(v143 + 4) = v142;
            *(_WORD *)(v143 + 6) = v144;
            v138 = v555 + v144 * v142;
            v555 = v138;
            if ( v139 >= *v538 )
              break;
            v140 += 4;
            ++v139;
            v137 = *v524;
          }
          v126 = (_DWORD *)v528;
          v121 = v498;
          v127 = v501;
          v125 = v514;
        }
      }
      ++v125;
    }
    while ( v125 != v497 );
  }
  v145 = v126[3];
  v126[8] = 0;
  if ( v145 <= 0 )
  {
    v146 = (int)sqrtf((float)v555);
    if ( v146 <= 2866 )
    {
      if ( v146 <= 1432 )
      {
        v145 = 512;
        if ( v146 >= 716 )
          v145 = 1024;
      }
      else
      {
        v145 = 2048;
      }
    }
    else
    {
      v145 = 4096;
    }
  }
  v147 = v126;
  v475 = v126[4];
  v126[7] = v145;
  v148 = sub_1654B0(48);
  v149 = v145 - v475;
  v457 = sub_1654B0(8 * (v145 - v475));
  v150 = v148 == 0;
  if ( v148 )
    v150 = v457 == 0;
  if ( v150 )
  {
    if ( v148 )
      sub_165578(v148);
    if ( v457 )
      sub_165578(v457);
    v145 = 0;
    v457 = 0;
    LOWORD(v475) = 0;
    v151 = 0;
    v152 = v147;
  }
  else
  {
    v153 = 0;
    if ( v149 >= 2 )
    {
      v154 = v149 - 1;
      v155 = (_DWORD *)(v457 + 4);
      do
      {
        *v155 = v155 + 1;
        v155 += 2;
        --v154;
      }
      while ( v154 );
      v153 = v149 - 1;
    }
    *(_DWORD *)(v148 + 12) = 1;
    *(_DWORD *)(v148 + 16) = 0;
    *(_DWORD *)v148 = v149;
    *(_DWORD *)(v148 + 4) = 0x8000 - v475;
    *(_DWORD *)(v148 + 32) = 0;
    *(_WORD *)(v148 + 42) = -1;
    *(_DWORD *)(v148 + 20) = v149;
    *(_DWORD *)(v148 + 24) = v148 + 32;
    *(_DWORD *)(v148 + 28) = v457;
    *(_DWORD *)(v457 + 8 * v153 + 4) = 0;
    *(_DWORD *)(v148 + 8) = sub_220A40(v149 - 1 + v149, v149);
    *(_WORD *)(v148 + 40) = v149;
    v151 = v148;
    *(_DWORD *)(v148 + 36) = v148 + 40;
    v152 = (_DWORD *)v528;
    *(_DWORD *)(v148 + 44) = 0;
  }
  v459 = v151;
  sub_177EE8(v152);
  v550 = v145;
  if ( v497 >= 1 )
  {
    for ( k = 0; k != v497; ++k )
    {
      v157 = v495 + 196 * k;
      v159 = (int *)(v157 + 168);
      v158 = *(_DWORD *)(v157 + 168);
      if ( v158 )
      {
        v161 = *(void **)(v157 + 148);
        v160 = (_DWORD *)(v157 + 148);
        sub_177FA4(v459, v161, v158);
        v162 = *v159;
        if ( *v159 >= 1 )
        {
          v163 = (unsigned __int16 *)(*v160 + 6);
          do
          {
            if ( *(_DWORD *)(v163 + 3) )
            {
              v164 = *v163;
              v165 = *(_DWORD *)(v528 + 32);
              if ( v165 < v163[2] + v164 )
                v165 = v163[2] + v164;
              *(_DWORD *)(v528 + 32) = v165;
            }
            v163 += 8;
            --v162;
          }
          while ( v162 );
        }
      }
    }
  }
  v166 = v528;
  v167 = *(_DWORD *)(v528 + 32);
  if ( !(*(unsigned __int8 *)(v528 + 4) << 31) )
  {
    v168 = (v167 - 1) | ((v167 - 1) >> 1) | (((v167 - 1) | ((v167 - 1) >> 1)) >> 2);
    v169 = v168 | (v168 >> 4) | ((v168 | (v168 >> 4)) >> 8);
    v167 = v169 | (v169 >> 16);
  }
  v170 = *(_DWORD *)(v528 + 28);
  v171 = v167 + 1;
  *(_DWORD *)(v528 + 32) = v171;
  *(float *)(v528 + 36) = 1.0 / (float)v170;
  *(float *)(v528 + 40) = 1.0 / (float)v171;
  v172 = sub_1654B0(v171 * v170);
  v173 = *(_QWORD *)(v528 + 28);
  *(_DWORD *)(v528 + 20) = v172;
  sub_22178C(v172, v173 * HIDWORD(v173));
  if ( v497 >= 1 )
  {
    v174 = -1.0;
    v175 = 0;
    v467 = *(_DWORD *)(v528 + 20);
    do
    {
      v176 = v495 + 196 * v175;
      v489 = (int *)(v176 + 168);
      if ( *(_DWORD *)(v176 + 168) )
      {
        v177 = *(float *)(v176 + 124);
        v178 = (_DWORD *)(v176 + 4);
        v481 = (_DWORD *)(v176 + 4);
        v482 = (_DWORD *)(v176 + 28);
        if ( v177 <= 0.0 )
        {
          v177 = -v177;
          v179 = (float)(bswap32(*(unsigned __int16 *)(*v178 + *(_DWORD *)(v176 + 20) + 18)) >> 16);
        }
        else
        {
          v179 = (float)((__int16)bswap16(*(_WORD *)(*(_DWORD *)(v176 + 28) + *v178 + 4))
                       - ((int)bswap32(*(unsigned __int16 *)(*(_DWORD *)(v176 + 28) + *v178 + 6)) >> 16));
        }
        v180 = v177 / v179;
        v181 = *(_DWORD *)(v176 + 148);
        v463 = (int *)(v176 + 148);
        v182 = *(unsigned __int8 *)(v176 + 144);
        v460 = *(_DWORD *)(v166 + 84);
        v183 = *(unsigned __int8 *)(v176 + 145);
        v184 = 0.0;
        v185 = (float)v182;
        if ( *(_BYTE *)(v176 + 144) )
          v184 = (float)(int)(1 - v182) / (float)(v185 + v185);
        v186 = 0.0;
        v545 = *(unsigned __int8 *)(v176 + 144);
        v187 = (float)v183;
        if ( *(_BYTE *)(v176 + 145) )
          v186 = (float)(int)(1 - v183) / (float)(v187 + v187);
        v480 = (int *)(v176 + 136);
        v486 = v175;
        v188 = *(_DWORD *)(v176 + 136);
        if ( v188 >= 1 )
        {
          v189 = v180 * v187;
          v190 = v180 * v185;
          v479 = (_DWORD *)(v176 + 32);
          v464 = (_DWORD *)(v176 + 128);
          v191 = 1.0 / v185;
          v478 = (_DWORD *)(v176 + 132);
          v477 = (int *)(v176 + 140);
          v192 = 0;
          v193 = 1.0 / v187;
          v476 = *(_DWORD *)(v176 + 148);
          v539 = *(unsigned __int8 *)(v176 + 145);
          v458 = 4 - 4 * v182;
          v462 = 1 - v183;
          v461 = 1 - v182;
          v496 = v495 + 196 * v175;
          v194 = -(float)(v180 * v187);
          do
          {
            v195 = v181 + 16 * v192;
            if ( *(_DWORD *)(v195 + 12) )
            {
              v196 = *(_WORD *)(v195 + 4);
              v515 = (_WORD *)(v195 + 4);
              if ( v196 )
              {
                v197 = *(_WORD *)(v195 + 6);
                v511 = (_WORD *)(v195 + 6);
                if ( v197 )
                {
                  v198 = v181 + 16 * v192;
                  v492 = v192;
                  if ( *v478 )
                    v199 = *(_DWORD *)(*v478 + 4 * v192);
                  else
                    v199 = *v464 + v192;
                  v491 = *v477;
                  v200 = sub_177BE0(v176, v199, v181);
                  v201 = *(_WORD *)(v198 + 8);
                  *v515 = v196 - v475;
                  *v511 = v197 - v475;
                  *(_WORD *)(v198 + 8) = v201 + v475;
                  *(_WORD *)(v198 + 10) += v475;
                  v202 = bswap32(*(unsigned __int16 *)(*v482 + *v481 + 34) << 16);
                  v203 = 4 * v202 - 4;
                  if ( v202 > v200 )
                    v203 = 4 * v200;
                  v490 = *(unsigned __int16 *)(*v479 + *v481 + v203);
                  sub_177D7C(v176, v200, &v569, &v568, v567, v566);
                  v499 = (unsigned __int16 *)(v198 + 8);
                  v556 = *(unsigned __int16 *)(v198 + 8);
                  v204 = *(unsigned __int16 *)(v198 + 10);
                  v205 = (unsigned __int16)*v511;
                  v502 = (unsigned __int16 *)(v198 + 10);
                  v493 = (unsigned __int16)*v515;
                  v518 = sub_179E44(v176, v200, &v570);
                  v507 = v493 - v545;
                  sub_177D7C(v496, v200, &v572, &v571, 0, 0);
                  v473 = v493 - v545 + 1;
                  if ( v493 - v545 != -1 )
                  {
                    v485 = v205 - v539;
                    v483 = v205 - v539 + 1;
                    if ( v205 - v539 != -1 )
                    {
                      v206 = v571;
                      v207 = v570;
                      v471 = v572;
                      LODWORD(v573) = 0;
                      if ( v518 >= 1 )
                      {
                        v208 = v467 + v556 + v550 * v204;
                        v209 = v518;
                        v210 = 0;
                        v487 = v208;
                        v211 = (unsigned __int8 *)(v570 + 12);
                        do
                        {
                          v213 = *v211;
                          v211 += 14;
                          v212 = v213;
                          v214 = v210;
                          v215 = v210 + 1;
                          if ( v213 == 1 )
                            ++v210;
                          --v209;
                        }
                        while ( v209 );
                        if ( v210 )
                        {
                          v532 = sub_1654B0(4 * v210);
                          if ( v532 )
                          {
                            v469 = v214;
                            v466 = v206;
                            v503 = v207 + 6;
                            v216 = 0;
                            v217 = 1;
                            v218 = 0;
                            v557 = 0;
                            do
                            {
                              if ( v216 << 31 )
                              {
                                v557 = sub_1654B0(8 * LODWORD(v573));
                                if ( !v557 )
                                {
                                  sub_165578(0);
                                  sub_165578(v532);
                                  goto LABEL_406;
                                }
                              }
                              v525 = v217;
                              v219 = v518;
                              v220 = (__int16 *)v503;
                              v221 = -1;
                              LODWORD(v573) = 0;
                              do
                              {
                                switch ( *((_BYTE *)v220 + 6) )
                                {
                                  case 1:
                                    if ( v221 >= 0 )
                                      *(_DWORD *)(v532 + 4 * v221) = LODWORD(v573) - v218;
                                    ++v221;
                                    v218 = LODWORD(v573);
                                    v222 = (float)*(v220 - 2);
                                    v223 = *(v220 - 3);
                                    ++LODWORD(v573);
                                    v224 = (float)v223;
                                    if ( v557 )
                                    {
                                      v225 = (float *)(v557 + 8 * v218);
                                      goto LABEL_274;
                                    }
                                    break;
                                  case 2:
                                    v222 = (float)*(v220 - 2);
                                    v226 = LODWORD(v573);
                                    v224 = (float)*(v220 - 3);
                                    ++LODWORD(v573);
                                    if ( v557 )
                                    {
                                      v225 = (float *)(v557 + 8 * v226);
LABEL_274:
                                      *v225 = v224;
                                      v225[1] = v222;
                                    }
                                    break;
                                  case 3:
                                    sub_17A4CE(v557, &v573, 0, *v220);
                                    break;
                                  case 4:
                                    sub_17A5BE(v557, &v573, 0, v220[2]);
                                    break;
                                  default:
                                    break;
                                }
                                --v219;
                                v220 += 7;
                              }
                              while ( v219 );
                              v217 = 0;
                              *(_DWORD *)(v532 + 4 * v221) = LODWORD(v573) - v218;
                              v216 = 1;
                            }
                            while ( v525 << 31 );
                            v227 = v557;
                            v228 = v469;
                            if ( v557 )
                            {
                              if ( v212 == 1 )
                                v228 = v215;
                              v229 = 0;
                              v230 = 0;
                              do
                              {
                                v231 = *(_DWORD *)(v532 + 4 * v230++);
                                v229 += v231;
                              }
                              while ( v228 != v230 );
                              v519 = sub_1654B0(20 * v229 + 20);
                              if ( v519 )
                              {
                                v232 = 0;
                                v233 = 0;
                                v234 = 0;
                                do
                                {
                                  v235 = *(_DWORD *)(v532 + 4 * v233);
                                  if ( v235 >= 1 )
                                  {
                                    v236 = (float *)(v557 + 4 + 8 * v234);
                                    v237 = *(_DWORD *)(v532 + 4 * v233);
                                    v238 = v557 + 8 * v234;
                                    v239 = v235 - 1;
                                    v240 = *(float *)(v238 + 8 * (v235 - 1) + 4);
                                    v241 = 0;
                                    do
                                    {
                                      v242 = *v236;
                                      v243 = v241;
                                      if ( v240 != *v236 )
                                      {
                                        v244 = v239;
                                        if ( v240 <= v242 )
                                          v239 = v243;
                                        else
                                          v244 = v243;
                                        v245 = (float *)(v238 + 8 * v239);
                                        v246 = (float *)(v238 + 8 * v244);
                                        v247 = v245[1];
                                        v248 = (float)(*v245 * v190) + 0.0;
                                        v249 = v240 > v242;
                                        v250 = *v246;
                                        v251 = v246[1];
                                        v252 = 5 * v232++;
                                        v253 = v519 + 4 * v252;
                                        *(_DWORD *)(v253 + 16) = v249;
                                        v237 = *(_DWORD *)(v532 + 4 * v233);
                                        *(float *)v253 = v248;
                                        *(float *)(v253 + 4) = (float)(v247 * v194) + 0.0;
                                        *(float *)(v253 + 8) = (float)(v250 * v190) + 0.0;
                                        *(float *)(v253 + 12) = (float)(v251 * v194) + 0.0;
                                      }
                                      v240 = v242;
                                      v241 = v243 + 1;
                                      v236 += 2;
                                      v239 = v243;
                                    }
                                    while ( v243 + 1 < v237 );
                                  }
                                  ++v233;
                                  v234 += v235;
                                }
                                while ( v233 != v210 );
                                sub_17A718(v519, v232);
                                if ( v232 >= 2 )
                                {
                                  v254 = 1;
                                  v255 = v519 + 20;
                                  do
                                  {
                                    v256 = v519 + 20 * v254;
                                    v257 = *(double *)(v256 + 8);
                                    v258 = *(_DWORD *)(v256 + 16);
                                    v259 = *(_DWORD *)v256;
                                    v260 = *(float *)(v256 + 4);
                                    v261 = v254;
                                    v574 = v258;
                                    v262 = v255;
                                    v573 = v257;
                                    while ( v260 < *(float *)(v262 - 16) )
                                    {
                                      --v261;
                                      v263 = *(_QWORD *)(v262 - 12);
                                      *(_QWORD *)v262 = *(_QWORD *)(v262 - 20);
                                      *(_QWORD *)(v262 + 8) = v263;
                                      *(_DWORD *)(v262 + 16) = *(_DWORD *)(v262 - 4);
                                      v262 -= 20;
                                      if ( v261 + 1 <= 1 )
                                      {
                                        v261 = 0;
                                        break;
                                      }
                                    }
                                    if ( v254 != v261 )
                                    {
                                      v264 = v573;
                                      v265 = v519 + 20 * v261;
                                      v266 = v574;
                                      *(_DWORD *)v265 = v259;
                                      *(float *)(v265 + 4) = v260;
                                      *(double *)(v265 + 8) = v264;
                                      *(_DWORD *)(v265 + 16) = v266;
                                    }
                                    ++v254;
                                    v255 += 20;
                                  }
                                  while ( v254 != v232 );
                                }
                                v575[0] = 0;
                                if ( v507 < 64 )
                                  v267 = &v573;
                                else
                                  v267 = (double *)sub_1654B0(8 * v473 + 4);
                                v268 = v466;
                                v269 = (_BYTE *)v487;
                                *(float *)(v519 + 20 * v232 + 4) = (float)(v483 + v466) + 1.0;
                                if ( v485 <= 0x7FFFFFFE )
                                {
                                  v270 = 0;
                                  v271 = 0;
                                  v272 = 0;
                                  v273 = v519;
                                  v504 = (int)v267 + 4 * v473;
                                  v274 = (float)v471;
                                  v468 = v504 + 4;
                                  v275 = (float)v473;
                                  v452 = v189;
                                  v465 = v458 + 4 * v493;
                                  v453 = v193;
                                  v484 = 0;
                                  v454 = v186;
                                  v455 = v184;
                                  v456 = v180;
                                  v526 = 0;
                                  while ( 1 )
                                  {
                                    v494 = v268;
                                    sub_22178C((int)v267, 4 * v473);
                                    sub_22178C(v504, 4 * v473 + 4);
                                    v276 = (float)v494;
                                    if ( v270 )
                                    {
                                      v277 = v575;
                                      do
                                      {
                                        if ( *(float *)(v270 + 24) <= v276 )
                                        {
                                          *(_DWORD *)(v270 + 16) = 0;
                                          *v277 = *(_DWORD *)v270;
                                          *(_DWORD *)v270 = v526;
                                          v526 = v270;
                                        }
                                        else
                                        {
                                          v277 = (int *)v270;
                                        }
                                        v270 = *v277;
                                      }
                                      while ( *v277 );
                                    }
                                    v278 = v276 + 1.0;
                                    v279 = v466;
                                    v488 = v269;
                                    if ( v466 )
                                      v279 = 1;
                                    v280 = *(float *)(v273 + 4);
                                    if ( v280 <= v278 )
                                      break;
                                    v281 = v526;
LABEL_318:
                                    v470 = v273;
                                    v472 = v272;
                                    v282 = (float *)v575[0];
                                    v526 = v281;
                                    if ( v575[0] )
                                    {
                                      v283 = v271;
                                      while ( 1 )
                                      {
                                        v284 = v282[2];
                                        v285 = v282[1];
                                        if ( v284 == 0.0 )
                                        {
                                          if ( v285 < v275 )
                                          {
                                            if ( v285 >= 0.0 )
                                            {
                                              sub_17A8AA(v267, (int)v285, v282);
                                              v287 = (int)v285 + 1;
                                              v286 = (char *)v267 + 4 * v473;
                                            }
                                            else
                                            {
                                              v286 = (char *)v267 + 4 * v473;
                                              v287 = 0;
                                            }
                                            sub_17A8AA(v286, v287, v282);
                                            v271 = v283;
                                          }
                                          goto LABEL_357;
                                        }
                                        v288 = v282[5];
                                        v289 = v282[6];
                                        v290 = v282[1];
                                        v291 = v289 - v276;
                                        v292 = v284 + v285;
                                        if ( v288 > v276 )
                                          v290 = v285 + (float)(v284 * (float)(v288 - v276));
                                        v293 = v276 + 1.0;
                                        if ( v289 < v278 )
                                          v293 = v282[6];
                                        v294 = v289 < v278;
                                        v295 = v284 + v285;
                                        v296 = v285 + (float)(v284 * v291);
                                        v297 = (float)v494;
                                        if ( v288 > v276 )
                                          v297 = v282[5];
                                        if ( v294 )
                                          v295 = v296;
                                        if ( v290 >= 0.0 && v290 < v275 )
                                        {
                                          v308 = (int)v295;
                                          v309 = (int)v290;
                                          if ( SLODWORD(v290) == SLODWORD(v295) )
                                          {
                                            v310 = v293 - v297;
                                            *((float *)v267 + v309) = *((float *)v267 + v309)
                                                                    + (float)((float)((float)((float)((float)((float)(v290 - (float)(int)v290) + (float)(v295 - (float)(int)v290)) * -0.5)
                                                                                            + 1.0)
                                                                                    * v282[4])
                                                                            * v310);
                                            *(float *)(v468 + 4 * v309) = *(float *)(v468 + 4 * v309)
                                                                        + (float)(v282[4] * v310);
                                          }
                                          else
                                          {
                                            v311 = v282[3];
                                            if ( v290 <= v295 )
                                            {
                                              v312 = (int)v295;
                                              v314 = v295;
                                              v308 = (int)v290;
                                              v295 = v290;
                                              v292 = v282[1];
                                            }
                                            else
                                            {
                                              v312 = (int)v290;
                                              v313 = v297 - v276;
                                              v311 = -v311;
                                              v297 = v278 - (float)(v293 - v276);
                                              v293 = v278 - v313;
                                              v314 = v290;
                                            }
                                            v315 = v308 + 1;
                                            v316 = (float)(v295 - (float)v308) + 1.0;
                                            v317 = v282[4];
                                            v318 = v276 + (float)((float)((float)(v308 + 1) - v292) * v311);
                                            v319 = 1.0 - (float)(v316 * 0.5);
                                            v320 = v317 * (float)(v318 - v297);
                                            *((float *)v267 + v308) = *((float *)v267 + v308) + (float)(v320 * v319);
                                            if ( v312 > v308 + 1 )
                                            {
                                              v321 = (float *)v267 + v308 + 1;
                                              v322 = ~v308 + v312;
                                              do
                                              {
                                                v323 = (float)((float)(v311 * v317) * 0.5) + v320;
                                                v320 = (float)(v311 * v317) + v320;
                                                --v322;
                                                *v321 = v323 + *v321;
                                                ++v321;
                                              }
                                              while ( v322 );
                                            }
                                            *((float *)v267 + v312) = (float)(v320
                                                                            + (float)((float)(v317
                                                                                            * (float)((float)((float)((float)(v314 - (float)v312) + 0.0) * -0.5) + 1.0))
                                                                                    * (float)(v293
                                                                                            - (float)(v318 + (float)(v311 * (float)(v312 - v315))))))
                                                                    + *((float *)v267 + v312);
                                            *(float *)(v468 + 4 * v312) = *(float *)(v468 + 4 * v312)
                                                                        + (float)(v317 * (float)(v293 - v297));
                                          }
                                          goto LABEL_357;
                                        }
                                        if ( (unsigned int)v507 <= 0x7FFFFFFE )
                                          break;
LABEL_357:
                                        v282 = *(float **)v282;
                                        if ( !v282 )
                                          goto LABEL_368;
                                      }
                                      v298 = 0;
                                      while ( 2 )
                                      {
                                        v299 = v298++;
                                        v300 = (float)v299;
                                        v301 = (float)v298;
                                        if ( v285 < (float)v299 && v292 > v301 || v292 < v300 && v285 > v301 )
                                        {
                                          sub_17A8AA(v267, v299, v282);
                                          v302 = v267;
                                          v303 = v299;
                                          v304 = v282;
                                          goto LABEL_346;
                                        }
                                        if ( v285 < v300 && v292 > v300 || v292 < v300 && v285 > v300 )
                                        {
                                          v302 = v267;
                                          v303 = v299;
                                          v304 = v282;
                                          goto LABEL_346;
                                        }
                                        if ( (v285 >= v301 || v292 <= v301) && (v292 >= v301 || v285 <= v301) )
                                        {
                                          v305 = v267;
                                          v306 = v299;
                                          v307 = v282;
                                        }
                                        else
                                        {
                                          v302 = v267;
                                          v303 = v299;
                                          v304 = v282;
LABEL_346:
                                          sub_17A8AA(v302, v303, v304);
                                          v305 = v267;
                                          v306 = v299;
                                          v307 = v282;
                                        }
                                        sub_17A8AA(v305, v306, v307);
                                        v271 = v283;
                                        if ( v473 == v298 )
                                          goto LABEL_357;
                                        continue;
                                      }
                                    }
LABEL_368:
                                    if ( (unsigned int)v507 <= 0x7FFFFFFE )
                                    {
                                      v324 = 0.0;
                                      v325 = (float *)v267;
                                      v326 = v488;
                                      v327 = v473;
                                      do
                                      {
                                        v324 = v324 + *(float *)((char *)v325 + v465);
                                        v328 = *v325++;
                                        v329 = (int)(float)((float)(fabsf(v328 + v324) * 255.0) + 0.5);
                                        if ( v329 >= 255 )
                                          LOBYTE(v329) = -1;
                                        *v326++ = v329;
                                        --v327;
                                      }
                                      while ( v327 );
                                    }
                                    v270 = v575[0];
                                    v273 = v470;
                                    v330 = (float *)v575[0];
                                    if ( v575[0] )
                                    {
                                      do
                                      {
                                        v331 = *(float **)v330;
                                        v15 = *(_DWORD *)v330 == 0;
                                        v330[1] = v330[2] + v330[1];
                                        v330 = v331;
                                      }
                                      while ( !v15 );
                                    }
                                    v174 = -1.0;
                                    v268 = v494 + 1;
                                    v269 = &v488[v550];
                                    v272 = v472;
                                    v15 = v484++ == v485;
                                    if ( v15 )
                                    {
                                      v180 = v456;
                                      v184 = v455;
                                      v186 = v454;
                                      v193 = v453;
                                      v189 = v452;
                                      if ( v472 )
                                      {
                                        do
                                        {
                                          v341 = (_DWORD *)*v272;
                                          sub_165578((int)v272);
                                          v272 = v341;
                                        }
                                        while ( v341 );
                                      }
                                      goto LABEL_402;
                                    }
                                  }
                                  v281 = v526;
                                  v332 = v279 & (v484 == 0);
                                  while ( 2 )
                                  {
                                    if ( v280 != *(float *)(v273 + 12) )
                                    {
                                      if ( v281 )
                                      {
                                        v333 = *(_DWORD *)v281;
                                        goto LABEL_388;
                                      }
                                      if ( v271 )
                                      {
                                        --v271;
                                        goto LABEL_387;
                                      }
                                      v334 = (_DWORD *)sub_1654B0(56004);
                                      if ( v334 )
                                      {
                                        *v334 = v272;
                                        v271 = 1999;
                                        v272 = v334;
LABEL_387:
                                        v281 = (int)&v272[7 * v271 + 1];
                                        v333 = 0;
                                      }
                                      else
                                      {
                                        v333 = 0;
                                        v271 = 0;
                                        v281 = 0;
                                      }
LABEL_388:
                                      if ( v281 )
                                      {
                                        v335 = *(float *)(v273 + 4);
                                        v336 = 0.0;
                                        v337 = *(float *)(v273 + 12);
                                        v338 = (float)(*(float *)(v273 + 8) - *(float *)v273) / (float)(v337 - v335);
                                        v339 = *(float *)v273 + (float)(v338 * (float)(v276 - v335));
                                        v340 = 1.0;
                                        if ( !*(_DWORD *)(v273 + 16) )
                                          v340 = v174;
                                        if ( v338 != 0.0 )
                                          v336 = 1.0 / v338;
                                        *(_DWORD *)v281 = 0;
                                        *(float *)(v281 + 8) = v338;
                                        *(float *)(v281 + 12) = v336;
                                        *(float *)(v281 + 16) = v340;
                                        *(float *)(v281 + 20) = v335;
                                        *(float *)(v281 + 24) = v337;
                                        *(float *)(v281 + 4) = v339 - v274;
                                        if ( ((v337 < v276) & v332) == 1 )
                                          *(float *)(v281 + 24) = v276;
                                        *(_DWORD *)v281 = v575[0];
                                        v575[0] = v281;
                                      }
                                      v281 = v333;
                                    }
                                    v280 = *(float *)(v273 + 24);
                                    v273 += 20;
                                    if ( v280 > v278 )
                                      goto LABEL_318;
                                    continue;
                                  }
                                }
LABEL_402:
                                v227 = v557;
                                if ( v267 != &v573 )
                                  sub_165578((int)v267);
                                sub_165578(v519);
                              }
                              sub_165578(v532);
                              sub_165578(v227);
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_406:
                  sub_165578(v570);
                  v342 = v539;
                  v343 = v499;
                  if ( v545 >= 2 )
                  {
                    v344 = *v499;
                    v345 = (unsigned __int16)*v511;
                    v346 = (unsigned __int16)*v515;
                    v347 = *v502;
                    v573 = 0.0;
                    if ( v345 )
                    {
                      v348 = 0;
                      v349 = v344 + v467 + v550 * v347;
                      v558 = v461 + v346;
                      do
                      {
                        _memset_chk(&v573, 0, v545, 8);
                        v533 = v348;
                        switch ( v545 )
                        {
                          case 2u:
                            if ( v346 < v545 )
                              goto LABEL_427;
                            v350 = v461 + v346;
                            v351 = 0;
                            v352 = 0;
                            do
                            {
                              v353 = *(unsigned __int8 *)(v349 + v352);
                              v354 = *((unsigned __int8 *)&v573 + (v352 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v352 + 2) & 7)) = v353;
                              v351 += v353 - v354;
                              *(_BYTE *)(v349 + v352++) = v351 >> 1;
                            }
                            while ( v558 != v352 );
                            break;
                          case 3u:
                            if ( v346 < v545 )
                              goto LABEL_427;
                            v350 = v461 + v346;
                            v351 = 0;
                            v360 = 0;
                            do
                            {
                              v361 = *(unsigned __int8 *)(v349 + v360);
                              v351 += v361 - *((unsigned __int8 *)&v573 + (v360 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v360 + 3) & 7)) = v361;
                              *(_BYTE *)(v349 + v360++) = v351 / 3;
                            }
                            while ( v558 != v360 );
                            break;
                          case 4u:
                            if ( v346 < v545 )
                              goto LABEL_427;
                            v350 = v461 + v346;
                            v351 = 0;
                            v355 = 0;
                            do
                            {
                              v356 = *(unsigned __int8 *)(v349 + v355);
                              v357 = *((unsigned __int8 *)&v573 + (v355 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v355 + 4) & 7)) = v356;
                              v351 += v356 - v357;
                              *(_BYTE *)(v349 + v355++) = v351 >> 2;
                            }
                            while ( v558 != v355 );
                            break;
                          case 5u:
                            if ( v346 < v545 )
                              goto LABEL_427;
                            v350 = v461 + v346;
                            v351 = 0;
                            v358 = 0;
                            do
                            {
                              v359 = *(unsigned __int8 *)(v349 + v358);
                              v351 += v359 - *((unsigned __int8 *)&v573 + (v358 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v358 + 5) & 7)) = v359;
                              *(_BYTE *)(v349 + v358++) = v351 / 5;
                            }
                            while ( v558 != v358 );
                            break;
                          default:
                            if ( v346 >= v545 )
                            {
                              v351 = 0;
                              v362 = 0;
                              do
                              {
                                v363 = *(unsigned __int8 *)(v349 + v362);
                                v364 = *((unsigned __int8 *)&v573 + (v362 & 7));
                                *((_BYTE *)&v573 + (((_BYTE)v545 + (_BYTE)v362) & 7)) = v363;
                                v351 += v363 - v364;
                                *(_BYTE *)(v349 + v362++) = sub_220A6C(v351, v545);
                              }
                              while ( v558 != v362 );
                              v350 = v461 + v346;
                            }
                            else
                            {
LABEL_427:
                              v350 = 0;
                              v351 = 0;
                            }
                            break;
                        }
                        if ( v350 < (int)v346 )
                        {
                          do
                          {
                            v351 -= *((unsigned __int8 *)&v573 + (v350 & 7));
                            *(_BYTE *)(v349 + v350++) = sub_220A6C(v351, v545);
                          }
                          while ( v346 != v350 );
                        }
                        v342 = v539;
                        ++v348;
                        v349 += v550;
                      }
                      while ( v533 + 1 != v345 );
                    }
                    v343 = v499;
                  }
                  v365 = v550;
                  if ( v342 >= 2 )
                  {
                    v366 = *v343;
                    v367 = (unsigned __int16)*v511;
                    v368 = (unsigned __int16)*v515;
                    v527 = v368;
                    v369 = *v502;
                    v573 = 0.0;
                    if ( v368 )
                    {
                      v370 = 0;
                      v559 = v367;
                      v371 = v366 + v467 + v550 * v369;
                      v372 = v462 + v367;
                      v520 = v462 + v367;
                      do
                      {
                        _memset_chk(&v573, 0, v342, 8);
                        v534 = v370;
                        v373 = v559;
                        switch ( v342 )
                        {
                          case 2u:
                            if ( v559 < v342 )
                              goto LABEL_457;
                            v374 = 0;
                            v375 = 0;
                            v376 = 0;
                            do
                            {
                              v377 = *(unsigned __int8 *)(v371 + v374);
                              v378 = *((unsigned __int8 *)&v573 + (v376 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v376++ + 2) & 7)) = v377;
                              v375 += v377 - v378;
                              *(_BYTE *)(v371 + v374) = v375 >> 1;
                              v374 += v365;
                            }
                            while ( v372 != v376 );
                            goto LABEL_455;
                          case 3u:
                            if ( v559 < v342 )
                              goto LABEL_457;
                            v387 = 0;
                            v375 = 0;
                            v388 = 0;
                            do
                            {
                              v389 = *(unsigned __int8 *)(v371 + v387);
                              v375 += v389 - *((unsigned __int8 *)&v573 + (v388 & 7));
                              v390 = (char *)&v573 + (((_BYTE)v388++ + 3) & 7);
                              *v390 = v389;
                              *(_BYTE *)(v371 + v387) = v375 / 3;
                              v387 += v365;
                            }
                            while ( v372 != v388 );
                            goto LABEL_455;
                          case 4u:
                            if ( v559 < v342 )
                              goto LABEL_457;
                            v379 = 0;
                            v375 = 0;
                            v380 = 0;
                            do
                            {
                              v381 = *(unsigned __int8 *)(v371 + v379);
                              v382 = *((unsigned __int8 *)&v573 + (v380 & 7));
                              *((_BYTE *)&v573 + (((_BYTE)v380++ + 4) & 7)) = v381;
                              v375 += v381 - v382;
                              *(_BYTE *)(v371 + v379) = v375 >> 2;
                              v379 += v365;
                            }
                            while ( v372 != v380 );
                            goto LABEL_455;
                          case 5u:
                            if ( v559 < v342 )
                              goto LABEL_457;
                            v383 = 0;
                            v375 = 0;
                            v384 = 0;
                            do
                            {
                              v385 = *(unsigned __int8 *)(v371 + v383);
                              v375 += v385 - *((unsigned __int8 *)&v573 + (v384 & 7));
                              v386 = (char *)&v573 + (((_BYTE)v384++ + 5) & 7);
                              *v386 = v385;
                              *(_BYTE *)(v371 + v383) = v375 / 5;
                              v383 += v365;
                            }
                            while ( v372 != v384 );
LABEL_455:
                            v391 = v372;
                            break;
                          default:
                            v373 = v559;
                            if ( v559 >= v342 )
                            {
                              v393 = 0;
                              v375 = 0;
                              v394 = 0;
                              do
                              {
                                v395 = *(unsigned __int8 *)(v371 + v393);
                                v396 = *((unsigned __int8 *)&v573 + (v394 & 7));
                                *((_BYTE *)&v573 + (((_BYTE)v539 + (_BYTE)v394) & 7)) = v395;
                                v375 += v395 - v396;
                                *(_BYTE *)(v371 + v393) = sub_220A6C(v375, v539);
                                ++v394;
                                v393 += v550;
                              }
                              while ( v372 != v394 );
                              v391 = v372;
                              v365 = v550;
                              v373 = v559;
                            }
                            else
                            {
LABEL_457:
                              v391 = 0;
                              v375 = 0;
                            }
                            break;
                        }
                        v342 = v539;
                        if ( v391 < v373 )
                        {
                          v392 = v365 * v391;
                          do
                          {
                            v375 -= *((unsigned __int8 *)&v573 + (v391++ & 7));
                            *(_BYTE *)(v371 + v392) = sub_220A6C(v375, v539);
                            v392 += v365;
                          }
                          while ( v559 != v391 );
                        }
                        ++v371;
                        v372 = v520;
                        v370 = v534 + 1;
                      }
                      while ( v534 + 1 != v527 );
                    }
                    v343 = v499;
                  }
                  v192 = v492;
                  v175 = v486;
                  v176 = v496;
                  v397 = (unsigned __int16)*v515;
                  v398 = v184 + (float)((float)v569 * v191);
                  v399 = (unsigned __int16)*v511;
                  v400 = *v343;
                  v401 = (float)(v568 + v399);
                  v402 = v186 + (float)((float)v568 * v193);
                  v403 = (float)(v569 + v397);
                  v404 = *v502;
                  *(_WORD *)(v491 + 28 * v492) = *v343;
                  v405 = v491 + 28 * v492;
                  *(_WORD *)(v405 + 6) = v399 + v404;
                  *(_WORD *)(v405 + 2) = v404;
                  *(_WORD *)(v405 + 4) = v400 + v397;
                  *(float *)(v405 + 8) = v398;
                  *(float *)(v405 + 12) = v402;
                  *(float *)(v405 + 16) = v180 * (float)(__int16)(bswap32(v490) >> 16);
                  *(float *)(v405 + 24) = v186 + (float)(v401 * v193);
                  *(float *)(v405 + 20) = v184 + (float)(v403 * v191);
                  v188 = *v480;
                  v181 = v476;
                }
              }
            }
            v166 = v528;
            ++v192;
          }
          while ( v192 < v188 );
        }
        v406 = *(float *)(v460 + 116 * v175 + 68);
        if ( v406 != 1.0 )
        {
          for ( m = 0; m != 256; ++m )
          {
            v408 = (unsigned int)(float)(v406 * (float)m);
            if ( v408 >= 0xFF )
              LOBYTE(v408) = -1;
            *((_BYTE *)&v573 + m) = v408;
          }
          v409 = *v489;
          if ( *v489 >= 1 )
          {
            v410 = 0;
            v411 = *v463;
            do
            {
              if ( *(_DWORD *)(v411 + 12) )
              {
                v412 = *(unsigned __int16 *)(v411 + 6);
                if ( *(_WORD *)(v411 + 6) )
                {
                  v413 = *v474;
                  v414 = *(unsigned __int16 *)(v411 + 4);
                  v415 = *(_DWORD *)(v166 + 20)
                       + *(unsigned __int16 *)(v411 + 8)
                       + *v474 * *(unsigned __int16 *)(v411 + 10);
                  do
                  {
                    if ( v414 )
                    {
                      for ( n = 0; n != v414; ++n )
                        *(_BYTE *)(v415 + n) = *((_BYTE *)&v573 + *(unsigned __int8 *)(v415 + n));
                    }
                    v415 += v413;
                  }
                  while ( v412-- > 1 );
                  v166 = v528;
                  v409 = *v489;
                }
              }
              ++v410;
              v411 += 16;
            }
            while ( v410 < v409 );
          }
          v175 = v486;
        }
        *v463 = 0;
      }
      ++v175;
    }
    while ( v175 != v497 );
  }
  sub_165578(v457);
  sub_165578(v459);
  if ( v565 )
  {
    v563 = 0;
    v564 = 0;
    sub_165578(v565);
    v565 = 0;
  }
  if ( v497 >= 1 )
  {
    v418 = 0;
    do
    {
      v419 = (_DWORD *)(v495 + 196 * v418);
      v540 = v418;
      v420 = v419[42];
      v560 = v419 + 42;
      if ( v420 )
      {
        v421 = 1.0;
        v422 = 1.0;
        v423 = v419[1] + v419[7];
        v424 = *(_DWORD *)(v528 + 84) + 116 * v540;
        v425 = *(unsigned __int16 *)(v423 + 6);
        v426 = (__int16)bswap16(v425);
        v427 = (__int16)bswap16(*(_WORD *)(v423 + 4));
        if ( v426 < 1 )
          v421 = -1.0;
        if ( v427 < 1 )
          v422 = -1.0;
        v428 = *(_DWORD *)(v424 + 112);
        if ( *(_BYTE *)(v424 + 60) )
        {
          v429 = *(float *)(v428 + 72);
        }
        else
        {
          v430 = *(float *)(v424 + 16);
          sub_1785E0(*(_DWORD *)(v424 + 112));
          *(_DWORD *)(v428 + 60) = v424;
          v431 = v430 / (float)(v427 - ((int)bswap32(v425) >> 16));
          v432 = (float)(int)(float)(v421 + (float)((float)v426 * v431));
          v429 = (float)(int)(float)(v422 + (float)((float)v427 * v431));
          *(float *)(v428 + 76) = v432;
          *(float *)(v428 + 72) = v429;
          v433 = *(_DWORD *)(v424 + 16);
          v420 = *v560;
          *(_DWORD *)(v428 + 56) = v528;
          *(_DWORD *)(v428 + 16) = v433;
        }
        v434 = *(float *)(v424 + 40);
        v435 = *(float *)(v424 + 44);
        ++*(_WORD *)(v428 + 64);
        if ( v420 >= 1 )
        {
          v436 = v419 + 38;
          v437 = (float *)(v424 + 52);
          v438 = v419 + 48;
          v546 = (_BYTE *)(v424 + 28);
          v439 = (float *)(v424 + 56);
          v440 = 0;
          v441 = 12;
          v551 = v439;
          v442 = v435 + (float)(int)(float)(v429 + 0.5);
          do
          {
            v443 = (float *)(*v436 + v441);
            v444 = v443[1];
            v445 = v444;
            if ( v444 > *v551 )
              v445 = *v551;
            if ( v444 < *v437 )
              v445 = *v437;
            v446 = v434;
            if ( v444 != v445 )
            {
              v447 = (float)(v445 - v444) * 0.5;
              v448 = (float)(int)v447;
              if ( !*v546 )
                v448 = v447;
              v446 = v434 + v448;
            }
            sub_178290(
              v428,
              (unsigned __int16)*(_DWORD *)(*v438 + 4 * v440),
              COERCE_INT(v446 + (float)(*(v443 - 1) + 0.0)),
              COERCE_INT(v442 + (float)(*v443 + 0.0)),
              v446 + (float)(v443[2] + 0.0),
              v442 + (float)(v443[3] + 0.0),
              (float)(1.0 / (float)*(int *)(v528 + 28)) * (float)*((unsigned __int16 *)v443 - 6),
              (float)(1.0 / (float)*(int *)(v528 + 32)) * (float)*((unsigned __int16 *)v443 - 5),
              (float)(1.0 / (float)*(int *)(v528 + 28)) * (float)*((unsigned __int16 *)v443 - 4),
              (float)(1.0 / (float)*(int *)(v528 + 32)) * (float)*((unsigned __int16 *)v443 - 3),
              v445);
            v441 += 28;
            ++v440;
          }
          while ( v440 < *v560 );
        }
      }
      v418 = v540 + 1;
    }
    while ( v540 + 1 != v497 );
    v166 = v528;
    v449 = (int *)(v495 + 192);
    do
    {
      if ( *v449 )
        sub_165578(*v449);
      v450 = *(v449 - 3);
      if ( v450 )
        sub_165578(v450);
      v449 += 49;
      --v497;
    }
    while ( v497 );
  }
  sub_1783C0(v166);
  if ( v562 )
    sub_165578(v562);
  if ( v565 )
    sub_165578(v565);
  v73 = 1;
LABEL_524:
  if ( v495 )
    sub_165578(v495);
  return v73;
}


// ======================================================================
