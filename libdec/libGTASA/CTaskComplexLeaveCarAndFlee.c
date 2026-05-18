
// Address: 0x18bb2c
// Original: j__ZN27CTaskComplexLeaveCarAndFleeC2EP8CVehicleRK7CVectoriib
// Demangled: CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(CVehicle *,CVector const&,int,int,bool)
// attributes: thunk
void __fastcall CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(
        CTaskComplexLeaveCarAndFlee *this,
        CVehicle *a2,
        const CVector *a3,
        int a4,
        int a5,
        bool a6)
{
  _ZN27CTaskComplexLeaveCarAndFleeC2EP8CVehicleRK7CVectoriib(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19a590
// Original: j__ZN27CTaskComplexLeaveCarAndFlee10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndFlee::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveCarAndFlee::CreateTask(CTaskComplexLeaveCarAndFlee *this)
{
  return _ZN27CTaskComplexLeaveCarAndFlee10CreateTaskEv(this);
}


// ============================================================

// Address: 0x493244
// Original: _ZN27CTaskComplexLeaveCarAndFlee10CreateTaskEv
// Demangled: CTaskComplexLeaveCarAndFlee::CreateTask(void)
void __fastcall CTaskComplexLeaveCarAndFlee::CreateTask(CTaskComplexLeaveCarAndFlee *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r5
  unsigned int v13; // r1
  CTaskComplexLeaveCarAndFlee *v14; // r0
  int v15; // [sp+Ch] [bp-2Ch] BYREF
  int v16; // [sp+10h] [bp-28h] BYREF
  _BYTE v17[12]; // [sp+14h] [bp-24h] BYREF
  CPools *v18; // [sp+20h] [bp-18h] BYREF
  bool v19[18]; // [sp+26h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, a3);
  if ( v18 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v18, (int)v18 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, &byte_9[3], v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 1, v11);
  v14 = (CTaskComplexLeaveCarAndFlee *)CTask::operator new((CTask *)&word_28, v13);
  CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(v14, Vehicle, (const CVector *)v17, v16, v15, v19[0]);
}


// ============================================================

// Address: 0x4f9844
// Original: _ZN27CTaskComplexLeaveCarAndFleeC2EP8CVehicleRK7CVectoriib
// Demangled: CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(CVehicle *,CVector const&,int,int,bool)
void __fastcall CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(
        CTaskComplexLeaveCarAndFlee *this,
        CVehicle *a2,
        const CVector *a3,
        int a4,
        int a5,
        bool a6)
{
  __int64 v10; // d16

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a4;
  *(_DWORD *)this = &off_66ACA0;
  *((_DWORD *)this + 3) = a2;
  v10 = *(_QWORD *)a3;
  *((_DWORD *)this + 7) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 8) = a5;
  *((_BYTE *)this + 36) = a6;
  *(_QWORD *)((char *)this + 20) = v10;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f989c
// Original: _ZN27CTaskComplexLeaveCarAndFleeD2Ev
// Demangled: CTaskComplexLeaveCarAndFlee::~CTaskComplexLeaveCarAndFlee()
void __fastcall CTaskComplexLeaveCarAndFlee::~CTaskComplexLeaveCarAndFlee(CTaskComplexLeaveCarAndFlee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ACA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f98c8
// Original: _ZN27CTaskComplexLeaveCarAndFleeD0Ev
// Demangled: CTaskComplexLeaveCarAndFlee::~CTaskComplexLeaveCarAndFlee()
void __fastcall CTaskComplexLeaveCarAndFlee::~CTaskComplexLeaveCarAndFlee(CTaskComplexLeaveCarAndFlee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ACA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4f98f8
// Original: _ZN27CTaskComplexLeaveCarAndFlee17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndFlee::CreateNextSubTask(CPed *)
CTaskComplexSmartFleePoint *__fastcall CTaskComplexLeaveCarAndFlee::CreateNextSubTask(
        CTaskComplexLeaveCarAndFlee *this,
        CPed *a2)
{
  int *v4; // r0
  char *v5; // r1
  int v6; // r0
  float *v7; // r1
  float v8; // s0
  float *v9; // r2
  float v10; // s6
  float v11; // s4
  CTaskComplexSmartFleePoint *v12; // r4
  int v13; // r5
  CTask *WanderTaskByPedType; // r0
  int v15; // r6
  int v16; // r6
  int v17; // r2
  int v18; // r6
  const CVector *v19; // r1

  v4 = (int *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = (char *)&elf_hash_bucket[164] + 2;
  if ( v4 == (int *)((char *)&elf_hash_bucket[164] + 2) )
  {
    v13 = *((_DWORD *)a2 + 272);
    WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(
                                     a2,
                                     (const CPed *)((char *)&elf_hash_bucket[164] + 2));
    v12 = 0;
    CTaskManager::SetTask((CTaskManager *)(v13 + 4), WanderTaskByPedType, 4, 0);
    return v12;
  }
  if ( v4 == &elf_hash_bucket[162] )
  {
    v15 = *((unsigned __int8 *)this + 36);
    v12 = (CTaskComplexSmartFleePoint *)CTask::operator new((CTask *)&dword_44, (unsigned int)&elf_hash_bucket[164] + 2);
    if ( v15 )
    {
LABEL_14:
      v17 = *((_DWORD *)this + 3);
      v18 = *(_DWORD *)(v17 + 20);
      v19 = (const CVector *)(v18 + 48);
      if ( !v18 )
        v19 = (const CVector *)(v17 + 4);
      goto LABEL_18;
    }
LABEL_17:
    v19 = (CTaskComplexLeaveCarAndFlee *)((char *)this + 20);
LABEL_18:
    CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(v12, v19, 0, 60.0, 1000000);
    return v12;
  }
  if ( v4 != &elf_hash_bucket[113] )
    return 0;
  v6 = *((_DWORD *)a2 + 356);
  if ( !v6 || (v5 = *(char **)(v6 + 1440), v5 != &byte_5) )
  {
    v16 = *((unsigned __int8 *)this + 36);
    v12 = (CTaskComplexSmartFleePoint *)CTask::operator new((CTask *)&dword_44, (unsigned int)v5);
    if ( v16 )
      goto LABEL_14;
    goto LABEL_17;
  }
  v7 = *(float **)(v6 + 20);
  v8 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v6 + 38)]) + 44) + 36) * -2.0;
  v9 = v7 + 12;
  v10 = v7[6];
  if ( !v7 )
    v9 = (float *)(v6 + 4);
  v11 = v7[5] * v8;
  *((float *)this + 5) = (float)(v7[4] * v8) + *v9;
  *((float *)this + 6) = v11 + v9[1];
  *((float *)this + 7) = (float)(v10 * v8) + v9[2];
  v12 = (CTaskComplexSmartFleePoint *)CTask::operator new((CTask *)&word_2C, (unsigned int)v7);
  CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v12, 6, (CTaskComplexLeaveCarAndFlee *)((char *)this + 20), 0.5, 0, 0);
  return v12;
}


