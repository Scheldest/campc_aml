
// Address: 0x4d72ac
// Original: _ZN30CTaskSimpleRunAnimLoopedMiddleC2E12AssocGroupId11AnimationIdfffib
// Demangled: CTaskSimpleRunAnimLoopedMiddle::CTaskSimpleRunAnimLoopedMiddle(AssocGroupId,AnimationId,float,float,float,int,bool)
int __fastcall CTaskSimpleRunAnimLoopedMiddle::CTaskSimpleRunAnimLoopedMiddle(
        CTaskSimple *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        char a8)
{
  int result; // r0
  char v12; // r2

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 104) = 0;
  v12 = *(_BYTE *)(result + 12);
  *(_WORD *)(result + 108) = 424;
  *(float *)(result + 76) = a5;
  *(float *)(result + 80) = a6;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = a4;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 92) = a7;
  *(_DWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 100) = 0;
  *(_BYTE *)(result + 12) = v12 & 0xF8 | (4 * a8);
  *(_DWORD *)result = &off_669568;
  return result;
}


// ============================================================

// Address: 0x4d731c
// Original: _ZN30CTaskSimpleRunAnimLoopedMiddleC2EPKcS1_ifffib
// Demangled: CTaskSimpleRunAnimLoopedMiddle::CTaskSimpleRunAnimLoopedMiddle(char const*,char const*,int,float,float,float,int,bool)
void __fastcall CTaskSimpleRunAnimLoopedMiddle::CTaskSimpleRunAnimLoopedMiddle(
        CTaskSimpleRunAnimLoopedMiddle *this,
        const char *a2,
        const char *a3,
        int a4,
        float a5,
        float a6,
        float a7,
        int a8,
        bool a9)
{
  char v13; // r3
  const char *v14; // r1

  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = a4;
  *((_WORD *)this + 52) = 0;
  v13 = *((_BYTE *)this + 12);
  *((_WORD *)this + 54) = 424;
  *((float *)this + 18) = a5;
  *((float *)this + 19) = a6;
  *((float *)this + 20) = a7;
  *(_QWORD *)((char *)this + 92) = (unsigned int)a8;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 12) = v13 & 0xF8 | (4 * a9);
  *(_DWORD *)this = &off_669568;
  strcpy((char *)this + 28, a2);
  strcpy((char *)this + 52, a3);
  CAnimManager::GetAnimationBlock((CTaskSimpleRunAnimLoopedMiddle *)((char *)this + 52), v14);
  *((_DWORD *)this + 17) = CAnimManager::GetAnimation();
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 191;
}


// ============================================================

// Address: 0x4d73bc
// Original: _ZN30CTaskSimpleRunAnimLoopedMiddle10ProcessPedEP4CPed
// Demangled: CTaskSimpleRunAnimLoopedMiddle::ProcessPed(CPed *)
int __fastcall CTaskSimpleRunAnimLoopedMiddle::ProcessPed(CTaskSimpleRunAnimLoopedMiddle *this, CPed *a2)
{
  CAnimBlendAssociation *v5; // r0
  int v6; // r0
  __int64 v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  float *v10; // r0
  float v11; // s0
  float v12; // s2

  if ( *((unsigned __int8 *)this + 12) << 31 )
    return 1;
  if ( *((_DWORD *)this + 2) && !RpAnimBlendClumpGetAssociation() )
  {
    if ( !*((_BYTE *)this + 104)
      || (!*((_BYTE *)this + 105)
        ? (v9 = *((_DWORD *)this + 24), v8 = CTimer::m_snTimeInMilliseconds)
        : (v8 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 105) = 0, *((_DWORD *)this + 24) = v8, v9 = v8),
          v9 + *((_DWORD *)this + 25) > v8) )
    {
      v10 = (float *)*((_DWORD *)this + 2);
      if ( v10 )
      {
        v11 = *((float *)this + 22);
        v12 = v10[8];
        if ( v12 > v11 && (float)(v12 - v10[10]) <= v11 )
        {
          CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)v10, *((float *)this + 21));
          *(_WORD *)(*((_DWORD *)this + 2) + 46) |= 1u;
        }
      }
    }
    return 0;
  }
  else
  {
    if ( *((_DWORD *)this + 17) )
      v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation();
    else
      v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                      *((_DWORD *)a2 + 6),
                                      *((_DWORD *)this + 4),
                                      *((_DWORD *)this + 5));
    *((_DWORD *)this + 2) = v5;
    CAnimBlendAssociation::SetFinishCallback(
      v5,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
      this);
    v6 = *((_DWORD *)this + 2);
    *((float *)this + 21) = *((float *)this + 19) * *(float *)(*(_DWORD *)(v6 + 20) + 16);
    HIDWORD(v7) = *((_DWORD *)this + 23);
    *((float *)this + 22) = *((float *)this + 20) * *(float *)(*(_DWORD *)(v6 + 20) + 16);
    LODWORD(v7) = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 104) = 1;
    *((_QWORD *)this + 12) = v7;
    return 0;
  }
}


// ============================================================

