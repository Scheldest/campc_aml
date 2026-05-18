// ADDR: 0x677bc
// SYMBOL: sub_677BC
int64x2_t *__fastcall sub_677BC(int64x2_t *result)
{
  int64x2_t v1; // q9
  unsigned __int8 *v2; // r3
  unsigned __int8 v3; // r2
  int64x2_t v4; // q8
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // r4
  unsigned __int8 v7; // lr
  unsigned __int8 v8; // r2

  if ( result[1].n128_u8[6] )
  {
    v1.n128_u64[0] = 0x5A5A5A5A5A5A5A5ALL;
    v1.n128_u64[1] = 0x5A5A5A5A5A5A5A5ALL;
    v2 = &result[1].n128_u8[1];
    v3 = result[1].n128_u8[2];
    v4 = veorq_s64(*result, v1);
    v5 = result[1].n128_u8[3];
    result[1].n128_u8[6] ^= 0x5Au;
    v6 = result[1].n128_u8[5];
    v7 = result[1].n128_u8[4];
    result[1].n128_u8[2] = v3 ^ 0x5A;
    result[1].n128_u8[3] = v5 ^ 0x5A;
    result[1].n128_u8[4] = v7 ^ 0x5A;
    result[1].n128_u8[5] = v6 ^ 0x5A;
    *result++ = v4;
    v8 = result->n128_u8[0];
    *v2 ^= 0x5Au;
    result->n128_u8[0] = v8 ^ 0x5A;
  }
  return result;
}


