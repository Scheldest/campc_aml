
// Address: 0x1942cc
// Original: j__ZN18CTaskSimpleHitHeadC2Ev
// Demangled: CTaskSimpleHitHead::CTaskSimpleHitHead(void)
// attributes: thunk
void __fastcall CTaskSimpleHitHead::CTaskSimpleHitHead(CTaskSimpleHitHead *this)
{
  _ZN18CTaskSimpleHitHeadC2Ev(this);
}


// ============================================================

// Address: 0x50abdc
// Original: _ZN18CTaskSimpleHitHeadC2Ev
// Demangled: CTaskSimpleHitHead::CTaskSimpleHitHead(void)
void __fastcall CTaskSimpleHitHead::CTaskSimpleHitHead(CTaskSimpleHitHead *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66B640;
}


// ============================================================

// Address: 0x50abfc
// Original: _ZN18CTaskSimpleHitHeadD2Ev
// Demangled: CTaskSimpleHitHead::~CTaskSimpleHitHead()
void __fastcall CTaskSimpleHitHead::~CTaskSimpleHitHead(CTaskSimpleHitHead *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B640;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50ac30
// Original: _ZN18CTaskSimpleHitHeadD0Ev
// Demangled: CTaskSimpleHitHead::~CTaskSimpleHitHead()
void __fastcall CTaskSimpleHitHead::~CTaskSimpleHitHead(CTaskSimpleHitHead *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B640;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x50ac68
// Original: _ZN18CTaskSimpleHitHead13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleHitHead::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleHitHead::MakeAbortable(CTaskSimpleHitHead *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  int result; // r0

  v5 = *((_DWORD *)this + 3);
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    if ( v5 )
      *(_DWORD *)(v5 + 28) = -1065353216;
    return 0;
  }
  else
  {
    if ( v5 )
    {
      *(_DWORD *)(v5 + 28) = -1065353216;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 3),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 3) = 0;
    }
    result = 1;
    *((_BYTE *)this + 8) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x50acac
// Original: _ZN18CTaskSimpleHitHead10ProcessPedEP4CPed
// Demangled: CTaskSimpleHitHead::ProcessPed(CPed *)
int __fastcall CTaskSimpleHitHead::ProcessPed(CTaskSimpleHitHead *this, CPed *a2)
{
  int result; // r0
  CAnimBlendAssociation *v4; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  if ( *((_DWORD *)this + 3) )
    return 0;
  v4 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x26u);
  *((_DWORD *)this + 3) = v4;
  CAnimBlendAssociation::SetFinishCallback(
    v4,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleHitHead::FinishAnimHitHeadCB,
    this);
  result = *((unsigned __int8 *)this + 8);
  if ( *((_BYTE *)this + 8) )
    return 1;
  return result;
}


// ============================================================

// Address: 0x50acf0
// Original: _ZN18CTaskSimpleHitHead9StartAnimEP4CPed
// Demangled: CTaskSimpleHitHead::StartAnim(CPed *)
int __fastcall CTaskSimpleHitHead::StartAnim(CTaskSimpleHitHead *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x26u);
  *((_DWORD *)this + 3) = v3;
  return sub_18C20C(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleHitHead::FinishAnimHitHeadCB, this);
}


// ============================================================

// Address: 0x50ad1c
// Original: _ZN18CTaskSimpleHitHead19FinishAnimHitHeadCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleHitHead::FinishAnimHitHeadCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleHitHead::FinishAnimHitHeadCB(CTaskSimpleHitHead *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x50ed30
// Original: _ZNK18CTaskSimpleHitHead5CloneEv
// Demangled: CTaskSimpleHitHead::Clone(void)
int __fastcall CTaskSimpleHitHead::Clone(CTaskSimpleHitHead *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66B640;
  return result;
}


// ============================================================

// Address: 0x50ed54
// Original: _ZNK18CTaskSimpleHitHead11GetTaskTypeEv
// Demangled: CTaskSimpleHitHead::GetTaskType(void)
int __fastcall CTaskSimpleHitHead::GetTaskType(CTaskSimpleHitHead *this)
{
  return 500;
}


// ============================================================

// Address: 0x50ed5c
// Original: _ZN18CTaskSimpleHitHead9SerializeEv
// Demangled: CTaskSimpleHitHead::Serialize(void)
int __fastcall CTaskSimpleHitHead::Serialize(CTaskSimpleHitHead *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleHitHead *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleHitHead *))(*(_DWORD *)this + 20))(this);
  if ( result != 500 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleHitHead *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(500, v6);
  }
  return result;
}


// ============================================================
