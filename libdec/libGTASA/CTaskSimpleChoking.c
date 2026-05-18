
// Address: 0x18aa6c
// Original: j__ZN18CTaskSimpleChokingC2EP4CPedh
// Demangled: CTaskSimpleChoking::CTaskSimpleChoking(CPed *,uchar)
// attributes: thunk
void __fastcall CTaskSimpleChoking::CTaskSimpleChoking(CTaskSimpleChoking *this, CPed *a2, unsigned __int8 a3)
{
  _ZN18CTaskSimpleChokingC2EP4CPedh(this, a2, a3);
}


// ============================================================

// Address: 0x18fed4
// Original: j__ZN18CTaskSimpleChoking10CreateTaskEv
// Demangled: CTaskSimpleChoking::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleChoking::CreateTask(CTaskSimpleChoking *this)
{
  return _ZN18CTaskSimpleChoking10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19fa5c
// Original: j__ZN18CTaskSimpleChoking11UpdateChokeEP4CPedS1_h
// Demangled: CTaskSimpleChoking::UpdateChoke(CPed *,CPed *,uchar)
// attributes: thunk
int __fastcall CTaskSimpleChoking::UpdateChoke(CEntity **this, CPed *a2, CPed *a3, unsigned __int8 a4)
{
  return _ZN18CTaskSimpleChoking11UpdateChokeEP4CPedS1_h(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4918b8
// Original: _ZN18CTaskSimpleChoking10CreateTaskEv
// Demangled: CTaskSimpleChoking::CreateTask(void)
void __fastcall CTaskSimpleChoking::CreateTask(CTaskSimpleChoking *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CPed *Ped; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskSimpleChoking *v8; // r0
  unsigned __int8 v9; // [sp+7h] [bp-19h] BYREF
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
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, (char *)&stderr + 1, v4);
  v8 = (CTaskSimpleChoking *)CTask::operator new((CTask *)&dword_1C, v7);
  CTaskSimpleChoking::CTaskSimpleChoking(v8, Ped, v9);
}


// ============================================================

// Address: 0x4df650
// Original: _ZN18CTaskSimpleChokingC2EP4CPedh
// Demangled: CTaskSimpleChoking::CTaskSimpleChoking(CPed *,uchar)
void __fastcall CTaskSimpleChoking::CTaskSimpleChoking(CTaskSimpleChoking *this, CPed *a2, unsigned __int8 a3)
{
  int v6; // s0
  int v7; // r0

  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 24) = a3;
  *((_BYTE *)this + 25) = 0;
  *(_DWORD *)this = &off_6697AC;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
  v6 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
  v7 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)this + 4) = v6 + 1000;
  *((_DWORD *)this + 5) = v7;
}


// ============================================================

// Address: 0x4df6d4
// Original: _ZN18CTaskSimpleChokingD2Ev
// Demangled: CTaskSimpleChoking::~CTaskSimpleChoking()
void __fastcall CTaskSimpleChoking::~CTaskSimpleChoking(CTaskSimpleChoking *this)
{
  int v2; // r0
  CEntity *v3; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6697AC;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4df720
// Original: _ZN18CTaskSimpleChokingD0Ev
// Demangled: CTaskSimpleChoking::~CTaskSimpleChoking()
void __fastcall CTaskSimpleChoking::~CTaskSimpleChoking(CTaskSimpleChoking *this)
{
  int v2; // r0
  CEntity *v3; // r0
  void *v4; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6697AC;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4df770
// Original: _ZN18CTaskSimpleChoking13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleChoking::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleChoking::MakeAbortable(CTaskSimpleChoking *this, CPed *a2, int a3, const CEvent *a4)
{
  int result; // r0
  int v6; // r0
  int v7; // r0

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v7 = *((_DWORD *)this + 3);
    if ( v7 )
    {
      *(_WORD *)(v7 + 46) |= 4u;
      *(_DWORD *)(*((_DWORD *)this + 3) + 28) = -1065353216;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 3),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 3) = 0;
    }
    return 1;
  }
  else if ( a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 57 )
  {
    return 0;
  }
  else
  {
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -1065353216;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 3),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 3) = 0;
    }
    result = 1;
    *((_BYTE *)this + 25) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x4df7e8
