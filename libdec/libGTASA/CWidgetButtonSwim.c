
// Address: 0x19aa04
// Original: j__ZN17CWidgetButtonSwimC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSwim::CWidgetButtonSwim(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonSwim::CWidgetButtonSwim()
{
  return _ZN17CWidgetButtonSwimC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b6b10
// Original: _ZN17CWidgetButtonSwimC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSwim::CWidgetButtonSwim(char const*,WidgetPosition const&)
CWidgetButton *__fastcall CWidgetButtonSwim::CWidgetButtonSwim(CWidgetButton *a1, int a2, int a3)
{
  CWidgetButton::CWidgetButton((int)a1, a2, a3, 1, 64, 2);
  *(_DWORD *)a1 = &off_663AA0;
  CWidgetButton::SetFillSprite(a1, "hud_swim", 0.25, 0.8);
  return a1;
}


// ============================================================

// Address: 0x2b6b5c
// Original: _ZN17CWidgetButtonSwim6UpdateEv
// Demangled: CWidgetButtonSwim::Update(void)
int __fastcall CWidgetButtonSwim::Update(CWidgetButtonSwim *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  int result; // r0
  float v6; // r5

  CWidgetButton::Update(this);
  result = FindPlayerPed(-1);
  if ( result )
  {
    v6 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
    result = *(_DWORD *)(FindPlayerPed(-1) + 1092);
    v3.n64_u32[0] = 0;
    v2.n64_u32[0] = 1.0;
    v1.n64_f32[0] = 1.0 - (float)((float)(*(float *)(result + 24) + 150.0) / (float)(v6 + 150.0));
    *((_DWORD *)this + 39) = vmax_f32(vmin_f32(v1, v2), v3).n64_u32[0];
  }
  return result;
}


// ============================================================

// Address: 0x2b6bc4
// Original: _ZN17CWidgetButtonSwimD0Ev
// Demangled: CWidgetButtonSwim::~CWidgetButtonSwim()
void __fastcall CWidgetButtonSwim::~CWidgetButtonSwim(CWidgetButtonSwim *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonSwim *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6bf0
// Original: _ZN17CWidgetButtonSwim7GetNameEv
// Demangled: CWidgetButtonSwim::GetName(void)
char *__fastcall CWidgetButtonSwim::GetName(CWidgetButtonSwim *this)
{
  return "BTN SWIM";
}


// ============================================================
