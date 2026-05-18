
// Address: 0x4f44fc
// Original: _ZN28CTaskComplexUseEffectRunningD0Ev
// Demangled: CTaskComplexUseEffectRunning::~CTaskComplexUseEffectRunning()
void __fastcall CTaskComplexUseEffectRunning::~CTaskComplexUseEffectRunning(CTaskComplexUseEffectRunning *this)
{
  int v2; // r1
  bool v3; // zf
  CPedAttractorManager *PedAttractorManager; // r0
  CEntity *v5; // r0
  void *v6; // r0

  v2 = *((_DWORD *)this + 6);
  v3 = v2 == 0;
  *(_DWORD *)this = &off_66A100;
  if ( v2 )
    v3 = *((_DWORD *)this + 5) == 0;
  if ( !v3 )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::DeRegisterPed(PedAttractorManager, *((CPed **)this + 6), *((CPedAttractor **)this + 5));
  }
  v5 = (CEntity *)*((_DWORD *)this + 4);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x4f4548
// Original: _ZNK28CTaskComplexUseEffectRunning5CloneEv
// Demangled: CTaskComplexUseEffectRunning::Clone(void)
int __fastcall CTaskComplexUseEffectRunning::Clone(CTaskComplexUseEffectRunning *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 4;
  *(_BYTE *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66A100;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)(v3 + 16));
  *(_DWORD *)(v3 + 28) = 6;
  *(_DWORD *)v3 = &off_66A88C;
  return v3;
}


// ============================================================

// Address: 0x4f45ac
// Original: _ZNK28CTaskComplexUseEffectRunning11GetTaskTypeEv
// Demangled: CTaskComplexUseEffectRunning::GetTaskType(void)
int __fastcall CTaskComplexUseEffectRunning::GetTaskType(CTaskComplexUseEffectRunning *this)
{
  return 259;
}


// ============================================================
