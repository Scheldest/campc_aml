
// Address: 0x18f504
// Original: j__ZN24CTaskComplexWalkRoundCar10CreateTaskEv
// Demangled: CTaskComplexWalkRoundCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundCar::CreateTask(CTaskComplexWalkRoundCar *this)
{
  return _ZN24CTaskComplexWalkRoundCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1918b0
// Original: j__ZN24CTaskComplexWalkRoundCar13SetNewVehicleEP8CVehiclei
// Demangled: CTaskComplexWalkRoundCar::SetNewVehicle(CVehicle *,int)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundCar::SetNewVehicle(CEntity **this, CVehicle *a2, int a3)
{
  return _ZN24CTaskComplexWalkRoundCar13SetNewVehicleEP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x19da90
// Original: j__ZN24CTaskComplexWalkRoundCarC2EiRK7CVectorPK8CVehiclebi
// Demangled: CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(int,CVector const&,CVehicle const*,bool,int)
// attributes: thunk
void __fastcall CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(
        CTaskComplexWalkRoundCar *this,
        int a2,
        const CVector *a3,
        const CVehicle *a4,
        bool a5,
        char a6)
{
  _ZN24CTaskComplexWalkRoundCarC2EiRK7CVectorPK8CVehiclebi(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19db04
// Original: j__ZN24CTaskComplexWalkRoundCar25ComputeRouteRoundSmallCarEPK4CPed
// Demangled: CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(CPed const*)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(CTaskComplexWalkRoundCar *this, const CPed *a2)
{
  return _ZN24CTaskComplexWalkRoundCar25ComputeRouteRoundSmallCarEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x19f6b4
// Original: j__ZNK24CTaskComplexWalkRoundCar12GoingForDoorEv
// Demangled: CTaskComplexWalkRoundCar::GoingForDoor(void)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundCar::GoingForDoor(CTaskComplexWalkRoundCar *this)
{
  return _ZNK24CTaskComplexWalkRoundCar12GoingForDoorEv(this);
}


// ============================================================

// Address: 0x1a006c
// Original: j__ZN24CTaskComplexWalkRoundCar23ComputeRouteRoundBigCarEPK4CPed
// Demangled: CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(CPed const*)
// attributes: thunk
int __fastcall CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(CTaskComplexWalkRoundCar *this, const CPed *a2)
{
  return _ZN24CTaskComplexWalkRoundCar23ComputeRouteRoundBigCarEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x4927ec
// Original: _ZN24CTaskComplexWalkRoundCar10CreateTaskEv
// Demangled: CTaskComplexWalkRoundCar::CreateTask(void)
void __fastcall CTaskComplexWalkRoundCar::CreateTask(CTaskComplexWalkRoundCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  const CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  unsigned int v11; // r1
  CTaskComplexWalkRoundCar *v12; // r0
  bool v13; // r2
  _BOOL4 v14; // [sp+8h] [bp-28h] BYREF
  _BYTE v15[15]; // [sp+Ch] [bp-24h] BYREF
  _BYTE v16[21]; // [sp+1Bh] [bp-15h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16[1], byte_4, a3);
  if ( *(_DWORD *)&v16[1] == -1 )
    Vehicle = 0;
  else
    Vehicle = (const CVehicle *)CPools::GetVehicle(*(CPools **)&v16[1], *(_DWORD *)&v16[1] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 1, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, &byte_9[3], v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, v9);
  v12 = (CTaskComplexWalkRoundCar *)CTask::operator new((CTask *)&dword_58, v11);
  v13 = v14;
  if ( v14 )
    v13 = 1;
  CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(v12, v16[0], (const CVector *)v15, Vehicle, v13, 0);
}


// ============================================================

// Address: 0x50c258
// Original: _ZN24CTaskComplexWalkRoundCarC2EiRK7CVectorPK8CVehiclebi
// Demangled: CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(int,CVector const&,CVehicle const*,bool,int)
void __fastcall CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(
        CTaskComplexWalkRoundCar *this,
        char a2,
        const CVector *a3,
        const CVehicle *a4,
        bool a5,
        char a6)
{
  char v10; // r3
  char v11; // r1
  __int64 v12; // d16
  int v13; // r0
  CEntity **v14; // r1
  _DWORD *v15; // r0

  CTaskComplex::CTaskComplex(this);
  v10 = *((_BYTE *)this + 13) & 0xFC;
  v11 = *((_BYTE *)this + 14) & 0xF0 | a6 & 0xF;
  *((_BYTE *)this + 12) = a2;
  *((_BYTE *)this + 13) = v10 | a5;
  *((_BYTE *)this + 14) = v11;
  *(_DWORD *)this = &off_66B7F8;
  v12 = *(_QWORD *)a3;
  v13 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 7) = a4;
  v14 = (CEntity **)((char *)this + 28);
  *((_DWORD *)this + 6) = v13;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 2) = v12;
  *((_WORD *)this + 22) = 0;
  *((_DWORD *)this + 21) = -1;
  if ( a4 )
    CEntity::RegisterReference(a4, v14);
  v15 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v14);
  *v15 = 0;
  *((_DWORD *)this + 8) = v15;
}


// ============================================================

// Address: 0x50c2e4
// Original: _ZN24CTaskComplexWalkRoundCarD2Ev
// Demangled: CTaskComplexWalkRoundCar::~CTaskComplexWalkRoundCar()
void __fastcall CTaskComplexWalkRoundCar::~CTaskComplexWalkRoundCar(CTaskComplexWalkRoundCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66B7F8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 8);
  if ( v4 )
    CPointRoute::operator delete(v4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50c31c
// Original: _ZN24CTaskComplexWalkRoundCarD0Ev
// Demangled: CTaskComplexWalkRoundCar::~CTaskComplexWalkRoundCar()
void __fastcall CTaskComplexWalkRoundCar::~CTaskComplexWalkRoundCar(CTaskComplexWalkRoundCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66B7F8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (void *)*((_DWORD *)this + 8);
  if ( v4 )
    CPointRoute::operator delete(v4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x50c358
// Original: _ZN24CTaskComplexWalkRoundCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWalkRoundCar::CreateNextSubTask(CTaskComplexWalkRoundCar *this, CPed *a2)
{
  int v3; // r4
  CTaskComplexFollowPointRoute *v4; // r0
  int v5; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 902 )
    return 0;
  v3 = 0;
  if ( **((_DWORD **)this + 8) )
  {
    v4 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, 0x386u);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
      v4,
      *((char *)this + 12),
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

// Address: 0x50c3b4
// Original: _ZN24CTaskComplexWalkRoundCar15CreateRouteTaskEP4CPed
// Demangled: CTaskComplexWalkRoundCar::CreateRouteTask(CPed *)
int __fastcall CTaskComplexWalkRoundCar::CreateRouteTask(const CPointRoute **this, CPed *a2)
{
  int v3; // r4
  CTaskComplexFollowPointRoute *v4; // r0
  int v5; // r0

  v3 = 0;
  if ( *(_DWORD *)this[8] )
  {
    v4 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, (unsigned int)a2);
    CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(v4, *((char *)this + 12), this[8], 0, 0.5, 0.0, 1, 0, 0);
    return v5;
  }
  return v3;
}


// ============================================================

// Address: 0x50c3fc
// Original: _ZN24CTaskComplexWalkRoundCar13SetNewVehicleEP8CVehiclei
// Demangled: CTaskComplexWalkRoundCar::SetNewVehicle(CVehicle *,int)
int __fastcall CTaskComplexWalkRoundCar::SetNewVehicle(CEntity **this, CVehicle *a2, char a3)
{
  CEntity *v6; // r0
  CEntity **v7; // r5
  char v8; // r1
  CEntity *v9; // r2
  int result; // r0

  v7 = this + 7;
  v6 = this[7];
  if ( v6 )
    CEntity::CleanUpOldReference(v6, v7);
  this[7] = a2;
  CEntity::RegisterReference(a2, v7);
  v8 = *((_BYTE *)this + 14);
  v9 = this[8];
  *((_BYTE *)this + 13) |= 2u;
  *((_BYTE *)this + 14) = a3 & 0xF | v8 & 0xF0;
  result = 0;
  *(_DWORD *)v9 = 0;
  return result;
}


// ============================================================

// Address: 0x50c448
// Original: _ZN24CTaskComplexWalkRoundCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundCar::CreateFirstSubTask(CPed *)
CTaskSimpleAchieveHeading *__fastcall CTaskComplexWalkRoundCar::CreateFirstSubTask(
        CTaskComplexWalkRoundCar *this,
        float **a2)
{
  int v4; // r0
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r6
  bool v8; // zf
  int v9; // r3
  float *v10; // r6
  int v11; // r2
  _DWORD *v12; // r3
  __int64 v13; // d16
  __int64 *v14; // r1
  __int64 v15; // d16
  __int64 v16; // d16
  float *v17; // r1
  float v18; // s0
  float v19; // s2
  float v20; // s4
  float *v21; // r0
  float v22; // s10
  float v23; // s0
  int v24; // r0
  float *v25; // r1
  float v26; // s18
  float v27; // s20
  float v28; // s24
  float v29; // s17
  float v30; // s26
  float v31; // s30
  float v32; // s28
  int v33; // r1
  float v34; // s22
  unsigned int v35; // r1
  int TaskByType; // r0
  CTaskSimpleAchieveHeading *v37; // r5
  CTaskComplexFollowPointRoute *v38; // r0
  int v39; // r0
  CTaskSimpleStandStill *v40; // r0
  float *v41; // r0
  CGeneral *RadianAngleBetweenPoints; // r0
  float v43; // r1
  int v44; // r4
  unsigned int v45; // r1
  float v47; // [sp+0h] [bp-90h]
  _BYTE v48[32]; // [sp+14h] [bp-7Ch] BYREF
  float v49; // [sp+34h] [bp-5Ch] BYREF
  float v50; // [sp+38h] [bp-58h]
  float v51; // [sp+3Ch] [bp-54h]

  **((_DWORD **)this + 8) = 0;
  if ( (*(_BYTE *)(*((_DWORD *)this + 7) + 1069) & 4) != 0 )
    CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(this, (const CPed *)a2);
  else
    CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(this, (const CPed *)a2);
  v4 = *((_DWORD *)this + 8);
  if ( !*(_DWORD *)v4 )
    return 0;
  v5 = (_DWORD *)*((_DWORD *)this + 7);
  v6 = 15000;
  v7 = v5[309];
  if ( *((_BYTE *)this + 12) == 4 )
    v6 = 20000;
  v8 = v7 == 0;
  if ( !v7 )
    v8 = v5[308] == 0;
  if ( !v8 )
    v6 = (int)(float)((float)v6 * 4.0);
  v9 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 44) = 1;
  v10 = (float *)(a2 + 1);
  *((_DWORD *)this + 9) = v9;
  *((_DWORD *)this + 10) = v6;
  v11 = v5[5];
  v12 = (_DWORD *)(v11 + 48);
  if ( !v11 )
    v12 = v5 + 1;
  v13 = *(_QWORD *)v12;
  *((_DWORD *)this + 14) = v12[2];
  *((_QWORD *)this + 6) = v13;
  v14 = (__int64 *)v5[5];
  v15 = v14[2];
  *((_DWORD *)this + 17) = *((_DWORD *)v14 + 6);
  *(_QWORD *)((char *)this + 60) = v15;
  v16 = *v14;
  *((_DWORD *)this + 20) = *((_DWORD *)v14 + 2);
  *((_QWORD *)this + 9) = v16;
  v17 = a2[5];
  v18 = *(float *)(v4 + 4);
  v19 = *(float *)(v4 + 8);
  v20 = *(float *)(v4 + 12);
  v21 = (float *)(a2 + 1);
  if ( v17 )
    v21 = v17 + 12;
  v22 = v21[2];
  v23 = v18 - *v21;
  v50 = v19 - v21[1];
  v49 = v23;
  v51 = v20 - v22;
  *(float *)&v24 = COERCE_FLOAT(CVector::NormaliseAndMag((CVector *)&v49));
  v25 = a2[5];
  v26 = 6.0;
  v27 = v49;
  v28 = v50;
  v29 = *(float *)&v24;
  v30 = v25[4];
  v31 = v25[5];
  v32 = v25[6];
  v33 = *((unsigned __int8 *)this + 12);
  v34 = v51;
  if ( v33 == 6 )
    v26 = 4.0;
  if ( v33 == 4 )
    v26 = 2.0;
  if ( CPed::IsPlayer((CPed *)a2) == 1 )
  {
    TaskByType = CTaskManager::FindTaskByType((CTaskManager *)(a2[272] + 1), 3, 701);
    if ( TaskByType )
      *((_DWORD *)this + 21) = *(_DWORD *)(TaskByType + 76);
  }
  if ( v29 <= v26
    || (*(_DWORD *)(*((_DWORD *)this + 7) + 1068) & 0x400) != 0
    || (float)((float)((float)(v27 * v30) + (float)(v28 * v31)) + (float)(v34 * v32)) <= 0.0 )
  {
    CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v48, 0, 0, 0, 8.0);
    CTaskSimpleStandStill::ProcessPed(v40, (CPed *)a2);
    v41 = a2[5];
    if ( v41 )
      v10 = v41 + 12;
    RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                             COERCE_CGENERAL_(*(float *)(*((_DWORD *)this + 8) + 4) - *v10),
                                             *(float *)(*((_DWORD *)this + 8) + 8) - v10[1],
                                             0.0,
                                             0.0,
                                             v47);
    v44 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v43);
    v37 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v45);
    CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v37, *(float *)&v44, 1.0, 0.1);
    CTaskSimpleStandStill::~CTaskSimpleStandStill((CTaskSimpleStandStill *)v48);
  }
  else
  {
    v37 = 0;
    if ( **((_DWORD **)this + 8) )
    {
      v38 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v35);
      CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        v38,
        *((char *)this + 12),
        *((const CPointRoute **)this + 8),
        0,
        0.5,
        0.0,
        1,
        0,
        0);
      return (CTaskSimpleAchieveHeading *)v39;
    }
  }
  return v37;
}


