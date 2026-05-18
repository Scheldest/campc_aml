
// Address: 0x19c888
// Original: j__ZN27CTaskComplexGoToPointAiming10CreateTaskEv
// Demangled: CTaskComplexGoToPointAiming::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexGoToPointAiming::CreateTask(CTaskComplexGoToPointAiming *this)
{
  return _ZN27CTaskComplexGoToPointAiming10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a15e0
// Original: j__ZN27CTaskComplexGoToPointAimingC2EiRK7CVectorP7CEntityS0_ff
// Demangled: CTaskComplexGoToPointAiming::CTaskComplexGoToPointAiming(int,CVector const&,CEntity *,CVector,float,float)
// attributes: thunk
int CTaskComplexGoToPointAiming::CTaskComplexGoToPointAiming()
{
  return _ZN27CTaskComplexGoToPointAimingC2EiRK7CVectorP7CEntityS0_ff();
}


// ============================================================

// Address: 0x495cc4
// Original: _ZN27CTaskComplexGoToPointAiming10CreateTaskEv
// Demangled: CTaskComplexGoToPointAiming::CreateTask(void)
int __fastcall CTaskComplexGoToPointAiming::CreateTask(CTaskComplexGoToPointAiming *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  char v8; // r4
  char v9; // r4
  char v10; // r5
  int v11; // r2
  char v12; // r5
  unsigned int v13; // r1
  _BYTE v15[12]; // [sp+18h] [bp-38h] BYREF
  CPools *v16; // [sp+24h] [bp-2Ch] BYREF
  int v17; // [sp+30h] [bp-20h] BYREF
  _DWORD v18[7]; // [sp+34h] [bp-1Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, byte_4, v4);
  switch ( v17 )
  {
    case 2:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v6);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v6);
      if ( v16 != (CPools *)-1 )
        CPools::GetVehicle(v16, (int)v16 + 1);
      break;
    case 4:
      v9 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v6);
        UseDataFence = v9;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v6);
      if ( v16 != (CPools *)-1 )
        CPools::GetObject(v16, (int)v16 + 1);
      break;
    case 3:
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v6);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v6);
      if ( v16 != (CPools *)-1 )
        CPools::GetPed(v16, (int)v16 + 1);
      break;
  }
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v6);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, &byte_9[3], v6);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, &byte_9[3], v11);
  CTask::operator new((CTask *)&dword_38, v13);
  return CTaskComplexGoToPointAiming::CTaskComplexGoToPointAiming();
}


// ============================================================

// Address: 0x51daa4
// Original: _ZN27CTaskComplexGoToPointAimingC2EiRK7CVectorP7CEntityS0_ff
// Demangled: CTaskComplexGoToPointAiming::CTaskComplexGoToPointAiming(int,CVector const&,CEntity *,CVector,float,float)
int __fastcall CTaskComplexGoToPointAiming::CTaskComplexGoToPointAiming(
        int a1,
        int a2,
        __int64 *a3,
        CEntity *a4,
        __int64 a5,
        int a6,
        float a7,
        float a8)
{
  __int64 v12; // d16
  char v13; // r1

  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 28) = a6;
  *(_DWORD *)a1 = &off_66C1C4;
  *(_DWORD *)(a1 + 16) = a4;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)(a1 + 16));
  if ( *(float *)(a1 + 32) != *(float *)a3
    || *(float *)(a1 + 36) != *((float *)a3 + 1)
    || *(float *)(a1 + 40) != *((float *)a3 + 2)
    || *(float *)(a1 + 44) != a7
    || *(float *)(a1 + 48) != a8 )
  {
    v12 = *a3;
    v13 = *(_BYTE *)(a1 + 52);
    *(_DWORD *)(a1 + 40) = *((_DWORD *)a3 + 2);
    *(float *)(a1 + 44) = a7;
    *(float *)(a1 + 48) = a8;
    *(_BYTE *)(a1 + 52) = v13 | 1;
    *(_QWORD *)(a1 + 32) = v12;
  }
  return a1;
}


// ============================================================

