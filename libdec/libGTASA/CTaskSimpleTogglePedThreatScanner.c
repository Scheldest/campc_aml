
// Address: 0x1965e8
// Original: j__ZN33CTaskSimpleTogglePedThreatScanner10ProcessPedEP4CPed
// Demangled: CTaskSimpleTogglePedThreatScanner::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleTogglePedThreatScanner::ProcessPed(CTaskSimpleTogglePedThreatScanner *this, CPed *a2)
{
  return _ZN33CTaskSimpleTogglePedThreatScanner10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ca20
// Original: j__ZN33CTaskSimpleTogglePedThreatScanner10CreateTaskEv
// Demangled: CTaskSimpleTogglePedThreatScanner::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleTogglePedThreatScanner::CreateTask(CTaskSimpleTogglePedThreatScanner *this)
{
  return _ZN33CTaskSimpleTogglePedThreatScanner10CreateTaskEv(this);
}


// ============================================================

// Address: 0x496c90
// Original: _ZN33CTaskSimpleTogglePedThreatScanner10CreateTaskEv
// Demangled: CTaskSimpleTogglePedThreatScanner::CreateTask(void)
int __fastcall CTaskSimpleTogglePedThreatScanner::CreateTask(CTaskSimpleTogglePedThreatScanner *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskSimple *v9; // r0
  char v10; // r4
  char v11; // r5
  char v12; // r6
  int result; // r0
  char v14; // [sp+7h] [bp-19h] BYREF
  char v15; // [sp+8h] [bp-18h] BYREF
  char v16; // [sp+9h] [bp-17h] BYREF
  _BYTE v17[2]; // [sp+Ah] [bp-16h] BYREF
  _BYTE v18[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v19[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 1, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 1, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 1, v6);
  v9 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], v8);
  v10 = v14;
  v11 = v15;
  v12 = v16;
  CTaskSimple::CTaskSimple(v9);
  *(_BYTE *)(result + 8) = v12;
  *(_DWORD *)result = &off_66A7BC;
  *(_BYTE *)(result + 9) = v11;
  *(_BYTE *)(result + 10) = v10;
  return result;
}


// ============================================================

// Address: 0x4efa8c
// Original: _ZN33CTaskSimpleTogglePedThreatScanner10ProcessPedEP4CPed
// Demangled: CTaskSimpleTogglePedThreatScanner::ProcessPed(CPed *)
int __fastcall CTaskSimpleTogglePedThreatScanner::ProcessPed(CTaskSimpleTogglePedThreatScanner *this, CPed *a2)
{
  int v2; // r1
  char v3; // r2
  int result; // r0

  v2 = *((_DWORD *)a2 + 272);
  v3 = *((_BYTE *)this + 10);
  *(_WORD *)(v2 + 584) = *((_WORD *)this + 4);
  result = 1;
  *(_BYTE *)(v2 + 586) = v3;
  return result;
}


// ============================================================

// Address: 0x4f1ed8
// Original: _ZN33CTaskSimpleTogglePedThreatScannerD0Ev
// Demangled: CTaskSimpleTogglePedThreatScanner::~CTaskSimpleTogglePedThreatScanner()
void __fastcall CTaskSimpleTogglePedThreatScanner::~CTaskSimpleTogglePedThreatScanner(
        CTaskSimpleTogglePedThreatScanner *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f1ee8
// Original: _ZNK33CTaskSimpleTogglePedThreatScanner5CloneEv
// Demangled: CTaskSimpleTogglePedThreatScanner::Clone(void)
int __fastcall CTaskSimpleTogglePedThreatScanner::Clone(CTaskSimpleTogglePedThreatScanner *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  char v4; // r5
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  v4 = *((_BYTE *)this + 10);
  LOWORD(this) = *((_WORD *)this + 4);
  CTaskSimple::CTaskSimple(v3);
  *(_WORD *)(result + 8) = (_WORD)this;
  *(_BYTE *)(result + 10) = v4;
  *(_DWORD *)result = &off_66A7BC;
  return result;
}


// ============================================================

// Address: 0x4f1f10
// Original: _ZNK33CTaskSimpleTogglePedThreatScanner11GetTaskTypeEv
// Demangled: CTaskSimpleTogglePedThreatScanner::GetTaskType(void)
int __fastcall CTaskSimpleTogglePedThreatScanner::GetTaskType(CTaskSimpleTogglePedThreatScanner *this)
{
  return 1301;
}


// ============================================================

// Address: 0x4f1f16
// Original: _ZN33CTaskSimpleTogglePedThreatScanner13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleTogglePedThreatScanner::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleTogglePedThreatScanner::MakeAbortable(
        CTaskSimpleTogglePedThreatScanner *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x4f1f1c
// Original: _ZN33CTaskSimpleTogglePedThreatScanner9SerializeEv
// Demangled: CTaskSimpleTogglePedThreatScanner::Serialize(void)
int __fastcall CTaskSimpleTogglePedThreatScanner::Serialize(CTaskSimpleTogglePedThreatScanner *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleTogglePedThreatScanner *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleTogglePedThreatScanner *))(*(_DWORD *)this + 20))(this) == 1301 )
  {
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskSimpleTogglePedThreatScanner *)((char *)this + 8),
      (char *)&stderr + 1,
      v5);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskSimpleTogglePedThreatScanner *)((char *)this + 9),
      (char *)&stderr + 1,
      v6);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleTogglePedThreatScanner *)((char *)this + 10), (char *)&stderr + 1, v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleTogglePedThreatScanner *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1301, v9);
  }
}


// ============================================================