// ============================================================

// Address: 0x50c6b8
// Original: _ZN24CTaskComplexWalkRoundCar12ComputeRouteEPK4CPed
// Demangled: CTaskComplexWalkRoundCar::ComputeRoute(CPed const*)
int __fastcall CTaskComplexWalkRoundCar::ComputeRoute(CTaskComplexWalkRoundCar *this, const CPed *a2)
{
  if ( (*(_BYTE *)(*((_DWORD *)this + 7) + 1069) & 4) == 0 )
    return CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(this, a2);
  CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(this, a2);
  return 0;
}


// ============================================================

// Address: 0x50c6d0
// Original: _ZN24CTaskComplexWalkRoundCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWalkRoundCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexWalkRoundCar::ControlSubTask(CTaskComplexWalkRoundCar *this, CPed *a2)
{
  char v4; // r0
  const CVehicle *v5; // r2
  const CPed *v6; // r1
  bool v7; // zf
  int v8; // r0
  int v9; // r8
  int v10; // r1
  unsigned int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r2
  int v15; // r2
  float *v16; // r1
  float *v17; // r3
  float32x2_t v18; // d16
  unsigned __int64 v19; // d1
  char *v20; // r5
  int v21; // t1
  int v22; // r0
  int v23; // r6
  int v24; // r5
  CTask *v25; // [sp+0h] [bp-10h]

  v4 = *((_BYTE *)this + 13);
  if ( (v4 & 2) != 0 )
  {
    v10 = *(_DWORD *)this;
    *((_BYTE *)this + 13) = v4 & 0xFD;
    return (*(int (__fastcall **)(CTaskComplexWalkRoundCar *, CPed *))(v10 + 44))(this, a2);
  }
  if ( CPed::IsPlayer(a2) != 1 )
    goto LABEL_37;
  v6 = (const CPed *)*((_DWORD *)this + 7);
  v7 = v6 == 0;
  if ( v6 )
  {
    v5 = (const CVehicle *)*((_DWORD *)this + 21);
    v7 = (const CVehicle *)((char *)v5 + 1) == 0;
  }
  if ( !v7
    && CCarEnterExit::IsPlayerToQuitCarEnter(a2, v6, v5, *((_DWORD *)this + 2), v25) == 1
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 905 )
  {
    v8 = 1302;
    v9 = 1;
  }
  else
  {
LABEL_37:
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 905
      && *((_BYTE *)this + 44) )
    {
      if ( *((_BYTE *)this + 45) )
      {
        v12 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 45) = 0;
        *((_DWORD *)this + 9) = v12;
        v13 = v12;
      }
      else
      {
        v13 = *((_DWORD *)this + 9);
        v12 = CTimer::m_snTimeInMilliseconds;
      }
      v14 = *((_DWORD *)this + 10) + v13;
      v8 = 200;
      if ( v14 <= v12 )
        v8 = 1302;
    }
    else
    {
      v8 = 200;
    }
    v9 = 0;
  }
  v15 = *((_DWORD *)this + 7);
  if ( !v15 )
    goto LABEL_27;
  v16 = *(float **)(v15 + 20);
  v17 = v16 + 12;
  if ( !v16 )
    v17 = (float *)(v15 + 4);
  v18.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 52), *(float32x2_t *)(v17 + 1)).n64_u64[0];
  v19 = vmul_f32(v18, v18).n64_u64[0];
  if ( (float)((float)((float)((float)(*((float *)this + 12) - *v17) * (float)(*((float *)this + 12) - *v17))
                     + *(float *)&v19)
             + *((float *)&v19 + 1)) <= 0.0625
    && (float)((float)((float)(*((float *)this + 15) * v16[4]) + (float)(*((float *)this + 16) * v16[5]))
             + (float)(*((float *)this + 17) * v16[6])) >= 0.9
    && v8 == 200
    && (float)((float)((float)(*((float *)this + 18) * *v16) + (float)(*((float *)this + 19) * v16[1]))
             + (float)(*((float *)this + 20) * v16[2])) >= 0.9 )
  {
    v20 = (char *)this + 8;
  }
  else
  {
LABEL_27:
    v21 = *((_DWORD *)this + 2);
    v20 = (char *)this + 8;
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v21 + 28))(v21, a2, 1, 0) == 1 )
    {
      if ( v9 != 1 )
        return 0;
      v22 = *((_DWORD *)a2 + 272);
      v23 = *(_DWORD *)(v22 + 16);
      if ( !v23 || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v23 + 20))(*(_DWORD *)(v22 + 16)) != 701 )
        return 0;
      v24 = 0;
      (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v23 + 28))(v23, a2, 0, 0);
      return v24;
    }
  }
  return *(_DWORD *)v20;
}


