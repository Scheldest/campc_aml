
// Address: 0x194e38
// Original: j__ZN23CTaskComplexPartnerChat10CreateTaskEv
// Demangled: CTaskComplexPartnerChat::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexPartnerChat::CreateTask(CTaskComplexPartnerChat *this)
{
  return _ZN23CTaskComplexPartnerChat10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19a150
// Original: j__ZN23CTaskComplexPartnerChatC2EPcP4CPedhfihh7CVector
// Demangled: CTaskComplexPartnerChat::CTaskComplexPartnerChat(char *,CPed *,uchar,float,int,uchar,uchar,CVector)
// attributes: thunk
int CTaskComplexPartnerChat::CTaskComplexPartnerChat()
{
  return _ZN23CTaskComplexPartnerChatC2EPcP4CPedhfihh7CVector();
}


// ============================================================

// Address: 0x496a94
// Original: _ZN23CTaskComplexPartnerChat10CreateTaskEv
// Demangled: CTaskComplexPartnerChat::CreateTask(void)
int __fastcall CTaskComplexPartnerChat::CreateTask(CTaskComplexPartnerChat *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r5
  int v6; // r2
  char v7; // r5
  int v8; // r2
  char v9; // r5
  int v10; // r2
  char v11; // r5
  int v12; // r2
  char v13; // r5
  int v14; // r2
  char v15; // r5
  int v16; // r2
  char v17; // r5
  unsigned int v18; // r1
  int v20; // [sp+20h] [bp-50h] BYREF
  char v21; // [sp+2Dh] [bp-43h] BYREF
  char v22; // [sp+2Eh] [bp-42h] BYREF
  char v23; // [sp+2Fh] [bp-41h] BYREF
  float v24; // [sp+30h] [bp-40h] BYREF
  char v25; // [sp+37h] [bp-39h] BYREF
  CPools *v26; // [sp+38h] [bp-38h] BYREF
  _BYTE v27[32]; // [sp+3Ch] [bp-34h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v26, byte_4, a3);
  if ( v26 != (CPools *)-1 )
    CPools::GetPed(v26, (int)v26 + 1);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v27, &dword_20, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, (char *)&stderr + 1, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 1, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 1, v12);
  v15 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v14);
    UseDataFence = v15;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 1, v14);
  v17 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v16);
    UseDataFence = v17;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, &byte_9[3], v16);
  CTask::operator new((CTask *)&dword_78, v18);
  return CTaskComplexPartnerChat::CTaskComplexPartnerChat();
}


// ============================================================

// Address: 0x5352b4
// Original: _ZN23CTaskComplexPartnerChatC2EPcP4CPedhfihh7CVector
// Demangled: CTaskComplexPartnerChat::CTaskComplexPartnerChat(char *,CPed *,uchar,float,int,uchar,uchar,CVector)
int __fastcall CTaskComplexPartnerChat::CTaskComplexPartnerChat(
        int a1,
        const char *a2,
        CEntity *a3,
        char a4,
        int a5,
        char a6,
        int a7,
        char a8,
        int a9,
        arg10_5352B4 a10)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_BYTE *)(a1 + 88) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  *(_BYTE *)(a1 + 91) = a6;
  *(_BYTE *)(a1 + 93) = 0;
  *(_DWORD *)(a1 + 64) = a9;
  *(arg10_5352B4 *)(a1 + 68) = a10;
  *(_BYTE *)(a1 + 92) = 0;
  *(_WORD *)(a1 + 89) = -255;
  *(_BYTE *)(a1 + 110) = 0;
  *(_BYTE *)(a1 + 94) = 0;
  *(_DWORD *)a1 = &off_66CCE0;
  *(_DWORD *)(a1 + 56) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 56));
  *(_DWORD *)(a1 + 52) = 1204;
  *(_BYTE *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 114) = a7;
  *(_DWORD *)a1 = &off_66CDB8;
  if ( a7 )
    *(_BYTE *)(a1 + 91) = 4;
  *(_BYTE *)(a1 + 115) = a8;
  strcpy((char *)(a1 + 20), a2);
  return a1;
}


// ============================================================

