
// Address: 0x196660
// Original: j__ZN17CWidgetRegionLookC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionLook::CWidgetRegionLook(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionLook::CWidgetRegionLook()
{
  return _ZN17CWidgetRegionLookC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c0d38
// Original: _ZN17CWidgetRegionLookC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionLook::CWidgetRegionLook(char const*,WidgetPosition const&)
int __fastcall CWidgetRegionLook::CWidgetRegionLook(int a1)
{
  _BYTE v3[20]; // [sp+4h] [bp-14h] BYREF

  CWidgetRegion::CWidgetRegion();
  *(_WORD *)(a1 + 144) = 0;
  *(_DWORD *)a1 = &off_6647F8;
  CRGBA::CRGBA((CRGBA *)v3, 0xFFu, 0xFFu, 0xFFu, 0x40u);
  CWidget::CreateHoldEffect();
  *(_DWORD *)(a1 + 140) = 1056964608;
  return a1;
}


// ============================================================

// Address: 0x2c0da4
// Original: _ZN17CWidgetRegionLook6UpdateEv
// Demangled: CWidgetRegionLook::Update(void)
float *__fastcall CWidgetRegionLook::Update(CWidgetRegionLook *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d9
  CHID *v5; // r0
  CHID *PlayerVehicle; // r0
  float v7; // s16
  char v8; // r0
  float *result; // r0
  float v10; // s20
  int v11; // r0
  float32x2_t v12; // d0
  unsigned __int32 v13; // s0
  int v14; // r5
  float v15; // s0
  float v16; // s8
  float v17; // s6
  float v18; // s4
  int PlayerPed; // r0
  float v20; // [sp+0h] [bp-28h] BYREF
  float v21; // [sp+4h] [bp-24h]

  CWidgetRegion::Update(this);
  if ( dword_6F3A34 && (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)dword_6F3A34 + 80))(dword_6F3A34, 0)
    || (v5 = (CHID *)CWidget::m_pPinchZoomWidget, this == (CWidgetRegionLook *)CWidget::m_pPinchZoomWidget) )
  {
    v5 = 0;
    *((_DWORD *)this + 17) = 0;
  }
  if ( CHID::GetInputType(v5)
    || !FindPlayerPed(-1)
    || !*(_DWORD *)(FindPlayerPed(-1) + 1088)
    || (PlayerPed = FindPlayerPed(-1), !CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(PlayerPed + 1088))) )
  {
    if ( CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera)
      || *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 53 )
    {
      *((_DWORD *)this + 17) = 0;
    }
  }
  if ( CTheScripts::pActiveScripts && !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "pool2") )
    *((_DWORD *)this + 17) = 0;
  if ( *((_BYTE *)this + 145) )
    *((_DWORD *)this + 17) = 0;
  PlayerVehicle = (CHID *)FindPlayerPed(-1);
  if ( PlayerVehicle )
  {
    PlayerVehicle = (CHID *)FindPlayerVehicle(-1, 0);
    if ( !PlayerVehicle )
    {
      PlayerVehicle = (CHID *)(*(unsigned __int8 *)(FindPlayerPed(-1) + 1157) << 30);
      if ( (int)PlayerVehicle < 0 )
      {
        PlayerVehicle = 0;
        *((_DWORD *)this + 17) = 0;
      }
    }
  }
  if ( CHID::GetInputType(PlayerVehicle) == 2 )
  {
    v7 = 0.0;
    *((_DWORD *)this + 17) = 0;
  }
  else
  {
    v7 = *((float *)this + 17);
    if ( v7 > 0.5 )
    {
      v8 = 1;
      goto LABEL_24;
    }
  }
  if ( this == (CWidgetRegionLook *)CWidget::m_pInitialTouchWidget[*((_DWORD *)this + 30)] )
    goto LABEL_25;
  v8 = 0;
LABEL_24:
  *((_BYTE *)this + 144) = v8;
