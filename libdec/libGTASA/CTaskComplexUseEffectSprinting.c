
// Address: 0x4f45b4
// Original: _ZN30CTaskComplexUseEffectSprintingD0Ev
// Demangled: CTaskComplexUseEffectSprinting::~CTaskComplexUseEffectSprinting()
void __fastcall CTaskComplexUseEffectSprinting::~CTaskComplexUseEffectSprinting(CTaskComplexUseEffectSprinting *this)
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

// Address: 0x4f4600
// Original: _ZNK30CTaskComplexUseEffectSprinting5CloneEv
// Demangled: CTaskComplexUseEffectSprinting::Clone(void)
int __fastcall CTaskComplexUseEffectSprinting::Clone(CTaskComplexUseEffectSprinting *this, unsigned int a2)
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
  *(_DWORD *)(v3 + 28) = 7;
  *(_DWORD *)v3 = &off_66A8C8;
  return v3;
}


// ============================================================

// Address: 0x4f4664
// Original: _ZNK30CTaskComplexUseEffectSprinting11GetTaskTypeEv
// Demangled: CTaskComplexUseEffectSprinting::GetTaskType(void)
int __fastcall CTaskComplexUseEffectSprinting::GetTaskType(CTaskComplexUseEffectSprinting *this)
{
  return 260;
}


// ============================================================
