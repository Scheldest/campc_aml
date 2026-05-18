
// Address: 0x2b5360
// Original: _ZN21CWidgetButtonHelpTextC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonHelpText::CWidgetButtonHelpText(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonHelpText::CWidgetButtonHelpText(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 4, 0);
  *result = &off_6631F4;
  return result;
}


// ============================================================

// Address: 0x2b5388
// Original: _ZN21CWidgetButtonHelpTextD0Ev
// Demangled: CWidgetButtonHelpText::~CWidgetButtonHelpText()
void __fastcall CWidgetButtonHelpText::~CWidgetButtonHelpText(CWidgetButtonHelpText *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonHelpText *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b53b4
// Original: _ZN21CWidgetButtonHelpText7GetNameEv
// Demangled: CWidgetButtonHelpText::GetName(void)
int __fastcall CWidgetButtonHelpText::GetName(CWidgetButtonHelpText *this)
{
  return 2839480;
}


// ============================================================

// Address: 0x2b53c0
// Original: _ZN21CWidgetButtonHelpText4DrawEv
// Demangled: CWidgetButtonHelpText::Draw(void)
void __fastcall CWidgetButtonHelpText::Draw(CWidgetButtonHelpText *this)
{
  ;
}


// ============================================================
