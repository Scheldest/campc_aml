
// Address: 0x18bf68
// Original: j__ZN24CTaskComplexDriveToPointC2EP8CVehicleRK7CVectorfiifi
// Demangled: CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(CVehicle *,CVector const&,float,int,int,float,int)
// attributes: thunk
void __fastcall CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
        CTaskComplexDriveToPoint *this,
        CVehicle *a2,
        const CVector *a3,
        float a4,
        int a5,
        int a6,
        float a7,
        int a8)
{
  _ZN24CTaskComplexDriveToPointC2EP8CVehicleRK7CVectorfiifi(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18d030
// Original: j__ZN24CTaskComplexDriveToPoint10CreateTaskEv
// Demangled: CTaskComplexDriveToPoint::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexDriveToPoint::CreateTask(CTaskComplexDriveToPoint *this)
{
  return _ZN24CTaskComplexDriveToPoint10CreateTaskEv(this);
}


// ============================================================

// Address: 0x192e9c
// Original: j__ZNK24CTaskComplexDriveToPoint15IsTargetBlockedEP4CPedPP7CEntityi
// Demangled: CTaskComplexDriveToPoint::IsTargetBlocked(CPed *,CEntity **,int)
// attributes: thunk
int __fastcall CTaskComplexDriveToPoint::IsTargetBlocked(
        CTaskComplexDriveToPoint *this,
        CPed *a2,
        CEntity **a3,
        int a4)
{
  return _ZNK24CTaskComplexDriveToPoint15IsTargetBlockedEP4CPedPP7CEntityi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4934f0
// Original: _ZN24CTaskComplexDriveToPoint10CreateTaskEv
// Demangled: CTaskComplexDriveToPoint::CreateTask(void)
void __fastcall CTaskComplexDriveToPoint::CreateTask(CTaskComplexDriveToPoint *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  int v10; // r2
  char v11; // r4
  int v12; // r2
  char v13; // r4
  int v14; // r2
  char v15; // r4
  char *v16; // r1
  CVehicle *Vehicle; // r4
  CTaskComplexDriveToPoint *v18; // r0
  int v19; // [sp+14h] [bp-2Ch] BYREF
  float v20; // [sp+18h] [bp-28h] BYREF
  int v21; // [sp+1Ch] [bp-24h] BYREF
  int v22; // [sp+20h] [bp-20h] BYREF
  float v23; // [sp+24h] [bp-1Ch] BYREF
  _BYTE v24[12]; // [sp+28h] [bp-18h] BYREF
  CPools *v25; // [sp+34h] [bp-Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v25, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v24, &byte_9[3], v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v23, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v8);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v12);
  v15 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v14);
    UseDataFence = v15;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, byte_4, v14);
  v16 = (char *)v25 + 1;
  if ( v25 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v25, (int)v16);
  v18 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&off_3C, (unsigned int)v16);
  CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(v18, Vehicle, (const CVector *)v24, v23, v22, v21, v20, v19);
}


// ============================================================

// Address: 0x4fc2b4
// Original: _ZN24CTaskComplexDriveToPointC2EP8CVehicleRK7CVectorfiifi
// Demangled: CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(CVehicle *,CVector const&,float,int,int,float,int)
void __fastcall CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
        CTaskComplexDriveToPoint *this,
        CVehicle *a2,
        const CVector *a3,
        float a4,
        int a5,
        int a6,
        float a7,
        int a8)
{
  __int64 v12; // d16

  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a4;
  *((_DWORD *)this + 5) = a6;
  *((_DWORD *)this + 6) = a8;
  *((_BYTE *)this + 28) = 1;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AD4C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *(_DWORD *)this = &off_66AE24;
  v12 = *(_QWORD *)a3;
  *((_DWORD *)this + 11) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 12) = a5;
  *((float *)this + 13) = a7;
  *((_BYTE *)this + 56) = 0;
  *(_QWORD *)((char *)this + 36) = v12;
}


// ============================================================