// ======================================================================
// ADDR: 0x6ca28
// SYMBOL: sub_6CA28
int sub_6CA28()
{
  FILE *v0; // r0
  size_t v1; // r0
  int v2; // r0
  size_t v3; // r0
  char *v4; // r1
  int v5; // r11
  int v6; // r10
  int v7; // r4
  size_t v8; // r5
  int v9; // r8
  int v10; // r2
  _QWORD *address; // r4
  size_t v12; // r0
  char *v13; // r1
  int v14; // r11
  int v15; // r10
  bool v16; // zf
  int v17; // r4
  size_t v18; // r5
  int v19; // r6
  int v20; // r2
  _QWORD *v21; // r4
  size_t v22; // r0
  char *v23; // r1
  int v24; // r11
  int v25; // r10
  int v26; // r4
  size_t v27; // r5
  int v28; // r6
  int v29; // r2
  _QWORD *v30; // r1
  _QWORD *v31; // r0
  __int16 v32; // r3
  size_t v33; // r0
  char *v34; // r1
  int v35; // r11
  int v36; // r10
  int v37; // r4
  size_t v38; // r5
  int v39; // r6
  int v40; // r2
  _QWORD *v41; // r4
  size_t v42; // r0
  char *v43; // r1
  int v44; // r11
  int v45; // r10
  int v46; // r4
  size_t v47; // r5
  int v48; // r6
  int v49; // r2
  _QWORD *v50; // r4
  size_t v51; // r0
  char *v52; // r1
  int v53; // r11
  int v54; // r10
  int v55; // r4
  size_t v56; // r5
  int v57; // r6
  int v58; // r2
  int v59; // r2
  _QWORD *v60; // r0
  size_t v61; // r0
  char *v62; // r1
  int v63; // r11
  int v64; // r10
  int v65; // r4
  size_t v66; // r5
  int v67; // r6
  int v68; // r2
  _QWORD *v69; // r4
  size_t v70; // r0
  char *v71; // r1
  int v72; // r11
  int v73; // r10
  int v74; // r4
  size_t v75; // r5
  int v76; // r6
  int v77; // r2
  _QWORD *v78; // r4
  size_t v79; // r0
  char *v80; // r1
  int v81; // r11
  int v82; // r10
  int v83; // r4
  size_t v84; // r5
  int v85; // r6
  int v86; // r2
  _QWORD *v87; // r1
  _QWORD *v88; // r0
  __int16 v89; // r3
  size_t v90; // r0
  char *v91; // r1
  int v92; // r11
  int v93; // r10
  int v94; // r4
  size_t v95; // r5
  int v96; // r6
  int v97; // r2
  _QWORD *v98; // r4
  size_t v99; // r0
  char *v100; // r1
  int v101; // r11
  int v102; // r10
  int v103; // r4
  size_t v104; // r5
  int v105; // r6
  int v106; // r2
  _QWORD *v107; // r4
  size_t v108; // r0
  char *v109; // r1
  int v110; // r11
  int v111; // r10
  int v112; // r4
  size_t v113; // r5
  int v114; // r6
  int v115; // r2
  _QWORD *v116; // r1
  _QWORD *v117; // r0
  __int16 v118; // r3
  size_t v119; // r0
  char *v120; // r1
  int v121; // r11
  int v122; // r10
  int v123; // r4
  size_t v124; // r5
  int v125; // r6
  int v126; // r2
  _QWORD *v127; // r4
  size_t v128; // r0
  char *v129; // r1
  int v130; // r11
  int v131; // r10
  int v132; // r4
  size_t v133; // r5
  int v134; // r6
  int v135; // r2
  _QWORD *v136; // r4
  size_t v137; // r0
  char *v138; // r1
  int v139; // r11
  int v140; // r10
  int v141; // r4
  size_t v142; // r5
  int v143; // r6
  int v144; // r2
  int v145; // r2
  _QWORD *v146; // r0
  size_t v147; // r0
  char *v148; // r1
  int v149; // r11
  int v150; // r10
  int v151; // r4
  size_t v152; // r5
  int v153; // r6
  int v154; // r2
  _QWORD *v155; // r4
  size_t v156; // r0
  char *v157; // r1
  int v158; // r11
  int v159; // r10
  int v160; // r4
  size_t v161; // r5
  int v162; // r6
  int v163; // r2
  _QWORD *v164; // r4
  size_t v165; // r0
  char *v166; // r1
  int v167; // r11
  int v168; // r10
  int v169; // r4
  size_t v170; // r5
  int v171; // r6
  int v172; // r2
  int v173; // r2
  _QWORD *v174; // r0
  size_t v175; // r0
  char *v176; // r1
  int v177; // r11
  int v178; // r10
  int v179; // r4
  size_t v180; // r5
  int v181; // r6
  int v182; // r2
  _QWORD *v183; // r4
  size_t v184; // r0
  char *v185; // r1
  int v186; // r11
  int v187; // r10
  int v188; // r4
  size_t v189; // r5
  int v190; // r6
  int v191; // r2
  _QWORD *v192; // r4
  size_t v193; // r0
  char *v194; // r1
  int v195; // r11
  int v196; // r10
  int v197; // r4
  size_t v198; // r5
  int v199; // r6
  int v200; // r2
  int v201; // r2
  _QWORD *v202; // r0
  size_t v203; // r0
  char *v204; // r1
  int v205; // r11
  int v206; // r10
  int v207; // r4
  size_t v208; // r5
  int v209; // r6
  int v210; // r2
  _QWORD *v211; // r4
  size_t v212; // r0
  char *v213; // r1
  int v214; // r11
  int v215; // r10
  int v216; // r4
  size_t v217; // r5
  int v218; // r6
  int v219; // r2
  _QWORD *v220; // r4
  size_t v221; // r0
  char *v222; // r1
  int v223; // r11
  int v224; // r10
  int v225; // r4
  size_t v226; // r5
  int v227; // r6
  int v228; // r2
  int v229; // r2
  _QWORD *v230; // r0
  size_t v231; // r0
  char *v232; // r1
  int v233; // r11
  int v234; // r10
  int v235; // r4
  size_t v236; // r5
  int v237; // r6
  int v238; // r2
  _QWORD *v239; // r4
  size_t v240; // r0
  char *v241; // r1
  int v242; // r11
  int v243; // r10
  int v244; // r4
  size_t v245; // r5
  int v246; // r6
  int v247; // r2
  _QWORD *v248; // r4
  size_t v249; // r0
  char *v250; // r1
  int v251; // r11
  int v252; // r10
  int v253; // r4
  size_t v254; // r5
  int v255; // r6
  int v256; // r2
  int v257; // r2
  _QWORD *v258; // r0
  size_t v259; // r0
  char *v260; // r1
  int v261; // r11
  int v262; // r10
  int v263; // r4
  size_t v264; // r5
  int v265; // r6
  int v266; // r2
  _QWORD *v267; // r4
  size_t v268; // r0
  char *v269; // r1
  int v270; // r11
  int v271; // r10
  int v272; // r4
  size_t v273; // r5
  int v274; // r6
  int v275; // r2
  _QWORD *v276; // r4
  size_t v277; // r0
  char *v278; // r1
  int v279; // r11
  int v280; // r10
  int v281; // r4
  size_t v282; // r5
  int v283; // r6
  int v284; // r2
  int v285; // r2
  _QWORD *v286; // r0
  size_t v287; // r0
  char *v288; // r1
  int v289; // r11
  int v290; // r10
  int v291; // r4
  size_t v292; // r5
  int v293; // r6
  int v294; // r2
  _QWORD *v295; // r4
  size_t v296; // r0
  char *v297; // r1
  int v298; // r11
  int v299; // r10
  int v300; // r4
  size_t v301; // r5
  int v302; // r6
  int v303; // r2
  _QWORD *v304; // r4
  size_t v305; // r0
  char *v306; // r1
  int v307; // r11
  int v308; // r10
  int v309; // r4
  size_t v310; // r5
  int v311; // r6
  int v312; // r2
  int v313; // r2
  _QWORD *v314; // r0
  size_t v315; // r0
  char *v316; // r1
  int v317; // r11
  int v318; // r10
  int v319; // r4
  size_t v320; // r5
  int v321; // r6
  int v322; // r2
  _QWORD *v323; // r4
  size_t v324; // r0
  char *v325; // r1
  int v326; // r11
  int v327; // r10
  int v328; // r4
  size_t v329; // r5
  int v330; // r6
  int v331; // r2
  _QWORD *v332; // r4
  size_t v333; // r0
  char *v334; // r1
  int v335; // r11
  int v336; // r10
  int v337; // r4
  size_t v338; // r5
  int v339; // r6
  int v340; // r2
  int v341; // r2
  _QWORD *v342; // r0
  size_t v343; // r0
  char *v344; // r1
  int v345; // r11
  int v346; // r10
  int v347; // r4
  size_t v348; // r5
  int v349; // r6
  int v350; // r2
  _QWORD *v351; // r4
  size_t v352; // r0
  char *v353; // r1
  int v354; // r11
  int v355; // r10
  int v356; // r4
  size_t v357; // r5
  int v358; // r6
  int v359; // r2
  _QWORD *v360; // r4
  size_t v361; // r0
  char *v362; // r1
  int v363; // r11
  int v364; // r10
  int v365; // r4
  size_t v366; // r5
  int v367; // r6
  int v368; // r2
  int v369; // r2
  _QWORD *v370; // r0
  size_t v371; // r0
  char *v372; // r1
  int v373; // r11
  int v374; // r10
  int v375; // r4
  size_t v376; // r5
  int v377; // r6
  int v378; // r2
  _QWORD *v379; // r4
  size_t v380; // r0
  char *v381; // r1
  int v382; // r11
  int v383; // r10
  int v384; // r4
  size_t v385; // r5
  int v386; // r6
  int v387; // r2
  _QWORD *v388; // r4
  size_t v389; // r0
  char *v390; // r1
  int v391; // r11
  int v392; // r10
  int v393; // r4
  size_t v394; // r5
  int v395; // r6
  int v396; // r2
  int v397; // r2
  _QWORD *v398; // r0
  size_t v399; // r0
  char *v400; // r1
  int v401; // r11
  int v402; // r10
  int v403; // r4
  size_t v404; // r5
  int v405; // r6
  int v406; // r2
  _QWORD *v407; // r4
  size_t v408; // r0
  char *v409; // r1
  int v410; // r11
  int v411; // r10
  int v412; // r4
  size_t v413; // r5
  int v414; // r6
  int v415; // r2
  _QWORD *v416; // r4
  size_t v417; // r0
  char *v418; // r1
  int v419; // r11
  int v420; // r10
  int v421; // r4
  size_t v422; // r5
  int v423; // r6
  int v424; // r2
  __int16 v425; // r2
  __int64 v426; // r0
  __int64 v427; // r0
  _QWORD *v428; // r0
  _DWORD *v429; // r2
  double v430; // d16
  float v431; // s0
  size_t v432; // r0
  char *v433; // r1
  int v434; // r11
  int v435; // r10
  int v436; // r4
  size_t v437; // r5
  int v438; // r6
  int v439; // r2
  _QWORD *v440; // r4
  size_t v441; // r0
  char *v442; // r1
  int v443; // r11
  int v444; // r10
  int v445; // r4
  size_t v446; // r5
  int v447; // r6
  int v448; // r2
  _QWORD *v449; // r4
  size_t v450; // r0
  char *v451; // r1
  int v452; // r11
  int v453; // r10
  int v454; // r4
  size_t v455; // r5
  int v456; // r6
  int v457; // r2
  int v458; // r0
  _QWORD *v459; // r0
  size_t v460; // r0
  char *v461; // r1
  int v462; // r11
  int v463; // r10
  int v464; // r4
  size_t v465; // r5
  int v466; // r6
  int v467; // r2
  _QWORD *v468; // r4
  size_t v469; // r0
  char *v470; // r1
  int v471; // r11
  int v472; // r10
  int v473; // r4
  size_t v474; // r5
  int v475; // r6
  int v476; // r2
  _QWORD *v477; // r4
  size_t v478; // r0
  char *v479; // r1
  int v480; // r11
  int v481; // r10
  int v482; // r4
  size_t v483; // r5
  int v484; // r6
  int v485; // r2
  int v486; // r0
  _QWORD *v487; // r0
  size_t v488; // r0
  char *v489; // r1
  int v490; // r11
  int v491; // r10
  int v492; // r4
  size_t v493; // r5
  int v494; // r6
  int v495; // r2
  _QWORD *v496; // r4
  size_t v497; // r0
  char *v498; // r1
  int v499; // r11
  int v500; // r10
  int v501; // r4
  size_t v502; // r5
  int v503; // r6
  int v504; // r2
  _QWORD *v505; // r4
  size_t v506; // r0
  char *v507; // r1
  int v508; // r11
  int v509; // r10
  int v510; // r4
  size_t v511; // r5
  int v512; // r6
  int v513; // r2
  int v514; // r0
  _QWORD *v515; // r0
  size_t v516; // r0
  char *v517; // r1
  int v518; // r11
  int v519; // r10
  int v520; // r4
  size_t v521; // r5
  int v522; // r6
  int v523; // r2
  _QWORD *v524; // r4
  size_t v525; // r0
  char *v526; // r1
  int v527; // r11
  int v528; // r10
  int v529; // r4
  size_t v530; // r5
  int v531; // r6
  int v532; // r2
  _QWORD *v533; // r4
  size_t v534; // r0
  char *v535; // r1
  int v536; // r11
  int v537; // r10
  int v538; // r4
  size_t v539; // r5
  int v540; // r6
  int v541; // r2
  float v542; // s0
  _QWORD *v543; // r0
  FILE *stream; // [sp+3Ch] [bp-10194h]
  FILE *v546; // [sp+50h] [bp-10180h] BYREF
  _BYTE *v547; // [sp+54h] [bp-1017Ch]
  int v548; // [sp+58h] [bp-10178h]
  _BYTE *v549; // [sp+5Ch] [bp-10174h]
  _BYTE *v550; // [sp+60h] [bp-10170h]
  size_t v551; // [sp+64h] [bp-1016Ch]
  int v552; // [sp+68h] [bp-10168h]
  char v553; // [sp+6Ch] [bp-10164h]
  __int64 v554; // [sp+70h] [bp-10160h] BYREF
  __int64 s2; // [sp+78h] [bp-10158h]
  int v556; // [sp+84h] [bp-1014Ch]
  void *v557; // [sp+8Ch] [bp-10144h]
  void *v558; // [sp+90h] [bp-10140h]
  _BYTE ptr[65535]; // [sp+AEh] [bp-10122h] BYREF
  char v560[255]; // [sp+100ADh] [bp-123h] BYREF
  int v561; // [sp+101ACh] [bp-24h]

  _android_log_print(4, "SAMP_ORIG", "Initializing settings...");
  if ( byte_1A443A )
    return v561;
  if ( dword_1A4404 == -7170172 )
  {
    _android_log_print(6, "SAMP_ORIG", "Failed to initialize settings. (game storage null)", dword_1A4404 + 7170172);
    std::terminate();
  }
  sub_6EBD0(v560);
  v0 = fopen(v560, "rb");
  if ( !v0 )
  {
    _android_log_print(4, "SAMP_ORIG", "Failed to initialize settings. (settings file null)");
    std::terminate();
  }
  v548 = 0xFFFF;
  v552 = 0;
  v546 = v0;
  v547 = ptr;
  v553 = 0;
  stream = v0;
  v1 = fread(ptr, 1u, 0xFFFFu, v0);
  v550 = ptr;
  v551 = v1;
  v549 = &ptr[v1 - 1];
  if ( v1 < 0xFFFF )
  {
    v547[v1] = 0;
    v553 = 1;
    ++v549;
  }
  v2 = sub_6EC24(&v554, 0, 1024, 0);
  sub_6ECB0(v2, &v546);
  v3 = _strlen_chk("client", 7u);
  v5 = s2;
  v6 = v554;
  v7 = s2;
  if ( (_DWORD)v554 )
  {
    v8 = v3;
    v9 = 32 * v554;
    v7 = s2;
    while ( 1 )
    {
      v10 = *(_DWORD *)v7;
      v4 = (char *)*(unsigned __int8 *)(v7 + 13);
      if ( (*(_WORD *)(v7 + 14) & 0x1000) != 0 )
        v10 = 13 - (_DWORD)v4;
      if ( v8 == v10 )
      {
        v4 = *(char **)(v7 + 8);
        if ( (*(_WORD *)(v7 + 14) & 0x1000) != 0 )
          v4 = (char *)v7;
        if ( v4 == "client" || !memcmp("client", v4, v8) )
          break;
      }
      v9 -= 32;
      v7 += 32;
      if ( !v9 )
        goto LABEL_18;
    }
  }
  if ( v7 == v5 + 32 * v6 )
  {
LABEL_18:
    address = (_QWORD *)j___emutls_get_address(&unk_116D20, v4);
    *address = 0LL;
    address[1] = 0LL;
  }
  else
  {
    address = (_QWORD *)(v7 + 16);
  }
  v12 = _strlen_chk("server", 7u);
  v14 = *((_DWORD *)address + 2);
  v15 = *(_DWORD *)address;
  v16 = *(_DWORD *)address == 0;
  v17 = v14;
  if ( !v16 )
  {
    v18 = v12;
    v19 = 32 * v15;
    v17 = v14;
    while ( 1 )
    {
      v20 = *(_DWORD *)v17;
      v13 = (char *)*(unsigned __int8 *)(v17 + 13);
      if ( (*(_WORD *)(v17 + 14) & 0x1000) != 0 )
        v20 = 13 - (_DWORD)v13;
      if ( v18 == v20 )
      {
        v13 = *(char **)(v17 + 8);
        if ( (*(_WORD *)(v17 + 14) & 0x1000) != 0 )
          v13 = (char *)v17;
        if ( v13 == "server" || !memcmp("server", v13, v18) )
          break;
      }
      v19 -= 32;
      v17 += 32;
      if ( !v19 )
        goto LABEL_31;
    }
  }
  if ( v17 == v14 + 32 * v15 )
  {
LABEL_31:
    v21 = (_QWORD *)j___emutls_get_address(&unk_116D20, v13);
    *v21 = 0LL;
    v21[1] = 0LL;
  }
  else
  {
    v21 = (_QWORD *)(v17 + 16);
  }
  v22 = _strlen_chk("host", 5u);
  v24 = *((_DWORD *)v21 + 2);
  v25 = *(_DWORD *)v21;
  v16 = *(_DWORD *)v21 == 0;
  v26 = v24;
  if ( !v16 )
  {
    v27 = v22;
    v28 = 32 * v25;
    v26 = v24;
    while ( 1 )
    {
      v29 = *(_DWORD *)v26;
      v23 = (char *)*(unsigned __int8 *)(v26 + 13);
      if ( (*(_WORD *)(v26 + 14) & 0x1000) != 0 )
        v29 = 13 - (_DWORD)v23;
      if ( v27 == v29 )
      {
        v23 = *(char **)(v26 + 8);
        if ( (*(_WORD *)(v26 + 14) & 0x1000) != 0 )
          v23 = (char *)v26;
        if ( v23 == "host" || !memcmp("host", v23, v27) )
          break;
      }
      v28 -= 32;
      v26 += 32;
      if ( !v28 )
        goto LABEL_44;
    }
  }
  if ( v26 == v24 + 32 * v25 )
  {
LABEL_44:
    v31 = (_QWORD *)j___emutls_get_address(&unk_116D20, v23);
    v30 = 0;
    v32 = 0;
    *v31 = 0LL;
    v31[1] = 0LL;
  }
  else
  {
    v30 = *(_QWORD **)(v26 + 24);
    v31 = (_QWORD *)(v26 + 16);
    v32 = *(_WORD *)(v26 + 30);
  }
  if ( (v32 & 0x1000) != 0 )
    v30 = v31;
  _strcpy_chk(a127001, v30, 64);
  v33 = _strlen_chk("client", 7u);
  v35 = s2;
  v36 = v554;
  v37 = s2;
  if ( (_DWORD)v554 )
  {
    v38 = v33;
    v39 = 32 * v554;
    v37 = s2;
    while ( 1 )
    {
      v40 = *(_DWORD *)v37;
      v34 = (char *)*(unsigned __int8 *)(v37 + 13);
      if ( (*(_WORD *)(v37 + 14) & 0x1000) != 0 )
        v40 = 13 - (_DWORD)v34;
      if ( v38 == v40 )
      {
        v34 = *(char **)(v37 + 8);
        if ( (*(_WORD *)(v37 + 14) & 0x1000) != 0 )
          v34 = (char *)v37;
        if ( v34 == "client" || !memcmp("client", v34, v38) )
          break;
      }
      v39 -= 32;
      v37 += 32;
      if ( !v39 )
        goto LABEL_59;
    }
  }
  if ( v37 == v35 + 32 * v36 )
  {
LABEL_59:
    v41 = (_QWORD *)j___emutls_get_address(&unk_116D20, v34);
    *v41 = 0LL;
    v41[1] = 0LL;
  }
  else
  {
    v41 = (_QWORD *)(v37 + 16);
  }
  v42 = _strlen_chk("server", 7u);
  v44 = *((_DWORD *)v41 + 2);
  v45 = *(_DWORD *)v41;
  v16 = *(_DWORD *)v41 == 0;
  v46 = v44;
  if ( !v16 )
  {
    v47 = v42;
    v48 = 32 * v45;
    v46 = v44;
    while ( 1 )
    {
      v49 = *(_DWORD *)v46;
      v43 = (char *)*(unsigned __int8 *)(v46 + 13);
      if ( (*(_WORD *)(v46 + 14) & 0x1000) != 0 )
        v49 = 13 - (_DWORD)v43;
      if ( v47 == v49 )
      {
        v43 = *(char **)(v46 + 8);
        if ( (*(_WORD *)(v46 + 14) & 0x1000) != 0 )
          v43 = (char *)v46;
        if ( v43 == "server" || !memcmp("server", v43, v47) )
          break;
      }
      v48 -= 32;
      v46 += 32;
      if ( !v48 )
        goto LABEL_72;
    }
  }
  if ( v46 == v44 + 32 * v45 )
  {
LABEL_72:
    v50 = (_QWORD *)j___emutls_get_address(&unk_116D20, v43);
    *v50 = 0LL;
    v50[1] = 0LL;
  }
  else
  {
    v50 = (_QWORD *)(v46 + 16);
  }
  v51 = _strlen_chk("port", 5u);
  v53 = *((_DWORD *)v50 + 2);
  v54 = *(_DWORD *)v50;
  v16 = *(_DWORD *)v50 == 0;
  v55 = v53;
  if ( !v16 )
  {
    v56 = v51;
    v57 = 32 * v54;
    v55 = v53;
    while ( 1 )
    {
      v58 = *(_DWORD *)v55;
      v52 = (char *)*(unsigned __int8 *)(v55 + 13);
      if ( (*(_WORD *)(v55 + 14) & 0x1000) != 0 )
        v58 = 13 - (_DWORD)v52;
      if ( v56 == v58 )
      {
        v52 = *(char **)(v55 + 8);
        if ( (*(_WORD *)(v55 + 14) & 0x1000) != 0 )
          v52 = (char *)v55;
        if ( v52 == "port" || !memcmp("port", v52, v56) )
          break;
      }
      v57 -= 32;
      v55 += 32;
      if ( !v57 )
        goto LABEL_85;
    }
  }
  if ( v55 == v53 + 32 * v54 )
  {
LABEL_85:
    v60 = (_QWORD *)j___emutls_get_address(&unk_116D20, v52);
    v59 = 0;
    *v60 = 0LL;
    v60[1] = 0LL;
  }
  else
  {
    v59 = *(_DWORD *)(v55 + 16);
  }
  dword_116CE0 = v59;
  v61 = _strlen_chk("client", 7u);
  v63 = s2;
  v64 = v554;
  v65 = s2;
  if ( (_DWORD)v554 )
  {
    v66 = v61;
    v67 = 32 * v554;
    v65 = s2;
    while ( 1 )
    {
      v68 = *(_DWORD *)v65;
      v62 = (char *)*(unsigned __int8 *)(v65 + 13);
      if ( (*(_WORD *)(v65 + 14) & 0x1000) != 0 )
        v68 = 13 - (_DWORD)v62;
      if ( v66 == v68 )
      {
        v62 = *(char **)(v65 + 8);
        if ( (*(_WORD *)(v65 + 14) & 0x1000) != 0 )
          v62 = (char *)v65;
        if ( v62 == "client" || !memcmp("client", v62, v66) )
          break;
      }
      v67 -= 32;
      v65 += 32;
      if ( !v67 )
        goto LABEL_98;
    }
  }
  if ( v65 == v63 + 32 * v64 )
  {
LABEL_98:
    v69 = (_QWORD *)j___emutls_get_address(&unk_116D20, v62);
    *v69 = 0LL;
    v69[1] = 0LL;
  }
  else
  {
    v69 = (_QWORD *)(v65 + 16);
  }
  v70 = _strlen_chk("server", 7u);
  v72 = *((_DWORD *)v69 + 2);
  v73 = *(_DWORD *)v69;
  v16 = *(_DWORD *)v69 == 0;
  v74 = v72;
  if ( !v16 )
  {
    v75 = v70;
    v76 = 32 * v73;
    v74 = v72;
    while ( 1 )
    {
      v77 = *(_DWORD *)v74;
      v71 = (char *)*(unsigned __int8 *)(v74 + 13);
      if ( (*(_WORD *)(v74 + 14) & 0x1000) != 0 )
        v77 = 13 - (_DWORD)v71;
      if ( v75 == v77 )
      {
        v71 = *(char **)(v74 + 8);
        if ( (*(_WORD *)(v74 + 14) & 0x1000) != 0 )
          v71 = (char *)v74;
        if ( v71 == "server" || !memcmp("server", v71, v75) )
          break;
      }
      v76 -= 32;
      v74 += 32;
      if ( !v76 )
        goto LABEL_111;
    }
  }
  if ( v74 == v72 + 32 * v73 )
  {
LABEL_111:
    v78 = (_QWORD *)j___emutls_get_address(&unk_116D20, v71);
    *v78 = 0LL;
    v78[1] = 0LL;
  }
  else
  {
    v78 = (_QWORD *)(v74 + 16);
  }
  v79 = _strlen_chk("password", 9u);
  v81 = *((_DWORD *)v78 + 2);
  v82 = *(_DWORD *)v78;
  v16 = *(_DWORD *)v78 == 0;
  v83 = v81;
  if ( !v16 )
  {
    v84 = v79;
    v85 = 32 * v82;
    v83 = v81;
    while ( 1 )
    {
      v86 = *(_DWORD *)v83;
      v80 = (char *)*(unsigned __int8 *)(v83 + 13);
      if ( (*(_WORD *)(v83 + 14) & 0x1000) != 0 )
        v86 = 13 - (_DWORD)v80;
      if ( v84 == v86 )
      {
        v80 = *(char **)(v83 + 8);
        if ( (*(_WORD *)(v83 + 14) & 0x1000) != 0 )
          v80 = (char *)v83;
        if ( v80 == "password" || !memcmp("password", v80, v84) )
          break;
      }
      v85 -= 32;
      v83 += 32;
      if ( !v85 )
        goto LABEL_124;
    }
  }
  if ( v83 == v81 + 32 * v82 )
  {
LABEL_124:
    v88 = (_QWORD *)j___emutls_get_address(&unk_116D20, v80);
    v87 = 0;
    v89 = 0;
    *v88 = 0LL;
    v88[1] = 0LL;
  }
  else
  {
    v87 = *(_QWORD **)(v83 + 24);
    v88 = (_QWORD *)(v83 + 16);
    v89 = *(_WORD *)(v83 + 30);
  }
  if ( (v89 & 0x1000) != 0 )
    v87 = v88;
  _strcpy_chk(byte_1A443B, v87, 64);
  v90 = _strlen_chk("client", 7u);
  v92 = s2;
  v93 = v554;
  v94 = s2;
  if ( (_DWORD)v554 )
  {
    v95 = v90;
    v96 = 32 * v554;
    v94 = s2;
    while ( 1 )
    {
      v97 = *(_DWORD *)v94;
      v91 = (char *)*(unsigned __int8 *)(v94 + 13);
      if ( (*(_WORD *)(v94 + 14) & 0x1000) != 0 )
        v97 = 13 - (_DWORD)v91;
      if ( v95 == v97 )
      {
        v91 = *(char **)(v94 + 8);
        if ( (*(_WORD *)(v94 + 14) & 0x1000) != 0 )
          v91 = (char *)v94;
        if ( v91 == "client" || !memcmp("client", v91, v95) )
          break;
      }
      v96 -= 32;
      v94 += 32;
      if ( !v96 )
        goto LABEL_139;
    }
  }
  if ( v94 == v92 + 32 * v93 )
  {
LABEL_139:
    v98 = (_QWORD *)j___emutls_get_address(&unk_116D20, v91);
    *v98 = 0LL;
    v98[1] = 0LL;
  }
  else
  {
    v98 = (_QWORD *)(v94 + 16);
  }
  v99 = _strlen_chk("settings", 9u);
  v101 = *((_DWORD *)v98 + 2);
  v102 = *(_DWORD *)v98;
  v16 = *(_DWORD *)v98 == 0;
  v103 = v101;
  if ( !v16 )
  {
    v104 = v99;
    v105 = 32 * v102;
    v103 = v101;
    while ( 1 )
    {
      v106 = *(_DWORD *)v103;
      v100 = (char *)*(unsigned __int8 *)(v103 + 13);
      if ( (*(_WORD *)(v103 + 14) & 0x1000) != 0 )
        v106 = 13 - (_DWORD)v100;
      if ( v104 == v106 )
      {
        v100 = *(char **)(v103 + 8);
        if ( (*(_WORD *)(v103 + 14) & 0x1000) != 0 )
          v100 = (char *)v103;
        if ( v100 == "settings" || !memcmp("settings", v100, v104) )
          break;
      }
      v105 -= 32;
      v103 += 32;
      if ( !v105 )
        goto LABEL_152;
    }
  }
  if ( v103 == v101 + 32 * v102 )
  {
LABEL_152:
    v107 = (_QWORD *)j___emutls_get_address(&unk_116D20, v100);
    *v107 = 0LL;
    v107[1] = 0LL;
  }
  else
  {
    v107 = (_QWORD *)(v103 + 16);
  }
  v108 = _strlen_chk("nick_name", 0xAu);
  v110 = *((_DWORD *)v107 + 2);
  v111 = *(_DWORD *)v107;
  v16 = *(_DWORD *)v107 == 0;
  v112 = v110;
  if ( !v16 )
  {
    v113 = v108;
    v114 = 32 * v111;
    v112 = v110;
    while ( 1 )
    {
      v115 = *(_DWORD *)v112;
      v109 = (char *)*(unsigned __int8 *)(v112 + 13);
      if ( (*(_WORD *)(v112 + 14) & 0x1000) != 0 )
        v115 = 13 - (_DWORD)v109;
      if ( v113 == v115 )
      {
        v109 = *(char **)(v112 + 8);
        if ( (*(_WORD *)(v112 + 14) & 0x1000) != 0 )
          v109 = (char *)v112;
        if ( v109 == "nick_name" || !memcmp("nick_name", v109, v113) )
          break;
      }
      v114 -= 32;
      v112 += 32;
      if ( !v114 )
        goto LABEL_165;
    }
  }
  if ( v112 == v110 + 32 * v111 )
  {
LABEL_165:
    v117 = (_QWORD *)j___emutls_get_address(&unk_116D20, v109);
    v116 = 0;
    v118 = 0;
    *v117 = 0LL;
    v117[1] = 0LL;
  }
  else
  {
    v116 = *(_QWORD **)(v112 + 24);
    v117 = (_QWORD *)(v112 + 16);
    v118 = *(_WORD *)(v112 + 30);
  }
  if ( (v118 & 0x1000) != 0 )
    v116 = v117;
  _strcpy_chk(aSampPlayer, v116, 30);
  v119 = _strlen_chk("client", 7u);
  v121 = s2;
  v122 = v554;
  v123 = s2;
  if ( (_DWORD)v554 )
  {
    v124 = v119;
    v125 = 32 * v554;
    v123 = s2;
    while ( 1 )
    {
      v126 = *(_DWORD *)v123;
      v120 = (char *)*(unsigned __int8 *)(v123 + 13);
      if ( (*(_WORD *)(v123 + 14) & 0x1000) != 0 )
        v126 = 13 - (_DWORD)v120;
      if ( v124 == v126 )
      {
        v120 = *(char **)(v123 + 8);
        if ( (*(_WORD *)(v123 + 14) & 0x1000) != 0 )
          v120 = (char *)v123;
        if ( v120 == "client" || !memcmp("client", v120, v124) )
          break;
      }
      v125 -= 32;
      v123 += 32;
      if ( !v125 )
        goto LABEL_180;
    }
  }
  if ( v123 == v121 + 32 * v122 )
  {
LABEL_180:
    v127 = (_QWORD *)j___emutls_get_address(&unk_116D20, v120);
    *v127 = 0LL;
    v127[1] = 0LL;
  }
  else
  {
    v127 = (_QWORD *)(v123 + 16);
  }
  v128 = _strlen_chk("settings", 9u);
  v130 = *((_DWORD *)v127 + 2);
  v131 = *(_DWORD *)v127;
  v16 = *(_DWORD *)v127 == 0;
  v132 = v130;
  if ( !v16 )
  {
    v133 = v128;
    v134 = 32 * v131;
    v132 = v130;
    while ( 1 )
    {
      v135 = *(_DWORD *)v132;
      v129 = (char *)*(unsigned __int8 *)(v132 + 13);
      if ( (*(_WORD *)(v132 + 14) & 0x1000) != 0 )
        v135 = 13 - (_DWORD)v129;
      if ( v133 == v135 )
      {
        v129 = *(char **)(v132 + 8);
        if ( (*(_WORD *)(v132 + 14) & 0x1000) != 0 )
          v129 = (char *)v132;
        if ( v129 == "settings" || !memcmp("settings", v129, v133) )
          break;
      }
      v134 -= 32;
      v132 += 32;
      if ( !v134 )
        goto LABEL_193;
    }
  }
  if ( v132 == v130 + 32 * v131 )
  {
LABEL_193:
    v136 = (_QWORD *)j___emutls_get_address(&unk_116D20, v129);
    *v136 = 0LL;
    v136[1] = 0LL;
  }
  else
  {
    v136 = (_QWORD *)(v132 + 16);
  }
  v137 = _strlen_chk("samp_version", 0xDu);
  v139 = *((_DWORD *)v136 + 2);
  v140 = *(_DWORD *)v136;
  v16 = *(_DWORD *)v136 == 0;
  v141 = v139;
  if ( !v16 )
  {
    v142 = v137;
    v143 = 32 * v140;
    v141 = v139;
    while ( 1 )
    {
      v144 = *(_DWORD *)v141;
      v138 = (char *)*(unsigned __int8 *)(v141 + 13);
      if ( (*(_WORD *)(v141 + 14) & 0x1000) != 0 )
        v144 = 13 - (_DWORD)v138;
      if ( v142 == v144 )
      {
        v138 = *(char **)(v141 + 8);
        if ( (*(_WORD *)(v141 + 14) & 0x1000) != 0 )
          v138 = (char *)v141;
        if ( v138 == "samp_version" || !memcmp("samp_version", v138, v142) )
          break;
      }
      v143 -= 32;
      v141 += 32;
      if ( !v143 )
        goto LABEL_206;
    }
  }
  if ( v141 == v139 + 32 * v140 )
  {
LABEL_206:
    v146 = (_QWORD *)j___emutls_get_address(&unk_116D20, v138);
    v145 = 0;
    *v146 = 0LL;
    v146[1] = 0LL;
  }
  else
  {
    v145 = *(_DWORD *)(v141 + 16);
  }
  dword_1A447C = v145;
  v147 = _strlen_chk("client", 7u);
  v149 = s2;
  v150 = v554;
  v151 = s2;
  if ( (_DWORD)v554 )
  {
    v152 = v147;
    v153 = 32 * v554;
    v151 = s2;
    while ( 1 )
    {
      v154 = *(_DWORD *)v151;
      v148 = (char *)*(unsigned __int8 *)(v151 + 13);
      if ( (*(_WORD *)(v151 + 14) & 0x1000) != 0 )
        v154 = 13 - (_DWORD)v148;
      if ( v152 == v154 )
      {
        v148 = *(char **)(v151 + 8);
        if ( (*(_WORD *)(v151 + 14) & 0x1000) != 0 )
          v148 = (char *)v151;
        if ( v148 == "client" || !memcmp("client", v148, v152) )
          break;
      }
      v153 -= 32;
      v151 += 32;
      if ( !v153 )
        goto LABEL_219;
    }
  }
  if ( v151 == v149 + 32 * v150 )
  {
LABEL_219:
    v155 = (_QWORD *)j___emutls_get_address(&unk_116D20, v148);
    *v155 = 0LL;
    v155[1] = 0LL;
  }
  else
  {
    v155 = (_QWORD *)(v151 + 16);
  }
  v156 = _strlen_chk("settings", 9u);
  v158 = *((_DWORD *)v155 + 2);
  v159 = *(_DWORD *)v155;
  v16 = *(_DWORD *)v155 == 0;
  v160 = v158;
  if ( !v16 )
  {
    v161 = v156;
    v162 = 32 * v159;
    v160 = v158;
    while ( 1 )
    {
      v163 = *(_DWORD *)v160;
      v157 = (char *)*(unsigned __int8 *)(v160 + 13);
      if ( (*(_WORD *)(v160 + 14) & 0x1000) != 0 )
        v163 = 13 - (_DWORD)v157;
      if ( v161 == v163 )
      {
        v157 = *(char **)(v160 + 8);
        if ( (*(_WORD *)(v160 + 14) & 0x1000) != 0 )
          v157 = (char *)v160;
        if ( v157 == "settings" || !memcmp("settings", v157, v161) )
          break;
      }
      v162 -= 32;
      v160 += 32;
      if ( !v162 )
        goto LABEL_232;
    }
  }
  if ( v160 == v158 + 32 * v159 )
  {
LABEL_232:
    v164 = (_QWORD *)j___emutls_get_address(&unk_116D20, v157);
    *v164 = 0LL;
    v164[1] = 0LL;
  }
  else
  {
    v164 = (_QWORD *)(v160 + 16);
  }
  v165 = _strlen_chk("new_interface", 0xEu);
  v167 = *((_DWORD *)v164 + 2);
  v168 = *(_DWORD *)v164;
  v16 = *(_DWORD *)v164 == 0;
  v169 = v167;
  if ( !v16 )
  {
    v170 = v165;
    v171 = 32 * v168;
    v169 = v167;
    while ( 1 )
    {
      v172 = *(_DWORD *)v169;
      v166 = (char *)*(unsigned __int8 *)(v169 + 13);
      if ( (*(_WORD *)(v169 + 14) & 0x1000) != 0 )
        v172 = 13 - (_DWORD)v166;
      if ( v170 == v172 )
      {
        v166 = *(char **)(v169 + 8);
        if ( (*(_WORD *)(v169 + 14) & 0x1000) != 0 )
          v166 = (char *)v169;
        if ( v166 == "new_interface" || !memcmp("new_interface", v166, v170) )
          break;
      }
      v171 -= 32;
      v169 += 32;
      if ( !v171 )
        goto LABEL_245;
    }
  }
  if ( v169 == v167 + 32 * v168 )
  {
LABEL_245:
    v174 = (_QWORD *)j___emutls_get_address(&unk_116D20, v166);
    v173 = 0;
    *v174 = 0LL;
    v174[1] = 0LL;
  }
  else
  {
    v173 = *(unsigned __int16 *)(v169 + 30);
  }
  byte_1A4480 = v173 == 10;
  v175 = _strlen_chk("client", 7u);
  v177 = s2;
  v178 = v554;
  v179 = s2;
  if ( (_DWORD)v554 )
  {
    v180 = v175;
    v181 = 32 * v554;
    v179 = s2;
    while ( 1 )
    {
      v182 = *(_DWORD *)v179;
      v176 = (char *)*(unsigned __int8 *)(v179 + 13);
      if ( (*(_WORD *)(v179 + 14) & 0x1000) != 0 )
        v182 = 13 - (_DWORD)v176;
      if ( v180 == v182 )
      {
        v176 = *(char **)(v179 + 8);
        if ( (*(_WORD *)(v179 + 14) & 0x1000) != 0 )
          v176 = (char *)v179;
        if ( v176 == "client" || !memcmp("client", v176, v180) )
          break;
      }
      v181 -= 32;
      v179 += 32;
      if ( !v181 )
        goto LABEL_258;
    }
  }
  if ( v179 == v177 + 32 * v178 )
  {
LABEL_258:
    v183 = (_QWORD *)j___emutls_get_address(&unk_116D20, v176);
    *v183 = 0LL;
    v183[1] = 0LL;
  }
  else
  {
    v183 = (_QWORD *)(v179 + 16);
  }
  v184 = _strlen_chk("settings", 9u);
  v186 = *((_DWORD *)v183 + 2);
  v187 = *(_DWORD *)v183;
  v16 = *(_DWORD *)v183 == 0;
  v188 = v186;
  if ( !v16 )
  {
    v189 = v184;
    v190 = 32 * v187;
    v188 = v186;
    while ( 1 )
    {
      v191 = *(_DWORD *)v188;
      v185 = (char *)*(unsigned __int8 *)(v188 + 13);
      if ( (*(_WORD *)(v188 + 14) & 0x1000) != 0 )
        v191 = 13 - (_DWORD)v185;
      if ( v189 == v191 )
      {
        v185 = *(char **)(v188 + 8);
        if ( (*(_WORD *)(v188 + 14) & 0x1000) != 0 )
          v185 = (char *)v188;
        if ( v185 == "settings" || !memcmp("settings", v185, v189) )
          break;
      }
      v190 -= 32;
      v188 += 32;
      if ( !v190 )
        goto LABEL_271;
    }
  }
  if ( v188 == v186 + 32 * v187 )
  {
LABEL_271:
    v192 = (_QWORD *)j___emutls_get_address(&unk_116D20, v185);
    *v192 = 0LL;
    v192[1] = 0LL;
  }
  else
  {
    v192 = (_QWORD *)(v188 + 16);
  }
  v193 = _strlen_chk("system_keyboard", 0x10u);
  v195 = *((_DWORD *)v192 + 2);
  v196 = *(_DWORD *)v192;
  v16 = *(_DWORD *)v192 == 0;
  v197 = v195;
  if ( !v16 )
  {
    v198 = v193;
    v199 = 32 * v196;
    v197 = v195;
    while ( 1 )
    {
      v200 = *(_DWORD *)v197;
      v194 = (char *)*(unsigned __int8 *)(v197 + 13);
      if ( (*(_WORD *)(v197 + 14) & 0x1000) != 0 )
        v200 = 13 - (_DWORD)v194;
      if ( v198 == v200 )
      {
        v194 = *(char **)(v197 + 8);
        if ( (*(_WORD *)(v197 + 14) & 0x1000) != 0 )
          v194 = (char *)v197;
        if ( v194 == "system_keyboard" || !memcmp("system_keyboard", v194, v198) )
          break;
      }
      v199 -= 32;
      v197 += 32;
      if ( !v199 )
        goto LABEL_284;
    }
  }
  if ( v197 == v195 + 32 * v196 )
  {
LABEL_284:
    v202 = (_QWORD *)j___emutls_get_address(&unk_116D20, v194);
    v201 = 0;
    *v202 = 0LL;
    v202[1] = 0LL;
  }
  else
  {
    v201 = *(unsigned __int16 *)(v197 + 30);
  }
  byte_1A4481 = v201 == 10;
  v203 = _strlen_chk("client", 7u);
  v205 = s2;
  v206 = v554;
  v207 = s2;
  if ( (_DWORD)v554 )
  {
    v208 = v203;
    v209 = 32 * v554;
    v207 = s2;
    while ( 1 )
    {
      v210 = *(_DWORD *)v207;
      v204 = (char *)*(unsigned __int8 *)(v207 + 13);
      if ( (*(_WORD *)(v207 + 14) & 0x1000) != 0 )
        v210 = 13 - (_DWORD)v204;
      if ( v208 == v210 )
      {
        v204 = *(char **)(v207 + 8);
        if ( (*(_WORD *)(v207 + 14) & 0x1000) != 0 )
          v204 = (char *)v207;
        if ( v204 == "client" || !memcmp("client", v204, v208) )
          break;
      }
      v209 -= 32;
      v207 += 32;
      if ( !v209 )
        goto LABEL_297;
    }
  }
  if ( v207 == v205 + 32 * v206 )
  {
LABEL_297:
    v211 = (_QWORD *)j___emutls_get_address(&unk_116D20, v204);
    *v211 = 0LL;
    v211[1] = 0LL;
  }
  else
  {
    v211 = (_QWORD *)(v207 + 16);
  }
  v212 = _strlen_chk("settings", 9u);
  v214 = *((_DWORD *)v211 + 2);
  v215 = *(_DWORD *)v211;
  v16 = *(_DWORD *)v211 == 0;
  v216 = v214;
  if ( !v16 )
  {
    v217 = v212;
    v218 = 32 * v215;
    v216 = v214;
    while ( 1 )
    {
      v219 = *(_DWORD *)v216;
      v213 = (char *)*(unsigned __int8 *)(v216 + 13);
      if ( (*(_WORD *)(v216 + 14) & 0x1000) != 0 )
        v219 = 13 - (_DWORD)v213;
      if ( v217 == v219 )
      {
        v213 = *(char **)(v216 + 8);
        if ( (*(_WORD *)(v216 + 14) & 0x1000) != 0 )
          v213 = (char *)v216;
        if ( v213 == "settings" || !memcmp("settings", v213, v217) )
          break;
      }
      v218 -= 32;
      v216 += 32;
      if ( !v218 )
        goto LABEL_310;
    }
  }
  if ( v216 == v214 + 32 * v215 )
  {
LABEL_310:
    v220 = (_QWORD *)j___emutls_get_address(&unk_116D20, v213);
    *v220 = 0LL;
    v220[1] = 0LL;
  }
  else
  {
    v220 = (_QWORD *)(v216 + 16);
  }
  v221 = _strlen_chk("timestamp", 0xAu);
  v223 = *((_DWORD *)v220 + 2);
  v224 = *(_DWORD *)v220;
  v16 = *(_DWORD *)v220 == 0;
  v225 = v223;
  if ( !v16 )
  {
    v226 = v221;
    v227 = 32 * v224;
    v225 = v223;
    while ( 1 )
    {
      v228 = *(_DWORD *)v225;
      v222 = (char *)*(unsigned __int8 *)(v225 + 13);
      if ( (*(_WORD *)(v225 + 14) & 0x1000) != 0 )
        v228 = 13 - (_DWORD)v222;
      if ( v226 == v228 )
      {
        v222 = *(char **)(v225 + 8);
        if ( (*(_WORD *)(v225 + 14) & 0x1000) != 0 )
          v222 = (char *)v225;
        if ( v222 == "timestamp" || !memcmp("timestamp", v222, v226) )
          break;
      }
      v227 -= 32;
      v225 += 32;
      if ( !v227 )
        goto LABEL_323;
    }
  }
  if ( v225 == v223 + 32 * v224 )
  {
LABEL_323:
    v230 = (_QWORD *)j___emutls_get_address(&unk_116D20, v222);
    v229 = 0;
    *v230 = 0LL;
    v230[1] = 0LL;
  }
  else
  {
    v229 = *(unsigned __int16 *)(v225 + 30);
  }
  byte_1A4482 = v229 == 10;
  v231 = _strlen_chk("client", 7u);
  v233 = s2;
  v234 = v554;
  v235 = s2;
  if ( (_DWORD)v554 )
  {
    v236 = v231;
    v237 = 32 * v554;
    v235 = s2;
    while ( 1 )
    {
      v238 = *(_DWORD *)v235;
      v232 = (char *)*(unsigned __int8 *)(v235 + 13);
      if ( (*(_WORD *)(v235 + 14) & 0x1000) != 0 )
        v238 = 13 - (_DWORD)v232;
      if ( v236 == v238 )
      {
        v232 = *(char **)(v235 + 8);
        if ( (*(_WORD *)(v235 + 14) & 0x1000) != 0 )
          v232 = (char *)v235;
        if ( v232 == "client" || !memcmp("client", v232, v236) )
          break;
      }
      v237 -= 32;
      v235 += 32;
      if ( !v237 )
        goto LABEL_336;
    }
  }
  if ( v235 == v233 + 32 * v234 )
  {
LABEL_336:
    v239 = (_QWORD *)j___emutls_get_address(&unk_116D20, v232);
    *v239 = 0LL;
    v239[1] = 0LL;
  }
  else
  {
    v239 = (_QWORD *)(v235 + 16);
  }
  v240 = _strlen_chk("settings", 9u);
  v242 = *((_DWORD *)v239 + 2);
  v243 = *(_DWORD *)v239;
  v16 = *(_DWORD *)v239 == 0;
  v244 = v242;
  if ( !v16 )
  {
    v245 = v240;
    v246 = 32 * v243;
    v244 = v242;
    while ( 1 )
    {
      v247 = *(_DWORD *)v244;
      v241 = (char *)*(unsigned __int8 *)(v244 + 13);
      if ( (*(_WORD *)(v244 + 14) & 0x1000) != 0 )
        v247 = 13 - (_DWORD)v241;
      if ( v245 == v247 )
      {
        v241 = *(char **)(v244 + 8);
        if ( (*(_WORD *)(v244 + 14) & 0x1000) != 0 )
          v241 = (char *)v244;
        if ( v241 == "settings" || !memcmp("settings", v241, v245) )
          break;
      }
      v246 -= 32;
      v244 += 32;
      if ( !v246 )
        goto LABEL_349;
    }
  }
  if ( v244 == v242 + 32 * v243 )
  {
LABEL_349:
    v248 = (_QWORD *)j___emutls_get_address(&unk_116D20, v241);
    *v248 = 0LL;
    v248[1] = 0LL;
  }
  else
  {
    v248 = (_QWORD *)(v244 + 16);
  }
  v249 = _strlen_chk("fast_connect", 0xDu);
  v251 = *((_DWORD *)v248 + 2);
  v252 = *(_DWORD *)v248;
  v16 = *(_DWORD *)v248 == 0;
  v253 = v251;
  if ( !v16 )
  {
    v254 = v249;
    v255 = 32 * v252;
    v253 = v251;
    while ( 1 )
    {
      v256 = *(_DWORD *)v253;
      v250 = (char *)*(unsigned __int8 *)(v253 + 13);
      if ( (*(_WORD *)(v253 + 14) & 0x1000) != 0 )
        v256 = 13 - (_DWORD)v250;
      if ( v254 == v256 )
      {
        v250 = *(char **)(v253 + 8);
        if ( (*(_WORD *)(v253 + 14) & 0x1000) != 0 )
          v250 = (char *)v253;
        if ( v250 == "fast_connect" || !memcmp("fast_connect", v250, v254) )
          break;
      }
      v255 -= 32;
      v253 += 32;
      if ( !v255 )
        goto LABEL_362;
    }
  }
  if ( v253 == v251 + 32 * v252 )
  {
LABEL_362:
    v258 = (_QWORD *)j___emutls_get_address(&unk_116D20, v250);
    v257 = 0;
    *v258 = 0LL;
    v258[1] = 0LL;
  }
  else
  {
    v257 = *(unsigned __int16 *)(v253 + 30);
  }
  byte_1A4483 = v257 == 10;
  v259 = _strlen_chk("client", 7u);
  v261 = s2;
  v262 = v554;
  v263 = s2;
  if ( (_DWORD)v554 )
  {
    v264 = v259;
    v265 = 32 * v554;
    v263 = s2;
    while ( 1 )
    {
      v266 = *(_DWORD *)v263;
      v260 = (char *)*(unsigned __int8 *)(v263 + 13);
      if ( (*(_WORD *)(v263 + 14) & 0x1000) != 0 )
        v266 = 13 - (_DWORD)v260;
      if ( v264 == v266 )
      {
        v260 = *(char **)(v263 + 8);
        if ( (*(_WORD *)(v263 + 14) & 0x1000) != 0 )
          v260 = (char *)v263;
        if ( v260 == "client" || !memcmp("client", v260, v264) )
          break;
      }
      v265 -= 32;
      v263 += 32;
      if ( !v265 )
        goto LABEL_375;
    }
  }
  if ( v263 == v261 + 32 * v262 )
  {
LABEL_375:
    v267 = (_QWORD *)j___emutls_get_address(&unk_116D20, v260);
    *v267 = 0LL;
    v267[1] = 0LL;
  }
  else
  {
    v267 = (_QWORD *)(v263 + 16);
  }
  v268 = _strlen_chk("settings", 9u);
  v270 = *((_DWORD *)v267 + 2);
  v271 = *(_DWORD *)v267;
  v16 = *(_DWORD *)v267 == 0;
  v272 = v270;
  if ( !v16 )
  {
    v273 = v268;
    v274 = 32 * v271;
    v272 = v270;
    while ( 1 )
    {
      v275 = *(_DWORD *)v272;
      v269 = (char *)*(unsigned __int8 *)(v272 + 13);
      if ( (*(_WORD *)(v272 + 14) & 0x1000) != 0 )
        v275 = 13 - (_DWORD)v269;
      if ( v273 == v275 )
      {
        v269 = *(char **)(v272 + 8);
        if ( (*(_WORD *)(v272 + 14) & 0x1000) != 0 )
          v269 = (char *)v272;
        if ( v269 == "settings" || !memcmp("settings", v269, v273) )
          break;
      }
      v274 -= 32;
      v272 += 32;
      if ( !v274 )
        goto LABEL_388;
    }
  }
  if ( v272 == v270 + 32 * v271 )
  {
LABEL_388:
    v276 = (_QWORD *)j___emutls_get_address(&unk_116D20, v269);
    *v276 = 0LL;
    v276[1] = 0LL;
  }
  else
  {
    v276 = (_QWORD *)(v272 + 16);
  }
  v277 = _strlen_chk("voice_chat", 0xBu);
  v279 = *((_DWORD *)v276 + 2);
  v280 = *(_DWORD *)v276;
  v16 = *(_DWORD *)v276 == 0;
  v281 = v279;
  if ( !v16 )
  {
    v282 = v277;
    v283 = 32 * v280;
    v281 = v279;
    while ( 1 )
    {
      v284 = *(_DWORD *)v281;
      v278 = (char *)*(unsigned __int8 *)(v281 + 13);
      if ( (*(_WORD *)(v281 + 14) & 0x1000) != 0 )
        v284 = 13 - (_DWORD)v278;
      if ( v282 == v284 )
      {
        v278 = *(char **)(v281 + 8);
        if ( (*(_WORD *)(v281 + 14) & 0x1000) != 0 )
          v278 = (char *)v281;
        if ( v278 == "voice_chat" || !memcmp("voice_chat", v278, v282) )
          break;
      }
      v283 -= 32;
      v281 += 32;
      if ( !v283 )
        goto LABEL_401;
    }
  }
  if ( v281 == v279 + 32 * v280 )
  {
LABEL_401:
    v286 = (_QWORD *)j___emutls_get_address(&unk_116D20, v278);
    v285 = 0;
    *v286 = 0LL;
    v286[1] = 0LL;
  }
  else
  {
    v285 = *(unsigned __int16 *)(v281 + 30);
  }
  byte_1A4484 = v285 == 10;
  v287 = _strlen_chk("client", 7u);
  v289 = s2;
  v290 = v554;
  v291 = s2;
  if ( (_DWORD)v554 )
  {
    v292 = v287;
    v293 = 32 * v554;
    v291 = s2;
    while ( 1 )
    {
      v294 = *(_DWORD *)v291;
      v288 = (char *)*(unsigned __int8 *)(v291 + 13);
      if ( (*(_WORD *)(v291 + 14) & 0x1000) != 0 )
        v294 = 13 - (_DWORD)v288;
      if ( v292 == v294 )
      {
        v288 = *(char **)(v291 + 8);
        if ( (*(_WORD *)(v291 + 14) & 0x1000) != 0 )
          v288 = (char *)v291;
        if ( v288 == "client" || !memcmp("client", v288, v292) )
          break;
      }
      v293 -= 32;
      v291 += 32;
      if ( !v293 )
        goto LABEL_414;
    }
  }
  if ( v291 == v289 + 32 * v290 )
  {
LABEL_414:
    v295 = (_QWORD *)j___emutls_get_address(&unk_116D20, v288);
    *v295 = 0LL;
    v295[1] = 0LL;
  }
  else
  {
    v295 = (_QWORD *)(v291 + 16);
  }
  v296 = _strlen_chk("settings", 9u);
  v298 = *((_DWORD *)v295 + 2);
  v299 = *(_DWORD *)v295;
  v16 = *(_DWORD *)v295 == 0;
  v300 = v298;
  if ( !v16 )
  {
    v301 = v296;
    v302 = 32 * v299;
    v300 = v298;
    while ( 1 )
    {
      v303 = *(_DWORD *)v300;
      v297 = (char *)*(unsigned __int8 *)(v300 + 13);
      if ( (*(_WORD *)(v300 + 14) & 0x1000) != 0 )
        v303 = 13 - (_DWORD)v297;
      if ( v301 == v303 )
      {
        v297 = *(char **)(v300 + 8);
        if ( (*(_WORD *)(v300 + 14) & 0x1000) != 0 )
          v297 = (char *)v300;
        if ( v297 == "settings" || !memcmp("settings", v297, v301) )
          break;
      }
      v302 -= 32;
      v300 += 32;
      if ( !v302 )
        goto LABEL_427;
    }
  }
  if ( v300 == v298 + 32 * v299 )
  {
LABEL_427:
    v304 = (_QWORD *)j___emutls_get_address(&unk_116D20, v297);
    *v304 = 0LL;
    v304[1] = 0LL;
  }
  else
  {
    v304 = (_QWORD *)(v300 + 16);
  }
  v305 = _strlen_chk("display_fps", 0xCu);
  v307 = *((_DWORD *)v304 + 2);
  v308 = *(_DWORD *)v304;
  v16 = *(_DWORD *)v304 == 0;
  v309 = v307;
  if ( !v16 )
  {
    v310 = v305;
    v311 = 32 * v308;
    v309 = v307;
    while ( 1 )
    {
      v312 = *(_DWORD *)v309;
      v306 = (char *)*(unsigned __int8 *)(v309 + 13);
      if ( (*(_WORD *)(v309 + 14) & 0x1000) != 0 )
        v312 = 13 - (_DWORD)v306;
      if ( v310 == v312 )
      {
        v306 = *(char **)(v309 + 8);
        if ( (*(_WORD *)(v309 + 14) & 0x1000) != 0 )
          v306 = (char *)v309;
        if ( v306 == "display_fps" || !memcmp("display_fps", v306, v310) )
          break;
      }
      v311 -= 32;
      v309 += 32;
      if ( !v311 )
        goto LABEL_440;
    }
  }
  if ( v309 == v307 + 32 * v308 )
  {
LABEL_440:
    v314 = (_QWORD *)j___emutls_get_address(&unk_116D20, v306);
    v313 = 0;
    *v314 = 0LL;
    v314[1] = 0LL;
  }
  else
  {
    v313 = *(unsigned __int16 *)(v309 + 30);
  }
  byte_1A4485 = v313 == 10;
  v315 = _strlen_chk("client", 7u);
  v317 = s2;
  v318 = v554;
  v319 = s2;
  if ( (_DWORD)v554 )
  {
    v320 = v315;
    v321 = 32 * v554;
    v319 = s2;
    while ( 1 )
    {
      v322 = *(_DWORD *)v319;
      v316 = (char *)*(unsigned __int8 *)(v319 + 13);
      if ( (*(_WORD *)(v319 + 14) & 0x1000) != 0 )
        v322 = 13 - (_DWORD)v316;
      if ( v320 == v322 )
      {
        v316 = *(char **)(v319 + 8);
        if ( (*(_WORD *)(v319 + 14) & 0x1000) != 0 )
          v316 = (char *)v319;
        if ( v316 == "client" || !memcmp("client", v316, v320) )
          break;
      }
      v321 -= 32;
      v319 += 32;
      if ( !v321 )
        goto LABEL_453;
    }
  }
  if ( v319 == v317 + 32 * v318 )
  {
LABEL_453:
    v323 = (_QWORD *)j___emutls_get_address(&unk_116D20, v316);
    *v323 = 0LL;
    v323[1] = 0LL;
  }
  else
  {
    v323 = (_QWORD *)(v319 + 16);
  }
  v324 = _strlen_chk("settings", 9u);
  v326 = *((_DWORD *)v323 + 2);
  v327 = *(_DWORD *)v323;
  v16 = *(_DWORD *)v323 == 0;
  v328 = v326;
  if ( !v16 )
  {
    v329 = v324;
    v330 = 32 * v327;
    v328 = v326;
    while ( 1 )
    {
      v331 = *(_DWORD *)v328;
      v325 = (char *)*(unsigned __int8 *)(v328 + 13);
      if ( (*(_WORD *)(v328 + 14) & 0x1000) != 0 )
        v331 = 13 - (_DWORD)v325;
      if ( v329 == v331 )
      {
        v325 = *(char **)(v328 + 8);
        if ( (*(_WORD *)(v328 + 14) & 0x1000) != 0 )
          v325 = (char *)v328;
        if ( v325 == "settings" || !memcmp("settings", v325, v329) )
          break;
      }
      v330 -= 32;
      v328 += 32;
      if ( !v330 )
        goto LABEL_466;
    }
  }
  if ( v328 == v326 + 32 * v327 )
  {
LABEL_466:
    v332 = (_QWORD *)j___emutls_get_address(&unk_116D20, v325);
    *v332 = 0LL;
    v332[1] = 0LL;
  }
  else
  {
    v332 = (_QWORD *)(v328 + 16);
  }
  v333 = _strlen_chk("fps_limit", 0xAu);
  v335 = *((_DWORD *)v332 + 2);
  v336 = *(_DWORD *)v332;
  v16 = *(_DWORD *)v332 == 0;
  v337 = v335;
  if ( !v16 )
  {
    v338 = v333;
    v339 = 32 * v336;
    v337 = v335;
    while ( 1 )
    {
      v340 = *(_DWORD *)v337;
      v334 = (char *)*(unsigned __int8 *)(v337 + 13);
      if ( (*(_WORD *)(v337 + 14) & 0x1000) != 0 )
        v340 = 13 - (_DWORD)v334;
      if ( v338 == v340 )
      {
        v334 = *(char **)(v337 + 8);
        if ( (*(_WORD *)(v337 + 14) & 0x1000) != 0 )
          v334 = (char *)v337;
        if ( v334 == "fps_limit" || !memcmp("fps_limit", v334, v338) )
          break;
      }
      v339 -= 32;
      v337 += 32;
      if ( !v339 )
        goto LABEL_479;
    }
  }
  if ( v337 == v335 + 32 * v336 )
  {
LABEL_479:
    v342 = (_QWORD *)j___emutls_get_address(&unk_116D20, v334);
    v341 = 0;
    *v342 = 0LL;
    v342[1] = 0LL;
  }
  else
  {
    v341 = *(_DWORD *)(v337 + 16);
  }
  dword_116D04 = v341;
  v343 = _strlen_chk("client", 7u);
  v345 = s2;
  v346 = v554;
  v347 = s2;
  if ( (_DWORD)v554 )
  {
    v348 = v343;
    v349 = 32 * v554;
    v347 = s2;
    while ( 1 )
    {
      v350 = *(_DWORD *)v347;
      v344 = (char *)*(unsigned __int8 *)(v347 + 13);
      if ( (*(_WORD *)(v347 + 14) & 0x1000) != 0 )
        v350 = 13 - (_DWORD)v344;
      if ( v348 == v350 )
      {
        v344 = *(char **)(v347 + 8);
        if ( (*(_WORD *)(v347 + 14) & 0x1000) != 0 )
          v344 = (char *)v347;
        if ( v344 == "client" || !memcmp("client", v344, v348) )
          break;
      }
      v349 -= 32;
      v347 += 32;
      if ( !v349 )
        goto LABEL_492;
    }
  }
  if ( v347 == v345 + 32 * v346 )
  {
LABEL_492:
    v351 = (_QWORD *)j___emutls_get_address(&unk_116D20, v344);
    *v351 = 0LL;
    v351[1] = 0LL;
  }
  else
  {
    v351 = (_QWORD *)(v347 + 16);
  }
  v352 = _strlen_chk("settings", 9u);
  v354 = *((_DWORD *)v351 + 2);
  v355 = *(_DWORD *)v351;
  v16 = *(_DWORD *)v351 == 0;
  v356 = v354;
  if ( !v16 )
  {
    v357 = v352;
    v358 = 32 * v355;
    v356 = v354;
    while ( 1 )
    {
      v359 = *(_DWORD *)v356;
      v353 = (char *)*(unsigned __int8 *)(v356 + 13);
      if ( (*(_WORD *)(v356 + 14) & 0x1000) != 0 )
        v359 = 13 - (_DWORD)v353;
      if ( v357 == v359 )
      {
        v353 = *(char **)(v356 + 8);
        if ( (*(_WORD *)(v356 + 14) & 0x1000) != 0 )
          v353 = (char *)v356;
        if ( v353 == "settings" || !memcmp("settings", v353, v357) )
          break;
      }
      v358 -= 32;
      v356 += 32;
      if ( !v358 )
        goto LABEL_505;
    }
  }
  if ( v356 == v354 + 32 * v355 )
  {
LABEL_505:
    v360 = (_QWORD *)j___emutls_get_address(&unk_116D20, v353);
    *v360 = 0LL;
    v360[1] = 0LL;
  }
  else
  {
    v360 = (_QWORD *)(v356 + 16);
  }
  v361 = _strlen_chk("chat_strings", 0xDu);
  v363 = *((_DWORD *)v360 + 2);
  v364 = *(_DWORD *)v360;
  v16 = *(_DWORD *)v360 == 0;
  v365 = v363;
  if ( !v16 )
  {
    v366 = v361;
    v367 = 32 * v364;
    v365 = v363;
    while ( 1 )
    {
      v368 = *(_DWORD *)v365;
      v362 = (char *)*(unsigned __int8 *)(v365 + 13);
      if ( (*(_WORD *)(v365 + 14) & 0x1000) != 0 )
        v368 = 13 - (_DWORD)v362;
      if ( v366 == v368 )
      {
        v362 = *(char **)(v365 + 8);
        if ( (*(_WORD *)(v365 + 14) & 0x1000) != 0 )
          v362 = (char *)v365;
        if ( v362 == "chat_strings" || !memcmp("chat_strings", v362, v366) )
          break;
      }
      v367 -= 32;
      v365 += 32;
      if ( !v367 )
        goto LABEL_518;
    }
  }
  if ( v365 == v363 + 32 * v364 )
  {
LABEL_518:
    v370 = (_QWORD *)j___emutls_get_address(&unk_116D20, v362);
    v369 = 0;
    *v370 = 0LL;
    v370[1] = 0LL;
  }
  else
  {
    v369 = *(_DWORD *)(v365 + 16);
  }
  dword_116D08 = v369;
  v371 = _strlen_chk("client", 7u);
  v373 = s2;
  v374 = v554;
  v375 = s2;
  if ( (_DWORD)v554 )
  {
    v376 = v371;
    v377 = 32 * v554;
    v375 = s2;
    while ( 1 )
    {
      v378 = *(_DWORD *)v375;
      v372 = (char *)*(unsigned __int8 *)(v375 + 13);
      if ( (*(_WORD *)(v375 + 14) & 0x1000) != 0 )
        v378 = 13 - (_DWORD)v372;
      if ( v376 == v378 )
      {
        v372 = *(char **)(v375 + 8);
        if ( (*(_WORD *)(v375 + 14) & 0x1000) != 0 )
          v372 = (char *)v375;
        if ( v372 == "client" || !memcmp("client", v372, v376) )
          break;
      }
      v377 -= 32;
      v375 += 32;
      if ( !v377 )
        goto LABEL_531;
    }
  }
  if ( v375 == v373 + 32 * v374 )
  {
LABEL_531:
    v379 = (_QWORD *)j___emutls_get_address(&unk_116D20, v372);
    *v379 = 0LL;
    v379[1] = 0LL;
  }
  else
  {
    v379 = (_QWORD *)(v375 + 16);
  }
  v380 = _strlen_chk("settings", 9u);
  v382 = *((_DWORD *)v379 + 2);
  v383 = *(_DWORD *)v379;
  v16 = *(_DWORD *)v379 == 0;
  v384 = v382;
  if ( !v16 )
  {
    v385 = v380;
    v386 = 32 * v383;
    v384 = v382;
    while ( 1 )
    {
      v387 = *(_DWORD *)v384;
      v381 = (char *)*(unsigned __int8 *)(v384 + 13);
      if ( (*(_WORD *)(v384 + 14) & 0x1000) != 0 )
        v387 = 13 - (_DWORD)v381;
      if ( v385 == v387 )
      {
        v381 = *(char **)(v384 + 8);
        if ( (*(_WORD *)(v384 + 14) & 0x1000) != 0 )
          v381 = (char *)v384;
        if ( v381 == "settings" || !memcmp("settings", v381, v385) )
          break;
      }
      v386 -= 32;
      v384 += 32;
      if ( !v386 )
        goto LABEL_544;
    }
  }
  if ( v384 == v382 + 32 * v383 )
  {
LABEL_544:
    v388 = (_QWORD *)j___emutls_get_address(&unk_116D20, v381);
    *v388 = 0LL;
    v388[1] = 0LL;
  }
  else
  {
    v388 = (_QWORD *)(v384 + 16);
  }
  v389 = _strlen_chk("aspect_ratio", 0xDu);
  v391 = *((_DWORD *)v388 + 2);
  v392 = *(_DWORD *)v388;
  v16 = *(_DWORD *)v388 == 0;
  v393 = v391;
  if ( !v16 )
  {
    v394 = v389;
    v395 = 32 * v392;
    v393 = v391;
    while ( 1 )
    {
      v396 = *(_DWORD *)v393;
      v390 = (char *)*(unsigned __int8 *)(v393 + 13);
      if ( (*(_WORD *)(v393 + 14) & 0x1000) != 0 )
        v396 = 13 - (_DWORD)v390;
      if ( v394 == v396 )
      {
        v390 = *(char **)(v393 + 8);
        if ( (*(_WORD *)(v393 + 14) & 0x1000) != 0 )
          v390 = (char *)v393;
        if ( v390 == "aspect_ratio" || !memcmp("aspect_ratio", v390, v394) )
          break;
      }
      v395 -= 32;
      v393 += 32;
      if ( !v395 )
        goto LABEL_557;
    }
  }
  if ( v393 == v391 + 32 * v392 )
  {
LABEL_557:
    v398 = (_QWORD *)j___emutls_get_address(&unk_116D20, v390);
    v397 = 0;
    *v398 = 0LL;
    v398[1] = 0LL;
  }
  else
  {
    v397 = *(_DWORD *)(v393 + 16);
  }
  dword_1A4488 = v397;
  v399 = _strlen_chk("client", 7u);
  v401 = s2;
  v402 = v554;
  v403 = s2;
  if ( (_DWORD)v554 )
  {
    v404 = v399;
    v405 = 32 * v554;
    v403 = s2;
    while ( 1 )
    {
      v406 = *(_DWORD *)v403;
      v400 = (char *)*(unsigned __int8 *)(v403 + 13);
      if ( (*(_WORD *)(v403 + 14) & 0x1000) != 0 )
        v406 = 13 - (_DWORD)v400;
      if ( v404 == v406 )
      {
        v400 = *(char **)(v403 + 8);
        if ( (*(_WORD *)(v403 + 14) & 0x1000) != 0 )
          v400 = (char *)v403;
        if ( v400 == "client" || !memcmp("client", v400, v404) )
          break;
      }
      v405 -= 32;
      v403 += 32;
      if ( !v405 )
        goto LABEL_570;
    }
  }
  if ( v403 == v401 + 32 * v402 )
  {
LABEL_570:
    v407 = (_QWORD *)j___emutls_get_address(&unk_116D20, v400);
    *v407 = 0LL;
    v407[1] = 0LL;
  }
  else
  {
    v407 = (_QWORD *)(v403 + 16);
  }
  v408 = _strlen_chk("settings", 9u);
  v410 = *((_DWORD *)v407 + 2);
  v411 = *(_DWORD *)v407;
  v16 = *(_DWORD *)v407 == 0;
  v412 = v410;
  if ( !v16 )
  {
    v413 = v408;
    v414 = 32 * v411;
    v412 = v410;
    while ( 1 )
    {
      v415 = *(_DWORD *)v412;
      v409 = (char *)*(unsigned __int8 *)(v412 + 13);
      if ( (*(_WORD *)(v412 + 14) & 0x1000) != 0 )
        v415 = 13 - (_DWORD)v409;
      if ( v413 == v415 )
      {
        v409 = *(char **)(v412 + 8);
        if ( (*(_WORD *)(v412 + 14) & 0x1000) != 0 )
          v409 = (char *)v412;
        if ( v409 == "settings" || !memcmp("settings", v409, v413) )
          break;
      }
      v414 -= 32;
      v412 += 32;
      if ( !v414 )
        goto LABEL_583;
    }
  }
  if ( v412 == v410 + 32 * v411 )
  {
LABEL_583:
    v416 = (_QWORD *)j___emutls_get_address(&unk_116D20, v409);
    *v416 = 0LL;
    v416[1] = 0LL;
  }
  else
  {
    v416 = (_QWORD *)(v412 + 16);
  }
  v417 = _strlen_chk("font_size", 0xAu);
  v419 = *((_DWORD *)v416 + 2);
  v420 = *(_DWORD *)v416;
  v16 = *(_DWORD *)v416 == 0;
  v421 = v419;
  if ( !v16 )
  {
    v422 = v417;
    v423 = 32 * v420;
    v421 = v419;
    while ( 1 )
    {
      v424 = *(_DWORD *)v421;
      v418 = (char *)*(unsigned __int8 *)(v421 + 13);
      if ( (*(_WORD *)(v421 + 14) & 0x1000) != 0 )
        v424 = 13 - (_DWORD)v418;
      if ( v422 == v424 )
      {
        v418 = *(char **)(v421 + 8);
        if ( (*(_WORD *)(v421 + 14) & 0x1000) != 0 )
          v418 = (char *)v421;
        if ( v418 == "font_size" || !memcmp("font_size", v418, v422) )
          break;
      }
      v423 -= 32;
      v421 += 32;
      if ( !v423 )
        goto LABEL_600;
    }
  }
  if ( v421 == v419 + 32 * v420 )
  {
LABEL_600:
    v428 = (_QWORD *)j___emutls_get_address(&unk_116D20, v418);
    *v428 = 0LL;
    v428[1] = 0LL;
    v429 = (_DWORD *)v428 + 1;
    LODWORD(v426) = *(_DWORD *)v428;
    HIDWORD(v426) = *v429;
LABEL_601:
    v427 = sub_108CB0(v426, HIDWORD(v426));
    goto LABEL_602;
  }
  v425 = *(_WORD *)(v421 + 30);
  if ( (v425 & 0x200) != 0 )
  {
    v430 = *(double *)(v421 + 16);
    goto LABEL_606;
  }
  if ( (v425 & 0x20) != 0 )
  {
    v430 = (double)*(int *)(v421 + 16);
    goto LABEL_606;
  }
  if ( (v425 & 0x40) != 0 )
  {
    v430 = (double)*(unsigned int *)(v421 + 16);
    goto LABEL_606;
  }
  v426 = *(_QWORD *)(v421 + 16);
  if ( (v425 & 0x80) == 0 )
    goto LABEL_601;
  LODWORD(v427) = sub_108B48(v426, HIDWORD(v426));
LABEL_602:
  v430 = *(double *)&v427;
LABEL_606:
  v431 = v430;
  flt_116D0C = v431;
  v432 = _strlen_chk("client", 7u);
  v434 = s2;
  v435 = v554;
  v436 = s2;
  if ( (_DWORD)v554 )
  {
    v437 = v432;
    v438 = 32 * v554;
    v436 = s2;
    while ( 1 )
    {
      v439 = *(_DWORD *)v436;
      v433 = (char *)*(unsigned __int8 *)(v436 + 13);
      if ( (*(_WORD *)(v436 + 14) & 0x1000) != 0 )
        v439 = 13 - (_DWORD)v433;
      if ( v437 == v439 )
      {
        v433 = *(char **)(v436 + 8);
        if ( (*(_WORD *)(v436 + 14) & 0x1000) != 0 )
          v433 = (char *)v436;
        if ( v433 == "client" || !memcmp("client", v433, v437) )
          break;
      }
      v438 -= 32;
      v436 += 32;
      if ( !v438 )
        goto LABEL_618;
    }
  }
  if ( v436 == v434 + 32 * v435 )
  {
LABEL_618:
    v440 = (_QWORD *)j___emutls_get_address(&unk_116D20, v433);
    *v440 = 0LL;
    v440[1] = 0LL;
  }
  else
  {
    v440 = (_QWORD *)(v436 + 16);
  }
  v441 = _strlen_chk("settings", 9u);
  v443 = *((_DWORD *)v440 + 2);
  v444 = *(_DWORD *)v440;
  v16 = *(_DWORD *)v440 == 0;
  v445 = v443;
  if ( !v16 )
  {
    v446 = v441;
    v447 = 32 * v444;
    v445 = v443;
    while ( 1 )
    {
      v448 = *(_DWORD *)v445;
      v442 = (char *)*(unsigned __int8 *)(v445 + 13);
      if ( (*(_WORD *)(v445 + 14) & 0x1000) != 0 )
        v448 = 13 - (_DWORD)v442;
      if ( v446 == v448 )
      {
        v442 = *(char **)(v445 + 8);
        if ( (*(_WORD *)(v445 + 14) & 0x1000) != 0 )
          v442 = (char *)v445;
        if ( v442 == "settings" || !memcmp("settings", v442, v446) )
          break;
      }
      v447 -= 32;
      v445 += 32;
      if ( !v447 )
        goto LABEL_631;
    }
  }
  if ( v445 == v443 + 32 * v444 )
  {
LABEL_631:
    v449 = (_QWORD *)j___emutls_get_address(&unk_116D20, v442);
    *v449 = 0LL;
    v449[1] = 0LL;
  }
  else
  {
    v449 = (_QWORD *)(v445 + 16);
  }
  v450 = _strlen_chk("chat_posx", 0xAu);
  v452 = *((_DWORD *)v449 + 2);
  v453 = *(_DWORD *)v449;
  v16 = *(_DWORD *)v449 == 0;
  v454 = v452;
  if ( !v16 )
  {
    v455 = v450;
    v456 = 32 * v453;
    v454 = v452;
    while ( 1 )
    {
      v457 = *(_DWORD *)v454;
      v451 = (char *)*(unsigned __int8 *)(v454 + 13);
      if ( (*(_WORD *)(v454 + 14) & 0x1000) != 0 )
        v457 = 13 - (_DWORD)v451;
      if ( v455 == v457 )
      {
        v451 = *(char **)(v454 + 8);
        if ( (*(_WORD *)(v454 + 14) & 0x1000) != 0 )
          v451 = (char *)v454;
        if ( v451 == "chat_posx" || !memcmp("chat_posx", v451, v455) )
          break;
      }
      v456 -= 32;
      v454 += 32;
      if ( !v456 )
        goto LABEL_644;
    }
  }
  if ( v454 == v452 + 32 * v453 )
  {
LABEL_644:
    v459 = (_QWORD *)j___emutls_get_address(&unk_116D20, v451);
    *v459 = 0LL;
    v459[1] = 0LL;
    v458 = 0;
  }
  else
  {
    v458 = *(_DWORD *)(v454 + 16);
  }
  *(float *)&dword_116D10 = (float)v458;
  v460 = _strlen_chk("client", 7u);
  v462 = s2;
  v463 = v554;
  v464 = s2;
  if ( (_DWORD)v554 )
  {
    v465 = v460;
    v466 = 32 * v554;
    v464 = s2;
    while ( 1 )
    {
      v467 = *(_DWORD *)v464;
      v461 = (char *)*(unsigned __int8 *)(v464 + 13);
      if ( (*(_WORD *)(v464 + 14) & 0x1000) != 0 )
        v467 = 13 - (_DWORD)v461;
      if ( v465 == v467 )
      {
        v461 = *(char **)(v464 + 8);
        if ( (*(_WORD *)(v464 + 14) & 0x1000) != 0 )
          v461 = (char *)v464;
        if ( v461 == "client" || !memcmp("client", v461, v465) )
          break;
      }
      v466 -= 32;
      v464 += 32;
      if ( !v466 )
        goto LABEL_657;
    }
  }
  if ( v464 == v462 + 32 * v463 )
  {
LABEL_657:
    v468 = (_QWORD *)j___emutls_get_address(&unk_116D20, v461);
    *v468 = 0LL;
    v468[1] = 0LL;
  }
  else
  {
    v468 = (_QWORD *)(v464 + 16);
  }
  v469 = _strlen_chk("settings", 9u);
  v471 = *((_DWORD *)v468 + 2);
  v472 = *(_DWORD *)v468;
  v16 = *(_DWORD *)v468 == 0;
  v473 = v471;
  if ( !v16 )
  {
    v474 = v469;
    v475 = 32 * v472;
    v473 = v471;
    while ( 1 )
    {
      v476 = *(_DWORD *)v473;
      v470 = (char *)*(unsigned __int8 *)(v473 + 13);
      if ( (*(_WORD *)(v473 + 14) & 0x1000) != 0 )
        v476 = 13 - (_DWORD)v470;
      if ( v474 == v476 )
      {
        v470 = *(char **)(v473 + 8);
        if ( (*(_WORD *)(v473 + 14) & 0x1000) != 0 )
          v470 = (char *)v473;
        if ( v470 == "settings" || !memcmp("settings", v470, v474) )
          break;
      }
      v475 -= 32;
      v473 += 32;
      if ( !v475 )
        goto LABEL_670;
    }
  }
  if ( v473 == v471 + 32 * v472 )
  {
LABEL_670:
    v477 = (_QWORD *)j___emutls_get_address(&unk_116D20, v470);
    *v477 = 0LL;
    v477[1] = 0LL;
  }
  else
  {
    v477 = (_QWORD *)(v473 + 16);
  }
  v478 = _strlen_chk("chat_posy", 0xAu);
  v480 = *((_DWORD *)v477 + 2);
  v481 = *(_DWORD *)v477;
  v16 = *(_DWORD *)v477 == 0;
  v482 = v480;
  if ( !v16 )
  {
    v483 = v478;
    v484 = 32 * v481;
    v482 = v480;
    while ( 1 )
    {
      v485 = *(_DWORD *)v482;
      v479 = (char *)*(unsigned __int8 *)(v482 + 13);
      if ( (*(_WORD *)(v482 + 14) & 0x1000) != 0 )
        v485 = 13 - (_DWORD)v479;
      if ( v483 == v485 )
      {
        v479 = *(char **)(v482 + 8);
        if ( (*(_WORD *)(v482 + 14) & 0x1000) != 0 )
          v479 = (char *)v482;
        if ( v479 == "chat_posy" || !memcmp("chat_posy", v479, v483) )
          break;
      }
      v484 -= 32;
      v482 += 32;
      if ( !v484 )
        goto LABEL_683;
    }
  }
  if ( v482 == v480 + 32 * v481 )
  {
LABEL_683:
    v487 = (_QWORD *)j___emutls_get_address(&unk_116D20, v479);
    *v487 = 0LL;
    v487[1] = 0LL;
    v486 = 0;
  }
  else
  {
    v486 = *(_DWORD *)(v482 + 16);
  }
  unk_116D14 = (float)v486;
  v488 = _strlen_chk("client", 7u);
  v490 = s2;
  v491 = v554;
  v492 = s2;
  if ( (_DWORD)v554 )
  {
    v493 = v488;
    v494 = 32 * v554;
    v492 = s2;
    while ( 1 )
    {
      v495 = *(_DWORD *)v492;
      v489 = (char *)*(unsigned __int8 *)(v492 + 13);
      if ( (*(_WORD *)(v492 + 14) & 0x1000) != 0 )
        v495 = 13 - (_DWORD)v489;
      if ( v493 == v495 )
      {
        v489 = *(char **)(v492 + 8);
        if ( (*(_WORD *)(v492 + 14) & 0x1000) != 0 )
          v489 = (char *)v492;
        if ( v489 == "client" || !memcmp("client", v489, v493) )
          break;
      }
      v494 -= 32;
      v492 += 32;
      if ( !v494 )
        goto LABEL_696;
    }
  }
  if ( v492 == v490 + 32 * v491 )
  {
LABEL_696:
    v496 = (_QWORD *)j___emutls_get_address(&unk_116D20, v489);
    *v496 = 0LL;
    v496[1] = 0LL;
  }
  else
  {
    v496 = (_QWORD *)(v492 + 16);
  }
  v497 = _strlen_chk("settings", 9u);
  v499 = *((_DWORD *)v496 + 2);
  v500 = *(_DWORD *)v496;
  v16 = *(_DWORD *)v496 == 0;
  v501 = v499;
  if ( !v16 )
  {
    v502 = v497;
    v503 = 32 * v500;
    v501 = v499;
    while ( 1 )
    {
      v504 = *(_DWORD *)v501;
      v498 = (char *)*(unsigned __int8 *)(v501 + 13);
      if ( (*(_WORD *)(v501 + 14) & 0x1000) != 0 )
        v504 = 13 - (_DWORD)v498;
      if ( v502 == v504 )
      {
        v498 = *(char **)(v501 + 8);
        if ( (*(_WORD *)(v501 + 14) & 0x1000) != 0 )
          v498 = (char *)v501;
        if ( v498 == "settings" || !memcmp("settings", v498, v502) )
          break;
      }
      v503 -= 32;
      v501 += 32;
      if ( !v503 )
        goto LABEL_709;
    }
  }
  if ( v501 == v499 + 32 * v500 )
  {
LABEL_709:
    v505 = (_QWORD *)j___emutls_get_address(&unk_116D20, v498);
    *v505 = 0LL;
    v505[1] = 0LL;
  }
  else
  {
    v505 = (_QWORD *)(v501 + 16);
  }
  v506 = _strlen_chk("chat_sizex", 0xBu);
  v508 = *((_DWORD *)v505 + 2);
  v509 = *(_DWORD *)v505;
  v16 = *(_DWORD *)v505 == 0;
  v510 = v508;
  if ( !v16 )
  {
    v511 = v506;
    v512 = 32 * v509;
    v510 = v508;
    while ( 1 )
    {
      v513 = *(_DWORD *)v510;
      v507 = (char *)*(unsigned __int8 *)(v510 + 13);
      if ( (*(_WORD *)(v510 + 14) & 0x1000) != 0 )
        v513 = 13 - (_DWORD)v507;
      if ( v511 == v513 )
      {
        v507 = *(char **)(v510 + 8);
        if ( (*(_WORD *)(v510 + 14) & 0x1000) != 0 )
          v507 = (char *)v510;
        if ( v507 == "chat_sizex" || !memcmp("chat_sizex", v507, v511) )
          break;
      }
      v512 -= 32;
      v510 += 32;
      if ( !v512 )
        goto LABEL_722;
    }
  }
  if ( v510 == v508 + 32 * v509 )
  {
LABEL_722:
    v515 = (_QWORD *)j___emutls_get_address(&unk_116D20, v507);
    *v515 = 0LL;
    v515[1] = 0LL;
    v514 = 0;
  }
  else
  {
    v514 = *(_DWORD *)(v510 + 16);
  }
  *(float *)&dword_116D18 = (float)v514;
  v516 = _strlen_chk("client", 7u);
  v518 = s2;
  v519 = v554;
  v520 = s2;
  if ( (_DWORD)v554 )
  {
    v521 = v516;
    v522 = 32 * v554;
    v520 = s2;
    while ( 1 )
    {
      v523 = *(_DWORD *)v520;
      v517 = (char *)*(unsigned __int8 *)(v520 + 13);
      if ( (*(_WORD *)(v520 + 14) & 0x1000) != 0 )
        v523 = 13 - (_DWORD)v517;
      if ( v521 == v523 )
      {
        v517 = *(char **)(v520 + 8);
        if ( (*(_WORD *)(v520 + 14) & 0x1000) != 0 )
          v517 = (char *)v520;
        if ( v517 == "client" || !memcmp("client", v517, v521) )
          break;
      }
      v522 -= 32;
      v520 += 32;
      if ( !v522 )
        goto LABEL_735;
    }
  }
  if ( v520 == v518 + 32 * v519 )
  {
LABEL_735:
    v524 = (_QWORD *)j___emutls_get_address(&unk_116D20, v517);
    *v524 = 0LL;
    v524[1] = 0LL;
  }
  else
  {
    v524 = (_QWORD *)(v520 + 16);
  }
  v525 = _strlen_chk("settings", 9u);
  v527 = *((_DWORD *)v524 + 2);
  v528 = *(_DWORD *)v524;
  v16 = *(_DWORD *)v524 == 0;
  v529 = v527;
  if ( !v16 )
  {
    v530 = v525;
    v531 = 32 * v528;
    v529 = v527;
    while ( 1 )
    {
      v532 = *(_DWORD *)v529;
      v526 = (char *)*(unsigned __int8 *)(v529 + 13);
      if ( (*(_WORD *)(v529 + 14) & 0x1000) != 0 )
        v532 = 13 - (_DWORD)v526;
      if ( v530 == v532 )
      {
        v526 = *(char **)(v529 + 8);
        if ( (*(_WORD *)(v529 + 14) & 0x1000) != 0 )
          v526 = (char *)v529;
        if ( v526 == "settings" || !memcmp("settings", v526, v530) )
          break;
      }
      v531 -= 32;
      v529 += 32;
      if ( !v531 )
        goto LABEL_748;
    }
  }
  if ( v529 == v527 + 32 * v528 )
  {
LABEL_748:
    v533 = (_QWORD *)j___emutls_get_address(&unk_116D20, v526);
    *v533 = 0LL;
    v533[1] = 0LL;
  }
  else
  {
    v533 = (_QWORD *)(v529 + 16);
  }
  v534 = _strlen_chk("chat_sizey", 0xBu);
  v536 = *((_DWORD *)v533 + 2);
  v537 = *(_DWORD *)v533;
  v16 = *(_DWORD *)v533 == 0;
  v538 = v536;
  if ( !v16 )
  {
    v539 = v534;
    v540 = 32 * v537;
    v538 = v536;
    while ( 1 )
    {
      v541 = *(_DWORD *)v538;
      v535 = (char *)*(unsigned __int8 *)(v538 + 13);
      if ( (*(_WORD *)(v538 + 14) & 0x1000) != 0 )
        v541 = 13 - (_DWORD)v535;
      if ( v539 == v541 )
      {
        v535 = *(char **)(v538 + 8);
        if ( (*(_WORD *)(v538 + 14) & 0x1000) != 0 )
          v535 = (char *)v538;
        if ( v535 == "chat_sizey" || !memcmp("chat_sizey", v535, v539) )
          break;
      }
      v540 -= 32;
      v538 += 32;
      if ( !v540 )
        goto LABEL_761;
    }
  }
  if ( v538 == v536 + 32 * v537 )
  {
LABEL_761:
    v543 = (_QWORD *)j___emutls_get_address(&unk_116D20, v535);
    v542 = 0.0;
    *v543 = 0LL;
    v543[1] = 0LL;
  }
  else
  {
    v542 = (float)*(int *)(v538 + 16);
  }
  flt_116D1C = v542;
  _android_log_print(4, "SAMP_ORIG", "host %s", a127001);
  _android_log_print(4, "SAMP_ORIG", "port %d", dword_116CE0);
  _android_log_print(4, "SAMP_ORIG", "password %s", byte_1A443B);
  _android_log_print(4, "SAMP_ORIG", "nick_name %s", aSampPlayer);
  _android_log_print(4, "SAMP_ORIG", "samp_version %d", dword_1A447C);
  _android_log_print(4, "SAMP_ORIG", "new_interface %d", (unsigned __int8)byte_1A4480);
  _android_log_print(4, "SAMP_ORIG", "system_keyboard %d", (unsigned __int8)byte_1A4481);
  _android_log_print(4, "SAMP_ORIG", "timestamp %d", (unsigned __int8)byte_1A4482);
  _android_log_print(4, "SAMP_ORIG", "fast_connect %d", (unsigned __int8)byte_1A4483);
  _android_log_print(4, "SAMP_ORIG", "voice_chat %d", (unsigned __int8)byte_1A4484);
  _android_log_print(4, "SAMP_ORIG", "display_fps %d", (unsigned __int8)byte_1A4485);
  _android_log_print(4, "SAMP_ORIG", "fps_limit %d", dword_116D04);
  _android_log_print(4, "SAMP_ORIG", "chat_strings %d", dword_116D08);
  _android_log_print(4, "SAMP_ORIG", "aspect_ratio %d", dword_1A4488);
  _android_log_print(4, "SAMP_ORIG", "font_size %.2f", flt_116D0C);
  _android_log_print(4, "SAMP_ORIG", "chat_pos %.2f %.2f", *(float *)&dword_116D10, unk_116D14);
  _android_log_print(4, "SAMP_ORIG", "chat_size %.2f %.2f", *(float *)&dword_116D18, flt_116D1C);
  fclose(stream);
  byte_1A443A = 1;
  if ( v556 )
  {
    v554 = 0LL;
    s2 = 0LL;
  }
  sub_6EDE2(&v554);
  free(v558);
  if ( v557 )
    operator delete(v557);
  return v561;
}


