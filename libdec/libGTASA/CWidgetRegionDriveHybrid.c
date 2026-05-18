
// Address: 0x19405c
// Original: j__ZN24CWidgetRegionDriveHybridC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionDriveHybrid::CWidgetRegionDriveHybrid(char const*,WidgetPosition const&)
// attributes: thunk
int CWidgetRegionDriveHybrid::CWidgetRegionDriveHybrid()
{
  return _ZN24CWidgetRegionDriveHybridC2EPKcRK14WidgetPosition();
}


// ============================================================

// Address: 0x2c0010
// Original: _ZN24CWidgetRegionDriveHybridC2EPKcRK14WidgetPosition
// Demangled: CWidgetRegionDriveHybrid::CWidgetRegionDriveHybrid(char const*,WidgetPosition const&)
_DWORD *__fastcall CWidgetRegionDriveHybrid::CWidgetRegionDriveHybrid(_DWORD *a1)
{
  CWidgetRegion::CWidgetRegion();
  *a1 = &off_66463C;
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 37));
  CSprite2d::CSprite2d((CSprite2d *)(a1 + 38));
  a1[36] = 0;
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 37), "CornerGradient", 1);
  CWidget::SetTexture((CWidget *)a1, (CSprite2d *)(a1 + 38), "accelerate_solo", 1);
  return a1;
}


// ============================================================

// Address: 0x2c0098
// Original: _ZN24CWidgetRegionDriveHybrid6UpdateEv
// Demangled: CWidgetRegionDriveHybrid::Update(void)
double *__fastcall CWidgetRegionDriveHybrid::Update(CWidgetRegionDriveHybrid *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  int v4; // r5
  int PlayerVehicle; // r0
  float v6; // s16
  CPlayerPed *PlayerPed; // r0
  int v8; // r6
  CPlayerPed *v9; // r0
  int PadFromPlayer; // r0
  int v11; // r1
  CPad *Pad; // r0
  CPlayerPed *v13; // r0
  int v14; // r0
  CPlayerPed *v15; // r0
  CPlayerPed *v16; // r0
  double *result; // r0
  double v18; // d17
  double v19; // d16
  float v20; // [sp+4h] [bp-24h]
  float v21; // [sp+8h] [bp-20h]
  float v22; // [sp+Ch] [bp-1Ch]

  CWidgetRegion::Update(this);
  v4 = 0;
  if ( !FindPlayerVehicle(-1, 0) )
    goto LABEL_28;
  FindPlayerVehicle(-1, 0);
  CPhysical::GetSpeed();
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  v6 = (float)((float)((float)(v20 * *(float *)(*(_DWORD *)(PlayerVehicle + 20) + 16))
                     + (float)(v21 * *(float *)(*(_DWORD *)(PlayerVehicle + 20) + 20)))
             + (float)(v22 * *(float *)(*(_DWORD *)(PlayerVehicle + 20) + 24)))
     / 0.0055556;
  if ( fabsf(v6) < 0.42 )
    v6 = 0.0;
  if ( (*(int (__fastcall **)(CWidgetRegionDriveHybrid *, _DWORD))(*(_DWORD *)this + 80))(this, 0) != 1 )
  {
    PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
    if ( *(_BYTE *)(CPlayerPed::GetPadFromPlayer(PlayerPed) + 283) )
    {
      v8 = 1;
    }
    else
    {
      v9 = (CPlayerPed *)FindPlayerPed(-1);
      PadFromPlayer = CPlayerPed::GetPadFromPlayer(v9);
      v8 = *(unsigned __int8 *)(PadFromPlayer + 284);
      if ( *(_BYTE *)(PadFromPlayer + 284) )
        v8 = 1;
    }
    if ( *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 4
      || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 3
      || (Pad = (CPad *)CPad::GetPad(0, v11), CPad::IsFlyingRCVehicle(Pad))
      || CTheScripts::pActiveScripts && !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "lowgame") )
    {
      if ( v8 )
        goto LABEL_17;
    }
    else
    {
      if ( v6 == 0.0 )
      {
        v4 = 0;
        if ( (v8 & (CTouchInterface::IsTouched(4, 0, 1) ^ 1)) == 0 )
          goto LABEL_28;
LABEL_17:
        v13 = (CPlayerPed *)FindPlayerPed(-1);
        v14 = CPlayerPed::GetPadFromPlayer(v13);
        v4 = 0;
LABEL_18:
        *(_BYTE *)(v14 + 283) = v4;
        v15 = (CPlayerPed *)FindPlayerPed(-1);
        *(_BYTE *)(CPlayerPed::GetPadFromPlayer(v15) + 284) = v4;
        goto LABEL_28;
      }
      if ( v8 == 1 )
        goto LABEL_17;
    }
    v4 = 0;
    goto LABEL_28;
  }
  if ( v6 > 15.0
    || (*(int (__fastcall **)(CWidgetRegionDriveHybrid *))(*(_DWORD *)this + 40))(this) != 1
    || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 10 )
  {
    v4 = 1;
    goto LABEL_28;
  }
  v4 = 1;
  if ( *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) != 4 )
  {
    v16 = (CPlayerPed *)FindPlayerPed(-1);
    v14 = CPlayerPed::GetPadFromPlayer(v16);
    goto LABEL_18;
  }
