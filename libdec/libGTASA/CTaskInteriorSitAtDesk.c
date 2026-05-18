
// Address: 0x18ec80
// Original: j__ZN22CTaskInteriorSitAtDesk19StartRandomLoopAnimEP4CPedf
// Demangled: CTaskInteriorSitAtDesk::StartRandomLoopAnim(CPed *,float)
// attributes: thunk
int __fastcall CTaskInteriorSitAtDesk::StartRandomLoopAnim(CTaskInteriorSitAtDesk *this, CPed *a2, float a3)
{
  return _ZN22CTaskInteriorSitAtDesk19StartRandomLoopAnimEP4CPedf(this, a2, a3);
}


// ============================================================

// Address: 0x52a7f8
// Original: _ZN22CTaskInteriorSitAtDeskC2EiP14InteriorInfo_th
// Demangled: CTaskInteriorSitAtDesk::CTaskInteriorSitAtDesk(int,InteriorInfo_t *,uchar)
int __fastcall CTaskInteriorSitAtDesk::CTaskInteriorSitAtDesk(CTaskSimple *a1, int a2, int a3, char a4)
{
  int result; // r0

  CTaskSimple::CTaskSimple(a1);
  *(_WORD *)(result + 36) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_BYTE *)(result + 16) = a4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_WORD *)(result + 52) = 0;
  *(_BYTE *)(result + 54) = 0;
  *(_DWORD *)result = &off_66C960;
  return result;
}


// ============================================================

// Address: 0x52a840
// Original: _ZN22CTaskInteriorSitAtDeskD2Ev
// Demangled: CTaskInteriorSitAtDesk::~CTaskInteriorSitAtDesk()
void __fastcall CTaskInteriorSitAtDesk::~CTaskInteriorSitAtDesk(CTaskInteriorSitAtDesk *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C960;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52a874
// Original: _ZN22CTaskInteriorSitAtDeskD0Ev
// Demangled: CTaskInteriorSitAtDesk::~CTaskInteriorSitAtDesk()
void __fastcall CTaskInteriorSitAtDesk::~CTaskInteriorSitAtDesk(CTaskInteriorSitAtDesk *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C960;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x52a8ac
// Original: _ZNK22CTaskInteriorSitAtDesk5CloneEv
// Demangled: CTaskInteriorSitAtDesk::Clone(void)
int __fastcall CTaskInteriorSitAtDesk::Clone(CTaskInteriorSitAtDesk *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_QWORD *)this + 1);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 36) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 8) = v4;
  *(_BYTE *)(result + 16) = (_BYTE)this;
  *(_QWORD *)(result + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 52) = 0;
  *(_BYTE *)(result + 54) = 0;
  *(_DWORD *)result = &off_66C960;
  return result;
}


// ============================================================

