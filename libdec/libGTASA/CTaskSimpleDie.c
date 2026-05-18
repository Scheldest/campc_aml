
// Address: 0x1935ec
// Original: j__ZN14CTaskSimpleDieC2E12AssocGroupId11AnimationIdff
// Demangled: CTaskSimpleDie::CTaskSimpleDie(AssocGroupId,AnimationId,float,float)
// attributes: thunk
int __fastcall CTaskSimpleDie::CTaskSimpleDie(int a1, int a2, int a3, int a4, float a5)
{
  return _ZN14CTaskSimpleDieC2E12AssocGroupId11AnimationIdff(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x196bd0
// Original: j__ZN14CTaskSimpleDieC2EPKcS1_iff
// Demangled: CTaskSimpleDie::CTaskSimpleDie(char const*,char const*,int,float,float)
// attributes: thunk
void __fastcall CTaskSimpleDie::CTaskSimpleDie(
        CTaskSimpleDie *this,
        const char *a2,
        const char *a3,
        int a4,
        float a5,
        float a6)
{
  _ZN14CTaskSimpleDieC2EPKcS1_iff(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x198f34
// Original: j__ZN14CTaskSimpleDie10ProcessPedEP4CPed
// Demangled: CTaskSimpleDie::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDie::ProcessPed(CTaskSimpleDie *this, CPed *a2)
{
  return _ZN14CTaskSimpleDie10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19c654
// Original: j__ZN14CTaskSimpleDie9StartAnimEP4CPed
// Demangled: CTaskSimpleDie::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleDie::StartAnim(CTaskSimpleDie *this, CPed *a2)
{
  return _ZN14CTaskSimpleDie9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4eac4c
// Original: _ZN14CTaskSimpleDieC2E12AssocGroupId11AnimationIdff
// Demangled: CTaskSimpleDie::CTaskSimpleDie(AssocGroupId,AnimationId,float,float)
int __fastcall CTaskSimpleDie::CTaskSimpleDie(CTaskSimple *a1, int a2, int a3, int a4, float a5)
{
  int result; // r0
  char v9; // r3

  CTaskSimple::CTaskSimple(a1);
  v9 = *(_BYTE *)(result + 32);
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = a4;
  *(float *)(result + 28) = a5;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 32) = v9 & 0xFC;
  *(_DWORD *)result = &off_669CDC;
  return result;
}


// ============================================================

// Address: 0x4eac94
// Original: _ZN14CTaskSimpleDieC2EPKcS1_iff
// Demangled: CTaskSimpleDie::CTaskSimpleDie(char const*,char const*,int,float,float)
void __fastcall CTaskSimpleDie::CTaskSimpleDie(
        CTaskSimpleDie *this,
        const char *a2,
        CAnimManager *a3,
        int a4,
        float a5,
        float a6)
{
  char v9; // r3

  CTaskSimple::CTaskSimple(this);
  v9 = *((_BYTE *)this + 32);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 15;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = a4;
  *((float *)this + 6) = a5;
  *((float *)this + 7) = a6;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 32) = v9 & 0xFC;
  *(_DWORD *)this = &off_669CDC;
  CAnimManager::GetAnimationBlock(a3, (const char *)(v9 & 0xFC));
  *((_DWORD *)this + 4) = CAnimManager::GetAnimation();
}


// ============================================================

// Address: 0x4eacf8
// Original: _ZN14CTaskSimpleDieC2EP19CAnimBlendHierarchyiff
// Demangled: CTaskSimpleDie::CTaskSimpleDie(CAnimBlendHierarchy *,int,float,float)
void __fastcall CTaskSimpleDie::CTaskSimpleDie(
        CTaskSimpleDie *this,
        CAnimBlendHierarchy *a2,
        int a3,
        float a4,
        float a5)
{
  int v8; // r0
  char v9; // r1

  CTaskSimple::CTaskSimple(this);
  v9 = *(_BYTE *)(v8 + 32);
  *(_DWORD *)(v8 + 8) = 0;
  *(_DWORD *)(v8 + 12) = 15;
  *(_DWORD *)(v8 + 16) = a2;
  *(_DWORD *)(v8 + 20) = a3;
  *(float *)(v8 + 24) = a4;
  *(float *)(v8 + 28) = a5;
  *(_DWORD *)(v8 + 36) = 0;
  *(_BYTE *)(v8 + 32) = v9 & 0xFC;
  *(_DWORD *)v8 = &off_669CDC;
}


// ============================================================

// Address: 0x4ead80
// Original: _ZN14CTaskSimpleDieD0Ev
// Demangled: CTaskSimpleDie::~CTaskSimpleDie()
void __fastcall CTaskSimpleDie::~CTaskSimpleDie(CTaskSimpleDie *this)
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

// Address: 0x4eadb8
// Original: _ZN14CTaskSimpleDie13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDie::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDie::MakeAbortable(CTaskSimpleDie *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r1

  if ( a3 == 2 )
  {
    v5 = *((_DWORD *)this + 9);
    v6 = 1;
    if ( v5 )
      *(_DWORD *)(v5 + 28) = -998637568;
    CPed::SetPedState(a2);
    CPed::SetMoveState(a2, 1);
    (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
    v7 = *((_DWORD *)a2 + 289);
  }
  else
  {
    if ( !a4 || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 10 )
      return 0;
    v7 = *((_DWORD *)a2 + 289);
    v6 = 1;
  }
  v8 = *((_DWORD *)a2 + 291);
  v9 = *((_DWORD *)a2 + 292);
  v10 = *((_DWORD *)a2 + 290);
  *((_DWORD *)a2 + 289) = v7;
  *((_DWORD *)a2 + 290) = v10;
  *((_DWORD *)a2 + 291) = v8;
  *((_DWORD *)a2 + 292) = v9 & 0xFFFFFFDF;
  return v6;
}


// ============================================================

// Address: 0x4eae42
// Original: _ZN14CTaskSimpleDie10ProcessPedEP4CPed
// Demangled: CTaskSimpleDie::ProcessPed(CPed *)
int __fastcall CTaskSimpleDie::ProcessPed(CTaskSimpleDie *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  _BYTE v7[32]; // [sp+0h] [bp-20h] BYREF

  *((_DWORD *)a2 + 333) |= 8u;
  if ( *((unsigned __int8 *)this + 32) << 31 || *((_DWORD *)this + 3) == 191 )
  {
    v4 = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 292) |= 0x20u;
    if ( (*((_BYTE *)this + 32) & 2) == 0 )
    {
      v5 = *((_DWORD *)a2 + 17);
      if ( (v5 & 0x100) != 0
        || (v5 & 0x2000) != 0
        || (*((_DWORD *)a2 + 7) & 1) == 0
        || v4 << 31
        && (!*((_DWORD *)a2 + 347) || CPed::IsPlayer(a2) || (*(_BYTE *)(*((_DWORD *)a2 + 347) + 68) & 4) != 0) )
      {
        CEventDeath::CEventDeath((CEventDeath *)v7, *((_DWORD *)this + 3) == 140);
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v7, 0);
        *((_BYTE *)this + 32) |= 2u;
        *((_DWORD *)a2 + 292) &= ~0x20u;
        CEvent::~CEvent((CEvent *)v7);
      }
    }
  }
  else if ( !*((_DWORD *)this + 9) )
  {
    CTaskSimpleDie::StartAnim(this, a2);
    CPed::SetPedState(a2);
  }
  return 0;
}


// ============================================================

// Address: 0x4eaf14
// Original: _ZN14CTaskSimpleDie9StartAnimEP4CPed
// Demangled: CTaskSimpleDie::StartAnim(CPed *)
int __fastcall CTaskSimpleDie::StartAnim(CTaskSimpleDie *this, CPed *a2)
{
  CAnimBlendAssociation *v4; // r0
  float v5; // s0
  int result; // r0

  if ( *((_DWORD *)this + 4) )
    v4 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation();
  else
    v4 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                    *((_DWORD *)a2 + 6),
                                    *((_DWORD *)this + 2),
                                    *((_DWORD *)this + 3));
  *((_DWORD *)this + 9) = v4;
  CAnimBlendAssociation::SetFinishCallback(
    v4,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleDie::FinishAnimDieCB,
    this);
  *(_WORD *)(*((_DWORD *)this + 9) + 46) &= ~8u;
  v5 = *((float *)this + 7);
  if ( v5 > 0.0 )
    *(float *)(*((_DWORD *)this + 9) + 36) = v5;
  CPed::ClearAll(a2);
  *((_DWORD *)a2 + 337) = 0;
  CPed::StopNonPartialAnims(a2);
  result = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)a2 + 470) = CTimer::m_snTimeInMilliseconds;
  return result;
}


