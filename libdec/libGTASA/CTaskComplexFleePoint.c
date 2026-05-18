
// Address: 0x192608
// Original: j__ZN21CTaskComplexFleePointC2ERK7CVectorbfi
// Demangled: CTaskComplexFleePoint::CTaskComplexFleePoint(CVector const&,bool,float,int)
// attributes: thunk
void __fastcall CTaskComplexFleePoint::CTaskComplexFleePoint(
        CTaskComplexFleePoint *this,
        const CVector *a2,
        bool a3,
        float a4,
        int a5)
{
  _ZN21CTaskComplexFleePointC2ERK7CVectorbfi(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19a654
// Original: j__ZN21CTaskComplexFleePoint13CreateSubTaskEi
// Demangled: CTaskComplexFleePoint::CreateSubTask(int)
// attributes: thunk
int __fastcall CTaskComplexFleePoint::CreateSubTask(CTaskComplexFleePoint *this, int a2)
{
  return _ZN21CTaskComplexFleePoint13CreateSubTaskEi(this, a2);
}


// ============================================================

// Address: 0x5128d0
// Original: _ZN21CTaskComplexFleePointC2ERK7CVectorbfi
// Demangled: CTaskComplexFleePoint::CTaskComplexFleePoint(CVector const&,bool,float,int)
void __fastcall CTaskComplexFleePoint::CTaskComplexFleePoint(
        CTaskComplexFleePoint *this,
        const CVector *a2,
        bool a3,
        float a4,
        int a5)
{
  int v8; // r0
  __int64 v9; // d16
  int v10; // r2

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)v8 = &off_66BC14;
  v9 = *(_QWORD *)a2;
  *(_DWORD *)(v8 + 20) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(v8 + 36) = a5;
  *(_DWORD *)(v8 + 40) = 0;
  *(_DWORD *)(v8 + 44) = 0;
  *(_WORD *)(v8 + 48) = 0;
  *(float *)(v8 + 52) = a4;
  *(_BYTE *)(v8 + 56) = a3;
  *(_BYTE *)(v8 + 57) = 0;
  *(_QWORD *)(v8 + 12) = v9;
  if ( a5 != -1 )
  {
    v10 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(v8 + 48) = 1;
    *(_DWORD *)(v8 + 40) = v10;
    *(_DWORD *)(v8 + 44) = a5;
  }
}


// ============================================================

// Address: 0x512934
// Original: _ZN21CTaskComplexFleePointD2Ev
// Demangled: CTaskComplexFleePoint::~CTaskComplexFleePoint()
// attributes: thunk
void __fastcall CTaskComplexFleePoint::~CTaskComplexFleePoint(CTaskComplexFleePoint *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x512938
// Original: _ZN21CTaskComplexFleePointD0Ev
// Demangled: CTaskComplexFleePoint::~CTaskComplexFleePoint()
void __fastcall CTaskComplexFleePoint::~CTaskComplexFleePoint(CTaskComplexFleePoint *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x512948
// Original: _ZN21CTaskComplexFleePoint13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexFleePoint::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexFleePoint::MakeAbortable(CTaskComplexFleePoint *this, CPed *a2, int a3, const CEvent *a4)
{
  int v4; // r12

  if ( !a3 )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 48) = 1;
    *((_DWORD *)this + 9) = -1;
    *((_DWORD *)this + 10) = v4;
    *((_DWORD *)this + 11) = -1;
  }
  return (*(int (__fastcall **)(_DWORD, CPed *))(**((_DWORD **)this + 2) + 28))(*((_DWORD *)this + 2), a2);
}


// ============================================================

// Address: 0x512980
// Original: _ZN21CTaskComplexFleePoint18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexFleePoint::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexFleePoint::CreateFirstSubTask(CTaskComplexFleePoint *this, CPed *a2)
{
  bool v4; // zf
  int v5; // r0
  float *v6; // r4
  float *v7; // r1
  float v8; // s2
  float v9; // s6
  float v10; // r6
  float v11; // r8
  float v12; // r6
  int v13; // r0
  float v14; // s0
  int v15; // r0
  float v16; // s6
  float v17; // s4
  float v18; // s0
  int v19; // r1
  float v21; // [sp+4h] [bp-2Ch] BYREF
  float v22; // [sp+8h] [bp-28h]
  int v23; // [sp+Ch] [bp-24h]

  v4 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v4 = *((_DWORD *)a2 + 356) == 0;
  if ( v4 )
  {
    v5 = *((_DWORD *)a2 + 5);
    v6 = (float *)((char *)a2 + 4);
    v7 = (float *)((char *)a2 + 4);
    v8 = *((float *)this + 4);
    if ( v5 )
      v7 = (float *)(v5 + 48);
    v9 = v7[1];
    v21 = *v7 - *((float *)this + 3);
    v23 = 0;
    v22 = v9 - v8;
    CVector::Normalise((CVector *)&v21);
    v10 = (float)((float)((float)rand() * 4.6566e-10) * 0.66) + -0.33;
    v11 = cosf(v10);
    v12 = sinf(v10);
    v13 = rand();
    v19 = 900;
    v14 = (float)v13;
    v15 = *((_DWORD *)a2 + 5);
    v16 = v11 * v21;
    v17 = v12 * v22;
    if ( v15 )
      v6 = (float *)(v15 + 48);
    v18 = (float)((float)(v14 * 4.6566e-10) * 3.0) + 3.0;
    *((float *)this + 6) = *v6 + (float)(v18 * (float)(v16 + v17));
    *((float *)this + 7) = (float)(v18 * (float)(v16 - v17)) + v6[1];
    *((float *)this + 8) = v6[2] + 0.0;
  }
  else
  {
    v19 = 714;
  }
  return CTaskComplexFleePoint::CreateSubTask(this, v19);
}


// ============================================================

// Address: 0x512ab4
// Original: _ZN21CTaskComplexFleePoint13CreateSubTaskEi
// Demangled: CTaskComplexFleePoint::CreateSubTask(int)
int __fastcall CTaskComplexFleePoint::CreateSubTask(CTaskComplexFleePoint *this, int a2)
{
  int v3; // r4
  unsigned int v4; // r1
  CTask *v5; // r5
  unsigned int v6; // r1
  CTaskSimpleTired *v7; // r5

  v3 = 0;
  if ( a2 >= 900 )
  {
    if ( a2 == 900 )
    {
      v3 = CTask::operator new((CTask *)&word_2C, 0x384u);
      CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
        (CTaskSimpleGoToPoint *)v3,
        7,
        (CTaskComplexFleePoint *)((char *)this + 24),
        0.5,
        0,
        0);
    }
    else if ( a2 == 903 )
    {
      v3 = CTask::operator new((CTask *)&word_28, 0x387u);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        (CTaskComplexGoToPointAndStandStill *)v3,
        7,
        (CTaskComplexFleePoint *)((char *)this + 24),
        0.5,
        2.0,
        0,
        0);
    }
  }
  else if ( a2 == 244 )
  {
    v3 = CTask::operator new((CTask *)&dword_40, 0xF4u);
    CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v3);
    v5 = (CTask *)CTask::operator new((CTask *)&dword_20, v4);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v5, 0, 165, 1082130432, 0);
    CTaskComplexSequence::AddTask((CTaskComplexSequence *)v3, v5);
    v7 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v6);
    CTaskSimpleTired::CTaskSimpleTired(v7, 2000);
    CTaskComplexSequence::AddTask((CTaskComplexSequence *)v3, v7);
  }
  else if ( a2 == 714 )
  {
    v3 = CTask::operator new((CTask *)&dword_14, 0x2CAu);
    CTaskComplex::CTaskComplex((CTaskComplex *)v3);
    *(_DWORD *)(v3 + 12) = 0;
    *(_WORD *)(v3 + 16) = 1;
    *(_DWORD *)v3 = &off_66AF90;
  }
  return v3;
}