// Address: 0x53536c
// Original: _ZN23CTaskComplexPartnerChatD2Ev
// Demangled: CTaskComplexPartnerChat::~CTaskComplexPartnerChat()
void __fastcall CTaskComplexPartnerChat::~CTaskComplexPartnerChat(CTaskComplexPartnerChat *this)
{
  int v2; // r1
  CEntity *v3; // r0
  _UNKNOWN **v4; // r2

  v2 = *((unsigned __int8 *)this + 114);
  *(_DWORD *)this = &off_66CDB8;
  if ( v2 && *((_BYTE *)this + 116) )
    CAEPedSpeechAudioEntity::ReleasePedConversation((CAEPedSpeechAudioEntity *)*((unsigned __int8 *)this + 116));
  v3 = (CEntity *)*((_DWORD *)this + 14);
  v4 = &off_66CCE0;
  *(_DWORD *)this = &off_66CCE0;
  if ( v3 )
  {
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 14);
    v4 = *(_UNKNOWN ***)this;
  }
  ((void (__fastcall *)(CTaskComplexPartnerChat *))v4[14])(this);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5353c4
// Original: _ZN23CTaskComplexPartnerChatD0Ev
// Demangled: CTaskComplexPartnerChat::~CTaskComplexPartnerChat()
void __fastcall CTaskComplexPartnerChat::~CTaskComplexPartnerChat(CTaskComplexPartnerChat *this)
{
  int v2; // r1
  CEntity *v3; // r0
  _UNKNOWN **v4; // r2
  void *v5; // r0

  v2 = *((unsigned __int8 *)this + 114);
  *(_DWORD *)this = &off_66CDB8;
  if ( v2 && *((_BYTE *)this + 116) )
    CAEPedSpeechAudioEntity::ReleasePedConversation((CAEPedSpeechAudioEntity *)*((unsigned __int8 *)this + 116));
  v3 = (CEntity *)*((_DWORD *)this + 14);
  v4 = &off_66CCE0;
  *(_DWORD *)this = &off_66CCE0;
  if ( v3 )
  {
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 14);
    v4 = *(_UNKNOWN ***)this;
  }
  ((void (__fastcall *)(CTaskComplexPartnerChat *))v4[14])(this);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x535420
// Original: _ZN23CTaskComplexPartnerChat13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexPartnerChat::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexPartnerChat::MakeAbortable(
        CTaskComplexPartnerChat *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CAEPedSpeechAudioEntity *v6; // r0
  bool v7; // zf

  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4) != 1 )
    return 0;
  v6 = (CAEPedSpeechAudioEntity *)*((unsigned __int8 *)this + 114);
  v7 = v6 == 0;
  if ( *((_BYTE *)this + 114) )
  {
    v6 = (CAEPedSpeechAudioEntity *)*((unsigned __int8 *)this + 116);
    v7 = v6 == 0;
  }
  if ( !v7 )
  {
    CAEPedSpeechAudioEntity::ReleasePedConversation(v6);
    *((_BYTE *)this + 116) = 0;
  }
  return 1;
}


// ============================================================

