
// Address: 0x18d018
// Original: j__ZN13CWidgetRacingC2EPKcRK14WidgetPosition
// Demangled: CWidgetRacing::CWidgetRacing(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRacing::CWidgetRacing()
{
  return _ZN13CWidgetRacingC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x19aff0
// Original: j__ZN13CWidgetRacing13RenderRowTextEPKc5CRectS1_f
// Demangled: CWidgetRacing::RenderRowText(char const*,CRect,char const*,float)
// attributes: thunk
int __fastcall CWidgetRacing::RenderRowText(int a1, int a2, int a3, int a4, float a5, float a6, char *a7, float a8)
{
  return _ZN13CWidgetRacing13RenderRowTextEPKc5CRectS1_f(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x2bf1f0
// Original: _ZN13CWidgetRacingC2EPKcRK14WidgetPosition
// Demangled: CWidgetRacing::CWidgetRacing(char const*,WidgetPosition const&)
int __fastcall CWidgetRacing::CWidgetRacing(int a1, int a2, int a3)
{
  int result; // r0

  result = CWidget::CWidget(a1, a2, a3, 0, 0);
  *(_QWORD *)(result + 144) = 0LL;
  *(_QWORD *)(result + 152) = 0LL;
  *(_DWORD *)(result + 160) = 0;
  *(_DWORD *)result = &off_6642C4;
  return result;
}


// ============================================================

// Address: 0x2bf224
// Original: _ZN13CWidgetRacing6UpdateEv
// Demangled: CWidgetRacing::Update(void)
int __fastcall CWidgetRacing::Update(CWidgetRacing *this)
{
  if ( CHud::bDrawingVitalStats )
    CWidget::SetEnabled(this, 0);
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2bf254
// Original: _ZN13CWidgetRacing4DrawEv
// Demangled: CWidgetRacing::Draw(void)
int __fastcall CWidgetRacing::Draw(CWidgetRacing *this, int a2, unsigned __int8 a3)
{
  unsigned int v4; // r5
  float v5; // s16
  float v6; // s18
  int v7; // r6
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  unsigned __int8 v10; // r1
  float v11; // r1
  signed __int8 v12; // r1
  float v13; // s20
  float v14; // r1
  float v15; // s16
  float v16; // s18
  float v17; // r1
  float v18; // s22
  CFont *v19; // r0
  unsigned __int8 v20; // r3
  float v21; // r0
  int v22; // r1
  CFont *v23; // r0
  unsigned __int8 v24; // r3
  float v25; // r0
  float v26; // r1
  CFont *v27; // r0
  unsigned __int8 v28; // r3
  float v29; // r0
  float v30; // r1
  int v31; // r8
  float v32; // s22
  int v33; // r0
  int v34; // r1
  int v35; // r0
  int v37; // [sp+10h] [bp-170h]
  _BYTE v38[4]; // [sp+18h] [bp-168h] BYREF
  _BYTE v39[4]; // [sp+1Ch] [bp-164h] BYREF
  _BYTE v40[4]; // [sp+20h] [bp-160h] BYREF
  int v41; // [sp+24h] [bp-15Ch] BYREF
  int v42; // [sp+28h] [bp-158h]
  int v43; // [sp+2Ch] [bp-154h]
  float v44; // [sp+30h] [bp-150h]
  _BYTE v45[4]; // [sp+34h] [bp-14Ch] BYREF
  _BYTE v46[4]; // [sp+38h] [bp-148h] BYREF
  char v47[256]; // [sp+3Ch] [bp-144h] BYREF
  int v48; // [sp+13Ch] [bp-44h]

  v4 = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    v5 = *((float *)this + 9);
    v6 = *((float *)this + 11);
    v7 = *((_DWORD *)this + 39);
    CFont::SetBackground(0, 0, a3);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v8);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v9);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v10);
    CFont::SetRightJustifyWrap(0, v11);
    CFont::SetEdge(0, v12);
    v13 = (float)v4 / 255.0;
    CRGBA::CRGBA((CRGBA *)v46, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v13 * 255.0));
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v45, 0, 0, 0, (unsigned int)(float)(v13 * 255.0));
    CFont::SetDropColor();
    CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v14);
    v15 = (float)(fabsf(v5 - v6) + -2.0) / 3.0;
    v16 = v15 * 0.0325;
    CFont::SetScale(COERCE_CFONT_(v15 * 0.0325), v17);
    v18 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.6125;
    v19 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"RAC_PTN");
    v21 = COERCE_FLOAT(CFont::GetStringWidth(v19, (unsigned __int16 *)((char *)&stderr + 1), 0, v20));
    v22 = 3;
    if ( !v7 )
      v22 = 2;
    v37 = v22;
    if ( v21 > v18 )
    {
      v16 = v16 * (float)(v18 / v21);
      CFont::SetScale((CFont *)LODWORD(v16), *(float *)&v22);
    }
    v23 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"RAC_LAP");
    v25 = COERCE_FLOAT(CFont::GetStringWidth(v23, (unsigned __int16 *)((char *)&stderr + 1), 0, v24));
    if ( v25 > v18 )
    {
      v16 = v16 * (float)(v18 / v25);
      CFont::SetScale((CFont *)LODWORD(v16), v26);
    }
    v27 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"RAC_TIM");
    v29 = COERCE_FLOAT(CFont::GetStringWidth(v27, (unsigned __int16 *)((char *)&stderr + 1), 0, v28));
    if ( v29 > v18 )
    {
      v16 = v16 * (float)(v18 / v29);
      CFont::SetScale((CFont *)LODWORD(v16), v30);
    }
    v31 = 0;
    v32 = *((float *)this + 11);
    while ( 1 )
    {
      v33 = *((_DWORD *)this + 8);
      v34 = *((_DWORD *)this + 10);
      v44 = v32;
      v41 = v33;
      v43 = v34;
      *(float *)&v42 = v15 + v32;
      CRGBA::CRGBA((CRGBA *)v47, 0, 0, 0, (unsigned int)(float)(v13 * 128.0));
      CRGBA::CRGBA((CRGBA *)v40, 0, 0, 0, (unsigned int)(float)(v13 * 128.0));
      CRGBA::CRGBA((CRGBA *)v39, 0, 0, 0, (unsigned int)(float)(v13 * 255.0));
      CRGBA::CRGBA((CRGBA *)v38, 0, 0, 0, (unsigned int)(float)(v13 * 255.0));
      CSprite2d::DrawRect((int)&v41, (int)v47, (int)v40, (int)v39, v35);
      if ( !v7 )
        break;
      if ( v31 == 2 )
        goto LABEL_18;
      if ( v31 != 1 )
        goto LABEL_16;
      sub_5E6BC0(v47, "~f~%d~w~/%d", *((_DWORD *)this + 38), *((_DWORD *)this + 39));
      CWidgetRacing::RenderRowText(v43, (int)"RAC_LAP", v41, v42, *(float *)&v43, v44, v47, v16);
LABEL_19:
      v32 = (float)(v15 + 1.0) + v32;
      if ( ++v31 >= v37 )
        return _stack_chk_guard - v48;
    }
    if ( v31 != 1 )
    {
LABEL_16:
      if ( !v31 )
      {
        sub_5E6BC0(v47, "~f~%d~w~/%d", *((_DWORD *)this + 36), *((_DWORD *)this + 37));
        CWidgetRacing::RenderRowText(v43, (int)"RAC_PTN", v41, v42, *(float *)&v43, v44, v47, v16);
      }
      goto LABEL_19;
    }
