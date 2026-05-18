
// Address: 0x529ba4
// Original: _ZN23CTaskInteriorSitInChairC2EiP14InteriorInfo_th
// Demangled: CTaskInteriorSitInChair::CTaskInteriorSitInChair(int,InteriorInfo_t *,uchar)
int __fastcall CTaskInteriorSitInChair::CTaskInteriorSitInChair(CTaskSimple *a1, int a2, int a3, char a4)
{
  int result; // r0

  CTaskSimple::CTaskSimple(a1);
  *(_WORD *)(result + 36) = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_BYTE *)(result + 16) = a4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_WORD *)(result + 40) = 0;
  *(_BYTE *)(result + 42) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_66C8F8;
  return result;
}


// ============================================================

// Address: 0x529be8
// Original: _ZN23CTaskInteriorSitInChairD2Ev
// Demangled: CTaskInteriorSitInChair::~CTaskInteriorSitInChair()
void __fastcall CTaskInteriorSitInChair::~CTaskInteriorSitInChair(CTaskInteriorSitInChair *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C8F8;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x529c1c
// Original: _ZN23CTaskInteriorSitInChairD0Ev
// Demangled: CTaskInteriorSitInChair::~CTaskInteriorSitInChair()
void __fastcall CTaskInteriorSitInChair::~CTaskInteriorSitInChair(CTaskInteriorSitInChair *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C8F8;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x529c54
// Original: _ZNK23CTaskInteriorSitInChair5CloneEv
// Demangled: CTaskInteriorSitInChair::Clone(void)
int __fastcall CTaskInteriorSitInChair::Clone(CTaskInteriorSitInChair *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = *((_QWORD *)this + 1);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 36) = 0;
  *(_QWORD *)(result + 8) = v4;
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_WORD *)(result + 40) = 0;
  *(_BYTE *)(result + 42) = 0;
  *(_QWORD *)(result + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_66C8F8;
  return result;
}


// ============================================================

// Address: 0x529ca0
// Original: _ZN23CTaskInteriorSitInChair13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskInteriorSitInChair::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskInteriorSitInChair::MakeAbortable(
        CTaskInteriorSitInChair *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int result; // r0

  if ( a3 == 2 )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    v6 = *((_DWORD *)this + 5);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -998637568;
      CAnimBlendAssociation::SetDeleteCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      result = 1;
      *((_DWORD *)this + 5) = 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *((_BYTE *)this + 42) = 1;
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x529d04
// Original: _ZN23CTaskInteriorSitInChair10ProcessPedEP4CPed
// Demangled: CTaskInteriorSitInChair::ProcessPed(CPed *)
int __fastcall CTaskInteriorSitInChair::ProcessPed(CTaskInteriorSitInChair *this, CPed *a2)
{
  float32x2_t v2; // d3
  float32x2_t v3; // d5
  int v6; // r0
  int v7; // r6
  int v8; // r6
  CAnimBlendAssociation *v9; // r0
  int v10; // r1
  int *v11; // r0
  int v12; // r8
  int v13; // r6
  int v14; // r9
  float v15; // r1
  int v16; // r1
  CMatrix *v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r1
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r1
  CAnimBlendAssociation *v25; // r0
  unsigned int v26; // r0
  unsigned int v27; // r1
  CAnimBlendAssociation *v28; // r0
  CAnimBlendAssociation *v29; // r0
  int v30; // r0
  float *v31; // r1
  float *v32; // r0
  float *v33; // r2
  float v34; // s0
  float v35; // s2
  float v36; // s4
  float v37; // s8
  float v38; // s2
  float v39; // s0
  float v40; // s6
  float v41; // s2
  float v42; // s0
  float v43; // s4
  float v44; // s6
  float v45; // s0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v47; // r1
  int PedsInteriorGroup; // r0
  int v49; // r1
  int *v50; // r6
  unsigned __int16 v51; // r0
  CAnimBlendAssociation *v53; // r0
  int v54; // [sp+0h] [bp-58h]
  _BYTE v55[4]; // [sp+24h] [bp-34h] BYREF
  int v56; // [sp+28h] [bp-30h] BYREF
  int v57; // [sp+2Ch] [bp-2Ch] BYREF
  int v58; // [sp+30h] [bp-28h]

  v6 = *((_DWORD *)this + 5);
  if ( v6 )
    v7 = *(__int16 *)(v6 + 44);
  else
    v7 = -1;
  CPed::SetMoveState(a2, 1);
  if ( *((_BYTE *)this + 41) && !RpAnimBlendClumpGetAssociation() )
    return 1;
  if ( !*((_BYTE *)this + 42) )
    goto LABEL_17;
  if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 0) )
    return 1;
  switch ( v7 )
  {
    case 345:
      if ( !*((_BYTE *)this + 40) )
      {
        v8 = 0;
        CAnimBlendAssociation::SetDeleteCallback(
          *((CAnimBlendAssociation **)this + 5),
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        v9 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, 0x158u);
        *((_DWORD *)this + 5) = v9;
        CAnimBlendAssociation::SetFinishCallback(
          v9,
          (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitInChair::FinishAnimCB,
          this);
        *((_BYTE *)this + 40) = 1;
        return v8;
      }
      break;
    case 344:
      *(_DWORD *)(*((_DWORD *)this + 5) + 36) = 1077936128;
      break;
    case 343:
      *(_DWORD *)(*((_DWORD *)this + 5) + 28) = -1056964608;
      break;
  }
LABEL_17:
  if ( *((_DWORD *)this + 5) )
  {
    if ( !*((_BYTE *)this + 40) )
      goto LABEL_42;
    v10 = *((_DWORD *)a2 + 5);
    v11 = (int *)(v10 + 48);
    if ( !v10 )
      v11 = (int *)((char *)a2 + 4);
    v12 = v11[2];
    if ( v7 == 344 )
    {
      operator*();
      v13 = v57;
      v14 = v58;
    }
    else if ( v7 == 345 )
    {
      operator*();
      v13 = v57;
      v14 = v58;
      v16 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(*((float *)a2 + 343) + 3.1416), v15);
      v17 = (CMatrix *)*((_DWORD *)a2 + 5);
      *((_DWORD *)a2 + 343) = v16;
      *((_DWORD *)a2 + 344) = v16;
      if ( !v17 )
      {
        *((_DWORD *)a2 + 4) = v16;
        goto LABEL_40;
      }
      CMatrix::SetRotateZOnly(v17, *(float *)&v16);
    }
    else
    {
      v14 = v11[1];
      v13 = *v11;
    }
    v21 = *((_DWORD *)a2 + 5);
    if ( v21 )
    {
      *(_DWORD *)(v21 + 48) = v13;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = v14;
      v22 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
LABEL_41:
      *v22 = v12;
      *((_BYTE *)this + 40) = 0;
LABEL_42:
      if ( *((_BYTE *)this + 36) )
      {
        if ( *((_BYTE *)this + 37) )
        {
          v26 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 37) = 0;
          *((_DWORD *)this + 7) = v26;
          v27 = v26;
        }
        else
        {
          v27 = *((_DWORD *)this + 7);
          v26 = CTimer::m_snTimeInMilliseconds;
        }
        if ( v27 + *((_DWORD *)this + 8) <= v26 )
        {
          v28 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
          if ( *((_WORD *)v28 + 22) != 344 )
          {
            CAnimBlendAssociation::SetDeleteCallback(
              v28,
              (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
              0);
            v29 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, 0x158u);
            *((_DWORD *)this + 5) = v29;
            CAnimBlendAssociation::SetFinishCallback(
              v29,
              (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitInChair::FinishAnimCB,
              this);
            *((_BYTE *)this + 40) = 1;
          }
        }
      }
      v30 = *((_DWORD *)this + 5);
      if ( *(_WORD *)(v30 + 44) != 343 )
        goto LABEL_54;
      v31 = (float *)*((_DWORD *)this + 3);
      v32 = (float *)*((_DWORD *)a2 + 5);
      v33 = v32 + 12;
      if ( !v32 )
        v33 = (float *)((char *)a2 + 4);
      v34 = v31[1] - *v33;
      v35 = v31[2] - v33[1];
      v36 = v31[3] - v33[2];
      v3.n64_u32[0] = 1017370378;
      v2.n64_f32[0] = sqrtf((float)((float)(v34 * v34) + (float)(v35 * v35)) + (float)(v36 * v36));
      v37 = 1.0 / v2.n64_f32[0];
      v38 = v35 * (float)(1.0 / v2.n64_f32[0]);
      v39 = v34 * (float)(1.0 / v2.n64_f32[0]);
      v40 = vmin_f32(v2, v3).n64_f32[0];
      v41 = v38 * v40;
      v42 = v39 * v40;
      v43 = (float)(v36 * v37) * v40;
      v44 = (float)(*v32 * v42) + (float)(v32[1] * v41);
      v45 = (float)(v43 * v32[6]) + (float)((float)(v32[4] * v42) + (float)(v32[5] * v41));
      *((float *)a2 + 313) = (float)(v32[2] * v43) + v44;
      *((float *)a2 + 314) = v45;
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               *(CGeneral **)(*((_DWORD *)this + 3) + 16),
                                               *(float *)(*((_DWORD *)this + 3) + 20),
                                               0.0,
                                               0.0,
                                               *(float *)&v54);
      *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v47);
      goto LABEL_53;
    }
