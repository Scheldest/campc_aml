
// Address: 0x18a678
// Original: j__ZN10FlowScreenC2Ebb
// Demangled: FlowScreen::FlowScreen(bool,bool)
// attributes: thunk
void __fastcall FlowScreen::FlowScreen(FlowScreen *this, bool a2, bool a3)
{
  _ZN10FlowScreenC2Ebb(this, a2, a3);
}


// ============================================================

// Address: 0x18b924
// Original: j__ZN10FlowScreen6UpdateEf
// Demangled: FlowScreen::Update(float)
// attributes: thunk
int __fastcall FlowScreen::Update(FlowScreen *this, float a2)
{
  return _ZN10FlowScreen6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x199e1c
// Original: j__ZN10FlowScreenD2Ev
// Demangled: FlowScreen::~FlowScreen()
// attributes: thunk
void __fastcall FlowScreen::~FlowScreen(FlowScreen *this)
{
  _ZN10FlowScreenD2Ev(this);
}


// ============================================================

// Address: 0x1a0480
// Original: j__ZN10FlowScreen17DrawFeatheredQuadEP9CVector2DP5CRGBA
// Demangled: FlowScreen::DrawFeatheredQuad(CVector2D *,CRGBA *)
// attributes: thunk
int FlowScreen::DrawFeatheredQuad()
{
  return _ZN10FlowScreen17DrawFeatheredQuadEP9CVector2DP5CRGBA();
}


// ============================================================

// Address: 0x29b850
// Original: _ZN10FlowScreenC2Ebb
// Demangled: FlowScreen::FlowScreen(bool,bool)
void __fastcall FlowScreen::FlowScreen(FlowScreen *this, bool a2, bool a3)
{
  int Texture; // r0
  const char *v6; // r1
  char v7; // r0
  int v8; // r0
  int v9; // r0
  const char *v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  const char *v14; // r1
  int v15; // r1
  _BYTE v16[256]; // [sp+4h] [bp-114h] BYREF

  *((_BYTE *)this + 12) = a2;
  *(_DWORD *)this = &off_6625A0;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_selector", (const char *)&off_6625A0);
  ++*(_DWORD *)(Texture + 84);
  *(_DWORD *)this = &off_662610;
  *((_DWORD *)this + 1) = Texture;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 13) = a3;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  if ( Menu_IsPlayingGame(1) != 1 || HIBYTE(word_6E00C0) )
  {
    v8 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_mainpresents", v6);
    ++*(_DWORD *)(v8 + 84);
    *((_DWORD *)this + 4) = v8;
    *((_BYTE *)this + 20) = 0;
    v9 = rand();
    sub_5E6BC0(v16, "menu_main%d", v9 % 4 + 1);
    v11 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v16, v10);
    ++*(_DWORD *)(v11 + 84);
    *((_DWORD *)this + 6) = v11;
    *((_DWORD *)this + 7) = 0;
    v12 = 0;
    do
    {
      if ( v12 )
      {
        RwTextureDestroy(v12);
        *((_DWORD *)this + 7) = 0;
      }
      v13 = rand();
      sub_5E6BC0(v16, "menu_main%d", v13 % 4 + 1);
      v12 = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v16, v14);
      ++*(_DWORD *)(v12 + 84);
      v15 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 7) = v12;
    }
    while ( v12 == v15 );
    *((_DWORD *)this + 8) = 1084227584;
    *((_DWORD *)this + 9) = rand() % 3;
  }
  else
  {
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 7) = 0;
    v7 = dword_A00450;
    if ( dword_A00450 )
      v7 = 1;
    *((_BYTE *)this + 20) = v7;
  }
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_BYTE *)this + 56) = 0;
}


// ============================================================

