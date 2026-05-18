
// Address: 0x18fbe0
// Original: j__ZN27CTaskComplexWalkRoundObjectC2EiRK7CVectorP7CEntity
// Demangled: CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(int,CVector const&,CEntity *)
// attributes: thunk
void __fastcall CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(
        CTaskComplexWalkRoundObject *this,
        int a2,
        const CVector *a3,
        CEntity *a4)
{
  _ZN27CTaskComplexWalkRoundObjectC2EiRK7CVectorP7CEntity(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19048c
// Original: j__ZN27CTaskComplexWalkRoundObject10CreateTaskEv
// Demangled: CTaskComplexWalkRoundObject::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundObject::CreateTask(CTaskComplexWalkRoundObject *this)
{
  return _ZN27CTaskComplexWalkRoundObject10CreateTaskEv(this);
}


// ============================================================

// Address: 0x492a9c
// Original: _ZN27CTaskComplexWalkRoundObject10CreateTaskEv
// Demangled: CTaskComplexWalkRoundObject::CreateTask(void)
void __fastcall CTaskComplexWalkRoundObject::CreateTask(CTaskComplexWalkRoundObject *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  char *v8; // r1
  int v9; // r2
  char v10; // r4
  int Vehicle; // r0
  char v12; // r4
  char v13; // r4
  CEntity *v14; // r4
  CTaskComplexWalkRoundObject *v15; // r0
  CPools *v16; // [sp+0h] [bp-20h] BYREF
  int v17; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v18[12]; // [sp+8h] [bp-18h] BYREF
  int v19[3]; // [sp+14h] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, byte_4, v6);
  if ( v17 == 2 )
  {
    v12 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v9);
      UseDataFence = v12;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v9);
    v8 = (char *)v16 + 1;
    if ( v16 != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v16, (int)v8);
      goto LABEL_22;
    }
LABEL_23:
    v14 = 0;
    goto LABEL_24;
  }
  if ( v17 == 4 )
  {
    v13 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v9);
      UseDataFence = v13;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v9);
    v8 = (char *)v16 + 1;
    if ( v16 != (CPools *)-1 )
    {
      Vehicle = CPools::GetObject(v16, (int)v8);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( v17 != 3 )
    goto LABEL_23;
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v9);
  v8 = (char *)v16 + 1;
  if ( v16 == (CPools *)-1 )
    goto LABEL_23;
  Vehicle = CPools::GetPed(v16, (int)v8);
LABEL_22:
  v14 = (CEntity *)Vehicle;
LABEL_24:
  v15 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, (unsigned int)v8);
  CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(v15, v19[0], (const CVector *)v18, v14);
}


// ============================================================

// Address: 0x50dd44
// Original: _ZN27CTaskComplexWalkRoundObjectC2EiRK7CVectorP7CEntity
// Demangled: CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(int,CVector const&,CEntity *)
void __fastcall CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(
        CTaskComplexWalkRoundObject *this,
        int a2,
        const CVector *a3,
        CEntity *a4)
{
  __int64 v8; // d16
  int v9; // r0
  CEntity **v10; // r1
  _DWORD *v11; // r0

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_66B870;
  v8 = *(_QWORD *)a3;
  v9 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 7) = a4;
  v10 = (CEntity **)((char *)this + 28);
  *((_DWORD *)this + 6) = v9;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = v8;
  *((_WORD *)this + 22) = 0;
  if ( a4 )
    CEntity::RegisterReference(a4, v10);
  v11 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v10);
  *v11 = 0;
  *((_DWORD *)this + 8) = v11;
}


// ============================================================

