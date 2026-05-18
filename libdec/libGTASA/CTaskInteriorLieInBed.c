
// Address: 0x52a254
// Original: _ZN21CTaskInteriorLieInBedC2EiP14InteriorInfo_thh
// Demangled: CTaskInteriorLieInBed::CTaskInteriorLieInBed(int,InteriorInfo_t *,uchar,uchar)
int __fastcall CTaskInteriorLieInBed::CTaskInteriorLieInBed(CTaskSimple *a1, int a2, int a3, int a4, char a5)
{
  int result; // r0
  int v9; // r2

  CTaskSimple::CTaskSimple(a1);
  *(_WORD *)(result + 36) = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_BYTE *)(result + 17) = a5;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1;
  v9 = 337;
  if ( a4 )
    v9 = 340;
  *(_DWORD *)(result + 44) = v9;
  *(_WORD *)(result + 40) = 0;
  *(_BYTE *)(result + 42) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_66C92C;
  return result;
}


// ============================================================

// Address: 0x52a2a8
// Original: _ZN21CTaskInteriorLieInBedD2Ev
// Demangled: CTaskInteriorLieInBed::~CTaskInteriorLieInBed()
void __fastcall CTaskInteriorLieInBed::~CTaskInteriorLieInBed(CTaskInteriorLieInBed *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C92C;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52a2dc
// Original: _ZN21CTaskInteriorLieInBedD0Ev
// Demangled: CTaskInteriorLieInBed::~CTaskInteriorLieInBed()
void __fastcall CTaskInteriorLieInBed::~CTaskInteriorLieInBed(CTaskInteriorLieInBed *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66C92C;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x52a314
// Original: _ZNK21CTaskInteriorLieInBed5CloneEv
// Demangled: CTaskInteriorLieInBed::Clone(void)
int __fastcall CTaskInteriorLieInBed::Clone(CTaskInteriorLieInBed *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  unsigned int v4; // r5
  unsigned int v5; // r6
  char v6; // r8
  int v7; // r4
  int result; // r0
  int v9; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_30, a2);
  v5 = *((_DWORD *)this + 3);
  v4 = *((_DWORD *)this + 2);
  v6 = *((_BYTE *)this + 17);
  v7 = *((unsigned __int8 *)this + 16);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 36) = 0;
  *(_QWORD *)(result + 8) = __PAIR64__(v5, v4);
  v9 = 337;
  if ( v7 )
    v9 = 340;
  *(_DWORD *)(result + 44) = v9;
  *(_BYTE *)(result + 17) = v6;
  *(_WORD *)(result + 40) = 0;
  *(_BYTE *)(result + 42) = 0;
  *(_QWORD *)(result + 20) = 0xFFFFFFFF00000000LL;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_66C92C;
  return result;
}


// ============================================================

