
// Address: 0x18acb8
// Original: j__ZN8CIdleCam22ProcessTargetSelectionEv
// Demangled: CIdleCam::ProcessTargetSelection(void)
// attributes: thunk
int __fastcall CIdleCam::ProcessTargetSelection(CIdleCam *this)
{
  return _ZN8CIdleCam22ProcessTargetSelectionEv(this);
}


// ============================================================

// Address: 0x18c2b0
// Original: j__ZN8CIdleCam9SetTargetEP7CEntity
// Demangled: CIdleCam::SetTarget(CEntity *)
// attributes: thunk
int __fastcall CIdleCam::SetTarget(CEntity **this, CEntity *a2)
{
  return _ZN8CIdleCam9SetTargetEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x18e058
// Original: j__ZN8CIdleCam13IsTargetValidEP7CEntity
// Demangled: CIdleCam::IsTargetValid(CEntity *)
// attributes: thunk
int __fastcall CIdleCam::IsTargetValid(CIdleCam *this, CEntity *a2)
{
  return _ZN8CIdleCam13IsTargetValidEP7CEntity(this, a2);
}


// ============================================================

// Address: 0x18e728
// Original: j__ZN8CIdleCam12ProcessSlerpEPfS0_
// Demangled: CIdleCam::ProcessSlerp(float *,float *)
// attributes: thunk
int __fastcall CIdleCam::ProcessSlerp(CIdleCam *this, float *a2, float *a3)
{
  return _ZN8CIdleCam12ProcessSlerpEPfS0_(this, a2, a3);
}


// ============================================================

// Address: 0x195c24
// Original: j__ZN8CIdleCam14ProcessFOVZoomEf
// Demangled: CIdleCam::ProcessFOVZoom(float)
// attributes: thunk
int __fastcall CIdleCam::ProcessFOVZoom(CIdleCam *this, float a2)
{
  return _ZN8CIdleCam14ProcessFOVZoomEf(this, a2);
}


// ============================================================

// Address: 0x19cb78
// Original: j__ZN8CIdleCam18FinaliseIdleCameraEfff
// Demangled: CIdleCam::FinaliseIdleCamera(float,float,float)
// attributes: thunk
int __fastcall CIdleCam::FinaliseIdleCamera(CIdleCam *this, float a2, float x, float a4)
{
  return _ZN8CIdleCam18FinaliseIdleCameraEfff(this, a2, x, a4);
}


// ============================================================

// Address: 0x3c018c
// Original: _ZN8CIdleCam21IdleCamGeneralProcessEv
// Demangled: CIdleCam::IdleCamGeneralProcess(void)
int __fastcall CIdleCam::IdleCamGeneralProcess(CIdleCam *this)
{
  int result; // r0

  result = byte_9EFB04 & 0xFE;
  byte_9EFB04 &= ~1u;
  if ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) != 4 )
  {
    dword_952D50 = 0;
    byte_9EFB04 = result;
  }
  return result;
}


// ============================================================

// Address: 0x3d23e8
// Original: _ZN8CIdleCam5ResetEb
// Demangled: CIdleCam::Reset(bool)
_DWORD *__fastcall CIdleCam::Reset(CIdleCam *this, int a2)
{
  _DWORD *result; // r0
  int v3; // r4

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 11) = -1082130432;
  *((_DWORD *)this + 13) = -1082130432;
  *((_DWORD *)this + 15) = -1082130432;
  *((_DWORD *)this + 28) = 1116471296;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 3;
  *((_DWORD *)this + 23) = -1082130432;
  *((_DWORD *)this + 24) = -1082130432;
  *((_DWORD *)this + 25) = -1082130432;
  *((_DWORD *)this + 32) = -1082130432;
  *((_DWORD *)this + 9) = 1065353216;
  *((_WORD *)this + 60) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  result = (_DWORD *)((char *)this + 16);
  *result = -1082130432;
  if ( a2 )
  {
    result = (_DWORD *)currentPad;
    v3 = CTimer::m_snTimeInMilliseconds;
    if ( !currentPad )
      result = (_DWORD *)CPad::GetPad(0, (int)&CTimer::m_snTimeInMilliseconds);
    result[77] = v3;
  }
  return result;
}


// ============================================================

// Address: 0x3d34cc
// Original: _ZN8CIdleCam18IsItTimeForIdleCamEv
// Demangled: CIdleCam::IsItTimeForIdleCam(void)
int __fastcall CIdleCam::IsItTimeForIdleCam(CIdleCam *this)
{
  return 0;
}


// ============================================================

