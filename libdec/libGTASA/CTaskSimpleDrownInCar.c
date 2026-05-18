
// Address: 0x1a100c
// Original: j__ZN21CTaskSimpleDrownInCarC2Ev
// Demangled: CTaskSimpleDrownInCar::CTaskSimpleDrownInCar(void)
// attributes: thunk
void __fastcall CTaskSimpleDrownInCar::CTaskSimpleDrownInCar(CTaskSimpleDrownInCar *this)
{
  _ZN21CTaskSimpleDrownInCarC2Ev(this);
}


// ============================================================

// Address: 0x4eb4d0
// Original: _ZN21CTaskSimpleDrownInCarC2Ev
// Demangled: CTaskSimpleDrownInCar::CTaskSimpleDrownInCar(void)
void __fastcall CTaskSimpleDrownInCar::CTaskSimpleDrownInCar(CTaskSimpleDrownInCar *this)
{
  _DWORD *v1; // r0

  CTaskSimple::CTaskSimple(this);
  *v1 = &off_669DB4;
}


// ============================================================

// Address: 0x4eb4e8
// Original: _ZN21CTaskSimpleDrownInCarD2Ev
// Demangled: CTaskSimpleDrownInCar::~CTaskSimpleDrownInCar()
// attributes: thunk
void __fastcall CTaskSimpleDrownInCar::~CTaskSimpleDrownInCar(CTaskSimpleDrownInCar *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4eb4ec
// Original: _ZN21CTaskSimpleDrownInCarD0Ev
// Demangled: CTaskSimpleDrownInCar::~CTaskSimpleDrownInCar()
void __fastcall CTaskSimpleDrownInCar::~CTaskSimpleDrownInCar(CTaskSimpleDrownInCar *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eb4fc
// Original: _ZN21CTaskSimpleDrownInCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleDrownInCar::ProcessPed(CPed *)
int __fastcall CTaskSimpleDrownInCar::ProcessPed(CTaskSimpleDrownInCar *this, CPed *a2)
{
  float v3; // r2
  _BYTE v5[24]; // [sp+0h] [bp-18h] BYREF

  CPed::SetPedState(a2);
  *((_DWORD *)a2 + 289) &= ~0x200u;
  if ( (CPed *)FindPlayerPed(-1) == a2 )
    CStats::IncrementStat((CStats *)((char *)&dword_A8 + 2), 0, v3);
  if ( (CPed *)FindPlayerPed(-1) == a2 )
    *(_BYTE *)(*((_DWORD *)a2 + 356) + 58) = *(_BYTE *)(*((_DWORD *)a2 + 356) + 58) & 7 | 0x48;
  CEventDeath::CEventDeath((CEventDeath *)v5, 1);
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v5, 0);
  CEvent::~CEvent((CEvent *)v5);
  return 1;
}


// ============================================================

// Address: 0x4f28f0
// Original: _ZNK21CTaskSimpleDrownInCar5CloneEv
// Demangled: CTaskSimpleDrownInCar::Clone(void)
_DWORD *__fastcall CTaskSimpleDrownInCar::Clone(CTaskSimpleDrownInCar *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, a2);
  CTaskSimple::CTaskSimple(v2);
  *result = &off_669DB4;
  return result;
}


// ============================================================

// Address: 0x4f2910
// Original: _ZNK21CTaskSimpleDrownInCar11GetTaskTypeEv
// Demangled: CTaskSimpleDrownInCar::GetTaskType(void)
int __fastcall CTaskSimpleDrownInCar::GetTaskType(CTaskSimpleDrownInCar *this)
{
  return 216;
}


// ============================================================

// Address: 0x4f2914
// Original: _ZN21CTaskSimpleDrownInCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDrownInCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDrownInCar::MakeAbortable(CTaskSimpleDrownInCar *this, CPed *a2, int a3, const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x4f2918
// Original: _ZN21CTaskSimpleDrownInCar9SerializeEv
// Demangled: CTaskSimpleDrownInCar::Serialize(void)
int __fastcall CTaskSimpleDrownInCar::Serialize(CTaskSimpleDrownInCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDrownInCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleDrownInCar *))(*(_DWORD *)this + 20))(this);
  if ( result != 216 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleDrownInCar *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(216, v6);
  }
  return result;
}


// ============================================================
