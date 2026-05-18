
// Address: 0x1977f8
// Original: j__ZN24CTaskSimpleGoToPointFine18SetBlendedMoveAnimEP4CPed
// Demangled: CTaskSimpleGoToPointFine::SetBlendedMoveAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGoToPointFine::SetBlendedMoveAnim(CTaskSimpleGoToPointFine *this, CPed *a2)
{
  return _ZN24CTaskSimpleGoToPointFine18SetBlendedMoveAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1989c4
// Original: j__ZN24CTaskSimpleGoToPointFine9BaseRatioE10eMoveState
// Demangled: CTaskSimpleGoToPointFine::BaseRatio(eMoveState)
// attributes: thunk
int CTaskSimpleGoToPointFine::BaseRatio()
{
  return _ZN24CTaskSimpleGoToPointFine9BaseRatioE10eMoveState();
}


// ============================================================

// Address: 0x19e7f0
// Original: j__ZN24CTaskSimpleGoToPointFine12SetMoveRatioEf
// Demangled: CTaskSimpleGoToPointFine::SetMoveRatio(float)
// attributes: thunk
int __fastcall CTaskSimpleGoToPointFine::SetMoveRatio(CTaskSimpleGoToPointFine *this, float a2)
{
  return _ZN24CTaskSimpleGoToPointFine12SetMoveRatioEf(this, a2);
}


// ============================================================

// Address: 0x19ebb0
// Original: j__ZN24CTaskSimpleGoToPointFineC2Ef7CVectorfP7CEntity
// Demangled: CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine(float,CVector,float,CEntity *)
// attributes: thunk
int CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine()
{
  return _ZN24CTaskSimpleGoToPointFineC2Ef7CVectorfP7CEntity();
}


// ============================================================

// Address: 0x5177f0
// Original: _ZN24CTaskSimpleGoToPointFineC2Ef7CVectorfP7CEntity
// Demangled: CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine(float,CVector,float,CEntity *)
_DWORD *__fastcall CTaskSimpleGoToPointFine::CTaskSimpleGoToPointFine(
        CTaskSimpleGoTo *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6)
{
  _DWORD *result; // r0
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF

  v8[0] = a3;
  v8[1] = a4;
  v8[2] = a5;
  CTaskSimpleGoTo::CTaskSimpleGoTo(a1, 4, (const CVector *)v8, a6);
  result[8] = a2;
  *result = &off_66BDF8;
  return result;
}


// ============================================================

// Address: 0x517820
// Original: _ZN24CTaskSimpleGoToPointFineD2Ev
// Demangled: CTaskSimpleGoToPointFine::~CTaskSimpleGoToPointFine()
// attributes: thunk
void __fastcall CTaskSimpleGoToPointFine::~CTaskSimpleGoToPointFine(CTaskSimpleGoToPointFine *this)
{
  sub_19A46C(this);
}


// ============================================================

// Address: 0x517824
// Original: _ZN24CTaskSimpleGoToPointFineD0Ev
// Demangled: CTaskSimpleGoToPointFine::~CTaskSimpleGoToPointFine()
void __fastcall CTaskSimpleGoToPointFine::~CTaskSimpleGoToPointFine(CTaskSimpleGoToPointFine *this)
{
  void *v1; // r0

  CTaskSimpleGoToPoint::~CTaskSimpleGoToPoint(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x517834
// Original: _ZN24CTaskSimpleGoToPointFine13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGoToPointFine::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGoToPointFine::MakeAbortable(
        CTaskSimpleGoToPointFine *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CTaskSimpleGoTo::QuitIK(this, a2);
  CPed::SetMoveState(a2, 1);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  CPed::SetMoveState(a2, *((_DWORD *)this + 2));
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  return 1;
}


// ============================================================

// Address: 0x517864
// Original: _ZN24CTaskSimpleGoToPointFine6FinishEP4CPed
// Demangled: CTaskSimpleGoToPointFine::Finish(CPed *)
int __fastcall CTaskSimpleGoToPointFine::Finish(CTaskSimpleGoToPointFine *this, CPed *a2)
{
  CPed::SetMoveState(a2, 1);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  CPed::SetMoveState(a2, *((_DWORD *)this + 2));
  return (*(int (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
}


// ============================================================

// Address: 0x517890
// Original: _ZN24CTaskSimpleGoToPointFine10ProcessPedEP4CPed
// Demangled: CTaskSimpleGoToPointFine::ProcessPed(CPed *)
int __fastcall CTaskSimpleGoToPointFine::ProcessPed(CTaskSimpleGoToPointFine *this, CPed *a2)
{
  int v4; // r0
  float *v5; // r1
  float v6; // s18
  float v7; // s16
  int v8; // r6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v10; // r1
  float v12; // [sp+0h] [bp-20h]

  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)(v4 + 48);
  if ( !v4 )
    v5 = (float *)((char *)a2 + 4);
  v6 = *((float *)this + 3) - *v5;
  v7 = *((float *)this + 4) - v5[1];
  if ( (float)((float)((float)(v6 * v6) + (float)(v7 * v7)) + 0.0) <= (float)(*((float *)this + 6) * *((float *)this + 6))
    || CTaskSimpleGoTo::HasCircledTarget(this, a2) == 1 )
  {
    CTaskSimpleGoTo::QuitIK(this, a2);
    v8 = 1;
    CPed::SetMoveState(a2, 1);
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
    CPed::SetMoveState(a2, *((_DWORD *)this + 2));
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  }
  else
  {
    CTaskSimpleGoToPointFine::SetBlendedMoveAnim(this, a2);
    v8 = 0;
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             (CGeneral *)LODWORD(v6),
                                             v7,
                                             0.0,
                                             0.0,
                                             v12);
    *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v10);
    CTaskSimpleGoTo::SetUpIK(this, a2);
  }
  return v8;
}


// ============================================================

// Address: 0x51795c
// Original: _ZN24CTaskSimpleGoToPointFine18SetBlendedMoveAnimEP4CPed
// Demangled: CTaskSimpleGoToPointFine::SetBlendedMoveAnim(CPed *)
unsigned int __fastcall CTaskSimpleGoToPointFine::SetBlendedMoveAnim(CTaskSimpleGoToPointFine *this, CPed *a2)
{
  int Association; // r4
  int v5; // r6
  int v6; // r10
  int *v7; // r11
  unsigned int result; // r0
  int v9; // r4
  int v10; // r0
  float v11; // s0
  float v12; // s0
  int v13; // r0
  float v14; // s2
  int v15; // r1
  CPed *v16; // r0
  __int16 v17; // r1
  float v18; // s0
  float v19; // s2
  CAnimBlendAssociation *v20; // [sp+4h] [bp-2Ch]

  Association = RpAnimBlendClumpGetAssociation();
  v5 = RpAnimBlendClumpGetAssociation();
  v6 = RpAnimBlendClumpGetAssociation();
  v20 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
  v7 = (int *)RpAnimBlendClumpGetAssociation();
  if ( (*((_DWORD *)a2 + 289) & 0x4000000) == 0 )
  {
    result = *((_DWORD *)a2 + 290) << 31;
    if ( !result )
      goto LABEL_10;
    goto LABEL_3;
  }
  if ( CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0) )
  {
    CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 0);
    return CTaskSimpleDuck::ControlDuckMove();
  }
  result = *((_DWORD *)a2 + 290) << 31;
  if ( result )
  {
LABEL_3:
    if ( v5 )
      CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v5, 0.0);
    if ( v6 )
      CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v6, 0.0);
    if ( v20 )
      CAnimBlendAssociation::SetCurrentTime(v20, 0.0);
    result = *((_DWORD *)a2 + 290) & 0xFFFFFFFE;
    *((_DWORD *)a2 + 290) = result;
  }
