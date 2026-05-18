
// Address: 0x18e0b0
// Original: j__ZN16CWidgetInfoFrameC2EPKcRK14WidgetPosition
// Demangled: CWidgetInfoFrame::CWidgetInfoFrame(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetInfoFrame::CWidgetInfoFrame()
{
  return _ZN16CWidgetInfoFrameC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x1946a8
// Original: j__ZN16CWidgetInfoFrame13RenderRowTextE5CRectPKcf
// Demangled: CWidgetInfoFrame::RenderRowText(CRect,char const*,float)
// attributes: thunk
int __fastcall CWidgetInfoFrame::RenderRowText(int a1, int a2, int a3, int a4, float a5, char *a6, float a7)
{
  return _ZN16CWidgetInfoFrame13RenderRowTextE5CRectPKcf(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19e514
// Original: j__ZN16CWidgetInfoFrame16AnyObjectEnabledEv
// Demangled: CWidgetInfoFrame::AnyObjectEnabled(void)
// attributes: thunk
int __fastcall CWidgetInfoFrame::AnyObjectEnabled(CWidgetInfoFrame *this)
{
  return _ZN16CWidgetInfoFrame16AnyObjectEnabledEv(this);
}


// ============================================================

// Address: 0x2b9080
// Original: _ZN16CWidgetInfoFrameC2EPKcRK14WidgetPosition
// Demangled: CWidgetInfoFrame::CWidgetInfoFrame(char const*,WidgetPosition const&)
int __fastcall CWidgetInfoFrame::CWidgetInfoFrame(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r2
  int *v5; // r3

  result = CWidget::CWidget(a1, a2, a3, 20, 0);
  *(_DWORD *)result = &off_663D84;
  v4 = CWidgetInfoFrame::m_pChainTail;
  *(_DWORD *)(result + 144) = CWidgetInfoFrame::m_pChainTail;
  *(_DWORD *)(result + 148) = 0;
  v5 = (int *)(v4 + 148);
  if ( !v4 )
    v5 = &CWidgetInfoFrame::m_pChainHead;
  *v5 = result;
  CWidgetInfoFrame::m_pChainTail = result;
  *(_DWORD *)(result + 164) = 0;
  *(_DWORD *)(result + 168) = 0;
  *(_DWORD *)(result + 172) = 0;
  *(_BYTE *)(result + 152) = 0;
  return result;
}


// ============================================================

// Address: 0x2b90d8
// Original: _ZN16CWidgetInfoFrameD2Ev
// Demangled: CWidgetInfoFrame::~CWidgetInfoFrame()
void __fastcall CWidgetInfoFrame::~CWidgetInfoFrame(CWidgetInfoFrame *this)
{
  __int64 v1; // kr00_8
  int *v2; // r1
  __int64 v3; // kr08_8
  int *v4; // r3

  v1 = *((_QWORD *)this + 18);
  *(_DWORD *)this = &off_663D84;
  v2 = (int *)(v1 + 148);
  if ( !(_DWORD)v1 )
    v2 = &CWidgetInfoFrame::m_pChainHead;
  *v2 = HIDWORD(v1);
  v3 = *((_QWORD *)this + 18);
  v4 = (int *)(HIDWORD(v3) + 144);
  if ( !HIDWORD(v3) )
    v4 = &CWidgetInfoFrame::m_pChainTail;
  *v4 = v3;
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2b912c
// Original: _ZN16CWidgetInfoFrameD0Ev
// Demangled: CWidgetInfoFrame::~CWidgetInfoFrame()
void __fastcall CWidgetInfoFrame::~CWidgetInfoFrame(CWidgetInfoFrame *this)
{
  __int64 v1; // kr00_8
  int *v2; // r1
  __int64 v3; // kr08_8
  int *v4; // r3
  void *v5; // r0

  v1 = *((_QWORD *)this + 18);
  *(_DWORD *)this = &off_663D84;
  v2 = (int *)(v1 + 148);
  if ( !(_DWORD)v1 )
    v2 = &CWidgetInfoFrame::m_pChainHead;
  *v2 = HIDWORD(v1);
  v3 = *((_QWORD *)this + 18);
  v4 = (int *)(HIDWORD(v3) + 144);
  if ( !HIDWORD(v3) )
    v4 = &CWidgetInfoFrame::m_pChainTail;
  *v4 = v3;
  CWidget::~CWidget(this);
  operator delete(v5);
}


// ============================================================

// Address: 0x2b9184
// Original: _ZN16CWidgetInfoFrame6UpdateEv
// Demangled: CWidgetInfoFrame::Update(void)
int __fastcall CWidgetInfoFrame::Update(CWidgetInfoFrame *this)
{
  if ( CHud::bDrawingVitalStats )
    CWidget::SetEnabled(this, 0);
  CWidget::Update(this);
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2b91b4
// Original: _ZN16CWidgetInfoFrame4DrawEv
// Demangled: CWidgetInfoFrame::Draw(void)
int __fastcall CWidgetInfoFrame::Draw(CWidgetInfoFrame *this, int a2, unsigned __int8 a3)
{
  unsigned int v4; // r5
  float v5; // s16
  float v6; // s18
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  unsigned __int8 v9; // r1
  float v10; // r1
  signed __int8 v11; // r1
  float v12; // s20
  float v13; // s22
  float v14; // s16
  float v15; // r1
  float v16; // s24
  CFont *v17; // r0
  unsigned __int8 v18; // r3
  float v19; // r0
  float v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r0
  int v24; // r2
  _BYTE v26[4]; // [sp+10h] [bp-168h] BYREF
  _BYTE v27[4]; // [sp+14h] [bp-164h] BYREF
  _BYTE v28[4]; // [sp+18h] [bp-160h] BYREF
  int v29; // [sp+1Ch] [bp-15Ch] BYREF
  int v30; // [sp+20h] [bp-158h]
  int v31; // [sp+24h] [bp-154h]
  float v32; // [sp+28h] [bp-150h]
  _BYTE v33[4]; // [sp+2Ch] [bp-14Ch] BYREF
  _BYTE v34[4]; // [sp+30h] [bp-148h] BYREF
  char v35[256]; // [sp+34h] [bp-144h] BYREF
  int v36; // [sp+134h] [bp-44h]

  v4 = *((unsigned __int8 *)this + 76);
  if ( *((_BYTE *)this + 76) )
  {
    v5 = *((float *)this + 9);
    v6 = *((float *)this + 11);
    CFont::SetBackground(0, 0, a3);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v7);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 2), v8);
    CFont::SetOrientation((CFont *)((char *)&stderr + 1), v9);
    CFont::SetRightJustifyWrap(0, v10);
    CFont::SetEdge(0, v11);
    v12 = (float)v4 / 255.0;
    CRGBA::CRGBA((CRGBA *)v34, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)(v12 * 255.0));
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v33, 0, 0, 0, (unsigned int)(float)(v12 * 255.0));
    CFont::SetDropColor();
    v13 = fabsf(v5 - v6);
    v14 = v13 * 0.02;
    CFont::SetScale(COERCE_CFONT_(v13 * 0.02), v15);
    v16 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.6125;
    v17 = (CFont *)CText::Get((CText *)TheText, (CWidgetInfoFrame *)((char *)this + 152));
    v19 = COERCE_FLOAT(CFont::GetStringWidth(v17, (unsigned __int16 *)((char *)&stderr + 1), 0, v18));
    if ( v19 > v16 )
    {
      v14 = v14 * (float)(v16 / v19);
      CFont::SetScale((CFont *)LODWORD(v14), v20);
    }
    v21 = *((_DWORD *)this + 8);
    v22 = *((_DWORD *)this + 10);
    v32 = v6;
    v29 = v21;
    v31 = v22;
    *(float *)&v30 = v6 + v13;
    CRGBA::CRGBA((CRGBA *)v35, 0, 0, 0, (unsigned int)(float)(v12 * 100.0));
    CRGBA::CRGBA((CRGBA *)v28, 0, 0, 0, (unsigned int)(float)(v12 * 100.0));
    CRGBA::CRGBA((CRGBA *)v27, 0, 0, 0, (unsigned int)(float)(v12 * 255.0));
    CRGBA::CRGBA((CRGBA *)v26, 0, 0, 0, (unsigned int)(float)(v12 * 255.0));
    CSprite2d::DrawRect((int)&v29, (int)v35, (int)v28, (int)v27, v23);
    CText::Get((CText *)TheText, (CWidgetInfoFrame *)((char *)this + 152));
    if ( *((_BYTE *)this + 170) )
    {
      sub_5E6BC0(v35, "%d:%.2d", *((_DWORD *)this + 41) / 60, *((_DWORD *)this + 41) % 60);
    }
    else
    {
      v24 = *((_DWORD *)this + 41);
      if ( *((_BYTE *)this + 169) )
        sub_5E6BC0(v35, "%d%%", v24);
      else
        sub_5E6BC0(v35, "%d", v24);
    }
    if ( *((_BYTE *)this + 168) )
      CWidgetInfoFrame::RenderRowText((int)this, v29, v30, v31, v32, v35, v14);
  }
  return _stack_chk_guard - v36;
}


