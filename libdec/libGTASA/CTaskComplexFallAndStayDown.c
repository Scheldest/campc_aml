
// Address: 0x18c09c
// Original: j__ZN27CTaskComplexFallAndStayDownC2E11AnimationId12AssocGroupId
// Demangled: CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown(AnimationId,AssocGroupId)
// attributes: thunk
int CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown()
{
  return _ZN27CTaskComplexFallAndStayDownC2E11AnimationId12AssocGroupId();
}


// ============================================================

// Address: 0x18dbc8
// Original: j__ZN27CTaskComplexFallAndStayDown10CreateTaskEv
// Demangled: CTaskComplexFallAndStayDown::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexFallAndStayDown::CreateTask(CTaskComplexFallAndStayDown *this)
{
  return _ZN27CTaskComplexFallAndStayDown10CreateTaskEv(this);
}


// ============================================================

// Address: 0x490fd4
// Original: _ZN27CTaskComplexFallAndStayDown10CreateTaskEv
// Demangled: CTaskComplexFallAndStayDown::CreateTask(void)
int __fastcall CTaskComplexFallAndStayDown::CreateTask(CTaskComplexFallAndStayDown *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  int v8; // [sp+4h] [bp-14h] BYREF
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
  CTask::operator new((CTask *)&dword_14, v6);
  return CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown();
}


// ============================================================

// Address: 0x52bc48
// Original: _ZN27CTaskComplexFallAndStayDownC2E11AnimationId12AssocGroupId
// Demangled: CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown(AnimationId,AssocGroupId)
_DWORD *__fastcall CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown(CTaskComplex *a1, int a2, int a3)
{
  _DWORD *result; // r0

  CTaskComplex::CTaskComplex(a1);
  result[3] = a2;
  result[4] = a3;
  *result = &off_66CA78;
  return result;
}


// ============================================================

// Address: 0x52bc68
// Original: _ZN27CTaskComplexFallAndStayDownC2Ei
// Demangled: CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown(int)
void __fastcall CTaskComplexFallAndStayDown::CTaskComplexFallAndStayDown(
        CTaskComplexFallAndStayDown *this,
        unsigned int a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  *v3 = &off_66CA78;
  if ( a2 <= 3 )
    v3[3] = a2 + 24;
  v3[4] = 0;
}


// ============================================================

// Address: 0x52bc94
// Original: _ZN27CTaskComplexFallAndStayDownD2Ev
// Demangled: CTaskComplexFallAndStayDown::~CTaskComplexFallAndStayDown()
// attributes: thunk
void __fastcall CTaskComplexFallAndStayDown::~CTaskComplexFallAndStayDown(CTaskComplexFallAndStayDown *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52bc98
// Original: _ZN27CTaskComplexFallAndStayDownD0Ev
// Demangled: CTaskComplexFallAndStayDown::~CTaskComplexFallAndStayDown()
void __fastcall CTaskComplexFallAndStayDown::~CTaskComplexFallAndStayDown(CTaskComplexFallAndStayDown *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52bca8
// Original: _ZN27CTaskComplexFallAndStayDown13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFallAndStayDown::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFallAndStayDown::MakeAbortable(
        CTaskComplexFallAndStayDown *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v8; // r0
  int v9; // r2

  if ( a3 == 1 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 207 )
    {
      v8 = *((_DWORD *)this + 2);
      v9 = 1;
      return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v8 + 28))(v8, a2, v9, a4);
    }
  }
  else
  {
    if ( a3 == 2 )
    {
      v8 = *((_DWORD *)this + 2);
      v9 = 2;
      return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v8 + 28))(v8, a2, v9, a4);
    }
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 207 )
      (*(void (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        a3,
        a4);
  }
  return 0;
}


// ============================================================

// Address: 0x52bd0c
// Original: _ZN27CTaskComplexFallAndStayDown17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFallAndStayDown::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFallAndStayDown::CreateNextSubTask(CTaskComplexFallAndStayDown *this, CPed *a2)
{
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x52bd1c
// Original: _ZN27CTaskComplexFallAndStayDown13CreateSubTaskEi
// Demangled: CTaskComplexFallAndStayDown::CreateSubTask(int)
int __fastcall CTaskComplexFallAndStayDown::CreateSubTask(CTaskComplexFallAndStayDown *this, int a2)
{
  int v3; // r4
  CTaskSimple *v4; // r0
  __int64 v5; // kr00_8
  int v6; // r0

  v3 = 0;
  if ( a2 == 207 )
  {
    v4 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, 0xCFu);
    v5 = *(_QWORD *)((char *)this + 12);
    CTaskSimple::CTaskSimple(v4);
    *(_BYTE *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 12) = v5;
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 24) = 99999999;
    v3 = v6;
    *(_DWORD *)(v6 + 28) = 99999999;
    *(_DWORD *)v6 = &off_66CA08;
  }
  return v3;
}


// ============================================================

// Address: 0x52bd68
// Original: _ZN27CTaskComplexFallAndStayDown18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFallAndStayDown::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFallAndStayDown::CreateFirstSubTask(CTaskComplexFallAndStayDown *this, CPed *a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = v4;
  *(_QWORD *)(result + 20) = 0x5F5E0FF00000000LL;
  *(_DWORD *)(result + 28) = 99999999;
  *(_DWORD *)result = &off_66CA08;
  return result;
}


// ============================================================

// Address: 0x52bda4
// Original: _ZN27CTaskComplexFallAndStayDown14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFallAndStayDown::ControlSubTask(CPed *)
int __fastcall CTaskComplexFallAndStayDown::ControlSubTask(CTaskComplexFallAndStayDown *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x532b7c
// Original: _ZNK27CTaskComplexFallAndStayDown5CloneEv
// Demangled: CTaskComplexFallAndStayDown::Clone(void)
int __fastcall CTaskComplexFallAndStayDown::Clone(CTaskComplexFallAndStayDown *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_66CA78;
  return result;
}


// ============================================================

// Address: 0x532ba4
// Original: _ZNK27CTaskComplexFallAndStayDown11GetTaskTypeEv
// Demangled: CTaskComplexFallAndStayDown::GetTaskType(void)
int __fastcall CTaskComplexFallAndStayDown::GetTaskType(CTaskComplexFallAndStayDown *this)
{
  return 209;
}


// ============================================================

// Address: 0x532ba8
// Original: _ZN27CTaskComplexFallAndStayDown9SerializeEv
// Demangled: CTaskComplexFallAndStayDown::Serialize(void)
void __fastcall CTaskComplexFallAndStayDown::Serialize(CTaskComplexFallAndStayDown *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r6
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r5
  CGenericGameStorage *v9; // r4
  int v10; // r2
  int v11; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexFallAndStayDown *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexFallAndStayDown *))(*(_DWORD *)this + 20))(this) == 209 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    v8 = *((_DWORD *)this + 4);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    j_free(v9);
  }
  else
  {
    v11 = (*(int (__fastcall **)(CTaskComplexFallAndStayDown *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(209, v11);
  }
}


// ============================================================
