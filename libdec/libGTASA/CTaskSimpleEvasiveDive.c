
// Address: 0x18d1d0
// Original: j__ZN22CTaskSimpleEvasiveDiveC2EP8CVehicle
// Demangled: CTaskSimpleEvasiveDive::CTaskSimpleEvasiveDive(CVehicle *)
// attributes: thunk
void __fastcall CTaskSimpleEvasiveDive::CTaskSimpleEvasiveDive(CTaskSimpleEvasiveDive *this, CVehicle *a2)
{
  _ZN22CTaskSimpleEvasiveDiveC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x19ea24
// Original: j__ZN22CTaskSimpleEvasiveDive9StartAnimEP4CPed
// Demangled: CTaskSimpleEvasiveDive::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleEvasiveDive::StartAnim(CTaskSimpleEvasiveDive *this, CPed *a2)
{
  return _ZN22CTaskSimpleEvasiveDive9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x50b0b0
// Original: _ZN22CTaskSimpleEvasiveDiveC2EP8CVehicle
// Demangled: CTaskSimpleEvasiveDive::CTaskSimpleEvasiveDive(CVehicle *)
void __fastcall CTaskSimpleEvasiveDive::CTaskSimpleEvasiveDive(CTaskSimpleEvasiveDive *this, CVehicle *a2)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_66B6E4;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x50b0e8
// Original: _ZN22CTaskSimpleEvasiveDiveD2Ev
// Demangled: CTaskSimpleEvasiveDive::~CTaskSimpleEvasiveDive()
void __fastcall CTaskSimpleEvasiveDive::~CTaskSimpleEvasiveDive(CTaskSimpleEvasiveDive *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B6E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50b128
// Original: _ZN22CTaskSimpleEvasiveDiveD0Ev
// Demangled: CTaskSimpleEvasiveDive::~CTaskSimpleEvasiveDive()
void __fastcall CTaskSimpleEvasiveDive::~CTaskSimpleEvasiveDive(CTaskSimpleEvasiveDive *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B6E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x50b16c
// Original: _ZN22CTaskSimpleEvasiveDive13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleEvasiveDive::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleEvasiveDive::MakeAbortable(CTaskSimpleEvasiveDive *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  int v7; // r0

  if ( a3 == 2 )
  {
    v5 = *((_DWORD *)this + 4);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 28) = -998637568;
      return 1;
    }
    return 1;
  }
  if ( a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
    {
      v7 = *((_DWORD *)a4 + 4);
      if ( v7 )
      {
        if ( (*(_BYTE *)(v7 + 58) & 7) == 2 && (unsigned int)(*((_DWORD *)a4 + 6) - 49) < 2 )
          return 1;
      }
    }
  }
  return 0;
}


// ============================================================

// Address: 0x50b1b4
// Original: _ZN22CTaskSimpleEvasiveDive10ProcessPedEP4CPed
// Demangled: CTaskSimpleEvasiveDive::ProcessPed(CPed *)
int __fastcall CTaskSimpleEvasiveDive::ProcessPed(CTaskSimpleEvasiveDive *this, CPed *a2)
{
  if ( *((_BYTE *)this + 12) )
    return 1;
  if ( !*((_DWORD *)this + 4) )
    CTaskSimpleEvasiveDive::StartAnim(this, a2);
  return 0;
}


// ============================================================

// Address: 0x50b1d4
// Original: _ZN22CTaskSimpleEvasiveDive9StartAnimEP4CPed
// Demangled: CTaskSimpleEvasiveDive::StartAnim(CPed *)
CPed *__fastcall CTaskSimpleEvasiveDive::StartAnim(CTaskSimpleEvasiveDive *this, CPed *a2)
{
  CAnimBlendAssociation *v4; // r0
  CPed *result; // r0
  int PlayerWanted; // r0
  int v7; // r1
  char *v8; // r5
  char *v9; // r2
  int v10; // r0
  int v11; // r1

  CPed::Say(a2, 0x4Au, 0, 1.0, 0, 0, 0);
  v4 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x7Fu);
  *((_DWORD *)this + 4) = v4;
  CAnimBlendAssociation::SetFinishCallback(
    v4,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleEvasiveDive::FinishAnimEvasiveDiveCB,
    this);
  result = (CPed *)*((_DWORD *)this + 2);
  if ( result )
  {
    if ( *((_DWORD *)a2 + 359) == 6 )
    {
      result = (CPed *)*((_DWORD *)result + 281);
      if ( result )
      {
        result = (CPed *)CPed::IsPlayer(result);
        if ( result == (CPed *)((char *)&stderr + 1) )
        {
          PlayerWanted = FindPlayerWanted(-1);
          v7 = *((_DWORD *)a2 + 5);
          v8 = (char *)a2 + 4;
          v9 = (char *)a2 + 4;
          if ( v7 )
            v9 = (char *)(v7 + 48);
          CWanted::RegisterCrime_Immediately(PlayerWanted, 8, (int)v9, (int)a2, 0);
          v10 = FindPlayerWanted(-1);
          v11 = *((_DWORD *)a2 + 5);
          if ( v11 )
            v8 = (char *)(v11 + 48);
          return (CPed *)CWanted::RegisterCrime_Immediately(v10, 9, (int)v8, (int)a2, 0);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x50b27c
// Original: _ZN22CTaskSimpleEvasiveDive23FinishAnimEvasiveDiveCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleEvasiveDive::FinishAnimEvasiveDiveCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleEvasiveDive::FinishAnimEvasiveDiveCB(
        CTaskSimpleEvasiveDive *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_DWORD *)a2 + 4) = 0;
  result = 1;
  *((_BYTE *)a2 + 12) = 1;
  return result;
}


// ============================================================

// Address: 0x50f114
// Original: _ZNK22CTaskSimpleEvasiveDive5CloneEv
// Demangled: CTaskSimpleEvasiveDive::Clone(void)
int __fastcall CTaskSimpleEvasiveDive::Clone(CTaskSimpleEvasiveDive *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66B6E4;
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x50f154
// Original: _ZNK22CTaskSimpleEvasiveDive11GetTaskTypeEv
// Demangled: CTaskSimpleEvasiveDive::GetTaskType(void)
int __fastcall CTaskSimpleEvasiveDive::GetTaskType(CTaskSimpleEvasiveDive *this)
{
  return 503;
}


// ============================================================

// Address: 0x50f15c
// Original: _ZN22CTaskSimpleEvasiveDive9SerializeEv
// Demangled: CTaskSimpleEvasiveDive::Serialize(void)
void __fastcall CTaskSimpleEvasiveDive::Serialize(CTaskSimpleEvasiveDive *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleEvasiveDive *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleEvasiveDive *))(*(_DWORD *)this + 20))(this) == 503 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 2);
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
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleEvasiveDive *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(503, v10);
  }
}


// ============================================================