// Address: 0x4d74c8
// Original: _ZN30CTaskSimpleRunAnimLoopedMiddle9StartAnimEP4CPed
// Demangled: CTaskSimpleRunAnimLoopedMiddle::StartAnim(CPed *)
int __fastcall CTaskSimpleRunAnimLoopedMiddle::StartAnim(CTaskSimpleRunAnimLoopedMiddle *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  if ( *((_DWORD *)this + 17) )
    v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation();
  else
    v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                    *((_DWORD *)a2 + 6),
                                    *((_DWORD *)this + 4),
                                    *((_DWORD *)this + 5));
  *((_DWORD *)this + 2) = v3;
  return sub_18C20C(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB, this);
}


// ============================================================

// Address: 0x4d82ac
// Original: _ZN30CTaskSimpleRunAnimLoopedMiddleD0Ev
// Demangled: CTaskSimpleRunAnimLoopedMiddle::~CTaskSimpleRunAnimLoopedMiddle()
void __fastcall CTaskSimpleRunAnimLoopedMiddle::~CTaskSimpleRunAnimLoopedMiddle(CTaskSimpleRunAnimLoopedMiddle *this)
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

// Address: 0x4d831c
// Original: _ZNK30CTaskSimpleRunAnimLoopedMiddle5CloneEv
// Demangled: CTaskSimpleRunAnimLoopedMiddle::Clone(void)
CTaskSimple *__fastcall CTaskSimpleRunAnimLoopedMiddle::Clone(CTaskSimpleRunAnimLoopedMiddle *this, unsigned int a2)
{
  int v3; // r6
  CTaskSimple *v4; // r0
  CTaskSimple *v5; // r4
  int v6; // r10
  __int64 v7; // kr00_8
  int v8; // r8
  int v9; // r6
  char v10; // r1
  const char *v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r9
  int v15; // r6
  __int64 v16; // r10
  __int64 v17; // kr08_8
  char v18; // r2
  char v20; // [sp+0h] [bp-20h]

  v3 = *((_DWORD *)this + 17);
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&dword_70, a2);
  v5 = v4;
  v20 = *((_BYTE *)this + 12);
  if ( v3 )
  {
    v6 = *((_DWORD *)this + 23);
    v7 = *((_QWORD *)this + 9);
    v8 = *((_DWORD *)this + 20);
    v9 = *((_DWORD *)this + 6);
    CTaskSimple::CTaskSimple(v4);
    *((_DWORD *)v5 + 6) = v9;
    *((_DWORD *)v5 + 18) = v7;
    *((_WORD *)v5 + 54) = 424;
    *((_DWORD *)v5 + 2) = 0;
    *((_WORD *)v5 + 52) = 0;
    *((_DWORD *)v5 + 19) = HIDWORD(v7);
    *((_DWORD *)v5 + 20) = v8;
    *((_DWORD *)v5 + 23) = v6;
    *((_DWORD *)v5 + 24) = 0;
    *((_DWORD *)v5 + 25) = 0;
    v10 = *((_BYTE *)v5 + 12);
    *(_DWORD *)v5 = &off_669568;
    *((_BYTE *)v5 + 12) = v20 & 4 | v10 & 0xF8;
    strcpy((char *)v5 + 28, (const char *)this + 28);
    strcpy((char *)v5 + 52, (const char *)this + 52);
    CAnimManager::GetAnimationBlock((CTaskSimple *)((char *)v5 + 52), v11);
    *((_DWORD *)v5 + 17) = CAnimManager::GetAnimation();
    v12 = 191;
    *((_DWORD *)v5 + 4) = 0;
    v13 = 20;
  }
  else
  {
    v14 = *((_DWORD *)this + 23);
    v15 = *((_DWORD *)this + 18);
    v16 = *(_QWORD *)((char *)this + 76);
    v17 = *((_QWORD *)this + 2);
    CTaskSimple::CTaskSimple(v4);
    v12 = 0;
    *((_QWORD *)v5 + 2) = v17;
    *((_DWORD *)v5 + 2) = 0;
    *((_DWORD *)v5 + 18) = v15;
    *((_WORD *)v5 + 52) = 0;
    *((_WORD *)v5 + 54) = 424;
    *(_QWORD *)((char *)v5 + 76) = v16;
    *((_DWORD *)v5 + 17) = 0;
    *((_DWORD *)v5 + 23) = v14;
    *((_DWORD *)v5 + 24) = 0;
    *((_DWORD *)v5 + 25) = 0;
    v18 = *((_BYTE *)v5 + 12);
    *(_DWORD *)v5 = &off_669568;
    *((_BYTE *)v5 + 12) = v20 & 4 | v18 & 0xF8;
    v13 = 24;
  }
  *(_DWORD *)((char *)v5 + v13) = v12;
  return v5;
}


// ============================================================

// Address: 0x4d8434
// Original: _ZNK30CTaskSimpleRunAnimLoopedMiddle11GetTaskTypeEv
// Demangled: CTaskSimpleRunAnimLoopedMiddle::GetTaskType(void)
int __fastcall CTaskSimpleRunAnimLoopedMiddle::GetTaskType(CTaskSimpleRunAnimLoopedMiddle *this)
{
  return *((unsigned __int16 *)this + 54);
}


// ============================================================