// ============================================================

// Address: 0x512bac
// Original: _ZN21CTaskComplexFleePoint18ComputeTargetPointEPK4CPed
// Demangled: CTaskComplexFleePoint::ComputeTargetPoint(CPed const*)
int __fastcall CTaskComplexFleePoint::ComputeTargetPoint(CTaskComplexFleePoint *this, const CPed *a2)
{
  int v4; // r0
  float *v5; // r5
  float *v6; // r1
  float v7; // s2
  float v8; // s6
  float v9; // r6
  float v10; // r9
  float v11; // r6
  float v12; // s0
  int result; // r0
  float v14; // s6
  float v15; // s4
  float v16; // s0
  float v17; // [sp+4h] [bp-2Ch] BYREF
  float v18; // [sp+8h] [bp-28h]
  int v19; // [sp+Ch] [bp-24h]

  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)((char *)a2 + 4);
  v6 = (float *)((char *)a2 + 4);
  v7 = *((float *)this + 4);
  if ( v4 )
    v6 = (float *)(v4 + 48);
  v8 = v6[1];
  v17 = *v6 - *((float *)this + 3);
  v19 = 0;
  v18 = v8 - v7;
  CVector::Normalise((CVector *)&v17);
  v9 = (float)((float)((float)rand() * 4.6566e-10) * 0.66) + -0.33;
  v10 = cosf(v9);
  v11 = sinf(v9);
  v12 = (float)rand();
  result = *((_DWORD *)a2 + 5);
  v14 = v10 * v17;
  v15 = v11 * v18;
  if ( result )
    v5 = (float *)(result + 48);
  v16 = (float)((float)(v12 * 4.6566e-10) * 3.0) + 3.0;
  *((float *)this + 6) = *v5 + (float)(v16 * (float)(v14 + v15));
  *((float *)this + 7) = (float)(v16 * (float)(v14 - v15)) + v5[1];
  *((float *)this + 8) = v5[2] + 0.0;
  return result;
}