LABEL_10:
  if ( *((float *)this + 8) == 0.0 )
  {
    if ( !Association )
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    if ( v20 )
      (*(void (__fastcall **)(CAnimBlendAssociation *))(*(_DWORD *)v20 + 4))(v20);
    v9 = 1;
    result = CPed::SetMoveState(a2, 1);
  }
  else
  {
    if ( Association )
    {
      if ( v5 )
        CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v5, 0.0);
      if ( v6 )
        CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v6, 0.0);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)Association + 4))(Association);
    }
    if ( v7 )
    {
      v10 = *v7;
      v7[7] = -1065353216;
      result = (*(int (__fastcall **)(int *))(v10 + 4))(v7);
    }
    v11 = *((float *)this + 8);
    if ( v11 <= 1.0 )
    {
      if ( !v5 )
      {
        v5 = CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 0);
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 36) = 1065353216;
      }
      v17 = *(_WORD *)(v5 + 46);
      *(_DWORD *)(v5 + 24) = 1065353216;
      *(_DWORD *)(v5 + 28) = 0;
      *(_WORD *)(v5 + 46) = v17 | 1;
      if ( v6 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
      if ( v20 )
        (*(void (__fastcall **)(CAnimBlendAssociation *))(*(_DWORD *)v20 + 4))(v20);
      v9 = 4;
      v16 = a2;
      v15 = 4;
    }
    else if ( v11 <= 2.0 )
    {
      if ( !v5 )
      {
        v5 = CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 0);
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 36) = 1065353216;
      }
      *(_WORD *)(v5 + 46) |= 1u;
      v18 = *((float *)this + 8);
      *(_DWORD *)(v5 + 28) = 0;
      *(float *)(v5 + 24) = 2.0 - v18;
      if ( !v6 )
      {
        v6 = CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 1u);
        *(_DWORD *)(v6 + 24) = 0;
        *(_DWORD *)(v6 + 36) = 1065353216;
      }
      *(_WORD *)(v6 + 46) |= 1u;
      v19 = *((float *)this + 8);
      *(_DWORD *)(v6 + 28) = 0;
      *(float *)(v6 + 24) = v19 + -1.0;
      if ( v20 )
        (*(void (__fastcall **)(CAnimBlendAssociation *))(*(_DWORD *)v20 + 4))(v20);
      v9 = 6;
      v16 = a2;
      v15 = 6;
    }
    else
    {
      if ( v11 > 3.0 )
        return result;
      if ( v5 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
      if ( !v6 )
      {
        v6 = CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 1u);
        *(_DWORD *)(v6 + 24) = 0;
        *(_DWORD *)(v6 + 36) = 1065353216;
      }
      *(_WORD *)(v6 + 46) |= 1u;
      v12 = *((float *)this + 8);
      *(_DWORD *)(v6 + 28) = 0;
      *(float *)(v6 + 24) = 3.0 - v12;
      v13 = (int)v20;
      if ( !v20 )
      {
        v13 = CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 2u);
        *(_DWORD *)(v13 + 24) = 0;
        *(_DWORD *)(v13 + 36) = 1065353216;
      }
      *(_WORD *)(v13 + 46) |= 1u;
      v14 = *((float *)this + 8);
      v15 = 7;
      *(_DWORD *)(v13 + 28) = 0;
      v9 = 7;
      *(float *)(v13 + 24) = v14 + -2.0;
      v16 = a2;
    }
    result = CPed::SetMoveState(v16, v15);
    *((_DWORD *)a2 + 335) = v9;
  }
  *((_DWORD *)this + 2) = v9;
  return result;
}


