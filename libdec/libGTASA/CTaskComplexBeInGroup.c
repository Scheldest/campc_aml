
// Address: 0x19283c
// Original: j__ZN21CTaskComplexBeInGroup10CreateTaskEv
// Demangled: CTaskComplexBeInGroup::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexBeInGroup::CreateTask(CTaskComplexBeInGroup *this)
{
  return _ZN21CTaskComplexBeInGroup10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19804c
// Original: j__ZN21CTaskComplexBeInGroup25MonitorSecondaryGroupTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::MonitorSecondaryGroupTask(CPed *)
// attributes: thunk
int __fastcall CTaskComplexBeInGroup::MonitorSecondaryGroupTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  return _ZN21CTaskComplexBeInGroup25MonitorSecondaryGroupTaskEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ea58
// Original: j__ZN21CTaskComplexBeInGroupC2Eib
// Demangled: CTaskComplexBeInGroup::CTaskComplexBeInGroup(int,bool)
// attributes: thunk
void __fastcall CTaskComplexBeInGroup::CTaskComplexBeInGroup(CTaskComplexBeInGroup *this, int a2, bool a3)
{
  _ZN21CTaskComplexBeInGroupC2Eib(this, a2, a3);
}


// ============================================================

// Address: 0x4915f8
// Original: _ZN21CTaskComplexBeInGroup10CreateTaskEv
// Demangled: CTaskComplexBeInGroup::CreateTask(void)
void __fastcall CTaskComplexBeInGroup::CreateTask(CTaskComplexBeInGroup *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskComplexBeInGroup *v9; // r0
  bool v10; // [sp+7h] [bp-19h] BYREF
  int v11; // [sp+8h] [bp-18h] BYREF
  _BYTE v12[6]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v13[2]; // [sp+12h] [bp-Eh] BYREF
  _BYTE v14[2]; // [sp+14h] [bp-Ch] BYREF
  _BYTE v15[10]; // [sp+16h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 1, v6);
  v9 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v8);
  CTaskComplexBeInGroup::CTaskComplexBeInGroup(v9, v11, v10);
}


// ============================================================

// Address: 0x4eeb74
// Original: _ZN21CTaskComplexBeInGroupC2Eib
// Demangled: CTaskComplexBeInGroup::CTaskComplexBeInGroup(int,bool)
void __fastcall CTaskComplexBeInGroup::CTaskComplexBeInGroup(CTaskComplexBeInGroup *this, int a2, bool a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v5 + 12) = a2;
  *(_BYTE *)(v5 + 16) = a3;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 200;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = -1;
  *(_DWORD *)v5 = &off_66A2D0;
}


// ============================================================

