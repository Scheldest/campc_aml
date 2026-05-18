
// Address: 0x1900c0
// Original: j__ZN36CTaskComplexWalkRoundBuildingAttempt12ComputeRouteERK4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ComputeRoute(CPed const&)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundBuildingAttempt::ComputeRoute(
        CTaskComplexWalkRoundBuildingAttempt *this,
        const CPed *a2)
{
  return _ZN36CTaskComplexWalkRoundBuildingAttempt12ComputeRouteERK4CPed(this, a2);
}


// ============================================================

// Address: 0x19171c
// Original: j__ZN36CTaskComplexWalkRoundBuildingAttempt16ComputeCrapRouteERK4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ComputeCrapRoute(CPed const&)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundBuildingAttempt::ComputeCrapRoute(
        CTaskComplexWalkRoundBuildingAttempt *this,
        const CPed *a2)
{
  return _ZN36CTaskComplexWalkRoundBuildingAttempt16ComputeCrapRouteERK4CPed(this, a2);
}


// ============================================================

// Address: 0x195ea4
// Original: j__ZN36CTaskComplexWalkRoundBuildingAttemptC2EiRK7CVectorS2_S2_b
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(int,CVector const&,CVector const&,CVector const&,bool)
// attributes: thunk
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this,
        int a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        bool a6)
{
  _ZN36CTaskComplexWalkRoundBuildingAttemptC2EiRK7CVectorS2_S2_b(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x198384
// Original: j__ZN36CTaskComplexWalkRoundBuildingAttempt10CreateTaskEv
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundBuildingAttempt::CreateTask(CTaskComplexWalkRoundBuildingAttempt *this)
{
  return _ZN36CTaskComplexWalkRoundBuildingAttempt10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a16d4
// Original: j__ZN36CTaskComplexWalkRoundBuildingAttemptC2EiP7CEntityRK7CVectorS4_S4_b
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(int,CEntity *,CVector const&,CVector const&,CVector const&,bool)
// attributes: thunk
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this,
        int a2,
        CEntity *a3,
        const CVector *a4,
        const CVector *a5,
        const CVector *a6,
        bool a7)
{
  _ZN36CTaskComplexWalkRoundBuildingAttemptC2EiP7CEntityRK7CVectorS4_S4_b(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x4928e8
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt10CreateTaskEv
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CreateTask(void)
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CreateTask(
        CTaskComplexWalkRoundBuildingAttempt *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  CEntity *Ped; // r9
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r6
  int v13; // r2
  char v14; // r5
  int v15; // r2
  char v16; // r5
  unsigned int v17; // r1
  CTaskComplexWalkRoundBuildingAttempt *v18; // r0
  char v19; // r2
  char v20; // r2
  _BYTE v21[12]; // [sp+Ch] [bp-54h] BYREF
  _BYTE v22[12]; // [sp+18h] [bp-48h] BYREF
  _BYTE v23[12]; // [sp+24h] [bp-3Ch] BYREF
  _BYTE v24[15]; // [sp+30h] [bp-30h] BYREF
  _BYTE v25[7]; // [sp+3Fh] [bp-21h] BYREF
  _BYTE v26[26]; // [sp+46h] [bp-1Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25[1], byte_4, a3);
  if ( *(_DWORD *)&v25[1] == -1 )
    Ped = 0;
  else
    Ped = (CEntity *)CPools::GetPed(*(CPools **)&v25[1], *(_DWORD *)&v25[1] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 1, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, &byte_9[3], v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, &byte_9[3], v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, &byte_9[3], v11);
  v14 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, (char *)&stderr + 2, v13);
    UseDataFence = v14;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v21, &byte_9[3], v13);
  v16 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v26, (char *)&stderr + 2, v15);
    UseDataFence = v16;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v26, (char *)&stderr + 1, v15);
  v18 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, v17);
  if ( Ped )
  {
    v19 = v26[0];
    if ( v26[0] )
      v19 = 1;
    CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
      v18,
      v25[0],
      Ped,
      (const CVector *)v21,
      (const CVector *)v23,
      (const CVector *)v22,
      v19);
  }
  else
  {
    v20 = v26[0];
    if ( v26[0] )
      v20 = 1;
    CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
      v18,
      v25[0],
      (const CVector *)v24,
      (const CVector *)v23,
      (const CVector *)v22,
      v20);
  }
}


// ============================================================

// Address: 0x50cd0c
// Original: _ZN36CTaskComplexWalkRoundBuildingAttemptC2EiRK7CVectorS2_S2_b
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(int,CVector const&,CVector const&,CVector const&,bool)
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this,
        char a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5,
        bool a6)
{
  __int64 v10; // d16
  __int64 v11; // d16
  char v12; // r2
  unsigned int v13; // r1
  _DWORD *v14; // r0
  unsigned int v15; // r1
  _DWORD *v16; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66B834;
  v10 = *(_QWORD *)a3;
  *((_DWORD *)this + 7) = *((_DWORD *)a3 + 2);
  *(_QWORD *)((char *)this + 20) = v10;
  v11 = *(_QWORD *)a4;
  v12 = *((_BYTE *)this + 73);
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 2);
  *((_QWORD *)this + 4) = v11;
  *(_QWORD *)((char *)this + 44) = *(_QWORD *)a5;
  *((_BYTE *)this + 73) = v12 & 0xC0 | a6;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 72) = a2;
  *((_BYTE *)this + 74) = 0;
  *((_DWORD *)this + 13) = 0;
  CVector::Normalise((CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 44));
  v14 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v13);
  *v14 = 0;
  *((_DWORD *)this + 3) = v14;
  v16 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v15);
  *v16 = 0;
  *((_DWORD *)this + 4) = v16;
}