LABEL_18:
    sub_5E6BC0(v47, "%d:%.2d", *((_DWORD *)this + 40) / 60, *((_DWORD *)this + 40) % 60);
    CWidgetRacing::RenderRowText(v43, (int)"RAC_TIM", v41, v42, *(float *)&v43, v44, v47, v16);
    goto LABEL_19;
  }
  return _stack_chk_guard - v48;
}


// ============================================================

// Address: 0x2bf598
// Original: _ZN13CWidgetRacing13RenderRowTextEPKc5CRectS1_f
// Demangled: CWidgetRacing::RenderRowText(char const*,CRect,char const*,float)
int __fastcall CWidgetRacing::RenderRowText(
        int a1,
        CKeyGen *a2,
        float a3,
        float a4,
        float a5,
        float a6,
        char *a7,
        CFont *a8)
{
  unsigned __int8 v11; // r1
  bool v12; // r1
  float v13; // s26
  float v14; // s6
  float v15; // s22
  CFont *v16; // r0
  unsigned __int16 *v17; // r3
  unsigned __int8 v18; // r3
  float v19; // r0
  float v20; // r1
  bool v21; // r1
  float v22; // r0
  unsigned __int16 *v23; // r3
  CFont *v24; // r0
  unsigned __int16 v26[292]; // [sp+0h] [bp-248h] BYREF

  CFont::SetScale(a8, *(float *)&a2);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v11);
  v13 = fabsf(a5 - a3);
  v14 = COERCE_FLOAT(CFont::GetHeight(0, v12));
  v15 = (float)(a4 + a6) * 0.5;
  v16 = (CFont *)CText::Get((CText *)TheText, a2);
  CFont::PrintString(COERCE_CFONT_((float)(v13 * 0.03) + a3), v15 - (float)(v14 * 0.5), v16, v17);
  AsciiToGxtChar(a7, v26);
  v19 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v26, (unsigned __int16 *)((char *)&stderr + 1), 0, v18));
  if ( v19 > (float)(v13 * 0.275) )
    CFont::SetScale(COERCE_CFONT_((float)((float)(v13 * 0.275) / v19) * *(float *)&a8), v20);
  CFont::SetOrientation((CFont *)((char *)&stderr + 2), LOBYTE(v20));
  v22 = COERCE_FLOAT(CFont::GetHeight(0, v21));
  v24 = (CFont *)CFont::PrintString(
                   COERCE_CFONT_(a5 - (float)(v13 * 0.03)),
                   v15 + (float)(v22 * -0.5),
                   (CFont *)v26,
                   v23);
  return CFont::RenderFontBuffer(v24);
}


