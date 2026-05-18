
// Address: 0x1938a0
// Original: j__ZN22CTaskComplexDestroyCar10CreateTaskEv
// Demangled: CTaskComplexDestroyCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexDestroyCar::CreateTask(CTaskComplexDestroyCar *this)
{
  return _ZN22CTaskComplexDestroyCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19894c
// Original: j__ZN22CTaskComplexDestroyCarC2EP8CVehiclejjj
// Demangled: CTaskComplexDestroyCar::CTaskComplexDestroyCar(CVehicle *,uint,uint,uint)
// attributes: thunk
void __fastcall CTaskComplexDestroyCar::CTaskComplexDestroyCar(
        CTaskComplexDestroyCar *this,
        CVehicle *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  _ZN22CTaskComplexDestroyCarC2EP8CVehiclejjj(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x4964a8
// Original: _ZN22CTaskComplexDestroyCar10CreateTaskEv
// Demangled: CTaskComplexDestroyCar::CreateTask(void)
void __fastcall CTaskComplexDestroyCar::CreateTask(CTaskComplexDestroyCar *this, int a2, int a3)
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
  CTaskComplexDestroyCar *v12; // r0
  unsigned int v13; // [sp+8h] [bp-20h] BYREF
  unsigned int v14; // [sp+Ch] [bp-1Ch] BYREF
  unsigned int v15; // [sp+10h] [bp-18h] BYREF
  CPools *v16[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, byte_4, a3);
  if ( v16[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v16[0], (int)v16[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v9);
  v12 = (CTaskComplexDestroyCar *)CTask::operator new((CTask *)&dword_20, v11);
  CTaskComplexDestroyCar::CTaskComplexDestroyCar(v12, Vehicle, v15, v14, v13);
}


// ============================================================

// Address: 0x4e5d74
// Original: _ZN22CTaskComplexDestroyCarC2EP8CVehiclejjj
// Demangled: CTaskComplexDestroyCar::CTaskComplexDestroyCar(CVehicle *,uint,uint,uint)
void __fastcall CTaskComplexDestroyCar::CTaskComplexDestroyCar(
        CTaskComplexDestroyCar *this,
        CVehicle *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 7) = a5;
  *(_DWORD *)this = &off_669974;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x4e5db8
// Original: _ZN22CTaskComplexDestroyCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexDestroyCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexDestroyCar::MakeAbortable(CTaskComplexDestroyCar *this, CPed *a2, int a3, const CEvent *a4)
{
  if ( (unsigned int)(a3 - 1) <= 1 )
    return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
  else
    return 0;
}


// ============================================================

// Address: 0x4e5dd4
// Original: _ZN22CTaskComplexDestroyCarD2Ev
// Demangled: CTaskComplexDestroyCar::~CTaskComplexDestroyCar()
void __fastcall CTaskComplexDestroyCar::~CTaskComplexDestroyCar(CTaskComplexDestroyCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669974;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e5e00
// Original: _ZN22CTaskComplexDestroyCarD0Ev
// Demangled: CTaskComplexDestroyCar::~CTaskComplexDestroyCar()
void __fastcall CTaskComplexDestroyCar::~CTaskComplexDestroyCar(CTaskComplexDestroyCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669974;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e5e30
// Original: _ZN22CTaskComplexDestroyCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexDestroyCar::CreateNextSubTask(CTaskComplexDestroyCar *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf
  int IsTypeMelee; // r0
  unsigned int v8; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 1302;
  if ( v4 < 1004 )
  {
    if ( v4 != 208 )
    {
      v6 = v4 == 703;
      if ( v4 != 703 )
        v6 = v4 == 704;
      if ( !v6 )
        return 0;
      IsTypeMelee = CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444));
      v5 = 1005;
      if ( IsTypeMelee )
        v5 = 1004;
    }
    return CTaskComplexDestroyCar::CreateSubTask(this, v5, 0);
  }
  v8 = v4 - 1004;
  if ( v8 <= 4 && ((1 << v8) & 0x13) != 0 )
    return CTaskComplexDestroyCar::CreateSubTask(this, v5, 0);
  return 0;
}


// ============================================================

// Address: 0x4e5ea0
// Original: _ZN22CTaskComplexDestroyCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexDestroyCar::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexDestroyCar::CreateSubTask(CTaskComplexDestroyCar *this, int a2, CVehicle **a3)
{
  int v5; // r4
  CEntity *v6; // r5
  int v7; // r8
  int v8; // r9
  int v9; // r6
  char *v10; // r0

  switch ( a2 )
  {
    case 1005:
      v5 = CTask::operator new((CTask *)&dword_64, 0x3EDu);
      v6 = (CEntity *)*((_DWORD *)this + 4);
      v7 = *((_DWORD *)this + 5);
      v8 = *((_DWORD *)this + 6);
      v9 = *((_DWORD *)this + 7);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 65) = 0LL;
      *(_QWORD *)(v5 + 73) = 0LL;
      *(_QWORD *)(v5 + 52) = 0LL;
      *(_QWORD *)(v5 + 60) = 0LL;
      v10 = (char *)&`vtable for'CTaskComplexDestroyCarArmed;
      *(_QWORD *)(v5 + 36) = 0LL;
      *(_QWORD *)(v5 + 44) = 0LL;
      *(_QWORD *)(v5 + 20) = 0LL;
      *(_QWORD *)(v5 + 28) = 0LL;
      *(_DWORD *)(v5 + 84) = -1;
      *(_DWORD *)(v5 + 88) = v7;
      *(_DWORD *)(v5 + 92) = v8;
      *(_DWORD *)(v5 + 96) = v9;
      break;
    case 1004:
      v5 = CTask::operator new((CTask *)&dword_34, 0x3ECu);
      v6 = (CEntity *)*((_DWORD *)this + 4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 20) = 0LL;
      *(_QWORD *)(v5 + 28) = 0LL;
      *(_WORD *)(v5 + 12) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      v10 = (char *)&`vtable for'CTaskComplexDestroyCarMelee;
      *(_DWORD *)(v5 + 48) = -1;
      break;
    case 704:
      v5 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, a3[356], 0, 0, 1, 0);
      return v5;
    default:
      return 0;
  }
  *(_DWORD *)v5 = v10 + 8;
  *(_DWORD *)(v5 + 16) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)(v5 + 16));
  return v5;
}


