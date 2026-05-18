
// Address: 0x18e540
// Original: j__ZN34CTaskSimpleWaitUntilAreaCodesMatchC2EP4CPed
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(CPed *)
// attributes: thunk
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this,
        CPed *a2)
{
  _ZN34CTaskSimpleWaitUntilAreaCodesMatchC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x18feac
// Original: j__ZN34CTaskSimpleWaitUntilAreaCodesMatchD2Ev
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch()
// attributes: thunk
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this)
{
  _ZN34CTaskSimpleWaitUntilAreaCodesMatchD2Ev(this);
}


// ============================================================

// Address: 0x196074
// Original: j__ZN34CTaskSimpleWaitUntilAreaCodesMatchC2EP4CPed_0
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(CPed *)
// attributes: thunk
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this,
        CPed *a2)
{
  _ZN34CTaskSimpleWaitUntilAreaCodesMatchC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x4f17a0
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatchC2EP4CPed
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(CPed *)
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this,
        CPed *a2)
{
  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 10) = 0;
  *((_DWORD *)this + 2) = 1000;
  *((_DWORD *)this + 7) = 1090519040;
  *((_WORD *)this + 12) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_66A6DC;
  *((_DWORD *)this + 8) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 8);
}


// ============================================================

// Address: 0x4f17ec
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatchD0Ev
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch()
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this)
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

// Address: 0x4f181c
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatch10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::ProcessPed(CPed *)
char *__fastcall CTaskSimpleWaitUntilAreaCodesMatch::ProcessPed(CTaskSimpleWaitUntilAreaCodesMatch *this, CPed *a2)
{
  int v2; // r2

  v2 = *((_DWORD *)this + 8);
  if ( !v2 )
    return (char *)&stderr + 1;
  if ( !CEntryExitManager::ms_exitEnterState )
  {
    if ( *(unsigned __int8 *)(v2 + 51) != *((unsigned __int8 *)a2 + 51) )
    {
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        return (char *)CTaskSimpleStandStill::ProcessPed(this, a2);
      return 0;
    }
    return (char *)&stderr + 1;
  }
  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    return (char *)CTaskSimpleStandStill::ProcessPed(this, a2);
  return 0;
}


// ============================================================

// Address: 0x4f1cdc
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatchD2Ev
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch()
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::~CTaskSimpleWaitUntilAreaCodesMatch(
        CTaskSimpleWaitUntilAreaCodesMatch *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 32);
  v2 = (CEntity *)*((_DWORD *)this + 8);
  *(_DWORD *)this = &off_66A6DC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f42fc
// Original: _ZNK34CTaskSimpleWaitUntilAreaCodesMatch5CloneEv
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::Clone(void)
int __fastcall CTaskSimpleWaitUntilAreaCodesMatch::Clone(CTaskSimpleWaitUntilAreaCodesMatch *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_24, a2);
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
  return v3;
}


// ============================================================

// Address: 0x4f434c
// Original: _ZNK34CTaskSimpleWaitUntilAreaCodesMatch11GetTaskTypeEv
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::GetTaskType(void)
int __fastcall CTaskSimpleWaitUntilAreaCodesMatch::GetTaskType(CTaskSimpleWaitUntilAreaCodesMatch *this)
{
  return 1307;
}


// ============================================================

// Address: 0x4f4352
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatch13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::MakeAbortable(CPed *,int,CEvent const*)
bool __fastcall CTaskSimpleWaitUntilAreaCodesMatch::MakeAbortable(
        CTaskSimpleWaitUntilAreaCodesMatch *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return a3 == 2;
}


// ============================================================

// Address: 0x4f435c
// Original: _ZN34CTaskSimpleWaitUntilAreaCodesMatch9SerializeEv
// Demangled: CTaskSimpleWaitUntilAreaCodesMatch::Serialize(void)
void __fastcall CTaskSimpleWaitUntilAreaCodesMatch::Serialize(CTaskSimpleWaitUntilAreaCodesMatch *this)
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

  v2 = (*(int (__fastcall **)(CTaskSimpleWaitUntilAreaCodesMatch *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleWaitUntilAreaCodesMatch *))(*(_DWORD *)this + 20))(this) == 1307 )
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
    v10 = (*(int (__fastcall **)(CTaskSimpleWaitUntilAreaCodesMatch *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1307, v10);
  }
}


// ============================================================
