
// Address: 0x18d364
// Original: j__ZN13CWidgetButtonC2EPKcRK14WidgetPositionjj10HIDMapping
// Demangled: CWidgetButton::CWidgetButton(char const*,WidgetPosition const&,uint,uint,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButton::CWidgetButton(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _ZN13CWidgetButtonC2EPKcRK14WidgetPositionjj10HIDMapping(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x18f51c
// Original: j__ZN13CWidgetButtonC2EPKcRK14WidgetPositionjj10HIDMapping_0
// Demangled: CWidgetButton::CWidgetButton(char const*,WidgetPosition const&,uint,uint,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButton::CWidgetButton(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return _ZN13CWidgetButtonC2EPKcRK14WidgetPositionjj10HIDMapping(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x18f6d0
// Original: j__ZN13CWidgetButton4DrawEv
// Demangled: CWidgetButton::Draw(void)
// attributes: thunk
int __fastcall CWidgetButton::Draw(CWidgetButton *this)
{
  return _ZN13CWidgetButton4DrawEv(this);
}


// ============================================================

// Address: 0x192ff0
// Original: j__ZN13CWidgetButton6UpdateEv
// Demangled: CWidgetButton::Update(void)
// attributes: thunk
int __fastcall CWidgetButton::Update(CWidgetButton *this)
{
  return _ZN13CWidgetButton6UpdateEv(this);
}


// ============================================================

