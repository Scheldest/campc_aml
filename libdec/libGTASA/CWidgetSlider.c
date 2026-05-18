
// Address: 0x2c6bf0
// Original: _ZN13CWidgetSliderC2EPKcRK14WidgetPositionjjjN15CTouchInterface9WidgetIDsES6_
// Demangled: CWidgetSlider::CWidgetSlider(char const*,WidgetPosition const&,uint,uint,uint,CTouchInterface::WidgetIDs,CTouchInterface::WidgetIDs)
int __fastcall CWidgetSlider::CWidgetSlider(int a1, int a2, int a3, int a4, int a5, int a6, __int64 a7)
{
  float *v9; // r5
  int v10; // r0
  int v11; // s4
  _BYTE v13[4]; // [sp+8h] [bp-20h] BYREF
  _BYTE v14[28]; // [sp+Ch] [bp-1Ch] BYREF

  CWidget::CWidget(a1, a2, a3, a5, 0);
  *(_DWORD *)a1 = &off_6650A4;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 560));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 564));
  v9 = (float *)(a1 + 148);
  *(_QWORD *)(a1 + 568) = 0xC974240049742400LL;
  *(_QWORD *)(a1 + 576) = 0x49742400C9742400LL;
  memset((void *)(a1 + 148), 0, 0x190u);
  *(_DWORD *)(a1 + 556) = a4;
  CRGBA::CRGBA((CRGBA *)v14, 0, 0, 0xFFu, 0xFFu);
  *(_BYTE *)(a1 + 592) = v14[0];
  *(_BYTE *)(a1 + 593) = v14[1];
  *(_BYTE *)(a1 + 594) = v14[2];
  *(_BYTE *)(a1 + 595) = v14[3];
  CRGBA::CRGBA((CRGBA *)v13, 0xFFu, 0, 0, 0xFFu);
  *(_BYTE *)(a1 + 596) = v13[0];
  *(_BYTE *)(a1 + 597) = v13[1];
  *(_BYTE *)(a1 + 598) = v13[2];
  *(_BYTE *)(a1 + 599) = v13[3];
  *(_DWORD *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)(a1 + 584) = a7;
  *(_DWORD *)(a1 + 144) = a6;
  if ( a6 >= 1 )
  {
    v10 = 0;
    do
    {
      v11 = v10++;
      *v9++ = (float)((float)(99.0 / (float)(a6 - 1)) * (float)v11) + 1.0;
    }
    while ( v10 < *(_DWORD *)(a1 + 144) );
  }
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 560), "SliderThumb", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 564), "White", 1);
  return a1;
}


// ============================================================

// Address: 0x2c6d4c
// Original: _ZN13CWidgetSlider12SetupNotchesEiff
// Demangled: CWidgetSlider::SetupNotches(int,float,float)
int __fastcall CWidgetSlider::SetupNotches(int this, int a2, float a3, float a4)
{
  float v4; // s2
  float *v6; // r1
  int v7; // r2
  float v8; // s2
  int v9; // s4

  v4 = (float)(a2 - 1);
  *(_DWORD *)(this + 144) = a2;
  if ( a2 >= 1 )
  {
    v6 = (float *)(this + 148);
    v7 = 0;
    v8 = (float)(a4 - a3) / v4;
    do
    {
      v9 = v7++;
      *v6++ = (float)(v8 * (float)v9) + a3;
    }
    while ( v7 < *(_DWORD *)(this + 144) );
  }
  return this;
}


// ============================================================

