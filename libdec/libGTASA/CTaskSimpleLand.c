
// Address: 0x193d40
// Original: j__ZN15CTaskSimpleLand15RightFootLandedEv
// Demangled: CTaskSimpleLand::RightFootLanded(void)
// attributes: thunk
int __fastcall CTaskSimpleLand::RightFootLanded(CTaskSimpleLand *this)
{
  return _ZN15CTaskSimpleLand15RightFootLandedEv(this);
}


// ============================================================

// Address: 0x194718
// Original: j__ZN15CTaskSimpleLandC2E11AnimationId
// Demangled: CTaskSimpleLand::CTaskSimpleLand(AnimationId)
// attributes: thunk
int CTaskSimpleLand::CTaskSimpleLand()
{
  return _ZN15CTaskSimpleLandC2E11AnimationId();
}


// ============================================================

// Address: 0x196b7c
// Original: j__ZN15CTaskSimpleLand14LeftFootLandedEv
// Demangled: CTaskSimpleLand::LeftFootLanded(void)
// attributes: thunk
int __fastcall CTaskSimpleLand::LeftFootLanded(CTaskSimpleLand *this)
{
  return _ZN15CTaskSimpleLand14LeftFootLandedEv(this);
}


// ============================================================

// Address: 0x52cb88
// Original: _ZN15CTaskSimpleLandC2E11AnimationId
// Demangled: CTaskSimpleLand::CTaskSimpleLand(AnimationId)
int __fastcall CTaskSimpleLand::CTaskSimpleLand(CTaskSimple *a1, int a2)
{
  int result; // r0
  char v4; // r3

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = a2;
  v4 = *(_BYTE *)(result + 16);
  *(_DWORD *)result = &off_66CB24;
  *(_BYTE *)(result + 16) = v4 & 0xF8 | (2 * (a2 == -1)) | 4;
  return result;
}


// ============================================================

// Address: 0x52cbc0
// Original: _ZN15CTaskSimpleLandD2Ev
// Demangled: CTaskSimpleLand::~CTaskSimpleLand()
void __fastcall CTaskSimpleLand::~CTaskSimpleLand(CTaskSimpleLand *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66CB24;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52cbf4
// Original: _ZN15CTaskSimpleLandD0Ev
// Demangled: CTaskSimpleLand::~CTaskSimpleLand()
void __fastcall CTaskSimpleLand::~CTaskSimpleLand(CTaskSimpleLand *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66CB24;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x52cc2c
// Original: _ZN15CTaskSimpleLand13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleLand::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleLand::MakeAbortable(CTaskSimpleLand *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0

  if ( a3 != 2 )
    return 0;
  v6 = *((_DWORD *)this + 2);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 28) = -998637568;
    *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 4u;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 2),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    CAnimBlendAssociation::SetDeleteCallback(
      *((CAnimBlendAssociation **)this + 2),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)a2 + 289) &= ~0x400u;
  return 1;
}


// ============================================================

// Address: 0x52cc94
// Original: _ZN15CTaskSimpleLand10ProcessPedEP4CPed
// Demangled: CTaskSimpleLand::ProcessPed(CPed *)
int __fastcall CTaskSimpleLand::ProcessPed(CTaskSimpleLand *this, CPed *a2)
{
  char v4; // r0
  CAnimBlendAssociation *v5; // r0
  float *v6; // r0
  float v7; // s0
  CAnimBlendAssociation *Association; // r0
  CAnimBlendAssociation *v9; // r0
  CAnimBlendAssociation *v10; // r0
  CPad *PadFromPlayer; // r0
  int v13; // r5
  float v14; // s16
  char v15; // r0

  v4 = *((_BYTE *)this + 16);
  if ( (v4 & 1) != 0 )
  {
    *((_DWORD *)a2 + 289) &= ~0x400u;
    if ( (*((_BYTE *)this + 16) & 2) == 0 )
    {
      Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
      *((_DWORD *)this + 2) = Association;
      if ( Association )
        CAnimBlendAssociation::SetCurrentTime(Association, 0.0);
      v9 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
      *((_DWORD *)this + 2) = v9;
      if ( v9 )
        CAnimBlendAssociation::SetCurrentTime(v9, 0.0);
      v10 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
      *((_DWORD *)this + 2) = v10;
      if ( v10 )
        CAnimBlendAssociation::SetCurrentTime(v10, 0.0);
      *((_DWORD *)this + 2) = 0;
    }
    return 1;
  }
  else
  {
    if ( (v4 & 2) == 0 && !*((_DWORD *)this + 2) )
    {
      v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, *((_DWORD *)this + 3));
      *((_DWORD *)this + 2) = v5;
      CAnimBlendAssociation::SetFinishCallback(
        v5,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleLand::FinishAnimLandCB,
        this);
      v4 = *((_BYTE *)this + 16);
    }
    if ( (v4 & 4) != 0 )
    {
      v6 = (float *)*((_DWORD *)a2 + 5);
      if ( v6[10] != 1.0 || *((float *)a2 + 21) != 0.0 || *((float *)a2 + 22) != 0.0 || *((float *)a2 + 23) != 0.0 )
      {
        v7 = *((float *)a2 + 343);
        *((_DWORD *)a2 + 21) = 0;
        *((_DWORD *)a2 + 22) = 0;
        *((_DWORD *)a2 + 23) = 0;
        if ( v6 )
          CMatrix::SetRotateZOnly((CMatrix *)v6, v7);
        else
          *((float *)a2 + 4) = v7;
      }
      *((_DWORD *)a2 + 289) |= 0x400u;
      if ( CPed::IsPlayer(a2) == 1 )
      {
        PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
        if ( *((_DWORD *)a2 + 276) == 7 && CPad::GetSprint(PadFromPlayer, 0) == 1 )
          *(_DWORD *)(*((_DWORD *)this + 2) + 36) = 0x40000000;
        if ( *((_DWORD *)this + 3) != 10 )
        {
          v13 = *((_DWORD *)this + 2);
          v14 = *(float *)(v13 + 36);
          *(float *)(v13 + 36) = v14 * COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
        }
      }
      v15 = *((_BYTE *)this + 16);
      *((_BYTE *)this + 16) = v15 & 0xFB;
      if ( (v15 & 2) != 0 )
        *((_BYTE *)this + 16) = v15 & 0xFA | 1;
    }
    return 0;
  }
}


