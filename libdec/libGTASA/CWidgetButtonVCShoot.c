
// Address: 0x192a1c
// Original: j__ZN20CWidgetButtonVCShootC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonVCShoot::CWidgetButtonVCShoot(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonVCShoot::CWidgetButtonVCShoot()
{
  return _ZN20CWidgetButtonVCShootC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b6c00
// Original: _ZN20CWidgetButtonVCShootC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonVCShoot::CWidgetButtonVCShoot(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonVCShoot::CWidgetButtonVCShoot(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 256, 1);
  *result = &off_663B34;
  return result;
}


// ============================================================

// Address: 0x2b6c2c
// Original: _ZN20CWidgetButtonVCShoot6UpdateEv
// Demangled: CWidgetButtonVCShoot::Update(void)
int __fastcall CWidgetButtonVCShoot::Update(CWidgetButtonVCShoot *this)
{
  int PlayerPed; // r0
  CSprite2d *v3; // r1
  char *v4; // r2
  CHID *v5; // r0
  int result; // r0
  int v7; // r5
  int v8; // r0

  CWidgetButton::Update(this);
  if ( FindPlayerPed(-1)
    && (PlayerPed = FindPlayerPed(-1), *(_DWORD *)(PlayerPed + 28 * *(char *)(PlayerPed + 1820) + 1444) == 43) )
  {
    v3 = (CWidgetButtonVCShoot *)((char *)this + 8);
    v4 = "hud_camera";
  }
  else
  {
    v3 = (CWidgetButtonVCShoot *)((char *)this + 8);
    v4 = "shoot";
  }
  v5 = (CHID *)CWidget::SetTexture(this, v3, v4, 0);
  result = CHID::GetInputType(v5);
  if ( result == 2 )
  {
    result = FindPlayerPed(-1);
    v7 = 1;
    if ( result )
    {
      v8 = FindPlayerPed(-1);
      result = CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(v8 + 1088));
      if ( result )
        v7 = 88;
    }
    *((_DWORD *)this + 1) = v7;
  }
  else
  {
    *((_DWORD *)this + 1) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x2b6cbc
// Original: _ZN20CWidgetButtonVCShootD0Ev
// Demangled: CWidgetButtonVCShoot::~CWidgetButtonVCShoot()
void __fastcall CWidgetButtonVCShoot::~CWidgetButtonVCShoot(CWidgetButtonVCShoot *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonVCShoot *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6ce8
// Original: _ZN20CWidgetButtonVCShoot7GetNameEv
// Demangled: CWidgetButtonVCShoot::GetName(void)
char *__fastcall CWidgetButtonVCShoot::GetName(CWidgetButtonVCShoot *this)
{
  return "VC Shoot";
}


// ============================================================
