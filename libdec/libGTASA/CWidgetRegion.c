
// Address: 0x192d24
// Original: j__ZN13CWidgetRegion4DrawEv
// Demangled: CWidgetRegion::Draw(void)
// attributes: thunk
int __fastcall CWidgetRegion::Draw(CWidgetRegion *this)
{
  return _ZN13CWidgetRegion4DrawEv(this);
}


// ============================================================

// Address: 0x193e28
// Original: j__ZN13CWidgetRegion6UpdateEv
// Demangled: CWidgetRegion::Update(void)
// attributes: thunk
int __fastcall CWidgetRegion::Update(CWidgetRegion *this)
{
  return _ZN13CWidgetRegion6UpdateEv(this);
}


// ============================================================

// Address: 0x196fd4
// Original: j__ZN13CWidgetRegionC2EPKcRK14WidgetPositioni10HIDMapping
// Demangled: CWidgetRegion::CWidgetRegion(char const*,WidgetPosition const&,int,HIDMapping)
// attributes: thunk
int CWidgetRegion::CWidgetRegion()
{
  return _ZN13CWidgetRegionC2EPKcRK14WidgetPositioni10HIDMapping();
}


// ============================================================

// Address: 0x1972f4
// Original: j__ZN13CWidgetRegionC2EPKcRK14WidgetPositioni10HIDMapping_0
// Demangled: CWidgetRegion::CWidgetRegion(char const*,WidgetPosition const&,int,HIDMapping)
// attributes: thunk
int CWidgetRegion::CWidgetRegion()
{
  return _ZN13CWidgetRegionC2EPKcRK14WidgetPositioni10HIDMapping();
}


// ============================================================

// Address: 0x2bf8b0
// Original: _ZN13CWidgetRegionC2EPKcRK14WidgetPositioni10HIDMapping
// Demangled: CWidgetRegion::CWidgetRegion(char const*,WidgetPosition const&,int,HIDMapping)
_DWORD *__fastcall CWidgetRegion::CWidgetRegion(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *result; // r0

  result = (_DWORD *)CWidget::CWidget(a1, a2, a3, a4, a5);
  *result = &off_6643EC;
  return result;
}


// ============================================================

// Address: 0x2bf8d4
// Original: _ZN13CWidgetRegion6UpdateEv
// Demangled: CWidgetRegion::Update(void)
// attributes: thunk
int __fastcall CWidgetRegion::Update(CWidget *this)
{
  return j_CWidget::Update(this);
}


// ============================================================

// Address: 0x2bf8d8
// Original: _ZN13CWidgetRegion4DrawEv
// Demangled: CWidgetRegion::Draw(void)
char *__fastcall CWidgetRegion::Draw(CWidgetRegion *this)
{
  char *result; // r0
  int v3; // t1
  bool v4; // zf

  v3 = *((_DWORD *)this + 2);
  result = (char *)this + 8;
  v4 = v3 == 0;
  if ( v3 )
    v4 = *((_BYTE *)this + 76) == 0;
  if ( !v4 )
    return (char *)j_CSprite2d::Draw();
  return result;
}


// ============================================================

// Address: 0x2bf8f8
// Original: _ZN13CWidgetRegion8StretchXEf
// Demangled: CWidgetRegion::StretchX(float)
int __fastcall CWidgetRegion::StretchX(CWidgetRegion *this, float a2)
{
  float v2; // s0

  v2 = a2;
  if ( dword_9FC900 != 640 )
    v2 = (float)(a2 / 640.0) * (float)dword_9FC900;
  return LODWORD(v2);
}


// ============================================================

// Address: 0x2bf92c
// Original: _ZN13CWidgetRegion8StretchYEf
// Demangled: CWidgetRegion::StretchY(float)
int __fastcall CWidgetRegion::StretchY(CWidgetRegion *this, float a2)
{
  float v2; // s0

  v2 = a2;
  if ( dword_9FC904 != 448 )
    v2 = (float)(a2 / 448.0) * (float)dword_9FC904;
  return LODWORD(v2);
}


// ============================================================