// Original: _ZN18CTaskSimpleChoking17DeleteAnimChokeCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleChoking::DeleteAnimChokeCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleChoking::DeleteAnimChokeCB(CTaskSimpleChoking *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 25) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x4df7f4
// Original: _ZN18CTaskSimpleChoking10ProcessPedEP4CPed
// Demangled: CTaskSimpleChoking::ProcessPed(CPed *)
int __fastcall CTaskSimpleChoking::ProcessPed(CTaskSimpleChoking *this, CPed *a2)
{
  int v4; // r5
  int IsPlayer; // r0
  bool v6; // zf
  unsigned int v7; // r2
  bool v8; // cc
  __int64 v9; // r0
  CAnimBlendAssociation *v10; // r0
  unsigned int v11; // r6
  int v12; // r0
  CAnimBlendAssociation *v13; // r0
  int v14; // r5
  int v15; // r12
  int v16; // r1
  int v17; // r2
  char *v18; // r3
  int v19; // r0
  float32x2_t v20; // d1
  unsigned __int64 v21; // d3

  if ( *((_BYTE *)this + 25) )
    return 1;
  if ( *((_DWORD *)this + 2) )
  {
    IsPlayer = CPed::IsPlayer(a2);
    v6 = IsPlayer == 0;
    if ( !IsPlayer )
      v6 = *((_BYTE *)this + 24) == 0;
    if ( v6 )
    {
      v15 = *((_DWORD *)this + 2);
      v16 = *((_DWORD *)a2 + 5);
      v17 = *(_DWORD *)(v15 + 20);
      v18 = (char *)(v16 + 48);
      if ( !v16 )
        v18 = (char *)a2 + 4;
      v19 = v17 + 48;
      if ( !v17 )
        v19 = v15 + 4;
      v20.n64_u64[0] = vsub_f32(*(float32x2_t *)(v19 + 4), *(float32x2_t *)(v18 + 4)).n64_u64[0];
      v21 = vmul_f32(v20, *(float32x2_t *)(v16 + 20)).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v19 - *(float *)v18) * *(float *)(v16 + 16)) + *(float *)&v21)
                 + *((float *)&v21 + 1)) > 0.0 )
        *((float *)a2 + 344) = atan2f(-(float)(*(float *)v19 - *(float *)v18), v20.n64_f32[0]);
    }
  }
  v9 = *(_QWORD *)((char *)this + 12);
  v7 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  v8 = HIDWORD(v9) > v7;
  HIDWORD(v9) -= v7;
  if ( !v8 )
    HIDWORD(v9) = 0;
  *((_DWORD *)this + 4) = HIDWORD(v9);
  if ( (_DWORD)v9 )
  {
    if ( !HIDWORD(v9) )
    {
      if ( *(_WORD *)(v9 + 44) == 21 )
      {
        CAnimBlendAssociation::SetFinishCallback(
          (CAnimBlendAssociation *)v9,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        v10 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0xAu);
        *((_DWORD *)this + 3) = v10;
        CAnimBlendAssociation::SetFinishCallback(
          v10,
          (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleChoking::DeleteAnimChokeCB,
          this);
        v11 = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 5);
        *((_DWORD *)this + 4) = v11;
        if ( v11 >= (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0) + 8000 )
          v12 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0) + 8000;
        else
          v12 = *((_DWORD *)this + 4);
        *((_DWORD *)this + 4) = v12;
      }
      else
      {
        *(_DWORD *)(v9 + 28) = -1065353216;
        *(_WORD *)(*((_DWORD *)this + 3) + 46) |= 4u;
      }
    }
  }
  else
  {
    v13 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x15u);
    *((_DWORD *)this + 3) = v13;
    CAnimBlendAssociation::SetFinishCallback(
      v13,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleChoking::DeleteAnimChokeCB,
      this);
    v14 = *((_DWORD *)this + 3);
    *(float *)(v14 + 36) = (float)((float)((float)rand() * 4.6566e-10) * 0.25) + 0.75;
  }
  v4 = 0;
  CPed::Say(a2, 0x154u, 0, 1.0, 0, 0, 0);
  return v4;
}


