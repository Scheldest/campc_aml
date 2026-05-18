
// Address: 0x18e1d4
// Original: j__ZN24CTaskComplexPartnerGreetC2EPcP4CPedhfi7CVector
// Demangled: CTaskComplexPartnerGreet::CTaskComplexPartnerGreet(char *,CPed *,uchar,float,int,CVector)
// attributes: thunk
int CTaskComplexPartnerGreet::CTaskComplexPartnerGreet()
{
  return _ZN24CTaskComplexPartnerGreetC2EPcP4CPedhfi7CVector();
}


// ============================================================

// Address: 0x534d3c
// Original: _ZN24CTaskComplexPartnerGreetC2EPcP4CPedhfi7CVector
// Demangled: CTaskComplexPartnerGreet::CTaskComplexPartnerGreet(char *,CPed *,uchar,float,int,CVector)
int __fastcall CTaskComplexPartnerGreet::CTaskComplexPartnerGreet(
        int a1,
        int a2,
        CEntity *a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_BYTE *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_BYTE *)(a1 + 93) = 1;
  *(_BYTE *)(a1 + 91) = 1;
  *(_DWORD *)(a1 + 64) = a7;
  *(_DWORD *)(a1 + 68) = a8;
  *(_DWORD *)(a1 + 72) = a9;
  *(_BYTE *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 89) = -255;
  *(_BYTE *)(a1 + 110) = 0;
  *(_DWORD *)a1 = &off_66CCE0;
  *(_BYTE *)(a1 + 94) = 0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 56));
  *(_DWORD *)(a1 + 52) = 1203;
  *(_DWORD *)(a1 + 116) = a6;
  *(_DWORD *)a1 = &off_66CD70;
  strcpy((char *)(a1 + 94), "gangs");
  return a1;
}


// ============================================================

// Address: 0x534de0
// Original: _ZN24CTaskComplexPartnerGreetD0Ev
// Demangled: CTaskComplexPartnerGreet::~CTaskComplexPartnerGreet()
void __fastcall CTaskComplexPartnerGreet::~CTaskComplexPartnerGreet(CTaskComplexPartnerGreet *this)
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
  ((void (__fastcall *)(CTaskComplexPartnerGreet *))v4[14])(this);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x534e18
// Original: _ZN24CTaskComplexPartnerGreet18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPartnerGreet::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexPartnerGreet::CreateFirstSubTask(CTaskComplexPartnerGreet *this, CPed *a2, CPed *a3)
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

// Address: 0x534e78
// Original: _ZN24CTaskComplexPartnerGreet19StreamRequiredAnimsEv
// Demangled: CTaskComplexPartnerGreet::StreamRequiredAnims(void)
int __fastcall CTaskComplexPartnerGreet::StreamRequiredAnims(CTaskComplexPartnerGreet *this)
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
                                            (CTaskComplexPartnerGreet *)((char *)this + 94),
                                            v4);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v6);
    result = 0;
LABEL_4:
    *((_BYTE *)this + 110) = result;
    return result;
  }
  if ( result )
  {
    v7 = CAnimManager::GetAnimationBlockIndex((CTaskComplexPartnerGreet *)((char *)this + 94), v4);
    if ( CAnimManager::ms_aAnimBlocks[32 * v7 + 16] != 1 )
      return j_CStreaming::RequestModel((CStreaming *)(v7 + 25575), 8, v8);
    CAnimManager::AddAnimBlockRef((CAnimManager *)v7, 1);
    result = 1;
    goto LABEL_4;
  }
  return result;
}


// ============================================================

// Address: 0x534edc
// Original: _ZN24CTaskComplexPartnerGreet18GetPartnerSequenceEv
// Demangled: CTaskComplexPartnerGreet::GetPartnerSequence(void)
CTaskComplexSequence *__fastcall CTaskComplexPartnerGreet::GetPartnerSequence(CEntity **this, unsigned int a2)
{
  CTaskComplexSequence *v3; // r4
  unsigned int v4; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v5; // r6
  unsigned int v6; // r1
  int v7; // r6
  int v8; // r6
  int v9; // r8
  int v10; // r2
  CTaskComplexSequence *v11; // r0
  CTask *v12; // r1
  float v13; // s4
  float v14; // s6
  float v15; // s16
  float v16; // s18
  int v17; // s20
  int v18; // s22
  int v19; // r11
  CTaskSimpleDoHandSignal *v20; // r6
  unsigned int v21; // r1
  CTaskSimpleStandStill *v22; // r6
  unsigned int v23; // r1
  CTaskSimpleStandStill *v24; // r6
  unsigned int v25; // r1
  CTask *v26; // r5
  unsigned int v27; // r1
  CTaskSimpleStandStill *v28; // r6
  unsigned int v29; // r1
  CTaskSimpleDoHandSignal *v30; // r6
  unsigned int v31; // r1
  CTask *v32; // r6
  unsigned int v33; // r1
  CTaskSimpleStandStill *v34; // r5
  CTaskSimpleStandStill *v35; // r5
  unsigned int v36; // r1
  CTask *v37; // r5

  v3 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, a2);
  CTaskComplexSequence::CTaskComplexSequence(v3);
  v5 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v4);
  CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v5, this[14], 0.5, 0.001);
  CTaskComplexSequence::AddTask(v3, v5);
  switch ( (unsigned int)this[29] )
  {
    case 0u:
      v7 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 52, 289, 1082130432, 0);
      goto LABEL_11;
    case 1u:
      v7 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 52, 290, 1082130432, 0);
      goto LABEL_11;
    case 2u:
      v8 = *((unsigned __int8 *)this + 88);
      v9 = CTask::operator new((CTask *)&dword_20, v6);
      if ( v8 )
        v10 = 291;
      else
        v10 = 292;
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v9, 52, v10, 1082130432, 0);
      v11 = v3;
      v12 = (CTask *)v9;
      goto LABEL_12;
    case 3u:
      v7 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 52, 293, 1082130432, 0);
      goto LABEL_11;
    case 4u:
      v7 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 52, 294, 1082130432, 0);
      goto LABEL_11;
    case 5u:
      v7 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 52, 295, 1082130432, 0);
