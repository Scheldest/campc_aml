
// Address: 0x196068
// Original: j__ZN25CTaskComplexHitPedWithCar10CreateTaskEv
// Demangled: CTaskComplexHitPedWithCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexHitPedWithCar::CreateTask(CTaskComplexHitPedWithCar *this)
{
  return _ZN25CTaskComplexHitPedWithCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19c904
// Original: j__ZN25CTaskComplexHitPedWithCar25ComputeEvasiveStepMoveDirERK4CPedP8CVehicle
// Demangled: CTaskComplexHitPedWithCar::ComputeEvasiveStepMoveDir(CPed const&,CVehicle *)
// attributes: thunk
int __fastcall CTaskComplexHitPedWithCar::ComputeEvasiveStepMoveDir(
        CTaskComplexHitPedWithCar *this,
        const CPed *a2,
        CVehicle *a3)
{
  return _ZN25CTaskComplexHitPedWithCar25ComputeEvasiveStepMoveDirERK4CPedP8CVehicle(this, a2, a3);
}


// ============================================================

// Address: 0x19f2ac
// Original: j__ZN25CTaskComplexHitPedWithCarC2EP8CVehiclef
// Demangled: CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(CVehicle *,float)
// attributes: thunk
void __fastcall CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(
        CTaskComplexHitPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  _ZN25CTaskComplexHitPedWithCarC2EP8CVehiclef(this, a2, a3);
}


// ============================================================

// Address: 0x49263c
// Original: _ZN25CTaskComplexHitPedWithCar10CreateTaskEv
// Demangled: CTaskComplexHitPedWithCar::CreateTask(void)
void __fastcall CTaskComplexHitPedWithCar::CreateTask(CTaskComplexHitPedWithCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskComplexHitPedWithCar *v8; // r0
  float v9; // [sp+4h] [bp-1Ch] BYREF
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
  v8 = (CTaskComplexHitPedWithCar *)CTask::operator new((CTask *)&word_28, v7);
  CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x50b4ac
// Original: _ZN25CTaskComplexHitPedWithCarC2EP8CVehiclef
// Demangled: CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(CVehicle *,float)
void __fastcall CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(
        CTaskComplexHitPedWithCar *this,
        CVehicle *a2,
        float a3)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 6) = 1000;
  *(_DWORD *)this = &off_66B754;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x50b4f0
// Original: _ZN25CTaskComplexHitPedWithCarD2Ev
// Demangled: CTaskComplexHitPedWithCar::~CTaskComplexHitPedWithCar()
void __fastcall CTaskComplexHitPedWithCar::~CTaskComplexHitPedWithCar(CTaskComplexHitPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B754;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50b51c
// Original: _ZN25CTaskComplexHitPedWithCarD0Ev
// Demangled: CTaskComplexHitPedWithCar::~CTaskComplexHitPedWithCar()
void __fastcall CTaskComplexHitPedWithCar::~CTaskComplexHitPedWithCar(CTaskComplexHitPedWithCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B754;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50b54c
// Original: _ZN25CTaskComplexHitPedWithCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexHitPedWithCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexHitPedWithCar::CreateNextSubTask(CTaskComplexHitPedWithCar *this, CPed *a2)
{
  int v3; // r0
  void *v4; // r1

  v3 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = elf_hash_bucket + 255;
  if ( v3 != 507 || *(_BYTE *)(*((_DWORD *)this + 2) + 16) )
    return 0;
  if ( (unsigned int)(*((_DWORD *)this + 5) - 1) <= 2 )
    v4 = &unk_61E78C;
  CTask::operator new((CTask *)&off_18, (unsigned int)v4);
  return CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
}


// ============================================================

// Address: 0x50b598
// Original: _ZN25CTaskComplexHitPedWithCar13CreateSubTaskEi
// Demangled: CTaskComplexHitPedWithCar::CreateSubTask(int)
int __fastcall CTaskComplexHitPedWithCar::CreateSubTask(CTaskComplexHitPedWithCar *this, int *a2)
{
  int v3; // r4
  _DWORD *v4; // r0
  int v5; // r5
  CEntity *v6; // r6
  __int64 v7; // kr00_8
  _DWORD *v8; // r0
  __int64 v9; // d16
  CEntity **v10; // r1
  int v11; // r5
  __int64 v12; // kr08_8

  v3 = 0;
  if ( (int)a2 >= 502 )
  {
    if ( a2 == (int *)((char *)&elf_hash_bucket[62] + 2) )
    {
      v3 = CTask::operator new((CTask *)&dword_1C, 0x1F6u);
      v6 = (CEntity *)*((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v3);
      *(_DWORD *)v3 = &off_66B6A8;
      v9 = *(_QWORD *)((char *)this + 28);
      *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 9);
      *(_QWORD *)(v3 + 12) = v9;
      *(_DWORD *)(v3 + 24) = v6;
      v10 = (CEntity **)(v3 + 24);
      if ( !v6 )
        return v3;
    }
    else
    {
      if ( a2 == (int *)((char *)&elf_hash_bucket[63] + 3) )
      {
        v3 = CTask::operator new((CTask *)&dword_14, 0x1FBu);
        v12 = *(_QWORD *)((char *)this + 12);
        v11 = *((_DWORD *)this + 4);
        v6 = (CEntity *)v12;
        CTaskSimple::CTaskSimple((CTaskSimple *)v3);
        *(_DWORD *)(v3 + 12) = v11;
        v8 = &`vtable for'CTaskSimpleHurtPedWithCar;
        *(_BYTE *)(v3 + 16) = 0;
      }
      else
      {
        if ( a2 != (int *)((char *)&elf_hash_bucket[63] + 2) )
          return v3;
        v3 = CTask::operator new((CTask *)&word_10, 0x1FAu);
        v7 = *(_QWORD *)((char *)this + 12);
        v5 = *((_DWORD *)this + 4);
        v6 = (CEntity *)v7;
        CTaskSimple::CTaskSimple((CTaskSimple *)v3);
        *(_DWORD *)(v3 + 12) = v5;
        v8 = &`vtable for'CTaskSimpleKillPedWithCar;
      }
      *(_DWORD *)v3 = *v8 + 8;
      *(_DWORD *)(v3 + 8) = v6;
      v10 = (CEntity **)(v3 + 8);
      if ( !v6 )
        return v3;
    }
    CEntity::RegisterReference(v6, v10);
    return v3;
  }
  if ( a2 == &dword_C8 )
  {
    v3 = CTask::operator new((CTask *)byte_8, 0xC8u);
    CTaskSimple::CTaskSimple((CTaskSimple *)v3);
    v4 = &`vtable for'CTaskSimpleNone;
    goto LABEL_11;
  }
  if ( a2 == &dword_D0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 5) - 1) <= 2 )
      a2 = (int *)&unk_61E78C;
    v3 = CTask::operator new((CTask *)&off_18, (unsigned int)a2);
    CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
  }
  else if ( a2 == (int *)((char *)&elf_hash_bucket[40] + 2) )
  {
    v3 = CTask::operator new((CTask *)&dword_20, 0x19Eu);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 0, 40, 1082130432, 414, (int)"HitFromBehind", 0);
    v4 = &`vtable for'CTaskSimpleHitFromBehind;
LABEL_11:
    *(_DWORD *)v3 = *v4 + 8;
  }
  return v3;
}


// ============================================================

// Address: 0x50b6d0
// Original: _ZN25CTaskComplexHitPedWithCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexHitPedWithCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexHitPedWithCar::ControlSubTask(CTaskComplexHitPedWithCar *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x50b6d4
// Original: _ZN25CTaskComplexHitPedWithCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexHitPedWithCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexHitPedWithCar::CreateFirstSubTask(
        CTaskComplexHitPedWithCar *this,
        CPed *a2,
        const CPhysical *a3)
{
  float v3; // s4
  float v6; // s0
  int *v7; // r1
  CEntity *v8; // r2
  float v9; // s2
  float v10; // s0
  float v11; // s2
  const CPed *v12; // r6
  float *v13; // r0
  float *v14; // r0
  float v15; // s4
  float v16; // s2
  float v17; // s0
  float *v18; // r0
  float *v19; // r0

  *((_DWORD *)this + 5) = CPedGeometryAnalyser::ComputePedHitSide(a2, *((const CPed **)this + 3), a3);
  v6 = 12.0;
  if ( CPed::IsPlayer(a2) )
    v6 = 20.0;
  if ( *((float *)this + 4) <= v6 )
  {
    v9 = 6.0;
    if ( CPed::IsPlayer(a2) )
      v9 = 10.0;
    v10 = *((float *)this + 4);
    if ( v10 <= v9 && ((v11 = 3.0, v10 <= 3.0) || (v10 = *((float *)a2 + 59), v11 = -0.8, v10 >= -0.8)) )
    {
      v12 = (const CPed *)*((_DWORD *)this + 3);
      switch ( CPedGeometryAnalyser::ComputeEntityHitSide(a2, v12, v8) )
      {
        case 0:
          v13 = (float *)*((_DWORD *)v12 + 5);
          v3 = v13[4];
          v11 = v13[5];
          v10 = v13[6];
          break;
        case 1:
          v14 = (float *)*((_DWORD *)v12 + 5);
          v15 = *v14;
          v16 = v14[1];
          v17 = v14[2];
          goto LABEL_15;
        case 2:
          v18 = (float *)*((_DWORD *)v12 + 5);
          v15 = v18[4];
          v16 = v18[5];
          v17 = v18[6];
LABEL_15:
          v10 = -v17;
          v11 = -v16;
          v3 = -v15;
          break;
        case 3:
          v19 = (float *)*((_DWORD *)v12 + 5);
          v3 = *v19;
          v11 = v19[1];
          v10 = v19[2];
          break;
        default:
          break;
      }
      v7 = elf_hash_bucket + 250;
      *((float *)this + 7) = v3;
      *((float *)this + 8) = v11;
      *((float *)this + 9) = v10;
    }
    else
    {
      v7 = elf_hash_bucket + 255;
    }
  }
  else
  {
    v7 = elf_hash_bucket + 254;
  }
  return CTaskComplexHitPedWithCar::CreateSubTask(this, v7);
}


// ============================================================

// Address: 0x50b7e0
// Original: _ZNK25CTaskComplexHitPedWithCar11HitKillsPedEP4CPed
// Demangled: CTaskComplexHitPedWithCar::HitKillsPed(CPed *)
int __fastcall CTaskComplexHitPedWithCar::HitKillsPed(CTaskComplexHitPedWithCar *this, CPed *a2)
{
  bool v3; // zf
  float v4; // s0
  int result; // r0

  v3 = CPed::IsPlayer(a2) == 0;
  v4 = 12.0;
  result = 0;
  if ( !v3 )
    v4 = 20.0;
  if ( *((float *)this + 4) > v4 )
    return 1;
  return result;
}


// ============================================================

// Address: 0x50b814
// Original: _ZNK25CTaskComplexHitPedWithCar11HitHurtsPedEP4CPed
// Demangled: CTaskComplexHitPedWithCar::HitHurtsPed(CPed *)
bool __fastcall CTaskComplexHitPedWithCar::HitHurtsPed(CTaskComplexHitPedWithCar *this, CPed *a2)
{
  float v4; // s2
  float v5; // s0

  v4 = 6.0;
  if ( CPed::IsPlayer(a2) )
    v4 = 10.0;
  v5 = *((float *)this + 4);
  return v5 > v4 || v5 > 3.0 && *((float *)a2 + 59) < -0.8;
}


// ============================================================

// Address: 0x50b874
// Original: _ZN25CTaskComplexHitPedWithCar25ComputeEvasiveStepMoveDirERK4CPedP8CVehicle
// Demangled: CTaskComplexHitPedWithCar::ComputeEvasiveStepMoveDir(CPed const&,CVehicle *)
int __fastcall CTaskComplexHitPedWithCar::ComputeEvasiveStepMoveDir(
        CTaskComplexHitPedWithCar *this,
        const CPed *a2,
        CVehicle *a3)
{
  int v5; // r0
  __int64 v6; // d16
  int result; // r0
  int v8; // r0
  __int64 v9; // d16
  __int64 *v10; // r0
  __int64 *v11; // r0
  float v12; // s0
  float v13; // s4

  switch ( CPedGeometryAnalyser::ComputeEntityHitSide(a2, a3, a3) )
  {
    case 0:
      v5 = *((_DWORD *)a3 + 5);
      v6 = *(_QWORD *)(v5 + 16);
      result = *(_DWORD *)(v5 + 24);
      goto LABEL_5;
    case 1:
      v11 = (__int64 *)*((_DWORD *)a3 + 5);
      v9 = *v11;
      result = *((_DWORD *)v11 + 2);
      goto LABEL_7;
    case 2:
      v8 = *((_DWORD *)a3 + 5);
      v9 = *(_QWORD *)(v8 + 16);
      result = *(_DWORD *)(v8 + 24);
LABEL_7:
      *((_DWORD *)this + 2) = result;
      v12 = *((float *)this + 2);
      *(_QWORD *)this = v9;
      v13 = -*((float *)this + 1);
      *(float *)this = -*(float *)this;
      *((float *)this + 1) = v13;
      *((float *)this + 2) = -v12;
      break;
    case 3:
      v10 = (__int64 *)*((_DWORD *)a3 + 5);
      v6 = *v10;
      result = *((_DWORD *)v10 + 2);
LABEL_5:
      *((_DWORD *)this + 2) = result;
      *(_QWORD *)this = v6;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x50f3ec
// Original: _ZNK25CTaskComplexHitPedWithCar5CloneEv
// Demangled: CTaskComplexHitPedWithCar::Clone(void)
int __fastcall CTaskComplexHitPedWithCar::Clone(CTaskComplexHitPedWithCar *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&word_28, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)(v3 + 24) = 1000;
  *(_DWORD *)v3 = &off_66B754;
  *(_DWORD *)(v3 + 12) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x50f438
// Original: _ZNK25CTaskComplexHitPedWithCar11GetTaskTypeEv
// Demangled: CTaskComplexHitPedWithCar::GetTaskType(void)
int __fastcall CTaskComplexHitPedWithCar::GetTaskType(CTaskComplexHitPedWithCar *this)
{
  return 505;
}


// ============================================================

// Address: 0x50f440
// Original: _ZN25CTaskComplexHitPedWithCar9SerializeEv
// Demangled: CTaskComplexHitPedWithCar::Serialize(void)
void __fastcall CTaskComplexHitPedWithCar::Serialize(CTaskComplexHitPedWithCar *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexHitPedWithCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexHitPedWithCar *))(*(_DWORD *)this + 20))(this) == 505 )
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
    v10 = (*(int (__fastcall **)(CTaskComplexHitPedWithCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(505, v10);
  }
}


// ============================================================
