// ADDR: 0x9ea30
// SYMBOL: sub_9EA30
int __fastcall sub_9EA30(int a1, char *s, int a3, int a4, int a5)
{
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r11
  char *v11; // r2
  _DWORD *v12; // r4
  unsigned int v13; // r8
  __int16 v14; // r12
  unsigned int v15; // r0
  unsigned int v16; // t1
  int v17; // r5
  unsigned int v18; // r3
  unsigned int v19; // r6
  __int16 v20; // r3
  int v21; // r3
  int v22; // r6
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r5

  v7 = (unsigned __int64)(1717986919LL * (int)(strlen(s) + 4)) >> 32;
  v8 = sub_885E4(4 * ((v7 >> 1) + (v7 >> 31)));
  v9 = (unsigned __int8)*s;
  v10 = v8;
  if ( *s )
  {
    v11 = s + 2;
    v12 = (_DWORD *)v8;
    do
    {
      v13 = (unsigned __int8)*(v11 - 1);
      v14 = -35;
      v16 = (unsigned __int8)*v11;
      v11 += 5;
      v15 = v16;
      v17 = -35;
      v18 = (unsigned __int8)*(v11 - 3);
      v19 = (unsigned __int8)*(v11 - 4);
      if ( v18 > 0x5B )
        v14 = -36;
      v20 = v18 + v14;
      if ( v19 > 0x5B )
        v17 = -36;
      v21 = 85 * v20 + v19 + v17;
      v22 = -35;
      if ( v15 > 0x5B )
        v22 = -36;
      v23 = v15 + v22 + 85 * v21;
      v24 = -35;
      if ( v13 > 0x5B )
        v24 = -36;
      v25 = v24 + v13 + 85 * v23;
      v26 = -35;
      if ( v9 > 0x5B )
        v26 = -36;
      *v12++ = v9 + v26 + 85 * v25;
      v9 = (unsigned __int8)*(v11 - 2);
    }
    while ( *(v11 - 2) );
  }
  v27 = sub_9EC48(a1, v10);
  sub_88614(v10);
  return v27;
}