// ============================================================

// Address: 0x512cc8
// Original: _ZN21CTaskComplexFleePoint17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexFleePoint::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexFleePoint::CreateNextSubTask(CTaskComplexFleePoint *this, CPed *a2)
{
  int v4; // r0
  CTaskSimpleGoToPoint *v5; // r6
  int v6; // r0
  float *v7; // r5
  float *v8; // r1
  float v9; // s2
  float v10; // s6
  float v11; // r6
  float v12; // r8
  float v13; // r6
  unsigned int v14; // r1
  float v15; // s0
  int v16; // r0
  float v17; // s6
  float v18; // s4
  float v19; // s0
  CTaskComplexSequence *v20; // r4
  unsigned int v21; // r1
  CTask *v22; // r5
  unsigned int v23; // r1
  CTaskSimpleTired *v24; // r5
  int v25; // r0
  float *v26; // r5
  float *v27; // r1
  float v28; // s2
  float v29; // s6
  float v30; // r6
  float v31; // r8
  float v32; // r6
  int v33; // r0
  int v34; // r1
  float v35; // s0
  int v36; // r0
  float v37; // s6
  float v38; // s4
  float v39; // s0
  float v40; // s2
  float v41; // s0
  float v42; // s4
  float v44; // [sp+Ch] [bp-2Ch] BYREF
  float v45; // [sp+10h] [bp-28h]
  int v46; // [sp+14h] [bp-24h]

  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 0;
  switch ( v4 )
  {
    case 903:
      v20 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, 0x387u);
      CTaskComplexSequence::CTaskComplexSequence(v20);
      v22 = (CTask *)CTask::operator new((CTask *)&dword_20, v21);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v22, 0, 165, 1082130432, 0);
      CTaskComplexSequence::AddTask(v20, v22);
      v24 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v23);
      CTaskSimpleTired::CTaskSimpleTired(v24, 2000);
      CTaskComplexSequence::AddTask(v20, v24);
      return (int)v20;
    case 900:
      v25 = *((_DWORD *)a2 + 5);
      v26 = (float *)((char *)a2 + 4);
      v27 = (float *)((char *)a2 + 4);
      v28 = *((float *)this + 4);
      if ( v25 )
        v27 = (float *)(v25 + 48);
      v29 = v27[1];
      v44 = *v27 - *((float *)this + 3);
      v46 = 0;
      v45 = v29 - v28;
      CVector::Normalise((CVector *)&v44);
      v30 = (float)((float)((float)rand() * 4.6566e-10) * 0.66) + -0.33;
      v31 = cosf(v30);
      v32 = sinf(v30);
      v33 = rand();
      v34 = 900;
      v35 = (float)v33;
      v36 = *((_DWORD *)a2 + 5);
      v37 = v31 * v44;
      v38 = v32 * v45;
      if ( v36 )
        v26 = (float *)(v36 + 48);
      v39 = (float)((float)(v35 * 4.6566e-10) * 3.0) + 3.0;
      v40 = *v26 + (float)(v39 * (float)(v37 + v38));
      *((float *)this + 6) = v40;
      v41 = (float)(v39 * (float)(v37 - v38)) + v26[1];
      *((float *)this + 7) = v41;
      v42 = v26[2] + 0.0;
      *((float *)this + 8) = v42;
      if ( (float)((float)((float)((float)(v40 - *((float *)this + 3)) * (float)(v40 - *((float *)this + 3)))
                         + (float)((float)(v41 - *((float *)this + 4)) * (float)(v41 - *((float *)this + 4))))
                 + (float)((float)(v42 - *((float *)this + 5)) * (float)(v42 - *((float *)this + 5)))) > (float)(*((float *)this + 13) * *((float *)this + 13)) )
        v34 = 903;
      return CTaskComplexFleePoint::CreateSubTask(this, v34);
    case 714:
      v6 = *((_DWORD *)a2 + 5);
      v7 = (float *)((char *)a2 + 4);
      v8 = (float *)((char *)a2 + 4);
      v9 = *((float *)this + 4);
      if ( v6 )
        v8 = (float *)(v6 + 48);
      v10 = v8[1];
      v44 = *v8 - *((float *)this + 3);
      v46 = 0;
      v45 = v10 - v9;
      CVector::Normalise((CVector *)&v44);
      v11 = (float)((float)((float)rand() * 4.6566e-10) * 0.66) + -0.33;
      v12 = cosf(v11);
      v13 = sinf(v11);
      v15 = (float)rand();
      v16 = *((_DWORD *)a2 + 5);
      v17 = v12 * v44;
      v18 = v13 * v45;
      if ( v16 )
        v7 = (float *)(v16 + 48);
      v19 = (float)((float)(v15 * 4.6566e-10) * 3.0) + 3.0;
      *((float *)this + 6) = *v7 + (float)(v19 * (float)(v17 + v18));
      *((float *)this + 7) = (float)(v19 * (float)(v17 - v18)) + v7[1];
      *((float *)this + 8) = v7[2] + 0.0;
      v5 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, v14);
      CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(v5, 7, (CTaskComplexFleePoint *)((char *)this + 24), 0.5, 0, 0);
      break;
  }
  return (int)v5;
}


