
// Address: 0x19dfb0
// Original: j__ZN27CTaskSimpleBeHitWhileMoving9StartAnimEP4CPed
// Demangled: CTaskSimpleBeHitWhileMoving::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleBeHitWhileMoving::StartAnim(CTaskSimpleBeHitWhileMoving *this, CPed *a2)
{
  return _ZN27CTaskSimpleBeHitWhileMoving9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4df298
// Original: _ZN27CTaskSimpleBeHitWhileMovingC2Eii
// Demangled: CTaskSimpleBeHitWhileMoving::CTaskSimpleBeHitWhileMoving(int,int)
void __fastcall CTaskSimpleBeHitWhileMoving::CTaskSimpleBeHitWhileMoving(
        CTaskSimpleBeHitWhileMoving *this,
        int a2,
        int a3)
{
  int v5; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 16) = a3;
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)v5 = &off_669778;
}


// ============================================================

// Address: 0x4df2c0
// Original: _ZN27CTaskSimpleBeHitWhileMovingD2Ev
// Demangled: CTaskSimpleBeHitWhileMoving::~CTaskSimpleBeHitWhileMoving()
void __fastcall CTaskSimpleBeHitWhileMoving::~CTaskSimpleBeHitWhileMoving(CTaskSimpleBeHitWhileMoving *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &off_669778;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 5),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4df2fc
// Original: _ZN27CTaskSimpleBeHitWhileMovingD0Ev
// Demangled: CTaskSimpleBeHitWhileMoving::~CTaskSimpleBeHitWhileMoving()
void __fastcall CTaskSimpleBeHitWhileMoving::~CTaskSimpleBeHitWhileMoving(CTaskSimpleBeHitWhileMoving *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &off_669778;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 5),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4df33c
// Original: _ZN27CTaskSimpleBeHitWhileMoving13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleBeHitWhileMoving::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleBeHitWhileMoving::MakeAbortable(
        CTaskSimpleBeHitWhileMoving *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CAnimBlendAssociation *v5; // r0
  int result; // r0

  v5 = (CAnimBlendAssociation *)*((_DWORD *)this + 5);
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    if ( v5 )
    {
      *((_WORD *)v5 + 23) |= 4u;
      *(_DWORD *)(*((_DWORD *)this + 5) + 28) = -1065353216;
    }
    return 0;
  }
  else if ( v5 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v5,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    result = 1;
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x4df380
// Original: _ZN27CTaskSimpleBeHitWhileMoving28FinishAnimBeHitWhileMovingCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleBeHitWhileMoving::FinishAnimBeHitWhileMovingCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleBeHitWhileMoving::FinishAnimBeHitWhileMovingCB(
        CTaskSimpleBeHitWhileMoving *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 5) = 0;
  return result;
}


// ============================================================