// ======================================================================
// ADDR: 0x9f330
// SYMBOL: sub_9F330
int __fastcall sub_9F330(int a1)
{
  int *v1; // r9
  __int16 v2; // r2
  __int16 v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r4
  int v11; // r2
  int v12; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int *v16; // r9
  int v17; // r2
  unsigned __int8 *v18; // r3
  unsigned int v19; // r1
  unsigned int v20; // r2
  signed int v21; // r0
  int v22; // r1
  unsigned int v23; // r1
  bool v24; // zf
  int v25; // r10
  unsigned int v26; // r11
  unsigned __int8 *v27; // r5
  unsigned __int8 *v28; // r4
  unsigned int v29; // r1
  unsigned __int8 *v30; // lr
  int v31; // r3
  unsigned __int8 *v32; // r4
  int v33; // r6
  bool v34; // zf
  int v35; // r6
  bool v36; // zf
  unsigned __int8 *v37; // r2
  int v38; // r3
  bool v39; // zf
  int v40; // r3
  bool v41; // zf
  unsigned int v42; // lr
  unsigned int v43; // r1
  int v44; // r1
  int v45; // r2
  unsigned __int8 *v46; // r3
  int v47; // r6
  bool v48; // zf
  int v49; // r6
  bool v50; // zf
  unsigned int v51; // r1
  unsigned int v52; // r1
  int v53; // r2
  int v54; // r1
  unsigned __int8 *v55; // r3
  int v56; // r6
  bool v57; // zf
  int v58; // r6
  bool v59; // zf
  unsigned int v60; // lr
  unsigned int v61; // r1
  int v62; // r3
  int v63; // r1
  unsigned __int8 *v64; // r2
  int v65; // r6
  bool v66; // zf
  int v67; // r6
  bool v68; // zf
  unsigned int v69; // r3
  unsigned int v70; // r1
  int v71; // r4
  int v72; // r1
  unsigned __int8 *v73; // r2
  int v74; // r6
  bool v75; // zf
  int v76; // r6
  bool v77; // zf
  unsigned int v78; // r4
  unsigned int v79; // r1
  int v80; // r12
  int v81; // r1
  unsigned __int8 *v82; // r2
  int v83; // r6
  bool v84; // zf
  int v85; // r6
  bool v86; // zf
  unsigned int v87; // r1
  unsigned int v88; // r1
  int v89; // r1
  int v90; // r2
  unsigned __int8 *v91; // r6
  int v92; // r0
  bool v93; // zf
  int v94; // r0
  bool v95; // zf
  unsigned int v96; // r1
  bool v97; // zf
  bool v98; // zf
  unsigned int v99; // r0
  int v100; // r0
  int v101; // r1
  unsigned __int8 *v102; // r2
  int v103; // r3
  bool v104; // zf
  unsigned int v105; // r0
  unsigned __int8 *v106; // r2
  unsigned int v107; // r0
  unsigned __int8 *v108; // r0
  int v109; // r2
  unsigned int v110; // r2
  int v111; // r2
  int v112; // r3
  unsigned int v113; // r5
  unsigned __int8 *v114; // r4
  unsigned int v115; // r6
  unsigned int v116; // r6
  bool v117; // zf
  _WORD *v118; // r2
  _WORD *v119; // r3
  int *v120; // r1
  int v121; // r0
  unsigned __int16 *v122; // r2
  int v123; // r3
  int v124; // r6
  int v125; // r5
  _DWORD *v126; // r6
  int v127; // r1
  int v128; // r5
  int v129; // r2
  bool v130; // cc
  int v131; // r0
  unsigned int v132; // r1
  int v133; // r1
  int v134; // r2
  unsigned __int8 *v135; // r3
  int v136; // r0
  bool v137; // zf
  unsigned int v138; // r1
  unsigned __int8 *v139; // r10
  int v140; // r2
  unsigned int v141; // r3
  int v142; // r0
  int v143; // r1
  int v144; // r0
  int v145; // r2
  int v146; // r3
  int v147; // r1
  int v148; // r1
  unsigned int v149; // r2
  int v150; // r2
  unsigned int v151; // r4
  int v152; // r1
  int v153; // r2
  int v154; // r1
  int v155; // r3
  int v156; // r6
  int v157; // r2
  int v158; // r8
  unsigned __int8 *v159; // r1
  int v160; // r0
  unsigned int v161; // r1
  int v162; // r0
  int v163; // r2
  int v164; // r0
  int v165; // r1
  int v166; // r3
  __int64 v167; // r2
  int v168; // r1
  int v169; // r0
  unsigned int v170; // r8
  int v171; // r1
  int v172; // r2
  int v173; // r1
  int v174; // r3
  int v175; // r6
  int v176; // r2
  unsigned int v177; // r1
  int v178; // r2
  unsigned __int8 *v179; // r3
  unsigned int v180; // r8
  unsigned __int64 v181; // d16
  int v182; // r1
  unsigned int v183; // r12
  unsigned int v184; // r3
  int v185; // r2
  int v186; // r6
  int v187; // r2
  int v188; // r4
  int v189; // r3
  int v190; // r2
  int v191; // r6
  int v192; // r2
  int v193; // r6
  int v194; // r2
  unsigned __int8 *v195; // r3
  int v196; // r3
  _BOOL4 v197; // r4
  unsigned __int8 *v198; // r1
  int v199; // r6
  unsigned int v200; // r1
  unsigned int v201; // r3
  int v202; // r2
  int v203; // r0
  int v204; // r0
  int v205; // r2
  int v206; // r0
  int v207; // r3
  int v208; // r6
  int v209; // r2
  unsigned int v210; // r0
  unsigned __int8 *v211; // r2
  int v212; // r4
  int v213; // r5
  int v214; // r4
  __int64 v215; // kr00_8
  _DWORD *v216; // r11
  unsigned __int16 *v217; // r0
  unsigned int v218; // r6
  _DWORD *v219; // r8
  int *v220; // r10
  unsigned int v221; // r0
  unsigned int v222; // r9
  int v223; // r11
  unsigned int v224; // r4
  int v225; // r5
  int v226; // r2
  int v227; // r0
  int i; // r0
  int *v229; // r10
  int v230; // r4
  void *v231; // r0
  int v232; // r5
  const void *v233; // r1
  int *v234; // r6
  int v235; // r0
  _DWORD *v236; // r1
  unsigned int *v237; // r2
  _DWORD *v238; // r4
  const void **v239; // r8
  int v240; // r4
  unsigned int v241; // r9
  int j; // r5
  int v243; // r0
  int v244; // r1
  int v245; // r11
  int v246; // r1
  void *v247; // r0
  const void *v248; // r6
  int v249; // r0
  int v250; // r6
  int *v251; // r4
  int v252; // r0
  int v253; // r5
  int v254; // r4
  int v255; // r8
  int v256; // r0
  int v257; // r11
  int v258; // r5
  int v259; // r4
  int v260; // lr
  int v261; // r3
  int v262; // r12
  int v263; // r1
  _DWORD *v264; // r3
  int v265; // r8
  int v266; // r6
  int v267; // r0
  int v268; // r11
  int v269; // s0
  int v270; // r4
  int v271; // r0
  int v272; // r2
  int v273; // r11
  int v274; // r1
  int v275; // r9
  int v276; // r0
  unsigned __int16 v277; // r1
  int v278; // r0
  unsigned __int16 v279; // r2
  int v280; // r8
  int v281; // r0
  int v282; // r11
  int v283; // r4
  int v284; // r0
  int v285; // r5
  bool v286; // zf
  int v287; // r1
  int v288; // r2
  _DWORD *v289; // r2
  int v290; // r3
  int k; // r4
  int v292; // r6
  size_t v293; // r2
  int *v294; // r5
  _DWORD *v295; // r6
  void *v296; // t1
  int v297; // r0
  unsigned __int16 *v298; // r1
  int v299; // r6
  int v300; // r2
  int v301; // r0
  int v302; // r0
  int v303; // r0
  int v304; // r1
  int v305; // r0
  int v306; // r4
  int v307; // r0
  __int64 v308; // kr08_8
  int v309; // r12
  int v310; // r3
  float v311; // s0
  _DWORD *v312; // r1
  float v313; // s2
  float v314; // s17
  int v315; // r2
  unsigned int v316; // r1
  float v317; // s23
  float v318; // s0
  float v319; // s25
  float v320; // s2
  int v321; // r0
  float v322; // s18
  int v323; // r4
  float v324; // s29
  float v325; // s27
  float v326; // s31
  unsigned __int16 *v327; // r5
  int v328; // r6
  float v329; // s10
  int v330; // r0
  __int16 v331; // r3
  float v332; // s6
  float v333; // s2
  float v334; // s8
  __int16 v335; // r1
  int v336; // r2
  int v337; // r3
  __int16 v338; // r5
  __int16 v339; // r6
  int v340; // r9
  int v341; // r1
  int v342; // r4
  __int16 v343; // r1
  unsigned __int16 *v344; // r6
  signed int v345; // r0
  int v346; // r2
  int v347; // r9
  int v348; // r5
  int v349; // r8
  int v350; // r0
  int v351; // r1
  unsigned int v352; // r9
  unsigned __int8 *v353; // r0
  int v354; // r3
  int v355; // t1
  unsigned int v356; // r2
  int v357; // r0
  int v358; // r5
  int v359; // r8
  int v360; // r4
  int v361; // r11
  int v362; // r10
  __int16 *v363; // r5
  float v364; // s1
  int v365; // s0
  float v366; // s0
  float *v367; // r0
  int v368; // r0
  int v369; // r1
  int v370; // r0
  int32x4_t v371; // q8
  int32x4_t *v372; // r2
  int v373; // r1
  int32x4_t v374; // q9
  unsigned __int64 v375; // d16
  unsigned int v376; // r2
  int *v377; // r0
  int v378; // t1
  int v379; // r12
  int v380; // r10
  int v381; // r1
  int v382; // r8
  int v383; // lr
  int v384; // r6
  int v385; // r0
  float *v386; // r4
  int v387; // r3
  float v388; // s2
  int v389; // r2
  float v390; // s0
  int v391; // r5
  int v392; // r2
  float *v393; // r0
  float *v394; // r2
  float v395; // s6
  float v396; // s10
  _BOOL4 v397; // r0
  float v398; // s2
  float v399; // s8
  int v400; // r2
  int v401; // r2
  int v402; // r1
  int v403; // r0
  int v404; // r2
  double v405; // d16
  int v406; // r3
  int v407; // s0
  float v408; // s2
  int v409; // r2
  int v410; // r3
  __int64 v411; // d17
  double v412; // d16
  int v413; // r2
  int v414; // r3
  double *v415; // r8
  int v416; // r12
  int v417; // r9
  int v418; // lr
  int v419; // r5
  float v420; // s26
  float v421; // s19
  _BYTE *v422; // r10
  int v423; // r4
  int v424; // r2
  int v425; // r3
  float v426; // s21
  int v427; // r2
  int *v428; // r0
  int v429; // r1
  float v430; // s17
  char v431; // r0
  float v432; // s0
  _DWORD *v433; // r6
  float v434; // s0
  unsigned int v435; // r0
  float v436; // s6
  float v437; // s2
  float v438; // s4
  float v439; // s10
  float v440; // s6
  float v441; // s8
  float v442; // s12
  float v443; // s14
  float v444; // s1
  float v445; // s4
  float v446; // s8
  float v447; // s10
  float v448; // s12
  float *v449; // r1
  int v450; // r2
  float *v451; // r3
  float v452; // s10
  int v453; // r1
  float v454; // s12
  float v455; // s4
  float v456; // s6
  float v457; // s14
  float v458; // s12
  float v459; // s8
  int v460; // r2
  int v461; // r3
  float v462; // s6
  float v463; // s2
  float *v464; // r1
  int v465; // s10
  float v466; // s10
  float v467; // s12
  float v468; // s5
  float v469; // s3
  float v470; // s1
  float v471; // s14
  float v472; // s9
  float v473; // s11
  float v474; // s3
  float v475; // s7
  float v476; // s11
  float v477; // s5
  float v478; // s9
  float v479; // s11
  float v480; // s5
  float v481; // s7
  float v482; // s11
  float v483; // s3
  float v484; // s7
  float v485; // s9
  float v486; // s14
  float v487; // s3
  float v488; // s9
  float v489; // s5
  float v490; // s5
  float v491; // s14
  float v492; // s3
  float v493; // s7
  float v494; // s9
  float v495; // s1
  float v496; // s5
  float v497; // s9
  float v498; // s3
  float v499; // s7
  float v500; // s1
  float v501; // s12
  float v502; // s10
  float v503; // s14
  float v504; // s3
  float v505; // s5
  float v506; // s14
  float v507; // s1
  float v508; // s7
  float v509; // s5
  float v510; // s7
  float v511; // s3
  float v512; // s5
  float v513; // s9
  float v514; // s1
  float v515; // s5
  float v516; // s1
  float v517; // s3
  float v518; // s7
  float v519; // s14
  float v520; // s10
  float v521; // s7
  float v522; // s3
  float v523; // s5
  float v524; // s9
  float v525; // s14
  float v526; // s14
  float v527; // s1
  float v528; // s6
  float v529; // s2
  int v530; // r1
  float v531; // s8
  float v532; // s14
  int v533; // r3
  float v534; // s4
  float v535; // s3
  float v536; // s12
  float *v537; // r6
  int v538; // r2
  float v539; // s5
  float v540; // s12
  float v541; // s4
  float v542; // s10
  float v543; // s6
  float v544; // s8
  float v545; // s10
  float v546; // s0
  int v547; // r2
  float *v548; // r0
  _BYTE *v549; // r1
  float v550; // s2
  int v551; // r3
  int v552; // r0
  int v553; // r1
  int v554; // r4
  int v555; // r0
  float v556; // s2
  float v557; // s6
  int v558; // r1
  float v559; // s4
  float v560; // s0
  float v561; // s10
  float v562; // s12
  _DWORD *v563; // r0
  _DWORD *v564; // r0
  _DWORD *v565; // r4
  unsigned int v566; // r8
  int v567; // r1
  int v568; // r3
  unsigned int v569; // r11
  int v570; // r0
  int v571; // r4
  int v572; // r5
  unsigned int v573; // r9
  unsigned int v574; // r4
  int v575; // r0
  int v576; // r1
  int v577; // r2
  int v578; // r0
  int v579; // r1
  int v580; // r2
  int v581; // r0
  int v582; // r1
  int v583; // r0
  int v584; // r1
  signed int v585; // r6
  int v586; // r6
  int v587; // r0
  int v588; // r1
  int v589; // r1
  unsigned int v590; // r8
  int v591; // r3
  int v592; // r0
  int v593; // r5
  int v594; // r9
  unsigned int v595; // r11
  int v596; // r0
  unsigned int v597; // r4
  int v598; // r1
  int v599; // r2
  int v600; // r3
  int v601; // r0
  int v602; // r1
  int v603; // r2
  int v604; // r3
  int v605; // r0
  int v606; // r1
  int v607; // r2
  _BYTE *v608; // r3
  int v609; // r0
  int v610; // r1
  int v611; // r2
  _BYTE *v612; // r3
  signed int v613; // r6
  int v614; // r0
  double *v615; // r3
  unsigned int v616; // r2
  int v617; // r5
  int v618; // r11
  double *v619; // r9
  unsigned int v620; // r8
  int v621; // r6
  int v622; // r10
  int v623; // r11
  int v624; // r2
  int v625; // r1
  float v626; // s0
  unsigned int m; // r0
  unsigned int v628; // r1
  int v629; // r3
  int v630; // lr
  int v631; // r8
  int v632; // r2
  bool v633; // zf
  int v634; // r3
  int v635; // r6
  int v636; // r5
  int n; // r4
  int v638; // r1
  _DWORD *v639; // r6
  float v640; // s4
  float v641; // s6
  int v642; // r3
  unsigned int v643; // r1
  int v644; // r5
  int v645; // r2
  int v646; // r3
  int v647; // r1
  int v648; // r4
  float v649; // s0
  float *v650; // r9
  _DWORD *v651; // r8
  _DWORD *v652; // r10
  float v653; // s24
  int v654; // r11
  int v655; // r6
  float v656; // s26
  float *v657; // r0
  float v658; // s4
  float v659; // s0
  float v660; // s2
  float v661; // s2
  float v662; // s4
  int *v663; // r4
  int v664; // r0
  int v666; // [sp+0h] [bp-398h]
  int v667; // [sp+0h] [bp-398h]
  int v668; // [sp+0h] [bp-398h]
  float v669; // [sp+20h] [bp-378h]
  int v670; // [sp+24h] [bp-374h]
  int v671; // [sp+28h] [bp-370h]
  int v672; // [sp+30h] [bp-368h]
  int v673; // [sp+34h] [bp-364h]
  unsigned int v674; // [sp+38h] [bp-360h]
  unsigned int v675; // [sp+3Ch] [bp-35Ch]
  int *v676; // [sp+40h] [bp-358h]
  int v677; // [sp+48h] [bp-350h]
  int v678; // [sp+54h] [bp-344h]
  float *v679; // [sp+54h] [bp-344h]
  int v680; // [sp+58h] [bp-340h]
  int v681; // [sp+5Ch] [bp-33Ch]
  int v682; // [sp+5Ch] [bp-33Ch]
  int v683; // [sp+60h] [bp-338h]
  int *v684; // [sp+64h] [bp-334h]
  int v685; // [sp+68h] [bp-330h]
  unsigned int v686; // [sp+6Ch] [bp-32Ch]
  int v687; // [sp+6Ch] [bp-32Ch]
  int v688; // [sp+70h] [bp-328h]
  _DWORD *v689; // [sp+78h] [bp-320h]
  int v690; // [sp+80h] [bp-318h]
  float *v691; // [sp+80h] [bp-318h]
  int *v692; // [sp+84h] [bp-314h]
  _DWORD *v693; // [sp+88h] [bp-310h]
  _DWORD *v694; // [sp+8Ch] [bp-30Ch]
  int v695; // [sp+90h] [bp-308h]
  int v696; // [sp+94h] [bp-304h]
  unsigned int v697; // [sp+98h] [bp-300h]
  int v698; // [sp+9Ch] [bp-2FCh]
  int *v699; // [sp+A0h] [bp-2F8h]
  unsigned int v700; // [sp+A4h] [bp-2F4h]
  int v701; // [sp+A8h] [bp-2F0h]
  int v702; // [sp+ACh] [bp-2ECh]
  int v703; // [sp+B0h] [bp-2E8h]
  _DWORD *v704; // [sp+B0h] [bp-2E8h]
  int v705; // [sp+B4h] [bp-2E4h]
  int v706; // [sp+B8h] [bp-2E0h]
  _DWORD *v707; // [sp+B8h] [bp-2E0h]
  int v708; // [sp+BCh] [bp-2DCh]
  int v709; // [sp+C0h] [bp-2D8h]
  __int16 *v710; // [sp+C0h] [bp-2D8h]
  int v711; // [sp+C0h] [bp-2D8h]
  unsigned __int16 *v712; // [sp+C4h] [bp-2D4h]
  int v713; // [sp+C8h] [bp-2D0h]
  _DWORD *v714; // [sp+C8h] [bp-2D0h]
  unsigned __int16 *v715; // [sp+C8h] [bp-2D0h]
  _DWORD *v716; // [sp+CCh] [bp-2CCh]
  int v717; // [sp+CCh] [bp-2CCh]
  int v718; // [sp+CCh] [bp-2CCh]
  unsigned int v719; // [sp+CCh] [bp-2CCh]
  unsigned int v720; // [sp+D0h] [bp-2C8h]
  int v721; // [sp+D0h] [bp-2C8h]
  _WORD *v722; // [sp+D0h] [bp-2C8h]
  int v723; // [sp+D4h] [bp-2C4h]
  int v724; // [sp+D4h] [bp-2C4h]
  _WORD *v725; // [sp+D4h] [bp-2C4h]
  int *v726; // [sp+D8h] [bp-2C0h]
  unsigned int v727; // [sp+DCh] [bp-2BCh]
  int v728; // [sp+DCh] [bp-2BCh]
  int v729; // [sp+DCh] [bp-2BCh]
  int *v730; // [sp+DCh] [bp-2BCh]
  int v731; // [sp+DCh] [bp-2BCh]
  int v732; // [sp+DCh] [bp-2BCh]
  int v733; // [sp+DCh] [bp-2BCh]
  unsigned __int8 *v734; // [sp+E0h] [bp-2B8h]
  int *v735; // [sp+E0h] [bp-2B8h]
  _DWORD *v736; // [sp+E0h] [bp-2B8h]
  __int16 v737; // [sp+E0h] [bp-2B8h]
  unsigned int v738; // [sp+E0h] [bp-2B8h]
  _DWORD *v739; // [sp+E4h] [bp-2B4h]
  unsigned __int16 *v740; // [sp+E4h] [bp-2B4h]
  unsigned int v741; // [sp+E4h] [bp-2B4h]
  int *v742; // [sp+E4h] [bp-2B4h]
  int v743; // [sp+E4h] [bp-2B4h]
  int v744; // [sp+E4h] [bp-2B4h]
  int v745; // [sp+E4h] [bp-2B4h]
  int v746; // [sp+E4h] [bp-2B4h]
  int v747; // [sp+E4h] [bp-2B4h]
  unsigned __int8 *v748; // [sp+E8h] [bp-2B0h]
  int *v749; // [sp+E8h] [bp-2B0h]
  unsigned int *v750; // [sp+E8h] [bp-2B0h]
  _DWORD *v751; // [sp+E8h] [bp-2B0h]
  unsigned int v752; // [sp+E8h] [bp-2B0h]
  int v753; // [sp+ECh] [bp-2ACh]
  int v754; // [sp+ECh] [bp-2ACh]
  int v755; // [sp+ECh] [bp-2ACh]
  int v756; // [sp+ECh] [bp-2ACh]
  int v757; // [sp+ECh] [bp-2ACh]
  unsigned int v758; // [sp+ECh] [bp-2ACh]
  float *v759; // [sp+ECh] [bp-2ACh]
  int v760; // [sp+F0h] [bp-2A8h]
  int v761; // [sp+F0h] [bp-2A8h]
  int *v762; // [sp+F0h] [bp-2A8h]
  int v763; // [sp+F0h] [bp-2A8h]
  int v764; // [sp+F0h] [bp-2A8h]
  int *v765; // [sp+F0h] [bp-2A8h]
  int v766; // [sp+F4h] [bp-2A4h] BYREF
  int v767; // [sp+F8h] [bp-2A0h]
  int v768; // [sp+FCh] [bp-29Ch]
  unsigned __int64 v769; // [sp+100h] [bp-298h] BYREF
  int v770; // [sp+108h] [bp-290h]
  char v771[4]; // [sp+110h] [bp-288h] BYREF
  char v772[4]; // [sp+114h] [bp-284h] BYREF
  int v773; // [sp+118h] [bp-280h] BYREF
  int v774; // [sp+11Ch] [bp-27Ch] BYREF
  int v775; // [sp+120h] [bp-278h] BYREF
  int v776; // [sp+124h] [bp-274h] BYREF
  unsigned int v777; // [sp+128h] [bp-270h] BYREF
  unsigned int v778; // [sp+12Ch] [bp-26Ch] BYREF
  double v779; // [sp+130h] [bp-268h] BYREF
  int v780; // [sp+138h] [bp-260h]

  v1 = (int *)a1;
  if ( *(int *)(a1 + 88) <= -1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v2 = 2;
      v3 = 2;
    }
    else
    {
      v2 = 217;
      v3 = 27;
    }
    *(_DWORD *)(a1 + 88) = sub_9F268((_DWORD *)a1, 0x80000000, v2, v3);
  }
  v4 = v1[5];
  v684 = v1 + 7;
  *(_QWORD *)(v1 + 7) = 0LL;
  *(_QWORD *)(v1 + 9) = 0LL;
  v1[2] = 0;
  v1[12] = 0;
  v1[11] = 0;
  if ( v4 )
    sub_88614(v4);
  v5 = v1[6];
  if ( v5 )
    sub_88614(v5);
  v6 = v1[19];
  v1[5] = 0;
  v1[6] = 0;
  v708 = v6;
  if ( v6 < 1 )
  {
    v8 = 0;
  }
  else
  {
    v7 = v6;
    if ( (unsigned int)v6 <= 8 )
      v7 = 8;
    v8 = sub_885E4(196 * v7);
  }
  v705 = v8;
  v9 = v1[13];
  v713 = v9;
  if ( v9 < 1 )
  {
    v10 = 0;
  }
  else
  {
    if ( (unsigned int)v9 <= 8 )
      v9 = 8;
    v10 = sub_885E4(24 * v9);
  }
  sub_10967C(v705, 196 * v708);
  v723 = v10;
  sub_10967C(v10, 24 * v713);
  v726 = v1;
  if ( v1[19] >= 1 )
  {
    v12 = 0;
    do
    {
      v13 = v705 + 196 * v12;
      v760 = v12;
      v14 = v1[13];
      v15 = v1[21];
      v753 = v13;
      *(_DWORD *)(v13 + 160) = -1;
      v16 = (int *)(v13 + 160);
      if ( v14 < 1 )
      {
LABEL_369:
        if ( v723 )
          sub_88614(v723);
        v212 = 0;
        goto LABEL_904;
      }
      v17 = 0;
      v739 = (_DWORD *)(v15 + 116 * v760);
      while ( v739[28] != *(_DWORD *)(v726[15] + 4 * v17) )
      {
        if ( ++v17 >= v14 )
          goto LABEL_369;
      }
      v18 = *(unsigned __int8 **)(v15 + 116 * v760);
      v19 = -1;
      *v16 = v17;
      v20 = *v18;
      v21 = v739[3];
      if ( v20 > 0x4E )
      {
        if ( v20 == 79 )
        {
          if ( v18[1] != 84 || v18[2] != 84 || v18[3] != 79 )
            goto LABEL_61;
        }
        else
        {
          if ( v20 != 116 )
            goto LABEL_62;
          v22 = v18[1];
          if ( v22 == 114 )
          {
            if ( v18[2] != 117 || v18[3] != 101 )
              goto LABEL_61;
          }
          else
          {
            if ( v22 == 116 )
            {
              if ( v18[2] == 99 && v18[3] == 102 )
              {
                v23 = bswap32(*((_DWORD *)v18 + 1));
                v24 = v23 == 0x20000;
                if ( v23 != 0x20000 )
                  v24 = v23 == 0x10000;
                if ( v24 && (int)bswap32(*((_DWORD *)v18 + 2)) > v21 )
                {
                  v19 = bswap32(*(_DWORD *)&v18[4 * v21 + 12]);
                  goto LABEL_62;
                }
              }
LABEL_61:
              v19 = -1;
              goto LABEL_62;
            }
            if ( v22 != 121 || v18[2] != 112 || v18[3] != 49 )
              goto LABEL_61;
          }
        }
      }
      else
      {
        if ( *v18 )
        {
          if ( v20 != 49 )
            goto LABEL_62;
          if ( v18[1] )
            goto LABEL_61;
        }
        else if ( v18[1] != 1 )
        {
          goto LABEL_61;
        }
        if ( v18[2] || v18[3] )
          goto LABEL_61;
      }
      if ( v21 )
        v21 = -1;
      v19 = v21;
LABEL_62:
      v25 = v753;
      v26 = 0;
      v27 = &v18[v19];
      v734 = v18;
      *(_DWORD *)(v753 + 52) = 0;
      *(_DWORD *)(v753 + 56) = 0;
      *(_DWORD *)(v753 + 4) = v18;
      *(_DWORD *)(v753 + 8) = v19;
      *(_DWORD *)(v753 + 60) = 0;
      v28 = &v18[v19 + 4];
      v29 = bswap32(*(unsigned __int16 *)v28 << 16);
      if ( v29 )
      {
        v30 = v28;
        v31 = 0;
        do
        {
          v32 = &v27[v31];
          v33 = v27[v31 + 12];
          v34 = v33 == 99;
          if ( v33 == 99 )
            v34 = v32[13] == 109;
          if ( v34 )
          {
            v35 = v32[14];
            v36 = v35 == 97;
            if ( v35 == 97 )
              v36 = v32[15] == 112;
            if ( v36 )
            {
              v26 = bswap32(*((_DWORD *)v32 + 5));
              goto LABEL_75;
            }
          }
          v31 += 16;
        }
        while ( 16 * v29 != v31 );
        v26 = 0;
LABEL_75:
        v37 = v27 + 23;
        v28 = v30;
        while ( 1 )
        {
          v38 = *(v37 - 11);
          v39 = v38 == 108;
          if ( v38 == 108 )
            v39 = *(v37 - 10) == 111;
          if ( v39 )
          {
            v40 = *(v37 - 9);
            v41 = v40 == 99;
            if ( v40 == 99 )
              v41 = *(v37 - 8) == 97;
            if ( v41 )
              break;
          }
          --v29;
          v37 += 16;
          if ( !v29 )
            goto LABEL_86;
        }
        v42 = bswap32(*(_DWORD *)(v37 - 3));
      }
      else
      {
LABEL_86:
        v42 = 0;
      }
      *(_DWORD *)(v753 + 16) = v42;
      v43 = bswap32(*(unsigned __int16 *)v28 << 16);
      if ( v43 )
      {
        v44 = 16 * v43;
        v45 = 0;
        while ( 1 )
        {
          v46 = &v27[v45];
          v47 = v27[v45 + 12];
          v48 = v47 == 104;
          if ( v47 == 104 )
            v48 = v46[13] == 101;
          if ( v48 )
          {
            v49 = v46[14];
            v50 = v49 == 97;
            if ( v49 == 97 )
              v50 = v46[15] == 100;
            if ( v50 )
              break;
          }
          v45 += 16;
          if ( v44 == v45 )
            goto LABEL_99;
        }
        v51 = bswap32(*((_DWORD *)v46 + 5));
      }
      else
      {
LABEL_99:
        v51 = 0;
      }
      v727 = v51;
      *(_DWORD *)(v753 + 20) = v51;
      v720 = v42;
      v52 = bswap32(*(unsigned __int16 *)v28 << 16);
      if ( v52 )
      {
        v53 = 16 * v52;
        v54 = 0;
        while ( 1 )
        {
          v55 = &v27[v54];
          v56 = v27[v54 + 12];
          v57 = v56 == 103;
          if ( v56 == 103 )
            v57 = v55[13] == 108;
          if ( v57 )
          {
            v58 = v55[14];
            v59 = v58 == 121;
            if ( v58 == 121 )
              v59 = v55[15] == 102;
            if ( v59 )
              break;
          }
          v54 += 16;
          if ( v53 == v54 )
            goto LABEL_112;
        }
        v60 = bswap32(*((_DWORD *)v55 + 5));
      }
      else
      {
LABEL_112:
        v60 = 0;
      }
      *(_DWORD *)(v753 + 24) = v60;
      v61 = bswap32(*(unsigned __int16 *)v28 << 16);
      if ( v61 )
      {
        v62 = 16 * v61;
        v63 = 0;
        while ( 1 )
        {
          v64 = &v27[v63];
          v65 = v27[v63 + 12];
          v66 = v65 == 104;
          if ( v65 == 104 )
            v66 = v64[13] == 104;
          if ( v66 )
          {
            v67 = v64[14];
            v68 = v67 == 101;
            if ( v67 == 101 )
              v68 = v64[15] == 97;
            if ( v68 )
              break;
          }
          v63 += 16;
          if ( v62 == v63 )
            goto LABEL_125;
        }
        v69 = bswap32(*((_DWORD *)v64 + 5));
      }
      else
      {
LABEL_125:
        v69 = 0;
      }
      *(_DWORD *)(v753 + 28) = v69;
      v748 = v28;
      v70 = bswap32(*(unsigned __int16 *)v28 << 16);
      if ( v70 )
      {
        v71 = 16 * v70;
        v72 = 0;
        while ( 1 )
        {
          v73 = &v27[v72];
          v74 = v27[v72 + 12];
          v75 = v74 == 104;
          if ( v74 == 104 )
            v75 = v73[13] == 109;
          if ( v75 )
          {
            v76 = v73[14];
            v77 = v76 == 116;
            if ( v76 == 116 )
              v77 = v73[15] == 120;
            if ( v77 )
              break;
          }
          v72 += 16;
          if ( v71 == v72 )
            goto LABEL_138;
        }
        v78 = bswap32(*((_DWORD *)v73 + 5));
      }
      else
      {
LABEL_138:
        v78 = 0;
      }
      *(_DWORD *)(v753 + 32) = v78;
      v79 = bswap32(*(unsigned __int16 *)v748 << 16);
      if ( v79 )
      {
        v80 = 16 * v79;
        v81 = 0;
        do
        {
          v82 = &v27[v81];
          v83 = v27[v81 + 12];
          v84 = v83 == 107;
          if ( v83 == 107 )
            v84 = v82[13] == 101;
          if ( v84 )
          {
            v85 = v82[14];
            v86 = v85 == 114;
            if ( v85 == 114 )
              v86 = v82[15] == 110;
            if ( v86 )
            {
              v87 = bswap32(*((_DWORD *)v82 + 5));
              goto LABEL_153;
            }
          }
          v81 += 16;
        }
        while ( v80 != v81 );
        v87 = 0;
      }
      else
      {
        v87 = 0;
      }
LABEL_153:
      *(_DWORD *)(v753 + 36) = v87;
      v88 = bswap32(*(unsigned __int16 *)v748 << 16);
      if ( v88 )
      {
        v89 = 16 * v88;
        v90 = 0;
        do
        {
          v91 = &v27[v90];
          v92 = v27[v90 + 12];
          v93 = v92 == 71;
          if ( v92 == 71 )
            v93 = v91[13] == 80;
          if ( v93 )
          {
            v94 = v91[14];
            v95 = v94 == 79;
            if ( v94 == 79 )
              v95 = v91[15] == 83;
            if ( v95 )
            {
              v96 = bswap32(*((_DWORD *)v91 + 5));
              goto LABEL_166;
            }
          }
          v90 += 16;
        }
        while ( v89 != v90 );
        v96 = 0;
LABEL_166:
        v25 = v753;
      }
      else
      {
        v96 = 0;
      }
      *(_DWORD *)(v25 + 40) = v96;
      v97 = v26 == 0;
      if ( v26 )
        v97 = v727 == 0;
      if ( v97 )
        goto LABEL_369;
      v98 = v69 == 0;
      if ( v69 )
        v98 = v78 == 0;
      if ( v98 )
        goto LABEL_369;
      if ( v60 )
      {
        if ( !v720 )
          goto LABEL_369;
        goto LABEL_176;
      }
      v777 = 0;
      v778 = 0;
      v766 = 2;
      v131 = *(unsigned __int16 *)v748;
      v776 = 0;
      v132 = bswap32(v131 << 16);
      if ( !v132 )
        goto LABEL_369;
      v133 = 16 * v132;
      v134 = 0;
      while ( 1 )
      {
        v135 = &v27[v134];
        if ( v27[v134 + 12] == 67 )
        {
          v136 = v135[13];
          v137 = v136 == 70;
          if ( v136 == 70 )
            v137 = v135[14] == 70;
          if ( v137 && v135[15] == 32 )
            break;
        }
        v134 += 16;
        if ( v133 == v134 )
          goto LABEL_369;
      }
      v138 = bswap32(*((_DWORD *)v135 + 5));
      if ( !v138 )
        goto LABEL_369;
      v139 = &v734[v138];
      *(_DWORD *)(v753 + 52) = &v734[v138];
      *(_DWORD *)(v753 + 56) = 0;
      *(_DWORD *)(v753 + 60) = 0x20000000;
      *(_DWORD *)(v753 + 120) = 0;
      *(_QWORD *)(v753 + 100) = 0LL;
      *(_QWORD *)(v753 + 108) = 0LL;
      *(_DWORD *)(v753 + 116) = 0;
      v140 = v734[v138 + 2];
      v141 = bswap32(*(unsigned __int16 *)&v734[v138 + v140] << 16);
      v142 = v140 + 2;
      if ( v141 )
      {
        v143 = v139[v142];
        v144 = v140 + v141 * v143 + 3;
        if ( v143 )
        {
          v145 = 0;
          do
          {
            if ( v144 < 0x20000000 )
              v146 = v139[v144++];
            else
              v146 = 0;
            --v143;
            v145 = (v145 << 8) | v146;
          }
          while ( v143 );
          v147 = v145 - 1;
        }
        else
        {
          v147 = -1;
        }
        v149 = v147 + v144;
        v148 = 0;
        if ( v149 >> 29 )
        {
          v142 = 0x20000000;
          v151 = 0x20000000;
          v150 = 0;
          goto LABEL_237;
        }
        v148 = v139[v149] << 8;
        v142 = 0x1FFFFFFF;
        if ( v149 == 0x1FFFFFFF )
        {
          v150 = 0;
          v151 = 0x20000000;
          goto LABEL_237;
        }
        v142 = v149;
      }
      else
      {
        v148 = v139[v142] << 8;
      }
      v151 = v142 + 2;
      v150 = v139[v142 + 1];
LABEL_237:
      v152 = v148 | v150;
      if ( v152 )
      {
        if ( v151 >> 29 )
        {
          v157 = -1;
          v154 = 0x20000000;
        }
        else
        {
          v153 = v139[v151];
          v154 = v151 + v152 * v153 + 1;
          if ( (unsigned int)v154 >= 0x20000000 )
            v154 = 0x20000000;
          if ( v139[v151] )
          {
            v155 = 0;
            do
            {
              if ( v154 < 0x20000000 )
                v156 = v139[v154++];
              else
                v156 = 0;
              --v153;
              v155 = (v155 << 8) | v156;
            }
            while ( v153 );
            v157 = v155 - 1;
          }
          else
          {
            v157 = -1;
          }
        }
        v151 = v157 + v154;
        if ( (unsigned int)(v157 + v154) >= 0x20000000 )
          v151 = 0x20000000;
      }
      v158 = 0;
      v159 = &v139[v142];
      if ( v142 > 0x20000000 )
        v159 = 0;
      if ( (int)((v151 - v142) | v142) <= -1 )
        v159 = 0;
      sub_A3E34(&v779, v159, 0);
      if ( v151 >> 29 )
      {
        v161 = 0x20000000;
        v160 = 0;
      }
      else
      {
        v158 = v139[v151] << 8;
        if ( v151 == 0x1FFFFFFF )
        {
          v160 = 0;
          v161 = 0x20000000;
        }
        else
        {
          v161 = v151 + 2;
          v160 = v139[v151 + 1];
        }
      }
      v162 = v160 | v158;
      if ( v162 )
      {
        if ( v161 >> 29 )
        {
          v168 = -1;
          v164 = 0x20000000;
        }
        else
        {
          v163 = v139[v161];
          v164 = v161 + v162 * v163 + 1;
          if ( (unsigned int)v164 >= 0x20000000 )
            v164 = 0x20000000;
          if ( v139[v161] )
          {
            v165 = 0;
            do
            {
              if ( v164 < 0x20000000 )
                v166 = v139[v164++];
              else
                v166 = 0;
              --v163;
              v165 = (v165 << 8) | v166;
            }
            while ( v163 );
            v168 = v165 - 1;
          }
          else
          {
            v168 = -1;
          }
        }
        v161 = v168 + v164;
        if ( v161 < 0x20000000 )
        {
LABEL_277:
          LODWORD(v167) = v139[v161] << 8;
          v169 = 0x1FFFFFFF;
          if ( v161 == 0x1FFFFFFF )
          {
            HIDWORD(v167) = 0;
            v170 = 0x20000000;
          }
          else
          {
            v170 = v161 + 2;
            HIDWORD(v167) = v139[v161 + 1];
            v169 = v161;
          }
          goto LABEL_282;
        }
        LODWORD(v167) = 0;
      }
      else
      {
        LODWORD(v167) = 0;
        if ( !(v161 >> 29) )
          goto LABEL_277;
      }
      v169 = 0x20000000;
      v170 = 0x20000000;
      HIDWORD(v167) = 0;
LABEL_282:
      v171 = HIDWORD(v167) | v167;
      if ( v167 )
      {
        if ( v170 >> 29 )
        {
          v176 = -1;
          v173 = 0x20000000;
        }
        else
        {
          v172 = v139[v170];
          v173 = v170 + v171 * v172 + 1;
          if ( (unsigned int)v173 >= 0x20000000 )
            v173 = 0x20000000;
          if ( v139[v170] )
          {
            v174 = 0;
            do
            {
              if ( v173 < 0x20000000 )
                v175 = v139[v173++];
              else
                v175 = 0;
              --v172;
              v174 = (v174 << 8) | v175;
            }
            while ( v172 );
            v176 = v174 - 1;
          }
          else
          {
            v176 = -1;
          }
        }
        v170 = v176 + v173;
        if ( (unsigned int)(v176 + v173) >= 0x20000000 )
          v170 = 0x20000000;
      }
      v177 = v170 - v169;
      v178 = (v170 - v169) | v169;
      if ( v169 > 0x20000000 )
        v177 = 0;
      v179 = &v139[v169];
      if ( v178 <= -1 )
        v177 = 0;
      if ( v169 > 0x20000000 )
        v179 = 0;
      if ( v178 <= -1 )
        v179 = 0;
      *(_DWORD *)(v753 + 76) = v179;
      *(_DWORD *)(v753 + 80) = 0;
      *(_DWORD *)(v753 + 84) = v177;
      sub_A3EFC(&v779, 17, 1, &v778, 0);
      sub_A3EFC(&v779, 262, 1, &v766, v666);
      sub_A3EFC(&v779, 292, 1, &v777, v667);
      sub_A3EFC(&v779, 293, 1, &v776, v668);
      sub_A4014(&v769, v139, v170, 0x20000000, LODWORD(v779), HIDWORD(v779), v780);
      v180 = v778;
      v181 = v769;
      v24 = v766 == 2;
      *(_DWORD *)(v753 + 96) = v770;
      *(_QWORD *)(v753 + 88) = v181;
      if ( !v24 || !v180 )
        goto LABEL_369;
      if ( v777 )
      {
        v182 = v776;
        if ( !v776 )
          goto LABEL_369;
        v183 = 0x20000000;
        v184 = 0x20000000;
        if ( v777 < 0x20000000 )
          v183 = v777;
        v185 = 0;
        if ( v777 >> 29 )
        {
          v186 = 0;
        }
        else
        {
          v185 = v139[v183] << 8;
          if ( v183 > 0x1FFFFFFE )
          {
            v186 = 0;
            v184 = 0x20000000;
          }
          else
          {
            v186 = v139[v183 + 1];
            v184 = v183 + 2;
          }
        }
        v187 = v185 | v186;
        if ( v187 )
        {
          if ( v184 >> 29 )
          {
            v192 = -1;
            v189 = 0x20000000;
          }
          else
          {
            v188 = v139[v184];
            v189 = v184 + v187 * v188 + 1;
            if ( (unsigned int)v189 >= 0x20000000 )
              v189 = 0x20000000;
            if ( v188 )
            {
              v190 = 0;
              do
              {
                if ( v189 < 0x20000000 )
                  v191 = v139[v189++];
                else
                  v191 = 0;
                --v188;
                v190 = (v190 << 8) | v191;
              }
              while ( v188 );
              v192 = v190 - 1;
            }
            else
            {
              v192 = -1;
            }
          }
          v184 = v189 + v192;
          if ( v184 >= 0x20000000 )
            v184 = 0x20000000;
        }
        v193 = 0;
        *(_DWORD *)(v753 + 116) = 0;
        v194 = v184 - v183;
        v195 = 0;
        if ( v194 > -1 )
          v195 = &v139[v183];
        *(_DWORD *)(v753 + 100) = v195;
        v196 = 0x20000000 - v182;
        v197 = ((0x20000000 - v182) | v182) < 0;
        if ( v182 > 0x20000000 )
          v193 = 1;
        v198 = &v139[v182];
        v199 = v193 | v197;
        if ( v199 )
          v198 = 0;
        *(_DWORD *)(v753 + 112) = v198;
        if ( v199 )
          v196 = 0;
        *(_DWORD *)(v753 + 120) = v196;
        if ( v194 <= -1 )
          v194 = 0;
        *(_DWORD *)(v753 + 104) = 0;
        *(_DWORD *)(v753 + 108) = v194;
      }
      v200 = 0x20000000;
      v201 = 0x20000000;
      if ( v180 < 0x20000000 )
        v200 = v180;
      v202 = 0;
      if ( v180 >> 29 )
      {
        v203 = 0;
      }
      else
      {
        v202 = v139[v200] << 8;
        if ( v200 > 0x1FFFFFFE )
        {
          v203 = 0;
          v201 = 0x20000000;
        }
        else
        {
          v201 = v200 + 2;
          v203 = v139[v200 + 1];
        }
      }
      v204 = v203 | v202;
      if ( v204 )
      {
        if ( v201 >> 29 )
        {
          v209 = -1;
          v206 = 0x20000000;
        }
        else
        {
          v205 = v139[v201];
          v206 = v201 + v204 * v205 + 1;
          if ( (unsigned int)v206 >= 0x20000000 )
            v206 = 0x20000000;
          if ( v139[v201] )
          {
            v207 = 0;
            do
            {
              if ( v206 < 0x20000000 )
                v208 = v139[v206++];
              else
                v208 = 0;
              --v205;
              v207 = (v207 << 8) | v208;
            }
            while ( v205 );
            v209 = v207 - 1;
          }
          else
          {
            v209 = -1;
          }
        }
        v201 = v209 + v206;
        if ( (unsigned int)(v209 + v206) >= 0x20000000 )
          v201 = 0x20000000;
      }
      v210 = v201 - v200;
      v211 = 0;
      if ( (int)(v201 - v200) > -1 )
        v211 = &v139[v200];
      else
        v210 = 0;
      *(_DWORD *)(v753 + 64) = v211;
      *(_DWORD *)(v753 + 68) = 0;
      *(_DWORD *)(v753 + 72) = v210;
LABEL_176:
      v99 = bswap32(*(unsigned __int16 *)v748 << 16);
      if ( !v99 )
        goto LABEL_187;
      v100 = 16 * v99;
      v101 = 0;
      while ( 1 )
      {
        v102 = &v27[v101];
        if ( v27[v101 + 12] == 109 )
        {
          v103 = v102[13];
          v104 = v103 == 97;
          if ( v103 == 97 )
            v104 = v102[14] == 120;
          if ( v104 && v102[15] == 112 )
            break;
        }
        v101 += 16;
        if ( v100 == v101 )
          goto LABEL_187;
      }
      v105 = bswap32(*((_DWORD *)v102 + 5));
      if ( v105 )
      {
        v106 = v734;
        v107 = bswap32(*(unsigned __int16 *)&v734[v105 + 4] << 16);
      }
      else
      {
LABEL_187:
        v107 = 0xFFFF;
        v106 = v734;
      }
      *(_DWORD *)(v753 + 12) = v107;
      v108 = &v106[v26];
      v109 = *(unsigned __int16 *)&v106[v26 + 2];
      *(_DWORD *)(v753 + 44) = 0;
      v110 = bswap32(v109 << 16);
      if ( !v110 )
        goto LABEL_369;
      v111 = 8 * v110;
      v112 = 0;
      v113 = 0;
      do
      {
        v114 = &v108[v112];
        v115 = bswap32(*(unsigned __int16 *)&v108[v112 + 4]) >> 16;
        if ( !v115 )
          goto LABEL_190;
        if ( v115 == 3 )
        {
          v116 = bswap32(*((unsigned __int16 *)v114 + 3)) >> 16;
          v117 = v116 == 10;
          if ( v116 != 10 )
            v117 = v116 == 1;
          if ( v117 )
          {
LABEL_190:
            v113 = bswap32(*((_DWORD *)v114 + 2)) + v26;
            *(_DWORD *)(v753 + 44) = v113;
          }
        }
        v112 += 8;
      }
      while ( v111 != v112 );
      if ( !v113 )
        goto LABEL_369;
      v118 = &unk_53880;
      v119 = (_WORD *)v739[12];
      *(_DWORD *)(v753 + 48) = bswap32(*(unsigned __int16 *)&v734[*(_DWORD *)(v753 + 20) + 50] << 16);
      v120 = (int *)(v753 + 164);
      v121 = *v16;
      if ( v119 )
        v118 = v119;
      *(_DWORD *)(v753 + 156) = v118;
      if ( *v118 )
      {
        v122 = v118 + 1;
        do
        {
          v123 = *v122;
          if ( !*v122 )
            break;
          v124 = *v120;
          v125 = v122[1];
          v122 += 2;
          if ( *v120 < v123 )
            v124 = v123;
          *v120 = v124;
        }
        while ( v125 );
      }
      v1 = v726;
      v126 = (_DWORD *)(v723 + 24 * v121);
      v127 = *v120;
      v128 = v126[1];
      v129 = v726[19];
      ++*v126;
      if ( v128 < v127 )
        v128 = v127;
      v126[1] = v128;
      v12 = v760 + 1;
      v130 = v760 + 1 < v129;
      v11 = -1;
    }
    while ( v130 );
  }
  if ( v708 < 1 )
  {
    v754 = 0;
  }
  else
  {
    v213 = 0;
    v754 = 0;
    do
    {
      v214 = v705 + 196 * v213;
      v215 = *(_QWORD *)(v214 + 160);
      sub_A24BC(v214 + 172, HIDWORD(v215) + 1, v11);
      v216 = (_DWORD *)(v723 + 24 * v215);
      if ( !v216[3] )
        sub_A24BC(v216 + 3, v216[1] + 1, v11);
      v217 = *(unsigned __int16 **)(v214 + 156);
      v728 = v213;
      v218 = *v217;
      if ( *v217 )
      {
        v219 = (_DWORD *)(v214 + 168);
        v220 = v216 + 2;
        v11 = 1;
        v749 = (int *)(v214 + 180);
        v761 = v705 + 196 * v213;
        v735 = v216 + 5;
        do
        {
          v740 = v217;
          v221 = v217[1];
          if ( !v221 )
            break;
          if ( v218 <= v221 )
          {
            v222 = v221 + 1;
            v223 = *v735;
            do
            {
              v224 = v218 >> 5;
              v225 = 1 << (v218 & 0x1F);
              if ( (*(_DWORD *)(v223 + 4 * (v218 >> 5)) & v225) == 0 )
              {
                if ( sub_A251C(v761, v218, 1) )
                {
                  v226 = *v220;
                  v227 = *v749;
                  ++*v219;
                  *v220 = v226 + 1;
                  *(_DWORD *)(v227 + 4 * v224) |= v225;
                  *(_DWORD *)(v223 + 4 * v224) |= v225;
                  ++v754;
                }
                v11 = 1;
              }
              ++v218;
            }
            while ( v222 != v218 );
          }
          v1 = v726;
          v217 = v740 + 2;
          v218 = v740[2];
        }
        while ( v740[2] );
      }
      v213 = v728 + 1;
    }
    while ( v728 + 1 != v708 );
    for ( i = 0; i != v708; i = v249 + 1 )
    {
      v729 = i;
      v736 = (_DWORD *)(v705 + 196 * i);
      v229 = v736 + 46;
      v762 = v736 + 47;
      v230 = v736[42];
      if ( v736[47] < v230 )
      {
        v231 = (void *)sub_885E4(4 * v230);
        v232 = (int)v231;
        v234 = v736 + 48;
        v233 = (const void *)v736[48];
        if ( v233 )
        {
          j_memcpy(v231, v233, 4 * *v229);
          sub_88614(*v234);
        }
        *v234 = v232;
        *v762 = v230;
      }
      v236 = v736 + 43;
      v235 = v736[43];
      v238 = v736 + 45;
      v237 = (unsigned int *)v736[45];
      if ( v235 >= 1 )
      {
        v239 = (const void **)(v736 + 48);
        v240 = 0;
        v741 = (unsigned int)&v237[v235];
        do
        {
          v241 = *v237;
          v750 = v237;
          if ( *v237 )
          {
            for ( j = 0; j != 32; ++j )
            {
              if ( v241 >> j << 31 )
              {
                v243 = *v229;
                v244 = *v762;
                LODWORD(v779) = v240 + j;
                if ( v243 == v244 )
                {
                  v245 = v243 + 1;
                  if ( v243 )
                    v246 = v243 + v243 / 2;
                  else
                    v246 = 8;
                  if ( v246 > v245 )
                    v245 = v246;
                  if ( v243 < v245 )
                  {
                    v247 = (void *)sub_885E4(4 * v245);
                    v248 = v247;
                    if ( *v239 )
                    {
                      j_memcpy(v247, *v239, 4 * *v229);
                      sub_88614((int)*v239);
                    }
                    *v239 = v248;
                    *v762 = v245;
                    v243 = *v229;
                  }
                }
                *((_DWORD *)*v239 + v243) = LODWORD(v779);
                ++*v229;
              }
            }
          }
          v240 += 32;
          v237 = v750 + 1;
        }
        while ( (unsigned int)(v750 + 1) < v741 );
        v238 = v736 + 45;
        v1 = v726;
        v236 = v736 + 43;
        v237 = (unsigned int *)v736[45];
      }
      v249 = v729;
      if ( v237 )
      {
        *v236 = 0;
        v736[44] = 0;
        sub_88614((int)v237);
        v249 = v729;
        *v238 = 0;
      }
    }
  }
  v250 = v713;
  if ( v713 < 1 )
  {
    if ( !v723 )
      goto LABEL_423;
  }
  else
  {
    v251 = (int *)(v723 + 20);
    do
    {
      v252 = *v251;
      if ( *v251 )
      {
        *(v251 - 2) = 0;
        *(v251 - 1) = 0;
        sub_88614(v252);
        *v251 = 0;
      }
      v251 += 6;
      --v250;
    }
    while ( v250 );
  }
  sub_88614(v723);
