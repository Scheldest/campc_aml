
// Address: 0x199d7c
// Original: j__ZN30CTaskComplexGetUpAndStandStillC2Ev
// Demangled: CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(void)
// attributes: thunk
void __fastcall CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(CTaskComplexGetUpAndStandStill *this)
{
  _ZN30CTaskComplexGetUpAndStandStillC2Ev(this);
}


// ============================================================

// Address: 0x52b45c
// Original: _ZN30CTaskComplexGetUpAndStandStillC2Ev
// Demangled: CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(void)
void __fastcall CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(CTaskComplexGetUpAndStandStill *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66C9CC;
}


// ============================================================

// Address: 0x52b474
// Original: _ZN30CTaskComplexGetUpAndStandStillD2Ev
// Demangled: CTaskComplexGetUpAndStandStill::~CTaskComplexGetUpAndStandStill()
// attributes: thunk
void __fastcall CTaskComplexGetUpAndStandStill::~CTaskComplexGetUpAndStandStill(CTaskComplexGetUpAndStandStill *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52b478
// Original: _ZN30CTaskComplexGetUpAndStandStillD0Ev
// Demangled: CTaskComplexGetUpAndStandStill::~CTaskComplexGetUpAndStandStill()
void __fastcall CTaskComplexGetUpAndStandStill::~CTaskComplexGetUpAndStandStill(CTaskComplexGetUpAndStandStill *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52b488
// Original: _ZN30CTaskComplexGetUpAndStandStill13CreateSubTaskEi
// Demangled: CTaskComplexGetUpAndStandStill::CreateSubTask(int)
void __fastcall CTaskComplexGetUpAndStandStill::CreateSubTask(CTaskComplexGetUpAndStandStill *this, int a2)
{
  CTaskSimple *v2; // r0
  int v3; // r0
  CTaskSimpleStandStill *v4; // r0

  if ( a2 == 203 )
  {
    v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 0, 0, 0, 8.0);
  }
  else if ( a2 == 205 )
  {
    v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, 0xCDu);
    CTaskSimple::CTaskSimple(v2);
    *(_WORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)v3 = &off_66C998;
  }
}


// ============================================================

// Address: 0x52b4d8
// Original: _ZN30CTaskComplexGetUpAndStandStill17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGetUpAndStandStill::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexGetUpAndStandStill::CreateNextSubTask(CTaskComplexGetUpAndStandStill *this, CPed *a2)
{
  unsigned int v3; // r1
  CTaskSimpleStandStill *v4; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 205 )
  {
    if ( *(_BYTE *)(*((_DWORD *)this + 2) + 8) )
    {
      v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v3);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 0, 0, 0, 8.0);
    }
  }
}


// ============================================================

// Address: 0x52b514
// Original: _ZN30CTaskComplexGetUpAndStandStill18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGetUpAndStandStill::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGetUpAndStandStill::CreateFirstSubTask(CTaskComplexGetUpAndStandStill *this, CPed *a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v2);
  *(_WORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66C998;
  return result;
}


// ============================================================

// Address: 0x52b538
// Original: _ZN30CTaskComplexGetUpAndStandStill14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGetUpAndStandStill::ControlSubTask(CPed *)
int __fastcall CTaskComplexGetUpAndStandStill::ControlSubTask(CTaskComplexGetUpAndStandStill *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x532984
// Original: _ZNK30CTaskComplexGetUpAndStandStill5CloneEv
// Demangled: CTaskComplexGetUpAndStandStill::Clone(void)
_DWORD *__fastcall CTaskComplexGetUpAndStandStill::Clone(CTaskComplexGetUpAndStandStill *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66C9CC;
  return result;
}


// ============================================================

// Address: 0x5329a4
// Original: _ZNK30CTaskComplexGetUpAndStandStill11GetTaskTypeEv
// Demangled: CTaskComplexGetUpAndStandStill::GetTaskType(void)
int __fastcall CTaskComplexGetUpAndStandStill::GetTaskType(CTaskComplexGetUpAndStandStill *this)
{
  return 206;
}


// ============================================================

// Address: 0x5329a8
// Original: _ZN30CTaskComplexGetUpAndStandStill9SerializeEv
// Demangled: CTaskComplexGetUpAndStandStill::Serialize(void)
int __fastcall CTaskComplexGetUpAndStandStill::Serialize(CTaskComplexGetUpAndStandStill *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexGetUpAndStandStill *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexGetUpAndStandStill *))(*(_DWORD *)this + 20))(this);
  if ( result != 206 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexGetUpAndStandStill *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(206, v6);
  }
  return result;
}


// ============================================================
