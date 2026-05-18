
// Address: 0x195e4c
// Original: j__ZN39CTaskComplexGoToPointAndStandStillTimedC2EiRK7CVectorffi
// Demangled: CTaskComplexGoToPointAndStandStillTimed::CTaskComplexGoToPointAndStandStillTimed(int,CVector const&,float,float,int)
// attributes: thunk
void __fastcall CTaskComplexGoToPointAndStandStillTimed::CTaskComplexGoToPointAndStandStillTimed(
        CTaskComplexGoToPointAndStandStillTimed *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        int a6)
{
  _ZN39CTaskComplexGoToPointAndStandStillTimedC2EiRK7CVectorffi(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x51d820
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimedC2EiRK7CVectorffi
// Demangled: CTaskComplexGoToPointAndStandStillTimed::CTaskComplexGoToPointAndStandStillTimed(int,CVector const&,float,float,int)
void __fastcall CTaskComplexGoToPointAndStandStillTimed::CTaskComplexGoToPointAndStandStillTimed(
        CTaskComplexGoToPointAndStandStillTimed *this,
        int a2,
        const CVector *a3,
        float a4,
        float a5,
        int a6)
{
  int v9; // r0
  float v10; // s2
  char v11; // r3
  __int64 v12; // d16

  CTaskComplex::CTaskComplex(this);
  v10 = *(float *)(v9 + 16);
  v11 = *(_BYTE *)(v9 + 36);
  *(_DWORD *)(v9 + 12) = a2;
  *(_BYTE *)(v9 + 36) = v11 & 0xE4;
  *(_DWORD *)v9 = &off_66C14C;
  if ( v10 != *(float *)a3
    || *(float *)(v9 + 20) != *((float *)a3 + 1)
    || *(float *)(v9 + 24) != *((float *)a3 + 2)
    || *(float *)(v9 + 32) != a5 )
  {
    v12 = *(_QWORD *)a3;
    *(_DWORD *)(v9 + 24) = *((_DWORD *)a3 + 2);
    *(float *)(v9 + 28) = a4;
    *(float *)(v9 + 32) = a5;
    *(_BYTE *)(v9 + 36) = v11 & 0xE0 | 4;
    *(_QWORD *)(v9 + 16) = v12;
  }
  *(_DWORD *)(v9 + 40) = a6;
  *(_WORD *)(v9 + 52) = 0;
  *(_DWORD *)(v9 + 44) = 0;
  *(_DWORD *)(v9 + 48) = 0;
  *(_DWORD *)v9 = &off_66C188;
}


// ============================================================

// Address: 0x51d8d8
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimedD0Ev
// Demangled: CTaskComplexGoToPointAndStandStillTimed::~CTaskComplexGoToPointAndStandStillTimed()
void __fastcall CTaskComplexGoToPointAndStandStillTimed::~CTaskComplexGoToPointAndStandStillTimed(
        CTaskComplexGoToPointAndStandStillTimed *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x51d8e8
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGoToPointAndStandStillTimed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGoToPointAndStandStillTimed::MakeAbortable(
        CTaskComplexGoToPointAndStandStillTimed *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v7; // r0
  const CEvent *v8; // r1
  bool v9; // zf
  int v10; // r8
  __int64 v11; // kr00_8

  v7 = (*(int (__fastcall **)(_DWORD, CPed *, int))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2, a3);
  v9 = a3 == 1;
  v10 = v7;
  if ( a3 == 1 )
    v9 = v7 == 1;
  if ( v9 && (!a4 || !CEventHandler::IsTemporaryEvent(a4, v8)) )
  {
    if ( *((_BYTE *)this + 52) )
    {
      v11 = *(_QWORD *)((char *)this + 44);
      *((_BYTE *)this + 53) = 1;
      *((_DWORD *)this + 12) = HIDWORD(v11) - CTimer::m_snTimeInMilliseconds + v11;
    }
  }
  return v10;
}


// ============================================================

// Address: 0x51d944
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStillTimed::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexGoToPointAndStandStillTimed::CreateFirstSubTask(
        CTaskComplexGoToPointAndStandStillTimed *this,
        CPed *a2)
{
  int v3; // r1
  int v4; // r3
  int v5; // r1

  v3 = *((_DWORD *)this + 10);
  if ( v3 >= 0 )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 52) = 1;
    *((_DWORD *)this + 11) = v4;
    *((_DWORD *)this + 12) = v3;
  }
  *((_BYTE *)this + 36) &= ~4u;
  v5 = 704;
  if ( (*((_DWORD *)a2 + 289) & 0x100) == 0 )
    v5 = 900;
  CTaskComplexGoToPointAndStandStill::CreateSubTask(this, v5, a2);
}


// ============================================================

// Address: 0x51d984
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGoToPointAndStandStillTimed::ControlSubTask(CPed *)
int __fastcall CTaskComplexGoToPointAndStandStillTimed::ControlSubTask(
        CTaskComplexGoToPointAndStandStillTimed *this,
        CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  CVector *v6; // r1
  __int64 v7; // kr00_8
  int v8; // r3
  int v9; // r0
  _DWORD *v10; // r1

  if ( *((_BYTE *)this + 52) )
  {
    if ( *((_BYTE *)this + 53) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 53) = 0;
      *((_DWORD *)this + 11) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 11);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 12) <= v4
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203
      && CPedPlacement::FindZCoorForPed((CTaskComplexGoToPointAndStandStillTimed *)((char *)this + 16), v6) == 1 )
    {
      v7 = *((_QWORD *)this + 2);
      v8 = *((_DWORD *)a2 + 5);
      v9 = *((_DWORD *)this + 6);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 48) = v7;
        *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v7);
        v10 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
      }
      else
      {
        *(_QWORD *)((char *)a2 + 4) = v7;
        v10 = (_DWORD *)((char *)a2 + 12);
      }
      *v10 = v9;
    }
  }
  return CTaskComplexGoToPointAndStandStill::ControlSubTask(this, a2);
}


