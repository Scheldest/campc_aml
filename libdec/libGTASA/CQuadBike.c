
// Address: 0x199494
// Original: j__ZN9CQuadBikeC2Eih
// Demangled: CQuadBike::CQuadBike(int,uchar)
// attributes: thunk
void __fastcall CQuadBike::CQuadBike(CQuadBike *this, int a2, unsigned __int8 a3)
{
  _ZN9CQuadBikeC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x57a18c
// Original: _ZN9CQuadBikeC2Eih
// Demangled: CQuadBike::CQuadBike(int,uchar)
void __fastcall CQuadBike::CQuadBike(CQuadBike *this, int a2, unsigned __int8 a3)
{
  float v5; // r2
  float v6; // r0
  int v7; // r0
  CPlaceName *v8; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r2
  char v12; // r0

  CAutomobile::CAutomobile(this, a2, a3, 0);
  *(_DWORD *)this = &off_66DEBC;
  CRideAnimData::CRideAnimData((CQuadBike *)((char *)this + 2464));
  v5 = *(float *)this;
  v6 = CModelInfo::ms_modelInfoPtrs[a2];
  *((_DWORD *)this + 616) = 10;
  v7 = *(unsigned __int16 *)(LODWORD(v6) + 98);
  *(_QWORD *)((char *)this + 2492) = 0LL;
  *(_QWORD *)((char *)this + 2500) = 0LL;
  v8 = (CPlaceName *)&mod_HandlingManager[8 * v7];
  sub_3F65DE(v8, COERCE_FLOAT(mod_HandlingManager), v5);
  *((_DWORD *)this + 361) = v9;
  *((_DWORD *)this + 615) = (char *)v8 + v10;
  (*(void (__fastcall **)(CQuadBike *))(v11 + 196))(this);
  v12 = *((_BYTE *)this + 2508);
  *((_DWORD *)this + 294) = 0;
  *((_BYTE *)this + 2508) = v12 & 0xFE;
}


// ============================================================

// Address: 0x57a21c
// Original: _ZN9CQuadBikeD2Ev
// Demangled: CQuadBike::~CQuadBike()
void __fastcall CQuadBike::~CQuadBike(CQuadBike *this)
{
  *(_DWORD *)this = &off_66DEBC;
  CRideAnimData::~CRideAnimData((CQuadBike *)((char *)this + 2464));
  sub_19E4D4(this);
}


// ============================================================

// Address: 0x57a244
// Original: _ZN9CQuadBikeD0Ev
// Demangled: CQuadBike::~CQuadBike()
void __fastcall CQuadBike::~CQuadBike(CQuadBike *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_66DEBC;
  CRideAnimData::~CRideAnimData((CQuadBike *)((char *)this + 2464));
  CAutomobile::~CAutomobile(this);
  sub_199F80(v2);
}


// ============================================================

// Address: 0x57a270
// Original: _ZN9CQuadBike20SetupSuspensionLinesEv
// Demangled: CQuadBike::SetupSuspensionLines(void)
int __fastcall CQuadBike::SetupSuspensionLines(CAutomobile *this)
{
  *((_DWORD *)this + 623) = 1065353216;
  return sub_1917A8(this);
}


// ============================================================

// Address: 0x57a27c
// Original: _ZN9CQuadBike15ResetSuspensionEv
// Demangled: CQuadBike::ResetSuspension(void)
// attributes: thunk
int __fastcall CQuadBike::ResetSuspension(CAutomobile *this)
{
  return sub_19B47C(this);
}


// ============================================================

// Address: 0x57a280
// Original: _ZN9CQuadBike14ProcessControlEv
// Demangled: CQuadBike::ProcessControl(void)
int __fastcall CQuadBike::ProcessControl(CQuadBike *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d3
  float v4; // s20
  float v5; // r5
  float v6; // r9
  float v7; // s18
  float v8; // s0
  float v9; // s0
  float v10; // s2
  float v11; // s22
  float v12; // s24
  float v13; // r8
  float v15; // [sp+10h] [bp-70h] BYREF
  float v16[25]; // [sp+1Ch] [bp-64h] BYREF

  if ( *((unsigned __int8 *)this + 58) <= 7u && bDoQuadDamping )
  {
    v4 = unk_6B1270;
    v5 = *(float *)&vecQuadResistance;
    Multiply3x3((const CVector *)v16, (CQuadBike *)((char *)this + 84));
    if ( *((float *)this + 506) == 1.0 && *((float *)this + 508) == 1.0 )
    {
      v6 = 0.995;
      if ( *((float *)this + 507) >= 1.0 && *((float *)this + 509) >= 1.0 )
      {
        v7 = 0.995;
        goto LABEL_17;
      }
      v7 = 0.995;
      v1.n64_u32[0] = *(_DWORD *)(*((_DWORD *)this + 5) + 24);
      if ( v1.n64_f32[0] <= 0.0 )
      {
LABEL_17:
        v11 = v16[0];
        v12 = v16[1];
        v13 = *(float *)&CTimer::ms_fTimeStep;
        Multiply3x3((const CMatrix *)&v15, *((const CVector **)this + 5));
        powf(v4 * (float)(1.0 / (float)((float)(v12 * v12) + 1.0)), v13);
        CPhysical::ApplyTurnForce();
        Multiply3x3((const CMatrix *)&v15, *((const CVector **)this + 5));
        powf((float)(1.0 / (float)((float)(v11 * (float)(v7 * v11)) + 1.0)) * v6, v13);
        CPhysical::ApplyTurnForce();
        return CAutomobile::ProcessControl(this);
      }
      v2.n64_u32[0] = 1032805417;
      v1.n64_f32[0] = fabsf(*(float *)(*((_DWORD *)this + 615) + 44) - v1.n64_f32[0]) * 0.25;
      v1.n64_f32[0] = v5 - vmin_f32(v1, v2).n64_f32[0];
    }
    else
    {
      v7 = 0.5;
      if ( *((float *)this + 515) != 1.0
        || *((float *)this + 517) != 1.0
        || (v7 = 0.995, v8 = *(float *)(*((_DWORD *)this + 5) + 24), v8 >= 0.0) )
      {
        v6 = v5;
        goto LABEL_17;
      }
      v9 = fabsf(*(float *)(*((_DWORD *)this + 615) + 48) - v8) * 0.3;
      v10 = v9 + 0.9;
      if ( v9 > 0.1 )
        v10 = 1.0;
      v1.n64_f32[0] = v10 * v5;
    }
    v6 = v1.n64_f32[0];
    goto LABEL_17;
  }
  return CAutomobile::ProcessControl(this);
}


// ============================================================

// Address: 0x57a56c
// Original: _ZN9CQuadBike9ProcessAIERj
// Demangled: CQuadBike::ProcessAI(uint &)
int __fastcall CQuadBike::ProcessAI(CQuadBike *this, unsigned int *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  int v6; // r0
  int v7; // r1
  CPed *v8; // r0
  __int64 v9; // d16
  CPed *v10; // r0
  int v11; // r1
  CPad *PadFromPlayer; // r5
  float v14; // s2
  float v15; // s0
  CHID *SteeringLeftRight; // r0
  float v17; // s18
  int v18; // r0
  float v19; // s0
  float v20; // s2
  float v21; // r0

  if ( *((unsigned __int8 *)this + 58) < 8u )
  {
    CEntity::GetColModel(this);
    v6 = *((char *)this + 1064);
    *(_WORD *)((char *)this + 991) &= 0xFFFCu;
    if ( v6 >= 0 && !CVehicleRecording::bUseCarAI[v6] )
      return 0;
    v7 = *((_DWORD *)this + 226);
    v8 = (CPed *)*((_DWORD *)this + 281);
    v9 = *(_QWORD *)(v7 + 20);
    *((_DWORD *)this + 44) = *(_DWORD *)(v7 + 28);
    *((_QWORD *)this + 21) = v9;
    if ( !v8 || CPed::IsPlayer(v8) != 1 )
      return 0;
    CEntity::PruneReferences(this);
    if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 4), 809)
      || CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 4), 823)
      || CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 281) + 1088) + 4), 825)
      || (v10 = (CPed *)*((_DWORD *)this + 281), *((_DWORD *)v10 + 275) == 63) )
    {
      v11 = *((_DWORD *)this + 267);
      *((_DWORD *)this + 296) = 0;
      *((_DWORD *)this + 297) = 1065353216;
      *((_DWORD *)this + 267) = v11 | 0x20;
      return 0;
    }
    if ( v10 && CPed::IsPlayer(v10) == 1 )
    {
      (*(void (__fastcall **)(CQuadBike *, _DWORD))(*(_DWORD *)this + 100))(
        this,
        *(unsigned __int8 *)(*((_DWORD *)this + 281) + 1436));
      PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(*((CPlayerPed **)this + 281));
    }
    else
    {
      PadFromPlayer = 0;
    }
    v14 = (float)((float)(*((float *)this + 21) * **((float **)this + 5))
                + (float)(*((float *)this + 22) * *(float *)(*((_DWORD *)this + 5) + 4)))
        + (float)(*((float *)this + 23) * *(float *)(*((_DWORD *)this + 5) + 8));
    v15 = *((float *)this + 620);
    if ( v15 >= 0.0 || v14 >= *(float *)(*((_DWORD *)this + 615) + 12) )
    {
      if ( v15 <= 0.0 || v14 <= (float)-*(float *)(*((_DWORD *)this + 615) + 4) )
      {
LABEL_29:
        if ( *((float *)this + 506) != 1.0
          || *((float *)this + 507) != 1.0
          || *((float *)this + 508) != 1.0
          || !PadFromPlayer
          || *((float *)this + 509) != 1.0 )
        {
          goto LABEL_45;
        }
        SteeringLeftRight = (CHID *)CPad::GetSteeringLeftRight(PadFromPlayer);
        v17 = (float)(int)SteeringLeftRight * 0.0078125;
        if ( CHID::GetInputType(SteeringLeftRight) == 2 && fabsf(v17) < 0.05 )
        {
          v4.n64_u32[0] = -1.5;
          v2.n64_f32[0] = *(float *)&dword_959B00 * 0.01;
          v3.n64_u32[0] = 1.5;
          LODWORD(v17) = vmin_f32(vmax_f32(v2, v4), v3).n64_u32[0];
        }
        if ( (*((_BYTE *)this + 1068) & 0x20) != 0 )
        {
          if ( v17 >= 0.0 && v17 <= 0.0 )
            goto LABEL_45;
        }
        else if ( CPad::GetAccelerate(PadFromPlayer) || v17 >= 0.0 && v17 <= 0.0 )
        {
          goto LABEL_45;
        }
        CPhysical::ApplyTurnForce();
LABEL_45:
        v18 = *((_DWORD *)this + 615);
        v19 = (float)(*(float *)(*((_DWORD *)this + 226) + 160) * -3.1416) / 180.0;
        v20 = *(float *)(v18 + 24) * *((float *)this + 294);
        v21 = powf(*(float *)(v18 + 28), *(float *)&CTimer::ms_fTimeStep);
        *((float *)this + 618) = (float)(v21 * *((float *)this + 618))
                               + (float)((float)(1.0 - v21) * (float)(v20 / v19));
        CVehicle::DoDriveByShootings(this);
        if ( byte_79681D )
          (*(void (__fastcall **)(CQuadBike *))(*(_DWORD *)this + 280))(this);
        return 0;
      }
      if ( !*((_BYTE *)this + 2420) || *((float *)this + 297) <= 0.0 )
      {
LABEL_28:
        CPhysical::ApplyTurnForce();
        goto LABEL_29;
      }
    }
    else if ( !*((_BYTE *)this + 2420) || *((float *)this + 297) != 0.0 || (*((_BYTE *)this + 1068) & 0x20) != 0 )
    {
      goto LABEL_28;
    }
    v4.n64_u32[0] = 1036831949;
    v3.n64_f32[0] = sqrtf(
                      (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                            + (float)(*((float *)this + 19) * *((float *)this + 19)))
                    + (float)(*((float *)this + 20) * *((float *)this + 20)));
    v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
    goto LABEL_28;
  }
  return sub_196F50(this, a2);
}