// Address: 0x50dda8
// Original: _ZN27CTaskComplexWalkRoundObjectD2Ev
// Demangled: CTaskComplexWalkRoundObject::~CTaskComplexWalkRoundObject()
void __fastcall CTaskComplexWalkRoundObject::~CTaskComplexWalkRoundObject(CTaskComplexWalkRoundObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66B870;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 8);
  if ( v4 )
    CPointRoute::operator delete(v4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50dde0
// Original: _ZN27CTaskComplexWalkRoundObjectD0Ev
// Demangled: CTaskComplexWalkRoundObject::~CTaskComplexWalkRoundObject()
void __fastcall CTaskComplexWalkRoundObject::~CTaskComplexWalkRoundObject(CTaskComplexWalkRoundObject *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66B870;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 8);
  if ( v4 )
    CPointRoute::operator delete(v4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x50de1c
// Original: _ZN27CTaskComplexWalkRoundObject17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundObject::CreateNextSubTask(CPed *)
CTaskComplexFollowPointRoute *__fastcall CTaskComplexWalkRoundObject::CreateNextSubTask(
        CTaskComplexWalkRoundObject *this,
        CPed *a2)
{
  int v4; // r0
  CVector *v5; // r3
  CTaskComplexFollowPointRoute *v6; // r5
  CTaskComplexFollowPointRoute *v7; // r0
  int v8; // r0
  CEntity *v9; // r2
  int v10; // r6
  CEntity *v11; // r2
  unsigned int v12; // r1
  CVector *v13; // r3
  int *v14; // r0
  double v15; // d16
  int *v16; // r1
  unsigned int *v17; // r0
  unsigned int v18; // r1
  double v19; // d16
  unsigned int *v20; // r1
  double v22; // [sp+18h] [bp-20h] BYREF
  unsigned int v23; // [sp+20h] [bp-18h]

  if ( !*((_DWORD *)this + 7) )
    return 0;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 != 903 )
  {
    if ( v4 == 902 )
    {
      if ( **((_DWORD **)this + 8) )
      {
        v6 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x386u);
LABEL_6:
        CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
          v6,
          *((_DWORD *)this + 3),
          *((const CPointRoute **)this + 8),
          0,
          0.5,
          0.0,
          1,
          0,
          0);
        return v6;
      }
      CPedGeometryAnalyser::ComputeClosestSurfacePoint(a2, *((const CPed **)this + 7), (CEntity *)&v22, v5);
      v10 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)&v22, *((const CVector **)this + 7), v9);
      if ( v10 != CPedGeometryAnalyser::ComputeEntityHitSide(
                    (CTaskComplexWalkRoundObject *)((char *)this + 16),
                    *((const CVector **)this + 7),
                    v11) )
      {
        v6 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&word_28, v12);
        CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
          v6,
          4,
          (const CVector *)&v22,
          0.5,
          2.0,
          0,
          0);
        return v6;
      }
      v14 = (int *)*((_DWORD *)this + 8);
      if ( *v14 <= 7 )
      {
        v15 = v22;
        v16 = &v14[3 * *v14];
        v16[3] = v23;
        *(double *)(v16 + 1) = v15;
        ++*v14;
      }
      CPedGeometryAnalyser::ComputeClosestSurfacePoint(
        (CTaskComplexWalkRoundObject *)((char *)this + 16),
        *((const CVector **)this + 7),
        (CEntity *)&v22,
        v13);
      v17 = (unsigned int *)*((_DWORD *)this + 8);
      v18 = *v17;
      if ( (int)*v17 > 7
        || (v19 = v22,
            v20 = &v17[3 * v18],
            v20[3] = v23,
            *(double *)(v20 + 1) = v19,
            v18 = *v17 + 1,
            *v17 = v18,
            **((_DWORD **)this + 8)) )
      {
        v6 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v18);
        goto LABEL_6;
      }
    }
    return 0;
  }
  v6 = 0;
  if ( **((_DWORD **)this + 8) )
  {
    v7 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x387u);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
      v7,
      *((_DWORD *)this + 3),
      *((const CPointRoute **)this + 8),
      0,
      0.5,
      0.0,
      1,
      0,
      0);
    return (CTaskComplexFollowPointRoute *)v8;
  }
  return v6;
}


// ============================================================

// Address: 0x50df90
// Original: _ZNK27CTaskComplexWalkRoundObject13CreateSubTaskEiPK4CPed
// Demangled: CTaskComplexWalkRoundObject::CreateSubTask(int,CPed const*)
CTaskSimpleStandStill *__fastcall CTaskComplexWalkRoundObject::CreateSubTask(
        CTaskComplexWalkRoundObject *this,
        int a2,
        const CPed *a3)
{
  CTaskSimpleStandStill *v4; // r4
  CTaskComplexFollowPointRoute *v5; // r0
  int v6; // r0

  if ( a2 == 203 )
  {
    v4 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v4, 500, 0, 0, 8.0);
  }
  else if ( a2 == 905 )
  {
    v4 = 0;
    if ( **((_DWORD **)this + 8) )
    {
      v5 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x389u);
      CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        v5,
        *((_DWORD *)this + 3),
        *((const CPointRoute **)this + 8),
        0,
        0.5,
        0.0,
        1,
        0,
        0);
      return (CTaskSimpleStandStill *)v6;
    }
  }
  else
  {
    return 0;
  }
  return v4;
}


