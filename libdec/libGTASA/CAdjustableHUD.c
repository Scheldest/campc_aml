
// Address: 0x18c328
// Original: j__ZN14CAdjustableHUD13EnableButtonsEv
// Demangled: CAdjustableHUD::EnableButtons(void)
// attributes: thunk
int __fastcall CAdjustableHUD::EnableButtons(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD13EnableButtonsEv(this);
}


// ============================================================

// Address: 0x18d1e8
// Original: j__ZN14CAdjustableHUD15RestoreDefaultsEv
// Demangled: CAdjustableHUD::RestoreDefaults(void)
// attributes: thunk
int __fastcall CAdjustableHUD::RestoreDefaults(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD15RestoreDefaultsEv(this);
}


// ============================================================

// Address: 0x18ef94
// Original: j__ZN14CAdjustableHUD6ToggleEv
// Demangled: CAdjustableHUD::Toggle(void)
// attributes: thunk
int __fastcall CAdjustableHUD::Toggle(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD6ToggleEv(this);
}


// ============================================================

// Address: 0x18f054
// Original: j__ZN14CAdjustableHUD10SaveToDiskEv
// Demangled: CAdjustableHUD::SaveToDisk(void)
// attributes: thunk
int __fastcall CAdjustableHUD::SaveToDisk(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD10SaveToDiskEv(this);
}


// ============================================================

// Address: 0x190364
// Original: j__ZN14CAdjustableHUD4DrawEv
// Demangled: CAdjustableHUD::Draw(void)
// attributes: thunk
int __fastcall CAdjustableHUD::Draw(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD4DrawEv(this);
}


// ============================================================

// Address: 0x193904
// Original: j__ZN14CAdjustableHUD6UpdateEv
// Demangled: CAdjustableHUD::Update(void)
// attributes: thunk
int __fastcall CAdjustableHUD::Update(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD6UpdateEv(this);
}


// ============================================================

// Address: 0x197a24
// Original: j__ZN14CAdjustableHUD16GetTopAreaHeightEv
// Demangled: CAdjustableHUD::GetTopAreaHeight(void)
// attributes: thunk
int __fastcall CAdjustableHUD::GetTopAreaHeight(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD16GetTopAreaHeightEv(this);
}


// ============================================================

// Address: 0x199a08
// Original: j__ZN14CAdjustableHUDC2Ev
// Demangled: CAdjustableHUD::CAdjustableHUD(void)
// attributes: thunk
void __fastcall CAdjustableHUD::CAdjustableHUD(CAdjustableHUD *this)
{
  _ZN14CAdjustableHUDC2Ev(this);
}


// ============================================================

// Address: 0x199bfc
// Original: j__ZN14CAdjustableHUDD2Ev
// Demangled: CAdjustableHUD::~CAdjustableHUD()
// attributes: thunk
void __fastcall CAdjustableHUD::~CAdjustableHUD(CAdjustableHUD *this)
{
  _ZN14CAdjustableHUDD2Ev(this);
}


// ============================================================

// Address: 0x19adac
// Original: j__ZN14CAdjustableHUD11SetTexturesEv
// Demangled: CAdjustableHUD::SetTextures(void)
// attributes: thunk
int __fastcall CAdjustableHUD::SetTextures(CAdjustableHUD *this)
{
  return _ZN14CAdjustableHUD11SetTexturesEv(this);
}


// ============================================================

// Address: 0x282090
// Original: _ZN14CAdjustableHUD6ToggleEv
// Demangled: CAdjustableHUD::Toggle(void)
int __fastcall CAdjustableHUD::Toggle(CAdjustableHUD *this)
{
  void *v1; // r0
  int result; // r0
  CAdjustableHUD *v3; // r0

  if ( CAdjustableHUD::m_pInstance )
  {
    CAdjustableHUD::~CAdjustableHUD((CAdjustableHUD *)CAdjustableHUD::m_pInstance);
    operator delete(v1);
    result = 0;
  }
  else
  {
    v3 = (CAdjustableHUD *)operator new(0x4B0u);
    CAdjustableHUD::CAdjustableHUD(v3);
  }
  CAdjustableHUD::m_pInstance = result;
  return result;
}


// ============================================================