// ============================================================

// Address: 0x52ce0c
// Original: _ZN15CTaskSimpleLand16FinishAnimLandCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleLand::FinishAnimLandCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleLand::FinishAnimLandCB(int this, CAnimBlendAssociation *a2, void *a3)
{
  char v3; // r2
  int v4; // r1
  bool v5; // zf

  if ( a2 )
  {
    v3 = *((_BYTE *)a2 + 16);
    *((_DWORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 16) = v3 | 1;
  }
  if ( this )
  {
    v4 = *(__int16 *)(this + 44);
    v5 = v4 == 119;
    if ( v4 != 119 )
      v5 = v4 == 10;
    if ( v5 )
      *(_DWORD *)(this + 28) = -1027080192;
  }
  return this;
}


// ============================================================

// Address: 0x52ce38
// Original: _ZN15CTaskSimpleLand15RightFootLandedEv
// Demangled: CTaskSimpleLand::RightFootLanded(void)
bool __fastcall CTaskSimpleLand::RightFootLanded(CTaskSimpleLand *this)
{
  int v1; // r1
  _BOOL4 result; // r0
  float v3; // s2

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    return 0;
  result = 0;
  v3 = *(float *)(v1 + 32);
  if ( v3 >= 0.1 )
    return (float)(v3 - *(float *)(v1 + 40)) < 0.1;
  return result;
}


// ============================================================

// Address: 0x52ce74
// Original: _ZN15CTaskSimpleLand14LeftFootLandedEv
// Demangled: CTaskSimpleLand::LeftFootLanded(void)
bool __fastcall CTaskSimpleLand::LeftFootLanded(CTaskSimpleLand *this)
{
  int v1; // r1
  _BOOL4 result; // r0
  float v3; // s2

  v1 = *((_DWORD *)this + 2);
  if ( !v1 )
    return 0;
  result = 0;
  v3 = *(float *)(v1 + 32);
  if ( v3 >= 0.2 )
    return (float)(v3 - *(float *)(v1 + 40)) < 0.2;
  return result;
}


// ============================================================

// Address: 0x532ea4
// Original: _ZNK15CTaskSimpleLand5CloneEv
// Demangled: CTaskSimpleLand::Clone(void)
int __fastcall CTaskSimpleLand::Clone(CTaskSimpleLand *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int v4; // r4
  int result; // r0
  char v6; // r3

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = v4;
  v6 = *(_BYTE *)(result + 16);
  *(_DWORD *)result = &off_66CB24;
  *(_BYTE *)(result + 16) = v6 & 0xF8 | (2 * (v4 == -1)) | 4;
  return result;
}


// ============================================================

// Address: 0x532ee4
// Original: _ZNK15CTaskSimpleLand11GetTaskTypeEv
// Demangled: CTaskSimpleLand::GetTaskType(void)
int __fastcall CTaskSimpleLand::GetTaskType(CTaskSimpleLand *this)
{
  return 242;
}


// ============================================================

// Address: 0x532ee8
// Original: _ZN15CTaskSimpleLand9SerializeEv
// Demangled: CTaskSimpleLand::Serialize(void)
void __fastcall CTaskSimpleLand::Serialize(CTaskSimpleLand *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleLand *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleLand *))(*(_DWORD *)this + 20))(this) == 242 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleLand *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(242, v7);
  }
}


// ============================================================