// Address: 0x3d34d0
// Original: _ZN8CIdleCam4InitEv
// Demangled: CIdleCam::Init(void)
_DWORD *__fastcall CIdleCam::Init(CIdleCam *this)
{
  _DWORD *result; // r0

  *((_DWORD *)this + 10) = 1202702336;
  *((_DWORD *)this + 5) = 1157234688;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 35) = 1161527296;
  *((_DWORD *)this + 29) = 1148846080;
  *((_DWORD *)this + 31) = 1178304512;
  *((_DWORD *)this + 14) = 1167867904;
  *((_DWORD *)this + 33) = 0x40000000;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 8) = 0x40800000453B8000LL;
  *((_QWORD *)this + 9) = 0x42A0000041700000LL;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 11) = -1082130432;
  *((_DWORD *)this + 13) = -1082130432;
  *((_DWORD *)this + 15) = -1082130432;
  *((_DWORD *)this + 28) = 1116471296;
  *((_DWORD *)this + 20) = 14;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 3;
  *((_DWORD *)this + 23) = -1082130432;
  *((_DWORD *)this + 24) = -1082130432;
  *((_DWORD *)this + 25) = -1082130432;
  *((_DWORD *)this + 26) = 1097859072;
  *((_DWORD *)this + 27) = 1116471296;
  *((_WORD *)this + 60) = 0;
  *((_DWORD *)this + 32) = -1082130432;
  *((_DWORD *)this + 9) = 1065353216;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  result = (_DWORD *)((char *)this + 16);
  *result = -1082130432;
  return result;
}


// ============================================================