// Address: 0x535454
// Original: _ZN23CTaskComplexPartnerChat18GetPartnerSequenceEv
// Demangled: CTaskComplexPartnerChat::GetPartnerSequence(void)
CTaskComplexSequence *__fastcall CTaskComplexPartnerChat::GetPartnerSequence(CEntity **this, unsigned int a2)
{
  CTaskComplexSequence *v3; // r9
  unsigned int v4; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v5; // r4
  unsigned int v6; // r1
  float v7; // s0
  int v8; // r2
  __int16 v9; // r8
  unsigned int v10; // r1
  int v11; // r10
  int v12; // r6
  int v13; // r11
  CEntity *v14; // r4
  unsigned int v15; // r1
  CTaskComplex *v16; // r0
  CEntity *v17; // r6
  int v18; // r4
  int v19; // r5
  int v20; // r0
  CTask *v21; // r5
  unsigned int v22; // r1
  unsigned int v23; // r1
  CTaskComplex *v24; // r0
  CEntity *v25; // r6
  int v26; // r5
  CTaskSimpleStandStill *v27; // r5
  unsigned int v28; // r1
  __int16 v30; // [sp+14h] [bp-34h]

  v3 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, a2);
  CTaskComplexSequence::CTaskComplexSequence(v3);
  v5 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v4);
  CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v5, this[14], 0.5, 0.001);
  CTaskComplexSequence::AddTask(v3, v5);
  v7 = (float)((int)(float)(*((float *)this + 18)
                          + (float)(*((float *)this + 17)
                                  + (float)(*((float *)this + 16) + (float)(16 * *((char *)this + 91))))) & 0x7F)
     * 0.0078125;
  if ( !*((_BYTE *)this + 88) )
  {
    v20 = *(unsigned __int8 *)(CPedIntelligence::FindTaskByType(*((CPedIntelligence **)this[14] + 272), 1204) + 114);
    *((_BYTE *)this + 114) = v20;
    if ( v20 )
      goto LABEL_3;
LABEL_12:
    if ( *((_BYTE *)this + 88) )
    {
      v21 = (CTask *)CTask::operator new((CTask *)&dword_34, v6);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        (int)v21,
        0,
        12,
        1082130432,
        -4.0,
        (int)(float)((float)(v7 * 3000.0) + 3500.0),
        416,
        (int)"Chat",
        0);
      *(_DWORD *)v21 = &off_668888;
      CTaskComplexSequence::AddTask(v3, v21);
      v18 = CTask::operator new((CTask *)&dword_20, v22);
      CTaskSimpleStandStill::CTaskSimpleStandStill(
        (CTaskSimpleStandStill *)v18,
        (int)(float)((float)((float)(1.0 - v7) * 3000.0) + 3500.0),
        0,
        0,
        8.0);
    }
    else
    {
      v27 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v27, (int)(float)((float)(v7 * 3000.0) + 3500.0), 0, 0, 8.0);
      CTaskComplexSequence::AddTask(v3, v27);
      v18 = CTask::operator new((CTask *)&dword_34, v28);
      CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
        v18,
        0,
        12,
        1082130432,
        -4.0,
        (int)(float)((float)((float)(1.0 - v7) * 3000.0) + 3500.0),
        416,
        (int)"Chat",
        0);
      *(_DWORD *)v18 = &off_668888;
    }
    goto LABEL_20;
  }
  if ( !*((_BYTE *)this + 114) )
    goto LABEL_12;
LABEL_3:
  v8 = 3 - *((char *)this + 91);
  v9 = CAEPedSpeechAudioEntity::s_Conversation[v8];
  v10 = CAEPedSpeechAudioEntity::s_ConversationLength;
  v30 = HIWORD(CAEPedSpeechAudioEntity::s_Conversation[v8]);
  if ( v8 == CAEPedSpeechAudioEntity::s_ConversationLength )
    *((_BYTE *)this + 91) = 0;
  v11 = *((unsigned __int8 *)this + 88);
  v12 = CTask::operator new((CTask *)&dword_20, v10);
  v13 = *((char *)this + 91);
  v14 = this[14];
  CTaskComplex::CTaskComplex((CTaskComplex *)v12);
  *(_DWORD *)v12 = &off_66CE00;
  if ( v11 )
  {
    *(_DWORD *)(v12 + 16) = v14;
    *(_BYTE *)(v12 + 12) = 1;
    *(_DWORD *)(v12 + 20) = v13;
    *(_WORD *)(v12 + 24) = v9;
    if ( v14 )
      CEntity::RegisterReference(v14, (CEntity **)(v12 + 16));
    *(_DWORD *)(v12 + 28) = 0;
    *(_BYTE *)(v12 + 26) = 0;
    CTaskComplexSequence::AddTask(v3, (CTask *)v12);
    v16 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, v15);
    v17 = this[14];
    v18 = (int)v16;
    v19 = *((char *)this + 91);
    CTaskComplex::CTaskComplex(v16);
    *(_BYTE *)(v18 + 12) = 0;
    *(_DWORD *)v18 = &off_66CE00;
    *(_DWORD *)(v18 + 20) = v19;
    *(_WORD *)(v18 + 24) = v9;
    *(_DWORD *)(v18 + 16) = v17;
    if ( v17 )
      CEntity::RegisterReference(v17, (CEntity **)(v18 + 16));
    *(_DWORD *)(v18 + 28) = 0;
    *(_BYTE *)(v18 + 26) = 0;
  }
  else
  {
    *(_DWORD *)(v12 + 16) = v14;
    *(_BYTE *)(v12 + 12) = 0;
    *(_DWORD *)(v12 + 20) = v13;
    *(_WORD *)(v12 + 24) = v30;
    if ( v14 )
      CEntity::RegisterReference(v14, (CEntity **)(v12 + 16));
    *(_DWORD *)(v12 + 28) = 0;
    *(_BYTE *)(v12 + 26) = 0;
    CTaskComplexSequence::AddTask(v3, (CTask *)v12);
    v24 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, v23);
    v25 = this[14];
    v18 = (int)v24;
    v26 = *((char *)this + 91);
    CTaskComplex::CTaskComplex(v24);
    *(_BYTE *)(v18 + 12) = 1;
    *(_DWORD *)v18 = &off_66CE00;
    *(_DWORD *)(v18 + 20) = v26;
    *(_WORD *)(v18 + 24) = v30;
    *(_DWORD *)(v18 + 16) = v25;
    if ( v25 )
      CEntity::RegisterReference(v25, (CEntity **)(v18 + 16));
    *(_DWORD *)(v18 + 28) = 0;
    *(_BYTE *)(v18 + 26) = 0;
  }