// Address: 0x29c030
// Original: _ZN10FlowScreen6RenderEi
// Demangled: FlowScreen::Render(int)
int __fastcall FlowScreen::Render(FlowScreen *this, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  float32x2_t v6; // d8
  float32x2_t v7; // d10
  float32x2_t v8; // d11
  FlowScreen *v9; // r9
  int v10; // r6
  float32x4_t v11; // q2
  float32x4_t v12; // q9
  float *v13; // r5
  int v14; // r11
  int64x2_t v16; // q9
  int64x2_t v21; // q8
  float v22; // s6
  float v23; // s8
  float v24; // s0
  float v25; // s4
  float v26; // s2
  float v27; // s19
  float v28; // s25
  float v29; // s27
  float v30; // s31
  int IsPlayingGame; // r0
  float v33; // s16
  float v34; // s18
  int v35; // r0
  int *HelpSprite; // r0
  int v37; // r5
  float v38; // s20
  int v39; // r6
  int v40; // r10
  float v41; // s18
  float32x2_t v42; // d0
  float32x2_t v43; // d0
  float v44; // s16
  float v45; // r8
  float v46; // r9
  float v47; // r11
  float v48; // r6
  float v49; // s16
  float v50; // r5
  float v51; // s20
  float v52; // r4
  float v53; // r0
  float v54; // s16
  float v55; // s26
  float v56; // s22
  float v57; // s28
  float v58; // s23
  float v59; // s22
  float v60; // s20
  float v61; // s29
  float v62; // s26
  float v63; // s30
  float v64; // s24
  float v65; // s21
  float v66; // s29
  float v67; // s2
  float v68; // s0
  float v69; // s2
  float v70; // s31
  float v71; // s26
  float v72; // s0
  float v73; // s0
  float v74; // s4
  int v75; // r1
  float v76; // r1
  float v77; // s16
  bool v78; // r1
  float v79; // r1
  float v80; // s2
  float v81; // s16
  float v82; // s0
  bool v83; // r1
  CKeyGen *v84; // r4
  int v85; // r0
  int v86; // r0
  bool v87; // zf
  int v88; // r8
  float v89; // s4
  float v90; // s0
  float v91; // s2
  float v92; // s22
  float v93; // s24
  float v94; // s26
  float v95; // s28
  CHID *InputType; // r0
  CHID *v97; // r0
  int v98; // r4
  int v99; // r2
  int v100; // r0
  int v101; // r4
  int result; // r0
  float v103; // r1
  float v104; // s24
  float v105; // s26
  float v106; // s0
  bool v107; // r1
  float v108; // r1
  float v109; // s22
  float v110; // s22
  bool v111; // r1
  int v112; // r2
  int *v113; // r0
  int v114; // r5
  int v115; // r4
  int v116; // [sp+3Ch] [bp-14Ch]
  unsigned __int64 v117; // [sp+40h] [bp-148h]
  float v120; // [sp+58h] [bp-130h]
  float v121; // [sp+58h] [bp-130h]
  int v122; // [sp+5Ch] [bp-12Ch] BYREF
  _BYTE v123[4]; // [sp+60h] [bp-128h] BYREF
  int v124; // [sp+64h] [bp-124h] BYREF
  int v125; // [sp+68h] [bp-120h] BYREF
  int v126; // [sp+6Ch] [bp-11Ch] BYREF
  int v127; // [sp+70h] [bp-118h] BYREF
  int v128; // [sp+74h] [bp-114h] BYREF
  _BYTE v129[4]; // [sp+78h] [bp-110h] BYREF
  int v130; // [sp+7Ch] [bp-10Ch] BYREF
  float v131; // [sp+80h] [bp-108h] BYREF
  int v132; // [sp+84h] [bp-104h]
  float v133; // [sp+88h] [bp-100h]
  int v134; // [sp+8Ch] [bp-FCh]
  float v135; // [sp+90h] [bp-F8h]
  int v136; // [sp+94h] [bp-F4h]
  float v137; // [sp+98h] [bp-F0h]
  int v138; // [sp+9Ch] [bp-ECh]
  int v139; // [sp+A0h] [bp-E8h] BYREF
  int v140; // [sp+A4h] [bp-E4h]
  float v141; // [sp+A8h] [bp-E0h] BYREF
  unsigned int v142; // [sp+ACh] [bp-DCh] BYREF
  float v143; // [sp+B0h] [bp-D8h]
  int v144; // [sp+B4h] [bp-D4h]
  float v145; // [sp+B8h] [bp-D0h]
  int v146; // [sp+BCh] [bp-CCh]
  int32x4_t v147; // [sp+C0h] [bp-C8h] BYREF
  unsigned int v148; // [sp+D8h] [bp-B0h] BYREF
  int64x2_t v149; // [sp+DCh] [bp-ACh] BYREF
  float v150; // [sp+ECh] [bp-9Ch]
  float v151; // [sp+F0h] [bp-98h]
  float v152; // [sp+F4h] [bp-94h]
  float v153; // [sp+F8h] [bp-90h]
  unsigned __int32 v154; // [sp+FCh] [bp-8Ch]
  unsigned __int32 v155; // [sp+100h] [bp-88h]
  unsigned __int32 v156; // [sp+104h] [bp-84h]
  unsigned __int32 v157; // [sp+108h] [bp-80h]
  unsigned __int32 v158; // [sp+10Ch] [bp-7Ch]
  unsigned __int32 v159; // [sp+110h] [bp-78h]
  float v160; // [sp+114h] [bp-74h]
  float v161; // [sp+118h] [bp-70h]
  unsigned __int32 v162; // [sp+11Ch] [bp-6Ch]
  unsigned __int32 v163; // [sp+120h] [bp-68h]
  _BYTE v164[4]; // [sp+124h] [bp-64h] BYREF

  v9 = this;
  if ( Menu_IsPlayingGame(1) != 1 || HIBYTE(word_6E00C0) )
  {
    v10 = *((_DWORD *)v9 + 4);
    CRGBA::CRGBA((CRGBA *)v164, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    MenuScreen::DrawSprite((int)v9, v10, (int)v164, 1130758144, 1088421888, 1137508352, 1100480512, a2 > 0);
    v11.n128_u32[0] = *((_DWORD *)v9 + 8);
    v7.n64_u32[0] = 1.0;
    v12.n128_f32[0] = 1.0;
    v12.n128_f32[1] = 1.0;
    v12.n128_f32[2] = 1.0;
    v12.n128_f32[3] = 1.0;
    v11.n128_f32[3] = v11.n128_f32[0] + -0.375;
    v13 = (float *)&unk_60CC00;
    v11.n128_f32[2] = v11.n128_f32[0] + -0.25;
    v11.n128_f32[1] = v11.n128_f32[0] + -0.125;
    v6.n64_u32[1] = 1142947840;
    v14 = 0;
    _Q8 = vaddq_f32(v11, v11);
    v4.n64_f32[0] = (float)(v11.n128_f32[0] + -0.625) + (float)(v11.n128_f32[0] + -0.625);
    v5.n64_f32[0] = (float)(v11.n128_f32[0] + -0.5) + (float)(v11.n128_f32[0] + -0.5);
    v16 = vminq_f32(_Q8, v12);
    __asm { VCLT.F32        Q8, Q8, #0.0 }
    v3.n64_u64[0] = vmin_f32(v4, v7).n64_u64[0];
    v21 = vbicq_s64(v16, _Q8);
    v2.n64_u64[0] = vmin_f32(v5, v7).n64_u64[0];
    if ( v4.n64_f32[0] < 0.0 )
      v3.n64_u32[0] = 0;
    if ( v5.n64_f32[0] < 0.0 )
      v2.n64_u32[0] = 0;
    v154 = v21.n128_u32[3];
    v155 = v21.n128_u32[2];
    v156 = v21.n128_u32[1];
    v157 = v21.n128_u32[0];
    v149 = v21;
    v150 = v2.n64_f32[0];
    v158 = v21.n128_u32[0];
    v159 = v21.n128_u32[2];
    v162 = v21.n128_u32[2];
    v163 = v21.n128_u32[0];
    v151 = v3.n64_f32[0];
    v152 = v3.n64_f32[0];
    v153 = v2.n64_f32[0];
    v160 = v2.n64_f32[0];
    v161 = v2.n64_f32[0];
    do
    {
      v22 = 1.0;
      v23 = 1.0;
      v8.n64_u32[1] = 1.0;
      v24 = v149.n128_f32[6 * *((_DWORD *)this + 9) + v14];
      v25 = (float)(v24 * 4.0) + -0.5;
      if ( v25 < 1.0 )
        v22 = (float)(v24 * 4.0) + -0.5;
      if ( v22 <= 0.0 )
        v23 = 0.0;
      v26 = v23;
      if ( v25 < 1.0 )
        v26 = (float)(v24 * 4.0) + -0.5;
      if ( v22 <= 0.0 )
        v26 = v23;
      if ( v24 > 0.25 )
        v8.n64_f32[1] = 1.0 - (float)((float)(v24 / 0.8) + -0.25);
      CRGBA::CRGBA((CRGBA *)&v148, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v26 * 255.0));
      v27 = *(v13 - 2);
      v28 = *(v13 - 1);
      v29 = *v13;
      v30 = v13[1];
      v132 = 0;
      v131 = v27;
      *(float *)&v140 = 0.0;
      v133 = v28;
      v134 = 0;
      v135 = v29;
      v136 = 1065353216;
      v137 = v30;
      v147 = vdupq_n_s32(v148);
      v138 = 1065353216;
      *(float *)&v139 = (float)(v27 * 640.0) + 0.0;
      v142 = 0;
      v141 = (float)(v28 * 640.0) + 0.0;
      v144 = 1135869952;
      v143 = (float)(v29 * 640.0) + 0.0;
      v146 = 1135869952;
      v145 = (float)(v30 * 640.0) + 0.0;
      if ( v148 >= 0x1000000 )
        MenuScreen::DrawSprite((int)this, *((_DWORD *)this + 6), (int)&v139, (int)&v131, (int)&v147, a2 > 0);
      CRGBA::CRGBA((CRGBA *)&v148, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v8.n64_f32[1] * 255.0));
      *(float *)&v140 = 0.0;
      *(float *)&v139 = (float)(v27 * 640.0) + 0.0;
      v132 = 0;
      v141 = (float)(v28 * 640.0) + 0.0;
      v142 = 0;
      v143 = (float)(v29 * 640.0) + 0.0;
      v144 = 1135869952;
      v145 = (float)(v30 * 640.0) + 0.0;
      v131 = v27;
      v133 = v28;
      v134 = 0;
      v135 = v29;
      v136 = 1065353216;
      v137 = v30;
      v147 = vdupq_n_s32(v148);
      v146 = 1135869952;
      v138 = 1065353216;
      if ( v148 >= 0x1000000 )
        MenuScreen::DrawSprite((int)this, *((_DWORD *)this + 7), (int)&v139, (int)&v131, (int)&v147, a2 > 0);
      ++v14;
      v13 += 4;
    }
    while ( v14 != 6 );
    v9 = this;
  }
  IsPlayingGame = Menu_IsPlayingGame(1);
  _ZF = dword_6E0090 == 1;
  if ( dword_6E0090 == 1 )
    _ZF = IsPlayingGame == 0;
  if ( _ZF && CHID::Implements() == 1 && CHID::GetInputType((CHID *)((char *)&stderr + 1)) == 1 )
  {
    v33 = (float)dword_9FC904;
    v34 = (float)dword_9FC900;
    CRGBA::CRGBA((CRGBA *)&v130, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v3.n64_u32[0] = 12.5;
    v2.n64_f32[0] = v34 * 0.0;
    v2.n64_u64[0] = vmax_f32(v2, v3).n64_u64[0];
    v35 = CText::Get((CText *)TheText, (CKeyGen *)"FEH_SEL");
    v139 = v130;
    MenuScreen::DrawTextDirect(
      (int)&v149,
      (int)v9,
      v35,
      2,
      0,
      (int)&v139,
      1,
      COERCE_INT(
        (float)((float)((float)((float)((float)(v34 - v2.n64_f32[0]) * 480.0) + (float)(v34 * -240.0)) / v33) + 320.0)
      + -120.0),
      1138196480,
      1123024896,
      1104674816,
      0,
      0);
    *(float *)&v139 = 0.0;
    *(float *)&v140 = 0.0;
    v131 = 1.0;
    v132 = 1065353216;
    HelpSprite = (int *)CHID::GetHelpSprite();
    if ( HelpSprite )
    {
      v37 = *HelpSprite;
      CRGBA::CRGBA((CRGBA *)v129, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      MenuScreen::DrawSprite(
        (int)v9,
        v37,
        (int)v129,
        COERCE_INT(v149.n128_f32[0] + -25.0),
        436.0,
        v149.n128_f32[0] + -5.0,
        456.0,
        v139,
        v140,
        SLODWORD(v131),
        v132);
    }
  }
  if ( *((_DWORD *)v9 + 16) )
  {
    v38 = 0.5;
    v39 = 0;
    v40 = 0;
    do
    {
      v116 = v39;
      v8.n64_u32[0] = 2.0;
      v41 = (float)v40 - *((float *)v9 + 13);
      v6.n64_f32[0] = fabsf(v41);
      v42.n64_u64[0] = vmin_f32(v6, v8).n64_u64[0];
      v117 = v42.n64_u64[0];
      CRGBA::CRGBA((CRGBA *)&v131, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)((float)(v42.n64_f32[0] * -127.0) + 254.0));
      v42.n64_u32[0] = 1.0;
      v43.n64_u64[0] = vmin_f32(v6, v42).n64_u64[0];
      v43.n64_f32[0] = v38 - (float)((float)((float)(v43.n64_f32[0] * 0.8) + 0.025) * 0.1);
      v44 = v41 + (float)(v41 * 0.1);
      v3.n64_f32[0] = v44 - v43.n64_f32[0];
      v43.n64_f32[0] = v44 + v43.n64_f32[0];
      v45 = sinf(v3.n64_f32[0] * 0.12);
      v46 = cosf(v3.n64_f32[0] * 0.12);
      v120 = sinf(v43.n64_f32[0] * 0.12);
      v47 = cosf(v43.n64_f32[0] * 0.12);
      v48 = (float)(v44 + -0.45) * 0.12;
      v49 = (float)(v44 + 0.45) * 0.12;
      v50 = sinf(v48);
      v51 = cosf(v48);
      v52 = sinf(v49);
      v53 = cosf(v49);
      v43.n64_f32[0] = fabsf(v41 + 0.4);
      v3.n64_f32[0] = fabsf(v41 + -0.4);
      LODWORD(v54) = vmin_f32(v43, v8).n64_u32[0];
      v2.n64_u64[0] = vmin_f32(v3, v8).n64_u64[0];
      v55 = (float)(v53 * 1050.0) + -700.0;
      v56 = v46;
      v9 = this;
      if ( v40 == *((_DWORD *)this + 12) )
        CRGBA::CRGBA((CRGBA *)&v147, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
      else
        CRGBA::CRGBA(
          (CRGBA *)&v147,
          0xB4u,
          0xB4u,
          0xB4u,
          (unsigned int)(float)((float)(v2.n64_f32[0] * -127.0) + 254.0));
      v57 = (float)((float)(v51 * 1050.0) + -700.0) + (float)(v2.n64_f32[0] * 5.0);
      v58 = v56 * 1130.0;
      v59 = (float)(v50 * 1050.0) + 320.0;
      v60 = (float)(v54 * 5.0) + v55;
      v61 = v120;
      v121 = (float)(v52 * 1050.0) + 320.0;
      if ( v40 == *((_DWORD *)this + 12) )
        CRGBA::CRGBA((CRGBA *)&v148, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
      else
        CRGBA::CRGBA((CRGBA *)&v148, 0xB4u, 0xB4u, 0xB4u, (unsigned int)(float)((float)(v54 * -127.0) + 254.0));
      v62 = v61 * 1130.0;
      v63 = v58 + -700.0;
      v64 = (float)(v45 * 1130.0) + 320.0;
      v139 = v147.n128_i32[0];
      v141 = v147.n128_f32[0];
      v140 = v148;
      v142 = v148;
      v149.n128_f32[1] = v57 + -1.7;
      v149.n128_f32[0] = v59 + -1.7;
      v149.n128_f32[2] = v121 + 1.7;
      v149.n128_f32[3] = v60 + -1.7;
      v150 = v59 + -1.7;
      v151 = v57 + 1.7;
      v152 = v121 + 1.7;
      v153 = v60 + 1.7;
      FlowScreen::DrawFeatheredQuad();
      v139 = v147.n128_i32[0];
      v140 = v147.n128_i32[0];
      CRGBA::CRGBA((CRGBA *)&v141, 0, 0, 0, 0);
      CRGBA::CRGBA((CRGBA *)&v142, 0, 0, 0, 0);
      v65 = v60 - v57;
      v66 = v121 - v59;
      v6.n64_f32[1] = (float)(v66 * v66) + (float)(v65 * v65);
      v67 = 1.0;
      v68 = v60 - v57;
      if ( v6.n64_f32[1] > 0.0 )
      {
        v69 = 1.0 / sqrtf(v6.n64_f32[1]);
        v68 = v65 * v69;
        v67 = v66 * v69;
      }
      v70 = (float)(v47 * 1130.0) + -700.0;
      v149.n128_f32[1] = v57 + 1.7;
      v149.n128_f32[0] = v59 + -1.7;
      v71 = v62 + 320.0;
      v150 = v64 + -1.7;
      v151 = v63 + 1.7;
      v152 = v64 + 1.7;
      v153 = v63 + 1.7;
      v149.n128_f32[2] = (float)(v59 + -1.7) + (float)((float)(v67 * 1.7) + (float)(v67 * 1.7));
      v149.n128_f32[3] = (float)(v57 + 1.7) + (float)((float)(v68 * 1.7) + (float)(v68 * 1.7));
      FlowScreen::DrawFeatheredQuad();
      v139 = v148;
      v140 = v148;
      CRGBA::CRGBA((CRGBA *)&v141, 0, 0, 0, 0);
      CRGBA::CRGBA((CRGBA *)&v142, 0, 0, 0, 0);
      if ( v6.n64_f32[1] <= 0.0 )
      {
        v73 = 1.0;
      }
      else
      {
        v72 = 1.0 / sqrtf(v6.n64_f32[1]);
        v65 = v65 * v72;
        v73 = v66 * v72;
      }
      v149.n128_f32[2] = v121 + 1.7;
      v149.n128_f32[3] = v60 + 1.7;
      v150 = v71 + -1.7;
      v151 = v70 + 1.7;
      v152 = v71 + 1.7;
      v153 = v70 + 1.7;
      v149.n128_f32[1] = (float)(v60 + 1.7) - (float)((float)(v65 * 1.7) + (float)(v65 * 1.7));
      v149.n128_f32[0] = (float)(v121 + 1.7) - (float)((float)(v73 * 1.7) + (float)(v73 * 1.7));
      FlowScreen::DrawFeatheredQuad();
      v74 = 18.0;
      if ( v40 == *((_DWORD *)this + 12) )
        v74 = 21.0;
      v75 = *(_DWORD *)(*((_DWORD *)this + 17) + v116);
      v128 = LODWORD(v131);
      MenuScreen::DrawSprite(
        (int)this,
        v75,
        (int)&v128,
        COERCE_INT((float)((float)((float)((float)(v59 + v121) + v64) + v71) * 0.25) - v74),
        COERCE_INT((float)((float)((float)((float)(v57 + v60) + v63) + v70) * 0.25) - v74),
        COERCE_INT((float)((float)((float)((float)(v59 + v121) + v64) + v71) * 0.25) + v74),
        COERCE_INT((float)((float)((float)((float)(v57 + v60) + v63) + v70) * 0.25) + v74),
        0);
      v38 = 0.5;
      v8.n64_u32[1] = HIDWORD(v117);
      if ( *(float *)&v117 < 0.5 )
      {
        CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v76);
        v77 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.0);
        v80 = (float)((float)(v77 - COERCE_FLOAT(CFont::GetHeight(0, v78))) * 480.0) / (float)dword_9FC904;
        v81 = 438.0;
        if ( v80 < 438.0 )
        {
          CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v79);
          v82 = (float)dword_9FC904;
          v81 = (float)((float)((float)(v82 + (float)(v82 * -0.0)) - COERCE_FLOAT(CFont::GetHeight(0, v83))) * 480.0)
              / (float)dword_9FC904;
        }
        v84 = *(CKeyGen **)(*((_DWORD *)this + 17) + v116 + 4);
        CRGBA::CRGBA(
          (CRGBA *)&v127,
          0xF0u,
          0xF0u,
          0xF0u,
          (unsigned int)(float)((float)((float)((float)(*(float *)&v117 * -2.0) + 1.0)
                                      * (float)((float)(*(float *)&v117 * -2.0) + 1.0))
                              * 255.0));
        v85 = CText::Get((CText *)TheText, v84);
        v139 = v127;
        MenuScreen::DrawTextDirect(
          (int)&v149,
          (int)this,
          v85,
          1,
          0,
          (int)&v139,
          0,
          0,
          SLODWORD(v81),
          1142947840,
          1104674816,
          0,
          0);
      }
      ++v40;
      v39 = v116 + 12;
    }
    while ( (unsigned int)v40 < *((_DWORD *)this + 16) );
  }
  v86 = Menu_IsPlayingGame(1);
  v87 = HIBYTE(word_6E00C0) == 0;
  if ( !HIBYTE(word_6E00C0) )
    v87 = v86 == 0;
  if ( !v87 )
  {
    v88 = *((_DWORD *)v9 + 2);
    *((float *)v9 + 2) = 1.0 - mapModeOpacity;
    v89 = (float)dword_9FC900 * 240.0;
    v90 = (float)((float)((float)((float)dword_9FC900 * 480.0) - v89) / (float)dword_9FC904) + 320.0;
    *((float *)v9 + 10) = (float)((float)(0.0 - v89) / (float)dword_9FC904) + 320.0;
    *((float *)v9 + 11) = v90;
    CRGBA::CRGBA((CRGBA *)&v149, 0, 0, 0, 0x80u);
    CRGBA::CRGBA((CRGBA *)&v149.n128_u8[4], 0, 0, 0, 0x80u);
    CRGBA::CRGBA((CRGBA *)&v149.n128_i8[8], 0, 0, 0, 0);
    CRGBA::CRGBA((CRGBA *)((char *)&v149.n128_f64[1] + 4), 0, 0, 0, 0);
    v91 = *((float *)this + 2);
    v92 = *((float *)this + 10);
    v93 = *((float *)this + 11);
    v149.n128_u8[3] = (unsigned int)(float)(v91 * (float)v149.n128_u8[3]);
    v94 = (float)dword_9FC900;
    v95 = (float)dword_9FC904;
    v149.n128_u8[7] = (unsigned int)(float)(v91 * (float)v149.n128_u8[7]);
    v149.n128_u8[11] = (unsigned int)(float)(v91 * (float)v149.n128_u8[11]);
    v149.n128_u8[15] = (unsigned int)(float)(v91 * (float)v149.n128_u8[15]);
    RwRenderStateSet(1, 0);
    dword_6E0148 = v149.n128_u32[0];
    dword_6E0140 = 1065353216;
    dword_6E0144 = 1065353216;
    qword_6E014C = 0LL;
    dword_6E015C = 1065353216;
    dword_6E0160 = 1065353216;
    qword_6E0168 = 1065353216LL;
    *(float *)maVertices = (float)(v94 * 0.5) + (float)((float)((float)(v92 + -320.0) * v95) / 480.0);
    *(float *)&dword_6E013C = (float)(v95 * 0.0) / 480.0;
    *(float *)&qword_6E0154 = (float)(v94 * 0.5) + (float)((float)((float)(v93 + -320.0) * v95) / 480.0);
    *((float *)&qword_6E0154 + 1) = (float)(v95 * 0.0) / 480.0;
    dword_6E0164 = v149.n128_i32[1];
    dword_6E0178 = 1065353216;
    dword_6E017C = 1065353216;
    qword_6E0184 = 0x3F80000000000000LL;
    *(float *)&qword_6E0170 = *(float *)maVertices;
    *((float *)&qword_6E0170 + 1) = (float)(v95 * 50.0) / 480.0;
    dword_6E0180 = v149.n128_i32[2];
    v9 = this;
    dword_6E0194 = 1065353216;
    dword_6E0198 = 1065353216;
    qword_6E01A0 = 0x3F8000003F800000LL;
    *(float *)&qword_6E018C = *(float *)&qword_6E0154;
    *((float *)&qword_6E018C + 1) = (float)(v95 * 50.0) / 480.0;
    dword_6E019C = v149.n128_i32[3];
    RwIm2DRenderPrimitive_BUGFIX(4, maVertices, 4);
    if ( Menu_IsPlayingGame(1) != 1 || HIBYTE(word_6E00C0) )
      goto LABEL_62;
    InputType = (CHID *)CHID::GetInputType(0);
    if ( InputType )
    {
      v97 = (CHID *)CHID::GetInputType(InputType);
      if ( v97 == (CHID *)((char *)&stderr + 2) )
      {
        CRGBA::CRGBA((CRGBA *)&v125, 0xE0u, 0xE0u, 0xE0u, 0xFFu);
        v98 = dword_9FC904;
        v99 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_VW2");
        v2.n64_f32[0] = (float)v98;
        v100 = v125;
      }
      else
      {
        if ( CHID::GetInputType(v97) != 1 )
          goto LABEL_62;
        v104 = (float)dword_9FC904;
        v105 = (float)dword_9FC900;
        CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v103);
        v106 = (float)dword_9FC904;
        v109 = 438.0;
        if ( (float)((float)((float)((float)(v106 - (float)(v106 * 0.0)) - COERCE_FLOAT(CFont::GetHeight(0, v107)))
                           * 480.0)
                   / (float)dword_9FC904) < 438.0 )
        {
          CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v108);
          v110 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.0);
          v109 = (float)((float)(v110 - COERCE_FLOAT(CFont::GetHeight(0, v111))) * 480.0) / (float)dword_9FC904;
        }
        if ( CHID::Implements() == 1 )
        {
          v2.n64_u32[0] = 20.0;
          v3.n64_f32[0] = v105 * 0.0;
          CRGBA::CRGBA((CRGBA *)&v124, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
          v112 = CText::Get((CText *)TheText, (CKeyGen *)"FEH_MAP");
          v131 = *(float *)&v124;
          MenuScreen::DrawTextDirect(
            (int)&v139,
            (int)this,
            v112,
            0,
            0,
            (int)&v131,
            1,
            COERCE_INT((float)((float)((float)(vmax_f32(v3, v2).n64_f32[0] * 480.0) + (float)(v105 * -240.0)) / v104) + 320.0),
            SLODWORD(v109),
            1123024896,
            1104674816,
            0,
            0);
          v131 = 0.0;
          v132 = 0;
          v147.n128_u64[0] = 0x3F8000003F800000LL;
          v113 = (int *)CHID::GetHelpSprite();
          if ( v113 )
          {
            v114 = *v113;
            CRGBA::CRGBA((CRGBA *)v123, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
            v9 = this;
            MenuScreen::DrawSprite(
              (int)this,
              v114,
              (int)v123,
              COERCE_INT(*(float *)&v140 + 5.0),
              v109 + 5.0,
              *(float *)&v140 + 25.0,
              463.0,
              SLODWORD(v131),
              v132,
              v147.n128_i32[0],
              v147.n128_i32[1]);
          }
          goto LABEL_62;
        }
        CRGBA::CRGBA((CRGBA *)&v122, 0xE0u, 0xE0u, 0xE0u, 0xFFu);
        v115 = dword_9FC904;
        v99 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_VWM");
        v2.n64_f32[0] = (float)v115;
        v100 = v122;
      }
    }
    else
    {
      CRGBA::CRGBA((CRGBA *)&v126, 0xE0u, 0xE0u, 0xE0u, 0xFFu);
      v101 = dword_9FC904;
      v99 = CText::Get((CText *)TheText, (CKeyGen *)"MOB_VWM");
      v2.n64_f32[0] = (float)v101;
      v100 = v126;
    }
    v3.n64_u32[0] = 15.0;
    v2.n64_f32[0] = v2.n64_f32[0] * 0.0;
    v131 = *(float *)&v100;
    MenuScreen::DrawTextDirect(
      (int)&v139,
      (int)this,
      v99,
      1,
      2,
      (int)&v131,
      1,
      0,
      vmax_f32(v2, v3).n64_i32[0],
      1142947840,
      1101529088,
      0,
      0);
LABEL_62:
    *((_DWORD *)v9 + 2) = v88;
  }
  result = *((unsigned __int8 *)v9 + 12);
  if ( *((_BYTE *)v9 + 12) )
    return (*(int (__fastcall **)(FlowScreen *, int))(*(_DWORD *)v9 + 40))(v9, 1);
  return result;
}


