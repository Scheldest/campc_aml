
// Address: 0x18e8ec
// Original: j__ZN17CWidgetRegionGangC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionGang::CWidgetRegionGang(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionGang::CWidgetRegionGang()
{
  return _ZN17CWidgetRegionGangC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x19dc08
// Original: j__ZN17CWidgetRegionGang10BuildRectsEv
// Demangled: CWidgetRegionGang::BuildRects(void)
// attributes: thunk
int __fastcall CWidgetRegionGang::BuildRects(CWidgetRegionGang *this)
{
  return _ZN17CWidgetRegionGang10BuildRectsEv(this);
}


// ============================================================

// Address: 0x2c0900
// Original: _ZN17CWidgetRegionGangC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionGang::CWidgetRegionGang(char const*,WidgetPosition const&)
_QWORD *__fastcall CWidgetRegionGang::CWidgetRegionGang(_QWORD *a1)
{
  CWidgetRegion::CWidgetRegion();
  a1[18] = 0xC974240049742400LL;
  a1[19] = 0x49742400C9742400LL;
  *(_DWORD *)a1 = &off_664764;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 20));
  CSprite2d::CSprite2d((CSprite2d *)((char *)a1 + 164));
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)((char *)a1 + 164), "white", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 20), "GangBackground", 1);
  CWidgetRegionGang::BuildRects((CWidgetRegionGang *)a1);
  return a1;
}


// ============================================================

// Address: 0x2c099c
// Original: _ZN17CWidgetRegionGang10BuildRectsEv
// Demangled: CWidgetRegionGang::BuildRects(void)
int *__fastcall CWidgetRegionGang::BuildRects(CWidgetRegionGang *this)
{
  float v2; // s6
  int *result; // r0
  float v4; // s16
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // kr10_8
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  float v11; // s0
  float v12; // s6
  float v13; // s2
  float v14; // s6
  float v15; // s4
  float v16; // s0

  v2 = *((float *)this + 9) - *((float *)this + 11);
  result = CTouchInterface::m_pWidgets;
  v4 = fabsf(v2) * 0.05;
  v5 = *(_QWORD *)&dword_6F393C;
  v6 = *(_QWORD *)&dword_6F3944;
  v7 = *(_QWORD *)&dword_6F394C;
  v8 = dword_6F393C == 0;
  if ( dword_6F393C )
    v8 = dword_6F3940 == 0;
  if ( !v8 )
  {
    v9 = dword_6F3944 == 0;
    if ( dword_6F3944 )
      v9 = dword_6F3948 == 0;
    if ( !v9 )
    {
      v10 = dword_6F3950 == 0;
      if ( dword_6F3950 )
        v10 = dword_6F394C == 0;
      if ( !v10 )
      {
        CWidget::SetScreenRect();
        CWidget::SetScreenRect();
        CWidget::SetScreenRect();
        CWidget::SetScreenRect();
        CWidget::SetScreenRect();
        CWidget::SetScreenRect();
        if ( CWidget::GetEnabled((CWidget *)HIDWORD(v7))
          || (result = (int *)CWidget::GetEnabled((CWidget *)v7), result == (int *)((char *)&stderr + 1)) )
        {
          CWidget::SetEnabled((CWidget *)v5, 0);
          CWidget::SetEnabled((CWidget *)HIDWORD(v5), 0);
          CWidget::SetEnabled((CWidget *)v6, 0);
          result = (int *)CWidget::SetEnabled((CWidget *)HIDWORD(v6), 0);
        }
      }
    }
  }
  v11 = *((float *)this + 8);
  v12 = *((float *)this + 11);
  v13 = *((float *)this + 9) - v12;
  v14 = v4 + v12;
  v15 = fabsf(*((float *)this + 10) - v11);
  v16 = (float)(v4 * 0.45) + v11;
  *((float *)this + 36) = v16;
  *((float *)this + 37) = v14 + (float)(fabsf(v13) * 0.22);
  *((float *)this + 38) = v16 + (float)(v15 * 0.5);
  *((float *)this + 39) = v14;
  return result;
}


// ============================================================

