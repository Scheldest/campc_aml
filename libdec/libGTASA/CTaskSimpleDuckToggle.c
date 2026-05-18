
// Address: 0x194858
// Original: j__ZN21CTaskSimpleDuckToggleC2Ei
// Demangled: CTaskSimpleDuckToggle::CTaskSimpleDuckToggle(int)
// attributes: thunk
void __fastcall CTaskSimpleDuckToggle::CTaskSimpleDuckToggle(CTaskSimpleDuckToggle *this, int a2)
{
  _ZN21CTaskSimpleDuckToggleC2Ei(this, a2);
}


// ============================================================

// Address: 0x4eaa58
// Original: _ZN21CTaskSimpleDuckToggleC2Ei
// Demangled: CTaskSimpleDuckToggle::CTaskSimpleDuckToggle(int)
void __fastcall CTaskSimpleDuckToggle::CTaskSimpleDuckToggle(CTaskSimpleDuckToggle *this, int a2)
{
  _DWORD *v3; // r0

  CTaskSimple::CTaskSimple(this);
  v3[2] = a2;
  *v3 = &off_669CA8;
}


// ============================================================

// Address: 0x4eaa74
// Original: _ZN21CTaskSimpleDuckToggleD2Ev
// Demangled: CTaskSimpleDuckToggle::~CTaskSimpleDuckToggle()
// attributes: thunk
void __fastcall CTaskSimpleDuckToggle::~CTaskSimpleDuckToggle(CTaskSimpleDuckToggle *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4eaa78
// Original: _ZN21CTaskSimpleDuckToggleD0Ev
// Demangled: CTaskSimpleDuckToggle::~CTaskSimpleDuckToggle()
void __fastcall CTaskSimpleDuckToggle::~CTaskSimpleDuckToggle(CTaskSimpleDuckToggle *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eaa88
// Original: _ZN21CTaskSimpleDuckToggle10ProcessPedEP4CPed
// Demangled: CTaskSimpleDuckToggle::ProcessPed(CPed *)
int __fastcall CTaskSimpleDuckToggle::ProcessPed(CTaskSimpleDuckToggle *this, CPedIntelligence **a2)
{
  int v4; // r0
  int TaskDuck; // r0
  bool v6; // zf
  int v7; // r0
  CTaskSimpleDuck *SimplestActiveTask; // r5
  unsigned int v9; // r1
  CTaskSimpleDuck *v10; // r0
  CTaskSimpleDuck *v11; // r0
  CPedIntelligence *v12; // r5
  unsigned int v13; // r1
  CTaskSimpleDuck *v14; // r4
  CPedIntelligence *v15; // r6
  CTaskSimpleDuck *v16; // r5
  CTaskSimpleUseGun *TaskUseGun; // r0

  v4 = *((_DWORD *)this + 2);
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    if ( CPedIntelligence::GetTaskDuck(a2[272], 0) )
    {
      TaskDuck = CPedIntelligence::GetTaskDuck(a2[272], 0);
      (*(void (__fastcall **)(int, CPedIntelligence **, _DWORD, _DWORD))(*(_DWORD *)TaskDuck + 28))(TaskDuck, a2, 0, 0);
LABEL_22:
      if ( CPedIntelligence::GetTaskUseGun(a2[272]) )
      {
        TaskUseGun = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(a2[272]);
        CTaskSimpleUseGun::ClearAnim(TaskUseGun, (CPed *)a2);
      }
      return 1;
    }
    v4 = *((_DWORD *)this + 2);
  }
  v6 = v4 == 1;
  if ( v4 != 1 )
    v6 = v4 == -1;
  if ( v6 )
  {
    if ( CTaskManager::GetSimplestActiveTask((CPedIntelligence *)((char *)a2[272] + 4))
      && (v7 = CTaskManager::GetSimplestActiveTask((CPedIntelligence *)((char *)a2[272] + 4)),
          (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 415) )
    {
      SimplestActiveTask = (CTaskSimpleDuck *)CTaskManager::GetSimplestActiveTask((CPedIntelligence *)((char *)a2[272] + 4));
    }
    else
    {
      SimplestActiveTask = 0;
    }
    if ( !CPedIntelligence::GetTaskDuck(a2[272], 1) )
    {
      if ( SimplestActiveTask )
        (*(void (__fastcall **)(CTaskSimpleDuck *, CPedIntelligence **, int, _DWORD))(*(_DWORD *)SimplestActiveTask + 28))(
          SimplestActiveTask,
          a2,
          1,
          0);
      v15 = a2[272];
      v16 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v9);
      CTaskSimpleDuck::CTaskSimpleDuck(v16, 4u, 0, -1);
      CTaskManager::SetTaskSecondary((CPedIntelligence *)((char *)v15 + 4), v16, 1);
      goto LABEL_22;
    }
    if ( *(_BYTE *)(CPedIntelligence::GetTaskDuck(a2[272], 1) + 36) != 4 )
    {
      if ( SimplestActiveTask )
        CTaskSimpleDuck::AbortBecauseOfOtherDuck(SimplestActiveTask, (CPed *)a2);
      v10 = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(a2[272], 1);
      if ( !CTaskSimpleDuck::SetControlType(v10, 4u) )
      {
        v11 = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(a2[272], 1);
        CTaskSimpleDuck::AbortBecauseOfOtherDuck(v11, (CPed *)a2);
        v12 = a2[272];
        v14 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v13);
        CTaskSimpleDuck::CTaskSimpleDuck(v14, 4u, 0, -1);
        CTaskManager::SetTaskSecondary((CPedIntelligence *)((char *)v12 + 4), v14, 1);
      }
    }
  }
  return 1;
}


// ============================================================

// Address: 0x4f24f8
// Original: _ZNK21CTaskSimpleDuckToggle5CloneEv
// Demangled: CTaskSimpleDuckToggle::Clone(void)
_DWORD *__fastcall CTaskSimpleDuckToggle::Clone(CTaskSimpleDuckToggle *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  v4 = *((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple(v3);
  result[2] = v4;
  *result = &off_669CA8;
  return result;
}


// ============================================================

// Address: 0x4f251c
// Original: _ZNK21CTaskSimpleDuckToggle11GetTaskTypeEv
// Demangled: CTaskSimpleDuckToggle::GetTaskType(void)
int __fastcall CTaskSimpleDuckToggle::GetTaskType(CTaskSimpleDuckToggle *this)
{
  return 1306;
}


// ============================================================

// Address: 0x4f2522
// Original: _ZN21CTaskSimpleDuckToggle13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDuckToggle::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDuckToggle::MakeAbortable(CTaskSimpleDuckToggle *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f2528
// Original: _ZN21CTaskSimpleDuckToggle9SerializeEv
// Demangled: CTaskSimpleDuckToggle::Serialize(void)
void __fastcall CTaskSimpleDuckToggle::Serialize(CTaskSimpleDuckToggle *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDuckToggle *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleDuckToggle *))(*(_DWORD *)this + 20))(this) == 1306 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 2);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleDuckToggle *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1306, v7);
  }
}


// ============================================================