LABEL_11:
      v11 = v3;
      v12 = (CTask *)v7;
LABEL_12:
      CTaskComplexSequence::AddTask(v11, v12);
      break;
    default:
      break;
  }
  v13 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0;
  v14 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0;
  v15 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0;
  v16 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 4000.0;
  v18 = (int)v14;
  v19 = rand() & 1;
  v17 = (int)v13;
  if ( *((_BYTE *)this + 88) )
  {
    v20 = (CTaskSimpleDoHandSignal *)CTask::operator new((CTask *)&byte_9[3], *((unsigned __int8 *)this + 88));
    CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(v20);
    CTaskComplexSequence::AddTask(v3, v20);
    v22 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v21);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v22, 1000, 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v3, v22);
    v24 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v23);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v24, v17 + 3000, 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v3, v24);
    v26 = (CTask *)CTask::operator new((CTask *)&dword_34, v25);
    CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim((int)v26, 0, 12, 1082130432, -4.0, v18 + 3000, 416, (int)"Chat", 0);
    *(_DWORD *)v26 = &off_668888;
    CTaskComplexSequence::AddTask(v3, v26);
    if ( v19 )
      goto LABEL_17;
  }
  else
  {
    v28 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v28, 1000, 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v3, v28);
    v30 = (CTaskSimpleDoHandSignal *)CTask::operator new((CTask *)&byte_9[3], v29);
    CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(v30);
    CTaskComplexSequence::AddTask(v3, v30);
    v32 = (CTask *)CTask::operator new((CTask *)&dword_34, v31);
    CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim((int)v32, 0, 12, 1082130432, -4.0, v17 + 3000, 416, (int)"Chat", 0);
    *(_DWORD *)v32 = &off_668888;
    CTaskComplexSequence::AddTask(v3, v32);
    v34 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v33);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v34, v18 + 3000, 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v3, v34);
    if ( v19 )
    {
LABEL_17:
      v35 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v27);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v35, (int)v15 + 3000, 0, 0, 8.0);
      CTaskComplexSequence::AddTask(v3, v35);
      v37 = (CTask *)CTask::operator new((CTask *)&dword_34, v36);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        (int)v37,
        0,
        12,
        1082130432,
        -4.0,
        (int)v16 + 3000,
        416,
        (int)"Chat",
        0);
      *(_DWORD *)v37 = &off_668888;
      CTaskComplexSequence::AddTask(v3, v37);
    }
  }
  return v3;
}


// ============================================================

// Address: 0x536ff4
// Original: _ZNK24CTaskComplexPartnerGreet5CloneEv
// Demangled: CTaskComplexPartnerGreet::Clone(void)
int __fastcall CTaskComplexPartnerGreet::Clone(CTaskComplexPartnerGreet *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // d8
  __int64 v5; // d9
  int v6; // r8
  CEntity *v7; // r5

  v3 = CTask::operator new((CTask *)&dword_78, a2);
  v4 = *(_QWORD *)((char *)this + 60);
  v5 = *(_QWORD *)((char *)this + 68);
  v6 = *((_DWORD *)this + 29);
  v7 = (CEntity *)*((_DWORD *)this + 14);
  LOBYTE(this) = *((_BYTE *)this + 88);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 60) = v4;
  *(_QWORD *)(v3 + 68) = v5;
  *(_BYTE *)(v3 + 88) = (_BYTE)this;
  *(_DWORD *)(v3 + 89) = (char *)&elf_hash_chain[16230] + 1;
  *(_BYTE *)(v3 + 110) = 0;
  *(_WORD *)(v3 + 93) = 1;
  *(_DWORD *)v3 = &off_66CCE0;
  *(_DWORD *)(v3 + 56) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 56));
  *(_DWORD *)(v3 + 52) = 1203;
  *(_DWORD *)(v3 + 116) = v6;
  *(_DWORD *)v3 = &off_66CD70;
  strcpy((char *)(v3 + 94), "gangs");
  return v3;
}


// ============================================================

// Address: 0x5370a0
// Original: _ZNK24CTaskComplexPartnerGreet11GetTaskTypeEv
// Demangled: CTaskComplexPartnerGreet::GetTaskType(void)
int __fastcall CTaskComplexPartnerGreet::GetTaskType(CTaskComplexPartnerGreet *this)
{
  return 1203;
}


// ============================================================