// ============================================================

// Address: 0x51da08
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimed9StopTimerEPK6CEvent
// Demangled: CTaskComplexGoToPointAndStandStillTimed::StopTimer(CEvent const*)
int __fastcall CTaskComplexGoToPointAndStandStillTimed::StopTimer(
        CTaskComplexGoToPointAndStandStillTimed *this,
        const CEvent *a2)
{
  int result; // r0
  __int64 v4; // kr00_8

  result = CEventHandler::IsTemporaryEvent(a2, a2);
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 52);
    if ( *((_BYTE *)this + 52) )
    {
      v4 = *(_QWORD *)((char *)this + 44);
      *((_BYTE *)this + 53) = 1;
      result = HIDWORD(v4) - CTimer::m_snTimeInMilliseconds + v4;
      *((_DWORD *)this + 12) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x526a7c
// Original: _ZN39CTaskComplexGoToPointAndStandStillTimedD2Ev
// Demangled: CTaskComplexGoToPointAndStandStillTimed::~CTaskComplexGoToPointAndStandStillTimed()
// attributes: thunk
void __fastcall CTaskComplexGoToPointAndStandStillTimed::~CTaskComplexGoToPointAndStandStillTimed(
        CTaskComplexGoToPointAndStandStillTimed *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x527670
// Original: _ZNK39CTaskComplexGoToPointAndStandStillTimed5CloneEv
// Demangled: CTaskComplexGoToPointAndStandStillTimed::Clone(void)
int __fastcall CTaskComplexGoToPointAndStandStillTimed::Clone(
        CTaskComplexGoToPointAndStandStillTimed *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r8
  float v5; // s16
  int v6; // r6
  int v7; // r5
  int result; // r0
  char v9; // r2
  float v10; // s0
  __int64 v11; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_DWORD *)this + 10);
  v5 = *((float *)this + 8);
  v6 = *((_DWORD *)this + 7);
  v7 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v7;
  v9 = *(_BYTE *)(result + 36);
  v10 = *(float *)(result + 16);
  *(_DWORD *)result = &off_66C14C;
  *(_BYTE *)(result + 36) = v9 & 0xE4;
  if ( v10 != *((float *)this + 4)
    || *(float *)(result + 20) != *((float *)this + 5)
    || *(float *)(result + 24) != *((float *)this + 6)
    || *(float *)(result + 32) != v5 )
  {
    v11 = *((_QWORD *)this + 2);
    *(_DWORD *)(result + 24) = *((_DWORD *)this + 6);
    *(_QWORD *)(result + 16) = v11;
    *(float *)(result + 32) = v5;
    *(_DWORD *)(result + 28) = v6;
    *(_BYTE *)(result + 36) = v9 & 0xE0 | 4;
  }
  *(_DWORD *)(result + 40) = v4;
  *(_WORD *)(result + 52) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)result = &off_66C188;
  return result;
}


// ============================================================