// ============================================================

// Address: 0x50e004
// Original: _ZNK27CTaskComplexWalkRoundObject15CreateRouteTaskEPK4CPed
// Demangled: CTaskComplexWalkRoundObject::CreateRouteTask(CPed const*)
int __fastcall CTaskComplexWalkRoundObject::CreateRouteTask(CTaskComplexWalkRoundObject *this, const CPed *a2)
{
  int v3; // r4
  CTaskComplexFollowPointRoute *v4; // r0
  int v5; // r0

  v3 = 0;
  if ( **((_DWORD **)this + 8) )
  {
    v4 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, (unsigned int)a2);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
      v4,
      *((_DWORD *)this + 3),
      *((const CPointRoute **)this + 8),
      0,
      0.5,
      0.0,
      1,
      0,
      0);
    return v5;
  }
  return v3;
}


// ============================================================

// Address: 0x50e048
// Original: _ZN27CTaskComplexWalkRoundObject18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundObject::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexWalkRoundObject::CreateFirstSubTask(
        CTaskComplexWalkRoundObject *this,
        float **a2)
{
  CTaskSimpleAchieveHeading *v4; // r11
  int v5; // r6
  float *v6; // r10
  float *v7; // r0
  CPedGeometryAnalyser **v8; // r2
  CEntity *v9; // r2
  float *v10; // r1
  CPedGeometryAnalyser *v11; // r0
  int v12; // r0
  float *v13; // r2
  float *v14; // r1
  float v15; // s22
  float v16; // s24
  float *v17; // r2
  float v18; // s28
  float v19; // s26
  int v20; // r1
  float v21; // s16
  float v22; // s20
  float v23; // s18
  CMatrix **v24; // r6
  int v25; // r0
  int v26; // r2
  CMatrix *v27; // r0
  CMatrix **v28; // r1
  __int64 v29; // d16
  CMatrix *v30; // r0
  CMatrix **v31; // r5
  __int64 v32; // d16
  CMatrix *v33; // r0
  __int64 v34; // d16
  float *v35; // r1
  float *v36; // r0
  float v37; // s0
  float v38; // s2
  float v39; // s4
  float *v40; // r1
  float v41; // s0
  float v42; // s4
  float v43; // r0
  int v44; // r1
  float v45; // s0
  float *v46; // r1
  CTaskComplexFollowPointRoute *v47; // r0
  int v48; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v50; // r1
  int v51; // r4
  unsigned int v52; // r1
  float *v54; // [sp+0h] [bp-B0h]
  CPointRoute *v55; // [sp+0h] [bp-B0h]
  int v56; // [sp+4h] [bp-ACh]
  float v57[4]; // [sp+18h] [bp-98h] BYREF
  float v58; // [sp+28h] [bp-88h] BYREF
  float v59; // [sp+2Ch] [bp-84h]
  float v60; // [sp+30h] [bp-80h]

  v4 = 0;
  if ( *((_DWORD *)this + 7) )
  {
    **((_DWORD **)this + 8) = 0;
    v5 = CPedGeometryAnalyser::ms_fPedNominalRadius;
    CPedGeometryAnalyser::ms_fPedNominalRadius = 1060320051;
    CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
      (CPedGeometryAnalyser *)a2,
      *((const CPed **)this + 7),
      (CTaskComplexWalkRoundObject *)((char *)this + 16),
      *((const CVector **)this + 8),
      0,
      v56);
    CPedGeometryAnalyser::ms_fPedNominalRadius = v5;
    v6 = (float *)(a2 + 1);
    v7 = a2[5];
    v8 = (CPedGeometryAnalyser **)(a2 + 1);
    if ( v7 )
      v8 = (CPedGeometryAnalyser **)(v7 + 12);
    CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(
      v8[2],
      *((float *)this + 7),
      (CEntity *)&v58,
      (CVector *)v57,
      v54);
    v10 = a2[5];
    v11 = (CPedGeometryAnalyser *)(a2 + 1);
    if ( v10 )
      v11 = (CPedGeometryAnalyser *)(v10 + 12);
    v12 = CPedGeometryAnalyser::ComputeEntityHitSide(v11, *((const CVector **)this + 7), v9);
    v13 = a2[5];
    v14 = (float *)(a2 + 1);
    if ( v13 )
      v14 = v13 + 12;
    if ( **((_DWORD **)this + 8) )
    {
      v15 = *v14;
      v16 = v57[v12];
      v17 = &v58 + 3 * v12;
      v18 = v14[1];
      v19 = v14[2];
      v20 = *((_DWORD *)this + 3);
      v21 = *v17;
      v22 = v17[1];
      v23 = v17[2];
      v24 = (CMatrix **)*((_DWORD *)this + 7);
      v25 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 44) = 1;
      v26 = 4000;
      if ( v20 == 4 )
        v26 = 8000;
      *((_DWORD *)this + 9) = v25;
      *((_DWORD *)this + 10) = v26;
      v27 = v24[5];
      v28 = v24 + 1;
      if ( v27 )
        v28 = (CMatrix **)((char *)v27 + 48);
      v29 = *(_QWORD *)v28;
      *((_DWORD *)this + 14) = v28[2];
      *((_QWORD *)this + 6) = v29;
      v30 = v24[5];
      if ( v30 )
      {
        v31 = v24;
      }
      else
      {
        CPlaceable::AllocateMatrix((CPlaceable *)v24);
        CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v24 + 1), v24[5]);
        v31 = (CMatrix **)*((_DWORD *)this + 7);
        v30 = v24[5];
      }
      v32 = *((_QWORD *)v30 + 2);
      *((_DWORD *)this + 17) = *((_DWORD *)v30 + 6);
      *(_QWORD *)((char *)this + 60) = v32;
      v33 = v31[5];
      if ( !v33 )
      {
        CPlaceable::AllocateMatrix((CPlaceable *)v31);
        CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v31 + 1), v31[5]);
        v33 = v31[5];
      }
      v34 = *(_QWORD *)v33;
      *((_DWORD *)this + 20) = *((_DWORD *)v33 + 2);
      *((_QWORD *)this + 9) = v34;
      v35 = (float *)*((_DWORD *)this + 8);
      v36 = a2[5];
      v37 = v35[1];
      v38 = v35[2];
      v39 = v35[3];
      v40 = (float *)(a2 + 1);
      if ( v36 )
        v40 = v36 + 12;
      v41 = v37 - *v40;
      v42 = v39 - v40[2];
      v59 = v38 - v40[1];
      v58 = v41;
      v60 = v42;
      v43 = COERCE_FLOAT(CVector::NormaliseAndMag((CVector *)&v58));
      v44 = *((_DWORD *)this + 3);
      v45 = 6.0;
      if ( v44 == 6 )
        v45 = 4.0;
      if ( v44 == 4 )
        v45 = 2.0;
      v46 = a2[5];
      if ( v43 <= v45
        || (float)(v16 + (float)((float)((float)(v21 * v15) + (float)(v22 * v18)) + (float)(v23 * v19))) <= v45
        || (float)((float)((float)(v58 * v46[4]) + (float)(v59 * v46[5])) + (float)(v60 * v46[6])) <= 0.0 )
      {
        if ( v46 )
          v6 = v46 + 12;
        RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                 COERCE_CGENERAL_(*(float *)(*((_DWORD *)this + 8) + 4) - *v6),
                                                 *(float *)(*((_DWORD *)this + 8) + 8) - v6[1],
                                                 0.0,
                                                 0.0,
                                                 *(float *)&v55);
        v51 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v50);
        v4 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v52);
        CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v4, *(float *)&v51, 1.0, 0.2);
      }
      else
      {
        v4 = 0;
        if ( **((_DWORD **)this + 8) )
        {
          v47 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, (unsigned int)v46);
          CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
            v47,
            *((_DWORD *)this + 3),
            *((const CPointRoute **)this + 8),
            0,
            0.5,
            0.0,
            1,
            0,
            0);
          return (CTaskSimpleAchieveHeading *)v48;
        }
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x50e308
// Original: _ZN27CTaskComplexWalkRoundObject12ComputeRouteEP4CPed
// Demangled: CTaskComplexWalkRoundObject::ComputeRoute(CPed *)
float __fastcall CTaskComplexWalkRoundObject::ComputeRoute(const CPed **this, CEntity **a2)
{
  int v4; // r8
  float *v5; // r6
  CEntity *v6; // r0
  CPedGeometryAnalyser **v7; // r2
  CEntity *v8; // r2
  CPedGeometryAnalyser *v9; // r0
  int v10; // r0
  int v11; // r2
  CEntity *v12; // r1
  float *v13; // r0
  float *v14; // r2
  float *v16; // [sp+0h] [bp-60h]
  int v17; // [sp+4h] [bp-5Ch]
  _DWORD v18[4]; // [sp+8h] [bp-58h] BYREF
  _DWORD v19[18]; // [sp+18h] [bp-48h] BYREF

  v4 = CPedGeometryAnalyser::ms_fPedNominalRadius;
  CPedGeometryAnalyser::ms_fPedNominalRadius = 1060320051;
  CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
    (CPedGeometryAnalyser *)a2,
    this[7],
    (CEntity *)(this + 4),
    this[8],
    0,
    v17);
  CPedGeometryAnalyser::ms_fPedNominalRadius = v4;
  v5 = (float *)(a2 + 1);
  v6 = a2[5];
  v7 = a2 + 1;
  if ( v6 )
    v7 = (CPedGeometryAnalyser **)((char *)v6 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(v7[2], *((float *)this + 7), (CEntity *)v19, (CVector *)v18, v16);
  v8 = a2[5];
  v9 = (CPedGeometryAnalyser *)(a2 + 1);
  if ( v8 )
    v9 = (CEntity *)((char *)v8 + 48);
  v10 = CPedGeometryAnalyser::ComputeEntityHitSide(v9, this[7], v8);
  v11 = 3 * v10;
  v12 = a2[5];
  v13 = (float *)&v18[v10];
  v14 = (float *)&v19[v11];
  if ( v12 )
    v5 = (float *)((char *)v12 + 48);
  return *v13 + (float)((float)((float)(*v14 * *v5) + (float)(v14[1] * v5[1])) + (float)(v14[2] * v5[2]));
}