// Address: 0x52a8fc
// Original: _ZN22CTaskInteriorSitAtDesk13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskInteriorSitAtDesk::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskInteriorSitAtDesk::MakeAbortable(CTaskInteriorSitAtDesk *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  int result; // r0

  if ( a3 == 2 )
  {
    v5 = *((_DWORD *)this + 5);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 28) = -998637568;
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
    *((_BYTE *)this + 54) = 1;
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x52a93c
// Original: _ZN22CTaskInteriorSitAtDesk10ProcessPedEP4CPed
// Demangled: CTaskInteriorSitAtDesk::ProcessPed(CPed *)
int __fastcall CTaskInteriorSitAtDesk::ProcessPed(CTaskInteriorSitAtDesk *this, CPed *a2)
{
  float32x2_t v2; // d3
  float32x2_t v3; // d5
  int v6; // r0
  int v7; // r6
  float v8; // r1
  int v9; // r1
  CMatrix *v10; // r0
  int v11; // r6
  CAnimBlendAssociation *v12; // r0
  int v13; // r1
  char *v14; // r2
  int v15; // r8
  int v16; // r0
  int v17; // r0
  __int64 v18; // r0
  int v19; // r2
  _DWORD *v20; // r0
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r1
  CAnimBlendAssociation *v25; // r0
  CAnimBlendAssociation *v26; // r0
  int v27; // r1
  CAnimBlendAssociation *v28; // r0
  int v29; // r0
  unsigned int v30; // r2
  CAnimBlendAssociation *v31; // r0
  CAnimBlendAssociation *v32; // r0
  float *v33; // r1
  float *v34; // r0
  float *v35; // r2
  float v36; // s0
  float v37; // s2
  float v38; // s4
  float v39; // s8
  float v40; // s2
  float v41; // s0
  float v42; // s6
  float v43; // s2
  float v44; // s0
  float v45; // s4
  float v46; // s6
  float v47; // s0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v49; // r1
  float v51; // [sp+0h] [bp-28h]
  __int64 v52; // [sp+Ch] [bp-1Ch]

  v6 = *((_DWORD *)this + 5);
  if ( v6 )
    v7 = *(__int16 *)(v6 + 44);
  else
    v7 = -1;
  CPed::SetMoveState(a2, 1);
  if ( *((_BYTE *)this + 53) && !RpAnimBlendClumpGetAssociation() )
  {
    v9 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(*((float *)a2 + 343) + 3.1416), v8);
    v10 = (CMatrix *)*((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 343) = v9;
    *((_DWORD *)a2 + 344) = v9;
    if ( !v10 )
    {
      *((_DWORD *)a2 + 4) = v9;
      return 1;
    }
    CMatrix::SetRotateZOnly(v10, *(float *)&v9);
    return 1;
  }
  if ( !*((_BYTE *)this + 54) )
    goto LABEL_19;
  if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 2) )
    return 1;
  if ( v7 == 328 )
  {
    *(_DWORD *)(*((_DWORD *)this + 5) + 28) = -1056964608;
  }
  else if ( (unsigned int)(v7 - 330) > 6 )
  {
    if ( v7 == 329 )
      *(_DWORD *)(*((_DWORD *)this + 5) + 36) = 0x40000000;
  }
  else if ( !*((_BYTE *)this + 52) )
  {
    v11 = 0;
    CAnimBlendAssociation::SetDeleteCallback(
      *((CAnimBlendAssociation **)this + 5),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v12 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, 0x149u);
    *((_DWORD *)this + 5) = v12;
    CAnimBlendAssociation::SetFinishCallback(
      v12,
      (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB,
      this);
    *((_BYTE *)this + 52) = 1;
    return v11;
  }
LABEL_19:
  if ( !*((_DWORD *)this + 5) )
  {
    if ( InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 2) )
    {
      v16 = *((_DWORD *)this + 6);
      if ( v16 == 328 )
      {
        v17 = *((_DWORD *)this + 2);
        if ( v17 >= 0 )
        {
LABEL_54:
          v27 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 36) = 1;
          *((_DWORD *)this + 7) = v27;
          *((_DWORD *)this + 8) = v17;
        }
LABEL_55:
        CTaskInteriorSitAtDesk::StartRandomLoopAnim(this, a2, 1000.0);
        v11 = 0;
        *((_BYTE *)this + 52) = 1;
        return v11;
      }
      if ( v16 != -1 )
      {
        if ( (unsigned int)(v16 - 333) <= 3 )
          CTaskInteriorSitAtDesk::StartRandomLoopAnim(this, a2, 4.0);
        return 0;
      }
      if ( *((_BYTE *)this + 16) )
      {
        v17 = *((_DWORD *)this + 2);
        if ( v17 >= 0 )
          goto LABEL_54;
        goto LABEL_55;
      }
      v31 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, 0x148u);
      *((_DWORD *)this + 5) = v31;
      CAnimBlendAssociation::SetFinishCallback(
        v31,
        (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB,
        this);
    }
    return 0;
  }
  if ( !*((_BYTE *)this + 52) )
    goto LABEL_39;
  v13 = *((_DWORD *)a2 + 5);
  v14 = (char *)(v13 + 48);
  if ( !v13 )
    v14 = (char *)a2 + 4;
  v15 = *((_DWORD *)v14 + 2);
  if ( (unsigned int)(v7 - 330) > 2 )
  {
    if ( v7 != 329 )
    {
      v18 = *(_QWORD *)v14;
      goto LABEL_35;
    }
    v51 = -CCarEnterExit::ms_vecPedDeskAnimOffset[0];
  }
  operator*();
  v18 = v52;
