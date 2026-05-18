
// Address: 0x2b65c8
// Original: _ZN17CWidgetButtonHornC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonHorn::CWidgetButtonHorn(char const*,WidgetPosition const&)
int __fastcall CWidgetButtonHorn::CWidgetButtonHorn(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v8; // [sp+8h] [bp-18h] BYREF
  int v9; // [sp+Ch] [bp-14h] BYREF
  unsigned int v10; // [sp+10h] [bp-10h] BYREF
  _DWORD v11[3]; // [sp+14h] [bp-Ch] BYREF

  CWidgetButton::CWidgetButton(a1, a2, a3, 1, 0, 11);
  *(_DWORD *)a1 = &off_663850;
  v11[0] = 0;
  v9 = 0;
  v10 = 0;
  v4 = 7;
  v8 = 0;
  if ( byte_6FA300 )
    v4 = 8;
  CTouchInterface::GetWidgetPosition(v4, (int)v11, (int)&v10, (int)&v9, (int)&v8);
  v5 = v8;
  v6 = v9;
  *(_QWORD *)(a1 + 12) = __PAIR64__(v10, v11[0]);
  *(_DWORD *)(a1 + 20) = v6;
  *(_DWORD *)(a1 + 24) = v5;
  return a1;
}


// ============================================================

// Address: 0x2b662c
// Original: _ZN17CWidgetButtonHorn21SetupPositionAndScaleEv
// Demangled: CWidgetButtonHorn::SetupPositionAndScale(void)
int __fastcall CWidgetButtonHorn::SetupPositionAndScale(CWidgetButtonHorn *this)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // [sp+8h] [bp-18h] BYREF
  int v6; // [sp+Ch] [bp-14h] BYREF
  unsigned int v7; // [sp+10h] [bp-10h] BYREF
  _DWORD v8[3]; // [sp+14h] [bp-Ch] BYREF

  v8[0] = 0;
  v6 = 0;
  v7 = 0;
  v5 = 0;
  v2 = 7;
  if ( byte_6FA300 )
    v2 = 8;
  CTouchInterface::GetWidgetPosition(v2, (int)v8, (int)&v7, (int)&v6, (int)&v5);
  result = v5;
  v4 = v6;
  *(_QWORD *)((char *)this + 12) = __PAIR64__(v7, v8[0]);
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x2b6674
// Original: _ZN17CWidgetButtonHorn6UpdateEv
// Demangled: CWidgetButtonHorn::Update(void)
char *__fastcall CWidgetButtonHorn::Update(CWidgetButtonHorn *this)
{
  int v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r4
  char *result; // r0
  int v9; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+Ch] [bp-14h] BYREF
  int v11; // [sp+10h] [bp-10h] BYREF
  _DWORD v12[3]; // [sp+14h] [bp-Ch] BYREF

  CWidgetButton::Update(this);
  v2 = strcmp((const char *)(CTheScripts::pActiveScripts + 8), "lowgame");
  v3 = v2 == 0;
  byte_6FA300 = v2 == 0;
  if ( v3 != (unsigned __int8)byte_6FA301 )
  {
    v11 = 0;
    v12[0] = 0;
    v4 = 7;
    v9 = 0;
    v10 = 0;
    if ( !v2 )
      v4 = 8;
    CTouchInterface::GetWidgetPosition(v4, (int)v12, (int)&v11, (int)&v10, (int)&v9);
    v5 = v9;
    v6 = v10;
    v7 = v11;
    *((_DWORD *)this + 3) = v12[0];
    *((_DWORD *)this + 4) = v7;
    *((_DWORD *)this + 5) = v6;
    *((_DWORD *)this + 6) = v5;
    LOBYTE(v3) = byte_6FA300;
  }
  result = &byte_6FA301;
  byte_6FA301 = v3;
  return result;
}


// ============================================================

// Address: 0x2b670c
// Original: _ZN17CWidgetButtonHornD0Ev
// Demangled: CWidgetButtonHorn::~CWidgetButtonHorn()
void __fastcall CWidgetButtonHorn::~CWidgetButtonHorn(CWidgetButtonHorn *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonHorn *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b6738
// Original: _ZN17CWidgetButtonHorn7GetNameEv
// Demangled: CWidgetButtonHorn::GetName(void)
int __fastcall CWidgetButtonHorn::GetName(CWidgetButtonHorn *this)
{
  return 2844476;
}


// ============================================================
