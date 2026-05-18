
// Address: 0x190248
// Original: j__ZN34CTaskComplexInvestigateDisturbanceC2ERK7CVectorP7CEntity
// Demangled: CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(CVector const&,CEntity *)
// attributes: thunk
void __fastcall CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(
        CTaskComplexInvestigateDisturbance *this,
        const CVector *a2,
        CEntity *a3)
{
  _ZN34CTaskComplexInvestigateDisturbanceC2ERK7CVectorP7CEntity(this, a2, a3);
}


// ============================================================

// Address: 0x5263c0
// Original: _ZN34CTaskComplexInvestigateDisturbanceC2ERK7CVectorP7CEntity
// Demangled: CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(CVector const&,CEntity *)
void __fastcall CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(
        CTaskComplexInvestigateDisturbance *this,
        const CVector *a2,
        CEntity *a3)
{
  __int64 v6; // d16
  int v7; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66C524;
  v6 = *(_QWORD *)a2;
  v7 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 5) = v7;
  *(_QWORD *)((char *)this + 12) = v6;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 6);
}


// ============================================================

// Address: 0x526408
// Original: _ZN34CTaskComplexInvestigateDisturbanceD2Ev
// Demangled: CTaskComplexInvestigateDisturbance::~CTaskComplexInvestigateDisturbance()
void __fastcall CTaskComplexInvestigateDisturbance::~CTaskComplexInvestigateDisturbance(
        CTaskComplexInvestigateDisturbance *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66C524;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x526434
// Original: _ZN34CTaskComplexInvestigateDisturbanceD0Ev
// Demangled: CTaskComplexInvestigateDisturbance::~CTaskComplexInvestigateDisturbance()
void __fastcall CTaskComplexInvestigateDisturbance::~CTaskComplexInvestigateDisturbance(
        CTaskComplexInvestigateDisturbance *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66C524;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x526464
// Original: _ZN34CTaskComplexInvestigateDisturbance13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexInvestigateDisturbance::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexInvestigateDisturbance::MakeAbortable(
        CTaskComplexInvestigateDisturbance *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r0

  v4 = *((_DWORD *)this + 2);
  if ( v4 )
    return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v4 + 28))(v4, a2, a3, a4);
  else
    return 1;
}


// ============================================================

// Address: 0x526480
// Original: _ZN34CTaskComplexInvestigateDisturbance17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDisturbance::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexInvestigateDisturbance::CreateNextSubTask(
        CTaskComplexInvestigateDisturbance *this,
        CPed *a2)
{
  int v4; // r0
  int v5; // r4
  unsigned int v6; // r1
  unsigned int v7; // r1
  CEntity *v8; // r8
  char v9; // r3
  __int64 v10; // d16
  float v11; // s0
  char v12; // r1
  __int64 v13; // d16

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 0;
  if ( v4 <= 906 )
  {
    if ( v4 == 400 )
    {
      CPed::Say(a2, 0xCEu, 0, 1.0, 0, 0, 0);
      v5 = CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
      *(_DWORD *)v5 = &off_665870;
      return v5;
    }
    v6 = 903;
    if ( v4 != 903 )
      return v5;
    goto LABEL_7;
  }
  if ( v4 == 920 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      v5 = CTask::operator new((CTask *)&dword_58, 0x38Au);
      v8 = (CEntity *)*((_DWORD *)this + 6);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      *(_QWORD *)(v5 + 24) = 0x400000003F000000LL;
      *(_QWORD *)(v5 + 32) = 0x4000000000000000LL;
      *(_QWORD *)(v5 + 16) = 0x3E80000C350LL;
      *(_WORD *)(v5 + 48) = 0;
      *(_WORD *)(v5 + 60) = 0;
      *(_DWORD *)(v5 + 40) = 0;
      *(_DWORD *)(v5 + 44) = 0;
      *(_DWORD *)(v5 + 52) = 0;
      *(_DWORD *)(v5 + 56) = 0;
      *(_DWORD *)(v5 + 72) = 0;
      *(_DWORD *)(v5 + 76) = 0;
      *(_DWORD *)(v5 + 80) = 6;
      v9 = *(_BYTE *)(v5 + 84);
      *(_DWORD *)v5 = &off_668A68;
      *(_DWORD *)(v5 + 64) = &off_66D40C;
      *(_BYTE *)(v5 + 84) = v9 & 0xF0 | 3;
      *(_DWORD *)(v5 + 68) = 0;
      *(_DWORD *)(v5 + 12) = v8;
      if ( v8 )
        CEntity::RegisterReference(v8, (CEntity **)(v5 + 12));
      v10 = *(_QWORD *)((char *)this + 12);
      *(_DWORD *)(v5 + 76) = *((_DWORD *)this + 5);
      *(_QWORD *)(v5 + 68) = v10;
    }
    else
    {
      v5 = CTask::operator new((CTask *)&word_28, 0x38Au);
      CTaskComplex::CTaskComplex((CTaskComplex *)v5);
      v11 = *(float *)(v5 + 16);
      *(_DWORD *)(v5 + 12) = 4;
      v12 = *(_BYTE *)(v5 + 36);
      *(_DWORD *)v5 = &off_66C14C;
      *(_BYTE *)(v5 + 36) = v12 & 0xE4;
      if ( v11 != *((float *)this + 3)
        || *(float *)(v5 + 20) != *((float *)this + 4)
        || *(float *)(v5 + 24) != *((float *)this + 5)
        || *(float *)(v5 + 32) != 2.0 )
      {
        v13 = *(_QWORD *)((char *)this + 12);
        *(_DWORD *)(v5 + 24) = *((_DWORD *)this + 5);
        *(_QWORD *)(v5 + 16) = v13;
        *(_DWORD *)(v5 + 28) = 1056964608;
        *(_DWORD *)(v5 + 32) = 0x40000000;
        *(_BYTE *)(v5 + 36) = v12 & 0xE0 | 4;
      }
    }
  }
  else
  {
    v6 = 907;
    if ( v4 == 907 )
    {
LABEL_7:
      v5 = CTask::operator new((CTask *)&dword_20, v6);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, *((_DWORD *)a2 + 312), 4, 1082130432, 0);
    }
  }
  return v5;
}


