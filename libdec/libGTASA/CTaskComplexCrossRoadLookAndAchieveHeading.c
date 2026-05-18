
// Address: 0x1970ec
// Original: j__ZN42CTaskComplexCrossRoadLookAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CreateTask(CTaskComplexCrossRoadLookAndAchieveHeading *this)
{
  return _ZN42CTaskComplexCrossRoadLookAndAchieveHeading10CreateTaskEv(this);
}


// ============================================================

// Address: 0x198cec
// Original: j__ZN42CTaskComplexCrossRoadLookAndAchieveHeadingC2Eif
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(int,float)
// attributes: thunk
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        int a2,
        float a3)
{
  _ZN42CTaskComplexCrossRoadLookAndAchieveHeadingC2Eif(this, a2, a3);
}


// ============================================================

// Address: 0x491430
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading10CreateTaskEv
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CreateTask(void)
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CreateTask(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskComplexCrossRoadLookAndAchieveHeading *v7; // r0
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
  v7 = (CTaskComplexCrossRoadLookAndAchieveHeading *)CTask::operator new((CTask *)&dword_14, v6);
  CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(v7, v9, v8);
}


// ============================================================

// Address: 0x4ecca8
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeadingC2Eif
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(int,float)
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CTaskComplexCrossRoadLookAndAchieveHeading(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        int a2,
        float a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v5 + 12) = a2;
  *(float *)(v5 + 16) = a3;
  *(_DWORD *)v5 = &off_669FDC;
}


// ============================================================

// Address: 0x4eccc8
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeadingD2Ev
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::~CTaskComplexCrossRoadLookAndAchieveHeading()
// attributes: thunk
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::~CTaskComplexCrossRoadLookAndAchieveHeading(
        CTaskComplexCrossRoadLookAndAchieveHeading *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ecccc
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeadingD0Ev
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::~CTaskComplexCrossRoadLookAndAchieveHeading()
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::~CTaskComplexCrossRoadLookAndAchieveHeading(
        CTaskComplexCrossRoadLookAndAchieveHeading *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eccdc
// Original: _ZNK42CTaskComplexCrossRoadLookAndAchieveHeading13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CreateSubTask(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        int a2,
        CPed *a3)
{
  CTaskSimpleAchieveHeading *v5; // r4
  int v6; // r0

  v5 = 0;
  if ( a2 == 400 )
  {
    v6 = CTask::operator new((CTask *)&dword_20, 0x190u);
    return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v6, *((_DWORD *)a3 + 312), 4, 1082130432, 0);
  }
  else if ( a2 == 902 )
  {
    v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v5, *((float *)this + 4), 0.5, 0.2);
  }
  return (int)v5;
}


// ============================================================

// Address: 0x4ecd48
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CreateNextSubTask(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        CPed *a2)
{
  int v3; // r5
  int v4; // r0

  v3 = 0;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 902 )
  {
    v4 = CTask::operator new((CTask *)&dword_20, 0x386u);
    return CTaskSimpleRunAnim::CTaskSimpleRunAnim(v4, *((_DWORD *)a2 + 312), 4, 1082130432, 0);
  }
  return v3;
}


// ============================================================

// Address: 0x4ecd80
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexCrossRoadLookAndAchieveHeading::CreateFirstSubTask(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        CPed *a2)
{
  CTaskSimpleAchieveHeading *v3; // r0

  v3 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  return sub_19DE8C(v3, *((float *)this + 4), 0.5, 0.2);
}


// ============================================================

// Address: 0x4ecdb0
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading14ControlSubTaskEP4CPed
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::ControlSubTask(CPed *)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::ControlSubTask(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f323c
// Original: _ZNK42CTaskComplexCrossRoadLookAndAchieveHeading5CloneEv
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::Clone(void)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::Clone(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_669FDC;
  return result;
}


// ============================================================

// Address: 0x4f3264
// Original: _ZNK42CTaskComplexCrossRoadLookAndAchieveHeading11GetTaskTypeEv
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::GetTaskType(void)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::GetTaskType(
        CTaskComplexCrossRoadLookAndAchieveHeading *this)
{
  return 227;
}


// ============================================================

// Address: 0x4f3268
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::MakeAbortable(
        CTaskComplexCrossRoadLookAndAchieveHeading *this,
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

// Address: 0x4f3284
// Original: _ZN42CTaskComplexCrossRoadLookAndAchieveHeading9SerializeEv
// Demangled: CTaskComplexCrossRoadLookAndAchieveHeading::Serialize(void)
void __fastcall CTaskComplexCrossRoadLookAndAchieveHeading::Serialize(CTaskComplexCrossRoadLookAndAchieveHeading *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexCrossRoadLookAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexCrossRoadLookAndAchieveHeading *))(*(_DWORD *)this + 20))(this) == 227 )
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
    v9 = (*(int (__fastcall **)(CTaskComplexCrossRoadLookAndAchieveHeading *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(227, v9);
  }
}


// ============================================================