// Address: 0x52a374
// Original: _ZN21CTaskInteriorLieInBed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskInteriorLieInBed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskInteriorLieInBed::MakeAbortable(CTaskInteriorLieInBed *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int v7; // r1
  int result; // r0

  if ( a3 == 2 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -998637568;
      CAnimBlendAssociation::SetDeleteCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 5) = 0;
    }
    v7 = *((_DWORD *)a2 + 272);
    *(_BYTE *)(v7 + 586) = 0;
    result = 1;
    *(_WORD *)(v7 + 584) = 1;
  }
  else
  {
    *((_BYTE *)this + 42) = 1;
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x52a3cc
// Original: _ZN21CTaskInteriorLieInBed10ProcessPedEP4CPed
// Demangled: CTaskInteriorLieInBed::ProcessPed(CPed *)
int __fastcall CTaskInteriorLieInBed::ProcessPed(CTaskInteriorLieInBed *this, CPed *a2)
{
  float32x2_t v2; // d3
  float32x2_t v3; // d5
  int v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r6
  CAnimBlendAssociation *v11; // r0
  int v12; // r1
  char *v13; // r2
  int v14; // r8
  int v15; // r0
  unsigned int v16; // r2
  int v17; // r0
  int v18; // r1
  CAnimBlendAssociation *v19; // r0
  __int64 v20; // r0
  int v21; // r2
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r1
  CMatrix *v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r1
  unsigned int v29; // r0
  unsigned int v30; // r1
  __int16 *v31; // r0
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
  CAnimBlendAssociation *v50; // r0
  float v52; // [sp+0h] [bp-20h]
  __int64 v53; // [sp+4h] [bp-1Ch]

  v6 = *((_DWORD *)this + 5);
  if ( v6 )
    v7 = *(__int16 *)(v6 + 44);
  else
    v7 = -1;
  CPed::SetMoveState(a2, 1);
  if ( *((_BYTE *)this + 41) && !RpAnimBlendClumpGetAssociation() )
  {
    v9 = *((_DWORD *)a2 + 272);
    *(_BYTE *)(v9 + 586) = 0;
LABEL_12:
    v10 = 1;
    *(_WORD *)(v9 + 584) = 1;
    return v10;
  }
  if ( !*((_BYTE *)this + 42) )
    goto LABEL_18;
  if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 0) )
  {
    v9 = *((_DWORD *)a2 + 272);
    *(_BYTE *)(v9 + 586) = 0;
    goto LABEL_12;
  }
  v8 = *((_DWORD *)this + 11);
  if ( v7 == v8 )
  {
    *(_DWORD *)(*((_DWORD *)this + 5) + 28) = -1056964608;
  }
  else if ( v7 == v8 + 1 )
  {
    if ( !*((_BYTE *)this + 40) )
    {
      v10 = 0;
      CAnimBlendAssociation::SetDeleteCallback(
        *((CAnimBlendAssociation **)this + 5),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, *((_DWORD *)this + 11) + 2);
      *((_DWORD *)this + 5) = v11;
      CAnimBlendAssociation::SetFinishCallback(
        v11,
        (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorLieInBed::FinishAnimCB,
        this);
      *((_BYTE *)this + 40) = 1;
      return v10;
    }
  }
  else if ( v7 == v8 + 2 )
  {
    *(_DWORD *)(*((_DWORD *)this + 5) + 36) = 1077936128;
  }
LABEL_18:
  if ( !*((_DWORD *)this + 5) )
  {
    v10 = 0;
    if ( !InteriorManager_c::AreAnimsLoaded((InteriorManager_c *)&g_interiorMan, 0) )
      return v10;
    v15 = *((_DWORD *)this + 6);
    v16 = v15 + 1;
    if ( v15 == -1 )
    {
      v26 = *((_DWORD *)a2 + 272);
      *(_BYTE *)(v26 + 586) = 0;
      *(_WORD *)(v26 + 584) = 0;
      if ( *((_BYTE *)this + 17) )
      {
        v27 = *((_DWORD *)this + 2);
        if ( v27 >= 0 )
        {
          v28 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 36) = 1;
          *((_DWORD *)this + 7) = v28;
          *((_DWORD *)this + 8) = v27;
        }
        v19 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, *((_DWORD *)this + 11) + 1);
        *((_DWORD *)this + 5) = v19;
        goto LABEL_43;
      }
      v50 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, *((_DWORD *)this + 11));
      *((_DWORD *)this + 5) = v50;
      CAnimBlendAssociation::SetFinishCallback(
        v50,
        (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorLieInBed::FinishAnimCB,
        this);
    }
    else if ( v15 == *((_DWORD *)this + 11) )
    {
      v17 = *((_DWORD *)this + 2);
      if ( v17 >= 0 )
      {
        v18 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 36) = 1;
        *((_DWORD *)this + 7) = v18;
        *((_DWORD *)this + 8) = v17;
      }
      v19 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, v16);
      *((_DWORD *)this + 5) = v19;
