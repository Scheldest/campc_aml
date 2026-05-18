
// Address: 0x19210c
// Original: j__ZN22CTaskComplexPassObjectC2EP4CPedh
// Demangled: CTaskComplexPassObject::CTaskComplexPassObject(CPed *,uchar)
// attributes: thunk
void __fastcall CTaskComplexPassObject::CTaskComplexPassObject(
        CTaskComplexPassObject *this,
        CPed *a2,
        unsigned __int8 a3)
{
  _ZN22CTaskComplexPassObjectC2EP4CPedh(this, a2, a3);
}


// ============================================================

// Address: 0x51acd8
// Original: _ZN22CTaskComplexPassObjectC2EP4CPedh
// Demangled: CTaskComplexPassObject::CTaskComplexPassObject(CPed *,uchar)
void __fastcall CTaskComplexPassObject::CTaskComplexPassObject(
        CTaskComplexPassObject *this,
        CPed *a2,
        unsigned __int8 a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 20) = 0;
  *((_BYTE *)this + 16) = a3;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &off_66BFFC;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x51ad1c
// Original: _ZN22CTaskComplexPassObjectD2Ev
// Demangled: CTaskComplexPassObject::~CTaskComplexPassObject()
void __fastcall CTaskComplexPassObject::~CTaskComplexPassObject(CTaskComplexPassObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BFFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51ad48
// Original: _ZN22CTaskComplexPassObjectD0Ev
// Demangled: CTaskComplexPassObject::~CTaskComplexPassObject()
void __fastcall CTaskComplexPassObject::~CTaskComplexPassObject(CTaskComplexPassObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BFFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x51ad78
// Original: _ZN22CTaskComplexPassObject13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexPassObject::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexPassObject::MakeAbortable(CTaskComplexPassObject *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 500);
  return 1;
}


// ============================================================

// Address: 0x51adac
// Original: _ZN22CTaskComplexPassObject7AbortIKEP4CPed
// Demangled: CTaskComplexPassObject::AbortIK(CPed *)
int __fastcall CTaskComplexPassObject::AbortIK(CTaskComplexPassObject *this, CPed *a2)
{
  int result; // r0

  result = IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2);
  if ( result )
    return sub_19A210((IKChainManager_c *)&g_ikChainMan, 0, a2, 500);
  return result;
}


// ============================================================

// Address: 0x51ade4
// Original: _ZN22CTaskComplexPassObject17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexPassObject::CreateNextSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexPassObject::CreateNextSubTask(CTaskComplexPassObject *this, CPed *a2)
{
  unsigned int v4; // r1
  CTaskSimpleStandStill *v5; // r5

  if ( *((_DWORD *)this + 3)
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 920 )
  {
    IKChainManager_c::PointArm(
      (int)&g_ikChainMan,
      (int)"CTaskComplexPassObject",
      0,
      a2,
      0,
      -1,
      (int)this + 20,
      0.25,
      250,
      30.0);
    v5 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v4);
    CTaskSimpleStandStill::CTaskSimpleStandStill(
      v5,
      (int)"gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity",
      0,
      0,
      8.0);
  }
  else
  {
    v5 = 0;
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
    {
      v5 = 0;
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 500);
    }
  }
  return v5;
}


// ============================================================

