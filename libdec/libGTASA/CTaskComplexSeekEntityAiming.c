
// Address: 0x196408
// Original: j__ZN28CTaskComplexSeekEntityAimingC2EP7CEntityff
// Demangled: CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(CEntity *,float,float)
// attributes: thunk
void __fastcall CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(
        CTaskComplexSeekEntityAiming *this,
        CEntity *a2,
        float a3,
        float a4)
{
  _ZN28CTaskComplexSeekEntityAimingC2EP7CEntityff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a00cc
// Original: j__ZN28CTaskComplexSeekEntityAiming10CreateTaskEv
// Demangled: CTaskComplexSeekEntityAiming::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexSeekEntityAiming::CreateTask(CTaskComplexSeekEntityAiming *this)
{
  return _ZN28CTaskComplexSeekEntityAiming10CreateTaskEv(this);
}


// ============================================================

// Address: 0x4962d4
// Original: _ZN28CTaskComplexSeekEntityAiming10CreateTaskEv
// Demangled: CTaskComplexSeekEntityAiming::CreateTask(void)
void __fastcall CTaskComplexSeekEntityAiming::CreateTask(CTaskComplexSeekEntityAiming *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  char v8; // r4
  CEntity *v9; // r4
  char v10; // r5
  int v11; // r2
  char v12; // r5
  unsigned int v13; // r1
  CTaskComplexSeekEntityAiming *v14; // r0
  float v15; // [sp+4h] [bp-1Ch] BYREF
  CPools *v16; // [sp+8h] [bp-18h] BYREF
  _DWORD v17[5]; // [sp+Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, byte_4, a3);
  switch ( v17[0] )
  {
    case 2:
      v7 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
        UseDataFence = v7;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v4);
      if ( v16 != (CPools *)-1 )
      {
        Vehicle = CPools::GetVehicle(v16, (int)v16 + 1);
        goto LABEL_18;
      }
      break;
    case 4:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v4);
      if ( v16 != (CPools *)-1 )
      {
        Vehicle = CPools::GetObject(v16, (int)v16 + 1);
        goto LABEL_18;
      }
      break;
    case 3:
      v5 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
        UseDataFence = v5;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v4);
      if ( v16 != (CPools *)-1 )
      {
        Vehicle = CPools::GetPed(v16, (int)v16 + 1);
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
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v4);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v4);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v11);
  v14 = (CTaskComplexSeekEntityAiming *)CTask::operator new((CTask *)&off_18, v13);
  CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(v14, v9, *(float *)&v16, v15);
}


// ============================================================

// Address: 0x5455d0
// Original: _ZN28CTaskComplexSeekEntityAimingC2EP7CEntityff
// Demangled: CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(CEntity *,float,float)
void __fastcall CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(
        CTaskComplexSeekEntityAiming *this,
        CEntity *a2,
        float a3,
        float a4)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a3;
  *((float *)this + 5) = a4;
  *(_DWORD *)this = &off_66D354;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x545614
// Original: _ZN28CTaskComplexSeekEntityAimingD2Ev
// Demangled: CTaskComplexSeekEntityAiming::~CTaskComplexSeekEntityAiming()
void __fastcall CTaskComplexSeekEntityAiming::~CTaskComplexSeekEntityAiming(CTaskComplexSeekEntityAiming *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D354;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x545640
// Original: _ZN28CTaskComplexSeekEntityAimingD0Ev
// Demangled: CTaskComplexSeekEntityAiming::~CTaskComplexSeekEntityAiming()
void __fastcall CTaskComplexSeekEntityAiming::~CTaskComplexSeekEntityAiming(CTaskComplexSeekEntityAiming *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D354;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x545670
// Original: _ZN28CTaskComplexSeekEntityAiming17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAiming::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSeekEntityAiming::CreateNextSubTask(CTaskComplexSeekEntityAiming *this, CPed *a2)
{
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r4
  __int64 v6; // kr00_8
  char v7; // r3

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v3 != 203 )
  {
    if ( v3 == 907 && *((_DWORD *)this + 3) )
    {
      v5 = CTask::operator new((CTask *)&dword_20, 0x38Bu);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v5, 2000, 0, 0, 8.0);
      return v5;
    }
    return 0;
  }
  if ( !*((_DWORD *)this + 3) )
    return 0;
  v5 = CTask::operator new((CTask *)&dword_4C, v4);
  v6 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v5);
  *(_DWORD *)(v5 + 16) = 50000;
  *(_DWORD *)(v5 + 20) = 1000;
  *(_DWORD *)(v5 + 24) = HIDWORD(v6);
  *(_DWORD *)(v5 + 28) = 0x40000000;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0x40000000;
  *(_WORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 60) = 0;
  *(_DWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  v7 = *(_BYTE *)(v5 + 72);
  *(_DWORD *)v5 = &off_6656E4;
  *(_DWORD *)(v5 + 64) = &off_665720;
  *(_DWORD *)(v5 + 68) = 6;
  *(_BYTE *)(v5 + 72) = v7 & 0xF0 | 3;
  *(_DWORD *)(v5 + 12) = v6;
  if ( (_DWORD)v6 )
    CEntity::RegisterReference((CEntity *)v6, (CEntity **)(v5 + 12));
  return v5;
}


// ============================================================

