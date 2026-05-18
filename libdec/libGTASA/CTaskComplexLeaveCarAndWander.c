
// Address: 0x19a6ac
// Original: j__ZN29CTaskComplexLeaveCarAndWander10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndWander::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveCarAndWander::CreateTask(CTaskComplexLeaveCarAndWander *this)
{
  return _ZN29CTaskComplexLeaveCarAndWander10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19f414
// Original: j__ZN29CTaskComplexLeaveCarAndWanderC2EP8CVehicleiib
// Demangled: CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(CVehicle *,int,int,bool)
// attributes: thunk
void __fastcall CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(
        CTaskComplexLeaveCarAndWander *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5)
{
  _ZN29CTaskComplexLeaveCarAndWanderC2EP8CVehicleiib(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x49336c
// Original: _ZN29CTaskComplexLeaveCarAndWander10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndWander::CreateTask(void)
void __fastcall CTaskComplexLeaveCarAndWander::CreateTask(CTaskComplexLeaveCarAndWander *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  unsigned int v11; // r1
  CTaskComplexLeaveCarAndWander *v12; // r0
  int v13; // [sp+8h] [bp-20h] BYREF
  int v14; // [sp+Ch] [bp-1Ch] BYREF
  CPools *v15; // [sp+10h] [bp-18h] BYREF
  bool v16[18]; // [sp+16h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, a3);
  if ( v15 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v15, (int)v15 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 1, v9);
  v12 = (CTaskComplexLeaveCarAndWander *)CTask::operator new((CTask *)&dword_1C, v11);
  CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(v12, Vehicle, v14, v13, v16[0]);
}


// ============================================================

// Address: 0x4f96a8
// Original: _ZN29CTaskComplexLeaveCarAndWanderC2EP8CVehicleiib
// Demangled: CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(CVehicle *,int,int,bool)
void __fastcall CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(
        CTaskComplexLeaveCarAndWander *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_BYTE *)this + 24) = a5;
  *(_DWORD *)this = &off_66AC64;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f96f0
// Original: _ZN29CTaskComplexLeaveCarAndWanderD2Ev
// Demangled: CTaskComplexLeaveCarAndWander::~CTaskComplexLeaveCarAndWander()
void __fastcall CTaskComplexLeaveCarAndWander::~CTaskComplexLeaveCarAndWander(CTaskComplexLeaveCarAndWander *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AC64;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f971c
// Original: _ZN29CTaskComplexLeaveCarAndWanderD0Ev
// Demangled: CTaskComplexLeaveCarAndWander::~CTaskComplexLeaveCarAndWander()
void __fastcall CTaskComplexLeaveCarAndWander::~CTaskComplexLeaveCarAndWander(CTaskComplexLeaveCarAndWander *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AC64;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f974c
// Original: _ZN29CTaskComplexLeaveCarAndWander17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndWander::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndWander::CreateNextSubTask(CTaskComplexLeaveCarAndWander *this, CPed *a2)
{
  int v3; // r0
  const CPed *v4; // r1
  bool v5; // zf
  int v6; // r5
  int v7; // r0
  CTask *WanderTaskByPedType; // r0

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = v3 == 704;
  if ( v3 != 704 )
    v5 = v3 == 200;
  if ( v5 )
  {
    v6 = *((_DWORD *)a2 + 272);
    v7 = *(_DWORD *)(v6 + 20);
    if ( v7 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 912 )
        return 0;
      v6 = *((_DWORD *)a2 + 272);
    }
    WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(a2, v4);
    CTaskManager::SetTask((CTaskManager *)(v6 + 4), WanderTaskByPedType, 4, 0);
  }
  return 0;
}


// ============================================================

// Address: 0x4f9794
// Original: _ZNK29CTaskComplexLeaveCarAndWander13CreateSubTaskEi
// Demangled: CTaskComplexLeaveCarAndWander::CreateSubTask(int)
int __fastcall CTaskComplexLeaveCarAndWander::CreateSubTask(CTaskComplexLeaveCarAndWander *this, int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8
  char v6; // r6

  if ( a2 == 200 )
  {
    v3 = CTask::operator new((CTask *)byte_8, 0xC8u);
    CTaskSimple::CTaskSimple((CTaskSimple *)v3);
    *(_DWORD *)v3 = &off_669000;
  }
  else if ( a2 == 704 )
  {
    v3 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
    v4 = (CEntity *)*((_DWORD *)this + 3);
    v5 = *((_QWORD *)this + 2);
    v6 = *((_BYTE *)this + 24);
    CTaskComplex::CTaskComplex((CTaskComplex *)v3);
    *(_QWORD *)(v3 + 16) = v5;
    *(_BYTE *)(v3 + 24) = v6;
    *(_WORD *)(v3 + 25) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    *(_WORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 36) = 15;
    *(_DWORD *)(v3 + 40) = 1082130432;
    *(_DWORD *)(v3 + 44) = 1065353216;
    *(_BYTE *)(v3 + 48) = 0;
    *(_DWORD *)v3 = &off_66ABEC;
    *(_DWORD *)(v3 + 12) = v4;
    if ( v4 )
      CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  }
  else
  {
    return 0;
  }
  return v3;
}


// ============================================================

// Address: 0x4f982c
// Original: _ZN29CTaskComplexLeaveCarAndWander18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndWander::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndWander::CreateFirstSubTask(CTaskComplexLeaveCarAndWander *this, CPed *a2)
{
  int v2; // r2
  int v3; // r1

  v2 = *((_DWORD *)a2 + 289);
  v3 = 704;
  if ( (v2 & 0x100) == 0 )
    v3 = 200;
  return CTaskComplexLeaveCarAndWander::CreateSubTask(this, v3);
}


// ============================================================

// Address: 0x4f983e
// Original: _ZN29CTaskComplexLeaveCarAndWander14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndWander::ControlSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndWander::ControlSubTask(CTaskComplexLeaveCarAndWander *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fe63c
// Original: _ZNK29CTaskComplexLeaveCarAndWander5CloneEv
// Demangled: CTaskComplexLeaveCarAndWander::Clone(void)
int __fastcall CTaskComplexLeaveCarAndWander::Clone(CTaskComplexLeaveCarAndWander *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v5;
  *(_BYTE *)(v3 + 24) = (_BYTE)this;
  *(_DWORD *)v3 = &off_66AC64;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4fe68c
// Original: _ZNK29CTaskComplexLeaveCarAndWander11GetTaskTypeEv
// Demangled: CTaskComplexLeaveCarAndWander::GetTaskType(void)
int __fastcall CTaskComplexLeaveCarAndWander::GetTaskType(CTaskComplexLeaveCarAndWander *this)
{
  return 707;
}


// ============================================================

// Address: 0x4fe694
// Original: _ZN29CTaskComplexLeaveCarAndWander9SerializeEv
// Demangled: CTaskComplexLeaveCarAndWander::Serialize(void)
int __fastcall CTaskComplexLeaveCarAndWander::Serialize(CTaskComplexLeaveCarAndWander *this)
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
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r5
  int v17; // r2
  int v18; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndWander *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveCarAndWander *))(*(_DWORD *)this + 20))(this) == 707 )
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
      v12 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v12 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
      v9 = v12;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    free(v16);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexLeaveCarAndWander *)((char *)this + 24), (char *)&stderr + 1, v18);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndWander *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(707, v10);
  }
}


// ============================================================
