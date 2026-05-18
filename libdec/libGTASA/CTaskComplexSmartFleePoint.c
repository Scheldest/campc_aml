
// Address: 0x19be50
// Original: j__ZN26CTaskComplexSmartFleePointC2ERK7CVectorbfi
// Demangled: CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(CVector const&,bool,float,int)
// attributes: thunk
void __fastcall CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(
        CTaskComplexSmartFleePoint *this,
        const CVector *a2,
        bool a3,
        float a4,
        int a5)
{
  _ZN26CTaskComplexSmartFleePointC2ERK7CVectorbfi(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x5135f4
// Original: _ZN26CTaskComplexSmartFleePointC2ERK7CVectorbfi
// Demangled: CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(CVector const&,bool,float,int)
void __fastcall CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(
        CTaskComplexSmartFleePoint *this,
        const CVector *a2,
        bool a3,
        float a4,
        int a5)
{
  int v8; // r0
  __int64 v9; // d16
  int v10; // r2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)v8 = &off_66BC8C;
  v9 = *(_QWORD *)a2;
  *(_DWORD *)(v8 + 32) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(v8 + 40) = a5;
  *(float *)(v8 + 44) = a4;
  *(_QWORD *)(v8 + 48) = 7LL;
  *(_DWORD *)(v8 + 56) = 0;
  *(_BYTE *)(v8 + 36) = a3;
  *(_WORD *)(v8 + 60) = 0;
  *(_WORD *)(v8 + 64) = 0;
  *(_QWORD *)(v8 + 24) = v9;
  if ( a5 != -1 )
  {
    v10 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(v8 + 60) = 1;
    *(_DWORD *)(v8 + 52) = v10;
    *(_DWORD *)(v8 + 56) = a5;
  }
}


// ============================================================

// Address: 0x51365c
// Original: _ZN26CTaskComplexSmartFleePointD2Ev
// Demangled: CTaskComplexSmartFleePoint::~CTaskComplexSmartFleePoint()
// attributes: thunk
void __fastcall CTaskComplexSmartFleePoint::~CTaskComplexSmartFleePoint(CTaskComplexSmartFleePoint *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x513660
// Original: _ZN26CTaskComplexSmartFleePointD0Ev
// Demangled: CTaskComplexSmartFleePoint::~CTaskComplexSmartFleePoint()
void __fastcall CTaskComplexSmartFleePoint::~CTaskComplexSmartFleePoint(CTaskComplexSmartFleePoint *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x513670
// Original: _ZN26CTaskComplexSmartFleePoint13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexSmartFleePoint::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexSmartFleePoint::MakeAbortable(
        CTaskComplexSmartFleePoint *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v4; // r12

  if ( !a3 )
  {
    *((_DWORD *)this + 10) = -1;
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 60) = 1;
    *((_DWORD *)this + 13) = v4;
    *((_DWORD *)this + 14) = -1;
  }
  return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
}


// ============================================================

// Address: 0x5136a8
// Original: _ZNK26CTaskComplexSmartFleePoint23SetDefaultTaskWanderDirEP4CPed
// Demangled: CTaskComplexSmartFleePoint::SetDefaultTaskWanderDir(CPed *)
int __fastcall CTaskComplexSmartFleePoint::SetDefaultTaskWanderDir(const CTaskComplexWander **this, CPed *a2)
{
  int result; // r0
  CTaskComplexWander *v4; // r5

  result = *((_DWORD *)a2 + 272);
  v4 = *(CTaskComplexWander **)(result + 20);
  if ( v4 )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(*(_DWORD *)(result + 20));
    if ( result == 912 )
      return sub_19535C(v4, this[2]);
  }
  return result;
}


// ============================================================

// Address: 0x5136d6
// Original: _ZNK26CTaskComplexSmartFleePoint14ComputeFleeDirEP4CPed
// Demangled: CTaskComplexSmartFleePoint::ComputeFleeDir(CPed *)
int __fastcall CTaskComplexSmartFleePoint::ComputeFleeDir(CTaskComplexSmartFleePoint *this, CPed *a2)
{
  float v2; // r2
  float v3; // s0
  float v4; // s2
  float *v5; // r0

  v2 = *((float *)a2 + 5);
  v3 = *((float *)this + 6);
  v4 = *((float *)this + 7);
  v5 = (float *)(LODWORD(v2) + 48);
  if ( v2 == 0.0 )
    v5 = (float *)((char *)a2 + 4);
  return (unsigned __int8)CGeneral::GetNodeHeadingFromVector(COERCE_CGENERAL_(*v5 - v3), v5[1] - v4, v2);
}


// ============================================================

// Address: 0x513710
// Original: _ZN26CTaskComplexSmartFleePoint13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexSmartFleePoint::CreateSubTask(int,CPed *)
CTaskComplexSequence *__fastcall CTaskComplexSmartFleePoint::CreateSubTask(
        CTaskComplexSmartFleePoint *this,
        int a2,
        CPed *a3)
{
  int v4; // r4
  bool v5; // zf
  CTaskComplexSequence *v6; // r5
  unsigned int v7; // r1
  CTask *v8; // r6
  unsigned int v9; // r1
  CTaskSimpleTired *v10; // r4
  _DWORD *v11; // r0
  CTaskComplexWander *v12; // r4

  v4 = 0;
  if ( a2 > 713 )
  {
    if ( a2 == 912 )
    {
      v4 = CTask::operator new((CTask *)&word_28, 0x390u);
      CTaskComplexWander::CTaskComplexWander(
        (CTaskComplexWander *)v4,
        *((_DWORD *)this + 12),
        *((_BYTE *)this + 64),
        0,
        0.5);
      v11 = &`vtable for'CTaskComplexWanderFlee;
    }
    else
    {
      if ( a2 != 714 )
        return (CTaskComplexSequence *)v4;
      v4 = CTask::operator new((CTask *)&dword_14, 0x2CAu);
      CTaskComplex::CTaskComplex((CTaskComplex *)v4);
      *(_DWORD *)(v4 + 12) = 0;
      v11 = &`vtable for'CTaskComplexLeaveAnyCar;
      *(_WORD *)(v4 + 16) = 256;
    }
    *(_DWORD *)v4 = *v11 + 8;
    return (CTaskComplexSequence *)v4;
  }
  if ( a2 == 203 )
  {
    v12 = *(CTaskComplexWander **)(*((_DWORD *)a3 + 272) + 20);
    if ( v12 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 20))(*(_DWORD *)(*((_DWORD *)a3 + 272) + 20)) == 912 )
      CTaskComplexWander::ContinueFrom(v12, *((const CTaskComplexWander **)this + 2));
    v4 = CTask::operator new((CTask *)&dword_20, a2);
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 0, 0, 0, 8.0);
  }
  else
  {
    v5 = a2 == 244;
    if ( a2 == 244 )
    {
      v4 = 0;
      v5 = *((_DWORD *)this + 12) == 6;
    }
    if ( v5 )
    {
      v6 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, a2);
      CTaskComplexSequence::CTaskComplexSequence(v6);
      v8 = (CTask *)CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v8, 0, 165, 1082130432, 0);
      CTaskComplexSequence::AddTask(v6, v8);
      v10 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v9);
      CTaskSimpleTired::CTaskSimpleTired(v10, 2000);
      CTaskComplexSequence::AddTask(v6, v10);
      return v6;
    }
  }
  return (CTaskComplexSequence *)v4;
}


