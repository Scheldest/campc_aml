
// Address: 0x4ef44c
// Original: _ZN31CTaskComplexUseAttractorPartnerC2EbPK19CScriptedEffectPair
// Demangled: CTaskComplexUseAttractorPartner::CTaskComplexUseAttractorPartner(bool,CScriptedEffectPair const*)
void __fastcall CTaskComplexUseAttractorPartner::CTaskComplexUseAttractorPartner(
        CTaskComplexUseAttractorPartner *this,
        bool a2,
        const CScriptedEffectPair *a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 16) = a3;
  *(_DWORD *)v5 = &off_66A384;
}


// ============================================================

// Address: 0x4ef46c
// Original: _ZN31CTaskComplexUseAttractorPartnerD2Ev
// Demangled: CTaskComplexUseAttractorPartner::~CTaskComplexUseAttractorPartner()
// attributes: thunk
void __fastcall CTaskComplexUseAttractorPartner::~CTaskComplexUseAttractorPartner(
        CTaskComplexUseAttractorPartner *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ef470
// Original: _ZN31CTaskComplexUseAttractorPartnerD0Ev
// Demangled: CTaskComplexUseAttractorPartner::~CTaskComplexUseAttractorPartner()
void __fastcall CTaskComplexUseAttractorPartner::~CTaskComplexUseAttractorPartner(
        CTaskComplexUseAttractorPartner *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ef480
// Original: _ZN31CTaskComplexUseAttractorPartner17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractorPartner::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseAttractorPartner::CreateNextSubTask(CTaskComplexUseAttractorPartner *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4ef484
// Original: _ZN31CTaskComplexUseAttractorPartner18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractorPartner::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUseAttractorPartner::CreateFirstSubTask(CTaskComplexUseAttractorPartner *this, CPed *a2)
{
  unsigned int v2; // r1
  int *v3; // r2
  int v4; // r4
  CTaskComplex *v5; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD *)this + 4);
  v3 = (int *)(v2 + 8);
  if ( !*((_BYTE *)this + 12) )
    v3 = (int *)(v2 + 24);
  v4 = *v3;
  v5 = (CTaskComplex *)CTask::operator new((CTask *)&dword_1C, v2);
  CTaskComplex::CTaskComplex(v5);
  *result = &off_66A6A0;
  result[3] = v4;
  result[4] = 0;
  result[5] = -1;
  result[6] = 0;
  ++*((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v4 + 15);
  return result;
}


// ============================================================

// Address: 0x4ef4d8
// Original: _ZN31CTaskComplexUseAttractorPartner14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractorPartner::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseAttractorPartner::ControlSubTask(CTaskComplexUseAttractorPartner *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3af0
// Original: _ZNK31CTaskComplexUseAttractorPartner5CloneEv
// Demangled: CTaskComplexUseAttractorPartner::Clone(void)
int __fastcall CTaskComplexUseAttractorPartner::Clone(CTaskComplexUseAttractorPartner *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *((_DWORD *)this + 4);
  LOBYTE(this) = *((_BYTE *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 12) = (_BYTE)this;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)result = &off_66A384;
  return result;
}


// ============================================================

// Address: 0x4f3b18
// Original: _ZNK31CTaskComplexUseAttractorPartner11GetTaskTypeEv
// Demangled: CTaskComplexUseAttractorPartner::GetTaskType(void)
int __fastcall CTaskComplexUseAttractorPartner::GetTaskType(CTaskComplexUseAttractorPartner *this)
{
  return 247;
}


// ============================================================