LABEL_25:
  result = (float *)*((_DWORD *)this + 34);
  if ( result )
  {
    v10 = *((float *)this + 35);
    v3.n64_u32[0] = 0;
    if ( CHID::Implements() == 1 && CHID::IsPressed(18, 0) == 1 )
    {
      v11 = *((_DWORD *)this + 34);
    }
    else
    {
      v11 = *((_DWORD *)this + 34);
      if ( !*((_BYTE *)this + 144) )
      {
        v1.n64_f32[0] = v7 + (float)(v10 * -0.25);
        v12.n64_u64[0] = vmax_f32(v1, v3).n64_u64[0];
        v3.n64_u32[0] = 0;
        v12.n64_f32[0] = v12.n64_f32[0] / (float)(v10 * 0.625);
        v2.n64_u32[0] = 1.0;
        v13 = vmin_f32(v12, v2).n64_u32[0];
        if ( *((_BYTE *)this + 77) )
          v3.n64_u32[0] = v13;
      }
    }
    *(_DWORD *)(v11 + 28) = v3.n64_u32[0];
    v14 = dword_9FC900;
    CTouchInterface::GetTouchPosition((CTouchInterface *)&v20, *((_DWORD *)this + 30));
    result = (float *)*((_DWORD *)this + 34);
    v15 = (float)((float)v14 / 640.0) * 20.0;
    v16 = v15 + v21;
    v17 = v15 + v20;
    v18 = v21 - v15;
    result[3] = v20 - v15;
    result[4] = v16;
    result[5] = v17;
    result[6] = v18;
  }
  return result;
}


// ============================================================

// Address: 0x2c0fcc
// Original: _ZN17CWidgetRegionLook9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionLook::IsTouched(CVector2D *)
bool __fastcall CWidgetRegionLook::IsTouched(int a1, float *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  CPlayerPed *PlayerPed; // r0
  int PadFromPlayer; // r0
  int v10; // r6
  _BOOL4 result; // r0
  float v12; // s0
  float v13[6]; // [sp+0h] [bp-18h] BYREF

  if ( FindPlayerPed(-1) )
  {
    PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
    PadFromPlayer = CPlayerPed::GetPadFromPlayer(PlayerPed);
    v10 = *(unsigned __int8 *)(PadFromPlayer + 325);
    if ( *(_BYTE *)(PadFromPlayer + 325) )
      v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( CHID::Implements() == 1 && CHID::Implements() == 1 )
  {
    if ( a2 )
    {
      CHID::IsPressed(28, a2);
      CHID::IsPressed(29, a2 + 1);
      result = 1;
      v12 = a2[1] * 128.0;
      *a2 = *a2 * 128.0;
      a2[1] = v12;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( a2 && v10 | (*(_BYTE *)(a1 + 144) == 0) && a1 != CWidget::m_pPinchZoomWidget )
    {
      CTouchInterface::GetTouchDelta((CTouchInterface *)v13, *(_DWORD *)(a1 + 120));
      v5.n64_u32[0] = -1023410176;
      v4.n64_f32[0] = v13[1] * 5.0;
      v2.n64_f32[0] = v13[0] * 5.0;
      v3.n64_u32[0] = 1124073472;
      *(_DWORD *)a2 = vmin_f32(vmax_f32(v2, v5), v3).n64_u32[0];
      *((_DWORD *)a2 + 1) = vmin_f32(vmax_f32(v4, v5), v3).n64_u32[0];
    }
    return a1 == CWidget::m_pInitialTouchWidget[*(_DWORD *)(a1 + 120)] && a1 != CWidget::m_pPinchZoomWidget;
  }
  return result;
}


// ============================================================

// Address: 0x2c10ec
// Original: _ZN17CWidgetRegionLook14OnInitialTouchEv
// Demangled: CWidgetRegionLook::OnInitialTouch(void)
int __fastcall CWidgetRegionLook::OnInitialTouch(CTouchInterface **this)
{
  CTouchInterface *v2; // r0
  int result; // r0
  int v4; // r4
  float *v5; // r6
  float v6; // s18
  float v7; // s20
  float v8; // s22
  float v9; // s2
  float v10[16]; // [sp+0h] [bp-40h] BYREF

  CWidget::OnInitialTouch((CWidget *)this);
  v2 = this[30];
  *((_BYTE *)this + 145) = 0;
  result = CTouchInterface::IsTouchDown(v2, 0);
  if ( result == 1 )
  {
    result = 0;
    while ( 1 )
    {
      v4 = result;
      v5 = (float *)CTouchInterface::m_pWidgets[result];
      if ( v5 )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 36))(CTouchInterface::m_pWidgets[result]) == 1
          && CWidget::GetEnabled((CWidget *)v5) == 1 )
        {
          CTouchInterface::GetTouchPosition((CTouchInterface *)v10, (int)this[30]);
          v6 = v5[8];
          v7 = v5[10];
          v8 = v10[0];
          CTouchInterface::GetTouchPosition((CTouchInterface *)v10, (int)this[30]);
          v9 = v10[1] - (float)((float)(v5[9] + v5[11]) * 0.5);
          if ( sqrtf(
                 (float)((float)(v8 - (float)((float)(v6 + v7) * 0.5)) * (float)(v8 - (float)((float)(v6 + v7) * 0.5)))
               + (float)(v9 * v9)) < fabsf(v5[10] - v5[8]) )
            break;
        }
      }
      result = v4 + 1;
      if ( v4 >= 189 )
        return result;
    }
    result = 1;
    *((_BYTE *)this + 145) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x2c11cc
