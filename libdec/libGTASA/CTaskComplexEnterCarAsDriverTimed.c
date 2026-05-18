
// Address: 0x19d094
// Original: j__ZN33CTaskComplexEnterCarAsDriverTimedC2EP8CVehiclei
// Demangled: CTaskComplexEnterCarAsDriverTimed::CTaskComplexEnterCarAsDriverTimed(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsDriverTimed::CTaskComplexEnterCarAsDriverTimed(
        CTaskComplexEnterCarAsDriverTimed *this,
        CVehicle *a2,
        int a3)
{
  _ZN33CTaskComplexEnterCarAsDriverTimedC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x4f7398
// Original: _ZN33CTaskComplexEnterCarAsDriverTimedC2EP8CVehiclei
// Demangled: CTaskComplexEnterCarAsDriverTimed::CTaskComplexEnterCarAsDriverTimed(CVehicle *,int)
void __fastcall CTaskComplexEnterCarAsDriverTimed::CTaskComplexEnterCarAsDriverTimed(
        CTaskComplexEnterCarAsDriverTimed *this,
        CVehicle *a2,
        int a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = 6;
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_66AA84;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f73e4
// Original: _ZN33CTaskComplexEnterCarAsDriverTimedD2Ev
// Demangled: CTaskComplexEnterCarAsDriverTimed::~CTaskComplexEnterCarAsDriverTimed()
void __fastcall CTaskComplexEnterCarAsDriverTimed::~CTaskComplexEnterCarAsDriverTimed(
        CTaskComplexEnterCarAsDriverTimed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AA84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f7410
// Original: _ZN33CTaskComplexEnterCarAsDriverTimedD0Ev
// Demangled: CTaskComplexEnterCarAsDriverTimed::~CTaskComplexEnterCarAsDriverTimed()
void __fastcall CTaskComplexEnterCarAsDriverTimed::~CTaskComplexEnterCarAsDriverTimed(
        CTaskComplexEnterCarAsDriverTimed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AA84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f7440
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexEnterCarAsDriverTimed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexEnterCarAsDriverTimed::MakeAbortable(
        CTaskComplexEnterCarAsDriverTimed *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  const CEvent *v7; // r1
  int v8; // r8
  __int64 v9; // kr00_8

  v8 = (*(int (__fastcall **)(_DWORD, CPed *, int))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2, a3);
  if ( (unsigned int)(a3 - 1) <= 1 && v8 == 1 && (!a4 || !CEventHandler::IsTemporaryEvent(a4, v7)) )
  {
    if ( *((_BYTE *)this + 32) )
    {
      v9 = *((_QWORD *)this + 3);
      *((_BYTE *)this + 33) = 1;
      *((_DWORD *)this + 7) = HIDWORD(v9) - CTimer::m_snTimeInMilliseconds + v9;
    }
  }
  return v8;
}


// ============================================================

// Address: 0x4f74a0
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsDriverTimed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsDriverTimed::CreateNextSubTask(CTaskComplexEnterCarAsDriverTimed *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4f74a4
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsDriverTimed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsDriverTimed::CreateFirstSubTask(CTaskComplexEnterCarAsDriverTimed *this, CPed *a2)
{
  int v3; // r0
  int v4; // r5
  CEntity *v5; // r6
  char v6; // r2

  v3 = *((_DWORD *)this + 4);
  if ( v3 >= 0 )
  {
    a2 = (CPed *)CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 32) = 1;
    *((_DWORD *)this + 6) = a2;
    *((_DWORD *)this + 7) = v3;
  }
  v4 = CTask::operator new((CTask *)&dword_50, (unsigned int)a2);
  v5 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v4);
  *(_QWORD *)(v4 + 20) = 0LL;
  *(_QWORD *)(v4 + 28) = 0LL;
  *(_DWORD *)(v4 + 36) = 6;
  *(_WORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_BYTE *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_BYTE *)(v4 + 68) = 0;
  v6 = *(_BYTE *)(v4 + 16);
  *(_DWORD *)(v4 + 72) = -1082130432;
  *(_DWORD *)v4 = &off_66A904;
  *(_BYTE *)(v4 + 16) = v6 & 0xF0 | 1;
  *(_DWORD *)(v4 + 12) = v5;
  if ( v5 )
    CEntity::RegisterReference(v5, (CEntity **)(v4 + 12));
  *(_DWORD *)v4 = &off_66A944;
  *(_DWORD *)(v4 + 36) = *((_DWORD *)this + 5);
  return v4;
}


// ============================================================

// Address: 0x4f754c
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsDriverTimed::ControlSubTask(CPed *)
void __fastcall CTaskComplexEnterCarAsDriverTimed::ControlSubTask(CTaskComplexEnterCarAsDriverTimed *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  unsigned int v7; // r1
  bool v8; // zf
  CTaskSimpleCarSetPedInAsDriver *v9; // r0
  int v10; // r0

  if ( *((_DWORD *)this + 3) && *((_BYTE *)this + 32) )
  {
    if ( *((_BYTE *)this + 33) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 33) = 0;
      *((_DWORD *)this + 6) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 6);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 7) <= v4 )
    {
      v6 = (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0);
      v8 = v6 == 1;
      if ( v6 == 1 )
        v8 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( v8 && !*(_DWORD *)(*((_DWORD *)this + 3) + 1124) )
      {
        v9 = (CTaskSimpleCarSetPedInAsDriver *)CTask::operator new((CTask *)&dword_1C, v7);
        CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(v9, *((CVehicle **)this + 3), 0);
        *(_BYTE *)(v10 + 24) = 1;
      }
    }
  }
}


