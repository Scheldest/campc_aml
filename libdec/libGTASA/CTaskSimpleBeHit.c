
// Address: 0x18d2dc
// Original: j__ZN16CTaskSimpleBeHitC2EP4CPed14ePedPieceTypesii
// Demangled: CTaskSimpleBeHit::CTaskSimpleBeHit(CPed *,ePedPieceTypes,int,int)
// attributes: thunk
int __fastcall CTaskSimpleBeHit::CTaskSimpleBeHit(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN16CTaskSimpleBeHitC2EP4CPed14ePedPieceTypesii(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x193e68
// Original: j__ZN16CTaskSimpleBeHit9StartAnimEP4CPed
// Demangled: CTaskSimpleBeHit::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleBeHit::StartAnim(CTaskSimpleBeHit *this, CPed *a2)
{
  return _ZN16CTaskSimpleBeHit9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x4dfb08
// Original: _ZN16CTaskSimpleBeHitC2EP4CPed14ePedPieceTypesii
// Demangled: CTaskSimpleBeHit::CTaskSimpleBeHit(CPed *,ePedPieceTypes,int,int)
int __fastcall CTaskSimpleBeHit::CTaskSimpleBeHit(int a1, CEntity *a2, int a3, int a4, int a5)
{
  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_WORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 191;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 32) = a4;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = &off_6697E0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)(a1 + 8));
  return a1;
}


// ============================================================

// Address: 0x4dfb58
// Original: _ZN16CTaskSimpleBeHitD2Ev
// Demangled: CTaskSimpleBeHit::~CTaskSimpleBeHit()
void __fastcall CTaskSimpleBeHit::~CTaskSimpleBeHit(CTaskSimpleBeHit *this)
{
  int v2; // r0
  CEntity *v3; // r0

  v2 = *((_DWORD *)this + 9);
  *(_DWORD *)this = &off_6697E0;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 9),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4dfba4
// Original: _ZN16CTaskSimpleBeHitD0Ev
// Demangled: CTaskSimpleBeHit::~CTaskSimpleBeHit()
void __fastcall CTaskSimpleBeHit::~CTaskSimpleBeHit(CTaskSimpleBeHit *this)
{
  int v2; // r0
  CEntity *v3; // r0
  void *v4; // r0

  v2 = *((_DWORD *)this + 9);
  *(_DWORD *)this = &off_6697E0;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 28) = -1065353216;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 9),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  }
  v3 = (CEntity *)*((_DWORD *)this + 2);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 2);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4dfbf4
// Original: _ZN16CTaskSimpleBeHit13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleBeHit::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleBeHit::MakeAbortable(CTaskSimpleBeHit *this, CPed *a2, int a3, const CEvent *a4)
{
  CAnimBlendAssociation *v5; // r0
  int result; // r0
  int v7; // r0
  __int16 v8; // r1

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v7 = *((_DWORD *)this + 9);
    if ( v7 )
    {
      v8 = *(_WORD *)(v7 + 46);
      if ( (v8 & 1) == 0 )
      {
        *(_WORD *)(v7 + 46) = v8 | 4;
        *(_DWORD *)(*((_DWORD *)this + 9) + 28) = -1065353216;
      }
    }
    return 0;
  }
  if ( a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 62 )
    return 0;
  v5 = (CAnimBlendAssociation *)*((_DWORD *)this + 9);
  if ( v5 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v5,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 9) = 0;
  }
  result = 1;
  *((_BYTE *)this + 12) = 1;
  return result;
}


// ============================================================

// Address: 0x4dfc4c
// Original: _ZN16CTaskSimpleBeHit17FinishAnimBeHitCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleBeHit::FinishAnimBeHitCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleBeHit::FinishAnimBeHitCB(CTaskSimpleBeHit *this, CAnimBlendAssociation *a2, void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 12) = 1;
  result = 0;
  *((_DWORD *)a2 + 9) = 0;
  return result;
}


// ============================================================

