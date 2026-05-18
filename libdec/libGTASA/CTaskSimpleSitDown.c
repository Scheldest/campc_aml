
// Address: 0x19cd64
// Original: j__ZN18CTaskSimpleSitDownC2Eh
// Demangled: CTaskSimpleSitDown::CTaskSimpleSitDown(uchar)
// attributes: thunk
void __fastcall CTaskSimpleSitDown::CTaskSimpleSitDown(CTaskSimpleSitDown *this, unsigned __int8 a2)
{
  _ZN18CTaskSimpleSitDownC2Eh(this, a2);
}


// ============================================================

// Address: 0x4ebf54
// Original: _ZN18CTaskSimpleSitDownC2Eh
// Demangled: CTaskSimpleSitDown::CTaskSimpleSitDown(uchar)
void __fastcall CTaskSimpleSitDown::CTaskSimpleSitDown(CTaskSimpleSitDown *this, unsigned __int8 a2)
{
  int v3; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v3 + 8) = a2;
  *(_BYTE *)(v3 + 9) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)v3 = &off_669E8C;
}


// ============================================================

// Address: 0x4ebf78
// Original: _ZN18CTaskSimpleSitDownD2Ev
// Demangled: CTaskSimpleSitDown::~CTaskSimpleSitDown()
void __fastcall CTaskSimpleSitDown::~CTaskSimpleSitDown(CTaskSimpleSitDown *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669E8C;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ebfac
// Original: _ZN18CTaskSimpleSitDownD0Ev
// Demangled: CTaskSimpleSitDown::~CTaskSimpleSitDown()
void __fastcall CTaskSimpleSitDown::~CTaskSimpleSitDown(CTaskSimpleSitDown *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669E8C;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4ebfe4
// Original: _ZN18CTaskSimpleSitDown13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSitDown::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSitDown::MakeAbortable(CTaskSimpleSitDown *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  CAnimBlendAssociation *v6; // r0
  int result; // r0

  if ( a3 == 2 )
  {
    v5 = *((_DWORD *)this + 3);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 28) = -998637568;
      v6 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
LABEL_6:
      CAnimBlendAssociation::SetFinishCallback(
        v6,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      result = 1;
      *((_DWORD *)this + 3) = 0;
      return result;
    }
    return 1;
  }
  v6 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( a3 == 1 )
  {
    if ( v6 )
      goto LABEL_6;
    return 1;
  }
  if ( v6 )
  {
    *((_WORD *)v6 + 23) |= 4u;
    *(_DWORD *)(*((_DWORD *)this + 3) + 28) = -1065353216;
  }
  return 0;
}


// ============================================================

// Address: 0x4ec044
// Original: _ZN18CTaskSimpleSitDown10ProcessPedEP4CPed
// Demangled: CTaskSimpleSitDown::ProcessPed(CPed *)
int __fastcall CTaskSimpleSitDown::ProcessPed(CTaskSimpleSitDown *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  CAnimBlendAssociation *v7; // r0

  if ( *((_BYTE *)this + 9) )
    return 1;
  if ( *((_DWORD *)this + 3) )
    return 0;
  v4 = *((_DWORD *)a2 + 6);
  if ( *((_BYTE *)this + 8) )
  {
    v5 = 53;
    v6 = 308;
  }
  else
  {
    v5 = 0;
    v6 = 148;
  }
  v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v4, v5, v6);
  *((_DWORD *)this + 3) = v7;
  CAnimBlendAssociation::SetFinishCallback(
    v7,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleSitDown::FinishAnimSitDownCB,
    this);
  return 0;
}


// ============================================================

// Address: 0x4ec08c
// Original: _ZN18CTaskSimpleSitDown9StartAnimEP4CPed
// Demangled: CTaskSimpleSitDown::StartAnim(CPed *)
int __fastcall CTaskSimpleSitDown::StartAnim(CTaskSimpleSitDown *this, CPed *a2)
{
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  CAnimBlendAssociation *v6; // r0

  v3 = *((_DWORD *)a2 + 6);
  if ( *((_BYTE *)this + 8) )
  {
    v4 = 53;
    v5 = 308;
  }
  else
  {
    v4 = 0;
    v5 = 148;
  }
  v6 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v3, v4, v5);
  *((_DWORD *)this + 3) = v6;
  return sub_18C20C(v6, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleSitDown::FinishAnimSitDownCB, this);
}


// ============================================================

// Address: 0x4ec0c4
// Original: _ZN18CTaskSimpleSitDown19FinishAnimSitDownCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleSitDown::FinishAnimSitDownCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleSitDown::FinishAnimSitDownCB(CTaskSimpleSitDown *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 9) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x4f2d30
// Original: _ZNK18CTaskSimpleSitDown5CloneEv
// Demangled: CTaskSimpleSitDown::Clone(void)
int __fastcall CTaskSimpleSitDown::Clone(CTaskSimpleSitDown *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = (_BYTE)this;
  *(_BYTE *)(result + 9) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_669E8C;
  return result;
}


// ============================================================

// Address: 0x4f2d5c
// Original: _ZNK18CTaskSimpleSitDown11GetTaskTypeEv
// Demangled: CTaskSimpleSitDown::GetTaskType(void)
int __fastcall CTaskSimpleSitDown::GetTaskType(CTaskSimpleSitDown *this)
{
  return 220;
}


// ============================================================

// Address: 0x4f2d60
// Original: _ZN18CTaskSimpleSitDown9SerializeEv
// Demangled: CTaskSimpleSitDown::Serialize(void)
int __fastcall CTaskSimpleSitDown::Serialize(CTaskSimpleSitDown *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleSitDown *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSitDown *))(*(_DWORD *)this + 20))(this) == 220 )
  {
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskSimpleSitDown *)((char *)this + 8), (char *)&stderr + 1, v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleSitDown *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(220, v7);
  }
}


// ============================================================