// Address: 0x51db6c
// Original: _ZN27CTaskComplexGoToPointAimingD0Ev
// Demangled: CTaskComplexGoToPointAiming::~CTaskComplexGoToPointAiming()
void __fastcall CTaskComplexGoToPointAiming::~CTaskComplexGoToPointAiming(CTaskComplexGoToPointAiming *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66C1C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x51db9c
// Original: _ZN27CTaskComplexGoToPointAiming17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAiming::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAiming::CreateNextSubTask(CTaskComplexGoToPointAiming *this, CPed *a2)
{
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  return 0;
}


// ============================================================

// Address: 0x51dbac
// Original: _ZNK27CTaskComplexGoToPointAiming13CreateSubTaskEi
// Demangled: CTaskComplexGoToPointAiming::CreateSubTask(int)
void __fastcall CTaskComplexGoToPointAiming::CreateSubTask(CEntity **this, int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r6
  CEntity *v5; // r5
  float v6; // s16
  int v7; // r0
  char v8; // r2
  float v9; // s0
  __int64 v10; // d16
  __int64 v11; // r0
  int v12; // r5
  CTaskSimpleGunControl *v13; // r0
  signed __int8 v14; // r5

  if ( a2 == 1020 )
  {
    v11 = ((__int64 (__fastcall *)(CEntity **))*((_DWORD *)*this + 5))(this);
    v12 = v11;
    v13 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, HIDWORD(v11));
    if ( v12 == 901 )
      v14 = 3;
    else
      v14 = 0;
    CTaskSimpleGunControl::CTaskSimpleGunControl(v13, this[4], (const CVector *)(this + 5), 0, v14, 1, (int)"usedi");
  }
  else if ( a2 == 903 )
  {
    v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, 0x387u);
    v4 = this[3];
    v5 = this[11];
    v6 = *((float *)this + 12);
    CTaskComplex::CTaskComplex(v3);
    *(_DWORD *)(v7 + 12) = v4;
    v8 = *(_BYTE *)(v7 + 36);
    v9 = *(float *)(v7 + 16);
    *(_DWORD *)v7 = &off_66C14C;
    *(_BYTE *)(v7 + 36) = v8 & 0xE4;
    if ( v9 != *((float *)this + 8)
      || *(float *)(v7 + 20) != *((float *)this + 9)
      || *(float *)(v7 + 24) != *((float *)this + 10)
      || *(float *)(v7 + 32) != v6 )
    {
      v10 = *((_QWORD *)this + 4);
      *(_DWORD *)(v7 + 24) = this[10];
      *(_QWORD *)(v7 + 16) = v10;
      *(float *)(v7 + 32) = v6;
      *(_DWORD *)(v7 + 28) = v5;
      *(_BYTE *)(v7 + 36) = v8 & 0xE0 | 4;
    }
  }
}


// ============================================================

// Address: 0x51dca8
// Original: _ZN27CTaskComplexGoToPointAiming18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAiming::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoToPointAiming::CreateFirstSubTask(CTaskComplexGoToPointAiming *this, CPed *a2)
{
  _DWORD *WeaponInfo; // r0
  int v5; // r1
  int v6; // r1
  int TaskSecondary; // r0
  __int64 v8; // r0
  int v9; // r8
  CTask *v10; // r9

  *((_BYTE *)this + 52) &= ~1u;
  CPed::GetWeaponSkill(a2);
  WeaponInfo = (_DWORD *)CWeaponInfo::GetWeaponInfo();
  v5 = WeaponInfo[6];
  if ( (v5 & 2) != 0 )
  {
    if ( CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) )
    {
      TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
      (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)TaskSecondary + 28))(TaskSecondary, a2, 1, 0);
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(CTaskComplexGoToPointAiming *))*(_DWORD *)(*(_DWORD *)this + 20))(this);
      v9 = *((_DWORD *)a2 + 272);
      v10 = (CTask *)CTask::operator new((CTask *)&off_3C, HIDWORD(v8));
      CTaskSimpleUseGun::CTaskSimpleUseGun();
      CTaskManager::SetTaskSecondary((CTaskManager *)(v9 + 4), v10, 0);
    }
    goto LABEL_8;
  }
  if ( !(v5 << 31) || (*WeaponInfo | 2) != 3 )
  {
LABEL_8:
    v6 = 903;
    goto LABEL_9;
  }
  v6 = 1020;
LABEL_9:
  CTaskComplexGoToPointAiming::CreateSubTask((CEntity **)this, v6);
}


// ============================================================

