
// Address: 0x195c58
// Original: j__ZN32CTaskComplexScreamInCarThenLeaveC2EP8CVehiclei
// Demangled: CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(
        CTaskComplexScreamInCarThenLeave *this,
        CVehicle *a2,
        int a3)
{
  _ZN32CTaskComplexScreamInCarThenLeaveC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x19c798
// Original: j__ZN32CTaskComplexScreamInCarThenLeave10CreateTaskEv
// Demangled: CTaskComplexScreamInCarThenLeave::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexScreamInCarThenLeave::CreateTask(CTaskComplexScreamInCarThenLeave *this)
{
  return _ZN32CTaskComplexScreamInCarThenLeave10CreateTaskEv(this);
}


// ============================================================

// Address: 0x493460
// Original: _ZN32CTaskComplexScreamInCarThenLeave10CreateTaskEv
// Demangled: CTaskComplexScreamInCarThenLeave::CreateTask(void)
void __fastcall CTaskComplexScreamInCarThenLeave::CreateTask(CTaskComplexScreamInCarThenLeave *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskComplexScreamInCarThenLeave *v8; // r0
  int v9; // [sp+4h] [bp-1Ch] BYREF
  CPools *v10; // [sp+8h] [bp-18h] BYREF
  _BYTE v11[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v12[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, a3);
  if ( v10 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v10, (int)v10 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, v4);
  v8 = (CTaskComplexScreamInCarThenLeave *)CTask::operator new((CTask *)&dword_20, v7);
  CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x4f9ba8
// Original: _ZN32CTaskComplexScreamInCarThenLeaveC2EP8CVehiclei
// Demangled: CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(CVehicle *,int)
void __fastcall CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(
        CTaskComplexScreamInCarThenLeave *this,
        CVehicle *a2,
        int a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_WORD *)this + 14) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_66ACDC;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f9bec
// Original: _ZN32CTaskComplexScreamInCarThenLeaveD2Ev
// Demangled: CTaskComplexScreamInCarThenLeave::~CTaskComplexScreamInCarThenLeave()
void __fastcall CTaskComplexScreamInCarThenLeave::~CTaskComplexScreamInCarThenLeave(
        CTaskComplexScreamInCarThenLeave *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ACDC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f9c18
// Original: _ZN32CTaskComplexScreamInCarThenLeaveD0Ev
// Demangled: CTaskComplexScreamInCarThenLeave::~CTaskComplexScreamInCarThenLeave()
void __fastcall CTaskComplexScreamInCarThenLeave::~CTaskComplexScreamInCarThenLeave(
        CTaskComplexScreamInCarThenLeave *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ACDC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f9c48
// Original: _ZN32CTaskComplexScreamInCarThenLeave13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexScreamInCarThenLeave::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexScreamInCarThenLeave::MakeAbortable(
        CTaskComplexScreamInCarThenLeave *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x4f9c5c
// Original: _ZN32CTaskComplexScreamInCarThenLeave17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexScreamInCarThenLeave::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexScreamInCarThenLeave::CreateNextSubTask(CTaskComplexScreamInCarThenLeave *this, CPed *a2)
{
  int v4; // r0
  int v6; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 706 )
  {
    v6 = 1302;
  }
  else
  {
    if ( v4 != 709 )
      return 0;
    v6 = 706;
  }
  return CTaskComplexScreamInCarThenLeave::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x4f9c94
// Original: _ZN32CTaskComplexScreamInCarThenLeave13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexScreamInCarThenLeave::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexScreamInCarThenLeave::CreateSubTask(
        CTaskComplexScreamInCarThenLeave *this,
        int *a2,
        CPed *a3)
{
  __int64 v4; // r0
  int v5; // r4
  CEntity *v6; // r5
  char v7; // r0
  char v8; // r0
  unsigned int v9; // r1
  CTaskComplex *v10; // r0
  CEntity *v11; // r5
  int v12; // r6
  _DWORD *v13; // r2
  CEntity **v14; // r1
  __int64 v15; // d16
  int v16; // r4
  CTask *WanderTaskByPedType; // r1
  CTaskManager *v18; // r0
  __int16 v19; // r8
  unsigned int v20; // r1
  CTaskComplex *v21; // r0
  int v22; // r6
  _DWORD *v23; // r2
  unsigned int v24; // r8
  char v25; // r0
  __int64 v26; // d16

  if ( a2 == (int *)((char *)&elf_hash_bucket[113] + 2) )
  {
    if ( CTheScripts::IsPlayerOnAMission((CTheScripts *)((char *)&elf_hash_bucket[113] + 2)) )
    {
      v10 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, v9);
      v11 = (CEntity *)*((_DWORD *)this + 3);
      v5 = (int)v10;
      v12 = *((_DWORD *)v11 + 5);
      CTaskComplex::CTaskComplex(v10);
      v13 = (_DWORD *)(v12 + 48);
      *(_DWORD *)v5 = &off_66ACA0;
      *(_DWORD *)(v5 + 16) = 0;
      if ( !v12 )
        v13 = (_DWORD *)((char *)v11 + 4);
      *(_DWORD *)(v5 + 12) = v11;
      v14 = (CEntity **)(v5 + 12);
      v15 = *(_QWORD *)v13;
      *(_DWORD *)(v5 + 28) = v13[2];
      *(_DWORD *)(v5 + 32) = 0;
      *(_BYTE *)(v5 + 36) = 0;
      *(_QWORD *)(v5 + 20) = v15;
    }
    else
    {
      v19 = rand();
      v21 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, v20);
      v11 = (CEntity *)*((_DWORD *)this + 3);
      v5 = (int)v21;
      v22 = *((_DWORD *)v11 + 5);
      CTaskComplex::CTaskComplex(v21);
      v23 = (_DWORD *)(v22 + 48);
      v24 = v19 & 0x3FF;
      v25 = 0;
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)v5 = &off_66ACA0;
      if ( !v22 )
        v23 = (_DWORD *)((char *)v11 + 4);
      *(_DWORD *)(v5 + 12) = v11;
      v14 = (CEntity **)(v5 + 12);
      v26 = *(_QWORD *)v23;
      *(_DWORD *)(v5 + 28) = v23[2];
      *(_DWORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 20) = v26;
      if ( v24 <= 0x200 )
        v25 = 1;
      *(_BYTE *)(v5 + 36) = v25;
    }
    if ( v11 )
      CEntity::RegisterReference(v11, v14);
  }
  else if ( a2 == (int *)((char *)&elf_hash_bucket[262] + 2) )
  {
    v16 = *((_DWORD *)a3 + 272);
    WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(
                                     a3,
                                     (const CPed *)((char *)&elf_hash_bucket[262] + 2));
    v18 = (CTaskManager *)(v16 + 4);
    v5 = 0;
    CTaskManager::SetTask(v18, WanderTaskByPedType, 4, 0);
  }
  else if ( a2 == (int *)((char *)&elf_hash_bucket[114] + 1) )
  {
    v4 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x138800000000LL;
    *((_BYTE *)this + 28) = 1;
    *(_QWORD *)((char *)this + 20) = v4;
    v5 = CTask::operator new((CTask *)&dword_60, HIDWORD(v4));
    v6 = (CEntity *)*((_DWORD *)this + 3);
    CTaskSimple::CTaskSimple((CTaskSimple *)v5);
    *(_QWORD *)(v5 + 12) = 0LL;
    *(_QWORD *)(v5 + 20) = 0LL;
    *(_DWORD *)v5 = &off_66AD18;
    *(_WORD *)(v5 + 28) = 0;
    *(_DWORD *)(v5 + 86) = 0;
    *(_DWORD *)(v5 + 82) = 0;
    v7 = *(_BYTE *)(v5 + 92);
    *(_DWORD *)(v5 + 76) = 0;
    *(_DWORD *)(v5 + 80) = 0;
    v8 = v7 & 0xC3 | 8;
    *(_BYTE *)(v5 + 92) = v8;
    *(_DWORD *)(v5 + 8) = v6;
    if ( v6 )
    {
      CEntity::RegisterReference(v6, (CEntity **)(v5 + 8));
      v8 = *(_BYTE *)(v5 + 92);
    }
    *(_DWORD *)(v5 + 32) = -1;
    *(_BYTE *)(v5 + 92) = v8 & 0xFC;
    *(_DWORD *)(v5 + 60) = 0;
    *(_DWORD *)(v5 + 64) = 0;
    *(_DWORD *)(v5 + 68) = 0;
  }
  else
  {
    return 0;
  }
  return v5;
}


