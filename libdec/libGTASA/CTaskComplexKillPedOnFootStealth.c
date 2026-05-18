
// Address: 0x1907c0
// Original: j__ZN32CTaskComplexKillPedOnFootStealthC2EP4CPed
// Demangled: CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(CPed *)
// attributes: thunk
void __fastcall CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(
        CTaskComplexKillPedOnFootStealth *this,
        CPed *a2)
{
  _ZN32CTaskComplexKillPedOnFootStealthC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x19985c
// Original: j__ZN32CTaskComplexKillPedOnFootStealthD2Ev
// Demangled: CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth()
// attributes: thunk
void __fastcall CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth(
        CTaskComplexKillPedOnFootStealth *this)
{
  _ZN32CTaskComplexKillPedOnFootStealthD2Ev(this);
}


// ============================================================

// Address: 0x4e022c
// Original: _ZN32CTaskComplexKillPedOnFootStealthD2Ev
// Demangled: CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth()
void __fastcall CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth(
        CTaskComplexKillPedOnFootStealth *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669850;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e1318
// Original: _ZN32CTaskComplexKillPedOnFootStealthC2EP4CPed
// Demangled: CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(CPed *)
void __fastcall CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(
        CTaskComplexKillPedOnFootStealth *this,
        CPed *a2)
{
  char v4; // r0
  char v5; // r0
  int v6; // r1
  int v7; // r1
  char *v8; // r2
  __int64 v9; // d16

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 1;
  v4 = *((_BYTE *)this + 12) & 0x8B;
  *((_DWORD *)this + 10) = -1;
  *((_WORD *)this + 26) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  v5 = v4 | 4;
  *((_BYTE *)this + 12) = v5;
  *(_DWORD *)this = &off_669850;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
    v5 = *((_BYTE *)this + 12);
  }
  v6 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 12) = v5 & 0xF7;
  *((_DWORD *)this + 9) = v6;
  *(_DWORD *)this = &off_66988C;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = -971227238;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 14) = 0;
  if ( a2 )
  {
    v7 = *((_DWORD *)a2 + 5);
    v8 = (char *)(v7 + 48);
    if ( !v7 )
      v8 = (char *)a2 + 4;
    v9 = *(_QWORD *)v8;
    *((_DWORD *)this + 16) = *((_DWORD *)v8 + 2);
    *((_QWORD *)this + 7) = v9;
  }
}


// ============================================================

// Address: 0x4e13d0
// Original: _ZN32CTaskComplexKillPedOnFootStealthD0Ev
// Demangled: CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth()
void __fastcall CTaskComplexKillPedOnFootStealth::~CTaskComplexKillPedOnFootStealth(
        CTaskComplexKillPedOnFootStealth *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669850;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e1400
// Original: _ZN32CTaskComplexKillPedOnFootStealth17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootStealth::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootStealth::CreateNextSubTask(CTaskComplexKillPedOnFootStealth *this, CPed *a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r5
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r2

  v4 = *((_DWORD *)this + 2);
  if ( v4
    && ((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 244
     || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 935)
    && *((_DWORD *)this + 17) == -1 )
  {
    return CTaskComplexKillPedOnFoot::CreateFirstSubTask(this, a2);
  }
  v5 = *((_DWORD *)this + 4);
  if ( v5 && *(float *)(v5 + 1348) >= 1.0 )
  {
    v10 = *((_DWORD *)a2 + 291);
    v11 = *((_DWORD *)a2 + 290);
    v9 = *((_DWORD *)a2 + 292);
    *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 290) = v11;
    *((_DWORD *)a2 + 291) = v10 & 0xFFBFFFFF;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 291);
    v7 = *((_DWORD *)a2 + 292);
    v8 = *((_DWORD *)a2 + 290);
    *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
    *((_DWORD *)a2 + 290) = v8;
    v9 = v7;
    *((_DWORD *)a2 + 291) = v6 & 0xFFBFFFFF;
  }
  *((_DWORD *)a2 + 292) = v9;
  return 0;
}


// ============================================================

// Address: 0x4e14b0
// Original: _ZN32CTaskComplexKillPedOnFootStealth18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootStealth::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillPedOnFootStealth::CreateFirstSubTask(CTaskComplexKillPedOnFootStealth *this, CPed *a2)
{
  CPed::Say(a2, 0xCDu, 0, 1.0, 0, 0, 0);
  return CTaskComplexKillPedOnFoot::CreateFirstSubTask(this, a2);
}