// ======================================================================
// ADDR: 0x80788
// SYMBOL: sub_80788
int sub_80788()
{
  int v0; // r4
  int v1; // r1
  int v2; // r1
  int v3; // r1
  _DWORD v5[4]; // [sp+0h] [bp-60h] BYREF
  _DWORD *v6; // [sp+10h] [bp-50h]
  _DWORD v7[4]; // [sp+18h] [bp-48h] BYREF
  _DWORD *v8; // [sp+28h] [bp-38h]
  _DWORD v9[4]; // [sp+30h] [bp-30h] BYREF
  _DWORD *v10; // [sp+40h] [bp-20h]

  v0 = sub_861B8();
  if ( !v0 )
  {
    sub_80664("[sv:err:plugin] : failed to init render module");
    return v0;
  }
  v10 = v9;
  v9[1] = sub_8086C;
  v9[0] = &off_1111FC;
  sub_863A4(v9);
  if ( v9 == v10 )
  {
    v1 = 4;
  }
  else
  {
    if ( !v10 )
      goto LABEL_8;
    v1 = 5;
  }
  (*(void (**)(void))(*v10 + 4 * v1))();
LABEL_8:
  v8 = v7;
  v7[0] = &off_1111FC;
  v7[1] = sub_80888;
  sub_86490(v7);
  if ( v7 == v8 )
  {
    v2 = 4;
    goto LABEL_12;
  }
  if ( v8 )
  {
    v2 = 5;
LABEL_12:
    (*(void (**)(void))(*v8 + 4 * v2))();
  }
  v6 = v5;
  v5[0] = &off_1111FC;
  v5[1] = sub_8089C;
  sub_8657C(v5);
  if ( v5 == v6 )
  {
    v3 = 4;
    goto LABEL_17;
  }
  if ( v6 )
  {
    v3 = 5;
LABEL_17:
    (*(void (**)(void))(*v6 + 4 * v3))();
  }
  return v0;
}


