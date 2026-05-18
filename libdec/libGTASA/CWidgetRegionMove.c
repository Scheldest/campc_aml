
// Address: 0x1956f8
// Original: j__ZN17CWidgetRegionMoveC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionMove::CWidgetRegionMove(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionMove::CWidgetRegionMove()
{
  return _ZN17CWidgetRegionMoveC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c14a4
// Original: _ZN17CWidgetRegionMoveC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionMove::CWidgetRegionMove(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionMove::CWidgetRegionMove(int a1)
{
  CWidgetRegion::CWidgetRegion();
  *(_DWORD *)a1 = &off_66488C;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 152));
  *(_QWORD *)(a1 + 156) = 0LL;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 1055286886;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 152), "hud_analognub", 1);
  return a1;
}


// ============================================================

// Address: 0x2c150c
// Original: _ZN17CWidgetRegionMove6UpdateEv
// Demangled: CWidgetRegionMove::Update(void)
float __fastcall CWidgetRegionMove::Update(CWidgetRegionMove *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d3
  int v5; // r1
  int Pad; // r0
  int *v7; // r2
  CTouchInterface *v8; // r0
  int *v9; // r1
  int v10; // r1
  float32x2_t v11; // d1
  float32x2_t v12; // d0
  int v13; // r1
  float v14; // s18
  float v15; // s20
  float v16; // s0
  float v17; // s2
  float v18; // s0
  float v19; // s2
  float result; // r0
  float v21[10]; // [sp+0h] [bp-28h] BYREF

  CWidgetRegion::Update(this);
  Pad = CPad::GetPad(0, v5);
  v7 = dword_2C1708;
  if ( *(_BYTE *)(Pad + 325) )
    v7 = &dword_2C1708[1];
  v1.n64_u32[0] = *v7;
  *((_DWORD *)this + 37) = *v7;
  v8 = (CTouchInterface *)*((_DWORD *)this + 30);
  v9 = &CWidget::m_vecTouchAnchor[2 * (_DWORD)v8];
  v3.n64_u32[0] = v9[1];
  v1.n64_f32[0] = v1.n64_f32[0] * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
  v2.n64_u32[0] = *v9;
  v10 = *((unsigned __int8 *)this + 77);
  v11.n64_u64[0] = vmax_f32(v2, v1).n64_u64[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *((_DWORD *)this + 41) = v11.n64_u32[0];
  v12.n64_u64[0] = vmin_f32(v3, v1).n64_u64[0];
  *((_DWORD *)this + 42) = v12.n64_u32[0];
  if ( v10
    && CTouchInterface::IsTouchDown(v8, v10) == 1
    && (*(int (__fastcall **)(CWidgetRegionMove *, char *, _DWORD))(*(_DWORD *)this + 12))(this, (char *)this + 164, 0) == 1 )
  {
    *((_BYTE *)this + 76) = -1;
  }
  else if ( (*(int (__fastcall **)(CWidgetRegionMove *, char *, _DWORD))(*(_DWORD *)this + 12))(
              this,
              (char *)this + 164,
              0) == 1 )
  {
    v11.n64_u32[0] = 0;
    v12.n64_f32[0] = (double)*((unsigned __int8 *)this + 76) - CWidget::m_fElapsedTime * *((float *)this + 7);
    *((_BYTE *)this + 76) = (unsigned int)vmax_f32(v12, v11).n64_f32[0];
  }
  else
  {
    *((_BYTE *)this + 76) = 0;
  }
  CTouchInterface::GetTouchPosition((CTouchInterface *)v21, *((_DWORD *)this + 30));
  v14 = v21[0] - *((float *)this + 41);
  v15 = v21[1] - *((float *)this + 42);
  v16 = sqrtf((float)(v14 * v14) + (float)(v15 * v15));
  v17 = *((float *)this + 37) * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
  if ( v16 > v17 )
  {
    v18 = 1.0 / (float)(v16 / v17);
    v15 = v15 * v18;
    v14 = v14 * v18;
  }
  if ( CTouchInterface::IsTouchDown(*((CTouchInterface **)this + 30), v13) == 1 )
  {
    v19 = v15 + *((float *)this + 42);
    *((float *)this + 39) = v14 + *((float *)this + 41);
    *((float *)this + 40) = v19;
  }
  result = 0.0;
  if ( v14 == 0.0 && v15 == 0.0 )
  {
    *((_DWORD *)this + 36) = 0;
  }
  else
  {
    result = atan2f(v15, v14);
    *((float *)this + 36) = result + 1.5708;
    if ( (float)(result + 1.5708) < 0.0 )
      *((float *)this + 36) = (float)(result + 1.5708) + 6.2832;
  }
  return result;
}


// ============================================================

// Address: 0x2c172c
// Original: _ZN17CWidgetRegionMove24ClampInternalTouchAnchorEv
// Demangled: CWidgetRegionMove::ClampInternalTouchAnchor(void)
int __fastcall CWidgetRegionMove::ClampInternalTouchAnchor(int this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  int *v4; // r1
  unsigned __int32 v5; // s4

  v4 = &CWidget::m_vecTouchAnchor[2 * *(_DWORD *)(this + 120)];
  v2.n64_u32[0] = *v4;
  v1.n64_f32[0] = *(float *)(this + 148) * (float)(*(float *)(this + 20) * (float)((float)dword_9FC900 / 640.0));
  v3.n64_u32[0] = v4[1];
  v5 = vmax_f32(v2, v1).n64_u32[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *(_DWORD *)(this + 164) = v5;
  *(_DWORD *)(this + 168) = vmin_f32(v3, v1).n64_u32[0];
  return this;
}


// ============================================================

// Address: 0x2c1790
// Original: _ZN17CWidgetRegionMove4DrawEv
// Demangled: CWidgetRegionMove::Draw(void)
int __fastcall CWidgetRegionMove::Draw(CWidgetRegionMove *this)
{
  int result; // r0
  float v3; // s2
  float v4; // s0
  float v5; // s4
  float v6; // s4
  float v7; // s0
  float v8; // s2
  float v9; // [sp+0h] [bp-28h] BYREF
  float v10; // [sp+4h] [bp-24h]
  float v11; // [sp+8h] [bp-20h]
  float v12; // [sp+Ch] [bp-1Ch]

  result = *((unsigned __int8 *)this + 76);
  if ( result )
  {
    v3 = *((float *)this + 41);
    v4 = *((float *)this + 37) * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
    v5 = *((float *)this + 42);
    v12 = v5 - v4;
    v9 = v3 - v4;
    v11 = v3 + v4;
    v10 = v5 + v4;
    CSprite2d::Draw((char *)this + 8, &v9, (char *)this + 73);
    v6 = *((float *)this + 40);
    v7 = (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0)) * 0.15;
    v8 = *((float *)this + 39);
    v12 = v6 - v7;
    v9 = v8 - v7;
    v11 = v8 + v7;
    v10 = v6 + v7;
    return CSprite2d::Draw((char *)this + 152, &v9, (char *)this + 73);
  }
  return result;
}


// ============================================================

// Address: 0x2c1870
// Original: _ZN17CWidgetRegionMove9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionMove::IsTouched(CVector2D *)
int __fastcall CWidgetRegionMove::IsTouched(float *a1, float *a2)
{
  float *v4; // r1
  float v5; // s0
  float v7; // s0
  float v8; // s2

  if ( CHID::Implements() != 1 || CHID::Implements() != 1 )
    goto LABEL_10;
  CHID::IsPressed(30, a2);
  v4 = a2;
  if ( a2 )
    v4 = a2 + 1;
  CHID::IsPressed(31, v4);
  if ( CHID::IsPressed(30, 0) || CHID::IsPressed(31, 0) == 1 )
  {
    if ( a2 )
    {
      v5 = a2[1] * 128.0;
      *a2 = *a2 * 128.0;
      a2[1] = v5;
    }
    return 1;
  }
  else
  {
LABEL_10:
    if ( a2 )
    {
      v7 = 1.0 / (float)(a1[37] * (float)(a1[5] * (float)((float)dword_9FC900 / 640.0)));
      v8 = (float)((float)(a1[40] - a1[42]) * v7) * 128.0;
      *a2 = (float)((float)(a1[39] - a1[41]) * v7) * 128.0;
      a2[1] = v8;
    }
    return j_CWidget::IsTouched();
  }
}


// ============================================================

// Address: 0x2c1958
// Original: _ZN17CWidgetRegionMove14IsDoubleTappedEv
// Demangled: CWidgetRegionMove::IsDoubleTapped(void)
int __fastcall CWidgetRegionMove::IsDoubleTapped(CWidgetRegionMove *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsReleased();
  if ( CHID::Implements() == 1 && CHID::IsReleased(4) )
    return 1;
  return CWidget::GetNumTapsInTime(this, 0.33) > 1;
}


// ============================================================

// Address: 0x2c19a4
// Original: _ZN17CWidgetRegionMove12DrawHelpIconEPKcfffi
// Demangled: CWidgetRegionMove::DrawHelpIcon(char const*,float,float,float,int)
char *__fastcall CWidgetRegionMove::DrawHelpIcon(
        CWidgetRegionMove *this,
        const char *haystack,
        int a3,
        int a4,
        float a5,
        int a6)
{
  int v9; // r0
  char *result; // r0
  int v11; // r0

  if ( strstr(haystack, "widget_ped_move_left") || strstr(haystack, "widget_vehicle_steer_left") )
  {
    v9 = 1;
    return (char *)CHID::DrawHelpIcon((int)haystack, 30, a3, a4, a5, a6, v9);
  }
  if ( strstr(haystack, "widget_ped_move_right") || strstr(haystack, "widget_vehicle_steer_right") )
  {
LABEL_7:
    v9 = 0;
    return (char *)CHID::DrawHelpIcon((int)haystack, 30, a3, a4, a5, a6, v9);
  }
  if ( strstr(haystack, "widget_ped_move_up") )
  {
    v11 = 1;
    return (char *)CHID::DrawHelpIcon((int)haystack, 31, a3, a4, a5, a6, v11);
  }
  if ( strstr(haystack, "widget_ped_move_down") )
  {
    v11 = 0;
    return (char *)CHID::DrawHelpIcon((int)haystack, 31, a3, a4, a5, a6, v11);
  }
  result = strstr(haystack, "widget_ped_move");
  if ( result )
    goto LABEL_7;
  return result;
}


// ============================================================

// Address: 0x2c1ae0
// Original: _ZN17CWidgetRegionMove14OnInitialTouchEv
// Demangled: CWidgetRegionMove::OnInitialTouch(void)
int *__fastcall CWidgetRegionMove::OnInitialTouch(CWidgetRegionMove *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  int *result; // r0
  unsigned __int32 v6; // s4
  unsigned __int32 v7; // s0

  CWidget::OnInitialTouch(this);
  result = &CWidget::m_vecTouchAnchor[2 * *((_DWORD *)this + 30)];
  v2.n64_u32[0] = *result;
  v1.n64_f32[0] = *((float *)this + 37) * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
  v3.n64_u32[0] = result[1];
  v6 = vmax_f32(v2, v1).n64_u32[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *((_DWORD *)this + 39) = v6;
  v7 = vmin_f32(v3, v1).n64_u32[0];
  *((_DWORD *)this + 40) = v7;
  *((_DWORD *)this + 41) = v6;
  *((_DWORD *)this + 42) = v7;
  return result;
}


// ============================================================

// Address: 0x2c1b58
// Original: _ZN17CWidgetRegionMove15GetWidgetValue2EPfS0_
// Demangled: CWidgetRegionMove::GetWidgetValue2(float *,float *)
int __fastcall CWidgetRegionMove::GetWidgetValue2(CWidgetRegionMove *this, float *a2, float *a3)
{
  int result; // r0
  float v7[6]; // [sp+0h] [bp-18h] BYREF

  result = (*(int (__fastcall **)(CWidgetRegionMove *, _DWORD))(*(_DWORD *)this + 80))(this, 0);
  if ( result == 1 )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
    *a2 = v7[0] - *((float *)this + 41);
    result = CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
    *a3 = v7[1] - *((float *)this + 42);
  }
  else
  {
    *a2 = 0.0;
    *a3 = 0.0;
  }
  return result;
}


// ============================================================

// Address: 0x2c1bbc
// Original: _ZN17CWidgetRegionMoveD2Ev
// Demangled: CWidgetRegionMove::~CWidgetRegionMove()
void __fastcall CWidgetRegionMove::~CWidgetRegionMove(CWidgetRegionMove *this)
{
  *(_DWORD *)this = &off_66488C;
  CSprite2d::~CSprite2d((CWidgetRegionMove *)((char *)this + 152));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c1be4
// Original: _ZN17CWidgetRegionMoveD0Ev
// Demangled: CWidgetRegionMove::~CWidgetRegionMove()
void __fastcall CWidgetRegionMove::~CWidgetRegionMove(CWidgetRegionMove *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_66488C;
  CSprite2d::~CSprite2d((CWidgetRegionMove *)((char *)this + 152));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c1c10
// Original: _ZN17CWidgetRegionMove7GetNameEv
// Demangled: CWidgetRegionMove::GetName(void)
char *__fastcall CWidgetRegionMove::GetName(CWidgetRegionMove *this)
{
  return "Move";
}


// ============================================================
