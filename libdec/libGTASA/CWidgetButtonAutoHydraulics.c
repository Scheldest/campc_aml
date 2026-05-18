
// Address: 0x18b400
// Original: j__ZN27CWidgetButtonAutoHydraulicsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonAutoHydraulics::CWidgetButtonAutoHydraulics(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonAutoHydraulics::CWidgetButtonAutoHydraulics()
{
  return _ZN27CWidgetButtonAutoHydraulicsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b6744
// Original: _ZN27CWidgetButtonAutoHydraulicsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonAutoHydraulics::CWidgetButtonAutoHydraulics(char const*,WidgetPosition const&)
int __fastcall CWidgetButtonAutoHydraulics::CWidgetButtonAutoHydraulics(int a1, int a2, int a3)
{
  int result; // r0

  result = CWidgetButton::CWidgetButton(a1, a2, a3, 1, 3072, 32);
  *(_BYTE *)(result + 168) = 0;
  *(_DWORD *)result = &off_6638E4;
  return result;
}


// ============================================================

// Address: 0x2b6774
// Original: _ZN27CWidgetButtonAutoHydraulics6UpdateEv
// Demangled: CWidgetButtonAutoHydraulics::Update(void)
int __fastcall CWidgetButtonAutoHydraulics::Update(CWidgetButtonAutoHydraulics *this)
{
  CTheScripts *v2; // r0
  CTheScripts *v3; // r5
  CTheScripts *IsPlayerOnAMission; // r0
  int result; // r0
  int v6; // r0
  CSprite2d *v7; // r1
  char *v8; // r2

  v2 = (CTheScripts *)CWidgetButton::Update(this);
  v3 = (CTheScripts *)*((unsigned __int8 *)this + 168);
  IsPlayerOnAMission = (CTheScripts *)CTheScripts::IsPlayerOnAMission(v2);
  if ( v3 != IsPlayerOnAMission )
  {
    IsPlayerOnAMission = (CTheScripts *)CTheScripts::IsPlayerOnAMission(IsPlayerOnAMission);
    if ( IsPlayerOnAMission )
    {
      IsPlayerOnAMission = 0;
      *((_DWORD *)this + 33) = 0;
    }
  }
  *((_BYTE *)this + 168) = CTheScripts::IsPlayerOnAMission(IsPlayerOnAMission);
  result = FindPlayerVehicle(-1, 0);
  if ( result )
  {
    v6 = *(__int16 *)(result + 38);
    if ( v6 == 531 || v6 == 525 )
    {
      v7 = (CWidgetButtonAutoHydraulics *)((char *)this + 8);
      if ( *((float *)this + 33) > 0.0 )
      {
LABEL_8:
        v8 = "menu_up";
        return j_CWidget::SetTexture(this, v7, v8, 0);
      }
    }
    else
    {
      v7 = (CWidgetButtonAutoHydraulics *)((char *)this + 8);
      if ( *((float *)this + 33) <= 0.0 )
        goto LABEL_8;
    }
    v8 = "menu_down";
    return j_CWidget::SetTexture(this, v7, v8, 0);
  }
  return result;
}


// ============================================================

// Address: 0x2b6810
// Original: _ZN27CWidgetButtonAutoHydraulicsD0Ev
// Demangled: CWidgetButtonAutoHydraulics::~CWidgetButtonAutoHydraulics()
void __fastcall CWidgetButtonAutoHydraulics::~CWidgetButtonAutoHydraulics(CWidgetButtonAutoHydraulics *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonAutoHydraulics *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b683c
// Original: _ZN27CWidgetButtonAutoHydraulics7GetNameEv
// Demangled: CWidgetButtonAutoHydraulics::GetName(void)
int __fastcall CWidgetButtonAutoHydraulics::GetName(CWidgetButtonAutoHydraulics *this)
{
  return 2844736;
}


// ============================================================
