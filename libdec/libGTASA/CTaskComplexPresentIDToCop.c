
// Address: 0x511588
// Original: _ZN26CTaskComplexPresentIDToCopC2EP4CPed
// Demangled: CTaskComplexPresentIDToCop::CTaskComplexPresentIDToCop(CPed *)
void __fastcall CTaskComplexPresentIDToCop::CTaskComplexPresentIDToCop(CTaskComplexPresentIDToCop *this, CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66BA48;
  *((_DWORD *)this + 3) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x5115b4
// Original: _ZN26CTaskComplexPresentIDToCopD2Ev
// Demangled: CTaskComplexPresentIDToCop::~CTaskComplexPresentIDToCop()
void __fastcall CTaskComplexPresentIDToCop::~CTaskComplexPresentIDToCop(CTaskComplexPresentIDToCop *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BA48;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5115e0
// Original: _ZN26CTaskComplexPresentIDToCopD0Ev
// Demangled: CTaskComplexPresentIDToCop::~CTaskComplexPresentIDToCop()
void __fastcall CTaskComplexPresentIDToCop::~CTaskComplexPresentIDToCop(CTaskComplexPresentIDToCop *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BA48;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x511610
// Original: _ZN26CTaskComplexPresentIDToCop17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexPresentIDToCop::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexPresentIDToCop::CreateNextSubTask(CTaskComplexPresentIDToCop *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 413 )
  {
    v5 = 1302;
    return CTaskComplexPresentIDToCop::CreateSubTask(this, v5, a2);
  }
  if ( v4 == 902 )
  {
    CPed::Say(a2, 0x45u, 0, 1.0, 0, 0, 0);
    v5 = 413;
    return CTaskComplexPresentIDToCop::CreateSubTask(this, v5, a2);
  }
  return 0;
}


// ============================================================

// Address: 0x511664
// Original: _ZNK26CTaskComplexPresentIDToCop13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexPresentIDToCop::CreateSubTask(int,CPed const*)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexPresentIDToCop::CreateSubTask(
        CTaskComplexPresentIDToCop *this,
        int a2,
        const CPed *a3)
{
  CTaskSimpleAchieveHeading *v5; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r6
  __int64 *v9; // r3
  int v10; // r1
  __int64 v11; // r2
  CGeneral *RadianAngleBetweenPoints; // r0
  float v13; // r1
  int v14; // r0
  int v15; // r0
  float v17; // [sp+0h] [bp-28h]

  v5 = 0;
  if ( a2 == 413 )
  {
    v15 = CTask::operator new((CTask *)&dword_34, 0x19Du);
    v5 = (CTaskSimpleAchieveHeading *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                                        v15,
                                        0,
                                        142,
                                        1082130432,
                                        -4.0,
                                        3000,
                                        413,
                                        (int)"HandsUp",
                                        0);
    *(_DWORD *)v5 = &off_665800;
  }
  else if ( a2 == 902 )
  {
    v5 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, 0x386u);
    v6 = *((_DWORD *)this + 3);
    v7 = *((_DWORD *)a3 + 5);
    v8 = *(_DWORD *)(v6 + 20);
    v9 = (__int64 *)(v7 + 48);
    if ( !v7 )
      v9 = (__int64 *)((char *)a3 + 4);
    v10 = v8 + 48;
    v11 = *v9;
    if ( !v8 )
      v10 = v6 + 4;
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             *(CGeneral **)v10,
                                             *(float *)(v10 + 4),
                                             *(float *)&v11,
                                             *((float *)&v11 + 1),
                                             v17);
    v14 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v13);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v5, *(float *)&v14, 0.5, 0.2);
  }
  return v5;
}


// ============================================================

// Address: 0x511720
// Original: _ZN26CTaskComplexPresentIDToCop18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPresentIDToCop::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexPresentIDToCop::CreateFirstSubTask(
        CTaskComplexPresentIDToCop *this,
        CPed *a2)
{
  CTaskSimpleAchieveHeading *v4; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r6
  __int64 *v8; // r3
  int v9; // r1
  __int64 v10; // r2
  CGeneral *RadianAngleBetweenPoints; // r0
  float v12; // r1
  int v13; // r1
  float v15; // [sp+0h] [bp-10h]

  v4 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  v5 = *((_DWORD *)this + 3);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *(_DWORD *)(v5 + 20);
  v8 = (__int64 *)(v6 + 48);
  if ( !v6 )
    v8 = (__int64 *)((char *)a2 + 4);
  v9 = v7 + 48;
  v10 = *v8;
  if ( !v7 )
    v9 = v5 + 4;
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           *(CGeneral **)v9,
                                           *(float *)(v9 + 4),
                                           *(float *)&v10,
                                           *((float *)&v10 + 1),
                                           v15);
  v13 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v12);
  return sub_19DE8C(v4, *(float *)&v13, 0.5, 0.2);
}


// ============================================================

// Address: 0x511788
// Original: _ZN26CTaskComplexPresentIDToCop14ControlSubTaskEP4CPed
// Demangled: CTaskComplexPresentIDToCop::ControlSubTask(CPed *)
int __fastcall CTaskComplexPresentIDToCop::ControlSubTask(CTaskComplexPresentIDToCop *this, CPed *a2)
{
  if ( *((_DWORD *)this + 3) )
    return *((_DWORD *)this + 2);
  else
    return 0;
}


// ============================================================

// Address: 0x511794
// Original: _ZNK26CTaskComplexPresentIDToCop20ComputeTargetHeadingERK4CPed
// Demangled: CTaskComplexPresentIDToCop::ComputeTargetHeading(CPed const&)
int __fastcall CTaskComplexPresentIDToCop::ComputeTargetHeading(CTaskComplexPresentIDToCop *this, const CPed *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r0
  __int64 *v5; // r3
  int v6; // r1
  __int64 v7; // r2
  CGeneral *RadianAngleBetweenPoints; // r0
  float v9; // r1
  float v11; // [sp+0h] [bp-8h]

  v2 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)a2 + 5);
  v4 = *(_DWORD *)(v2 + 20);
  v5 = (__int64 *)(v3 + 48);
  if ( !v3 )
    v5 = (__int64 *)((char *)a2 + 4);
  v6 = v4 + 48;
  v7 = *v5;
  if ( !v4 )
    v6 = v2 + 4;
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           *(CGeneral **)v6,
                                           *(float *)(v6 + 4),
                                           *(float *)&v7,
                                           *((float *)&v7 + 1),
                                           v11);
  return j_CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v9);
}


// ============================================================

// Address: 0x512600
// Original: _ZNK26CTaskComplexPresentIDToCop5CloneEv
// Demangled: CTaskComplexPresentIDToCop::Clone(void)
CEntity **__fastcall CTaskComplexPresentIDToCop::Clone(CTaskComplexPresentIDToCop *this, unsigned int a2)
{
  CEntity **v3; // r5
  CEntity *v4; // r4

  v3 = (CEntity **)CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *v3 = (CEntity *)&off_66BA48;
  v3[3] = v4;
  CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x512634
// Original: _ZNK26CTaskComplexPresentIDToCop11GetTaskTypeEv
// Demangled: CTaskComplexPresentIDToCop::GetTaskType(void)
int __fastcall CTaskComplexPresentIDToCop::GetTaskType(CTaskComplexPresentIDToCop *this)
{
  return 106;
}


// ============================================================
