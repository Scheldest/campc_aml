
// Address: 0x18b564
// Original: j__ZN26CTaskComplexDragPedFromCar10CreateTaskEv
// Demangled: CTaskComplexDragPedFromCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexDragPedFromCar::CreateTask(CTaskComplexDragPedFromCar *this)
{
  return _ZN26CTaskComplexDragPedFromCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18c21c
// Original: j__ZN26CTaskComplexDragPedFromCarC2EP4CPedi
// Demangled: CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(CPed *,int)
// attributes: thunk
void __fastcall CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(
        CTaskComplexDragPedFromCar *this,
        CPed *a2,
        int a3)
{
  _ZN26CTaskComplexDragPedFromCarC2EP4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x492fb4
// Original: _ZN26CTaskComplexDragPedFromCar10CreateTaskEv
// Demangled: CTaskComplexDragPedFromCar::CreateTask(void)
void __fastcall CTaskComplexDragPedFromCar::CreateTask(CTaskComplexDragPedFromCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CPed *Ped; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskComplexDragPedFromCar *v8; // r0
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
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v10, (int)v10 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, v4);
  v8 = (CTaskComplexDragPedFromCar *)CTask::operator new((CTask *)&dword_54, v7);
  CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(v8, Ped, v9);
}


// ============================================================

// Address: 0x4f71a0
// Original: _ZN26CTaskComplexDragPedFromCarC2EP4CPedi
// Demangled: CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(CPed *,int)
void __fastcall CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(
        CTaskComplexDragPedFromCar *this,
        CPed *a2,
        int a3)
{
  char v6; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 9) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = 0;
  v6 = *((_BYTE *)this + 16);
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 18) = -1082130432;
  *((_BYTE *)this + 16) = v6 & 0xF0 | 4;
  *(_DWORD *)this = &off_66AA44;
  *((_DWORD *)this + 20) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 20);
  *((_DWORD *)this + 8) = a3;
}


// ============================================================

// Address: 0x4f7214
// Original: _ZN26CTaskComplexDragPedFromCarD2Ev
// Demangled: CTaskComplexDragPedFromCar::~CTaskComplexDragPedFromCar()
void __fastcall CTaskComplexDragPedFromCar::~CTaskComplexDragPedFromCar(CTaskComplexDragPedFromCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 80);
  v2 = (CEntity *)*((_DWORD *)this + 20);
  *(_DWORD *)this = &off_66AA44;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger((CEntity **)this);
}


// ============================================================

// Address: 0x4f7240
// Original: _ZN26CTaskComplexDragPedFromCarD0Ev
// Demangled: CTaskComplexDragPedFromCar::~CTaskComplexDragPedFromCar()
void __fastcall CTaskComplexDragPedFromCar::~CTaskComplexDragPedFromCar(CTaskComplexDragPedFromCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 80);
  v2 = (CEntity *)*((_DWORD *)this + 20);
  *(_DWORD *)this = &off_66AA44;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger((CEntity **)this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f7270
// Original: _ZN26CTaskComplexDragPedFromCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDragPedFromCar::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexDragPedFromCar::CreateFirstSubTask(CTaskComplexDragPedFromCar *this, CPed *a2)
{
  unsigned int v4; // r1
  CVehicle *v5; // r0
  bool v6; // zf
  CTaskSimple *v7; // r0
  _DWORD *result; // r0
  CEntity *v9; // r0
  CEntity *v10; // r0
  CCarEnterExit *v11; // r0
  char v12; // r2
  const CVehicle *v13; // r1
  char v14; // r6
  int v15; // r2
  const CPed *v16; // r2
  int v17; // r0

  v4 = *((_DWORD *)this + 20);
  if ( !v4 )
    goto LABEL_6;
  v5 = *(CVehicle **)(v4 + 1424);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(unsigned __int8 *)(v4 + 1157) << 31 == 0;
  if ( !v6
    && (CVehicle::IsPassenger(v5, (const CPed *)v4)
     || CVehicle::IsDriver(*(CVehicle **)(*((_DWORD *)this + 20) + 1424), *((const CPed **)this + 20)) == 1) )
  {
    v9 = (CEntity *)*((_DWORD *)this + 3);
    if ( v9 )
      CEntity::CleanUpOldReference(v9, (CEntity **)this + 3);
    v10 = *(CEntity **)(*((_DWORD *)this + 20) + 1424);
    *((_DWORD *)this + 3) = v10;
    CEntity::RegisterReference(v10, (CEntity **)this + 3);
    v11 = (CCarEnterExit *)*((_DWORD *)this + 3);
    v12 = *((_BYTE *)this + 16);
    v13 = (const CVehicle *)*((_DWORD *)this + 20);
    v14 = v12 & 0xF8;
    if ( *((const CVehicle **)v11 + 281) == v13 )
      v14 = v12 | 1;
    *((_BYTE *)this + 16) = v14 & 0xF9 | 4;
    if ( v11 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)v11 + 226) + 205) & 2) != 0
        || (v15 = *((_DWORD *)v13 + 356), *(_DWORD *)(v15 + 1440) == 9)
        || (v16 = *(const CPed **)(v15 + 1444), v16 == (const CPed *)((char *)&stderr + 2)) )
      {
        v17 = 0;
      }
      else
      {
        v17 = CCarEnterExit::ComputeTargetDoorToExit(v11, v13, v16);
      }
      *((_DWORD *)this + 7) = v17;
    }
    return (_DWORD *)CTaskComplexEnterCar::CreateFirstSubTask(this, a2);
  }
  else
  {
LABEL_6:
    v7 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v4);
    CTaskSimple::CTaskSimple(v7);
    *result = &off_669000;
  }
  return result;
}