// ============================================================

// Address: 0x50cd94
// Original: _ZN36CTaskComplexWalkRoundBuildingAttemptC2EiP7CEntityRK7CVectorS4_S4_b
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(int,CEntity *,CVector const&,CVector const&,CVector const&,bool)
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this,
        char a2,
        CEntity *a3,
        const CVector *a4,
        const CVector *a5,
        const CVector *a6,
        bool a7)
{
  __int64 v11; // d16
  __int64 v12; // d16
  char v13; // r1
  __int64 v14; // d16
  unsigned int v15; // r1
  _DWORD *v16; // r0
  unsigned int v17; // r1
  _DWORD *v18; // r0
  CEntity *v19; // r1

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66B834;
  v11 = *(_QWORD *)a5;
  *((_DWORD *)this + 10) = *((_DWORD *)a5 + 2);
  *((_QWORD *)this + 4) = v11;
  v12 = *(_QWORD *)a6;
  *((_DWORD *)this + 13) = *((_DWORD *)a6 + 2);
  *(_QWORD *)((char *)this + 44) = v12;
  *((_DWORD *)this + 14) = a3;
  v13 = *((_BYTE *)this + 73);
  v14 = *(_QWORD *)a4;
  *((_DWORD *)this + 17) = *((_DWORD *)a4 + 2);
  *((_BYTE *)this + 72) = a2;
  *((_BYTE *)this + 74) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_BYTE *)this + 73) = v13 & 0xC0 | a7 | 4;
  *(_QWORD *)((char *)this + 60) = v14;
  CVector::Normalise((CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 44));
  v16 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v15);
  *v16 = 0;
  *((_DWORD *)this + 3) = v16;
  v18 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v17);
  *v18 = 0;
  v19 = (CEntity *)*((_DWORD *)this + 14);
  *((_DWORD *)this + 4) = v18;
  CEntity::RegisterReference(v19, (CEntity **)this + 14);
}


// ============================================================

// Address: 0x50ce34
// Original: _ZN36CTaskComplexWalkRoundBuildingAttemptD2Ev
// Demangled: CTaskComplexWalkRoundBuildingAttempt::~CTaskComplexWalkRoundBuildingAttempt()
void __fastcall CTaskComplexWalkRoundBuildingAttempt::~CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this)
{
  void *v2; // r0
  void *v3; // r0
  CEntity *v4; // r0

  v2 = (void *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B834;
  if ( v2 )
    CPointRoute::operator delete(v2);
  v3 = (void *)*((_DWORD *)this + 4);
  if ( v3 )
    CPointRoute::operator delete(v3);
  v4 = (CEntity *)*((_DWORD *)this + 14);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 14);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50ce74
// Original: _ZN36CTaskComplexWalkRoundBuildingAttemptD0Ev
// Demangled: CTaskComplexWalkRoundBuildingAttempt::~CTaskComplexWalkRoundBuildingAttempt()
void __fastcall CTaskComplexWalkRoundBuildingAttempt::~CTaskComplexWalkRoundBuildingAttempt(
        CTaskComplexWalkRoundBuildingAttempt *this)
{
  void *v2; // r0
  void *v3; // r0
  CEntity *v4; // r0
  void *v5; // r0

  v2 = (void *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66B834;
  if ( v2 )
    CPointRoute::operator delete(v2);
  v3 = (void *)*((_DWORD *)this + 4);
  if ( v3 )
    CPointRoute::operator delete(v3);
  v4 = (CEntity *)*((_DWORD *)this + 14);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 14);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x50ceb8
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexWalkRoundBuildingAttempt::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::MakeAbortable(
        CTaskComplexWalkRoundBuildingAttempt *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  if ( result == 1 )
    *((_DWORD *)a2 + 292) &= ~0x40u;
  return result;
}


// ============================================================

// Address: 0x50cedc
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CreateNextSubTask(
        CTaskComplexWalkRoundBuildingAttempt *this,
        CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r0
  float *v11; // r1
  float *v12; // r2
  float v13; // s4
  float v14; // s6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v16; // r1
  int v17; // r4
  unsigned int v18; // r1
  CTaskSimpleAchieveHeading *v19; // r0
  CTaskComplexFollowPointRoute *v20; // r0
  float v21; // [sp+0h] [bp-30h]
  CGeneral *v22; // [sp+14h] [bp-1Ch] BYREF
  float v23; // [sp+18h] [bp-18h]
  float v24; // [sp+1Ch] [bp-14h]

  if ( (*((_BYTE *)this + 73) & 0x10) != 0 )
    goto LABEL_14;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 < 422 )
  {
    if ( v4 == 203 )
      goto LABEL_14;
    v5 = 411;
    if ( v4 != 411 )
    {
      v5 = 421;
      if ( v4 != 421 )
        goto LABEL_14;
    }
    goto LABEL_10;
  }
  v5 = 901;
  if ( v4 <= 901 )
  {
    if ( v4 == 422 )
    {
      if ( (*((_BYTE *)this + 73) & 2) == 0 )
      {
LABEL_17:
        v9 = CTask::operator new((CTask *)&dword_34, v5);
        *(_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                     v9,
                     0,
                     9,
                     1082130432,
                     -4.0,
                     1000,
                     422,
                     (int)"LookAbout",
                     0) = &off_6658A8;
        return;
      }
      goto LABEL_18;
    }
    if ( v4 != 900 )
    {
LABEL_14:
      v6 = *((_DWORD *)a2 + 291);
      v7 = *((_DWORD *)a2 + 292);
      v8 = *((_DWORD *)a2 + 290);
      *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
      *((_DWORD *)a2 + 290) = v8;
      *((_DWORD *)a2 + 291) = v6;
      *((_DWORD *)a2 + 292) = v7 & 0xFFFFFFBF;
      return;
    }
LABEL_10:
    if ( (*((_BYTE *)this + 73) & 2) == 0 )
      goto LABEL_17;
LABEL_18:
    v10 = *((_DWORD *)a2 + 5);
    v11 = (float *)*((_DWORD *)this + 3);
    v12 = (float *)(v10 + 48);
    if ( !v10 )
      v12 = (float *)((char *)a2 + 4);
    v13 = v12[1];
    v14 = v12[2];
    *(float *)&v22 = v11[1] - *v12;
    v23 = v11[2] - v13;
    v24 = v11[3] - v14;
    CVector::Normalise((CVector *)&v22);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(v22, v23, 0.0, 0.0, v21);
    v17 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v16);
    v19 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v18);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v19, *(float *)&v17, 1.0, 0.1);
    return;
  }
  if ( v4 == 902 )
  {
    v20 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x386u);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
      v20,
      *((char *)this + 72),
      *((const CPointRoute **)this + 3),
      0,
      0.5,
      0.5,
      0,
      0,
      1);
    return;
  }
  if ( v4 != 905 )
    goto LABEL_14;
}


