
// Address: 0x191fac
// Original: j__ZN21CWidgetButtonAnimatedC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping
// Demangled: CWidgetButtonAnimated::CWidgetButtonAnimated(char const*,char const*,WidgetPosition const&,uint,uint,char const*,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButtonAnimated::CWidgetButtonAnimated(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7,
        int a8)
{
  return _ZN21CWidgetButtonAnimatedC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19601c
// Original: j__ZN21CWidgetButtonAnimatedD2Ev
// Demangled: CWidgetButtonAnimated::~CWidgetButtonAnimated()
// attributes: thunk
void __fastcall CWidgetButtonAnimated::~CWidgetButtonAnimated(CWidgetButtonAnimated *this)
{
  _ZN21CWidgetButtonAnimatedD2Ev(this);
}


// ============================================================

// Address: 0x199958
// Original: j__ZN21CWidgetButtonAnimated16AnyObjectEnabledEv
// Demangled: CWidgetButtonAnimated::AnyObjectEnabled(void)
// attributes: thunk
int __fastcall CWidgetButtonAnimated::AnyObjectEnabled(CWidgetButtonAnimated *this)
{
  return _ZN21CWidgetButtonAnimated16AnyObjectEnabledEv(this);
}


// ============================================================

// Address: 0x19ae60
// Original: j__ZN21CWidgetButtonAnimatedC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping_0
// Demangled: CWidgetButtonAnimated::CWidgetButtonAnimated(char const*,char const*,WidgetPosition const&,uint,uint,char const*,HIDMapping)
// attributes: thunk
int __fastcall CWidgetButtonAnimated::CWidgetButtonAnimated(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7,
        int a8)
{
  return _ZN21CWidgetButtonAnimatedC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x2b4620
// Original: _ZN21CWidgetButtonAnimatedC2EPKcS1_RK14WidgetPositionjjS1_10HIDMapping
// Demangled: CWidgetButtonAnimated::CWidgetButtonAnimated(char const*,char const*,WidgetPosition const&,uint,uint,char const*,HIDMapping)
int __fastcall CWidgetButtonAnimated::CWidgetButtonAnimated(
        int a1,
        int a2,
        char *a3,
        int a4,
        int a5,
        int a6,
        char *a7,
        int a8)
{
  int v10; // r2
  int *v11; // r3
  const char *v12; // r1
  _BYTE v14[20]; // [sp+Ch] [bp-14h] BYREF

  CWidgetButton::CWidgetButton(a1, a2, a4, a5, a6 | 3, a8);
  *(_DWORD *)a1 = &off_662FA4;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 176));
  *(_DWORD *)(a1 + 444) = *(_DWORD *)(a1 + 4);
  v10 = CWidgetButtonAnimated::m_pChainTail;
  *(_QWORD *)(a1 + 168) = (unsigned int)CWidgetButtonAnimated::m_pChainTail;
  v11 = (int *)(v10 + 172);
  if ( !v10 )
    v11 = &CWidgetButtonAnimated::m_pChainHead;
  *v11 = a1;
  CWidgetButtonAnimated::m_pChainTail = a1;
  *(_DWORD *)(a1 + 128) &= ~1u;
  if ( a3 )
    CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 176), a3, 1);
  v12 = &byte_61CD7E;
  if ( a7 )
    v12 = a7;
  strcpy((char *)(a1 + 180), v12);
  CRGBA::CRGBA((CRGBA *)v14, 0xFFu, 0xFFu, 0xFFu, 0xFFu);
  *(_BYTE *)(a1 + 436) = v14[0];
  *(_BYTE *)(a1 + 437) = v14[1];
  *(_BYTE *)(a1 + 438) = v14[2];
  *(_BYTE *)(a1 + 439) = v14[3];
  *(_DWORD *)(a1 + 440) = 1056964608;
  return a1;
}


// ============================================================