// ============================================================

// Address: 0x50c8b0
// Original: _ZN24CTaskComplexWalkRoundCar23ComputeRouteRoundBigCarEPK4CPed
// Demangled: CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(CPed const*)
int __fastcall CTaskComplexWalkRoundCar::ComputeRouteRoundBigCar(const CPed **this, const CPed *a2, CEntity *a3)
{
  double *v5; // r8
  int v6; // r5
  CEntity *v7; // r2
  CVector *v8; // r3
  int v9; // r9
  CVector *v10; // r3
  int *v11; // r0
  double v12; // d16
  int *v13; // r1
  int v14; // r10
  CVector *v15; // r3
  int v16; // r5
  char *v17; // r0
  __int64 v18; // kr00_8
  int v19; // r10
  int v20; // r2
  const CPed *v21; // r0
  const CPed **v22; // r1
  double v23; // d16
  double v24; // d16
  const CPed *v25; // r3
  double v26; // d16
  int v27; // r0
  _DWORD *v28; // r0
  int *v29; // r1
  int v30; // r0
  _DWORD *v31; // r2
  int v32; // r6
  __int64 v33; // d16
  int v34; // r5
  int *v35; // r1
  double v36; // d16
  int *v37; // r2
  int v38; // r2
  char *v39; // r1
  __int64 v40; // d16
  _DWORD *v41; // r6
  int v42; // r6
  int *v43; // r0
  double v44; // d16
  int *v45; // r1
  double v47; // [sp+0h] [bp-B0h] BYREF
  int v48; // [sp+8h] [bp-A8h]
  double v49; // [sp+68h] [bp-48h]
  const CPed *v50; // [sp+70h] [bp-40h]
  double v51; // [sp+78h] [bp-38h] BYREF
  const CPed *v52; // [sp+80h] [bp-30h]
  double v53; // [sp+88h] [bp-28h] BYREF
  const CPed *v54; // [sp+90h] [bp-20h]

  v5 = (double *)(this + 4);
  v6 = CPedGeometryAnalyser::ComputeEntityHitSide(a2, this[7], a3);
  if ( v6 == CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)(this + 4), this[7], v7) )
  {
    v9 = CPedGeometryAnalyser::ms_fPedNominalRadius;
    CPedGeometryAnalyser::ms_fPedNominalRadius = 1060320051;
    CPedGeometryAnalyser::ComputeClosestSurfacePoint(a2, this[7], (CEntity *)&v47, v8);
    CPedGeometryAnalyser::ComputeClosestSurfacePoint((CPedGeometryAnalyser *)(this + 4), this[7], (CEntity *)&v53, v10);
    CPedGeometryAnalyser::ms_fPedNominalRadius = v9;
    v11 = (int *)this[8];
    if ( *v11 > 7 )
      return 0;
    v12 = v47;
    v13 = &v11[3 * *v11];
    v13[3] = v48;
    *(double *)(v13 + 1) = v12;
    ++*v11;
  }
  else
  {
    v14 = CPedGeometryAnalyser::ms_fPedNominalRadius;
    CPedGeometryAnalyser::ms_fPedNominalRadius = 1060320051;
    CPedGeometryAnalyser::ComputeClosestSurfacePoint(a2, this[7], (CEntity *)&v53, v8);
    CPedGeometryAnalyser::ComputeClosestSurfacePoint((CPedGeometryAnalyser *)(this + 4), this[7], (CEntity *)&v51, v15);
    CPedGeometryAnalyser::ms_fPedNominalRadius = v14;
    v16 = *((_DWORD *)a2 + 5);
    v17 = (char *)(v16 + 48);
    if ( !v16 )
      v17 = (char *)a2 + 4;
    v18 = *(_QWORD *)v17;
    v19 = *((_DWORD *)v17 + 2);
    v20 = HIDWORD(v53);
    v21 = v54;
    if ( v16 )
    {
      *(_DWORD *)(v16 + 48) = LODWORD(v53);
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = v20;
      v22 = (const CPed **)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v22 = (const CPed **)((char *)a2 + 12);
      *(double *)((char *)a2 + 4) = v53;
    }
    *v22 = v21;
    v23 = *v5;
    v50 = this[6];
    v49 = v23;
    v24 = v51;
    this[6] = v52;
    *v5 = v24;
    CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar((CTaskComplexWalkRoundCar *)this, a2);
    v26 = v49;
    this[6] = v50;
    *v5 = v26;
    v27 = *((_DWORD *)a2 + 5);
    if ( v27 )
    {
      *(_DWORD *)(v27 + 48) = v18;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v18);
      v28 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v28 = (_DWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)a2 + 4) = v18;
    }
    *v28 = v19;
    v29 = (int *)this[8];
    v30 = *v29;
    LODWORD(v47) = v30;
    if ( v30 >= 1 )
    {
      v31 = v29 + 1;
      v25 = (const CPed *)((char *)&v47 + 4);
      v32 = 0;
      do
      {
        v33 = *(_QWORD *)v31;
        ++v32;
        v34 = v31[2];
        v31 += 3;
        *((_DWORD *)v25 + 2) = v34;
        *(_QWORD *)v25 = v33;
        v25 = (const CPed *)((char *)v25 + 12);
      }
      while ( v32 < v30 );
    }
    *v29 = 0;
    v35 = (int *)this[8];
    if ( *v35 <= 7 )
    {
      v36 = v53;
      v25 = v54;
      v37 = &v35[3 * *v35];
      v37[3] = (int)v54;
      *(double *)(v37 + 1) = v36;
      ++*v35;
    }
    if ( v30 >= 1 )
    {
      v38 = 0;
      v39 = (char *)&v47 + 4;
      do
      {
        v25 = this[8];
        if ( *(int *)v25 <= 7 )
        {
          v40 = *(_QWORD *)v39;
          v41 = (_DWORD *)((char *)v25 + 12 * *(_DWORD *)v25);
          v41[3] = *((_DWORD *)v39 + 2);
          *(_QWORD *)(v41 + 1) = v40;
          ++*(_DWORD *)v25;
        }
        ++v38;
        v39 += 12;
      }
      while ( v38 < v30 );
    }
    v42 = CPedGeometryAnalyser::ms_fPedNominalRadius;
    CPedGeometryAnalyser::ms_fPedNominalRadius = 1060320051;
    CPedGeometryAnalyser::ComputeClosestSurfacePoint((CPedGeometryAnalyser *)(this + 4), this[7], (CEntity *)&v53, v25);
    CPedGeometryAnalyser::ms_fPedNominalRadius = v42;
  }
  v43 = (int *)this[8];
  if ( *v43 <= 7 )
  {
    v44 = v53;
    v45 = &v43[3 * *v43];
    v45[3] = (int)v54;
    *(double *)(v45 + 1) = v44;
    ++*v43;
  }
  return 0;
}


