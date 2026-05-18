
// Address: 0x1996b0
// Original: j__ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this)
{
  return _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19b4f0
// Original: j__ZN49CTaskComplexObserveTrafficLightsAndAchieveHeadingC2Eif
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(int,float)
// attributes: thunk
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        int a2,
        float a3)
{
  _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeadingC2Eif(this, a2, a3);
}


// ============================================================

// Address: 0x4913b8
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateTask(void)
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskComplexObserveTrafficLightsAndAchieveHeading *v7; // r0
  float v8; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h] BYREF
  _BYTE v10[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v11[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v10, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, v4);
  v7 = (CTaskComplexObserveTrafficLightsAndAchieveHeading *)CTask::operator new((CTask *)&dword_14, v6);
  CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(v7, v9, v8);
}


// ============================================================

// Address: 0x4ecba0
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeadingC2Eif
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(int,float)
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CTaskComplexObserveTrafficLightsAndAchieveHeading(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        int a2,
        float a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v5 + 12) = a2;
  *(float *)(v5 + 16) = a3;
  *(_DWORD *)v5 = &off_669FA0;
}


// ============================================================

// Address: 0x4ecbc0
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeadingD2Ev
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::~CTaskComplexObserveTrafficLightsAndAchieveHeading()
// attributes: thunk
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::~CTaskComplexObserveTrafficLightsAndAchieveHeading(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ecbc4
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeadingD0Ev
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::~CTaskComplexObserveTrafficLightsAndAchieveHeading()
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::~CTaskComplexObserveTrafficLightsAndAchieveHeading(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ecbd4
// Original: _ZNK49CTaskComplexObserveTrafficLightsAndAchieveHeading13CreateSubTaskEi
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateSubTask(int)
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateSubTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        int a2)
{
  CTaskSimpleAchieveHeading *v3; // r0
  CTaskComplex *v4; // r0
  int v5; // r0

  if ( a2 == 224 )
  {
    v4 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, 0xE0u);
    CTaskComplex::CTaskComplex(v4);
    *(_WORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)v5 = &off_669F64;
  }
  else if ( a2 == 902 )
  {
    v3 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v3, *((float *)this + 4), 0.5, 0.2);
  }
}


// ============================================================

// Address: 0x4ecc38
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateNextSubTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        CPed *a2)
{
  int v2; // r4
  CTaskComplex *v3; // r0
  int v4; // r0

  v2 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 902 )
  {
    v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, 0x386u);
    CTaskComplex::CTaskComplex(v3);
    *(_WORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 0;
    v2 = v4;
    *(_DWORD *)v4 = &off_669F64;
  }
  return v2;
}


// ============================================================

// Address: 0x4ecc74
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::CreateFirstSubTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        CPed *a2)
{
  CTaskSimpleAchieveHeading *v3; // r0

  v3 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  return sub_19DE8C(v3, *((float *)this + 4), 0.5, 0.2);
}


// ============================================================

// Address: 0x4ecca4
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading14ControlSubTaskEP4CPed
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::ControlSubTask(CPed *)
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::ControlSubTask(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f312c
// Original: _ZNK49CTaskComplexObserveTrafficLightsAndAchieveHeading5CloneEv
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::Clone(void)
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::Clone(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_669FA0;
  return result;
}


// ============================================================

// Address: 0x4f3154
// Original: _ZNK49CTaskComplexObserveTrafficLightsAndAchieveHeading11GetTaskTypeEv
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::GetTaskType(void)
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::GetTaskType(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this)
{
  return 225;
}


// ============================================================

// Address: 0x4f3158
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::MakeAbortable(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4f3174
// Original: _ZN49CTaskComplexObserveTrafficLightsAndAchieveHeading9SerializeEv
// Demangled: CTaskComplexObserveTrafficLightsAndAchieveHeading::Serialize(void)
void __fastcall CTaskComplexObserveTrafficLightsAndAchieveHeading::Serialize(
        CTaskComplexObserveTrafficLightsAndAchieveHeading *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexObserveTrafficLightsAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexObserveTrafficLightsAndAchieveHeading *))(*(_DWORD *)this + 20))(this) == 225 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    j_free(v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskComplexObserveTrafficLightsAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(225, v9);
  }
}


// ============================================================