// ============================================================

// Address: 0x4dfa0c
// Original: _ZN18CTaskSimpleChoking11UpdateChokeEP4CPedS1_h
// Demangled: CTaskSimpleChoking::UpdateChoke(CPed *,CPed *,uchar)
CEntity *__fastcall CTaskSimpleChoking::UpdateChoke(CEntity **this, CPed *a2, CPed *a3, unsigned __int8 a4)
{
  CEntity *v7; // r0
  CEntity **v8; // r5
  unsigned __int16 *v9; // r0
  bool v10; // zf
  CEntity *v11; // r0
  CEntity *v12; // r5
  CEntity *result; // r0

  v8 = this + 2;
  v7 = this[2];
  *((_BYTE *)v8 + 16) = a4;
  if ( v7 != a3 )
  {
    if ( v7 )
      CEntity::CleanUpOldReference(v7, v8);
    *v8 = a3;
    if ( a3 )
      CEntity::RegisterReference(a3, v8);
  }
  if ( *((_BYTE *)this + 25) )
    *((_BYTE *)this + 25) = 0;
  v9 = (unsigned __int16 *)this[3];
  v10 = v9 == 0;
  if ( v9 )
    v10 = v9[22] == 21;
  if ( !v10 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      (CAnimBlendAssociation *)v9,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    v11 = (CEntity *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x15u);
    this[3] = v11;
    CAnimBlendAssociation::SetFinishCallback(
      v11,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleChoking::DeleteAnimChokeCB,
      this);
    v12 = this[3];
    *((float *)v12 + 9) = (float)((float)((float)rand() * 4.6566e-10) * 0.3) + 0.8;
    this[5] = (CEntity *)(CTimer::m_snTimeInMilliseconds - (_DWORD)this[4]);
  }
  result = (CEntity *)((int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + 1000);
  this[4] = result;
  return result;
}


// ============================================================

// Address: 0x4e9af8
// Original: _ZNK18CTaskSimpleChoking5CloneEv
// Demangled: CTaskSimpleChoking::Clone(void)
CTaskSimple *__fastcall CTaskSimpleChoking::Clone(CTaskSimpleChoking *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  CEntity *v4; // r5
  CTaskSimple *v5; // r4
  int v6; // s0
  int v7; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskSimple::CTaskSimple(v3);
  *((_DWORD *)v5 + 3) = 0;
  *((_BYTE *)v5 + 24) = (_BYTE)this;
  *((_BYTE *)v5 + 25) = 0;
  *(_DWORD *)v5 = &off_6697AC;
  *((_DWORD *)v5 + 2) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 2);
  v6 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
  v7 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)v5 + 4) = v6 + 1000;
  *((_DWORD *)v5 + 5) = v7;
  return v5;
}


// ============================================================

// Address: 0x4e9b84
// Original: _ZNK18CTaskSimpleChoking11GetTaskTypeEv
// Demangled: CTaskSimpleChoking::GetTaskType(void)
int __fastcall CTaskSimpleChoking::GetTaskType(CTaskSimpleChoking *this)
{
  return 263;
}


// ============================================================

// Address: 0x4e9b8c
// Original: _ZN18CTaskSimpleChoking9SerializeEv
// Demangled: CTaskSimpleChoking::Serialize(void)
int __fastcall CTaskSimpleChoking::Serialize(CTaskSimpleChoking *this)
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
  CGenericGameStorage *v12; // r5
  int v13; // r2
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleChoking *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleChoking *))(*(_DWORD *)this + 20))(this) == 263 )
  {
    v5 = (CPed *)*((_DWORD *)this + 2);
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
      v12 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v12 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
      v9 = v12;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleChoking *)((char *)this + 24), (char *)&stderr + 1, v14);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleChoking *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(263, v10);
  }
}


// ============================================================
