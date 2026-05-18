
// Address: 0x194238
// Original: j__ZN18CTaskSimpleGiveCPRC2EP9CAccident
// Demangled: CTaskSimpleGiveCPR::CTaskSimpleGiveCPR(CAccident *)
// attributes: thunk
void __fastcall CTaskSimpleGiveCPR::CTaskSimpleGiveCPR(CTaskSimpleGiveCPR *this, CAccident *a2)
{
  _ZN18CTaskSimpleGiveCPRC2EP9CAccident(this, a2);
}


// ============================================================

// Address: 0x199980
// Original: j__ZN18CTaskSimpleGiveCPR10CreateTaskEv
// Demangled: CTaskSimpleGiveCPR::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleGiveCPR::CreateTask(CTaskSimpleGiveCPR *this)
{
  return _ZN18CTaskSimpleGiveCPR10CreateTaskEv(this);
}


// ============================================================

// Address: 0x490ec0
// Original: _ZN18CTaskSimpleGiveCPR10CreateTaskEv
// Demangled: CTaskSimpleGiveCPR::CreateTask(void)
void __fastcall CTaskSimpleGiveCPR::CreateTask(CTaskSimpleGiveCPR *this, int a2, int a3)
{
  char v3; // r4
  char *v4; // r1
  int Ped; // r4
  CTaskSimpleGiveCPR *v6; // r5
  CAccident *v7; // r0
  CPools *v8; // [sp+0h] [bp-18h] BYREF
  _BYTE v9[18]; // [sp+6h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, a3);
  v4 = (char *)v8 + 1;
  if ( v8 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = CPools::GetPed(v8, (int)v4);
  v6 = (CTaskSimpleGiveCPR *)CTask::operator new((CTask *)&off_18, (unsigned int)v4);
  v7 = (CAccident *)operator new(8u);
  *(_DWORD *)v7 = Ped;
  *((_WORD *)v7 + 2) = 0;
  CTaskSimpleGiveCPR::CTaskSimpleGiveCPR(v6, v7);
}


// ============================================================

// Address: 0x510230
// Original: _ZN18CTaskSimpleGiveCPRC2EP9CAccident
// Demangled: CTaskSimpleGiveCPR::CTaskSimpleGiveCPR(CAccident *)
void __fastcall CTaskSimpleGiveCPR::CTaskSimpleGiveCPR(CTaskSimpleGiveCPR *this, CAccident *a2)
{
  int v3; // r0
  char v4; // r2

  CTaskSimple::CTaskSimple(this);
  v4 = *(_BYTE *)(v3 + 8);
  *(_DWORD *)(v3 + 12) = a2;
  *(_DWORD *)(v3 + 16) = 0;
  *(_BYTE *)(v3 + 8) = v4 & 0xFC | 1;
  *(_DWORD *)v3 = &off_66B99C;
}


// ============================================================

// Address: 0x51025c
// Original: _ZN18CTaskSimpleGiveCPRD2Ev
// Demangled: CTaskSimpleGiveCPR::~CTaskSimpleGiveCPR()
void __fastcall CTaskSimpleGiveCPR::~CTaskSimpleGiveCPR(CTaskSimpleGiveCPR *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B99C;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x510290
// Original: _ZN18CTaskSimpleGiveCPRD0Ev
// Demangled: CTaskSimpleGiveCPR::~CTaskSimpleGiveCPR()
void __fastcall CTaskSimpleGiveCPR::~CTaskSimpleGiveCPR(CTaskSimpleGiveCPR *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B99C;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x5102c8
// Original: _ZN18CTaskSimpleGiveCPR10ProcessPedEP4CPed
// Demangled: CTaskSimpleGiveCPR::ProcessPed(CPed *)
int __fastcall CTaskSimpleGiveCPR::ProcessPed(CTaskSimpleGiveCPR *this, CPed *a2)
{
  char v3; // r0
  int v4; // r2
  CAnimBlendAssociation *v5; // r0
  int result; // r0
  int *v7; // r1
  int v8; // r4
  _BYTE v9[20]; // [sp+4h] [bp-14h] BYREF

  v3 = *((_BYTE *)this + 8);
  if ( (v3 & 1) != 0 )
  {
    v4 = *((_DWORD *)a2 + 337);
    v3 &= ~1u;
    *((_BYTE *)this + 8) = v3;
    *((_DWORD *)this + 5) = v4;
  }
  if ( (v3 & 2) != 0 )
  {
    v7 = (int *)*((_DWORD *)this + 3);
    result = 1;
    v8 = *v7;
    if ( *v7 )
    {
      *((_BYTE *)v7 + 5) = 1;
      if ( !(*(unsigned __int8 *)(v8 + 1157) >> 7) )
      {
        CInterestingEvents::Add();
        CEventRevived::CEventRevived((CEventRevived *)v9);
        CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v8 + 1088) + 104), (CEvent *)v9, 0);
        CEvent::~CEvent((CEvent *)v9);
        return 1;
      }
    }
  }
  else
  {
    if ( !*((_DWORD *)this + 4) )
    {
      v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 46, 0x104u);
      *((_DWORD *)this + 4) = v5;
      CAnimBlendAssociation::SetFinishCallback(
        v5,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleGiveCPR::FinishGiveCPRAnimCB,
        this);
    }
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x510360
// Original: _ZNK18CTaskSimpleGiveCPR13ReviveDeadPedEP4CPed
// Demangled: CTaskSimpleGiveCPR::ReviveDeadPed(CPed *)
void __fastcall CTaskSimpleGiveCPR::ReviveDeadPed(CTaskSimpleGiveCPR *this, CPed *a2)
{
  int *v2; // r0
  int v3; // r4
  _BYTE v4[20]; // [sp+4h] [bp-14h] BYREF

  v2 = (int *)*((_DWORD *)this + 3);
  v3 = *v2;
  if ( *v2 )
  {
    *((_BYTE *)v2 + 5) = 1;
    if ( !(*(unsigned __int8 *)(v3 + 1157) >> 7) )
    {
      CInterestingEvents::Add();
      CEventRevived::CEventRevived((CEventRevived *)v4);
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v3 + 1088) + 104), (CEvent *)v4, 0);
      CEvent::~CEvent((CEvent *)v4);
    }
  }
}