LABEL_20:
  CTaskComplexSequence::AddTask(v3, (CTask *)v18);
  return v3;
}


// ============================================================

// Address: 0x5370a8
// Original: _ZNK23CTaskComplexPartnerChat5CloneEv
// Demangled: CTaskComplexPartnerChat::Clone(void)
int __fastcall CTaskComplexPartnerChat::Clone(CTaskComplexPartnerChat *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // d8
  __int64 v5; // d9
  int v6; // r9
  char v7; // r8
  CEntity *v8; // r6
  char v9; // r10
  char v10; // r11
  const char *v11; // r5

  v3 = CTask::operator new((CTask *)&dword_78, a2);
  v4 = *(_QWORD *)((char *)this + 60);
  v5 = *(_QWORD *)((char *)this + 68);
  v6 = *((unsigned __int8 *)this + 114);
  v7 = *((_BYTE *)this + 115);
  v8 = (CEntity *)*((_DWORD *)this + 14);
  v9 = *((_BYTE *)this + 91);
  v10 = *((_BYTE *)this + 88);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  v11 = (char *)this + 20;
  *(_QWORD *)(v3 + 60) = v4;
  *(_QWORD *)(v3 + 68) = v5;
  *(_BYTE *)(v3 + 88) = v10;
  *(_BYTE *)(v3 + 91) = v9;
  *(_WORD *)(v3 + 92) = 0;
  *(_WORD *)(v3 + 89) = -255;
  *(_BYTE *)(v3 + 110) = 0;
  *(_BYTE *)(v3 + 94) = 0;
  *(_DWORD *)v3 = &off_66CCE0;
  *(_DWORD *)(v3 + 56) = v8;
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 56));
  *(_DWORD *)(v3 + 52) = 1204;
  *(_BYTE *)(v3 + 116) = 0;
  *(_BYTE *)(v3 + 114) = v6;
  *(_DWORD *)v3 = &off_66CDB8;
  if ( v6 )
    *(_BYTE *)(v3 + 91) = 4;
  *(_BYTE *)(v3 + 115) = v7;
  strcpy((char *)(v3 + 20), v11);
  return v3;
}


// ============================================================

// Address: 0x537174
// Original: _ZNK23CTaskComplexPartnerChat11GetTaskTypeEv
// Demangled: CTaskComplexPartnerChat::GetTaskType(void)
int __fastcall CTaskComplexPartnerChat::GetTaskType(CTaskComplexPartnerChat *this)
{
  return 1204;
}


// ============================================================

// Address: 0x53717c
// Original: _ZN23CTaskComplexPartnerChat9SerializeEv
// Demangled: CTaskComplexPartnerChat::Serialize(void)
void __fastcall CTaskComplexPartnerChat::Serialize(CPed **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  int v8; // r2
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  CGenericGameStorage *v15; // r5
  __int64 v16; // d16
  int v17; // r2
  int v18; // r0

  v2 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CPed **))*this + 5))(this) == 1204 )
  {
    v5 = GettPoolPedRef(this[14]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)(this + 5), &dword_20, v8);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)(this + 22), (char *)&stderr + 1, v9);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = this[15];
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)((char *)this + 91), (char *)&stderr + 1, v12);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)((char *)this + 114), (char *)&stderr + 1, v13);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)((char *)this + 115), (char *)&stderr + 1, v14);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(0xCu);
    v16 = *((_QWORD *)this + 8);
    *((_DWORD *)v15 + 2) = this[18];
    *(_QWORD *)v15 = v16;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, &byte_9[3], v17);
    j_free(v15);
  }
  else
  {
    v18 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
    sub_1941D4(1204, v18);
  }
}


// ============================================================
