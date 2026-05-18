
// Address: 0x19206c
// Original: j__ZN22CTaskComplexWaitForBusC2Ev
// Demangled: CTaskComplexWaitForBus::CTaskComplexWaitForBus(void)
// attributes: thunk
void __fastcall CTaskComplexWaitForBus::CTaskComplexWaitForBus(CTaskComplexWaitForBus *this)
{
  _ZN22CTaskComplexWaitForBusC2Ev(this);
}


// ============================================================

// Address: 0x4ee4c0
// Original: _ZN22CTaskComplexWaitForBusC2Ev
// Demangled: CTaskComplexWaitForBus::CTaskComplexWaitForBus(void)
void __fastcall CTaskComplexWaitForBus::CTaskComplexWaitForBus(CTaskComplexWaitForBus *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  v1[3] = 0;
  *v1 = &off_66A1F0;
}


// ============================================================

// Address: 0x4ee4dc
// Original: _ZN22CTaskComplexWaitForBusD2Ev
// Demangled: CTaskComplexWaitForBus::~CTaskComplexWaitForBus()
// attributes: thunk
void __fastcall CTaskComplexWaitForBus::~CTaskComplexWaitForBus(CTaskComplexWaitForBus *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ee4e0
// Original: _ZN22CTaskComplexWaitForBusD0Ev
// Demangled: CTaskComplexWaitForBus::~CTaskComplexWaitForBus()
void __fastcall CTaskComplexWaitForBus::~CTaskComplexWaitForBus(CTaskComplexWaitForBus *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ee4f0
// Original: _ZN22CTaskComplexWaitForBus18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBus::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexWaitForBus::CreateFirstSubTask(CTaskComplexWaitForBus *this, CPed *a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)a2);
  CTaskSimple::CTaskSimple(v2);
  result[2] = 0;
  *result = &off_66A22C;
  return result;
}


// ============================================================

// Address: 0x4ee514
// Original: _ZN22CTaskComplexWaitForBus17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBus::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexWaitForBus::CreateNextSubTask(CTaskComplexWaitForBus *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  CTaskComplexEnterCarAsPassenger *v6; // r0
  int v7; // r1
  const CPed *PlayerPed; // r5

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 700 )
  {
    v7 = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 7) |= 0x800u;
    *((_DWORD *)a2 + 289) = v7 | 0x20000000;
    PlayerPed = (const CPed *)FindPlayerPed(-1);
    if ( PlayerPed
      && (CVehicle::IsPassenger(*((CVehicle **)this + 3), PlayerPed)
       || CVehicle::IsDriver(*((CVehicle **)this + 3), PlayerPed) == 1) )
    {
      *(_DWORD *)(*((_DWORD *)PlayerPed + 273) + 128) += 5;
    }
  }
  else if ( v4 == 238 )
  {
    *((_DWORD *)this + 3) = *(_DWORD *)(*((_DWORD *)this + 2) + 8);
    v6 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, v5);
    CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v6, *((CVehicle **)this + 3), 0, 0);
  }
}


// ============================================================

// Address: 0x4ee58e
// Original: _ZN22CTaskComplexWaitForBus14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWaitForBus::ControlSubTask(CPed *)
int __fastcall CTaskComplexWaitForBus::ControlSubTask(CTaskComplexWaitForBus *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f36d4
// Original: _ZNK22CTaskComplexWaitForBus5CloneEv
// Demangled: CTaskComplexWaitForBus::Clone(void)
_DWORD *__fastcall CTaskComplexWaitForBus::Clone(CTaskComplexWaitForBus *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  CTaskComplex::CTaskComplex(v2);
  result[3] = 0;
  *result = &off_66A1F0;
  return result;
}


// ============================================================

// Address: 0x4f36f8
// Original: _ZNK22CTaskComplexWaitForBus11GetTaskTypeEv
// Demangled: CTaskComplexWaitForBus::GetTaskType(void)
int __fastcall CTaskComplexWaitForBus::GetTaskType(CTaskComplexWaitForBus *this)
{
  return 237;
}


// ============================================================

// Address: 0x4f36fc
// Original: _ZN22CTaskComplexWaitForBus9SerializeEv
// Demangled: CTaskComplexWaitForBus::Serialize(void)
int __fastcall CTaskComplexWaitForBus::Serialize(CTaskComplexWaitForBus *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexWaitForBus *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexWaitForBus *))(*(_DWORD *)this + 20))(this);
  if ( result != 237 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexWaitForBus *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(237, v6);
  }
  return result;
}


// ============================================================
