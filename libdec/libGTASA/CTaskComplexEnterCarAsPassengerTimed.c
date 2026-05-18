
// Address: 0x19a3c4
// Original: j__ZN36CTaskComplexEnterCarAsPassengerTimedC2EP8CVehicleiib
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CTaskComplexEnterCarAsPassengerTimed(CVehicle *,int,int,bool)
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassengerTimed::CTaskComplexEnterCarAsPassengerTimed(
        CTaskComplexEnterCarAsPassengerTimed *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5)
{
  _ZN36CTaskComplexEnterCarAsPassengerTimedC2EP8CVehicleiib(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a0934
// Original: j__ZN36CTaskComplexEnterCarAsPassengerTimed10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexEnterCarAsPassengerTimed::CreateTask(CTaskComplexEnterCarAsPassengerTimed *this)
{
  return _ZN36CTaskComplexEnterCarAsPassengerTimed10CreateTaskEv(this);
}


// ============================================================

// Address: 0x493738
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CreateTask(void)
void __fastcall CTaskComplexEnterCarAsPassengerTimed::CreateTask(
        CTaskComplexEnterCarAsPassengerTimed *this,
        int a2,
        int a3)
{
  char v3; // r4
  char *v4; // r1
  CVehicle *Vehicle; // r4
  CTaskComplexEnterCarAsPassengerTimed *v6; // r0
  CPools *v7; // [sp+8h] [bp-10h] BYREF
  _BYTE v8[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v8, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v7, byte_4, a3);
  v4 = (char *)v7 + 1;
  if ( v7 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v7, (int)v4);
  v6 = (CTaskComplexEnterCarAsPassengerTimed *)CTask::operator new((CTask *)&word_2C, (unsigned int)v4);
  CTaskComplexEnterCarAsPassengerTimed::CTaskComplexEnterCarAsPassengerTimed(v6, Vehicle, 0, 20000, 0);
}


// ============================================================

// Address: 0x4f760c
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimedC2EP8CVehicleiib
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CTaskComplexEnterCarAsPassengerTimed(CVehicle *,int,int,bool)
void __fastcall CTaskComplexEnterCarAsPassengerTimed::CTaskComplexEnterCarAsPassengerTimed(
        CTaskComplexEnterCarAsPassengerTimed *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 5) = a3;
  *((_BYTE *)this + 24) = a5;
  *((_DWORD *)this + 7) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &off_66AAC0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f7660
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimedD2Ev
// Demangled: CTaskComplexEnterCarAsPassengerTimed::~CTaskComplexEnterCarAsPassengerTimed()
void __fastcall CTaskComplexEnterCarAsPassengerTimed::~CTaskComplexEnterCarAsPassengerTimed(
        CTaskComplexEnterCarAsPassengerTimed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AAC0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f768c
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimedD0Ev
// Demangled: CTaskComplexEnterCarAsPassengerTimed::~CTaskComplexEnterCarAsPassengerTimed()
void __fastcall CTaskComplexEnterCarAsPassengerTimed::~CTaskComplexEnterCarAsPassengerTimed(
        CTaskComplexEnterCarAsPassengerTimed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AAC0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f76bc
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexEnterCarAsPassengerTimed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::MakeAbortable(
        CTaskComplexEnterCarAsPassengerTimed *this,
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
    if ( *((_BYTE *)this + 40) )
    {
      v9 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 41) = 1;
      *((_DWORD *)this + 9) = HIDWORD(v9) - CTimer::m_snTimeInMilliseconds + v9;
    }
  }
  return v8;
}


// ============================================================

// Address: 0x4f771c
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::CreateNextSubTask(
        CTaskComplexEnterCarAsPassengerTimed *this,
        CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4f7720
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerTimed::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::CreateFirstSubTask(
        CTaskComplexEnterCarAsPassengerTimed *this,
        CPed *a2)
{
  int v3; // r0
  int v4; // r5
  CEntity *v5; // r6
  int v6; // r8
  char v7; // r9
  char v8; // r2

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v3 = *((_DWORD *)this + 4);
  if ( v3 >= 0 )
  {
    a2 = (CPed *)CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 40) = 1;
    *((_DWORD *)this + 8) = a2;
    *((_DWORD *)this + 9) = v3;
  }
  v4 = CTask::operator new((CTask *)&dword_50, (unsigned int)a2);
  v5 = (CEntity *)*((_DWORD *)this + 3);
  v6 = *((_DWORD *)this + 5);
  v7 = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex((CTaskComplex *)v4);
  *(_QWORD *)(v4 + 20) = 0LL;
  *(_QWORD *)(v4 + 28) = 0LL;
  *(_DWORD *)(v4 + 36) = 6;
  *(_WORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  *(_BYTE *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_BYTE *)(v4 + 68) = 0;
  v8 = *(_BYTE *)(v4 + 16);
  *(_DWORD *)(v4 + 72) = -1082130432;
  *(_DWORD *)v4 = &off_66A904;
  *(_BYTE *)(v4 + 16) = v8 & 0xF0 | (8 * v7);
  *(_DWORD *)(v4 + 12) = v5;
  if ( v5 )
    CEntity::RegisterReference(v5, (CEntity **)(v4 + 12));
  *(_DWORD *)(v4 + 28) = v6;
  *(_DWORD *)v4 = &off_66A984;
  *(_DWORD *)(v4 + 36) = *((_DWORD *)this + 7);
  return v4;
}


// ============================================================

// Address: 0x4f77e0
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerTimed::ControlSubTask(CPed *)
void __fastcall CTaskComplexEnterCarAsPassengerTimed::ControlSubTask(
        CTaskComplexEnterCarAsPassengerTimed *this,
        CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  unsigned int v7; // r2
  bool v8; // zf
  const CVehicle *v9; // r1
  int v10; // r5
  CTaskSimpleCarSetPedInAsPassenger *v11; // r0
  int v12; // r0

  if ( *((_DWORD *)this + 3) && *((_BYTE *)this + 40) )
  {
    if ( *((_BYTE *)this + 41) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 41) = 0;
      *((_DWORD *)this + 8) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 8);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 9) <= v4 )
    {
      v6 = (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0);
      v8 = v6 == 1;
      if ( v6 == 1 )
        v8 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
      if ( v8 )
      {
        if ( (v9 = (const CVehicle *)*((_DWORD *)this + 5), v10 = *((_DWORD *)this + 3), !v9)
          && (v7 = *(unsigned __int8 *)(v10 + 1164), *(unsigned __int8 *)(v10 + 1160) < v7)
          || !*(_DWORD *)(v10
                        + 4 * CCarEnterExit::ComputePassengerIndexFromCarDoor(*((CCarEnterExit **)this + 3), v9, v7)
                        + 1128) )
        {
          v11 = (CTaskSimpleCarSetPedInAsPassenger *)CTask::operator new((CTask *)&dword_20, (unsigned int)v9);
          CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
            v11,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 5),
            0);
          *(_BYTE *)(v12 + 28) = 1;
        }
      }
    }
  }
}


