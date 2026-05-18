
// Address: 0x1a15b0
// Original: j__ZN20CTaskSimpleShakeFistC2Ev
// Demangled: CTaskSimpleShakeFist::CTaskSimpleShakeFist(void)
// attributes: thunk
void __fastcall CTaskSimpleShakeFist::CTaskSimpleShakeFist(CTaskSimpleShakeFist *this)
{
  _ZN20CTaskSimpleShakeFistC2Ev(this);
}


// ============================================================

// Address: 0x540b10
// Original: _ZN20CTaskSimpleShakeFistC2Ev
// Demangled: CTaskSimpleShakeFist::CTaskSimpleShakeFist(void)
void __fastcall CTaskSimpleShakeFist::CTaskSimpleShakeFist(CTaskSimpleShakeFist *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66D0C4;
}


// ============================================================

// Address: 0x540b30
// Original: _ZN20CTaskSimpleShakeFistD2Ev
// Demangled: CTaskSimpleShakeFist::~CTaskSimpleShakeFist()
void __fastcall CTaskSimpleShakeFist::~CTaskSimpleShakeFist(CTaskSimpleShakeFist *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D0C4;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x540b64
// Original: _ZN20CTaskSimpleShakeFistD0Ev
// Demangled: CTaskSimpleShakeFist::~CTaskSimpleShakeFist()
void __fastcall CTaskSimpleShakeFist::~CTaskSimpleShakeFist(CTaskSimpleShakeFist *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D0C4;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x540b9c
// Original: _ZN20CTaskSimpleShakeFist13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleShakeFist::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleShakeFist::MakeAbortable(CTaskSimpleShakeFist *this, CPed *a2, int a3, const CEvent *a4)
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
  else if ( v5 )
  {
    *(_DWORD *)(v5 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    result = 1;
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x540be4
// Original: _ZN20CTaskSimpleShakeFist10ProcessPedEP4CPed
// Demangled: CTaskSimpleShakeFist::ProcessPed(CPed *)
int __fastcall CTaskSimpleShakeFist::ProcessPed(CTaskSimpleShakeFist *this, CPed *a2)
{
  int v4; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    v4 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x90u);
    *((_DWORD *)this + 3) = v4;
    *(_WORD *)(v4 + 46) |= 8u;
    *(_WORD *)(*((_DWORD *)this + 3) + 46) |= 4u;
    CAnimBlendAssociation::SetDeleteCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleShakeFist::FinishAnimShakeFistCB,
      this);
  }
  return 0;
}


// ============================================================

// Address: 0x540c3c
// Original: _ZN20CTaskSimpleShakeFist9StartAnimEP4CPed
// Demangled: CTaskSimpleShakeFist::StartAnim(CPed *)
int __fastcall CTaskSimpleShakeFist::StartAnim(CTaskSimpleShakeFist *this, CPed *a2)
{
  int v3; // r0

  v3 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x90u);
  *((_DWORD *)this + 3) = v3;
  *(_WORD *)(v3 + 46) |= 8u;
  *(_WORD *)(*((_DWORD *)this + 3) + 46) |= 4u;
  return sub_192A28(
           *((CAnimBlendAssociation **)this + 3),
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleShakeFist::FinishAnimShakeFistCB,
           this);
}


// ============================================================

// Address: 0x540c7c
// Original: _ZN20CTaskSimpleShakeFist21FinishAnimShakeFistCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleShakeFist::FinishAnimShakeFistCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleShakeFist::FinishAnimShakeFistCB(
        CTaskSimpleShakeFist *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x54391c
// Original: _ZNK20CTaskSimpleShakeFist5CloneEv
// Demangled: CTaskSimpleShakeFist::Clone(void)
int __fastcall CTaskSimpleShakeFist::Clone(CTaskSimpleShakeFist *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66D0C4;
  return result;
}


// ============================================================

// Address: 0x543940
// Original: _ZNK20CTaskSimpleShakeFist11GetTaskTypeEv
// Demangled: CTaskSimpleShakeFist::GetTaskType(void)
int __fastcall CTaskSimpleShakeFist::GetTaskType(CTaskSimpleShakeFist *this)
{
  return 302;
}


// ============================================================

// Address: 0x543948
// Original: _ZN20CTaskSimpleShakeFist9SerializeEv
// Demangled: CTaskSimpleShakeFist::Serialize(void)
int __fastcall CTaskSimpleShakeFist::Serialize(CTaskSimpleShakeFist *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleShakeFist *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleShakeFist *))(*(_DWORD *)this + 20))(this);
  if ( result != 302 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleShakeFist *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(302, v6);
  }
  return result;
}


// ============================================================
