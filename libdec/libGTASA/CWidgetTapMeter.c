
// Address: 0x18b418
// Original: j__ZN15CWidgetTapMeterC2EPKcRK14WidgetPosition
// Demangled: CWidgetTapMeter::CWidgetTapMeter(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetTapMeter::CWidgetTapMeter()
{
  return _ZN15CWidgetTapMeterC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c7810
// Original: _ZN15CWidgetTapMeterC2EPKcRK14WidgetPosition
// Demangled: CWidgetTapMeter::CWidgetTapMeter(char const*,WidgetPosition const&)
int __fastcall CWidgetTapMeter::CWidgetTapMeter(int a1, int a2, int a3)
{
  int result; // r0
  float v4; // s0

  result = CWidget::CWidget(a1, a2, a3, 6, 0);
  *(_DWORD *)(result + 184) = 1232348160;
  *(_DWORD *)(result + 144) = 0;
  *(_DWORD *)result = &off_665138;
  v4 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)(result + 152) = 0x3F80000000000000LL;
  *(_QWORD *)(result + 160) = 1065353216LL;
  *(_QWORD *)(result + 168) = 0x497424003DCCCCCDLL;
  *(_QWORD *)(result + 176) = 0xC9742400C9742400LL;
  *(float *)(result + 148) = v4 / 1000.0;
  return result;
}


// ============================================================

// Address: 0x2c78b0
// Original: _ZN15CWidgetTapMeter6UpdateEv
// Demangled: CWidgetTapMeter::Update(void)
double *__fastcall CWidgetTapMeter::Update(CWidgetTapMeter *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d3
  float32x4_t v6; // q8
  unsigned __int16 v7; // r1
  double *result; // r0
  float v9; // s4
  float v10; // s2

  CWidget::Update(this);
  v6.n128_u64[0] = 0xC040000040400000LL;
  v6.n128_u64[1] = 0x40400000C0400000LL;
  *(float32x4_t *)((char *)this + 172) = vaddq_f32(*((float32x4_t *)this + 2), v6);
  CWidget::ManageAlpha(this);
  v1.n64_f32[0] = COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v7)) + -50.0;
  result = (double *)*((_DWORD *)this + 36);
  v3.n64_f32[0] = v1.n64_f32[0] / 950.0;
  v2.n64_u32[0] = 0;
  v1.n64_u32[0] = 1.0;
  *((float *)this + 42) = (float)(vmin_f32(vmax_f32(v3, v2), v1).n64_f32[0] * 0.2) + 0.1;
  if ( result == (double *)((char *)&stderr + 1) )
  {
    result = 0;
    *((_DWORD *)this + 36) = 0;
  }
  else if ( !result )
  {
    v9 = *((float *)this + 39);
    result = &CWidget::m_fElapsedTime;
    v4.n64_f32[0] = CWidget::m_fElapsedTime * v9 * *((float *)this + 40) + *((float *)this + 38);
    v10 = vmin_f32(vmax_f32(v4, v2), v1).n64_f32[0];
    *((float *)this + 38) = v10;
    if ( v10 == 0.0 )
      *((float *)this + 39) = -v9;
  }
  return result;
}


// ============================================================