// ============================================================

// Address: 0x2b93dc
// Original: _ZN16CWidgetInfoFrame13RenderRowTextE5CRectPKcf
// Demangled: CWidgetInfoFrame::RenderRowText(CRect,char const*,float)
int __fastcall CWidgetInfoFrame::RenderRowText(int a1, float a2, float a3, float a4, float a5, char *a6, CFont *a7)
{
  float v11; // r1
  unsigned __int8 v12; // r1
  bool v13; // r1
  float v14; // s20
  float v15; // s6
  float v16; // s22
  CFont *v17; // r0
  unsigned __int16 *v18; // r3
  bool v19; // zf
  int v20; // r1
  float v21; // s2
  unsigned __int8 v22; // r3
  float v23; // r0
  float v24; // r1
  bool v25; // r1
  float v26; // r0
  unsigned __int16 *v27; // r3
  CFont *v28; // r0
  unsigned __int16 v30[256]; // [sp+8h] [bp-350h] BYREF
  _BYTE v31[4]; // [sp+208h] [bp-150h] BYREF
  _BYTE v32[4]; // [sp+20Ch] [bp-14Ch] BYREF
  _BYTE v33[4]; // [sp+210h] [bp-148h] BYREF
  char v34[256]; // [sp+214h] [bp-144h] BYREF
  int v35; // [sp+314h] [bp-44h]

  CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), _stack_chk_guard);
  CFont::SetScale(a7, v11);
  CFont::SetOrientation((CFont *)((char *)&stderr + 1), v12);
  v14 = fabsf(a4 - a2);
  v15 = COERCE_FLOAT(CFont::GetHeight(0, v13));
  v16 = (float)(a3 + a5) * 0.5;
  v17 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)(a1 + 152));
  CFont::PrintString(COERCE_CFONT_((float)(v14 * 0.055) + a2), v16 - (float)(v15 * 0.5), v17, v18);
  v19 = *(_BYTE *)(a1 + 169) == 0;
  if ( !*(_BYTE *)(a1 + 169) )
    v19 = *(_BYTE *)(a1 + 170) == 0;
  if ( !v19 || *(_BYTE *)(a1 + 171) )
  {
    v20 = *(_DWORD *)(a1 + 172);
    v21 = (float)*(unsigned __int8 *)(a1 + 76) / 255.0;
    switch ( v20 )
    {
      case 1:
        CRGBA::CRGBA((CRGBA *)v33, 0x5Du, 0x8Eu, 0xBEu, (unsigned int)(float)(v21 * 255.0));
        goto LABEL_10;
      case 2:
      case 4:
        CRGBA::CRGBA((CRGBA *)v32, 0x9Au, 0xCCu, 0x97u, (unsigned int)(float)(v21 * 255.0));
        goto LABEL_10;
      case 3:
        CRGBA::CRGBA((CRGBA *)v31, 0xFFu, 0, 0, (unsigned int)(float)(v21 * 255.0));
LABEL_10:
        CFont::SetColor();
        v20 = *(_DWORD *)(a1 + 172);
        break;
      default:
        break;
    }
    if ( v20 == 4 )
      sub_5E6BC0(v34, "$~1~%s", a6);
    else
      strcpy(v34, a6);
    AsciiToGxtChar(v34, v30);
    v23 = COERCE_FLOAT(CFont::GetStringWidth((CFont *)v30, (unsigned __int16 *)((char *)&stderr + 1), 0, v22));
    if ( v23 > (float)(v14 * 0.275) )
      CFont::SetScale(COERCE_CFONT_((float)((float)(v14 * 0.275) / v23) * *(float *)&a7), v24);
    CFont::SetOrientation((CFont *)((char *)&stderr + 2), LOBYTE(v24));
    v26 = COERCE_FLOAT(CFont::GetHeight(0, v25));
    v28 = (CFont *)CFont::PrintString(
                     COERCE_CFONT_(a4 + (float)(v14 * -0.052)),
                     v16 + (float)(v26 * -0.5),
                     (CFont *)v30,
                     v27);
    CFont::RenderFontBuffer(v28);
  }
  return _stack_chk_guard - v35;
}


