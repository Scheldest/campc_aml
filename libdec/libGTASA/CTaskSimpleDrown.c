
// Address: 0x19bc64
// Original: j__ZN16CTaskSimpleDrownC2Ev
// Demangled: CTaskSimpleDrown::CTaskSimpleDrown(void)
// attributes: thunk
void __fastcall CTaskSimpleDrown::CTaskSimpleDrown(CTaskSimpleDrown *this)
{
  _ZN16CTaskSimpleDrownC2Ev(this);
}


// ============================================================

// Address: 0x4eb404
// Original: _ZN16CTaskSimpleDrownC2Ev
// Demangled: CTaskSimpleDrown::CTaskSimpleDrown(void)
void __fastcall CTaskSimpleDrown::CTaskSimpleDrown(CTaskSimpleDrown *this)
{
  int v1; // r0
  char v2; // r1

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 140;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 24) = 1082130432;
  *(_DWORD *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  v2 = *(_BYTE *)(v1 + 32);
  *(_BYTE *)(v1 + 40) = 1;
  *(_BYTE *)(v1 + 32) = v2 & 0xFC;
  *(_DWORD *)v1 = &off_669D80;
}


// ============================================================

// Address: 0x4eb44c
// Original: _ZN16CTaskSimpleDrownD0Ev
// Demangled: CTaskSimpleDrown::~CTaskSimpleDrown()
void __fastcall CTaskSimpleDrown::~CTaskSimpleDrown(CTaskSimpleDrown *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 9);
  *(_DWORD *)this = &off_669CDC;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4eb484
// Original: _ZN16CTaskSimpleDrown10ProcessPedEP4CPed
// Demangled: CTaskSimpleDrown::ProcessPed(CPed *)
int __fastcall CTaskSimpleDrown::ProcessPed(CTaskSimpleDrown *this, CPed *a2)
{
  float v4; // r2

  if ( *((_BYTE *)this + 40) )
  {
    CPed::SetPedState(a2);
    *((_DWORD *)a2 + 289) &= ~0x200u;
    if ( (CPed *)FindPlayerPed(-1) == a2 )
      CStats::IncrementStat((CStats *)((char *)&dword_A8 + 2), 0, v4);
    *((_BYTE *)this + 40) = 0;
  }
  CTaskSimpleDie::ProcessPed(this, a2);
  return 0;
}


// ============================================================

// Address: 0x4f2838
// Original: _ZNK16CTaskSimpleDrown5CloneEv
// Demangled: CTaskSimpleDrown::Clone(void)
int __fastcall CTaskSimpleDrown::Clone(CTaskSimpleDrown *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0
  char v4; // r1

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 140;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 1082130432;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = 0;
  v4 = *(_BYTE *)(result + 32);
  *(_BYTE *)(result + 40) = 1;
  *(_BYTE *)(result + 32) = v4 & 0xFC;
  *(_DWORD *)result = &off_669D80;
  return result;
}


// ============================================================

// Address: 0x4f2884
// Original: _ZNK16CTaskSimpleDrown11GetTaskTypeEv
// Demangled: CTaskSimpleDrown::GetTaskType(void)
int __fastcall CTaskSimpleDrown::GetTaskType(CTaskSimpleDrown *this)
{
  return 213;
}


// ============================================================

// Address: 0x4f2888
// Original: _ZN16CTaskSimpleDrown9SerializeEv
// Demangled: CTaskSimpleDrown::Serialize(void)
int __fastcall CTaskSimpleDrown::Serialize(CTaskSimpleDrown *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDrown *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleDrown *))(*(_DWORD *)this + 20))(this);
  if ( result != 213 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleDrown *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(213, v6);
  }
  return result;
}


// ============================================================