// ============================================================

// Address: 0x4e5f8c
// Original: _ZN22CTaskComplexDestroyCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexDestroyCar::CreateFirstSubTask(CTaskComplexDestroyCar *this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  CEntity *v9; // r5
  CEntity **v10; // r1
  CEntity *v11; // r0
  CEntity *v12; // r6
  int v13; // r8
  int v14; // r9
  int v15; // r5

  v4 = *((_DWORD *)this + 4);
  v5 = 0;
  *((_BYTE *)this + 12) = 0;
  if ( v4 )
  {
    v6 = *((_DWORD *)a2 + 356);
    v7 = v6 == 0;
    if ( v6 )
      v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( v7 )
    {
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
      {
        v5 = CTask::operator new((CTask *)&dword_34, v8);
        v9 = (CEntity *)*((_DWORD *)this + 4);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_QWORD *)(v5 + 20) = 0LL;
        *(_QWORD *)(v5 + 28) = 0LL;
        *(_WORD *)(v5 + 12) = 0;
        *(_DWORD *)(v5 + 40) = 0;
        *(_DWORD *)(v5 + 44) = 0;
        *(_DWORD *)(v5 + 48) = -1;
        *(_DWORD *)v5 = &off_6699B0;
        *(_DWORD *)(v5 + 16) = v9;
        v10 = (CEntity **)(v5 + 16);
        if ( !v9 )
          return v5;
        v11 = v9;
      }
      else
      {
        v5 = CTask::operator new((CTask *)&dword_64, v8);
        v12 = (CEntity *)*((_DWORD *)this + 4);
        v13 = *((_DWORD *)this + 5);
        v14 = *((_DWORD *)this + 6);
        v15 = *((_DWORD *)this + 7);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        *(_QWORD *)(v5 + 65) = 0LL;
        *(_QWORD *)(v5 + 73) = 0LL;
        *(_QWORD *)(v5 + 52) = 0LL;
        *(_QWORD *)(v5 + 60) = 0LL;
        *(_QWORD *)(v5 + 36) = 0LL;
        *(_QWORD *)(v5 + 44) = 0LL;
        *(_QWORD *)(v5 + 20) = 0LL;
        *(_QWORD *)(v5 + 28) = 0LL;
        *(_DWORD *)(v5 + 84) = -1;
        *(_DWORD *)(v5 + 88) = v13;
        *(_DWORD *)(v5 + 92) = v14;
        *(_DWORD *)(v5 + 96) = v15;
        *(_DWORD *)v5 = &off_6699EC;
        *(_DWORD *)(v5 + 16) = v12;
        v10 = (CEntity **)(v5 + 16);
        if ( !v12 )
          return v5;
        v11 = v12;
      }
      CEntity::RegisterReference(v11, v10);
      return v5;
    }
    v5 = CTask::operator new((CTask *)&dword_34, (unsigned int)a2);
    CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)a2 + 356), 0, 0, 1, 0);
  }
  return v5;
}


