
// Address: 0x18e028
// Original: j__ZN27CTaskSimpleCarSetTempActionC2EP8CVehicleii
// Demangled: CTaskSimpleCarSetTempAction::CTaskSimpleCarSetTempAction(CVehicle *,int,int)
// attributes: thunk
void __fastcall CTaskSimpleCarSetTempAction::CTaskSimpleCarSetTempAction(
        CTaskSimpleCarSetTempAction *this,
        CVehicle *a2,
        int a3,
        int a4)
{
  _ZN27CTaskSimpleCarSetTempActionC2EP8CVehicleii(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1941bc
// Original: j__ZN27CTaskSimpleCarSetTempAction10CreateTaskEv
// Demangled: CTaskSimpleCarSetTempAction::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleCarSetTempAction::CreateTask(CTaskSimpleCarSetTempAction *this)
{
  return _ZN27CTaskSimpleCarSetTempAction10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1969cc
// Original: j__ZN27CTaskSimpleCarSetTempActionD2Ev
// Demangled: CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction()
// attributes: thunk
void __fastcall CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(CTaskSimpleCarSetTempAction *this)
{
  _ZN27CTaskSimpleCarSetTempActionD2Ev(this);
}


// ============================================================

// Address: 0x493c38
// Original: _ZN27CTaskSimpleCarSetTempAction10CreateTaskEv
// Demangled: CTaskSimpleCarSetTempAction::CreateTask(void)
void __fastcall CTaskSimpleCarSetTempAction::CreateTask(CTaskSimpleCarSetTempAction *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  unsigned int v9; // r1
  CTaskSimpleCarSetTempAction *v10; // r0
  int v11; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+8h] [bp-18h] BYREF
  CPools *v13[5]; // [sp+Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, a3);
  if ( v13[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v13[0], (int)v13[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v7);
  v10 = (CTaskSimpleCarSetTempAction *)CTask::operator new((CTask *)&dword_68, v9);
  CTaskSimpleCarSetTempAction::CTaskSimpleCarSetTempAction(v10, Vehicle, v12, v11);
}


// ============================================================

// Address: 0x4fceb4
// Original: _ZN27CTaskSimpleCarSetTempActionC2EP8CVehicleii
// Demangled: CTaskSimpleCarSetTempAction::CTaskSimpleCarSetTempAction(CVehicle *,int,int)
void __fastcall CTaskSimpleCarSetTempAction::CTaskSimpleCarSetTempAction(
        CTaskSimpleCarSetTempAction *this,
        CVehicle *a2,
        int a3,
        int a4)
{
  char v8; // r0

  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 14) = 0;
  *(_DWORD *)((char *)this + 86) = 0;
  *(_DWORD *)((char *)this + 82) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  v8 = *((_BYTE *)this + 92) & 0xC3 | 8;
  *((_BYTE *)this + 92) = v8;
  *(_DWORD *)this = &off_66AD18;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
    v8 = *((_BYTE *)this + 92);
  }
  *((_DWORD *)this + 8) = -1;
  *((_BYTE *)this + 92) = v8 & 0xFC;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 24) = a3;
  *((_DWORD *)this + 25) = a4;
  *(_DWORD *)this = &off_66AF20;
}


// ============================================================

// Address: 0x4fcf48
// Original: _ZN27CTaskSimpleCarSetTempActionD0Ev
// Demangled: CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction()
void __fastcall CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(CTaskSimpleCarSetTempAction *this)
{
  void *v1; // r0

  CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fcf58
// Original: _ZN27CTaskSimpleCarSetTempAction13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSetTempAction::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSetTempAction::MakeAbortable(
        CTaskSimpleCarSetTempAction *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int result; // r0
  int v6; // r1

  result = CTaskSimpleCarDrive::MakeAbortable(this, a2, a3, a4);
  if ( result == 1 )
  {
    v6 = *((_DWORD *)this + 2);
    if ( v6 )
    {
      *(_BYTE *)(v6 + 959) = 0;
      *(_DWORD *)(*((_DWORD *)this + 2) + 960) = CTimer::m_snTimeInMilliseconds;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4fcf88
// Original: _ZN27CTaskSimpleCarSetTempAction10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetTempAction::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSetTempAction::ProcessPed(CTaskSimpleCarSetTempAction *this, CPed *a2)
{
  CEntity **v4; // r5
  CEntity *v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0
  int v9; // r0

  v4 = (CEntity **)((char *)this + 8);
  if ( !*((_DWORD *)this + 2) )
  {
    v5 = (CEntity *)*((_DWORD *)a2 + 356);
    *v4 = v5;
    if ( v5 )
      CEntity::RegisterReference(v5, v4);
  }
  v6 = CTaskSimpleCarDrive::ProcessPed(this, a2);
  v7 = *((_DWORD *)this + 2);
  if ( v6 == 1 )
  {
    if ( v7 )
    {
      *(_BYTE *)(v7 + 959) = 0;
      *((_DWORD *)*v4 + 240) = CTimer::m_snTimeInMilliseconds;
      return 1;
    }
  }
  else if ( v7 )
  {
    v9 = *((_DWORD *)this + 24);
    if ( v9 )
    {
      *(_BYTE *)(v7 + 959) = v9;
      *(_DWORD *)(*((_DWORD *)this + 2) + 960) = *((_DWORD *)this + 25) + CTimer::m_snTimeInMilliseconds;
      result = 0;
      *((_DWORD *)this + 24) = 0;
      return result;
    }
    if ( !*(_BYTE *)(v7 + 959) )
      return 1;
  }
  return 0;
}


// ============================================================

// Address: 0x4fd06c
// Original: _ZN27CTaskSimpleCarSetTempActionD2Ev
// Demangled: CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction()
void __fastcall CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(CTaskSimpleCarSetTempAction *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0
  CVehicle *v6; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66AD18;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 4);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
    *((_DWORD *)this + 4) = 0;
  }
  if ( (*((_BYTE *)this + 92) & 0x20) != 0 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v6 = (CVehicle *)*((_DWORD *)this + 2);
    if ( v6 )
      CVehicle::ClearGettingOutFlags(v6, 1u);
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ff844
// Original: _ZNK27CTaskSimpleCarSetTempAction5CloneEv
// Demangled: CTaskSimpleCarSetTempAction::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarSetTempAction::Clone(CTaskSimpleCarSetTempAction *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  CEntity *v4; // r5
  CTaskSimple *v5; // r4
  __int64 v6; // r8
  char v7; // r0
  char v8; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_68, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  v5 = v3;
  v6 = *((_QWORD *)this + 12);
  CTaskSimple::CTaskSimple(v3);
  *(_QWORD *)((char *)v5 + 12) = 0LL;
  *(_QWORD *)((char *)v5 + 20) = 0LL;
  *((_WORD *)v5 + 14) = 0;
  *(_DWORD *)((char *)v5 + 86) = 0;
  *(_DWORD *)((char *)v5 + 82) = 0;
  *((_DWORD *)v5 + 19) = 0;
  *((_DWORD *)v5 + 20) = 0;
  v7 = *((_BYTE *)v5 + 92);
  *(_DWORD *)v5 = &off_66AD18;
  v8 = v7 & 0xC3 | 8;
  *((_BYTE *)v5 + 92) = v8;
  *((_DWORD *)v5 + 2) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)v5 + 2);
    v8 = *((_BYTE *)v5 + 92);
  }
  *((_DWORD *)v5 + 8) = -1;
  *((_BYTE *)v5 + 92) = v8 & 0xFC;
  *((_DWORD *)v5 + 15) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_DWORD *)v5 + 17) = 0;
  *((_QWORD *)v5 + 12) = v6;
  *(_DWORD *)v5 = &off_66AF20;
  return v5;
}


// ============================================================

// Address: 0x4ff8e4
// Original: _ZNK27CTaskSimpleCarSetTempAction11GetTaskTypeEv
// Demangled: CTaskSimpleCarSetTempAction::GetTaskType(void)
int __fastcall CTaskSimpleCarSetTempAction::GetTaskType(CTaskSimpleCarSetTempAction *this)
{
  return 723;
}


// ============================================================

// Address: 0x4ff8ec
// Original: _ZN27CTaskSimpleCarSetTempAction9SerializeEv
// Demangled: CTaskSimpleCarSetTempAction::Serialize(void)
void __fastcall CTaskSimpleCarSetTempAction::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 723 )
  {
    v5 = GettPoolVehicleRef(this[2]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = this[24];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = this[25];
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    j_free(v10);
  }
  else
  {
    v12 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(723, v12);
  }
}


// ============================================================