// ============================================================

// Address: 0x4e14e0
// Original: _ZN32CTaskComplexKillPedOnFootStealth14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedOnFootStealth::ControlSubTask(CPed *)
void __fastcall CTaskComplexKillPedOnFootStealth::ControlSubTask(
        CTaskComplexKillPedOnFootStealth *this,
        CPed *a2,
        int a3,
        bool a4)
{
  CPed *v6; // r1
  int CanPedTargetPed; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int v11; // r2
  float *v12; // r3
  float *v13; // r1
  float v14; // s2
  float v15; // s4
  float *v16; // r0
  float v17; // s16
  float v18; // s22
  float v19; // s26
  float v20; // s24
  float v21; // s20
  float v22; // s18
  int v23; // r0
  int v24; // r2
  __int64 *v25; // r3
  __int64 v26; // d16
  int v27; // r0
  int v28; // r1
  __int64 *v29; // r2
  __int64 v30; // d16
  float v31; // s0
  int v32; // r0
  unsigned int v33; // r1
  CTaskComplexInvestigateDisturbance *v34; // r6
  int v35; // r0
  int v36; // r0
  unsigned int v37; // r1
  CTaskComplexSequence *v38; // r6
  unsigned int v39; // r1
  CTaskSimpleStandStill *v40; // r5
  unsigned int v41; // r1
  CTask *v42; // r5
  unsigned int v43; // r1
  CTask *v44; // r4
  float v45; // [sp+Ch] [bp-4Ch] BYREF
  float v46; // [sp+10h] [bp-48h]
  float v47; // [sp+14h] [bp-44h]

  v6 = (CPed *)*((_DWORD *)this + 4);
  if ( !v6 )
  {
    CTaskComplexKillPedOnFoot::ControlSubTask(this, a2);
    return;
  }
  CanPedTargetPed = CPedGeometryAnalyser::CanPedTargetPed(a2, v6, (CPed *)((char *)&stderr + 1), a4);
  v8 = *((_DWORD *)this + 17);
  if ( v8 == -1 )
  {
    if ( CanPedTargetPed == 1 )
    {
      v27 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 17) = -1;
      v28 = *(_DWORD *)(v27 + 20);
      v29 = (__int64 *)(v28 + 48);
      if ( !v28 )
        v29 = (__int64 *)(v27 + 4);
      v30 = *v29;
      *((_DWORD *)this + 16) = *((_DWORD *)v29 + 2);
      *((_QWORD *)this + 7) = v30;
      goto LABEL_26;
    }
    v8 = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 17) = CTimer::m_snTimeInMilliseconds;
    if ( v8 == -1 )
      goto LABEL_26;
  }
  else if ( CanPedTargetPed == 1 )
  {
    v9 = *((_DWORD *)this + 4);
    v10 = *((_DWORD *)a2 + 5);
    v11 = *(_DWORD *)(v9 + 20);
    v12 = (float *)(v10 + 48);
    if ( !v10 )
      v12 = (float *)((char *)a2 + 4);
    v13 = (float *)(v11 + 48);
    v14 = v12[1];
    v15 = v12[2];
    if ( !v11 )
      v13 = (float *)(v9 + 4);
    v45 = *v13 - *v12;
    v46 = v13[1] - v14;
    v47 = v13[2] - v15;
    CVector::Normalise((CVector *)&v45);
    v16 = (float *)*((_DWORD *)a2 + 5);
    v17 = v45;
    v18 = v16[4];
    v19 = v16[5];
    v20 = v16[6];
    v21 = v46;
    v22 = v47;
    if ( COERCE_FLOAT(CPedIntelligence::CanSeeEntityWithLights(*((CPedIntelligence **)a2 + 272), *((const CEntity **)this
                                                                                                 + 4), 1)) > 0.0
      && (float)((float)((float)(v18 * v17) + (float)(v19 * v21)) + (float)(v20 * v22)) > CPedAcquaintanceScanner::ms_fThresholdDotProduct )
    {
      v23 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 17) = -1;
      v24 = *(_DWORD *)(v23 + 20);
      v25 = (__int64 *)(v24 + 48);
      if ( !v24 )
        v25 = (__int64 *)(v23 + 4);
      v26 = *v25;
      *((_DWORD *)this + 16) = *((_DWORD *)v25 + 2);
      *((_QWORD *)this + 7) = v26;
      goto LABEL_26;
    }
    v8 = *((_DWORD *)this + 17);
    if ( v8 == -1 )
    {
LABEL_26:
      v35 = *((_DWORD *)this + 2);
      if ( v35
        && ((*(int (__fastcall **)(int))(*(_DWORD *)v35 + 20))(v35) == 935
         || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 244)
        && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        CTaskComplexKillPedOnFoot::CreateFirstSubTask(this, a2);
      }
      return;
    }
  }
  if ( CTimer::m_snTimeInMilliseconds - v8 < 5001 )
    return;
  CPed::Say(a2, 0xCEu, 0, 1.0, 0, 0, 0);
  v31 = *((float *)this + 16);
  if ( v31 > -9999.9 )
  {
    v32 = *((_DWORD *)this + 2);
    if ( v32
      && (*(int (__fastcall **)(int))(*(_DWORD *)v32 + 20))(v32) != 935
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v34 = (CTaskComplexInvestigateDisturbance *)CTask::operator new((CTask *)&dword_1C, v33);
      CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(
        v34,
        (CTaskComplexKillPedOnFootStealth *)((char *)this + 56),
        *((CEntity **)this + 4));
      return;
    }
    v31 = *((float *)this + 16);
  }
  if ( v31 <= -9999.9 )
  {
    v36 = *((_DWORD *)this + 2);
    if ( v36 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v36 + 20))(v36) != 244
        && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        v38 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v37);
        CTaskComplexSequence::CTaskComplexSequence(v38);
        v40 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v39);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v40, 1000, 0, 0, 8.0);
        CTaskComplexSequence::AddTask(v38, v40);
        v42 = (CTask *)CTask::operator new((CTask *)&dword_20, v41);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v42, *((_DWORD *)a2 + 312), 4, 1082130432, 0);
        CTaskComplexSequence::AddTask(v38, v42);
        v44 = (CTask *)CTask::operator new((CTask *)&dword_20, v43);
        CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v44, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
        *(_DWORD *)v44 = &off_665870;
        CTaskComplexSequence::AddTask(v38, v44);
      }
    }
  }
}