// ============================================================

// Address: 0x5103b0
// Original: _ZN18CTaskSimpleGiveCPR9StartAnimEP4CPed
// Demangled: CTaskSimpleGiveCPR::StartAnim(CPed *)
int __fastcall CTaskSimpleGiveCPR::StartAnim(CTaskSimpleGiveCPR *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 46, 0x104u);
  *((_DWORD *)this + 4) = v3;
  return sub_18C20C(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleGiveCPR::FinishGiveCPRAnimCB, this);
}


// ============================================================

// Address: 0x5103dc
// Original: _ZN18CTaskSimpleGiveCPR19FinishGiveCPRAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleGiveCPR::FinishGiveCPRAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleGiveCPR::FinishGiveCPRAnimCB(CTaskSimpleGiveCPR *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((unsigned __int8 *)a2 + 8);
  *((_DWORD *)a2 + 4) = 0;
  result = v3 | 2;
  *((_BYTE *)a2 + 8) = result;
  return result;
}


// ============================================================

// Address: 0x5103ec
// Original: _ZN18CTaskSimpleGiveCPR13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGiveCPR::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGiveCPR::MakeAbortable(CTaskSimpleGiveCPR *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r0
  float v8; // s0
  CAnimBlendAssociation *v10; // r0

  if ( a3 != 2
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 10
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 52
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 58
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 66
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 64
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 41
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 73 )
  {
    v7 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4);
    v8 = *((float *)a2 + 337);
    if ( (v7 != 9 || v8 > 10.0 && (float)(*((float *)this + 5) - v8) < 40.0) && v8 > 0.0 )
      return 0;
  }
  v10 = (CAnimBlendAssociation *)*((_DWORD *)this + 4);
  if ( v10 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v10,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *(_DWORD *)(*((_DWORD *)this + 4) + 28) = -998637568;
    *((_DWORD *)this + 4) = 0;
  }
  return 1;
}


// ============================================================

// Address: 0x51224c
// Original: _ZNK18CTaskSimpleGiveCPR5CloneEv
// Demangled: CTaskSimpleGiveCPR::Clone(void)
int __fastcall CTaskSimpleGiveCPR::Clone(CTaskSimpleGiveCPR *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  int result; // r0
  char v6; // r3

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskSimple::CTaskSimple(v3);
  v6 = *(_BYTE *)(result + 8);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_66B99C;
  *(_BYTE *)(result + 8) = v6 & 0xFC | 1;
  return result;
}


// ============================================================

// Address: 0x512280
// Original: _ZNK18CTaskSimpleGiveCPR11GetTaskTypeEv
// Demangled: CTaskSimpleGiveCPR::GetTaskType(void)
int __fastcall CTaskSimpleGiveCPR::GetTaskType(CTaskSimpleGiveCPR *this)
{
  return 102;
}


// ============================================================

// Address: 0x512284
// Original: _ZN18CTaskSimpleGiveCPR9SerializeEv
// Demangled: CTaskSimpleGiveCPR::Serialize(void)
void __fastcall CTaskSimpleGiveCPR::Serialize(CTaskSimpleGiveCPR *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleGiveCPR *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleGiveCPR *))(*(_DWORD *)this + 20))(this) == 102 )
  {
    v5 = (CPed *)**((_DWORD **)this + 3);
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
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleGiveCPR *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(102, v10);
  }
}


// ============================================================
