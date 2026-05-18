
// Address: 0x19a060
// Original: j__ZN17CWidgetButtonDropC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonDrop::CWidgetButtonDrop(char const*,WidgetPosition const&,HIDMapping)
// attributes: thunk
int CWidgetButtonDrop::CWidgetButtonDrop()
{
  return _ZN17CWidgetButtonDropC2EPKcRK14WidgetPosition10HIDMapping();
}


// ============================================================

// Address: 0x2b5fa0
// Original: _ZN17CWidgetButtonDropC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonDrop::CWidgetButtonDrop(char const*,WidgetPosition const&,HIDMapping)
_DWORD *__fastcall CWidgetButtonDrop::CWidgetButtonDrop(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 3072, a4);
  *result = &off_663728;
  return result;
}


// ============================================================

// Address: 0x2b5fc8
// Original: _ZN17CWidgetButtonDropD0Ev
// Demangled: CWidgetButtonDrop::~CWidgetButtonDrop()
void __fastcall CWidgetButtonDrop::~CWidgetButtonDrop(CWidgetButtonDrop *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonDrop *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5ff4
// Original: _ZN17CWidgetButtonDrop7GetNameEv
// Demangled: CWidgetButtonDrop::GetName(void)
char *__fastcall CWidgetButtonDrop::GetName(CWidgetButtonDrop *this)
{
  return "BTN DROP";
}


// ============================================================
