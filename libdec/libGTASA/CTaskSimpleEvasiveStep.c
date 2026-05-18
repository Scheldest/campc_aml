
// Address: 0x18cafc
// Original: j__ZN22CTaskSimpleEvasiveStep10CreateTaskEv
// Demangled: CTaskSimpleEvasiveStep::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleEvasiveStep::CreateTask(CTaskSimpleEvasiveStep *this)
{
  return _ZN22CTaskSimpleEvasiveStep10CreateTaskEv(this);
}


// ============================================================

// Address: 0x195384
// Original: j__ZN22CTaskSimpleEvasiveStepC2EP7CEntity
// Demangled: CTaskSimpleEvasiveStep::CTaskSimpleEvasiveStep(CEntity *)
// attributes: thunk
void __fastcall CTaskSimpleEvasiveStep::CTaskSimpleEvasiveStep(CTaskSimpleEvasiveStep *this, CEntity *a2)
{
  _ZN22CTaskSimpleEvasiveStepC2EP7CEntity(this, a2);
}


// ============================================================

// Address: 0x492304
// Original: _ZN22CTaskSimpleEvasiveStep10CreateTaskEv
// Demangled: CTaskSimpleEvasiveStep::CreateTask(void)
void __fastcall CTaskSimpleEvasiveStep::CreateTask(CTaskSimpleEvasiveStep *this, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  int v5; // r2
  char v6; // r4
  int Vehicle; // r0
  char v8; // r4
  char v9; // r4
  CEntity *v10; // r4
  CTaskSimpleEvasiveStep *v11; // r0
  CPools *v12; // [sp+0h] [bp-10h] BYREF
  _DWORD v13[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, a3);
  if ( v13[0] == 2 )
  {
    v8 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
      UseDataFence = v8;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
    v4 = (char *)v12 + 1;
    if ( v12 != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v12, (int)v4);
      goto LABEL_18;
    }
LABEL_19:
    v10 = 0;
    goto LABEL_20;
  }
  if ( v13[0] == 4 )
  {
    v9 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
      UseDataFence = v9;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
    v4 = (char *)v12 + 1;
    if ( v12 != (CPools *)-1 )
    {
      Vehicle = CPools::GetObject(v12, (int)v4);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( v13[0] != 3 )
    goto LABEL_19;
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v5);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v5);
  v4 = (char *)v12 + 1;
  if ( v12 == (CPools *)-1 )
    goto LABEL_19;
  Vehicle = CPools::GetPed(v12, (int)v4);
LABEL_18:
  v10 = (CEntity *)Vehicle;
LABEL_20:
  v11 = (CTaskSimpleEvasiveStep *)CTask::operator new((CTask *)&dword_14, (unsigned int)v4);
  CTaskSimpleEvasiveStep::CTaskSimpleEvasiveStep(v11, v10);
}


// ============================================================

// Address: 0x50ad28
// Original: _ZN22CTaskSimpleEvasiveStepC2EP7CEntity
// Demangled: CTaskSimpleEvasiveStep::CTaskSimpleEvasiveStep(CEntity *)
void __fastcall CTaskSimpleEvasiveStep::CTaskSimpleEvasiveStep(CTaskSimpleEvasiveStep *this, CEntity *a2)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_66B674;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50ad60
// Original: _ZN22CTaskSimpleEvasiveStepD2Ev
// Demangled: CTaskSimpleEvasiveStep::~CTaskSimpleEvasiveStep()
void __fastcall CTaskSimpleEvasiveStep::~CTaskSimpleEvasiveStep(CTaskSimpleEvasiveStep *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B674;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50ada0
// Original: _ZN22CTaskSimpleEvasiveStepD0Ev
// Demangled: CTaskSimpleEvasiveStep::~CTaskSimpleEvasiveStep()
void __fastcall CTaskSimpleEvasiveStep::~CTaskSimpleEvasiveStep(CTaskSimpleEvasiveStep *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0
  void *v4; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B674;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x50ade4
// Original: _ZN22CTaskSimpleEvasiveStep13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleEvasiveStep::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleEvasiveStep::MakeAbortable(CTaskSimpleEvasiveStep *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0

  if ( (unsigned int)(a3 - 1) > 1 )
    return 0;
  v6 = *((_DWORD *)this + 4);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 4),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 4) = 0;
  }
  return 1;
}


// ============================================================

