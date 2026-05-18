
// Address: 0x19d0e8
// Original: j__ZN18CWidgetRegionSteerC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSteer::CWidgetRegionSteer(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionSteer::CWidgetRegionSteer()
{
  return _ZN18CWidgetRegionSteerC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c2e44
// Original: _ZN18CWidgetRegionSteerC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionSteer::CWidgetRegionSteer(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionSteer::CWidgetRegionSteer(int a1)
{
  CWidgetRegion::CWidgetRegion();
  *(_DWORD *)a1 = &off_664C04;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 148));
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 144) = 1049414861;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 148), "hud_analognub", 1);
  return a1;
}


// ============================================================

// Address: 0x2c2eac
// Original: _ZN18CWidgetRegionSteer6UpdateEv
// Demangled: CWidgetRegionSteer::Update(void)
unsigned int __fastcall CWidgetRegionSteer::Update(CWidgetRegionSteer *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d3
  CTouchInterface *v5; // r0
  int *v6; // r1
  int v7; // r1
  float32x2_t v8; // d1
  float32x2_t v9; // d0
  unsigned int result; // r0

  CWidgetRegion::Update(this);
  v1.n64_f32[0] = (float)((float)unk_6E06DC / -100.0) + 0.65;
  *((_DWORD *)this + 36) = v1.n64_u32[0];
  v5 = (CTouchInterface *)*((_DWORD *)this + 30);
  v6 = &CWidget::m_vecTouchAnchor[2 * (_DWORD)v5];
  v3.n64_u32[0] = v6[1];
  v1.n64_f32[0] = v1.n64_f32[0] * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
  v2.n64_u32[0] = *v6;
  v7 = *((unsigned __int8 *)this + 77);
  v8.n64_u64[0] = vmax_f32(v2, v1).n64_u64[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *((_DWORD *)this + 40) = v8.n64_u32[0];
  v9.n64_u64[0] = vmin_f32(v3, v1).n64_u64[0];
  *((_DWORD *)this + 41) = v9.n64_u32[0];
  if ( v7
    && CTouchInterface::IsTouchDown(v5, v7) == 1
    && (*(int (__fastcall **)(CWidgetRegionSteer *, char *, _DWORD))(*(_DWORD *)this + 12))(this, (char *)this + 160, 0) == 1 )
  {
    result = 255;
    *((_BYTE *)this + 76) = -1;
  }
  else
  {
    result = (*(int (__fastcall **)(CWidgetRegionSteer *, char *, _DWORD))(*(_DWORD *)this + 12))(
               this,
               (char *)this + 160,
               0);
    if ( result == 1 )
    {
      v8.n64_u32[0] = 0;
      v9.n64_f32[0] = (double)*((unsigned __int8 *)this + 76) - CWidget::m_fElapsedTime * *((float *)this + 7);
      result = (unsigned int)vmax_f32(v9, v8).n64_f32[0];
      *((_BYTE *)this + 76) = result;
    }
    else
    {
      *((_BYTE *)this + 76) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c2fd0
// Original: _ZN18CWidgetRegionSteer24ClampInternalTouchAnchorEv
// Demangled: CWidgetRegionSteer::ClampInternalTouchAnchor(void)
int __fastcall CWidgetRegionSteer::ClampInternalTouchAnchor(int this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  int *v4; // r1
  unsigned __int32 v5; // s4

  v4 = &CWidget::m_vecTouchAnchor[2 * *(_DWORD *)(this + 120)];
  v2.n64_u32[0] = *v4;
  v1.n64_f32[0] = *(float *)(this + 144) * (float)(*(float *)(this + 20) * (float)((float)dword_9FC900 / 640.0));
  v3.n64_u32[0] = v4[1];
  v5 = vmax_f32(v2, v1).n64_u32[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *(_DWORD *)(this + 160) = v5;
  *(_DWORD *)(this + 164) = vmin_f32(v3, v1).n64_u32[0];
  return this;
}


// ============================================================

// Address: 0x2c3034
// Original: _ZN18CWidgetRegionSteer4DrawEv
// Demangled: CWidgetRegionSteer::Draw(void)
int __fastcall CWidgetRegionSteer::Draw(CWidgetRegionSteer *this)
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

  result = (*(int (__fastcall **)(CWidgetRegionSteer *, _DWORD))(*(_DWORD *)this + 80))(this, 0);
  if ( result == 1 )
  {
    result = *((unsigned __int8 *)this + 76);
    if ( *((_BYTE *)this + 76) )
    {
      v3 = *((float *)this + 40);
      v4 = *((float *)this + 36) * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
      v5 = *((float *)this + 41);
      v12 = v5 - v4;
      v9 = v3 - v4;
      v11 = v3 + v4;
      v10 = v5 + v4;
      CSprite2d::Draw((char *)this + 8, &v9, (char *)this + 73);
      v6 = *((float *)this + 39);
      v7 = (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0)) * 0.15;
      v8 = *((float *)this + 38);
      v12 = v6 - v7;
      v9 = v8 - v7;
      v11 = v8 + v7;
      v10 = v6 + v7;
      return CSprite2d::Draw((char *)this + 148, &v9, (char *)this + 73);
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c3120
// Original: _ZN18CWidgetRegionSteer9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionSteer::IsTouched(CVector2D *)
int __fastcall CWidgetRegionSteer::IsTouched(int a1, float *a2)
{
  float *v4; // r1
  int result; // r0
  float v6; // s0
  int v7; // r1
  float v8; // s20
  float v9; // s18
  float v10; // s0
  float v11; // s2
  float v12; // s0
  float v13; // s2
  float v14; // s0
  float v15; // s2
  float v16[10]; // [sp+0h] [bp-28h] BYREF

  if ( !CHID::Implements() && CHID::Implements() != 1 )
    goto LABEL_9;
  CHID::IsPressed(24, a2);
  v4 = a2;
  if ( a2 )
    v4 = a2 + 1;
  CHID::IsPressed(25, v4);
  if ( CHID::IsPressed(24, 0) || CHID::IsPressed(25, 0) == 1 )
  {
    result = 1;
    if ( a2 )
    {
      v6 = a2[1] * 128.0;
      *a2 = *a2 * 128.0;
      a2[1] = v6;
    }
  }
  else
  {
LABEL_9:
    CTouchInterface::GetTouchPosition((CTouchInterface *)v16, *(_DWORD *)(a1 + 120));
    v8 = v16[0] - *(float *)(a1 + 160);
    v9 = v16[1] - *(float *)(a1 + 164);
    v10 = sqrtf((float)(v8 * v8) + (float)(v9 * v9));
    v11 = *(float *)(a1 + 144) * (float)(*(float *)(a1 + 20) * (float)((float)dword_9FC900 / 640.0));
    if ( v10 > v11 )
    {
      v12 = 1.0 / (float)(v10 / v11);
      v9 = v9 * v12;
      v8 = v8 * v12;
    }
    if ( CTouchInterface::IsTouchDown(*(CTouchInterface **)(a1 + 120), v7) == 1 )
    {
      v13 = v9 + *(float *)(a1 + 164);
      *(float *)(a1 + 152) = v8 + *(float *)(a1 + 160);
      *(float *)(a1 + 156) = v13;
    }
    if ( a2 )
    {
      v14 = 1.0 / (float)(*(float *)(a1 + 144) * (float)(*(float *)(a1 + 20) * (float)((float)dword_9FC900 / 640.0)));
      v15 = (float)((float)(*(float *)(a1 + 156) - *(float *)(a1 + 164)) * v14) * 128.0;
      *a2 = (float)((float)(*(float *)(a1 + 152) - *(float *)(a1 + 160)) * v14) * 128.0;
      a2[1] = v15;
    }
    return CWidget::IsTouched(a1, a2);
  }
  return result;
}


// ============================================================

// Address: 0x2c32ac
// Original: _ZN18CWidgetRegionSteer14OnInitialTouchEv
// Demangled: CWidgetRegionSteer::OnInitialTouch(void)
int *__fastcall CWidgetRegionSteer::OnInitialTouch(CWidgetRegionSteer *this)
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
  v1.n64_f32[0] = *((float *)this + 36) * (float)(*((float *)this + 5) * (float)((float)dword_9FC900 / 640.0));
  v3.n64_u32[0] = result[1];
  v6 = vmax_f32(v2, v1).n64_u32[0];
  v1.n64_f32[0] = (float)dword_9FC904 - v1.n64_f32[0];
  *((_DWORD *)this + 38) = v6;
  v7 = vmin_f32(v3, v1).n64_u32[0];
  *((_DWORD *)this + 39) = v7;
  *((_DWORD *)this + 40) = v6;
  *((_DWORD *)this + 41) = v7;
  return result;
}


// ============================================================

// Address: 0x2c3324
// Original: _ZN18CWidgetRegionSteerD2Ev
// Demangled: CWidgetRegionSteer::~CWidgetRegionSteer()
void __fastcall CWidgetRegionSteer::~CWidgetRegionSteer(CWidgetRegionSteer *this)
{
  *(_DWORD *)this = &off_664C04;
  CSprite2d::~CSprite2d((CWidgetRegionSteer *)((char *)this + 148));
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c334c
// Original: _ZN18CWidgetRegionSteerD0Ev
// Demangled: CWidgetRegionSteer::~CWidgetRegionSteer()
void __fastcall CWidgetRegionSteer::~CWidgetRegionSteer(CWidgetRegionSteer *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_664C04;
  CSprite2d::~CSprite2d((CWidgetRegionSteer *)((char *)this + 148));
  CWidget::~CWidget(this);
  operator delete(v2);
}


// ============================================================

// Address: 0x2c3378
// Original: _ZN18CWidgetRegionSteer7GetNameEv
// Demangled: CWidgetRegionSteer::GetName(void)
char *__fastcall CWidgetRegionSteer::GetName(CWidgetRegionSteer *this)
{
  return "Steer";
}


// ============================================================