// Address: 0x2820d0
// Original: _ZN14CAdjustableHUDC2Ev
// Demangled: CAdjustableHUD::CAdjustableHUD(void)
void __fastcall CAdjustableHUD::CAdjustableHUD(CAdjustableHUD *this)
{
  _QWORD *v2; // r0
  int v3; // r4
  _QWORD *v4; // r0
  int v5; // r5
  int v6; // r9
  int *v7; // r6
  int *v8; // r8
  int *v9; // r10
  int v10; // r4
  float v11; // s30
  float v12; // s17
  float Width; // s21
  float Height; // s23
  float v15; // s25
  float v16; // s19
  float v17; // s27
  float v18; // s29
  float v19; // s2
  float v20; // s4
  float v21; // s0
  int v22; // r5
  float v23; // s23
  float v24; // s21
  float v25; // s17
  float v26; // s27
  float v27; // s25
  float v28; // s29
  float v29; // s0
  float v30; // s2
  float v31; // s25
  float v32; // s23
  float v33; // s19
  float v34; // s29
  float v35; // s21
  float v36; // s27
  float v37; // s31
  float v38; // s28
  float v39; // s24
  float v40; // s30
  float v41; // s26
  float v42; // s16
  float v43; // s2
  float v44; // s0
  bool v45; // cc
  float v46; // s0
  float v47; // s2
  int v48; // r11
  float v49; // s27
  float v50; // s0
  float v51; // s25
  float v52; // s17
  float v53; // s21
  float v54; // s19
  float v55; // s16
  float v56; // s24
  float v57; // s26
  float v58; // s0
  float v59; // s2
  float *v60; // r0
  __int64 v61; // d17
  _QWORD *v62; // r1
  int v63; // r1
  int v64; // t1
  int v65; // t1
  int v66; // t1
  TextureDatabaseRuntime *v67; // r1
  CTouchInterface *TextureDB; // [sp+4h] [bp-94h]
  CAdjustableHUD *v69; // [sp+24h] [bp-74h]
  float v70; // [sp+28h] [bp-70h] BYREF
  float v71; // [sp+2Ch] [bp-6Ch] BYREF
  float v72; // [sp+30h] [bp-68h] BYREF
  float v73[25]; // [sp+34h] [bp-64h] BYREF

  v2 = (_QWORD *)((char *)this + 20);
  v3 = -760;
  *v2 = 0xC974240049742400LL;
  v2[1] = 0x49742400C9742400LL;
  *(_QWORD *)((char *)this + 4) = 0xC974240049742400LL;
  *(_QWORD *)((char *)this + 12) = 0x49742400C9742400LL;
  *(_QWORD *)((char *)this + 36) = 0xC974240049742400LL;
  *(_QWORD *)((char *)this + 44) = 0x49742400C9742400LL;
  *(_QWORD *)((char *)this + 52) = 0xC974240049742400LL;
  *(_QWORD *)((char *)this + 60) = 0x49742400C9742400LL;
  *(_QWORD *)((char *)this + 68) = 0xC974240049742400LL;
  *(_QWORD *)((char *)this + 76) = 0x49742400C9742400LL;
  *(_QWORD *)((char *)this + 84) = 0xC974240049742400LL;
  *(_QWORD *)((char *)this + 92) = 0x49742400C9742400LL;
  do
  {
    v4 = (_QWORD *)((char *)this + v3 + 872);
    *v4 = 0xC974240049742400LL;
    v4[1] = 0x49742400C9742400LL;
    CSprite2d::CSprite2d((CAdjustableHUD *)((char *)this + v3 + 888));
    CSprite2d::CSprite2d((CAdjustableHUD *)((char *)this + v3 + 892));
    v3 += 40;
  }
  while ( v3 );
  *((_QWORD *)this + 112) = 0xC974240049742400LL;
  *((_QWORD *)this + 113) = 0x49742400C9742400LL;
  *((_QWORD *)this + 110) = 0xC974240049742400LL;
  *((_QWORD *)this + 111) = 0x49742400C9742400LL;
  *((_QWORD *)this + 114) = 0xC974240049742400LL;
  *((_QWORD *)this + 115) = 0x49742400C9742400LL;
  *((_QWORD *)this + 116) = 0xC974240049742400LL;
  *((_QWORD *)this + 117) = 0x49742400C9742400LL;
  *((_QWORD *)this + 118) = 0xC974240049742400LL;
  *((_QWORD *)this + 119) = 0x49742400C9742400LL;
  *((_QWORD *)this + 120) = 0xC974240049742400LL;
  *((_QWORD *)this + 121) = 0x49742400C9742400LL;
  *((_QWORD *)this + 122) = 0xC974240049742400LL;
  *((_QWORD *)this + 123) = 0x49742400C9742400LL;
  *((_QWORD *)this + 124) = 0xC974240049742400LL;
  *((_QWORD *)this + 125) = 0x49742400C9742400LL;
  *((_QWORD *)this + 126) = 0xC974240049742400LL;
  *((_QWORD *)this + 127) = 0x49742400C9742400LL;
  *((_QWORD *)this + 128) = 0xC974240049742400LL;
  *((_QWORD *)this + 129) = 0x49742400C9742400LL;
  *((_QWORD *)this + 130) = 0xC974240049742400LL;
  *((_QWORD *)this + 131) = 0x49742400C9742400LL;
  *((_QWORD *)this + 132) = 0xC974240049742400LL;
  *((_QWORD *)this + 133) = 0x49742400C9742400LL;
  *((_QWORD *)this + 134) = 0xC974240049742400LL;
  *((_QWORD *)this + 135) = 0x49742400C9742400LL;
  *((_QWORD *)this + 136) = 0xC974240049742400LL;
  *((_QWORD *)this + 137) = 0x49742400C9742400LL;
  *((_QWORD *)this + 138) = 0xC974240049742400LL;
  *((_QWORD *)this + 139) = 0x49742400C9742400LL;
  *((_QWORD *)this + 140) = 0xC974240049742400LL;
  *((_QWORD *)this + 141) = 0x49742400C9742400LL;
  *((_QWORD *)this + 142) = 0xC974240049742400LL;
  *((_QWORD *)this + 143) = 0x49742400C9742400LL;
  *((_QWORD *)this + 144) = 0xC974240049742400LL;
  *((_QWORD *)this + 145) = 0x49742400C9742400LL;
  *((_QWORD *)this + 108) = 0xC974240049742400LL;
  *((_QWORD *)this + 109) = 0x49742400C9742400LL;
  v5 = 1;
  if ( FindPlayerPed(-1) && *(_DWORD *)(FindPlayerPed(-1) + 1100) == 50 )
    v5 = 2;
  v6 = 864;
  *((_DWORD *)this + 292) = -1;
  *(_DWORD *)this = v5;
  *((_DWORD *)this + 25) = -1;
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 295) = 0;
  *((_BYTE *)this + 1174) = 0;
  *((_WORD *)this + 586) = 0;
  v7 = &PositionIDs;
  v8 = &WidgetIDs;
  v9 = &nAdjustmentModeFlags;
  TextureDB = (CTouchInterface *)CTouchInterface::LoadTextureDB((CTouchInterface *)&WidgetIDs_ptr);
  v10 = 0;
  v69 = this;
  do
  {
    v72 = 0.0;
    v73[0] = 0.0;
    v70 = 0.0;
    v71 = 0.0;
    CTouchInterface::GetWidgetPosition(*v7, (int)v73, (int)&v72, (int)&v71, (int)&v70);
    v11 = v73[0];
    v12 = (float)dword_9FC900;
    Width = (float)(unsigned int)OS_ScreenGetWidth();
    Height = (float)(unsigned int)OS_ScreenGetHeight();
    v15 = (float)dword_9FC904;
    v16 = v71;
    v17 = (float)dword_9FC900;
    v18 = (float)(unsigned int)OS_ScreenGetWidth();
    v19 = 0.0;
    v20 = 0.0;
    v21 = v18 / (float)(unsigned int)OS_ScreenGetHeight();
    if ( (float)(Width / Height) > 1.9 )
      v19 = 30.0;
    if ( v21 > 1.9 )
      v20 = 30.0;
    v22 = dword_9FC904;
    v23 = (float)(v17 - v20) / 640.0;
    if ( (float)(v17 / v15) > 1.8 )
      v23 = (float)(v23 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v24 = (float)(v12 - v19) / 640.0;
    v25 = v70;
    v26 = v72;
    v27 = (float)dword_9FC900;
    v28 = (float)(unsigned int)OS_ScreenGetWidth();
    v29 = 0.0;
    if ( (float)(v28 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
      v29 = 30.0;
    v30 = v27 / (float)v22;
    v31 = (float)(v27 - v29) / 640.0;
    if ( v30 > 1.8 )
      v31 = (float)(v31 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v32 = v16 * v23;
    v33 = v26 * (float)((float)v22 / 448.0);
    v34 = v73[0];
    v35 = v11 * v24;
    v36 = (float)dword_9FC900;
    v37 = (float)(unsigned int)OS_ScreenGetWidth();
    v38 = (float)(unsigned int)OS_ScreenGetHeight();
    v39 = (float)dword_9FC904;
    v40 = v71;
    v41 = (float)dword_9FC900;
    v42 = (float)(unsigned int)OS_ScreenGetWidth();
    v43 = 0.0;
    v44 = v42 / (float)(unsigned int)OS_ScreenGetHeight();
    if ( (float)(v37 / v38) > 1.9 )
      v43 = 30.0;
    v45 = v44 <= 1.9;
    v46 = 0.0;
    v47 = (float)(v36 - v43) / 640.0;
    if ( !v45 )
      v46 = 30.0;
    v48 = dword_9FC904;
    v49 = (float)(v41 - v46) / 640.0;
    v50 = v25 * v31;
    v51 = v34 * v47;
    if ( (float)(v41 / v39) > 1.8 )
      v49 = (float)(v49 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v52 = v33 - v50;
    v53 = v35 - v32;
    v54 = v70;
    v55 = v72;
    v56 = (float)dword_9FC900;
    v57 = (float)(unsigned int)OS_ScreenGetWidth();
    v58 = 0.0;
    if ( (float)(v57 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
      v58 = 30.0;
    v59 = (float)(v56 - v58) / 640.0;
    if ( (float)(v56 / (float)v48) > 1.8 )
      v59 = (float)(v59 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v60 = (float *)((char *)v69 + v10);
    v60[28] = v53;
    v60[29] = (float)(v55 * (float)((float)v48 / 448.0)) + (float)(v54 * v59);
    v60[30] = v51 + (float)(v40 * v49);
    v60[31] = v52;
    v61 = *(_QWORD *)((char *)v69 + v10 + 120);
    v62 = (_QWORD *)((char *)v69 + v6);
    *v62 = *(_QWORD *)((char *)v69 + v10 + 112);
    v62[1] = v61;
    v64 = *v8++;
    v63 = v64;
    *((_DWORD *)v60 + 26) = v64;
    v65 = *v7++;
    *((_DWORD *)v60 + 27) = v65;
    *((_WORD *)v60 + 70) = 256;
    v66 = *v9++;
    *((_DWORD *)v60 + 34) = v66;
    CSprite2d::SetTexture(
      (CAdjustableHUD *)((char *)v69 + v10 + 132),
      (char *)&CTouchInterface::m_pszWidgetTextures[32 * v63]);
    v10 += 40;
    v6 += 16;
  }
  while ( v10 != 760 );
  CTouchInterface::UnloadTextureDB(TextureDB, v67);
  CAdjustableHUD::Update(v69);
}


// ============================================================

// Address: 0x28262c
// Original: _ZN14CAdjustableHUD6UpdateEv
// Demangled: CAdjustableHUD::Update(void)
int __fastcall CAdjustableHUD::Update(CAdjustableHUD *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d3
  float32x2_t v5; // d4
  float32x2_t v6; // d5
  float32x2_t v7; // d6
  float32x2_t v8; // d7
  float32x2_t v9; // d8
  float32x2_t v10; // d9
  float32x2_t v11; // d10
  int v13; // r1
  float v14; // s0
  float v15; // s2
  int v16; // r0
  int v17; // r0
  int v18; // r0
  __int64 v19; // d16
  __int64 v20; // d17
  __int64 v21; // d18
  __int64 v22; // d19
  __int64 v23; // d20
  __int64 v24; // d21
  __int64 v25; // d22
  __int64 v26; // d23
  __int64 v27; // d24
  __int64 v28; // d25
  __int64 v29; // d26
  __int64 v30; // d27
  __int64 v31; // d28
  __int64 v32; // d29
  __int64 v33; // d31
  __int64 v34; // d17
  __int64 v35; // d17
  __int64 v36; // d17
  __int64 v37; // d17
  __int64 v38; // d17
  __int64 v39; // d17
  __int64 v40; // d17
  __int64 v41; // d17
  __int64 v42; // d17
  __int64 v43; // d17
  __int64 v44; // d17
  int v45; // r0
  int v46; // r0
  float *v47; // r0
  float v48; // s22
  float v49; // s20
  float v50; // s26
  float32x2_t v51; // d12
  float v52; // s16
  float Width; // s18
  float v54; // s21
  float v55; // s0
  int v56; // r5
  float v57; // s19
  float v58; // s18
  bool v59; // cc
  float v60; // s19
  float v61; // s0
  float v62; // s23
  int v63; // r8
  int Height; // r9
  int v65; // r10
  int v66; // r6
  float v67; // s21
  float v68; // s23
  int v69; // s0
  float v70; // s2
  float *v71; // r0
  float v72; // s2
  float v73; // s6
  int v74; // r0
  float v75; // s23
  int v76; // r8
  int v77; // r9
  int v78; // r10
  int v79; // r6
  float v80; // s21
  float v81; // s23
  int v82; // s0
  float v83; // s2
  float *v84; // r0
  float v85; // s2
  float v86; // s6
  float v87; // s25
  float *v88; // r5
  float v89; // s0
  float *v90; // r0
  int v91; // r9
  int v92; // r10
  int v93; // r6
  float v94; // s21
  float v95; // s23
  float v96; // s2
  float *v97; // r0
  float v98; // s2
  float v99; // s0
  float *v100; // r0
  float v101; // s25
  float v102; // s25
  float v103; // s0
  int v104; // r8
  int v105; // r9
  int v106; // r10
  int v107; // r11
  float v108; // s21
  float v109; // s23
  float v110; // s2
  float v111; // s0
  float v112; // s2
  float v113; // s27
  float v114; // s27
  float v115; // s0
  int v116; // r8
  int v117; // r9
  int v118; // r10
  int v119; // r6
  float v120; // s21
  float v121; // s23
  float v122; // s2
  float v123; // s0
  float v124; // s2
  float v125; // s25
  float v126; // s25
  float v127; // s0
  int v128; // r8
  int v129; // r9
  int v130; // r10
  int v131; // r6
  float v132; // s21
  float v133; // s23
  float v134; // s2
  float v135; // s0
  float v136; // s2
  float v137; // s27
  float v138; // s27
  float v139; // s0
  int v140; // r8
  int v141; // r9
  int v142; // r10
  int v143; // r6
  float v144; // s21
  float v145; // s23
  float v146; // s2
  float v147; // s0
  float v148; // s2
  float v149; // s2
  float v150; // s25
  float *v151; // r9
  float v152; // s0
  float *v153; // r0
  int v154; // r5
  int v155; // r10
  int v156; // r11
  float v157; // s21
  float v158; // s23
  float v159; // s2
  float *v160; // r0
  float v161; // s2
  float v162; // s0
  float *v163; // r0
  float v164; // s25
  float *v165; // r11
  float v166; // s0
  float *v167; // r0
  int v168; // r10
  int v169; // r6
  float v170; // s21
  float v171; // s23
  float v172; // s2
  float *v173; // r0
  float v174; // s2
  float v175; // s25
  float v176; // s25
  float v177; // s0
  int v178; // r8
  int v179; // r9
  int v180; // r10
  int v181; // r6
  float v182; // s21
  float v183; // s23
  float v184; // s2
  float v185; // s0
  float v186; // s2
  float v187; // s27
  float v188; // s27
  float v189; // s0
  int v190; // r8
  int v191; // r9
  int v192; // r10
  int v193; // r6
  float v194; // s21
  float v195; // s23
  float v196; // s2
  float v197; // s0
  float v198; // s2
  float v199; // s25
  float v200; // s25
  float v201; // s0
  int v202; // r8
  int v203; // r9
  int v204; // r10
  int v205; // r6
  float v206; // s21
  float v207; // s23
  float v208; // s2
  float v209; // s0
  float v210; // s2
  float v211; // s27
  float v212; // s0
  int v213; // r8
  int v214; // r9
  int v215; // r10
  int v216; // r6
  float v217; // s21
  float v218; // s23
  float v219; // s2
  float v220; // s0
  float v221; // s2
  float v222; // s2
  int v223; // r8
  int v224; // r6
  float v225; // s19
  float v226; // s21
  float v227; // s2
  float v228; // s2
  int v229; // r5
  float v230; // s30
  float v231; // s17
  int v232; // lr
  float v233; // s4
  float v234; // s20
  float v235; // s26
  int v236; // r2
  float32x2_t v237; // d0
  float32x2_t v238; // d2
  float32x2_t v239; // d1
  float32x2_t v240; // d16
  float v241; // s24
  float v242; // s0
  float32x2_t v243; // d2
  char *v244; // r3
  bool v245; // zf
  float v246; // s6
  float v247; // s10
  float v248; // s8
  float v249; // s12
  float v250; // s6
  float v251; // s10
  float *v252; // r0
  float v253; // s17
  float v254; // s0
  float v255; // s2
  float v256; // s2
  int v257; // r1
  int v258; // r9
  int v259; // r5
  int v260; // r8
  int v261; // r3
  int v262; // r2
  float v263; // s12
  float32x2_t v264; // d0
  float32x2_t v265; // d16
  float v266; // s0
  float32x2_t v267; // d17
  float v268; // s4
  char *v269; // r5
  bool v270; // zf
  float v271; // s6
  float v272; // s10
  float v273; // s8
  float v274; // s12
  float v275; // s6
  float v276; // s10
  int v277; // r0
  char *v278; // r0
  float v279; // s22
  int v280; // r5
  float *v281; // r0
  float v282; // s24
  float v283; // s26
  float v284; // s28
  float v285; // s30
  int v286; // r1
  int v287; // r0
  float *v288; // r3
  float32x2_t v289; // d3
  float32x2_t v290; // d16
  float v291; // s8
  float32x2_t v292; // d18
  char *v293; // r6
  bool v294; // zf
  float v295; // s12
  float v296; // s14
  float v297; // s14
  bool v298; // fnf
  float *v299; // r0
  float v300; // s28
  float v301; // s26
  float v302; // s30
  float v303; // r2
  float v304; // r3
  float *v305; // r0
  float v306; // s2
  int v307; // r2
  float v308; // s12
  float v309; // s6
  float v310; // s8
  float v311; // s17
  int v312; // r5
  float *v313; // r0
  float v314; // s19
  float v315; // s18
  float v316; // s20
  float v317; // s21
  int v318; // r10
  float v319; // s22
  int v320; // r1
  int v321; // r0
  float *v322; // r3
  float v323; // s18
  float v324; // s26
  float32x2_t v325; // d16
  float v326; // s0
  float v327; // s4
  float32x2_t v328; // d18
  float v329; // s2
  float32x2_t v330; // d3
  char *v331; // r6
  bool v332; // zf
  float v333; // s8
  float v334; // s12
  float v335; // s10
  float v336; // s14
  float v337; // s8
  float v338; // s12
  float *v339; // r0
  int v340; // r8
  float v341; // s21
  float v342; // s0
  float v343; // s2
  float v344; // s2
  float v345; // s23
  int v346; // r5
  int v347; // r6
  int v348; // r2
  float *v349; // r1
  float32x2_t v350; // d1
  float32x2_t v351; // d0
  float32x2_t v352; // d16
  float v353; // s0
  float32x2_t v354; // d18
  float v355; // s6
  float v356; // s2
  char *v357; // r3
  bool v358; // zf
  float v359; // s8
  float v360; // s12
  float v361; // s10
  float v362; // s10
  bool v363; // fnf
  float *v364; // r0
  int v365; // r0
  int v366; // r2
  int v367; // r1
  float32x2_t *v368; // r2
  bool v369; // zf
  float32x2_t *v370; // r2
  float32x2_t v371; // d2
  float32x2_t v372; // d3
  int v373; // r2
  float32x2_t v374; // d17
  float v375; // s8
  float v376; // s6
  float32x2_t v377; // d17
  float v378; // s4
  float32x2_t *v379; // r3
  bool v380; // zf
  float32x2_t v381; // d4
  float32x2_t v382; // d5
  float32x2_t v383; // d18
  unsigned __int64 v384; // d5
  float v385; // s10
  bool v386; // fnf
  int v387; // r2
  int v388; // r0
  int v389; // r1
  float32x2_t *v390; // r2
  float32x2_t *v391; // r2
  float32x2_t v392; // d2
  float32x2_t v393; // d3
  int v394; // r2
  float32x2_t v395; // d17
  float v396; // s8
  float v397; // s6
  float32x2_t v398; // d17
  float v399; // s4
  float32x2_t *v400; // r3
  float32x2_t v401; // d4
  float32x2_t v402; // d5
  float32x2_t v403; // d18
  unsigned __int64 v404; // d5
  float v405; // s10
  bool v406; // fnf
  void *v407; // r0
  int v408; // r0
  int result; // r0
  CAdjustableHUD *v410; // r0
  __int64 v411; // d16
  __int64 v412; // d17
  __int64 v413; // d18
  __int64 v414; // d19
  __int64 v415; // d20
  __int64 v416; // d21
  __int64 v417; // d22
  __int64 v418; // d23
  __int64 v419; // d24
  __int64 v420; // d25
  __int64 v421; // d26
  __int64 v422; // d27
  __int64 v423; // d28
  __int64 v424; // d29
  __int64 v425; // d31
  __int64 v426; // d17
  __int64 v427; // d17
  __int64 v428; // d17
  __int64 v429; // d17
  __int64 v430; // d17
  __int64 v431; // d17
  __int64 v432; // d17
  __int64 v433; // d17
  __int64 v434; // d17
  __int64 v435; // d17
  __int64 v436; // d17
  int v437; // [sp+Ch] [bp-84h]
  float *v438; // [sp+10h] [bp-80h]
  int v439; // [sp+10h] [bp-80h]
  float *v440; // [sp+14h] [bp-7Ch]
  int v441; // [sp+14h] [bp-7Ch]
  int v442; // [sp+14h] [bp-7Ch]
  int v443; // [sp+18h] [bp-78h] BYREF
  int v444; // [sp+1Ch] [bp-74h] BYREF
  int v445; // [sp+20h] [bp-70h] BYREF
  float v446; // [sp+24h] [bp-6Ch] BYREF
  float v447; // [sp+28h] [bp-68h] BYREF
  _DWORD v448[25]; // [sp+2Ch] [bp-64h] BYREF

  CAdjustableHUD::EnableButtons(this);
  CAdjustableHUD::SetTextures(this);
  if ( CTouchInterface::IsTouchDown((CTouchInterface *)lastDevice, v13) != 1 )
  {
    v18 = *((_DWORD *)this + 25);
    if ( v18 == 2 )
    {
      if ( CWidget::IsInsideRect(
             *((_DWORD *)this + 298),
             *((_DWORD *)this + 299),
             *((_DWORD *)this + 13),
             *((_DWORD *)this + 14),
             *((_DWORD *)this + 15),
             *((_DWORD *)this + 16)) == 1 )
      {
LABEL_12:
        *((_BYTE *)this + 1174) = 1;
        goto LABEL_13;
      }
      v18 = *((_DWORD *)this + 25);
    }
    if ( v18 == 3
      && CWidget::IsInsideRect(
           *((_DWORD *)this + 298),
           *((_DWORD *)this + 299),
           *((_DWORD *)this + 9),
           *((_DWORD *)this + 10),
           *((_DWORD *)this + 11),
           *((_DWORD *)this + 12))
      || CHID::IsReleased(65) == 1 )
    {
      v19 = *((_QWORD *)this + 110);
      v20 = *((_QWORD *)this + 111);
      v21 = *((_QWORD *)this + 112);
      v22 = *((_QWORD *)this + 113);
      v23 = *((_QWORD *)this + 114);
      v24 = *((_QWORD *)this + 115);
      v25 = *((_QWORD *)this + 116);
      v26 = *((_QWORD *)this + 117);
      v27 = *((_QWORD *)this + 118);
      v28 = *((_QWORD *)this + 119);
      v29 = *((_QWORD *)this + 120);
      v30 = *((_QWORD *)this + 121);
      v31 = *((_QWORD *)this + 122);
      v32 = *((_QWORD *)this + 123);
      v33 = *((_QWORD *)this + 109);
      *((_QWORD *)this + 14) = *((_QWORD *)this + 108);
      *((_QWORD *)this + 15) = v33;
      *((_QWORD *)this + 19) = v19;
      *((_QWORD *)this + 20) = v20;
      *((_QWORD *)this + 24) = v21;
      *((_QWORD *)this + 25) = v22;
      *((_QWORD *)this + 29) = v23;
      *((_QWORD *)this + 30) = v24;
      *((_QWORD *)this + 34) = v25;
      *((_QWORD *)this + 35) = v26;
      *((_QWORD *)this + 39) = v27;
      *((_QWORD *)this + 40) = v28;
      *((_QWORD *)this + 44) = v29;
      *((_QWORD *)this + 45) = v30;
      *((_QWORD *)this + 49) = v31;
      *((_QWORD *)this + 50) = v32;
      v34 = *((_QWORD *)this + 125);
      *((_QWORD *)this + 54) = *((_QWORD *)this + 124);
      *((_QWORD *)this + 55) = v34;
      v35 = *((_QWORD *)this + 127);
      *((_QWORD *)this + 59) = *((_QWORD *)this + 126);
      *((_QWORD *)this + 60) = v35;
      v36 = *((_QWORD *)this + 129);
      *((_QWORD *)this + 64) = *((_QWORD *)this + 128);
      *((_QWORD *)this + 65) = v36;
      v37 = *((_QWORD *)this + 131);
      *((_QWORD *)this + 69) = *((_QWORD *)this + 130);
      *((_QWORD *)this + 70) = v37;
      v38 = *((_QWORD *)this + 133);
      *((_QWORD *)this + 74) = *((_QWORD *)this + 132);
      *((_QWORD *)this + 75) = v38;
      v39 = *((_QWORD *)this + 135);
      *((_QWORD *)this + 79) = *((_QWORD *)this + 134);
      *((_QWORD *)this + 80) = v39;
      v40 = *((_QWORD *)this + 137);
      *((_QWORD *)this + 84) = *((_QWORD *)this + 136);
      *((_QWORD *)this + 85) = v40;
      v41 = *((_QWORD *)this + 139);
      *((_QWORD *)this + 89) = *((_QWORD *)this + 138);
      *((_QWORD *)this + 90) = v41;
      v42 = *((_QWORD *)this + 141);
      *((_QWORD *)this + 94) = *((_QWORD *)this + 140);
      *((_QWORD *)this + 95) = v42;
      v43 = *((_QWORD *)this + 143);
      *((_QWORD *)this + 99) = *((_QWORD *)this + 142);
      *((_QWORD *)this + 100) = v43;
      v44 = *((_QWORD *)this + 145);
      *((_QWORD *)this + 104) = *((_QWORD *)this + 144);
      *((_QWORD *)this + 105) = v44;
      goto LABEL_12;
    }
    v46 = *((_DWORD *)this + 25);
    if ( v46 == 4 )
    {
      if ( CWidget::IsInsideRect(
             *((_DWORD *)this + 298),
             *((_DWORD *)this + 299),
             *((_DWORD *)this + 17),
             *((_DWORD *)this + 18),
             *((_DWORD *)this + 19),
             *((_DWORD *)this + 20)) == 1 )
      {
        CAdjustableHUD::RestoreDefaults(this);
        PlaySelectSound();
        goto LABEL_13;
      }
      v46 = *((_DWORD *)this + 25);
    }
    if ( !v46 )
    {
      if ( CWidget::IsInsideRect(
             *((_DWORD *)this + 298),
             *((_DWORD *)this + 299),
             *((_DWORD *)this + 1),
             *((_DWORD *)this + 2),
             *((_DWORD *)this + 3),
             *((_DWORD *)this + 4)) )
      {
        if ( *(_DWORD *)this == 1 )
          goto LABEL_13;
        PlayNavSound();
        v74 = 1;
        goto LABEL_111;
      }
      v46 = *((_DWORD *)this + 25);
    }
    if ( v46 != 1
      || CWidget::IsInsideRect(
           *((_DWORD *)this + 298),
           *((_DWORD *)this + 299),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6),
           *((_DWORD *)this + 7),
           *((_DWORD *)this + 8)) != 1
      || *(_DWORD *)this == 2 )
    {
LABEL_13:
      v45 = *((_DWORD *)this + 292);
      *((_DWORD *)this + 25) = -1;
      if ( v45 == -1 || *((_BYTE *)this + 1172) )
        goto LABEL_278;
      if ( byte_6DFE50 == 1 )
      {
        byte_6DFE50 = 0;
LABEL_278:
        *((_DWORD *)this + 292) = -1;
        goto LABEL_279;
      }
      v47 = (float *)((char *)this + 40 * v45);
      v48 = v47[28];
      v49 = v47[29];
      v50 = v47[30];
      v51.n64_f32[0] = v47[31];
      v52 = (float)dword_9FC900;
      Width = (float)(unsigned int)OS_ScreenGetWidth();
      v54 = 0.0;
      v55 = 0.0;
      if ( (float)(Width / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v55 = 30.0;
      v56 = OS_SystemForm();
      v57 = (float)(unsigned int)OS_ScreenGetWidth();
      v58 = 1.0;
      v59 = (float)(v57 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
      v60 = (float)(fabsf(v50 - v48) / (float)((float)(v52 - v55) / 640.0)) * 0.5;
      v61 = 1.0;
      if ( !v59 )
        v61 = 0.85;
      if ( v56 == 1 )
      {
        v62 = 999.9;
        if ( fabsf(v60 + (float)(v61 * -42.0)) >= 999.9 )
        {
          v54 = 0.0;
        }
        else
        {
          v63 = OS_ScreenGetWidth();
          Height = OS_ScreenGetHeight();
          v65 = OS_ScreenGetWidth();
          v66 = OS_ScreenGetHeight();
          v67 = (float)dword_9FC900;
          v68 = (float)(unsigned int)OS_ScreenGetWidth();
          v69 = OS_ScreenGetHeight();
          v70 = 0.0;
          v71 = (float *)&unk_283188;
          if ( (float)(v68 / (float)(unsigned int)v69) > 1.9 )
            v70 = 30.0;
          v72 = (float)(v67 - v70) / 640.0;
          if ( (float)((float)(unsigned int)v63 / (float)(unsigned int)Height) > 1.9 )
            v71 = (float *)&loc_28318C;
          v73 = 11.5;
          v62 = fabsf(v60 - *v71);
          if ( (float)((float)(unsigned int)v65 / (float)(unsigned int)v66) > 1.9 )
            v73 = 9.775;
          v54 = v73 * v72;
        }
        v150 = (float)(unsigned int)OS_ScreenGetWidth();
        v151 = (float *)&unk_283194;
        v152 = (float)(unsigned int)OS_ScreenGetHeight();
        v153 = (float *)&unk_283194;
        if ( (float)(v150 / v152) > 1.9 )
          v153 = (float *)&loc_283198;
        if ( fabsf(v60 - *v153) < v62 )
        {
          v442 = OS_ScreenGetWidth();
          v154 = OS_ScreenGetHeight();
          v155 = OS_ScreenGetWidth();
          v156 = OS_ScreenGetHeight();
          v157 = (float)dword_9FC900;
          v158 = (float)(unsigned int)OS_ScreenGetWidth();
          v159 = 0.0;
          if ( (float)(v158 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v159 = 30.0;
          v160 = (float *)&unk_283194;
          v161 = (float)(v157 - v159) / 640.0;
          if ( (float)((float)(unsigned int)v442 / (float)(unsigned int)v154) > 1.9 )
            v160 = (float *)&loc_283198;
          v162 = *v160;
          v163 = (float *)&unk_283188;
          v62 = fabsf(v60 - v162);
          if ( (float)((float)(unsigned int)v155 / (float)(unsigned int)v156) > 1.9 )
            v163 = (float *)&loc_28318C;
          v54 = *v163 * v161;
        }
        v164 = (float)(unsigned int)OS_ScreenGetWidth();
        v165 = (float *)&loc_28319C;
        v166 = (float)(unsigned int)OS_ScreenGetHeight();
        v167 = (float *)&loc_28319C;
        if ( (float)(v164 / v166) > 1.9 )
          v167 = (float *)&loc_2831A0;
        if ( fabsf(v60 - *v167) < v62 )
        {
          v439 = OS_ScreenGetWidth();
          v437 = OS_ScreenGetHeight();
          v168 = OS_ScreenGetWidth();
          v169 = OS_ScreenGetHeight();
          v170 = (float)dword_9FC900;
          v171 = (float)(unsigned int)OS_ScreenGetWidth();
          v172 = 0.0;
          if ( (float)(v171 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v172 = 30.0;
          v173 = (float *)&loc_28319C;
          v174 = (float)(v170 - v172) / 640.0;
          if ( (float)((float)(unsigned int)v439 / (float)(unsigned int)v437) > 1.9 )
            v173 = (float *)&loc_2831A0;
          v62 = fabsf(v60 - *v173);
          if ( (float)((float)(unsigned int)v168 / (float)(unsigned int)v169) > 1.9 )
            v151 = (float *)&loc_283198;
          v54 = *v151 * v174;
        }
        v175 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v175 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v176 = 29.0;
        v177 = 29.0;
        if ( !v59 )
          v177 = 24.65;
        if ( fabsf(v60 - v177) < v62 )
        {
          v178 = OS_ScreenGetWidth();
          v179 = OS_ScreenGetHeight();
          v180 = OS_ScreenGetWidth();
          v181 = OS_ScreenGetHeight();
          v182 = (float)dword_9FC900;
          v183 = (float)(unsigned int)OS_ScreenGetWidth();
          v184 = 0.0;
          if ( (float)(v183 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v184 = 30.0;
          v185 = 29.0;
          v186 = (float)(v182 - v184) / 640.0;
          if ( (float)((float)(unsigned int)v178 / (float)(unsigned int)v179) > 1.9 )
            v185 = 24.65;
          v62 = fabsf(v60 - v185);
          if ( (float)((float)(unsigned int)v180 / (float)(unsigned int)v181) > 1.9 )
            v165 = (float *)&loc_2831A0;
          v54 = *v165 * v186;
        }
        v187 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v187 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v188 = 24.0;
        v189 = 24.0;
        if ( !v59 )
          v189 = 20.4;
        if ( fabsf(v60 - v189) < v62 )
        {
          v190 = OS_ScreenGetWidth();
          v191 = OS_ScreenGetHeight();
          v192 = OS_ScreenGetWidth();
          v193 = OS_ScreenGetHeight();
          v194 = (float)dword_9FC900;
          v195 = (float)(unsigned int)OS_ScreenGetWidth();
          v196 = 0.0;
          if ( (float)(v195 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v196 = 30.0;
          v197 = 24.0;
          v198 = (float)(v194 - v196) / 640.0;
          if ( (float)((float)(unsigned int)v190 / (float)(unsigned int)v191) > 1.9 )
            v197 = 20.4;
          v62 = fabsf(v60 - v197);
          if ( (float)((float)(unsigned int)v192 / (float)(unsigned int)v193) > 1.9 )
            v176 = 24.65;
          v54 = v176 * v198;
        }
        v199 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v199 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v200 = 17.0;
        v201 = 17.0;
        if ( !v59 )
          v201 = 14.45;
        if ( fabsf(v60 - v201) < v62 )
        {
          v202 = OS_ScreenGetWidth();
          v203 = OS_ScreenGetHeight();
          v204 = OS_ScreenGetWidth();
          v205 = OS_ScreenGetHeight();
          v206 = (float)dword_9FC900;
          v207 = (float)(unsigned int)OS_ScreenGetWidth();
          v208 = 0.0;
          if ( (float)(v207 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v208 = 30.0;
          v209 = 17.0;
          v210 = (float)(v206 - v208) / 640.0;
          if ( (float)((float)(unsigned int)v202 / (float)(unsigned int)v203) > 1.9 )
            v209 = 14.45;
          v62 = fabsf(v60 - v209);
          if ( (float)((float)(unsigned int)v204 / (float)(unsigned int)v205) > 1.9 )
            v188 = 20.4;
          v54 = v188 * v210;
        }
        v211 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v211 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v138 = 14.0;
        v212 = 14.0;
        if ( !v59 )
          v212 = 11.9;
        if ( fabsf(v60 - v212) < v62 )
        {
          v213 = OS_ScreenGetWidth();
          v214 = OS_ScreenGetHeight();
          v215 = OS_ScreenGetWidth();
          v216 = OS_ScreenGetHeight();
          v217 = (float)dword_9FC900;
          v218 = (float)(unsigned int)OS_ScreenGetWidth();
          v219 = 0.0;
          if ( (float)(v218 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v219 = 30.0;
          v220 = 14.0;
          v221 = (float)(v217 - v219) / 640.0;
          if ( (float)((float)(unsigned int)v213 / (float)(unsigned int)v214) > 1.9 )
            v220 = 11.9;
          v62 = fabsf(v60 - v220);
          if ( (float)((float)(unsigned int)v215 / (float)(unsigned int)v216) > 1.9 )
            v200 = 14.45;
          v54 = v200 * v221;
        }
        v51.n64_f32[1] = (float)(unsigned int)OS_ScreenGetWidth();
        v222 = 11.5;
        if ( (float)(v51.n64_f32[1] / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v222 = 9.775;
        if ( fabsf(v60 - v222) < v62 )
        {
LABEL_176:
          OS_ScreenGetWidth();
          OS_ScreenGetHeight();
          v223 = OS_ScreenGetWidth();
          v224 = OS_ScreenGetHeight();
          v225 = (float)dword_9FC900;
          v226 = (float)(unsigned int)OS_ScreenGetWidth();
          v227 = 0.0;
          if ( (float)(v226 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v227 = 30.0;
          v228 = (float)(v225 - v227) / 640.0;
          if ( (float)((float)(unsigned int)v223 / (float)(unsigned int)v224) > 1.9 )
            v138 = 11.9;
          v54 = v138 * v228;
        }
      }
      else
      {
        v75 = 999.9;
        if ( fabsf(v60 + (float)(v61 * -36.0)) < 999.9 )
        {
          v76 = OS_ScreenGetWidth();
          v77 = OS_ScreenGetHeight();
          v78 = OS_ScreenGetWidth();
          v79 = OS_ScreenGetHeight();
          v80 = (float)dword_9FC900;
          v81 = (float)(unsigned int)OS_ScreenGetWidth();
          v82 = OS_ScreenGetHeight();
          v83 = 0.0;
          v84 = (float *)&unk_283194;
          if ( (float)(v81 / (float)(unsigned int)v82) > 1.9 )
            v83 = 30.0;
          v85 = (float)(v80 - v83) / 640.0;
          if ( (float)((float)(unsigned int)v76 / (float)(unsigned int)v77) > 1.9 )
            v84 = (float *)&loc_283198;
          v86 = 11.5;
          v75 = fabsf(v60 - *v84);
          if ( (float)((float)(unsigned int)v78 / (float)(unsigned int)v79) > 1.9 )
            v86 = 9.775;
          v54 = v86 * v85;
        }
        v87 = (float)(unsigned int)OS_ScreenGetWidth();
        v88 = (float *)&loc_28319C;
        v89 = (float)(unsigned int)OS_ScreenGetHeight();
        v90 = (float *)&loc_28319C;
        if ( (float)(v87 / v89) > 1.9 )
          v90 = (float *)&loc_2831A0;
        if ( fabsf(v60 - *v90) < v75 )
        {
          v441 = OS_ScreenGetWidth();
          v91 = OS_ScreenGetHeight();
          v92 = OS_ScreenGetWidth();
          v93 = OS_ScreenGetHeight();
          v94 = (float)dword_9FC900;
          v95 = (float)(unsigned int)OS_ScreenGetWidth();
          v96 = 0.0;
          if ( (float)(v95 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v96 = 30.0;
          v97 = (float *)&loc_28319C;
          v98 = (float)(v94 - v96) / 640.0;
          if ( (float)((float)(unsigned int)v441 / (float)(unsigned int)v91) > 1.9 )
            v97 = (float *)&loc_2831A0;
          v99 = *v97;
          v100 = (float *)&unk_283194;
          v75 = fabsf(v60 - v99);
          if ( (float)((float)(unsigned int)v92 / (float)(unsigned int)v93) > 1.9 )
            v100 = (float *)&loc_283198;
          v54 = *v100 * v98;
        }
        v101 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v101 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v102 = 29.0;
        v103 = 29.0;
        if ( !v59 )
          v103 = 24.65;
        if ( fabsf(v60 - v103) < v75 )
        {
          v104 = OS_ScreenGetWidth();
          v105 = OS_ScreenGetHeight();
          v106 = OS_ScreenGetWidth();
          v107 = OS_ScreenGetHeight();
          v108 = (float)dword_9FC900;
          v109 = (float)(unsigned int)OS_ScreenGetWidth();
          v110 = 0.0;
          if ( (float)(v109 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v110 = 30.0;
          v111 = 29.0;
          v112 = (float)(v108 - v110) / 640.0;
          if ( (float)((float)(unsigned int)v104 / (float)(unsigned int)v105) > 1.9 )
            v111 = 24.65;
          v75 = fabsf(v60 - v111);
          if ( (float)((float)(unsigned int)v106 / (float)(unsigned int)v107) > 1.9 )
            v88 = (float *)&loc_2831A0;
          v54 = *v88 * v112;
        }
        v113 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v113 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v114 = 24.0;
        v115 = 24.0;
        if ( !v59 )
          v115 = 20.4;
        if ( fabsf(v60 - v115) < v75 )
        {
          v116 = OS_ScreenGetWidth();
          v117 = OS_ScreenGetHeight();
          v118 = OS_ScreenGetWidth();
          v119 = OS_ScreenGetHeight();
          v120 = (float)dword_9FC900;
          v121 = (float)(unsigned int)OS_ScreenGetWidth();
          v122 = 0.0;
          if ( (float)(v121 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v122 = 30.0;
          v123 = 24.0;
          v124 = (float)(v120 - v122) / 640.0;
          if ( (float)((float)(unsigned int)v116 / (float)(unsigned int)v117) > 1.9 )
            v123 = 20.4;
          v75 = fabsf(v60 - v123);
          if ( (float)((float)(unsigned int)v118 / (float)(unsigned int)v119) > 1.9 )
            v102 = 24.65;
          v54 = v102 * v124;
        }
        v125 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v125 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v126 = 17.0;
        v127 = 17.0;
        if ( !v59 )
          v127 = 14.45;
        if ( fabsf(v60 - v127) < v75 )
        {
          v128 = OS_ScreenGetWidth();
          v129 = OS_ScreenGetHeight();
          v130 = OS_ScreenGetWidth();
          v131 = OS_ScreenGetHeight();
          v132 = (float)dword_9FC900;
          v133 = (float)(unsigned int)OS_ScreenGetWidth();
          v134 = 0.0;
          if ( (float)(v133 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v134 = 30.0;
          v135 = 17.0;
          v136 = (float)(v132 - v134) / 640.0;
          if ( (float)((float)(unsigned int)v128 / (float)(unsigned int)v129) > 1.9 )
            v135 = 14.45;
          v75 = fabsf(v60 - v135);
          if ( (float)((float)(unsigned int)v130 / (float)(unsigned int)v131) > 1.9 )
            v114 = 20.4;
          v54 = v114 * v136;
        }
        v137 = (float)(unsigned int)OS_ScreenGetWidth();
        v59 = (float)(v137 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9;
        v138 = 14.0;
        v139 = 14.0;
        if ( !v59 )
          v139 = 11.9;
        if ( fabsf(v60 - v139) < v75 )
        {
          v140 = OS_ScreenGetWidth();
          v141 = OS_ScreenGetHeight();
          v142 = OS_ScreenGetWidth();
          v143 = OS_ScreenGetHeight();
          v144 = (float)dword_9FC900;
          v145 = (float)(unsigned int)OS_ScreenGetWidth();
          v146 = 0.0;
          if ( (float)(v145 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
            v146 = 30.0;
          v147 = 14.0;
          v148 = (float)(v144 - v146) / 640.0;
          if ( (float)((float)(unsigned int)v140 / (float)(unsigned int)v141) > 1.9 )
            v147 = 11.9;
          v75 = fabsf(v60 - v147);
          if ( (float)((float)(unsigned int)v142 / (float)(unsigned int)v143) > 1.9 )
            v126 = 14.45;
          v54 = v126 * v148;
        }
        v51.n64_f32[1] = (float)(unsigned int)OS_ScreenGetWidth();
        v149 = 11.5;
        if ( (float)(v51.n64_f32[1] / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v149 = 9.775;
        if ( fabsf(v60 - v149) < v75 )
          goto LABEL_176;
      }
      v229 = 0;
      v230 = (float)dword_9FC904;
      v231 = (float)dword_9FC900;
      v447 = 0.0;
      v448[0] = 0;
      v445 = 0;
      v446 = 0.0;
      CTouchInterface::GetWidgetPosition(112, (int)v448, (int)&v447, (int)&v446, (int)&v445);
      OS_ScreenGetWidth();
      OS_ScreenGetHeight();
      OS_ScreenGetWidth();
      OS_ScreenGetHeight();
      v232 = dword_9FC904;
      v233 = v49 + v51.n64_f32[0];
      v234 = 0.0;
      v239.n64_f32[1] = v230 - v54;
      v239.n64_f32[0] = (float)(v48 + v50) * 0.5;
      v235 = 0.0;
      v236 = *((_DWORD *)this + 292);
      v4.n64_f32[0] = v239.n64_f32[0] - v54;
      v239.n64_f32[0] = v239.n64_f32[0] + v54;
      v237.n64_f32[1] = v239.n64_f32[0] - v4.n64_f32[0];
      v5.n64_f32[0] = v54 + (float)(v231 * 0.0);
      v238.n64_f32[1] = fabsf(v239.n64_f32[0] - v4.n64_f32[0]);
      v51.n64_f32[0] = (float)(v4.n64_f32[0] + v239.n64_f32[0]) * 0.5;
      v239.n64_u32[0] = 1232348158;
      v237.n64_f32[0] = (float)(v231 - (float)(v231 * 0.0)) - v54;
      v4.n64_f32[0] = (float)(v230 - v54) + (float)(v230 * -0.067);
      v240.n64_u64[0] = vmax_f32(v51, v5).n64_u64[0];
      v5.n64_f32[0] = (float)(v230 - (float)(v230 * 0.0)) - v54;
      v7.n64_f32[0] = (float)((float)((float)(v233 * 0.5) + v54) + (float)((float)(v233 * 0.5) - v54)) * 0.5;
      v241 = v238.n64_f32[1] * 0.5;
      v238.n64_f32[0] = v54 + (float)(v446 + (float)(v447 * (float)((float)dword_9FC904 / 448.0)));
      LODWORD(v242) = vmin_f32(v240, v237).n64_u32[0];
      v243.n64_u64[0] = vmin_f32(vmax_f32(v7, v238), vmin_f32(v4, v5)).n64_u64[0];
      do
      {
        if ( v236 )
        {
          v244 = (char *)this + v229;
          v245 = *((_BYTE *)this + v229 + 141) == 0;
          if ( *((_BYTE *)this + v229 + 141) )
            v245 = (*((_DWORD *)v244 + 34) & *(_DWORD *)this) == 0;
          if ( !v245 )
          {
            v246 = *((float *)v244 + 28);
            v247 = *((float *)v244 + 30);
            v248 = (float)(*((float *)v244 + 29) + *((float *)v244 + 31)) * 0.5;
            v249 = (float)(v246 + v247) * 0.5;
            v239.n64_f32[1] = (float)(v249 - v242) * (float)(v249 - v242);
            v250 = v241 + (float)(fabsf(v247 - v246) * 0.5);
            v251 = sqrtf(v239.n64_f32[1] + (float)((float)(v248 - v243.n64_f32[0]) * (float)(v248 - v243.n64_f32[0])));
            if ( v251 >= v250 || v251 >= v239.n64_f32[0] )
            {
              v251 = v239.n64_f32[0];
              v249 = v235;
              v248 = v234;
            }
            v234 = v248;
            v235 = v249;
            v239.n64_f32[0] = v251;
          }
        }
        v229 += 40;
        --v236;
      }
      while ( v229 != 760 );
      if ( v239.n64_f32[0] == 1000000.0 )
      {
        v252 = (float *)((char *)this + 40 * *((_DWORD *)this + 292));
        v252[28] = v242 - v54;
        v252[29] = v54 + v243.n64_f32[0];
        v252[30] = v54 + v242;
        v252[31] = v243.n64_f32[0] - v54;
      }
      else
      {
        v253 = *((float *)this + 299) - v234;
        v254 = *((float *)this + 298) - v235;
        v255 = (float)(v254 * v254) + (float)(v253 * v253);
        if ( v255 > 0.0 )
        {
          v256 = 1.0 / sqrtf(v255);
          v253 = v253 * v256;
          v58 = v254 * v256;
        }
        v257 = 0;
        while ( 1 )
        {
          v258 = v257;
          v259 = dword_9FC900;
          v447 = 0.0;
          v448[0] = 0;
          v260 = v232;
          v445 = 0;
          v446 = 0.0;
          CTouchInterface::GetWidgetPosition(112, (int)v448, (int)&v447, (int)&v446, (int)&v445);
          OS_ScreenGetWidth();
          OS_ScreenGetHeight();
          OS_ScreenGetWidth();
          OS_ScreenGetHeight();
          v232 = dword_9FC904;
          v261 = 0;
          v262 = *((_DWORD *)this + 292);
          v263 = (float)v259 * 0.0;
          v264.n64_f32[1] = v446;
          v4.n64_f32[0] = (float)((float)v259 * 0.002) * (float)v258;
          v5.n64_f32[0] = (float)((float)v260 - v54) + (float)((float)v260 * -0.067);
          v243.n64_f32[0] = (float)((float)v260 - (float)((float)v260 * 0.0)) - v54;
          v264.n64_f32[0] = v54 + v263;
          v239.n64_f32[0] = (float)((float)v259 - v263) - v54;
          v265.n64_u64[0] = vmin_f32(v5, v243).n64_u64[0];
          v243.n64_f32[0] = v234 + (float)(v253 * v4.n64_f32[0]);
          v4.n64_f32[0] = v235 + (float)(v58 * v4.n64_f32[0]);
          LODWORD(v266) = vmin_f32(vmax_f32(v4, v264), v239).n64_u32[0];
          v239.n64_f32[0] = v54 + (float)(v446 + (float)(v447 * (float)((float)dword_9FC904 / 448.0)));
          v267.n64_u64[0] = vmax_f32(v243, v239).n64_u64[0];
          v268 = 1000000.0;
          v239.n64_u64[0] = vmin_f32(v267, v265).n64_u64[0];
          do
          {
            if ( v262 )
            {
              v269 = (char *)this + v261;
              v270 = *((_BYTE *)this + v261 + 141) == 0;
              if ( *((_BYTE *)this + v261 + 141) )
                v270 = (*((_DWORD *)v269 + 34) & *(_DWORD *)this) == 0;
              if ( !v270 )
              {
                v271 = *((float *)v269 + 28);
                v272 = *((float *)v269 + 30);
                v273 = (float)(*((float *)v269 + 29) + *((float *)v269 + 31)) * 0.5;
                v274 = (float)(v271 + v272) * 0.5;
                v243.n64_f32[1] = (float)(v274 - v266) * (float)(v274 - v266);
                v275 = v241 + (float)(fabsf(v272 - v271) * 0.5);
                v276 = sqrtf(v243.n64_f32[1] + (float)((float)(v273 - v239.n64_f32[0]) * (float)(v273 - v239.n64_f32[0])));
                if ( v276 >= v275 || v276 >= v268 )
                {
                  v276 = v268;
                  v274 = v235;
                  v273 = v234;
                }
                v234 = v273;
                v235 = v274;
                v268 = v276;
              }
            }
            v261 += 40;
            --v262;
          }
          while ( v261 != 760 );
          if ( v268 == 1000000.0 )
            break;
          v257 = v258 + 1;
          if ( v258 > 98 )
            goto LABEL_278;
        }
        v364 = (float *)((char *)this + 40 * *((_DWORD *)this + 292));
        v364[28] = v266 - v54;
        v364[29] = v54 + v239.n64_f32[0];
        v364[30] = v54 + v266;
        v364[31] = v239.n64_f32[0] - v54;
      }
      goto LABEL_278;
    }
    PlayNavSound();
    v74 = 2;
LABEL_111:
    *(_DWORD *)this = v74;
    goto LABEL_13;
  }
  *((_BYTE *)this + 1173) = 0;
  v444 = 0;
  v443 = 0;
  LIB_PointerGetCoordinates(lastDevice, &v444, &v443, 0);
  v14 = (float)v444;
  v15 = (float)v443;
  v440 = (float *)((char *)this + 1192);
  v16 = *((_DWORD *)this + 25) + 1;
  *((float *)this + 298) = (float)v444;
  v438 = (float *)((char *)this + 1196);
  *((float *)this + 299) = v15;
  if ( v16 )
    goto LABEL_210;
  if ( CWidget::IsInsideRect(
         SLODWORD(v14),
         SLODWORD(v15),
         *((_DWORD *)this + 13),
         *((_DWORD *)this + 14),
         *((_DWORD *)this + 15),
         *((_DWORD *)this + 16)) == 1 )
  {
    v17 = 2;
  }
  else if ( CWidget::IsInsideRect(
              *((_DWORD *)this + 298),
              *((_DWORD *)this + 299),
              *((_DWORD *)this + 9),
              *((_DWORD *)this + 10),
              *((_DWORD *)this + 11),
              *((_DWORD *)this + 12)) == 1 )
  {
    v17 = 3;
  }
  else if ( CWidget::IsInsideRect(
              *((_DWORD *)this + 298),
              *((_DWORD *)this + 299),
              *((_DWORD *)this + 17),
              *((_DWORD *)this + 18),
              *((_DWORD *)this + 19),
              *((_DWORD *)this + 20)) == 1 )
  {
    v17 = 4;
  }
  else if ( CWidget::IsInsideRect(
              *((_DWORD *)this + 298),
              *((_DWORD *)this + 299),
              *((_DWORD *)this + 1),
              *((_DWORD *)this + 2),
              *((_DWORD *)this + 3),
              *((_DWORD *)this + 4)) == 1 )
  {
    v17 = 0;
  }
  else
  {
    if ( CWidget::IsInsideRect(
           *((_DWORD *)this + 298),
           *((_DWORD *)this + 299),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6),
           *((_DWORD *)this + 7),
           *((_DWORD *)this + 8)) != 1 )
      goto LABEL_210;
    v17 = 1;
  }
  *((_DWORD *)this + 25) = v17;
LABEL_210:
  v277 = *((_DWORD *)this + 292);
  if ( v277 == -1 )
  {
    v303 = *((float *)this + 298);
    v304 = *((float *)this + 299);
    v305 = (float *)((char *)this + 112);
    *((float *)this + 296) = v303;
    *((float *)this + 297) = v304;
    v306 = v303;
    v307 = 0;
    while ( 1 )
    {
      if ( ((_DWORD)v305[6] & *(_DWORD *)this) != 0 )
      {
        v308 = v305[2];
        v309 = (float)((float)(v305[1] + v305[3]) * 0.5) - v304;
        v310 = (float)((float)(*v305 + v308) * 0.5) - v306;
        if ( sqrtf((float)(v310 * v310) + (float)(v309 * v309)) < (float)(fabsf(v308 - *v305) * 0.5) )
          break;
      }
      v305 += 10;
      v59 = v307++ < 18;
      if ( !v59 )
        goto LABEL_279;
    }
    *((_DWORD *)this + 292) = v307;
    *((_BYTE *)this + 1172) = 0;
    *((float *)this + 294) = v310;
    *((float *)this + 295) = v309;
    goto LABEL_279;
  }
  v278 = (char *)this + 40 * v277;
  v11.n64_u32[0] = *((_DWORD *)v278 + 28);
  v9.n64_u32[0] = *((_DWORD *)v278 + 29);
  v279 = *((float *)v278 + 30);
  v10.n64_u32[0] = *((_DWORD *)v278 + 31);
  if ( LIB_KeyboardPressed() || LIB_KeyboardPressed() )
  {
    byte_6DFE50 = 1;
    v279 = v279 + -1.0;
    v11.n64_f32[0] = v11.n64_f32[0] + -1.0;
  }
  if ( LIB_KeyboardPressed() || LIB_KeyboardPressed() )
  {
    byte_6DFE50 = 1;
    v279 = v279 + 1.0;
    v11.n64_f32[0] = v11.n64_f32[0] + 1.0;
  }
  if ( LIB_KeyboardPressed() || LIB_KeyboardPressed() )
  {
    byte_6DFE50 = 1;
    v10.n64_f32[0] = v10.n64_f32[0] + -1.0;
    v9.n64_f32[0] = v9.n64_f32[0] + -1.0;
  }
  if ( LIB_KeyboardPressed() || LIB_KeyboardPressed() )
  {
    byte_6DFE50 = 1;
    v10.n64_f32[0] = v10.n64_f32[0] + 1.0;
    v9.n64_f32[0] = v9.n64_f32[0] + 1.0;
    goto LABEL_223;
  }
  if ( byte_6DFE50 == 1 )
  {
LABEL_223:
    v280 = 0;
    v281 = (float *)((char *)this + 40 * *((_DWORD *)this + 292) + 104);
    v282 = (float)dword_9FC900;
    v283 = v281[2];
    v284 = v281[4];
    v285 = (float)dword_9FC904;
    v447 = 0.0;
    v448[0] = 0;
    v445 = 0;
    v446 = 0.0;
    CTouchInterface::GetWidgetPosition(112, (int)v448, (int)&v447, (int)&v446, (int)&v445);
    OS_ScreenGetWidth();
    OS_ScreenGetHeight();
    OS_ScreenGetWidth();
    OS_ScreenGetHeight();
    v3.n64_f32[1] = v10.n64_f32[0] + v9.n64_f32[0];
    v286 = *((_DWORD *)this + 292);
    v287 = 5 * v286;
    v288 = (float *)((char *)this + 40 * v286 + 104);
    v1.n64_f32[1] = v11.n64_f32[0] + v279;
    v1.n64_f32[0] = fabsf(v284 - v283) * 0.5;
    v289.n64_f32[1] = v282 - (float)(v282 * 0.0);
    v10.n64_f32[0] = (float)(v10.n64_f32[0] + v9.n64_f32[0]) * 0.5;
    v5.n64_f32[0] = (float)(v11.n64_f32[0] + v279) * 0.5;
    v2.n64_f32[1] = v285 - v1.n64_f32[0];
    v7.n64_f32[0] = (float)(v282 * 0.0) + v1.n64_f32[0];
    v9.n64_f32[0] = (float)(v285 - (float)(v285 * 0.0)) - v1.n64_f32[0];
    v11.n64_f32[0] = v289.n64_f32[1] - v1.n64_f32[0];
    v289.n64_f32[0] = v1.n64_f32[0] + (float)(v446 + (float)(v447 * (float)((float)dword_9FC904 / 448.0)));
    v3.n64_f32[0] = fabsf(v288[4] - v288[2]) * 0.5;
    v6.n64_f32[0] = (float)(v285 - v1.n64_f32[0]) + (float)(v285 * -0.067);
    v290.n64_u64[0] = vmax_f32(v5, v7).n64_u64[0];
    v291 = 1000000.0;
    v292.n64_u64[0] = vmax_f32(v10, v289).n64_u64[0];
    v4.n64_u64[0] = vmin_f32(v290, v11).n64_u64[0];
    v6.n64_u64[0] = vmin_f32(v292, vmin_f32(v6, v9)).n64_u64[0];
    do
    {
      if ( v286 )
      {
        v293 = (char *)this + v280;
        v294 = *((_BYTE *)this + v280 + 141) == 0;
        if ( *((_BYTE *)this + v280 + 141) )
          v294 = (*((_DWORD *)v293 + 34) & *(_DWORD *)this) == 0;
        if ( !v294 )
        {
          v295 = *((float *)v293 + 28);
          v1.n64_u32[1] = *((_DWORD *)v293 + 30);
          v296 = (float)((float)(*((float *)v293 + 29) + *((float *)v293 + 31)) * 0.5) - v6.n64_f32[0];
          v2.n64_f32[1] = (float)((float)((float)(v295 + v1.n64_f32[1]) * 0.5) - v4.n64_f32[0])
                        * (float)((float)((float)(v295 + v1.n64_f32[1]) * 0.5) - v4.n64_f32[0]);
          v297 = sqrtf(v2.n64_f32[1] + (float)(v296 * v296));
          v298 = v297 < v291;
          if ( v297 >= (float)(v3.n64_f32[0] + (float)(fabsf(v1.n64_f32[1] - v295) * 0.5)) )
            v297 = v291;
          if ( !v298 )
            v297 = v291;
          v291 = v297;
        }
      }
      v280 += 40;
      --v286;
    }
    while ( v280 != 760 );
    if ( v291 == 1000000.0 )
    {
      v299 = (float *)((char *)this + 8 * v287);
      v288[2] = v4.n64_f32[0] - v1.n64_f32[0];
      v299[29] = v1.n64_f32[0] + v6.n64_f32[0];
      v288[4] = v1.n64_f32[0] + v4.n64_f32[0];
      v299[31] = v6.n64_f32[0] - v1.n64_f32[0];
    }
  }
  v300 = *v440;
  v301 = *v438;
  v302 = (float)dword_9FC900;
  if ( sqrtf(
         (float)((float)(*v440 - *((float *)this + 296)) * (float)(*v440 - *((float *)this + 296)))
       + (float)((float)(*v438 - *((float *)this + 297)) * (float)(*v438 - *((float *)this + 297)))) <= (float)((float)dword_9FC900 * 0.0025) )
  {
    if ( !*((_BYTE *)this + 1172) )
      goto LABEL_279;
  }
  else
  {
    *((_BYTE *)this + 1172) = 1;
  }
  v311 = *((float *)this + 295);
  v312 = 0;
  v313 = (float *)((char *)this + 40 * *((_DWORD *)this + 292) + 104);
  v314 = *((float *)this + 294);
  v315 = v313[2];
  v316 = v313[4];
  v317 = (float)dword_9FC904;
  v447 = 0.0;
  v448[0] = 0;
  v445 = 0;
  v446 = 0.0;
  CTouchInterface::GetWidgetPosition(112, (int)v448, (int)&v447, (int)&v446, (int)&v445);
  OS_ScreenGetWidth();
  OS_ScreenGetHeight();
  OS_ScreenGetWidth();
  OS_ScreenGetHeight();
  v318 = dword_9FC904;
  v319 = 0.0;
  v320 = *((_DWORD *)this + 292);
  v321 = 5 * v320;
  v322 = (float *)((char *)this + 40 * v320 + 104);
  v323 = fabsf(v316 - v315) * 0.5;
  v1.n64_f32[0] = v300 + v314;
  v7.n64_f32[0] = v323 + (float)(v302 * 0.0);
  v4.n64_f32[0] = (float)(v317 - (float)(v317 * 0.0)) - v323;
  v8.n64_f32[0] = (float)(v302 - (float)(v302 * 0.0)) - v323;
  v5.n64_f32[0] = (float)(v317 - v323) + (float)(v317 * -0.067);
  v6.n64_f32[0] = v301 + v311;
  v324 = 0.0;
  v325.n64_u64[0] = vmax_f32(v1, v7).n64_u64[0];
  v326 = fabsf(v322[4] - v322[2]) * 0.5;
  v2.n64_f32[0] = v323 + (float)(v446 + (float)(v447 * (float)((float)dword_9FC904 / 448.0)));
  v327 = 1000000.0;
  v328.n64_u64[0] = vmax_f32(v6, v2).n64_u64[0];
  LODWORD(v329) = vmin_f32(v325, v8).n64_u32[0];
  v330.n64_u64[0] = vmin_f32(v328, vmin_f32(v5, v4)).n64_u64[0];
  do
  {
    if ( v320 )
    {
      v331 = (char *)this + v312;
      v332 = *((_BYTE *)this + v312 + 141) == 0;
      if ( *((_BYTE *)this + v312 + 141) )
        v332 = (*((_DWORD *)v331 + 34) & *(_DWORD *)this) == 0;
      if ( !v332 )
      {
        v333 = *((float *)v331 + 28);
        v334 = *((float *)v331 + 30);
        v335 = (float)(*((float *)v331 + 29) + *((float *)v331 + 31)) * 0.5;
        v336 = (float)(v333 + v334) * 0.5;
        v3.n64_f32[1] = (float)(v336 - v329) * (float)(v336 - v329);
        v337 = v326 + (float)(fabsf(v334 - v333) * 0.5);
        v338 = sqrtf(v3.n64_f32[1] + (float)((float)(v335 - v330.n64_f32[0]) * (float)(v335 - v330.n64_f32[0])));
        if ( v338 >= v337 || v338 >= v327 )
        {
          v338 = v327;
          v335 = v324;
          v336 = v319;
        }
        v319 = v336;
        v324 = v335;
        v327 = v338;
      }
    }
    v312 += 40;
    --v320;
  }
  while ( v312 != 760 );
  if ( v327 == 1000000.0 )
  {
    v339 = (float *)((char *)this + 8 * v321);
    v322[2] = v329 - v323;
    v339[29] = v323 + v330.n64_f32[0];
    v322[4] = v323 + v329;
    v339[31] = v330.n64_f32[0] - v323;
  }
  else
  {
    v340 = 0;
    while ( 1 )
    {
      v341 = (float)(*v438 + *((float *)this + 295)) - v324;
      v342 = (float)(*v440 + *((float *)this + 294)) - v319;
      v343 = (float)(v342 * v342) + (float)(v341 * v341);
      if ( v343 <= 0.0 )
      {
        v345 = 1.0;
      }
      else
      {
        v344 = 1.0 / sqrtf(v343);
        v341 = v341 * v344;
        v345 = v342 * v344;
      }
      v346 = 0;
      v347 = dword_9FC900;
      v447 = 0.0;
      v448[0] = 0;
      v445 = 0;
      v446 = 0.0;
      CTouchInterface::GetWidgetPosition(112, (int)v448, (int)&v447, (int)&v446, (int)&v445);
      OS_ScreenGetWidth();
      OS_ScreenGetHeight();
      OS_ScreenGetWidth();
      OS_ScreenGetHeight();
      v348 = *((_DWORD *)this + 292);
      v349 = (float *)((char *)this + 40 * v348);
      v350.n64_f32[1] = (float)v347 * 0.0;
      v3.n64_f32[0] = (float)((float)v347 * 0.002) * (float)v340;
      v351.n64_f32[1] = (float)v318 - v323;
      v351.n64_f32[0] = v351.n64_f32[1] + (float)((float)v318 * -0.067);
      v330.n64_f32[0] = (float)((float)v318 - (float)((float)v318 * 0.0)) - v323;
      v6.n64_f32[0] = v323 + v350.n64_f32[1];
      v350.n64_f32[0] = (float)((float)v347 - v350.n64_f32[1]) - v323;
      v8.n64_f32[0] = v319 + (float)(v345 * v3.n64_f32[0]);
      v3.n64_f32[0] = v324 + (float)(v341 * v3.n64_f32[0]);
      v352.n64_u64[0] = vmin_f32(v351, v330).n64_u64[0];
      v330.n64_f32[0] = v323 + (float)(v446 + (float)(v447 * (float)((float)dword_9FC904 / 448.0)));
      v353 = fabsf(v349[30] - v349[28]) * 0.5;
      v354.n64_u64[0] = vmax_f32(v3, v330).n64_u64[0];
      v355 = 1000000.0;
      LODWORD(v356) = vmin_f32(vmax_f32(v8, v6), v350).n64_u32[0];
      v3.n64_u64[0] = vmin_f32(v354, v352).n64_u64[0];
      do
      {
        if ( v348 )
        {
          v357 = (char *)this + v346;
          v358 = *((_BYTE *)this + v346 + 141) == 0;
          if ( *((_BYTE *)this + v346 + 141) )
            v358 = (*((_DWORD *)v357 + 34) & *(_DWORD *)this) == 0;
          if ( !v358 )
          {
            v359 = *((float *)v357 + 28);
            v360 = *((float *)v357 + 30);
            v361 = (float)((float)(*((float *)v357 + 29) + *((float *)v357 + 31)) * 0.5) - v3.n64_f32[0];
            v362 = sqrtf(
                     (float)((float)((float)((float)(v359 + v360) * 0.5) - v356)
                           * (float)((float)((float)(v359 + v360) * 0.5) - v356))
                   + (float)(v361 * v361));
            v363 = v362 < v355;
            if ( v362 >= (float)(v353 + (float)(fabsf(v360 - v359) * 0.5)) )
              v362 = v355;
            if ( !v363 )
              v362 = v355;
            v355 = v362;
          }
        }
        v346 += 40;
        --v348;
      }
      while ( v346 != 760 );
      if ( v355 == 1000000.0 )
        break;
      v59 = v340 <= 98;
      v318 = dword_9FC904;
      ++v340;
      if ( !v59 )
        goto LABEL_279;
    }
    v349[28] = v356 - v323;
    v349[29] = v323 + v3.n64_f32[0];
    v349[30] = v323 + v356;
    v349[31] = v3.n64_f32[0] - v323;
  }
LABEL_279:
  if ( *((_BYTE *)this + 1174) )
  {
    *(_DWORD *)this = 1;
    v365 = 0;
    v366 = 0;
    while ( 1 )
    {
      v367 = v366;
      *((_DWORD *)this + 292) = v366;
      v368 = (float32x2_t *)((char *)this + 40 * v366);
      v369 = v368[17].n64_u8[5] == 0;
      if ( v368[17].n64_u8[5] )
        v369 = v368[17].n64_u8[0] << 31 == 0;
      if ( !v369 )
      {
        v370 = v368 + 14;
        v371.n64_u64[0] = v370->n64_u64[0];
        v372.n64_u64[0] = v370[1].n64_u64[0];
        v373 = 0;
        v374.n64_u64[0] = vadd_f32(v371, v372).n64_u64[0];
        v375 = v372.n64_f32[0] - v371.n64_f32[0];
        v376 = 1000000.0;
        v377.n64_u64[0] = vmul_f32(v374, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
        v378 = fabsf(v375) * 0.5;
        do
        {
          if ( v365 != v373 )
          {
            v379 = (float32x2_t *)((char *)this + v373);
            v380 = *((_BYTE *)this + v373 + 141) == 0;
            if ( *((_BYTE *)this + v373 + 141) )
              v380 = v379[17].n64_u8[0] << 31 == 0;
            if ( !v380 )
            {
              v381.n64_u64[0] = v379[14].n64_u64[0];
              v382.n64_u64[0] = v379[15].n64_u64[0];
              v383.n64_u64[0] = vsub_f32(vmul_f32(vadd_f32(v381, v382), (float32x2_t)0x3F0000003F000000LL), v377).n64_u64[0];
              v381.n64_f32[0] = fabsf(v382.n64_f32[0] - v381.n64_f32[0]);
              v384 = vmul_f32(v383, v383).n64_u64[0];
              v385 = sqrtf(*(float *)&v384 + *((float *)&v384 + 1));
              v386 = v385 < v376;
              if ( v385 >= (float)(v378 + (float)(v381.n64_f32[0] * 0.5)) )
                v385 = v376;
              if ( !v386 )
                v385 = v376;
              v376 = v385;
            }
          }
          v373 += 40;
        }
        while ( v373 != 760 );
        if ( v376 != 1000000.0 )
          break;
      }
      v365 += 40;
      v366 = v367 + 1;
      if ( v367 >= 18 )
      {
        v387 = 0;
        *(_DWORD *)this = 2;
        v388 = 0;
        while ( 1 )
        {
          v389 = v387;
          *((_DWORD *)this + 292) = v387;
          v390 = (float32x2_t *)((char *)this + 40 * v387);
          if ( v390[17].n64_u8[5] )
          {
            if ( (v390[17].n64_u8[0] & 2) != 0 )
            {
              v391 = v390 + 14;
              v392.n64_u64[0] = v391->n64_u64[0];
              v393.n64_u64[0] = v391[1].n64_u64[0];
              v394 = 0;
              v395.n64_u64[0] = vadd_f32(v392, v393).n64_u64[0];
              v396 = v393.n64_f32[0] - v392.n64_f32[0];
              v397 = 1000000.0;
              v398.n64_u64[0] = vmul_f32(v395, (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
              v399 = fabsf(v396) * 0.5;
              do
              {
                if ( v388 != v394 )
                {
                  v400 = (float32x2_t *)((char *)this + v394);
                  if ( *((_BYTE *)this + v394 + 141) )
                  {
                    if ( (v400[17].n64_u8[0] & 2) != 0 )
                    {
                      v401.n64_u64[0] = v400[14].n64_u64[0];
                      v402.n64_u64[0] = v400[15].n64_u64[0];
                      v403.n64_u64[0] = vsub_f32(
                                          vmul_f32(vadd_f32(v401, v402), (float32x2_t)0x3F0000003F000000LL),
                                          v398).n64_u64[0];
                      v401.n64_f32[0] = fabsf(v402.n64_f32[0] - v401.n64_f32[0]);
                      v404 = vmul_f32(v403, v403).n64_u64[0];
                      v405 = sqrtf(*(float *)&v404 + *((float *)&v404 + 1));
                      v406 = v405 < v397;
                      if ( v405 >= (float)(v399 + (float)(v401.n64_f32[0] * 0.5)) )
                        v405 = v397;
                      if ( !v406 )
                        v405 = v397;
                      v397 = v405;
                    }
                  }
                }
                v394 += 40;
              }
              while ( v394 != 760 );
              if ( v397 != 1000000.0 )
                goto LABEL_314;
            }
          }
          v388 += 40;
          v387 = v389 + 1;
          if ( v389 >= 18 )
          {
            if ( CAdjustableHUD::m_pInstance )
            {
              CAdjustableHUD::~CAdjustableHUD((CAdjustableHUD *)CAdjustableHUD::m_pInstance);
              operator delete(v407);
              v408 = 0;
            }
            else
            {
              v410 = (CAdjustableHUD *)operator new(0x4B0u);
              CAdjustableHUD::CAdjustableHUD(v410);
            }
            CAdjustableHUD::m_pInstance = v408;
            PlayBackSound();
            goto LABEL_317;
          }
        }
      }
    }
LABEL_314:
    *((_DWORD *)this + 292) = -1;
    *(_WORD *)((char *)this + 1173) = 1;
    return PlayErrorSound();
  }
  else
  {
LABEL_317:
    result = LIB_KeyboardState();
    if ( !result )
    {
      v411 = *((_QWORD *)this + 110);
      v412 = *((_QWORD *)this + 111);
      v413 = *((_QWORD *)this + 112);
      v414 = *((_QWORD *)this + 113);
      v415 = *((_QWORD *)this + 114);
      v416 = *((_QWORD *)this + 115);
      v417 = *((_QWORD *)this + 116);
      v418 = *((_QWORD *)this + 117);
      v419 = *((_QWORD *)this + 118);
      v420 = *((_QWORD *)this + 119);
      v421 = *((_QWORD *)this + 120);
      v422 = *((_QWORD *)this + 121);
      v423 = *((_QWORD *)this + 122);
      v424 = *((_QWORD *)this + 123);
      v425 = *((_QWORD *)this + 109);
      *((_QWORD *)this + 14) = *((_QWORD *)this + 108);
      *((_QWORD *)this + 15) = v425;
      *((_QWORD *)this + 19) = v411;
      *((_QWORD *)this + 20) = v412;
      *((_QWORD *)this + 24) = v413;
      *((_QWORD *)this + 25) = v414;
      *((_QWORD *)this + 29) = v415;
      *((_QWORD *)this + 30) = v416;
      *((_QWORD *)this + 34) = v417;
      *((_QWORD *)this + 35) = v418;
      *((_QWORD *)this + 39) = v419;
      *((_QWORD *)this + 40) = v420;
      *((_QWORD *)this + 44) = v421;
      *((_QWORD *)this + 45) = v422;
      *((_QWORD *)this + 49) = v423;
      *((_QWORD *)this + 50) = v424;
      v426 = *((_QWORD *)this + 125);
      *((_QWORD *)this + 54) = *((_QWORD *)this + 124);
      *((_QWORD *)this + 55) = v426;
      v427 = *((_QWORD *)this + 127);
      *((_QWORD *)this + 59) = *((_QWORD *)this + 126);
      *((_QWORD *)this + 60) = v427;
      v428 = *((_QWORD *)this + 129);
      *((_QWORD *)this + 64) = *((_QWORD *)this + 128);
      *((_QWORD *)this + 65) = v428;
      v429 = *((_QWORD *)this + 131);
      *((_QWORD *)this + 69) = *((_QWORD *)this + 130);
      *((_QWORD *)this + 70) = v429;
      v430 = *((_QWORD *)this + 133);
      *((_QWORD *)this + 74) = *((_QWORD *)this + 132);
      *((_QWORD *)this + 75) = v430;
      v431 = *((_QWORD *)this + 135);
      *((_QWORD *)this + 79) = *((_QWORD *)this + 134);
      *((_QWORD *)this + 80) = v431;
      v432 = *((_QWORD *)this + 137);
      *((_QWORD *)this + 84) = *((_QWORD *)this + 136);
      *((_QWORD *)this + 85) = v432;
      v433 = *((_QWORD *)this + 139);
      *((_QWORD *)this + 89) = *((_QWORD *)this + 138);
      *((_QWORD *)this + 90) = v433;
      v434 = *((_QWORD *)this + 141);
      *((_QWORD *)this + 94) = *((_QWORD *)this + 140);
      *((_QWORD *)this + 95) = v434;
      v435 = *((_QWORD *)this + 143);
      *((_QWORD *)this + 99) = *((_QWORD *)this + 142);
      *((_QWORD *)this + 100) = v435;
      v436 = *((_QWORD *)this + 145);
      *((_QWORD *)this + 104) = *((_QWORD *)this + 144);
      *((_QWORD *)this + 105) = v436;
      result = 1;
      *((_BYTE *)this + 1174) = 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x284834
// Original: _ZN14CAdjustableHUDD2Ev
// Demangled: CAdjustableHUD::~CAdjustableHUD()
void __fastcall CAdjustableHUD::~CAdjustableHUD(CAdjustableHUD *this)
{
  CAdjustableHUD::SaveToDisk(this);
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 852));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 848));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 812));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 808));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 772));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 768));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 732));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 728));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 692));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 688));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 652));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 648));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 612));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 608));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 572));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 568));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 532));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 528));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 492));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 488));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 452));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 448));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 412));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 408));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 372));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 368));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 332));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 328));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 292));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 288));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 252));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 248));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 212));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 208));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 172));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 168));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 132));
  CSprite2d::~CSprite2d((CAdjustableHUD *)((char *)this + 128));
}


