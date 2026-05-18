
// Address: 0x192330
// Original: j__ZN18CWidgetThumbCircleC2EPKcRK14WidgetPosition
// Demangled: CWidgetThumbCircle::CWidgetThumbCircle(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetThumbCircle::CWidgetThumbCircle()
{
  return _ZN18CWidgetThumbCircleC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c7d20
// Original: _ZN18CWidgetThumbCircleC2EPKcRK14WidgetPosition
// Demangled: CWidgetThumbCircle::CWidgetThumbCircle(char const*,WidgetPosition const&)
int __fastcall CWidgetThumbCircle::CWidgetThumbCircle(int a1, int a2, int a3)
{
  CWidget::CWidget(a1, a2, a3, 6, 71);
  *(_DWORD *)a1 = &off_6651CC;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 144));
  *(_QWORD *)(a1 + 180) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 188) = 0x49742400C9742400LL;
  *(_QWORD *)(a1 + 164) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 172) = 0x49742400C9742400LL;
  *(_QWORD *)(a1 + 196) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 204) = 0x49742400C9742400LL;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 144), "hud_analognub", 1);
  *(_QWORD *)(a1 + 148) = 0LL;
  *(_QWORD *)(a1 + 156) = 0LL;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 1056964608;
  *(_DWORD *)(a1 + 220) = 1061158912;
  *(_DWORD *)(a1 + 224) = 1065353216;
  *(_DWORD *)(a1 + 228) = 0;
  return a1;
}


// ============================================================

// Address: 0x2c7dc4
// Original: _ZN18CWidgetThumbCircle6UpdateEv
// Demangled: CWidgetThumbCircle::Update(void)
int __fastcall CWidgetThumbCircle::Update(CWidgetThumbCircle *this)
{
  float32x2_t v1; // d2
  float32x2_t v2; // d10
  float v4; // s0
  float v5; // s16
  float v6; // s2
  float v7; // r1
  float v8; // s12
  float v9; // s12
  float v10; // s4
  float v11; // s8
  float v12; // s10
  float32x2_t v13; // d0
  CTouchInterface *v14; // r0
  float32x2_t v15; // d0
  CWidgetThumbCircle *v16; // r1
  float v17; // s2
  float v18; // s0
  float v19; // s2
  __int64 v20; // r0
  float v21; // s4
  float v22; // s4
  float v23; // s2
  float v24; // r0
  float v25; // s0
  int result; // r0
  float v27; // s2
  float v28[10]; // [sp+0h] [bp-28h] BYREF

  CWidget::Update(this);
  CWidget::ManageAlpha(this);
  v4 = *((float *)this + 9);
  v5 = 1.0;
  v6 = *((float *)this + 11);
  v7 = *((float *)this + 8);
  v8 = *((float *)this + 10);
  *((float *)this + 45) = v7;
  *((float *)this + 47) = v8;
  *((float *)this + 51) = v8;
  *((float *)this + 49) = v7;
  *((float *)this + 48) = v6;
  *((float *)this + 50) = v4;
  v2.n64_u32[0] = 0;
  v9 = (float)(v7 + v8) * 0.5;
  v10 = v6 + (float)(fabsf(v4 - v6) * 0.225);
  *((float *)this + 46) = v10;
  *((float *)this + 52) = v10 + 1.0;
  v11 = (float)(fabsf(v4 - (float)(v10 + 1.0)) * 0.75) * 0.5;
  v12 = (float)((float)(v10 + 1.0) + v4) * 0.5;
  v13.n64_f32[1] = v12 + v11;
  *((float *)this + 41) = v9 - v11;
  *((float *)this + 42) = v12 + v11;
  *((float *)this + 43) = v9 + v11;
  *((float *)this + 44) = v12 - v11;
  v14 = (CTouchInterface *)*((_DWORD *)this + 30);
  v13.n64_f32[0] = *((float *)this + 53) - CWidget::m_fElapsedTime * *((float *)this + 54);
  v15.n64_u64[0] = vmax_f32(v13, v2).n64_u64[0];
  *((_DWORD *)this + 53) = v15.n64_u32[0];
  v16 = (CWidgetThumbCircle *)CWidget::m_pInitialTouchWidget[(_DWORD)v14];
  if ( this == v16 && CTouchInterface::IsTouchDown(v14, (int)v16) == 1 )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)v28, *((_DWORD *)this + 30));
    v17 = v28[1] - (float)((float)(*((float *)this + 9) + *((float *)this + 11)) * 0.5);
    *((float *)this + 39) = v28[0] - (float)((float)(*((float *)this + 8) + *((float *)this + 10)) * 0.5);
    *((float *)this + 40) = v17;
  }
  v18 = *((float *)this + 40);
  v19 = *((float *)this + 39);
  LODWORD(v20) = 0;
  if ( v19 == 0.0 && v18 == 0.0 )
  {
    v18 = -1.0;
    HIDWORD(v20) = -1082130432;
    v19 = 0.0;
    *(_QWORD *)((char *)this + 156) = v20;
  }
  v21 = (float)(v19 * v19) + (float)(v18 * v18);
  if ( v21 <= 0.0 )
  {
    *((_DWORD *)this + 39) = 1065353216;
  }
  else
  {
    v22 = 1.0 / sqrtf(v21);
    v5 = v19 * v22;
    v18 = v18 * v22;
    *((float *)this + 39) = v19 * v22;
    *((float *)this + 40) = v18;
  }
  v23 = fabsf(*((float *)this + 43) - *((float *)this + 41)) * 0.5;
  *((float *)this + 39) = v5 * v23;
  *((float *)this + 40) = v18 * v23;
  v24 = atan2f(v18 * v23, v5 * v23);
  v25 = v24 + 1.5708;
  if ( (float)(v24 + 1.5708) < 0.0 )
    v25 = (float)(v24 + 1.5708) + 6.2832;
  result = (int)(float)(v25 / 0.7854);
  if ( *((_DWORD *)this + 57) != result )
  {
    v1.n64_u32[0] = *((_DWORD *)this + 55);
    v27 = *((float *)this + 53);
    *((_DWORD *)this + 57) = result;
    v15.n64_f32[0] = v1.n64_f32[0] * 0.125;
    v1.n64_u32[0] = 1.0;
    v15.n64_f32[0] = v27 + v15.n64_f32[0];
    *((_DWORD *)this + 53) = vmin_f32(v15, v1).n64_u32[0];
  }
  return result;
}


