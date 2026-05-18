
// Address: 0x19d7dc
// Original: j__ZN19CWidgetButtonRocketC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonRocket::CWidgetButtonRocket(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonRocket::CWidgetButtonRocket()
{
  return _ZN19CWidgetButtonRocketC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b5a00
// Original: _ZN19CWidgetButtonRocketC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonRocket::CWidgetButtonRocket(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonRocket::CWidgetButtonRocket(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, 89);
  *result = &off_6633B0;
  return result;
}


// ============================================================

// Address: 0x2b5a28
// Original: _ZN19CWidgetButtonRocket6UpdateEv
// Demangled: CWidgetButtonRocket::Update(void)
// attributes: thunk
int __fastcall CWidgetButtonRocket::Update(CWidgetButton *this)
{
  return j_CWidgetButton::Update(this);
}


// ============================================================

// Address: 0x2b5a2c
// Original: _ZN19CWidgetButtonRocketD0Ev
// Demangled: CWidgetButtonRocket::~CWidgetButtonRocket()
void __fastcall CWidgetButtonRocket::~CWidgetButtonRocket(CWidgetButtonRocket *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonRocket *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5a58
// Original: _ZN19CWidgetButtonRocket7GetNameEv
// Demangled: CWidgetButtonRocket::GetName(void)
int __fastcall CWidgetButtonRocket::GetName(CWidgetButtonRocket *this)
{
  return 2841180;
}


// ============================================================