// Address: 0x2bf960
// Original: _ZN13CWidgetRegion9DrawFrameEf5CRectf
// Demangled: CWidgetRegion::DrawFrame(float,CRect,float)
int __fastcall CWidgetRegion::DrawFrame(int a1, unsigned __int32 a2, float a3, float a4, __int64 a5, float a6)
{
  float32x2_t v6; // d3
  float32x2_t v7; // d4
  float32x2_t v8; // d6
  float v13; // s24
  float v14; // s6
  float v17[4]; // [sp+24h] [bp-DCh] BYREF
  float v18[4]; // [sp+34h] [bp-CCh] BYREF
  _DWORD v19[4]; // [sp+44h] [bp-BCh] BYREF
  float v20[4]; // [sp+54h] [bp-ACh] BYREF
  float v21[4]; // [sp+64h] [bp-9Ch] BYREF
  _DWORD v22[4]; // [sp+74h] [bp-8Ch] BYREF
  float v23[2]; // [sp+84h] [bp-7Ch] BYREF
  __int64 v24; // [sp+8Ch] [bp-74h]
  float v25[3]; // [sp+94h] [bp-6Ch] BYREF
  unsigned __int64 v26; // [sp+A0h] [bp-60h] BYREF
  float v27; // [sp+A8h] [bp-58h]
  float v28; // [sp+ACh] [bp-54h]
  int v29; // [sp+B0h] [bp-50h]
  _BYTE v30[76]; // [sp+B4h] [bp-4Ch] BYREF

  CRGBA::CRGBA((CRGBA *)v30, 0xFFu, 0xFFu, 0xFFu, (unsigned int)a6);
  a1 += 8;
  v29 = HIDWORD(a5);
  v26 = __PAIR64__(LODWORD(a3), HIDWORD(a5));
  v8.n64_u32[0] = a2;
  v7.n64_f32[0] = fabsf(a4 - *((float *)&a5 + 1)) * 0.5;
  v6.n64_f32[0] = fabsf(*(float *)&a5 - a3) * 0.5;
  v13 = vmin_f32(v7, v8).n64_f32[0];
  v14 = vmin_f32(v6, v8).n64_f32[0];
  v23[0] = *(float *)&a5 - v14;
  v24 = a5;
  v28 = v14 + a3;
  v25[0] = v14 + a3;
  v25[2] = *(float *)&a5 - v14;
  v27 = v13 + *((float *)&a5 + 1);
  v25[1] = v13 + *((float *)&a5 + 1);
  v23[1] = v13 + *((float *)&a5 + 1);
  CSprite2d::Draw(a1, (int)&v26 + 4, (int)v30, 0, 0.0, 0.33, 0.0, 0.0, 0.33, 0.33, 0.33);
  CSprite2d::Draw(a1, (int)v25, (int)v30, 1051260355, 0.0, 0.66, 0.0, 0.33, 0.33, 0.66, 0.33);
  CSprite2d::Draw(a1, (int)v23, (int)v30, 1059648963, 0.0, 1.0, 0.0, 0.66, 0.33, 1.0, 0.33);
  v20[3] = v13 + *((float *)&a5 + 1);
  v20[0] = *(float *)&a5 - v14;
  LODWORD(v20[2]) = a5;
  *(float *)&v22[3] = v13 + *((float *)&a5 + 1);
  *(float *)v22 = a3;
  *(float *)&v22[2] = v14 + a3;
  v21[3] = v13 + *((float *)&a5 + 1);
  v21[0] = v14 + a3;
  v21[2] = *(float *)&a5 - v14;
  *(float *)&v22[1] = a4 - v13;
  v21[1] = a4 - v13;
  v20[1] = a4 - v13;
  CSprite2d::Draw(a1, (int)v22, (int)v30, 0, 0.33, 0.33, 0.33, 0.0, 0.66, 0.33, 0.66);
  CSprite2d::Draw(a1, (int)v21, (int)v30, 1051260355, 0.33, 0.66, 0.33, 0.33, 0.66, 0.66, 0.66);
  CSprite2d::Draw(a1, (int)v20, (int)v30, 1059648963, 0.33, 1.0, 0.33, 0.66, 0.66, 1.0, 0.66);
  *(float *)v19 = a3;
  *(float *)&v19[3] = a4 - v13;
  *(float *)&v19[2] = v14 + a3;
  v18[3] = a4 - v13;
  v18[0] = v14 + a3;
  v18[2] = *(float *)&a5 - v14;
  v17[3] = a4 - v13;
  *(float *)&v19[1] = a4;
  v18[1] = a4;
  v17[0] = *(float *)&a5 - v14;
  v17[1] = a4;
  LODWORD(v17[2]) = a5;
  CSprite2d::Draw(a1, (int)v19, (int)v30, 0, 0.66, 0.33, 0.66, 0.0, 1.0, 0.33, 1.0);
  CSprite2d::Draw(a1, (int)v18, (int)v30, 1051260355, 0.66, 0.66, 0.66, 0.33, 1.0, 0.66, 1.0);
  return CSprite2d::Draw(a1, (int)v17, (int)v30, 1059648963, 0.66, 1.0, 0.66, 0.66, 1.0, 1.0, 1.0);
}


// ============================================================

// Address: 0x2bfb80
// Original: _ZN13CWidgetRegionD0Ev
// Demangled: CWidgetRegion::~CWidgetRegion()
void __fastcall CWidgetRegion::~CWidgetRegion(CWidgetRegion *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2bfb90
// Original: _ZN13CWidgetRegion7GetNameEv
// Demangled: CWidgetRegion::GetName(void)
int __fastcall CWidgetRegion::GetName(CWidgetRegion *this)
{
  return 2882452;
}


// ============================================================

// Address: 0x2bfb98
// Original: _ZN13CWidgetRegion8IsRegionEv
// Demangled: CWidgetRegion::IsRegion(void)
int __fastcall CWidgetRegion::IsRegion(CWidgetRegion *this)
{
  return 1;
}


// ============================================================
