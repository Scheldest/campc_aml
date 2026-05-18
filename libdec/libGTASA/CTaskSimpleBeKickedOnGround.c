
// Address: 0x192ddc
// Original: j__ZN27CTaskSimpleBeKickedOnGround9StartAnimEP4CPed
// Demangled: CTaskSimpleBeKickedOnGround::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleBeKickedOnGround::StartAnim(CTaskSimpleBeKickedOnGround *this, CPed *a2)
{
  return _ZN27CTaskSimpleBeKickedOnGround9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4df0e0
// Original: _ZN27CTaskSimpleBeKickedOnGroundC2Ev
// Demangled: CTaskSimpleBeKickedOnGround::CTaskSimpleBeKickedOnGround(void)
void __fastcall CTaskSimpleBeKickedOnGround::CTaskSimpleBeKickedOnGround(CTaskSimpleBeKickedOnGround *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_669744;
}


// ============================================================

// Address: 0x4df100
// Original: _ZN27CTaskSimpleBeKickedOnGroundD2Ev
// Demangled: CTaskSimpleBeKickedOnGround::~CTaskSimpleBeKickedOnGround()
void __fastcall CTaskSimpleBeKickedOnGround::~CTaskSimpleBeKickedOnGround(CTaskSimpleBeKickedOnGround *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669744;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4df13c
// Original: _ZN27CTaskSimpleBeKickedOnGroundD0Ev
// Demangled: CTaskSimpleBeKickedOnGround::~CTaskSimpleBeKickedOnGround()
void __fastcall CTaskSimpleBeKickedOnGround::~CTaskSimpleBeKickedOnGround(CTaskSimpleBeKickedOnGround *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669744;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4df17c
// Original: _ZN27CTaskSimpleBeKickedOnGround13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleBeKickedOnGround::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleBeKickedOnGround::MakeAbortable(
        CTaskSimpleBeKickedOnGround *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CAnimBlendAssociation *v5; // r0
  int result; // r0

  v5 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    if ( v5 )
    {
      *((_WORD *)v5 + 23) |= 4u;
      *(_DWORD *)(*((_DWORD *)this + 3) + 28) = -1065353216;
    }
    return 0;
  }
  else if ( v5 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v5,
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

// Address: 0x4df1c0
// Original: _ZN27CTaskSimpleBeKickedOnGround28FinishAnimBeKickedOnGroundCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleBeKickedOnGround::FinishAnimBeKickedOnGroundCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleBeKickedOnGround::FinishAnimBeKickedOnGroundCB(
        CTaskSimpleBeKickedOnGround *this,
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

// Address: 0x4df1cc
// Original: _ZN27CTaskSimpleBeKickedOnGround9StartAnimEP4CPed
// Demangled: CTaskSimpleBeKickedOnGround::StartAnim(CPed *)
int __fastcall CTaskSimpleBeKickedOnGround::StartAnim(CTaskSimpleBeKickedOnGround *this, CPed *a2)
{
  int FirstAssociation; // r0
  unsigned int v5; // r2
  CAnimBlendAssociation *v6; // r0
  CLocalisation *v7; // r0
  int v8; // r5
  int MatrixArray; // r0
  int result; // r0
  _DWORD v11[7]; // [sp+4h] [bp-1Ch] BYREF

  if ( CLocalisation::KickingWhenDown(this) )
  {
    FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
    v5 = 39;
    if ( !FirstAssociation )
      v5 = 36;
    v6 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v5);
    *((_DWORD *)this + 3) = v6;
    CAnimBlendAssociation::SetCurrentTime(v6, 0.0);
    *(_WORD *)(*((_DWORD *)this + 3) + 46) |= 1u;
    v7 = (CLocalisation *)*((_DWORD *)this + 3);
    *((_WORD *)v7 + 23) &= ~8u;
    if ( CLocalisation::KickingWhenDown(v7) )
    {
      memset(v11, 0, 12);
      GetAnimHierarchyFromSkinClump();
      v8 = RpHAnimIDGetIndex();
      MatrixArray = RpHAnimHierarchyGetMatrixArray();
      RwV3dTransformPoints(v11, v11, 1, MatrixArray + (v8 << 6));
    }
    return CAnimBlendAssociation::SetFinishCallback(
             *((CAnimBlendAssociation **)this + 3),
             (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBeKickedOnGround::FinishAnimBeKickedOnGroundCB,
             this);
  }
  else
  {
    result = 1;
    *((_BYTE *)this + 8) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x4df278
// Original: _ZN27CTaskSimpleBeKickedOnGround10ProcessPedEP4CPed
// Demangled: CTaskSimpleBeKickedOnGround::ProcessPed(CPed *)
int __fastcall CTaskSimpleBeKickedOnGround::ProcessPed(CTaskSimpleBeKickedOnGround *this, CPed *a2)
{
  if ( *((_BYTE *)this + 8) )
    return 1;
  if ( !*((_DWORD *)this + 3) )
    CTaskSimpleBeKickedOnGround::StartAnim(this, a2);
  return 0;
}


// ============================================================

// Address: 0x4e9a94
// Original: _ZNK27CTaskSimpleBeKickedOnGround5CloneEv
// Demangled: CTaskSimpleBeKickedOnGround::Clone(void)
int __fastcall CTaskSimpleBeKickedOnGround::Clone(CTaskSimpleBeKickedOnGround *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_669744;
  return result;
}


// ============================================================

// Address: 0x4e9ab8
// Original: _ZNK27CTaskSimpleBeKickedOnGround11GetTaskTypeEv
// Demangled: CTaskSimpleBeKickedOnGround::GetTaskType(void)
int __fastcall CTaskSimpleBeKickedOnGround::GetTaskType(CTaskSimpleBeKickedOnGround *this)
{
  return 1007;
}


// ============================================================