// Address: 0x2c0b28
// Original: _ZN17CWidgetRegionGang6UpdateEv
// Demangled: CWidgetRegionGang::Update(void)
int *__fastcall CWidgetRegionGang::Update(CWidgetRegionGang *this)
{
  CWidget::SetEnabled(this, 0);
  if ( dword_6F393C && CWidget::GetEnabled((CWidget *)dword_6F393C) == 1
    || dword_6F3940 && CWidget::GetEnabled((CWidget *)dword_6F3940)
    || dword_6F3944 && CWidget::GetEnabled((CWidget *)dword_6F3944)
    || dword_6F3948 && CWidget::GetEnabled((CWidget *)dword_6F3948)
    || dword_6F394C && CWidget::GetEnabled((CWidget *)dword_6F394C)
    || dword_6F3950 && CWidget::GetEnabled((CWidget *)dword_6F3950) )
  {
    CWidget::SetEnabled(this, 1);
  }
  CWidgetRegion::Update(this);
  CWidget::ManageAlpha(this);
  *(_BYTE *)(dword_6F3A10 + 149) = *((_BYTE *)this + 77);
  return CWidgetRegionGang::BuildRects(this);
}


// ============================================================

// Address: 0x2c0bec
// Original: _ZN17CWidgetRegionGang4DrawEv
// Demangled: CWidgetRegionGang::Draw(void)
unsigned int __fastcall CWidgetRegionGang::Draw(CWidgetRegionGang *this)
{
  unsigned int result; // r0
  __int64 v3; // d17
  int v4; // r0
  _BYTE v5[4]; // [sp+8h] [bp-40h] BYREF
  _BYTE v6[4]; // [sp+Ch] [bp-3Ch] BYREF
  _BYTE v7[4]; // [sp+10h] [bp-38h] BYREF
  _BYTE v8[4]; // [sp+14h] [bp-34h] BYREF
  _QWORD v9[6]; // [sp+18h] [bp-30h] BYREF

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = *((_QWORD *)this + 5);
    v9[0] = *((_QWORD *)this + 4);
    v9[1] = v3;
    CRGBA::CRGBA((CRGBA *)v8, 0, 0, 0, (unsigned int)(float)((float)result * 0.5));
    CRGBA::CRGBA((CRGBA *)v7, 0, 0, 0, (unsigned int)(float)((float)*((unsigned __int8 *)this + 76) * 0.5));
    CRGBA::CRGBA((CRGBA *)v6, 0, 0, 0, *((_BYTE *)this + 76));
    CRGBA::CRGBA((CRGBA *)v5, 0, 0, 0, *((_BYTE *)this + 76));
    CSprite2d::DrawRectXLU((int)v9, (int)v8, (int)v7, (int)v6, v4);
    CRGBA::CRGBA((CRGBA *)v9, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
    return CSprite2d::Draw((char *)this + 160, (char *)this + 144, v9);
  }
  return result;
}


// ============================================================

// Address: 0x2c0cc8
// Original: _ZN17CWidgetRegionGangD2Ev
// Demangled: CWidgetRegionGang::~CWidgetRegionGang()
void __fastcall CWidgetRegionGang::~CWidgetRegionGang(CWidgetRegionGang *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_664764;
  v2 = (CWidgetRegionGang *)((char *)this + 160);
  CSprite2d::~CSprite2d((CWidgetRegionGang *)((char *)this + 164));
  CSprite2d::~CSprite2d(v2);
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c0cf8
// Original: _ZN17CWidgetRegionGangD0Ev
// Demangled: CWidgetRegionGang::~CWidgetRegionGang()
void __fastcall CWidgetRegionGang::~CWidgetRegionGang(CWidgetRegionGang *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_664764;
  v2 = (CWidgetRegionGang *)((char *)this + 160);
  CSprite2d::~CSprite2d((CWidgetRegionGang *)((char *)this + 164));
  CSprite2d::~CSprite2d(v2);
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c0d2c
// Original: _ZN17CWidgetRegionGang7GetNameEv
// Demangled: CWidgetRegionGang::GetName(void)
char *__fastcall CWidgetRegionGang::GetName(CWidgetRegionGang *this)
{
  return "Gang";
}


// ============================================================