// ============================================================

// Address: 0x284974
// Original: _ZN14CAdjustableHUD10SaveToDiskEv
// Demangled: CAdjustableHUD::SaveToDisk(void)
int __fastcall CAdjustableHUD::SaveToDisk(CAdjustableHUD *this)
{
  CFileMgr *DefaultConfigFile; // r0
  const char *v2; // r1
  CFileMgr *v3; // r4
  char *v4; // r0
  int v5; // r3
  unsigned int v6; // r9
  int i; // r4
  _DWORD *v8; // r5
  float *v9; // r6
  float v10; // s21
  float v11; // s18
  int Width; // s22
  float Height; // s24
  float v14; // s26
  float v15; // s25
  float v16; // s28
  float v17; // s30
  float v18; // s2
  float v19; // s0
  bool v20; // fzf
  bool v21; // fnf
  float v22; // s4
  float v23; // s0
  int v24; // r9
  float v25; // s18
  float v26; // s30
  float v27; // s19
  float v28; // s22
  float v29; // s24
  float v30; // s26
  float v31; // s0
  float v32; // s27
  float v33; // s17
  float v34; // s24
  float v35; // s31
  float v36; // s26
  float v37; // s21
  float v38; // s18
  float v39; // s22
  float v40; // s28
  float v41; // s25
  float v42; // s23
  float v43; // s20
  bool v44; // cc
  float v45; // s18
  float v46; // s0
  float v47; // s0
  float v48; // s2
  int v49; // r5
  float v50; // s23
  float v51; // s22
  float v52; // s26
  float v53; // s24
  float v54; // s20
  float v55; // s28
  unsigned int v56; // r1
  float v57; // s2
  float v58; // s2
  float v59; // s28
  float v60; // s18
  float v61; // s20
  float v62; // s22
  float v63; // s0
  float v64; // s20
  float v65; // s22
  int v66; // s0
  int *v67; // r0
  int *v68; // r5
  float v69; // s30
  float v70; // s19
  float v71; // s18
  float v72; // s0
  float v73; // s18
  int v74; // s0
  int *v75; // r0
  int *v76; // r5
  float v77; // s18
  float v78; // s0
  float v79; // s18
  int v80; // s0
  int *v81; // r0
  int *v82; // r5
  float v83; // s18
  float v84; // s0
  float v85; // s18
  float v86; // s0
  float v87; // s18
  float v88; // s0
  float v89; // s18
  float v90; // s0
  float v91; // s18
  float v92; // s0
  float v93; // s18
  float v94; // s0
  float v95; // s18
  float v96; // s0
  float v97; // s18
  float v98; // s0
  float v99; // s18
  float v100; // s0
  float v101; // s18
  float v102; // s0
  float v103; // s18
  float v104; // s20
  float v105; // s22
  float v106; // s24
  float v107; // s0
  char *v108; // r0
  int v109; // r3
  const char *v110; // r1
  bool v111; // r2
  CFileMgr *v113; // [sp+20h] [bp-2A8h]
  float v115; // [sp+30h] [bp-298h] BYREF
  float v116; // [sp+34h] [bp-294h] BYREF
  float v117; // [sp+38h] [bp-290h] BYREF
  float v118; // [sp+3Ch] [bp-28Ch] BYREF
  char v119[32]; // [sp+40h] [bp-288h] BYREF
  char v120[516]; // [sp+60h] [bp-268h] BYREF
  int v121; // [sp+264h] [bp-64h]

  DefaultConfigFile = (CFileMgr *)CTouchInterface::LoadDefaultConfigFile(_stack_chk_guard);
  CFileMgr::SetDirMyDocuments(DefaultConfigFile);
  v3 = (CFileMgr *)CFileMgr::OpenFileForWriting((CFileMgr *)"Adjustable.cfg", v2);
  strcpy(
    v120,
    ";User defined touch control placement. This file contains only positions that have\n"
    "; been modified by the user and is loaded on top of the defaults file.\n");
  v4 = (char *)strlen(v120);
  v113 = v3;
  CFileMgr::Write(v3, (unsigned int)v120, v4, v5);
  v6 = (unsigned int)v119;
  for ( i = 0; i != 760; i += 40 )
  {
    v117 = 0.0;
    v118 = 0.0;
    v115 = 0.0;
    v116 = 0.0;
    v8 = (_DWORD *)v6;
    v9 = (float *)((char *)this + i);
    CTouchInterface::GetWidgetPosition(
      *(_DWORD *)((char *)this + i + 108),
      (int)&v118,
      (int)&v117,
      (int)&v116,
      (int)&v115);
    v10 = v118;
    v11 = (float)dword_9FC900;
    Width = OS_ScreenGetWidth();
    Height = (float)(unsigned int)OS_ScreenGetHeight();
    v14 = (float)dword_9FC904;
    v15 = v116;
    v16 = (float)dword_9FC900;
    v17 = (float)(unsigned int)OS_ScreenGetWidth();
    v18 = 0.0;
    v19 = v17 / (float)(unsigned int)OS_ScreenGetHeight();
    v20 = v19 == 1.9;
    v21 = v19 < 1.9;
    v22 = 0.0;
    if ( (float)((float)(unsigned int)Width / Height) > 1.9 )
      v18 = 30.0;
    v23 = v11 - v18;
    if ( !v21 && !v20 )
      v22 = 30.0;
    v24 = dword_9FC904;
    v25 = (float)(v16 - v22) / 640.0;
    if ( (float)(v16 / v14) > 1.8 )
      v25 = (float)(v25 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v26 = v115;
    v27 = v117;
    v28 = v23 / 640.0;
    v29 = (float)dword_9FC900;
    v30 = (float)(unsigned int)OS_ScreenGetWidth();
    v31 = 0.0;
    if ( (float)(v30 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
      v31 = 30.0;
    v32 = (float)v24;
    v33 = (float)(v29 - v31) / 640.0;
    if ( (float)(v29 / (float)v24) > 1.8 )
      v33 = (float)(v33 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v6 = (unsigned int)v8;
    v34 = v10 * v28;
    v35 = v118;
    v36 = v15 * v25;
    v37 = (float)dword_9FC900;
    v38 = (float)(unsigned int)OS_ScreenGetWidth();
    v39 = (float)(unsigned int)OS_ScreenGetHeight();
    v40 = (float)dword_9FC904;
    v41 = v116;
    v42 = (float)dword_9FC900;
    v43 = (float)(unsigned int)OS_ScreenGetWidth();
    v44 = (float)(v38 / v39) <= 1.9;
    v45 = 0.0;
    v46 = v43 / (float)(unsigned int)OS_ScreenGetHeight();
    if ( !v44 )
      v45 = 30.0;
    v44 = v46 <= 1.9;
    v47 = 0.0;
    if ( !v44 )
      v47 = 30.0;
    v48 = v42 / v40;
    v49 = dword_9FC904;
    v50 = (float)(v42 - v47) / 640.0;
    if ( v48 > 1.8 )
      v50 = (float)(v50 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v51 = v34 - v36;
    v52 = v115;
    v53 = v117;
    v54 = (float)dword_9FC900;
    v55 = (float)(unsigned int)OS_ScreenGetWidth();
    v57 = 0.0;
    if ( (float)(v55 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
      v57 = 30.0;
    v58 = (float)(v54 - v57) / 640.0;
    if ( (float)(v54 / (float)v49) > 1.8 )
      v58 = (float)(v58 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
    v59 = v9[28];
    if ( v51 != v59
      || (float)((float)(v27 * (float)(v32 / 448.0)) - (float)(v26 * v33)) != v9[31]
      || (float)((float)(v35 * (float)((float)(v37 - v45) / 640.0)) + (float)(v41 * v50)) != v9[30]
      || (float)((float)(v53 * (float)((float)v49 / 448.0)) + (float)(v52 * v58)) != v9[29] )
    {
      v60 = v9[30];
      v61 = (float)dword_9FC900;
      v62 = (float)(unsigned int)OS_ScreenGetWidth();
      v63 = 0.0;
      if ( (float)(v62 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v63 = 30.0;
      strcpy(v119, "ERROR");
      v64 = (float)(v61 - v63) / 640.0;
      v65 = (float)(unsigned int)OS_ScreenGetWidth();
      v66 = OS_ScreenGetHeight();
      v67 = dword_2853E0;
      v68 = &dword_2853E0[1];
      v69 = 999.9;
      v70 = (float)(fabsf(v60 - v59) / v64) * 0.5;
      if ( (float)(v65 / (float)(unsigned int)v66) > 1.9 )
        v67 = &dword_2853E0[1];
      if ( fabsf(v70 - *(float *)v67) < 999.9 )
      {
        v71 = (float)(unsigned int)OS_ScreenGetWidth();
        if ( (float)(v71 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9 )
          v68 = dword_2853E0;
        v72 = v70 - *(float *)v68;
        qmemcpy((void *)v6, "SCALE_LARGEST_PH", 16);
        *(_DWORD *)(v6 + 16) = &loc_454E4E;
        v69 = fabsf(v72);
      }
      v73 = (float)(unsigned int)OS_ScreenGetWidth();
      v74 = OS_ScreenGetHeight();
      v75 = dword_2853E8;
      v76 = &dword_2853E8[1];
      if ( (float)(v73 / (float)(unsigned int)v74) > 1.9 )
        v75 = &dword_2853E8[1];
      if ( fabsf(v70 - *(float *)v75) < v69 )
      {
        v77 = (float)(unsigned int)OS_ScreenGetWidth();
        if ( (float)(v77 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9 )
          v76 = dword_2853E8;
        v78 = v70 - *(float *)v76;
        strcpy((char *)(v6 | 6), "LARGEST");
        v69 = fabsf(v78);
        *(_QWORD *)v119 = *(_QWORD *)"SCALE_LARGEST";
      }
      v79 = (float)(unsigned int)OS_ScreenGetWidth();
      v80 = OS_ScreenGetHeight();
      v81 = dword_2853F0;
      v82 = &dword_2853F0[1];
      if ( (float)(v79 / (float)(unsigned int)v80) > 1.9 )
        v81 = &dword_2853F0[1];
      if ( fabsf(v70 - *(float *)v81) < v69 )
      {
        v83 = (float)(unsigned int)OS_ScreenGetWidth();
        if ( (float)(v83 / (float)(unsigned int)OS_ScreenGetHeight()) <= 1.9 )
          v82 = dword_2853F0;
        v84 = v70 - *(float *)v82;
        strcpy((char *)(v6 | 5), "_LARGER");
        v69 = fabsf(v84);
        *(_QWORD *)v119 = *(_QWORD *)"SCALE_LARGER";
      }
      v85 = (float)(unsigned int)OS_ScreenGetWidth();
      v86 = 29.0;
      if ( (float)(v85 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v86 = 24.65;
      if ( fabsf(v70 - v86) < v69 )
      {
        v87 = (float)(unsigned int)OS_ScreenGetWidth();
        v88 = 29.0;
        if ( (float)(v87 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v88 = 24.65;
        strcpy(v119, "SCALE_LARGE");
        v69 = fabsf(v70 - v88);
      }
      v89 = (float)(unsigned int)OS_ScreenGetWidth();
      v90 = 24.0;
      if ( (float)(v89 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v90 = 20.4;
      if ( fabsf(v70 - v90) < v69 )
      {
        v91 = (float)(unsigned int)OS_ScreenGetWidth();
        v92 = 24.0;
        if ( (float)(v91 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v92 = 20.4;
        strcpy((char *)(v6 | 5), "_MEDIUM");
        *(_QWORD *)v119 = *(_QWORD *)"SCALE_MEDIUM";
        v69 = fabsf(v70 - v92);
      }
      v93 = (float)(unsigned int)OS_ScreenGetWidth();
      v94 = 17.0;
      if ( (float)(v93 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v94 = 14.45;
      if ( fabsf(v70 - v94) < v69 )
      {
        v95 = (float)(unsigned int)OS_ScreenGetWidth();
        v96 = 17.0;
        if ( (float)(v95 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v96 = 14.45;
        strcpy(v119, "SCALE_SMALL");
        v69 = fabsf(v70 - v96);
      }
      v97 = (float)(unsigned int)OS_ScreenGetWidth();
      v98 = 14.0;
      if ( (float)(v97 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v98 = 11.9;
      if ( fabsf(v70 - v98) < v69 )
      {
        v99 = (float)(unsigned int)OS_ScreenGetWidth();
        v100 = 14.0;
        if ( (float)(v99 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
          v100 = 11.9;
        strcpy((char *)(v6 | 6), "SMALLER");
        *(_QWORD *)v119 = *(_QWORD *)"SCALE_SMALLER";
        v69 = fabsf(v70 - v100);
      }
      v101 = (float)(unsigned int)OS_ScreenGetWidth();
      v102 = 11.5;
      if ( (float)(v101 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v102 = 9.775;
      if ( fabsf(v70 - v102) < v69 )
      {
        OS_ScreenGetWidth();
        OS_ScreenGetHeight();
        strcpy((char *)(v6 | 7), "MALLEST");
        *(_QWORD *)v119 = *(_QWORD *)"SCALE_SMALLEST";
      }
      v103 = v9[30];
      v104 = v9[28];
      v105 = (float)dword_9FC900;
      v106 = (float)(unsigned int)OS_ScreenGetWidth();
      v107 = 0.0;
      if ( (float)(v106 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v107 = 30.0;
      sub_5E6BC0(
        v120,
        "PositionAndScale %d, %d, %s ; %s\n",
        (int)(float)((float)((float)(v104 + v103) * 0.5) / (float)((float)(v105 - v107) / 640.0)),
        (int)(float)((float)((float)(v9[29] + v9[31]) * 0.5) / (float)((float)dword_9FC904 / 448.0)),
        (const char *)v6,
        CTouchInterface::m_pszWidgetPositionNames[*((_DWORD *)v9 + 27)]);
      v108 = (char *)strlen(v120);
      CFileMgr::Write(v113, (unsigned int)v120, v108, v109);
    }
  }
  CFileMgr::CloseFile(v113, v56);
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v110);
  CTouchInterface::LoadFromFile((CTouchInterface *)"Adjustable.cfg", 0, v111);
  if ( CTouchInterface::m_pWidgets )
    CTouchInterface::RepositionAdjustableWidgets((CTouchInterface *)CTouchInterface::m_pWidgets);
  return _stack_chk_guard - v121;
}


// ============================================================

// Address: 0x285468
// Original: _ZN14CAdjustableHUD13EnableButtonsEv
// Demangled: CAdjustableHUD::EnableButtons(void)
_BYTE *__fastcall CAdjustableHUD::EnableButtons(_BYTE *this)
{
  bool v1; // zf
  bool v2; // zf
  bool v3; // zf
  bool v4; // zf
  bool v5; // zf
  int v6; // r2
  int v7; // r1
  bool v8; // zf
  char v9; // r12
  int v10; // r3
  int v11; // r2
  bool v12; // zf
  char v13; // lr
  int v14; // r3
  bool v15; // r1
  int v16; // r1

  this[220] = 1;
  if ( dword_6F37E8 && *(_BYTE *)(dword_6F37E8 + 78) )
    this[220] = 0;
  if ( dword_6F3818 && *(_BYTE *)(dword_6F3818 + 78) )
    this[220] = 0;
  this[260] = 1;
  if ( dword_6F37EC )
    this[260] = *(_BYTE *)(dword_6F37EC + 78) ^ 1;
  this[300] = 1;
  if ( dword_6F3808 && *(_BYTE *)(dword_6F3808 + 78) )
    this[300] = 0;
  this[340] = 1;
  v1 = dword_6F38A8 == 0;
  if ( dword_6F38A8 )
    v1 = *(_BYTE *)(dword_6F38A8 + 78) == 0;
  if ( !v1 )
    goto LABEL_31;
  v2 = dword_6F38B0 == 0;
  if ( dword_6F38B0 )
    v2 = *(_BYTE *)(dword_6F38B0 + 78) == 0;
  if ( !v2 )
    goto LABEL_31;
  v3 = dword_6F38AC == 0;
  if ( dword_6F38AC )
    v3 = *(_BYTE *)(dword_6F38AC + 78) == 0;
  if ( !v3 )
    goto LABEL_31;
  v4 = dword_6F38B4 == 0;
  if ( dword_6F38B4 )
    v4 = *(_BYTE *)(dword_6F38B4 + 78) == 0;
  if ( !v4 )
    goto LABEL_31;
  v5 = dword_6F3804 == 0;
  if ( dword_6F3804 )
    v5 = *(_BYTE *)(dword_6F3804 + 78) == 0;
  if ( !v5 )
LABEL_31:
    this[340] = 0;
  v6 = dword_6F37D4;
  v7 = dword_6F37FC;
  this[660] = 1;
  v8 = v6 == 0;
  if ( v6 )
    v8 = *(_BYTE *)(v6 + 78) == 0;
  if ( !v8 || v7 && *(_BYTE *)(v7 + 78) )
  {
    v9 = 0;
    this[660] = 0;
  }
  else
  {
    v9 = 1;
  }
  v10 = dword_6F37D8;
  v11 = dword_6F3800;
  this[700] = 1;
  v12 = v10 == 0;
  if ( v10 )
    v12 = *(_BYTE *)(v10 + 78) == 0;
  if ( !v12 || v11 && *(_BYTE *)(v11 + 78) )
  {
    v13 = 0;
    this[700] = 0;
  }
  else
  {
    v13 = 1;
  }
  v14 = dword_6E045C;
  v15 = dword_6E045C != 1;
  this[540] = dword_6E045C != 1;
  this[500] = v15;
  if ( dword_6F385C && *(_BYTE *)(dword_6F385C + 78) )
    this[500] = 0;
  if ( dword_6F3860 && *(_BYTE *)(dword_6F3860 + 78) )
    this[540] = 0;
  v16 = dword_6E051C;
  this[860] = 1;
  LOBYTE(v16) = v16 != 0;
  this[420] = v16;
  this[380] = v16;
  this[780] = v16;
  if ( dword_6F37C4 && *(_BYTE *)(dword_6F37C4 + 78) )
    this[860] = 0;
  if ( v14 != 1 )
  {
    this[540] = v13;
    this[500] = v9;
    this[660] = 1;
    this[700] = 1;
  }
  return this;
}


// ============================================================

// Address: 0x285670
// Original: _ZN14CAdjustableHUD11SetTexturesEv
// Demangled: CAdjustableHUD::SetTextures(void)
int __fastcall CAdjustableHUD::SetTextures(CAdjustableHUD *this)
{
  CTouchInterface *TextureDB; // r8
  bool v3; // zf
  char *v4; // r1
  bool v5; // zf
  CSprite2d *v6; // r0
  bool v7; // zf
  char *v8; // r1
  bool v9; // zf
  bool v10; // zf
  char *v11; // r1
  bool v12; // zf
  bool v13; // zf
  CSprite2d *v14; // r0
  bool v15; // zf
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  bool v19; // zf
  int v20; // r0
  bool v21; // zf
  char *v22; // r1
  bool v23; // zf
  bool v24; // zf
  CSprite2d *v25; // r0
  char *v26; // r1
  bool v27; // zf
  char *v28; // r1
  bool v29; // zf
  char *v30; // r1
  CSprite2d *v31; // r0
  char *v32; // r1
  TextureDatabaseRuntime *v33; // r1
  int v34; // r4
  bool v35; // zf
  bool v36; // zf

  TextureDB = (CTouchInterface *)CTouchInterface::LoadTextureDB((CTouchInterface *)&CTouchInterface::m_pWidgets);
  v3 = dword_6F3798 == 0;
  if ( dword_6F3798 )
    v3 = *(_BYTE *)(dword_6F3798 + 78) == 0;
  if ( v3 )
  {
    v5 = dword_6F37D0 == 0;
    if ( dword_6F37D0 )
      v5 = *(_BYTE *)(dword_6F37D0 + 78) == 0;
    if ( v5 )
    {
      v6 = (CAdjustableHUD *)((char *)this + 172);
      v4 = (char *)&byte_6F4CF4;
      goto LABEL_13;
    }
    v4 = *(char **)(dword_6F37D0 + 8);
  }
  else
  {
    v4 = *(char **)(dword_6F3798 + 8);
  }
  v6 = (CAdjustableHUD *)((char *)this + 172);
  if ( v4 )
    v4 += 16;
LABEL_13:
  CSprite2d::SetTexture(v6, v4);
  v7 = dword_6F3818 == 0;
  if ( dword_6F3818 )
    v7 = *(_BYTE *)(dword_6F3818 + 78) == 0;
  if ( !v7 )
  {
    v8 = *(char **)(dword_6F3818 + 8);
LABEL_21:
    if ( v8 )
      v8 += 16;
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 212), v8);
    goto LABEL_24;
  }
  v9 = dword_6F37E8 == 0;
  if ( dword_6F37E8 )
    v9 = *(_BYTE *)(dword_6F37E8 + 78) == 0;
  if ( !v9 )
  {
    v8 = *(char **)(dword_6F37E8 + 8);
    goto LABEL_21;
  }
LABEL_24:
  CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 292), byte_6F51F4);
  v10 = dword_6F3804 == 0;
  if ( dword_6F3804 )
    v10 = *(_BYTE *)(dword_6F3804 + 78) == 0;
  if ( v10 )
  {
    v12 = dword_6F38B0 == 0;
    if ( dword_6F38B0 )
      v12 = *(_BYTE *)(dword_6F38B0 + 78) == 0;
    if ( v12 )
    {
      v13 = dword_6F38B4 == 0;
      if ( dword_6F38B4 )
        v13 = *(_BYTE *)(dword_6F38B4 + 78) == 0;
      if ( v13 )
      {
        v14 = (CAdjustableHUD *)((char *)this + 332);
        v11 = (char *)&byte_6F65F4;
        goto LABEL_38;
      }
      v11 = *(char **)(dword_6F38B4 + 8);
    }
    else
    {
      v11 = *(char **)(dword_6F38B0 + 8);
    }
  }
  else
  {
    v11 = *(char **)(dword_6F3804 + 8);
  }
  v14 = (CAdjustableHUD *)((char *)this + 332);
  if ( v11 )
    v11 += 16;
LABEL_38:
  CSprite2d::SetTexture(v14, v11);
  CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 732), (char *)&dword_6F48F4);
  v15 = dword_6F380C == 0;
  if ( dword_6F380C )
    v15 = *(_BYTE *)(dword_6F380C + 78) == 0;
  if ( !v15 )
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 732), byte_6F5274);
  v16 = dword_6F37F4 == 0;
  if ( dword_6F37F4 )
    v16 = *(_BYTE *)(dword_6F37F4 + 78) == 0;
  if ( !v16 )
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 732), byte_6F4F74);
  v17 = dword_6F3844 == 0;
  if ( dword_6F3844 )
    v17 = *(_BYTE *)(dword_6F3844 + 78) == 0;
  if ( !v17 )
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 732), byte_6F5974);
  CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 452), byte_6F4574);
  v18 = dword_6F3848 == 0;
  if ( dword_6F3848 )
    v18 = *(_BYTE *)(dword_6F3848 + 78) == 0;
  if ( !v18 )
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 452), byte_6F59F4);
  v19 = dword_6F38A0 == 0;
  if ( dword_6F38A0 )
    v19 = *(_BYTE *)(dword_6F38A0 + 78) == 0;
  if ( !v19 )
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 452), byte_6F64F4);
  v20 = dword_6F38B8;
  v21 = dword_6F37CC == 0;
  if ( dword_6F37CC )
    v21 = *(_BYTE *)(dword_6F37CC + 78) == 0;
  if ( !v21 && *(_DWORD *)this == 1 )
  {
    v22 = *(char **)(dword_6F37CC + 8);
LABEL_69:
    if ( v22 )
      v22 += 16;
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 132), v22);
    goto LABEL_72;
  }
  v23 = dword_6F38B8 == 0;
  if ( dword_6F38B8 )
    v23 = *(_BYTE *)(dword_6F38B8 + 78) == 0;
  if ( !v23 && *(_DWORD *)this == 1 || (v20 = CTouchInterface::m_pWidgets) != 0 )
  {
    v22 = *(char **)(v20 + 8);
    goto LABEL_69;
  }
LABEL_72:
  v24 = dword_6F381C == 0;
  if ( dword_6F381C )
    v24 = *(_BYTE *)(dword_6F381C + 78) == 0;
  if ( v24 )
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 768), "hud_circle");
    v25 = (CAdjustableHUD *)((char *)this + 772);
    v26 = "sprint";
  }
  else
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 768), "hud_circle");
    v25 = (CAdjustableHUD *)((char *)this + 772);
    v26 = "hud_swim";
  }
  CSprite2d::SetTexture(v25, v26);
  v27 = dword_6F37FC == 0;
  if ( dword_6F37FC )
    v27 = *(_BYTE *)(dword_6F37FC + 78) == 0;
  if ( v27 )
  {
    if ( !dword_6F37D4 )
      goto LABEL_86;
    v28 = *(char **)(dword_6F37D4 + 8);
  }
  else
  {
    v28 = *(char **)(dword_6F37FC + 8);
  }
  if ( v28 )
    v28 += 16;
  CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 652), v28);
LABEL_86:
  v29 = dword_6F3800 == 0;
  if ( dword_6F3800 )
    v29 = *(_BYTE *)(dword_6F3800 + 78) == 0;
  if ( v29 )
  {
    if ( !dword_6F37D8 )
      goto LABEL_95;
    v30 = *(char **)(dword_6F37D8 + 8);
  }
  else
  {
    v30 = *(char **)(dword_6F3800 + 8);
  }
  if ( v30 )
    v30 += 16;
  CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 692), v30);
LABEL_95:
  if ( dword_6E045C == 1 )
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 492), "hud_left");
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 532), "hud_right");
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 652), "leftshoot");
    v31 = (CAdjustableHUD *)((char *)this + 692);
    v32 = "shoot";
  }
  else
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 492), "leftshoot");
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 532), "shoot");
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 652), "hud_tank_left");
    v31 = (CAdjustableHUD *)((char *)this + 692);
    v32 = "hud_tank_right";
  }
  CSprite2d::SetTexture(v31, v32);
  v33 = (TextureDatabaseRuntime *)&CTouchInterface::m_pWidgets;
  v34 = dword_6F3860;
  v35 = dword_6F385C == 0;
  if ( dword_6F385C )
    v35 = *(_BYTE *)(dword_6F385C + 78) == 0;
  if ( !v35 )
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 488), &byte_61CD7E);
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 492), "hud_plus");
  }
  v36 = v34 == 0;
  if ( v34 )
    v36 = *(_BYTE *)(v34 + 78) == 0;
  if ( !v36 )
  {
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 528), &byte_61CD7E);
    CSprite2d::SetTexture((CAdjustableHUD *)((char *)this + 532), "hud_minus");
  }
  return j_CTouchInterface::UnloadTextureDB(TextureDB, v33);
}