// Address: 0x3d3590
// Original: _ZN8CIdleCam7ProcessEv
// Demangled: CIdleCam::Process(void)
int __fastcall CIdleCam::Process(CIdleCam *this, int a2)
{
  int v3; // r5
  int Pad; // r0
  int v6; // r0

  v3 = *((_DWORD *)this + 36);
  Pad = currentPad;
  if ( !currentPad )
    Pad = CPad::GetPad(0, a2);
  if ( v3 == *(_DWORD *)(Pad + 308) )
  {
    *((_DWORD *)this + 37) += (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    return 0;
  }
  else
  {
    v6 = currentPad;
    if ( !currentPad )
      v6 = CPad::GetPad(0, a2);
    *((_QWORD *)this + 18) = *(unsigned int *)(v6 + 308);
    return 0;
  }
}


// ============================================================

// Address: 0x3d3618
// Original: _ZN8CIdleCam20ProcessIdleCamTickerEv
// Demangled: CIdleCam::ProcessIdleCamTicker(void)
int __fastcall CIdleCam::ProcessIdleCamTicker(CIdleCam *this, int a2)
{
  int v3; // r5
  int Pad; // r0
  __int64 v5; // r0
  int v6; // r0

  v3 = *((_DWORD *)this + 36);
  Pad = currentPad;
  if ( !currentPad )
    Pad = CPad::GetPad(0, a2);
  if ( v3 == *(_DWORD *)(Pad + 308) )
  {
    LODWORD(v5) = *((_DWORD *)this + 37)
                + (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    *((_DWORD *)this + 37) = v5;
  }
  else
  {
    v6 = currentPad;
    if ( !currentPad )
      v6 = CPad::GetPad(0, a2);
    v5 = *(unsigned int *)(v6 + 308);
    *((_QWORD *)this + 18) = v5;
  }
  return v5;
}


// ============================================================

// Address: 0x3d369c
// Original: _ZN8CIdleCam15SetTargetPlayerEv
// Demangled: CIdleCam::SetTargetPlayer(void)
int __fastcall CIdleCam::SetTargetPlayer(CEntity **this)
{
  CEntity *PlayerPed; // r0
  int result; // r0

  PlayerPed = (CEntity *)FindPlayerPed(-1);
  CIdleCam::SetTarget(this, PlayerPed);
  result = 1;
  *((_BYTE *)this + 120) = 1;
  return result;
}


// ============================================================

// Address: 0x3d36bc
// Original: _ZN8CIdleCam3RunEv
// Demangled: CIdleCam::Run(void)
int __fastcall CIdleCam::Run(CIdleCam *this)
{
  unsigned int v2; // r5
  float v3; // s16
  float v4; // s18
  int v5; // r0
  float v6; // s4
  float v7; // s0
  float v9; // [sp+0h] [bp-20h] BYREF
  float v10[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = CTimer::m_snTimeInMilliseconds;
  CIdleCam::ProcessTargetSelection(this);
  v3 = *((float *)this + 11);
  v4 = *((float *)this + 35);
  v5 = CIdleCam::ProcessSlerp(this, v10, &v9);
  *((_DWORD *)this + 9) = v5;
  CIdleCam::ProcessFOVZoom(this, *(float *)&v5);
  v6 = 1.0;
  v7 = (float)v2 - v3;
  if ( v7 < v4 )
    v6 = v7 / v4;
  return CIdleCam::FinaliseIdleCamera(this, v10[0], v9, v6);
}


// ============================================================

// Address: 0x3d3730
// Original: _ZN8CIdleCam13IsTargetValidEP7CEntity
// Demangled: CIdleCam::IsTargetValid(CEntity *)
bool __fastcall CIdleCam::IsTargetValid(CIdleCam *this, CEntity *a2)
{
  int v4; // r0
  float *v5; // r1
  unsigned __int64 v6; // d16
  int v7; // r0
  float v8; // s0
  float v9; // s0
  int v10; // r1
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  float v13; // s0
  _BOOL4 result; // r0
  int v15; // r8
  int IsLineOfSightClear; // r0
  __int64 v17; // r0
  bool v18; // [sp+14h] [bp-24h]
  float32x2_t v19; // [sp+18h] [bp-20h] BYREF
  float v20; // [sp+20h] [bp-18h]

  if ( !a2 )
    return 0;
  if ( (CEntity *)FindPlayerPed(-1) == a2 )
    return 1;
  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)(v4 + 48);
  if ( !v4 )
    v5 = (float *)((char *)a2 + 4);
  v6 = *(_QWORD *)v5;
  v20 = v5[2];
  v19.n64_u64[0] = v6;
  if ( (*((_BYTE *)a2 + 58) & 7) == 3 )
  {
    v7 = *((_DWORD *)a2 + 359);
    v8 = 0.5;
    if ( v7 == 5 )
      v8 = 0.1;
    if ( v7 == 22 )
      v8 = 0.1;
    v9 = v20 + v8;
    v20 = v9;
  }
  else
  {
    v9 = v20;
  }
  v10 = *((_DWORD *)this + 38);
  v11.n64_u64[0] = vsub_f32(*(float32x2_t *)(v10 + 372), v19).n64_u64[0];
  v12 = vmul_f32(v11, v11).n64_u64[0];
  v13 = sqrtf(
          (float)(*(float *)&v12 + *((float *)&v12 + 1))
        + (float)((float)(*(float *)(v10 + 380) - v9) * (float)(*(float *)(v10 + 380) - v9)));
  if ( v13 < *((float *)this + 17) || v13 > *((float *)this + 19) )
    return 0;
  result = 1;
  if ( *((float *)this + 9) >= 1.0 )
  {
    v15 = CWorld::pIgnoreEntity;
    CWorld::pIgnoreEntity = (int)a2;
    IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                           (CWorld *)(v10 + 372),
                           (const CVector *)&v19,
                           (const CVector *)((char *)&stderr + 1),
                           0,
                           0,
                           1,
                           0,
                           0,
                           1,
                           v18);
    CWorld::pIgnoreEntity = v15;
    if ( IsLineOfSightClear )
      return 1;
    v17 = *((_QWORD *)this + 10);
    *((_DWORD *)this + 21) = HIDWORD(v17) + 1;
    return SHIDWORD(v17) <= (int)v17;
  }
  return result;
}


// ============================================================

// Address: 0x3d384c
// Original: _ZN8CIdleCam25GetLookAtPositionOnTargetEP7CEntityP7CVector
// Demangled: CIdleCam::GetLookAtPositionOnTarget(CEntity *,CVector *)
int __fastcall CIdleCam::GetLookAtPositionOnTarget(int a1, int a2, int a3)
{
  int v3; // r0
  __int64 *v4; // r3
  __int64 v5; // d16
  int result; // r0
  float v7; // s0

  v3 = *(_DWORD *)(a2 + 20);
  v4 = (__int64 *)(v3 + 48);
  if ( !v3 )
    v4 = (__int64 *)(a2 + 4);
  v5 = *v4;
  *(_DWORD *)(a3 + 8) = *((_DWORD *)v4 + 2);
  *(_QWORD *)a3 = v5;
  result = *(_BYTE *)(a2 + 58) & 7;
  if ( result == 3 )
  {
    result = *(_DWORD *)(a2 + 1436);
    v7 = 0.5;
    if ( result == 5 )
      v7 = 0.1;
    if ( result == 22 )
      v7 = 0.1;
    *(float *)(a3 + 8) = *(float *)(a3 + 8) + v7;
  }
  return result;
}


// ============================================================

// Address: 0x3d38a0
// Original: _ZN8CIdleCam22ProcessTargetSelectionEv
// Demangled: CIdleCam::ProcessTargetSelection(void)
int __fastcall CIdleCam::ProcessTargetSelection(CIdleCam *this)
{
  int PlayerPed; // r8
  float v3; // s16
  int InterestingEvent; // r0
  CEntity *v5; // r5
  float v6; // r9
  int IsTargetValid; // r0
  CEntity *v8; // r0
  CEntity *v9; // r1
  CEntity *v10; // r0
  CEntity *v11; // r0
  int v12; // r0
  CEntity *v13; // r0
  __int64 v14; // r0
  CEntity *v15; // r0

  PlayerPed = FindPlayerPed(-1);
  v3 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds - *((float *)this + 13);
  if ( *((_DWORD *)this + 22) != 3 && *((int *)this + 21) <= 0 )
    v3 = v3 / *((float *)this + 33);
  if ( v3 > *((float *)this + 14) )
  {
    CInterestingEvents::InvalidateNonVisibleEvents((CInterestingEvents *)&g_InterestingEvents);
    InterestingEvent = CInterestingEvents::GetInterestingEvent((CInterestingEvents *)&g_InterestingEvents);
    if ( !InterestingEvent )
    {
      if ( *(_DWORD *)this )
      {
        if ( CIdleCam::IsTargetValid(this, *(CEntity **)this) || *(_DWORD *)this == PlayerPed )
          goto LABEL_20;
      }
      else if ( !PlayerPed )
      {
        goto LABEL_20;
      }
      if ( *((_DWORD *)this + 22) == 3 )
      {
        v8 = (CEntity *)FindPlayerPed(-1);
        CIdleCam::SetTarget((CEntity **)this, v8);
      }
LABEL_19:
      *((_BYTE *)this + 120) = 1;
      goto LABEL_20;
    }
    v5 = *(CEntity **)(InterestingEvent + 8);
    v6 = *(float *)this;
    IsTargetValid = CIdleCam::IsTargetValid(this, v5);
    if ( (CEntity *)LODWORD(v6) != v5 )
    {
      if ( IsTargetValid != 1 )
        goto LABEL_20;
      if ( *((_DWORD *)this + 22) == 3 )
      {
        CIdleCam::SetTarget((CEntity **)this, v5);
        goto LABEL_20;
      }
      goto LABEL_19;
    }
    if ( !IsTargetValid )
      CInterestingEvents::InvalidateEvent();
  }
LABEL_20:
  v9 = *(CEntity **)this;
  if ( !*(_DWORD *)this )
  {
    *(_DWORD *)this = PlayerPed;
    *((_BYTE *)this + 120) = 1;
    v10 = (CEntity *)FindPlayerPed(-1);
    CIdleCam::SetTarget((CEntity **)this, v10);
    v9 = *(CEntity **)this;
    *((_BYTE *)this + 120) = 1;
  }
  if ( !CIdleCam::IsTargetValid(this, v9) && v3 > *((float *)this + 14) )
  {
    if ( *((_DWORD *)this + 22) == 3 )
    {
      v11 = (CEntity *)FindPlayerPed(-1);
      CIdleCam::SetTarget((CEntity **)this, v11);
    }
    v12 = *((_DWORD *)this + 21);
    *((_BYTE *)this + 120) = 1;
    if ( v12 >= 1 )
    {
      v13 = (CEntity *)FindPlayerPed(-1);
      CIdleCam::SetTarget((CEntity **)this, v13);
      *((_BYTE *)this + 120) = 1;
    }
  }
  v14 = *((_QWORD *)this + 10);
  if ( SHIDWORD(v14) > (int)v14 )
  {
    v15 = (CEntity *)FindPlayerPed(-1);
    CIdleCam::SetTarget((CEntity **)this, v15);
    LODWORD(v14) = 1;
    *((_BYTE *)this + 120) = 1;
  }
  return v14;
}


// ============================================================

// Address: 0x3d3a18
// Original: _ZN8CIdleCam9SetTargetEP7CEntity
// Demangled: CIdleCam::SetTarget(CEntity *)
int __fastcall CIdleCam::SetTarget(CEntity **this, CEntity *a2)
{
  float v4; // s16
  CEntity *v5; // r0
  __int64 v6; // d16
  float *v7; // r1
  float v8; // s2
  float v9; // s4
  int result; // r0

  v4 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds;
  v5 = *this;
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 3);
    this[3] = this[8];
    *(_QWORD *)(this + 1) = v6;
    if ( a2 )
    {
LABEL_3:
      if ( v5 )
        CEntity::CleanUpOldReference(v5, this);
      *this = a2;
      CEntity::RegisterReference(a2, this);
      goto LABEL_9;
    }
  }
  else
  {
    v7 = (float *)this[38];
    v8 = v7[94] + v7[91];
    v9 = v7[95] + v7[92];
    *((float *)this + 1) = v7[93] + v7[90];
    *((float *)this + 2) = v8;
    *((float *)this + 3) = v9;
    if ( a2 )
      goto LABEL_3;
  }
  if ( v5 )
  {
    CEntity::CleanUpOldReference(v5, this);
    *this = 0;
  }