LABEL_423:
  v770 = 0;
  v768 = 0;
  v769 = 0LL;
  v766 = 0;
  v767 = 0;
  if ( v754 < 1 )
  {
    LODWORD(v769) = v754;
    v259 = 0;
    v257 = 0;
    v258 = 0;
  }
  else
  {
    v253 = 8;
    if ( (unsigned int)v754 > 8 )
      v253 = v754;
    v254 = 8;
    v255 = sub_885E4(16 * v253);
    v770 = v255;
    v769 = __PAIR64__(v253, v754);
    if ( (unsigned int)v754 > 8 )
      v254 = v754;
    v256 = sub_885E4(28 * v254);
    v767 = v254;
    v768 = v256;
    v257 = v256;
    v258 = v256;
    v259 = v255;
  }
  v766 = v754;
  sub_10967C(v259, 16 * v754);
  sub_10967C(v258, 28 * v754);
  if ( v708 < 1 )
  {
    v763 = 0;
  }
  else
  {
    v763 = 0;
    v260 = 0;
    v261 = 0;
    v724 = 0;
    v709 = v259;
    v706 = v257;
    do
    {
      v262 = v705 + 196 * v261;
      v263 = *(_DWORD *)(v262 + 168);
      if ( v263 )
      {
        v721 = v261;
        v264 = (_DWORD *)(v1[21] + 116 * v261);
        v265 = v257;
        v755 = v262;
        v266 = v264[5];
        v267 = v257 + 28 * v724;
        *(_DWORD *)(v262 + 148) = v259 + 16 * v260;
        v268 = v259;
        v716 = v264 + 5;
        *(_DWORD *)(v262 + 128) = 0;
        *(_DWORD *)(v262 + 152) = v267;
        *(_DWORD *)(v262 + 140) = v267;
        v269 = v264[4];
        v270 = v264[6];
        v271 = *(_DWORD *)(v262 + 192);
        v714 = v264 + 6;
        v730 = (int *)(v262 + 192);
        v272 = *(_DWORD *)(v262 + 184);
        *(_BYTE *)(v262 + 144) = v266;
        v742 = (int *)(v262 + 184);
        *(_DWORD *)(v262 + 132) = v271;
        *(_DWORD *)(v262 + 136) = v272;
        *(_BYTE *)(v262 + 145) = v270;
        v751 = (_DWORD *)(v262 + 148);
        *(_DWORD *)(v262 + 124) = v269;
        v260 += v263;
        v724 += v263;
        if ( v272 < 1 )
        {
          v259 = v268;
          v261 = v721;
          v257 = v265;
        }
        else
        {
          v273 = 1;
          v274 = v1[4];
          v275 = 0;
          v737 = v274;
          while ( 1 )
          {
            v276 = sub_A251C(v755, *(_DWORD *)(v271 + v275), v272);
            sub_A26C8(v755, v276, &v779, &v778, &v777, &v776);
            v277 = *v716 + v777 + v737 - LOWORD(v779) - 1;
            v278 = *v751 + 4 * v275;
            v279 = v776 + v737 - v778 + *v714 - 1;
            *(_WORD *)(v278 + 4) = v277;
            *(_WORD *)(v278 + 6) = v279;
            v272 = v763 + v279 * v277;
            v763 = v272;
            if ( v273 >= *v742 )
              break;
            v275 += 4;
            ++v273;
            v271 = *v730;
          }
          v1 = v726;
          v259 = v709;
          v257 = v706;
          v261 = v721;
        }
      }
      ++v261;
    }
    while ( v261 != v708 );
  }
  v280 = v1[3];
  v1[8] = 0;
  if ( v280 <= 0 )
  {
    v281 = (int)sqrtf((float)v763);
    if ( v281 <= 2866 )
    {
      if ( v281 <= 1432 )
      {
        v280 = 512;
        if ( v281 >= 716 )
          v280 = 1024;
      }
      else
      {
        v280 = 2048;
      }
    }
    else
    {
      v280 = 4096;
    }
  }
  v685 = v1[4];
  v1[7] = v280;
  v282 = sub_885E4(48);
  v283 = v280 - v685;
  v284 = sub_885E4(8 * (v280 - v685));
  v285 = v284;
  v286 = v282 == 0;
  if ( v282 )
    v286 = v284 == 0;
  if ( v286 )
  {
    if ( v282 )
      sub_88614(v282);
    if ( v285 )
      sub_88614(v285);
    v285 = 0;
    LOWORD(v685) = 0;
    v280 = 0;
    v287 = 0;
  }
  else
  {
    v288 = 0;
    if ( v283 >= 2 )
    {
      v289 = (_DWORD *)(v284 + 4);
      v290 = v283 - 1;
      do
      {
        *v289 = v289 + 1;
        v289 += 2;
        --v290;
      }
      while ( v290 );
      v288 = v283 - 1;
    }
    *(_DWORD *)v282 = v283;
    *(_DWORD *)(v282 + 4) = 0x8000 - v685;
    *(_DWORD *)(v282 + 32) = 0;
    *(_WORD *)(v282 + 42) = -1;
    *(_DWORD *)(v282 + 12) = 1;
    *(_DWORD *)(v282 + 16) = 0;
    *(_DWORD *)(v282 + 20) = v283;
    *(_DWORD *)(v282 + 24) = v282 + 32;
    *(_DWORD *)(v282 + 28) = v284;
    *(_DWORD *)(v284 + 8 * v288 + 4) = 0;
    *(_DWORD *)(v282 + 8) = sub_108848(v283 - 1 + v283, v283);
    v287 = v282;
    *(_WORD *)(v282 + 40) = v283;
    *(_DWORD *)(v282 + 44) = 0;
    *(_DWORD *)(v282 + 36) = v282 + 40;
  }
  v671 = v287;
  sub_A28AC(v1);
  v695 = v285;
  v764 = v280;
  if ( v708 >= 1 )
  {
    for ( k = 0; k != v708; ++k )
    {
      v292 = v705 + 196 * k;
      v294 = (int *)(v292 + 168);
      v293 = *(_DWORD *)(v292 + 168);
      if ( v293 )
      {
        v296 = *(void **)(v292 + 148);
        v295 = (_DWORD *)(v292 + 148);
        sub_A2994(v671, v296, v293);
        v297 = *v294;
        if ( *v294 >= 1 )
        {
          v298 = (unsigned __int16 *)(*v295 + 6);
          do
          {
            if ( *(_DWORD *)(v298 + 3) )
            {
              v299 = *v298;
              v300 = v1[8];
              if ( v300 < v298[2] + v299 )
                v300 = v298[2] + v299;
              v1[8] = v300;
            }
            v298 += 8;
            --v297;
          }
          while ( v297 );
        }
      }
    }
  }
  v301 = v1[8];
  if ( !(*((unsigned __int8 *)v1 + 4) << 31) )
  {
    v302 = (v301 - 1) | ((v301 - 1) >> 1) | (((v301 - 1) | ((v301 - 1) >> 1)) >> 2);
    v303 = v302 | (v302 >> 4) | ((v302 | (v302 >> 4)) >> 8);
    v301 = v303 | (v303 >> 16);
  }
  v304 = v1[7];
  v305 = v301 + 1;
  v1[8] = v305;
  v306 = v695;
  *((float *)v1 + 9) = 1.0 / (float)v304;
  *((float *)v1 + 10) = 1.0 / (float)v305;
  v307 = sub_885E4(v305 * v304);
  v308 = *(_QWORD *)(v1 + 7);
  v1[5] = v307;
  sub_10967C(v307, v308 * HIDWORD(v308));
  if ( v708 >= 1 )
  {
    v309 = 0;
    v680 = v1[5];
    do
    {
      v310 = v705 + 196 * v309;
      v699 = (int *)(v310 + 168);
      if ( *(_DWORD *)(v310 + 168) )
      {
        v311 = *(float *)(v310 + 124);
        v312 = (_DWORD *)(v310 + 4);
        v693 = (_DWORD *)(v310 + 4);
        v694 = (_DWORD *)(v310 + 28);
        if ( v311 <= 0.0 )
        {
          v311 = -v311;
          v313 = (float)(bswap32(*(unsigned __int16 *)(*v312 + *(_DWORD *)(v310 + 20) + 18)) >> 16);
        }
        else
        {
          v313 = (float)((__int16)bswap16(*(_WORD *)(*(_DWORD *)(v310 + 28) + *v312 + 4))
                       - ((int)bswap32(*(unsigned __int16 *)(*(_DWORD *)(v310 + 28) + *v312 + 6)) >> 16));
        }
        v314 = v311 / v313;
        v315 = *(_DWORD *)(v310 + 148);
        v676 = (int *)(v310 + 148);
        v316 = *(unsigned __int8 *)(v310 + 144);
        v673 = v1[21];
        v752 = *(unsigned __int8 *)(v310 + 145);
        v317 = 0.0;
        v318 = (float)v316;
        if ( *(_BYTE *)(v310 + 144) )
          v317 = (float)(int)(1 - v316) / (float)(v318 + v318);
        v319 = 0.0;
        v738 = *(unsigned __int8 *)(v310 + 144);
        v320 = (float)v752;
        if ( *(_BYTE *)(v310 + 145) )
          v319 = (float)(int)(1 - v752) / (float)(v320 + v320);
        v692 = (int *)(v310 + 136);
        v707 = (_DWORD *)(v705 + 196 * v309);
        v321 = *(_DWORD *)(v310 + 136);
        v698 = v309;
        if ( v321 >= 1 )
        {
          v322 = v314 * v318;
          v323 = 0;
          v324 = 1.0 / v318;
          v689 = v707 + 33;
          v325 = 1.0 / v320;
          v688 = *(_DWORD *)(v310 + 148);
          v670 = 4 - 4 * v316;
          v675 = 1 - v752;
          v674 = 1 - v316;
          v326 = -(float)(v314 * v320);
          do
          {
            v337 = v315 + 16 * v323;
            if ( *(_DWORD *)(v337 + 12) )
            {
              v338 = *(_WORD *)(v337 + 4);
              v725 = (_WORD *)(v337 + 4);
              if ( v338 )
              {
                v339 = *(_WORD *)(v337 + 6);
                v722 = (_WORD *)(v337 + 6);
                if ( v339 )
                {
                  v340 = v315 + 16 * v323;
                  v702 = v323;
                  if ( *v689 )
                    v341 = *(_DWORD *)(*v689 + 4 * v323);
                  else
                    v341 = v707[32] + v323;
                  v701 = v707[35];
                  v342 = sub_A251C(v707, v341, v315);
                  v343 = *(_WORD *)(v340 + 8);
                  *v725 = v338 - v685;
                  *v722 = v339 - v685;
                  *(_WORD *)(v340 + 8) = v343 + v685;
                  v344 = (unsigned __int16 *)(v340 + 10);
                  *(_WORD *)(v340 + 10) += v685;
                  v345 = bswap32(*(unsigned __int16 *)(*v694 + *v693 + 34) << 16);
                  v346 = 4 * v345 - 4;
                  if ( v345 > v342 )
                    v346 = 4 * v342;
                  v700 = *(unsigned __int16 *)(v707[8] + *v693 + v346);
                  sub_A26C8(v707, v342, &v774, &v773, v772, v771);
                  v715 = (unsigned __int16 *)(v340 + 8);
                  v743 = *(unsigned __int16 *)(v340 + 8);
                  v347 = *v344;
                  v348 = (unsigned __int16)*v722;
                  v712 = v344;
                  v703 = (unsigned __int16)*v725;
                  v717 = sub_A5304(v707, v342, &v775);
                  v756 = v703 - v738;
                  sub_A26C8(v707, v342, &v777, &v776, 0, 0);
                  v696 = v703 - v738 + 1;
                  if ( v703 - v738 != -1 )
                  {
                    v697 = v348 - v752;
                    v690 = v348 - v752 + 1;
                    if ( v348 - v752 != -1 )
                    {
                      v683 = v776;
                      v681 = v777;
                      v349 = v775;
                      LODWORD(v779) = 0;
                      if ( v717 >= 1 )
                      {
                        v350 = v680 + v743 + v764 * v347;
                        v351 = v717;
                        v352 = 0;
                        v672 = v350;
                        v353 = (unsigned __int8 *)(v775 + 12);
                        do
                        {
                          v355 = *v353;
                          v353 += 14;
                          v354 = v355;
                          v356 = v352;
                          if ( v355 == 1 )
                            ++v352;
                          --v351;
                        }
                        while ( v351 );
                        v678 = v354;
                        v686 = v356;
                        if ( v352 )
                        {
                          v744 = sub_885E4(4 * v352);
                          if ( v744 )
                          {
                            v710 = (__int16 *)(v349 + 6);
                            v357 = 0;
                            v358 = 1;
                            v359 = 0;
                            v360 = 0;
                            do
                            {
                              if ( v357 << 31 )
                              {
                                v360 = sub_885E4(8 * LODWORD(v779));
                                if ( !v360 )
                                {
                                  sub_88614(0);
                                  sub_88614(v744);
                                  goto LABEL_793;
                                }
                              }
                              v731 = v358;
                              LODWORD(v779) = 0;
                              v361 = v717;
                              v362 = -1;
                              v363 = v710;
                              do
                              {
                                switch ( *((_BYTE *)v363 + 6) )
                                {
                                  case 1:
                                    if ( v362 >= 0 )
                                      *(_DWORD *)(v744 + 4 * v362) = LODWORD(v779) - v359;
                                    ++v362;
                                    v359 = LODWORD(v779);
                                    v364 = (float)*(v363 - 2);
                                    v365 = *(v363 - 3);
                                    ++LODWORD(v779);
                                    v366 = (float)v365;
                                    if ( v360 )
                                    {
                                      v367 = (float *)(v360 + 8 * v359);
                                      goto LABEL_525;
                                    }
                                    break;
                                  case 2:
                                    v364 = (float)*(v363 - 2);
                                    v368 = LODWORD(v779);
                                    v366 = (float)*(v363 - 3);
                                    ++LODWORD(v779);
                                    if ( v360 )
                                    {
                                      v367 = (float *)(v360 + 8 * v368);
LABEL_525:
                                      *v367 = v366;
                                      v367[1] = v364;
                                    }
                                    break;
                                  case 3:
                                    sub_A5A74(v360, &v779, 0, *v363);
                                    break;
                                  case 4:
                                    sub_A5B66(v360, &v779, 0, v363[2]);
                                    break;
                                  default:
                                    break;
                                }
                                --v361;
                                v363 += 7;
                              }
                              while ( v361 );
                              v358 = 0;
                              *(_DWORD *)(v744 + 4 * v362) = LODWORD(v779) - v359;
                              v357 = 1;
                            }
                            while ( v731 << 31 );
                            if ( v360 )
                            {
                              if ( v352 < 4 )
                              {
                                v369 = 0;
                                v370 = 0;
                                goto LABEL_533;
                              }
                              v371 = 0uLL;
                              v372 = (int32x4_t *)v744;
                              v370 = v352 & 0x7FFFFFFC;
                              v373 = v352 & 0x7FFFFFFC;
                              do
                              {
                                v374 = *v372++;
                                v373 -= 4;
                                v371 = vaddq_s32(v374, v371);
                              }
                              while ( v373 );
                              v375 = vadd_s32((int32x2_t)v371.n128_u64[0], *(int32x2_t *)&v371.n128_i8[8]).n64_u64[0];
                              v369 = HIDWORD(v375) + v375;
                              if ( v352 != v370 )
                              {
LABEL_533:
                                v376 = v686 - v370;
                                if ( v678 == 1 )
                                  ++v376;
                                v377 = (int *)(v744 + 4 * v370);
                                do
                                {
                                  v378 = *v377++;
                                  --v376;
                                  v369 += v378;
                                }
                                while ( v376 );
                              }
                              v732 = sub_885E4(20 * v369 + 20);
                              if ( v732 )
                              {
                                v379 = v360 + 4;
                                v380 = 0;
                                v381 = 0;
                                v382 = 0;
                                v687 = v360;
                                do
                                {
                                  v383 = *(_DWORD *)(v744 + 4 * v381);
                                  if ( v383 >= 1 )
                                  {
                                    v384 = v687 + 8 * v382;
                                    v385 = v383 - 1;
                                    v386 = (float *)(v379 + 8 * v382);
                                    v387 = *(_DWORD *)(v744 + 4 * v381);
                                    v388 = *(float *)(v384 + 8 * (v383 - 1) + 4);
                                    v389 = 0;
                                    do
                                    {
                                      v390 = *v386;
                                      v391 = v389;
                                      if ( v388 != *v386 )
                                      {
                                        v392 = v385;
                                        if ( v388 <= v390 )
                                          v385 = v391;
                                        else
                                          v392 = v391;
                                        v393 = (float *)(v384 + 8 * v385);
                                        v394 = (float *)(v384 + 8 * v392);
                                        v395 = v393[1];
                                        v396 = (float)(*v393 * v322) + 0.0;
                                        v397 = v388 > v390;
                                        v398 = *v394;
                                        v399 = v394[1];
                                        v400 = 5 * v380++;
                                        v401 = v732 + 4 * v400;
                                        *(_DWORD *)(v401 + 16) = v397;
                                        v387 = *(_DWORD *)(v744 + 4 * v381);
                                        *(float *)v401 = v396;
                                        *(float *)(v401 + 4) = (float)(v395 * v326) + 0.0;
                                        *(float *)(v401 + 8) = (float)(v398 * v322) + 0.0;
                                        *(float *)(v401 + 12) = (float)(v399 * v326) + 0.0;
                                      }
                                      v388 = v390;
                                      v389 = v391 + 1;
                                      v386 += 2;
                                      v385 = v391;
                                    }
                                    while ( v391 + 1 < v387 );
                                  }
                                  ++v381;
                                  v382 += v383;
                                }
                                while ( v381 != v352 );
                                sub_A5CC4(v732, v380);
                                if ( v380 >= 2 )
                                {
                                  v402 = 1;
                                  v403 = v732 + 20;
                                  do
                                  {
                                    v404 = v732 + 20 * v402;
                                    v405 = *(double *)(v404 + 8);
                                    v406 = *(_DWORD *)(v404 + 16);
                                    v407 = *(_DWORD *)v404;
                                    v408 = *(float *)(v404 + 4);
                                    v409 = v402;
                                    v780 = v406;
                                    v410 = v403;
                                    v779 = v405;
                                    while ( v408 < *(float *)(v410 - 16) )
                                    {
                                      --v409;
                                      v411 = *(_QWORD *)(v410 - 12);
                                      *(_QWORD *)v410 = *(_QWORD *)(v410 - 20);
                                      *(_QWORD *)(v410 + 8) = v411;
                                      *(_DWORD *)(v410 + 16) = *(_DWORD *)(v410 - 4);
                                      v410 -= 20;
                                      if ( v409 + 1 <= 1 )
                                      {
                                        v409 = 0;
                                        break;
                                      }
                                    }
                                    if ( v402 != v409 )
                                    {
                                      v412 = v779;
                                      v413 = v732 + 20 * v409;
                                      v414 = v780;
                                      *(_DWORD *)v413 = v407;
                                      *(float *)(v413 + 4) = v408;
                                      *(double *)(v413 + 8) = v412;
                                      *(_DWORD *)(v413 + 16) = v414;
                                    }
                                    ++v402;
                                    v403 += 20;
                                  }
                                  while ( v402 != v380 );
                                }
                                v778 = 0;
                                if ( v756 < 64 )
                                  v415 = &v779;
                                else
                                  v415 = (double *)sub_885E4(8 * v696 + 4);
                                *(float *)(v732 + 20 * v380 + 4) = (float)(v690 + v683) + 1.0;
                                if ( v697 <= 0x7FFFFFFE )
                                {
                                  v416 = (int)v415;
                                  v417 = 0;
                                  v418 = 0;
                                  v419 = v732;
                                  v679 = (float *)v415 + v696;
                                  v420 = (float)v681;
                                  v691 = v679 + 1;
                                  v421 = (float)v696;
                                  v422 = (_BYTE *)v672;
                                  v423 = v670 + 4 * v703;
                                  v424 = v683;
                                  v711 = 0;
                                  v682 = 0;
                                  v669 = v314;
                                  v704 = 0;
                                  v677 = v423;
                                  while ( 1 )
                                  {
                                    v718 = v424;
                                    sub_10967C(v416, 4 * v696);
                                    sub_10967C((int)v679, 4 * v696 + 4);
                                    v426 = (float)v718;
                                    if ( v417 )
                                    {
                                      v427 = v682;
                                      v428 = (int *)&v778;
                                      do
                                      {
                                        if ( *(float *)(v417 + 24) <= v426 )
                                        {
                                          v429 = *(_DWORD *)v417;
                                          *(_DWORD *)(v417 + 16) = 0;
                                          *v428 = v429;
                                          *(_DWORD *)v417 = v427;
                                          v427 = v417;
                                        }
                                        else
                                        {
                                          v428 = (int *)v417;
                                        }
                                        v417 = *v428;
                                      }
                                      while ( *v428 );
                                    }
                                    else
                                    {
                                      v427 = v682;
                                    }
                                    v430 = v426 + 1.0;
                                    v431 = v683;
                                    if ( v683 )
                                      v431 = 1;
                                    v432 = *(float *)(v419 + 4);
                                    if ( v432 <= v430 )
                                      break;
                                    v433 = v704;
LABEL_574:
                                    v417 = v778;
                                    v682 = v427;
                                    v704 = v433;
                                    if ( v778 )
                                    {
                                      v434 = v430 - v426;
                                      v435 = v778;
                                      while ( 1 )
                                      {
                                        v436 = *(float *)(v435 + 8);
                                        v437 = *(float *)(v435 + 4);
                                        if ( v436 == 0.0 )
                                        {
                                          if ( v437 < v421 )
                                          {
                                            if ( v437 >= 0.0 )
                                            {
                                              if ( v430 != v426 )
                                              {
                                                v452 = *(float *)(v435 + 24);
                                                v453 = (int)v437;
                                                if ( v452 >= v426 )
                                                {
                                                  v454 = *(float *)(v435 + 20);
                                                  if ( v454 <= v430 )
                                                  {
                                                    v455 = *(float *)(v435 + 4);
                                                    v456 = (float)v718;
                                                    if ( v454 > v426 )
                                                    {
                                                      v456 = *(float *)(v435 + 20);
                                                      v455 = v437
                                                           + (float)((float)((float)(v437 - v437) * (float)(v454 - v426))
                                                                   / v434);
                                                    }
                                                    v457 = *(float *)(v435 + 4);
                                                    v458 = v426 + 1.0;
                                                    if ( v452 < v430 )
                                                    {
                                                      v457 = v437
                                                           + (float)((float)((float)(v452 - v430) * (float)(v437 - v455))
                                                                   / (float)(v430 - v456));
                                                      v458 = *(float *)(v435 + 24);
                                                    }
                                                    v459 = (float)(int)v437;
                                                    if ( v455 > v459 )
                                                    {
                                                      if ( v455 < (float)(v453 + 1) )
                                                        *((float *)v415 + v453) = *((float *)v415 + v453)
                                                                                + (float)((float)((float)(v458 - v456)
                                                                                                * *(float *)(v435 + 16))
                                                                                        * (float)((float)((float)((float)(v455 - v459) + (float)(v457 - v459)) * -0.5)
                                                                                                + 1.0));
                                                    }
                                                    else
                                                    {
                                                      *((float *)v415 + v453) = *((float *)v415 + v453)
                                                                              + (float)(*(float *)(v435 + 16)
                                                                                      * (float)(v458 - v456));
                                                    }
                                                  }
                                                }
                                                v541 = *(float *)(v435 + 24);
                                                if ( v541 >= v426 )
                                                {
                                                  v542 = *(float *)(v435 + 20);
                                                  if ( v542 <= v430 )
                                                  {
                                                    v543 = v437;
                                                    v544 = (float)v718;
                                                    if ( v542 > v426 )
                                                    {
                                                      v544 = *(float *)(v435 + 20);
                                                      v543 = v437
                                                           + (float)((float)((float)(v437 - v437) * (float)(v542 - v426))
                                                                   / v434);
                                                    }
                                                    if ( v541 >= v430 )
                                                      v541 = v426 + 1.0;
                                                    else
                                                      v437 = v437
                                                           + (float)((float)((float)(v541 - v430) * (float)(v437 - v543))
                                                                   / (float)(v430 - v544));
                                                    v545 = (float)(v453 + 1);
                                                    if ( v543 > v545 )
                                                    {
                                                      if ( v543 < (float)(v453 + 2) )
                                                        v691[v453] = v691[v453]
                                                                   + (float)((float)((float)(v541 - v544)
                                                                                   * *(float *)(v435 + 16))
                                                                           * (float)((float)((float)((float)(v543 - v545) + (float)(v437 - v545))
                                                                                           * -0.5)
                                                                                   + 1.0));
                                                    }
                                                    else
                                                    {
                                                      v691[v453] = v691[v453]
                                                                 + (float)(*(float *)(v435 + 16) * (float)(v541 - v544));
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            else if ( v430 != v426 )
                                            {
                                              v438 = *(float *)(v435 + 24);
                                              if ( v438 >= v426 )
                                              {
                                                v439 = *(float *)(v435 + 20);
                                                if ( v439 <= v430 )
                                                {
                                                  v440 = *(float *)(v435 + 4);
                                                  v441 = (float)v718;
                                                  if ( v439 > v426 )
                                                  {
                                                    v441 = *(float *)(v435 + 20);
                                                    v440 = v437
                                                         + (float)((float)((float)(v437 - v437) * (float)(v439 - v426))
                                                                 / v434);
                                                  }
                                                  if ( v438 >= v430 )
                                                    v438 = v426 + 1.0;
                                                  else
                                                    v437 = v437
                                                         + (float)((float)((float)(v438 - v430) * (float)(v437 - v440))
                                                                 / (float)(v430 - v441));
                                                  if ( v440 > 0.0 )
                                                  {
                                                    if ( v440 < 1.0 )
                                                      *v679 = *v679
                                                            + (float)((float)((float)(v438 - v441)
                                                                            * *(float *)(v435 + 16))
                                                                    * (float)((float)((float)(v440 + v437) * -0.5) + 1.0));
                                                  }
                                                  else
                                                  {
                                                    *v679 = *v679
                                                          + (float)(*(float *)(v435 + 16) * (float)(v438 - v441));
                                                  }
                                                }
                                              }
                                            }
                                          }
                                          goto LABEL_577;
                                        }
                                        v442 = *(float *)(v435 + 20);
                                        v443 = *(float *)(v435 + 24);
                                        v444 = *(float *)(v435 + 4);
                                        v445 = v436 + v437;
                                        if ( v442 > v426 )
                                          v444 = v437 + (float)(v436 * (float)(v442 - v426));
                                        v446 = v426 + 1.0;
                                        if ( v443 < v430 )
                                          v446 = *(float *)(v435 + 24);
                                        v447 = (float)v718;
                                        if ( v442 > v426 )
                                          v447 = *(float *)(v435 + 20);
                                        v448 = v436 + v437;
                                        if ( v443 < v430 )
                                          v448 = v437 + (float)(v436 * (float)(v443 - v426));
                                        if ( v444 >= 0.0 && v444 < v421 )
                                        {
                                          v460 = (int)v448;
                                          v461 = (int)v444;
                                          if ( SLODWORD(v444) == SLODWORD(v448) )
                                          {
                                            v462 = v446 - v447;
                                            *((float *)v415 + v461) = *((float *)v415 + v461)
                                                                    + (float)((float)((float)((float)((float)((float)(v444 - (float)(int)v444) + (float)(v448 - (float)(int)v444)) * -0.5)
                                                                                            + 1.0)
                                                                                    * *(float *)(v435 + 16))
                                                                            * (float)(v446 - v447));
                                            v463 = *(float *)(v435 + 16);
                                            v464 = &v691[v461];
                                          }
                                          else
                                          {
                                            v528 = *(float *)(v435 + 12);
                                            if ( v444 <= v448 )
                                            {
                                              v530 = (int)v448;
                                              v532 = v448;
                                              v460 = (int)v444;
                                              v448 = v444;
                                              v445 = *(float *)(v435 + 4);
                                            }
                                            else
                                            {
                                              v529 = v446 - v426;
                                              v530 = (int)v444;
                                              v531 = v447 - v426;
                                              v528 = -v528;
                                              v532 = v444;
                                              v447 = v430 - v529;
                                              v446 = v430 - v531;
                                            }
                                            v533 = v460 + 1;
                                            v534 = v426 + (float)((float)((float)(v460 + 1) - v445) * v528);
                                            v463 = *(float *)(v435 + 16);
                                            v535 = 1.0 - (float)((float)((float)(v448 - (float)v460) + 1.0) * 0.5);
                                            v536 = v463 * (float)(v534 - v447);
                                            *((float *)v415 + v460) = *((float *)v415 + v460) + (float)(v536 * v535);
                                            if ( v530 > v460 + 1 )
                                            {
                                              v537 = (float *)v415 + v460 + 1;
                                              v538 = ~v460 + v530;
                                              do
                                              {
                                                v539 = (float)((float)(v528 * v463) * 0.5) + v536;
                                                v536 = (float)(v528 * v463) + v536;
                                                --v538;
                                                *v537 = v539 + *v537;
                                                ++v537;
                                              }
                                              while ( v538 );
                                            }
                                            v540 = v536
                                                 + (float)((float)(v463
                                                                 * (float)((float)((float)((float)(v532 - (float)v530)
                                                                                         + 0.0)
                                                                                 * -0.5)
                                                                         + 1.0))
                                                         * (float)(v446
                                                                 - (float)(v534 + (float)(v528 * (float)(v530 - v533)))));
                                            v462 = v446 - v447;
                                            *((float *)v415 + v530) = v540 + *((float *)v415 + v530);
                                            v464 = &v691[v530];
                                          }
                                          *v464 = *v464 + (float)(v463 * v462);
                                          goto LABEL_577;
                                        }
                                        if ( (unsigned int)v756 <= 0x7FFFFFFE )
                                          break;
LABEL_577:
                                        v435 = *(_DWORD *)v435;
                                        if ( !v435 )
                                          goto LABEL_756;
                                      }
                                      v449 = (float *)(v435 + 16);
                                      v450 = 0;
                                      v451 = (float *)v415;
                                      while ( 2 )
                                      {
                                        v465 = v450++;
                                        v466 = (float)v465;
                                        v467 = (float)v450;
                                        v468 = v466 - v437;
                                        v469 = (float)v450 - v437;
                                        v470 = (float)((float)(v466 - v437) / v436) + v426;
                                        v471 = (float)(v469 / v436) + v426;
                                        if ( v437 < v466 && v445 > v467 )
                                        {
                                          if ( v470 != v426 )
                                          {
                                            v472 = *(float *)(v435 + 24);
                                            if ( v472 >= v426 )
                                            {
                                              v473 = *(float *)(v435 + 20);
                                              if ( v473 <= v470 )
                                              {
                                                v474 = v437;
                                                v475 = (float)v718;
                                                if ( v473 > v426 )
                                                {
                                                  v474 = v437
                                                       + (float)((float)(v468 * (float)(v473 - v426))
                                                               / (float)(v470 - v426));
                                                  v475 = *(float *)(v435 + 20);
                                                }
                                                v476 = v466;
                                                v477 = (float)((float)(v466 - v437) / v436) + v426;
                                                if ( v472 < v470 )
                                                {
                                                  v476 = (float)((float)((float)(v472 - v470) * (float)(v466 - v474))
                                                               / (float)(v470 - v475))
                                                       + v466;
                                                  v477 = *(float *)(v435 + 24);
                                                }
                                                if ( v474 > v466 )
                                                {
                                                  if ( v474 < v467 )
                                                    *v451 = *v451
                                                          + (float)((float)((float)(v477 - v475) * *v449)
                                                                  * (float)((float)((float)((float)(v474 - v466)
                                                                                          + (float)(v476 - v466))
                                                                                  * -0.5)
                                                                          + 1.0));
                                                }
                                                else
                                                {
                                                  *v451 = *v451 + (float)(*v449 * (float)(v477 - v475));
                                                }
                                              }
                                            }
                                          }
                                          if ( v470 != v471 )
                                          {
                                            v510 = *(float *)(v435 + 24);
                                            if ( v510 >= v470 )
                                            {
                                              v511 = *(float *)(v435 + 20);
                                              if ( v511 <= v471 )
                                              {
                                                if ( v511 <= v470 )
                                                {
                                                  v512 = v466;
                                                  v511 = (float)((float)(v466 - v437) / v436) + v426;
                                                }
                                                else
                                                {
                                                  v512 = (float)((float)((float)(v467 - v466) * (float)(v511 - v470))
                                                               / (float)(v471 - v470))
                                                       + v466;
                                                }
                                                v513 = (float)v450;
                                                v514 = v471;
                                                if ( v510 < v471 )
                                                {
                                                  v513 = (float)((float)((float)(v510 - v471) * (float)(v467 - v512))
                                                               / (float)(v471 - v511))
                                                       + v467;
                                                  v514 = *(float *)(v435 + 24);
                                                }
                                                if ( v512 > v466 )
                                                {
                                                  if ( v512 < v467 )
                                                    *v451 = *v451
                                                          + (float)((float)((float)(v514 - v511) * *v449)
                                                                  * (float)((float)((float)((float)(v512 - v466)
                                                                                          + (float)(v513 - v466))
                                                                                  * -0.5)
                                                                          + 1.0));
                                                }
                                                else
                                                {
                                                  v527 = v514 - v511;
LABEL_705:
                                                  *v451 = *v451 + (float)(*v449 * v527);
                                                }
                                              }
                                            }
                                          }
                                          goto LABEL_706;
                                        }
                                        if ( v445 < v466 && v437 > v467 )
                                        {
                                          if ( v471 != v426 )
                                          {
                                            v478 = *(float *)(v435 + 24);
                                            if ( v478 >= v426 )
                                            {
                                              v479 = *(float *)(v435 + 20);
                                              if ( v479 <= v471 )
                                              {
                                                v480 = v437;
                                                v481 = (float)v718;
                                                if ( v479 > v426 )
                                                {
                                                  v480 = v437
                                                       + (float)((float)(v469 * (float)(v479 - v426))
                                                               / (float)(v471 - v426));
                                                  v481 = *(float *)(v435 + 20);
                                                }
                                                v482 = (float)v450;
                                                v483 = (float)(v469 / v436) + v426;
                                                if ( v478 < v471 )
                                                {
                                                  v482 = (float)((float)((float)(v478 - v471) * (float)(v467 - v480))
                                                               / (float)(v471 - v481))
                                                       + v467;
                                                  v483 = *(float *)(v435 + 24);
                                                }
                                                if ( v480 > v466 )
                                                {
                                                  if ( v480 < v467 )
                                                    *v451 = *v451
                                                          + (float)((float)((float)(v483 - v481) * *v449)
                                                                  * (float)((float)((float)((float)(v480 - v466)
                                                                                          + (float)(v482 - v466))
                                                                                  * -0.5)
                                                                          + 1.0));
                                                }
                                                else
                                                {
                                                  *v451 = *v451 + (float)(*v449 * (float)(v483 - v481));
                                                }
                                              }
                                            }
                                          }
                                          if ( v471 != v470 )
                                          {
                                            v521 = *(float *)(v435 + 24);
                                            if ( v521 >= v471 )
                                            {
                                              v522 = *(float *)(v435 + 20);
                                              if ( v522 <= v470 )
                                              {
                                                if ( v522 <= v471 )
                                                {
                                                  v523 = (float)v450;
                                                  v522 = v471;
                                                }
                                                else
                                                {
                                                  v523 = (float)((float)((float)(v466 - v467) * (float)(v522 - v471))
                                                               / (float)(v470 - v471))
                                                       + v467;
                                                }
                                                v524 = v466;
                                                v525 = (float)((float)(v466 - v437) / v436) + v426;
                                                if ( v521 < v470 )
                                                {
                                                  v524 = (float)((float)((float)(v521 - v470) * (float)(v466 - v523))
                                                               / (float)(v470 - v522))
                                                       + v466;
                                                  v525 = *(float *)(v435 + 24);
                                                }
                                                if ( v523 > v466 )
                                                {
                                                  if ( v523 < v467 )
                                                    *v451 = *v451
                                                          + (float)((float)((float)(v525 - v522) * *v449)
                                                                  * (float)((float)((float)((float)(v523 - v466)
                                                                                          + (float)(v524 - v466))
                                                                                  * -0.5)
                                                                          + 1.0));
                                                }
                                                else
                                                {
                                                  v526 = v525 - v522;
LABEL_612:
                                                  *v451 = *v451 + (float)(*v449 * v526);
                                                }
                                              }
                                            }
                                          }
                                          goto LABEL_613;
                                        }
                                        if ( v437 < v466 && v445 > v466 || v445 < v466 && v437 > v466 )
                                        {
                                          if ( v470 != v426 )
                                          {
                                            v484 = *(float *)(v435 + 24);
                                            if ( v484 >= v426 )
                                            {
                                              v485 = *(float *)(v435 + 20);
                                              if ( v485 <= v470 )
                                              {
                                                v486 = v437;
                                                v487 = (float)v718;
                                                if ( v485 > v426 )
                                                {
                                                  v486 = v437
                                                       + (float)((float)(v468 * (float)(v485 - v426))
                                                               / (float)(v470 - v426));
                                                  v487 = *(float *)(v435 + 20);
                                                }
                                                v488 = v466;
                                                v489 = (float)((float)(v466 - v437) / v436) + v426;
                                                if ( v484 < v470 )
                                                {
                                                  v488 = (float)((float)((float)(v484 - v470) * (float)(v466 - v486))
                                                               / (float)(v470 - v487))
                                                       + v466;
                                                  v489 = *(float *)(v435 + 24);
                                                }
                                                if ( v486 <= v466 )
                                                {
                                                  v526 = v489 - v487;
                                                  goto LABEL_612;
                                                }
                                                if ( v486 < v467 )
                                                  *v451 = *v451
                                                        + (float)((float)((float)(v489 - v487) * *v449)
                                                                * (float)((float)((float)((float)(v486 - v466)
                                                                                        + (float)(v488 - v466))
                                                                                * -0.5)
                                                                        + 1.0));
                                              }
                                            }
                                          }
LABEL_613:
                                          if ( v470 != v430 )
                                          {
                                            v490 = *(float *)(v435 + 24);
                                            if ( v490 >= v470 )
                                            {
                                              v491 = *(float *)(v435 + 20);
                                              if ( v491 <= v430 )
                                              {
                                                if ( v491 <= v470 )
                                                {
                                                  v492 = v466;
                                                  v491 = (float)((float)(v466 - v437) / v436) + v426;
                                                }
                                                else
                                                {
                                                  v492 = (float)((float)((float)(v445 - v466) * (float)(v491 - v470))
                                                               / (float)(v430 - v470))
                                                       + v466;
                                                }
                                                v499 = v436 + v437;
                                                v500 = v426 + 1.0;
                                                if ( v490 < v430 )
                                                {
                                                  v499 = v445
                                                       + (float)((float)((float)(v490 - v430) * (float)(v445 - v492))
                                                               / (float)(v430 - v491));
                                                  v500 = *(float *)(v435 + 24);
                                                }
                                                if ( v492 <= v466 )
                                                {
                                                  v520 = v500 - v491;
                                                  goto LABEL_719;
                                                }
                                                if ( v492 < v467 )
                                                {
                                                  v501 = v499 - v466;
                                                  v502 = v492 - v466;
                                                  v503 = v500 - v491;
                                                  goto LABEL_718;
                                                }
                                              }
                                            }
                                          }
LABEL_614:
                                          ++v451;
                                          if ( v450 - 1 == v756 )
                                            goto LABEL_577;
                                          continue;
                                        }
                                        break;
                                      }
                                      if ( (v437 >= v467 || v445 <= v467) && (v445 >= v467 || v437 <= v467) )
                                      {
                                        if ( v430 == v426 )
                                          goto LABEL_614;
                                        v504 = *(float *)(v435 + 24);
                                        if ( v504 < v426 )
                                          goto LABEL_614;
                                        v505 = *(float *)(v435 + 20);
                                        if ( v505 > v430 )
                                          goto LABEL_614;
                                        v506 = v437;
                                        v507 = (float)v718;
                                        if ( v505 > v426 )
                                        {
                                          v507 = *(float *)(v435 + 20);
                                          v506 = v437
                                               + (float)((float)((float)(v445 - v437) * (float)(v505 - v426)) / v434);
                                        }
                                        v508 = v436 + v437;
                                        v509 = v426 + 1.0;
                                        if ( v504 < v430 )
                                        {
                                          v508 = v445
                                               + (float)((float)((float)(v504 - v430) * (float)(v445 - v506))
                                                       / (float)(v430 - v507));
                                          v509 = *(float *)(v435 + 24);
                                        }
                                        if ( v506 <= v466 )
                                        {
                                          v520 = v509 - v507;
LABEL_719:
                                          *v451 = *v451 + (float)(*v449 * v520);
                                          goto LABEL_614;
                                        }
                                        if ( v506 >= v467 )
                                          goto LABEL_614;
                                        v501 = v508 - v466;
                                        v502 = v506 - v466;
                                        v503 = v509 - v507;
                                      }
                                      else
                                      {
                                        if ( v471 != v426 )
                                        {
                                          v493 = *(float *)(v435 + 24);
                                          if ( v493 >= v426 )
                                          {
                                            v494 = *(float *)(v435 + 20);
                                            if ( v494 <= v471 )
                                            {
                                              v495 = v437;
                                              v496 = (float)v718;
                                              if ( v494 > v426 )
                                              {
                                                v495 = v437
                                                     + (float)((float)(v469 * (float)(v494 - v426))
                                                             / (float)(v471 - v426));
                                                v496 = *(float *)(v435 + 20);
                                              }
                                              v497 = (float)v450;
                                              v498 = (float)(v469 / v436) + v426;
                                              if ( v493 < v471 )
                                              {
                                                v497 = (float)((float)((float)(v493 - v471) * (float)(v467 - v495))
                                                             / (float)(v471 - v496))
                                                     + v467;
                                                v498 = *(float *)(v435 + 24);
                                              }
                                              if ( v495 <= v466 )
                                              {
                                                v527 = v498 - v496;
                                                goto LABEL_705;
                                              }
                                              if ( v495 < v467 )
                                                *v451 = *v451
                                                      + (float)((float)((float)(v498 - v496) * *v449)
                                                              * (float)((float)((float)((float)(v495 - v466)
                                                                                      + (float)(v497 - v466))
                                                                              * -0.5)
                                                                      + 1.0));
                                            }
                                          }
                                        }
LABEL_706:
                                        if ( v471 == v430 )
                                          goto LABEL_614;
                                        v515 = *(float *)(v435 + 24);
                                        if ( v515 < v471 )
                                          goto LABEL_614;
                                        v516 = *(float *)(v435 + 20);
                                        if ( v516 > v430 )
                                          goto LABEL_614;
                                        if ( v516 <= v471 )
                                        {
                                          v517 = (float)v450;
                                          v516 = v471;
                                        }
                                        else
                                        {
                                          v517 = (float)((float)((float)(v445 - v467) * (float)(v516 - v471))
                                                       / (float)(v430 - v471))
                                               + v467;
                                        }
                                        v518 = v436 + v437;
                                        v519 = v426 + 1.0;
                                        if ( v515 < v430 )
                                        {
                                          v518 = v445
                                               + (float)((float)((float)(v515 - v430) * (float)(v445 - v517))
                                                       / (float)(v430 - v516));
                                          v519 = *(float *)(v435 + 24);
                                        }
                                        if ( v517 <= v466 )
                                        {
                                          v520 = v519 - v516;
                                          goto LABEL_719;
                                        }
                                        if ( v517 >= v467 )
                                          goto LABEL_614;
                                        v501 = v518 - v466;
                                        v502 = v517 - v466;
                                        v503 = v519 - v516;
                                      }
LABEL_718:
                                      *v451 = *v451
                                            + (float)((float)(v503 * *v449)
                                                    * (float)((float)((float)(v502 + v501) * -0.5) + 1.0));
                                      goto LABEL_614;
                                    }
LABEL_756:
                                    v416 = (int)v415;
                                    if ( (unsigned int)v756 <= 0x7FFFFFFE )
                                    {
                                      v546 = 0.0;
                                      v547 = v696;
                                      v548 = (float *)v415;
                                      v549 = v422;
                                      do
                                      {
                                        v546 = v546 + *(float *)((char *)v548 + v677);
                                        v550 = *v548++;
                                        v551 = (int)(float)((float)(fabsf(v550 + v546) * 255.0) + 0.5);
                                        if ( v551 >= 255 )
                                          LOBYTE(v551) = -1;
                                        *v549++ = v551;
                                        --v547;
                                      }
                                      while ( v547 );
                                    }
                                    v552 = v417;
                                    if ( v417 )
                                    {
                                      do
                                      {
                                        v553 = *(_DWORD *)v552;
                                        v24 = *(_DWORD *)v552 == 0;
                                        *(float *)(v552 + 4) = *(float *)(v552 + 8) + *(float *)(v552 + 4);
                                        v552 = v553;
                                      }
                                      while ( !v24 );
                                    }
                                    v425 = v711;
                                    v424 = v718 + 1;
                                    v422 += v764;
                                    ++v711;
                                    if ( v425 == v697 )
                                    {
                                      v564 = v704;
                                      v314 = v669;
                                      if ( v704 )
                                      {
                                        do
                                        {
                                          v565 = (_DWORD *)*v564;
                                          sub_88614((int)v564);
                                          v564 = v565;
                                        }
                                        while ( v565 );
                                      }
                                      goto LABEL_789;
                                    }
                                  }
                                  v433 = v704;
                                  v554 = (unsigned __int8)v431 & (v711 == 0);
                                  while ( 2 )
                                  {
                                    if ( v432 != *(float *)(v419 + 12) )
                                    {
                                      if ( v427 )
                                      {
                                        v555 = *(_DWORD *)v427;
                                        goto LABEL_767;
                                      }
                                      if ( v418 )
                                      {
                                        --v418;
LABEL_785:
                                        v427 = (int)&v433[7 * v418 + 1];
                                        v555 = 0;
                                        if ( &v433[7 * v418] != (_DWORD *)-4 )
                                        {
LABEL_767:
                                          v556 = *(float *)(v419 + 4);
                                          v557 = *(float *)(v419 + 12);
                                          v558 = 0;
                                          v559 = (float)(*(float *)(v419 + 8) - *(float *)v419) / (float)(v557 - v556);
                                          v560 = *(float *)v419 + (float)(v559 * (float)(v426 - v556));
                                          v561 = 1.0;
                                          if ( !*(_DWORD *)(v419 + 16) )
                                            v561 = -1.0;
                                          v562 = 0.0;
                                          if ( v559 != 0.0 )
                                            v562 = 1.0 / v559;
                                          *(_DWORD *)v427 = 0;
                                          *(float *)(v427 + 8) = v559;
                                          *(float *)(v427 + 12) = v562;
                                          *(float *)(v427 + 16) = v561;
                                          *(float *)(v427 + 20) = v556;
                                          *(float *)(v427 + 24) = v557;
                                          *(float *)(v427 + 4) = v560 - v420;
                                          if ( v557 < v426 )
                                            v558 = 1;
                                          if ( (v558 & v554) == 1 )
                                            *(float *)(v427 + 24) = v426;
                                          *(_DWORD *)v427 = v778;
                                          v778 = v427;
                                        }
                                      }
                                      else
                                      {
                                        v563 = (_DWORD *)sub_885E4(56004);
                                        if ( v563 )
                                        {
                                          *v563 = v433;
                                          v418 = 1999;
                                          v433 = v563;
                                          goto LABEL_785;
                                        }
                                        v555 = 0;
                                        v418 = 0;
                                      }
                                      v427 = v555;
                                    }
                                    v432 = *(float *)(v419 + 24);
                                    v419 += 20;
                                    if ( v432 > v430 )
                                      goto LABEL_574;
                                    continue;
                                  }
                                }
LABEL_789:
                                v360 = v687;
                                if ( v415 != &v779 )
                                  sub_88614((int)v415);
                                sub_88614(v732);
                              }
                              sub_88614(v744);
                              sub_88614(v360);
                            }
                          }
                        }
                      }
                    }
                  }
LABEL_793:
                  sub_88614(v775);
                  v566 = v738;
                  v327 = v715;
                  if ( v738 >= 2 )
                  {
                    v567 = *v715;
                    v568 = (unsigned __int16)*v722;
                    v745 = v568;
                    v569 = (unsigned __int16)*v725;
                    v570 = *v712;
                    v779 = 0.0;
                    if ( v568 )
                    {
                      v571 = 0;
                      v572 = v567 + v680 + v764 * v570;
                      v573 = v674 + v569;
                      while ( 2 )
                      {
                        _memset_chk(&v779, 0, v566, 8);
                        v757 = v571;
                        switch ( v566 )
                        {
                          case 2u:
                            if ( v569 < v566 )
                              goto LABEL_815;
                            v574 = 0;
                            v575 = 0;
                            do
                            {
                              v576 = *(unsigned __int8 *)(v572 + v575);
                              v577 = *((unsigned __int8 *)&v779 + (v575 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v575 + 2) & 7)) = v576;
                              v574 += v576 - v577;
                              *(_BYTE *)(v572 + v575++) = v574 >> 1;
                            }
                            while ( v573 != v575 );
                            goto LABEL_818;
                          case 3u:
                            if ( v569 < v566 )
                              goto LABEL_815;
                            v574 = 0;
                            v581 = 0;
                            do
                            {
                              v582 = *(unsigned __int8 *)(v572 + v581);
                              v574 += v582 - *((unsigned __int8 *)&v779 + (v581 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v581 + 3) & 7)) = v582;
                              *(_BYTE *)(v572 + v581++) = v574 / 3;
                            }
                            while ( v573 != v581 );
                            goto LABEL_818;
                          case 4u:
                            if ( v569 < v566 )
                              goto LABEL_815;
                            v574 = 0;
                            v578 = 0;
                            do
                            {
                              v579 = *(unsigned __int8 *)(v572 + v578);
                              v580 = *((unsigned __int8 *)&v779 + (v578 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v578 + 4) & 7)) = v579;
                              v574 += v579 - v580;
                              *(_BYTE *)(v572 + v578++) = v574 >> 2;
                            }
                            while ( v573 != v578 );
                            goto LABEL_818;
                          case 5u:
                            if ( v569 < v566 )
                              goto LABEL_815;
                            v574 = 0;
                            v583 = 0;
                            do
                            {
                              v584 = *(unsigned __int8 *)(v572 + v583);
                              v574 += v584 - *((unsigned __int8 *)&v779 + (v583 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v583 + 5) & 7)) = v584;
                              *(_BYTE *)(v572 + v583++) = v574 / 5;
                            }
                            while ( v573 != v583 );
                            goto LABEL_818;
                          default:
                            if ( v569 >= v566 )
                            {
                              v574 = 0;
                              v586 = 0;
                              do
                              {
                                v587 = *(unsigned __int8 *)(v572 + v586);
                                v588 = *((unsigned __int8 *)&v779 + (v586 & 7));
                                *((_BYTE *)&v779 + (((_BYTE)v738 + (_BYTE)v586) & 7)) = v587;
                                v574 += v587 - v588;
                                *(_BYTE *)(v572 + v586++) = sub_108874(v574, v738);
                              }
                              while ( v573 != v586 );
LABEL_818:
                              v585 = v674 + v569;
                            }
                            else
                            {
LABEL_815:
                              v585 = 0;
                              v574 = 0;
                            }
                            v566 = v738;
                            if ( v585 < (int)v569 )
                            {
                              do
                              {
                                v574 -= *((unsigned __int8 *)&v779 + (v585 & 7));
                                *(_BYTE *)(v572 + v585++) = sub_108874(v574, v738);
                              }
                              while ( v569 != v585 );
                            }
                            v572 += v764;
                            v571 = v757 + 1;
                            if ( v757 + 1 != v745 )
                              continue;
                            goto LABEL_822;
                        }
                      }
                    }
LABEL_822:
                    v327 = v715;
                  }
                  if ( v752 >= 2 )
                  {
                    v589 = *v327;
                    v590 = (unsigned __int16)*v722;
                    v591 = (unsigned __int16)*v725;
                    v733 = v591;
                    v592 = *v712;
                    v779 = 0.0;
                    if ( v591 )
                    {
                      v593 = 0;
                      v719 = v590;
                      v594 = v589 + v680 + v764 * v592;
                      v595 = v675 + v590;
                      v758 = v675 + v590;
                      do
                      {
                        _memset_chk(&v779, 0, v752, 8);
                        v746 = v593;
                        switch ( v752 )
                        {
                          case 2u:
                            if ( v590 < v752 )
                              goto LABEL_845;
                            v596 = 0;
                            v597 = 0;
                            v598 = 0;
                            do
                            {
                              v599 = *(unsigned __int8 *)(v594 + v596);
                              v600 = *((unsigned __int8 *)&v779 + (v598 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v598++ + 2) & 7)) = v599;
                              v597 += v599 - v600;
                              *(_BYTE *)(v594 + v596) = v597 >> 1;
                              v596 += v764;
                            }
                            while ( v595 != v598 );
                            goto LABEL_843;
                          case 3u:
                            if ( v590 < v752 )
                              goto LABEL_845;
                            v605 = 0;
                            v597 = 0;
                            v606 = 0;
                            do
                            {
                              v607 = *(unsigned __int8 *)(v594 + v605);
                              v597 += v607 - *((unsigned __int8 *)&v779 + (v606 & 7));
                              v608 = (char *)&v779 + (((_BYTE)v606++ + 3) & 7);
                              *v608 = v607;
                              *(_BYTE *)(v594 + v605) = v597 / 3;
                              v605 += v764;
                            }
                            while ( v595 != v606 );
                            goto LABEL_843;
                          case 4u:
                            if ( v590 < v752 )
                              goto LABEL_845;
                            v601 = 0;
                            v597 = 0;
                            v602 = 0;
                            do
                            {
                              v603 = *(unsigned __int8 *)(v594 + v601);
                              v604 = *((unsigned __int8 *)&v779 + (v602 & 7));
                              *((_BYTE *)&v779 + (((_BYTE)v602++ + 4) & 7)) = v603;
                              v597 += v603 - v604;
                              *(_BYTE *)(v594 + v601) = v597 >> 2;
                              v601 += v764;
                            }
                            while ( v595 != v602 );
                            goto LABEL_843;
                          case 5u:
                            if ( v590 < v752 )
                              goto LABEL_845;
                            v609 = 0;
                            v597 = 0;
                            v610 = 0;
                            do
                            {
                              v611 = *(unsigned __int8 *)(v594 + v609);
                              v597 += v611 - *((unsigned __int8 *)&v779 + (v610 & 7));
                              v612 = (char *)&v779 + (((_BYTE)v610++ + 5) & 7);
                              *v612 = v611;
                              *(_BYTE *)(v594 + v609) = v597 / 5;
                              v609 += v764;
                            }
                            while ( v595 != v610 );
LABEL_843:
                            v613 = v595;
                            break;
                          default:
                            v614 = v764;
                            if ( v590 >= v752 )
                            {
                              v621 = 0;
                              v597 = 0;
                              v622 = 0;
                              do
                              {
                                v623 = v614;
                                v624 = *(unsigned __int8 *)(v594 + v621);
                                v625 = *((unsigned __int8 *)&v779 + (v622 & 7));
                                *((_BYTE *)&v779 + (((_BYTE)v752 + (_BYTE)v622) & 7)) = v624;
                                v597 += v624 - v625;
                                ++v622;
                                *(_BYTE *)(v594 + v621) = sub_108874(v597, v752);
                                v621 += v623;
                                v614 = v623;
                              }
                              while ( v758 != v622 );
                              v613 = v758;
                              v590 = v719;
                            }
                            else
                            {
LABEL_845:
                              v613 = 0;
                              v597 = 0;
                            }
                            break;
                        }
                        v615 = &v779;
                        v616 = v590;
                        if ( v613 < (int)v590 )
                        {
                          v617 = v764 * v613;
                          do
                          {
                            v618 = v594;
                            v619 = v615;
                            v620 = v616;
                            v597 -= *((unsigned __int8 *)v615 + (v613 & 7));
                            *(_BYTE *)(v618 + v617) = sub_108874(v597, v752);
                            ++v613;
                            v615 = v619;
                            v616 = v620;
                            v594 = v618;
                            v617 += v764;
                          }
                          while ( v620 != v613 );
                        }
                        ++v594;
                        v590 = v616;
                        v595 = v758;
                        v593 = v746 + 1;
                      }
                      while ( v746 + 1 != v733 );
                    }
                    v327 = v715;
                  }
                  v323 = v702;
                  v1 = v726;
                  v309 = v698;
                  v328 = (unsigned __int16)*v725;
                  v329 = v317 + (float)((float)v774 * v324);
                  v330 = (unsigned __int16)*v722;
                  v331 = *v327;
                  v332 = (float)(v773 + v330);
                  v333 = v319 + (float)((float)v773 * v325);
                  v334 = (float)(v774 + v328);
                  v335 = *v712;
                  *(_WORD *)(v701 + 28 * v702) = *v327;
                  v336 = v701 + 28 * v702;
                  *(_WORD *)(v336 + 6) = v330 + v335;
                  *(_WORD *)(v336 + 2) = v335;
                  *(_WORD *)(v336 + 4) = v331 + v328;
                  *(float *)(v336 + 8) = v329;
                  *(float *)(v336 + 12) = v333;
                  *(float *)(v336 + 16) = v314 * (float)(__int16)(bswap32(v700) >> 16);
                  *(float *)(v336 + 24) = v319 + (float)(v332 * v325);
                  *(float *)(v336 + 20) = v317 + (float)(v334 * v324);
                  v321 = *v692;
                  v315 = v688;
                }
              }
            }
            ++v323;
          }
          while ( v323 < v321 );
        }
        v306 = v695;
        v626 = *(float *)(v673 + 116 * v309 + 68);
        if ( v626 != 1.0 )
        {
          for ( m = 0; m != 256; ++m )
          {
            v628 = (unsigned int)(float)(v626 * (float)m);
            if ( v628 >= 0xFF )
              LOBYTE(v628) = -1;
            *((_BYTE *)&v779 + m) = v628;
          }
          v629 = *v699;
          if ( *v699 >= 1 )
          {
            v630 = 0;
            v631 = *v676;
            do
            {
              v632 = *(_DWORD *)(v631 + 12);
              v633 = v632 == 0;
              if ( v632 )
              {
                v632 = *(unsigned __int16 *)(v631 + 6);
                v633 = v632 == 0;
              }
              if ( !v633 )
              {
                v634 = *v684;
                v635 = *(unsigned __int16 *)(v631 + 4);
                v636 = v1[5] + *(unsigned __int16 *)(v631 + 8) + *v684 * *(unsigned __int16 *)(v631 + 10);
                do
                {
                  if ( v635 )
                  {
                    for ( n = 0; n != v635; ++n )
                      *(_BYTE *)(v636 + n) = *((_BYTE *)&v779 + *(unsigned __int8 *)(v636 + n));
                  }
                  v636 += v634;
                  v130 = v632-- <= 1;
                }
                while ( !v130 );
                v306 = v695;
                v629 = *v699;
              }
              ++v630;
              v631 += 16;
            }
            while ( v630 < v629 );
          }
          v309 = v698;
        }
        *v676 = 0;
      }
      ++v309;
    }
    while ( v309 != v708 );
  }
  sub_88614(v306);
  sub_88614(v671);
  if ( v770 )
  {
    v769 = 0LL;
    sub_88614(v770);
    v770 = 0;
  }
  if ( v708 >= 1 )
  {
    v638 = 0;
    do
    {
      v639 = (_DWORD *)(v705 + 196 * v638);
      v747 = v638;
      v765 = v639 + 42;
      if ( v639[42] )
      {
        v640 = 1.0;
        v641 = 1.0;
        v642 = v639[1] + v639[7];
        v643 = *(unsigned __int16 *)(v642 + 6);
        v644 = v726[21] + 116 * v747;
        v645 = bswap32(v643);
        v646 = (__int16)bswap16(*(_WORD *)(v642 + 4));
        v647 = (__int16)bswap16(v643);
        if ( v646 < 1 )
          v640 = -1.0;
        if ( v647 < 1 )
          v641 = -1.0;
        v648 = *(_DWORD *)(v644 + 112);
        v649 = *(float *)(v644 + 16) / (float)(v646 - (v645 >> 16));
        sub_A2D54(
          (int)v726,
          v648,
          v726[21] + 116 * v747,
          COERCE_INT((float)(int)(float)(v640 + (float)((float)v646 * v649))),
          (float)(int)(float)(v641 + (float)((float)v647 * v649)));
        if ( *v765 >= 1 )
        {
          v650 = (float *)(v644 + 52);
          v651 = v639 + 38;
          v652 = v639 + 48;
          v653 = *(float *)(v644 + 40);
          v654 = 0;
          v655 = 12;
          v759 = (float *)(v644 + 56);
          v656 = *(float *)(v644 + 44) + (float)(int)(float)(*(float *)(v648 + 72) + 0.5);
          do
          {
            v657 = (float *)(*v651 + v655);
            v658 = v657[1];
            v659 = v658;
            if ( v658 > *v759 )
              v659 = *v759;
            if ( v658 < *v650 )
              v659 = *v650;
            v660 = v653;
            if ( v658 != v659 )
            {
              v661 = (float)(v659 - v658) * 0.5;
              v662 = (float)(int)v661;
              if ( !*(_BYTE *)(v644 + 28) )
                v662 = v661;
              v660 = v653 + v662;
            }
            sub_A2DDC(
              v648,
              (unsigned __int16)*(_DWORD *)(*v652 + 4 * v654),
              COERCE_INT(v660 + (float)(*(v657 - 1) + 0.0)),
              COERCE_INT(v656 + (float)(*v657 + 0.0)),
              v660 + (float)(v657[2] + 0.0),
              v656 + (float)(v657[3] + 0.0),
              (float)(1.0 / (float)v726[7]) * (float)*((unsigned __int16 *)v657 - 6),
              (float)(1.0 / (float)v726[8]) * (float)*((unsigned __int16 *)v657 - 5),
              (float)(1.0 / (float)v726[7]) * (float)*((unsigned __int16 *)v657 - 4),
              (float)(1.0 / (float)v726[8]) * (float)*((unsigned __int16 *)v657 - 3),
              v659);
            v655 += 28;
            ++v654;
          }
          while ( v654 < *v765 );
        }
      }
      v638 = v747 + 1;
    }
    while ( v747 + 1 != v708 );
    v1 = v726;
    v663 = (int *)(v705 + 192);
    do
    {
      if ( *v663 )
        sub_88614(*v663);
      v664 = *(v663 - 3);
      if ( v664 )
        sub_88614(v664);
      v663 += 49;
      --v708;
    }
    while ( v708 );
  }
  sub_A2F10(v1);
  if ( v768 )
    sub_88614(v768);
  if ( v770 )
    sub_88614(v770);
  v212 = 1;
LABEL_904:
  if ( v705 )
    sub_88614(v705);
  return v212;
}


// ======================================================================