// Address: 0x51aea8
// Original: _ZN22CTaskComplexPassObject18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPassObject::CreateFirstSubTask(CPed *)
CTaskComplexTurnToFaceEntityOrCoord *__fastcall CTaskComplexPassObject::CreateFirstSubTask(CPed **this, CPed *a2)
{
  CTaskComplexTurnToFaceEntityOrCoord *v4; // r6
  CPed *v5; // r0
  CEntity *IsHolding; // r0
  CPed *v7; // r1
  int v8; // r0
  int v9; // r2
  float *v10; // r3
  bool v11; // zf
  float *v12; // r0
  float v13; // s2
  float v14; // s0
  float v15; // s4
  float *v16; // r3
  float v17; // s2
  float v18; // s0
  float v19; // s4
  __int64 v21; // r2
  float v22; // s2
  float v23; // s4
  float v24; // s0
  unsigned int v25; // r1
  float v26; // s10
  float v27; // s0

  if ( this[3] )
  {
    if ( CPed::IsPlayer(a2) || CPed::IsPlayer(this[3]) == 1 )
    {
      v4 = 0;
      if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
        goto LABEL_16;
      return v4;
    }
    v5 = a2;
    if ( !*((_BYTE *)this + 16) )
      v5 = this[3];
    IsHolding = (CEntity *)CPed::GetEntityThatThisPedIsHolding(v5);
    this[11] = IsHolding;
    if ( IsHolding )
      CEntity::RegisterReference(IsHolding, this + 11);
    v7 = this[3];
    v8 = *((_DWORD *)a2 + 5);
    v9 = *((_DWORD *)v7 + 5);
    v10 = (float *)(v8 + 48);
    v11 = v8 == 0;
    v12 = (float *)((char *)v7 + 4);
    if ( v11 )
      v10 = (float *)((char *)a2 + 4);
    v13 = *v10;
    v14 = v10[1];
    v15 = v10[2];
    v16 = (float *)((char *)v7 + 4);
    if ( v9 )
      v16 = (float *)(v9 + 48);
    v17 = *v16 - v13;
    v18 = v16[1] - v14;
    v19 = v16[2] - v15;
    if ( (float)((float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v19 * v19)) <= 2.25 )
    {
      v21 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x3E800000000LL;
      v22 = v17 * 0.5;
      *((_BYTE *)this + 40) = 1;
      *((_QWORD *)this + 4) = v21;
      v23 = v19 * 0.5;
      v24 = v18 * 0.5;
      v25 = *((_DWORD *)v7 + 5);
      if ( v25 )
        v12 = (float *)(v25 + 48);
      v26 = v12[2];
      v27 = v24 + v12[1];
      *((float *)this + 5) = v22 + *v12;
      *((float *)this + 6) = v27;
      *((float *)this + 7) = v23 + v26;
      v4 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v25);
      CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v4, this[3], 0.5, 0.2);
      return v4;
    }
  }
  v4 = 0;
  if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
  {
LABEL_16:
    v4 = 0;
    IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 500);
  }
  return v4;
}


// ============================================================

// Address: 0x51b028
// Original: _ZN22CTaskComplexPassObject14ControlSubTaskEP4CPed
// Demangled: CTaskComplexPassObject::ControlSubTask(CPed *)
int __fastcall CTaskComplexPassObject::ControlSubTask(CTaskComplexPassObject *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r5
  int ActiveTaskByType; // r0
  int v9; // r8
  int v10; // r9
  unsigned int v11; // r1
  CTask *v12; // r5
  _DWORD v14[9]; // [sp+14h] [bp-24h] BYREF

  v4 = *((_DWORD *)this + 3);
  if ( v4 )
  {
    if ( !*((_BYTE *)this + 40) )
      return *((_DWORD *)this + 2);
    if ( *((_BYTE *)this + 41) )
    {
      v5 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 41) = 0;
      *((_DWORD *)this + 8) = v5;
      v6 = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 8);
      v5 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v6 + *((_DWORD *)this + 9) > v5 )
      return *((_DWORD *)this + 2);
    if ( !*((_BYTE *)this + 16) )
    {
      if ( *((_DWORD *)this + 11) )
      {
        ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v4 + 1088) + 4), 307);
        if ( ActiveTaskByType )
        {
          v9 = *(_DWORD *)(ActiveTaskByType + 8);
          CTaskSimpleHoldEntity::DropEntity((CEntity **)ActiveTaskByType, *((CPed **)this + 3), 0);
          memset(v14, 0, 12);
          v10 = *((_DWORD *)a2 + 272);
          v12 = (CTask *)CTask::operator new((CTask *)&off_3C, v11);
          CTaskSimpleHoldEntity::CTaskSimpleHoldEntity((int)v12, v9, (int)v14, 6, 16, 191, 0, 1);
          CTaskManager::SetTaskSecondary((CTaskManager *)(v10 + 4), v12, 4);
        }
      }
    }
    v7 = 0;
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
    {
LABEL_15:
      v7 = 0;
      IKChainManager_c::AbortPointArm((IKChainManager_c *)&g_ikChainMan, 0, a2, 500);
    }
  }
  else
  {
    v7 = 0;
    if ( IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2) )
      goto LABEL_15;
  }
  return v7;
}


// ============================================================

// Address: 0x51c55c
// Original: _ZNK22CTaskComplexPassObject5CloneEv
// Demangled: CTaskComplexPassObject::Clone(void)
CTaskComplex *__fastcall CTaskComplexPassObject::Clone(CTaskComplexPassObject *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r5
  CTaskComplex *v5; // r4

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_30, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex(v3);
  *((_WORD *)v5 + 20) = 0;
  *((_BYTE *)v5 + 16) = (_BYTE)this;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *(_DWORD *)v5 = &off_66BFFC;
  *((_DWORD *)v5 + 3) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x51c5a8
// Original: _ZNK22CTaskComplexPassObject11GetTaskTypeEv
// Demangled: CTaskComplexPassObject::GetTaskType(void)
int __fastcall CTaskComplexPassObject::GetTaskType(CTaskComplexPassObject *this)
{
  return 1211;
}


// ============================================================
