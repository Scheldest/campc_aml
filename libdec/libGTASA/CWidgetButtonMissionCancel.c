
// Address: 0x1998a4
// Original: j__ZN26CWidgetButtonMissionCancelC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonMissionCancel::CWidgetButtonMissionCancel(char const*,WidgetPosition const&,HIDMapping)
// attributes: thunk
int CWidgetButtonMissionCancel::CWidgetButtonMissionCancel()
{
  return _ZN26CWidgetButtonMissionCancelC2EPKcRK14WidgetPosition10HIDMapping();
}


// ============================================================

// Address: 0x2b6850
// Original: _ZN26CWidgetButtonMissionCancelC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonMissionCancel::CWidgetButtonMissionCancel(char const*,WidgetPosition const&,HIDMapping)
_DWORD *__fastcall CWidgetButtonMissionCancel::CWidgetButtonMissionCancel(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 11264, a4);
  *result = &off_663978;
  return result;
}


// ============================================================

// Address: 0x2b6878
// Original: _ZN26CWidgetButtonMissionCancel6UpdateEv
// Demangled: CWidgetButtonMissionCancel::Update(void)
int *__fastcall CWidgetButtonMissionCancel::Update(CWidgetButtonMissionCancel *this)
{
  int *result; // r0
  int v3; // r11

  CWidgetButton::Update(this);
  CTouchInterface::GetWidgetPosition(38, (int)this + 12, (int)this + 16, (int)this + 20, (int)this + 24);
  CWidget::SetTexture(this, (CWidgetButtonMissionCancel *)((char *)this + 8), "hud_x", 0);
  result = &CTheScripts::pActiveScripts;
  v3 = CTheScripts::pActiveScripts;
  if ( CTheScripts::pActiveScripts )
  {
    if ( strcmp((const char *)(CTheScripts::pActiveScripts + 8), "bball")
      && strcmp((const char *)(v3 + 8), "bbchal")
      && strcmp((const char *)(v3 + 8), "shrange")
      || (CWidget::SetTexture(this, (CWidgetButtonMissionCancel *)((char *)this + 8), "hud_drop_jetpack", 0),
          result = &CTheScripts::pActiveScripts,
          (v3 = CTheScripts::pActiveScripts) != 0) )
    {
      result = (int *)strcmp((const char *)(v3 + 8), "shrange");
      if ( !result )
        return (int *)CTouchInterface::GetWidgetPosition(
                        0,
                        (int)this + 12,
                        (int)this + 16,
                        (int)this + 20,
                        (int)this + 24);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b6968
// Original: _ZN26CWidgetButtonMissionCancelD0Ev
// Demangled: CWidgetButtonMissionCancel::~CWidgetButtonMissionCancel()
void __fastcall CWidgetButtonMissionCancel::~CWidgetButtonMissionCancel(CWidgetButtonMissionCancel *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonMissionCancel *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6994
// Original: _ZN26CWidgetButtonMissionCancel7GetNameEv
// Demangled: CWidgetButtonMissionCancel::GetName(void)
char *__fastcall CWidgetButtonMissionCancel::GetName(CWidgetButtonMissionCancel *this)
{
  return "BT Cancel";
}


// ============================================================