// ============================================================

// Address: 0x4eaf8c
// Original: _ZN14CTaskSimpleDie15FinishAnimDieCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleDie::FinishAnimDieCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleDie::FinishAnimDieCB(CTaskSimpleDie *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((unsigned __int8 *)a2 + 32);
  *((_DWORD *)a2 + 9) = 0;
  result = v3 | 1;
  *((_BYTE *)a2 + 32) = result;
  return result;
}


// ============================================================

// Address: 0x4f25c8
// Original: _ZNK14CTaskSimpleDie5CloneEv
// Demangled: CTaskSimpleDie::Clone(void)
int __fastcall CTaskSimpleDie::Clone(CTaskSimpleDie *this, unsigned int a2)
{
  int v3; // r5
  CTaskSimple *v4; // r0
  int v5; // s16
  int v6; // s18
  int v7; // r5
  int v8; // r8
  int result; // r0
  int v10; // r4
  int v11; // r6
  __int64 v12; // kr08_8
  char v13; // r2

  v3 = *((_DWORD *)this + 4);
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    v7 = *((_DWORD *)this + 5);
    v8 = *((_DWORD *)this + 4);
    CTaskSimple::CTaskSimple(v4);
    v10 = 15;
    v11 = 0;
  }
  else
  {
    v12 = *((_QWORD *)this + 1);
    v10 = *((_DWORD *)this + 3);
    v11 = v12;
    CTaskSimple::CTaskSimple(v4);
    v8 = 0;
    v7 = 0;
  }
  *(_DWORD *)(result + 8) = v11;
  *(_DWORD *)(result + 12) = v10;
  *(_DWORD *)(result + 16) = v8;
  *(_DWORD *)(result + 20) = v7;
  *(_DWORD *)(result + 24) = v5;
  *(_DWORD *)(result + 28) = v6;
  v13 = *(_BYTE *)(result + 32);
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 32) = v13 & 0xFC;
  *(_DWORD *)result = &off_669CDC;
  return result;
}


// ============================================================

// Address: 0x4f2644
// Original: _ZNK14CTaskSimpleDie11GetTaskTypeEv
// Demangled: CTaskSimpleDie::GetTaskType(void)
int __fastcall CTaskSimpleDie::GetTaskType(CTaskSimpleDie *this)
{
  return 212;
}


// ============================================================