LABEL_28:
  result = &CWidget::m_fElapsedTime;
  v18 = CWidget::m_fElapsedTime * *((float *)this + 7);
  v19 = (double)*((int *)this + 36);
  if ( v4 == 1 )
  {
    v2.n64_u32[0] = 1120403456;
    v1.n64_f32[0] = v18 * 0.389999986 + v19;
    v1.n64_u32[0] = vmin_f32(v1, v2).n64_u32[0];
  }
  else
  {
    v2.n64_u32[0] = 0;
    v1.n64_f32[0] = v19 + v18 * -0.689999998;
    v1.n64_u32[0] = vmax_f32(v1, v2).n64_u32[0];
  }
  *((_DWORD *)this + 36) = (int)v1.n64_f32[0];
  return result;
}


// ============================================================

// Address: 0x2c02f4
// Original: _ZN24CWidgetRegionDriveHybrid9IsTouchedEP9CVector2D
// Demangled: CWidgetRegionDriveHybrid::IsTouched(CVector2D *)
bool __fastcall CWidgetRegionDriveHybrid::IsTouched(CWidget *a1, int a2)
{
  int v4; // r1
  int v5; // r1
  int v6; // r4
  int v7; // r5
  int v8; // r4

  if ( FindPlayerVehicle(-1, 0) || *(_BYTE *)(CPad::GetPad(0, v4) + 325) || *(_BYTE *)(CPad::GetPad(0, v5) + 327) )
  {
    if ( CWidget::IsTouched(a1, a2) == 1 )
    {
      v6 = dword_6F37A0;
      if ( dword_6F37A0 )
      {
        if ( CWidget::GetEnabled((CWidget *)dword_6F37A0) == 1 )
        {
          v7 = 0;
          if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v6 + 80))(v6, 0) )
            return v7;
        }
      }
      v8 = dword_6F37A4;
      if ( dword_6F37A4 && CWidget::GetEnabled((CWidget *)dword_6F37A4) == 1 )
        return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v8 + 80))(v8, 0) == 0;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    CWidget::SetEnabled(a1, 0);
    return 0;
  }
}


// ============================================================