// Address: 0x4dfc58
// Original: _ZN16CTaskSimpleBeHit9StartAnimEP4CPed
// Demangled: CTaskSimpleBeHit::StartAnim(CPed *)
int __fastcall CTaskSimpleBeHit::StartAnim(CTaskSimpleBeHit *this, CPed *a2)
{
  unsigned int v4; // r2
  CAnimBlendAssociation *Association; // r0
  int result; // r0
  CAnimBlendAssociation *v7; // r0
  int v8; // r0
  int v9; // r0
  int TaskFighting; // r0
  int v11; // r1
  int v12; // r0

  v4 = *((_DWORD *)this + 4);
  if ( v4 == 191 )
  {
    if ( !*((_DWORD *)this + 8)
      && (v9 = *((_DWORD *)this + 2)) != 0
      && (TaskFighting = CPedIntelligence::GetTaskFighting(*(CPedIntelligence **)(v9 + 1088))) != 0
      && (v11 = *(char *)(TaskFighting + 36), v11 >= 4)
      && (v12 = *(char *)(TaskFighting + 37), v12 <= 2) )
    {
      v4 = v12 + 219;
      *((_DWORD *)this + 4) = v12 + 219;
      *((_DWORD *)this + 5) = CTaskSimpleFight::m_aComboData[34 * v11 - 136];
    }
    else
    {
      if ( *((_DWORD *)this + 6) == 3 )
      {
        v4 = 32;
      }
      else
      {
        v8 = *((_DWORD *)this + 8);
        switch ( v8 )
        {
          case 3:
            v4 = 35;
            break;
          case 2:
            v4 = 34;
            break;
          case 1:
            v4 = 33;
            break;
          default:
            v4 = 32;
            if ( *((int *)this + 7) > 5 )
              v4 = 37;
            break;
        }
      }
      *((_DWORD *)this + 4) = v4;
    }
  }
  if ( *((_BYTE *)this + 13) )
  {
    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 9) = Association;
    if ( !Association )
    {
      result = 1;
      *((_BYTE *)this + 12) = 1;
      return result;
    }
  }
  else
  {
    v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)this + 5), v4);
    *((_DWORD *)this + 9) = v7;
    CAnimBlendAssociation::SetCurrentTime(v7, 0.0);
    Association = (CAnimBlendAssociation *)*((_DWORD *)this + 9);
    *((_BYTE *)this + 13) = 1;
  }
  return sub_18C20C(Association, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBeHit::FinishAnimBeHitCB, this);
}


// ============================================================

// Address: 0x4dfd28
// Original: _ZN16CTaskSimpleBeHit10ProcessPedEP4CPed
// Demangled: CTaskSimpleBeHit::ProcessPed(CPed *)
int __fastcall CTaskSimpleBeHit::ProcessPed(CTaskSimpleBeHit *this, CPed *a2)
{
  CPed *v5; // r0
  int IsPlayer; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r1
  int v10; // r2
  float *v11; // r3
  float *v12; // r1

  if ( *((_BYTE *)this + 12) )
    return 1;
  if ( !*((_DWORD *)this + 8) && *((_DWORD *)this + 2) && !CPed::IsPlayer(a2) )
  {
    v8 = *((_DWORD *)this + 2);
    v9 = *((_DWORD *)a2 + 5);
    v10 = *(_DWORD *)(v8 + 20);
    v11 = (float *)(v9 + 48);
    if ( !v9 )
      v11 = (float *)((char *)a2 + 4);
    v12 = (float *)(v10 + 48);
    if ( !v10 )
      v12 = (float *)(v8 + 4);
    *((float *)a2 + 344) = atan2f(-(float)(*v12 - *v11), v12[1] - v11[1]);
  }
  if ( !*((_DWORD *)this + 9) )
  {
    v5 = (CPed *)*((_DWORD *)this + 2);
    if ( !v5 )
      goto LABEL_9;
    IsPlayer = CPed::IsPlayer(v5);
    v7 = IsPlayer == 1;
    if ( IsPlayer == 1 )
      v7 = *((_DWORD *)a2 + 359) == 8;
    if ( !v7
      || (CPed::DisablePedSpeech(a2, 1), CPed::EnablePedSpeech(a2), CPed::Say(a2, 0x10u, 0x3E8u, 1.0, 0, 0, 0) <= -1) )
    {
LABEL_9:
      CPed::Say(a2, 0x159u, 0, 1.0, 0, 0, 0);
    }
    CTaskSimpleBeHit::StartAnim(this, a2);
  }
  return 0;
}


// ============================================================

// Address: 0x4e9c7c
// Original: _ZNK16CTaskSimpleBeHit5CloneEv
// Demangled: CTaskSimpleBeHit::Clone(void)
CTaskSimple *__fastcall CTaskSimpleBeHit::Clone(CTaskSimpleBeHit *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  CEntity *v4; // r6
  CTaskSimple *v5; // r5
  int v6; // r8
  int v7; // r9
  int v8; // r10
  char v9; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  v5 = v3;
  v6 = *((_DWORD *)this + 6);
  v7 = *((_DWORD *)this + 7);
  v8 = *((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *((_WORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 4) = 191;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = v6;
  *((_DWORD *)v5 + 7) = v7;
  *((_DWORD *)v5 + 8) = v8;
  *((_DWORD *)v5 + 9) = 0;
  *(_DWORD *)v5 = &off_6697E0;
  *((_DWORD *)v5 + 2) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v5 + 2);
  v9 = *((_BYTE *)this + 13);
  *((_QWORD *)v5 + 2) = *((_QWORD *)this + 2);
  *((_BYTE *)v5 + 13) = v9;
  return v5;
}


// ============================================================

// Address: 0x4e9ce4
// Original: _ZNK16CTaskSimpleBeHit11GetTaskTypeEv
// Demangled: CTaskSimpleBeHit::GetTaskType(void)
int __fastcall CTaskSimpleBeHit::GetTaskType(CTaskSimpleBeHit *this)
{
  return 1008;
}


// ============================================================
