
// Address: 0x4eabc6
// Original: _ZN19CTaskComplexBeStill17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexBeStill::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexBeStill::CreateNextSubTask(CTaskComplexBeStill *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = v4 == 709;
  if ( v4 != 709 )
    v5 = v4 == 203;
  if ( v5 )
    return (*(int (__fastcall **)(CTaskComplexBeStill *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4eabf4
// Original: _ZN19CTaskComplexBeStill18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexBeStill::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexBeStill::CreateFirstSubTask(CTaskComplexBeStill *this, CVehicle **a2)
{
  CTaskSimple *v3; // r0
  int v4; // r0
  CTaskSimpleCarDrive *v5; // r0

  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v5 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, (unsigned int)a2);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive(v5, a2[356], 0, 0);
  }
  else
  {
    v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
    CTaskSimple::CTaskSimple(v3);
    *(_DWORD *)(v4 + 18) = 0;
    *(_DWORD *)(v4 + 14) = 0;
    *(_DWORD *)(v4 + 28) = 1090519040;
    *(_WORD *)(v4 + 24) = 1;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)v4 = &off_669C0C;
  }
}


// ============================================================

// Address: 0x4eac48
// Original: _ZN19CTaskComplexBeStill14ControlSubTaskEP4CPed
// Demangled: CTaskComplexBeStill::ControlSubTask(CPed *)
int __fastcall CTaskComplexBeStill::ControlSubTask(CTaskComplexBeStill *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f1e34
// Original: _ZN19CTaskComplexBeStillD0Ev
// Demangled: CTaskComplexBeStill::~CTaskComplexBeStill()
void __fastcall CTaskComplexBeStill::~CTaskComplexBeStill(CTaskComplexBeStill *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f1e44
// Original: _ZNK19CTaskComplexBeStill5CloneEv
// Demangled: CTaskComplexBeStill::Clone(void)
_DWORD *__fastcall CTaskComplexBeStill::Clone(CTaskComplexBeStill *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66A780;
  return result;
}


// ============================================================

// Address: 0x4f1e64
// Original: _ZNK19CTaskComplexBeStill11GetTaskTypeEv
// Demangled: CTaskComplexBeStill::GetTaskType(void)
int __fastcall CTaskComplexBeStill::GetTaskType(CTaskComplexBeStill *this)
{
  return 274;
}


// ============================================================

// Address: 0x4f1e6c
// Original: _ZN19CTaskComplexBeStill9SerializeEv
// Demangled: CTaskComplexBeStill::Serialize(void)
int __fastcall CTaskComplexBeStill::Serialize(CTaskComplexBeStill *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexBeStill *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexBeStill *))(*(_DWORD *)this + 20))(this);
  if ( result != 274 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexBeStill *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(274, v6);
  }
  return result;
}


// ============================================================