// ============================================================

// Address: 0x2bf6a4
// Original: _ZN13CWidgetRacing15SetWidgetValue2Eff
// Demangled: CWidgetRacing::SetWidgetValue2(float,float)
int __fastcall CWidgetRacing::SetWidgetValue2(int this, float a2, float a3)
{
  *(_DWORD *)(this + 152) = (int)a2;
  *(_DWORD *)(this + 156) = (int)a3;
  return this;
}


// ============================================================

// Address: 0x2bf6be
// Original: _ZN13CWidgetRacing15SetWidgetValue3Efff
// Demangled: CWidgetRacing::SetWidgetValue3(float,float,float)
_DWORD *__fastcall CWidgetRacing::SetWidgetValue3(_DWORD *this, float a2, float a3, float a4)
{
  this[36] = (int)a2;
  this[37] = (int)a3;
  this[40] = (int)a4;
  return this;
}


// ============================================================

// Address: 0x2bf6e4
// Original: _ZN13CWidgetRacingD0Ev
// Demangled: CWidgetRacing::~CWidgetRacing()
void __fastcall CWidgetRacing::~CWidgetRacing(CWidgetRacing *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bf6f4
// Original: _ZN13CWidgetRacing7GetNameEv
// Demangled: CWidgetRacing::GetName(void)
char *__fastcall CWidgetRacing::GetName(CWidgetRacing *this)
{
  return "Race";
}


// ============================================================