// ======================================================================
// ADDR: 0x808ac
// SYMBOL: sub_808AC
int sub_808AC()
{
  int v0; // r1
  int v1; // r0
  int v2; // r1
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v10; // r0
  int v11; // r0
  _DWORD v12[4]; // [sp+0h] [bp-A0h] BYREF
  _DWORD *v13; // [sp+10h] [bp-90h]
  _DWORD v14[4]; // [sp+18h] [bp-88h] BYREF
  _DWORD *v15; // [sp+28h] [bp-78h]
  _DWORD v16[4]; // [sp+30h] [bp-70h] BYREF
  _DWORD *v17; // [sp+40h] [bp-60h]
  _DWORD v18[4]; // [sp+48h] [bp-58h] BYREF
  _DWORD *v19; // [sp+58h] [bp-48h]
  _DWORD v20[4]; // [sp+60h] [bp-40h] BYREF
  _DWORD *v21; // [sp+70h] [bp-30h]
  _DWORD v22[4]; // [sp+78h] [bp-28h] BYREF
  _DWORD *v23; // [sp+88h] [bp-18h]

  if ( !sub_866CC() )
  {
    v1 = sub_80664("[sv:err:plugin] : failed to init samp");
    sub_862A4(v1);
    return 0;
  }
  v23 = v22;
  v22[1] = nullsub_18;
  v22[0] = &off_11124C;
  sub_86880(v22);
  if ( v22 == v23 )
  {
    v0 = 4;
  }
  else
  {
    if ( !v23 )
      goto LABEL_8;
    v0 = 5;
  }
  (*(void (**)(void))(*v23 + 4 * v0))();
LABEL_8:
  v21 = v20;
  v20[0] = &off_11124C;
  v20[1] = sub_80A78;
  sub_8696C(v20);
  if ( v20 == v21 )
  {
    v2 = 4;
  }
  else
  {
    if ( !v21 )
      goto LABEL_13;
    v2 = 5;
  }
  (*(void (**)(void))(*v21 + 4 * v2))();
LABEL_13:
  if ( !sub_7E47C() )
  {
    v4 = sub_80664("[sv:err:plugin] : failed to init network");
    v5 = sub_862A4(v4);
    sub_8679C(v5);
    return 0;
  }
  v19 = v18;
  v18[0] = &off_111294;
  v18[1] = nullsub_21;
  sub_7E9BC((int)v18);
  if ( v18 == v19 )
  {
    v3 = 4;
  }
  else
  {
    if ( !v19 )
      goto LABEL_20;
    v3 = 5;
  }
  (*(void (**)(void))(*v19 + 4 * v3))();
LABEL_20:
  v17 = v16;
  v16[0] = &off_1112EC;
  v16[1] = sub_80AAA;
  sub_7EAA8((int)v16);
  if ( v16 == v17 )
  {
    v6 = 4;
  }
  else
  {
    if ( !v17 )
      goto LABEL_25;
    v6 = 5;
  }
  (*(void (**)(void))(*v17 + 4 * v6))();
LABEL_25:
  v15 = v14;
  v14[0] = &off_111344;
  v14[1] = sub_80AC8;
  sub_7EB94((int)v14);
  if ( v14 == v15 )
  {
    v7 = 4;
  }
  else
  {
    if ( !v15 )
      goto LABEL_30;
    v7 = 5;
  }
  (*(void (**)(void))(*v15 + 4 * v7))();
LABEL_30:
  v13 = v12;
  v12[0] = &off_1111FC;
  v12[1] = sub_80AF8;
  sub_7EC80((int)v12);
  if ( v12 == v13 )
  {
    v8 = 4;
    goto LABEL_34;
  }
  if ( v13 )
  {
    v8 = 5;
LABEL_34:
    (*(void (**)(void))(*v13 + 4 * v8))();
  }
  if ( sub_80060() )
    return 1;
  v10 = sub_80664("[sv:err:plugin] : failed to init playback");
  v11 = sub_862A4(v10);
  sub_8679C(v11);
  sub_7E534();
  return 0;
}


// ======================================================================