LABEL_40:
    v22 = (_DWORD *)((char *)a2 + 12);
    *((_DWORD *)a2 + 1) = v13;
    *((_DWORD *)a2 + 2) = v14;
    goto LABEL_41;
  }
  if ( InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 0) )
  {
    v18 = *((_DWORD *)this + 6);
    if ( v18 == 343 )
    {
      v23 = *((_DWORD *)this + 2);
      if ( v23 >= 0 )
      {
        v24 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 36) = 1;
        *((_DWORD *)this + 7) = v24;
        *((_DWORD *)this + 8) = v23;
      }
    }
    else
    {
      if ( v18 != -1 )
        goto LABEL_53;
      if ( !*((_BYTE *)this + 16) )
      {
        v53 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, 0x157u);
        *((_DWORD *)this + 5) = v53;
        CAnimBlendAssociation::SetFinishCallback(
          v53,
          (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitInChair::FinishAnimCB,
          this);
        goto LABEL_53;
      }
      v19 = *((_DWORD *)this + 2);
      if ( v19 >= 0 )
      {
        v20 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 36) = 1;
        *((_DWORD *)this + 7) = v20;
        *((_DWORD *)this + 8) = v19;
      }
    }
    v25 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, 0x159u);
    *((_DWORD *)this + 5) = v25;
    CAnimBlendAssociation::SetFinishCallback(
      v25,
      (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitInChair::FinishAnimCB,
      this);
    *((_BYTE *)this + 40) = 1;
  }