// ============================================================

// Address: 0x285ad4
// Original: _ZN14CAdjustableHUD26ConstrainToDraggableRegionER9CVector2Df
// Demangled: CAdjustableHUD::ConstrainToDraggableRegion(CVector2D &,float)
int __fastcall CAdjustableHUD::ConstrainToDraggableRegion(int a1, unsigned __int32 *a2, float a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  float32x2_t v5; // d2
  float32x2_t v6; // d9
  unsigned __int64 v8; // r4
  float32x2_t v9; // d0
  float v10; // s22
  int result; // r0
  int v12; // [sp+8h] [bp-38h] BYREF
  float v13; // [sp+Ch] [bp-34h] BYREF
  float v14; // [sp+10h] [bp-30h] BYREF
  _DWORD v15[11]; // [sp+14h] [bp-2Ch] BYREF

  v8 = __PAIR64__(&RsGlobal, (unsigned int)a2);
  v5.n64_u32[0] = *a2;
  v6.n64_u32[0] = a2[1];
  v4.n64_f32[0] = (float)dword_9FC900 * 0.0;
  v3.n64_f32[0] = (float)dword_9FC900 - v4.n64_f32[0];
  v4.n64_f32[0] = v4.n64_f32[0] + a3;
  v3.n64_f32[0] = v3.n64_f32[0] - a3;
  v9.n64_u64[0] = vmin_f32(vmax_f32(v5, v4), v3).n64_u64[0];
  *a2 = v9.n64_u32[0];
  v10 = (float)dword_9FC904;
  v14 = 0.0;
  v15[0] = 0;
  v12 = 0;
  v13 = 0.0;
  CTouchInterface::GetWidgetPosition(112, (int)v15, (int)&v14, (int)&v13, (int)&v12);
  OS_ScreenGetWidth();
  OS_ScreenGetHeight();
  OS_ScreenGetWidth();
  result = OS_ScreenGetHeight();
  v5.n64_f32[0] = (float)(v10 - a3) + (float)(v10 * -0.067);
  v9.n64_f32[0] = (float)(v13 + (float)(v14 * (float)((float)*(int *)(HIDWORD(v8) + 8) / 448.0))) + a3;
  v4.n64_f32[0] = (float)(v10 - (float)(v10 * 0.0)) - a3;
  *(_DWORD *)(v8 + 4) = vmin_f32(vmax_f32(v6, v9), vmin_f32(v5, v4)).n64_u32[0];
  return result;
}