// ============================================================

// Address: 0x57ab44
// Original: _ZN9CQuadBike20ProcessControlInputsEh
// Demangled: CQuadBike::ProcessControlInputs(uchar)
int __fastcall CQuadBike::ProcessControlInputs(CQuadBike *this, CPad *a2)
{
  int v4; // r1
  CPad *Pad; // r0
  float *v6; // r5
  float v7; // s6
  int v8; // r1
  float v9; // s0
  float v10; // s2
  bool v11; // fzf
  bool v12; // fnf
  float v13; // s2
  int result; // r0

  CAutomobile::ProcessControlInputs(this, a2);
  Pad = (CPad *)CPad::GetPad(a2, v4);
  v6 = (float *)((char *)this + 2480);
  v7 = -1.0;
  v9 = *v6
     + (float)(*(float *)&CTimer::ms_fTimeStep
             * (float)((float)((float)((float)-CPad::GetSteeringUpDown(Pad) * 0.0078125) - *v6) * 0.2));
  v10 = -1.0;
  v11 = v9 == -1.0;
  v12 = v9 < -1.0;
  if ( v9 >= 1.0 )
    v10 = 1.0;
  if ( !v12 && !v11 )
    v7 = v10;
  v13 = v7;
  if ( !v12 && !v11 )
    v13 = v9;
  if ( v9 >= 1.0 )
    v13 = v7;
  *v6 = v13;
  result = *(unsigned __int16 *)(CPad::GetPad(a2, v8) + 272);
  if ( result )
  {
    result = 0;
    *v6 = 0.0;
  }
  return result;
}


