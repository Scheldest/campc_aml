
// Address: 0x19cca8
// Original: j__ZN23CTaskComplexPartnerDealC2EPcP4CPedhf7CVector
// Demangled: CTaskComplexPartnerDeal::CTaskComplexPartnerDeal(char *,CPed *,uchar,float,CVector)
// attributes: thunk
int CTaskComplexPartnerDeal::CTaskComplexPartnerDeal()
{
  return _ZN23CTaskComplexPartnerDealC2EPcP4CPedhf7CVector();
}


// ============================================================

// Address: 0x534b24
// Original: _ZN23CTaskComplexPartnerDealC2EPcP4CPedhf7CVector
// Demangled: CTaskComplexPartnerDeal::CTaskComplexPartnerDeal(char *,CPed *,uchar,float,CVector)
int __fastcall CTaskComplexPartnerDeal::CTaskComplexPartnerDeal(
        int a1,
        int a2,
        CEntity *a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_BYTE *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_BYTE *)(a1 + 93) = 1;
  *(_BYTE *)(a1 + 91) = 1;
  *(_DWORD *)(a1 + 64) = a6;
  *(_DWORD *)(a1 + 68) = a7;
  *(_DWORD *)(a1 + 72) = a8;
  *(_BYTE *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 89) = -255;
  *(_BYTE *)(a1 + 110) = 0;
  *(_DWORD *)a1 = &off_66CCE0;
  *(_BYTE *)(a1 + 94) = 0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 56));
  *(_DWORD *)(a1 + 52) = 1202;
  *(_DWORD *)a1 = &off_66CD28;
  strcpy((char *)(a1 + 94), "gangs");
  return a1;
}


// ============================================================

// Address: 0x534bc0
// Original: _ZN23CTaskComplexPartnerDealD0Ev
// Demangled: CTaskComplexPartnerDeal::~CTaskComplexPartnerDeal()
void __fastcall CTaskComplexPartnerDeal::~CTaskComplexPartnerDeal(CTaskComplexPartnerDeal *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  _UNKNOWN **v4; // r2
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 56);
  v2 = (CEntity *)*((_DWORD *)this + 14);
  v4 = &off_66CCE0;
  *(_DWORD *)this = &off_66CCE0;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    v4 = *(_UNKNOWN ***)this;
  }
  ((void (__fastcall *)(CTaskComplexPartnerDeal *))v4[14])(this);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x534bf8
// Original: _ZN23CTaskComplexPartnerDeal18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPartnerDeal::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexPartnerDeal::CreateFirstSubTask(CTaskComplexPartnerDeal *this, CPed *a2, CPed *a3)
{
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r0

  if ( *((_BYTE *)this + 88) && *((_DWORD *)this + 13) == 1204 && *((_BYTE *)this + 114) )
  {
    if ( CAEPedSpeechAudioEntity::RequestPedConversation(a2, *((CPed **)this + 14), a3) )
    {
      *((_BYTE *)this + 116) = 1;
    }
    else
    {
      if ( !*((_BYTE *)this + 115) )
        return;
      *((_BYTE *)this + 114) = 0;
    }
  }
  CPed::StopPlayingHandSignal(a2);
  v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 50, 0, 0, 8.0);
}


// ============================================================

// Address: 0x534c58
// Original: _ZN23CTaskComplexPartnerDeal19StreamRequiredAnimsEv
// Demangled: CTaskComplexPartnerDeal::StreamRequiredAnims(void)
int __fastcall CTaskComplexPartnerDeal::StreamRequiredAnims(CTaskComplexPartnerDeal *this)
{
  int v2; // r5
  int result; // r0
  const char *v4; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r2

  v2 = *((unsigned __int8 *)this + 110);
  result = CTaskComplexGangLeader::ShouldLoadGangAnims(this);
  if ( v2 )
  {
    if ( result )
      return result;
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CTaskComplexPartnerDeal *)((char *)this + 94),
                                            v4);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v6);
    result = 0;
LABEL_4:
    *((_BYTE *)this + 110) = result;
    return result;
  }
  if ( result )
  {
    v7 = CAnimManager::GetAnimationBlockIndex((CTaskComplexPartnerDeal *)((char *)this + 94), v4);
    if ( CAnimManager::ms_aAnimBlocks[32 * v7 + 16] != 1 )
      return j_CStreaming::RequestModel((CStreaming *)(v7 + 25575), 8, v8);
    CAnimManager::AddAnimBlockRef((CAnimManager *)v7, 1);
    result = 1;
    goto LABEL_4;
  }
  return result;
}


// ============================================================

// Address: 0x534cbc
// Original: _ZN23CTaskComplexPartnerDeal18GetPartnerSequenceEv
// Demangled: CTaskComplexPartnerDeal::GetPartnerSequence(void)
CTaskComplexSequence *__fastcall CTaskComplexPartnerDeal::GetPartnerSequence(CEntity **this, unsigned int a2)
{
  CTaskComplexSequence *v3; // r4
  int v4; // r8
  unsigned int v5; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v6; // r6
  unsigned int v7; // r1
  CTask *v8; // r5
  int v9; // r2

  v3 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, a2);
  CTaskComplexSequence::CTaskComplexSequence(v3);
  v4 = *((unsigned __int8 *)this + 88);
  v6 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v5);
  CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v6, this[14], 0.5, 0.02);
  CTaskComplexSequence::AddTask(v3, v6);
  v8 = (CTask *)CTask::operator new((CTask *)&dword_20, v7);
  if ( v4 )
    v9 = 287;
  else
    v9 = 288;
  CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v8, 52, v9, 1082130432, 0);
  CTaskComplexSequence::AddTask(v3, v8);
  return v3;
}


// ============================================================

// Address: 0x536f48
// Original: _ZNK23CTaskComplexPartnerDeal5CloneEv
// Demangled: CTaskComplexPartnerDeal::Clone(void)
int __fastcall CTaskComplexPartnerDeal::Clone(CTaskComplexPartnerDeal *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // d8
  __int64 v5; // d9
  CEntity *v6; // r5

  v3 = CTask::operator new((CTask *)&dword_74, a2);
  v4 = *(_QWORD *)((char *)this + 60);
  v5 = *(_QWORD *)((char *)this + 68);
  v6 = (CEntity *)*((_DWORD *)this + 14);
  LOBYTE(this) = *((_BYTE *)this + 88);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 60) = v4;
  *(_QWORD *)(v3 + 68) = v5;
  *(_BYTE *)(v3 + 88) = (_BYTE)this;
  *(_DWORD *)(v3 + 89) = (char *)&elf_hash_chain[16230] + 1;
  *(_BYTE *)(v3 + 110) = 0;
  *(_WORD *)(v3 + 93) = 1;
  *(_DWORD *)v3 = &off_66CCE0;
  *(_DWORD *)(v3 + 56) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)(v3 + 56));
  *(_DWORD *)(v3 + 52) = 1202;
  *(_DWORD *)v3 = &off_66CD28;
  strcpy((char *)(v3 + 94), "gangs");
  return v3;
}


// ============================================================

// Address: 0x536fec
// Original: _ZNK23CTaskComplexPartnerDeal11GetTaskTypeEv
// Demangled: CTaskComplexPartnerDeal::GetTaskType(void)
int __fastcall CTaskComplexPartnerDeal::GetTaskType(CTaskComplexPartnerDeal *this)
{
  return 1202;
}


// ============================================================
