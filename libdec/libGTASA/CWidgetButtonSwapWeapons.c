
// Address: 0x19b14c
// Original: j__ZN24CWidgetButtonSwapWeaponsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSwapWeapons::CWidgetButtonSwapWeapons(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonSwapWeapons::CWidgetButtonSwapWeapons()
{
  return _ZN24CWidgetButtonSwapWeaponsC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b5d00
// Original: _ZN24CWidgetButtonSwapWeaponsC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonSwapWeapons::CWidgetButtonSwapWeapons(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonSwapWeapons::CWidgetButtonSwapWeapons(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 3072, 33);
  *result = &off_66356C;
  return result;
}


// ============================================================

// Address: 0x2b5d2c
// Original: _ZN24CWidgetButtonSwapWeapons6UpdateEv
// Demangled: CWidgetButtonSwapWeapons::Update(void)
int __fastcall CWidgetButtonSwapWeapons::Update(CWidgetButtonSwapWeapons *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h] BYREF
  unsigned int v8; // [sp+10h] [bp-10h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-Ch] BYREF

  v8 = 0;
  v9[0] = 0;
  v6 = 0;
  v7 = 0;
  if ( CGameLogic::IsCoopGameGoingOn(0) == 1 )
    v2 = 14;
  else
    v2 = 17;
  CTouchInterface::GetWidgetPosition(v2, (int)v9, (int)&v8, (int)&v7, (int)&v6);
  v3 = v6;
  v4 = v7;
  *(_QWORD *)((char *)this + 12) = __PAIR64__(v8, v9[0]);
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 6) = v3;
  return CWidgetButton::Update(this);
}


// ============================================================

// Address: 0x2b5d70
// Original: _ZN24CWidgetButtonSwapWeaponsD0Ev
// Demangled: CWidgetButtonSwapWeapons::~CWidgetButtonSwapWeapons()
void __fastcall CWidgetButtonSwapWeapons::~CWidgetButtonSwapWeapons(CWidgetButtonSwapWeapons *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonSwapWeapons *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5d9c
// Original: _ZN24CWidgetButtonSwapWeapons7GetNameEv
// Demangled: CWidgetButtonSwapWeapons::GetName(void)
char *__fastcall CWidgetButtonSwapWeapons::GetName(CWidgetButtonSwapWeapons *this)
{
  return "BTN SW";
}


// ============================================================