// ============================================================

// Address: 0x57abf8
// Original: _ZN9CQuadBike17ProcessSuspensionEv
// Demangled: CQuadBike::ProcessSuspension(void)
// attributes: thunk
int __fastcall CQuadBike::ProcessSuspension(CAutomobile *this)
{
  return sub_19D330(this);
}


// ============================================================

// Address: 0x57abfc
// Original: _ZN9CQuadBike19ProcessDrivingAnimsEP4CPedh
// Demangled: CQuadBike::ProcessDrivingAnims(CPed *,uchar)
int __fastcall CQuadBike::ProcessDrivingAnims(CQuadBike *this, CPed *a2, unsigned __int8 a3)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 30) << 30;
  if ( result >= 0 )
    return CBike::ProcessRiderAnims();
  return result;
}


// ============================================================

// Address: 0x57ac28
// Original: _ZN9CQuadBike9PreRenderEv
// Demangled: CQuadBike::PreRender(void)
void __fastcall CQuadBike::PreRender(CQuadBike *this)
{
  CVehicleModelInfo *v2; // r10
  float v3; // s16
  float v4; // s18
  float v5; // s20
  float v6; // r0
  float v7; // s16
  float v8; // s18
  float v9; // s20
  float v10; // r0
  float v11; // s16
  float v12; // s18
  float v13; // s20
  int v14; // [sp+14h] [bp-84h] BYREF
  float v15; // [sp+1Ch] [bp-7Ch]
  _BYTE v16[48]; // [sp+20h] [bp-78h] BYREF
  float v17; // [sp+50h] [bp-48h]
  float v18; // [sp+54h] [bp-44h]
  float v19; // [sp+58h] [bp-40h]
  int v20; // [sp+60h] [bp-38h]
  int v21; // [sp+64h] [bp-34h]

  CAutomobile::PreRender(this);
  v2 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  v20 = 0;
  v21 = 0;
  CVehicleModelInfo::GetWheelPosn(v2, 1, (CVector *)&v14, 0);
  CVehicle::SetTransmissionRotation();
  CVehicleModelInfo::GetWheelPosn(v2, 0, (CVector *)&v14, 0);
  if ( *((_DWORD *)this + 422) )
  {
    CMatrix::Attach();
    v3 = v17;
    v4 = v18;
    v5 = v19;
    v6 = atan2f(*((float *)this + 531) - v15, COERCE_FLOAT(v14 & 0x7FFFFFFF));
    CMatrix::SetRotateY((CMatrix *)v16, v6);
    v17 = v3 + v17;
    v18 = v4 + v18;
    v19 = v5 + v19;
    CMatrix::UpdateRW((CMatrix *)v16);
  }
  if ( *((_DWORD *)this + 421) )
  {
    CMatrix::Attach();
    v7 = v17;
    v8 = v18;
    v9 = v19;
    v10 = atan2f(*((float *)this + 533) - v15, COERCE_FLOAT(v14 & 0x7FFFFFFF));
    CMatrix::SetRotateY((CMatrix *)v16, COERCE_FLOAT(LODWORD(v10) ^ 0x80000000));
    v17 = v7 + v17;
    v18 = v8 + v18;
    v19 = v9 + v19;
    CMatrix::UpdateRW((CMatrix *)v16);
  }
  if ( *((_DWORD *)this + 424) )
  {
    CMatrix::Attach();
    v11 = v17;
    v12 = v18;
    v13 = v19;
    CMatrix::SetRotateZ((CMatrix *)v16, QUAD_HBSTEER_ANIM_MULT * *((float *)this + 621));
    v17 = v11 + v17;
    v18 = v12 + v18;
    v19 = v13 + v19;
    CMatrix::UpdateRW((CMatrix *)v16);
  }
  CMatrix::~CMatrix((CMatrix *)v16);
}


