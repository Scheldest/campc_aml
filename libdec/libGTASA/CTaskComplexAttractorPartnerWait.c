
// Address: 0x4ef3bc
// Original: _ZN32CTaskComplexAttractorPartnerWaitC2EbPK19CScriptedEffectPair
// Demangled: CTaskComplexAttractorPartnerWait::CTaskComplexAttractorPartnerWait(bool,CScriptedEffectPair const*)
void __fastcall CTaskComplexAttractorPartnerWait::CTaskComplexAttractorPartnerWait(
        CTaskComplexAttractorPartnerWait *this,
        bool a2,
        const CScriptedEffectPair *a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 16) = a3;
  *(_DWORD *)v5 = &off_66A348;
}


// ============================================================

// Address: 0x4ef3dc
// Original: _ZN32CTaskComplexAttractorPartnerWaitD2Ev
// Demangled: CTaskComplexAttractorPartnerWait::~CTaskComplexAttractorPartnerWait()
// attributes: thunk
void __fastcall CTaskComplexAttractorPartnerWait::~CTaskComplexAttractorPartnerWait(
        CTaskComplexAttractorPartnerWait *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ef3e0
// Original: _ZN32CTaskComplexAttractorPartnerWaitD0Ev
// Demangled: CTaskComplexAttractorPartnerWait::~CTaskComplexAttractorPartnerWait()
void __fastcall CTaskComplexAttractorPartnerWait::~CTaskComplexAttractorPartnerWait(
        CTaskComplexAttractorPartnerWait *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ef3f0
// Original: _ZN32CTaskComplexAttractorPartnerWait17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexAttractorPartnerWait::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexAttractorPartnerWait::CreateNextSubTask(CTaskComplexAttractorPartnerWait *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4ef3f4
// Original: _ZN32CTaskComplexAttractorPartnerWait18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexAttractorPartnerWait::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexAttractorPartnerWait::CreateFirstSubTask(
        CTaskComplexAttractorPartnerWait *this,
        CPed *a2)
{
  unsigned int v2; // r1
  int *v3; // r2
  int v4; // r4
  CTaskComplex *v5; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD *)this + 4);
  v3 = (int *)(v2 + 4);
  if ( !*((_BYTE *)this + 12) )
    v3 = (int *)(v2 + 20);
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

// Address: 0x4ef448
// Original: _ZN32CTaskComplexAttractorPartnerWait14ControlSubTaskEP4CPed
// Demangled: CTaskComplexAttractorPartnerWait::ControlSubTask(CPed *)
int __fastcall CTaskComplexAttractorPartnerWait::ControlSubTask(CTaskComplexAttractorPartnerWait *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3ac4
// Original: _ZNK32CTaskComplexAttractorPartnerWait5CloneEv
// Demangled: CTaskComplexAttractorPartnerWait::Clone(void)
int __fastcall CTaskComplexAttractorPartnerWait::Clone(CTaskComplexAttractorPartnerWait *this, unsigned int a2)
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
  *(_DWORD *)result = &off_66A348;
  return result;
}


// ============================================================

// Address: 0x4f3aec
// Original: _ZNK32CTaskComplexAttractorPartnerWait11GetTaskTypeEv
// Demangled: CTaskComplexAttractorPartnerWait::GetTaskType(void)
int __fastcall CTaskComplexAttractorPartnerWait::GetTaskType(CTaskComplexAttractorPartnerWait *this)
{
  return 248;
}


// ============================================================
