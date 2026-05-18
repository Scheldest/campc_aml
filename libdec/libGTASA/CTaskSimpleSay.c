
// Address: 0x19cef4
// Original: j__ZN14CTaskSimpleSay10CreateTaskEv
// Demangled: CTaskSimpleSay::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleSay::CreateTask(CTaskSimpleSay *this)
{
  return _ZN14CTaskSimpleSay10CreateTaskEv(this);
}


// ============================================================

// Address: 0x3574b4
// Original: _ZN14CTaskSimpleSayD0Ev
// Demangled: CTaskSimpleSay::~CTaskSimpleSay()
void __fastcall CTaskSimpleSay::~CTaskSimpleSay(CTaskSimpleSay *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x3574c4
// Original: _ZNK14CTaskSimpleSay5CloneEv
// Demangled: CTaskSimpleSay::Clone(void)
int __fastcall CTaskSimpleSay::Clone(CTaskSimpleSay *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple(v3);
  *(_QWORD *)(result + 8) = v4;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_665794;
  return result;
}


// ============================================================

// Address: 0x3574f4
// Original: _ZNK14CTaskSimpleSay11GetTaskTypeEv
// Demangled: CTaskSimpleSay::GetTaskType(void)
int __fastcall CTaskSimpleSay::GetTaskType(CTaskSimpleSay *this)
{
  return 301;
}


// ============================================================

// Address: 0x3574fa
// Original: _ZN14CTaskSimpleSay13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSay::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSay::MakeAbortable(CTaskSimpleSay *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x357500
// Original: _ZN14CTaskSimpleSay9SerializeEv
// Demangled: CTaskSimpleSay::Serialize(void)
void __fastcall CTaskSimpleSay::Serialize(CTaskSimpleSay *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSay *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSay *))(*(_DWORD *)this + 20))(this) == 301 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_4, v8);
    j_free(v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleSay *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(301, v9);
  }
}


// ============================================================

// Address: 0x3575cc
// Original: _ZN14CTaskSimpleSay10ProcessPedEP4CPed
// Demangled: CTaskSimpleSay::ProcessPed(CPed *)
bool __fastcall CTaskSimpleSay::ProcessPed(CTaskSimpleSay *this, CPed *a2)
{
  int v3; // r2
  int v4; // r5
  unsigned int v5; // r0
  unsigned int v6; // r1

  if ( !*((_BYTE *)this + 24) )
  {
    v3 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 5) = v3;
    *((_BYTE *)this + 24) = 1;
  }
  v4 = 0;
  CPed::Say(a2, *((_WORD *)this + 4), 0, 1.0, 0, 0, 0);
  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v5 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 25) = 0;
      *((_DWORD *)this + 4) = v5;
      v6 = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 4);
      v5 = CTimer::m_snTimeInMilliseconds;
    }
    return v6 + *((_DWORD *)this + 5) <= v5;
  }
  return v4;
}


// ============================================================

// Address: 0x491d58
// Original: _ZN14CTaskSimpleSay10CreateTaskEv
// Demangled: CTaskSimpleSay::CreateTask(void)
int __fastcall CTaskSimpleSay::CreateTask(CTaskSimpleSay *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskSimple *v7; // r0
  int v8; // r4
  int v9; // r5
  int result; // r0
  int v11; // [sp+4h] [bp-14h] BYREF
  int v12; // [sp+8h] [bp-10h] BYREF
  _BYTE v13[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v14[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  v7 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v6);
  v8 = v11;
  v9 = v12;
  CTaskSimple::CTaskSimple(v7);
  *(_DWORD *)(result + 8) = v9;
  *(_DWORD *)result = &off_665794;
  *(_DWORD *)(result + 12) = v8;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


// ============================================================