// ============================================================

// Address: 0x285bb4
// Original: _ZN14CAdjustableHUD15IsValidPositionERK9CVector2DfPS0_
// Demangled: CAdjustableHUD::IsValidPosition(CVector2D const&,float,CVector2D*)
bool __fastcall CAdjustableHUD::IsValidPosition(_DWORD *a1, float *a2, float a3, float *a4)
{
  float v4; // s4
  int v5; // r4
  int v6; // r12
  float *v7; // lr
  bool v8; // zf
  float v9; // s10
  float v10; // s12
  float v11; // s6
  float v12; // s8
  float v13; // s14
  float v14; // s10

  v4 = 1000000.0;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( v6 != a1[292] )
    {
      v7 = (float *)&a1[v5];
      v8 = BYTE1(a1[v5 + 35]) == 0;
      if ( BYTE1(a1[v5 + 35]) )
        v8 = ((_DWORD)v7[34] & *a1) == 0;
      if ( !v8 )
      {
        v9 = v7[28];
        v10 = v7[30];
        v11 = (float)(v7[29] + v7[31]) * 0.5;
        v12 = (float)(v9 + v10) * 0.5;
        v13 = fabsf(v10 - v9);
        v14 = sqrtf((float)((float)(v12 - *a2) * (float)(v12 - *a2)) + (float)((float)(v11 - a2[1])
                                                                             * (float)(v11 - a2[1])));
        if ( v14 < (float)((float)(a3 * 0.5) + (float)(v13 * 0.5)) && v14 < v4 )
        {
          v4 = v14;
          if ( a4 )
          {
            *a4 = v12;
            a4[1] = v11;
            v4 = v14;
          }
        }
      }
    }
    v5 += 10;
    ++v6;
  }
  while ( v5 != 190 );
  return v4 == 1000000.0;
}