// ============================================================

// Address: 0x4f75d4
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed9StopTimerEPK6CEvent
// Demangled: CTaskComplexEnterCarAsDriverTimed::StopTimer(CEvent const*)
int __fastcall CTaskComplexEnterCarAsDriverTimed::StopTimer(CTaskComplexEnterCarAsDriverTimed *this, const CEvent *a2)
{
  int result; // r0
  __int64 v4; // kr00_8

  result = CEventHandler::IsTemporaryEvent(a2, a2);
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 32);
    if ( *((_BYTE *)this + 32) )
    {
      v4 = *((_QWORD *)this + 3);
      *((_BYTE *)this + 33) = 1;
      result = HIDWORD(v4) - CTimer::m_snTimeInMilliseconds + v4;
      *((_DWORD *)this + 7) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4fdbf0
// Original: _ZNK33CTaskComplexEnterCarAsDriverTimed5CloneEv
// Demangled: CTaskComplexEnterCarAsDriverTimed::Clone(void)
int __fastcall CTaskComplexEnterCarAsDriverTimed::Clone(CTaskComplexEnterCarAsDriverTimed *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)(v3 + 20) = 6;
  *(_WORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)v3 = &off_66AA84;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 5);
  return v3;
}


// ============================================================

// Address: 0x4fdc48
// Original: _ZNK33CTaskComplexEnterCarAsDriverTimed11GetTaskTypeEv
// Demangled: CTaskComplexEnterCarAsDriverTimed::GetTaskType(void)
int __fastcall CTaskComplexEnterCarAsDriverTimed::GetTaskType(CTaskComplexEnterCarAsDriverTimed *this)
{
  return 713;
}


// ============================================================

// Address: 0x4fdc50
// Original: _ZN33CTaskComplexEnterCarAsDriverTimed9SerializeEv
// Demangled: CTaskComplexEnterCarAsDriverTimed::Serialize(void)
void __fastcall CTaskComplexEnterCarAsDriverTimed::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r4
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 713 )
  {
    v5 = GettPoolVehicleRef(this[3]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    j_free(v6);
  }
  else
  {
    v8 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(713, v8);
  }
}


// ============================================================