// ============================================================

// Address: 0x2b95e8
// Original: _ZN16CWidgetInfoFrame13SetWidgetInfoEPcfbbbbi
// Demangled: CWidgetInfoFrame::SetWidgetInfo(char *,float,bool,bool,bool,bool,int)
int __fastcall CWidgetInfoFrame::SetWidgetInfo(
        CWidgetInfoFrame *this,
        char *a2,
        float a3,
        bool a4,
        bool a5,
        int a6,
        bool a7,
        int a8)
{
  float v11; // s2
  int result; // r0

  strcpy((char *)this + 152, a2);
  v11 = a3;
  if ( a6 )
    v11 = a3 / 1000.0;
  *((_BYTE *)this + 168) = a4;
  *((_BYTE *)this + 169) = a5;
  *((_BYTE *)this + 170) = a6;
  result = 2;
  *((_BYTE *)this + 171) = a7;
  *((_DWORD *)this + 43) = a8;
  *((_DWORD *)this + 31) = 2;
  *((_DWORD *)this + 41) = (int)v11;
  return result;
}


// ============================================================

// Address: 0x2b9644
// Original: _ZN16CWidgetInfoFrame16AnyObjectEnabledEv
// Demangled: CWidgetInfoFrame::AnyObjectEnabled(void)
int __fastcall CWidgetInfoFrame::AnyObjectEnabled(CWidgetInfoFrame *this)
{
  CWidget *v1; // r4

  v1 = (CWidget *)CWidgetInfoFrame::m_pChainHead;
  if ( !CWidgetInfoFrame::m_pChainHead )
    return 0;
  while ( CWidget::GetEnabled(v1) != 1 )
  {
    v1 = (CWidget *)*((_DWORD *)v1 + 37);
    if ( !v1 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x2b9674
// Original: _ZN16CWidgetInfoFrame7GetNameEv
// Demangled: CWidgetInfoFrame::GetName(void)
char *__fastcall CWidgetInfoFrame::GetName(CWidgetInfoFrame *this)
{
  return "InfoFrame";
}


// ============================================================