// ============================================================

// Address: 0x50e3d0
// Original: _ZN27CTaskComplexWalkRoundObject14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundObject::ControlSubTask(CPed *)
void __fastcall CTaskComplexWalkRoundObject::ControlSubTask(CTaskComplexWalkRoundObject *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r6
  int v7; // r1
  int v8; // r2
  float *v9; // r0
  int v10; // r3
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  unsigned int v13; // r1
  CTaskSimpleStandStill *v14; // r0

  if ( !*((_DWORD *)this + 7) )
    goto LABEL_18;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 905
    && *((_BYTE *)this + 44) )
  {
    if ( *((_BYTE *)this + 45) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 45) = 0;
      *((_DWORD *)this + 9) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 9);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 10) <= v4 )
      goto LABEL_18;
  }
  if ( *(int *)(*((_DWORD *)a2 + 272) + 632) > 30 )
    goto LABEL_18;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
  {
    v6 = *((_DWORD *)this + 7);
    v7 = *(_DWORD *)(v6 + 20);
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 7);
      v9 = *(float **)(v6 + 20);
    }
    else
    {
      CPlaceable::AllocateMatrix(*((CPlaceable **)this + 7));
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v6 + 4), *(CMatrix **)(v6 + 20));
      v8 = *((_DWORD *)this + 7);
      v9 = *(float **)(v6 + 20);
      v7 = *(_DWORD *)(v8 + 20);
    }
    v10 = v7 + 48;
    if ( !v7 )
      v10 = v8 + 4;
    v11.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 52), *(float32x2_t *)(v10 + 4)).n64_u64[0];
    v12 = vmul_f32(v11, v11).n64_u64[0];
    if ( (float)((float)((float)((float)(*((float *)this + 12) - *(float *)v10)
                               * (float)(*((float *)this + 12) - *(float *)v10))
                       + *(float *)&v12)
               + *((float *)&v12 + 1)) > 0.0625
      || (float)((float)((float)(*((float *)this + 15) * v9[4]) + (float)(*((float *)this + 16) * v9[5]))
               + (float)(*((float *)this + 17) * v9[6])) < 0.9
      || (float)((float)((float)(*((float *)this + 18) * *v9) + (float)(*((float *)this + 19) * v9[1]))
               + (float)(*((float *)this + 20) * v9[2])) < 0.9 )
    {
LABEL_18:
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             0) == 1 )
      {
        v14 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v13);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v14, 500, 0, 0, 8.0);
      }
    }
  }
}