// ============================================================

// Address: 0x29d144
// Original: _ZN10FlowScreen11GainedFocusEv
// Demangled: FlowScreen::GainedFocus(void)
int __fastcall FlowScreen::GainedFocus(int this)
{
  *(float *)(this + 52) = (float)*(int *)(this + 48);
  return this;
}


// ============================================================

// Address: 0x29d152
// Original: _ZN10FlowScreen17SetPreviousScreenEP10MenuScreen
// Demangled: FlowScreen::SetPreviousScreen(MenuScreen *)
int __fastcall FlowScreen::SetPreviousScreen(FlowScreen *this, MenuScreen *a2)
{
  int result; // r0
  __int64 v5; // kr00_8
  int v6; // r2
  int v7; // r1

  result = (*(int (__fastcall **)(MenuScreen *))(*(_DWORD *)a2 + 24))(a2);
  if ( result == 1 )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = *((_DWORD *)a2 + 6);
    *((_DWORD *)this + 6) = v6;
    v7 = *((_DWORD *)a2 + 7);
    *((_DWORD *)this + 7) = v7;
    if ( v6 )
    {
      ++*(_DWORD *)(v6 + 84);
      v7 = *((_DWORD *)this + 7);
    }
    if ( v7 )
      ++*(_DWORD *)(v7 + 84);
    if ( (_DWORD)v5 )
      RwTextureDestroy(v5);
    if ( HIDWORD(v5) )
      RwTextureDestroy(HIDWORD(v5));
    *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
    result = *((_DWORD *)a2 + 9);
    *((_DWORD *)this + 9) = result;
  }
  return result;
}


