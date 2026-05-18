
// Address: 0x18ee50
// Original: j__ZN20CTaskSimpleGoToPointD2Ev
// Demangled: CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint()
// attributes: thunk
void __fastcall CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint(CTaskSimpleGoToPoint *this)
{
  _ZN20CTaskSimpleGoToPointD2Ev(this);
}


// ============================================================

// Address: 0x195410
// Original: j__ZN20CTaskSimpleGoToPointC2EiRK7CVectorfbb
// Demangled: CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(int,CVector const&,float,bool,bool)
// attributes: thunk
void __fastcall CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
        CTaskSimpleGoToPoint *this,
        int a2,
        const CVector *a3,
        float a4,
        bool a5,
        bool a6)
{
  _ZN20CTaskSimpleGoToPointC2EiRK7CVectorfbb(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19a470
// Original: j__ZN20CTaskSimpleGoToPointD2Ev_0
// Demangled: CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint()
// attributes: thunk
void __fastcall CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint(CTaskSimpleGoToPoint *this)
{
  _ZN20CTaskSimpleGoToPointD2Ev(this);
}


// ============================================================

// Address: 0x51c7e0
// Original: _ZN20CTaskSimpleGoToPointD2Ev
// Demangled: CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint()
// attributes: thunk
void __fastcall CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint(CTaskSimpleGoToPoint *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x51ca8c
// Original: _ZN20CTaskSimpleGoToPointC2EiRK7CVectorfbb
// Demangled: CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(int,CVector const&,float,bool,bool)
void __fastcall CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
        CTaskSimpleGoToPoint *this,
        int a2,
        const CVector *a3,
        float a4,
        bool a5,
        bool a6)
{
  int v9; // r0
  int v10; // r1
  char v11; // r3
  __int64 v12; // d16

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)v9 = &off_66C0B0;
  v10 = *((_DWORD *)a3 + 2);
  v11 = *(_BYTE *)(v9 + 29);
  v12 = *(_QWORD *)a3;
  LOBYTE(a3) = *(_BYTE *)(v9 + 28);
  *(_DWORD *)(v9 + 20) = v10;
  *(_DWORD *)v9 = &off_66C0E4;
  *(float *)(v9 + 24) = a4;
  *(_BYTE *)(v9 + 29) = a5 | (8 * a6) | v11 & 0xE0;
  *(_BYTE *)(v9 + 28) = (unsigned __int8)a3 & 0xC0;
  *(_QWORD *)(v9 + 12) = v12;
}


// ============================================================

// Address: 0x51caf0
// Original: _ZN20CTaskSimpleGoToPointD0Ev
// Demangled: CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint()
void __fastcall CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint(CTaskSimpleGoToPoint *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x51cb00
// Original: _ZN20CTaskSimpleGoToPoint13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGoToPoint::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGoToPoint::MakeAbortable(CTaskSimpleGoToPoint *this, CPed *a2, int a3, const CEvent *a4)
{
  CTaskSimpleStandStill *v7; // r0
  _BYTE v9[48]; // [sp+8h] [bp-30h] BYREF

  if ( (*((_BYTE *)this + 28) & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    *((_BYTE *)this + 29) |= 2u;
    return 0;
  }
  else
  {
    if ( a3 == 2 )
    {
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v9, 0, 0, 0, 8.0);
      CTaskSimpleStandStill::ProcessPed(v7, a2);
      CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v9);
    }
    return 1;
  }
}


// ============================================================

// Address: 0x51cb7c
// Original: _ZN20CTaskSimpleGoToPoint10ProcessPedEP4CPed
// Demangled: CTaskSimpleGoToPoint::ProcessPed(CPed *)
int __fastcall CTaskSimpleGoToPoint::ProcessPed(CTaskSimpleGoToPoint *this, CPed *a2)
{
  int v4; // r0
  float32x2_t *v5; // r9
  int v6; // r1
  char v7; // r2
  float *v8; // r0
  float v9; // s2
  float v10; // s0
  float v11; // s4
  char v12; // r0
  float v13; // s2
  char v14; // r0
  int v15; // r0
  char v16; // r1
  bool v17; // zf
  _DWORD *v18; // r8
  int v19; // r0
  float32x2_t *v20; // r0
  float v21; // s22
  float32x2_t v22; // d8
  float v23; // s24
  unsigned __int64 v24; // d0
  float v25; // s26
  float v26; // s0
  float v27; // s18
  float v28; // s20
  int v29; // r1
  __int64 v31; // r2
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r10
  int v36; // r4
  CPed *v37; // r0
  int v38; // r1
  CPlayerPed *v39; // r0
  CVector *v40; // r1
  char v41; // r0
  float v42; // s0
  float32x2_t v43; // d17
  float32x2_t v44; // d16
  float32x2_t v45; // d18
  unsigned __int64 v46; // d0
  bool v47; // nf
  const float *v48; // r1
  float32x2_t v49; // d18
  unsigned __int64 v50; // d0
  char v51; // r1
  CGeneral *RadianAngleBetweenPoints; // r0
  float v53; // r1
  char v54; // r1
  CAnimBlendAssocGroup *v55; // r10
  int v56; // r4
  float v57; // [sp+0h] [bp-50h]

  v4 = *((_DWORD *)a2 + 333);
  v5 = (float32x2_t *)((char *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *((_BYTE *)a2 + 1168);
  *((_DWORD *)a2 + 333) = v4 | 8;
  v8 = (float *)v5;
  if ( v6 )
    v8 = (float *)(v6 + 48);
  v9 = *v8;
  v10 = v8[1];
  if ( (v7 & 0x40) == 0 && fabsf(v8[2] - *((float *)this + 5)) >= 2.0 )
    goto LABEL_19;
  v11 = *((float *)this + 3);
  if ( v9 >= v11 )
  {
    if ( v9 <= v11 )
      goto LABEL_10;
    v12 = 2;
  }
  else
  {
    v12 = 1;
  }
  *((_BYTE *)this + 28) = (v12 | *((_BYTE *)this + 28)) & 0xF | *((_BYTE *)this + 28) & 0xF0;
LABEL_10:
  v13 = *((float *)this + 4);
  if ( v10 < v13 )
  {
    v14 = 4;
LABEL_14:
    v15 = ((unsigned __int8)v14 | *((_BYTE *)this + 28)) & 0xF | (16 * (*((unsigned __int8 *)this + 28) >> 4));
    *((_BYTE *)this + 28) = v15;
    goto LABEL_16;
  }
  if ( v10 > v13 )
  {
    v14 = 8;
    goto LABEL_14;
  }
  LOBYTE(v15) = *((_BYTE *)this + 28);
LABEL_16:
  v16 = v15 & 0xF;
  v17 = (v15 & 0xF) == 15;
  if ( (v15 & 0xF) == 0xF )
  {
    v16 = *((_BYTE *)this + 29);
    v17 = (v16 & 0x10) == 0;
  }
  if ( v17 )
  {
    *((_BYTE *)this + 29) = v16 | 4;
    if ( (v15 & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      goto LABEL_28;
    return 1;
  }
LABEL_19:
  v18 = (_DWORD *)((char *)a2 + 1156);
  v19 = *((_DWORD *)a2 + 291);
  if ( (v19 & 8) != 0 )
  {
    CEventScanner::ScanForEventsNow((CEventScanner *)(*((_DWORD *)a2 + 272) + 400), a2, 0);
    v29 = -9;
  }
  else
  {
    if ( (v19 & 0x80) == 0 )
    {
      v20 = (float32x2_t *)*((_DWORD *)a2 + 5);
      if ( v20 )
        v5 = v20 + 6;
      v21 = *((float *)this + 5);
      v22.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 12), (float32x2_t)v5->n64_u64[0]).n64_u64[0];
      v23 = v5[1].n64_f32[0];
      v24 = vmul_f32(v22, v22).n64_u64[0];
      v25 = *(float *)&v24 + *((float *)&v24 + 1);
      if ( (float)(*(float *)&v24 + *((float *)&v24 + 1)) <= 0.0 )
      {
        v28 = 1.0;
        v27 = v22.n64_f32[1];
      }
      else
      {
        v26 = 1.0 / sqrtf(v25);
        v27 = v22.n64_f32[1] * v26;
        v28 = v22.n64_f32[0] * v26;
      }
      if ( CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0) )
      {
        CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0);
        CTaskSimpleDuck::ControlDuckMove();
        goto LABEL_54;
      }
      CPed::SetMoveState(a2, *((_DWORD *)this + 2));
      if ( CPed::IsPlayer(a2) != 1 )
      {
        (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
LABEL_54:
        v41 = *((_BYTE *)this + 29);
        v42 = *((float *)this + 6) * *((float *)this + 6);
        v43.n64_u64[0] = *(_QWORD *)((unsigned __int64)this + 32);
        v44.n64_u64[0] = *(unsigned __int64 *)((char *)this + 12);
        v45.n64_u64[0] = v5->n64_u64[0];
        *((_DWORD *)this + 10) = v5[1].n64_u32[0];
        *((float32x2_t *)this + 4) = v45;
        if ( v25 >= v42
          || (v41 & 0x10) != 0
          || fabsf(v23 - v21) >= 2.0 && (*((_DWORD *)a2 + 292) & 0x40) == 0
          || (v46 = vmul_f32(v22, vsub_f32(v44, v43)).n64_u64[0], (float)(*(float *)&v46 + *((float *)&v46 + 1)) >= 0.0)
          && (v41 & 8) != 0 )
        {
          v47 = (v41 & 8) != 0;
          if ( (v41 & 8) == 0 )
            v47 = (v41 & 0x10) != 0;
          if ( !v47 )
          {
            v48 = (const float *)&CTimer::ms_fTimeStep;
            v49.n64_u64[0] = vld1_dup_f32(v48).n64_u64[0];
            v50 = vmul_f32(
                    v22,
                    vsub_f32(v44, vadd_f32(vmul_f32(v49, *((float32x2_t *)a2 + 9)), (float32x2_t)v5->n64_u64[0]))).n64_u64[0];
            if ( (float)(*(float *)&v50 + *((float *)&v50 + 1)) <= 0.0 )
            {
              v51 = *((_BYTE *)this + 28);
              *((_BYTE *)this + 29) = v41 | 4;
              if ( (v51 & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
              {
LABEL_28:
                IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
                return 1;
              }
              return 1;
            }
          }
          if ( (v41 & 2) == 0 )
          {
            RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                     (CGeneral *)LODWORD(v28),
                                                     v27,
                                                     0.0,
                                                     0.0,
                                                     v57);
            *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v53);
            goto LABEL_31;
          }
          if ( (*((_BYTE *)this + 28) & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
            goto LABEL_28;
        }
        else
        {
          v54 = *((_BYTE *)this + 28);
          *((_BYTE *)this + 29) = v41 | 4;
          if ( (v54 & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
            goto LABEL_28;
        }
        return 1;
      }
      if ( *(_WORD *)(CPad::GetPad(0, v34) + 272) )
        goto LABEL_51;
      if ( (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 25) & 2) != 0
        || CPedIntelligence::GetTaskHold(*((CPedIntelligence **)a2 + 272), 0)
        && *(_DWORD *)(CPedIntelligence::GetTaskHold(*((CPedIntelligence **)a2 + 272), 0) + 56)
        || *(_BYTE *)(*((_DWORD *)a2 + 273) + 132)
        || (v35 = *((_DWORD *)a2 + 312),
            v36 = CAnimManager::ms_aAnimAssocGroups,
            SurfaceInfos_c::CantSprintOn((SurfaceInfos_c *)&g_surfaceInfos, *((unsigned __int8 *)a2 + 190)))
        || (v55 = (CAnimBlendAssocGroup *)(v36 + 20 * v35),
            v56 = *(_DWORD *)(CAnimBlendAssocGroup::GetAnimation(v55, 1u) + 16),
            v56 == *(_DWORD *)(CAnimBlendAssocGroup::GetAnimation(v55, 2u) + 16))
        || COERCE_FLOAT(CPlayerPed::ControlButtonSprint()) < 1.0 )
      {
        if ( *((_DWORD *)a2 + 276) != 7 )
          goto LABEL_50;
        v37 = a2;
        v38 = 6;
      }
      else
      {
        v37 = a2;
        v38 = 7;
      }
      CPed::SetMoveState(v37, v38);
LABEL_50:
      if ( *((unsigned __int8 *)this + 29) << 31 )
      {
        v39 = a2;
        v40 = (CTaskSimpleGoToPoint *)((char *)this + 12);
        goto LABEL_52;
      }
LABEL_51:
      v39 = a2;
      v40 = 0;
LABEL_52:
      CPlayerPed::SetPlayerMoveBlendRatio(v39, v40);
      CPlayerPed::SetRealMoveAnim(a2);
      goto LABEL_54;
    }
    CEventScanner::ScanForEventsNow((CEventScanner *)(*((_DWORD *)a2 + 272) + 400), a2, 1);
    v29 = -129;
  }
  LODWORD(v31) = *v18;
  HIDWORD(v31) = *((_DWORD *)a2 + 290);
  v32 = *((_DWORD *)a2 + 292);
  v33 = v29 & *((_DWORD *)a2 + 291);
  *(_QWORD *)v18 = v31;
  *((_DWORD *)a2 + 291) = v33;
  *((_DWORD *)a2 + 292) = v32;
LABEL_31:
  if ( (*((_BYTE *)this + 28) & 0x20) != 0 )
  {
    if ( (*((_BYTE *)this + 28) & 0x10) != 0 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    *((_BYTE *)this + 28) &= ~0x20u;
  }
  CTaskSimpleGoTo::SetUpIK(this, a2);
  *((_BYTE *)this + 29) &= ~0x10u;
  return 0;
}


// ============================================================

// Address: 0x5273d4
// Original: _ZNK20CTaskSimpleGoToPoint5CloneEv
// Demangled: CTaskSimpleGoToPoint::Clone(void)
int __fastcall CTaskSimpleGoToPoint::Clone(CTaskSimpleGoToPoint *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int v5; // r6
  char v6; // r8
  int result; // r0
  __int64 v8; // d16
  char v9; // r3

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_BYTE *)this + 29);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)result = &off_66C0B0;
  LOBYTE(v4) = *(_BYTE *)(result + 29);
  v8 = *(_QWORD *)((char *)this + 12);
  v9 = *(_BYTE *)(result + 28);
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 5);
  *(_DWORD *)result = &off_66C0E4;
  *(_DWORD *)(result + 24) = v5;
  *(_BYTE *)(result + 29) = v6 & 9 | v4 & 0xE0;
  *(_BYTE *)(result + 28) = v9 & 0xC0;
  *(_QWORD *)(result + 12) = v8;
  return result;
}


// ============================================================

// Address: 0x52743c
// Original: _ZNK20CTaskSimpleGoToPoint11GetTaskTypeEv
// Demangled: CTaskSimpleGoToPoint::GetTaskType(void)
int __fastcall CTaskSimpleGoToPoint::GetTaskType(CTaskSimpleGoToPoint *this)
{
  return 900;
}


// ============================================================