// ============================================================

// Address: 0x526684
// Original: _ZN34CTaskComplexInvestigateDisturbance18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDisturbance::CreateFirstSubTask(CPed *)
CTaskComplex *__fastcall CTaskComplexInvestigateDisturbance::CreateFirstSubTask(
        CTaskComplexInvestigateDisturbance *this,
        CPed *a2)
{
  int CurrentEvent; // r0
  int v5; // r6
  unsigned __int16 v6; // r1
  int v7; // r0
  float *v8; // r1
  float v9; // s0
  float v10; // s4
  unsigned int v11; // r1
  int v12; // r6
  CTaskComplex *v13; // r0
  CTaskComplex *v14; // r5
  CEntity *v15; // r4
  __int64 v16; // d16
  float v18; // [sp+24h] [bp-24h] BYREF
  float v19; // [sp+28h] [bp-20h]
  float v20; // [sp+2Ch] [bp-1Ch]

  CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
  v5 = CurrentEvent;
  if ( CurrentEvent )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) == 62 )
    {
      if ( (float)((float)((float)rand() * 4.6566e-10) + 0.0) >= 0.2 )
      {
        v6 = 202;
LABEL_9:
        CPed::Say(a2, v6, 0, 1.0, 0, 0, 0);
        goto LABEL_10;
      }
    }
    else
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5) != 63 )
        goto LABEL_10;
      if ( (float)((float)((float)rand() * 4.6566e-10) + 0.0) >= 0.2 )
      {
        v6 = 203;
        goto LABEL_9;
      }
    }
    v6 = 204;
    goto LABEL_9;
  }
LABEL_10:
  v7 = *((_DWORD *)a2 + 5);
  v8 = (float *)(v7 + 48);
  if ( !v7 )
    v8 = (float *)((char *)a2 + 4);
  v9 = *((float *)this + 3) - *v8;
  v10 = *((float *)this + 5) - v8[2];
  v19 = *((float *)this + 4) - v8[1];
  v18 = v9;
  v20 = v10;
  CVector::Normalise((CVector *)&v18);
  if ( (float)((float)((float)(v18 * *(float *)(*((_DWORD *)a2 + 5) + 16))
                     + (float)(v19 * *(float *)(*((_DWORD *)a2 + 5) + 20)))
             + (float)(v20 * *(float *)(*((_DWORD *)a2 + 5) + 24))) >= 0.707 )
    CPedIntelligence::SetTaskDuckSecondary(*((CPedIntelligence **)a2 + 272), 0x1388u);
  else
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"TaskInvDisturb",
      a2,
      0,
      5000,
      -1,
      (int)this + 12,
      0,
      0.25,
      500,
      3,
      0);
  v12 = *((_DWORD *)this + 6);
  v13 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, v11);
  v14 = v13;
  if ( v12 )
  {
    v15 = (CEntity *)*((_DWORD *)this + 6);
    CTaskComplex::CTaskComplex(v13);
    *((_BYTE *)v14 + 16) = 1;
    *(_DWORD *)v14 = &off_66C43C;
    *((_DWORD *)v14 + 3) = v15;
    if ( v15 )
      CEntity::RegisterReference(v15, (CEntity **)v14 + 3);
  }
  else
  {
    CTaskComplex::CTaskComplex(v13);
    *((_DWORD *)v14 + 3) = 0;
    *((_BYTE *)v14 + 16) = 0;
    *(_DWORD *)v14 = &off_66C43C;
    v16 = *(_QWORD *)((char *)this + 12);
    *((_DWORD *)v14 + 7) = *((_DWORD *)this + 5);
    *(_QWORD *)((char *)v14 + 20) = v16;
  }
  *((_DWORD *)v14 + 8) = 1077936128;
  *((_DWORD *)v14 + 9) = 1045220557;
  return v14;
}


// ============================================================

// Address: 0x52689c
// Original: _ZN34CTaskComplexInvestigateDisturbance14ControlSubTaskEP4CPed
// Demangled: CTaskComplexInvestigateDisturbance::ControlSubTask(CPed *)
int __fastcall CTaskComplexInvestigateDisturbance::ControlSubTask(CTaskComplexInvestigateDisturbance *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5287e0
// Original: _ZNK34CTaskComplexInvestigateDisturbance5CloneEv
// Demangled: CTaskComplexInvestigateDisturbance::Clone(void)
int __fastcall CTaskComplexInvestigateDisturbance::Clone(CTaskComplexInvestigateDisturbance *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // d16

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 6);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)v3 = &off_66C524;
  v5 = *(_QWORD *)((char *)this + 12);
  *(_DWORD *)(v3 + 20) = *((_DWORD *)this + 5);
  *(_QWORD *)(v3 + 12) = v5;
  *(_DWORD *)(v3 + 24) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 24));
  return v3;
}


// ============================================================

// Address: 0x52882c
// Original: _ZNK34CTaskComplexInvestigateDisturbance11GetTaskTypeEv
// Demangled: CTaskComplexInvestigateDisturbance::GetTaskType(void)
int __fastcall CTaskComplexInvestigateDisturbance::GetTaskType(CTaskComplexInvestigateDisturbance *this)
{
  return 935;
}


// ============================================================
