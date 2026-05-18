
// Address: 0x535784
// Original: _ZN16CTaskComplexChatC2EhP4CPedis
// Demangled: CTaskComplexChat::CTaskComplexChat(uchar,CPed *,int,short)
void __fastcall CTaskComplexChat::CTaskComplexChat(
        CTaskComplexChat *this,
        unsigned __int8 a2,
        CPed *a3,
        int a4,
        __int16 a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 12) = a2;
  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 12) = a5;
  *(_DWORD *)this = &off_66CE00;
  *((_DWORD *)this + 4) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 26) = 0;
}


// ============================================================

// Address: 0x5357d0
// Original: _ZN16CTaskComplexChatD2Ev
// Demangled: CTaskComplexChat::~CTaskComplexChat()
void __fastcall CTaskComplexChat::~CTaskComplexChat(CTaskComplexChat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CE00;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5357fc
// Original: _ZN16CTaskComplexChatD0Ev
// Demangled: CTaskComplexChat::~CTaskComplexChat()
void __fastcall CTaskComplexChat::~CTaskComplexChat(CTaskComplexChat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66CE00;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x53582c
// Original: _ZNK16CTaskComplexChat5CloneEv
// Demangled: CTaskComplexChat::Clone(void)
CTaskComplex *__fastcall CTaskComplexChat::Clone(CTaskComplexChat *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r5
  __int16 v6; // r9
  char v7; // r10

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *((_WORD *)this + 12);
  v7 = *((_BYTE *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *((_BYTE *)v5 + 12) = v7;
  *((_DWORD *)v5 + 5) = HIDWORD(v4);
  *((_WORD *)v5 + 12) = v6;
  *(_DWORD *)v5 = &off_66CE00;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  *((_DWORD *)v5 + 7) = 0;
  *((_BYTE *)v5 + 26) = 0;
  *((_BYTE *)v5 + 26) = *((_BYTE *)this + 26);
  return v5;
}


// ============================================================

// Address: 0x53588c
// Original: _ZN16CTaskComplexChat17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexChat::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexChat::CreateNextSubTask(CTaskComplexChat *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x535890
// Original: _ZN16CTaskComplexChat18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexChat::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexChat::CreateFirstSubTask(CTaskComplexChat *this, CPed *a2)
{
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  int v8; // r2
  CTaskSimpleStandStill *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0

  if ( *((_DWORD *)this + 4) )
  {
    if ( !*((_BYTE *)this + 12) )
    {
      v9 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v9, 999999, 0, 0, 8.0);
      return;
    }
    v3 = *((__int16 *)this + 12);
    if ( v3 >= 0 )
      CPed::Say(a2, v3, 0, 1.0, 0, 0, 0);
    CInterestingEvents::Add();
    if ( (unsigned int)(*((__int16 *)this + 12) - 164) <= 4 && ((1 << (*((_WORD *)this + 12) + 92)) & 0x19) != 0 )
    {
      v5 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0);
      switch ( v5 )
      {
        case 2:
          v7 = CTask::operator new((CTask *)&dword_20, v6);
          v8 = 168;
          goto LABEL_16;
        case 1:
          v7 = CTask::operator new((CTask *)&dword_20, v6);
          v8 = 167;
          goto LABEL_16;
        case 0:
          v7 = CTask::operator new((CTask *)&dword_20, v6);
          v8 = 166;
LABEL_16:
          CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, v8, 1082130432, 0);
          return;
      }
      v12 = CTask::operator new((CTask *)&dword_34, v6);
      v11 = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                        v12,
                        0,
                        12,
                        1082130432,
                        -4.0,
                        4000,
                        416,
                        (int)"Chat",
                        0);
    }
    else
    {
      v10 = CTask::operator new((CTask *)&dword_34, v4);
      v11 = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                        v10,
                        0,
                        12,
                        1082130432,
                        -4.0,
                        999999,
                        416,
                        (int)"Chat",
                        0);
    }
    *v11 = &off_668888;
  }
}


// ============================================================

// Address: 0x5359fc
// Original: _ZN16CTaskComplexChat14ControlSubTaskEP4CPed
// Demangled: CTaskComplexChat::ControlSubTask(CPed *)
int __fastcall CTaskComplexChat::ControlSubTask(CTaskComplexChat *this, CPed *a2)
{
  int v4; // r0
  int v5; // r6
  int TaskByType; // r6
  int v7; // r0

  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    return 0;
  if ( *((_BYTE *)this + 26) )
  {
    v5 = 0;
    if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) )
    {
      return v5;
    }
    v4 = *((_DWORD *)this + 4);
  }
  TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v4 + 1088), 1218);
  if ( TaskByType )
  {
    if ( *(_DWORD *)(TaskByType + 20) < *((_DWORD *)this + 5) )
      *((_BYTE *)this + 26) = 1;
    if ( !*(_BYTE *)(TaskByType + 26) && *((unsigned __int8 *)this + 12) == *(unsigned __int8 *)(TaskByType + 12) )
      *((_BYTE *)this + 26) = 1;
  }
  if ( *((_BYTE *)this + 12) && !CPed::GetPedTalking(a2) )
  {
    if ( TaskByType && !*(_BYTE *)(TaskByType + 26) && !*(_BYTE *)(TaskByType + 12) )
    {
      *((_BYTE *)this + 26) = 1;
      *(_BYTE *)(TaskByType + 26) = 1;
    }
    v7 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = v7 + 1;
    if ( v7 >= 50 )
    {
      *((_BYTE *)this + 26) = 1;
      if ( TaskByType )
        *(_BYTE *)(TaskByType + 26) = 1;
    }
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x537320
// Original: _ZNK16CTaskComplexChat11GetTaskTypeEv
// Demangled: CTaskComplexChat::GetTaskType(void)
int __fastcall CTaskComplexChat::GetTaskType(CTaskComplexChat *this)
{
  return 1218;
}


// ============================================================