LABEL_35:
  v19 = *((_DWORD *)a2 + 5);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 48) = v18;
    *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v18);
    v20 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
  }
  else
  {
    *(_QWORD *)((char *)a2 + 4) = v18;
    v20 = (_DWORD *)((char *)a2 + 12);
  }
  *v20 = v15;
  *((_BYTE *)this + 52) = 0;
LABEL_39:
  if ( *((_BYTE *)this + 36)
    && (!*((_BYTE *)this + 37)
      ? (v22 = *((_DWORD *)this + 7), v21 = CTimer::m_snTimeInMilliseconds)
      : (v21 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 37) = 0, *((_DWORD *)this + 7) = v21, v22 = v21),
        v22 + *((_DWORD *)this + 8) <= v21) )
  {
    v25 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
    if ( *((_WORD *)v25 + 22) != 329 )
    {
      CAnimBlendAssociation::SetDeleteCallback(
        v25,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      v26 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, 0x149u);
      *((_DWORD *)this + 5) = v26;
      CAnimBlendAssociation::SetFinishCallback(
        v26,
        (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB,
        this);
      *((_BYTE *)this + 52) = 1;
    }
  }
  else if ( *((_BYTE *)this + 48) )
  {
    if ( *((_BYTE *)this + 49) )
    {
      v23 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 49) = 0;
      *((_DWORD *)this + 10) = v23;
      v24 = v23;
    }
    else
    {
      v24 = *((_DWORD *)this + 10);
      v23 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v24 + *((_DWORD *)this + 11) <= v23 )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (rand() & 1) != 0 )
      {
        v28 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
        if ( v28 )
          CAnimBlendAssociation::SetDeleteCallback(
            v28,
            (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
            0);
        v29 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
        if ( v29 <= 60 )
        {
          if ( v29 <= 35 )
          {
            v30 = 333;
            if ( v29 > 10 )
              v30 = 336;
          }
          else
          {
            v30 = 334;
          }
        }
        else
        {
          v30 = 335;
        }
        v32 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, v30);
        *((_DWORD *)this + 5) = v32;
        CAnimBlendAssociation::SetFinishCallback(
          v32,
          (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB,
          this);
      }
      else
      {
        CTaskInteriorSitAtDesk::StartRandomLoopAnim(this, a2, 4.0);
      }
    }
  }
  if ( *(_WORD *)(*((_DWORD *)this + 5) + 44) != 328 )
    return 0;
  v33 = (float *)*((_DWORD *)this + 3);
  v34 = (float *)*((_DWORD *)a2 + 5);
  v11 = 0;
  v35 = v34 + 12;
  if ( !v34 )
    v35 = (float *)((char *)a2 + 4);
  v36 = v33[1] - *v35;
  v37 = v33[2] - v35[1];
  v38 = v33[3] - v35[2];
  v3.n64_u32[0] = 1017370378;
  v2.n64_f32[0] = sqrtf((float)((float)(v36 * v36) + (float)(v37 * v37)) + (float)(v38 * v38));
  v39 = 1.0 / v2.n64_f32[0];
  v40 = v37 * (float)(1.0 / v2.n64_f32[0]);
  v41 = v36 * (float)(1.0 / v2.n64_f32[0]);
  v42 = vmin_f32(v2, v3).n64_f32[0];
  v43 = v40 * v42;
  v44 = v41 * v42;
  v45 = (float)(v38 * v39) * v42;
  v46 = (float)(*v34 * v44) + (float)(v34[1] * v43);
  v47 = (float)(v45 * v34[6]) + (float)((float)(v34[4] * v44) + (float)(v34[5] * v43));
  *((float *)a2 + 313) = (float)(v34[2] * v45) + v46;
  *((float *)a2 + 314) = v47;
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           *(CGeneral **)(*((_DWORD *)this + 3) + 16),
                                           *(float *)(*((_DWORD *)this + 3) + 20),
                                           0.0,
                                           0.0,
                                           v51);
  *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v49);
  return v11;
}


