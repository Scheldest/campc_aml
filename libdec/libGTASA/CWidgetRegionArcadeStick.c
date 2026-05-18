
// Address: 0x1903c8
// Original: j__ZN24CWidgetRegionArcadeStickC2EPKcRK14WidgetPositioni10HIDMapping
// Demangled: CWidgetRegionArcadeStick::CWidgetRegionArcadeStick(char const*,WidgetPosition const&,int,HIDMapping)
// attributes: thunk
int CWidgetRegionArcadeStick::CWidgetRegionArcadeStick()
{
  return _ZN24CWidgetRegionArcadeStickC2EPKcRK14WidgetPositioni10HIDMapping();
}


// ============================================================

// Address: 0x2bfb9c
// Original: _ZN24CWidgetRegionArcadeStickC2EPKcRK14WidgetPositioni10HIDMapping
// Demangled: CWidgetRegionArcadeStick::CWidgetRegionArcadeStick(char const*,WidgetPosition const&,int,HIDMapping)
_DWORD *CWidgetRegionArcadeStick::CWidgetRegionArcadeStick()
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetRegion::CWidgetRegion();
  result[36] = 1;
  result[37] = 1;
  *result = &off_664480;
  return result;
}


// ============================================================

// Address: 0x2bfbc8
// Original: _ZN24CWidgetRegionArcadeStick6UpdateEv
// Demangled: CWidgetRegionArcadeStick::Update(void)
int __fastcall CWidgetRegionArcadeStick::Update(CWidgetRegionArcadeStick *this)
{
  CWidgetRegion::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2bfbdc
// Original: _ZN24CWidgetRegionArcadeStick4DrawEv
// Demangled: CWidgetRegionArcadeStick::Draw(void)
int __fastcall CWidgetRegionArcadeStick::Draw(CWidgetRegionArcadeStick *this)
{
  int result; // r0
  CTouchInterface *v3; // r0
  int v4; // r1
  float *v5; // r0
  float v6; // s6
  float v7; // s8
  float v8; // s2
  float v9; // s10
  float v10; // s6
  float v11; // s6
  float v12; // s2
  float v13; // s0
  float v14; // s6
  float v15; // s4
  float v16; // s0
  float v17; // s4
  __int64 v18; // r0
  float v19; // [sp+20h] [bp-18h] BYREF
  float v20; // [sp+24h] [bp-14h]
  float v21; // [sp+28h] [bp-10h]
  float v22; // [sp+2Ch] [bp-Ch]

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = (CTouchInterface *)*((_DWORD *)this + 30);
    *((_DWORD *)this + 36) = 1;
    *((_DWORD *)this + 37) = 1;
    if ( CTouchInterface::IsTouchDown(v3, 1) == 1 )
    {
      v4 = *((_DWORD *)this + 30);
      if ( this == (CWidgetRegionArcadeStick *)CWidget::m_pInitialTouchWidget[v4] )
      {
        CTouchInterface::GetTouchPosition((CTouchInterface *)&v19, v4);
        v5 = (float *)&CWidget::m_vecTouchAnchor[2 * *((_DWORD *)this + 30)];
        v6 = fabsf(*((float *)this + 10) - *((float *)this + 8));
        v7 = v19 - *v5;
        v8 = v20 - v5[1];
        v9 = v6 * -0.1;
        v10 = v6 * 0.1;
        if ( v7 < v9 )
          *((_DWORD *)this + 36) = 0;
        if ( v7 > v10 )
          *((_DWORD *)this + 36) = 2;
        v11 = fabsf(*((float *)this + 9) - *((float *)this + 11));
        if ( v8 < (float)(v11 * -0.1) )
          *((_DWORD *)this + 37) = 0;
        if ( v8 > (float)(v11 * 0.1) )
          *((_DWORD *)this + 37) = 2;
      }
    }
    v12 = *((float *)this + 9);
    v13 = *((float *)this + 8);
    v14 = v12 - *((float *)this + 11);
    v15 = *((float *)this + 10);
    v20 = v12;
    v16 = (float)(v13 + v15) * 0.5;
    v17 = fabsf(v14) * 0.75;
    v22 = v12 - v17;
    v19 = v16 - (float)(v17 * 0.5);
    v21 = (float)(v17 * 0.5) + v16;
    v18 = *((_QWORD *)this + 18);
    return CSprite2d::Draw(
             (int)this + 8,
             (int)&v19,
             (int)this + 73,
             COERCE_INT((float)*((int *)this + 36) * 0.333),
             (float)*((int *)this + 37) * 0.333,
             (float)(v18 + 1) * 0.333,
             (float)*((int *)this + 37) * 0.333,
             (float)*((int *)this + 36) * 0.333,
             (float)(HIDWORD(v18) + 1) * 0.333,
             (float)(v18 + 1) * 0.333,
             (float)(HIDWORD(v18) + 1) * 0.333);
  }
  return result;
}


// ============================================================

// Address: 0x2bfd80
// Original: _ZN24CWidgetRegionArcadeStick15GetWidgetValue2EPfS0_
// Demangled: CWidgetRegionArcadeStick::GetWidgetValue2(float *,float *)
int __fastcall CWidgetRegionArcadeStick::GetWidgetValue2(int this, float *a2, float *a3)
{
  *a2 = (float)*(int *)(this + 144);
  *a3 = (float)*(int *)(this + 148);
  return this;
}


// ============================================================

// Address: 0x2bfd9c
// Original: _ZN24CWidgetRegionArcadeStick14SetWidgetValueEf
// Demangled: CWidgetRegionArcadeStick::SetWidgetValue(float)
int __fastcall CWidgetRegionArcadeStick::SetWidgetValue(int this, float a2)
{
  int v3; // r4

  v3 = this;
  if ( a2 == 0.0 )
    this = CWidget::SetTexture((CWidget *)this, (CSprite2d *)(this + 8), "ArcadeJoystick_Knob", 1);
  if ( a2 == 1.0 )
    this = CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeJoystick_Knob_orange", 1);
  if ( a2 == 2.0 )
    this = CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeJoystick_Knob_Teal", 1);
  if ( a2 == 3.0 )
    return j_CWidget::SetTexture((CWidget *)v3, (CSprite2d *)(v3 + 8), "ArcadeJoystick_Knob_white", 1);
  return this;
}


// ============================================================

// Address: 0x2bfe8c
// Original: _ZN24CWidgetRegionArcadeStickD0Ev
// Demangled: CWidgetRegionArcadeStick::~CWidgetRegionArcadeStick()
void __fastcall CWidgetRegionArcadeStick::~CWidgetRegionArcadeStick(CWidgetRegionArcadeStick *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bfe9c
// Original: _ZN24CWidgetRegionArcadeStick7GetNameEv
// Demangled: CWidgetRegionArcadeStick::GetName(void)
char *__fastcall CWidgetRegionArcadeStick::GetName(CWidgetRegionArcadeStick *this)
{
  return "STICK";
}


// ============================================================