// ============================================================

// Address: 0x285ca4
// Original: _ZN14CAdjustableHUD22RestoreButtonPositionsEv
// Demangled: CAdjustableHUD::RestoreButtonPositions(void)
_QWORD *__fastcall CAdjustableHUD::RestoreButtonPositions(CAdjustableHUD *this)
{
  __int64 v1; // d16
  __int64 v2; // d17
  __int64 v3; // d18
  __int64 v4; // d19
  __int64 v5; // d20
  __int64 v6; // d21
  __int64 v7; // d22
  __int64 v8; // d23
  __int64 v9; // d24
  __int64 v10; // d25
  __int64 v11; // d27
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  __int64 v15; // d17
  __int64 v16; // d17
  __int64 v17; // d17
  __int64 v18; // d17
  __int64 v19; // d17
  __int64 v20; // d17
  __int64 v21; // d17
  __int64 v22; // d17
  __int64 v23; // d17
  _QWORD *v24; // r1
  _QWORD *result; // r0
  __int64 v26; // d17

  v1 = *((_QWORD *)this + 108);
  v2 = *((_QWORD *)this + 109);
  v3 = *((_QWORD *)this + 112);
  v4 = *((_QWORD *)this + 113);
  v5 = *((_QWORD *)this + 114);
  v6 = *((_QWORD *)this + 115);
  v7 = *((_QWORD *)this + 116);
  v8 = *((_QWORD *)this + 117);
  v9 = *((_QWORD *)this + 118);
  v10 = *((_QWORD *)this + 119);
  v11 = *((_QWORD *)this + 111);
  *((_QWORD *)this + 19) = *((_QWORD *)this + 110);
  *((_QWORD *)this + 20) = v11;
  *((_QWORD *)this + 14) = v1;
  *((_QWORD *)this + 15) = v2;
  *((_QWORD *)this + 24) = v3;
  *((_QWORD *)this + 25) = v4;
  *((_QWORD *)this + 29) = v5;
  *((_QWORD *)this + 30) = v6;
  *((_QWORD *)this + 34) = v7;
  *((_QWORD *)this + 35) = v8;
  *((_QWORD *)this + 39) = v9;
  *((_QWORD *)this + 40) = v10;
  v12 = *((_QWORD *)this + 121);
  *((_QWORD *)this + 44) = *((_QWORD *)this + 120);
  *((_QWORD *)this + 45) = v12;
  v13 = *((_QWORD *)this + 123);
  *((_QWORD *)this + 49) = *((_QWORD *)this + 122);
  *((_QWORD *)this + 50) = v13;
  v14 = *((_QWORD *)this + 125);
  *((_QWORD *)this + 54) = *((_QWORD *)this + 124);
  *((_QWORD *)this + 55) = v14;
  v15 = *((_QWORD *)this + 127);
  *((_QWORD *)this + 59) = *((_QWORD *)this + 126);
  *((_QWORD *)this + 60) = v15;
  v16 = *((_QWORD *)this + 129);
  *((_QWORD *)this + 64) = *((_QWORD *)this + 128);
  *((_QWORD *)this + 65) = v16;
  v17 = *((_QWORD *)this + 131);
  *((_QWORD *)this + 69) = *((_QWORD *)this + 130);
  *((_QWORD *)this + 70) = v17;
  v18 = *((_QWORD *)this + 133);
  *((_QWORD *)this + 74) = *((_QWORD *)this + 132);
  *((_QWORD *)this + 75) = v18;
  v19 = *((_QWORD *)this + 135);
  *((_QWORD *)this + 79) = *((_QWORD *)this + 134);
  *((_QWORD *)this + 80) = v19;
  v20 = *((_QWORD *)this + 137);
  *((_QWORD *)this + 84) = *((_QWORD *)this + 136);
  *((_QWORD *)this + 85) = v20;
  v21 = *((_QWORD *)this + 139);
  *((_QWORD *)this + 89) = *((_QWORD *)this + 138);
  *((_QWORD *)this + 90) = v21;
  v22 = *((_QWORD *)this + 141);
  *((_QWORD *)this + 94) = *((_QWORD *)this + 140);
  *((_QWORD *)this + 95) = v22;
  v23 = *((_QWORD *)this + 143);
  *((_QWORD *)this + 99) = *((_QWORD *)this + 142);
  *((_QWORD *)this + 100) = v23;
  v24 = (_QWORD *)((char *)this + 1152);
  result = (_QWORD *)((char *)this + 832);
  v26 = v24[1];
  *result = *v24;
  result[1] = v26;
  return result;
}


