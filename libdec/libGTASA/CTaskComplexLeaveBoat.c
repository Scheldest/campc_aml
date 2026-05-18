
// Address: 0x1949bc
// Original: j__ZN21CTaskComplexLeaveBoatC2EP8CVehiclei
// Demangled: CTaskComplexLeaveBoat::CTaskComplexLeaveBoat(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskComplexLeaveBoat::CTaskComplexLeaveBoat(CTaskComplexLeaveBoat *this, CVehicle *a2, int a3)
{
  _ZN21CTaskComplexLeaveBoatC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x195124
// Original: j__ZN21CTaskComplexLeaveBoat10CreateTaskEv
// Demangled: CTaskComplexLeaveBoat::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveBoat::CreateTask(CTaskComplexLeaveBoat *this)
{
  return _ZN21CTaskComplexLeaveBoat10CreateTaskEv(this);
}


// ============================================================

// Address: 0x49386c
// Original: _ZN21CTaskComplexLeaveBoat10CreateTaskEv
// Demangled: CTaskComplexLeaveBoat::CreateTask(void)
void __fastcall CTaskComplexLeaveBoat::CreateTask(CTaskComplexLeaveBoat *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskComplexLeaveBoat *v8; // r0
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
  v8 = (CTaskComplexLeaveBoat *)CTask::operator new((CTask *)&dword_14, v7);
  CTaskComplexLeaveBoat::CTaskComplexLeaveBoat(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x4f9504
// Original: _ZN21CTaskComplexLeaveBoatC2EP8CVehiclei
// Demangled: CTaskComplexLeaveBoat::CTaskComplexLeaveBoat(CVehicle *,int)
void __fastcall CTaskComplexLeaveBoat::CTaskComplexLeaveBoat(CTaskComplexLeaveBoat *this, CVehicle *a2, int a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &off_66AC28;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f9540
// Original: _ZN21CTaskComplexLeaveBoatD2Ev
// Demangled: CTaskComplexLeaveBoat::~CTaskComplexLeaveBoat()
void __fastcall CTaskComplexLeaveBoat::~CTaskComplexLeaveBoat(CTaskComplexLeaveBoat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AC28;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f956c
// Original: _ZN21CTaskComplexLeaveBoatD0Ev
// Demangled: CTaskComplexLeaveBoat::~CTaskComplexLeaveBoat()
void __fastcall CTaskComplexLeaveBoat::~CTaskComplexLeaveBoat(CTaskComplexLeaveBoat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AC28;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f959c
// Original: _ZN21CTaskComplexLeaveBoat17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveBoat::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexLeaveBoat::CreateNextSubTask(CTaskComplexLeaveBoat *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4f95a0
// Original: _ZN21CTaskComplexLeaveBoat18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveBoat::CreateFirstSubTask(CPed *)
CTaskSimpleCarSetPedOut *__fastcall CTaskComplexLeaveBoat::CreateFirstSubTask(CVehicle **this, CPed *a2)
{
  CTaskSimpleCarSetPedOut *v3; // r0

  v3 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  return sub_192738(v3, this[3], 0, 1);
}


// ============================================================

// Address: 0x4f95ba
// Original: _ZNK21CTaskComplexLeaveBoat13CreateSubTaskEi
// Demangled: CTaskComplexLeaveBoat::CreateSubTask(int)
void __fastcall CTaskComplexLeaveBoat::CreateSubTask(CVehicle **this, int a2)
{
  CTaskSimpleCarSetPedOut *v3; // r0

  if ( a2 == 816 )
  {
    v3 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, 0x330u);
    CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(v3, this[3], 0, 1);
  }
}


// ============================================================

// Address: 0x4f95dc
// Original: _ZN21CTaskComplexLeaveBoat14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveBoat::ControlSubTask(CPed *)
int __fastcall CTaskComplexLeaveBoat::ControlSubTask(CTaskComplexLeaveBoat *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fe4f0
// Original: _ZNK21CTaskComplexLeaveBoat5CloneEv
// Demangled: CTaskComplexLeaveBoat::Clone(void)
int __fastcall CTaskComplexLeaveBoat::Clone(CTaskComplexLeaveBoat *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66AC28;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4fe534
// Original: _ZNK21CTaskComplexLeaveBoat11GetTaskTypeEv
// Demangled: CTaskComplexLeaveBoat::GetTaskType(void)
int __fastcall CTaskComplexLeaveBoat::GetTaskType(CTaskComplexLeaveBoat *this)
{
  return 716;
}


// ============================================================

// Address: 0x4fe53c
// Original: _ZN21CTaskComplexLeaveBoat9SerializeEv
// Demangled: CTaskComplexLeaveBoat::Serialize(void)
void __fastcall CTaskComplexLeaveBoat::Serialize(CTaskComplexLeaveBoat *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveBoat *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveBoat *))(*(_DWORD *)this + 20))(this) == 716 )
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
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveBoat *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(716, v10);
  }
}


// ============================================================