// Address: 0x4eeba8
// Original: _ZN21CTaskComplexBeInGroupD2Ev
// Demangled: CTaskComplexBeInGroup::~CTaskComplexBeInGroup()
// attributes: thunk
void __fastcall CTaskComplexBeInGroup::~CTaskComplexBeInGroup(CTaskComplexBeInGroup *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4eebac
// Original: _ZN21CTaskComplexBeInGroupD0Ev
// Demangled: CTaskComplexBeInGroup::~CTaskComplexBeInGroup()
void __fastcall CTaskComplexBeInGroup::~CTaskComplexBeInGroup(CTaskComplexBeInGroup *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eebbc
// Original: _ZN21CTaskComplexBeInGroup13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexBeInGroup::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexBeInGroup::MakeAbortable(CTaskComplexBeInGroup *this, CPed *a2, int a3, const CEvent *a4)
{
  int v8; // r2
  CTask *v9; // r0
  int *v10; // r1
  CPedGroupIntelligence *v11; // r9
  CTask *v12; // r0

  if ( a3 == 2 )
  {
    v8 = *((_DWORD *)this + 3);
    v9 = (CTask *)*((_DWORD *)this + 6);
    v10 = &CPedGroups::ms_groups[181 * v8];
    v11 = (CPedGroupIntelligence *)(v10 + 12);
    if ( v9 )
    {
      if ( CTask::IsTaskPtr(v9, v10) == 1 )
        CPedGroupIntelligence::ReportFinishedTask(v11, a2, *((const CTask **)this + 6));
      *((_DWORD *)this + 6) = 0;
    }
    v12 = (CTask *)*((_DWORD *)this + 8);
    if ( v12 )
    {
      if ( CTask::IsTaskPtr(v12, v10) == 1 )
        CPedGroupIntelligence::ReportFinishedTask(v11, a2, *((const CTask **)this + 8));
      *((_DWORD *)this + 8) = 0;
    }
  }
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4eec38
// Original: _ZN21CTaskComplexBeInGroup17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexBeInGroup::CreateNextSubTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  __int64 v4; // kr00_8
  CPedGroupIntelligence *v5; // r6
  int TaskMain; // r0
  int v7; // r5

  v4 = *((_QWORD *)this + 1);
  v5 = (CPedGroupIntelligence *)&CPedGroups::ms_groups[181 * HIDWORD(v4) + 12];
  CPedGroupIntelligence::ReportFinishedTask(v5, a2, (const CTask *)v4);
  TaskMain = CPedGroupIntelligence::GetTaskMain(v5, a2);
  v7 = TaskMain;
  if ( TaskMain )
  {
    *((_DWORD *)this + 6) = TaskMain;
    *((_DWORD *)this + 7) = (*(int (__fastcall **)(int))(*(_DWORD *)TaskMain + 20))(TaskMain);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
  }
  else
  {
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 7) = 200;
    return 0;
  }
}


// ============================================================

// Address: 0x4eeca0
// Original: _ZN21CTaskComplexBeInGroup18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexBeInGroup::CreateFirstSubTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  char *v4; // r6
  int TaskMain; // r0
  int v6; // r5

  *((_DWORD *)this + 5) = a2;
  v4 = (char *)this + 20;
  CEntity::RegisterReference(a2, (CEntity **)this + 5);
  TaskMain = CPedGroupIntelligence::GetTaskMain(
               (CPedGroupIntelligence *)&CPedGroups::ms_groups[181 * *((_DWORD *)v4 - 2) + 12],
               a2);
  v6 = TaskMain;
  if ( TaskMain )
  {
    *((_DWORD *)this + 6) = TaskMain;
    *((_DWORD *)this + 7) = (*(int (__fastcall **)(int))(*(_DWORD *)TaskMain + 20))(TaskMain);
    return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
  }
  else
  {
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 7) = 200;
    return 0;
  }
}


// ============================================================

// Address: 0x4eed08
// Original: _ZN21CTaskComplexBeInGroup14ControlSubTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::ControlSubTask(CPed *)
int __fastcall CTaskComplexBeInGroup::ControlSubTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  CTaskComplexBeInGroup::MonitorSecondaryGroupTask(this, a2);
  return CTaskComplexBeInGroup::MonitorMainGroupTask(this, a2);
}


// ============================================================