// ============================================================

// Address: 0x513824
// Original: _ZN26CTaskComplexSmartFleePoint17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleePoint::CreateNextSubTask(CPed *)
CTaskComplexSequence *__fastcall CTaskComplexSmartFleePoint::CreateNextSubTask(
        CTaskComplexSmartFleePoint *this,
        CPed *a2)
{
  int v4; // r0
  float v5; // r2
  int v7; // r0
  float *v8; // r1
  int v9; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  switch ( v4 )
  {
    case 203:
      v9 = 244;
      break;
    case 244:
      v9 = 1302;
      break;
    case 714:
      v7 = *((_DWORD *)a2 + 5);
      v8 = (float *)(v7 + 48);
      if ( !v7 )
        v8 = (float *)((char *)a2 + 4);
      *((_BYTE *)this + 64) = CGeneral::GetNodeHeadingFromVector(
                                COERCE_CGENERAL_(*v8 - *((float *)this + 6)),
                                v8[1] - *((float *)this + 7),
                                v5);
      v9 = 912;
      break;
    default:
      return 0;
  }
  return CTaskComplexSmartFleePoint::CreateSubTask(this, v9, a2);
}


// ============================================================

// Address: 0x513894
// Original: _ZN26CTaskComplexSmartFleePoint18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleePoint::CreateFirstSubTask(CPed *)
CTaskComplexSequence *__fastcall CTaskComplexSmartFleePoint::CreateFirstSubTask(
        CTaskComplexSmartFleePoint *this,
        CPed *a2)
{
  int v4; // r1
  float *v5; // r0
  char *v6; // r2
  __int64 v7; // d16
  bool v8; // zf
  int v9; // r1
  char NodeHeadingFromVector; // r0
  int v11; // r1

  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)((char *)a2 + 4);
  v6 = (char *)a2 + 4;
  if ( v4 )
    v6 = (char *)(v4 + 48);
  v7 = *(_QWORD *)v6;
  *((_DWORD *)this + 5) = *((_DWORD *)v6 + 2);
  *(_QWORD *)((char *)this + 12) = v7;
  v8 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v8 = *((_DWORD *)a2 + 356) == 0;
  if ( v8 )
  {
    v9 = *((_DWORD *)a2 + 5);
    if ( v9 )
      v5 = (float *)(v9 + 48);
    NodeHeadingFromVector = CGeneral::GetNodeHeadingFromVector(
                              COERCE_CGENERAL_(*v5 - *((float *)this + 6)),
                              v5[1] - *((float *)this + 7),
                              *(float *)&v6);
    v11 = 912;
    *((_BYTE *)this + 64) = NodeHeadingFromVector;
  }
  else
  {
    v11 = 714;
  }
  return CTaskComplexSmartFleePoint::CreateSubTask(this, v11, a2);
}