// ============================================================

// Address: 0x512fbc
// Original: _ZN21CTaskComplexFleePoint14ControlSubTaskEP4CPed
// Demangled: CTaskComplexFleePoint::ControlSubTask(CPed *)
CTaskComplexSequence *__fastcall CTaskComplexFleePoint::ControlSubTask(CTaskComplexFleePoint *this, CPed *a2)
{
  CTaskComplexSequence *v4; // r6
  int v5; // r2
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v11; // r1
  unsigned int v12; // r1
  CTask *v13; // r8
  unsigned int v14; // r1
  CTaskSimpleTired *v15; // r8

  v4 = (CTaskComplexSequence *)*((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(CTaskComplexSequence *))(*(_DWORD *)v4 + 20))(v4) == 900
    || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 903 )
  {
    if ( *((_BYTE *)this + 56) )
      CPed::Say(a2, 0x15Bu, 0, 0.1, 0, 0, 0);
    if ( *((_BYTE *)this + 57) )
    {
      v5 = *((_DWORD *)this + 9);
      v6 = *(_DWORD *)this;
      *((_BYTE *)this + 57) = 0;
      v7 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 48) = 1;
      *((_DWORD *)this + 10) = v7;
      *((_DWORD *)this + 11) = v5;
      v4 = (CTaskComplexSequence *)(*(int (__fastcall **)(CTaskComplexFleePoint *, CPed *))(v6 + 44))(this, a2);
    }
    else if ( *((_BYTE *)this + 48) )
    {
      if ( *((_BYTE *)this + 49) )
      {
        v8 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 49) = 0;
        *((_DWORD *)this + 10) = v8;
        v9 = v8;
      }
      else
      {
        v9 = *((_DWORD *)this + 10);
        v8 = CTimer::m_snTimeInMilliseconds;
      }
      v11 = v9 + *((_DWORD *)this + 11);
      if ( v11 <= v8 )
      {
        v4 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v11);
        CTaskComplexSequence::CTaskComplexSequence(v4);
        v13 = (CTask *)CTask::operator new((CTask *)&dword_20, v12);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v13, 0, 165, 1082130432, 0);
        CTaskComplexSequence::AddTask(v4, v13);
        v15 = (CTaskSimpleTired *)CTask::operator new((CTask *)&dword_1C, v14);
        CTaskSimpleTired::CTaskSimpleTired(v15, 2000);
        CTaskComplexSequence::AddTask(v4, v15);
      }
    }
    if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
      && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 5 )
    {
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"TaskFleePoint",
        a2,
        0,
        2000,
        -1,
        (int)this + 12,
        0,
        0.25,
        500,
        3,
        0);
    }
  }
  else
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    return (CTaskComplexSequence *)*((_DWORD *)this + 2);
  }
  return v4;
}