// Address: 0x2c039c
// Original: _ZN24CWidgetRegionDriveHybrid4DrawEv
// Demangled: CWidgetRegionDriveHybrid::Draw(void)
int __fastcall CWidgetRegionDriveHybrid::Draw(CWidgetRegionDriveHybrid *this)
{
  int result; // r0
  CVehicle *PlayerVehicle; // r5
  const CPed *PlayerPed; // r0
  _BYTE v5[4]; // [sp+4h] [bp-34h] BYREF
  float v6; // [sp+8h] [bp-30h] BYREF
  float v7; // [sp+Ch] [bp-2Ch]
  float v8; // [sp+10h] [bp-28h]
  float v9; // [sp+14h] [bp-24h]
  float v10; // [sp+18h] [bp-20h] BYREF
  float v11; // [sp+1Ch] [bp-1Ch]
  float v12; // [sp+20h] [bp-18h]
  float v13; // [sp+24h] [bp-14h]

  result = *((unsigned __int8 *)this + 77);
  if ( result )
  {
    result = *((_DWORD *)this + 36);
    if ( result >= 2 )
    {
      result = FindPlayerVehicle(-1, 0);
      if ( result )
      {
        PlayerVehicle = (CVehicle *)FindPlayerVehicle(-1, 0);
        PlayerPed = (const CPed *)FindPlayerPed(-1);
        result = CVehicle::IsDriver(PlayerVehicle, PlayerPed);
        if ( result == 1 )
        {
          v11 = (float)dword_9FC904 + (float)((float)dword_9FC904 * -0.02);
          v12 = (float)dword_9FC900 + (float)((float)dword_9FC900 * -0.015);
          v13 = v11 + (float)((float)dword_9FC904 * -0.0835);
          v10 = v12 + (float)((float)dword_9FC900 * -0.0625);
          CRGBA::CRGBA((CRGBA *)&v6, 0xFFu, 0xFFu, 0xFFu, (unsigned int)(float)((float)*((int *)this + 36) * 2.55));
          CSprite2d::Draw((char *)this + 152, &v10, &v6);
          v8 = (float)dword_9FC900;
          v7 = (float)dword_9FC904;
          v6 = (float)dword_9FC900 + (float)((float)dword_9FC900 * -0.125);
          v9 = v7 + (float)(v7 * -0.167);
          CRGBA::CRGBA((CRGBA *)v5, 0xFFu, 0xFFu, 0xFFu, *((_BYTE *)this + 144));
          return CSprite2d::Draw((char *)this + 148, &v6, v5);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x2c04f8
// Original: _ZN24CWidgetRegionDriveHybridD2Ev
// Demangled: CWidgetRegionDriveHybrid::~CWidgetRegionDriveHybrid()
void __fastcall CWidgetRegionDriveHybrid::~CWidgetRegionDriveHybrid(CWidgetRegionDriveHybrid *this)
{
  CSprite2d *v2; // r5

  *(_DWORD *)this = &off_66463C;
  v2 = (CWidgetRegionDriveHybrid *)((char *)this + 148);
  CSprite2d::~CSprite2d((CWidgetRegionDriveHybrid *)((char *)this + 152));
  CSprite2d::~CSprite2d(v2);
  j_CWidget::~CWidget(this);
}


// ============================================================

// Address: 0x2c0528
// Original: _ZN24CWidgetRegionDriveHybridD0Ev
// Demangled: CWidgetRegionDriveHybrid::~CWidgetRegionDriveHybrid()
void __fastcall CWidgetRegionDriveHybrid::~CWidgetRegionDriveHybrid(CWidgetRegionDriveHybrid *this)
{
  CSprite2d *v2; // r5
  void *v3; // r0

  *(_DWORD *)this = &off_66463C;
  v2 = (CWidgetRegionDriveHybrid *)((char *)this + 148);
  CSprite2d::~CSprite2d((CWidgetRegionDriveHybrid *)((char *)this + 152));
  CSprite2d::~CSprite2d(v2);
  CWidget::~CWidget(this);
  operator delete(v3);
}


// ============================================================

// Address: 0x2c055c
// Original: _ZN24CWidgetRegionDriveHybrid7GetNameEv
// Demangled: CWidgetRegionDriveHybrid::GetName(void)
char *__fastcall CWidgetRegionDriveHybrid::GetName(CWidgetRegionDriveHybrid *this)
{
  return "Drive Hybrid";
}


// ============================================================