// ============================================================

// Address: 0x517c68
// Original: _ZN24CTaskSimpleGoToPointFine9BaseRatioE10eMoveState
// Demangled: CTaskSimpleGoToPointFine::BaseRatio(eMoveState)
int __fastcall CTaskSimpleGoToPointFine::BaseRatio(int a1)
{
  unsigned int v1; // r0

  v1 = a1 - 4;
  if ( v1 <= 3 )
    return dword_517C78[v1];
  else
    return 0;
}


// ============================================================

// Address: 0x517c88
// Original: _ZN24CTaskSimpleGoToPointFine12SetTargetPosE7CVector
// Demangled: CTaskSimpleGoToPointFine::SetTargetPos(CVector)
int __fastcall CTaskSimpleGoToPointFine::SetTargetPos(int result, float a2, float a3, float a4)
{
  char v4; // r12

  if ( *(float *)(result + 12) != a2
    || *(float *)(result + 16) != a3
    || *(float *)(result + 20) != a4
    || *(float *)(result + 24) != 0.5 )
  {
    v4 = *(_BYTE *)(result + 28);
    *(float *)(result + 12) = a2;
    *(float *)(result + 16) = a3;
    *(float *)(result + 20) = a4;
    *(_DWORD *)(result + 24) = 1056964608;
    *(_BYTE *)(result + 28) = v4 & 0xD0 | 0x20;
  }
  return result;
}


// ============================================================

// Address: 0x517cfc
// Original: _ZN24CTaskSimpleGoToPointFine12SetMoveRatioEf
// Demangled: CTaskSimpleGoToPointFine::SetMoveRatio(float)
int __fastcall CTaskSimpleGoToPointFine::SetMoveRatio(int this, float a2)
{
  *(float *)(this + 32) = a2;
  return this;
}


// ============================================================

// Address: 0x51c3f8
// Original: _ZNK24CTaskSimpleGoToPointFine5CloneEv
// Demangled: CTaskSimpleGoToPointFine::Clone(void)
_DWORD *__fastcall CTaskSimpleGoToPointFine::Clone(CTaskSimpleGoToPointFine *this, unsigned int a2)
{
  CTaskSimpleGoTo *v3; // r0
  __int64 v4; // kr00_8
  __int64 v5; // kr08_8
  int v6; // r4
  _DWORD *result; // r0
  __int64 v8; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+Ch] [bp-Ch]

  v3 = (CTaskSimpleGoTo *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = *(_QWORD *)((char *)this + 20);
  v6 = *((_DWORD *)this + 8);
  v8 = v4;
  v9 = v5;
  CTaskSimpleGoTo::CTaskSimpleGoTo(v3, 4, (const CVector *)&v8, *((float *)&v5 + 1));
  result[8] = v6;
  *result = &off_66BDF8;
  return result;
}


// ============================================================

// Address: 0x51c434
// Original: _ZNK24CTaskSimpleGoToPointFine11GetTaskTypeEv
// Demangled: CTaskSimpleGoToPointFine::GetTaskType(void)
int __fastcall CTaskSimpleGoToPointFine::GetTaskType(CTaskSimpleGoToPointFine *this)
{
  return 926;
}


// ============================================================