LABEL_53:
  v30 = *((_DWORD *)this + 5);
LABEL_54:
  if ( !v30 || *(_WORD *)(v30 + 44) != 345 )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    return 0;
  }
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    || (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) <= 980 )
  {
    return 0;
  }
  PedsInteriorGroup = InteriorManager_c::GetPedsInteriorGroup((InteriorManager_c *)&g_interiorMan, a2);
  v8 = 0;
  if ( PedsInteriorGroup )
  {
    v56 = 0;
    v57 = 0;
    v49 = *((_DWORD *)a2 + 5);
    v50 = (int *)(v49 + 48);
    if ( !v49 )
      v50 = (int *)((char *)a2 + 4);
    InteriorGroup_c::FindClosestInteriorInfo(
      PedsInteriorGroup,
      0,
      *v50,
      v50[1],
      v50[2],
      10.0,
      (int)&v57,
      (int)&v56,
      (int)v55);
    if ( v57 )
    {
      v51 = rand();
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"TaskSitInChair",
        a2,
        0,
        (int)(float)((float)((float)v51 * 0.000015259) * 10000.0) + 10000,
        -1,
        v57 + 4,
        0,
        0.25,
        500,
        3,
        0);
    }
    return 0;
  }
  return v8;
}


// ============================================================

// Address: 0x52a214
// Original: _ZN23CTaskInteriorSitInChair12FinishAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskInteriorSitInChair::FinishAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskInteriorSitInChair::FinishAnimCB(
        CTaskInteriorSitInChair *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v3; // r2
  int result; // r0

  v3 = *((__int16 *)this + 22);
  *((_DWORD *)a2 + 6) = v3;
  if ( v3 == 344 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 41) = 1;
  }
  if ( *((_BYTE *)a2 + 42) && *((_DWORD *)a2 + 6) == 343 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 41) = 1;
  }
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x52afd4
// Original: _ZNK23CTaskInteriorSitInChair11GetTaskTypeEv
// Demangled: CTaskInteriorSitInChair::GetTaskType(void)
int __fastcall CTaskInteriorSitInChair::GetTaskType(CTaskInteriorSitInChair *this)
{
  return 1407;
}


// ============================================================
