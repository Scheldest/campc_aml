
// Address: 0x18b3cc
// Original: j__ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_b
// Demangled: MenuScreen::DrawSprite(RwTexture *,CRGBA,CVector2D,CVector2D,bool)
// attributes: thunk
int __fastcall MenuScreen::DrawSprite(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_b(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18f030
// Original: j__ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_S3_S3_
// Demangled: MenuScreen::DrawSprite(RwTexture *,CRGBA,CVector2D,CVector2D,CVector2D,CVector2D)
// attributes: thunk
int __fastcall MenuScreen::DrawSprite(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return _ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_S3_S3_(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


// ============================================================

// Address: 0x19516c
// Original: j__ZN10MenuScreen10DrawSpriteEP9RwTextureP9CVector2DS3_P5CRGBAb
// Demangled: MenuScreen::DrawSprite(RwTexture *,CVector2D *,CVector2D *,CRGBA *,bool)
// attributes: thunk
int __fastcall MenuScreen::DrawSprite(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _ZN10MenuScreen10DrawSpriteEP9RwTextureP9CVector2DS3_P5CRGBAb(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x197220
// Original: j__ZN10MenuScreen10PushScreenEPS_b
// Demangled: MenuScreen::PushScreen(MenuScreen*,bool)
// attributes: thunk
int __fastcall MenuScreen::PushScreen(MenuScreen *this, MenuScreen *a2, bool a3)
{
  return _ZN10MenuScreen10PushScreenEPS_b(this, a2, a3);
}


// ============================================================

// Address: 0x198ea0
// Original: j__ZN10MenuScreen8DrawQuadEP9CVector2DP5CRGBA
// Demangled: MenuScreen::DrawQuad(CVector2D *,CRGBA *)
// attributes: thunk
int MenuScreen::DrawQuad()
{
  return _ZN10MenuScreen8DrawQuadEP9CVector2DP5CRGBA();
}


// ============================================================

// Address: 0x19b9a4
// Original: j__ZN10MenuScreen10DrawSliderE9CVector2DS0_fbhb
// Demangled: MenuScreen::DrawSlider(CVector2D,CVector2D,float,bool,uchar,bool)
// attributes: thunk
int __fastcall MenuScreen::DrawSlider(int a1, int a2, int a3, int a4, float a5, float a6, int a7, unsigned __int8 a8)
{
  return _ZN10MenuScreen10DrawSliderE9CVector2DS0_fbhb(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19bf68
// Original: j__ZN10MenuScreen14DrawTextDirectEPt9TextAligni5CRGBAb9CVector2DS3_bPi
// Demangled: MenuScreen::DrawTextDirect(ushort *,TextAlign,int,CRGBA,bool,CVector2D,CVector2D,bool,int *)
// attributes: thunk
int __fastcall MenuScreen::DrawTextDirect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  return _ZN10MenuScreen14DrawTextDirectEPt9TextAligni5CRGBAb9CVector2DS3_bPi(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13);
}


// ============================================================

// Address: 0x19c6c0
// Original: j__ZN10MenuScreen8DrawBackEb
// Demangled: MenuScreen::DrawBack(bool)
// attributes: thunk
int __fastcall MenuScreen::DrawBack(MenuScreen *this, bool a2)
{
  return _ZN10MenuScreen8DrawBackEb(this, a2);
}


// ============================================================

// Address: 0x29773c
// Original: _ZN10MenuScreenC2Eb
// Demangled: MenuScreen::MenuScreen(bool)
void __fastcall MenuScreen::MenuScreen(MenuScreen *this, bool a2)
{
  int Texture; // r0

  *((_BYTE *)this + 12) = a2;
  *(_DWORD *)this = &off_6625A0;
  Texture = TextureDatabaseRuntime::GetTexture((TextureDatabaseRuntime *)"menu_selector", (const char *)&off_6625A0);
  ++*(_DWORD *)(Texture + 84);
  *(_QWORD *)((char *)this + 4) = (unsigned int)Texture;
}


// ============================================================

// Address: 0x297770
// Original: _ZN10MenuScreenD2Ev
// Demangled: MenuScreen::~MenuScreen()
void __fastcall MenuScreen::~MenuScreen(MenuScreen *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = &off_6625A0;
  if ( v2 )
  {
    RwTextureDestroy(v2);
    *((_DWORD *)this + 1) = 0;
  }
}


// ============================================================

// Address: 0x297794
// Original: _ZN10MenuScreenD0Ev
// Demangled: MenuScreen::~MenuScreen()
void __fastcall __noreturn MenuScreen::~MenuScreen(MenuScreen *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x297796
// Original: _ZN10MenuScreen6UpdateEf
// Demangled: MenuScreen::Update(float)
int __fastcall MenuScreen::Update(int this, float a2)
{
  float v2; // s2
  float v3; // s2

  v2 = *(float *)(this + 8);
  if ( v2 < 1.0 )
  {
    v3 = (float)(a2 * 5.0) + v2;
    *(float *)(this + 8) = v3;
    if ( v3 > 1.0 )
      *(_DWORD *)(this + 8) = 1065353216;
  }
  return this;
}


// ============================================================

// Address: 0x297850
// Original: _ZN10MenuScreen8DrawBackEb
// Demangled: MenuScreen::DrawBack(bool)
int __fastcall MenuScreen::DrawBack(MenuScreen *this, float a2)
{
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  float v6; // s18
  float v7; // s22
  float v8; // s0
  bool v9; // r1
  float v10; // r1
  float v11; // s22
  float v12; // s18
  float v13; // s18
  bool v14; // r1
  float v15; // s16
  float v16; // s0
  _BOOL4 v17; // r0
  float v18; // s0
  int v19; // r2
  int v20; // r1
  int v21; // r0
  float v22; // s20
  int v23; // r4
  char *v24; // r1
  int v25; // r0
  float v26; // s20
  float v27; // s22
  int *v28; // r0
  int v29; // r5
  _BYTE *v30; // r6
  int *HelpSprite; // r0
  int v32; // r5
  int v33; // r0
  int *v34; // r0
  int result; // r0
  int v36; // r0
  float v37; // r11
  int *v38; // r0
  int v39; // r5
  int v40; // r5
  _BYTE v41[4]; // [sp+24h] [bp-CCh] BYREF
  _BYTE v42[4]; // [sp+28h] [bp-C8h] BYREF
  int v43; // [sp+2Ch] [bp-C4h] BYREF
  _BYTE v44[4]; // [sp+30h] [bp-C0h] BYREF
  int v45; // [sp+34h] [bp-BCh] BYREF
  _BYTE v46[4]; // [sp+38h] [bp-B8h] BYREF
  int v47; // [sp+3Ch] [bp-B4h] BYREF
  float v48; // [sp+40h] [bp-B0h] BYREF
  int v49; // [sp+44h] [bp-ACh] BYREF
  int v50; // [sp+48h] [bp-A8h] BYREF
  int v51; // [sp+4Ch] [bp-A4h] BYREF
  _QWORD v52[4]; // [sp+50h] [bp-A0h] BYREF
  float v53; // [sp+70h] [bp-80h] BYREF
  float v54; // [sp+74h] [bp-7Ch]
  float v55; // [sp+78h] [bp-78h]
  float v56; // [sp+7Ch] [bp-74h]
  float v57; // [sp+80h] [bp-70h]
  float v58; // [sp+84h] [bp-6Ch]
  float v59; // [sp+88h] [bp-68h]
  float v60; // [sp+8Ch] [bp-64h]
  _BYTE v61[4]; // [sp+90h] [bp-60h] BYREF
  int v62; // [sp+94h] [bp-5Ch] BYREF
  int v63; // [sp+98h] [bp-58h] BYREF
  _DWORD v64[21]; // [sp+9Ch] [bp-54h] BYREF

  v6 = (float)dword_9FC904;
  v7 = (float)dword_9FC900;
  CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), a2);
  v2.n64_u32[0] = 12.5;
  v3.n64_f32[0] = v7 * 0.0;
  v8 = (float)dword_9FC904;
  v11 = (float)((float)((float)(v7 - vmax_f32(v3, v2).n64_f32[0]) * 480.0) + (float)(v7 * -240.0)) / v6;
  v12 = 440.5;
  if ( (float)((float)((float)((float)(v8 - (float)(v8 * 0.0)) - COERCE_FLOAT(CFont::GetHeight(0, v9))) * 480.0)
             / (float)dword_9FC904) < 440.5 )
  {
    CFont::SetScale(COERCE_CFONT_((float)((float)dword_9FC904 * 1.35) / 480.0), v10);
    v13 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.0);
    v12 = (float)((float)(v13 - COERCE_FLOAT(CFont::GetHeight(0, v14))) * 480.0) / (float)dword_9FC904;
  }
  v15 = v11 + 320.0;
  if ( byte_6E00DA )
  {
    v16 = *((float *)&gMobileMenu + 2 * lastDevice + 28);
    v17 = 0;
    if ( v16 >= (float)(v15 + -120.0) && v16 <= v15 )
    {
      v18 = *((float *)&gMobileMenu + 2 * lastDevice + 29);
      v17 = 0;
      if ( v18 >= v12 && v18 <= (float)(v12 + 27.0) )
        v17 = *((_DWORD *)&gMobileMenu + lastDevice + 36) == 3;
    }
  }
  else
  {
    v17 = 0;
  }
  if ( IsDownloadBack )
  {
    if ( v17 )
      CRGBA::CRGBA((CRGBA *)&v63, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    else
      CRGBA::CRGBA((CRGBA *)&v63, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v19 = CText::Get((CText *)TheText, (CKeyGen *)"EXIT");
    v20 = v63;
  }
  else
  {
    if ( v17 )
      CRGBA::CRGBA((CRGBA *)&v62, 0xF0u, 0xF0u, 0xF0u, 0xFFu);
    else
      CRGBA::CRGBA((CRGBA *)&v62, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    v21 = CText::Get((CText *)TheText, (CKeyGen *)"FEDS_TB");
    v20 = v62;
    v19 = v21;
  }
  LODWORD(v52[0]) = v20;
  MenuScreen::DrawTextDirect(
    (int)&v53,
    (int)this,
    v19,
    2,
    0,
    (int)v52,
    1,
    COERCE_INT(v15 + -120.0),
    SLODWORD(v12),
    1123024896,
    1104674816,
    0,
    0);
  v22 = v53;
  if ( CHID::Implements() == 1 && CHID::GetInputType((CHID *)((char *)&stderr + 1)) != 2 )
  {
    v53 = 0.0;
    v54 = 0.0;
    v52[0] = 0x3F8000003F800000LL;
    HelpSprite = (int *)CHID::GetHelpSprite();
    if ( HelpSprite )
    {
      v32 = *HelpSprite;
      CRGBA::CRGBA((CRGBA *)v61, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      MenuScreen::DrawSprite(
        (int)this,
        v32,
        (int)v61,
        COERCE_INT(v22 + -25.0),
        v12 + 5.0,
        v22 + -5.0,
        v12 + 25.0,
        SLODWORD(v53),
        SLODWORD(v54),
        v52[0],
        SHIDWORD(v52[0]));
    }
  }
  else
  {
    v52[0] = 0LL;
    v52[1] = 1065353216LL;
    v52[2] = 0x3F80000000000000LL;
    v52[3] = 0x3F8000003F800000LL;
    v57 = v22 + -32.0;
    v59 = v22 + -32.0;
    v54 = v12 + 4.0;
    v53 = v22 + -4.0;
    v55 = v22 + -4.0;
    v56 = v12 + 23.0;
    v58 = v12 + 4.0;
    v60 = v12 + 23.0;
    CRGBA::CRGBA((CRGBA *)&v48, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    CRGBA::CRGBA((CRGBA *)&v49, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    CRGBA::CRGBA((CRGBA *)&v50, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    CRGBA::CRGBA((CRGBA *)&v51, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
    MenuScreen::DrawSprite((int)this, *((_DWORD *)this + 1), (int)&v53, (int)v52, (int)&v48, 0);
  }
  if ( CHID::Implements() == 1 && CHID::GetInputType((CHID *)((char *)&stderr + 1)) == 1 && a2 != 0.0 )
  {
    v53 = 0.0;
    v54 = 0.0;
    v52[0] = 0x3F8000003F800000LL;
    if ( byte_6E00D9 )
    {
      if ( !(((unsigned __int8)CTheScripts::HideAllFrontEndMapBlips | (unsigned __int8)CTheScripts::bPlayerIsOffTheMap) << 24) )
      {
        v23 = dword_6E00B4;
        CRGBA::CRGBA((CRGBA *)&v47, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
        v24 = "FEH_REM";
        if ( !v23 )
          v24 = "FEH_WAY";
        v25 = CText::Get((CText *)TheText, (CKeyGen *)v24);
        v26 = -25.0;
        v64[0] = v47;
        MenuScreen::DrawTextDirect(
          (int)&v48,
          (int)this,
          v25,
          2,
          0,
          (int)v64,
          1,
          COERCE_INT(v15 + -90.0),
          COERCE_INT(v12 + -25.0),
          1119092736,
          1104674816,
          0,
          0);
        v27 = v48;
        v28 = (int *)CHID::GetHelpSprite();
        if ( v28 )
        {
          v29 = *v28;
          v30 = v46;
          CRGBA::CRGBA((CRGBA *)v46, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
LABEL_35:
          MenuScreen::DrawSprite(
            (int)this,
            v29,
            (int)v30,
            COERCE_INT(v27 + v26),
            v12 + -20.0,
            v27 + -5.0,
            v12,
            SLODWORD(v53),
            SLODWORD(v54),
            v52[0],
            SHIDWORD(v52[0]));
        }
      }
    }
    else
    {
      CRGBA::CRGBA((CRGBA *)&v45, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
      v26 = -25.0;
      v33 = CText::Get((CText *)TheText, (CKeyGen *)"FEH_SEL");
      v64[0] = v45;
      MenuScreen::DrawTextDirect(
        (int)&v48,
        (int)this,
        v33,
        2,
        0,
        (int)v64,
        1,
        COERCE_INT(v15 + -120.0),
        COERCE_INT(v12 + -25.0),
        1123024896,
        1104674816,
        0,
        0);
      v27 = v48;
      v34 = (int *)CHID::GetHelpSprite();
      if ( v34 )
      {
        v29 = *v34;
        v30 = v44;
        CRGBA::CRGBA((CRGBA *)v44, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
        goto LABEL_35;
      }
    }
  }
  result = (unsigned __int8)byte_6E00D9;
  if ( byte_6E00D9 )
  {
    result = (int)&mapModeOpacity;
    if ( mapModeOpacity == 1.0 )
    {
      result = CHID::GetInputType((CHID *)&mapModeOpacity);
      if ( result == 1 )
      {
        result = CHID::Implements();
        if ( result == 1 )
        {
          result = CHID::Implements();
          if ( result == 1 )
          {
            CRGBA::CRGBA((CRGBA *)&v43, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
            v36 = CText::Get((CText *)TheText, (CKeyGen *)"FEI_ZOO");
            LODWORD(v52[0]) = v43;
            MenuScreen::DrawTextDirect(
              (int)&v53,
              (int)this,
              v36,
              2,
              0,
              (int)v52,
              1,
              COERCE_INT(v15 + -120.0),
              1101004800,
              1123024896,
              1104674816,
              0,
              0);
            v37 = v53;
            v53 = 0.0;
            v54 = 0.0;
            v52[0] = 0x3F8000003F800000LL;
            v38 = (int *)CHID::GetHelpSprite();
            if ( v38 )
            {
              v39 = *v38;
              CRGBA::CRGBA((CRGBA *)v42, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
              MenuScreen::DrawSprite(
                (int)this,
                v39,
                (int)v42,
                COERCE_INT(v37 + -25.0),
                25.0,
                v37 + -5.0,
                45.0,
                SLODWORD(v53),
                SLODWORD(v54),
                v52[0],
                SHIDWORD(v52[0]));
            }
            result = CHID::GetHelpSprite();
            if ( result )
            {
              v40 = *(_DWORD *)result;
              CRGBA::CRGBA((CRGBA *)v41, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
              return MenuScreen::DrawSprite(
                       (int)this,
                       v40,
                       (int)v41,
                       COERCE_INT(v37 + -45.0),
                       25.0,
                       v37 + -25.0,
                       45.0,
                       SLODWORD(v53),
                       SLODWORD(v54),
                       v52[0],
                       SHIDWORD(v52[0]));
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x298004
// Original: _ZN10MenuScreen8DrawTextEPKc9TextAligni5CRGBAb9CVector2DS4_b
// Demangled: MenuScreen::DrawText(char const*,TextAlign,int,CRGBA,bool,CVector2D,CVector2D,bool)
int __fastcall MenuScreen::DrawText(
        int a1,
        int a2,
        CKeyGen *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v15; // r0
  _DWORD v17[5]; // [sp+24h] [bp-14h] BYREF

  v15 = CText::Get((CText *)TheText, a3);
  v17[0] = *a6;
  return MenuScreen::DrawTextDirect(a1, a2, v15, a4, a5, (int)v17, a7, a8, a9, a10, a11, a12, 0);
}


// ============================================================

// Address: 0x298064
// Original: _ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_S3_S3_
// Demangled: MenuScreen::DrawSprite(RwTexture *,CRGBA,CVector2D,CVector2D,CVector2D,CVector2D)
// local variable allocation has failed, the output may be wrong!
int __fastcall MenuScreen::DrawSprite(
        int a1,
        _DWORD *a2,
        int a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // r5
  float v13; // s16
  float v14; // s18

  *(_BYTE *)(a3 + 3) = (unsigned int)(float)(*(float *)(a1 + 8) * (float)*(unsigned __int8 *)(a3 + 3));
  v12 = *(_DWORD *)a3;
  v13 = (float)dword_9FC900;
  v14 = (float)dword_9FC904;
  RwRenderStateSet(1, *a2);
  dword_6E0140 = 1065353216;
  dword_6E0144 = 1065353216;
  *(_QWORD *)&qword_6E014C = *(_QWORD *)&a8;
  dword_6E0148 = v12;
  MEMORY[0x6E016C] = a9;
  qword_6E0184 = a8;
  dword_6E0164 = v12;
  qword_6E0168 = a10;
  dword_6E015C = 1065353216;
  dword_6E0160 = 1065353216;
  *(float *)&maVertices = (float)(v13 * 0.5) + (float)((float)((float)(a4 + -320.0) * v14) / 480.0);
  *(float *)&dword_6E013C = (float)(a5 * v14) / 480.0;
  *(float *)&qword_6E0154 = (float)(v13 * 0.5) + (float)((float)((float)(a6 + -320.0) * v14) / 480.0);
  *(float *)&MEMORY[0x6E0158] = (float)(a5 * v14) / 480.0;
  dword_6E0178 = 1065353216;
  dword_6E017C = 1065353216;
  MEMORY[0x6E0188] = a11;
  dword_6E0180 = v12;
  qword_6E0170 = maVertices;
  *(float *)&MEMORY[0x6E0174] = (float)(a7 * v14) / 480.0;
  dword_6E0194 = 1065353216;
  dword_6E0198 = 1065353216;
  qword_6E01A0 = a10;
  MEMORY[0x6E01A4] = a11;
  dword_6E019C = v12;
  qword_6E018C = qword_6E0154;
  *(float *)&MEMORY[0x6E0190] = (float)(a7 * v14) / 480.0;
  return j_RwIm2DRenderPrimitive_BUGFIX();
}


// ============================================================

// Address: 0x2981b0
// Original: _ZN10MenuScreen10DrawSpriteEP9RwTextureP9CVector2DS3_P5CRGBAb
// Demangled: MenuScreen::DrawSprite(RwTexture *,CVector2D *,CVector2D *,CRGBA *,bool)
int __fastcall MenuScreen::DrawSprite(int a1, int a2, float *a3, int a4, _BYTE *a5, int a6)
{
  unsigned int v6; // r5
  unsigned int v7; // r6
  float v8; // s2
  float v9; // s6
  float v10; // s8
  float v11; // s4
  float v12; // s4
  float v13; // s8
  float v14; // s2
  float v15; // s6
  float v16; // s8
  float v17; // s4
  float v18; // s0

  if ( !a6 )
  {
    v6 = (unsigned __int8)a5[11];
    v7 = (unsigned __int8)a5[15];
    v8 = (float)(unsigned __int8)a5[7];
    a5[3] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)(unsigned __int8)a5[3]);
    a5[7] = (unsigned int)(float)(*(float *)(a1 + 8) * v8);
    a5[11] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v6);
    a5[15] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v7);
  }
  v9 = a3[2] + -320.0;
  v10 = a3[3];
  v11 = (float)(a3[1] * (float)dword_9FC904) / 480.0;
  *a3 = (float)((float)dword_9FC900 * 0.5) + (float)((float)((float)(*a3 + -320.0) * (float)dword_9FC904) / 480.0);
  a3[1] = v11;
  v12 = v10 * (float)dword_9FC904;
  v13 = a3[4];
  v14 = (float)dword_9FC900 * 0.5;
  a3[2] = v14 + (float)((float)(v9 * (float)dword_9FC904) / 480.0);
  v15 = v13 + -320.0;
  a3[3] = v12 / 480.0;
  v16 = (float)(a3[5] * (float)dword_9FC904) / 480.0;
  v17 = (float)(a3[7] * (float)dword_9FC904) / 480.0;
  v18 = v14 + (float)((float)((float)(a3[6] + -320.0) * (float)dword_9FC904) / 480.0);
  a3[4] = v14 + (float)((float)(v15 * (float)dword_9FC904) / 480.0);
  a3[5] = v16;
  a3[6] = v18;
  a3[7] = v17;
  return MobileMenu::DrawSprite(a2, a3, a4, a5);
}


// ============================================================

// Address: 0x298344
// Original: _ZN10MenuScreen6RenderEi
// Demangled: MenuScreen::Render(int)
_BYTE *__fastcall MenuScreen::Render(_BYTE *this, int a2)
{
  if ( this[12] )
    return (_BYTE *)(*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)this + 40))(this, 1);
  return this;
}


// ============================================================

// Address: 0x298354
// Original: _ZN10MenuScreen10PushScreenEPS_b
// Demangled: MenuScreen::PushScreen(MenuScreen*,bool)
void *__fastcall MenuScreen::PushScreen(MenuScreen *this, MenuScreen *a2, bool a3)
{
  int v5; // r5
  unsigned int v6; // r9
  void *v7; // r8
  void *v8; // r6
  void *result; // r0

  if ( dword_6E0090 )
    (*(void (__fastcall **)(MenuScreen *, _DWORD))(*(_DWORD *)this + 20))(
      this,
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  if ( dword_6E0098 )
    MobileMenu::ProcessPending((MobileMenu *)&gMobileMenu);
  if ( a2 == (MenuScreen *)((char *)&stderr + 1) )
  {
    v5 = dword_6E0090;
    if ( dword_6E008C >= (unsigned int)(dword_6E0090 + 1) )
    {
      v7 = (void *)dword_6E0094;
    }
    else
    {
      v6 = 4 * (dword_6E0090 + 1) / 3u + 3;
      v7 = malloc(4 * v6);
      v8 = (void *)dword_6E0094;
      if ( dword_6E0094 )
      {
        memcpy_0(v7, (const void *)dword_6E0094, 4 * v5);
        free(v8);
        v5 = dword_6E0090;
      }
      dword_6E0094 = (int)v7;
      dword_6E008C = v6;
    }
    *((_DWORD *)v7 + v5) = this;
    ++dword_6E0090;
    return (void *)(*(int (__fastcall **)(MenuScreen *))(*(_DWORD *)this + 16))(this);
  }
  else
  {
    result = &gMobileMenu;
    dword_6E0098 = (int)this;
  }
  return result;
}


// ============================================================

// Address: 0x2984f4
// Original: _ZN10MenuScreen9PopScreenEb
// Demangled: MenuScreen::PopScreen(bool)
int __fastcall MenuScreen::PopScreen(MenuScreen *this, bool a2)
{
  char v2; // r4

  v2 = (char)this;
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, v2, 0);
}


// ============================================================

// Address: 0x2985f8
// Original: _ZN10MenuScreen8DrawQuadE9CVector2DS0_P5CRGBA
// Demangled: MenuScreen::DrawQuad(CVector2D,CVector2D,CRGBA *)
int __fastcall MenuScreen::DrawQuad(int a1, float a2, float a3, float a4, float a5, _BYTE *a6)
{
  unsigned int v6; // r5
  unsigned int v7; // r6
  float v8; // s2

  v6 = (unsigned __int8)a6[11];
  v7 = (unsigned __int8)a6[15];
  v8 = (float)(unsigned __int8)a6[7];
  a6[3] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)(unsigned __int8)a6[3]);
  a6[7] = (unsigned int)(float)(*(float *)(a1 + 8) * v8);
  a6[11] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v6);
  a6[15] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v7);
  return MobileMenu::DrawQuad(
           COERCE_INT((float)((float)dword_9FC900 * 0.5) + (float)((float)((float)(a2 + -320.0) * (float)dword_9FC904)
                                                                 / 480.0)),
           COERCE_INT((float)(a3 * (float)dword_9FC904) / 480.0),
           COERCE_INT((float)((float)dword_9FC900 * 0.5) + (float)((float)((float)(a4 + -320.0) * (float)dword_9FC904)
                                                                 / 480.0)),
           COERCE_INT((float)(a5 * (float)dword_9FC904) / 480.0),
           (int)a6);
}


// ============================================================

// Address: 0x2987dc
// Original: _ZN10MenuScreen8DrawQuadE9CVector2DS0_5CRGBA
// Demangled: MenuScreen::DrawQuad(CVector2D,CVector2D,CRGBA)
int __fastcall MenuScreen::DrawQuad(int a1, float a2, float a3, float a4, float a5, int a6)
{
  int v9; // r4
  int32x4_t v10; // q8
  float v11; // s16
  float v12; // s18

  *(_BYTE *)(a6 + 3) = (unsigned int)(float)(*(float *)(a1 + 8) * (float)*(unsigned __int8 *)(a6 + 3));
  v9 = *(_DWORD *)a6;
  v10 = vdupq_n_s32(*(_DWORD *)a6);
  v11 = (float)dword_9FC900;
  v12 = (float)dword_9FC904;
  RwRenderStateSet(1, 0);
  dword_6E0140 = 1065353216;
  dword_6E0144 = 1065353216;
  qword_6E014C = 0;
  MEMORY[0x6E0150] = 0;
  dword_6E0148 = v9;
  dword_6E0164 = v9;
  qword_6E0168 = 1065353216;
  MEMORY[0x6E016C] = 0;
  dword_6E015C = 1065353216;
  dword_6E0160 = 1065353216;
  *(float *)&maVertices = (float)(v11 * 0.5) + (float)((float)((float)(a2 + -320.0) * v12) / 480.0);
  *(float *)&dword_6E013C = (float)(a3 * v12) / 480.0;
  *(float *)&qword_6E0154 = (float)(v11 * 0.5) + (float)((float)((float)(a4 + -320.0) * v12) / 480.0);
  *(float *)&MEMORY[0x6E0158] = (float)(a3 * v12) / 480.0;
  qword_6E0170 = maVertices;
  dword_6E0178 = 1065353216;
  dword_6E017C = 1065353216;
  qword_6E0184 = 0;
  MEMORY[0x6E0188] = 1065353216;
  dword_6E0180 = v9;
  *(float *)&MEMORY[0x6E0174] = (float)(a5 * v12) / 480.0;
  dword_6E0194 = 1065353216;
  dword_6E0198 = 1065353216;
  qword_6E01A0 = 1065353216;
  MEMORY[0x6E01A4] = 1065353216;
  LOWORD(dword_6E019C) = v9;
  BYTE2(dword_6E019C) = BYTE2(v9);
  qword_6E018C = qword_6E0154;
  *(float *)&MEMORY[0x6E0190] = (float)(a5 * v12) / 480.0;
  HIBYTE(dword_6E019C) = v10.n128_u8[15];
  return RwIm2DRenderPrimitive_BUGFIX(4, &maVertices, 4);
}


// ============================================================

// Address: 0x298948
// Original: _ZN10MenuScreen8DrawQuadEP9CVector2DP5CRGBA
// Demangled: MenuScreen::DrawQuad(CVector2D *,CRGBA *)
int __fastcall MenuScreen::DrawQuad(int a1, float *a2, _BYTE *a3)
{
  unsigned int v3; // lr
  unsigned int v4; // r4
  float v5; // s2
  float v6; // s8
  float v7; // s6
  float v8; // s4
  float v9; // s4
  float v10; // s8
  float v11; // s0
  float v12; // s6
  float v13; // s8
  float v14; // s4
  float v15; // s6
  float v16; // s0

  v3 = (unsigned __int8)a3[11];
  v4 = (unsigned __int8)a3[15];
  v5 = (float)(unsigned __int8)a3[7];
  a3[3] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)(unsigned __int8)a3[3]);
  a3[7] = (unsigned int)(float)(*(float *)(a1 + 8) * v5);
  a3[11] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v3);
  a3[15] = (unsigned int)(float)(*(float *)(a1 + 8) * (float)v4);
  v6 = a2[3];
  v7 = a2[2] + -320.0;
  v8 = (float)(a2[1] * (float)dword_9FC904) / 480.0;
  *a2 = (float)((float)dword_9FC900 * 0.5) + (float)((float)((float)(*a2 + -320.0) * (float)dword_9FC904) / 480.0);
  a2[1] = v8;
  v9 = v6 * (float)dword_9FC904;
  v10 = a2[4];
  v11 = (float)dword_9FC900 * 0.5;
  a2[2] = v11 + (float)((float)(v7 * (float)dword_9FC904) / 480.0);
  v12 = v10 + -320.0;
  a2[3] = v9 / 480.0;
  v13 = (float)(a2[5] * (float)dword_9FC904) / 480.0;
  v14 = (float)(a2[7] * (float)dword_9FC904) / 480.0;
  v15 = v11 + (float)((float)(v12 * (float)dword_9FC904) / 480.0);
  v16 = v11 + (float)((float)((float)(a2[6] + -320.0) * (float)dword_9FC904) / 480.0);
  a2[4] = v15;
  a2[5] = v13;
  a2[6] = v16;
  a2[7] = v14;
  return MobileMenu::DrawQuad(a2, a3);
}


// ============================================================

// Address: 0x298d34
// Original: _ZN10MenuScreen10DrawSpriteEP9RwTexture5CRGBA9CVector2DS3_b
// Demangled: MenuScreen::DrawSprite(RwTexture *,CRGBA,CVector2D,CVector2D,bool)
int __fastcall MenuScreen::DrawSprite(int a1, _DWORD *a2, int a3, float a4, float a5, float a6, float a7, int a8)
{
  int v9; // r5
  float v10; // s16
  float v11; // s18

  if ( !a8 )
    *(_BYTE *)(a3 + 3) = (unsigned int)(float)(*(float *)(a1 + 8) * (float)*(unsigned __int8 *)(a3 + 3));
  v9 = *(_DWORD *)a3;
  v10 = (float)dword_9FC900;
  v11 = (float)dword_9FC904;
  RwRenderStateSet(1, *a2);
  dword_6E0140 = 1065353216;
  dword_6E0144 = 1065353216;
  qword_6E014C = 0LL;
  dword_6E0148 = v9;
  dword_6E0164 = v9;
  qword_6E0168 = 1065353216LL;
  dword_6E015C = 1065353216;
  dword_6E0160 = 1065353216;
  *(float *)&maVertices = (float)(v10 * 0.5) + (float)((float)((float)(a4 + -320.0) * v11) / 480.0);
  *(float *)&dword_6E013C = (float)(a5 * v11) / 480.0;
  *(float *)&qword_6E0154 = (float)(v10 * 0.5) + (float)((float)((float)(a6 + -320.0) * v11) / 480.0);
  *((float *)&qword_6E0154 + 1) = (float)(a5 * v11) / 480.0;
  *(float *)&qword_6E0170 = *(float *)&maVertices;
  dword_6E0178 = 1065353216;
  dword_6E017C = 1065353216;
  qword_6E0184 = 0x3F80000000000000LL;
  dword_6E0180 = v9;
  *((float *)&qword_6E0170 + 1) = (float)(a7 * v11) / 480.0;
  dword_6E0194 = 1065353216;
  dword_6E0198 = 1065353216;
  qword_6E01A0 = 0x3F8000003F800000LL;
  dword_6E019C = v9;
  *(float *)&qword_6E018C = *(float *)&qword_6E0154;
  *((float *)&qword_6E018C + 1) = (float)(a7 * v11) / 480.0;
  return j_RwIm2DRenderPrimitive_BUGFIX();
}


// ============================================================

// Address: 0x298f4c
// Original: _ZN10MenuScreen12DoesTextWrapEPti9CVector2D
// Demangled: MenuScreen::DoesTextWrap(ushort *,int,CVector2D)
bool __fastcall MenuScreen::DoesTextWrap(int a1, CFont *a2, unsigned __int8 a3, float a4, float a5)
{
  float v7; // s16
  float v8; // r1
  float v9; // r1
  unsigned __int8 v10; // r3

  CFont::SetFontStyle((CFont *)a3, (unsigned __int8)a2);
  v7 = (float)dword_9FC900;
  CFont::SetScale(COERCE_CFONT_((float)((float)(a5 * 0.05) * (float)dword_9FC904) / 480.0), v8);
  CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v9);
  return COERCE_FLOAT(CFont::GetStringWidth(a2, (unsigned __int16 *)((char *)&stderr + 1), 0, v10)) > (float)((float)(a4 * v7) / 640.0);
}


// ============================================================

// Address: 0x298ff4
// Original: _ZN10MenuScreen14DrawTextDirectEPt9TextAligni5CRGBAb9CVector2DS3_bPi
// Demangled: MenuScreen::DrawTextDirect(ushort *,TextAlign,int,CRGBA,bool,CVector2D,CVector2D,bool,int *)
int *__fastcall MenuScreen::DrawTextDirect(
        float *a1,
        int a2,
        CFont *a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        int a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12,
        int *a13)
{
  signed __int8 v15; // r1
  float *v16; // r0
  signed __int8 v17; // r1
  float v18; // r4
  unsigned __int8 v19; // r1
  float v20; // s18
  float v21; // s22
  float v22; // r1
  unsigned __int8 v23; // r3
  float v24; // s0
  float v25; // s18
  float v26; // s20
  bool v27; // r1
  int v28; // r0
  float v29; // r1
  int v30; // r6
  float v31; // s24
  bool v32; // r1
  float v33; // s26
  float v34; // s0
  float v35; // s22
  float v36; // s26
  int Width; // r0
  unsigned __int16 *v38; // r3
  int *result; // r0
  float v40; // s0
  float v41; // s4
  _BYTE *v42; // [sp+8h] [bp-70h]
  _BYTE v45[4]; // [sp+14h] [bp-64h] BYREF
  _BYTE v46[4]; // [sp+18h] [bp-60h] BYREF
  _BYTE v47[92]; // [sp+1Ch] [bp-5Ch] BYREF

  if ( a7 == 1 )
  {
    v42 = a6 + 3;
    CRGBA::CRGBA((CRGBA *)v47, 0, 0, 0, (unsigned int)(float)(*(float *)(a2 + 8) * (float)a6[3]));
    CFont::SetDropColor();
    CFont::SetEdge((CFont *)((char *)&stderr + 1), v15);
    v16 = (float *)(a2 + 8);
  }
  else
  {
    CRGBA::CRGBA((CRGBA *)v46, 0, 0, 0, 0);
    CFont::SetDropColor();
    CFont::SetEdge(0, v17);
    v16 = (float *)(a2 + 8);
    v42 = a6 + 3;
  }
  v18 = a9;
  CRGBA::CRGBA((CRGBA *)v45, *a6, a6[1], a6[2], (unsigned int)(float)(*v16 * (float)a6[3]));
  CFont::SetColor();
  CFont::SetFontStyle((CFont *)a5, v19);
  v20 = (float)dword_9FC904;
  v21 = (float)((float)(a11 * 0.05) * (float)dword_9FC904) / 480.0;
  CFont::SetScale((CFont *)LODWORD(v21), v22);
  v24 = a10 * v20;
  v25 = COERCE_FLOAT(CFont::GetStringWidth(a3, (unsigned __int16 *)((char *)&stderr + 1), 0, v23));
  v26 = v24 / 480.0;
  *(float *)&v28 = COERCE_FLOAT(CFont::GetHeight(0, v27));
  v30 = (v25 > (float)(v24 / 480.0)) & (unsigned __int8)a12;
  if ( v25 > (float)(v24 / 480.0) && !a12 )
  {
    v31 = *(float *)&v28;
    CFont::SetScale(COERCE_CFONT_(v21 * (float)(v26 / v25)), v29);
    v30 = 0;
    v25 = v24 / 480.0;
    v18 = (float)((float)(v31 - COERCE_FLOAT(CFont::GetHeight(0, v32))) * 0.5) + a9;
  }
  v33 = (float)dword_9FC904;
  v34 = (float)dword_9FC900;
  v35 = (float)((float)dword_9FC900 * 0.5) + (float)((float)((float)(a8 + -320.0) * (float)dword_9FC904) / 480.0);
  if ( v30 == 1 )
    v34 = v26 + v35;
  CFont::SetWrapx((CFont *)LODWORD(v34), a8);
  v36 = v18 * v33;
  Width = OS_ScreenGetWidth();
  if ( a4 == 2 )
  {
    v35 = (float)((float)(v26 - v25) + -0.5) + v35;
  }
  else if ( a4 == 1 )
  {
    v35 = (float)((float)(unsigned int)Width - v25) * 0.5;
  }
  if ( a13 )
    *a13 = CFont::GetNumberLines((CFont *)LODWORD(v35), v36 / 480.0, *(float *)&a3, v38);
  if ( *v42 )
    CFont::PrintString((CFont *)LODWORD(v35), v36 / 480.0, a3, v38);
  result = &RsGlobal;
  v40 = (float)dword_9FC900 * 240.0;
  v41 = (float)((float)((float)((float)(v25 + v35) * 480.0) - v40) / (float)dword_9FC904) + 320.0;
  *a1 = (float)((float)((float)(v35 * 480.0) - v40) / (float)dword_9FC904) + 320.0;
  a1[1] = v41;
  return result;
}


// ============================================================

// Address: 0x29928c
// Original: _ZN10MenuScreen8DrawTextEPt9TextAligni5CRGBAb9CVector2DS3_b
// Demangled: MenuScreen::DrawText(ushort *,TextAlign,int,CRGBA,bool,CVector2D,CVector2D,bool)
int __fastcall MenuScreen::DrawText(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD v13[8]; // [sp+28h] [bp-20h] BYREF

  v13[0] = *a6;
  return MenuScreen::DrawTextDirect(a1, a2, a3, a4, a5, (int)v13, a7, a8, a9, a10, a11, a12, 0);
}


// ============================================================

// Address: 0x2992d8
// Original: _ZN10MenuScreen10DrawSliderE9CVector2DS0_fbhb
// Demangled: MenuScreen::DrawSlider(CVector2D,CVector2D,float,bool,uchar,bool)
int __fastcall MenuScreen::DrawSlider(int a1, int a2, int a3, float a4, float a5, float a6, int a7, unsigned int a8)
{
  float32x2_t v8; // d0
  float32x2_t v9; // d1
  float32x2_t v10; // d4
  float32x2_t v11; // d13
  float v16; // s20
  float v18; // s22
  float v19; // s0
  float v20; // s6
  bool v21; // nf
  float v22; // s28
  float v23; // s24
  float v24; // s30
  int v25; // r5
  int v26; // s4
  float v27; // s19
  int v28; // r6
  int v29; // r6
  int v30; // r4
  int v31; // r6
  int v32; // s0
  int v33; // r5
  CFont *v34; // r0
  float v35; // s24
  int v36; // r0
  int v37; // r0
  int v38; // r4
  int v39; // r3
  _BYTE v41[4]; // [sp+28h] [bp-E8h] BYREF
  _BYTE v42[4]; // [sp+2Ch] [bp-E4h] BYREF
  _BYTE v43[8]; // [sp+30h] [bp-E0h] BYREF
  _BYTE v44[4]; // [sp+38h] [bp-D8h] BYREF
  unsigned __int16 v45[32]; // [sp+3Ch] [bp-D4h] BYREF
  _BYTE v46[4]; // [sp+7Ch] [bp-94h] BYREF
  _BYTE v47[4]; // [sp+80h] [bp-90h] BYREF
  _BYTE v48[4]; // [sp+84h] [bp-8Ch] BYREF
  _BYTE v49[4]; // [sp+88h] [bp-88h] BYREF
  _BYTE v50[4]; // [sp+8Ch] [bp-84h] BYREF
  _BYTE v51[4]; // [sp+90h] [bp-80h] BYREF
  char v52[32]; // [sp+94h] [bp-7Ch] BYREF
  int v53; // [sp+B4h] [bp-5Ch]

  v16 = a5 - *(float *)&a3;
  v18 = a4 - *(float *)&a2;
  v11.n64_u32[0] = 1.0;
  v19 = (float)(a5 - *(float *)&a3) / (float)(a4 - *(float *)&a2);
  v10.n64_f32[0] = a6 / v19;
  v20 = a6 - v19;
  v21 = (float)(a6 / v19) < 0.0;
  LODWORD(v22) = vmin_f32(v10, v11).n64_u32[0];
  v9.n64_f32[0] = (float)(v19 * -2.0) + 1.0;
  v8.n64_f32[0] = (float)(a6 - (float)(1.0 - v19)) / v19;
  if ( v21 )
    v22 = 0.0;
  v9.n64_f32[0] = v20 / v9.n64_f32[0];
  LODWORD(v23) = vmin_f32(v8, v11).n64_u32[0];
  LODWORD(v24) = vmin_f32(v9, v11).n64_u32[0];
  if ( v8.n64_f32[0] < 0.0 )
    v23 = 0.0;
  if ( v9.n64_f32[0] < 0.0 )
    v24 = 0.0;
  if ( v22 != 0.0 )
  {
    v25 = dword_6E00A4;
    CRGBA::CRGBA((CRGBA *)v51, 0xFFu, 0xFFu, 0xFFu, a8);
    *(float *)&v26 = v22 * 0.2;
    MenuScreen::DrawSprite(
      a1,
      v25,
      (int)v51,
      a2,
      *(float *)&a3,
      (float)(v16 * v22) + *(float *)&a2,
      v16 + *(float *)&a3,
      0,
      0,
      v26,
      1065353216);
  }
  v27 = v18 - v16;
  if ( v24 != 0.0 )
  {
    v28 = dword_6E00A4;
    CRGBA::CRGBA((CRGBA *)v50, 0xFFu, 0xFFu, 0xFFu, a8);
    MenuScreen::DrawSprite(
      a1,
      v28,
      (int)v50,
      COERCE_INT(v16 + *(float *)&a2),
      *(float *)&a3,
      (float)(v16 + *(float *)&a2) + (float)((float)(v27 - v16) * v24),
      v16 + *(float *)&a3,
      1045220557,
      0,
      COERCE_INT((float)(v24 * 0.6) + 0.2),
      1065353216);
  }
  if ( v23 != 0.0 )
  {
    v29 = dword_6E00A4;
    CRGBA::CRGBA((CRGBA *)v49, 0xFFu, 0xFFu, 0xFFu, a8);
    MenuScreen::DrawSprite(
      a1,
      v29,
      (int)v49,
      COERCE_INT(v27 + *(float *)&a2),
      *(float *)&a3,
      (float)(v27 + *(float *)&a2) + (float)((float)(v18 - v27) * v23),
      v16 + *(float *)&a3,
      1061997773,
      0,
      COERCE_INT((float)(v23 * 0.2) + 0.8),
      1065353216);
  }
  if ( v22 != 1.0 )
  {
    v30 = dword_6E00A0;
    CRGBA::CRGBA((CRGBA *)v48, 0xFFu, 0xFFu, 0xFFu, a8);
    MenuScreen::DrawSprite(
      a1,
      v30,
      (int)v48,
      COERCE_INT((float)(v16 * v22) + *(float *)&a2),
      *(float *)&a3,
      v16 + *(float *)&a2,
      v16 + *(float *)&a3,
      COERCE_INT(v22 * 0.2),
      0,
      1045220557,
      1065353216);
  }
  if ( v24 != 1.0 )
  {
    v31 = dword_6E00A0;
    CRGBA::CRGBA((CRGBA *)v47, 0xFFu, 0xFFu, 0xFFu, a8);
    *(float *)&v32 = (float)(v24 * 0.6) + 0.2;
    MenuScreen::DrawSprite(
      a1,
      v31,
      (int)v47,
      COERCE_INT((float)(v16 + *(float *)&a2) + (float)((float)(v27 - v16) * v24)),
      *(float *)&a3,
      v27 + *(float *)&a2,
      v16 + *(float *)&a3,
      v32,
      0,
      1061997773,
      1065353216);
  }
  if ( v23 != 1.0 )
  {
    v33 = dword_6E00A0;
    CRGBA::CRGBA((CRGBA *)v46, 0xFFu, 0xFFu, 0xFFu, a8);
    MenuScreen::DrawSprite(
      a1,
      v33,
      (int)v46,
      COERCE_INT((float)(v27 + *(float *)&a2) + (float)((float)(v18 - v27) * v23)),
      *(float *)&a3,
      v18 + *(float *)&a2,
      v16 + *(float *)&a3,
      COERCE_INT((float)(v23 * 0.2) + 0.8),
      0,
      1065353216,
      1065353216);
  }
  sub_5E6BC0(v52, "%d%%", (int)(float)(a6 * 100.0));
  v34 = (CFont *)AsciiToGxtChar(v52, v45);
  v8.n64_f32[0] = (float)(1.0 - v24) * 5.0;
  LODWORD(v35) = vmin_f32(v8, v11).n64_u32[0];
  if ( v8.n64_f32[0] < 0.0 )
    v35 = 0.0;
  if ( v35 != 0.0 )
  {
    CRGBA::CRGBA((CRGBA *)v44, 0xF0u, 0xF0u, 0xF0u, (unsigned int)(float)(v35 * (float)a8));
    v34 = (CFont *)MenuScreen::DrawTextDirect(
                     (int)v43,
                     a1,
                     (int)v45,
                     2,
                     1,
                     v36,
                     0,
                     COERCE_INT(*(float *)&a2 + 4.0),
                     COERCE_INT(*(float *)&a3 + 3.0),
                     COERCE_INT(v18 + -8.0),
                     COERCE_INT(v16 + -5.0),
                     0,
                     0);
  }
  if ( (float)(1.0 - v35) != 0.0 )
  {
    CRGBA::CRGBA((CRGBA *)v42, 0, 0, 0, (unsigned int)(float)((float)(1.0 - v35) * (float)a8));
    v34 = (CFont *)MenuScreen::DrawTextDirect(
                     (int)v43,
                     a1,
                     (int)v45,
                     0,
                     1,
                     v37,
                     0,
                     COERCE_INT(*(float *)&a2 + 4.0),
                     COERCE_INT(*(float *)&a3 + 3.0),
                     COERCE_INT(v18 + -8.0),
                     COERCE_INT(v16 + -5.0),
                     0,
                     0);
  }
  CFont::RenderFontBuffer(v34);
  if ( a7 == 1 )
  {
    v38 = dword_6E00A8;
    CRGBA::CRGBA((CRGBA *)v41, 0xFFu, 0xFFu, 0xFFu, a8);
    *(float *)&v39 = (float)((float)((float)((float)(v18 + *(float *)&a2) - v16) - *(float *)&a2) * a6) + *(float *)&a2;
    MenuScreen::DrawSprite(
      a1,
      v38,
      (int)v41,
      v39,
      a3,
      COERCE_INT(v16 + *(float *)&v39),
      COERCE_INT(v16 + *(float *)&a3),
      0);
  }
  return _stack_chk_guard - v53;
}


// ============================================================

// Address: 0x299854
// Original: _ZN10MenuScreen6OnBackEv
// Demangled: MenuScreen::OnBack(void)
int *__fastcall MenuScreen::OnBack(MenuScreen *this)
{
  if ( (unsigned int)dword_6E0090 >= 2 )
    (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(dword_6E0094 + 4 * dword_6E0090 - 8) + 20))(
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 8),
      *(_DWORD *)(dword_6E0094 + 4 * dword_6E0090 - 4));
  return MobileMenu::RemoveTopScreen((MobileMenu *)&gMobileMenu, 0, 0);
}


// ============================================================

// Address: 0x29b83c
// Original: _ZN10MenuScreen11GainedFocusEv
// Demangled: MenuScreen::GainedFocus(void)
void __fastcall MenuScreen::GainedFocus(MenuScreen *this)
{
  ;
}


// ============================================================

// Address: 0x29b83e
// Original: _ZN10MenuScreen17SetPreviousScreenEPS_
// Demangled: MenuScreen::SetPreviousScreen(MenuScreen*)
void __fastcall MenuScreen::SetPreviousScreen(MenuScreen *this, MenuScreen *a2)
{
  ;
}


// ============================================================

// Address: 0x29b840
// Original: _ZN10MenuScreen12IsFlowScreenEv
// Demangled: MenuScreen::IsFlowScreen(void)
int __fastcall MenuScreen::IsFlowScreen(MenuScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x29b844
// Original: _ZN10MenuScreen13IsPauseScreenEv
// Demangled: MenuScreen::IsPauseScreen(void)
int __fastcall MenuScreen::IsPauseScreen(MenuScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x29b848
// Original: _ZN10MenuScreen22IsSaveLoadDeleteScreenEv
// Demangled: MenuScreen::IsSaveLoadDeleteScreen(void)
int __fastcall MenuScreen::IsSaveLoadDeleteScreen(MenuScreen *this)
{
  return 0;
}


// ============================================================

// Address: 0x29b84c
// Original: _ZN10MenuScreen6IsFlowEv
// Demangled: MenuScreen::IsFlow(void)
int __fastcall MenuScreen::IsFlow(MenuScreen *this)
{
  return 0;
}


// ============================================================