// Address: 0x51dd7e
// Original: _ZN27CTaskComplexGoToPointAiming14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAiming::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAiming::ControlSubTask(CTaskComplexGoToPointAiming *this, CPedIntelligence **a2)
{
  int v4; // r8
  int WeaponInfo; // r4
  int v6; // r0
  int v7; // r0
  char v8; // r2
  __int64 v9; // d16
  int TaskSecondary; // r0
  unsigned int v11; // r1
  CPedIntelligence *v12; // r4
  CEntity **v13; // r0
  CEntity *v14; // r2
  CPed *v15; // r1
  signed __int8 v16; // r3
  CTask *v18; // r5
  int v19; // r0

  v4 = *((_DWORD *)this + 2);
  CPed::GetWeaponSkill((CPed *)a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( *((unsigned __int8 *)this + 52) << 31 )
    return (*(int (__fastcall **)(CTaskComplexGoToPointAiming *, CPedIntelligence **))(*(_DWORD *)this + 44))(this, a2);
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v6 == 1020 )
  {
    if ( CPedIntelligence::GetTaskUseGun(a2[272]) )
    {
      CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
      CTaskSimpleUseGun::ControlGunMove();
    }
  }
  else if ( v6 == 903 )
  {
    v7 = *((_DWORD *)this + 2);
    if ( *(float *)(v7 + 16) != *((float *)this + 8)
      || *(float *)(v7 + 20) != *((float *)this + 9)
      || *(float *)(v7 + 24) != *((float *)this + 10)
      || *(float *)(v7 + 32) != 2.0 )
    {
      v8 = *(_BYTE *)(v7 + 36);
      v9 = *((_QWORD *)this + 4);
      *(_DWORD *)(v7 + 24) = *((_DWORD *)this + 10);
      *(_DWORD *)(v7 + 28) = 1056964608;
      *(_DWORD *)(v7 + 32) = 0x40000000;
      *(_BYTE *)(v7 + 36) = v8 | 4;
      *(_QWORD *)(v7 + 16) = v9;
    }
    if ( (*(_BYTE *)(WeaponInfo + 24) & 2) != 0 )
    {
      TaskSecondary = CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
      v12 = a2[272];
      if ( TaskSecondary )
      {
        if ( CPedIntelligence::GetTaskUseGun(a2[272]) )
        {
          if ( (*(int (__fastcall **)(CTaskComplexGoToPointAiming *))(*(_DWORD *)this + 20))(this) == 901
            && (rand() & 0x3F) == 0 )
          {
            v13 = (CEntity **)CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
            v14 = (CEntity *)*((_DWORD *)this + 4);
            v15 = (CPed *)a2;
            v16 = 2;
          }
          else
          {
            v13 = (CEntity **)CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
            v14 = (CEntity *)*((_DWORD *)this + 4);
            v15 = (CPed *)a2;
            v16 = 1;
          }
          CTaskSimpleUseGun::ControlGun(v13, v15, v14, v16);
        }
        else
        {
          v19 = CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)a2[272] + 4), 0);
          (*(void (__fastcall **)(int, CPedIntelligence **, int, _DWORD))(*(_DWORD *)v19 + 28))(v19, a2, 1, 0);
        }
      }
      else
      {
        v18 = (CTask *)CTask::operator new((CTask *)&off_3C, v11);
        CTaskSimpleUseGun::CTaskSimpleUseGun();
        CTaskManager::SetTaskSecondary((CPedIntelligence *)((char *)v12 + 4), v18, 0);
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x526a80
// Original: _ZN27CTaskComplexGoToPointAimingD2Ev
// Demangled: CTaskComplexGoToPointAiming::~CTaskComplexGoToPointAiming()
void __fastcall CTaskComplexGoToPointAiming::~CTaskComplexGoToPointAiming(CTaskComplexGoToPointAiming *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66C1C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52773c
// Original: _ZNK27CTaskComplexGoToPointAiming5CloneEv
// Demangled: CTaskComplexGoToPointAiming::Clone(void)
CTaskComplex *__fastcall CTaskComplexGoToPointAiming::Clone(CTaskComplexGoToPointAiming *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  float v4; // s16
  float v5; // s18
  CTaskComplex *v6; // r4
  __int64 v7; // kr00_8
  int v8; // r9
  int v9; // r10
  int v10; // r11
  float *v11; // r8
  __int64 v12; // d16
  char v13; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((float *)this + 11);
  v5 = *((float *)this + 12);
  v6 = v3;
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = *((_DWORD *)this + 5);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v6 + 3) = v7;
  *((_DWORD *)v6 + 5) = v8;
  *((_DWORD *)v6 + 6) = v9;
  *((_DWORD *)v6 + 7) = v10;
  v11 = (float *)((char *)this + 32);
  *(_DWORD *)v6 = &off_66C1C4;
  *((_DWORD *)v6 + 4) = HIDWORD(v7);
  if ( HIDWORD(v7) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)v6 + 4);
  if ( *((float *)v6 + 8) != *v11
    || *((float *)v6 + 9) != *((float *)this + 9)
    || *((float *)v6 + 10) != *((float *)this + 10)
    || *((float *)v6 + 11) != v4
    || *((float *)v6 + 12) != v5 )
  {
    v12 = *(_QWORD *)v11;
    *((_DWORD *)v6 + 10) = *((_DWORD *)this + 10);
    *((_QWORD *)v6 + 4) = v12;
    v13 = *((_BYTE *)v6 + 52);
    *((float *)v6 + 11) = v4;
    *((float *)v6 + 12) = v5;
    *((_BYTE *)v6 + 52) = v13 | 1;
  }
  return v6;
}