// Address: 0x4fc33c
// Original: _ZN24CTaskComplexDriveToPointD0Ev
// Demangled: CTaskComplexDriveToPoint::~CTaskComplexDriveToPoint()
void __fastcall CTaskComplexDriveToPoint::~CTaskComplexDriveToPoint(CTaskComplexDriveToPoint *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v2 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v4 = (CEntity *)*((_DWORD *)this + 3);
      if ( v4 )
        CEntity::CleanUpOldReference(v4, v3);
    }
    else
    {
      CEntity::CleanUpOldReference(v2, v3);
    }
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4fc394
// Original: _ZNK24CTaskComplexDriveToPoint27CreateSubTaskCannotGetInCarEP4CPed
// Demangled: CTaskComplexDriveToPoint::CreateSubTaskCannotGetInCar(CPed *)
void __fastcall CTaskComplexDriveToPoint::CreateSubTaskCannotGetInCar(CTaskComplexDriveToPoint *this, CPed *a2)
{
  CTaskComplexGoToPointAnyMeans *v3; // r0

  v3 = (CTaskComplexGoToPointAnyMeans *)CTask::operator new((CTask *)&dword_34, (unsigned int)a2);
  CTaskComplexGoToPointAnyMeans::CTaskComplexGoToPointAnyMeans(
    v3,
    6,
    (CTaskComplexDriveToPoint *)((char *)this + 36),
    0.5,
    *((_DWORD *)this + 5));
}


// ============================================================

// Address: 0x4fc3c0
// Original: _ZNK24CTaskComplexDriveToPoint8SetUpCarEv
// Demangled: CTaskComplexDriveToPoint::SetUpCar(void)
int __fastcall CTaskComplexDriveToPoint::SetUpCar(CTaskComplexDriveToPoint *this)
{
  _BYTE *v1; // r1
  float v2; // s0
  char v3; // r2
  int result; // r0

  v1 = (_BYTE *)*((_DWORD *)this + 3);
  *((_BYTE *)this + 29) = v1[957];
  v2 = *((float *)this + 4);
  *((_BYTE *)this + 30) = v1[958];
  v3 = v1[980];
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 31) = v3;
  if ( v2 > 0.0 )
  {
    v1[980] = (unsigned int)v2;
    v1 = (_BYTE *)*((_DWORD *)this + 3);
  }
  v1[957] = *((_DWORD *)this + 6);
  result = *((_DWORD *)this + 3);
  *(_DWORD *)(result + 944) = CTimer::m_snTimeInMilliseconds;
  return result;
}


// ============================================================

// Address: 0x4fc410
// Original: _ZN24CTaskComplexDriveToPoint5DriveEP4CPed
// Demangled: CTaskComplexDriveToPoint::Drive(CPed *)
int __fastcall CTaskComplexDriveToPoint::Drive(CTaskComplexDriveToPoint *this, CPed *a2)
{
  int v4; // r0
  float v5; // s0
  float v6; // s4
  int v7; // r1
  float v8; // s2
  float *v9; // r2
  float v10; // s6
  int v11; // r4
  int v12; // r0
  float *v13; // r1
  CVehicle *v14; // r1
  int v15; // r8
  bool v17; // [sp+0h] [bp-10h]

  v4 = *((_DWORD *)this + 3);
  v5 = *((float *)this + 9);
  v6 = *((float *)this + 10);
  v7 = *(_DWORD *)(v4 + 20);
  v8 = *((float *)this + 11);
  v9 = (float *)(v7 + 48);
  if ( !v7 )
    v9 = (float *)(v4 + 4);
  v10 = sqrtf(
          (float)((float)((float)(v5 - *v9) * (float)(v5 - *v9)) + (float)((float)(v6 - v9[1]) * (float)(v6 - v9[1])))
        + (float)((float)(v8 - v9[2]) * (float)(v8 - v9[2])));
  if ( v10 < *((float *)this + 13) )
  {
    v11 = 0;
    *(_BYTE *)(v4 + 958) = 0;
LABEL_17:
    *((_BYTE *)this + 56) = 1;
    return v11;
  }
  v11 = *((_DWORD *)this + 2);
  if ( v10 < 3.0 && !*(_BYTE *)(v4 + 958) )
    goto LABEL_16;
  if ( !*(_BYTE *)(v4 + 980) )
  {
    *(_BYTE *)(v4 + 980) = (unsigned int)*((float *)this + 4);
    v5 = *((float *)this + 9);
    v6 = *((float *)this + 10);
    v8 = *((float *)this + 11);
  }
  v12 = *((_DWORD *)a2 + 5);
  v13 = (float *)(v12 + 48);
  if ( !v12 )
    v13 = (float *)((char *)a2 + 4);
  if ( (float)((float)((float)((float)(*v13 - v5) * (float)(*v13 - v5))
                     + (float)((float)(v13[1] - v6) * (float)(v13[1] - v6)))
             + (float)((float)(v13[2] - v8) * (float)(v13[2] - v8))) <= 36.0 )
  {
    v15 = *((_DWORD *)a2 + 272);
    if ( CTaskComplexDriveToPoint::IsTargetBlocked(this, a2, (CEntity **)(v15 + 304), 16)
      || CTaskComplexDriveToPoint::IsTargetBlocked(this, a2, (CEntity **)(v15 + 224), 16) == 1 )
    {
LABEL_16:
      v11 = 0;
      goto LABEL_17;
    }
  }
  v14 = (CTaskComplexDriveToPoint *)((char *)this + 36);
  switch ( *((_DWORD *)this + 12) )
  {
    case 0:
      CCarAI::GetCarToGoToCoors(*((CCarAI **)this + 3), v14, *((CVector **)this + 6), 0, v17);
      break;
    case 1:
      CCarAI::GetCarToGoToCoorsAccurate(*((CCarAI **)this + 3), v14, *((CVector **)this + 6), 0, v17);
      break;
    case 2:
      CCarAI::GetCarToGoToCoorsStraightLine(*((CCarAI **)this + 3), v14, *((CVector **)this + 6), 0, v17);
      break;
    case 3:
      CCarAI::GetCarToGoToCoorsRacing(*((CCarAI **)this + 3), v14, *((CVector **)this + 6), 0, v17);
      break;
    default:
      return v11;
  }
  return v11;
}