// ============================================================

// Address: 0x285dd8
// Original: _ZN14CAdjustableHUD15RestoreDefaultsEv
// Demangled: CAdjustableHUD::RestoreDefaults(void)
int *__fastcall CAdjustableHUD::RestoreDefaults(CAdjustableHUD *this)
{
  const char *v2; // r1
  CFileMgr *v3; // r0
  unsigned int v4; // r1
  const char *v5; // r1
  CTouchInterface *v6; // r0
  bool v7; // r2
  int v8; // r8
  int *v9; // r5
  float *v10; // r9
  int *result; // r0
  float v12; // s30
  float v13; // s17
  float Width; // s21
  float Height; // s23
  float v16; // s25
  float v17; // s19
  float v18; // s27
  float v19; // s29
  float v20; // s2
  float v21; // s4
  float v22; // s0
  int v23; // r6
  float v24; // s23
  float v25; // s21
  float v26; // s17
  float v27; // s27
  float v28; // s25
  float v29; // s29
  float v30; // s0
  float v31; // s2
  float v32; // s25
  float v33; // s23
  float v34; // s29
  float v35; // s19
  float v36; // s21
  float v37; // s27
  float v38; // s31
  float v39; // s28
  float v40; // s24
  float v41; // s30
  float v42; // s26
  float v43; // s16
  float v44; // s2
  float v45; // s0
  bool v46; // cc
  float v47; // s0
  float v48; // s2
  int v49; // r6
  float v50; // s27
  float v51; // s0
  float v52; // s25
  float v53; // s17
  float v54; // s21
  float v55; // s19
  float v56; // s16
  float v57; // s24
  float v58; // s26
  float v59; // s0
  float v60; // s2
  float v61; // [sp+18h] [bp-70h] BYREF
  float v62; // [sp+1Ch] [bp-6Ch] BYREF
  float v63; // [sp+20h] [bp-68h] BYREF
  float v64[25]; // [sp+24h] [bp-64h] BYREF

  CFileMgr::SetDirMyDocuments(this);
  v3 = (CFileMgr *)CFileMgr::OpenFileForWriting((CFileMgr *)"Adjustable.cfg", v2);
  CFileMgr::CloseFile(v3, v4);
  v6 = (CTouchInterface *)CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, v5);
  CTouchInterface::LoadDefaultConfigFile(v6);
  CTouchInterface::LoadFromFile((CTouchInterface *)"Adjustable.cfg", 0, v7);
  v8 = 0;
  v9 = &PositionIDs;
  do
  {
    v10 = (float *)((char *)this + v8);
    result = *(int **)this;
    if ( (*(_DWORD *)this & *(_DWORD *)((_BYTE *)this + v8 + 136)) != 0 )
    {
      v63 = 0.0;
      v64[0] = 0.0;
      v61 = 0.0;
      v62 = 0.0;
      CTouchInterface::GetWidgetPosition(*v9, (int)v64, (int)&v63, (int)&v62, (int)&v61);
      v12 = v64[0];
      v13 = (float)dword_9FC900;
      Width = (float)(unsigned int)OS_ScreenGetWidth();
      Height = (float)(unsigned int)OS_ScreenGetHeight();
      v16 = (float)dword_9FC904;
      v17 = v62;
      v18 = (float)dword_9FC900;
      v19 = (float)(unsigned int)OS_ScreenGetWidth();
      v20 = 0.0;
      v21 = 0.0;
      v22 = v19 / (float)(unsigned int)OS_ScreenGetHeight();
      if ( (float)(Width / Height) > 1.9 )
        v20 = 30.0;
      if ( v22 > 1.9 )
        v21 = 30.0;
      v23 = dword_9FC904;
      v24 = (float)(v18 - v21) / 640.0;
      if ( (float)(v18 / v16) > 1.8 )
        v24 = (float)(v24 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
      v25 = (float)(v13 - v20) / 640.0;
      v26 = v61;
      v27 = v63;
      v28 = (float)dword_9FC900;
      v29 = (float)(unsigned int)OS_ScreenGetWidth();
      v30 = 0.0;
      if ( (float)(v29 / (float)(unsigned int)OS_ScreenGetHeight()) > 1.9 )
        v30 = 30.0;
      v31 = v28 / (float)v23;
      v32 = (float)(v28 - v30) / 640.0;
      if ( v31 > 1.8 )
        v32 = (float)(v32 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
      v33 = v17 * v24;
      v34 = v64[0];
      v35 = v27 * (float)((float)v23 / 448.0);
      v36 = v12 * v25;
      v37 = (float)dword_9FC900;
      v38 = (float)(unsigned int)OS_ScreenGetWidth();
      v39 = (float)(unsigned int)OS_ScreenGetHeight();
      v40 = (float)dword_9FC904;
      v41 = v62;
      v42 = (float)dword_9FC900;
      v43 = (float)(unsigned int)OS_ScreenGetWidth();
      v44 = 0.0;
      v45 = v43 / (float)(unsigned int)OS_ScreenGetHeight();
      if ( (float)(v38 / v39) > 1.9 )
        v44 = 30.0;
      v46 = v45 <= 1.9;
      v47 = 0.0;
      v48 = (float)(v37 - v44) / 640.0;
      if ( !v46 )
        v47 = 30.0;
      v49 = dword_9FC904;
      v50 = (float)(v42 - v47) / 640.0;
      v51 = v26 * v32;
      v52 = v34 * v48;
      if ( (float)(v42 / v40) > 1.8 )
        v50 = (float)(v50 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
      v53 = v35 - v51;
      v54 = v36 - v33;
      v55 = v61;
      v56 = v63;
      v57 = (float)dword_9FC900;
      v58 = (float)(unsigned int)OS_ScreenGetWidth();
      result = (int *)OS_ScreenGetHeight();
      v59 = 0.0;
      if ( (float)(v58 / (float)(unsigned int)result) > 1.9 )
        v59 = 30.0;
      v60 = (float)(v57 - v59) / 640.0;
      if ( (float)(v57 / (float)v49) > 1.8 )
      {
        result = &RsGlobal;
        v60 = (float)(v60 + (float)((float)dword_9FC904 / 448.0)) * 0.5;
      }
      v10[28] = v54;
      v10[29] = (float)(v56 * (float)((float)v49 / 448.0)) + (float)(v55 * v60);
      v10[30] = v52 + (float)(v41 * v50);
      v10[31] = v53;
    }
    v8 += 40;
    ++v9;
  }
  while ( v8 != 760 );
  return result;
}


// ============================================================

// Address: 0x28619c
// Original: _ZN14CAdjustableHUD4DrawEv
// Demangled: CAdjustableHUD::Draw(void)
int __fastcall CAdjustableHUD::Draw(CAdjustableHUD *this)
{
  int v2; // r8
  int Width; // r4
  int Height; // r9
  float v5; // s22
  int v6; // r10
  int v7; // r5
  unsigned int v8; // s16
  float v9; // s24
  int v10; // r4
  int v11; // r0
  float v12; // s26
  float v13; // s17
  float v14; // s19
  float v15; // s21
  int v16; // r0
  float v17; // s2
  float v18; // s16
  bool v19; // cc
  float v20; // s6
  float v21; // s2
  float v22; // s4
  bool v23; // fzf
  bool v24; // fnf
  float v25; // s6
  float v26; // s0
  bool v27; // fzf
  bool v28; // fnf
  float v29; // s0
  float v30; // s4
  float v31; // s2
  float v32; // s6
  float v33; // s4
  float v34; // s10
  float v35; // s26
  float v36; // s30
  float v37; // s4
  float v38; // s6
  int v39; // r4
  int v40; // s25
  float v41; // s27
  float v42; // s29
  float v43; // s31
  float v44; // s28
  float v45; // s2
  float v46; // s0
  float v47; // s0
  float v48; // s2
  float v49; // s6
  int v50; // r4
  int v51; // s28
  float v52; // s19
  float v53; // s21
  float v54; // s23
  float v55; // s25
  float v56; // s2
  float v57; // s0
  float v58; // s0
  float v59; // s2
  float v60; // s6
  char *v61; // r4
  int v62; // r0
  CWidget *v63; // r0
  unsigned __int8 v64; // r2
  unsigned __int8 v65; // r1
  float v66; // r1
  unsigned __int8 v67; // r1
  signed __int8 v68; // r1
  unsigned __int8 v69; // r1
  float v70; // s26
  float v71; // r1
  CFont *v72; // r0
  unsigned __int8 v73; // r3
  CAdjustableHUD *v74; // r10
  float v75; // r0
  float v76; // r1
  float v77; // s0
  CFont *v78; // r0
  unsigned __int8 v79; // r3
  float v80; // r0
  float v81; // r1
  float v82; // s0
  CFont *v83; // r0
  unsigned __int8 v84; // r3
  float v85; // r0
  float v86; // r1
  float v87; // s0
  float v88; // s28
  float v89; // s30
  float v90; // s17
  bool v91; // r1
  float v92; // s0
  CFont *v93; // r0
  unsigned __int16 *v94; // r3
  CFont *v95; // r0
  float v96; // s28
  float v97; // s30
  float v98; // s17
  bool v99; // r1
  float v100; // s0
  CFont *v101; // r0
  unsigned __int16 *v102; // r3
  CFont *v103; // r0
  float v104; // s28
  float v105; // s30
  float v106; // s17
  bool v107; // r1
  float v108; // s0
  CFont *v109; // r0
  unsigned __int16 *v110; // r3
  CFont *v111; // r0
  float v112; // s2
  float v113; // s0
  float v114; // s4
  unsigned __int8 v115; // r1
  float v116; // s28
  float v117; // r1
  CFont *v118; // r0
  unsigned __int8 v119; // r3
  float v120; // r0
  float v121; // r1
  float v122; // s0
  CFont *v123; // r0
  _BOOL4 v124; // r1
  unsigned __int8 v125; // r3
  float v126; // r0
  float v127; // s0
  float v128; // s28
  float v129; // s30
  float v130; // s17
  float v131; // s0
  CFont *v132; // r0
  unsigned __int16 *v133; // r3
  CFont *v134; // r0
  float v135; // s28
  float v136; // s30
  float v137; // s17
  bool v138; // r1
  float v139; // s0
  CFont *v140; // r0
  unsigned __int16 *v141; // r3
  CFont *v142; // r0
  char v143; // r0
  char v144; // r0
  float32x4_t v145; // q7
  int v146; // r6
  int v147; // r11
  float32x4_t *v148; // r5
  bool v149; // zf
  float32x4_t *v150; // r9
  CAdjustableHUD *v151; // r9
  unsigned __int8 *v152; // r10
  int *v153; // r0
  __int8 *v154; // r5
  int *v155; // r0
  int result; // r0
  int v157; // r8
  int v158; // r4
  int v159; // r9
  int v160; // r10
  int v161; // r5
  unsigned int v162; // s19
  float v163; // s30
  int v164; // r4
  int v165; // r0
  float v166; // s23
  float v167; // s31
  float v168; // s24
  float v169; // s20
  float v170; // s6
  float v171; // s2
  float v172; // s0
  float v173; // s8
  float v174; // s4
  bool v175; // fzf
  bool v176; // fnf
  float v177; // s6
  float v178; // s0
  bool v179; // fzf
  bool v180; // fnf
  float v181; // s0
  float v182; // s8
  float v183; // s0
  float v184; // s0
  int v185; // r0
  unsigned __int8 v186; // r1
  float v187; // r1
  float v188; // s16
  float v189; // r1
  CFont *v190; // r0
  _BOOL4 v191; // r1
  unsigned __int8 v192; // r3
  float v193; // r0
  float v194; // s0
  float v195; // s16
  float v196; // s18
  float v197; // s0
  CFont *v198; // r0
  unsigned __int16 *v199; // r3
  CFont *v200; // r0
  float v201; // [sp+Ch] [bp-9Ch]
  CAdjustableHUD *v202; // [sp+10h] [bp-98h]
  float v203; // [sp+14h] [bp-94h]
  char v204[4]; // [sp+18h] [bp-90h] BYREF
  char v205[4]; // [sp+1Ch] [bp-8Ch] BYREF
  float32x4_t v206; // [sp+20h] [bp-88h] BYREF
  char v207[4]; // [sp+34h] [bp-74h] BYREF
  char v208[4]; // [sp+38h] [bp-70h] BYREF
  char v209[4]; // [sp+3Ch] [bp-6Ch] BYREF
  char v210[4]; // [sp+40h] [bp-68h] BYREF
  int v211; // [sp+44h] [bp-64h] BYREF

  v2 = dword_9FC900;
  Width = OS_ScreenGetWidth();
  Height = OS_ScreenGetHeight();
  v5 = (float)dword_9FC900;
  v6 = OS_ScreenGetWidth();
  v7 = OS_ScreenGetHeight();
  v8 = Width;
  v9 = (float)dword_9FC900;
  v10 = OS_ScreenGetWidth();
  v11 = OS_ScreenGetHeight();
  v12 = (float)dword_9FC904;
  v13 = (float)dword_9FC900;
  v14 = (float)(unsigned int)v11;
  v15 = (float)(unsigned int)OS_ScreenGetWidth();
  v16 = OS_ScreenGetHeight();
  v17 = (float)v8 / (float)(unsigned int)Height;
  v18 = 0.0;
  v19 = v17 <= 1.9;
  v20 = (float)(unsigned int)v10 / v14;
  v21 = 0.0;
  if ( !v19 )
    v21 = 30.0;
  v22 = 0.0;
  v23 = v20 == 1.9;
  v24 = v20 < 1.9;
  v25 = 0.0;
  v26 = v15 / (float)(unsigned int)v16;
  if ( (float)((float)(unsigned int)v6 / (float)(unsigned int)v7) > 1.9 )
    v22 = 30.0;
  v19 = v24 || v23;
  v27 = v26 == 1.9;
  v28 = v26 < 1.9;
  v29 = 0.0;
  v30 = v5 - v22;
  v31 = (float)((float)v2 - v21) / 640.0;
  if ( !v19 )
    v25 = 30.0;
  v32 = v9 - v25;
  v33 = v30 / 640.0;
  if ( !v28 && !v27 )
    v29 = 30.0;
  v34 = v12 / 448.0;
  v35 = v31 * 70.0;
  v36 = v33 * 18.0;
  v37 = (float)(v32 / 640.0) * 320.0;
  v38 = v36 + (float)((float)((float)dword_9FC904 / 448.0) * 70.0);
  *((float *)this + 1) = v37 - (float)((float)(v31 * 70.0) * 3.1);
  *((float *)this + 2) = v38;
  *((float *)this + 3) = (float)((float)((float)(v13 - v29) / 640.0) * 320.0) - (float)((float)(v31 * 70.0) * 0.1);
  *((float *)this + 4) = (float)(v34 * 70.0) - v36;
  v39 = dword_9FC900;
  v40 = OS_ScreenGetWidth();
  v41 = (float)(unsigned int)OS_ScreenGetHeight();
  v42 = (float)dword_9FC904;
  v43 = (float)dword_9FC900;
  v44 = (float)(unsigned int)OS_ScreenGetWidth();
  v45 = 0.0;
  v46 = v44 / (float)(unsigned int)OS_ScreenGetHeight();
  if ( (float)((float)(unsigned int)v40 / v41) > 1.9 )
    v45 = 30.0;
  v19 = v46 <= 1.9;
  v47 = 0.0;
  v48 = (float)v39 - v45;
  if ( !v19 )
    v47 = 30.0;
  v49 = v36 + (float)((float)((float)dword_9FC904 / 448.0) * 70.0);
  *((float *)this + 5) = (float)(v35 * 0.1) + (float)((float)(v48 / 640.0) * 320.0);
  *((float *)this + 6) = v49;
  *((float *)this + 7) = (float)(v35 * 3.1) + (float)((float)((float)(v43 - v47) / 640.0) * 320.0);
  *((float *)this + 8) = (float)((float)(v42 / 448.0) * 70.0) - v36;
  v50 = dword_9FC900;
  v51 = OS_ScreenGetWidth();
  v52 = (float)(unsigned int)OS_ScreenGetHeight();
  v53 = (float)dword_9FC904;
  v54 = (float)dword_9FC900;
  v55 = (float)(unsigned int)OS_ScreenGetWidth();
  v56 = 0.0;
  v57 = v55 / (float)(unsigned int)OS_ScreenGetHeight();
  if ( (float)((float)(unsigned int)v51 / v52) > 1.9 )
    v56 = 30.0;
  v19 = v57 <= 1.9;
  v58 = 0.0;
  v59 = (float)v50 - v56;
  if ( !v19 )
    v58 = 30.0;
  v149 = *(_DWORD *)this == 1;
  v60 = v36 + (float)((float)((float)dword_9FC904 / 448.0) * 30.0);
  *((float *)this + 17) = (float)((float)(v59 / 640.0) * 320.0) - (float)(v35 * 1.5);
  *((float *)this + 18) = v60;
  *((float *)this + 19) = (float)(v35 * 1.5) + (float)((float)((float)(v54 - v58) / 640.0) * 320.0);
  *((float *)this + 20) = (float)((float)(v53 / 448.0) * 30.0) - v36;
  if ( v149 )
    v61 = (char *)this + 4;
  else
    v61 = (char *)this + 20;
  CRGBA::CRGBA((CRGBA *)&v206, 0xF0u, 0xF0u, 0xF0u, 0x66u);
  CRGBA::CRGBA((CRGBA *)&v211, 0x99u, 0xCCu, 0x99u, 0x66u);
  CRGBA::CRGBA((CRGBA *)v210, 0x99u, 0xCCu, 0x99u, 0x32u);
  CRGBA::CRGBA((CRGBA *)v209, 0x99u, 0xCCu, 0x99u, 0x32u);
  v63 = (CWidget *)CSprite2d::DrawRect((int)v61, (int)&v206, (int)&v211, (int)v210, v62);
  CWidget::DrawTitleSafeArea(v63);
  CFont::SetBackground(0, 0, v64);
  CFont::SetOrientation(0, v65);
  CFont::SetCentreSize(COERCE_CFONT_(fabsf(*((float *)this + 3) - *((float *)this + 1)) * 0.875), v66);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v67);
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v68);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v69);
  v70 = fabsf(*((float *)this + 2) - *((float *)this + 4)) * 0.03;
  CFont::SetScale((CFont *)LODWORD(v70), v71);
  v72 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_FOT");
  v74 = this;
  if ( v72 )
  {
    v75 = COERCE_FLOAT(CFont::GetStringWidth(v72, (unsigned __int16 *)((char *)&stderr + 1), 0, v73));
    v77 = fabsf(*((float *)this + 3) - *((float *)this + 1)) * 0.875;
    if ( v75 > v77 )
    {
      v70 = v70 * (float)(v77 / v75);
      CFont::SetScale((CFont *)LODWORD(v70), v76);
    }
  }
  v78 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_VEH");
  if ( v78 )
  {
    v80 = COERCE_FLOAT(CFont::GetStringWidth(v78, (unsigned __int16 *)((char *)&stderr + 1), 0, v79));
    v82 = fabsf(*((float *)this + 7) - *((float *)this + 5)) * 0.875;
    if ( v80 > v82 )
    {
      v70 = v70 * (float)(v82 / v80);
      CFont::SetScale((CFont *)LODWORD(v70), v81);
    }
  }
  v83 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_DEF");
  if ( v83 )
  {
    v85 = COERCE_FLOAT(CFont::GetStringWidth(v83, (unsigned __int16 *)((char *)&stderr + 1), 0, v84));
    v87 = fabsf(*((float *)this + 19) - *((float *)this + 17)) * 0.875;
    if ( v85 > v87 )
      CFont::SetScale(COERCE_CFONT_(v70 * (float)(v87 / v85)), v86);
  }
  CRGBA::CRGBA((CRGBA *)v208, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CFont::SetColor();
  CRGBA::CRGBA((CRGBA *)v207, 0, 0, 0, 0xFFu);
  CFont::SetDropColor();
  v88 = *((float *)this + 1);
  v89 = *((float *)this + 3);
  v90 = *((float *)this + 2) + *((float *)this + 4);
  v92 = COERCE_FLOAT(CFont::GetHeight(0, v91)) * 0.5;
  v93 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_FOT");
  v95 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v88 + v89) * 0.5), (float)(v90 * 0.5) - v92, v93, v94);
  CFont::RenderFontBuffer(v95);
  v96 = *((float *)this + 5);
  v97 = *((float *)this + 7);
  v98 = *((float *)this + 6) + *((float *)this + 8);
  v100 = COERCE_FLOAT(CFont::GetHeight(0, v99));
  v101 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_VEH");
  v103 = (CFont *)CFont::PrintString(
                    COERCE_CFONT_((float)(v96 + v97) * 0.5),
                    (float)(v98 * 0.5) - (float)(v100 * 0.5),
                    v101,
                    v102);
  CFont::RenderFontBuffer(v103);
  v104 = *((float *)this + 17);
  v105 = *((float *)this + 19);
  v106 = *((float *)this + 18) + *((float *)this + 20);
  v108 = COERCE_FLOAT(CFont::GetHeight(0, v107));
  v109 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_DEF");
  v111 = (CFont *)CFont::PrintString(
                    COERCE_CFONT_((float)(v104 + v105) * 0.5),
                    (float)(v106 * 0.5) - (float)(v108 * 0.5),
                    v109,
                    v110);
  CFont::RenderFontBuffer(v111);
  v112 = (float)dword_9FC904;
  v113 = (float)dword_9FC900;
  *((_DWORD *)this + 9) = 0;
  *((float *)this + 10) = v112;
  v114 = v112 + (float)(v112 * -0.067);
  *((float *)this + 11) = v113 * 0.1;
  *((float *)this + 12) = v114;
  *((float *)this + 13) = v113 - (float)(v113 * 0.1);
  *((float *)this + 14) = v112;
  *((float *)this + 15) = v113;
  *((float *)this + 16) = v114;
  CFont::SetFontStyle(0, v115);
  v116 = fabsf(*((float *)this + 14) - *((float *)this + 16)) * 0.0375;
  CFont::SetScale((CFont *)LODWORD(v116), v117);
  v118 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_SAV");
  if ( v118 )
  {
    v120 = COERCE_FLOAT(CFont::GetStringWidth(v118, (unsigned __int16 *)((char *)&stderr + 1), 0, v119));
    v122 = fabsf(*((float *)this + 15) - *((float *)this + 13)) * 0.875;
    if ( v120 > v122 )
    {
      v116 = v116 * (float)(v122 / v120);
      CFont::SetScale((CFont *)LODWORD(v116), v121);
    }
  }
  v123 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_CAN");
  if ( v123 )
  {
    v126 = COERCE_FLOAT(CFont::GetStringWidth(v123, (unsigned __int16 *)((char *)&stderr + 1), 0, v125));
    v127 = fabsf(*((float *)this + 11) - *((float *)this + 9)) * 0.875;
    if ( v126 > v127 )
      CFont::SetScale(COERCE_CFONT_(v116 * (float)(v127 / v126)), *(float *)&v124);
  }
  v128 = *((float *)this + 13);
  v129 = *((float *)this + 15);
  v130 = *((float *)this + 14) + *((float *)this + 16);
  v131 = COERCE_FLOAT(CFont::GetHeight(0, v124)) * 0.5;
  v132 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_SAV");
  v134 = (CFont *)CFont::PrintString(COERCE_CFONT_((float)(v128 + v129) * 0.5), (float)(v130 * 0.5) - v131, v132, v133);
  CFont::RenderFontBuffer(v134);
  v135 = *((float *)this + 9);
  v136 = *((float *)this + 11);
  v137 = *((float *)this + 10) + *((float *)this + 12);
  v139 = COERCE_FLOAT(CFont::GetHeight(0, v138));
  v140 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_CAN");
  v142 = (CFont *)CFont::PrintString(
                    COERCE_CFONT_((float)(v135 + v136) * 0.5),
                    (float)(v137 * 0.5) - (float)(v139 * 0.5),
                    v140,
                    v141);
  CFont::RenderFontBuffer(v142);
  v143 = byte_6DFE58;
  __dmb(0xBu);
  if ( (v143 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_6DFE58) )
  {
    CRGBA::CRGBA((CRGBA *)&dword_6DFE54, 0xFFu, 0x50u, 0x50u, 0xFFu);
    j___cxa_guard_release((__guard *)&byte_6DFE58);
  }
  v144 = byte_6DFE60;
  __dmb(0xBu);
  if ( (v144 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_6DFE60) )
  {
    CRGBA::CRGBA((CRGBA *)&dword_6DFE5C, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    j___cxa_guard_release((__guard *)&byte_6DFE60);
  }
  v145.n128_u64[0] = 0x4000000040000000LL;
  v145.n128_u64[1] = 0x4000000040000000LL;
  v146 = 0;
  v147 = 0;
  v202 = v74;
  do
  {
    v148 = (float32x4_t *)((char *)v74 + v146);
    v149 = *((_BYTE *)v74 + v146 + 141) == 0;
    if ( *((_BYTE *)v74 + v146 + 141) )
      v149 = (v148[8].n128_u32[2] & *(_DWORD *)v74) == 0;
    if ( !v149 )
    {
      v150 = v148 + 7;
      v206 = vaddq_f32(v148[7], v145);
      if ( !v148[8].n128_u32[0] )
      {
        v152 = &v148[8].n128_u8[12];
        goto LABEL_55;
      }
      v151 = v74;
      CRGBA::CRGBA((CRGBA *)&v211, 0, 0, 0, 0xFFu);
      CSprite2d::Draw(&v148[8], &v206, &v211);
      v152 = (unsigned __int8 *)v74 + 40 * v147 + 140;
      if ( v148[8].n128_u8[12] )
      {
        v153 = &dword_6DFE54;
      }
      else
      {
        if ( v147 != *((_DWORD *)v151 + 292) )
        {
          CRGBA::CRGBA((CRGBA *)&v211, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
LABEL_54:
          v150 = v148 + 7;
          CSprite2d::Draw(&v148[8], &v148[7], &v211);
LABEL_55:
          CRGBA::CRGBA((CRGBA *)&v211, 0, 0, 0, 0xFFu);
          v154 = &v148[8].n128_i8[4];
          CSprite2d::Draw(v154, &v206, &v211);
          if ( *v152 )
          {
            v74 = v202;
            v155 = &dword_6DFE54;
          }
          else
          {
            v74 = v202;
            if ( v147 != *((_DWORD *)v202 + 292) )
            {
              CRGBA::CRGBA((CRGBA *)&v211, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
LABEL_60:
              CSprite2d::Draw(v154, v150, &v211);
              goto LABEL_61;
            }
            v155 = &dword_6DFE5C;
          }
          v211 = *v155;
          goto LABEL_60;
        }
        v153 = &dword_6DFE5C;
      }
      v211 = *v153;
      goto LABEL_54;
    }
LABEL_61:
    v146 += 40;
    ++v147;
  }
  while ( v146 != 760 );
  result = *((unsigned __int8 *)v74 + 1173);
  if ( *((_BYTE *)v74 + 1173) )
  {
    v157 = dword_9FC900;
    v158 = OS_ScreenGetWidth();
    v159 = OS_ScreenGetHeight();
    v203 = (float)dword_9FC904;
    v201 = (float)dword_9FC900;
    v160 = OS_ScreenGetWidth();
    v161 = OS_ScreenGetHeight();
    v162 = v158;
    v163 = (float)dword_9FC900;
    v164 = OS_ScreenGetWidth();
    v165 = OS_ScreenGetHeight();
    v166 = (float)dword_9FC904;
    v167 = (float)dword_9FC900;
    v168 = (float)(unsigned int)v165;
    v169 = (float)(unsigned int)OS_ScreenGetWidth();
    v170 = (float)(unsigned int)v164 / v168;
    v171 = 0.0;
    v172 = (float)(unsigned int)OS_ScreenGetHeight();
    v173 = (float)v157;
    if ( (float)((float)v162 / (float)(unsigned int)v159) > 1.9 )
      v171 = 30.0;
    v174 = 0.0;
    v175 = v170 == 1.9;
    v176 = v170 < 1.9;
    v177 = 0.0;
    v178 = v169 / v172;
    if ( (float)((float)(unsigned int)v160 / (float)(unsigned int)v161) > 1.9 )
      v174 = 30.0;
    v19 = v176 || v175;
    v179 = v178 == 1.9;
    v180 = v178 < 1.9;
    v181 = v173 - v171;
    v182 = v173 * 0.5;
    v183 = v181 / 640.0;
    if ( !v19 )
      v177 = 30.0;
    v184 = v182 - (float)(v183 * 120.0);
    if ( !v180 && !v179 )
      v18 = 30.0;
    *((float *)v202 + 21) = v184;
    *((float *)v202 + 22) = (float)(v166 * 0.5) + (float)((float)((float)(v167 - v18) / 640.0) * 80.0);
    *((float *)v202 + 23) = (float)(v163 * 0.5) + (float)((float)((float)(v163 - v177) / 640.0) * 120.0);
    *((float *)v202 + 24) = (float)(v203 * 0.5) - (float)((float)((float)(v201 - v174) / 640.0) * 80.0);
    CRGBA::CRGBA((CRGBA *)&v206, 0, 0, 0, 0x40u);
    CRGBA::CRGBA((CRGBA *)&v211, 0, 0, 0, 0x40u);
    CRGBA::CRGBA((CRGBA *)v210, 0, 0, 0, 0xC0u);
    CRGBA::CRGBA((CRGBA *)v209, 0, 0, 0, 0xC0u);
    CSprite2d::DrawRect((int)v202 + 84, (int)&v206, (int)&v211, (int)v210, v185);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v186);
    CFont::SetCentreSize(COERCE_CFONT_(fabsf(*((float *)v202 + 23) - *((float *)v202 + 21)) * 0.875), v187);
    CRGBA::CRGBA((CRGBA *)v205, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v204, 0, 0, 0, 0xFFu);
    CFont::SetDropColor();
    v188 = fabsf(*((float *)v202 + 22) - *((float *)v202 + 24)) * 0.00625;
    CFont::SetScale((CFont *)LODWORD(v188), v189);
    v190 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_FOT");
    if ( v190 )
    {
      v193 = COERCE_FLOAT(CFont::GetStringWidth(v190, (unsigned __int16 *)((char *)&stderr + 1), 0, v192));
      v194 = fabsf(*((float *)v202 + 23) - *((float *)v202 + 21)) * 0.875;
      if ( v193 > v194 )
        CFont::SetScale(COERCE_CFONT_(v188 * (float)(v194 / v193)), *(float *)&v191);
    }
    v195 = (float)dword_9FC900;
    v196 = (float)dword_9FC904;
    v197 = COERCE_FLOAT(CFont::GetHeight(0, v191)) * -2.5;
    v198 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"HUD_OVR");
    v200 = (CFont *)CFont::PrintString(COERCE_CFONT_(v195 * 0.5), (float)(v196 * 0.5) + v197, v198, v199);
    return CFont::RenderFontBuffer(v200);
  }
  return result;
}


// ============================================================

// Address: 0x286ecc
// Original: _ZN14CAdjustableHUD16GetTopAreaHeightEv
// Demangled: CAdjustableHUD::GetTopAreaHeight(void)
float __fastcall CAdjustableHUD::GetTopAreaHeight(CAdjustableHUD *this)
{
  int v2; // [sp+8h] [bp-18h] BYREF
  float v3; // [sp+Ch] [bp-14h] BYREF
  float v4; // [sp+10h] [bp-10h] BYREF
  int v5; // [sp+14h] [bp-Ch] BYREF

  v4 = 0.0;
  v5 = 0;
  v2 = 0;
  v3 = 0.0;
  CTouchInterface::GetWidgetPosition(112, (int)&v5, (int)&v4, (int)&v3, (int)&v2);
  OS_ScreenGetWidth();
  OS_ScreenGetHeight();
  OS_ScreenGetWidth();
  OS_ScreenGetHeight();
  return v3 + (float)(v4 * (float)((float)dword_9FC904 / 448.0));
}


// ============================================================
