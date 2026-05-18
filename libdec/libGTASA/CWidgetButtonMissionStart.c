
// Address: 0x19a578
// Original: j__ZN25CWidgetButtonMissionStartC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonMissionStart::CWidgetButtonMissionStart(char const*,WidgetPosition const&,HIDMapping)
// attributes: thunk
int CWidgetButtonMissionStart::CWidgetButtonMissionStart()
{
  return _ZN25CWidgetButtonMissionStartC2EPKcRK14WidgetPosition10HIDMapping();
}


// ============================================================

// Address: 0x2b594c
// Original: _ZN25CWidgetButtonMissionStartC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonMissionStart::CWidgetButtonMissionStart(char const*,WidgetPosition const&,HIDMapping)
_DWORD *__fastcall CWidgetButtonMissionStart::CWidgetButtonMissionStart(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 3200, a4);
  *result = &off_66331C;
  return result;
}


// ============================================================

// Address: 0x2b5974
// Original: _ZN25CWidgetButtonMissionStart6UpdateEv
// Demangled: CWidgetButtonMissionStart::Update(void)
int __fastcall CWidgetButtonMissionStart::Update(CWidgetButtonMissionStart *this)
{
  if ( dword_6F37F8 && CWidget::GetEnabled((CWidget *)dword_6F37F8) == 1 )
    CWidget::SetEnabled(this, 0);
  if ( dword_6F389C && CWidget::GetEnabled((CWidget *)dword_6F389C) == 1 )
    CWidget::SetEnabled(this, 0);
  return j_CWidgetButton::Update(this);
}


// ============================================================

// Address: 0x2b59c4
// Original: _ZN25CWidgetButtonMissionStartD0Ev
// Demangled: CWidgetButtonMissionStart::~CWidgetButtonMissionStart()
void __fastcall CWidgetButtonMissionStart::~CWidgetButtonMissionStart(CWidgetButtonMissionStart *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonMissionStart *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b59f0
// Original: _ZN25CWidgetButtonMissionStart7GetNameEv
// Demangled: CWidgetButtonMissionStart::GetName(void)
char *__fastcall CWidgetButtonMissionStart::GetName(CWidgetButtonMissionStart *this)
{
  return "BT Start";
}


// ============================================================