// Address: 0x4eed20
// Original: _ZN21CTaskComplexBeInGroup25MonitorSecondaryGroupTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::MonitorSecondaryGroupTask(CPed *)
int __fastcall CTaskComplexBeInGroup::MonitorSecondaryGroupTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  CPedGroupIntelligence *v4; // r6
  const CTask *TaskSecondary; // r9
  int TaskSecondarySlot; // r8
  int v7; // r10
  int result; // r0
  bool v9; // zf
  int v10; // r0
  int v11; // r4
  CTask *v12; // r1

  v4 = (CPedGroupIntelligence *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 12];
  TaskSecondary = (const CTask *)CPedGroupIntelligence::GetTaskSecondary(v4, a2);
  TaskSecondarySlot = CPedGroupIntelligence::GetTaskSecondarySlot(v4, a2);
  if ( TaskSecondarySlot < 0 )
    v7 = 0;
  else
    v7 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), TaskSecondarySlot);
  result = *((_DWORD *)this + 8);
  if ( !result )
    goto LABEL_8;
  v9 = v7 == 0;
  if ( !v7 )
    v9 = result == (_DWORD)TaskSecondary;
  if ( v9 )
  {
    CPedGroupIntelligence::ReportFinishedTask(v4, a2, TaskSecondary);
    result = 0;
    *((_QWORD *)this + 4) = 0xFFFFFFFF00000000LL;
  }
  else
  {
LABEL_8:
    if ( TaskSecondary != (const CTask *)result )
    {
      result = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), *((_DWORD *)this + 9));
      if ( result )
      {
        v10 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), *((_DWORD *)this + 9));
        result = (*(int (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v10 + 28))(v10, a2, 0, 0);
      }
      if ( !v7
        || (result = (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v7 + 28))(v7, a2, 1, 0), result == 1) )
      {
        *((_DWORD *)this + 8) = TaskSecondary;
        *((_DWORD *)this + 9) = TaskSecondarySlot;
        if ( TaskSecondary )
        {
          v11 = *((_DWORD *)a2 + 272);
          v12 = (CTask *)(*(int (__fastcall **)(const CTask *))(*(_DWORD *)TaskSecondary + 8))(TaskSecondary);
          return j_CTaskManager::SetTaskSecondary((CTaskManager *)(v11 + 4), v12, TaskSecondarySlot);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4eee08
// Original: _ZN21CTaskComplexBeInGroup20MonitorMainGroupTaskEP4CPed
// Demangled: CTaskComplexBeInGroup::MonitorMainGroupTask(CPed *)
int __fastcall CTaskComplexBeInGroup::MonitorMainGroupTask(CTaskComplexBeInGroup *this, CPed *a2)
{
  int v4; // r8
  int TaskMain; // r5

  v4 = *((_DWORD *)this + 2);
  TaskMain = CPedGroupIntelligence::GetTaskMain(
               (CPedGroupIntelligence *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 12],
               a2);
  if ( TaskMain )
  {
    if ( (TaskMain != *((_DWORD *)this + 6)
       || (*(int (__fastcall **)(int))(*(_DWORD *)TaskMain + 20))(TaskMain) != *((_DWORD *)this + 7))
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      *((_DWORD *)this + 6) = TaskMain;
      *((_DWORD *)this + 7) = (*(int (__fastcall **)(int))(*(_DWORD *)TaskMain + 20))(TaskMain);
      return (*(int (__fastcall **)(int))(*(_DWORD *)TaskMain + 8))(TaskMain);
    }
  }
  else if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
              *((_DWORD *)this + 2),
              a2,
              1,
              0) == 1 )
  {
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 7) = 200;
    return 0;
  }
  return v4;
}


// ============================================================

// Address: 0x4f3968
// Original: _ZNK21CTaskComplexBeInGroup5CloneEv
// Demangled: CTaskComplexBeInGroup::Clone(void)
int __fastcall CTaskComplexBeInGroup::Clone(CTaskComplexBeInGroup *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r5
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((_BYTE *)this + 16);
  v5 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v5;
  *(_BYTE *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 200;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = -1;
  *(_DWORD *)result = &off_66A2D0;
  return result;
}


// ============================================================

// Address: 0x4f39a4
// Original: _ZNK21CTaskComplexBeInGroup11GetTaskTypeEv
// Demangled: CTaskComplexBeInGroup::GetTaskType(void)
int __fastcall CTaskComplexBeInGroup::GetTaskType(CTaskComplexBeInGroup *this)
{
  return 243;
}


// ============================================================

// Address: 0x4f39a8
// Original: _ZN21CTaskComplexBeInGroup9SerializeEv
// Demangled: CTaskComplexBeInGroup::Serialize(void)
int __fastcall CTaskComplexBeInGroup::Serialize(CPed **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  int v10; // r2
  int v12; // r0

  v2 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CPed **))*this + 5))(this) == 243 )
  {
    v5 = GettPoolPedRef(this[5]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = this[3];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CGenericGameStorage *)(this + 4), (char *)&stderr + 1, v10);
  }
  else
  {
    v12 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
    return sub_1941D4(243, v12);
  }
}


// ============================================================
