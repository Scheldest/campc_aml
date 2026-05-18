
// Address: 0x5362cc
// Original: _ZN22CTaskComplexWaitForPedC2EP4CPedfih
// Demangled: CTaskComplexWaitForPed::CTaskComplexWaitForPed(CPed *,float,int,uchar)
void __fastcall CTaskComplexWaitForPed::CTaskComplexWaitForPed(
        CTaskComplexWaitForPed *this,
        CPed *a2,
        float a3,
        int a4,
        unsigned __int8 a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 18) = 0;
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_BYTE *)this + 24) = a5;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_66CEC0;
  *((_DWORD *)this + 3) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x536314
// Original: _ZN22CTaskComplexWaitForPedD2Ev
// Demangled: CTaskComplexWaitForPed::~CTaskComplexWaitForPed()
void __fastcall CTaskComplexWaitForPed::~CTaskComplexWaitForPed(CTaskComplexWaitForPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66CEC0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x536340
// Original: _ZN22CTaskComplexWaitForPedD0Ev
// Demangled: CTaskComplexWaitForPed::~CTaskComplexWaitForPed()
void __fastcall CTaskComplexWaitForPed::~CTaskComplexWaitForPed(CTaskComplexWaitForPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66CEC0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x536370
// Original: _ZN22CTaskComplexWaitForPed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexWaitForPed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexWaitForPed::MakeAbortable(CTaskComplexWaitForPed *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x536374
// Original: _ZN22CTaskComplexWaitForPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWaitForPed::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWaitForPed::CreateNextSubTask(CTaskComplexWaitForPed *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x536378
// Original: _ZN22CTaskComplexWaitForPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWaitForPed::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexWaitForPed::CreateFirstSubTask(CTaskComplexWaitForPed *this, CPed *a2)
{
  int v2; // r12
  int v3; // r2
  CTaskSimpleStandStill *v4; // r0

  if ( *((_DWORD *)this + 3) )
  {
    v2 = *((_DWORD *)this + 5);
    v3 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 36) = 1;
    *((_DWORD *)this + 7) = v3;
    *((_DWORD *)this + 8) = v2;
    *((_DWORD *)this + 10) = 0;
    v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)this);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 999999, 0, 0, 8.0);
  }
}


// ============================================================

// Address: 0x5363cc
// Original: _ZN22CTaskComplexWaitForPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWaitForPed::ControlSubTask(CPed *)
int __fastcall CTaskComplexWaitForPed::ControlSubTask(CTaskComplexWaitForPed *this, CPed *a2)
{
  CPed *v4; // r0
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r6
  int TaskByType; // r0
  int v9; // r0
  float v10; // s0
  float v11; // s2
  int v12; // r1
  float v13; // s4
  float *v14; // r2
  int v15; // r2
  float *v16; // r3
  int v18; // r3
  float *v19; // r2
  float *v20; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v22; // r1
  int v23; // r0
  int v24; // r1
  __int64 v25; // [sp+0h] [bp-38h]
  float v26[2]; // [sp+Ch] [bp-2Ch] BYREF
  float v27; // [sp+14h] [bp-24h]

  v4 = (CPed *)*((_DWORD *)this + 3);
  if ( !v4 )
    return 0;
  if ( CPed::IsAlive(v4) )
  {
    if ( *((_BYTE *)this + 36) )
    {
      if ( *((_BYTE *)this + 37) )
      {
        v5 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 37) = 0;
        *((_DWORD *)this + 7) = v5;
        v6 = v5;
      }
      else
      {
        v6 = *((_DWORD *)this + 7);
        v5 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v6 + *((_DWORD *)this + 8) <= v5 )
        return 0;
    }
    TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*((_DWORD *)this + 3) + 1088), 1208);
    if ( TaskByType )
    {
      v25 = *(_QWORD *)(TaskByType + 20);
      operator*();
      v9 = *((_DWORD *)this + 3);
      v10 = v26[0];
      v11 = v26[1];
      v12 = *(_DWORD *)(v9 + 20);
      v13 = v27;
      v14 = (float *)(v12 + 48);
    }
    else
    {
      v9 = *((_DWORD *)this + 3);
      v15 = *((_DWORD *)a2 + 5);
      v12 = *(_DWORD *)(v9 + 20);
      v16 = (float *)(v15 + 48);
      if ( !v15 )
        v16 = (float *)((char *)a2 + 4);
      v14 = (float *)(v12 + 48);
      v10 = *v16;
      v11 = v16[1];
      v13 = v16[2];
    }
    if ( !v12 )
      v14 = (float *)(v9 + 4);
    if ( (float)((float)((float)((float)(v10 - *v14) * (float)(v10 - *v14))
                       + (float)((float)(v11 - v14[1]) * (float)(v11 - v14[1])))
               + (float)((float)(v13 - v14[2]) * (float)(v13 - v14[2]))) < (float)(*((float *)this + 4)
                                                                                 * *((float *)this + 4)) )
      return 0;
    if ( *((_BYTE *)this + 24) && !*((_DWORD *)this + 10) )
    {
      v18 = *((_DWORD *)a2 + 5);
      v19 = (float *)(v12 + 48);
      if ( !v12 )
        v19 = (float *)(v9 + 4);
      v20 = (float *)(v18 + 48);
      if ( !v18 )
        v20 = (float *)((char *)a2 + 4);
      RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                               COERCE_CGENERAL_(*v19 - *v20),
                                               v19[1] - v20[1],
                                               0.0,
                                               0.0,
                                               *(float *)&v25);
      *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v22);
    }
    v23 = *((_DWORD *)this + 10);
    v7 = *((_DWORD *)this + 2);
    v24 = v23 + 1;
    if ( v23 > 9 )
      v24 = 0;
    *((_DWORD *)this + 10) = v24;
  }
  else
  {
    v7 = 0;
    CEventDeadPed::CEventDeadPed((CEventDeadPed *)v26, *((CPed **)this + 3), 0, CTimer::m_snTimeInMilliseconds);
    HIWORD(v27) = 600;
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v26, 0);
    CEventDeadPed::~CEventDeadPed((CEventDeadPed *)v26);
  }
  return v7;
}


// ============================================================

// Address: 0x53741c
// Original: _ZNK22CTaskComplexWaitForPed5CloneEv
// Demangled: CTaskComplexWaitForPed::Clone(void)
int __fastcall CTaskComplexWaitForPed::Clone(CTaskComplexWaitForPed *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  __int64 v5; // r8

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 36) = 0;
  *(_QWORD *)(v3 + 16) = v5;
  *(_BYTE *)(v3 + 24) = (_BYTE)this;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66CEC0;
  *(_DWORD *)(v3 + 12) = v4;
  CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x53746c
// Original: _ZNK22CTaskComplexWaitForPed11GetTaskTypeEv
// Demangled: CTaskComplexWaitForPed::GetTaskType(void)
int __fastcall CTaskComplexWaitForPed::GetTaskType(CTaskComplexWaitForPed *this)
{
  return 1213;
}


// ============================================================