// ============================================================

// Address: 0x50d0ac
// Original: _ZNK36CTaskComplexWalkRoundBuildingAttempt13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexWalkRoundBuildingAttempt::CreateSubTask(
        CTaskComplexWalkRoundBuildingAttempt *this,
        int a2,
        CPed *a3)
{
  CTaskSimpleGoToPoint *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r1
  CTaskComplexFollowPointRoute *v8; // r0
  int v9; // r0
  CTaskSimpleStandStill *v10; // r0
  int v11; // r0
  float *v12; // r1
  float *v13; // r3
  float v14; // s4
  float v15; // s6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v17; // r1
  int v18; // r4
  unsigned int v19; // r1
  CTaskSimpleAchieveHeading *v20; // r0
  int v21; // r0
  float v22; // [sp+0h] [bp-28h]
  float v23; // [sp+14h] [bp-14h] BYREF
  float v24; // [sp+18h] [bp-10h]
  float v25; // [sp+1Ch] [bp-Ch]

  if ( a2 < 422 )
  {
    switch ( a2 )
    {
      case 203:
        v10 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v10, 1000, 0, 0, 8.0);
        return;
      case 411:
        v21 = CTask::operator new((CTask *)&dword_20, 0x19Bu);
        v6 = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v21, 0, 38, 1082130432, 411, (int)"HitWall", 0);
        v7 = &`vtable for'CTaskSimpleHitWall;
        break;
      case 421:
        v5 = CTask::operator new((CTask *)&dword_20, 0x1A5u);
        v6 = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
        v7 = &`vtable for'CTaskSimpleScratchHead;
        break;
      default:
        return;
    }
    goto LABEL_20;
  }
  if ( a2 <= 901 )
  {
    if ( a2 != 422 )
    {
      if ( a2 == 900 )
      {
        v4 = (CTaskSimpleGoToPoint *)CTask::operator new((CTask *)&word_2C, 0x384u);
        CTaskSimpleGoToPoint::CTaskSimpleGoToPoint(
          v4,
          *((char *)this + 72),
          (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 20),
          0.5,
          0,
          0);
      }
      return;
    }
    v9 = CTask::operator new((CTask *)&dword_34, 0x1A6u);
    v6 = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                     v9,
                     0,
                     9,
                     1082130432,
                     -4.0,
                     1000,
                     422,
                     (int)"LookAbout",
                     0);
    v7 = &`vtable for'CTaskSimpleLookAbout;
LABEL_20:
    *v6 = *v7 + 8;
    return;
  }
  if ( a2 == 902 )
  {
    v11 = *((_DWORD *)a3 + 5);
    v12 = (float *)*((_DWORD *)this + 3);
    v13 = (float *)(v11 + 48);
    if ( !v11 )
      v13 = (float *)((char *)a3 + 4);
    v14 = v13[1];
    v15 = v13[2];
    v23 = v12[1] - *v13;
    v24 = v12[2] - v14;
    v25 = v12[3] - v15;
    CVector::Normalise((CVector *)&v23);
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             (CGeneral *)LODWORD(v23),
                                             v24,
                                             0.0,
                                             0.0,
                                             v22);
    v18 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v17);
    v20 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v19);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v20, *(float *)&v18, 1.0, 0.1);
  }
  else if ( a2 == 905 )
  {
    v8 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x389u);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
      v8,
      *((char *)this + 72),
      *((const CPointRoute **)this + 3),
      0,
      0.5,
      0.5,
      0,
      0,
      1);
  }
}


// ============================================================

// Address: 0x50d284
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexWalkRoundBuildingAttempt::CreateFirstSubTask(
        CTaskComplexWalkRoundBuildingAttempt *this,
        CPed *a2)
{
  int v4; // r6
  const CMatrix *v5; // r1
  int v6; // r3
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r2
  int v10; // r6
  int v11; // r0
  _DWORD *result; // r0
  _DWORD *v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r1

  if ( (*((_BYTE *)this + 73) & 4) != 0 )
  {
    v4 = *((_DWORD *)this + 14);
    if ( !v4 )
    {
      v15 = *((_DWORD *)a2 + 291);
      v16 = *((_DWORD *)a2 + 292);
      v17 = *((_DWORD *)a2 + 290);
      *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
      *((_DWORD *)a2 + 290) = v17;
      *((_DWORD *)a2 + 291) = v15;
      *((_DWORD *)a2 + 292) = v16 & 0xFFFFFFBF;
      return 0;
    }
    v5 = *(const CMatrix **)(v4 + 20);
    if ( !v5 )
    {
      CPlaceable::AllocateMatrix(*((CPlaceable **)this + 14));
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 4), *(CMatrix **)(v4 + 20));
      v5 = *(const CMatrix **)(v4 + 20);
    }
    CVector::FromMultiply(
      (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 20),
      v5,
      (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 60));
  }
  v6 = *((_DWORD *)a2 + 292);
  v7 = *((_DWORD *)a2 + 289);
  v8 = *((_DWORD *)a2 + 290);
  v9 = *((_DWORD *)a2 + 291);
  *((_DWORD *)a2 + 292) = v6 | 0x40;
  v10 = *((char *)this + 72);
  if ( (unsigned int)(v10 - 1) < 3 )
    goto LABEL_11;
  if ( (unsigned int)(v10 - 6) < 2 )
  {
    v11 = CTask::operator new((CTask *)&dword_20, v8);
    result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v11, 0, 38, 1082130432, 411, (int)"HitWall", 0);
    v13 = &`vtable for'CTaskSimpleHitWall;