// ============================================================

// Address: 0x50fc30
// Original: _ZNK27CTaskComplexWalkRoundObject5CloneEv
// Demangled: CTaskComplexWalkRoundObject::Clone(void)
int __fastcall CTaskComplexWalkRoundObject::Clone(CTaskComplexWalkRoundObject *this, unsigned int a2)
{
  int v3; // r4
  int v4; // r8
  CEntity *v5; // r5
  __int64 v6; // d16
  CEntity **v7; // r1
  _DWORD *v8; // r0

  v3 = CTask::operator new((CTask *)&dword_54, a2);
  v4 = *((_DWORD *)this + 3);
  v5 = (CEntity *)*((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)v3 = &off_66B870;
  v6 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_WORD *)(v3 + 44) = 0;
  *(_QWORD *)(v3 + 16) = v6;
  *(_DWORD *)(v3 + 28) = v5;
  v7 = (CEntity **)(v3 + 28);
  if ( v5 )
    CEntity::RegisterReference(v5, v7);
  v8 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v7);
  *v8 = 0;
  *(_DWORD *)(v3 + 32) = v8;
  return v3;
}


// ============================================================

// Address: 0x50fc98
// Original: _ZNK27CTaskComplexWalkRoundObject11GetTaskTypeEv
// Demangled: CTaskComplexWalkRoundObject::GetTaskType(void)
int __fastcall CTaskComplexWalkRoundObject::GetTaskType(CTaskComplexWalkRoundObject *this)
{
  return 510;
}