// ============================================================

// Address: 0x4f9e1c
// Original: _ZN32CTaskComplexScreamInCarThenLeave18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexScreamInCarThenLeave::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexScreamInCarThenLeave::CreateFirstSubTask(CTaskComplexScreamInCarThenLeave *this, CPed *a2)
{
  int IsPlayerOnAMission; // r0
  int *v5; // r1

  IsPlayerOnAMission = CTheScripts::IsPlayerOnAMission(this);
  v5 = elf_hash_bucket + 454;
  if ( !IsPlayerOnAMission )
    v5 = elf_hash_bucket + 457;
  return CTaskComplexScreamInCarThenLeave::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x4f9e40
// Original: _ZN32CTaskComplexScreamInCarThenLeave14ControlSubTaskEP4CPed
// Demangled: CTaskComplexScreamInCarThenLeave::ControlSubTask(CPed *)
int __fastcall CTaskComplexScreamInCarThenLeave::ControlSubTask(CTaskComplexScreamInCarThenLeave *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  _DWORD *v6; // r0
  int v8; // r0
  int v9; // r5

  if ( *((_BYTE *)this + 28)
    && (!*((_BYTE *)this + 29)
      ? (v5 = *((_DWORD *)this + 5), v4 = CTimer::m_snTimeInMilliseconds)
      : (v4 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 29) = 0, *((_DWORD *)this + 5) = v4, v5 = v4),
        v5 + *((_DWORD *)this + 6) <= v4
     && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 709
     && (v6 = (_DWORD *)*((_DWORD *)this + 3)) != 0) )
  {
    if ( !v6[281]
      || (*(int (__fastcall **)(_DWORD *, _DWORD))(*v6 + 232))(v6, 0)
      || (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 3) + 236))(*((_DWORD *)this + 3), a2) == 1 )
    {
      return CTaskComplexScreamInCarThenLeave::CreateSubTask(this, (int *)((char *)&elf_hash_bucket[113] + 2), a2);
    }
    v9 = *((_DWORD *)this + 2);
    CPed::Say(a2, 0x15Bu, 0, 1.0, 0, 0, 0);
  }
  else
  {
    v8 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    v9 = *((_DWORD *)this + 2);
    if ( v8 == 709 )
      CPed::Say(a2, 0xE3u, 0, 1.0, 0, 0, 0);
  }
  return v9;
}


