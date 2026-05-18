
// Address: 0x4ef4dc
// Original: _ZN32CTaskComplexUseScriptedAttractorC2EPK13CPedAttractor
// Demangled: CTaskComplexUseScriptedAttractor::CTaskComplexUseScriptedAttractor(CPedAttractor const*)
void __fastcall CTaskComplexUseScriptedAttractor::CTaskComplexUseScriptedAttractor(
        CTaskComplexUseScriptedAttractor *this,
        const CPedAttractor *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66A3C0;
}


// ============================================================

// Address: 0x4ef4f8
// Original: _ZN32CTaskComplexUseScriptedAttractorD2Ev
// Demangled: CTaskComplexUseScriptedAttractor::~CTaskComplexUseScriptedAttractor()
// attributes: thunk
void __fastcall CTaskComplexUseScriptedAttractor::~CTaskComplexUseScriptedAttractor(
        CTaskComplexUseScriptedAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4ef4fc
// Original: _ZN32CTaskComplexUseScriptedAttractorD0Ev
// Demangled: CTaskComplexUseScriptedAttractor::~CTaskComplexUseScriptedAttractor()
void __fastcall CTaskComplexUseScriptedAttractor::~CTaskComplexUseScriptedAttractor(
        CTaskComplexUseScriptedAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4ef50c
// Original: _ZN32CTaskComplexUseScriptedAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseScriptedAttractor::CreateNextSubTask(CTaskComplexUseScriptedAttractor *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4ef510
// Original: _ZN32CTaskComplexUseScriptedAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedAttractor::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexUseScriptedAttractor::CreateFirstSubTask(CTaskComplexUseScriptedAttractor *this, CPed *a2)
{
  int v2; // r1
  int v3; // r0
  int v4; // r1
  int v6; // r4
  CTaskComplex *v7; // r0
  _DWORD *v8; // r0

  v2 = *(_DWORD *)(*((_DWORD *)this + 3) + 4) - (_DWORD)CScripted2dEffects::ms_effects + 64;
  v3 = 0;
  v4 = v2 - 64;
  if ( v4 )
  {
    while ( v3++ < 63 )
    {
      v4 -= 64;
      if ( !v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = CScripted2dEffects::ms_effectSequenceTaskIDs[v3];
    v7 = (CTaskComplex *)CTask::operator new(
                           (CTask *)&dword_1C,
                           (unsigned int)CScripted2dEffects::ms_effectSequenceTaskIDs);
    CTaskComplex::CTaskComplex(v7);
    *v8 = &off_66A6A0;
    v8[3] = v6;
    v8[4] = 0;
    v8[5] = -1;
    v8[6] = 0;
    ++*((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v6 + 15);
  }
}


// ============================================================

// Address: 0x4ef588
// Original: _ZN32CTaskComplexUseScriptedAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseScriptedAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseScriptedAttractor::ControlSubTask(CTaskComplexUseScriptedAttractor *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3b1c
// Original: _ZNK32CTaskComplexUseScriptedAttractor5CloneEv
// Demangled: CTaskComplexUseScriptedAttractor::Clone(void)
_DWORD *__fastcall CTaskComplexUseScriptedAttractor::Clone(CTaskComplexUseScriptedAttractor *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66A3C0;
  return result;
}


// ============================================================

// Address: 0x4f3b40
// Original: _ZNK32CTaskComplexUseScriptedAttractor11GetTaskTypeEv
// Demangled: CTaskComplexUseScriptedAttractor::GetTaskType(void)
int __fastcall CTaskComplexUseScriptedAttractor::GetTaskType(CTaskComplexUseScriptedAttractor *this)
{
  return 249;
}


// ============================================================