// ============================================================

// Address: 0x2c8028
// Original: _ZN18CWidgetThumbCircle4DrawEv
// Demangled: CWidgetThumbCircle::Draw(void)
int __fastcall CWidgetThumbCircle::Draw(CWidgetThumbCircle *this)
{
  int result; // r0
  float v3; // s4
  float v4; // s8
  float v5; // s14
  float v6; // s4
  float v7; // s8
  float v8; // s0
  float v9; // s2
  float v10; // s2
  float v11; // s6
  float v12; // s8
  float v13; // s0
  float v14; // s4
  float v15; // s0
  float v16; // s10
  _BYTE v17[4]; // [sp+8h] [bp-60h] BYREF
  _BYTE v18[4]; // [sp+Ch] [bp-5Ch] BYREF
  float v19[4]; // [sp+10h] [bp-58h] BYREF
  float v20; // [sp+20h] [bp-48h] BYREF
  float v21; // [sp+24h] [bp-44h]
  float v22; // [sp+28h] [bp-40h]
  float v23; // [sp+2Ch] [bp-3Ch]
  _BYTE v24[4]; // [sp+30h] [bp-38h] BYREF
  _BYTE v25[52]; // [sp+34h] [bp-34h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    result = CHID::GetInputType((CHID *)result);
    if ( result != 1 )
    {
      CRGBA::CRGBA(
        (CRGBA *)&v20,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 100.0));
      CRGBA::CRGBA(
        (CRGBA *)v19,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 100.0));
      CRGBA::CRGBA(
        (CRGBA *)v25,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
      CRGBA::CRGBA(
        (CRGBA *)v24,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
      CSprite2d::DrawRect((int)this + 180, (int)&v20, (int)v19, (int)v25, (int)v24);
      CRGBA::CRGBA(
        (CRGBA *)&v20,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 100.0));
      CRGBA::CRGBA(
        (CRGBA *)v19,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 100.0));
      CRGBA::CRGBA(
        (CRGBA *)v25,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
      CRGBA::CRGBA(
        (CRGBA *)v24,
        0,
        0,
        0,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
      CSprite2d::DrawRect((int)this + 196, (int)&v20, (int)v19, (int)v25, (int)v24);
      CSprite2d::Draw((char *)this + 8, (char *)this + 164, (char *)this + 73);
      v3 = *((float *)this + 41);
      v4 = *((float *)this + 43);
      v5 = v4 - v3;
      v6 = v3 + v4;
      v7 = fabsf(v5) * 0.175;
      v8 = (float)(v6 * 0.5) + *((float *)this + 39);
      v9 = (float)((float)(*((float *)this + 42) + *((float *)this + 44)) * 0.5) + *((float *)this + 40);
      v20 = v8 - v7;
      v22 = v7 + v8;
      v23 = v9 - v7;
      v21 = v7 + v9;
      CSprite2d::Draw((char *)this + 144, &v20, (char *)this + 73);
      v10 = *((float *)this + 46);
      v11 = *((float *)this + 48);
      v12 = fabsf(v10 - v11) * 0.125;
      v13 = *((float *)this + 45) + v12;
      v14 = *((float *)this + 47) - v12;
      v23 = v11 + v12;
      v20 = v13;
      v22 = v14;
      v21 = v10 - v12;
      CRGBA::CRGBA(
        (CRGBA *)v19,
        0xFFu,
        0xFFu,
        0xFFu,
        (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 40.0));
      CSprite2d::DrawRect();
      v15 = fabsf(*((float *)this + 46) - *((float *)this + 48)) * 0.075;
      v16 = *((float *)this + 53);
      v19[0] = v20 + v15;
      v19[3] = v23 + v15;
      v19[1] = v21 - v15;
      v19[2] = (float)(v20 + v15) + (float)(v16 * (float)(fabsf(v22 - v20) + (float)(v15 * -2.0)));
      CRGBA::CRGBA((CRGBA *)v25, 0, 0xFFu, 0, *((_BYTE *)this + 76));
      CWidget::GetGradientColor((CWidget *)v24, *(float *)&this, COERCE_INT(1.0 - *((float *)this + 53)));
      CRGBA::CRGBA((CRGBA *)v18, 0, 0xFFu, 0, *((_BYTE *)this + 76));
      CWidget::GetGradientColor((CWidget *)v17, *(float *)&this, COERCE_INT(1.0 - *((float *)this + 53)));
      return CSprite2d::DrawRect((int)v19, (int)v25, (int)v24, (int)v18, (int)v17);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c8404
// Original: _ZN18CWidgetThumbCircle14GetWidgetValueEv
// Demangled: CWidgetThumbCircle::GetWidgetValue(void)
int __fastcall CWidgetThumbCircle::GetWidgetValue(CWidgetThumbCircle *this)
{
  return *((_DWORD *)this + 53);
}


// ============================================================

// Address: 0x2c840a
// Original: _ZN18CWidgetThumbCircle14SetWidgetValueEf
// Demangled: CWidgetThumbCircle::SetWidgetValue(float)
int __fastcall CWidgetThumbCircle::SetWidgetValue(int this, float a2)
{
  *(float *)(this + 216) = (float)(a2 * 0.125) + 0.5;
  return this;
}


// ============================================================

// Address: 0x2c8424
// Original: _ZN18CWidgetThumbCircleD2Ev
// Demangled: CWidgetThumbCircle::~CWidgetThumbCircle()
void __fastcall CWidgetThumbCircle::~CWidgetThumbCircle(CWidgetThumbCircle *this)
{
  *(_DWORD *)this = &off_6651CC;
  CSprite2d::~CSprite2d((CWidgetThumbCircle *)((char *)this + 144));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c844c
// Original: _ZN18CWidgetThumbCircleD0Ev
// Demangled: CWidgetThumbCircle::~CWidgetThumbCircle()
void __fastcall CWidgetThumbCircle::~CWidgetThumbCircle(CWidgetThumbCircle *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6651CC;
  CSprite2d::~CSprite2d((CWidgetThumbCircle *)((char *)this + 144));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c8478
// Original: _ZN18CWidgetThumbCircle7GetNameEv
// Demangled: CWidgetThumbCircle::GetName(void)
char *__fastcall CWidgetThumbCircle::GetName(CWidgetThumbCircle *this)
{
  return "Circle";
}


// ============================================================

// Address: 0x2c8484
// Original: _ZN18CWidgetThumbCircle14OnInitialTouchEv
// Demangled: CWidgetThumbCircle::OnInitialTouch(void)
int __fastcall CWidgetThumbCircle::OnInitialTouch(CWidgetThumbCircle *this)
{
  int v2; // r1
  int result; // r0

  CWidget::OnInitialTouch(this);
  v2 = *((_DWORD *)this + 30);
  *((_DWORD *)this + 37) = CWidget::m_vecTouchAnchor[2 * v2];
  result = CWidget::m_vecTouchAnchor[2 * v2 + 1];
  *((_DWORD *)this + 38) = result;
  return result;
}


// ============================================================
