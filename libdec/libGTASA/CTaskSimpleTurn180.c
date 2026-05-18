
// Address: 0x194274
// Original: j__ZN18CTaskSimpleTurn180C2Ev
// Demangled: CTaskSimpleTurn180::CTaskSimpleTurn180(void)
// attributes: thunk
void __fastcall CTaskSimpleTurn180::CTaskSimpleTurn180(CTaskSimpleTurn180 *this)
{
  _ZN18CTaskSimpleTurn180C2Ev(this);
}


// ============================================================

// Address: 0x4ecdb4
// Original: _ZN18CTaskSimpleTurn180C2Ev
// Demangled: CTaskSimpleTurn180::CTaskSimpleTurn180(void)
void __fastcall CTaskSimpleTurn180::CTaskSimpleTurn180(CTaskSimpleTurn180 *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66A018;
}


// ============================================================

// Address: 0x4ecdd4
// Original: _ZN18CTaskSimpleTurn180D2Ev
// Demangled: CTaskSimpleTurn180::~CTaskSimpleTurn180()
void __fastcall CTaskSimpleTurn180::~CTaskSimpleTurn180(CTaskSimpleTurn180 *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66A018;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4ece08
// Original: _ZN18CTaskSimpleTurn180D0Ev
// Demangled: CTaskSimpleTurn180::~CTaskSimpleTurn180()
void __fastcall CTaskSimpleTurn180::~CTaskSimpleTurn180(CTaskSimpleTurn180 *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66A018;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4ece40
// Original: _ZN18CTaskSimpleTurn18010ProcessPedEP4CPed
// Demangled: CTaskSimpleTurn180::ProcessPed(CPed *)
int __fastcall CTaskSimpleTurn180::ProcessPed(CTaskSimpleTurn180 *this, CPed *a2)
{
  int v4; // r0
  CAnimBlendAssociation *v5; // r0

  if ( *((_BYTE *)this + 8) )
  {
    CPed::RestoreHeadingRate(a2);
    return 1;
  }
  else
  {
    if ( !*((_DWORD *)this + 3) )
    {
      v4 = *((_DWORD *)a2 + 6);
      *((_DWORD *)a2 + 345) = 0;
      v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v4, 0, 0x88u);
      *((_DWORD *)this + 3) = v5;
      CAnimBlendAssociation::SetFinishCallback(
        v5,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleTurn180::FinishAnimTurn180CB,
        this);
    }
    return 0;
  }
}


// ============================================================

// Address: 0x4ece88
// Original: _ZN18CTaskSimpleTurn1809StartAnimEP4CPed
// Demangled: CTaskSimpleTurn180::StartAnim(CPed *)
int __fastcall CTaskSimpleTurn180::StartAnim(CTaskSimpleTurn180 *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x88u);
  *((_DWORD *)this + 3) = v3;
  return sub_18C20C(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleTurn180::FinishAnimTurn180CB, this);
}


// ============================================================

// Address: 0x4eceb4
// Original: _ZN18CTaskSimpleTurn18019FinishAnimTurn180CBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleTurn180::FinishAnimTurn180CB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleTurn180::FinishAnimTurn180CB(CTaskSimpleTurn180 *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_DWORD *)a2 + 3) = 0;
  result = 1;
  *((_BYTE *)a2 + 8) = 1;
  return result;
}


// ============================================================

// Address: 0x4f334c
// Original: _ZNK18CTaskSimpleTurn1805CloneEv
// Demangled: CTaskSimpleTurn180::Clone(void)
int __fastcall CTaskSimpleTurn180::Clone(CTaskSimpleTurn180 *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66A018;
  return result;
}


// ============================================================

// Address: 0x4f3370
// Original: _ZNK18CTaskSimpleTurn18011GetTaskTypeEv
// Demangled: CTaskSimpleTurn180::GetTaskType(void)
int __fastcall CTaskSimpleTurn180::GetTaskType(CTaskSimpleTurn180 *this)
{
  return 228;
}


// ============================================================

// Address: 0x4f3374
// Original: _ZN18CTaskSimpleTurn18013MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleTurn180::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleTurn180::MakeAbortable(CTaskSimpleTurn180 *this, CPed *a2, int a3, const CEvent *a4)
{
  return 0;
}


// ============================================================

// Address: 0x4f3378
// Original: _ZN18CTaskSimpleTurn1809SerializeEv
// Demangled: CTaskSimpleTurn180::Serialize(void)
int __fastcall CTaskSimpleTurn180::Serialize(CTaskSimpleTurn180 *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleTurn180 *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleTurn180 *))(*(_DWORD *)this + 20))(this);
  if ( result != 228 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleTurn180 *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(228, v6);
  }
  return result;
}


// ============================================================
