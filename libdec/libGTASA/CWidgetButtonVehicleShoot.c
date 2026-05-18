
// Address: 0x189f24
// Original: j__ZN25CWidgetButtonVehicleShootC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonVehicleShoot::CWidgetButtonVehicleShoot(char const*,WidgetPosition const&,HIDMapping)
// attributes: thunk
int CWidgetButtonVehicleShoot::CWidgetButtonVehicleShoot()
{
  return _ZN25CWidgetButtonVehicleShootC2EPKcRK14WidgetPosition10HIDMapping();
}


// ============================================================

// Address: 0x2b5e08
// Original: _ZN25CWidgetButtonVehicleShootC2EPKcRK14WidgetPosition10HIDMapping
// Demangled: CWidgetButtonVehicleShoot::CWidgetButtonVehicleShoot(char const*,WidgetPosition const&,HIDMapping)
_DWORD *__fastcall CWidgetButtonVehicleShoot::CWidgetButtonVehicleShoot(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, a4);
  *result = &off_663694;
  return result;
}


// ============================================================

// Address: 0x2b5e30
// Original: _ZN25CWidgetButtonVehicleShoot6UpdateEv
// Demangled: CWidgetButtonVehicleShoot::Update(void)
int __fastcall CWidgetButtonVehicleShoot::Update(CWidgetButtonVehicleShoot *this)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  int v5; // r1
  int v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h] BYREF
  unsigned int v8; // [sp+10h] [bp-10h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-Ch] BYREF

  CWidgetButton::Update(this);
  v9[0] = 0;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  v2 = *((_DWORD *)this + 1);
  if ( v2 == 20 )
  {
    v3 = 11;
    if ( dword_6E045C != 1 )
      v3 = 6;
    goto LABEL_8;
  }
  if ( v2 == 19 )
  {
    v3 = 10;
    if ( dword_6E045C != 1 )
      v3 = 5;
LABEL_8:
    CTouchInterface::GetWidgetPosition(v3, (int)v9, (int)&v8, (int)&v7, (int)&v6);
  }
  result = v6;
  v5 = v7;
  *(_QWORD *)((char *)this + 12) = __PAIR64__(v8, v9[0]);
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x2b5e94
// Original: _ZN25CWidgetButtonVehicleShoot14UpdatePositionEv
// Demangled: CWidgetButtonVehicleShoot::UpdatePosition(void)
int __fastcall CWidgetButtonVehicleShoot::UpdatePosition(CWidgetButtonVehicleShoot *this)
{
  int v2; // r0
  int v3; // r0
  int result; // r0
  int v5; // r1
  int v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h] BYREF
  unsigned int v8; // [sp+10h] [bp-10h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-Ch] BYREF

  v8 = 0;
  v9[0] = 0;
  v6 = 0;
  v7 = 0;
  v2 = *((_DWORD *)this + 1);
  if ( v2 == 20 )
  {
    v3 = 11;
    if ( dword_6E045C != 1 )
      v3 = 6;
    goto LABEL_8;
  }
  if ( v2 == 19 )
  {
    v3 = 10;
    if ( dword_6E045C != 1 )
      v3 = 5;
LABEL_8:
    CTouchInterface::GetWidgetPosition(v3, (int)v9, (int)&v8, (int)&v7, (int)&v6);
  }
  result = v6;
  v5 = v7;
  *(_QWORD *)((char *)this + 12) = __PAIR64__(v8, v9[0]);
  *((_DWORD *)this + 5) = v5;
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x2b5ef4
// Original: _ZN25CWidgetButtonVehicleShoot9IsTouchedEP9CVector2D
// Demangled: CWidgetButtonVehicleShoot::IsTouched(CVector2D *)
int CWidgetButtonVehicleShoot::IsTouched()
{
  if ( CHID::Implements() == 1 )
    return sub_196BF4();
  else
    return j_CWidget::IsTouched();
}


// ============================================================

// Address: 0x2b5f1e
// Original: _ZN25CWidgetButtonVehicleShoot10IsHeldDownEv
// Demangled: CWidgetButtonVehicleShoot::IsHeldDown(void)
int __fastcall CWidgetButtonVehicleShoot::IsHeldDown(CWidgetButtonVehicleShoot *this)
{
  if ( CHID::Implements() != 1 || CHID::Implements() != 1 )
    return j_CWidget::IsTouched();
  if ( CHID::IsPressed(*((_DWORD *)this + 1), 0) == 1 )
    return sub_196BF4();
  return 0;
}


// ============================================================

// Address: 0x2b5f60
// Original: _ZN25CWidgetButtonVehicleShootD0Ev
// Demangled: CWidgetButtonVehicleShoot::~CWidgetButtonVehicleShoot()
void __fastcall CWidgetButtonVehicleShoot::~CWidgetButtonVehicleShoot(CWidgetButtonVehicleShoot *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonVehicleShoot *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5f8c
// Original: _ZN25CWidgetButtonVehicleShoot7GetNameEv
// Demangled: CWidgetButtonVehicleShoot::GetName(void)
char *__fastcall CWidgetButtonVehicleShoot::GetName(CWidgetButtonVehicleShoot *this)
{
  return "BTN VEH SHOOT";
}


// ============================================================