LABEL_9:
  result = 0;
  *((float *)this + 13) = v4;
  *((float *)this + 4) = v4;
  this[21] = 0;
  *((_BYTE *)this + 121) = 0;
  return result;
}


// ============================================================

// Address: 0x3d3ab8
// Original: _ZN8CIdleCam12ProcessSlerpEPfS0_
// Demangled: CIdleCam::ProcessSlerp(float *,float *)
float __fastcall CIdleCam::ProcessSlerp(CIdleCam *this, float *a2, float *a3)
{
  float32x2_t v3; // d1
  float v7; // r0
  float v8; // r2
  float *v9; // r3
  float32x2_t v10; // d8
  float v11; // s20
  float v12; // s22
  float v13; // s18
  int v14; // r0
  float v15; // s0
  float *v16; // r0
  float v17; // s26
  float v18; // s28
  float v19; // s30
  float v20; // s19
  float v21; // s24
  float v22; // s2
  float v23; // s20
  float v24; // r0
  float v25; // r10
  float v26; // s18
  float v27; // r2
  float v28; // r4
  float v29; // r2
  float v30; // r0
  float v31; // s22
  float v32; // s20
  float v33; // s24
  float v34; // s2
  float v35; // s2
  float v36; // s4
  float v37; // s26
  float v38; // s0
  float result; // r0
  float v40; // s0

  v7 = *(float *)this;
  v8 = *(float *)(LODWORD(v7) + 20);
  v9 = (float *)(LODWORD(v8) + 48);
  v10.n64_f32[0] = (float)(unsigned int)CTimer::m_snTimeInMilliseconds;
  if ( v8 == 0.0 )
    v9 = (float *)(LODWORD(v7) + 4);
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[2];
  if ( (*(_BYTE *)(LODWORD(v7) + 58) & 7) == 3 )
  {
    v14 = *(_DWORD *)(LODWORD(v7) + 1436);
    v15 = 0.5;
    if ( v14 == 5 )
      v15 = 0.1;
    if ( v14 == 22 )
      v15 = 0.1;
    v13 = v13 + v15;
  }
  if ( *((_DWORD *)this + 21) >= *((_DWORD *)this + 20) )
  {
    v11 = *((float *)this + 6);
    v12 = *((float *)this + 7);
    v13 = *((float *)this + 8);
  }
  v16 = (float *)*((_DWORD *)this + 38);
  v17 = v16[93];
  v18 = v16[94];
  v10.n64_f32[1] = *((float *)this + 1) - v17;
  v19 = v16[95];
  v20 = *((float *)this + 2) - v18;
  v21 = *((float *)this + 3);
  v22 = v11 - v17;
  v23 = COERCE_FLOAT(CGeneral::GetATanOfXY((CGeneral *)v10.n64_u32[1], v20, v8));
  v24 = sqrtf((float)(v10.n64_f32[1] * v10.n64_f32[1]) + (float)(v20 * v20));
  v25 = v13 - v19;
  v26 = COERCE_FLOAT(CGeneral::GetATanOfXY((CGeneral *)LODWORD(v24), v21 - v19, v24));
  v28 = COERCE_FLOAT(CGeneral::GetATanOfXY((CGeneral *)LODWORD(v22), v12 - v18, v27));
  v30 = COERCE_FLOAT(
          CGeneral::GetATanOfXY(
            COERCE_CGENERAL_(sqrtf((float)(v22 * v22) + (float)((float)(v12 - v18) * (float)(v12 - v18)))),
            v25,
            v29));
  v31 = v30;
  v32 = v23 + 3.1416;
  v33 = v28 + 3.1416;
  if ( (float)(v30 - v26) <= 3.1416 )
  {
    if ( (float)(v30 - v26) >= -3.1416 )
      goto LABEL_16;
    v34 = 6.2832;
  }
  else
  {
    v34 = -6.2832;
  }
  v31 = v30 + v34;
LABEL_16:
  if ( (float)(v33 - v32) > 3.1416 )
  {
    v35 = -6.2832;
LABEL_20:
    v33 = v33 + v35;
    goto LABEL_21;
  }
  if ( (float)(v33 - v32) < -3.1416 )
  {
    v35 = 6.2832;
    goto LABEL_20;
  }
LABEL_21:
  v36 = v10.n64_f32[0] - *((float *)this + 13);
  v10.n64_u32[0] = 1.0;
  v3.n64_f32[0] = v36 / *((float *)this + 5);
  v37 = vmin_f32(v3, v10).n64_f32[0];
  v38 = sinf((float)((float)(270.0 - (float)(v37 * 180.0)) * 3.1416) / 180.0) + 1.0;
  result = v37;
  v40 = v38 * 0.5;
  *a2 = v26 + (float)((float)(v31 - v26) * v40);
  *a3 = v32 + (float)((float)(v33 - v32) * v40);
  return result;
}