// ============================================================

// Address: 0x57adf4
// Original: _ZN9CQuadBike3FixEv
// Demangled: CQuadBike::Fix(void)
int __fastcall CQuadBike::Fix(CQuadBike *this)
{
  CDamageManager *v2; // r4
  int v3; // r0

  v2 = (CQuadBike *)((char *)this + 1460);
  CDamageManager::ResetDamageStatus((CQuadBike *)((char *)this + 1460));
  CDamageManager::SetDoorStatus(v2, 2, 4);
  CDamageManager::SetDoorStatus(v2, 3, 4);
  CDamageManager::SetDoorStatus(v2, 4, 4);
  CDamageManager::SetDoorStatus(v2, 5, 4);
  v3 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 267) &= ~0x10000u;
  RpClumpForAllAtomics(v3, CVehicleModelInfo::HideAllComponentsAtomicCB, 2);
  CDamageManager::SetWheelStatus(v2, 0, 0);
  CDamageManager::SetWheelStatus(v2, 1, 0);
  CDamageManager::SetWheelStatus(v2, 2, 0);
  return j_CDamageManager::SetWheelStatus(v2, 3, 0);
}


// ============================================================

// Address: 0x57ae78
// Original: _ZN9CQuadBike20SetupDamageAfterLoadEv
// Demangled: CQuadBike::SetupDamageAfterLoad(void)
int __fastcall CQuadBike::SetupDamageAfterLoad(CQuadBike *this)
{
  int result; // r0

  if ( *((_DWORD *)this + 419) )
    CAutomobile::SetBumperDamage(this, 5, 0);
  result = *((_DWORD *)this + 420);
  if ( result )
    return sub_190F88();
  return result;
}


// ============================================================

// Address: 0x57aea6
// Original: _ZN9CQuadBike15GetRideAnimDataEv
// Demangled: CQuadBike::GetRideAnimData(void)
char *__fastcall CQuadBike::GetRideAnimData(CQuadBike *this)
{
  return (char *)this + 2464;
}


// ============================================================