// Original: _ZN17CWidgetRegionLook15OnReleasedTouchEv
// Demangled: CWidgetRegionLook::OnReleasedTouch(void)
char *__fastcall CWidgetRegionLook::OnReleasedTouch(CWidgetRegionLook *this)
{
  int v2; // r1
  char *result; // r0
  char *v4; // r5
  bool v5; // zf
  float v6[2]; // [sp+0h] [bp-20h] BYREF
  float v7[6]; // [sp+8h] [bp-18h] BYREF

  CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
  v2 = *((_DWORD *)this + 30);
  result = (char *)&CWidget::SWIPE_DISTANCE;
  if ( fabsf(v7[0] - *(float *)&CWidget::m_vecTouchAnchor[2 * v2]) < CWidget::SWIPE_DISTANCE )
  {
    CTouchInterface::GetTouchPosition((CTouchInterface *)v6, v2);
    result = (char *)&CWidget::SWIPE_DISTANCE;
    if ( fabsf(v6[1] - *(float *)&CWidget::m_vecTouchAnchor[2 * *((_DWORD *)this + 30) + 1]) < CWidget::SWIPE_DISTANCE )
    {
      result = (char *)FindPlayerPed(-1);
      v4 = result;
      if ( result )
      {
        result = (char *)(*(unsigned __int8 *)(CWeaponInfo::GetWeaponInfo() + 24) << 31);
        if ( result )
        {
          result = (char *)*((_DWORD *)v4 + 275);
          v5 = result == (_BYTE *)&dword_14 + 2;
          if ( result != (_BYTE *)&dword_14 + 2 )
            v5 = result == (_BYTE *)&stderr + 1;
          if ( v5 )
          {
            CTouchInterface::GetTouchPosition((CTouchInterface *)v7, *((_DWORD *)this + 30));
            CTouchInterface::GetTouchPosition((CTouchInterface *)v6, *((_DWORD *)this + 30));
            return v4;
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c12b0
// Original: _ZN17CWidgetRegionLook15GetWidgetValue2EPfS0_
// Demangled: CWidgetRegionLook::GetWidgetValue2(float *,float *)
int __fastcall CWidgetRegionLook::GetWidgetValue2(CWidgetRegionLook *this, float *a2, float *a3)
{
  int result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h]

  CTouchInterface::GetTouchDelta((CTouchInterface *)&v7, *((_DWORD *)this + 30));
  *(_DWORD *)a2 = v7;
  CTouchInterface::GetTouchDelta((CTouchInterface *)&v7, *((_DWORD *)this + 30));
  result = v8;
  *(_DWORD *)a3 = v8;
  return result;
}


// ============================================================

// Address: 0x2c12e0
// Original: _ZN17CWidgetRegionLook14IsPinchZoomingEP9CVector2D
// Demangled: CWidgetRegionLook::IsPinchZooming(CVector2D *)
int CWidgetRegionLook::IsPinchZooming()
{
  if ( CTheScripts::pActiveScripts && !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "barb") )
    return 0;
  if ( CHID::Implements() == 1 )
    return j_CHID::IsReleased();
  return sub_19698C();
}


// ============================================================

// Address: 0x2c132c
// Original: _ZN17CWidgetRegionLook10IsHeldDownEv
// Demangled: CWidgetRegionLook::IsHeldDown(void)
int __fastcall CWidgetRegionLook::IsHeldDown(CWidgetRegionLook *this)
{
  int result; // r0

  if ( FindPlayerPed(-1) && *(_DWORD *)(FindPlayerPed(-1) + 1100) == 50 )
  {
    if ( CHID::Implements() != 1 || CHID::Implements() != 1 || CHID::IsPressed(19, 0) != 1 || !CHID::IsPressed(20, 0) )
    {
      if ( CHID::Implements() == 1 && CHID::IsPressed(21, 0) )
        return 1;
      goto LABEL_14;
    }
    return 1;
  }
  if ( CHID::Implements() == 1 && CHID::IsPressed(18, 0) )
    return 1;
LABEL_14:
  result = *((unsigned __int8 *)this + 144);
  if ( *((_BYTE *)this + 144) )
    return 1;
  return result;
}


// ============================================================

// Address: 0x2c13b6
// Original: _ZN17CWidgetRegionLook12IsSwipedLeftEv
// Demangled: CWidgetRegionLook::IsSwipedLeft(void)
int __fastcall CWidgetRegionLook::IsSwipedLeft(CWidgetRegionLook *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsReleased();
  if ( CHID::Implements() == 1 && CHID::IsReleased(81) )
    return 1;
  return j_CWidget::IsSwipedLeft(this);
}


// ============================================================

// Address: 0x2c13f2
// Original: _ZN17CWidgetRegionLook13IsSwipedRightEv
// Demangled: CWidgetRegionLook::IsSwipedRight(void)
int __fastcall CWidgetRegionLook::IsSwipedRight(CWidgetRegionLook *this)
{
  if ( CHID::Replaces() == 1 )
    return j_CHID::IsReleased();
  if ( CHID::Implements() == 1 && CHID::IsReleased(80) )
    return 1;
  return j_CWidget::IsSwipedRight(this);
}


// ============================================================

// Address: 0x2c1430
// Original: _ZN17CWidgetRegionLook12DrawHelpIconEPKcfffi
// Demangled: CWidgetRegionLook::DrawHelpIcon(char const*,float,float,float,int)
int __fastcall CWidgetRegionLook::DrawHelpIcon(
        CWidgetRegionLook *this,
        const char *haystack,
        int a3,
        int a4,
        float a5,
        int a6)
{
  int v9; // r1

  if ( strstr(haystack, "widget_look_left") )
    v9 = 19;
  else
    v9 = 20;
  return CHID::DrawHelpIcon((int)haystack, v9, a3, a4, a5, a6, 0);
}


// ============================================================

// Address: 0x2c1488
// Original: _ZN17CWidgetRegionLookD0Ev
// Demangled: CWidgetRegionLook::~CWidgetRegionLook()
void __fastcall CWidgetRegionLook::~CWidgetRegionLook(CWidgetRegionLook *this)
{
  void *v1; // r0

  CWidget::~CWidget(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x2c1498
// Original: _ZN17CWidgetRegionLook7GetNameEv
// Demangled: CWidgetRegionLook::GetName(void)
char *__fastcall CWidgetRegionLook::GetName(CWidgetRegionLook *this)
{
  return "Look";
}


// ============================================================