// ============================================================

// Address: 0x4fc57c
// Original: _ZNK24CTaskComplexDriveToPoint15IsTargetBlockedEP4CPed
// Demangled: CTaskComplexDriveToPoint::IsTargetBlocked(CPed *)
int __fastcall CTaskComplexDriveToPoint::IsTargetBlocked(float32x2_t *this, CPed *a2)
{
  int v4; // r0
  char *v5; // r1
  float32x2_t v6; // d16
  unsigned __int64 v7; // d1
  int v9; // r6

  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)(v4 + 48);
  if ( !v4 )
    v5 = (char *)a2 + 4;
  v6.n64_u64[0] = vsub_f32(*(float32x2_t *)(v5 + 4), this[5]).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v5 - this[4].n64_f32[1]) * (float)(*(float *)v5 - this[4].n64_f32[1]))
                     + *(float *)&v7)
             + *((float *)&v7 + 1)) > 36.0 )
    return 0;
  v9 = *((_DWORD *)a2 + 272);
  if ( CTaskComplexDriveToPoint::IsTargetBlocked((CTaskComplexDriveToPoint *)this, a2, (CEntity **)(v9 + 304), 16) )
    return 1;
  else
    return CTaskComplexDriveToPoint::IsTargetBlocked((CTaskComplexDriveToPoint *)this, a2, (CEntity **)(v9 + 224), 16);
}


// ============================================================