// ============================================================

// Address: 0x4fe9d0
// Original: _ZNK32CTaskComplexScreamInCarThenLeave5CloneEv
// Demangled: CTaskComplexScreamInCarThenLeave::Clone(void)
int __fastcall CTaskComplexScreamInCarThenLeave::Clone(CTaskComplexScreamInCarThenLeave *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_WORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)v3 = &off_66ACDC;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4fea1c
// Original: _ZNK32CTaskComplexScreamInCarThenLeave11GetTaskTypeEv
// Demangled: CTaskComplexScreamInCarThenLeave::GetTaskType(void)
int __fastcall CTaskComplexScreamInCarThenLeave::GetTaskType(CTaskComplexScreamInCarThenLeave *this)
{
  return 708;
}


// ============================================================

// Address: 0x4fea24
// Original: _ZN32CTaskComplexScreamInCarThenLeave9SerializeEv
// Demangled: CTaskComplexScreamInCarThenLeave::Serialize(void)
void __fastcall CTaskComplexScreamInCarThenLeave::Serialize(CTaskComplexScreamInCarThenLeave *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexScreamInCarThenLeave *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexScreamInCarThenLeave *))(*(_DWORD *)this + 20))(this) == 708 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
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
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexScreamInCarThenLeave *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(708, v10);
  }
}


// ============================================================