// ============================================================

// Address: 0x4e60a8
// Original: _ZN22CTaskComplexDestroyCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDestroyCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexDestroyCar::ControlSubTask(CTaskComplexDestroyCar *this, CPed *a2)
{
  int v4; // r0
  int v6; // r0
  int v7; // r8
  int v8; // r1

  v4 = *((_DWORD *)this + 4);
  if ( !v4 || *(float *)(v4 + 1228) <= 0.0 )
    return 0;
  if ( *((_BYTE *)this + 12) )
    return (*(int (__fastcall **)(CTaskComplexDestroyCar *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v6 != 1005 )
  {
    if ( v6 != 1004 || CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) )
      return *((_DWORD *)this + 2);
    v7 = 1005;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 364) || CPed::IsPlayer(a2) )
    return *((_DWORD *)this + 2);
  if ( *((int *)a2 + 364) >= 1 )
  {
    v8 = 0;
LABEL_40:
    CPed::SetCurrentWeapon(a2, v8);
    return *((_DWORD *)this + 2);
  }
  if ( *((int *)a2 + 371) > 0 )
  {
    v8 = 1;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 378) > 0 )
  {
    v8 = 2;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 385) > 0 )
  {
    v8 = 3;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 392) > 0 )
  {
    v8 = 4;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 399) > 0 )
  {
    v8 = 5;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 406) > 0 )
  {
    v8 = 6;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 413) > 0 )
  {
    v8 = 7;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 420) > 0 )
  {
    v8 = 8;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 427) > 0 )
  {
    v8 = 9;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 434) > 0 )
  {
    v8 = 10;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 441) > 0 )
  {
    v8 = 11;
    goto LABEL_40;
  }
  if ( *((int *)a2 + 448) > 0 )
  {
    v8 = 12;
    goto LABEL_40;
  }
  CPed::SetCurrentWeapon(a2, 0);
  v7 = 1004;
LABEL_10:
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
    return CTaskComplexDestroyCar::CreateSubTask(this, v7, (CVehicle **)a2);
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ea314
// Original: _ZNK22CTaskComplexDestroyCar5CloneEv
// Demangled: CTaskComplexDestroyCar::Clone(void)
int __fastcall CTaskComplexDestroyCar::Clone(CTaskComplexDestroyCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8
  int v6; // r6

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *(_QWORD *)((char *)this + 20);
  v6 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 28) = v6;
  *(_DWORD *)v3 = &off_669974;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x4ea364
// Original: _ZNK22CTaskComplexDestroyCar11GetTaskTypeEv
// Demangled: CTaskComplexDestroyCar::GetTaskType(void)
int __fastcall CTaskComplexDestroyCar::GetTaskType(CTaskComplexDestroyCar *this)
{
  return 1003;
}


// ============================================================

// Address: 0x4ea36c
// Original: _ZN22CTaskComplexDestroyCar9SerializeEv
// Demangled: CTaskComplexDestroyCar::Serialize(void)
void __fastcall CTaskComplexDestroyCar::Serialize(CTaskComplexDestroyCar *this)
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
  CGenericGameStorage *v17; // r5
  int v18; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexDestroyCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexDestroyCar *))(*(_DWORD *)this + 20))(this) == 1003 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 4);
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
    *(_DWORD *)v13 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    free(v13);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = *((_DWORD *)this + 6);
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    free(v15);
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    j_free(v17);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexDestroyCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1003, v10);
  }
}


// ============================================================
