
// Address: 0x18d3e8
// Original: j__ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::ProcessPed(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this,
        CPed *a2)
{
  return _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a1318
// Original: j__ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10CreateTaskEv
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::CreateTask(CTaskSimpleWaitUntilLeaderAreaCodesMatch *this)
{
  return _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10CreateTaskEv(this);
}


// ============================================================

// Address: 0x491ce8
// Original: _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10CreateTaskEv
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::CreateTask(void)
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::CreateTask(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this,
        int a2,
        int a3)
{
  char v3; // r4
  char *v4; // r1
  CPed *Ped; // r4
  CTaskSimpleWaitUntilAreaCodesMatch *v6; // r0
  int result; // r0
  CPools *v8; // [sp+0h] [bp-10h] BYREF
  _BYTE v9[10]; // [sp+6h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, a3);
  v4 = (char *)v8 + 1;
  if ( v8 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v8, (int)v4);
  v6 = (CTaskSimpleWaitUntilAreaCodesMatch *)CTask::operator new((CTask *)&dword_38, (unsigned int)v4);
  CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(v6, Ped);
  *(_BYTE *)(result + 36) = 0;
  *(_BYTE *)(result + 52) = 0;
  *(_DWORD *)result = &off_66A858;
  return result;
}


// ============================================================

// Address: 0x4f1860
// Original: _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::MakeAbortable(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 != 2 )
    return 0;
  *((_DWORD *)a2 + 7) |= 1u;
  return 1;
}


// ============================================================

// Address: 0x4f1874
// Original: _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::ProcessPed(CPed *)
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::ProcessPed(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this,
        CPed *a2)
{
  int v4; // r0
  int v6; // r6
  int v7; // r0

  v4 = *((_DWORD *)this + 8);
  if ( !v4 )
    goto LABEL_7;
  if ( !CEntryExitManager::ms_exitEnterState )
  {
    if ( *(unsigned __int8 *)(v4 + 51) != *((unsigned __int8 *)a2 + 51)
      && (*((unsigned __int8 *)a2 + 1157) << 31 || CTaskSimpleStandStill::ProcessPed(this, a2) != 1) )
    {
      goto LABEL_10;
    }
LABEL_7:
    *((_DWORD *)a2 + 7) |= 1u;
    return 1;
  }
  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) && CTaskSimpleStandStill::ProcessPed(this, a2) )
    goto LABEL_7;
LABEL_10:
  if ( !*((_BYTE *)this + 52) )
  {
    v6 = *((_DWORD *)a2 + 272);
    v7 = (*(int (__fastcall **)(CTaskSimpleWaitUntilLeaderAreaCodesMatch *))(*(_DWORD *)this + 20))(this);
    if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(v6 + 4), v7) )
    {
      *((_BYTE *)this + 52) = 1;
      *((_DWORD *)a2 + 7) &= ~1u;
    }
  }
  return 0;
}


// ============================================================

// Address: 0x4f2168
// Original: _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatchD0Ev
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::~CTaskSimpleWaitUntilLeaderAreaCodesMatch()
void __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::~CTaskSimpleWaitUntilLeaderAreaCodesMatch(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 32);
  v2 = (CEntity *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66A6DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f2198
// Original: _ZNK40CTaskSimpleWaitUntilLeaderAreaCodesMatch5CloneEv
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::Clone(void)
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::Clone(
        CTaskSimpleWaitUntilLeaderAreaCodesMatch *this,
        unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_38, a2);
  v4 = (CEntity *)*((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_WORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 28) = 1090519040;
  *(_WORD *)(v3 + 24) = 1;
  *(_DWORD *)(v3 + 8) = 1000;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66A6DC;
  *(_DWORD *)(v3 + 32) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 32));
  *(_BYTE *)(v3 + 36) = 0;
  *(_BYTE *)(v3 + 52) = 0;
  *(_DWORD *)v3 = &off_66A858;
  return v3;
}


// ============================================================

// Address: 0x4f2208
// Original: _ZNK40CTaskSimpleWaitUntilLeaderAreaCodesMatch11GetTaskTypeEv
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::GetTaskType(void)
int __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::GetTaskType(CTaskSimpleWaitUntilLeaderAreaCodesMatch *this)
{
  return 278;
}


// ============================================================

// Address: 0x4f2210
// Original: _ZN40CTaskSimpleWaitUntilLeaderAreaCodesMatch9SerializeEv
// Demangled: CTaskSimpleWaitUntilLeaderAreaCodesMatch::Serialize(void)
void __fastcall CTaskSimpleWaitUntilLeaderAreaCodesMatch::Serialize(CTaskSimpleWaitUntilLeaderAreaCodesMatch *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleWaitUntilLeaderAreaCodesMatch *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleWaitUntilLeaderAreaCodesMatch *))(*(_DWORD *)this + 20))(this) == 278 )
  {
    v5 = (CPed *)*((_DWORD *)this + 8);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleWaitUntilLeaderAreaCodesMatch *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(278, v10);
  }
}


// ============================================================
