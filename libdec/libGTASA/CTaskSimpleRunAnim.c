
// Address: 0x191ab0
// Original: j__ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfiPKcb
// Demangled: CTaskSimpleRunAnim::CTaskSimpleRunAnim(AssocGroupId,AnimationId,float,int,char const*,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunAnim::CTaskSimpleRunAnim(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return _ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfiPKcb(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1989b8
// Original: j__ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfiPKcb_0
// Demangled: CTaskSimpleRunAnim::CTaskSimpleRunAnim(AssocGroupId,AnimationId,float,int,char const*,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunAnim::CTaskSimpleRunAnim(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return _ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfiPKcb(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19ee04
// Original: j__ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfb
// Demangled: CTaskSimpleRunAnim::CTaskSimpleRunAnim(AssocGroupId,AnimationId,float,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunAnim::CTaskSimpleRunAnim(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfb(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x357694
// Original: _ZNK18CTaskSimpleRunAnim11GetTaskTypeEv
// Demangled: CTaskSimpleRunAnim::GetTaskType(void)
int __fastcall CTaskSimpleRunAnim::GetTaskType(CTaskSimpleRunAnim *this)
{
  return *((unsigned __int16 *)this + 14);
}


// ============================================================

// Address: 0x4d6c38
// Original: _ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfb
// Demangled: CTaskSimpleRunAnim::CTaskSimpleRunAnim(AssocGroupId,AnimationId,float,bool)
int __fastcall CTaskSimpleRunAnim::CTaskSimpleRunAnim(CTaskSimple *a1, int a2, int a3, int a4, char a5)
{
  int result; // r0
  char v9; // r3

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = a4;
  v9 = *(_BYTE *)(result + 12) & 0xF8;
  *(_WORD *)(result + 28) = 400;
  *(_BYTE *)(result + 12) = v9 | (4 * a5);
  *(_DWORD *)result = &off_6694CC;
  return result;
}


// ============================================================

// Address: 0x4d6c7c
// Original: _ZN18CTaskSimpleRunAnimC2E12AssocGroupId11AnimationIdfiPKcb
// Demangled: CTaskSimpleRunAnim::CTaskSimpleRunAnim(AssocGroupId,AnimationId,float,int,char const*,bool)
int __fastcall CTaskSimpleRunAnim::CTaskSimpleRunAnim(
        CTaskSimple *a1,
        int a2,
        int a3,
        int a4,
        __int16 a5,
        int a6,
        char a7)
{
  int result; // r0
  char v11; // r2

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  v11 = *(_BYTE *)(result + 12) & 0xF8;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = a4;
  *(_WORD *)(result + 28) = a5;
  *(_BYTE *)(result + 12) = v11 | (4 * a7);
  *(_DWORD *)result = &off_6694CC;
  return result;
}


// ============================================================

// Address: 0x4d6cc0
// Original: _ZN18CTaskSimpleRunAnim10ProcessPedEP4CPed
// Demangled: CTaskSimpleRunAnim::ProcessPed(CPed *)
int __fastcall CTaskSimpleRunAnim::ProcessPed(CTaskSimpleRunAnim *this, CPed *a2)
{
  CAnimBlendAssociation *v5; // r0

  if ( *((unsigned __int8 *)this + 12) << 31 )
    return 1;
  if ( !*((_DWORD *)this + 2) && !RpAnimBlendClumpGetAssociation() )
  {
    v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                    *((_DWORD *)a2 + 6),
                                    *((_DWORD *)this + 4),
                                    *((_DWORD *)this + 5));
    *((_DWORD *)this + 2) = v5;
    CAnimBlendAssociation::SetFinishCallback(
      v5,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
      this);
  }
  return *((_BYTE *)this + 12) & 1;
}


// ============================================================

// Address: 0x4d6d08
// Original: _ZN18CTaskSimpleRunAnim9StartAnimEP4CPed
// Demangled: CTaskSimpleRunAnim::StartAnim(CPed *)
int __fastcall CTaskSimpleRunAnim::StartAnim(CTaskSimpleRunAnim *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                  *((_DWORD *)a2 + 6),
                                  *((_DWORD *)this + 4),
                                  *((_DWORD *)this + 5));
  *((_DWORD *)this + 2) = v3;
  return sub_18C20C(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB, this);
}


// ============================================================

// Address: 0x4d7ffc
// Original: _ZN18CTaskSimpleRunAnimD0Ev
// Demangled: CTaskSimpleRunAnim::~CTaskSimpleRunAnim()
void __fastcall CTaskSimpleRunAnim::~CTaskSimpleRunAnim(CTaskSimpleRunAnim *this)
{
  CAnimBlendAssociation *v2; // r0
  int v3; // r0
  void *v4; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_669498;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 4u;
    if ( (*((_BYTE *)this + 12) & 4) == 0 )
    {
      v3 = *((_DWORD *)this + 2);
      if ( *(float *)(v3 + 24) > 0.0 && *(float *)(v3 + 28) >= 0.0 )
        *(_DWORD *)(v3 + 28) = -1065353216;
    }
    *((_DWORD *)this + 2) = 0;
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4d806c
// Original: _ZNK18CTaskSimpleRunAnim5CloneEv
// Demangled: CTaskSimpleRunAnim::Clone(void)
int __fastcall CTaskSimpleRunAnim::Clone(CTaskSimpleRunAnim *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  char v4; // r8
  __int64 v5; // kr00_8
  int v6; // r4
  int result; // r0
  char v8; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_QWORD *)this + 2);
  v6 = *((_DWORD *)this + 6);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = v5;
  *(_DWORD *)(result + 24) = v6;
  *(_WORD *)(result + 28) = 400;
  v8 = *(_BYTE *)(result + 12);
  *(_DWORD *)result = &off_6694CC;
  *(_BYTE *)(result + 12) = v4 & 4 | v8 & 0xF8;
  return result;
}


// ============================================================