LABEL_43:
      CAnimBlendAssociation::SetFinishCallback(
        v19,
        (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorLieInBed::FinishAnimCB,
        this);
      v10 = 0;
      *((_BYTE *)this + 40) = 1;
      return v10;
    }
    return 0;
  }
  if ( *((_BYTE *)this + 40) )
  {
    v12 = *((_DWORD *)a2 + 5);
    v13 = (char *)(v12 + 48);
    if ( !v12 )
      v13 = (char *)a2 + 4;
    v14 = *((_DWORD *)v13 + 2);
    if ( (v7 | 1) == 0x153 || (unsigned int)(v7 - 341) <= 1 )
    {
      operator*();
      v20 = v53;
    }
    else
    {
      v20 = *(_QWORD *)v13;
    }
    v21 = *((_DWORD *)a2 + 5);
    if ( v21 )
    {
      *(_DWORD *)(v21 + 48) = v20;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v20);
      v22 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      *(_QWORD *)((char *)a2 + 4) = v20;
      v22 = (_DWORD *)((char *)a2 + 12);
    }
    *v22 = v14;
    v23 = *((_DWORD *)this + 11);
    *((_BYTE *)this + 40) = 0;
    if ( v7 == v23 + 1 )
    {
      v24 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(*((float *)a2 + 343) + 3.1416), 0.0);
      v25 = (CMatrix *)*((_DWORD *)a2 + 5);
      *((_DWORD *)a2 + 343) = v24;
      *((_DWORD *)a2 + 344) = v24;
      if ( v25 )
        CMatrix::SetRotateZOnly(v25, *(float *)&v24);
      else
        *((_DWORD *)a2 + 4) = v24;
    }
  }
  if ( *((_BYTE *)this + 36) )
  {
    if ( *((_BYTE *)this + 37) )
    {
      v29 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 37) = 0;
      *((_DWORD *)this + 7) = v29;
      v30 = v29;
    }
    else
    {
      v30 = *((_DWORD *)this + 7);
      v29 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v30 + *((_DWORD *)this + 8) <= v29 )
    {
      v31 = (__int16 *)*((_DWORD *)this + 5);
      if ( *((_DWORD *)this + 11) + 2 != v31[22] )
      {
        CAnimBlendAssociation::SetDeleteCallback(
          (CAnimBlendAssociation *)v31,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        v32 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 84, *((_DWORD *)this + 11) + 2);
        *((_DWORD *)this + 5) = v32;
        CAnimBlendAssociation::SetFinishCallback(
          v32,
          (void (*)(CAnimBlendAssociation *, void *))CTaskInteriorLieInBed::FinishAnimCB,
          this);
        *((_BYTE *)this + 40) = 1;
      }
    }
  }
  if ( *((_DWORD *)this + 11) != *(__int16 *)(*((_DWORD *)this + 5) + 44) )
    return 0;
  v33 = (float *)*((_DWORD *)this + 3);
  v34 = (float *)*((_DWORD *)a2 + 5);
  v10 = 0;
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
                                           v52);
  *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v49);
  return v10;
}


// ============================================================

// Address: 0x52a7b8
// Original: _ZN21CTaskInteriorLieInBed12FinishAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskInteriorLieInBed::FinishAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskInteriorLieInBed::FinishAnimCB(CTaskInteriorLieInBed *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r3
  int v4; // r2
  int result; // r0

  v3 = *((__int16 *)this + 22);
  v4 = *((_DWORD *)a2 + 11) + 2;
  *((_DWORD *)a2 + 6) = v3;
  if ( v4 == v3 )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 41) = 1;
  }
  if ( *((_BYTE *)a2 + 42) && *((_DWORD *)a2 + 6) == *((_DWORD *)a2 + 11) )
  {
    *((_DWORD *)this + 7) = -998637568;
    *((_BYTE *)a2 + 41) = 1;
  }
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x52afda
// Original: _ZNK21CTaskInteriorLieInBed11GetTaskTypeEv
// Demangled: CTaskInteriorLieInBed::GetTaskType(void)
int __fastcall CTaskInteriorLieInBed::GetTaskType(CTaskInteriorLieInBed *this)
{
  return 1406;
}


// ============================================================