// ============================================================

// Address: 0x50fca0
// Original: _ZN27CTaskComplexWalkRoundObject9SerializeEv
// Demangled: CTaskComplexWalkRoundObject::Serialize(void)
void __fastcall CTaskComplexWalkRoundObject::Serialize(CTaskComplexWalkRoundObject *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  __int64 v8; // d16
  int v9; // r2
  int v10; // r0
  int v11; // r6
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CVehicle *v14; // r0
  int v15; // r1
  int v16; // r4
  int v17; // r0
  CGenericGameStorage *v18; // r4
  int v19; // r2
  CGenericGameStorage *v20; // r5
  int v21; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexWalkRoundObject *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexWalkRoundObject *))(*(_DWORD *)this + 20))(this) == 510 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(0xCu);
    v8 = *((_QWORD *)this + 2);
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    *(_QWORD *)v7 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_9[3], v9);
    free(v7);
    v10 = *((_DWORD *)this + 7);
    if ( v10 )
    {
      v11 = *(_BYTE *)(v10 + 58) & 7;
      if ( UseDataFence )
        AddDataFence();
      v12 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v12 = v11;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
      free(v12);
      v14 = (CVehicle *)*((_DWORD *)this + 7);
      v15 = *((_BYTE *)v14 + 58) & 7;
      switch ( v15 )
      {
        case 2:
          v16 = GettPoolVehicleRef(v14);
          break;
        case 4:
          v16 = GettPoolObjRef(v14);
          break;
        case 3:
          v16 = GettPoolPedRef(v14);
          break;
        default:
          return;
      }
      if ( UseDataFence )
        AddDataFence();
      v20 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v20 = v16;
      CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
      j_free(v20);
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v18 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v18 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
      j_free(v18);
    }
  }
  else
  {
    v17 = (*(int (__fastcall **)(CTaskComplexWalkRoundObject *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(510, v17);
  }
}


// ============================================================