// ============================================================

// Address: 0x29d1ac
// Original: _ZN10FlowScreen12IsFlowScreenEv
// Demangled: FlowScreen::IsFlowScreen(void)
int __fastcall FlowScreen::IsFlowScreen(FlowScreen *this)
{
  return 1;
}


// ============================================================

// Address: 0x29d1b0
// Original: _ZN10FlowScreen13IsPauseScreenEv
// Demangled: FlowScreen::IsPauseScreen(void)
int __fastcall FlowScreen::IsPauseScreen(FlowScreen *this)
{
  return *((unsigned __int8 *)this + 13);
}


// ============================================================

// Address: 0x29d23c
// Original: _ZN10FlowScreen6IsFlowEv
// Demangled: FlowScreen::IsFlow(void)
int __fastcall FlowScreen::IsFlow(FlowScreen *this)
{
  return 1;
}


// ============================================================

// Address: 0x29d240
// Original: _ZN10FlowScreenD2Ev
// Demangled: FlowScreen::~FlowScreen()
void __fastcall FlowScreen::~FlowScreen(FlowScreen *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  unsigned int i; // r5
  int v8; // r4
  int v9; // r0
  void *v10; // r0
  int v11; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_662610;
  if ( v2 )
  {
    RwTextureDestroy(v2);
    *((_DWORD *)this + 6) = 0;
  }
  v3 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    RwTextureDestroy(v3);
    *((_DWORD *)this + 7) = 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    RwTextureDestroy(v4);
    *((_DWORD *)this + 4) = 0;
  }
  v5 = *((_DWORD *)this + 16);
  if ( v5 )
  {
    v6 = 0;
    for ( i = 0; i < v5; ++i )
    {
      v8 = *((_DWORD *)this + 17);
      v9 = *(_DWORD *)(v8 + v6);
      if ( v9 )
      {
        RwTextureDestroy(v9);
        *(_DWORD *)(v8 + v6) = 0;
        v5 = *((_DWORD *)this + 16);
      }
      v6 += 12;
    }
  }
  v10 = (void *)*((_DWORD *)this + 17);
  *((_DWORD *)this + 16) = 0;
  if ( v10 )
  {
    free(v10);
    *((_DWORD *)this + 17) = 0;
  }
  *((_DWORD *)this + 15) = 0;
  v11 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_6625A0;
  if ( v11 )
  {
    RwTextureDestroy(v11);
    *((_DWORD *)this + 1) = 0;
  }
}


