
// Address: 0x18bafc
// Original: j__ZN12CWidgetRadarC2EPKcRK14WidgetPosition
// Demangled: CWidgetRadar::CWidgetRadar(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRadar::CWidgetRadar()
{
  return _ZN12CWidgetRadarC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2bf700
// Original: _ZN12CWidgetRadarC2EPKcRK14WidgetPosition
// Demangled: CWidgetRadar::CWidgetRadar(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetRadar::CWidgetRadar(_DWORD *a1, int a2, int a3)
{
  _BYTE v5[20]; // [sp+4h] [bp-14h] BYREF

  CWidget::CWidget((int)a1, a2, a3, 1026, 17);
  *a1 = &off_664358;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 36));
  CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  CWidget::CreateHoldEffect();
  a1[35] = 1059648963;
  CSprite2d::SetTexture((CSprite2d *)(a1 + 36), "crosshair", "crosshaira");
  return a1;
}


// ============================================================

// Address: 0x2bf798
// Original: _ZN12CWidgetRadar6UpdateEv
// Demangled: CWidgetRadar::Update(void)
float *__fastcall CWidgetRadar::Update(CWidgetRadar *this)
{
  float *result; // r0
  float v3; // s0
  float v4; // s4
  float v5; // s8
  float v6; // s0
  float v7; // s2
  float v8; // s4

  CWidget::Update(this);
  CWidget::ManageAlpha(this);
  result = (float *)*((_DWORD *)this + 34);
  if ( result )
  {
    v3 = *((float *)this + 8);
    v4 = *((float *)this + 10);
    v5 = v4 - v3;
    v6 = (float)(v3 + v4) * 0.5;
    v7 = (float)(*((float *)this + 9) + *((float *)this + 11)) * 0.5;
    v8 = fabsf(v5) * 0.52;
    result[3] = v6 - v8;
    result[4] = v8 + v7;
    result[5] = v6 + v8;
    result[6] = v7 - v8;
  }
  return result;
}


// ============================================================

// Address: 0x2bf80c
// Original: _ZN12CWidgetRadar10IsHeldDownEv
// Demangled: CWidgetRadar::IsHeldDown(void)
int __fastcall CWidgetRadar::IsHeldDown(CWidgetRadar *this)
{
  int v2; // r0
  float v3; // s0
  float v4; // s2
  int v5; // r0

  v2 = CHID::Implements();
  v3 = *((float *)this + 17);
  v4 = *((float *)this + 35);
  v5 = v2 ^ 1;
  if ( v5 || v3 < v4 )
    return (unsigned __int8)v5 & (v3 >= v4);
  else
    return sub_196BF4();
}


// ============================================================

// Address: 0x2bf850
// Original: _ZN12CWidgetRadarD2Ev
// Demangled: CWidgetRadar::~CWidgetRadar()
void __fastcall CWidgetRadar::~CWidgetRadar(CWidgetRadar *this)
{
  *(_DWORD *)this = &off_664358;
  CSprite2d::~CSprite2d((CWidgetRadar *)((char *)this + 144));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2bf878
// Original: _ZN12CWidgetRadarD0Ev
// Demangled: CWidgetRadar::~CWidgetRadar()
void __fastcall CWidgetRadar::~CWidgetRadar(CWidgetRadar *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664358;
  CSprite2d::~CSprite2d((CWidgetRadar *)((char *)this + 144));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2bf8a4
// Original: _ZN12CWidgetRadar7GetNameEv
// Demangled: CWidgetRadar::GetName(void)
char *__fastcall CWidgetRadar::GetName(CWidgetRadar *this)
{
  return "Radar";
}


// ============================================================
