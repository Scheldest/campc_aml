
// Address: 0x18c2f8
// Original: j__ZN8CCredits6UpdateEv
// Demangled: CCredits::Update(void)
// attributes: thunk
int __fastcall CCredits::Update(CCredits *this)
{
  return _ZN8CCredits6UpdateEv(this);
}


// ============================================================

// Address: 0x191740
// Original: j__ZN8CCredits15PrintCreditTextEffPtRjfb
// Demangled: CCredits::PrintCreditText(float,float,ushort *,uint &,float,bool)
// attributes: thunk
int __fastcall CCredits::PrintCreditText(
        CCredits *this,
        float a2,
        float a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        float a6,
        bool a7)
{
  return _ZN8CCredits15PrintCreditTextEffPtRjfb(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x194920
// Original: j__ZN8CCredits5StartEv
// Demangled: CCredits::Start(void)
// attributes: thunk
int __fastcall CCredits::Start(CCredits *this)
{
  return _ZN8CCredits5StartEv(this);
}


// ============================================================

// Address: 0x1974d8
// Original: j__ZN8CCredits13RenderCreditsEv
// Demangled: CCredits::RenderCredits(void)
// attributes: thunk
int __fastcall CCredits::RenderCredits(CCredits *this)
{
  return _ZN8CCredits13RenderCreditsEv(this);
}


// ============================================================

// Address: 0x19e1f8
// Original: j__ZN8CCredits6RenderEv
// Demangled: CCredits::Render(void)
// attributes: thunk
int __fastcall CCredits::Render(CCredits *this)
{
  return _ZN8CCredits6RenderEv(this);
}


// ============================================================

// Address: 0x1a0b5c
// Original: j__ZN8CCredits4StopEv
// Demangled: CCredits::Stop(void)
// attributes: thunk
int __fastcall CCredits::Stop(CCredits *this)
{
  return _ZN8CCredits4StopEv(this);
}


// ============================================================

// Address: 0x45ce58
// Original: _ZN8CCredits6RenderEv
// Demangled: CCredits::Render(void)
int __fastcall CCredits::Render(CCredits *this)
{
  int result; // r0
  bool v2; // zf

  result = (unsigned __int8)CCredits::bCreditsGoing;
  if ( CCredits::bCreditsGoing )
  {
    result = (int)&gMobileMenu;
    v2 = dword_6E0090 == 0;
    if ( !dword_6E0090 )
    {
      result = dword_6E0098;
      v2 = dword_6E0098 == 0;
    }
    if ( v2 )
    {
      printingCredits = (unsigned __int8)&stderr + 1;
      CCredits::RenderCredits((CCredits *)((char *)&stderr + 1));
      result = 0;
      printingCredits = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x45cea0
// Original: _ZN8CCredits13RenderCreditsEv
// Demangled: CCredits::RenderCredits(void)
char *__fastcall CCredits::RenderCredits(CCredits *this)
{
  int v1; // r4
  int v2; // r5
  unsigned __int8 v3; // r2
  float v4; // r1
  unsigned __int8 v5; // r1
  unsigned __int8 v6; // r1
  unsigned __int8 v7; // r1
  signed __int8 v8; // r1
  float v9; // s16
  CCredits *v10; // r0
  CCredits *v11; // r0
  CCredits *v12; // r0
  CCredits *v13; // r0
  CCredits *v14; // r0
  CCredits *v15; // r0
  CCredits *v16; // r0
  CCredits *v17; // r0
  CCredits *v18; // r0
  CCredits *v19; // r0
  CCredits *v20; // r0
  CCredits *v21; // r0
  CCredits *v22; // r0
  CCredits *v23; // r0
  CCredits *v24; // r0
  CCredits *v25; // r0
  CCredits *v26; // r0
  CCredits *v27; // r0
  CCredits *v28; // r0
  CCredits *v29; // r0
  CCredits *v30; // r0
  CCredits *v31; // r0
  CCredits *v32; // r0
  CCredits *v33; // r0
  CCredits *v34; // r0
  CCredits *v35; // r0
  CCredits *v36; // r0
  CCredits *v37; // r0
  CCredits *v38; // r0
  CCredits *v39; // r0
  CCredits *v40; // r0
  CCredits *v41; // r0
  CCredits *v42; // r0
  CCredits *v43; // r0
  CCredits *v44; // r0
  CCredits *v45; // r0
  CCredits *v46; // r0
  CCredits *v47; // r0
  CCredits *v48; // r0
  CCredits *v49; // r0
  CCredits *v50; // r0
  CCredits *v51; // r0
  CCredits *v52; // r0
  CCredits *v53; // r0
  CCredits *v54; // r0
  CCredits *v55; // r0
  CCredits *v56; // r0
  CCredits *v57; // r0
  CCredits *v58; // r0
  CCredits *v59; // r0
  CCredits *v60; // r0
  CCredits *v61; // r0
  CCredits *v62; // r0
  CCredits *v63; // r0
  CCredits *v64; // r0
  CCredits *v65; // r0
  CCredits *v66; // r0
  CCredits *v67; // r0
  CCredits *v68; // r0
  CCredits *v69; // r0
  CCredits *v70; // r0
  CCredits *v71; // r0
  CCredits *v72; // r0
  CCredits *v73; // r0
  CCredits *v74; // r0
  CCredits *v75; // r0
  CCredits *v76; // r0
  CCredits *v77; // r0
  CCredits *v78; // r0
  CCredits *v79; // r0
  CCredits *v80; // r0
  CCredits *v81; // r0
  CCredits *v82; // r0
  CCredits *v83; // r0
  CCredits *v84; // r0
  CCredits *v85; // r0
  CCredits *v86; // r0
  CCredits *v87; // r0
  CCredits *v88; // r0
  CCredits *v89; // r0
  CCredits *v90; // r0
  CCredits *v91; // r0
  CCredits *v92; // r0
  CCredits *v93; // r0
  CCredits *v94; // r0
  CCredits *v95; // r0
  CCredits *v96; // r0
  CCredits *v97; // r0
  CCredits *v98; // r0
  CCredits *v99; // r0
  CCredits *v100; // r0
  CCredits *v101; // r0
  CCredits *v102; // r0
  CCredits *v103; // r0
  CCredits *v104; // r0
  CCredits *v105; // r0
  CCredits *v106; // r0
  CCredits *v107; // r0
  CCredits *v108; // r0
  CCredits *v109; // r0
  CCredits *v110; // r0
  CCredits *v111; // r0
  CCredits *v112; // r0
  CCredits *v113; // r0
  CCredits *v114; // r0
  CCredits *v115; // r0
  CCredits *v116; // r0
  CCredits *v117; // r0
  CCredits *v118; // r0
  CCredits *v119; // r0
  CCredits *v120; // r0
  CCredits *v121; // r0
  CCredits *v122; // r0
  CCredits *v123; // r0
  CCredits *v124; // r0
  CCredits *v125; // r0
  CCredits *v126; // r0
  CCredits *v127; // r0
  CCredits *v128; // r0
  CCredits *v129; // r0
  CCredits *v130; // r0
  CCredits *v131; // r0
  CCredits *v132; // r0
  CCredits *v133; // r0
  CCredits *v134; // r0
  CCredits *v135; // r0
  CCredits *v136; // r0
  CCredits *v137; // r0
  CCredits *v138; // r0
  CCredits *v139; // r0
  CCredits *v140; // r0
  CCredits *v141; // r0
  CCredits *v142; // r0
  CCredits *v143; // r0
  CCredits *v144; // r0
  CCredits *v145; // r0
  CCredits *v146; // r0
  CCredits *v147; // r0
  CCredits *v148; // r0
  CCredits *v149; // r0
  CCredits *v150; // r0
  CCredits *v151; // r0
  CCredits *v152; // r0
  CCredits *v153; // r0
  CCredits *v154; // r0
  CCredits *v155; // r0
  CCredits *v156; // r0
  CCredits *v157; // r0
  CCredits *v158; // r0
  CCredits *v159; // r0
  CCredits *v160; // r0
  CCredits *v161; // r0
  CCredits *v162; // r0
  CCredits *v163; // r0
  CCredits *v164; // r0
  CCredits *v165; // r0
  CCredits *v166; // r0
  CCredits *v167; // r0
  CCredits *v168; // r0
  CCredits *v169; // r0
  CCredits *v170; // r0
  CCredits *v171; // r0
  CCredits *v172; // r0
  CCredits *v173; // r0
  CCredits *v174; // r0
  CCredits *v175; // r0
  CCredits *v176; // r0
  CCredits *v177; // r0
  CCredits *v178; // r0
  CCredits *v179; // r0
  CCredits *v180; // r0
  CCredits *v181; // r0
  CCredits *v182; // r0
  CCredits *v183; // r0
  CCredits *v184; // r0
  CCredits *v185; // r0
  CCredits *v186; // r0
  CCredits *v187; // r0
  CCredits *v188; // r0
  CCredits *v189; // r0
  CCredits *v190; // r0
  CCredits *v191; // r0
  CCredits *v192; // r0
  CCredits *v193; // r0
  CCredits *v194; // r0
  CCredits *v195; // r0
  CCredits *v196; // r0
  CCredits *v197; // r0
  CCredits *v198; // r0
  CCredits *v199; // r0
  CCredits *v200; // r0
  CCredits *v201; // r0
  CCredits *v202; // r0
  CCredits *v203; // r0
  CCredits *v204; // r0
  CCredits *v205; // r0
  CCredits *v206; // r0
  CCredits *v207; // r0
  CCredits *v208; // r0
  CCredits *v209; // r0
  CCredits *v210; // r0
  CCredits *v211; // r0
  CCredits *v212; // r0
  CCredits *v213; // r0
  CCredits *v214; // r0
  CCredits *v215; // r0
  CCredits *v216; // r0
  CCredits *v217; // r0
  CCredits *v218; // r0
  CCredits *v219; // r0
  CCredits *v220; // r0
  CCredits *v221; // r0
  CCredits *v222; // r0
  CCredits *v223; // r0
  CCredits *v224; // r0
  CCredits *v225; // r0
  CCredits *v226; // r0
  CCredits *v227; // r0
  CCredits *v228; // r0
  CCredits *v229; // r0
  CCredits *v230; // r0
  CCredits *v231; // r0
  CCredits *v232; // r0
  CCredits *v233; // r0
  CCredits *v234; // r0
  CCredits *v235; // r0
  CCredits *v236; // r0
  CCredits *v237; // r0
  CCredits *v238; // r0
  CCredits *v239; // r0
  CCredits *v240; // r0
  CCredits *v241; // r0
  CCredits *v242; // r0
  CCredits *v243; // r0
  CCredits *v244; // r0
  CCredits *v245; // r0
  CCredits *v246; // r0
  CCredits *v247; // r0
  CCredits *v248; // r0
  CCredits *v249; // r0
  CCredits *v250; // r0
  CCredits *v251; // r0
  CCredits *v252; // r0
  CCredits *v253; // r0
  CCredits *v254; // r0
  CCredits *v255; // r0
  CCredits *v256; // r0
  CCredits *v257; // r0
  CCredits *v258; // r0
  CCredits *v259; // r0
  CCredits *v260; // r0
  CCredits *v261; // r0
  CCredits *v262; // r0
  CCredits *v263; // r0
  CCredits *v264; // r0
  CCredits *v265; // r0
  CCredits *v266; // r0
  CCredits *v267; // r0
  CCredits *v268; // r0
  CCredits *v269; // r0
  CCredits *v270; // r0
  CCredits *v271; // r0
  CCredits *v272; // r0
  CCredits *v273; // r0
  CCredits *v274; // r0
  CCredits *v275; // r0
  CCredits *v276; // r0
  CCredits *v277; // r0
  CCredits *v278; // r0
  CCredits *v279; // r0
  CCredits *v280; // r0
  CCredits *v281; // r0
  CCredits *v282; // r0
  CCredits *v283; // r0
  CCredits *v284; // r0
  CCredits *v285; // r0
  CCredits *v286; // r0
  CCredits *v287; // r0
  CCredits *v288; // r0
  CCredits *v289; // r0
  CCredits *v290; // r0
  CCredits *v291; // r0
  CCredits *v292; // r0
  CCredits *v293; // r0
  CCredits *v294; // r0
  CCredits *v295; // r0
  CCredits *v296; // r0
  CCredits *v297; // r0
  CCredits *v298; // r0
  CCredits *v299; // r0
  CCredits *v300; // r0
  CCredits *v301; // r0
  CCredits *v302; // r0
  CCredits *v303; // r0
  CCredits *v304; // r0
  CCredits *v305; // r0
  CCredits *v306; // r0
  CCredits *v307; // r0
  CCredits *v308; // r0
  CCredits *v309; // r0
  CCredits *v310; // r0
  CCredits *v311; // r0
  CCredits *v312; // r0
  CCredits *v313; // r0
  CCredits *v314; // r0
  CCredits *v315; // r0
  CCredits *v316; // r0
  CCredits *v317; // r0
  CCredits *v318; // r0
  CCredits *v319; // r0
  CCredits *v320; // r0
  CCredits *v321; // r0
  CCredits *v322; // r0
  CCredits *v323; // r0
  CCredits *v324; // r0
  CCredits *v325; // r0
  CCredits *v326; // r0
  CCredits *v327; // r0
  CCredits *v328; // r0
  CCredits *v329; // r0
  CCredits *v330; // r0
  CCredits *v331; // r0
  CCredits *v332; // r0
  CCredits *v333; // r0
  CCredits *v334; // r0
  CCredits *v335; // r0
  CCredits *v336; // r0
  CCredits *v337; // r0
  CCredits *v338; // r0
  CCredits *v339; // r0
  CCredits *v340; // r0
  CCredits *v341; // r0
  CCredits *v342; // r0
  CCredits *v343; // r0
  CCredits *v344; // r0
  CCredits *v345; // r0
  CCredits *v346; // r0
  CCredits *v347; // r0
  CCredits *v348; // r0
  CCredits *v349; // r0
  CCredits *v350; // r0
  CCredits *v351; // r0
  CCredits *v352; // r0
  CCredits *v353; // r0
  CCredits *v354; // r0
  CCredits *v355; // r0
  CCredits *v356; // r0
  CCredits *v357; // r0
  CCredits *v358; // r0
  CCredits *v359; // r0
  CCredits *v360; // r0
  CCredits *v361; // r0
  CCredits *v362; // r0
  CCredits *v363; // r0
  CCredits *v364; // r0
  CCredits *v365; // r0
  CCredits *v366; // r0
  CCredits *v367; // r0
  CCredits *v368; // r0
  CCredits *v369; // r0
  CCredits *v370; // r0
  CCredits *v371; // r0
  CCredits *v372; // r0
  CCredits *v373; // r0
  CCredits *v374; // r0
  CCredits *v375; // r0
  CCredits *v376; // r0
  CCredits *v377; // r0
  CCredits *v378; // r0
  CCredits *v379; // r0
  CCredits *v380; // r0
  CCredits *v381; // r0
  CCredits *v382; // r0
  CCredits *v383; // r0
  CCredits *v384; // r0
  CCredits *v385; // r0
  CCredits *v386; // r0
  CCredits *v387; // r0
  CCredits *v388; // r0
  CCredits *v389; // r0
  CCredits *v390; // r0
  CCredits *v391; // r0
  CCredits *v392; // r0
  CCredits *v393; // r0
  CCredits *v394; // r0
  CCredits *v395; // r0
  CCredits *v396; // r0
  CCredits *v397; // r0
  CCredits *v398; // r0
  CCredits *v399; // r0
  CCredits *v400; // r0
  CCredits *v401; // r0
  CCredits *v402; // r0
  CCredits *v403; // r0
  CCredits *v404; // r0
  CCredits *v405; // r0
  CCredits *v406; // r0
  CCredits *v407; // r0
  CCredits *v408; // r0
  CCredits *v409; // r0
  CCredits *v410; // r0
  CCredits *v411; // r0
  CCredits *v412; // r0
  CCredits *v413; // r0
  CCredits *v414; // r0
  CCredits *v415; // r0
  CCredits *v416; // r0
  CCredits *v417; // r0
  CCredits *v418; // r0
  CCredits *v419; // r0
  CCredits *v420; // r0
  CCredits *v421; // r0
  CCredits *v422; // r0
  CCredits *v423; // r0
  CCredits *v424; // r0
  CCredits *v425; // r0
  CCredits *v426; // r0
  CCredits *v427; // r0
  CCredits *v428; // r0
  CCredits *v429; // r0
  CCredits *v430; // r0
  CCredits *v431; // r0
  CCredits *v432; // r0
  CCredits *v433; // r0
  CCredits *v434; // r0
  CCredits *v435; // r0
  CCredits *v436; // r0
  CCredits *v437; // r0
  CCredits *v438; // r0
  CCredits *v439; // r0
  CCredits *v440; // r0
  CCredits *v441; // r0
  CCredits *v442; // r0
  CCredits *v443; // r0
  CCredits *v444; // r0
  CCredits *v445; // r0
  CCredits *v446; // r0
  CCredits *v447; // r0
  CCredits *v448; // r0
  CCredits *v449; // r0
  CCredits *v450; // r0
  CCredits *v451; // r0
  CCredits *v452; // r0
  CCredits *v453; // r0
  CCredits *v454; // r0
  CCredits *v455; // r0
  CCredits *v456; // r0
  CCredits *v457; // r0
  CCredits *v458; // r0
  CCredits *v459; // r0
  CCredits *v460; // r0
  CCredits *v461; // r0
  CCredits *v462; // r0
  CCredits *v463; // r0
  CCredits *v464; // r0
  CCredits *v465; // r0
  CCredits *v466; // r0
  CCredits *v467; // r0
  CCredits *v468; // r0
  CCredits *v469; // r0
  CCredits *v470; // r0
  CCredits *v471; // r0
  CCredits *v472; // r0
  CCredits *v473; // r0
  CCredits *v474; // r0
  CCredits *v475; // r0
  CCredits *v476; // r0
  CCredits *v477; // r0
  CCredits *v478; // r0
  CCredits *v479; // r0
  CCredits *v480; // r0
  CCredits *v481; // r0
  CCredits *v482; // r0
  CCredits *v483; // r0
  CCredits *v484; // r0
  CCredits *v485; // r0
  CCredits *v486; // r0
  CCredits *v487; // r0
  CCredits *v488; // r0
  CCredits *v489; // r0
  CCredits *v490; // r0
  CCredits *v491; // r0
  CCredits *v492; // r0
  CCredits *v493; // r0
  CCredits *v494; // r0
  CCredits *v495; // r0
  CCredits *v496; // r0
  CCredits *v497; // r0
  CCredits *v498; // r0
  CCredits *v499; // r0
  CCredits *v500; // r0
  CCredits *v501; // r0
  CCredits *v502; // r0
  CCredits *v503; // r0
  CCredits *v504; // r0
  CCredits *v505; // r0
  CCredits *v506; // r0
  CCredits *v507; // r0
  CCredits *v508; // r0
  CCredits *v509; // r0
  CCredits *v510; // r0
  CCredits *v511; // r0
  CCredits *v512; // r0
  CCredits *v513; // r0
  CCredits *v514; // r0
  CCredits *v515; // r0
  CCredits *v516; // r0
  CCredits *v517; // r0
  CCredits *v518; // r0
  CCredits *v519; // r0
  CCredits *v520; // r0
  CCredits *v521; // r0
  CCredits *v522; // r0
  CCredits *v523; // r0
  CCredits *v524; // r0
  CCredits *v525; // r0
  CCredits *v526; // r0
  CCredits *v527; // r0
  CCredits *v528; // r0
  CCredits *v529; // r0
  CCredits *v530; // r0
  CCredits *v531; // r0
  CCredits *v532; // r0
  CCredits *v533; // r0
  CCredits *v534; // r0
  CCredits *v535; // r0
  CCredits *v536; // r0
  CCredits *v537; // r0
  CCredits *v538; // r0
  CCredits *v539; // r0
  CCredits *v540; // r0
  CCredits *v541; // r0
  CCredits *v542; // r0
  CCredits *v543; // r0
  CCredits *v544; // r0
  CCredits *v545; // r0
  CCredits *v546; // r0
  CCredits *v547; // r0
  CCredits *v548; // r0
  CCredits *v549; // r0
  CCredits *v550; // r0
  CCredits *v551; // r0
  CCredits *v552; // r0
  CCredits *v553; // r0
  CCredits *v554; // r0
  CCredits *v555; // r0
  CCredits *v556; // r0
  CCredits *v557; // r0
  CCredits *v558; // r0
  CCredits *v559; // r0
  CCredits *v560; // r0
  CCredits *v561; // r0
  CCredits *v562; // r0
  CCredits *v563; // r0
  CCredits *v564; // r0
  CCredits *v565; // r0
  CCredits *v566; // r0
  CCredits *v567; // r0
  CCredits *v568; // r0
  CCredits *v569; // r0
  CCredits *v570; // r0
  CCredits *v571; // r0
  CCredits *v572; // r0
  CCredits *v573; // r0
  CCredits *v574; // r0
  CCredits *v575; // r0
  CCredits *v576; // r0
  CCredits *v577; // r0
  CCredits *v578; // r0
  CCredits *v579; // r0
  CCredits *v580; // r0
  CCredits *v581; // r0
  CCredits *v582; // r0
  CCredits *v583; // r0
  CCredits *v584; // r0
  CCredits *v585; // r0
  CCredits *v586; // r0
  CCredits *v587; // r0
  CCredits *v588; // r0
  CCredits *v589; // r0
  CCredits *v590; // r0
  CCredits *v591; // r0
  CCredits *v592; // r0
  CCredits *v593; // r0
  CCredits *v594; // r0
  CCredits *v595; // r0
  CCredits *v596; // r0
  CCredits *v597; // r0
  CCredits *v598; // r0
  CCredits *v599; // r0
  CCredits *v600; // r0
  CCredits *v601; // r0
  CCredits *v602; // r0
  CCredits *v603; // r0
  CCredits *v604; // r0
  CCredits *v605; // r0
  CCredits *v606; // r0
  CCredits *v607; // r0
  CCredits *v608; // r0
  CCredits *v609; // r0
  CCredits *v610; // r0
  CCredits *v611; // r0
  CCredits *v612; // r0
  CCredits *v613; // r0
  CCredits *v614; // r0
  CCredits *v615; // r0
  CCredits *v616; // r0
  CCredits *v617; // r0
  CCredits *v618; // r0
  CCredits *v619; // r0
  CCredits *v620; // r0
  CCredits *v621; // r0
  CCredits *v622; // r0
  CCredits *v623; // r0
  CCredits *v624; // r0
  CCredits *v625; // r0
  CFont *v626; // r0
  char *result; // r0
  bool v628[4]; // [sp+8h] [bp-40h] BYREF
  unsigned __int16 v629[2]; // [sp+Ch] [bp-3Ch] BYREF

  DefinedState2d();
  *(_DWORD *)v629 = 0;
  v1 = CCredits::CreditsStartTime;
  v2 = CTimer::m_snTimeInMilliseconds;
  CFont::SetBackground(0, 0, v3);
  CFont::SetCentreSize(COERCE_CFONT_((float)dword_9FC900 * 0.92), v4);
  CFont::SetOrientation(0, v5);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v6);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v7);
  CFont::SetEdge(0, v8);
  CRGBA::CRGBA((CRGBA *)v628, 0, 0, 0, (unsigned __int8)elf_hash_bucket + 3);
  CFont::SetDropColor();
  v9 = (float)(unsigned int)(v2 - v1) / 23.0;
  v10 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED000");
  CCredits::PrintCreditText(v10, 1.1, *(float *)&v10, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v11 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED001");
  CCredits::PrintCreditText(v11, 1.1, *(float *)&v11, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v12 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED002");
  CCredits::PrintCreditText(v12, 1.1, *(float *)&v12, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v13 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED003");
  CCredits::PrintCreditText(v13, 1.1, *(float *)&v13, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v14 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED004");
  CCredits::PrintCreditText(v14, 1.1, *(float *)&v14, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v15 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED005");
  CCredits::PrintCreditText(v15, 1.1, *(float *)&v15, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v16 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED006");
  CCredits::PrintCreditText(v16, 1.1, *(float *)&v16, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v17 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED007");
  CCredits::PrintCreditText(v17, 1.1, *(float *)&v17, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v18 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED008");
  CCredits::PrintCreditText(v18, 1.1, *(float *)&v18, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v19 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED009");
  CCredits::PrintCreditText(v19, 1.1, *(float *)&v19, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v20 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD009A");
  CCredits::PrintCreditText(v20, 1.1, *(float *)&v20, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v21 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD009B");
  CCredits::PrintCreditText(v21, 1.1, *(float *)&v21, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v22 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD009C");
  CCredits::PrintCreditText(v22, 1.1, *(float *)&v22, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v23 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD009D");
  CCredits::PrintCreditText(v23, 1.1, *(float *)&v23, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v24 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED019");
  CCredits::PrintCreditText(v24, 1.1, *(float *)&v24, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v25 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED020");
  CCredits::PrintCreditText(v25, 1.1, *(float *)&v25, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v26 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED010");
  CCredits::PrintCreditText(v26, 1.1, *(float *)&v26, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v27 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED011");
  CCredits::PrintCreditText(v27, 1.1, *(float *)&v27, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v28 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED012");
  CCredits::PrintCreditText(v28, 1.1, *(float *)&v28, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v29 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED013");
  CCredits::PrintCreditText(v29, 1.1, *(float *)&v29, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v30 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED014");
  CCredits::PrintCreditText(v30, 1.1, *(float *)&v30, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v31 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD014A");
  CCredits::PrintCreditText(v31, 1.1, *(float *)&v31, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v32 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED015");
  CCredits::PrintCreditText(v32, 1.1, *(float *)&v32, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v33 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED016");
  CCredits::PrintCreditText(v33, 1.1, *(float *)&v33, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v34 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD016A");
  CCredits::PrintCreditText(v34, 1.1, *(float *)&v34, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v35 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED017");
  CCredits::PrintCreditText(v35, 1.1, *(float *)&v35, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v36 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED018");
  CCredits::PrintCreditText(v36, 1.1, *(float *)&v36, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v37 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED028");
  CCredits::PrintCreditText(v37, 1.1, *(float *)&v37, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v38 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED029");
  CCredits::PrintCreditText(v38, 1.1, *(float *)&v38, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v39 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED030");
  CCredits::PrintCreditText(v39, 1.1, *(float *)&v39, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v40 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED031");
  CCredits::PrintCreditText(v40, 1.1, *(float *)&v40, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v41 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED032");
  CCredits::PrintCreditText(v41, 1.1, *(float *)&v41, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v42 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED033");
  CCredits::PrintCreditText(v42, 1.1, *(float *)&v42, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v43 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED034");
  CCredits::PrintCreditText(v43, 1.1, *(float *)&v43, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v44 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED035");
  CCredits::PrintCreditText(v44, 1.1, *(float *)&v44, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v45 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED036");
  CCredits::PrintCreditText(v45, 1.1, *(float *)&v45, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v46 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED047");
  CCredits::PrintCreditText(v46, 1.1, *(float *)&v46, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v47 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED048");
  CCredits::PrintCreditText(v47, 1.1, *(float *)&v47, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v48 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED049");
  CCredits::PrintCreditText(v48, 1.1, *(float *)&v48, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v49 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED050");
  CCredits::PrintCreditText(v49, 1.1, *(float *)&v49, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v50 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED051");
  CCredits::PrintCreditText(v50, 1.1, *(float *)&v50, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v51 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED052");
  CCredits::PrintCreditText(v51, 1.1, *(float *)&v51, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v52 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED053");
  CCredits::PrintCreditText(v52, 1.1, *(float *)&v52, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v53 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED054");
  CCredits::PrintCreditText(v53, 1.1, *(float *)&v53, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v54 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED055");
  CCredits::PrintCreditText(v54, 1.1, *(float *)&v54, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v55 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED056");
  CCredits::PrintCreditText(v55, 1.1, *(float *)&v55, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v56 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED057");
  CCredits::PrintCreditText(v56, 1.1, *(float *)&v56, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v57 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED058");
  CCredits::PrintCreditText(v57, 1.1, *(float *)&v57, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v58 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED059");
  CCredits::PrintCreditText(v58, 1.1, *(float *)&v58, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v59 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED060");
  CCredits::PrintCreditText(v59, 1.1, *(float *)&v59, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v60 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED061");
  CCredits::PrintCreditText(v60, 1.1, *(float *)&v60, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v61 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED062");
  CCredits::PrintCreditText(v61, 1.1, *(float *)&v61, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v62 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED063");
  CCredits::PrintCreditText(v62, 1.1, *(float *)&v62, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v63 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED021");
  CCredits::PrintCreditText(v63, 1.1, *(float *)&v63, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v64 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED022");
  CCredits::PrintCreditText(v64, 1.1, *(float *)&v64, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v65 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED023");
  CCredits::PrintCreditText(v65, 1.1, *(float *)&v65, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v66 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED024");
  CCredits::PrintCreditText(v66, 1.1, *(float *)&v66, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v67 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED025");
  CCredits::PrintCreditText(v67, 1.1, *(float *)&v67, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v68 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED026");
  CCredits::PrintCreditText(v68, 1.1, *(float *)&v68, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v69 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED027");
  CCredits::PrintCreditText(v69, 1.1, *(float *)&v69, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v70 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED064");
  CCredits::PrintCreditText(v70, 1.1, *(float *)&v70, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v71 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED065");
  CCredits::PrintCreditText(v71, 1.1, *(float *)&v71, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v72 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED066");
  CCredits::PrintCreditText(v72, 1.1, *(float *)&v72, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v73 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED067");
  CCredits::PrintCreditText(v73, 1.1, *(float *)&v73, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v74 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED068");
  CCredits::PrintCreditText(v74, 1.1, *(float *)&v74, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v75 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED069");
  CCredits::PrintCreditText(v75, 1.1, *(float *)&v75, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v76 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED070");
  CCredits::PrintCreditText(v76, 1.1, *(float *)&v76, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v77 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED071");
  CCredits::PrintCreditText(v77, 1.1, *(float *)&v77, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v78 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED072");
  CCredits::PrintCreditText(v78, 1.1, *(float *)&v78, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v79 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED073");
  CCredits::PrintCreditText(v79, 1.1, *(float *)&v79, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v80 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED074");
  CCredits::PrintCreditText(v80, 1.1, *(float *)&v80, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v81 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED075");
  CCredits::PrintCreditText(v81, 1.1, *(float *)&v81, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v82 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED037");
  CCredits::PrintCreditText(v82, 1.1, *(float *)&v82, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v83 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED038");
  CCredits::PrintCreditText(v83, 1.1, *(float *)&v83, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v84 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED039");
  CCredits::PrintCreditText(v84, 1.1, *(float *)&v84, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v85 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED040");
  CCredits::PrintCreditText(v85, 1.1, *(float *)&v85, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v86 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED041");
  CCredits::PrintCreditText(v86, 1.1, *(float *)&v86, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v87 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED042");
  CCredits::PrintCreditText(v87, 1.1, *(float *)&v87, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v88 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED043");
  CCredits::PrintCreditText(v88, 1.1, *(float *)&v88, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v89 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED044");
  CCredits::PrintCreditText(v89, 1.1, *(float *)&v89, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v90 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED991");
  CCredits::PrintCreditText(v90, 1.1, *(float *)&v90, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v91 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED045");
  CCredits::PrintCreditText(v91, 1.1, *(float *)&v91, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v92 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED046");
  CCredits::PrintCreditText(v92, 1.1, *(float *)&v92, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v93 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED076");
  CCredits::PrintCreditText(v93, 1.1, *(float *)&v93, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v94 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED077");
  CCredits::PrintCreditText(v94, 1.1, *(float *)&v94, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v95 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED078");
  CCredits::PrintCreditText(v95, 1.1, *(float *)&v95, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v96 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED079");
  CCredits::PrintCreditText(v96, 1.1, *(float *)&v96, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v97 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED080");
  CCredits::PrintCreditText(v97, 1.1, *(float *)&v97, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v98 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED081");
  CCredits::PrintCreditText(v98, 1.1, *(float *)&v98, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v99 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED100");
  CCredits::PrintCreditText(v99, 1.1, *(float *)&v99, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v100 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED082");
  CCredits::PrintCreditText(v100, 1.1, *(float *)&v100, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v101 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED083");
  CCredits::PrintCreditText(v101, 1.1, *(float *)&v101, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v102 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED084");
  CCredits::PrintCreditText(v102, 1.1, *(float *)&v102, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v103 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED085");
  CCredits::PrintCreditText(v103, 1.1, *(float *)&v103, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v104 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED086");
  CCredits::PrintCreditText(v104, 1.1, *(float *)&v104, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v105 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED087");
  CCredits::PrintCreditText(v105, 1.1, *(float *)&v105, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v106 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED088");
  CCredits::PrintCreditText(v106, 1.1, *(float *)&v106, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v107 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED089");
  CCredits::PrintCreditText(v107, 1.1, *(float *)&v107, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v108 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED090");
  CCredits::PrintCreditText(v108, 1.1, *(float *)&v108, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v109 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED091");
  CCredits::PrintCreditText(v109, 1.1, *(float *)&v109, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v110 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED092");
  CCredits::PrintCreditText(v110, 1.1, *(float *)&v110, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v111 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED093");
  CCredits::PrintCreditText(v111, 1.1, *(float *)&v111, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v112 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED094");
  CCredits::PrintCreditText(v112, 1.1, *(float *)&v112, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v113 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED095");
  CCredits::PrintCreditText(v113, 1.1, *(float *)&v113, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v114 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED096");
  CCredits::PrintCreditText(v114, 1.1, *(float *)&v114, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v115 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED097");
  CCredits::PrintCreditText(v115, 1.1, *(float *)&v115, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v116 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED098");
  CCredits::PrintCreditText(v116, 1.1, *(float *)&v116, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v117 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED099");
  CCredits::PrintCreditText(v117, 1.1, *(float *)&v117, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v118 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED101");
  CCredits::PrintCreditText(v118, 1.1, *(float *)&v118, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v119 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED102");
  CCredits::PrintCreditText(v119, 1.1, *(float *)&v119, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v120 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED103");
  CCredits::PrintCreditText(v120, 1.1, *(float *)&v120, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v121 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED104");
  CCredits::PrintCreditText(v121, 1.1, *(float *)&v121, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v122 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED105");
  CCredits::PrintCreditText(v122, 1.1, *(float *)&v122, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v123 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED106");
  CCredits::PrintCreditText(v123, 1.1, *(float *)&v123, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v124 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED107");
  CCredits::PrintCreditText(v124, 1.1, *(float *)&v124, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v125 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED108");
  CCredits::PrintCreditText(v125, 1.1, *(float *)&v125, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v126 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED109");
  CCredits::PrintCreditText(v126, 1.1, *(float *)&v126, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v127 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED110");
  CCredits::PrintCreditText(v127, 1.1, *(float *)&v127, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v128 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED111");
  CCredits::PrintCreditText(v128, 1.1, *(float *)&v128, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 25.0);
  v129 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED112");
  CCredits::PrintCreditText(v129, 1.1, *(float *)&v129, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v130 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED113");
  CCredits::PrintCreditText(v130, 1.1, *(float *)&v130, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v131 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED114");
  CCredits::PrintCreditText(v131, 1.1, *(float *)&v131, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v132 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED115");
  CCredits::PrintCreditText(v132, 1.1, *(float *)&v132, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v133 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED116");
  CCredits::PrintCreditText(v133, 1.1, *(float *)&v133, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v134 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED117");
  CCredits::PrintCreditText(v134, 1.1, *(float *)&v134, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v135 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED118");
  CCredits::PrintCreditText(v135, 1.1, *(float *)&v135, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v136 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED997");
  CCredits::PrintCreditText(v136, 1.1, *(float *)&v136, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v137 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD118A");
  CCredits::PrintCreditText(v137, 1.1, *(float *)&v137, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v138 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED119");
  CCredits::PrintCreditText(v138, 1.1, *(float *)&v138, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v139 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED120");
  CCredits::PrintCreditText(v139, 1.1, *(float *)&v139, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v140 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED996");
  CCredits::PrintCreditText(v140, 1.1, *(float *)&v140, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v141 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD120A");
  CCredits::PrintCreditText(v141, 1.1, *(float *)&v141, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v142 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED121");
  CCredits::PrintCreditText(v142, 1.1, *(float *)&v142, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v143 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD121A");
  CCredits::PrintCreditText(v143, 1.1, *(float *)&v143, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v144 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED995");
  CCredits::PrintCreditText(v144, 1.1, *(float *)&v144, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v145 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED122");
  CCredits::PrintCreditText(v145, 1.1, *(float *)&v145, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v146 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED994");
  CCredits::PrintCreditText(v146, 1.1, *(float *)&v146, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v147 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED123");
  CCredits::PrintCreditText(v147, 1.1, *(float *)&v147, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v148 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED124");
  CCredits::PrintCreditText(v148, 1.1, *(float *)&v148, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v149 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED125");
  CCredits::PrintCreditText(v149, 1.1, *(float *)&v149, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v150 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED126");
  CCredits::PrintCreditText(v150, 1.1, *(float *)&v150, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v151 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD126A");
  CCredits::PrintCreditText(v151, 1.1, *(float *)&v151, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v152 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD126B");
  CCredits::PrintCreditText(v152, 1.1, *(float *)&v152, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v153 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED127");
  CCredits::PrintCreditText(v153, 1.1, *(float *)&v153, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v154 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED128");
  CCredits::PrintCreditText(v154, 1.1, *(float *)&v154, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v155 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED129");
  CCredits::PrintCreditText(v155, 1.1, *(float *)&v155, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v156 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD129A");
  CCredits::PrintCreditText(v156, 1.1, *(float *)&v156, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v157 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED130");
  CCredits::PrintCreditText(v157, 1.1, *(float *)&v157, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v158 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED131");
  CCredits::PrintCreditText(v158, 1.1, *(float *)&v158, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v159 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED132");
  CCredits::PrintCreditText(v159, 1.1, *(float *)&v159, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v160 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED133");
  CCredits::PrintCreditText(v160, 1.1, *(float *)&v160, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v161 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED134");
  CCredits::PrintCreditText(v161, 1.1, *(float *)&v161, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v162 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED992");
  CCredits::PrintCreditText(v162, 1.1, *(float *)&v162, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v163 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD134A");
  CCredits::PrintCreditText(v163, 1.1, *(float *)&v163, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v164 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED135");
  CCredits::PrintCreditText(v164, 1.1, *(float *)&v164, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v165 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED136");
  CCredits::PrintCreditText(v165, 1.1, *(float *)&v165, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v166 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD136A");
  CCredits::PrintCreditText(v166, 1.1, *(float *)&v166, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v167 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED137");
  CCredits::PrintCreditText(v167, 1.1, *(float *)&v167, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v168 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED138");
  CCredits::PrintCreditText(v168, 1.1, *(float *)&v168, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v169 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD138A");
  CCredits::PrintCreditText(v169, 1.1, *(float *)&v169, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v170 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED139");
  CCredits::PrintCreditText(v170, 1.1, *(float *)&v170, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v171 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED140");
  CCredits::PrintCreditText(v171, 1.1, *(float *)&v171, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v172 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED141");
  CCredits::PrintCreditText(v172, 1.1, *(float *)&v172, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v173 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED993");
  CCredits::PrintCreditText(v173, 1.1, *(float *)&v173, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v174 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED142");
  CCredits::PrintCreditText(v174, 1.1, *(float *)&v174, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v175 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED143");
  CCredits::PrintCreditText(v175, 1.1, *(float *)&v175, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v176 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED144");
  CCredits::PrintCreditText(v176, 1.1, *(float *)&v176, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v177 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED145");
  CCredits::PrintCreditText(v177, 1.1, *(float *)&v177, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v178 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED146");
  CCredits::PrintCreditText(v178, 1.1, *(float *)&v178, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v179 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED147");
  CCredits::PrintCreditText(v179, 1.1, *(float *)&v179, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v180 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED148");
  CCredits::PrintCreditText(v180, 1.1, *(float *)&v180, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v181 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED149");
  CCredits::PrintCreditText(v181, 1.1, *(float *)&v181, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v182 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED150");
  CCredits::PrintCreditText(v182, 1.1, *(float *)&v182, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v183 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED151");
  CCredits::PrintCreditText(v183, 1.1, *(float *)&v183, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v184 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED152");
  CCredits::PrintCreditText(v184, 1.1, *(float *)&v184, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v185 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED153");
  CCredits::PrintCreditText(v185, 1.1, *(float *)&v185, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v186 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD153A");
  CCredits::PrintCreditText(v186, 1.1, *(float *)&v186, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v187 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED154");
  CCredits::PrintCreditText(v187, 1.1, *(float *)&v187, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v188 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD154A");
  CCredits::PrintCreditText(v188, 1.1, *(float *)&v188, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v189 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED155");
  CCredits::PrintCreditText(v189, 1.1, *(float *)&v189, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v190 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED156");
  CCredits::PrintCreditText(v190, 1.1, *(float *)&v190, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v191 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED157");
  CCredits::PrintCreditText(v191, 1.1, *(float *)&v191, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v192 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED158");
  CCredits::PrintCreditText(v192, 1.1, *(float *)&v192, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v193 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED159");
  CCredits::PrintCreditText(v193, 1.1, *(float *)&v193, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)(unsigned int)(float)((float)*(unsigned int *)v629 + 37.5) + 37.5);
  v194 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED199");
  CCredits::PrintCreditText(v194, 1.1, *(float *)&v194, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v195 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED200");
  CCredits::PrintCreditText(v195, 1.1, *(float *)&v195, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v196 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED201");
  CCredits::PrintCreditText(v196, 1.1, *(float *)&v196, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v197 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED202");
  CCredits::PrintCreditText(v197, 1.1, *(float *)&v197, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v198 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED203");
  CCredits::PrintCreditText(v198, 1.1, *(float *)&v198, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v199 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED204");
  CCredits::PrintCreditText(v199, 1.1, *(float *)&v199, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v200 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED205");
  CCredits::PrintCreditText(v200, 1.1, *(float *)&v200, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v201 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED206");
  CCredits::PrintCreditText(v201, 1.1, *(float *)&v201, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v202 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED207");
  CCredits::PrintCreditText(v202, 1.1, *(float *)&v202, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v203 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED208");
  CCredits::PrintCreditText(v203, 1.1, *(float *)&v203, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v204 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED209");
  CCredits::PrintCreditText(v204, 1.1, *(float *)&v204, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v205 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED210");
  CCredits::PrintCreditText(v205, 1.1, *(float *)&v205, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v206 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED211");
  CCredits::PrintCreditText(v206, 1.1, *(float *)&v206, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v207 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED212");
  CCredits::PrintCreditText(v207, 1.1, *(float *)&v207, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v208 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED213");
  CCredits::PrintCreditText(v208, 1.1, *(float *)&v208, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v209 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED214");
  CCredits::PrintCreditText(v209, 1.1, *(float *)&v209, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v210 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED215");
  CCredits::PrintCreditText(v210, 1.1, *(float *)&v210, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v211 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED216");
  CCredits::PrintCreditText(v211, 1.1, *(float *)&v211, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v212 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED217");
  CCredits::PrintCreditText(v212, 1.1, *(float *)&v212, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v213 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED218");
  CCredits::PrintCreditText(v213, 1.1, *(float *)&v213, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v214 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED219");
  CCredits::PrintCreditText(v214, 1.1, *(float *)&v214, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v215 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED220");
  CCredits::PrintCreditText(v215, 1.1, *(float *)&v215, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v216 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED221");
  CCredits::PrintCreditText(v216, 1.1, *(float *)&v216, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v217 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED222");
  CCredits::PrintCreditText(v217, 1.1, *(float *)&v217, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v218 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED223");
  CCredits::PrintCreditText(v218, 1.1, *(float *)&v218, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v219 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED224");
  CCredits::PrintCreditText(v219, 1.1, *(float *)&v219, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v220 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED225");
  CCredits::PrintCreditText(v220, 1.1, *(float *)&v220, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v221 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED226");
  CCredits::PrintCreditText(v221, 1.1, *(float *)&v221, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v222 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED227");
  CCredits::PrintCreditText(v222, 1.1, *(float *)&v222, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v223 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED228");
  CCredits::PrintCreditText(v223, 1.1, *(float *)&v223, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v224 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED229");
  CCredits::PrintCreditText(v224, 1.1, *(float *)&v224, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v225 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED230");
  CCredits::PrintCreditText(v225, 1.1, *(float *)&v225, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v226 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED231");
  CCredits::PrintCreditText(v226, 1.1, *(float *)&v226, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v227 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED232");
  CCredits::PrintCreditText(v227, 1.1, *(float *)&v227, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v228 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED233");
  CCredits::PrintCreditText(v228, 1.1, *(float *)&v228, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v229 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED234");
  CCredits::PrintCreditText(v229, 1.1, *(float *)&v229, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v230 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED235");
  CCredits::PrintCreditText(v230, 1.1, *(float *)&v230, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v231 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED236");
  CCredits::PrintCreditText(v231, 1.1, *(float *)&v231, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v232 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED237");
  CCredits::PrintCreditText(v232, 1.1, *(float *)&v232, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v233 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED238");
  CCredits::PrintCreditText(v233, 1.1, *(float *)&v233, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v234 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED239");
  CCredits::PrintCreditText(v234, 1.1, *(float *)&v234, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v235 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED240");
  CCredits::PrintCreditText(v235, 1.1, *(float *)&v235, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v236 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED241");
  CCredits::PrintCreditText(v236, 1.1, *(float *)&v236, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v237 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED242");
  CCredits::PrintCreditText(v237, 1.1, *(float *)&v237, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v238 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED243");
  CCredits::PrintCreditText(v238, 1.1, *(float *)&v238, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v239 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED244");
  CCredits::PrintCreditText(v239, 1.1, *(float *)&v239, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v240 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED245");
  CCredits::PrintCreditText(v240, 1.1, *(float *)&v240, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v241 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED246");
  CCredits::PrintCreditText(v241, 1.1, *(float *)&v241, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v242 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED247");
  CCredits::PrintCreditText(v242, 1.1, *(float *)&v242, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v243 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED248");
  CCredits::PrintCreditText(v243, 1.1, *(float *)&v243, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v244 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED249");
  CCredits::PrintCreditText(v244, 1.1, *(float *)&v244, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v245 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED250");
  CCredits::PrintCreditText(v245, 1.1, *(float *)&v245, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v246 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED251");
  CCredits::PrintCreditText(v246, 1.1, *(float *)&v246, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v247 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED252");
  CCredits::PrintCreditText(v247, 1.1, *(float *)&v247, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v248 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED253");
  CCredits::PrintCreditText(v248, 1.1, *(float *)&v248, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v249 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED254");
  CCredits::PrintCreditText(v249, 1.1, *(float *)&v249, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v250 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED255");
  CCredits::PrintCreditText(v250, 1.1, *(float *)&v250, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v251 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED256");
  CCredits::PrintCreditText(v251, 1.1, *(float *)&v251, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v252 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED257");
  CCredits::PrintCreditText(v252, 1.1, *(float *)&v252, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v253 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED258");
  CCredits::PrintCreditText(v253, 1.1, *(float *)&v253, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v254 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED259");
  CCredits::PrintCreditText(v254, 1.1, *(float *)&v254, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v255 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED260");
  CCredits::PrintCreditText(v255, 1.1, *(float *)&v255, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v256 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED261");
  CCredits::PrintCreditText(v256, 1.1, *(float *)&v256, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 25.0);
  v257 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED262");
  CCredits::PrintCreditText(v257, 1.1, *(float *)&v257, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v258 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED263");
  CCredits::PrintCreditText(v258, 1.1, *(float *)&v258, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v259 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED264");
  CCredits::PrintCreditText(v259, 1.1, *(float *)&v259, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v260 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED265");
  CCredits::PrintCreditText(v260, 1.1, *(float *)&v260, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v261 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED266");
  CCredits::PrintCreditText(v261, 1.1, *(float *)&v261, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v262 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED267");
  CCredits::PrintCreditText(v262, 1.1, *(float *)&v262, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v263 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED999");
  CCredits::PrintCreditText(v263, 1.1, *(float *)&v263, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 25.0);
  v264 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED998");
  CCredits::PrintCreditText(v264, 1.1, *(float *)&v264, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v265 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED268");
  CCredits::PrintCreditText(v265, 1.1, *(float *)&v265, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v266 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED269");
  CCredits::PrintCreditText(v266, 1.1, *(float *)&v266, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v267 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED270");
  CCredits::PrintCreditText(v267, 1.1, *(float *)&v267, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v268 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED271");
  CCredits::PrintCreditText(v268, 1.1, *(float *)&v268, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v269 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED272");
  CCredits::PrintCreditText(v269, 1.1, *(float *)&v269, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v270 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED273");
  CCredits::PrintCreditText(v270, 1.1, *(float *)&v270, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v271 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED274");
  CCredits::PrintCreditText(v271, 1.1, *(float *)&v271, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v272 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED275");
  CCredits::PrintCreditText(v272, 1.1, *(float *)&v272, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v273 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED276");
  CCredits::PrintCreditText(v273, 1.1, *(float *)&v273, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)(unsigned int)(float)((float)*(unsigned int *)v629 + 37.5) + 37.5);
  v274 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED277");
  CCredits::PrintCreditText(v274, 1.1, *(float *)&v274, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v275 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED278");
  CCredits::PrintCreditText(v275, 1.1, *(float *)&v275, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v276 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED279");
  CCredits::PrintCreditText(v276, 0.78, *(float *)&v276, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 12.5);
  v277 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED280");
  CCredits::PrintCreditText(v277, 0.78, *(float *)&v277, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v278 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED281");
  CCredits::PrintCreditText(v278, 0.78, *(float *)&v278, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v279 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED282");
  CCredits::PrintCreditText(v279, 0.78, *(float *)&v279, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v280 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED283");
  CCredits::PrintCreditText(v280, 0.78, *(float *)&v280, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v281 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED284");
  CCredits::PrintCreditText(v281, 0.78, *(float *)&v281, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v282 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED285");
  CCredits::PrintCreditText(v282, 0.78, *(float *)&v282, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v283 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED286");
  CCredits::PrintCreditText(v283, 0.78, *(float *)&v283, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v284 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED287");
  CCredits::PrintCreditText(v284, 0.78, *(float *)&v284, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v285 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED288");
  CCredits::PrintCreditText(v285, 0.78, *(float *)&v285, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v286 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED289");
  CCredits::PrintCreditText(v286, 0.78, *(float *)&v286, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v287 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED290");
  CCredits::PrintCreditText(v287, 0.78, *(float *)&v287, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v288 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED291");
  CCredits::PrintCreditText(v288, 0.78, *(float *)&v288, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v289 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED292");
  CCredits::PrintCreditText(v289, 0.78, *(float *)&v289, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v290 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED293");
  CCredits::PrintCreditText(v290, 0.78, *(float *)&v290, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v291 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED294");
  CCredits::PrintCreditText(v291, 0.78, *(float *)&v291, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v292 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED295");
  CCredits::PrintCreditText(v292, 0.78, *(float *)&v292, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v293 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED296");
  CCredits::PrintCreditText(v293, 0.78, *(float *)&v293, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v294 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED297");
  CCredits::PrintCreditText(v294, 0.78, *(float *)&v294, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v295 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED298");
  CCredits::PrintCreditText(v295, 0.78, *(float *)&v295, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v296 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED299");
  CCredits::PrintCreditText(v296, 0.78, *(float *)&v296, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v297 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED300");
  CCredits::PrintCreditText(v297, 0.78, *(float *)&v297, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v298 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED301");
  CCredits::PrintCreditText(v298, 0.78, *(float *)&v298, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v299 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED302");
  CCredits::PrintCreditText(v299, 0.78, *(float *)&v299, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v300 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED303");
  CCredits::PrintCreditText(v300, 0.78, *(float *)&v300, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v301 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED304");
  CCredits::PrintCreditText(v301, 0.78, *(float *)&v301, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v302 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED305");
  CCredits::PrintCreditText(v302, 0.78, *(float *)&v302, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v303 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED306");
  CCredits::PrintCreditText(v303, 0.78, *(float *)&v303, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v304 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED307");
  CCredits::PrintCreditText(v304, 0.78, *(float *)&v304, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v305 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED308");
  CCredits::PrintCreditText(v305, 0.78, *(float *)&v305, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v306 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308A");
  CCredits::PrintCreditText(v306, 0.78, *(float *)&v306, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v307 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308B");
  CCredits::PrintCreditText(v307, 0.78, *(float *)&v307, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v308 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308C");
  CCredits::PrintCreditText(v308, 0.78, *(float *)&v308, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v309 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308D");
  CCredits::PrintCreditText(v309, 0.78, *(float *)&v309, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v310 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308E");
  CCredits::PrintCreditText(v310, 0.78, *(float *)&v310, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v311 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308F");
  CCredits::PrintCreditText(v311, 0.78, *(float *)&v311, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v312 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308G");
  CCredits::PrintCreditText(v312, 0.78, *(float *)&v312, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v313 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308H");
  CCredits::PrintCreditText(v313, 0.78, *(float *)&v313, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v314 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308I");
  CCredits::PrintCreditText(v314, 0.78, *(float *)&v314, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v315 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308J");
  CCredits::PrintCreditText(v315, 0.78, *(float *)&v315, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v316 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308K");
  CCredits::PrintCreditText(v316, 0.78, *(float *)&v316, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v317 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308L");
  CCredits::PrintCreditText(v317, 0.78, *(float *)&v317, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 12.5);
  v318 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308M");
  CCredits::PrintCreditText(v318, 0.78, *(float *)&v318, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)(unsigned int)(float)((float)*(unsigned int *)v629 + 37.5) + 12.5);
  v319 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD308N");
  CCredits::PrintCreditText(v319, 0.78, *(float *)&v319, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v320 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED309");
  CCredits::PrintCreditText(v320, 1.1, *(float *)&v320, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v321 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED310");
  CCredits::PrintCreditText(v321, 1.1, *(float *)&v321, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v322 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED311");
  CCredits::PrintCreditText(v322, 1.1, *(float *)&v322, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v323 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED312");
  CCredits::PrintCreditText(v323, 1.1, *(float *)&v323, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v324 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED313");
  CCredits::PrintCreditText(v324, 1.1, *(float *)&v324, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v325 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED314");
  CCredits::PrintCreditText(v325, 1.1, *(float *)&v325, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v326 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED315");
  CCredits::PrintCreditText(v326, 0.78, *(float *)&v326, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v327 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED316");
  CCredits::PrintCreditText(v327, 0.78, *(float *)&v327, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v328 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED317");
  CCredits::PrintCreditText(v328, 0.78, *(float *)&v328, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v329 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED318");
  CCredits::PrintCreditText(v329, 0.78, *(float *)&v329, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v330 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED319");
  CCredits::PrintCreditText(v330, 0.78, *(float *)&v330, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v331 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED320");
  CCredits::PrintCreditText(v331, 0.78, *(float *)&v331, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v332 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED321");
  CCredits::PrintCreditText(v332, 0.78, *(float *)&v332, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v333 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED322");
  CCredits::PrintCreditText(v333, 0.78, *(float *)&v333, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v334 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED323");
  CCredits::PrintCreditText(v334, 0.78, *(float *)&v334, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v335 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED324");
  CCredits::PrintCreditText(v335, 0.78, *(float *)&v335, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v336 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED325");
  CCredits::PrintCreditText(v336, 0.78, *(float *)&v336, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v337 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED326");
  CCredits::PrintCreditText(v337, 0.78, *(float *)&v337, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v338 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED327");
  CCredits::PrintCreditText(v338, 0.78, *(float *)&v338, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v339 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED328");
  CCredits::PrintCreditText(v339, 0.78, *(float *)&v339, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v340 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED329");
  CCredits::PrintCreditText(v340, 0.78, *(float *)&v340, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v341 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED330");
  CCredits::PrintCreditText(v341, 0.78, *(float *)&v341, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v342 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED331");
  CCredits::PrintCreditText(v342, 0.78, *(float *)&v342, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v343 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED332");
  CCredits::PrintCreditText(v343, 0.78, *(float *)&v343, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v344 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED333");
  CCredits::PrintCreditText(v344, 0.78, *(float *)&v344, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v345 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED334");
  CCredits::PrintCreditText(v345, 0.78, *(float *)&v345, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v346 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED335");
  CCredits::PrintCreditText(v346, 0.78, *(float *)&v346, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v347 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED336");
  CCredits::PrintCreditText(v347, 0.78, *(float *)&v347, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v348 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED337");
  CCredits::PrintCreditText(v348, 0.78, *(float *)&v348, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v349 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED338");
  CCredits::PrintCreditText(v349, 0.78, *(float *)&v349, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v350 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED339");
  CCredits::PrintCreditText(v350, 0.78, *(float *)&v350, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v351 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED340");
  CCredits::PrintCreditText(v351, 0.78, *(float *)&v351, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v352 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED341");
  CCredits::PrintCreditText(v352, 0.78, *(float *)&v352, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v353 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED342");
  CCredits::PrintCreditText(v353, 0.78, *(float *)&v353, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v354 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED343");
  CCredits::PrintCreditText(v354, 0.78, *(float *)&v354, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v355 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED344");
  CCredits::PrintCreditText(v355, 0.78, *(float *)&v355, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v356 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED345");
  CCredits::PrintCreditText(v356, 0.78, *(float *)&v356, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v357 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED346");
  CCredits::PrintCreditText(v357, 0.78, *(float *)&v357, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v358 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED347");
  CCredits::PrintCreditText(v358, 0.78, *(float *)&v358, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v359 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED348");
  CCredits::PrintCreditText(v359, 0.78, *(float *)&v359, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v360 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED349");
  CCredits::PrintCreditText(v360, 0.78, *(float *)&v360, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v361 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED350");
  CCredits::PrintCreditText(v361, 0.78, *(float *)&v361, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v362 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED351");
  CCredits::PrintCreditText(v362, 0.78, *(float *)&v362, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v363 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED352");
  CCredits::PrintCreditText(v363, 0.78, *(float *)&v363, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v364 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED353");
  CCredits::PrintCreditText(v364, 0.78, *(float *)&v364, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v365 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED354");
  CCredits::PrintCreditText(v365, 0.78, *(float *)&v365, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v366 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED355");
  CCredits::PrintCreditText(v366, 0.78, *(float *)&v366, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v367 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED356");
  CCredits::PrintCreditText(v367, 0.78, *(float *)&v367, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v368 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED357");
  CCredits::PrintCreditText(v368, 0.78, *(float *)&v368, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v369 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED358");
  CCredits::PrintCreditText(v369, 0.78, *(float *)&v369, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v370 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED359");
  CCredits::PrintCreditText(v370, 0.78, *(float *)&v370, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v371 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED360");
  CCredits::PrintCreditText(v371, 0.78, *(float *)&v371, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v372 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED361");
  CCredits::PrintCreditText(v372, 0.78, *(float *)&v372, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v373 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED362");
  CCredits::PrintCreditText(v373, 0.78, *(float *)&v373, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v374 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED363");
  CCredits::PrintCreditText(v374, 0.78, *(float *)&v374, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v375 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED364");
  CCredits::PrintCreditText(v375, 0.78, *(float *)&v375, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v376 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED365");
  CCredits::PrintCreditText(v376, 0.78, *(float *)&v376, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v377 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED366");
  CCredits::PrintCreditText(v377, 0.78, *(float *)&v377, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v378 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED367");
  CCredits::PrintCreditText(v378, 0.78, *(float *)&v378, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v379 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED368");
  CCredits::PrintCreditText(v379, 0.78, *(float *)&v379, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v380 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED369");
  CCredits::PrintCreditText(v380, 0.78, *(float *)&v380, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v381 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED370");
  CCredits::PrintCreditText(v381, 0.78, *(float *)&v381, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v382 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED371");
  CCredits::PrintCreditText(v382, 0.78, *(float *)&v382, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v383 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED372");
  CCredits::PrintCreditText(v383, 0.78, *(float *)&v383, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v384 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED373");
  CCredits::PrintCreditText(v384, 0.78, *(float *)&v384, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v385 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED374");
  CCredits::PrintCreditText(v385, 0.78, *(float *)&v385, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v386 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED375");
  CCredits::PrintCreditText(v386, 0.78, *(float *)&v386, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v387 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED376");
  CCredits::PrintCreditText(v387, 0.78, *(float *)&v387, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v388 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED377");
  CCredits::PrintCreditText(v388, 0.78, *(float *)&v388, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v389 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED378");
  CCredits::PrintCreditText(v389, 0.78, *(float *)&v389, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v390 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED379");
  CCredits::PrintCreditText(v390, 0.78, *(float *)&v390, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v391 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED380");
  CCredits::PrintCreditText(v391, 0.78, *(float *)&v391, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v392 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED381");
  CCredits::PrintCreditText(v392, 0.78, *(float *)&v392, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v393 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED382");
  CCredits::PrintCreditText(v393, 0.78, *(float *)&v393, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v394 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED383");
  CCredits::PrintCreditText(v394, 0.78, *(float *)&v394, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v395 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED384");
  CCredits::PrintCreditText(v395, 0.78, *(float *)&v395, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v396 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED385");
  CCredits::PrintCreditText(v396, 0.78, *(float *)&v396, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v397 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED386");
  CCredits::PrintCreditText(v397, 0.78, *(float *)&v397, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v398 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED387");
  CCredits::PrintCreditText(v398, 0.78, *(float *)&v398, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v399 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED388");
  CCredits::PrintCreditText(v399, 0.78, *(float *)&v399, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v400 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED389");
  CCredits::PrintCreditText(v400, 0.78, *(float *)&v400, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v401 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED390");
  CCredits::PrintCreditText(v401, 0.78, *(float *)&v401, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v402 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED391");
  CCredits::PrintCreditText(v402, 0.78, *(float *)&v402, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v403 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED392");
  CCredits::PrintCreditText(v403, 0.78, *(float *)&v403, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v404 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED393");
  CCredits::PrintCreditText(v404, 0.78, *(float *)&v404, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v405 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED394");
  CCredits::PrintCreditText(v405, 0.78, *(float *)&v405, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v406 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED395");
  CCredits::PrintCreditText(v406, 0.78, *(float *)&v406, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v407 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED396");
  CCredits::PrintCreditText(v407, 0.78, *(float *)&v407, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v408 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED397");
  CCredits::PrintCreditText(v408, 0.78, *(float *)&v408, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v409 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED398");
  CCredits::PrintCreditText(v409, 1.1, *(float *)&v409, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v410 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED399");
  CCredits::PrintCreditText(v410, 1.1, *(float *)&v410, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v411 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED400");
  CCredits::PrintCreditText(v411, 1.1, *(float *)&v411, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v412 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED401");
  CCredits::PrintCreditText(v412, 1.1, *(float *)&v412, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v413 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED402");
  CCredits::PrintCreditText(v413, 1.1, *(float *)&v413, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v414 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED403");
  CCredits::PrintCreditText(v414, 1.1, *(float *)&v414, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v415 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED404");
  CCredits::PrintCreditText(v415, 1.1, *(float *)&v415, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v416 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED405");
  CCredits::PrintCreditText(v416, 1.1, *(float *)&v416, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v417 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED406");
  CCredits::PrintCreditText(v417, 1.1, *(float *)&v417, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v418 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED407");
  CCredits::PrintCreditText(v418, 1.1, *(float *)&v418, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v419 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED408");
  CCredits::PrintCreditText(v419, 1.1, *(float *)&v419, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v420 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED409");
  CCredits::PrintCreditText(v420, 1.1, *(float *)&v420, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 12.5);
  v421 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED410");
  CCredits::PrintCreditText(v421, 1.1, *(float *)&v421, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v422 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED411");
  CCredits::PrintCreditText(v422, 1.1, *(float *)&v422, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v423 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED412");
  CCredits::PrintCreditText(v423, 1.1, *(float *)&v423, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v424 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED413");
  CCredits::PrintCreditText(v424, 1.1, *(float *)&v424, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v425 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED414");
  CCredits::PrintCreditText(v425, 1.1, *(float *)&v425, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v426 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED415");
  CCredits::PrintCreditText(v426, 1.1, *(float *)&v426, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v427 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED416");
  CCredits::PrintCreditText(v427, 1.1, *(float *)&v427, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v428 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED417");
  CCredits::PrintCreditText(v428, 1.1, *(float *)&v428, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v429 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED418");
  CCredits::PrintCreditText(v429, 0.78, *(float *)&v429, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v430 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED419");
  CCredits::PrintCreditText(v430, 0.78, *(float *)&v430, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v431 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED420");
  CCredits::PrintCreditText(v431, 0.78, *(float *)&v431, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v432 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED421");
  CCredits::PrintCreditText(v432, 0.78, *(float *)&v432, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v433 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED422");
  CCredits::PrintCreditText(v433, 0.78, *(float *)&v433, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v434 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED423");
  CCredits::PrintCreditText(v434, 0.78, *(float *)&v434, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v435 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED424");
  CCredits::PrintCreditText(v435, 0.78, *(float *)&v435, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v436 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED425");
  CCredits::PrintCreditText(v436, 0.78, *(float *)&v436, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v437 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED426");
  CCredits::PrintCreditText(v437, 0.78, *(float *)&v437, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v438 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED427");
  CCredits::PrintCreditText(v438, 0.78, *(float *)&v438, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v439 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED428");
  CCredits::PrintCreditText(v439, 0.78, *(float *)&v439, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v440 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED429");
  CCredits::PrintCreditText(v440, 0.78, *(float *)&v440, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v441 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED430");
  CCredits::PrintCreditText(v441, 0.78, *(float *)&v441, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v442 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED431");
  CCredits::PrintCreditText(v442, 0.78, *(float *)&v442, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v443 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED432");
  CCredits::PrintCreditText(v443, 0.78, *(float *)&v443, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v444 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED433");
  CCredits::PrintCreditText(v444, 0.78, *(float *)&v444, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v445 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED434");
  CCredits::PrintCreditText(v445, 0.78, *(float *)&v445, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v446 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED435");
  CCredits::PrintCreditText(v446, 0.78, *(float *)&v446, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v447 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED436");
  CCredits::PrintCreditText(v447, 0.78, *(float *)&v447, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v448 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED437");
  CCredits::PrintCreditText(v448, 0.78, *(float *)&v448, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v449 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED438");
  CCredits::PrintCreditText(v449, 0.78, *(float *)&v449, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v450 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED439");
  CCredits::PrintCreditText(v450, 0.78, *(float *)&v450, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v451 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED440");
  CCredits::PrintCreditText(v451, 0.78, *(float *)&v451, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v452 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED441");
  CCredits::PrintCreditText(v452, 0.78, *(float *)&v452, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v453 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED442");
  CCredits::PrintCreditText(v453, 0.78, *(float *)&v453, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v454 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED443");
  CCredits::PrintCreditText(v454, 0.78, *(float *)&v454, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v455 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED444");
  CCredits::PrintCreditText(v455, 0.78, *(float *)&v455, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v456 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED445");
  CCredits::PrintCreditText(v456, 0.78, *(float *)&v456, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v457 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED446");
  CCredits::PrintCreditText(v457, 0.78, *(float *)&v457, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v458 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED447");
  CCredits::PrintCreditText(v458, 0.78, *(float *)&v458, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v459 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED448");
  CCredits::PrintCreditText(v459, 0.78, *(float *)&v459, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v460 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED449");
  CCredits::PrintCreditText(v460, 0.78, *(float *)&v460, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v461 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED450");
  CCredits::PrintCreditText(v461, 1.1, *(float *)&v461, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v462 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED451");
  CCredits::PrintCreditText(v462, 1.1, *(float *)&v462, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v463 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED452");
  CCredits::PrintCreditText(v463, 1.1, *(float *)&v463, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v464 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED453");
  CCredits::PrintCreditText(v464, 1.1, *(float *)&v464, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v465 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED454");
  CCredits::PrintCreditText(v465, 1.1, *(float *)&v465, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v466 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED455");
  CCredits::PrintCreditText(v466, 1.1, *(float *)&v466, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v467 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD455A");
  CCredits::PrintCreditText(v467, 1.1, *(float *)&v467, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v468 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD455B");
  CCredits::PrintCreditText(v468, 1.1, *(float *)&v468, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v469 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD455C");
  CCredits::PrintCreditText(v469, 1.1, *(float *)&v469, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v470 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD455D");
  CCredits::PrintCreditText(v470, 1.1, *(float *)&v470, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v471 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED456");
  CCredits::PrintCreditText(v471, 1.1, *(float *)&v471, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v472 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED457");
  CCredits::PrintCreditText(v472, 0.78, *(float *)&v472, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v473 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED458");
  CCredits::PrintCreditText(v473, 0.78, *(float *)&v473, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v474 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED459");
  CCredits::PrintCreditText(v474, 0.78, *(float *)&v474, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v475 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED460");
  CCredits::PrintCreditText(v475, 0.78, *(float *)&v475, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v476 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED461");
  CCredits::PrintCreditText(v476, 0.78, *(float *)&v476, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v477 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED462");
  CCredits::PrintCreditText(v477, 0.78, *(float *)&v477, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v478 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED463");
  CCredits::PrintCreditText(v478, 0.78, *(float *)&v478, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v479 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED464");
  CCredits::PrintCreditText(v479, 0.78, *(float *)&v479, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v480 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED465");
  CCredits::PrintCreditText(v480, 0.78, *(float *)&v480, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v481 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED466");
  CCredits::PrintCreditText(v481, 0.78, *(float *)&v481, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v482 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED467");
  CCredits::PrintCreditText(v482, 0.78, *(float *)&v482, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v483 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED468");
  CCredits::PrintCreditText(v483, 0.78, *(float *)&v483, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v484 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED469");
  CCredits::PrintCreditText(v484, 0.78, *(float *)&v484, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v485 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED470");
  CCredits::PrintCreditText(v485, 0.78, *(float *)&v485, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v486 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED471");
  CCredits::PrintCreditText(v486, 0.78, *(float *)&v486, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v487 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED472");
  CCredits::PrintCreditText(v487, 0.78, *(float *)&v487, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v488 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED473");
  CCredits::PrintCreditText(v488, 0.78, *(float *)&v488, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v489 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED474");
  CCredits::PrintCreditText(v489, 0.78, *(float *)&v489, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v490 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED475");
  CCredits::PrintCreditText(v490, 0.78, *(float *)&v490, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v491 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED476");
  CCredits::PrintCreditText(v491, 0.78, *(float *)&v491, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v492 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED477");
  CCredits::PrintCreditText(v492, 0.78, *(float *)&v492, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v493 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED478");
  CCredits::PrintCreditText(v493, 0.78, *(float *)&v493, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v494 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED479");
  CCredits::PrintCreditText(v494, 0.78, *(float *)&v494, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v495 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED480");
  CCredits::PrintCreditText(v495, 0.78, *(float *)&v495, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v496 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED481");
  CCredits::PrintCreditText(v496, 0.78, *(float *)&v496, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v497 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED482");
  CCredits::PrintCreditText(v497, 0.78, *(float *)&v497, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v498 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED483");
  CCredits::PrintCreditText(v498, 0.78, *(float *)&v498, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v499 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED484");
  CCredits::PrintCreditText(v499, 0.78, *(float *)&v499, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v500 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED485");
  CCredits::PrintCreditText(v500, 0.78, *(float *)&v500, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v501 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED486");
  CCredits::PrintCreditText(v501, 0.78, *(float *)&v501, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v502 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED487");
  CCredits::PrintCreditText(v502, 0.78, *(float *)&v502, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v503 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED488");
  CCredits::PrintCreditText(v503, 0.78, *(float *)&v503, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v504 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED489");
  CCredits::PrintCreditText(v504, 0.78, *(float *)&v504, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v505 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED490");
  CCredits::PrintCreditText(v505, 0.78, *(float *)&v505, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v506 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED491");
  CCredits::PrintCreditText(v506, 0.78, *(float *)&v506, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v507 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED492");
  CCredits::PrintCreditText(v507, 0.78, *(float *)&v507, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v508 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED493");
  CCredits::PrintCreditText(v508, 0.78, *(float *)&v508, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v509 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED494");
  CCredits::PrintCreditText(v509, 0.78, *(float *)&v509, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v510 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED495");
  CCredits::PrintCreditText(v510, 0.78, *(float *)&v510, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v511 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED496");
  CCredits::PrintCreditText(v511, 0.78, *(float *)&v511, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v512 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED497");
  CCredits::PrintCreditText(v512, 0.78, *(float *)&v512, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v513 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED498");
  CCredits::PrintCreditText(v513, 0.78, *(float *)&v513, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v514 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED499");
  CCredits::PrintCreditText(v514, 1.1, *(float *)&v514, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v515 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED500");
  CCredits::PrintCreditText(v515, 1.1, *(float *)&v515, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v516 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED501");
  CCredits::PrintCreditText(v516, 1.1, *(float *)&v516, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v517 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED502");
  CCredits::PrintCreditText(v517, 1.1, *(float *)&v517, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v518 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED503");
  CCredits::PrintCreditText(v518, 1.1, *(float *)&v518, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v519 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED504");
  CCredits::PrintCreditText(v519, 1.1, *(float *)&v519, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v520 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED505");
  CCredits::PrintCreditText(v520, 1.1, *(float *)&v520, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v521 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED506");
  CCredits::PrintCreditText(v521, 1.1, *(float *)&v521, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v522 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED507");
  CCredits::PrintCreditText(v522, 1.1, *(float *)&v522, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v523 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED508");
  CCredits::PrintCreditText(v523, 1.1, *(float *)&v523, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v524 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED509");
  CCredits::PrintCreditText(v524, 1.1, *(float *)&v524, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v525 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED510");
  CCredits::PrintCreditText(v525, 1.1, *(float *)&v525, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v526 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED511");
  CCredits::PrintCreditText(v526, 1.1, *(float *)&v526, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v527 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED512");
  CCredits::PrintCreditText(v527, 1.1, *(float *)&v527, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v528 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED515");
  CCredits::PrintCreditText(v528, 1.1, *(float *)&v528, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v529 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED516");
  CCredits::PrintCreditText(v529, 1.1, *(float *)&v529, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v530 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED517");
  CCredits::PrintCreditText(v530, 1.1, *(float *)&v530, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v531 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED518");
  CCredits::PrintCreditText(v531, 1.1, *(float *)&v531, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v532 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED519");
  CCredits::PrintCreditText(v532, 1.1, *(float *)&v532, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v533 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED520");
  CCredits::PrintCreditText(v533, 1.1, *(float *)&v533, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v534 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED521");
  CCredits::PrintCreditText(v534, 1.1, *(float *)&v534, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v535 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED522");
  CCredits::PrintCreditText(v535, 1.1, *(float *)&v535, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v536 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED523");
  CCredits::PrintCreditText(v536, 1.1, *(float *)&v536, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v537 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED524");
  CCredits::PrintCreditText(v537, 1.1, *(float *)&v537, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v538 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED525");
  CCredits::PrintCreditText(v538, 1.1, *(float *)&v538, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v539 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED526");
  CCredits::PrintCreditText(v539, 1.1, *(float *)&v539, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v540 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED527");
  CCredits::PrintCreditText(v540, 1.1, *(float *)&v540, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v541 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED529");
  CCredits::PrintCreditText(v541, 1.1, *(float *)&v541, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v542 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED530");
  CCredits::PrintCreditText(v542, 1.1, *(float *)&v542, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v543 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED531");
  CCredits::PrintCreditText(v543, 1.1, *(float *)&v543, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v544 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED532");
  CCredits::PrintCreditText(v544, 1.1, *(float *)&v544, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v545 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED533");
  CCredits::PrintCreditText(v545, 1.1, *(float *)&v545, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v546 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED534");
  CCredits::PrintCreditText(v546, 1.1, *(float *)&v546, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v547 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED535");
  CCredits::PrintCreditText(v547, 1.1, *(float *)&v547, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v548 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED536");
  CCredits::PrintCreditText(v548, 1.1, *(float *)&v548, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v549 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED537");
  CCredits::PrintCreditText(v549, 1.1, *(float *)&v549, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v550 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED538");
  CCredits::PrintCreditText(v550, 1.1, *(float *)&v550, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v551 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED539");
  CCredits::PrintCreditText(v551, 1.1, *(float *)&v551, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v552 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED540");
  CCredits::PrintCreditText(v552, 1.1, *(float *)&v552, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v553 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED541");
  CCredits::PrintCreditText(v553, 1.1, *(float *)&v553, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v554 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD541A");
  CCredits::PrintCreditText(v554, 1.1, *(float *)&v554, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v555 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD541B");
  CCredits::PrintCreditText(v555, 1.1, *(float *)&v555, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v556 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRD541C");
  CCredits::PrintCreditText(v556, 1.1, *(float *)&v556, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v557 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED542");
  CCredits::PrintCreditText(v557, 1.1, *(float *)&v557, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v558 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED543");
  CCredits::PrintCreditText(v558, 1.1, *(float *)&v558, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v559 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED544");
  CCredits::PrintCreditText(v559, 1.1, *(float *)&v559, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v560 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED545");
  CCredits::PrintCreditText(v560, 1.1, *(float *)&v560, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)(unsigned int)(float)((float)*(unsigned int *)v629 + 37.5) + 37.5);
  v561 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD0");
  CCredits::PrintCreditText(v561, 1.1, *(float *)&v561, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v562 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD1");
  CCredits::PrintCreditText(v562, 1.1, *(float *)&v562, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v563 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD2");
  CCredits::PrintCreditText(v563, 1.1, *(float *)&v563, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v564 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD3");
  CCredits::PrintCreditText(v564, 1.1, *(float *)&v564, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v565 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD4");
  CCredits::PrintCreditText(v565, 1.1, *(float *)&v565, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v566 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED088");
  CCredits::PrintCreditText(v566, 1.1, *(float *)&v566, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v567 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD5");
  CCredits::PrintCreditText(v567, 1.1, *(float *)&v567, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v568 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD6");
  CCredits::PrintCreditText(v568, 1.1, *(float *)&v568, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v569 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD13");
  CCredits::PrintCreditText(v569, 1.1, *(float *)&v569, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v570 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD7");
  CCredits::PrintCreditText(v570, 1.1, *(float *)&v570, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v571 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD8");
  CCredits::PrintCreditText(v571, 1.1, *(float *)&v571, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v572 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED107");
  CCredits::PrintCreditText(v572, 1.1, *(float *)&v572, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v573 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD9");
  CCredits::PrintCreditText(v573, 1.1, *(float *)&v573, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v574 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED609");
  CCredits::PrintCreditText(v574, 1.1, *(float *)&v574, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v575 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD10");
  CCredits::PrintCreditText(v575, 1.1, *(float *)&v575, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v576 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD11");
  CCredits::PrintCreditText(v576, 1.1, *(float *)&v576, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v577 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CREWD12");
  CCredits::PrintCreditText(v577, 1.1, *(float *)&v577, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)(unsigned int)(float)((float)*(unsigned int *)v629 + 37.5) + 37.5);
  v578 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED600");
  CCredits::PrintCreditText(v578, 1.1, *(float *)&v578, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v579 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED601");
  CCredits::PrintCreditText(v579, 1.1, *(float *)&v579, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v580 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED602");
  CCredits::PrintCreditText(v580, 1.1, *(float *)&v580, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v581 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED603");
  CCredits::PrintCreditText(v581, 1.1, *(float *)&v581, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v582 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED604");
  CCredits::PrintCreditText(v582, 1.1, *(float *)&v582, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v583 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED605");
  CCredits::PrintCreditText(v583, 1.1, *(float *)&v583, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v584 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED606");
  CCredits::PrintCreditText(v584, 1.1, *(float *)&v584, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v585 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED607");
  CCredits::PrintCreditText(v585, 1.1, *(float *)&v585, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v586 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED608");
  CCredits::PrintCreditText(v586, 1.1, *(float *)&v586, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v587 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED609");
  CCredits::PrintCreditText(v587, 1.1, *(float *)&v587, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v588 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED610");
  CCredits::PrintCreditText(v588, 1.1, *(float *)&v588, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v589 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED611");
  CCredits::PrintCreditText(v589, 1.1, *(float *)&v589, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v590 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED612");
  CCredits::PrintCreditText(v590, 1.1, *(float *)&v590, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v591 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED613");
  CCredits::PrintCreditText(v591, 1.1, *(float *)&v591, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v592 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED614");
  CCredits::PrintCreditText(v592, 1.1, *(float *)&v592, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v593 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED615");
  CCredits::PrintCreditText(v593, 1.1, *(float *)&v593, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v594 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED616");
  CCredits::PrintCreditText(v594, 1.1, *(float *)&v594, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v595 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED617");
  CCredits::PrintCreditText(v595, 1.1, *(float *)&v595, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v596 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED618");
  CCredits::PrintCreditText(v596, 1.1, *(float *)&v596, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v597 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED619");
  CCredits::PrintCreditText(v597, 1.1, *(float *)&v597, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v598 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED620");
  CCredits::PrintCreditText(v598, 1.1, *(float *)&v598, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v599 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED621");
  CCredits::PrintCreditText(v599, 1.1, *(float *)&v599, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v600 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED622");
  CCredits::PrintCreditText(v600, 1.1, *(float *)&v600, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v601 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED623");
  CCredits::PrintCreditText(v601, 1.1, *(float *)&v601, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v602 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED624");
  CCredits::PrintCreditText(v602, 1.1, *(float *)&v602, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v603 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED625");
  CCredits::PrintCreditText(v603, 1.1, *(float *)&v603, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v604 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED626");
  CCredits::PrintCreditText(v604, 1.1, *(float *)&v604, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v605 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED627");
  CCredits::PrintCreditText(v605, 1.1, *(float *)&v605, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v606 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED628");
  CCredits::PrintCreditText(v606, 1.1, *(float *)&v606, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v607 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED629");
  CCredits::PrintCreditText(v607, 1.1, *(float *)&v607, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v608 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED630");
  CCredits::PrintCreditText(v608, 1.1, *(float *)&v608, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  *(_DWORD *)v629 = (unsigned int)(float)((float)*(unsigned int *)v629 + 37.5);
  v609 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED700");
  CCredits::PrintCreditText(v609, 1.1, *(float *)&v609, v629, (unsigned int *)LODWORD(v9), COERCE_FLOAT(1), v628[0]);
  v610 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED701");
  CCredits::PrintCreditText(v610, 1.1, *(float *)&v610, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v611 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED702");
  CCredits::PrintCreditText(v611, 1.1, *(float *)&v611, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v612 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED703");
  CCredits::PrintCreditText(v612, 1.1, *(float *)&v612, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v613 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED704");
  CCredits::PrintCreditText(v613, 1.1, *(float *)&v613, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v614 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED705");
  CCredits::PrintCreditText(v614, 1.1, *(float *)&v614, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v615 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED706");
  CCredits::PrintCreditText(v615, 1.1, *(float *)&v615, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v616 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED707");
  CCredits::PrintCreditText(v616, 1.1, *(float *)&v616, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v617 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED708");
  CCredits::PrintCreditText(v617, 1.1, *(float *)&v617, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v618 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED709");
  CCredits::PrintCreditText(v618, 1.1, *(float *)&v618, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v619 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED710");
  CCredits::PrintCreditText(v619, 1.1, *(float *)&v619, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v620 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED711");
  CCredits::PrintCreditText(v620, 1.1, *(float *)&v620, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v621 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED712");
  CCredits::PrintCreditText(v621, 1.1, *(float *)&v621, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v622 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED713");
  CCredits::PrintCreditText(v622, 1.1, *(float *)&v622, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v623 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED714");
  CCredits::PrintCreditText(v623, 1.1, *(float *)&v623, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v624 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED715");
  CCredits::PrintCreditText(v624, 1.1, *(float *)&v624, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  v625 = (CCredits *)CText::Get((CText *)TheText, (CKeyGen *)"CRED716");
  v626 = (CFont *)CCredits::PrintCreditText(v625, 1.1, *(float *)&v625, v629, (unsigned int *)LODWORD(v9), 0.0, v628[0]);
  CFont::RenderFontBuffer(v626);
  if ( byte_951FE3 )
    CCamera::DrawBordersForWideScreen((CCamera *)&TheCamera);
  if ( dword_6F3838 )
    CWidgetButton::Draw((CWidgetButton *)dword_6F3838);
  result = (char *)(dword_9FC904 + *(_DWORD *)v629);
  if ( (float)((float)(unsigned int)(dword_9FC904 + *(_DWORD *)v629) - v9) < -10.0 )
  {
    result = &CCredits::bCreditsGoing;
    CCredits::bCreditsGoing = 0;
  }
  return result;
}


// ============================================================

// Address: 0x462a88
// Original: _ZN8CCredits15PrintCreditTextEffPtRjfb
// Demangled: CCredits::PrintCreditText(float,float,ushort *,uint &,float,bool)
float __fastcall CCredits::PrintCreditText(
        CCredits *this,
        CFont *a2,
        CFont *a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        float a6,
        bool a7)
{
  float v11; // s18
  float result; // r0
  float v13; // r1
  unsigned __int16 *v14; // r3
  unsigned __int16 *v15; // r3
  _BYTE v16[4]; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v17[4]; // [sp+8h] [bp-28h] BYREF
  _BYTE v18[36]; // [sp+Ch] [bp-24h] BYREF

  v11 = (float)((float)dword_9FC904 + (float)*(unsigned int *)a4) - *(float *)&a5;
  LODWORD(result) = CFont::GetHeight(0, (bool)a2) ^ 0x80000000;
  if ( v11 > result )
  {
    result = COERCE_FLOAT(&RsGlobal);
    if ( v11 < (float)dword_9FC904 )
    {
      CFont::SetScale(a2, v13);
      CRGBA::CRGBA((CRGBA *)v18, 0, 0, 0, 0xFFu);
      CFont::SetColor();
      CFont::PrintString(COERCE_CFONT_((float)(dword_9FC900 / 2)), v11, a3, v14);
      if ( LODWORD(a6) == 1 )
        CRGBA::CRGBA((CRGBA *)v17, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      else
        CRGBA::CRGBA((CRGBA *)v16, 0xD2u, 0xD2u, 0xD2u, 0xD2u);
      CFont::SetColor();
      result = COERCE_FLOAT(CFont::PrintString(COERCE_CFONT_((float)(dword_9FC900 / 2 - 1)), v11 + -1.0, a3, v15));
    }
  }
  *(_DWORD *)a4 = (unsigned int)(float)((float)(*(float *)&a2 * 20.0) + (float)*(unsigned int *)a4);
  return result;
}


// ============================================================

// Address: 0x462bc4
// Original: _ZN8CCredits16PrintCreditSpaceEfRj
// Demangled: CCredits::PrintCreditSpace(float,uint &)
float __fastcall CCredits::PrintCreditSpace(float this, unsigned int *a2, unsigned int *a3)
{
  *a2 = (unsigned int)(float)((float)(this * 25.0) + (float)*a2);
  return this;
}


// ============================================================

// Address: 0x5a4e4c
// Original: _ZN8CCredits5StartEv
// Demangled: CCredits::Start(void)
int __fastcall CCredits::Start(CCredits *this)
{
  int result; // r0

  result = CTimer::m_snTimeInMilliseconds;
  CCredits::bCreditsGoing = 1;
  CCredits::CreditsStartTime = CTimer::m_snTimeInMilliseconds;
  return result;
}


// ============================================================

// Address: 0x5a4e74
// Original: _ZN8CCredits4StopEv
// Demangled: CCredits::Stop(void)
char *__fastcall CCredits::Stop(CCredits *this)
{
  char *result; // r0

  result = &CCredits::bCreditsGoing;
  CCredits::bCreditsGoing = 0;
  return result;
}


// ============================================================

// Address: 0x5a4e84
// Original: _ZN8CCredits6UpdateEv
// Demangled: CCredits::Update(void)
int __fastcall CCredits::Update(CCredits *this)
{
  int result; // r0
  bool v2; // zf

  result = (unsigned __int8)CCredits::bCreditsGoing;
  if ( CCredits::bCreditsGoing )
  {
    result = (int)&gMobileMenu;
    v2 = dword_6E0090 == 0;
    if ( !dword_6E0090 )
    {
      result = dword_6E0098;
      v2 = dword_6E0098 == 0;
    }
    if ( v2 )
    {
      result = CTouchInterface::IsReleased(41, 0, 2);
      if ( result == 1 )
      {
        result = (int)&CCredits::bCreditsGoing;
        CCredits::bCreditsGoing = 0;
      }
    }
  }
  return result;
}


// ============================================================