// ============================================================

// Address: 0x4e9ea0
// Original: _ZNK32CTaskComplexKillPedOnFootStealth5CloneEv
// Demangled: CTaskComplexKillPedOnFootStealth::Clone(void)
int __fastcall CTaskComplexKillPedOnFootStealth::Clone(CTaskComplexKillPedOnFootStealth *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  char v5; // r1
  char v6; // r0
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r2
  __int64 v10; // d16

  v3 = CTask::operator new((CTask *)&dword_48, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 32) = 1;
  *(_DWORD *)(v3 + 40) = -1;
  *(_WORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  v5 = *(_BYTE *)(v3 + 12);
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)v3 = &off_669850;
  v6 = v5 & 0x8B | 4;
  *(_BYTE *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
    v6 = *(_BYTE *)(v3 + 12);
  }
  v7 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(v3 + 12) = v6 & 0xF7;
  *(_DWORD *)(v3 + 36) = v7;
  *(_DWORD *)v3 = &off_66988C;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = -971227238;
  *(_DWORD *)(v3 + 68) = -1;
  *(_DWORD *)(v3 + 56) = 0;
  if ( v4 )
  {
    v8 = *((_DWORD *)v4 + 5);
    v9 = (_DWORD *)(v8 + 48);
    if ( !v8 )
      v9 = (_DWORD *)((char *)v4 + 4);
    v10 = *(_QWORD *)v9;
    *(_DWORD *)(v3 + 64) = v9[2];
    *(_QWORD *)(v3 + 56) = v10;
  }
  return v3;
}


// ============================================================

// Address: 0x4e9f60
// Original: _ZNK32CTaskComplexKillPedOnFootStealth11GetTaskTypeEv
// Demangled: CTaskComplexKillPedOnFootStealth::GetTaskType(void)
int __fastcall CTaskComplexKillPedOnFootStealth::GetTaskType(CTaskComplexKillPedOnFootStealth *this)
{
  return 1028;
}


// ============================================================
