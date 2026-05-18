
// Address: 0x18dcbc
// Original: j__ZN23CWidgetSaveNotificationC2EPKcRK14WidgetPosition
// Demangled: CWidgetSaveNotification::CWidgetSaveNotification(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetSaveNotification::CWidgetSaveNotification()
{
  return _ZN23CWidgetSaveNotificationC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c68e8
// Original: _ZN23CWidgetSaveNotificationC2EPKcRK14WidgetPosition
// Demangled: CWidgetSaveNotification::CWidgetSaveNotification(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetSaveNotification::CWidgetSaveNotification(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidget::CWidget(a1, a2, a3, 4, 0);
  result[36] = 0;
  result[37] = 0;
  *result = &off_665010;
  return result;
}


// ============================================================

// Address: 0x2c6910
// Original: _ZN23CWidgetSaveNotification6UpdateEv
// Demangled: CWidgetSaveNotification::Update(void)
int __fastcall CWidgetSaveNotification::Update(CWidgetSaveNotification *this)
{
  double v2; // d16
  float v3; // s0

  CWidget::Update(this);
  v2 = *((float *)this + 36) - CWidget::m_fElapsedTime;
  v3 = v2;
  if ( v2 <= 0.0 )
    v3 = 0.0;
  *((float *)this + 36) = v3;
  if ( v3 > 0.0 )
    *((_BYTE *)this + 77) = 1;
  return j_CWidget::ManageAlpha(this);
}


// ============================================================

// Address: 0x2c696c
// Original: _ZN23CWidgetSaveNotification4DrawEv
// Demangled: CWidgetSaveNotification::Draw(void)
int __fastcall CWidgetSaveNotification::Draw(CWidgetSaveNotification *this)
{
  int result; // r0
  __int64 v3; // d17
  int v4; // r0
  unsigned __int8 v5; // r2
  unsigned __int8 v6; // r1
  unsigned __int8 v7; // r1
  unsigned __int8 v8; // r1
  float v9; // r1
  signed __int8 v10; // r1
  float v11; // r1
  float v12; // r1
  float v13; // s18
  float v14; // r1
  float v15; // s20
  CFont *v16; // r0
  unsigned __int8 v17; // r3
  float v18; // r0
  _BOOL4 v19; // r1
  float v20; // s18
  float v21; // s20
  float v22; // s22
  float v23; // s0
  CFont *v24; // r0
  unsigned __int16 *v25; // r3
  _BYTE v26[4]; // [sp+8h] [bp-60h] BYREF
  _BYTE v27[4]; // [sp+Ch] [bp-5Ch] BYREF
  _BYTE v28[4]; // [sp+10h] [bp-58h] BYREF
  _BYTE v29[4]; // [sp+14h] [bp-54h] BYREF
  _BYTE v30[4]; // [sp+18h] [bp-50h] BYREF
  _BYTE v31[4]; // [sp+1Ch] [bp-4Ch] BYREF
  _QWORD v32[2]; // [sp+20h] [bp-48h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = *((_QWORD *)this + 5);
    v32[0] = *((_QWORD *)this + 4);
    v32[1] = v3;
    CRGBA::CRGBA((CRGBA *)v31, 0, 0, 0, (unsigned int)(float)((float)(unsigned int)result * 0.5));
    CRGBA::CRGBA((CRGBA *)v30, 0, 0, 0, (unsigned int)(float)((float)*((unsigned __int8 *)this + 76) * 0.5));
    CRGBA::CRGBA((CRGBA *)v29, 0, 0, 0, *((_BYTE *)this + 76));
    CRGBA::CRGBA((CRGBA *)v28, 0, 0, 0, *((_BYTE *)this + 76));
    CSprite2d::DrawRect((int)v32, (int)v31, (int)v30, (int)v29, v4);
    CFont::SetBackground(0, 0, v5);
    CFont::SetProportional((CFont *)((char *)&stderr + 1), v6);
    CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v7);
    CFont::SetOrientation(0, v8);
    CFont::SetRightJustifyWrap(0, v9);
    CFont::SetEdge(0, v10);
    CRGBA::CRGBA((CRGBA *)v27, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
    CFont::SetColor();
    CRGBA::CRGBA((CRGBA *)v26, 0, 0, 0, *((_BYTE *)this + 76));
    CFont::SetDropColor();
    CFont::SetWrapx(COERCE_CFONT_((float)dword_9FC900), v11);
    CFont::SetCentreSize(COERCE_CFONT_((float)dword_9FC900), v12);
    v13 = fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.0325;
    CFont::SetScale((CFont *)LODWORD(v13), v14);
    v15 = fabsf(*((float *)this + 10) - *((float *)this + 8)) * 0.875;
    v16 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"SAV_GAM");
    v18 = COERCE_FLOAT(CFont::GetStringWidth(v16, (unsigned __int16 *)((char *)&stderr + 1), 0, v17));
    if ( v18 > v15 )
      CFont::SetScale(COERCE_CFONT_(v13 * (float)(v15 / v18)), *(float *)&v19);
    v20 = *((float *)this + 8);
    v21 = *((float *)this + 10);
    v22 = *((float *)this + 9) + *((float *)this + 11);
    v23 = COERCE_FLOAT(CFont::GetHeight(0, v19)) * 0.5;
    v24 = (CFont *)CText::Get((CText *)TheText, (CKeyGen *)"SAV_GAM");
    return CFont::PrintString(COERCE_CFONT_((float)(v20 + v21) * 0.5), (float)(v22 * 0.5) - v23, v24, v25);
  }
  return result;
}


// ============================================================

// Address: 0x2c6b80
// Original: _ZN23CWidgetSaveNotification7EndSaveEv
// Demangled: CWidgetSaveNotification::EndSave(void)
int __fastcall CWidgetSaveNotification::EndSave(int this)
{
  float v1; // s2
  float v2; // s4

  v1 = *(double *)&CWidget::m_fTime - *(float *)(this + 148);
  v2 = 2.0 - v1;
  if ( v1 > 2.0 )
    v2 = 0.0;
  *(float *)(this + 144) = v2;
  return this;
}


// ============================================================

// Address: 0x2c6bc4
// Original: _ZN23CWidgetSaveNotificationD0Ev
// Demangled: CWidgetSaveNotification::~CWidgetSaveNotification()
void __fastcall CWidgetSaveNotification::~CWidgetSaveNotification(CWidgetSaveNotification *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c6bd4
// Original: _ZN23CWidgetSaveNotification7GetNameEv
// Demangled: CWidgetSaveNotification::GetName(void)
char *__fastcall CWidgetSaveNotification::GetName(CWidgetSaveNotification *this)
{
  return "Save Notify";
}


// ============================================================