// ============================================================

// Address: 0x29d2f4
// Original: _ZN10FlowScreenD0Ev
// Demangled: FlowScreen::~FlowScreen()
void __fastcall FlowScreen::~FlowScreen(FlowScreen *this)
{
  void *v1; // r0

  FlowScreen::~FlowScreen(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x29d304
// Original: _ZN10FlowScreen6UpdateEf
// Demangled: FlowScreen::Update(float)
int __fastcall FlowScreen::Update(FlowScreen *this, TextureDatabaseRuntime *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  int v6; // r5
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  float v11; // s16
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1
  float v18; // s6
  int v19; // r1
  float v20; // s4
  bool v21; // nf
  float v22; // s0
  unsigned int v23; // r0
  float v25; // s0
  float v26; // s0
  float v27; // s4
  char *v28; // r0
  float v29; // s0
  bool v30; // r2
  float v31; // s0
  int v32; // r0
  int v33; // r1
  int Texture; // r0
  int v35; // r0
  const char *v36; // r1
  int v37; // r1
  int v38; // r0
  int v39; // r0
  _BYTE v40[256]; // [sp+4h] [bp-12Ch] BYREF
  int v41; // [sp+104h] [bp-2Ch]

  v6 = *((_DWORD *)this + 12);
  if ( LeftPressed() == 1 )
  {
    v7 = *((_DWORD *)this + 12);
    *((_BYTE *)this + 56) = 0;
    *((_DWORD *)this + 12) = v7 - 1;
    if ( v7 <= 0 )
    {
      *((_DWORD *)this + 12) = 0;
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 4, 0.0, 1.0);
    }
  }
  if ( RightPressed() == 1 )
  {
    v8 = *((_DWORD *)this + 12);
    v9 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 56) = 0;
    *((_DWORD *)this + 12) = v8 + 1;
    if ( v8 + 1 >= v9 )
    {
      *((_DWORD *)this + 12) = v8;
      if ( !NeedsAmazonDownload() )
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 4, 0.0, 1.0);
    }
  }
  if ( CHID::Implements() == 1
    && CHID::IsReleased(64) == 1
    && *(float *)(*(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4) + 8) >= 1.0 )
  {
    v16 = *((_DWORD *)this + 12);
    v17 = *((_DWORD *)this + 17);
    *((_BYTE *)this + 56) = 0;
    (*(void (**)(void))(v17 + 12 * v16 + 8))();
    if ( !NeedsAmazonDownload() )
      goto LABEL_36;
    return _stack_chk_guard - v41;
  }
  if ( *((_BYTE *)this + 12)
    && BackPressed() == 1
    && *(float *)(*(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4) + 8) >= 1.0 )
  {
    v14 = *(_DWORD *)this;
    *((_BYTE *)this + 56) = 0;
    (*(void (__fastcall **)(FlowScreen *))(v14 + 36))(this);
    if ( !NeedsAmazonDownload() )
    {
      v15 = 2;
      return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, v15, 0.0, 1.0);
    }
    return _stack_chk_guard - v41;
  }
  v10 = *((_DWORD *)this + 12);
  v2.n64_u32[0] = *((_DWORD *)this + 13);
  v11 = (float)((float)v10 - v2.n64_f32[0]) * 0.1;
  if ( !byte_6E00DA )
    goto LABEL_43;
  v12 = *((_DWORD *)&gMobileMenu + lastDevice + 36);
  switch ( v12 )
  {
    case 0:
      v18 = *((float *)this + 20);
      if ( v18 <= 0.15 || v18 >= 0.5 )
      {
        if ( v18 >= 0.1
          || (unsigned int)(OS_TimeMS() - *((_DWORD *)this + 21)) > 0xC7
          || *((float *)&gMobileMenu + 2 * lastDevice + 29) <= 320.0 )
        {
          goto LABEL_43;
        }
        v25 = *((float *)&gMobileMenu + 2 * lastDevice + 28);
        if ( v25 >= 120.0 )
        {
          if ( v25 >= 240.0 )
          {
            if ( v25 <= 520.0 )
            {
              v39 = *((_DWORD *)this + 12);
              if ( v25 <= 400.0 )
              {
                (*(void (**)(void))(*((_DWORD *)this + 17) + 12 * v39 + 8))();
                if ( !NeedsAmazonDownload() )
                  goto LABEL_36;
                return _stack_chk_guard - v41;
              }
              *((_BYTE *)this + 56) = 1;
              v19 = v39 + 1;
            }
            else
            {
              v19 = *((_DWORD *)this + 12) + 2;
            }
          }
          else
          {
            v38 = *((_DWORD *)this + 12);
            *((_BYTE *)this + 56) = 1;
            v19 = v38 - 1;
          }
        }
        else
        {
          v19 = *((_DWORD *)this + 12) - 2;
        }
      }
      else
      {
        v19 = (int)(float)(v2.n64_f32[0] + 0.85);
        if ( v10 == v19 )
        {
          v19 = (int)(float)(v2.n64_f32[0] + 0.15);
          if ( v10 == v19 )
            goto LABEL_43;
        }
      }
      *((_DWORD *)this + 12) = v19;
      if ( v19 < 0 )
        goto LABEL_32;
LABEL_44:
      v23 = *((_DWORD *)this + 16) - 1;
      if ( v19 <= v23 )
        goto LABEL_46;
      goto LABEL_45;
    case 3:
      v11 = 0.0;
      v20 = (float)(*((float *)this + 18) - *((float *)&gMobileMenu + 2 * lastDevice + 28)) * 0.007;
      v2.n64_f32[0] = v20 + v2.n64_f32[0];
      v3.n64_f32[0] = (float)*((unsigned int *)this + 16) + 1.0;
      v21 = v2.n64_f32[0] < -1.0;
      v3.n64_u32[0] = vmin_f32(v2, v3).n64_u32[0];
      v22 = *((float *)this + 20) + fabsf(v20);
      if ( v21 )
        v3.n64_u32[0] = -1.0;
      *((float *)this + 20) = v22;
      *((_DWORD *)this + 12) = (int)(float)(v3.n64_f32[0] + 0.5);
      *((_DWORD *)this + 13) = v3.n64_u32[0];
      v19 = (int)(float)(v3.n64_f32[0] + 0.5);
      if ( v19 < 0 )
        goto LABEL_32;
      goto LABEL_44;
    case 2:
      *((_BYTE *)this + 56) = 0;
      v13 = OS_TimeMS();
      *((_DWORD *)this + 20) = 0;
      *((_DWORD *)this + 21) = v13;
      goto LABEL_43;
  }
  if ( fabsf(v11) >= 0.003 || !*((_BYTE *)this + 56) )
  {
LABEL_43:
    v19 = *((_DWORD *)this + 12);
    if ( v19 >= 0 )
      goto LABEL_44;
LABEL_32:
    v23 = 0;
LABEL_45:
    v19 = v23;
    *((_DWORD *)this + 12) = v23;
LABEL_46:
    if ( v6 != v19 && !NeedsAmazonDownload() )
      CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 3, 0.0, 1.0);
    v26 = *((float *)this + 2);
    v27 = v11 + *((float *)this + 13);
    v28 = (char *)&gMobileMenu + 8 * lastDevice;
    *((_DWORD *)this + 18) = *((_DWORD *)v28 + 28);
    *((_DWORD *)this + 19) = *((_DWORD *)v28 + 29);
    *((float *)this + 13) = v27;
    if ( v26 < 1.0 )
    {
      v29 = (float)(*(float *)&a2 * 5.0) + v26;
      *((float *)this + 2) = v29;
      if ( v29 > 1.0 )
        *((_DWORD *)this + 2) = 1065353216;
    }
    if ( Menu_IsPlayingGame(1) != 1 || HIBYTE(word_6E00C0) )
    {
      v31 = *((float *)this + 8) + (float)(*(float *)&a2 * -0.35);
      *((float *)this + 8) = v31;
      if ( v31 < 0.0 )
      {
        v32 = rand();
        v33 = *((_DWORD *)this + 6);
        *((_DWORD *)this + 8) = 1084227584;
        *((_DWORD *)this + 9) = v32 % 3;
        RwTextureDestroy(v33);
        *((_DWORD *)this + 6) = *((_DWORD *)this + 7);
        *((_DWORD *)this + 7) = 0;
        Texture = 0;
        do
        {
          if ( Texture )
          {
            RwTextureDestroy(Texture);
            *((_DWORD *)this + 7) = 0;
          }
          v35 = rand();
          sub_5E6BC0(v40, "menu_main%d", v35 % 4 + 1);
          Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)v40, v36);
          ++*(_DWORD *)(Texture + 84);
          v37 = *((_DWORD *)this + 6);
          *((_DWORD *)this + 7) = Texture;
        }
        while ( Texture == v37 );
      }
    }
    TextureDatabaseRuntime::UpdateStreaming(a2, COERCE_FLOAT(1), v30);
    return _stack_chk_guard - v41;
  }
  *((_BYTE *)this + 56) = 0;
  (*(void (**)(void))(*((_DWORD *)this + 17) + 12 * v10 + 8))();
  if ( !NeedsAmazonDownload() )
  {
LABEL_36:
    v15 = 1;
    return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, v15, 0.0, 1.0);
  }
  return _stack_chk_guard - v41;
}