// Address: 0x2c6d98
// Original: _ZN13CWidgetSlider6UpdateEv
// Demangled: CWidgetSlider::Update(void)
int __fastcall CWidgetSlider::Update(CWidgetSlider *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d9
  int v5; // r1
  float v6; // s16
  float v7; // s20
  int v8; // r0
  int result; // r0
  float v10; // s0
  float v11; // s20
  float v12; // s2
  float v13; // s2
  float v14; // s6
  float v15; // s0
  float v16; // [sp+0h] [bp-38h] BYREF
  float v17; // [sp+4h] [bp-34h]
  float v18; // [sp+8h] [bp-30h]
  float v19; // [sp+Ch] [bp-2Ch]

  CWidget::Update(this);
  v3.n64_u32[0] = 1.0;
  v5 = *((_DWORD *)this + 30);
  v6 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
  if ( this == (CWidgetSlider *)CWidget::m_pInitialTouchWidget[v5] )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v16, v5);
    v1.n64_f32[0] = (float)(v16 - *((float *)this + 142)) / fabsf(*((float *)this + 144) - *((float *)this + 142));
    v2.n64_u32[0] = 0;
    v1.n64_u64[0] = vmin_f32(vmax_f32(v1, v2), v3).n64_u64[0];
    *((_DWORD *)this + 137) = v1.n64_u32[0];
    *((_DWORD *)this + 138) = (int)(float)(v1.n64_f32[0] / v6);
  }
  else if ( (*((_BYTE *)this + 556) & 2) == 0 )
  {
    v7 = *((float *)this + 137);
    v8 = (int)floorf((float)(v7 / v6) + 0.5);
    if ( (float)(v7 - (float)(v6 * (float)v8)) >= (float)(v6 * 0.5) )
      ++v8;
    *((_DWORD *)this + 138) = v8;
    *((float *)this + 137) = v6 * (float)v8;
  }
  CWidget::ManageAlpha(this);
  result = *((unsigned __int8 *)this + 77);
  if ( *((_BYTE *)this + 77) )
  {
    result = *((unsigned __int8 *)this + 556) << 25;
    if ( (*((_BYTE *)this + 556) & 0x40) != 0 )
    {
      v10 = *((float *)this + 11);
      v11 = fabsf(*((float *)this + 9) - v10) * 0.75;
      if ( CTouchInterface::m_pWidgets[*((_DWORD *)this + 146)] )
      {
        v12 = *((float *)this + 142);
        v19 = *((float *)this + 11);
        v16 = v12;
        v17 = v11 + v10;
        v18 = v12 - v11;
        CWidget::SetScreenRect();
      }
      if ( CTouchInterface::m_pWidgets[*((_DWORD *)this + 147)] )
      {
        v13 = *((float *)this + 144);
        v14 = v11 + *((float *)this + 11);
        v19 = *((float *)this + 11);
        v16 = v13;
        v18 = v11 + v13;
        v17 = v14;
        CWidget::SetScreenRect();
      }
      if ( CTouchInterface::IsTouched(*((_DWORD *)this + 146), 0, 1) == 1 )
      {
        v2.n64_u32[0] = 0;
        v1.n64_f32[0] = *((float *)this + 137) + CWidget::m_fElapsedTime * -0.400000006;
        v1.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
        *((_DWORD *)this + 137) = v1.n64_u32[0];
        *((_DWORD *)this + 138) = (int)(float)(v1.n64_f32[0] / v6);
      }
      result = CTouchInterface::IsTouched(*((_DWORD *)this + 147), 0, 1);
      if ( result == 1 )
      {
        result = (int)&CWidget::m_fElapsedTime;
        v1.n64_f32[0] = CWidget::m_fElapsedTime * 0.400000006 + *((float *)this + 137);
        v15 = vmin_f32(v1, v3).n64_f32[0];
        *((float *)this + 137) = v15;
        *((_DWORD *)this + 138) = (int)(float)(v15 / v6);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c6fd0
// Original: _ZN13CWidgetSlider4DrawEv
// Demangled: CWidgetSlider::Draw(void)
int __fastcall CWidgetSlider::Draw(CWidgetSlider *this)
{
  float32x2_t v1; // d5
  float32x2_t v2; // d7
  CWidget *v4; // r0
  int ScreenWidth; // r0
  float v6; // s2
  float v7; // s6
  unsigned __int64 *v8; // r8
  float v9; // s8
  float v10; // s18
  float v11; // s4
  float32x4_t v12; // q9
  float32x4_t v13; // q8
  int v14; // r0
  float v15; // s0
  int v16; // r6
  float v17; // s20
  float v18; // s6
  float v19; // s0
  float v20; // s2
  float v21; // s0
  float32x4_t v22; // q8
  unsigned __int8 v23; // r1
  unsigned __int8 v24; // r2
  float v25; // r1
  unsigned __int8 v26; // r1
  float v27; // r1
  unsigned __int8 v28; // r1
  signed __int8 v29; // r1
  int v30; // r0
  int v31; // r0
  float v32; // s0
  int v33; // r0
  int v34; // r0
  float v35; // s0
  unsigned __int16 *v36; // r3
  float v38; // s20
  float v39; // s0
  float v40; // s20
  float v41; // s20
  unsigned __int16 v42[256]; // [sp+10h] [bp-368h] BYREF
  _BYTE v43[4]; // [sp+210h] [bp-168h] BYREF
  _BYTE v44[4]; // [sp+214h] [bp-164h] BYREF
  _BYTE v45[4]; // [sp+218h] [bp-160h] BYREF
  _BYTE v46[4]; // [sp+21Ch] [bp-15Ch] BYREF
  float32x4_t v47; // [sp+220h] [bp-158h] BYREF
  char v48[256]; // [sp+234h] [bp-144h] BYREF
  int v49; // [sp+334h] [bp-44h]

  v4 = (CWidget *)*((unsigned __int8 *)this + 76);
  if ( v4 )
  {
    ScreenWidth = CWidget::GetScreenWidth(v4);
    v6 = *((float *)this + 9);
    v7 = *((float *)this + 11);
    v2.n64_u32[0] = 5.5;
    v8 = (unsigned __int64 *)((char *)this + 568);
    v1.n64_f32[0] = (float)(unsigned int)ScreenWidth * 0.0125;
    v9 = fabsf(v6 - v7) * 0.2;
    v10 = vmax_f32(v1, v2).n64_f32[0];
    v11 = *((float *)this + 10) - v10;
    *((float *)this + 142) = *((float *)this + 8) + v10;
    *((float *)this + 143) = v6 - v9;
    *((float *)this + 144) = v11;
    *((float *)this + 145) = v7 - v9;
    if ( *((_DWORD *)this + 2) )
    {
      CRGBA::CRGBA((CRGBA *)v48, 0, 0, 0, *((_BYTE *)this + 76));
      v12.n128_u64[0] = *v8;
      v12.n128_u64[1] = *((_QWORD *)this + 72);
      v13.n128_u64[0] = 0x40000000C0000000LL;
      v13.n128_u64[1] = 0xC000000040000000LL;
      *(float32x4_t *)v42 = vaddq_f32(v12, v13);
      CSprite2d::Draw((char *)this + 8, v42, v48);
      CRGBA::CRGBA(
        (CRGBA *)v42,
        *((_BYTE *)this + 592),
        *((_BYTE *)this + 593),
        *((_BYTE *)this + 594),
        (unsigned int)(float)((float)((float)*((unsigned __int8 *)this + 595) / 255.0)
                            * (float)*((unsigned __int8 *)this + 76)));
      CSprite2d::Draw((char *)this + 8, (char *)this + 568, v42);
    }
    if ( *((unsigned __int8 *)this + 556) << 31 )
    {
      v14 = *((_DWORD *)this + 36);
      if ( v14 >= 1 )
      {
        v15 = *((float *)this + 142);
        v16 = 0;
        v17 = fabsf(*((float *)this + 144) - v15) / (float)(v14 - 1);
        while ( 1 )
        {
          v18 = *((float *)this + 145);
          v19 = (float)(v17 * (float)v16) + v15;
          v20 = fabsf(*((float *)this + 9) - *((float *)this + 11)) * 0.2;
          *(float *)v42 = v19 + -2.5;
          *(float *)&v42[4] = v19 + 2.5;
          *(float *)&v42[6] = v18 - v20;
          *(float *)&v42[2] = v18 + v20;
          CSprite2d::Draw((char *)this + 564, v42, (char *)this + 73);
          if ( ++v16 >= *((_DWORD *)this + 36) )
            break;
          v15 = *(float *)v8;
        }
      }
    }
    v21 = *((float *)this + 142)
        + (float)(*((float *)this + 137) * fabsf(*((float *)this + 144) - *((float *)this + 142)));
    v47.n128_f32[3] = *((float *)this + 145) + (float)(fabsf(*((float *)this + 143) - *((float *)this + 145)) * 0.5);
    v47.n128_f32[0] = v21 - v10;
    v47.n128_f32[2] = v10 + v21;
    v47.n128_f32[1] = (float)(v10 + v10) + v47.n128_f32[3];
    CRGBA::CRGBA((CRGBA *)v46, 0, 0, 0, *((_BYTE *)this + 76));
    v22.n128_u64[0] = 0x40000000C0000000LL;
    v22.n128_u64[1] = 0xC000000040000000LL;
    *(float32x4_t *)v42 = vaddq_f32(v47, v22);
    CSprite2d::Draw((char *)this + 560, v42, v46);
    CRGBA::CRGBA(
      (CRGBA *)v45,
      *((_BYTE *)this + 596),
      *((_BYTE *)this + 597),
      *((_BYTE *)this + 598),
      (unsigned int)(float)((float)((float)*((unsigned __int8 *)this + 599) / 255.0)
                          * (float)*((unsigned __int8 *)this + 76)));
    CSprite2d::Draw((char *)this + 560, &v47, v45);
    if ( (*((_BYTE *)this + 556) & 0x20) == 0 )
    {
      CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v23);
      CFont::SetBackground(0, 0, v24);
      CFont::SetScale(COERCE_CFONT_((float)dword_9FC904 / 448.0), v25);
      CFont::SetOrientation(0, v26);
      CFont::SetCentreSize(COERCE_CFONT_((float)((float)dword_9FC900 / 640.0) * 640.0), v27);
      CFont::SetProportional((CFont *)((char *)&stderr + 1), v28);
      CRGBA::CRGBA((CRGBA *)v44, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 76));
      CFont::SetColor();
      CRGBA::CRGBA((CRGBA *)v43, 0, 0, 0, *((_BYTE *)this + 76));
      CFont::SetDropColor();
      CFont::SetEdge(0, v29);
      v30 = *((_DWORD *)this + 139);
      if ( (v30 & 2) != 0 )
      {
        if ( (v30 & 0x10) != 0 )
        {
          if ( *((float *)this + 137) != 1.0 )
          {
            v38 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
            v32 = *((float *)this + *((_DWORD *)this + 138) + 37)
                + (float)((float)(*((float *)this + *((_DWORD *)this + 138) + 38)
                                - *((float *)this + *((_DWORD *)this + 138) + 37))
                        * (float)(fmodf(*((float *)this + 137), v38) * (float)(1.0 / v38)));
            goto LABEL_18;
          }
          goto LABEL_16;
        }
        if ( (v30 & 4) == 0 )
        {
          if ( (v30 & 8) != 0 )
          {
            if ( *((float *)this + 137) != 1.0 )
            {
              v41 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
              v39 = *((float *)this + *((_DWORD *)this + 138) + 37)
                  + (float)((float)(*((float *)this + *((_DWORD *)this + 138) + 38)
                                  - *((float *)this + *((_DWORD *)this + 138) + 37))
                          * (float)(fmodf(*((float *)this + 137), v41) * (float)(1.0 / v41)));
              goto LABEL_41;
            }
            goto LABEL_37;
          }
          goto LABEL_26;
        }
        if ( *((float *)this + 137) != 1.0 )
        {
          v40 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
          v35 = *((float *)this + *((_DWORD *)this + 138) + 37)
              + (float)((float)(*((float *)this + *((_DWORD *)this + 138) + 38)
                              - *((float *)this + *((_DWORD *)this + 138) + 37))
                      * (float)(fmodf(*((float *)this + 137), v40) * (float)(1.0 / v40)));
          goto LABEL_32;
        }
      }
      else
      {
        if ( (v30 & 0x10) != 0 )
        {
          if ( *((float *)this + 137) == 1.0 )
          {
            v31 = *((_DWORD *)this + 36) - 1;
LABEL_17:
            v32 = *((float *)this + v31 + 37);
LABEL_18:
            sub_5E6BC0(v48, "%d%%", (int)v32);
            goto LABEL_33;
          }
LABEL_16:
          v31 = *((_DWORD *)this + 138);
          goto LABEL_17;
        }
        if ( (v30 & 4) == 0 )
        {
          if ( (v30 & 8) != 0 )
          {
            if ( *((float *)this + 137) == 1.0 )
            {
              v33 = *((_DWORD *)this + 36) - 1;
LABEL_38:
              v39 = *((float *)this + v33 + 37);
LABEL_41:
              sub_5E6BC0(v48, "%d", (int)v39);
              goto LABEL_33;
            }
LABEL_37:
            v33 = *((_DWORD *)this + 138);
            goto LABEL_38;
          }
LABEL_26:
          v48[0] = 0;
LABEL_33:
          AsciiToGxtChar(v48, v42);
          CFont::PrintString(
            COERCE_CFONT_((float)(v47.n128_f32[0] + v47.n128_f32[2]) * 0.5),
            v47.n128_f32[1],
            (CFont *)v42,
            v36);
          return _stack_chk_guard - v49;
        }
        if ( *((float *)this + 137) == 1.0 )
        {
          v34 = *((_DWORD *)this + 36) - 1;
LABEL_31:
          v35 = *((float *)this + v34 + 37);
LABEL_32:
          sub_5E6BC0(v48, "%.2f", v35);
          goto LABEL_33;
        }
      }
      v34 = *((_DWORD *)this + 138);
      goto LABEL_31;
    }
  }
  return _stack_chk_guard - v49;
}


// ============================================================

// Address: 0x2c757c
// Original: _ZN13CWidgetSlider15GetTweenedValueEv
// Demangled: CWidgetSlider::GetTweenedValue(void)
int __fastcall CWidgetSlider::GetTweenedValue(CWidgetSlider *this)
{
  float v1; // s0
  float v2; // s18

  if ( *((float *)this + 137) == 1.0 )
  {
    v1 = *((float *)this + *((_DWORD *)this + 138) + 37);
  }
  else
  {
    v2 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
    v1 = *((float *)this + *((_DWORD *)this + 138) + 37)
       + (float)((float)(*((float *)this + *((_DWORD *)this + 138) + 38)
                       - *((float *)this + *((_DWORD *)this + 138) + 37))
               * (float)(fmodf(*((float *)this + 137), v2) * (float)(1.0 / v2)));
  }
  return LODWORD(v1);
}


// ============================================================

// Address: 0x2c75fc
// Original: _ZN13CWidgetSlider15GetNotchedValueEv
// Demangled: CWidgetSlider::GetNotchedValue(void)
int __fastcall CWidgetSlider::GetNotchedValue(CWidgetSlider *this)
{
  int v1; // r1

  if ( *((float *)this + 137) == 1.0 )
    v1 = *((_DWORD *)this + 36) - 1;
  else
    v1 = *((_DWORD *)this + 138);
  return *((_DWORD *)this + v1 + 37);
}


// ============================================================

// Address: 0x2c7622
// Original: _ZN13CWidgetSlider14SetWidgetValueEf
// Demangled: CWidgetSlider::SetWidgetValue(float)
int __fastcall CWidgetSlider::SetWidgetValue(int this, float a2)
{
  int v2; // r12
  float *v4; // r3
  int v5; // r1
  float v6; // s2

  v2 = *(_DWORD *)(this + 144);
  if ( v2 >= 2 )
  {
    v4 = (float *)(this + 152);
    v5 = 0;
    while ( 1 )
    {
      v6 = *(v4 - 1);
      if ( v6 <= a2 && *v4 >= a2 )
        break;
      ++v5;
      ++v4;
      if ( v5 >= v2 - 1 )
        return this;
    }
    *(float *)(this + 548) = (float)((float)((float)(a2 - v6) / (float)(*v4 - v6)) + (float)v5)
                           / (float)((float)v2 + -1.0);
  }
  return this;
}


// ============================================================

// Address: 0x2c7694
// Original: _ZN13CWidgetSlider14SetSliderRangeEff
// Demangled: CWidgetSlider::SetSliderRange(float,float)
_DWORD *__fastcall CWidgetSlider::SetSliderRange(CWidgetSlider *this, float a2, float a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d3
  float v6; // s4
  _DWORD *result; // r0
  unsigned __int32 v8; // r1
  float v9; // s4

  v3.n64_f32[0] = a3;
  if ( a2 == 50.0 )
  {
    v6 = 95.0;
    *((_DWORD *)this + 36) = 96;
  }
  else
  {
    v6 = (float)*((int *)this + 36) + -1.0;
  }
  result = (_DWORD *)((char *)this + 148);
  v8 = 0;
  v9 = (float)(a3 - a2) / v6;
  do
  {
    v4.n64_u32[0] = v8++;
    v4.n64_f32[0] = (float)(v9 * (float)v4.n64_i32[0]) + a2;
    v4.n64_u64[0] = vmin_f32(v4, v3).n64_u64[0];
    *result++ = v4.n64_u32[0];
  }
  while ( v8 != 100 );
  return result;
}


// ============================================================

// Address: 0x2c76fc
// Original: _ZN13CWidgetSliderD2Ev
// Demangled: CWidgetSlider::~CWidgetSlider()
void __fastcall CWidgetSlider::~CWidgetSlider(CWidgetSlider *this)
{
  *(_DWORD *)this = &off_6650A4;
  CSprite2d::~CSprite2d((CWidgetSlider *)((char *)this + 564));
  CSprite2d::~CSprite2d((CWidgetSlider *)((char *)this + 560));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c772c
// Original: _ZN13CWidgetSliderD0Ev
// Demangled: CWidgetSlider::~CWidgetSlider()
void __fastcall CWidgetSlider::~CWidgetSlider(CWidgetSlider *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_6650A4;
  CSprite2d::~CSprite2d((CWidgetSlider *)((char *)this + 564));
  CSprite2d::~CSprite2d((CWidgetSlider *)((char *)this + 560));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c7760
// Original: _ZN13CWidgetSlider7GetNameEv
// Demangled: CWidgetSlider::GetName(void)
char *__fastcall CWidgetSlider::GetName(CWidgetSlider *this)
{
  return "Slider";
}


// ============================================================

// Address: 0x2c776c
// Original: _ZN13CWidgetSlider14GetWidgetValueEv
// Demangled: CWidgetSlider::GetWidgetValue(void)
int __fastcall CWidgetSlider::GetWidgetValue(CWidgetSlider *this)
{
  float v2; // s0
  int v3; // r0
  float v4; // s0
  float v5; // s18

  v2 = *((float *)this + 137);
  if ( (*((_BYTE *)this + 556) & 2) != 0 )
  {
    if ( v2 != 1.0 )
    {
      v5 = 1.0 / (float)((float)*((int *)this + 36) + -1.0);
      v4 = *((float *)this + *((_DWORD *)this + 138) + 37)
         + (float)((float)(*((float *)this + *((_DWORD *)this + 138) + 38)
                         - *((float *)this + *((_DWORD *)this + 138) + 37))
                 * (float)(fmodf(*((float *)this + 137), v5) * (float)(1.0 / v5)));
      return LODWORD(v4);
    }
    goto LABEL_5;
  }
  if ( v2 != 1.0 )
  {
LABEL_5:
    v3 = *((_DWORD *)this + 138);
    goto LABEL_6;
  }
  v3 = *((_DWORD *)this + 36) - 1;
LABEL_6:
  v4 = *((float *)this + v3 + 37);
  return LODWORD(v4);
}


// ============================================================