// ============================================================

// Address: 0x4f9a7c
// Original: _ZNK27CTaskComplexLeaveCarAndFlee13CreateSubTaskEi
// Demangled: CTaskComplexLeaveCarAndFlee::CreateSubTask(int)
int __fastcall CTaskComplexLeaveCarAndFlee::CreateSubTask(CTaskComplexLeaveCarAndFlee *this, int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r6
  __int64 v5; // r8
  int v6; // r4
  char v7; // r5
  int v8; // r6
  int v9; // r2
  int v10; // r6
  const CVector *v11; // r1

  switch ( a2 )
  {
    case 910:
      v8 = *((unsigned __int8 *)this + 36);
      v6 = CTask::operator new((CTask *)&dword_44, 0x38Eu);
      if ( v8 )
      {
        v9 = *((_DWORD *)this + 3);
        v10 = *(_DWORD *)(v9 + 20);
        v11 = (const CVector *)(v10 + 48);
        if ( !v10 )
          v11 = (const CVector *)(v9 + 4);
      }
      else
      {
        v11 = (CTaskComplexLeaveCarAndFlee *)((char *)this + 20);
      }
      CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint((CTaskComplexSmartFleePoint *)v6, v11, 0, 60.0, 1000000);
      break;
    case 900:
      v6 = CTask::operator new((CTask *)&word_2C, 0x384u);
      CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
        (CTaskSimpleGoToPoint *)v6,
        6,
        (CTaskComplexLeaveCarAndFlee *)((char *)this + 20),
        0.5,
        0,
        0);
      break;
    case 704:
      v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_34, 0x2C0u);
      LODWORD(v5) = *((_DWORD *)this + 4);
      v4 = (CEntity *)*((_DWORD *)this + 3);
      v6 = (int)v3;
      HIDWORD(v5) = *((_DWORD *)this + 8);
      v7 = *((_BYTE *)this + 36);
      CTaskComplex::CTaskComplex(v3);
      *(_QWORD *)(v6 + 16) = v5;
      *(_BYTE *)(v6 + 24) = v7;
      *(_WORD *)(v6 + 25) = 1;
      *(_DWORD *)(v6 + 28) = 0;
      *(_WORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 36) = 15;
      *(_DWORD *)(v6 + 40) = 1082130432;
      *(_DWORD *)(v6 + 44) = 1065353216;
      *(_BYTE *)(v6 + 48) = 0;
      *(_DWORD *)v6 = &off_66ABEC;
      *(_DWORD *)(v6 + 12) = v4;
      if ( v4 )
        CEntity::RegisterReference(v4, (CEntity **)(v6 + 12));
      break;
    default:
      return 0;
  }
  return v6;
}