// ============================================================

// Address: 0x527824
// Original: _ZNK27CTaskComplexGoToPointAiming11GetTaskTypeEv
// Demangled: CTaskComplexGoToPointAiming::GetTaskType(void)
int __fastcall CTaskComplexGoToPointAiming::GetTaskType(CTaskComplexGoToPointAiming *this)
{
  return 924;
}


// ============================================================

// Address: 0x52782c
// Original: _ZN27CTaskComplexGoToPointAiming9SerializeEv
// Demangled: CTaskComplexGoToPointAiming::Serialize(void)
void __fastcall CTaskComplexGoToPointAiming::Serialize(CTaskComplexGoToPointAiming *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0
  int v8; // r6
  CGenericGameStorage *v9; // r5
  int v10; // r2
  CVehicle *v11; // r0
  int v12; // r1
  int v13; // r5
  int v14; // r0
  CGenericGameStorage *v15; // r5
  int v16; // r2
  CGenericGameStorage *v17; // r0
  CGenericGameStorage *v18; // r6
  int v19; // r2
  CGenericGameStorage *v20; // r5
  __int64 v21; // d16
  int v22; // r2
  CGenericGameStorage *v23; // r5
  __int64 v24; // d16
  int v25; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexGoToPointAiming *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGoToPointAiming *))(*(_DWORD *)this + 20))(this) != 924 )
  {
    v14 = (*(int (__fastcall **)(CTaskComplexGoToPointAiming *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(924, v14);
    return;
  }
  if ( UseDataFence )
    AddDataFence();
  v5 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v5 = *((_DWORD *)this + 3);
  CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
  free(v5);
  v7 = *((_DWORD *)this + 4);
  if ( !v7 )
  {
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    v17 = v15;
    goto LABEL_22;
  }
  v8 = *(_BYTE *)(v7 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v9 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v9 = v8;
  CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
  free(v9);
  v11 = (CVehicle *)*((_DWORD *)this + 4);
  v12 = *((_BYTE *)v11 + 58) & 7;
  switch ( v12 )
  {
    case 2:
      v13 = GettPoolVehicleRef(v11);
      goto LABEL_19;
    case 4:
      v13 = GettPoolObjRef(v11);
      goto LABEL_19;
    case 3:
      v13 = GettPoolPedRef(v11);
LABEL_19:
      if ( UseDataFence )
        AddDataFence();
      v18 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v18 = v13;
      CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
      v17 = v18;
LABEL_22:
      free(v17);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  v20 = (CGenericGameStorage *)malloc(0xCu);
  v21 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v20 + 2) = *((_DWORD *)this + 7);
  *(_QWORD *)v20 = v21;
  CGenericGameStorage::_SaveDataToWorkBuffer(v20, &byte_9[3], v22);
  free(v20);
  if ( UseDataFence )
    AddDataFence();
  v23 = (CGenericGameStorage *)malloc(0xCu);
  v24 = *((_QWORD *)this + 4);
  *((_DWORD *)v23 + 2) = *((_DWORD *)this + 10);
  *(_QWORD *)v23 = v24;
  CGenericGameStorage::_SaveDataToWorkBuffer(v23, &byte_9[3], v25);
  j_free(v23);
}


// ============================================================