// Address: 0x50ae1c
// Original: _ZN22CTaskSimpleEvasiveStep10ProcessPedEP4CPed
// Demangled: CTaskSimpleEvasiveStep::ProcessPed(CPed *)
int __fastcall CTaskSimpleEvasiveStep::ProcessPed(CTaskSimpleEvasiveStep *this, CPed *a2)
{
  int v4; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0

  if ( *((_BYTE *)this + 12) )
    return 1;
  v6 = *((_DWORD *)this + 2);
  if ( !v6 )
    return 1;
  if ( *((_DWORD *)this + 4) )
    return 0;
  if ( (*(_BYTE *)(v6 + 58) & 7) == 2 )
    CPed::Say(a2, 0x4Au, 0, 1.0, 0, 0, 0);
  v7 = *((_DWORD *)a2 + 6);
  v4 = 0;
  v8 = CAnimManager::BlendAnimation(v7, 0, 0x7Eu);
  *((_DWORD *)this + 4) = v8;
  *(_WORD *)(v8 + 46) &= ~4u;
  CAnimBlendAssociation::SetFinishCallback(
    *((CAnimBlendAssociation **)this + 4),
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleEvasiveStep::FinishAnimEvasiveStepCB,
    this);
  return v4;
}


// ============================================================

// Address: 0x50ae90
// Original: _ZN22CTaskSimpleEvasiveStep9StartAnimEP4CPed
// Demangled: CTaskSimpleEvasiveStep::StartAnim(CPed *)
int __fastcall CTaskSimpleEvasiveStep::StartAnim(CTaskSimpleEvasiveStep *this, CPed *a2)
{
  int v3; // r0

  v3 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x7Eu);
  *((_DWORD *)this + 4) = v3;
  *(_WORD *)(v3 + 46) &= ~4u;
  return sub_18C20C(
           *((CAnimBlendAssociation **)this + 4),
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleEvasiveStep::FinishAnimEvasiveStepCB,
           this);
}


// ============================================================

// Address: 0x50aec4
// Original: _ZN22CTaskSimpleEvasiveStep23FinishAnimEvasiveStepCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleEvasiveStep::FinishAnimEvasiveStepCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleEvasiveStep::FinishAnimEvasiveStepCB(
        CTaskSimpleEvasiveStep *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v3; // r0
  int result; // r0

  *(_WORD *)(*((_DWORD *)a2 + 4) + 46) |= 4u;
  v3 = *((_DWORD *)a2 + 4);
  if ( *(float *)(v3 + 28) >= 0.0 )
    *(_DWORD *)(v3 + 28) = -1065353216;
  *((_DWORD *)a2 + 4) = 0;
  result = 1;
  *((_BYTE *)a2 + 12) = 1;
  return result;
}


// ============================================================

// Address: 0x50edc8
// Original: _ZNK22CTaskSimpleEvasiveStep5CloneEv
// Demangled: CTaskSimpleEvasiveStep::Clone(void)
int __fastcall CTaskSimpleEvasiveStep::Clone(CTaskSimpleEvasiveStep *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66B674;
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x50ee08
// Original: _ZNK22CTaskSimpleEvasiveStep11GetTaskTypeEv
// Demangled: CTaskSimpleEvasiveStep::GetTaskType(void)
int __fastcall CTaskSimpleEvasiveStep::GetTaskType(CTaskSimpleEvasiveStep *this)
{
  return 501;
}


// ============================================================

// Address: 0x50ee10
// Original: _ZN22CTaskSimpleEvasiveStep9SerializeEv
// Demangled: CTaskSimpleEvasiveStep::Serialize(void)
void __fastcall CTaskSimpleEvasiveStep::Serialize(CTaskSimpleEvasiveStep *this)
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
  int v11; // r4
  int v12; // r0
  CGenericGameStorage *v13; // r4
  int v14; // r2
  CGenericGameStorage *v15; // r5
  int v16; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleEvasiveStep *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleEvasiveStep *))(*(_DWORD *)this + 20))(this) == 501 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 58) & 7;
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      free(v7);
      v9 = (CVehicle *)*((_DWORD *)this + 2);
      v10 = *((_BYTE *)v9 + 58) & 7;
      switch ( v10 )
      {
        case 2:
          v11 = GettPoolVehicleRef(v9);
          break;
        case 4:
          v11 = GettPoolObjRef(v9);
          break;
        case 3:
          v11 = GettPoolPedRef(v9);
          break;
        default:
          return;
      }
      if ( UseDataFence )
        AddDataFence();
      v15 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v15 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
      j_free(v15);
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v13 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v13 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
      j_free(v13);
    }
  }
  else
  {
    v12 = (*(int (__fastcall **)(CTaskSimpleEvasiveStep *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(501, v12);
  }
}


// ============================================================