// Address: 0x4df38c
// Original: _ZN27CTaskSimpleBeHitWhileMoving9StartAnimEP4CPed
// Demangled: CTaskSimpleBeHitWhileMoving::StartAnim(CPed *)
int __fastcall CTaskSimpleBeHitWhileMoving::StartAnim(CTaskSimpleBeHitWhileMoving *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r1
  int v7; // r6
  float *Association; // r0
  int v9; // r0
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r8
  CAnimBlendAssociation *v14; // r0
  CAnimBlendAssociation *v15; // r6
  __int16 v16; // r0
  float v17; // s0
  float v18; // s2
  unsigned int v19; // r0
  float v20; // s0

  v4 = *((_DWORD *)this + 3);
  v5 = v4 == 4;
  if ( v4 != 4 )
    v5 = v4 == 2;
  if ( !v5 || (CPed::IsPlayer(a2) || (rand() & 1) == 0) && (rand() & 7) != 0 )
  {
    if ( !CPed::IsPlayer(a2) && (rand() & 1) == 0 )
    {
      rand();
      return sub_18C20C(
               *((CAnimBlendAssociation **)this + 5),
               (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBeHitWhileMoving::FinishAnimBeHitWhileMovingCB,
               this);
    }
    v6 = *((_DWORD *)this + 4);
    v7 = 28;
    if ( (unsigned int)(v6 - 1) < 3 )
      v7 = v6 + 28;
    Association = (float *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 5) = Association;
    if ( Association && Association[7] >= 0.0 )
    {
LABEL_17:
      CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)Association, 0.0);
      *(_WORD *)(*((_DWORD *)this + 5) + 46) |= 1u;
      *(_WORD *)(*((_DWORD *)this + 5) + 46) |= 8u;
      return sub_18C20C(
               *((CAnimBlendAssociation **)this + 5),
               (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBeHitWhileMoving::FinishAnimBeHitWhileMovingCB,
               this);
    }
    v9 = *((_DWORD *)a2 + 6);
    v10 = v7;
LABEL_16:
    Association = (float *)CAnimManager::BlendAnimation(v9, 0, v10);
    *((_DWORD *)this + 5) = Association;
    goto LABEL_17;
  }
  v11 = *((_DWORD *)this + 4);
  switch ( v11 )
  {
    case 1:
      v13 = 25;
      break;
    case 3:
      v13 = 27;
      break;
    case 2:
      v12 = rand() & 1;
      v13 = 8 * v12 + 26;
      if ( v12 )
      {
LABEL_44:
        Association = (float *)RpAnimBlendClumpGetAssociation();
        *((_DWORD *)this + 5) = Association;
        if ( Association && Association[7] >= 0.0 )
          goto LABEL_17;
        v9 = *((_DWORD *)a2 + 6);
        v10 = v13;
        goto LABEL_16;
      }
      break;
    default:
      if ( *((_DWORD *)this + 3) == 2 )
      {
        v13 = 20;
      }
      else
      {
        if ( (rand() & 1) != 0 )
        {
          v13 = 37;
          goto LABEL_44;
        }
        if ( (rand() & 1) != 0 )
        {
          v13 = 32;
          goto LABEL_44;
        }
        v13 = 19;
      }
      break;
  }
  if ( !*((_DWORD *)a2 + 64) )
  {
    CPed::ClearLookFlag(a2);
    CPed::ClearAimFlag(a2);
    v14 = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    v15 = v14;
    if ( v14 )
    {
      CAnimBlendAssociation::SetCurrentTime(v14, 0.0);
      v16 = *((_WORD *)v15 + 23);
      *((_DWORD *)v15 + 6) = 0;
      *((_DWORD *)v15 + 7) = 1090519040;
      *((_WORD *)v15 + 23) = v16 | 1;
      if ( CPed::IsPlayer(a2) == 1 )
      {
        v17 = (float)(*(float *)(*((_DWORD *)v15 + 5) + 16) * 1000.0)
            + (float)(unsigned int)CTimer::m_snTimeInMilliseconds;
        if ( (*((__int16 *)v15 + 22) & 0xFFFFFFFE) == 0x6E )
        {
          v17 = v17 + (float)(*((float *)v15 + 8) * -1000.0);
          v18 = 100.0;
        }
        else
        {
          v18 = 500.0;
        }
        v20 = v17 + v18;
      }
      else
      {
        v20 = (float)((float)((float)(*(float *)(*((_DWORD *)v15 + 5) + 16) * 1000.0)
                            + (float)(unsigned int)CTimer::m_snTimeInMilliseconds)
                    + 500.0)
            + (float)(((unsigned int)*((unsigned __int16 *)a2 + 18) + CTimer::m_FrameCounter) % 0x3E8);
      }
      v19 = (unsigned int)v20;
    }
    else
    {
      *((_DWORD *)this + 5) = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v13);
      CPed::IsPlayer(a2);
      v19 = (CTimer::m_FrameCounter + (unsigned int)*((unsigned __int16 *)a2 + 18)) % 0x3E8
          + CTimer::m_snTimeInMilliseconds
          + 1000;
    }
    *((_DWORD *)a2 + 467) = v19;
  }
  return sub_18C20C(
           *((CAnimBlendAssociation **)this + 5),
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBeHitWhileMoving::FinishAnimBeHitWhileMovingCB,
           this);
}


// ============================================================

// Address: 0x4df630
// Original: _ZN27CTaskSimpleBeHitWhileMoving10ProcessPedEP4CPed
// Demangled: CTaskSimpleBeHitWhileMoving::ProcessPed(CPed *)
int __fastcall CTaskSimpleBeHitWhileMoving::ProcessPed(CTaskSimpleBeHitWhileMoving *this, CPed *a2)
{
  if ( *((_BYTE *)this + 8) )
    return 1;
  if ( !*((_DWORD *)this + 5) )
    CTaskSimpleBeHitWhileMoving::StartAnim(this, a2);
  return 0;
}


// ============================================================

// Address: 0x4e9ac0
// Original: _ZNK27CTaskSimpleBeHitWhileMoving5CloneEv
// Demangled: CTaskSimpleBeHitWhileMoving::Clone(void)
int __fastcall CTaskSimpleBeHitWhileMoving::Clone(CTaskSimpleBeHitWhileMoving *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)result = &off_669778;
  return result;
}


// ============================================================

// Address: 0x4e9af0
// Original: _ZNK27CTaskSimpleBeHitWhileMoving11GetTaskTypeEv
// Demangled: CTaskSimpleBeHitWhileMoving::GetTaskType(void)
int __fastcall CTaskSimpleBeHitWhileMoving::GetTaskType(CTaskSimpleBeHitWhileMoving *this)
{
  return 1009;
}


// ============================================================