// ============================================================

// Address: 0x4f9b90
// Original: _ZN27CTaskComplexLeaveCarAndFlee18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndFlee::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndFlee::CreateFirstSubTask(CTaskComplexLeaveCarAndFlee *this, CPed *a2)
{
  int v2; // r2
  int v3; // r1

  v2 = *((_DWORD *)a2 + 289);
  v3 = 704;
  if ( (v2 & 0x100) == 0 )
    v3 = 910;
  return CTaskComplexLeaveCarAndFlee::CreateSubTask(this, v3);
}


// ============================================================

// Address: 0x4f9ba4
// Original: _ZN27CTaskComplexLeaveCarAndFlee14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCarAndFlee::ControlSubTask(CPed *)
int __fastcall CTaskComplexLeaveCarAndFlee::ControlSubTask(CTaskComplexLeaveCarAndFlee *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fe7e0
// Original: _ZNK27CTaskComplexLeaveCarAndFlee5CloneEv
// Demangled: CTaskComplexLeaveCarAndFlee::Clone(void)
CTaskComplex *__fastcall CTaskComplexLeaveCarAndFlee::Clone(CTaskComplexLeaveCarAndFlee *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r9
  __int64 v7; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 8);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *(_DWORD *)v5 = &off_66ACA0;
  *((_DWORD *)v5 + 3) = v4;
  v7 = *(_QWORD *)((char *)this + 20);
  *((_DWORD *)v5 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)v5 + 8) = v6;
  *((_BYTE *)v5 + 36) = 0;
  *(_QWORD *)((char *)v5 + 20) = v7;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x4fe840
// Original: _ZNK27CTaskComplexLeaveCarAndFlee11GetTaskTypeEv
// Demangled: CTaskComplexLeaveCarAndFlee::GetTaskType(void)
int __fastcall CTaskComplexLeaveCarAndFlee::GetTaskType(CTaskComplexLeaveCarAndFlee *this)
{
  return 706;
}


// ============================================================

// Address: 0x4fe848
// Original: _ZN27CTaskComplexLeaveCarAndFlee9SerializeEv
// Demangled: CTaskComplexLeaveCarAndFlee::Serialize(void)
int __fastcall CTaskComplexLeaveCarAndFlee::Serialize(CTaskComplexLeaveCarAndFlee *this)
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
  __int64 v15; // d16
  int v16; // r2
  CGenericGameStorage *v17; // r5
  int v18; // r2
  CGenericGameStorage *v19; // r5
  int v20; // r2
  int v21; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndFlee *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexLeaveCarAndFlee *))(*(_DWORD *)this + 20))(this) == 706 )
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
    v14 = (CGenericGameStorage *)malloc(0xCu);
    v15 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v14 + 2) = *((_DWORD *)this + 7);
    *(_QWORD *)v14 = v15;
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, &byte_9[3], v16);
    free(v14);
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    free(v17);
    if ( UseDataFence )
      AddDataFence();
    v19 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v19 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
    free(v19);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexLeaveCarAndFlee *)((char *)this + 36), (char *)&stderr + 1, v21);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexLeaveCarAndFlee *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(706, v10);
  }
}


// ============================================================