// Address: 0x193de0
// Original: j__ZN13CWidgetButton13SetFillSpriteEPKcff
// Demangled: CWidgetButton::SetFillSprite(char const*,float,float)
// attributes: thunk
int __fastcall CWidgetButton::SetFillSprite(CWidgetButton *this, const char *a2, float a3, float a4)
{
  return _ZN13CWidgetButton13SetFillSpriteEPKcff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19453c
// Original: j__ZN13CWidgetButton20DrawHelpIconExplicitE10HIDMappingPKcfffi
// Demangled: CWidgetButton::DrawHelpIconExplicit(HIDMapping,char const*,float,float,float,int)
// attributes: thunk
int __fastcall CWidgetButton::DrawHelpIconExplicit(int a1, int a2, int a3, int a4, float a5, int a6)
{
  return _ZN13CWidgetButton20DrawHelpIconExplicitE10HIDMappingPKcfffi(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19f5b8
// Original: j__ZN13CWidgetButton12DrawHelpIconEPKcfffi
// Demangled: CWidgetButton::DrawHelpIcon(char const*,float,float,float,int)
// attributes: thunk
int __fastcall CWidgetButton::DrawHelpIcon(CWidgetButton *this, const char *a2, float a3, float a4, float a5, int a6)
{
  return _ZN13CWidgetButton12DrawHelpIconEPKcfffi(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x2b4104
// Original: _ZN13CWidgetButtonC2EPKcRK14WidgetPositionjj10HIDMapping
// Demangled: CWidgetButton::CWidgetButton(char const*,WidgetPosition const&,uint,uint,HIDMapping)
_DWORD *__fastcall CWidgetButton::CWidgetButton(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // r0

  CWidget::CWidget((int)a1, a2, a3, a5 | 3, a6);
  *a1 = &off_662F10;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 38));
  a1[36] = a4;
  a1[37] = 0;
  a1[39] = 0;
  a1[40] = 0;
  result = a1;
  a1[41] = 1065353216;
  return result;
}


// ============================================================

// Address: 0x2b414c
// Original: _ZN13CWidgetButton6UpdateEv
// Demangled: CWidgetButton::Update(void)
int __fastcall CWidgetButton::Update(CWidgetButton *this)
{
  char v2; // r1
  char v3; // r0

  CWidget::Update(this);
  if ( (*(int (__fastcall **)(CWidgetButton *, _DWORD))(*(_DWORD *)this + 80))(this, 0) == 1 )
  {
    v2 = -1;
    v3 = -1;
    if ( (*((_BYTE *)this + 144) & 1) != 0 )
    {
      v2 = -52;
      v3 = -103;
    }
  }
  else
  {
    v3 = -1;
    v2 = -1;
  }
  *((_BYTE *)this + 74) = v2;
  *((_BYTE *)this + 73) = v3;
  *((_BYTE *)this + 75) = v3;
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2b419c
// Original: _ZN13CWidgetButton4DrawEv
// Demangled: CWidgetButton::Draw(void)
int __fastcall CWidgetButton::Draw(CWidgetButton *this)
{
  int result; // r0
  float v3; // s2
  float v4; // s6
  int v5; // r0
  float v6; // s0
  float v7; // s4
  float v8; // s16
  float v9; // s0
  float v10; // s2
  int v11; // r0
  float v12; // s0
  float v13; // s4
  _BYTE v14[4]; // [sp+1Ch] [bp-44h] BYREF
  _DWORD v15[4]; // [sp+20h] [bp-40h] BYREF
  _DWORD v16[12]; // [sp+30h] [bp-30h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    if ( *((_DWORD *)this + 2) )
      CSprite2d::Draw((char *)this + 8, (char *)this + 32, (char *)this + 73);
    if ( *((_DWORD *)this + 38) )
    {
      v3 = *((float *)this + 40);
      v4 = *((float *)this + 11);
      v5 = *((_DWORD *)this + 10);
      v6 = (float)(*((float *)this + 41) - v3) * *((float *)this + 39);
      v7 = *((float *)this + 9);
      v16[0] = *((_DWORD *)this + 8);
      v16[2] = v5;
      *(float *)&v16[3] = v4;
      v8 = 1.0 - (float)(v3 + v6);
      *(float *)&v16[1] = v4 + (float)(v8 * fabsf(v7 - v4));
      CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
      CSprite2d::Draw((int)this + 152, (int)v16, (int)v15, 0, 0.0, 1.0, 0.0, 0.0, v8, 1.0, v8);
      v9 = *((float *)this + 9);
      v10 = *((float *)this + 11);
      v11 = *((_DWORD *)this + 10);
      v15[0] = *((_DWORD *)this + 8);
      v15[2] = v11;
      *(float *)&v15[1] = v9;
      *(float *)&v15[3] = v10 + (float)(v8 * fabsf(v9 - v10));
      CRGBA::CRGBA((CRGBA *)v14, 0x99u, 0xCCu, 0x99u, *((_BYTE *)this + 76));
      CSprite2d::Draw((int)this + 152, (int)v15, (int)v14, 0, v8, 1.0, v8, 0.0, 1.0, 1.0, 1.0);
    }
    result = CHID::Implements();
    if ( result == 1 )
    {
      if ( (*((_DWORD *)this + 32) & 0x800) != 0
        || (result = (unsigned __int8)CCheat::m_bShowMappings, CCheat::m_bShowMappings) )
      {
        v12 = *((float *)this + 9);
        v13 = fabsf(v12 - *((float *)this + 11)) * 0.375;
        return CHID::DrawHelpIcon(
                 0,
                 *((_DWORD *)this + 1),
                 COERCE_INT(*((float *)this + 10) - v13),
                 COERCE_INT(v12 - v13),
                 v13,
                 *((unsigned __int8 *)this + 76),
                 0);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b4324
// Original: _ZN13CWidgetButton7PulsateEv
// Demangled: CWidgetButton::Pulsate(void)
int *__fastcall CWidgetButton::Pulsate(CWidgetButton *this)
{
  float v2; // s0
  float v3; // r0
  float v4; // s0
  float v5; // s0
  int *result; // r0
  float v7; // s2
  float v8; // s0
  float v9; // s4
  float v10; // s2

  v2 = CWidget::m_fElapsedTime + *((float *)this + 37);
  v3 = fmodf(v2, 1.5);
  *((float *)this + 37) = v3;
  if ( v3 > 1.1 && v3 < 1.2 )
  {
    v4 = -1.1;
LABEL_7:
    v5 = (float)((float)(v3 + v4) * 1.45) + 1.0;
    goto LABEL_8;
  }
  v5 = 1.0;
  if ( v3 > 1.3 && v3 < 1.4 )
  {
    v4 = -1.3;
    goto LABEL_7;
  }
LABEL_8:
  result = &RsGlobal;
  v7 = (float)dword_9FC900 / 640.0;
  v8 = (float)(v5 * *((float *)this + 5)) * v7;
  v9 = *((float *)this + 4) * (float)((float)dword_9FC904 / 448.0);
  v10 = *((float *)this + 3) * v7;
  *((float *)this + 8) = v10 - v8;
  *((float *)this + 9) = v8 + v9;
  *((float *)this + 10) = v10 + v8;
  *((float *)this + 11) = v9 - v8;
  return result;
}


// ============================================================

// Address: 0x2b4444
// Original: _ZN13CWidgetButton13SetFillSpriteEPKcff
// Demangled: CWidgetButton::SetFillSprite(char const*,float,float)
int __fastcall CWidgetButton::SetFillSprite(CWidgetButton *this, char *a2, __int64 a3)
{
  *((_QWORD *)this + 20) = a3;
  return j_CWidget::SetTexture(this, (CWidgetButton *)((char *)this + 152), a2, 1);
}


// ============================================================

// Address: 0x2b4456
// Original: _ZN13CWidgetButton12DrawHelpIconEPKcfffi
// Demangled: CWidgetButton::DrawHelpIcon(char const*,float,float,float,int)
int __fastcall CWidgetButton::DrawHelpIcon(CWidgetButton *this, const char *a2, int a3, int a4, float a5, int a6)
{
  int result; // r0
  char *v13; // r4
  int v14; // t1
  _BYTE v15[4]; // [sp+Ch] [bp-44h] BYREF
  int v16; // [sp+10h] [bp-40h] BYREF
  float v17; // [sp+14h] [bp-3Ch]
  float v18; // [sp+18h] [bp-38h]
  int v19; // [sp+1Ch] [bp-34h]

  if ( CHID::Implements() == 1 )
    return CHID::DrawHelpIcon((int)a2, *((_DWORD *)this + 1), a3, a4, a5, a6, 0);
  if ( *((_DWORD *)this + 38) )
  {
    v19 = a4;
    v16 = a3;
    v18 = *(float *)&a3 + a5;
    v17 = *(float *)&a4 + a5;
    CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, a6);
    CSprite2d::Draw((char *)this + 152, &v16, v15);
  }
  v14 = *((_DWORD *)this + 2);
  v13 = (char *)this + 8;
  result = v14;
  if ( v14 )
  {
    v19 = a4;
    v16 = a3;
    v18 = *(float *)&a3 + a5;
    v17 = *(float *)&a4 + a5;
    CRGBA::CRGBA((CRGBA *)v15, 0xFFu, 0xFFu, 0xFFu, a6);
    return CSprite2d::Draw(v13, &v16, v15);
  }
  return result;
}


// ============================================================

// Address: 0x2b4524
// Original: _ZN13CWidgetButton20DrawHelpIconExplicitE10HIDMappingPKcfffi
// Demangled: CWidgetButton::DrawHelpIconExplicit(HIDMapping,char const*,float,float,float,int)
int __fastcall CWidgetButton::DrawHelpIconExplicit(int a1, CSprite2d *a2, float a3, float a4, float a5, int a6)
{
  char *v12; // r2
  _BYTE v14[4]; // [sp+Ch] [bp-44h] BYREF
  float v15[16]; // [sp+10h] [bp-40h] BYREF

  if ( CHID::Implements() == 1 )
    return CHID::DrawHelpIcon(0, a1, SLODWORD(a3), SLODWORD(a4), a5, a6, 0);
  CWidget::SetTextureStatic((CWidget *)&CWidgetButton::m_StaticSprite, a2, v12);
  v15[3] = a4;
  v15[0] = a3;
  v15[2] = a3 + a5;
  v15[1] = a4 + a5;
  CRGBA::CRGBA((CRGBA *)v14, 0xFFu, 0xFFu, 0xFFu, a6);
  return CSprite2d::Draw(&CWidgetButton::m_StaticSprite, v15, v14);
}


// ============================================================

// Address: 0x2b45c0
// Original: _ZN13CWidgetButtonD2Ev
// Demangled: CWidgetButton::~CWidgetButton()
void __fastcall CWidgetButton::~CWidgetButton(CWidgetButton *this)
{
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButton *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b45e8
// Original: _ZN13CWidgetButtonD0Ev
// Demangled: CWidgetButton::~CWidgetButton()
void __fastcall CWidgetButton::~CWidgetButton(CWidgetButton *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButton *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2b4614
// Original: _ZN13CWidgetButton7GetNameEv
// Demangled: CWidgetButton::GetName(void)
int __fastcall CWidgetButton::GetName(CWidgetButton *this)
{
  return 2835992;
}


// ============================================================

// Address: 0x2b461c
// Original: _ZN13CWidgetButton8IsButtonEv
// Demangled: CWidgetButton::IsButton(void)
int __fastcall CWidgetButton::IsButton(CWidgetButton *this)
{
  return 1;
}


// ============================================================