// Address: 0x545744
// Original: _ZN28CTaskComplexSeekEntityAiming18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAiming::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexSeekEntityAiming::CreateFirstSubTask(CTaskComplexSeekEntityAiming *this, CPed *a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  char v5; // r3

  if ( !*((_DWORD *)this + 3) )
    return 0;
  v3 = CTask::operator new((CTask *)&dword_4C, (unsigned int)a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = 50000;
  *(_DWORD *)(v3 + 20) = 1000;
  *(_DWORD *)(v3 + 24) = HIDWORD(v4);
  *(_DWORD *)(v3 + 28) = 0x40000000;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0x40000000;
  *(_WORD *)(v3 + 48) = 0;
  *(_WORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  v5 = *(_BYTE *)(v3 + 72);
  *(_DWORD *)v3 = &off_6656E4;
  *(_DWORD *)(v3 + 64) = &off_665720;
  *(_DWORD *)(v3 + 68) = 6;
  *(_BYTE *)(v3 + 72) = v5 & 0xF0 | 3;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x5457dc
// Original: _ZN28CTaskComplexSeekEntityAiming14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekEntityAiming::ControlSubTask(CPed *)
int __fastcall CTaskComplexSeekEntityAiming::ControlSubTask(CTaskComplexSeekEntityAiming *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  float *v7; // r3
  float *v8; // r1
  float v9; // s16
  CEntity **TaskSecondary; // r6
  float v11; // s16
  int v12; // r0
  int v13; // r6
  CTask *v14; // r5

  v4 = *((_DWORD *)this + 3);
  v5 = *((_DWORD *)a2 + 5);
  v6 = *(_DWORD *)(v4 + 20);
  v7 = (float *)(v5 + 48);
  if ( !v5 )
    v7 = (float *)((char *)a2 + 4);
  v8 = (float *)(v6 + 48);
  if ( !v6 )
    v8 = (float *)(v4 + 4);
  v9 = (float)((float)(*v7 - *v8) * (float)(*v7 - *v8)) + (float)((float)(v7[1] - v8[1]) * (float)(v7[1] - v8[1]));
  TaskSecondary = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  v11 = v9 + 0.0;
  v12 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v12 == 203 )
  {
    if ( TaskSecondary && (*((int (__fastcall **)(CEntity **))*TaskSecondary + 5))(TaskSecondary) == 1017 )
      CTaskSimpleUseGun::ControlGun(TaskSecondary, a2, *((CEntity **)this + 3), 1);
    if ( v11 >= (float)(*((float *)this + 4) * *((float *)this + 4)) )
      (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        0,
        0);
  }
  else if ( v12 == 907 )
  {
    if ( v11 >= (float)(*((float *)this + 5) * *((float *)this + 5)) )
    {
      if ( TaskSecondary && (*((int (__fastcall **)(CEntity **))*TaskSecondary + 5))(TaskSecondary) == 1017 )
        CTaskSimpleUseGun::ControlGun(TaskSecondary, a2, *((CEntity **)this + 3), 6);
    }
    else if ( TaskSecondary )
    {
      if ( (*((int (__fastcall **)(CEntity **))*TaskSecondary + 5))(TaskSecondary) == 1017 )
        CTaskSimpleUseGun::ControlGun(TaskSecondary, a2, *((CEntity **)this + 3), 1);
    }
    else
    {
      v13 = *((_DWORD *)a2 + 272);
      v14 = (CTask *)CTask::operator new((CTask *)&off_3C, 0x38Bu);
      CTaskSimpleUseGun::CTaskSimpleUseGun();
      CTaskManager::SetTaskSecondary((CTaskManager *)(v13 + 4), v14, 0);
    }
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x546280
// Original: _ZNK28CTaskComplexSeekEntityAiming5CloneEv
// Demangled: CTaskComplexSeekEntityAiming::Clone(void)
CTaskComplex *__fastcall CTaskComplexSeekEntityAiming::Clone(CTaskComplexSeekEntityAiming *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r6

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *((_DWORD *)v5 + 5) = v6;
  *(_DWORD *)v5 = &off_66D354;
  *((_DWORD *)v5 + 3) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x5462c8
// Original: _ZNK28CTaskComplexSeekEntityAiming11GetTaskTypeEv
// Demangled: CTaskComplexSeekEntityAiming::GetTaskType(void)
int __fastcall CTaskComplexSeekEntityAiming::GetTaskType(CTaskComplexSeekEntityAiming *this)
{
  return 933;
}


// ============================================================

// Address: 0x5462d0
// Original: _ZN28CTaskComplexSeekEntityAiming9SerializeEv
// Demangled: CTaskComplexSeekEntityAiming::Serialize(void)
void __fastcall CTaskComplexSeekEntityAiming::Serialize(CTaskComplexSeekEntityAiming *this)
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
  int v19; // r2
  CGenericGameStorage *v20; // r5
  int v21; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexSeekEntityAiming *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexSeekEntityAiming *))(*(_DWORD *)this + 20))(this) != 933 )
  {
    v12 = (*(int (__fastcall **)(CTaskComplexSeekEntityAiming *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(933, v12);
    return;
  }
  v5 = *((_DWORD *)this + 3);
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
  v9 = (CVehicle *)*((_DWORD *)this + 3);
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
  v18 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v18 = *((_DWORD *)this + 4);
  CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
  free(v18);
  if ( UseDataFence )
    AddDataFence();
  v20 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v20 = *((_DWORD *)this + 5);
  CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
  j_free(v20);
}


// ============================================================