// ============================================================

// Address: 0x29d8d4
// Original: _ZN10FlowScreen6OnBackEv
// Demangled: FlowScreen::OnBack(void)
int __fastcall FlowScreen::OnBack(FlowScreen *this)
{
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return j_MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
}


// ============================================================

// Address: 0x29da4c
// Original: _ZN10FlowScreen7OnStatsEv
// Demangled: FlowScreen::OnStats(void)
void *__fastcall FlowScreen::OnStats(FlowScreen *this)
{
  StatsScreen *v1; // r4
  void *result; // r0

  v1 = (StatsScreen *)operator new(0x44u);
  StatsScreen::StatsScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(StatsScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x29dab0
// Original: _ZN10FlowScreen8OnBriefsEv
// Demangled: FlowScreen::OnBriefs(void)
void *__fastcall FlowScreen::OnBriefs(FlowScreen *this)
{
  BriefScreen *v1; // r4
  void *result; // r0

  v1 = (BriefScreen *)operator new(0x54u);
  BriefScreen::BriefScreen(v1);
  if ( dword_6E0090 )
    (*(void (__fastcall **)(BriefScreen *, _DWORD))(*(_DWORD *)v1 + 20))(
      v1,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  result = &gMobileMenu;
  dword_6E0098 = (int)v1;
  return result;
}


// ============================================================

// Address: 0x2a7bd4
// Original: _ZN10FlowScreen17DrawFeatheredQuadEP9CVector2DP5CRGBA
// Demangled: FlowScreen::DrawFeatheredQuad(CVector2D *,CRGBA *)
int __fastcall FlowScreen::DrawFeatheredQuad(int a1, float32x4_t *a2, _BYTE *a3)
{
  float Width; // s16
  int Height; // r0
  float v7; // s16
  float v8; // s18
  float v9; // s2
  float v10; // s2
  float v11; // s2
  float v12; // s2
  float32x4_t v13; // q0
  float32x4_t v14; // q9

  Width = (float)(unsigned int)OS_ScreenGetWidth();
  Height = OS_ScreenGetHeight();
  a3[3] = 2 * (unsigned int)(unsigned __int8)a3[3] / 3;
  v7 = (float)(640.0 / Width) * 0.25;
  v8 = (float)(480.0 / (float)(unsigned int)Height) * 0.25;
  v9 = a2->n128_f32[1] - v8;
  a2->n128_f32[0] = a2->n128_f32[0] - v7;
  a2->n128_f32[1] = v9;
  a3[7] = 2 * (unsigned int)(unsigned __int8)a3[7] / 3;
  v10 = a2->n128_f32[3] - v8;
  a2->n128_f32[2] = a2->n128_f32[2] - v7;
  a2->n128_f32[3] = v10;
  a3[11] = 2 * (unsigned int)(unsigned __int8)a3[11] / 3;
  v11 = a2[1].n128_f32[1] - v8;
  a2[1].n128_f32[0] = a2[1].n128_f32[0] - v7;
  a2[1].n128_f32[1] = v11;
  a3[15] = 2 * (unsigned int)(unsigned __int8)a3[15] / 3;
  v12 = a2[1].n128_f32[3] - v8;
  a2[1].n128_f32[2] = a2[1].n128_f32[2] - v7;
  a2[1].n128_f32[3] = v12;
  MenuScreen::DrawQuad();
  v13.n128_f32[0] = v7 + v7;
  v13.n128_f32[1] = v8 + v8;
  v13.n128_f32[2] = v7 + v7;
  v13.n128_f32[3] = v8 + v8;
  v14 = vaddq_f32(v13, a2[1]);
  *a2 = vaddq_f32(v13, *a2);
  a2[1] = v14;
  return MenuScreen::DrawQuad();
}


// ============================================================
