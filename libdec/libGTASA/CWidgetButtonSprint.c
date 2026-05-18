
// Address: 0x199e9c
// Original: j__ZN19CWidgetButtonSprintC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSprint::CWidgetButtonSprint(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonSprint::CWidgetButtonSprint()
{
  return _ZN19CWidgetButtonSprintC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b69a4
// Original: _ZN19CWidgetButtonSprintC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSprint::CWidgetButtonSprint(char const*,WidgetPosition const&)
CWidgetButton *__fastcall CWidgetButtonSprint::CWidgetButtonSprint(CWidgetButton *a1, int a2, int a3)
{
  CWidgetButton::CWidgetButton((int)a1, a2, a3, 1, 64, 2);
  *(_DWORD *)a1 = &off_663A0C;
  CWidgetButton::SetFillSprite(a1, "sprint", 0.12, 0.88);
  return a1;
}


// ============================================================

// Address: 0x2b69f0
// Original: _ZN19CWidgetButtonSprint6UpdateEv
// Demangled: CWidgetButtonSprint::Update(void)
int __fastcall CWidgetButtonSprint::Update(CWidgetButtonSprint *this)
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

// Address: 0x2b6a58
// Original: _ZN19CWidgetButtonSprint14IsDoubleTappedEv
// Demangled: CWidgetButtonSprint::IsDoubleTapped(void)
int __fastcall CWidgetButtonSprint::IsDoubleTapped(CWidgetButtonSprint *this)
{
  if ( CHID::Implements() == 1 )
    return j_CHID::IsReleased();
  else
    return sub_196C88(this);
}


// ============================================================

// Address: 0x2b6a7c
// Original: _ZN19CWidgetButtonSprint12DrawHelpIconEPKcfffi
// Demangled: CWidgetButtonSprint::DrawHelpIcon(char const*,float,float,float,int)
int __fastcall CWidgetButtonSprint::DrawHelpIcon(
        CWidgetButtonSprint *this,
        const char *a2,
        int a3,
        int a4,
        float a5,
        int a6)
{
  if ( CHID::Implements() == 1 )
    return CHID::DrawHelpIcon((int)a2, 2, a3, a4, a5, a6, 0);
  else
    return j_CWidgetButton::DrawHelpIcon(this, a2, *(float *)&a3, *(float *)&a4, a5, a6);
}


// ============================================================

// Address: 0x2b6ad4
// Original: _ZN19CWidgetButtonSprintD0Ev
// Demangled: CWidgetButtonSprint::~CWidgetButtonSprint()
void __fastcall CWidgetButtonSprint::~CWidgetButtonSprint(CWidgetButtonSprint *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonSprint *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6b00
// Original: _ZN19CWidgetButtonSprint7GetNameEv
// Demangled: CWidgetButtonSprint::GetName(void)
char *__fastcall CWidgetButtonSprint::GetName(CWidgetButtonSprint *this)
{
  return "BTN SPRINT";
}


// ============================================================
