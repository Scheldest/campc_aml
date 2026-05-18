
// Address: 0x199e50
// Original: j__ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffib
// Demangled: CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(AssocGroupId,AnimationId,float,float,int,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7)
{
  return _ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffib(a1, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19b604
// Original: j__ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffiiPKcb
// Demangled: CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(AssocGroupId,AnimationId,float,float,int,int,char const*,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return _ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffiiPKcb(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19d100
// Original: j__ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffiiPKcb_0
// Demangled: CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(AssocGroupId,AnimationId,float,float,int,int,char const*,bool)
// attributes: thunk
int __fastcall CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  return _ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffiiPKcb(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x357768
// Original: _ZNK23CTaskSimpleRunTimedAnim11GetTaskTypeEv
// Demangled: CTaskSimpleRunTimedAnim::GetTaskType(void)
int __fastcall CTaskSimpleRunTimedAnim::GetTaskType(CTaskSimpleRunTimedAnim *this)
{
  return *((unsigned __int16 *)this + 24);
}


// ============================================================

// Address: 0x4d7120
// Original: _ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffib
// Demangled: CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(AssocGroupId,AnimationId,float,float,int,bool)
int __fastcall CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        CTaskSimple *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        char a7)
{
  int result; // r0
  char v11; // r3

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = a4;
  *(float *)(result + 28) = a5;
  *(_DWORD *)(result + 32) = a6;
  *(_WORD *)(result + 44) = 0;
  v11 = *(_BYTE *)(result + 12);
  *(_WORD *)(result + 48) = 402;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 12) = v11 & 0xF8 | (4 * a7);
  *(_DWORD *)result = &off_669534;
  return result;
}


// ============================================================

// Address: 0x4d7178
// Original: _ZN23CTaskSimpleRunTimedAnimC2E12AssocGroupId11AnimationIdffiiPKcb
// Demangled: CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(AssocGroupId,AnimationId,float,float,int,int,char const*,bool)
int __fastcall CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        CTaskSimple *a1,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        __int16 a7,
        int a8,
        char a9)
{
  int result; // r0
  char v13; // r2

  CTaskSimple::CTaskSimple(a1);
  *(_DWORD *)(result + 8) = 0;
  v13 = *(_BYTE *)(result + 12);
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 20) = a3;
  *(_DWORD *)(result + 24) = a4;
  *(float *)(result + 28) = a5;
  *(_DWORD *)(result + 32) = a6;
  *(_WORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = a7;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 12) = v13 & 0xF8 | (4 * a9);
  *(_DWORD *)result = &off_669534;
  return result;
}


// ============================================================

// Address: 0x4d71d4
// Original: _ZN23CTaskSimpleRunTimedAnim10ProcessPedEP4CPed
// Demangled: CTaskSimpleRunTimedAnim::ProcessPed(CPed *)
int __fastcall CTaskSimpleRunTimedAnim::ProcessPed(CTaskSimpleRunTimedAnim *this, CPed *a2)
{
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r1
  unsigned int v8; // r2
  int v9; // r0
  CAnimBlendAssociation *v10; // r0

  if ( *((unsigned __int8 *)this + 12) << 31 )
    return 1;
  if ( *((_BYTE *)this + 44) )
  {
    if ( *((_BYTE *)this + 45) )
    {
      v5 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 45) = 0;
      *((_DWORD *)this + 9) = v5;
      v6 = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 9);
      v5 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v6 + *((_DWORD *)this + 10) <= v5 )
      (*(void (__fastcall **)(CTaskSimpleRunTimedAnim *, CPed *, _DWORD, _DWORD))(*(_DWORD *)this + 28))(this, a2, 0, 0);
  }
  if ( !*((_DWORD *)this + 2) && !RpAnimBlendClumpGetAssociation() )
  {
    v7 = *((_DWORD *)this + 4);
    v8 = *((_DWORD *)this + 5);
    v9 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 9) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 10) = v9;
    *((_BYTE *)this + 44) = 1;
    v10 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v7, v8);
    *((_DWORD *)this + 2) = v10;
    CAnimBlendAssociation::SetDeleteCallback(
      v10,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB,
      this);
  }
  return *((_BYTE *)this + 12) & 1;
}


// ============================================================

// Address: 0x4d7280
// Original: _ZN23CTaskSimpleRunTimedAnim9StartAnimEP4CPed
// Demangled: CTaskSimpleRunTimedAnim::StartAnim(CPed *)
int __fastcall CTaskSimpleRunTimedAnim::StartAnim(CTaskSimpleRunTimedAnim *this, CPed *a2)
{
  CAnimBlendAssociation *v3; // r0

  v3 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                  *((_DWORD *)a2 + 6),
                                  *((_DWORD *)this + 4),
                                  *((_DWORD *)this + 5));
  *((_DWORD *)this + 2) = v3;
  return sub_192A28(v3, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleAnim::FinishRunAnimCB, this);
}


// ============================================================

// Address: 0x4d80bc
// Original: _ZN23CTaskSimpleRunTimedAnimD0Ev
// Demangled: CTaskSimpleRunTimedAnim::~CTaskSimpleRunTimedAnim()
void __fastcall CTaskSimpleRunTimedAnim::~CTaskSimpleRunTimedAnim(CTaskSimpleRunTimedAnim *this)
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

// Address: 0x4d812c
// Original: _ZNK23CTaskSimpleRunTimedAnim5CloneEv
// Demangled: CTaskSimpleRunTimedAnim::Clone(void)
int __fastcall CTaskSimpleRunTimedAnim::Clone(CTaskSimpleRunTimedAnim *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  char v4; // r5
  __int64 v5; // d8
  __int64 v6; // d9
  int v7; // r4
  int result; // r0
  char v9; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_34, a2);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_QWORD *)this + 2);
  v6 = *((_QWORD *)this + 3);
  v7 = *((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *(_QWORD *)(result + 16) = v5;
  *(_QWORD *)(result + 24) = v6;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 32) = v7;
  *(_WORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = 402;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  v9 = *(_BYTE *)(result + 12);
  *(_DWORD *)result = &off_669534;
  *(_BYTE *)(result + 12) = v4 & 4 | v9 & 0xF8;
  return result;
}


// ============================================================

// Address: 0x4d8188
// Original: _ZN23CTaskSimpleRunTimedAnim9SerializeEv
// Demangled: CTaskSimpleRunTimedAnim::Serialize(void)
void __fastcall CTaskSimpleRunTimedAnim::Serialize(CTaskSimpleRunTimedAnim *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r5
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  int v10; // r6
  CGenericGameStorage *v11; // r5
  int v12; // r2
  int v13; // r5
  CGenericGameStorage *v14; // r4
  int v15; // r2
  int v16; // r5
  int v17; // r1

  v2 = (*(int (__fastcall **)(CTaskSimpleRunTimedAnim *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  v5 = *((unsigned __int16 *)this + 24);
  if ( (*(int (__fastcall **)(CTaskSimpleRunTimedAnim *))(*(_DWORD *)this + 20))(this) == v5 )
  {
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = *((_DWORD *)this + 5);
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    v10 = *((_DWORD *)this + 6);
    if ( UseDataFence )
      AddDataFence();
    v11 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v11 = v10;
    CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
    free(v11);
    v13 = *((_DWORD *)this + 7);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = v13;
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    j_free(v14);
  }
  else
  {
    v16 = *((unsigned __int16 *)this + 24);
    v17 = (*(int (__fastcall **)(CTaskSimpleRunTimedAnim *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(v16, v17);
  }
}


// ============================================================