LABEL_12:
    *result = *v13 + 8;
    return result;
  }
  if ( v10 == 4 )
  {
LABEL_11:
    v14 = CTask::operator new((CTask *)&dword_20, v8);
    result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v14, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
    v13 = &`vtable for'CTaskSimpleScratchHead;
    goto LABEL_12;
  }
  *((_DWORD *)a2 + 289) = v7;
  *((_DWORD *)a2 + 290) = v8;
  *((_DWORD *)a2 + 291) = v9;
  *((_DWORD *)a2 + 292) = v6 & 0xFFFFFFBF;
  return 0;
}


// ============================================================

// Address: 0x50d3e0
// Original: _ZNK36CTaskComplexWalkRoundBuildingAttempt14ComputeMoveDirERK4CPedR7CVector
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ComputeMoveDir(CPed const&,CVector &)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::ComputeMoveDir(
        CTaskComplexWalkRoundBuildingAttempt *this,
        const CPed *a2,
        CVector *a3)
{
  int v3; // r12
  float *v4; // r3
  float v5; // s0
  __int64 v6; // d16
  float v7; // s2
  float v8; // s6
  float v9; // s4
  float v10; // s8
  float v11; // s2
  float v12; // s0
  int result; // r0
  __int64 *v14; // r0
  __int64 v15; // d16

  v3 = *((_DWORD *)a2 + 5);
  v4 = (float *)(v3 + 48);
  if ( !v3 )
    v4 = (float *)((char *)a2 + 4);
  v5 = *((float *)this + 5) - *v4;
  v6 = *(_QWORD *)((char *)this + 44);
  v7 = *((float *)this + 6) - v4[1];
  *((_DWORD *)a3 + 2) = *((_DWORD *)this + 13);
  *(_QWORD *)a3 = v6;
  v8 = *(float *)a3;
  v9 = (float)((float)(v5 * *((float *)this + 11)) + (float)(v7 * *((float *)this + 12)))
     + (float)(*((float *)this + 13) * 0.0);
  v10 = *((float *)a3 + 1);
  *((_DWORD *)a3 + 2) = 0;
  v11 = v7 - (float)(v9 * v10);
  v12 = v5 - (float)(v8 * v9);
  *(float *)a3 = v12;
  *((float *)a3 + 1) = v11;
  if ( (float)((float)((float)(v12 * v12) + (float)(v11 * v11)) + 0.0) >= 0.00000001 )
    return j_CVector::Normalise(a3);
  v14 = (__int64 *)*((_DWORD *)a2 + 5);
  v15 = *v14;
  result = *((_DWORD *)v14 + 2);
  *((_DWORD *)a3 + 2) = result;
  *(_QWORD *)a3 = v15;
  return result;
}


// ============================================================

// Address: 0x50d498
// Original: _ZNK36CTaskComplexWalkRoundBuildingAttempt18AddNormalToMoveDirER7CVector
// Demangled: CTaskComplexWalkRoundBuildingAttempt::AddNormalToMoveDir(CVector &)
float *__fastcall CTaskComplexWalkRoundBuildingAttempt::AddNormalToMoveDir(float *this, CVector *a2)
{
  float v2; // s4
  float v3; // s0

  v2 = (float)(this[12] * 0.35) + *((float *)a2 + 1);
  v3 = (float)(this[13] * 0.35) + *((float *)a2 + 2);
  *(float *)a2 = (float)(this[11] * 0.35) + *(float *)a2;
  *((float *)a2 + 1) = v2;
  *((float *)a2 + 2) = v3;
  return this;
}


// ============================================================

// Address: 0x50d4e0
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt12ComputeRouteERK4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ComputeRoute(CPed const&)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::ComputeRoute(
        CTaskComplexWalkRoundBuildingAttempt *this,
        const CPed *a2)
{
  _DWORD *v4; // r1
  char v5; // r0
  float v6; // s20
  float v7; // s18
  float v8; // s16
  int v9; // r10
  int v10; // r1
  int v11; // r0
  float *v12; // r1
  float v13; // s0
  float v14; // s2
  float v15; // s4
  double v16; // d16
  double v17; // kr00_8
  float v18; // s27
  float v19; // s0
  float v20; // s23
  float v21; // s25
  float v22; // s27
  float *v23; // r1
  char v24; // r6
  float v25; // s8
  float v26; // s10
  float v27; // s0
  int v28; // r0
  float v29; // s0
  int *v30; // r0
  double v31; // d16
  int *v32; // r1
  int *v33; // r0
  double v34; // d16
  int *v35; // r1
  int *v36; // r0
  double v37; // d16
  int *v38; // r1
  int *v39; // r0
  double v40; // d16
  int *v41; // r1
  __int64 v42; // r0
  bool v43; // cc
  int v44; // r2
  int v45; // r3
  __int64 v46; // d16
  int v47; // r6
  int *v48; // r0
  double v49; // d16
  int *v50; // r1
  int result; // r0
  bool v52; // [sp+14h] [bp-D4h]
  bool v53; // [sp+14h] [bp-D4h]
  int v54; // [sp+18h] [bp-D0h]
  int v55; // [sp+1Ch] [bp-CCh]
  CVector *v56; // [sp+24h] [bp-C4h]
  __int64 v57; // [sp+28h] [bp-C0h] BYREF
  float v58; // [sp+30h] [bp-B8h]
  float v59; // [sp+34h] [bp-B4h] BYREF
  float v60; // [sp+38h] [bp-B0h]
  float v61; // [sp+3Ch] [bp-ACh]
  double v62; // [sp+40h] [bp-A8h] BYREF
  float v63; // [sp+48h] [bp-A0h]
  float v64[3]; // [sp+50h] [bp-98h] BYREF
  float v65; // [sp+5Ch] [bp-8Ch] BYREF
  float v66; // [sp+60h] [bp-88h]
  float v67; // [sp+64h] [bp-84h]
  double v68; // [sp+68h] [bp-80h] BYREF
  float v69; // [sp+70h] [bp-78h]
  double v70; // [sp+78h] [bp-70h] BYREF
  float v71; // [sp+80h] [bp-68h]

  v4 = (_DWORD *)*((_DWORD *)this + 3);
  v5 = *((_BYTE *)this + 73);
  *v4 = 0;
  LOBYTE(v4) = *((_BYTE *)this + 74) + 1;
  *((_BYTE *)this + 74) = (_BYTE)v4;
  if ( (char)v4 > 19 )
  {
    if ( (*((_BYTE *)this + 73) & 8) == 0 )
      CTaskComplexWalkRoundBuildingAttempt::ComputeCrapRoute(this, a2);
    v42 = *(_QWORD *)((char *)this + 12);
    v43 = *(_DWORD *)HIDWORD(v42) < 1;
    *(_DWORD *)v42 = *(_DWORD *)HIDWORD(v42);
    if ( !v43 )
    {
      HIDWORD(v42) += 4;
      v44 = v42 + 4;
      v45 = 0;
      do
      {
        v46 = *(_QWORD *)HIDWORD(v42);
        ++v45;
        v47 = *(_DWORD *)(HIDWORD(v42) + 8);
        HIDWORD(v42) += 12;
        *(_DWORD *)(v44 + 8) = v47;
        *(_QWORD *)v44 = v46;
        v44 += 12;
      }
      while ( v45 < *(_DWORD *)v42 );
    }
  }
  else
  {
    v54 = (v5 & 1) + 1;
    v6 = *((float *)this + 11) + *((float *)this + 11);
    v7 = *((float *)this + 12) + *((float *)this + 12);
    v8 = *((float *)this + 13) + *((float *)this + 13);
    v9 = 1;
    v10 = 0;
    v56 = (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 20);
LABEL_3:
    v55 = v10;
    while ( 1 )
    {
      v11 = *((_DWORD *)a2 + 5);
      v12 = (float *)((char *)a2 + 4);
      if ( v11 )
        v12 = (float *)(v11 + 48);
      v13 = *((float *)this + 5) - *v12;
      v14 = *((float *)this + 6) - v12[1];
      v62 = *(double *)((char *)this + 44);
      v15 = (float)((float)(v13 * *((float *)this + 11)) + (float)(v14 * *((float *)this + 12)))
          + (float)(*((float *)this + 13) * 0.0);
      v63 = 0.0;
      *((float *)&v62 + 1) = v14 - (float)(v15 * *((float *)&v62 + 1));
      *(float *)&v62 = v13 - (float)(*(float *)&v62 * v15);
      if ( (float)((float)((float)(*(float *)&v62 * *(float *)&v62)
                         + (float)(*((float *)&v62 + 1) * *((float *)&v62 + 1)))
                 + 0.0) >= 0.00000001 )
      {
        CVector::Normalise((CVector *)&v62);
      }
      else
      {
        v16 = *(double *)v11;
        v63 = *(float *)(v11 + 8);
        v62 = v16;
      }
      v17 = v62;
      v18 = v63;
      v19 = (float)((float)((float)((float)rand() * 4.6566e-10) * 0.4) + -0.2) + (float)*((char *)this + 74);
      v21 = (float)(*((float *)this + 11) * 0.35) + (float)((float)(*(float *)&v17 * v19) * (float)v9);
      v22 = (float)(*((float *)this + 13) * 0.35) + (float)((float)(v18 * v19) * (float)v9);
      v60 = (float)(*((float *)this + 12) * 0.35) + (float)((float)(*((float *)&v17 + 1) * v19) * (float)v9);
      v20 = v60;
      v59 = v21;
      v61 = v22;
      CVector::Normalise((CVector *)&v59);
      v23 = (float *)((char *)a2 + 4);
      v59 = v59 * 0.7;
      v60 = v60 * 0.7;
      v61 = v61 * 0.7;
      v24 = *((_BYTE *)this + 73);
      v25 = v20 + *((float *)this + 9);
      v26 = (float)(v22 + *((float *)this + 10)) + -0.5;
      v27 = (float)(v21 + *((float *)this + 8)) - v59;
      *(float *)&v70 = v21 + *((float *)this + 8);
      *((float *)&v70 + 1) = v25;
      v71 = v26;
      v65 = v27;
      v66 = v25 - v60;
      v67 = v26 - v61;
      v28 = *((_DWORD *)a2 + 5);
      if ( v28 )
        v23 = (float *)(v28 + 48);
      v29 = v23[2] + -0.5;
      v57 = *(_QWORD *)v23;
      v58 = v29;
      v9 = (v24 & 1) + v9 - 3;
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)&v57,
             (const CVector *)&v70,
             (const CVector *)((char *)&stderr + 1),
             0,
             0,
             0,
             0,
             0,
             0,
             v52) != 1 )
      {
        v10 = v55 + 1;
        if ( v9 >= -1 )
          goto LABEL_3;
        goto LABEL_38;
      }
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)&v70,
             v56,
             (const CVector *)((char *)&stderr + 1),
             0,
             0,
             0,
             0,
             0,
             0,
             v52) == 1 )
        break;
      *(float *)&v68 = *(float *)&v70 - v6;
      *((float *)&v68 + 1) = *((float *)&v70 + 1) - v7;
      v69 = v71 - v8;
      v64[0] = v65 - v6;
      v64[1] = v66 - v7;
      v64[2] = v67 - v8;
      if ( CWorld::GetIsLineOfSightClear(
             (CWorld *)&v70,
             (const CVector *)&v68,
             (const CVector *)((char *)&stderr + 1),
             0,
             0,
             0,
             0,
             0,
             0,
             v53) == 1
        && CWorld::GetIsLineOfSightClear(
             (CWorld *)&v65,
             (const CVector *)v64,
             (const CVector *)((char *)&stderr + 1),
             0,
             0,
             0,
             0,
             0,
             0,
             v52) == 1 )
      {
        if ( (*((_BYTE *)this + 73) & 8) == 0 )
        {
          **((_DWORD **)this + 4) = 0;
          v30 = (int *)*((_DWORD *)this + 4);
          if ( *v30 <= 7 )
          {
            v31 = v70;
            v32 = &v30[3 * *v30];
            *((float *)v32 + 3) = v71;
            *(double *)(v32 + 1) = v31;
            ++*v30;
            v33 = (int *)*((_DWORD *)this + 4);
            if ( *v33 <= 7 )
            {
              v34 = v68;
              v35 = &v33[3 * *v33];
              *((float *)v35 + 3) = v69;
              *(double *)(v35 + 1) = v34;
              ++*v33;
            }
          }
          *((_BYTE *)this + 73) |= 8u;
        }
        if ( CWorld::GetIsLineOfSightClear(
               (CWorld *)&v68,
               v56,
               (const CVector *)((char *)&stderr + 1),
               0,
               0,
               0,
               0,
               0,
               0,
               v52) )
        {
          v36 = (int *)*((_DWORD *)this + 3);
          if ( *v36 <= 7 )
          {
            v37 = v70;
            v38 = &v36[3 * *v36];
            *((float *)v38 + 3) = v71;
            *(double *)(v38 + 1) = v37;
            ++*v36;
            v39 = (int *)*((_DWORD *)this + 3);
            if ( *v39 <= 7 )
            {
              v40 = v68;
              v41 = &v39[3 * *v39];
              *((float *)v41 + 3) = v69;
              *(double *)(v41 + 1) = v40;
              ++*v39;
            }
          }
          *((_BYTE *)this + 73) |= 2u;
        }
      }
      if ( v9 < -1 )
      {
        v10 = v55;
LABEL_38:
        result = v54;
        if ( v10 == v54 )
        {
          result = *((unsigned __int8 *)this + 74);
          if ( result == 1 )
          {
            result = 20;
            *((_BYTE *)this + 74) = 20;
          }
        }
        return result;
      }
    }
    v48 = (int *)*((_DWORD *)this + 3);
    if ( *v48 <= 7 )
    {
      v49 = v70;
      v50 = &v48[3 * *v48];
      *((float *)v50 + 3) = v71;
      *(double *)(v50 + 1) = v49;
      ++*v48;
    }
  }
  result = *((unsigned __int8 *)this + 73) | 2;
  *((_BYTE *)this + 73) = result;
  return result;
}


// ============================================================

// Address: 0x50d978
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt16ComputeCrapRouteERK4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ComputeCrapRoute(CPed const&)
float __fastcall CTaskComplexWalkRoundBuildingAttempt::ComputeCrapRoute(
        CTaskComplexWalkRoundBuildingAttempt *this,
        const CPed *a2)
{
  int v4; // r6
  float v5; // s16
  float v6; // s18
  float v7; // s20
  double v8; // kr00_8
  float v9; // s26
  float v10; // s0
  int v11; // r0
  float *v12; // r1
  float v13; // s14
  __int64 v14; // r0
  float v15; // s2
  float v16; // s0
  float result; // r0
  int *v18; // r0
  double v19; // d16
  int *v20; // r1
  float v21; // [sp+20h] [bp-A0h] BYREF
  float v22; // [sp+24h] [bp-9Ch]
  float v23; // [sp+28h] [bp-98h]
  char v24[4]; // [sp+2Ch] [bp-94h] BYREF
  double v25; // [sp+30h] [bp-90h] BYREF
  float v26; // [sp+38h] [bp-88h]
  __int64 v27; // [sp+5Ch] [bp-64h] BYREF
  float v28; // [sp+64h] [bp-5Ch]
  double v29; // [sp+68h] [bp-58h] BYREF
  float v30; // [sp+70h] [bp-50h]

  v4 = rand();
  v5 = *((float *)this + 11);
  v6 = *((float *)this + 12);
  v7 = *((float *)this + 13);
  v29 = 0.0;
  v30 = 1.0;
  CrossProduct((const CVector *)&v25, (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 44));
  v8 = v25;
  v9 = v26;
  v10 = (float)rand();
  v11 = *((_DWORD *)a2 + 5);
  v12 = (float *)(v11 + 48);
  if ( !v11 )
    v12 = (float *)((char *)a2 + 4);
  v13 = v12[2];
  v14 = *(_QWORD *)v12;
  v15 = (float)((float)((float)v4 * 4.6566e-10) + 0.0) + 1.0;
  v16 = (float)((float)(v10 * 4.6566e-10) + (float)(v10 * 4.6566e-10)) + -1.0;
  v28 = v13 + -0.5;
  v27 = v14;
  *((float *)&v29 + 1) = (float)((float)(v6 * v15) + (float)(*((float *)&v8 + 1) * v16)) + *((float *)&v14 + 1);
  v30 = (float)((float)(v7 * v15) + (float)(v9 * v16)) + (float)(v13 + -0.5);
  *(float *)&v29 = (float)((float)(v5 * v15) + (float)(*(float *)&v8 * v16)) + *(float *)&v14;
  if ( CWorld::ProcessLineOfSight((int)&v27, (int)&v29, (int)&v25, (int)v24, 1, 0, 0, 0, 0, 0, 0, 0) )
  {
    v21 = *(float *)&v25 - *(float *)&v27;
    v22 = *((float *)&v25 + 1) - *((float *)&v27 + 1);
    v23 = v26 - v28;
    result = COERCE_FLOAT(CVector::NormaliseAndMag((CVector *)&v21));
    if ( result < 0.35 )
      return result;
    v30 = v26 - (float)(v23 * 0.35);
    *((float *)&v29 + 1) = *((float *)&v25 + 1) - (float)(v22 * 0.35);
    *(float *)&v29 = *(float *)&v25 - (float)(v21 * 0.35);
  }
  v18 = (int *)*((_DWORD *)this + 4);
  if ( *v18 <= 7 )
  {
    v19 = v29;
    v20 = &v18[3 * *v18];
    *((float *)v20 + 3) = v30;
    *(double *)(v20 + 1) = v19;
    ++*v18;
  }
  LODWORD(result) = *((unsigned __int8 *)this + 73) | 8;
  *((_BYTE *)this + 73) = LOBYTE(result);
  return result;
}


// ============================================================

// Address: 0x50db60
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundBuildingAttempt::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexWalkRoundBuildingAttempt::ControlSubTask(
        CTaskComplexWalkRoundBuildingAttempt *this,
        CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r5
  const CMatrix *v7; // r1
  float32x2_t v8; // d16
  unsigned __int64 v9; // d1
  CTaskSimpleStandStill *v10; // r5
  char v11; // r0
  unsigned int *v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r1
  float v16; // [sp+14h] [bp-1Ch] BYREF
  float32x2_t v17; // [sp+18h] [bp-18h]

  v4 = *((unsigned __int8 *)this + 73);
  if ( (v4 & 0x10) != 0 )
    return (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
  v5 = v4 << 29;
  if ( (v4 & 4) != 0 )
  {
    v6 = *((_DWORD *)this + 14);
    if ( !v6 )
    {
LABEL_8:
      *((_BYTE *)this + 73) = v4 | 0x10;
      v10 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v10, 1000, 0, 0, 8.0);
      return v10;
    }
    v7 = *(const CMatrix **)(v6 + 20);
    if ( !v7 )
    {
      CPlaceable::AllocateMatrix(*((CPlaceable **)this + 14));
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v6 + 4), *(CMatrix **)(v6 + 20));
      v7 = *(const CMatrix **)(v6 + 20);
    }
    CVector::FromMultiply((CVector *)&v16, v7, (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 60));
    v8.n64_u64[0] = vsub_f32(v17, *((float32x2_t *)this + 3)).n64_u64[0];
    v9 = vmul_f32(v8, v8).n64_u64[0];
    if ( (float)((float)((float)((float)(v16 - *((float *)this + 5)) * (float)(v16 - *((float *)this + 5)))
                       + *(float *)&v9)
               + *((float *)&v9 + 1)) > 16.0 )
    {
      LOBYTE(v4) = *((_BYTE *)this + 73);
      goto LABEL_8;
    }
    LOBYTE(v4) = *((_BYTE *)this + 73);
  }
  if ( (v4 & 2) != 0 )
  {
    if ( (v4 & 0x20) == 0
      && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
      v11 = *((_BYTE *)this + 73);
      v12 = (unsigned int *)*((_DWORD *)this + 3);
      *((_BYTE *)this + 73) = v11 | 0x20;
      v13 = *v12;
      if ( v13 )
      {
        v10 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&off_3C, v13);
        CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
          v10,
          *((char *)this + 72),
          *((const CPointRoute **)this + 3),
          0,
          0.5,
          0.5,
          0,
          0,
          1);
        return v10;
      }
      *((_BYTE *)this + 73) = v11 | 0x30;
      v10 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v10, 0, 38, 1082130432, 411, (int)"HitWall", 0);
LABEL_22:
      *(_DWORD *)v10 = &off_668818;
      return v10;
    }
  }
  else
  {
    CTaskComplexWalkRoundBuildingAttempt::ComputeRoute(this, a2);
  }
  v10 = (CTaskSimpleStandStill *)*((_DWORD *)this + 2);
  if ( (*(int (__fastcall **)(CTaskSimpleStandStill *))(*(_DWORD *)v10 + 20))(v10) == 905
    && *(int *)(*((_DWORD *)a2 + 272) + 632) > 30
    && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
  {
    *((_BYTE *)this + 73) |= 0x10u;
    v10 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v14);
    CTaskSimpleRunAnim::CTaskSimpleRunAnim((int)v10, 0, 38, 1082130432, 411, (int)"HitWall", 0);
    goto LABEL_22;
  }
  return v10;
}


// ============================================================

// Address: 0x50f9ac
// Original: _ZNK36CTaskComplexWalkRoundBuildingAttempt5CloneEv
// Demangled: CTaskComplexWalkRoundBuildingAttempt::Clone(void)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::Clone(CTaskComplexWalkRoundBuildingAttempt *this, unsigned int a2)
{
  int v3; // r4
  char v4; // r8
  char v5; // r6
  __int64 v6; // d16
  __int64 v7; // d16
  char v8; // r2
  unsigned int v9; // r1
  _DWORD *v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r0

  v3 = CTask::operator new((CTask *)&dword_4C, a2);
  v4 = *((_BYTE *)this + 72);
  v5 = *((_BYTE *)this + 73);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)v3 = &off_66B834;
  v6 = *(_QWORD *)((char *)this + 20);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  *(_QWORD *)(v3 + 20) = v6;
  v7 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 40) = *((_DWORD *)this + 10);
  *(_QWORD *)(v3 + 32) = v7;
  v8 = *(_BYTE *)(v3 + 73);
  *(_QWORD *)(v3 + 44) = *(_QWORD *)((char *)this + 44);
  *(_BYTE *)(v3 + 73) = v5 & 1 | v8 & 0xC0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_BYTE *)(v3 + 72) = v4;
  *(_BYTE *)(v3 + 74) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  CVector::Normalise((CVector *)(v3 + 44));
  v10 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v9);
  *v10 = 0;
  *(_DWORD *)(v3 + 12) = v10;
  v12 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, v11);
  *v12 = 0;
  *(_DWORD *)(v3 + 16) = v12;
  return v3;
}


// ============================================================

// Address: 0x50fa3c
// Original: _ZNK36CTaskComplexWalkRoundBuildingAttempt11GetTaskTypeEv
// Demangled: CTaskComplexWalkRoundBuildingAttempt::GetTaskType(void)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::GetTaskType(CTaskComplexWalkRoundBuildingAttempt *this)
{
  return 509;
}


// ============================================================

// Address: 0x50fa44
// Original: _ZN36CTaskComplexWalkRoundBuildingAttempt9SerializeEv
// Demangled: CTaskComplexWalkRoundBuildingAttempt::Serialize(void)
int __fastcall CTaskComplexWalkRoundBuildingAttempt::Serialize(CTaskComplexWalkRoundBuildingAttempt *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r5
  int v7; // r0
  CGenericGameStorage *v9; // r6
  int v10; // r2
  int v11; // r2
  CGenericGameStorage *v12; // r5
  __int64 v13; // d16
  int v14; // r2
  CGenericGameStorage *v15; // r5
  __int64 v16; // d16
  int v17; // r2
  CGenericGameStorage *v18; // r5
  __int64 v19; // d16
  int v20; // r2
  CGenericGameStorage *v21; // r5
  __int64 v22; // d16
  int v23; // r2
  int v24; // r2
  _BYTE v25[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskComplexWalkRoundBuildingAttempt *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexWalkRoundBuildingAttempt *))(*(_DWORD *)this + 20))(this) == 509 )
  {
    v5 = (CPed *)*((_DWORD *)this + 14);
    if ( v5 && (*((_BYTE *)v5 + 58) & 7) == 3 )
      v6 = GettPoolPedRef(v5);
    else
      v6 = -1;
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = v6;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskComplexWalkRoundBuildingAttempt *)((char *)this + 72),
      (char *)&stderr + 1,
      v11);
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(0xCu);
    v13 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 7);
    *(_QWORD *)v12 = v13;
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, &byte_9[3], v14);
    free(v12);
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(0xCu);
    v16 = *((_QWORD *)this + 4);
    *((_DWORD *)v15 + 2) = *((_DWORD *)this + 10);
    *(_QWORD *)v15 = v16;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, &byte_9[3], v17);
    free(v15);
    if ( UseDataFence )
      AddDataFence();
    v18 = (CGenericGameStorage *)malloc(0xCu);
    v19 = *(_QWORD *)((char *)this + 44);
    *((_DWORD *)v18 + 2) = *((_DWORD *)this + 13);
    *(_QWORD *)v18 = v19;
    CGenericGameStorage::_SaveDataToWorkBuffer(v18, &byte_9[3], v20);
    free(v18);
    if ( UseDataFence )
      AddDataFence();
    v21 = (CGenericGameStorage *)malloc(0xCu);
    v22 = *(_QWORD *)((char *)this + 60);
    *((_DWORD *)v21 + 2) = *((_DWORD *)this + 17);
    *(_QWORD *)v21 = v22;
    CGenericGameStorage::_SaveDataToWorkBuffer(v21, &byte_9[3], v23);
    free(v21);
    v25[0] = *((_BYTE *)this + 73) & 1;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 1, v24);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexWalkRoundBuildingAttempt *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(509, v7);
  }
}


// ============================================================
