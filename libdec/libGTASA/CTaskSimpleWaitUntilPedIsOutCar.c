
// Address: 0x19cab4
// Original: j__ZN31CTaskSimpleWaitUntilPedIsOutCarC2EP4CPedRK7CVector
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(CPed *,CVector const&)
// attributes: thunk
void __fastcall CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(
        CTaskSimpleWaitUntilPedIsOutCar *this,
        CPed *a2,
        const CVector *a3)
{
  _ZN31CTaskSimpleWaitUntilPedIsOutCarC2EP4CPedRK7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x506640
// Original: _ZN31CTaskSimpleWaitUntilPedIsOutCarC2EP4CPedRK7CVector
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(CPed *,CVector const&)
void __fastcall CTaskSimpleWaitUntilPedIsOutCar::CTaskSimpleWaitUntilPedIsOutCar(
        CTaskSimpleWaitUntilPedIsOutCar *this,
        CPed *a2,
        const CVector *a3)
{
  __int64 v6; // d16

  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 1;
  *(_DWORD *)this = &off_66B5D8;
  *((_DWORD *)this + 2) = a2;
  v6 = *(_QWORD *)a3;
  *((_DWORD *)this + 6) = *((_DWORD *)a3 + 2);
  *((_QWORD *)this + 2) = v6;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50668c
// Original: _ZN31CTaskSimpleWaitUntilPedIsOutCarD2Ev
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::~CTaskSimpleWaitUntilPedIsOutCar()
void __fastcall CTaskSimpleWaitUntilPedIsOutCar::~CTaskSimpleWaitUntilPedIsOutCar(
        CTaskSimpleWaitUntilPedIsOutCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B5D8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x5066b8
// Original: _ZN31CTaskSimpleWaitUntilPedIsOutCarD0Ev
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::~CTaskSimpleWaitUntilPedIsOutCar()
void __fastcall CTaskSimpleWaitUntilPedIsOutCar::~CTaskSimpleWaitUntilPedIsOutCar(
        CTaskSimpleWaitUntilPedIsOutCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B5D8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5066e8
// Original: _ZN31CTaskSimpleWaitUntilPedIsOutCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::ProcessPed(CPed *)
bool __fastcall CTaskSimpleWaitUntilPedIsOutCar::ProcessPed(CTaskSimpleWaitUntilPedIsOutCar *this, CPed *a2)
{
  int v4; // r0
  CTaskSimpleStandStill *v5; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v7; // r1
  float v9; // [sp+0h] [bp-38h]
  _BYTE v10[48]; // [sp+8h] [bp-30h] BYREF

  v4 = *((_DWORD *)this + 2);
  if ( !v4 )
    return 1;
  if ( *((_BYTE *)this + 12) )
  {
    *((_BYTE *)this + 12) = 0;
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v10, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v5, a2);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             *((CGeneral **)this + 4),
                                             *((float *)this + 5),
                                             0.0,
                                             0.0,
                                             v9);
    *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v7);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v10);
    v4 = *((_DWORD *)this + 2);
  }
  return *(unsigned __int8 *)(v4 + 1157) << 31 == 0;
}


// ============================================================

// Address: 0x50744c
// Original: _ZNK31CTaskSimpleWaitUntilPedIsOutCar5CloneEv
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::Clone(void)
int __fastcall CTaskSimpleWaitUntilPedIsOutCar::Clone(CTaskSimpleWaitUntilPedIsOutCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // d16

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 12) = 1;
  *(_DWORD *)v3 = &off_66B5D8;
  *(_DWORD *)(v3 + 8) = v4;
  v5 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  *(_QWORD *)(v3 + 16) = v5;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x50749c
// Original: _ZNK31CTaskSimpleWaitUntilPedIsOutCar11GetTaskTypeEv
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::GetTaskType(void)
int __fastcall CTaskSimpleWaitUntilPedIsOutCar::GetTaskType(CTaskSimpleWaitUntilPedIsOutCar *this)
{
  return 829;
}


// ============================================================

// Address: 0x5074a2
// Original: _ZN31CTaskSimpleWaitUntilPedIsOutCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitUntilPedIsOutCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleWaitUntilPedIsOutCar::MakeAbortable(
        CTaskSimpleWaitUntilPedIsOutCar *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================