// ============================================================

// Address: 0x51390c
// Original: _ZN26CTaskComplexSmartFleePoint14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSmartFleePoint::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSmartFleePoint::ControlSubTask(
        CTaskComplexSmartFleePoint *this,
        CPed *a2)
{
  CTaskSimpleStandStill *v4; // r6
  float v5; // r2
  CTaskComplexWander *v6; // r4
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  float *v10; // r1
  unsigned __int8 NodeHeadingFromVector; // r0
  unsigned int v12; // r0
  unsigned int v13; // r1
  float *v14; // r1
  int v15; // r0
  float v16; // s12
  float v17; // s4
  float v18; // s2
  int v19; // r0
  CTaskComplexWander *v20; // r4

  v4 = (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(CTaskSimpleStandStill *))(*(_DWORD *)v4 + 20))(v4) == 912 )
  {
    if ( *((_BYTE *)this + 36) )
      CPed::Say(a2, 0x15Bu, 0, 0.1, 0, 0, 0);
    v6 = (CTaskComplexWander *)*((_DWORD *)this + 2);
    *((_DWORD *)v6 + 3) = *((_DWORD *)this + 12);
    if ( *((_BYTE *)this + 65) )
    {
      v7 = *((unsigned __int8 *)this + 60);
      *((_BYTE *)this + 65) = 0;
      if ( v7 )
      {
        HIDWORD(v8) = *((_DWORD *)this + 10);
        LODWORD(v8) = CTimer::m_snTimeInMilliseconds;
        *(_QWORD *)((char *)this + 52) = v8;
        *((_BYTE *)this + 60) = 1;
      }
      v9 = *((_DWORD *)a2 + 5);
      v10 = (float *)(v9 + 48);
      if ( !v9 )
        v10 = (float *)((char *)a2 + 4);
      NodeHeadingFromVector = CGeneral::GetNodeHeadingFromVector(
                                COERCE_CGENERAL_(*v10 - *((float *)this + 6)),
                                v10[1] - *((float *)this + 7),
                                v5);
      if ( *((unsigned __int8 *)this + 64) != NodeHeadingFromVector )
      {
        *((_BYTE *)this + 64) = NodeHeadingFromVector;
        CTaskComplexWander::SetDir(v6, NodeHeadingFromVector);
      }
LABEL_27:
      v4 = (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
      goto LABEL_28;
    }
    if ( !*((_BYTE *)this + 60)
      || (!*((_BYTE *)this + 61)
        ? (v13 = *((_DWORD *)this + 13), v12 = CTimer::m_snTimeInMilliseconds)
        : (v12 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 61) = 0, *((_DWORD *)this + 13) = v12, v13 = v12),
          v14 = (float *)(v13 + *((_DWORD *)this + 14)),
          (unsigned int)v14 > v12) )
    {
      v15 = *((_DWORD *)a2 + 5);
      v14 = (float *)(v15 + 48);
      v16 = *((float *)this + 11);
      if ( !v15 )
        v14 = (float *)((char *)a2 + 4);
      v17 = v14[1];
      v18 = v14[2];
      if ( (float)((float)((float)((float)(*((float *)this + 6) - *v14) * (float)(*((float *)this + 6) - *v14))
                         + (float)((float)(*((float *)this + 7) - v17) * (float)(*((float *)this + 7) - v17)))
                 + (float)((float)(*((float *)this + 8) - v18) * (float)(*((float *)this + 8) - v18))) <= (float)(v16 * v16) )
        goto LABEL_27;
      if ( (float)((float)((float)((float)(*((float *)this + 3) - *v14) * (float)(*((float *)this + 3) - *v14))
                         + (float)((float)(*((float *)this + 4) - v17) * (float)(*((float *)this + 4) - v17)))
                 + (float)((float)(*((float *)this + 5) - v18) * (float)(*((float *)this + 5) - v18))) <= (float)(v16 * v16) )
      {
LABEL_28:
        if ( *((_DWORD *)this + 12) == 6
          && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
          && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 5 )
        {
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"TaskSmartFleePoint",
            a2,
            0,
            2000,
            -1,
            (int)this + 24,
            0,
            0.25,
            500,
            3,
            0);
        }
        return v4;
      }
    }
    v19 = *((_DWORD *)a2 + 272);
    v20 = *(CTaskComplexWander **)(v19 + 20);
    if ( v20 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v20 + 20))(*(_DWORD *)(v19 + 20)) == 912 )
      CTaskComplexWander::ContinueFrom(v20, *((const CTaskComplexWander **)this + 2));
    v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v14);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 0, 0, 0, 8.0);
    goto LABEL_28;
  }
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  return (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x513ba0
// Original: _ZN26CTaskComplexSmartFleePoint15SetFleePositionERK7CVectorfb
// Demangled: CTaskComplexSmartFleePoint::SetFleePosition(CVector const&,float,bool)
int __fastcall CTaskComplexSmartFleePoint::SetFleePosition(int this, const CVector *a2, float a3, bool a4)
{
  __int64 v4; // d16

  if ( *(float *)(this + 24) != *(float *)a2
    || *(float *)(this + 28) != *((float *)a2 + 1)
    || *(float *)(this + 32) != *((float *)a2 + 2)
    || *(float *)(this + 44) != a3 )
  {
    v4 = *(_QWORD *)a2;
    *(_DWORD *)(this + 32) = *((_DWORD *)a2 + 2);
    *(_QWORD *)(this + 24) = v4;
    *(_BYTE *)(this + 65) = 1;
    *(float *)(this + 44) = a3;
  }
  *(_BYTE *)(this + 36) = a4;
  return this;
}


// ============================================================

// Address: 0x514c34
// Original: _ZNK26CTaskComplexSmartFleePoint5CloneEv
// Demangled: CTaskComplexSmartFleePoint::Clone(void)
int __fastcall CTaskComplexSmartFleePoint::Clone(CTaskComplexSmartFleePoint *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  char v4; // r8
  __int64 v5; // kr00_8
  int result; // r0
  __int64 v7; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_44, a2);
  v4 = *((_BYTE *)this + 36);
  v5 = *((_QWORD *)this + 5);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)result = &off_66BC8C;
  v7 = *((_QWORD *)this + 3);
  *(_DWORD *)(result + 32) = *((_DWORD *)this + 8);
  *(_QWORD *)(result + 40) = v5;
  *(_DWORD *)(result + 48) = 7;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_BYTE *)(result + 36) = v4;
  *(_WORD *)(result + 60) = 0;
  *(_WORD *)(result + 64) = 0;
  *(_QWORD *)(result + 24) = v7;
  if ( (_DWORD)v5 != -1 )
  {
    *(_DWORD *)(result + 52) = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(result + 56) = v5;
    *(_BYTE *)(result + 60) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x514ca4
// Original: _ZNK26CTaskComplexSmartFleePoint11GetTaskTypeEv
// Demangled: CTaskComplexSmartFleePoint::GetTaskType(void)
int __fastcall CTaskComplexSmartFleePoint::GetTaskType(CTaskComplexSmartFleePoint *this)
{
  return 910;
}


// ============================================================