// Address: 0x2b4708
// Original: _ZN21CWidgetButtonAnimatedD2Ev
// Demangled: CWidgetButtonAnimated::~CWidgetButtonAnimated()
void __fastcall CWidgetButtonAnimated::~CWidgetButtonAnimated(CWidgetButtonAnimated *this)
{
  __int64 v2; // kr00_8
  int *v3; // r0
  __int64 v4; // r0
  int *v5; // r2

  v2 = *((_QWORD *)this + 21);
  *(_DWORD *)this = &off_662FA4;
  v3 = (int *)(v2 + 172);
  if ( !(_DWORD)v2 )
    v3 = &CWidgetButtonAnimated::m_pChainHead;
  *v3 = HIDWORD(v2);
  v4 = *((_QWORD *)this + 21);
  v5 = (int *)(HIDWORD(v4) + 168);
  if ( !HIDWORD(v4) )
    v5 = &CWidgetButtonAnimated::m_pChainTail;
  *v5 = v4;
  CSprite2d::~CSprite2d((CWidgetButtonAnimated *)((char *)this + 176));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonAnimated *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b477c
// Original: _ZN21CWidgetButtonAnimatedD0Ev
// Demangled: CWidgetButtonAnimated::~CWidgetButtonAnimated()
void __fastcall CWidgetButtonAnimated::~CWidgetButtonAnimated(CWidgetButtonAnimated *this)
{
  __int64 v2; // kr00_8
  int *v3; // r0
  __int64 v4; // r0
  int *v5; // r2
  void *v6; // r0

  v2 = *((_QWORD *)this + 21);
  *(_DWORD *)this = &off_662FA4;
  v3 = (int *)(v2 + 172);
  if ( !(_DWORD)v2 )
    v3 = &CWidgetButtonAnimated::m_pChainHead;
  *v3 = HIDWORD(v2);
  v4 = *((_QWORD *)this + 21);
  v5 = (int *)(HIDWORD(v4) + 168);
  if ( !HIDWORD(v4) )
    v5 = &CWidgetButtonAnimated::m_pChainTail;
  *v5 = v4;
  CSprite2d::~CSprite2d((CWidgetButtonAnimated *)((char *)this + 176));
  *(_DWORD *)this = &off_662F10;
  CSprite2d::~CSprite2d((CWidgetButtonAnimated *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v6);
}


// ============================================================

// Address: 0x2b47f4
// Original: _ZN21CWidgetButtonAnimated6UpdateEv
// Demangled: CWidgetButtonAnimated::Update(void)
int __fastcall CWidgetButtonAnimated::Update(CWidgetButtonAnimated *this)
{
  unsigned int v2; // r0
  bool v3; // zf
  int v4; // r0
  int v5; // r1
  int result; // r0

  CWidgetButton::Update(this);
  v2 = *((_DWORD *)this + 36);
  v3 = (v2 & 2) == 0;
  if ( (v2 & 2) != 0 )
    v3 = *((_BYTE *)this + 77) == 0;
  if ( !v3 )
  {
    v4 = (*(int (__fastcall **)(CWidgetButtonAnimated *, _DWORD))(*(_DWORD *)this + 52))(this, 0);
    v5 = *((_DWORD *)this + 36);
    if ( v4 == 1 )
    {
      v2 = v5 | 4;
      if ( (v5 & 4) != 0 )
        v2 = v5 & 0xFFFFFFFB;
      *((_DWORD *)this + 36) = v2;
    }
    else
    {
      v2 = *((_DWORD *)this + 36);
    }
  }
  if ( (v2 & 0x10) != 0 )
    result = 0;
  else
    result = *((_DWORD *)this + 111);
  *((_DWORD *)this + 1) = result;
  return result;
}


// ============================================================

// Address: 0x2b4848
// Original: _ZN21CWidgetButtonAnimated4DrawEv
// Demangled: CWidgetButtonAnimated::Draw(void)
int __fastcall CWidgetButtonAnimated::Draw(CWidgetButtonAnimated *this)
{
  int result; // r0
  char *v3; // r6
  float v4; // s0
  float v5; // s4
  float v6; // s2
  float v7; // s6
  float v8; // s10
  float v9; // s8
  float v10; // s0
  float v11; // s2
  float v12; // s4
  float v13; // s6
  unsigned __int8 v14; // r2
  unsigned __int8 v15; // r1
  unsigned __int8 v16; // r1
  unsigned __int8 v17; // r1
  signed __int8 v18; // r1
  float v19; // s16
  float v20; // r1
  CFont *v21; // r0
  unsigned __int8 v22; // r3
  float v23; // r0
  float v24; // r1
  float v25; // s0
  int v26; // r0
  bool v27; // r1
  float v28; // s0
  float v29; // s4
  float v30; // s2
  float v31; // s18
  float v32; // s16
  float v33; // s22
  float v34; // s2
  float v35; // s0
  CFont *v36; // r0
  unsigned __int16 *v37; // r3
  _BYTE v38[4]; // [sp+Ch] [bp-4Ch] BYREF
  _BYTE v39[4]; // [sp+10h] [bp-48h] BYREF
  _BYTE v40[4]; // [sp+14h] [bp-44h] BYREF
  float v41[16]; // [sp+18h] [bp-40h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = (char *)this + 176;
    if ( *((_DWORD *)this + 44)
      && ((*(int (__fastcall **)(CWidgetButtonAnimated *, _DWORD))(*(_DWORD *)this + 80))(this, 0)
       || (*((_BYTE *)this + 144) & 4) != 0)
      || (v3 = (char *)this + 8, *((_DWORD *)this + 2))
      && !(*(int (__fastcall **)(CWidgetButtonAnimated *, _DWORD))(*(_DWORD *)this + 80))(this, 0) )
    {
      CSprite2d::Draw(v3, (char *)this + 32, (char *)this + 73);
    }
    if ( (*((_BYTE *)this + 144) & 8) != 0 )
    {
      v4 = *((float *)this + 8);
      v5 = *((float *)this + 10);
      v6 = *((float *)this + 9);
      v7 = *((float *)this + 11);
      v8 = v5 - v4;
      v9 = v6 - v7;
      v10 = (float)(v4 + v5) * 0.5;
      v11 = (float)(v6 + v7) * 0.5;
      v12 = fabsf(v8) * 0.5;
      v13 = fabsf(v9) * 0.5;
      v41[3] = v11 - v13;
      v41[0] = v10 - v12;
      v41[2] = v10 + v12;
      v41[1] = v11 + v13;
      CRGBA::CRGBA((CRGBA *)v40, 0, 0xFFu, 0, (unsigned int)(float)((float)*((unsigned __int8 *)this + 76) * 0.3));
      CSprite2d::Draw((char *)this + 8, v41, v40);
    }
    if ( strlen((const char *)this + 180) )
    {
      CFont::SetBackground(0, 0, v14);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v15);
      CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v16);
      CFont::SetOrientation(0, v17);
      CFont::SetEdge(0, v18);
      CRGBA::CRGBA((CRGBA *)v39, 0, 0, 0, *((_BYTE *)this + 76));
      CFont::SetDropColor();
      CRGBA::CRGBA(
        (CRGBA *)v38,
        *((_BYTE *)this + 436),
        *((_BYTE *)this + 437),
        *((_BYTE *)this + 438),
        (unsigned int)(float)((float)((float)*((unsigned __int8 *)this + 439) / 255.0)
                            * (float)*((unsigned __int8 *)this + 76)));
      CFont::SetColor();
      v19 = fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.01;
      CFont::SetScale((CFont *)LODWORD(v19), v20);
      v21 = (CFont *)CText::Get((CText *)TheText, (CWidgetButtonAnimated *)((char *)this + 180));
      v23 = COERCE_FLOAT(CFont::GetStringWidth(v21, (unsigned __int16 *)((char *)&stderr + 1), 0, v22));
      v25 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.65;
      if ( v23 > v25 )
        CFont::SetScale(COERCE_CFONT_((float)(v25 / v23) * v19), v24);
      v26 = (*(int (__fastcall **)(CWidgetButtonAnimated *, _DWORD))(*(_DWORD *)this + 80))(this, 0);
      v28 = *((float *)this + 8);
      v29 = *((float *)this + 10);
      v30 = *((float *)this + 9);
      v31 = *((float *)this + 11);
      v32 = (float)(v28 + v29) * 0.5;
      if ( v26 == 1 )
      {
        v33 = fabsf(v29 - v28) * 0.01;
        v34 = v33 + (float)(v31 + (float)(fabsf(v30 - v31) * *((float *)this + 110)));
        v35 = COERCE_FLOAT(CFont::GetHeight(0, v27)) * -0.5;
        v32 = v32 + v33;
      }
      else
      {
        v34 = v31 + (float)(fabsf(v30 - v31) * *((float *)this + 110));
        v35 = COERCE_FLOAT(CFont::GetHeight(0, v27)) * -0.5;
      }
      v36 = (CFont *)CText::Get((CText *)TheText, (CWidgetButtonAnimated *)((char *)this + 180));
      CFont::PrintString((CFont *)LODWORD(v32), v34 + v35, v36, v37);
    }
    result = CHID::Implements();
    if ( result == 1 )
    {
      if ( (*((_DWORD *)this + 32) & 0x800) != 0 )
        return CHID::DrawHelpIcon(
                 0,
                 *((_DWORD *)this + 1),
                 COERCE_INT(*((float *)this + 10) - (float)((float)((float)dword_9FC900 / 640.0) * 18.0)),
                 COERCE_INT(*((float *)this + 9) - (float)((float)((float)dword_9FC900 / 640.0) * 18.0)),
                 (float)((float)dword_9FC900 / 640.0) * 18.0,
                 *((unsigned __int8 *)this + 76),
                 0);
      result = (unsigned __int8)CCheat::m_bShowMappings;
      if ( CCheat::m_bShowMappings )
        return CHID::DrawHelpIcon(
                 0,
                 *((_DWORD *)this + 1),
                 COERCE_INT(*((float *)this + 10) - (float)((float)((float)dword_9FC900 / 640.0) * 18.0)),
                 COERCE_INT(*((float *)this + 9) - (float)((float)((float)dword_9FC900 / 640.0) * 18.0)),
                 (float)((float)dword_9FC900 / 640.0) * 18.0,
                 *((unsigned __int8 *)this + 76),
                 0);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2b4b90
// Original: _ZN21CWidgetButtonAnimated16AnyObjectEnabledEv
// Demangled: CWidgetButtonAnimated::AnyObjectEnabled(void)
int __fastcall CWidgetButtonAnimated::AnyObjectEnabled(CWidgetButtonAnimated *this)
{
  CWidget *v1; // r4

  v1 = (CWidget *)CWidgetButtonAnimated::m_pChainHead;
  if ( !CWidgetButtonAnimated::m_pChainHead )
    return 0;
  while ( CWidget::GetEnabled(v1) != 1 )
  {
    v1 = (CWidget *)*((_DWORD *)v1 + 43);
    if ( !v1 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x2b4bc0
// Original: _ZN21CWidgetButtonAnimated15SetWidgetValue2Eff
// Demangled: CWidgetButtonAnimated::SetWidgetValue2(float,float)
int __fastcall CWidgetButtonAnimated::SetWidgetValue2(int this, float a2, float a3)
{
  int v3; // r4
  _BYTE v5[3]; // [sp+4h] [bp-14h] BYREF
  unsigned __int8 v6; // [sp+7h] [bp-11h]

  v3 = this;
  if ( a2 == 1.0 )
  {
    CRGBA::CRGBA((CRGBA *)v5, 0, 0, 0, 0xFFu);
    *(_BYTE *)(v3 + 436) = v5[0];
    *(_BYTE *)(v3 + 437) = v5[1];
    *(_BYTE *)(v3 + 438) = v5[2];
    this = v6;
    *(_BYTE *)(v3 + 439) = v6;
  }
  *(float *)(v3 + 440) = a3;
  return this;
}


// ============================================================

// Address: 0x2b4c1e
// Original: _ZN21CWidgetButtonAnimated14SetWidgetValueEf
// Demangled: CWidgetButtonAnimated::SetWidgetValue(float)
int __fastcall CWidgetButtonAnimated::SetWidgetValue(int this, float a2)
{
  int v2; // r2
  unsigned int v4; // r1

  v2 = *(_DWORD *)(this + 144);
  v4 = v2 & 0xFFFFFFFB;
  if ( a2 == 1.0 )
    v4 = v2 | 4;
  *(_DWORD *)(this + 144) = v4;
  return this;
}


// ============================================================

// Address: 0x2b4c44
// Original: _ZN21CWidgetButtonAnimated14GetWidgetValueEv
// Demangled: CWidgetButtonAnimated::GetWidgetValue(void)
int __fastcall CWidgetButtonAnimated::GetWidgetValue(CWidgetButtonAnimated *this)
{
  float v1; // s0

  v1 = 1.0;
  if ( (*((_BYTE *)this + 144) & 4) == 0 )
    v1 = 0.0;
  return LODWORD(v1);
}


// ============================================================

// Address: 0x2b4c64
// Original: _ZN21CWidgetButtonAnimated7GetNameEv
// Demangled: CWidgetButtonAnimated::GetName(void)
char *__fastcall CWidgetButtonAnimated::GetName(CWidgetButtonAnimated *this)
{
  return "BTN AN";
}


// ============================================================
