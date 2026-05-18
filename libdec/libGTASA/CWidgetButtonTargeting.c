
// Address: 0x194518
// Original: j__ZN22CWidgetButtonTargetingC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonTargeting::CWidgetButtonTargeting(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonTargeting::CWidgetButtonTargeting()
{
  return _ZN22CWidgetButtonTargetingC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b5da8
// Original: _ZN22CWidgetButtonTargetingC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonTargeting::CWidgetButtonTargeting(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonTargeting::CWidgetButtonTargeting(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, 36);
  *result = &off_663600;
  return result;
}


// ============================================================

// Address: 0x2b5dd0
// Original: _ZN22CWidgetButtonTargeting6UpdateEv
// Demangled: CWidgetButtonTargeting::Update(void)
// attributes: thunk
int __fastcall CWidgetButtonTargeting::Update(CWidgetButton *this)
{
  return j_CWidgetButton::Update(this);
}


// ============================================================

// Address: 0x2b5dd4
// Original: _ZN22CWidgetButtonTargetingD0Ev
// Demangled: CWidgetButtonTargeting::~CWidgetButtonTargeting()
void __fastcall CWidgetButtonTargeting::~CWidgetButtonTargeting(CWidgetButtonTargeting *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonTargeting *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5e00
// Original: _ZN22CWidgetButtonTargeting7GetNameEv
// Demangled: CWidgetButtonTargeting::GetName(void)
int __fastcall CWidgetButtonTargeting::GetName(CWidgetButtonTargeting *this)
{
  return 2842116;
}


// ============================================================