// ============================================================

// Address: 0x3d3ccc
// Original: _ZN8CIdleCam14ProcessFOVZoomEf
// Demangled: CIdleCam::ProcessFOVZoom(float)
float __fastcall CIdleCam::ProcessFOVZoom(CIdleCam *this, float a2)
{
  float v3; // s16
  float v4; // r0
  float v5; // s18
  int v7; // r1
  float *v8; // r3
  int v9; // r2
  float v10; // s4
  int v11; // r1
  float v12; // s8
  float *v13; // r1
  float v14; // s8
  float v15; // s10
  float v16; // s12
  int v17; // r1
  float v18; // s2
  _BOOL4 v19; // r2
  int v20; // r1
  int v21; // r5
  __int64 v22; // r0
  int v23; // r6
  float v24; // r0
  int v25; // r1
  int v26; // r2
  double v27; // d16
  int v28; // r0
  float v29; // s0
  __int64 v30; // r0
  __int64 v31; // r0
  float v32; // s0
  float result; // r0
  float v34; // s18
  float v35; // s22
  bool v36; // [sp+14h] [bp-44h]
  double v37; // [sp+18h] [bp-40h] BYREF
  float v38; // [sp+20h] [bp-38h]

  v3 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds;
  v4 = *(float *)this;
  v5 = *((float *)this + 26);
  if ( v4 == 0.0 )
  {
    v20 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(LODWORD(v4) + 20);
    v8 = (float *)(v7 + 48);
    if ( !v7 )
      v8 = (float *)(LODWORD(v4) + 4);
    v9 = *(_BYTE *)(LODWORD(v4) + 58) & 7;
    v10 = v8[2];
    if ( v9 == 3 )
    {
      v11 = *(_DWORD *)(LODWORD(v4) + 1436);
      v12 = 0.5;
      if ( v11 == 5 )
        v12 = 0.1;
      if ( v11 == 22 )
        v12 = 0.1;
      v10 = v10 + v12;
    }
    v13 = (float *)*((_DWORD *)this + 38);
    v14 = v13[93];
    v15 = v13[94];
    v16 = v13[95];
    v17 = 0;
    v18 = sqrtf(
            (float)((float)((float)(v14 - *v8) * (float)(v14 - *v8))
                  + (float)((float)(v15 - v8[1]) * (float)(v15 - v8[1])))
          + (float)((float)(v16 - v10) * (float)(v16 - v10)));
    if ( v9 == 3 )
    {
      v19 = *(_DWORD *)(LODWORD(v4) + 1436) == 22 || *(_DWORD *)(LODWORD(v4) + 1436) == 5;
      if ( v19 )
        v5 = v5 * 0.5;
      if ( v18 < 8.0 && v19 )
      {
        v19 = 1;
        *((_BYTE *)this + 120) = 1;
      }
    }
    else
    {
      v19 = 0;
    }
    if ( v18 > *((float *)this + 18) )
      v17 = 1;
    v20 = v17 | v19;
  }
  v21 = *((_DWORD *)this + 22);
  if ( a2 < 1.0 )
    goto LABEL_23;
  if ( v20 != 1 )
  {
    if ( v21 == 2 )
    {
      v30 = *(_QWORD *)((char *)this + 108);
      v21 = 1;
      *((float *)this + 25) = v3;
      *((_DWORD *)this + 22) = 1;
      *((_DWORD *)this + 23) = HIDWORD(v30);
      *((_DWORD *)this + 24) = v30;
    }
    goto LABEL_53;
  }
  if ( (float)(v3 - *((float *)this + 32)) <= *((float *)this + 31) )
  {
LABEL_23:
    HIDWORD(v22) = *((_DWORD *)this + 22);
    goto LABEL_24;
  }
  if ( v4 == 0.0 )
  {
    LODWORD(v22) = 0;
    HIDWORD(v22) = *((_DWORD *)this + 22);
  }
  else
  {
    v23 = CWorld::pIgnoreEntity;
    CWorld::pIgnoreEntity = LODWORD(v4);
    v24 = *(float *)this;
    v25 = *(_DWORD *)(*(_DWORD *)this + 20);
    v26 = v25 + 48;
    if ( !v25 )
      v26 = LODWORD(v24) + 4;
    v27 = *(double *)v26;
    v38 = *(float *)(v26 + 8);
    v37 = v27;
    if ( (*(_BYTE *)(LODWORD(v24) + 58) & 7) == 3 )
    {
      v28 = *(_DWORD *)(LODWORD(v24) + 1436);
      v29 = 0.5;
      if ( v28 == 5 )
        v29 = 0.1;
      if ( v28 == 22 )
        v29 = 0.1;
      v38 = v38 + v29;
    }
    LODWORD(v22) = CWorld::GetIsLineOfSightClear(
                     (CWorld *)(*((_DWORD *)this + 38) + 372),
                     (const CVector *)&v37,
                     (const CVector *)((char *)&stderr + 1),
                     0,
                     0,
                     1,
                     0,
                     0,
                     1,
                     v36) ^ 1;
    CWorld::pIgnoreEntity = v23;
    HIDWORD(v22) = *((_DWORD *)this + 22);
  }
  if ( *((int *)this + 21) >= 11 && HIDWORD(v22) == 2 )
  {
    v21 = 1;
    *((_DWORD *)this + 22) = 1;
LABEL_53:
    LODWORD(v22) = v21 != 2;
    goto LABEL_54;
  }
  if ( HIDWORD(v22) == 3 )
  {
    HIDWORD(v22) = *((unsigned __int8 *)this + 121);
    if ( *((_BYTE *)this + 121) )
      HIDWORD(v22) = 1;
    if ( v22 )
    {
      v21 = 3;
    }
    else
    {
      *((float *)this + 24) = v5;
      *((_DWORD *)this + 22) = 0;
      if ( v21 )
      {
        *((float *)this + 25) = v3;
        *((_DWORD *)this + 23) = *((_DWORD *)this + 28);
      }
      v21 = 0;
    }
    goto LABEL_53;
  }
LABEL_24:
  if ( HIDWORD(v22) == 2 )
  {
    v21 = 2;
    LODWORD(v22) = 0;
    *((float *)this + 32) = v3;
  }
  else
  {
    LODWORD(v22) = 1;
    v21 = HIDWORD(v22);
  }
LABEL_54:
  if ( !*((_BYTE *)this + 120) || (_DWORD)v22 )
  {
    *((_BYTE *)this + 120) = 0;
    switch ( v21 )
    {
      case 0:
        if ( fabsf(*((float *)this + 28) - v5) >= 1.0 )
          goto LABEL_62;
        *((float *)this + 28) = v5;
        *((_DWORD *)this + 22) = 2;
        result = v5;
        *((_BYTE *)this + 121) = 1;
        break;
      case 1:
        goto LABEL_57;
      case 2:
        result = v5;
        *((float *)this + 28) = v5;
        break;
      case 3:
        result = *((float *)this + 27);
        *((float *)this + 28) = result;
        break;
      default:
        result = *((float *)this + 28);
        break;
    }
  }
  else
  {
    v31 = *(_QWORD *)((char *)this + 108);
    *((float *)this + 25) = v3;
    *((_BYTE *)this + 120) = 0;
    *((_DWORD *)this + 22) = 1;
    *((_DWORD *)this + 23) = HIDWORD(v31);
    *((_DWORD *)this + 24) = v31;
LABEL_57:
    v32 = *((float *)this + 27);
    if ( fabsf(*((float *)this + 28) - v32) >= 1.0 )
    {
LABEL_62:
      v34 = *((float *)this + 23);
      v35 = *((float *)this + 24);
      result = v34
             + (float)((float)((float)(sinf(
                                         (float)((float)(270.0
                                                       - (float)((float)((float)(v3 - *((float *)this + 25))
                                                                       / *((float *)this + 29))
                                                               * 180.0))
                                               * 3.1416)
                                       / 180.0)
                                     + 1.0)
                             * 0.5)
                     * (float)(v35 - v34));
      *((float *)this + 28) = result;
    }
    else
    {
      *((float *)this + 28) = v32;
      result = v32;
      *((_DWORD *)this + 22) = 3;
    }
  }
  *(float *)(*((_DWORD *)this + 38) + 140) = result;
  return result;
}


