
// Address: 0x189fa0
// Original: j__ZN29CTaskSimplePlayHandSignalAnim10CreateTaskEv
// Demangled: CTaskSimplePlayHandSignalAnim::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimplePlayHandSignalAnim::CreateTask(CTaskSimplePlayHandSignalAnim *this)
{
  return _ZN29CTaskSimplePlayHandSignalAnim10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18dad4
// Original: j__ZN29CTaskSimplePlayHandSignalAnim9StartAnimEP4CPed
// Demangled: CTaskSimplePlayHandSignalAnim::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayHandSignalAnim::StartAnim(CTaskSimplePlayHandSignalAnim *this, CPed *a2)
{
  return _ZN29CTaskSimplePlayHandSignalAnim9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18e064
// Original: j__ZN29CTaskSimplePlayHandSignalAnimC2E11AnimationIdfhb
// Demangled: CTaskSimplePlayHandSignalAnim::CTaskSimplePlayHandSignalAnim(AnimationId,float,uchar,bool)
// attributes: thunk
int __fastcall CTaskSimplePlayHandSignalAnim::CTaskSimplePlayHandSignalAnim(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN29CTaskSimplePlayHandSignalAnimC2E11AnimationIdfhb(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x196470
// Original: j__ZN29CTaskSimplePlayHandSignalAnimD2Ev
// Demangled: CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim()
// attributes: thunk
void __fastcall CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim(CTaskSimplePlayHandSignalAnim *this)
{
  _ZN29CTaskSimplePlayHandSignalAnimD2Ev(this);
}


// ============================================================

// Address: 0x4921a4
// Original: _ZN29CTaskSimplePlayHandSignalAnim10CreateTaskEv
// Demangled: CTaskSimplePlayHandSignalAnim::CreateTask(void)
int __fastcall CTaskSimplePlayHandSignalAnim::CreateTask(CTaskSimplePlayHandSignalAnim *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  unsigned int v10; // r1
  int v11; // r0
  int v12; // r5
  unsigned __int8 v14; // [sp+Bh] [bp-15h] BYREF
  int v15; // [sp+Ch] [bp-14h] BYREF
  int v16; // [sp+10h] [bp-10h] BYREF
  _BYTE v17[10]; // [sp+16h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 1, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 1, v8);
  v11 = CTask::operator new((CTask *)&dword_24, v10);
  v12 = v17[0];
  if ( v17[0] )
    v12 = 1;
  return CTaskSimplePlayHandSignalAnim::CTaskSimplePlayHandSignalAnim(v11, v16, v15, v14, v12);
}


// ============================================================

// Address: 0x4d7500
// Original: _ZN29CTaskSimplePlayHandSignalAnimC2E11AnimationIdfhb
// Demangled: CTaskSimplePlayHandSignalAnim::CTaskSimplePlayHandSignalAnim(AnimationId,float,uchar,bool)
int __fastcall CTaskSimplePlayHandSignalAnim::CTaskSimplePlayHandSignalAnim(
        CTaskSimple *a1,
        int a2,
        int a3,
        int a4,
        char a5)
{
  int result; // r0

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  LOBYTE(a2) = *(_BYTE *)(result + 12);
  *(_BYTE *)(result + 24) = a4 != 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_BYTE *)(result + 12) = a2 & 0xF8 | (4 * a5);
  *(_DWORD *)result = &off_66959C;
  return result;
}


// ============================================================

// Address: 0x4d7548
// Original: _ZN29CTaskSimplePlayHandSignalAnimD2Ev
// Demangled: CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim()
void __fastcall CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim(CTaskSimplePlayHandSignalAnim *this)
{
  CWorld *v2; // r0
  CEntity *v3; // r1
  int v4; // r0
  CWorld *v5; // r0
  int v6; // r0
  CAnimBlendAssociation *v7; // r0
  int v8; // r0

  v2 = (CWorld *)*((_DWORD *)this + 7);
  v3 = (CEntity *)&off_66959C;
  *(_DWORD *)this = &off_66959C;
  if ( v2 )
  {
    CWorld::Remove(v2, (CEntity *)&off_66959C);
    v4 = *((_DWORD *)this + 7);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v3 = (CEntity *)((unsigned __int16)CObject::nNoTempObjects-- - 1);
  }
  v5 = (CWorld *)*((_DWORD *)this + 8);
  if ( v5 )
  {
    CWorld::Remove(v5, v3);
    v6 = *((_DWORD *)this + 8);
    if ( v6 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
    --CObject::nNoTempObjects;
  }
  v7 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_669498;
  if ( v7 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v7,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 4u;
    if ( (*((_BYTE *)this + 12) & 4) == 0 )
    {
      v8 = *((_DWORD *)this + 2);
      if ( *(float *)(v8 + 24) > 0.0 && *(float *)(v8 + 28) >= 0.0 )
        *(_DWORD *)(v8 + 28) = -1065353216;
    }
    *((_DWORD *)this + 2) = 0;
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4d760c
// Original: _ZN29CTaskSimplePlayHandSignalAnimD0Ev
// Demangled: CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim()
void __fastcall CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim(CTaskSimplePlayHandSignalAnim *this)
{
  void *v1; // r0

  CTaskSimplePlayHandSignalAnim::~CTaskSimplePlayHandSignalAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4d761c
// Original: _ZN29CTaskSimplePlayHandSignalAnim10ProcessPedEP4CPed
// Demangled: CTaskSimplePlayHandSignalAnim::ProcessPed(CPed *)
int __fastcall CTaskSimplePlayHandSignalAnim::ProcessPed(CTaskSimplePlayHandSignalAnim *this, CPed *a2)
{
  int v4; // r6
  char v5; // r0

  v4 = 1;
  if ( !IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2) )
  {
    v5 = *((_BYTE *)this + 12);
    if ( (v5 & 1) == 0 )
    {
      if ( !*((_DWORD *)this + 2) )
      {
        if ( (unsigned __int16)CObject::nNoTempObjects > 0x94u )
          return 1;
        CTaskSimplePlayHandSignalAnim::StartAnim(this, a2);
        v5 = *((_BYTE *)this + 12);
      }
      return v5 & 1;
    }
    return 1;
  }
  return v4;
}


// ============================================================

// Address: 0x4d7674
// Original: _ZN29CTaskSimplePlayHandSignalAnim9StartAnimEP4CPed
// Demangled: CTaskSimplePlayHandSignalAnim::StartAnim(CPed *)
void __fastcall CTaskSimplePlayHandSignalAnim::StartAnim(CTaskSimplePlayHandSignalAnim *this, CPed *a2)
{
  unsigned int v4; // r6
  CAnimBlendAssociation *v5; // r0
  unsigned int v6; // r1
  int v7; // r6
  CHandObject *v8; // r0
  CWorld *v9; // r0
  CEntity *v10; // r1
  CAnimBlendAssociation *v11; // r0
  unsigned int v12; // r1
  int v13; // r6
  CHandObject *v14; // r0
  CWorld *v15; // r0
  CEntity *v16; // r1
  int v17; // r6
  CHandObject *v18; // r0

  v4 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 5.0) + 320;
  if ( CPed::GetEntityThatThisPedIsHolding(a2)
    || IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 0, a2)
    || *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) )
  {
    v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 78, v4);
    *((_DWORD *)this + 2) = v5;
    CAnimBlendAssociation::SetFinishCallback(
      v5,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
      this);
    if ( *((_DWORD *)this + 4) == -1 )
      return;
    v7 = *((unsigned __int8 *)this + 24);
    v8 = (CHandObject *)CObject::operator new((CObject *)&elf_hash_bucket[38], v6);
    if ( v7 )
    {
      CHandObject::CHandObject(v8, 396, a2, 1);
      *((_DWORD *)this + 7) = v9;
      if ( !v9 )
        return;
    }
    else
    {
      CHandObject::CHandObject(v8, 394, a2, 1);
      *((_DWORD *)this + 7) = v9;
      if ( !v9 )
        return;
    }
    goto LABEL_9;
  }
  v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 77, v4);
  *((_DWORD *)this + 2) = v11;
  CAnimBlendAssociation::SetFinishCallback(
    v11,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
    this);
  if ( *((_DWORD *)this + 4) == -1 )
    return;
  v13 = *((unsigned __int8 *)this + 24);
  v14 = (CHandObject *)CObject::operator new((CObject *)&elf_hash_bucket[38], v12);
  if ( v13 )
  {
    CHandObject::CHandObject(v14, 396, a2, 1);
    *((_DWORD *)this + 7) = v15;
    if ( !v15 )
      goto LABEL_17;
  }
  else
  {
    CHandObject::CHandObject(v14, 394, a2, 1);
    *((_DWORD *)this + 7) = v15;
    if ( !v15 )
      goto LABEL_17;
  }
  CWorld::Add(v15, v16);
  CAnimManager::GetAnimAssociation();
  CAnimManager::AddAnimation();
  v16 = (CEntity *)((unsigned __int16)CObject::nNoTempObjects++ + 1);
LABEL_17:
  if ( *((_DWORD *)this + 4) != -1 )
  {
    v17 = *((unsigned __int8 *)this + 24);
    v18 = (CHandObject *)CObject::operator new((CObject *)&elf_hash_bucket[38], (unsigned int)v16);
    if ( v17 )
    {
      CHandObject::CHandObject(v18, 397, a2, 0);
      *((_DWORD *)this + 8) = v9;
      if ( v9 )
      {
LABEL_9:
        CWorld::Add(v9, v10);
        CAnimManager::GetAnimAssociation();
        CAnimManager::AddAnimation();
        ++CObject::nNoTempObjects;
      }
    }
    else
    {
      CHandObject::CHandObject(v18, 395, a2, 0);
      *((_DWORD *)this + 8) = v9;
      if ( v9 )
        goto LABEL_9;
    }
  }
}


// ============================================================

// Address: 0x4d789c
// Original: _ZN29CTaskSimplePlayHandSignalAnim13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimplePlayHandSignalAnim::MakeAbortable(CPed *,int,CEvent const*)
// attributes: thunk
int __fastcall CTaskSimplePlayHandSignalAnim::MakeAbortable(CTaskSimpleAnim *this, CPed *a2, int a3, const CEvent *a4)
{
  return CTaskSimpleAnim::MakeAbortable(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4d843c
// Original: _ZNK29CTaskSimplePlayHandSignalAnim5CloneEv
// Demangled: CTaskSimplePlayHandSignalAnim::Clone(void)
int __fastcall CTaskSimplePlayHandSignalAnim::Clone(CTaskSimplePlayHandSignalAnim *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  char v4; // r8
  char v5; // r6
  __int64 v6; // kr00_8
  int result; // r0
  char v8; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_BYTE *)this + 24);
  v6 = *((_QWORD *)this + 2);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = v6;
  *(_BYTE *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  v8 = *(_BYTE *)(result + 12);
  *(_DWORD *)result = &off_66959C;
  *(_BYTE *)(result + 12) = v4 & 4 | v8 & 0xF8;
  return result;
}


// ============================================================

// Address: 0x4d848c
// Original: _ZNK29CTaskSimplePlayHandSignalAnim11GetTaskTypeEv
// Demangled: CTaskSimplePlayHandSignalAnim::GetTaskType(void)
int __fastcall CTaskSimplePlayHandSignalAnim::GetTaskType(CTaskSimplePlayHandSignalAnim *this)
{
  return 425;
}


// ============================================================

// Address: 0x4d8494
// Original: _ZN29CTaskSimplePlayHandSignalAnim9SerializeEv
// Demangled: CTaskSimplePlayHandSignalAnim::Serialize(void)
int __fastcall CTaskSimplePlayHandSignalAnim::Serialize(CTaskSimplePlayHandSignalAnim *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v12; // r0
  bool v13[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskSimplePlayHandSignalAnim *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimplePlayHandSignalAnim *))(*(_DWORD *)this + 20))(this) == 425 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    free(v7);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskSimplePlayHandSignalAnim *)((char *)this + 24),
      (char *)&stderr + 1,
      v9);
    v13[0] = (*((_BYTE *)this + 12) & 4) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 1, v10);
  }
  else
  {
    v12 = (*(int (__fastcall **)(CTaskSimplePlayHandSignalAnim *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(425, v12);
  }
}


// ============================================================