// ============================================================

// Address: 0x4f7888
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed9StopTimerEPK6CEvent
// Demangled: CTaskComplexEnterCarAsPassengerTimed::StopTimer(CEvent const*)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::StopTimer(
        CTaskComplexEnterCarAsPassengerTimed *this,
        const CEvent *a2)
{
  int result; // r0
  __int64 v4; // kr00_8

  result = CEventHandler::IsTemporaryEvent(a2, a2);
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 40);
    if ( *((_BYTE *)this + 40) )
    {
      v4 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 41) = 1;
      result = HIDWORD(v4) - CTimer::m_snTimeInMilliseconds + v4;
      *((_DWORD *)this + 9) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4fdcf4
// Original: _ZNK36CTaskComplexEnterCarAsPassengerTimed5CloneEv
// Demangled: CTaskComplexEnterCarAsPassengerTimed::Clone(void)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::Clone(CTaskComplexEnterCarAsPassengerTimed *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  __int64 v5; // r8
  char v6; // r10

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  v6 = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v5;
  *(_BYTE *)(v3 + 24) = v6;
  *(_DWORD *)(v3 + 28) = 6;
  *(_WORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)v3 = &off_66AAC0;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  return v3;
}


// ============================================================

// Address: 0x4fdd58
// Original: _ZNK36CTaskComplexEnterCarAsPassengerTimed11GetTaskTypeEv
// Demangled: CTaskComplexEnterCarAsPassengerTimed::GetTaskType(void)
int __fastcall CTaskComplexEnterCarAsPassengerTimed::GetTaskType(CTaskComplexEnterCarAsPassengerTimed *this)
{
  return 712;
}


// ============================================================

// Address: 0x4fdd60
// Original: _ZN36CTaskComplexEnterCarAsPassengerTimed9SerializeEv
// Demangled: CTaskComplexEnterCarAsPassengerTimed::Serialize(void)
void __fastcall CTaskComplexEnterCarAsPassengerTimed::Serialize(CVehicle **this)
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
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 712 )
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
    sub_1941D4(712, v8);
  }
}


// ============================================================