// ============================================================

// Address: 0x52ade4
// Original: _ZN22CTaskInteriorSitAtDesk12FinishAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskInteriorSitAtDesk::FinishAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskInteriorSitAtDesk::FinishAnimCB(CTaskInteriorSitAtDesk *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r2
  int result; // r0

  v3 = *((__int16 *)this + 22);
  *((_DWORD *)a2 + 6) = v3;
  if ( v3 == 329 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 53) = 1;
  }
  if ( *((_BYTE *)a2 + 54) && *((_DWORD *)a2 + 6) == 328 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 53) = 1;
  }
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x52ae24
// Original: _ZN22CTaskInteriorSitAtDesk19StartRandomLoopAnimEP4CPedf
// Demangled: CTaskInteriorSitAtDesk::StartRandomLoopAnim(CPed *,float)
int __fastcall CTaskInteriorSitAtDesk::StartRandomLoopAnim(CTaskInteriorSitAtDesk *this, CPed *a2, float a3)
{
  CAnimBlendAssociation *v4; // r0
  int v6; // r5
  unsigned __int16 v7; // r0
  unsigned int v8; // r2
  int v9; // r5
  unsigned __int16 v10; // r0
  CAnimBlendAssociation *v11; // r0
  int result; // r0

  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v6 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
  if ( v6 < 41 )
  {
    v10 = rand();
    v8 = 332;
    if ( v6 > 10 )
      v8 = 330;
    v9 = (int)(float)((float)((float)v10 * 0.000015259) * 3000.0) + 2000;
  }
  else
  {
    v7 = rand();
    v8 = 331;
    v9 = (int)(float)((float)((float)v7 * 0.000015259) * 5000.0) + 7000;
  }
  v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, v8);
  *((_DWORD *)this + 5) = v11;
  CAnimBlendAssociation::SetFinishCallback(
    v11,
    (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB,
    this);
  result = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 48) = 1;
  *((_DWORD *)this + 10) = result;
  *((_DWORD *)this + 11) = v9;
  return result;
}


// ============================================================

// Address: 0x52af20
// Original: _ZN22CTaskInteriorSitAtDesk21StartRandomOneOffAnimEP4CPed
// Demangled: CTaskInteriorSitAtDesk::StartRandomOneOffAnim(CPed *)
int __fastcall CTaskInteriorSitAtDesk::StartRandomOneOffAnim(CTaskInteriorSitAtDesk *this, CPed *a2)
{
  CAnimBlendAssociation *v4; // r0
  int v5; // r0
  unsigned int v6; // r2
  CAnimBlendAssociation *v7; // r0

  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v5 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
  if ( v5 <= 60 )
  {
    if ( v5 <= 35 )
    {
      v6 = 333;
      if ( v5 > 10 )
        v6 = 336;
    }
    else
    {
      v6 = 334;
    }
  }
  else
  {
    v6 = 335;
  }
  v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 85, v6);
  *((_DWORD *)this + 5) = v7;
  return sub_18C20C(v7, (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorSitAtDesk::FinishAnimCB, this);
}


// ============================================================

// Address: 0x52afe0
// Original: _ZNK22CTaskInteriorSitAtDesk11GetTaskTypeEv
// Demangled: CTaskInteriorSitAtDesk::GetTaskType(void)
int __fastcall CTaskInteriorSitAtDesk::GetTaskType(CTaskInteriorSitAtDesk *this)
{
  return 1408;
}


// ============================================================