// Address: 0x4fc608
// Original: _ZNK24CTaskComplexDriveToPoint15IsTargetBlockedEP4CPedPP7CEntityi
// Demangled: CTaskComplexDriveToPoint::IsTargetBlocked(CPed *,CEntity **,int)
int __fastcall CTaskComplexDriveToPoint::IsTargetBlocked(
        CTaskComplexDriveToPoint *this,
        CPed *a2,
        CEntity **a3,
        int a4)
{
  int v4; // lr
  int v5; // r12
  float *v6; // r1
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s6
  int v11; // r0
  double v12; // d16
  CEntity *v13; // r1
  bool v14; // zf
  int v15; // r4
  float *v16; // r5
  float v17; // s8

  v4 = *((_DWORD *)a2 + 356);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 20);
  v6 = (float *)(v5 + 48);
  if ( !v5 )
    v6 = (float *)(v4 + 4);
  if ( a4 < 1 )
    return 0;
  v7 = *((float *)this + 9);
  v8 = *((float *)this + 10);
  v9 = *((float *)this + 11);
  v11 = 0;
  v12 = (float)((float)((float)((float)(*v6 - v7) * (float)(*v6 - v7))
                      + (float)((float)(v6[1] - v8) * (float)(v6[1] - v8)))
              + (float)((float)(v6[2] - v9) * (float)(v6[2] - v9)));
  while ( 1 )
  {
    v13 = a3[v11];
    v14 = v13 == 0;
    if ( v13 )
      v14 = v13 == (CEntity *)v4;
    if ( !v14 )
    {
      v15 = *((_DWORD *)v13 + 5);
      v16 = (float *)(v15 + 48);
      if ( !v15 )
        v16 = (float *)((char *)v13 + 4);
      v17 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)v13 + 19)]) + 44) + 36);
      if ( (float)((float)((float)((float)(*v16 - v7) * (float)(*v16 - v7))
                         + (float)((float)(v16[1] - v8) * (float)(v16[1] - v8)))
                 + (float)((float)(v16[2] - v9) * (float)(v16[2] - v9))) < (float)(v17 * v17) )
      {
        v10 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44) + 36);
        if ( (float)((float)(v10 + v17) * (float)(v10 + v17)) * 1.5 > v12 )
          break;
      }
    }
    if ( ++v11 >= a4 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x4ff1bc
// Original: _ZNK24CTaskComplexDriveToPoint5CloneEv
// Demangled: CTaskComplexDriveToPoint::Clone(void)
int __fastcall CTaskComplexDriveToPoint::Clone(CTaskComplexDriveToPoint *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r10
  int v6; // r8
  int v7; // r9
  char *v8; // r6
  __int64 v9; // d16
  int result; // r0
  int v11; // [sp+0h] [bp-20h]

  v3 = CTask::operator new((CTask *)&off_3C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  v6 = *((_DWORD *)this + 6);
  v11 = *((_DWORD *)this + 12);
  v7 = *((_DWORD *)this + 13);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 24) = v6;
  *(_BYTE *)(v3 + 28) = 1;
  *(_BYTE *)(v3 + 32) = 0;
  v8 = (char *)this + 36;
  *(_DWORD *)v3 = &off_66AD4C;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_DWORD *)v3 = &off_66AE24;
  v9 = *(_QWORD *)v8;
  *(_DWORD *)(v3 + 44) = *((_DWORD *)v8 + 2);
  *(_DWORD *)(v3 + 48) = v11;
  *(_DWORD *)(v3 + 52) = v7;
  result = v3;
  *(_BYTE *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 36) = v9;
  return result;
}


// ============================================================

// Address: 0x4ff250
// Original: _ZNK24CTaskComplexDriveToPoint11GetTaskTypeEv
// Demangled: CTaskComplexDriveToPoint::GetTaskType(void)
int __fastcall CTaskComplexDriveToPoint::GetTaskType(CTaskComplexDriveToPoint *this)
{
  return 710;
}


// ============================================================

// Address: 0x4ff258
// Original: _ZN24CTaskComplexDriveToPoint9SerializeEv
// Demangled: CTaskComplexDriveToPoint::Serialize(void)
void __fastcall CTaskComplexDriveToPoint::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r5
  __int64 v9; // d16
  int v10; // r2
  CVehicle *v11; // r6
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r5
  int v17; // r2
  CVehicle *v18; // r6
  CGenericGameStorage *v19; // r5
  int v20; // r2
  CGenericGameStorage *v21; // r5
  int v22; // r2
  int v23; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 710 )
  {
    v5 = GettPoolVehicleRef(this[3]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(0xCu);
    v9 = *(_QWORD *)(this + 9);
    *((_DWORD *)v8 + 2) = this[11];
    *(_QWORD *)v8 = v9;
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, &byte_9[3], v10);
    free(v8);
    v11 = this[4];
    if ( UseDataFence )
      AddDataFence();
    v12 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v12 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
    free(v12);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = this[12];
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = this[5];
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    free(v16);
    v18 = this[13];
    if ( UseDataFence )
      AddDataFence();
    v19 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v19 = v18;
    CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
    free(v19);
    if ( UseDataFence )
      AddDataFence();
    v21 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v21 = this[6];
    CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
    j_free(v21);
  }
  else
  {
    v23 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(710, v23);
  }
}


// ============================================================
