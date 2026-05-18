
// Address: 0x191f6c
// Original: j__ZN26CTaskComplexLeaveCarAndDie10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndDie::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveCarAndDie::CreateTask(CTaskComplexLeaveCarAndDie *this)
{
  return _ZN26CTaskComplexLeaveCarAndDie10CreateTaskEv(this);
}


// ============================================================

// Address: 0x493170
// Original: _ZN26CTaskComplexLeaveCarAndDie10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndDie::CreateTask(void)
int __fastcall CTaskComplexLeaveCarAndDie::CreateTask(CTaskComplexLeaveCarAndDie *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  unsigned int v9; // r1
  CTaskComplexLeaveCar *v10; // r0
  int result; // r0
  int v12; // [sp+Ch] [bp-1Ch] BYREF
  int v13; // [sp+10h] [bp-18h] BYREF
  CPools *v14[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, byte_4, a3);
  if ( v14[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v14[0], (int)v14[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v7);
  v10 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v9);
  CTaskComplexLeaveCar::CTaskComplexLeaveCar(v10, Vehicle, v13, v12, 0, 1);
  *(_BYTE *)(result + 26) = 1;
  *(_DWORD *)result = &off_66AF54;
  return result;
}


// ============================================================

// Address: 0x4f95e0
// Original: _ZN26CTaskComplexLeaveCarAndDie18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndDie::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndDie::CreateFirstSubTask(CTaskComplexLeaveCarAndDie *this, CPed *a2)
{
  CPed::SetPedState(a2);
  return CTaskComplexLeaveCar::CreateFirstSubTask(this, a2);
}


// ============================================================

// Address: 0x4fd140
// Original: _ZN26CTaskComplexLeaveCarAndDieD0Ev
// Demangled: CTaskComplexLeaveCarAndDie::~CTaskComplexLeaveCarAndDie()
void __fastcall CTaskComplexLeaveCarAndDie::~CTaskComplexLeaveCarAndDie(CTaskComplexLeaveCarAndDie *this)
{
  void *v1; // r0

  CTaskComplexLeaveCar::~CTaskComplexLeaveCar(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fd150
// Original: _ZNK26CTaskComplexLeaveCarAndDie5CloneEv
// Demangled: CTaskComplexLeaveCarAndDie::Clone(void)
CTaskComplex *__fastcall CTaskComplexLeaveCarAndDie::Clone(CTaskComplexLeaveCarAndDie *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r6

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_34, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *((_DWORD *)v5 + 5) = v6;
  *((_WORD *)v5 + 12) = 256;
  *((_BYTE *)v5 + 26) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_BYTE *)v5 + 32) = 0;
  *((_BYTE *)v5 + 33) = 0;
  *((_DWORD *)v5 + 9) = 15;
  *((_DWORD *)v5 + 10) = 1082130432;
  *((_DWORD *)v5 + 11) = 1065353216;
  *((_BYTE *)v5 + 48) = 0;
  *(_DWORD *)v5 = &off_66ABEC;
  *((_DWORD *)v5 + 3) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  *((_BYTE *)v5 + 26) = 1;
  *(_DWORD *)v5 = &off_66AF54;
  return v5;
}


// ============================================================

// Address: 0x4fd1d4
// Original: _ZNK26CTaskComplexLeaveCarAndDie11GetTaskTypeEv
// Demangled: CTaskComplexLeaveCarAndDie::GetTaskType(void)
int __fastcall CTaskComplexLeaveCarAndDie::GetTaskType(CTaskComplexLeaveCarAndDie *this)
{
  return 705;
}


// ============================================================

// Address: 0x4fd1dc
// Original: _ZN26CTaskComplexLeaveCarAndDie9SerializeEv
// Demangled: CTaskComplexLeaveCarAndDie::Serialize(void)
void __fastcall CTaskComplexLeaveCarAndDie::Serialize(CTaskComplexLeaveCarAndDie *this)
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
  CGenericGameStorage *v15; // r5
  int v16; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndDie *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveCarAndDie *))(*(_DWORD *)this + 20))(this) == 705 )
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
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    j_free(v15);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndDie *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(705, v10);
  }
}


// ============================================================