// ============================================================

// Address: 0x50cabc
// Original: _ZN24CTaskComplexWalkRoundCar25ComputeRouteRoundSmallCarEPK4CPed
// Demangled: CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(CPed const*)
int __fastcall CTaskComplexWalkRoundCar::ComputeRouteRoundSmallCar(
        CTaskComplexWalkRoundCar *this,
        const CPed *a2,
        int a3,
        CVector *a4)
{
  int v6; // r0
  float *v7; // r6
  CPedGeometryAnalyser **v8; // r2
  int v9; // r0
  float *v10; // r2
  CEntity *v11; // r2
  int v12; // r0
  float *v13; // r2
  int v14; // r2
  int v15; // r1
  float *v16; // r0
  float v17; // s16
  float v18; // s0
  float v19; // s4
  float v20; // s2
  int v21; // r0
  float *v22; // r1
  float *v23; // r0
  float v24; // s0
  float v25; // s4
  float v26; // s2
  float v27; // s0
  float *v29; // [sp+0h] [bp-A8h]
  int v30; // [sp+4h] [bp-A4h]
  float v31; // [sp+8h] [bp-A0h] BYREF
  float v32; // [sp+Ch] [bp-9Ch]
  float v33; // [sp+10h] [bp-98h]
  float v34; // [sp+14h] [bp-94h]
  float v35[4]; // [sp+18h] [bp-90h] BYREF
  float v36[12]; // [sp+28h] [bp-80h] BYREF
  _BYTE v37[80]; // [sp+58h] [bp-50h] BYREF

  v6 = *((_DWORD *)a2 + 5);
  v7 = (float *)((char *)a2 + 4);
  v8 = (CPedGeometryAnalyser **)((char *)a2 + 4);
  if ( v6 )
    v8 = (CPedGeometryAnalyser **)(v6 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxCorners(v8[2], *((float *)this + 7), (CEntity *)v37, a4);
  v9 = *((_DWORD *)a2 + 5);
  v10 = v7;
  if ( v9 )
    v10 = (float *)(v9 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(
    *((CPedGeometryAnalyser **)v10 + 2),
    *((float *)this + 7),
    (CEntity *)v36,
    (CVector *)v35,
    v29);
  v12 = CPedGeometryAnalyser::ComputeEntityHitSide(a2, *((const CPed **)this + 7), v11);
  if ( v12 == -1 )
  {
    v17 = 0.0;
  }
  else
  {
    v14 = 3 * v12;
    v15 = *((_DWORD *)a2 + 5);
    v16 = &v35[v12];
    v13 = &v36[v14];
    if ( v15 )
      v7 = (float *)(v15 + 48);
    v17 = *v16 + (float)((float)((float)(*v13 * *v7) + (float)(v13[1] * v7[1])) + (float)(v13[2] * v7[2]));
  }
  if ( *((unsigned __int8 *)this + 13) << 31 )
  {
    v18 = *((float *)this + 4);
    v19 = *((float *)this + 5);
    v20 = *((float *)this + 6);
    v31 = v35[0] + (float)((float)((float)(v36[0] * v18) + (float)(v36[1] * v19)) + (float)(v36[2] * v20));
    if ( v31 < 0.0 )
    {
      v32 = v35[1] + (float)((float)((float)(v36[3] * v18) + (float)(v36[4] * v19)) + (float)(v36[5] * v20));
      if ( v32 < 0.0 )
      {
        v33 = v35[2] + (float)((float)((float)(v36[6] * v18) + (float)(v36[7] * v19)) + (float)(v36[8] * v20));
        if ( v33 < 0.0 )
        {
          v34 = v35[3] + (float)((float)((float)(v36[9] * v18) + (float)(v36[10] * v19)) + (float)(v36[11] * v20));
          if ( v34 < 0.0 )
          {
            v21 = CPedGeometryAnalyser::ComputeEntityHitSide(
                    (CTaskComplexWalkRoundCar *)((char *)this + 16),
                    *((const CVector **)this + 7),
                    (CEntity *)v13);
            if ( v21 != -1 )
            {
              v22 = &v31 + v21;
              v23 = &v36[3 * v21];
              v24 = 0.05 - *v22;
              v25 = (float)(v24 * v23[1]) + *((float *)this + 5);
              v26 = (float)(*v23 * v24) + *((float *)this + 4);
              v27 = (float)(v24 * v23[2]) + *((float *)this + 6);
              *((float *)this + 4) = v26;
              *((float *)this + 5) = v25;
              *((float *)this + 6) = v27;
            }
          }
        }
      }
    }
  }
  *((_BYTE *)this + 13) = *((_BYTE *)this + 13) & 0xC3 | (4
                                                        * (CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
                                                             a2,
                                                             *((const CPed **)this + 7),
                                                             (CTaskComplexWalkRoundCar *)((char *)this + 16),
                                                             *((const CVector **)this + 8),
                                                             (CPointRoute *)(*((unsigned __int8 *)this + 14) << 28 >> 28),
                                                             v30) & 0xF));
  return LODWORD(v17);
}


// ============================================================

// Address: 0x50ccf0
// Original: _ZNK24CTaskComplexWalkRoundCar12GoingForDoorEv
// Demangled: CTaskComplexWalkRoundCar::GoingForDoor(void)
int __fastcall CTaskComplexWalkRoundCar::GoingForDoor(CTaskComplexWalkRoundCar *this)
{
  bool v1; // zf

  v1 = *((unsigned __int8 *)this + 13) << 31 == 0;
  if ( *((unsigned __int8 *)this + 13) << 31 )
  {
    this = (CTaskComplexWalkRoundCar *)*((_DWORD *)this + 7);
    v1 = this == 0;
  }
  if ( v1 )
    return 0;
  else
    return (*((unsigned __int8 *)this + 1069) >> 2) & 1;
}


// ============================================================

// Address: 0x50f7e4
// Original: _ZNK24CTaskComplexWalkRoundCar5CloneEv
// Demangled: CTaskComplexWalkRoundCar::Clone(void)
int __fastcall CTaskComplexWalkRoundCar::Clone(CTaskComplexWalkRoundCar *this, unsigned int a2)
{
  int v3; // r4
  char v4; // r8
  char v5; // r9
  char v6; // r10
  CEntity *v7; // r5
  char v8; // r2
  char v9; // r1
  __int64 v10; // d16
  CEntity **v11; // r1
  _DWORD *v12; // r0

  v3 = CTask::operator new((CTask *)&dword_58, a2);
  v4 = *((_BYTE *)this + 12);
  v5 = *((_BYTE *)this + 13);
  v6 = *((_BYTE *)this + 14);
  v7 = (CEntity *)*((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_BYTE *)(v3 + 12) = v4;
  v8 = *(_BYTE *)(v3 + 14);
  v9 = *(_BYTE *)(v3 + 13) & 0xFC;
  *(_DWORD *)v3 = &off_66B7F8;
  *(_BYTE *)(v3 + 13) = v5 & 1 | v9;
  *(_BYTE *)(v3 + 14) = v6 & 0xF | v8 & 0xF0;
  v10 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_WORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 84) = -1;
  *(_QWORD *)(v3 + 16) = v10;
  *(_DWORD *)(v3 + 28) = v7;
  v11 = (CEntity **)(v3 + 28);
  if ( v7 )
    CEntity::RegisterReference(v7, v11);
  v12 = (_DWORD *)CPointRoute::operator new((CPointRoute *)&dword_64, (unsigned int)v11);
  *v12 = 0;
  *(_DWORD *)(v3 + 32) = v12;
  return v3;
}


// ============================================================

// Address: 0x50f87c
// Original: _ZNK24CTaskComplexWalkRoundCar11GetTaskTypeEv
// Demangled: CTaskComplexWalkRoundCar::GetTaskType(void)
int __fastcall CTaskComplexWalkRoundCar::GetTaskType(CTaskComplexWalkRoundCar *this)
{
  return 508;
}


// ============================================================

// Address: 0x50f884
// Original: _ZN24CTaskComplexWalkRoundCar9SerializeEv
// Demangled: CTaskComplexWalkRoundCar::Serialize(void)
void __fastcall CTaskComplexWalkRoundCar::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  int v8; // r2
  CGenericGameStorage *v9; // r5
  __int64 v10; // d16
  int v11; // r2
  int v12; // r5
  CGenericGameStorage *v13; // r4
  int v14; // r2
  int v15; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 508 )
  {
    v5 = GettPoolVehicleRef(this[7]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)(this + 3), (char *)&stderr + 1, v8);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(0xCu);
    v10 = *((_QWORD *)this + 2);
    *((_DWORD *)v9 + 2) = this[6];
    *(_QWORD *)v9 = v10;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, &byte_9[3], v11);
    free(v9);
    v12 = *((_BYTE *)this + 13) & 1;
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = v12;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v15 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(508, v15);
  }
}


// ============================================================
