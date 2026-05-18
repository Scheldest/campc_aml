
// Address: 0x18da34
// Original: j__ZN28CWidgetButtonBasketballShootC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonBasketballShoot::CWidgetButtonBasketballShoot(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetButtonBasketballShoot::CWidgetButtonBasketballShoot()
{
  return _ZN28CWidgetButtonBasketballShootC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2b5180
// Original: _ZN28CWidgetButtonBasketballShootC2EPKcRK14WidgetPosition
// Demangled: CWidgetButtonBasketballShoot::CWidgetButtonBasketballShoot(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetButtonBasketballShoot::CWidgetButtonBasketballShoot(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidgetButton::CWidgetButton(a1, a2, a3, 1, 4, 94);
  *result = &off_663160;
  return result;
}


// ============================================================

// Address: 0x2b51a8
// Original: _ZN28CWidgetButtonBasketballShoot6UpdateEv
// Demangled: CWidgetButtonBasketballShoot::Update(void)
int __fastcall CWidgetButtonBasketballShoot::Update(CWidgetButtonBasketballShoot *this)
{
  unsigned __int16 v2; // r1
  float v3; // s0
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float v7; // s6
  char v8; // r1
  int v9; // r0
  int v10; // r0
  float v11; // s0

  CWidgetButton::Update(this);
  if ( (*(int (__fastcall **)(CWidgetButtonBasketballShoot *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1 )
  {
    v8 = -1;
    dword_6FA2F0 = 0;
    LOBYTE(v9) = -1;
    *((_BYTE *)this + 73) = -1;
    goto LABEL_22;
  }
  *(float *)&dword_6FA2F0 = *(float *)&dword_6FA2F0 + (float)(*(float *)&CTimer::ms_fTimeStep / 50.0);
  v3 = (float)((float)((float)(COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_14 + 3), v2)) / 1000.0) + 1.0)
             * 0.15)
     + 0.4;
  v4 = v3 - (float)(v3 * 0.15);
  v5 = v3 + (float)(v3 * 0.15);
  v6 = *(float *)&dword_6FA2F0;
  if ( *(float *)&dword_6FA2F0 >= v4 )
  {
    if ( *(float *)&dword_6FA2F0 <= v5 )
    {
      *((_BYTE *)this + 73) = 0;
      goto LABEL_15;
    }
    v7 = (float)((float)((float)(*(float *)&dword_6FA2F0 - v5) / v5) * 255.0)
       + (float)((float)((float)(*(float *)&dword_6FA2F0 - v5) / v5) * 255.0);
  }
  else
  {
    v7 = 200.0 - (float)((float)(*(float *)&dword_6FA2F0 / v4) * 200.0);
  }
  v10 = (int)v7;
  if ( (int)v7 < 1 )
  {
    LOBYTE(v10) = 0;
  }
  else if ( v10 >= 255 )
  {
    LOBYTE(v10) = -1;
  }
  *((_BYTE *)this + 73) = v10;
  if ( v6 < v4 )
  {
    v11 = (float)(v6 / v4) * 200.0;
    goto LABEL_17;
  }
LABEL_15:
  if ( v6 > v5 )
  {
    v11 = (float)((float)((float)((float)(v6 - v5) / v5) * 255.0) * -2.0) + 255.0;
LABEL_17:
    v9 = (int)v11;
    if ( (int)v11 < 1 )
    {
      LOBYTE(v9) = 0;
      v8 = 0;
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v9 = 255;
LABEL_20:
  v8 = 0;
  if ( v9 >= 255 )
    LOBYTE(v9) = -1;
LABEL_22:
  *((_BYTE *)this + 75) = v8;
  *((_BYTE *)this + 74) = v9;
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2b531c
// Original: _ZN28CWidgetButtonBasketballShootD0Ev
// Demangled: CWidgetButtonBasketballShoot::~CWidgetButtonBasketballShoot()
void __fastcall CWidgetButtonBasketballShoot::~CWidgetButtonBasketballShoot(CWidgetButtonBasketballShoot *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonBasketballShoot *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b5348
// Original: _ZN28CWidgetButtonBasketballShoot7GetNameEv
// Demangled: CWidgetButtonBasketballShoot::GetName(void)
char *__fastcall CWidgetButtonBasketballShoot::GetName(CWidgetButtonBasketballShoot *this)
{
  return "Basketball Shoot";
}


// ============================================================