// ============================================================

// Address: 0x3d4024
// Original: _ZN8CIdleCam18FinaliseIdleCameraEfff
// Demangled: CIdleCam::FinaliseIdleCamera(float,float,float)
int __fastcall CIdleCam::FinaliseIdleCamera(CIdleCam *this, float a2, float x, float a4)
{
  float v8; // r9
  float v9; // r10
  float v10; // s0
  float v11; // r0
  float *v12; // r1
  float *v13; // r0
  float v14; // s2
  float v15; // r1
  float v16; // s4
  float v17; // s18
  float v18; // s20
  int v19; // r0
  double v20; // d16
  int v21; // r6
  int v22; // r0
  double v23; // d16
  int v24; // r0
  int v25; // r0
  double v26; // d16
  _DWORD *v27; // r0
  int v28; // r0
  int result; // r0
  double v30; // d16
  double v31; // [sp+0h] [bp-60h] BYREF
  int v32; // [sp+8h] [bp-58h]
  double v33; // [sp+10h] [bp-50h] BYREF
  int v34; // [sp+18h] [bp-48h]
  double v35; // [sp+20h] [bp-40h] BYREF
  int v36; // [sp+28h] [bp-38h]

  v8 = cosf(x);
  v9 = cosf(a2);
  v10 = sinf(x);
  v11 = sinf(a2);
  v12 = (float *)*((_DWORD *)this + 38);
  v12[92] = v11;
  v12[90] = -(float)(v8 * v9);
  v12[91] = -(float)(v9 * v10);
  CVector::Normalise((CVector *)(*((_DWORD *)this + 38) + 360));
  v13 = (float *)*((_DWORD *)this + 38);
  v14 = v13[94] + v13[91];
  v15 = *((float *)this + 34) * a4;
  v16 = v13[95] + v13[92];
  *((float *)this + 6) = v13[93] + v13[90];
  *((float *)this + 7) = v14;
  *((float *)this + 8) = v16;
  CHandShaker::Process((CHandShaker *)gHandShaker, v15);
  v17 = *((float *)this + 34);
  v18 = *(float *)&dword_951C24;
  Multiply3x3((const CVector *)&v35, (const CMatrix *)(*((_DWORD *)this + 38) + 360));
  v19 = *((_DWORD *)this + 38);
  v20 = v35;
  *(_DWORD *)(v19 + 368) = v36;
  *(double *)(v19 + 360) = v20;
  v21 = *((_DWORD *)this + 38);
  *(_DWORD *)(v21 + 400) = 0;
  *(float *)(v21 + 404) = cosf((float)(v18 * v17) * a4);
  *(float *)(v21 + 396) = sinf((float)(v18 * v17) * a4);
  CrossProduct((const CVector *)&v33, (const CVector *)(*((_DWORD *)this + 38) + 360));
  CVector::Normalise((CVector *)&v33);
  CrossProduct((const CVector *)&v31, (const CVector *)&v33);
  v22 = *((_DWORD *)this + 38);
  v23 = v31;
  *(_DWORD *)(v22 + 404) = v32;
  *(double *)(v22 + 396) = v23;
  v24 = *((_DWORD *)this + 38);
  if ( *(float *)(v24 + 360) == 0.0 && *(float *)(v24 + 364) == 0.0 )
  {
    *(_DWORD *)(v24 + 360) = 953267991;
    *(_DWORD *)(*((_DWORD *)this + 38) + 364) = 953267991;
    v24 = *((_DWORD *)this + 38);
  }
  CrossProduct((const CVector *)&v31, (const CVector *)(v24 + 360));
  v34 = v32;
  v33 = v31;
  CVector::Normalise((CVector *)&v33);
  CrossProduct((const CVector *)&v31, (const CVector *)&v33);
  v25 = *((_DWORD *)this + 38);
  v26 = v31;
  *(_DWORD *)(v25 + 404) = v32;
  *(double *)(v25 + 396) = v26;
  v27 = (_DWORD *)*((_DWORD *)this + 38);
  v27[99] = 0;
  v27[100] = 0;
  v27[101] = 1065353216;
  CVector::Normalise((CVector *)(*((_DWORD *)this + 38) + 360));
  v28 = *((_DWORD *)this + 38);
  if ( *(float *)(v28 + 360) == 0.0 && *(float *)(v28 + 364) == 0.0 )
  {
    *(_DWORD *)(v28 + 360) = 953267991;
    *(_DWORD *)(*((_DWORD *)this + 38) + 364) = 953267991;
    v28 = *((_DWORD *)this + 38);
  }
  CrossProduct((const CVector *)&v31, (const CVector *)(v28 + 360));
  v34 = v32;
  v33 = v31;
  CVector::Normalise((CVector *)&v33);
  CrossProduct((const CVector *)&v31, (const CVector *)&v33);
  result = *((_DWORD *)this + 38);
  v30 = v31;
  *(_DWORD *)(result + 404) = v32;
  *(double *)(result + 396) = v30;
  return result;
}


// ============================================================

// Address: 0x3d4650
// Original: _ZN8CIdleCam22VectorToAnglesRotXRotZEP7CVectorPfS2_
// Demangled: CIdleCam::VectorToAnglesRotXRotZ(CVector *,float *,float *)
int __fastcall CIdleCam::VectorToAnglesRotXRotZ(CIdleCam *this, CVector *a2, float *a3, float *a4)
{
  float v6; // r2
  int result; // r0

  *a4 = COERCE_FLOAT(CGeneral::GetATanOfXY(*(CGeneral **)a2, *((float *)a2 + 1), *(float *)&a3)) + 3.1416;
  result = CGeneral::GetATanOfXY(
             COERCE_CGENERAL_(sqrtf((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1)
                                                                                 * *((float *)a2 + 1)))),
             *((float *)a2 + 2),
             v6);
  *(_DWORD *)a3 = result;
  return result;
}


// ============================================================