// ============================================================

// Address: 0x4f7340
// Original: _ZN26CTaskComplexDragPedFromCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDragPedFromCar::ControlSubTask(CPed *)
_DWORD *__fastcall CTaskComplexDragPedFromCar::ControlSubTask(CTaskComplexDragPedFromCar *this, CPed *a2)
{
  _DWORD *result; // r0
  int v5; // r0
  unsigned int v6; // r1
  CTaskSimple *v7; // r0

  if ( *((_BYTE *)this + 40) )
    return (_DWORD *)CTaskComplexEnterCar::ControlSubTask(this, a2);
  v5 = *((_DWORD *)this + 20);
  if ( !v5
    || *(unsigned __int8 *)(v5 + 1157) << 31
    || !(*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
          *((_DWORD *)this + 2),
          a2,
          1,
          0) )
  {
    return (_DWORD *)CTaskComplexEnterCar::ControlSubTask(this, a2);
  }
  v7 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v6);
  CTaskSimple::CTaskSimple(v7);
  *result = &off_669000;
  return result;
}


// ============================================================

// Address: 0x4fda68
// Original: _ZNK26CTaskComplexDragPedFromCar5CloneEv
// Demangled: CTaskComplexDragPedFromCar::Clone(void)
CTaskComplex *__fastcall CTaskComplexDragPedFromCar::Clone(CTaskComplexDragPedFromCar *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r6
  CTaskComplex *v5; // r4
  CEntity *v6; // r5
  char v7; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_54, a2);
  v4 = *((_DWORD *)this + 8);
  v5 = v3;
  v6 = (CEntity *)*((_DWORD *)this + 20);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)((char *)v5 + 20) = 0LL;
  *(_QWORD *)((char *)v5 + 28) = 0LL;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 9) = 6;
  *((_WORD *)v5 + 20) = 0;
  *((_DWORD *)v5 + 14) = 0;
  *((_BYTE *)v5 + 60) = 0;
  *((_DWORD *)v5 + 16) = 0;
  *((_BYTE *)v5 + 68) = 0;
  v7 = *((_BYTE *)v5 + 16);
  *((_DWORD *)v5 + 18) = -1082130432;
  *(_DWORD *)v5 = &off_66AA44;
  *((_BYTE *)v5 + 16) = v7 & 0xF0 | 4;
  *((_DWORD *)v5 + 20) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)v5 + 20);
  *((_DWORD *)v5 + 8) = v4;
  return v5;
}


// ============================================================

// Address: 0x4fdae8
// Original: _ZNK26CTaskComplexDragPedFromCar11GetTaskTypeEv
// Demangled: CTaskComplexDragPedFromCar::GetTaskType(void)
int __fastcall CTaskComplexDragPedFromCar::GetTaskType(CTaskComplexDragPedFromCar *this)
{
  return 703;
}


// ============================================================

// Address: 0x4fdaf0
// Original: _ZN26CTaskComplexDragPedFromCar9SerializeEv
// Demangled: CTaskComplexDragPedFromCar::Serialize(void)
void __fastcall CTaskComplexDragPedFromCar::Serialize(CTaskComplexDragPedFromCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexDragPedFromCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDragPedFromCar *))(*(_DWORD *)this + 20))(this) == 703 )
  {
    v5 = (CPed *)*((_DWORD *)this + 20);
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
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexDragPedFromCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(703, v10);
  }
}


// ============================================================
