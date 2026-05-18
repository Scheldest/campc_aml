
// Address: 0x193f08
// Original: j__ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUseC2EP8CVehicleiRK7CVectori
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(CVehicle *,int,CVector const&,int)
// attributes: thunk
void __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        CVehicle *a2,
        int a3,
        const CVector *a4,
        int a5)
{
  _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUseC2EP8CVehicleiRK7CVectori(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x50240c
// Original: _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUseC2EP8CVehicleiRK7CVectori
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(CVehicle *,int,CVector const&,int)
void __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        CVehicle *a2,
        unsigned int a3,
        const CVector *a4,
        int a5)
{
  __int64 v6; // r8
  unsigned int v9; // r1
  CTaskSimpleGoToPoint *v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r6

  v6 = a3;
  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)this = &off_66B210;
  v10 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v9);
  CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v10, a5, a4, 0.5, 0, 0);
  *((_DWORD *)this + 2) = v11;
  v13 = CTask::operator new((CTask *)&dword_14, v12);
  CTaskSimple::CTaskSimple((CTaskSimple *)v13);
  *(_DWORD *)v13 = &off_66B1DC;
  *(_QWORD *)(v13 + 12) = v6;
  *(_DWORD *)(v13 + 8) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)(v13 + 8));
  *((_DWORD *)this + 3) = v13;
}


// ============================================================

// Address: 0x502490
// Original: _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUseD2Ev
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::~CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse()
void __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::~CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this)
{
  int v2; // r0
  int v3; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B210;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x5024c8
// Original: _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUseD0Ev
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::~CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse()
void __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::~CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B210;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x502504
// Original: _ZNK48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse5CloneEv
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::Clone(void)
void __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::Clone(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        unsigned int a2)
{
  CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *v3; // r0

  v3 = (CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse(
    v3,
    *(CVehicle **)(*((_DWORD *)this + 3) + 8),
    *(_DWORD *)(*((_DWORD *)this + 3) + 12),
    (const CVector *)(*((_DWORD *)this + 2) + 12),
    *(_DWORD *)(*((_DWORD *)this + 2) + 8));
}


// ============================================================

// Address: 0x502528
// Original: _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::ProcessPed(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        CPed *a2)
{
  int v4; // r0
  int v5; // r1
  float *v6; // r2
  int v7; // r0
  float v8; // s0
  float v9; // s6
  float v10; // s2
  char v11; // r1
  CTaskSimpleStandStill *v12; // r0
  float v14; // [sp+8h] [bp-28h] BYREF
  float v15; // [sp+Ch] [bp-24h]
  float v16; // [sp+10h] [bp-20h]

  CCarEnterExit::GetPositionToOpenCarDoor(
    (CCarEnterExit *)&v14,
    *(const CVehicle **)(*((_DWORD *)this + 3) + 8),
    *(_DWORD *)(*((_DWORD *)this + 3) + 12));
  v4 = *(_DWORD *)(*((_DWORD *)this + 3) + 8);
  v5 = *(_DWORD *)(v4 + 20);
  v6 = (float *)(v5 + 48);
  if ( !v5 )
    v6 = (float *)(v4 + 4);
  v7 = *((_DWORD *)this + 2);
  v8 = *v6 + (float)((float)(v14 - *v6) + (float)(v14 - *v6));
  v9 = v6[1] + (float)((float)(v15 - v6[1]) + (float)(v15 - v6[1]));
  v10 = v6[2] + (float)((float)(v16 - v6[2]) + (float)(v16 - v6[2]));
  if ( *(float *)(v7 + 12) != v8 || *(float *)(v7 + 16) != v9 || *(float *)(v7 + 24) != 0.5 )
  {
    v11 = *(_BYTE *)(v7 + 28);
    *(float *)(v7 + 12) = v8;
    *(float *)(v7 + 16) = v9;
    *(float *)(v7 + 20) = v10;
    *(_DWORD *)(v7 + 24) = 1056964608;
    *(_BYTE *)(v7 + 28) = v11 & 0xD0 | 0x20;
    v7 = *((_DWORD *)this + 2);
  }
  if ( (*(int (__fastcall **)(int, CPed *))(*(_DWORD *)v7 + 36))(v7, a2) != 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 3) + 36))(*((_DWORD *)this + 3), a2);
  CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)&v14, -1, 0, 0, 8.0);
  CTaskSimpleStandStill::ProcessPed(v12, a2);
  CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)&v14);
  return 1;
}


// ============================================================

// Address: 0x502634
// Original: _ZNK48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse13ComputeTargetER7CVector
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::ComputeTarget(CVector &)
int __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::ComputeTarget(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        CVector *a2)
{
  int result; // r0
  int v5; // r1
  float *v6; // r2
  float v7; // s2
  float v8; // s4
  float v9; // [sp+4h] [bp-14h] BYREF
  float v10; // [sp+8h] [bp-10h]
  float v11; // [sp+Ch] [bp-Ch]

  CCarEnterExit::GetPositionToOpenCarDoor(
    (CCarEnterExit *)&v9,
    *(const CVehicle **)(*((_DWORD *)this + 3) + 8),
    *(_DWORD *)(*((_DWORD *)this + 3) + 12));
  result = *(_DWORD *)(*((_DWORD *)this + 3) + 8);
  v5 = *(_DWORD *)(result + 20);
  v6 = (float *)(v5 + 48);
  if ( !v5 )
    v6 = (float *)(result + 4);
  v7 = v6[1] + (float)((float)(v10 - v6[1]) + (float)(v10 - v6[1]));
  v8 = v6[2] + (float)((float)(v11 - v6[2]) + (float)(v11 - v6[2]));
  *(float *)a2 = *v6 + (float)((float)(v9 - *v6) + (float)(v9 - *v6));
  *((float *)a2 + 1) = v7;
  *((float *)a2 + 2) = v8;
  return result;
}


// ============================================================

// Address: 0x506e26
// Original: _ZNK48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse11GetTaskTypeEv
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::GetTaskType(void)
int __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::GetTaskType(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this)
{
  return 828;
}


// ============================================================

// Address: 0x506e2c
// Original: _ZN48CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse::MakeAbortable(
        CTaskSimpleCarGoToPointNearDoorUntilDoorNotInUse *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================
