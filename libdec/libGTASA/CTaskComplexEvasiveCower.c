
// Address: 0x193534
// Original: j__ZN24CTaskComplexEvasiveCowerC2EP7CEntityRK7CVector
// Demangled: CTaskComplexEvasiveCower::CTaskComplexEvasiveCower(CEntity *,CVector const&)
// attributes: thunk
void __fastcall CTaskComplexEvasiveCower::CTaskComplexEvasiveCower(
        CTaskComplexEvasiveCower *this,
        CEntity *a2,
        const CVector *a3)
{
  _ZN24CTaskComplexEvasiveCowerC2EP7CEntityRK7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x19d034
// Original: j__ZN24CTaskComplexEvasiveCower10CreateTaskEv
// Demangled: CTaskComplexEvasiveCower::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexEvasiveCower::CreateTask(CTaskComplexEvasiveCower *this)
{
  return _ZN24CTaskComplexEvasiveCower10CreateTaskEv(this);
}


// ============================================================

// Address: 0x492c00
// Original: _ZN24CTaskComplexEvasiveCower10CreateTaskEv
// Demangled: CTaskComplexEvasiveCower::CreateTask(void)
void __fastcall CTaskComplexEvasiveCower::CreateTask(CTaskComplexEvasiveCower *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  char v8; // r4
  CEntity *v9; // r4
  char v10; // r5
  unsigned int v11; // r1
  CTaskComplexEvasiveCower *v12; // r0
  CPools *v13[3]; // [sp+0h] [bp-20h] BYREF
  _DWORD v14[5]; // [sp+Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, byte_4, a3);
  switch ( v14[0] )
  {
    case 2:
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v4);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, v4);
      if ( v13[0] != (CPools *)-1 )
      {
        Vehicle = CPools::GetVehicle(v13[0], (int)v13[0] + 1);
        goto LABEL_18;
      }
      break;
    case 4:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v4);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, v4);
      if ( v13[0] != (CPools *)-1 )
      {
        Vehicle = CPools::GetObject(v13[0], (int)v13[0] + 1);
        goto LABEL_18;
      }
      break;
    case 3:
      v5 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v4);
        UseDataFence = v5;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, v4);
      if ( v13[0] != (CPools *)-1 )
      {
        Vehicle = CPools::GetPed(v13[0], (int)v13[0] + 1);
LABEL_18:
        v9 = (CEntity *)Vehicle;
        goto LABEL_20;
      }
      break;
  }
  v9 = 0;
LABEL_20:
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, v4);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, &byte_9[3], v4);
  v12 = (CTaskComplexEvasiveCower *)CTask::operator new((CTask *)&dword_1C, v11);
  CTaskComplexEvasiveCower::CTaskComplexEvasiveCower(v12, v9, (const CVector *)v13);
}


// ============================================================

// Address: 0x50e658
// Original: _ZN24CTaskComplexEvasiveCowerC2EP7CEntityRK7CVector
// Demangled: CTaskComplexEvasiveCower::CTaskComplexEvasiveCower(CEntity *,CVector const&)
void __fastcall CTaskComplexEvasiveCower::CTaskComplexEvasiveCower(
        CTaskComplexEvasiveCower *this,
        CEntity *a2,
        const CVector *a3)
{
  __int64 v6; // d16
  int v7; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66B8E8;
  v6 = *(_QWORD *)a3;
  v7 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 5) = v7;
  *(_QWORD *)((char *)this + 12) = v6;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 6);
}


// ============================================================

// Address: 0x50e6a0
// Original: _ZN24CTaskComplexEvasiveCowerD2Ev
// Demangled: CTaskComplexEvasiveCower::~CTaskComplexEvasiveCower()
void __fastcall CTaskComplexEvasiveCower::~CTaskComplexEvasiveCower(CTaskComplexEvasiveCower *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B8E8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50e6cc
// Original: _ZN24CTaskComplexEvasiveCowerD0Ev
// Demangled: CTaskComplexEvasiveCower::~CTaskComplexEvasiveCower()
void __fastcall CTaskComplexEvasiveCower::~CTaskComplexEvasiveCower(CTaskComplexEvasiveCower *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B8E8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50e6fc
// Original: _ZNK24CTaskComplexEvasiveCower20ComputeTargetHeadingEv
// Demangled: CTaskComplexEvasiveCower::ComputeTargetHeading(void)
int __fastcall CTaskComplexEvasiveCower::ComputeTargetHeading(
        CTaskComplexEvasiveCower *this,
        int a2,
        int a3,
        int a4,
        float a5)
{
  return sub_1991A8(
           (CGeneral *)(*((_DWORD *)this + 3) ^ 0x80000000),
           COERCE_FLOAT((*(_QWORD *)((char *)this + 12) ^ 0x8000000080000000LL) >> 32),
           0.0,
           0.0,
           a5);
}


// ============================================================

// Address: 0x50e710
// Original: _ZNK24CTaskComplexEvasiveCower13CreateSubTaskEi
// Demangled: CTaskComplexEvasiveCower::CreateSubTask(int)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexEvasiveCower::CreateSubTask(CTaskComplexEvasiveCower *this, int a2)
{
  CTaskSimpleAchieveHeading *v3; // r4
  int RadianAngleBetweenPoints; // r0
  int v5; // r0
  float v7; // [sp+0h] [bp-18h]

  v3 = 0;
  if ( a2 == 412 )
  {
    v5 = CTask::operator new((CTask *)&dword_20, 0x19Cu);
    v3 = (CTaskSimpleAchieveHeading *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(
                                        v5,
                                        0,
                                        143,
                                        1082130432,
                                        412,
                                        (int)"Cower",
                                        0);
    *(_DWORD *)v3 = &off_6657C8;
  }
  else if ( a2 == 902 )
  {
    v3 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
    RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                                 (CGeneral *)(*((_DWORD *)this + 3) ^ 0x80000000),
                                 COERCE_FLOAT((*(_QWORD *)((char *)this + 12) ^ 0x8000000080000000LL) >> 32),
                                 0.0,
                                 0.0,
                                 v7);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v3, *(float *)&RadianAngleBetweenPoints, 2.0, 0.2);
  }
  return v3;
}


// ============================================================

// Address: 0x50e798
// Original: _ZN24CTaskComplexEvasiveCower17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveCower::CreateNextSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexEvasiveCower::CreateNextSubTask(
        CTaskComplexEvasiveCower *this,
        CPed *a2)
{
  int v3; // r0
  int v5; // r1

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 == 412 )
  {
    v5 = 1302;
  }
  else
  {
    if ( v3 != 902 )
      return 0;
    v5 = 412;
  }
  return CTaskComplexEvasiveCower::CreateSubTask(this, v5);
}