// Address: 0x2c79b8
// Original: _ZN15CWidgetTapMeter4DrawEv
// Demangled: CWidgetTapMeter::Draw(void)
int __fastcall CWidgetTapMeter::Draw(CWidgetTapMeter *this)
{
  int result; // r0
  int v3; // r0
  float v4; // s4
  float v5; // s0
  float v6; // s8
  float v7; // s6
  float v8; // s6
  float v9; // s4
  float v10; // s0
  float v11; // s2
  float v12; // s8
  _BYTE v13[4]; // [sp+8h] [bp-50h] BYREF
  float v14; // [sp+Ch] [bp-4Ch] BYREF
  float v15; // [sp+10h] [bp-48h]
  float v16; // [sp+14h] [bp-44h]
  float v17; // [sp+18h] [bp-40h]
  _BYTE v18[4]; // [sp+1Ch] [bp-3Ch] BYREF
  _BYTE v19[4]; // [sp+20h] [bp-38h] BYREF
  _BYTE v20[52]; // [sp+24h] [bp-34h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    CRGBA::CRGBA((CRGBA *)&v14, 0, 0, 0, (unsigned int)((float)((float)(unsigned int)result / 255.0) * 100.0));
    CRGBA::CRGBA((CRGBA *)v20, 0, 0, 0, (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 100.0));
    CRGBA::CRGBA((CRGBA *)v19, 0, 0, 0, (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
    CRGBA::CRGBA((CRGBA *)v18, 0, 0, 0, (unsigned int)((float)((float)*((unsigned __int8 *)this + 76) / 255.0) * 255.0));
    CSprite2d::DrawRect((int)this + 32, (int)&v14, (int)v20, (int)v19, v3);
    v4 = *((float *)this + 44);
    v5 = *((float *)this + 38);
    v6 = fabsf(v4 - *((float *)this + 46));
    v7 = *((float *)this + 45) + -3.0;
    v14 = *((float *)this + 43) + 3.0;
    v16 = v7;
    v15 = v4 + -3.0;
    v17 = (float)(v4 + -3.0) - (float)(v5 * (float)(v6 + -6.0));
    CRGBA::CRGBA((CRGBA *)v20, 0, 0xFFu, 0, *((_BYTE *)this + 76));
    CRGBA::CRGBA((CRGBA *)v19, 0, 0xFFu, 0, *((_BYTE *)this + 76));
    CWidget::GetGradientColor((CWidget *)v18, *(float *)&this, COERCE_INT(1.0 - *((float *)this + 38)));
    CWidget::GetGradientColor((CWidget *)v13, *(float *)&this, COERCE_INT(1.0 - *((float *)this + 38)));
    CSprite2d::DrawRect((int)&v14, (int)v20, (int)v19, (int)v18, (int)v13);
    v8 = *((float *)this + 44);
    v9 = *((float *)this + 42);
    v10 = *((float *)this + 8) + 1.0;
    v11 = *((float *)this + 10) + -1.0;
    v12 = fabsf(v8 - *((float *)this + 46));
    v17 = v8 + -1.0;
    v14 = v10;
    v16 = v11;
    v15 = (float)(v8 + -3.0) - (float)(v9 * (float)(v12 + -6.0));
    CRGBA::CRGBA(
      (CRGBA *)v20,
      0x80u,
      0x80u,
      0x80u,
      (unsigned int)(float)((float)*((unsigned __int8 *)this + 76) * 0.75));
    return CSprite2d::DrawRect();
  }
  return result;
}


// ============================================================

// Address: 0x2c7c0c
// Original: _ZN15CWidgetTapMeter12RespondToTapEv
// Demangled: CWidgetTapMeter::RespondToTap(void)
int __fastcall CWidgetTapMeter::RespondToTap(CWidgetTapMeter *this)
{
  float v1; // s0

  if ( *((_DWORD *)this + 36) )
    return 0;
  v1 = *((float *)this + 38);
  if ( v1 < *((float *)this + 41) || v1 > *((float *)this + 42) )
    return 0;
  *((_DWORD *)this + 36) = 1;
  *((float *)this + 37) = (float)(unsigned int)CTimer::m_snTimeInMilliseconds / 1000.0;
  return 1;
}


// ============================================================

// Address: 0x2c7c64
// Original: _ZN15CWidgetTapMeter10IsReleasedEP9CVector2D
// Demangled: CWidgetTapMeter::IsReleased(CVector2D *)
int __fastcall CWidgetTapMeter::IsReleased(int a1)
{
  float v2; // s0
  int result; // r0

  if ( !CTouchInterface::IsReleased(43, 0, 1) && a1 != CWidget::m_pReleasedWidget[*(_DWORD *)(a1 + 120)] )
    return 0;
  if ( *(_DWORD *)(a1 + 144) )
    return 0;
  v2 = *(float *)(a1 + 152);
  if ( v2 < *(float *)(a1 + 164) || v2 > *(float *)(a1 + 168) )
    return 0;
  result = 1;
  *(_DWORD *)(a1 + 144) = 1;
  *(float *)(a1 + 148) = (float)(unsigned int)CTimer::m_snTimeInMilliseconds / 1000.0;
  return result;
}


// ============================================================

// Address: 0x2c7ce0
// Original: _ZN15CWidgetTapMeter14SetWidgetValueEf
// Demangled: CWidgetTapMeter::SetWidgetValue(float)
int __fastcall CWidgetTapMeter::SetWidgetValue(int this, float a2)
{
  *(float *)(this + 160) = (float)(a2 * 0.125) + 1.0;
  return this;
}


// ============================================================

// Address: 0x2c7cfa
// Original: _ZN15CWidgetTapMeterD0Ev
// Demangled: CWidgetTapMeter::~CWidgetTapMeter()
void __fastcall CWidgetTapMeter::~CWidgetTapMeter(CWidgetTapMeter *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c7d0c
// Original: _ZN15CWidgetTapMeter7GetNameEv
// Demangled: CWidgetTapMeter::GetName(void)
int __fastcall CWidgetTapMeter::GetName(CWidgetTapMeter *this)
{
  return 2915600;
}


// ============================================================