// ============================================================

// Address: 0x51318c
// Original: _ZN21CTaskComplexFleePoint15SetFleePositionERK7CVectorfb
// Demangled: CTaskComplexFleePoint::SetFleePosition(CVector const&,float,bool)
int __fastcall CTaskComplexFleePoint::SetFleePosition(int this, const CVector *a2, float a3, bool a4)
{
  __int64 v4; // d16

  if ( *(float *)(this + 12) != *(float *)a2
    || *(float *)(this + 16) != *((float *)a2 + 1)
    || *(float *)(this + 20) != *((float *)a2 + 2)
    || *(float *)(this + 52) != a3 )
  {
    v4 = *(_QWORD *)a2;
    *(_DWORD *)(this + 20) = *((_DWORD *)a2 + 2);
    *(_QWORD *)(this + 12) = v4;
    *(_BYTE *)(this + 57) = 1;
    *(float *)(this + 52) = a3;
  }
  *(_BYTE *)(this + 56) = a4;
  return this;
}


// ============================================================

// Address: 0x514b4c
// Original: _ZNK21CTaskComplexFleePoint5CloneEv
// Demangled: CTaskComplexFleePoint::Clone(void)
int __fastcall CTaskComplexFleePoint::Clone(CTaskComplexFleePoint *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int v5; // r6
  char v6; // r8
  int result; // r0
  __int64 v8; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, a2);
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 13);
  v6 = *((_BYTE *)this + 56);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)result = &off_66BC14;
  v8 = *(_QWORD *)((char *)this + 12);
  *(_DWORD *)(result + 20) = *((_DWORD *)this + 5);
  *(_DWORD *)(result + 36) = v4;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = v5;
  *(_BYTE *)(result + 56) = v6;
  *(_BYTE *)(result + 57) = 0;
  *(_QWORD *)(result + 12) = v8;
  if ( v4 != -1 )
  {
    *(_DWORD *)(result + 40) = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(result + 44) = v4;
    *(_BYTE *)(result + 48) = 1;
  }
  return result;
}


// ============================================================

// Address: 0x514bb8
// Original: _ZNK21CTaskComplexFleePoint11GetTaskTypeEv
// Demangled: CTaskComplexFleePoint::GetTaskType(void)
int __fastcall CTaskComplexFleePoint::GetTaskType(CTaskComplexFleePoint *this)
{
  return 908;
}


// ============================================================