// ============================================================

// Address: 0x50e7cc
// Original: _ZN24CTaskComplexEvasiveCower18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveCower::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexEvasiveCower::CreateFirstSubTask(
        CTaskComplexEvasiveCower *this,
        CPed *a2)
{
  CTaskSimpleAchieveHeading *v3; // r5
  int RadianAngleBetweenPoints; // r1
  float v6; // [sp+0h] [bp-8h]

  v3 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(
                               (CGeneral *)(*((_DWORD *)this + 3) ^ 0x80000000),
                               COERCE_FLOAT((*(_QWORD *)((char *)this + 12) ^ 0x8000000080000000LL) >> 32),
                               0.0,
                               0.0,
                               v6);
  return sub_19DE8C(v3, *(float *)&RadianAngleBetweenPoints, 2.0, 0.2);
}


// ============================================================

// Address: 0x50e80c
// Original: _ZN24CTaskComplexEvasiveCower14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEvasiveCower::ControlSubTask(CPed *)
int __fastcall CTaskComplexEvasiveCower::ControlSubTask(CTaskComplexEvasiveCower *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x50fedc
// Original: _ZNK24CTaskComplexEvasiveCower5CloneEv
// Demangled: CTaskComplexEvasiveCower::Clone(void)
int __fastcall CTaskComplexEvasiveCower::Clone(CTaskComplexEvasiveCower *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // d16

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 6);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)v3 = &off_66B8E8;
  v5 = *(_QWORD *)((char *)this + 12);
  *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 5);
  *(_QWORD *)(v3 + 12) = v5;
  *(_DWORD *)(v3 + 24) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 24));
  return v3;
}


// ============================================================

// Address: 0x50ff28
// Original: _ZNK24CTaskComplexEvasiveCower11GetTaskTypeEv
// Demangled: CTaskComplexEvasiveCower::GetTaskType(void)
int __fastcall CTaskComplexEvasiveCower::GetTaskType(CTaskComplexEvasiveCower *this)
{
  return 512;
}


// ============================================================

// Address: 0x50ff30
// Original: _ZN24CTaskComplexEvasiveCower9SerializeEv
// Demangled: CTaskComplexEvasiveCower::Serialize(void)
void __fastcall CTaskComplexEvasiveCower::Serialize(CTaskComplexEvasiveCower *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r0
  int v6; // r6
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CVehicle *v9; // r0
  int v10; // r1
  int v11; // r5
  int v12; // r0
  CGenericGameStorage *v13; // r5
  int v14; // r2
  CGenericGameStorage *v15; // r0
  CGenericGameStorage *v16; // r6
  int v17; // r2
  CGenericGameStorage *v18; // r5
  __int64 v19; // d16
  int v20; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexEvasiveCower *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexEvasiveCower *))(*(_DWORD *)this + 20))(this) != 512 )
  {
    v12 = (*(int (__fastcall **)(CTaskComplexEvasiveCower *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(512, v12);
    return;
  }
  v5 = *((_DWORD *)this + 6);
  if ( !v5 )
  {
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    v15 = v13;
    goto LABEL_20;
  }
  v6 = *(_BYTE *)(v5 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = v6;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  free(v7);
  v9 = (CVehicle *)*((_DWORD *)this + 6);
  v10 = *((_BYTE *)v9 + 58) & 7;
  switch ( v10 )
  {
    case 2:
      v11 = GettPoolVehicleRef(v9);
      goto LABEL_17;
    case 4:
      v11 = GettPoolObjRef(v9);
      goto LABEL_17;
    case 3:
      v11 = GettPoolPedRef(v9);
LABEL_17:
      if ( UseDataFence )
        AddDataFence();
      v16 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v16 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
      v15 = v16;
LABEL_20:
      free(v15);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  v18 = (CGenericGameStorage *)malloc(0xCu);
  v19 = *(_QWORD *)((char *)this + 12);
  *((_DWORD *)v18 + 2) = *((_DWORD *)this + 5);
  *(_QWORD *)v18 = v19;
  CGenericGameStorage::_SaveDataToWorkBuffer(v18, &byte_9[3], v20);
  j_free(v18);
}


// ============================================================
