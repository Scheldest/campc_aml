
// Address: 0x18b1a0
// Original: j__ZN8CRestart23AddHospitalRestartPointERK7CVectorfi
// Demangled: CRestart::AddHospitalRestartPoint(CVector const&,float,int)
// attributes: thunk
int __fastcall CRestart::AddHospitalRestartPoint(CRestart *this, const CVector *a2, float a3, int a4)
{
  return _ZN8CRestart23AddHospitalRestartPointERK7CVectorfi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18b234
// Original: j__ZN8CRestart21AddPoliceRestartPointERK7CVectorfi
// Demangled: CRestart::AddPoliceRestartPoint(CVector const&,float,int)
// attributes: thunk
int __fastcall CRestart::AddPoliceRestartPoint(CRestart *this, const CVector *a2, float a3, int a4)
{
  return _ZN8CRestart21AddPoliceRestartPointERK7CVectorfi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18d0e8
// Original: j__ZN8CRestart29FindClosestPoliceRestartPointE7CVectorPS0_Pf
// Demangled: CRestart::FindClosestPoliceRestartPoint(CVector,CVector*,float *)
// attributes: thunk
int CRestart::FindClosestPoliceRestartPoint()
{
  return _ZN8CRestart29FindClosestPoliceRestartPointE7CVectorPS0_Pf();
}


// ============================================================

// Address: 0x18eb94
// Original: j__ZN8CRestart31FindClosestHospitalRestartPointE7CVectorPS0_Pf
// Demangled: CRestart::FindClosestHospitalRestartPoint(CVector,CVector*,float *)
// attributes: thunk
int CRestart::FindClosestHospitalRestartPoint()
{
  return _ZN8CRestart31FindClosestHospitalRestartPointE7CVectorPS0_Pf();
}


// ============================================================

// Address: 0x193dc8
// Original: j__ZN8CRestart21CancelOverrideRestartEv
// Demangled: CRestart::CancelOverrideRestart(void)
// attributes: thunk
int __fastcall CRestart::CancelOverrideRestart(CRestart *this)
{
  return _ZN8CRestart21CancelOverrideRestartEv(this);
}


// ============================================================

// Address: 0x19998c
// Original: j__ZN8CRestart37ClearRespawnPointForDurationOfMissionEv
// Demangled: CRestart::ClearRespawnPointForDurationOfMission(void)
// attributes: thunk
int __fastcall CRestart::ClearRespawnPointForDurationOfMission(CRestart *this)
{
  return _ZN8CRestart37ClearRespawnPointForDurationOfMissionEv(this);
}


// ============================================================

// Address: 0x19ba10
// Original: j__ZN8CRestart10InitialiseEv
// Demangled: CRestart::Initialise(void)
// attributes: thunk
int __fastcall CRestart::Initialise(CRestart *this)
{
  return _ZN8CRestart10InitialiseEv(this);
}


// ============================================================

// Address: 0x19d5ac
// Original: j__ZN8CRestart4LoadEv
// Demangled: CRestart::Load(void)
// attributes: thunk
int __fastcall CRestart::Load(CRestart *this)
{
  return _ZN8CRestart4LoadEv(this);
}


// ============================================================

// Address: 0x19d77c
// Original: j__ZN8CRestart35SetRespawnPointForDurationOfMissionE7CVector
// Demangled: CRestart::SetRespawnPointForDurationOfMission(CVector)
// attributes: thunk
int CRestart::SetRespawnPointForDurationOfMission()
{
  return _ZN8CRestart35SetRespawnPointForDurationOfMissionE7CVector();
}


// ============================================================

// Address: 0x19e314
// Original: j__ZN8CRestart19OverrideNextRestartERK7CVectorf
// Demangled: CRestart::OverrideNextRestart(CVector const&,float)
// attributes: thunk
int __fastcall CRestart::OverrideNextRestart(CRestart *this, const CVector *a2, float a3)
{
  return _ZN8CRestart19OverrideNextRestartERK7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x1a0a88
// Original: j__ZN8CRestart4SaveEv
// Demangled: CRestart::Save(void)
// attributes: thunk
int __fastcall CRestart::Save(CRestart *this)
{
  return _ZN8CRestart4SaveEv(this);
}


// ============================================================

// Address: 0x324824
// Original: _ZN8CRestart10InitialiseEv
// Demangled: CRestart::Initialise(void)
int __fastcall CRestart::Initialise(CRestart *this)
{
  int result; // r0

  CRestart::PoliceRestartPoints = 0LL;
  unk_7B6E38 = 0LL;
  unk_7B6E40 = 0LL;
  unk_7B6E48 = 0LL;
  CRestart::HospitalRestartPoints = 0LL;
  unk_7B6D70 = 0LL;
  unk_7B6D78 = 0LL;
  unk_7B6D80 = 0LL;
  dword_7B6E00 = 0;
  unk_7B6E04 = 0;
  CRestart::HospitalRestartHeadings = 0LL;
  unk_7B6DE8 = 0LL;
  unk_7B6DF0 = 0LL;
  unk_7B6DF8 = 0LL;
  unk_7B6DC8 = 0LL;
  unk_7B6DD0 = 0LL;
  unk_7B6DB8 = 0LL;
  unk_7B6DC0 = 0LL;
  unk_7B6DA8 = 0LL;
  unk_7B6DB0 = 0LL;
  unk_7B6D98 = 0LL;
  unk_7B6DA0 = 0LL;
  dword_7B6DD8 = 0;
  unk_7B6DDC = 0;
  unk_7B6D88 = 0LL;
  unk_7B6D90 = 0LL;
  unk_7B6E90 = 0LL;
  unk_7B6E98 = 0LL;
  unk_7B6E80 = 0LL;
  unk_7B6E88 = 0LL;
  unk_7B6E70 = 0LL;
  unk_7B6E78 = 0LL;
  unk_7B6E60 = 0LL;
  unk_7B6E68 = 0LL;
  dword_7B6EA0 = 0;
  unk_7B6EA4 = 0;
  unk_7B6E50 = 0LL;
  unk_7B6E58 = 0LL;
  dword_7B6EC8 = 0;
  unk_7B6ECC = 0;
  CRestart::PoliceRestartHeadings = 0LL;
  unk_7B6EB0 = 0LL;
  unk_7B6EB8 = 0LL;
  unk_7B6EC0 = 0LL;
  CRestart::NumberOfHospitalRestarts = 0;
  CRestart::NumberOfPoliceRestarts = 0;
  CRestart::bOverrideRestart = 0;
  CRestart::OverridePosition = 0;
  *(_DWORD *)algn_7B6F04 = 0;
  dword_7B6F08 = 0;
  result = 1;
  CRestart::OverrideHeading = 0;
  CRestart::bFadeInAfterNextDeath = 1;
  CRestart::bFadeInAfterNextArrest = 1;
  CRestart::ExtraHospitalRestartRadius = 0;
  CRestart::ExtraPoliceStationRestartRadius = 0;
  CRestart::bOverrideRespawnBasePointForMission = 0;
  return result;
}


// ============================================================

// Address: 0x324968
// Original: _ZN8CRestart23AddHospitalRestartPointERK7CVectorfi
// Demangled: CRestart::AddHospitalRestartPoint(CVector const&,float,int)
int __fastcall CRestart::AddHospitalRestartPoint(__int64 *a1, int a2, int a3)
{
  __int64 v3; // d16
  int v4; // r9
  int v5; // r5
  char *v6; // r0
  int result; // r0

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 2);
  v5 = (unsigned __int16)CRestart::NumberOfHospitalRestarts;
  v6 = (char *)&CRestart::HospitalRestartPoints + 12 * (unsigned __int16)CRestart::NumberOfHospitalRestarts;
  CRestart::HospitalRestartWhenToUse[(unsigned __int16)CRestart::NumberOfHospitalRestarts] = a3;
  *((_DWORD *)v6 + 2) = v4;
  *(_QWORD *)v6 = v3;
  result = v5 + 1;
  CRestart::HospitalRestartHeadings[v5] = a2;
  CRestart::NumberOfHospitalRestarts = v5 + 1;
  return result;
}


// ============================================================

// Address: 0x3249d0
// Original: _ZN8CRestart21AddPoliceRestartPointERK7CVectorfi
// Demangled: CRestart::AddPoliceRestartPoint(CVector const&,float,int)
int __fastcall CRestart::AddPoliceRestartPoint(__int64 *a1, int a2, int a3)
{
  __int64 v3; // d16
  int v4; // r9
  int v5; // r5
  char *v6; // r0
  int result; // r0

  v3 = *a1;
  v4 = *((_DWORD *)a1 + 2);
  v5 = (unsigned __int16)CRestart::NumberOfPoliceRestarts;
  v6 = (char *)&CRestart::PoliceRestartPoints + 12 * (unsigned __int16)CRestart::NumberOfPoliceRestarts;
  CRestart::PoliceRestartWhenToUse[(unsigned __int16)CRestart::NumberOfPoliceRestarts] = a3;
  *((_DWORD *)v6 + 2) = v4;
  *(_QWORD *)v6 = v3;
  result = v5 + 1;
  CRestart::PoliceRestartHeadings[v5] = a2;
  CRestart::NumberOfPoliceRestarts = v5 + 1;
  return result;
}


// ============================================================

// Address: 0x324a38
// Original: _ZN8CRestart31FindClosestHospitalRestartPointE7CVectorPS0_Pf
// Demangled: CRestart::FindClosestHospitalRestartPoint(CVector,CVector*,float *)
int __fastcall CRestart::FindClosestHospitalRestartPoint(unsigned __int64 a1, float a2, int a3, int *a4)
{
  int *v5; // r6
  __int64 v6; // d16
  int result; // r0
  float32x2_t v8; // d16
  unsigned __int64 v9; // d1
  unsigned __int64 v10; // d16
  const CVector *v11; // r1
  int LevelFromPosition; // r5
  __int16 v13; // r8
  float v14; // s16
  int v15; // r9
  unsigned __int16 v16; // r10
  float v17; // s20
  float *v18; // r0
  float v19; // s22
  float v20; // s20
  char *v21; // r1
  __int64 v22; // d16
  float32x2_t v23; // [sp+8h] [bp-50h] BYREF
  float v24; // [sp+10h] [bp-48h]

  v23.n64_u64[0] = a1;
  v5 = a4;
  v24 = a2;
  if ( CRestart::bOverrideRestart )
  {
    v6 = *(_QWORD *)&CRestart::OverridePosition;
    *(_DWORD *)(a3 + 8) = dword_7B6F08;
    *(_QWORD *)a3 = v6;
    *a4 = CRestart::OverrideHeading;
    result = 0;
    CRestart::bOverrideRestart = 0;
    return result;
  }
  if ( CRestart::bOverrideRespawnBasePointForMission )
  {
    HIDWORD(a1) = &CRestart::bOverrideRespawnBasePointForMission;
    v24 = *(float *)&dword_7B6F48;
    CRestart::bOverrideRespawnBasePointForMission = 0;
    v23.n64_u64[0] = CRestart::OverrideRespawnBasePointForMission;
  }
  if ( *(float *)&CRestart::ExtraHospitalRestartRadius > 0.0 )
  {
    v8.n64_u64[0] = vsub_f32(v23, CRestart::ExtraHospitalRestartCoors).n64_u64[0];
    v9 = vmul_f32(v8, v8).n64_u64[0];
    if ( sqrtf(*(float *)&v9 + *((float *)&v9 + 1)) < *(float *)&CRestart::ExtraHospitalRestartRadius )
    {
      v10 = CRestart::ExtraHospitalRestartCoors.n64_u64[0];
      *(_DWORD *)(a3 + 8) = dword_7B6F1C;
      *(_QWORD *)a3 = v10;
      result = CRestart::ExtraHospitalRestartHeading;
LABEL_21:
      *v5 = result;
      return result;
    }
  }
  LevelFromPosition = CTheZones::GetLevelFromPosition((CTheZones *)&v23, (const CVector *)HIDWORD(a1));
  result = (unsigned __int16)CRestart::NumberOfHospitalRestarts;
  if ( CRestart::NumberOfHospitalRestarts )
  {
    v13 = -1;
    v14 = 10000000.0;
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = (float)(int)CRestart::HospitalRestartWhenToUse[v15];
      if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_B4 + 1), (unsigned __int16)v11)) >= v17 )
      {
        v18 = (float *)((char *)&CRestart::HospitalRestartPoints + 12 * v15);
        v19 = sqrtf(
                (float)((float)((float)(v23.n64_f32[0] - *v18) * (float)(v23.n64_f32[0] - *v18))
                      + (float)((float)(v23.n64_f32[1] - v18[1]) * (float)(v23.n64_f32[1] - v18[1])))
              + (float)((float)(v24 - v18[2]) * (float)(v24 - v18[2])));
        if ( LevelFromPosition )
        {
          v20 = v19 * 6.0;
          if ( LevelFromPosition == CTheZones::GetLevelFromPosition((CTheZones *)v18, v11) )
            v20 = v19;
        }
        else
        {
          v20 = v19;
        }
        if ( v20 < v14 )
        {
          v13 = v16;
          v14 = v20;
        }
      }
      v15 = ++v16;
    }
    while ( v16 < (unsigned int)(unsigned __int16)CRestart::NumberOfHospitalRestarts );
    v5 = a4;
    result = v13;
    if ( v13 >= 0 )
    {
      v21 = (char *)&CRestart::HospitalRestartPoints + 12 * v13;
      v22 = *(_QWORD *)v21;
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v21 + 2);
      *(_QWORD *)a3 = v22;
      result = CRestart::HospitalRestartHeadings[v13];
      goto LABEL_21;
    }
  }
  return result;
}


// ============================================================

// Address: 0x324c64
// Original: _ZN8CRestart29FindClosestPoliceRestartPointE7CVectorPS0_Pf
// Demangled: CRestart::FindClosestPoliceRestartPoint(CVector,CVector*,float *)
int __fastcall CRestart::FindClosestPoliceRestartPoint(unsigned __int64 a1, float a2, int a3, int *a4)
{
  int *v5; // r6
  __int64 v6; // d16
  int result; // r0
  float32x2_t v8; // d16
  unsigned __int64 v9; // d1
  unsigned __int64 v10; // d16
  const CVector *v11; // r1
  int LevelFromPosition; // r5
  __int16 v13; // r8
  float v14; // s16
  int v15; // r9
  unsigned __int16 v16; // r10
  float v17; // s20
  float *v18; // r0
  float v19; // s22
  float v20; // s20
  char *v21; // r1
  __int64 v22; // d16
  float32x2_t v23; // [sp+8h] [bp-50h] BYREF
  float v24; // [sp+10h] [bp-48h]

  v23.n64_u64[0] = a1;
  v5 = a4;
  v24 = a2;
  if ( CRestart::bOverrideRestart )
  {
    v6 = *(_QWORD *)&CRestart::OverridePosition;
    *(_DWORD *)(a3 + 8) = dword_7B6F08;
    *(_QWORD *)a3 = v6;
    *a4 = CRestart::OverrideHeading;
    result = 0;
    CRestart::bOverrideRestart = 0;
    return result;
  }
  if ( CRestart::bOverrideRespawnBasePointForMission )
  {
    HIDWORD(a1) = &CRestart::bOverrideRespawnBasePointForMission;
    v24 = *(float *)&dword_7B6F48;
    CRestart::bOverrideRespawnBasePointForMission = 0;
    v23.n64_u64[0] = CRestart::OverrideRespawnBasePointForMission;
  }
  if ( *(float *)&CRestart::ExtraPoliceStationRestartRadius > 0.0 )
  {
    v8.n64_u64[0] = vsub_f32(v23, CRestart::ExtraPoliceStationRestartCoors).n64_u64[0];
    v9 = vmul_f32(v8, v8).n64_u64[0];
    if ( sqrtf(*(float *)&v9 + *((float *)&v9 + 1)) < *(float *)&CRestart::ExtraPoliceStationRestartRadius )
    {
      v10 = CRestart::ExtraPoliceStationRestartCoors.n64_u64[0];
      *(_DWORD *)(a3 + 8) = dword_7B6F30;
      *(_QWORD *)a3 = v10;
      result = CRestart::ExtraPoliceStationRestartHeading;
LABEL_21:
      *v5 = result;
      return result;
    }
  }
  LevelFromPosition = CTheZones::GetLevelFromPosition((CTheZones *)&v23, (const CVector *)HIDWORD(a1));
  result = (unsigned __int16)CRestart::NumberOfPoliceRestarts;
  if ( CRestart::NumberOfPoliceRestarts )
  {
    v13 = -1;
    v14 = 100000.0;
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = (float)(int)CRestart::PoliceRestartWhenToUse[v15];
      if ( COERCE_FLOAT(CStats::GetStatValue((CStats *)((char *)&dword_B4 + 1), (unsigned __int16)v11)) >= v17 )
      {
        v18 = (float *)((char *)&CRestart::PoliceRestartPoints + 12 * v15);
        v19 = sqrtf(
                (float)((float)((float)(v23.n64_f32[0] - *v18) * (float)(v23.n64_f32[0] - *v18))
                      + (float)((float)(v23.n64_f32[1] - v18[1]) * (float)(v23.n64_f32[1] - v18[1])))
              + (float)((float)(v24 - v18[2]) * (float)(v24 - v18[2])));
        if ( LevelFromPosition )
        {
          v20 = v19 * 6.0;
          if ( LevelFromPosition == CTheZones::GetLevelFromPosition((CTheZones *)v18, v11) )
            v20 = v19;
        }
        else
        {
          v20 = v19;
        }
        if ( v20 < v14 )
        {
          v13 = v16;
          v14 = v20;
        }
      }
      v15 = ++v16;
    }
    while ( v16 < (unsigned int)(unsigned __int16)CRestart::NumberOfPoliceRestarts );
    v5 = a4;
    result = v13;
    if ( v13 >= 0 )
    {
      v21 = (char *)&CRestart::PoliceRestartPoints + 12 * v13;
      v22 = *(_QWORD *)v21;
      *(_DWORD *)(a3 + 8) = *((_DWORD *)v21 + 2);
      *(_QWORD *)a3 = v22;
      result = CRestart::PoliceRestartHeadings[v13];
      goto LABEL_21;
    }
  }
  return result;
}


// ============================================================

// Address: 0x324e90
// Original: _ZN8CRestart19OverrideNextRestartERK7CVectorf
// Demangled: CRestart::OverrideNextRestart(CVector const&,float)
int __fastcall CRestart::OverrideNextRestart(__int64 *a1, int a2)
{
  __int64 v2; // d16
  int result; // r0

  v2 = *a1;
  dword_7B6F08 = *((_DWORD *)a1 + 2);
  result = 1;
  *(_QWORD *)&CRestart::OverridePosition = v2;
  CRestart::OverrideHeading = a2;
  CRestart::bOverrideRestart = 1;
  return result;
}


// ============================================================

// Address: 0x324ec8
// Original: _ZN8CRestart21CancelOverrideRestartEv
// Demangled: CRestart::CancelOverrideRestart(void)
char *__fastcall CRestart::CancelOverrideRestart(CRestart *this)
{
  char *result; // r0

  result = &CRestart::bOverrideRestart;
  CRestart::bOverrideRestart = 0;
  return result;
}


// ============================================================

// Address: 0x324ed8
// Original: _ZN8CRestart35SetRespawnPointForDurationOfMissionE7CVector
// Demangled: CRestart::SetRespawnPointForDurationOfMission(CVector)
int __fastcall CRestart::SetRespawnPointForDurationOfMission(int result, int a2, int a3)
{
  CRestart::bOverrideRespawnBasePointForMission = 1;
  CRestart::OverrideRespawnBasePointForMission = result;
  unk_7B6F44 = a2;
  dword_7B6F48 = a3;
  return result;
}


// ============================================================

// Address: 0x324f04
// Original: _ZN8CRestart37ClearRespawnPointForDurationOfMissionEv
// Demangled: CRestart::ClearRespawnPointForDurationOfMission(void)
char *__fastcall CRestart::ClearRespawnPointForDurationOfMission(CRestart *this)
{
  char *result; // r0

  result = &CRestart::bOverrideRespawnBasePointForMission;
  CRestart::bOverrideRespawnBasePointForMission = 0;
  return result;
}


// ============================================================

// Address: 0x48d1ac
// Original: _ZN8CRestart4SaveEv
// Demangled: CRestart::Save(void)
int __fastcall CRestart::Save(CRestart *this)
{
  CGenericGameStorage *v1; // r4
  int v2; // r2
  int v3; // r5
  int v4; // r6
  char *v5; // r8
  CGenericGameStorage *v6; // r4
  __int64 v7; // d16
  int v8; // r2
  CGenericGameStorage *v9; // r4
  int v10; // r2
  CGenericGameStorage *v11; // r4
  int v12; // r2
  CGenericGameStorage *v13; // r4
  int v14; // r2
  int v15; // r2
  int v16; // r5
  int v17; // r6
  char *v18; // r8
  CGenericGameStorage *v19; // r4
  __int64 v20; // d16
  int v21; // r2
  CGenericGameStorage *v22; // r4
  int v23; // r2
  CGenericGameStorage *v24; // r4
  int v25; // r2
  CGenericGameStorage *v26; // r4
  __int64 v27; // d16
  int v28; // r2
  int v29; // r2
  int v30; // r2
  CGenericGameStorage *v31; // r4
  unsigned __int64 v32; // d16
  int v33; // r2
  CGenericGameStorage *v34; // r4
  int v35; // r2
  CGenericGameStorage *v36; // r4
  int v37; // r2
  CGenericGameStorage *v38; // r4
  unsigned __int64 v39; // d16
  int v40; // r2
  CGenericGameStorage *v41; // r4
  int v42; // r2
  CGenericGameStorage *v43; // r4
  int v44; // r2

  v1 = (CGenericGameStorage *)malloc(2u);
  *(_WORD *)v1 = CRestart::NumberOfHospitalRestarts;
  CGenericGameStorage::_SaveDataToWorkBuffer(v1, (char *)&stderr + 2, v2);
  free(v1);
  if ( CRestart::NumberOfHospitalRestarts )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = (char *)&CRestart::HospitalRestartPoints + 12 * v3;
      v6 = (CGenericGameStorage *)malloc(0xCu);
      v7 = *(_QWORD *)v5;
      *((_DWORD *)v6 + 2) = *((_DWORD *)v5 + 2);
      *(_QWORD *)v6 = v7;
      CGenericGameStorage::_SaveDataToWorkBuffer(v6, &byte_9[3], v8);
      free(v6);
      v9 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v9 = CRestart::HospitalRestartHeadings[v3];
      CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
      free(v9);
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = CRestart::HospitalRestartWhenToUse[v3];
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      free(v11);
      v3 = (unsigned __int16)++v4;
    }
    while ( (unsigned __int16)v4 < (unsigned int)(unsigned __int16)CRestart::NumberOfHospitalRestarts );
  }
  v13 = (CGenericGameStorage *)malloc(2u);
  *(_WORD *)v13 = CRestart::NumberOfPoliceRestarts;
  CGenericGameStorage::_SaveDataToWorkBuffer(v13, (char *)&stderr + 2, v14);
  free(v13);
  if ( CRestart::NumberOfPoliceRestarts )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = (char *)&CRestart::PoliceRestartPoints + 12 * v16;
      v19 = (CGenericGameStorage *)malloc(0xCu);
      v20 = *(_QWORD *)v18;
      *((_DWORD *)v19 + 2) = *((_DWORD *)v18 + 2);
      *(_QWORD *)v19 = v20;
      CGenericGameStorage::_SaveDataToWorkBuffer(v19, &byte_9[3], v21);
      free(v19);
      v22 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v22 = CRestart::PoliceRestartHeadings[v16];
      CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
      free(v22);
      v24 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v24 = CRestart::PoliceRestartWhenToUse[v16];
      CGenericGameStorage::_SaveDataToWorkBuffer(v24, byte_4, v25);
      free(v24);
      v16 = (unsigned __int16)++v17;
    }
    while ( (unsigned __int16)v17 < (unsigned int)(unsigned __int16)CRestart::NumberOfPoliceRestarts );
  }
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CGenericGameStorage *)&CRestart::bOverrideRestart,
    (char *)&stderr + 1,
    v15);
  v26 = (CGenericGameStorage *)malloc(0xCu);
  v27 = *(_QWORD *)&CRestart::OverridePosition;
  *((_DWORD *)v26 + 2) = dword_7B6F08;
  *(_QWORD *)v26 = v27;
  CGenericGameStorage::_SaveDataToWorkBuffer(v26, &byte_9[3], v28);
  free(v26);
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CGenericGameStorage *)&CRestart::bFadeInAfterNextDeath,
    (char *)&stderr + 1,
    v29);
  CGenericGameStorage::_SaveDataToWorkBuffer(
    (CGenericGameStorage *)&CRestart::bFadeInAfterNextArrest,
    (char *)&stderr + 1,
    v30);
  v31 = (CGenericGameStorage *)malloc(0xCu);
  v32 = CRestart::ExtraHospitalRestartCoors.n64_u64[0];
  *((_DWORD *)v31 + 2) = dword_7B6F1C;
  *(_QWORD *)v31 = v32;
  CGenericGameStorage::_SaveDataToWorkBuffer(v31, &byte_9[3], v33);
  free(v31);
  v34 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v34 = CRestart::ExtraHospitalRestartRadius;
  CGenericGameStorage::_SaveDataToWorkBuffer(v34, byte_4, v35);
  free(v34);
  v36 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v36 = CRestart::ExtraHospitalRestartHeading;
  CGenericGameStorage::_SaveDataToWorkBuffer(v36, byte_4, v37);
  free(v36);
  v38 = (CGenericGameStorage *)malloc(0xCu);
  v39 = CRestart::ExtraPoliceStationRestartCoors.n64_u64[0];
  *((_DWORD *)v38 + 2) = dword_7B6F30;
  *(_QWORD *)v38 = v39;
  CGenericGameStorage::_SaveDataToWorkBuffer(v38, &byte_9[3], v40);
  free(v38);
  v41 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v41 = CRestart::ExtraPoliceStationRestartRadius;
  CGenericGameStorage::_SaveDataToWorkBuffer(v41, byte_4, v42);
  free(v41);
  v43 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v43 = CRestart::ExtraPoliceStationRestartHeading;
  CGenericGameStorage::_SaveDataToWorkBuffer(v43, byte_4, v44);
  free(v43);
  return 1;
}


// ============================================================

// Address: 0x48d4a4
// Original: _ZN8CRestart4LoadEv
// Demangled: CRestart::Load(void)
int __fastcall CRestart::Load(CRestart *this)
{
  int v1; // r2
  int v2; // r2
  int v3; // r6
  int v4; // r4
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r6
  int v9; // r4
  int v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r2
  int v18; // r2
  int v19; // r2
  int v20; // r2

  CRestart::Initialise(this);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::NumberOfHospitalRestarts,
    (char *)&stderr + 2,
    v1);
  if ( CRestart::NumberOfHospitalRestarts )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)((char *)&CRestart::HospitalRestartPoints + 12 * v3),
        &byte_9[3],
        v2);
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)&CRestart::HospitalRestartHeadings[v3],
        byte_4,
        v5);
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)&CRestart::HospitalRestartWhenToUse[v3],
        byte_4,
        v6);
      v3 = (unsigned __int16)++v4;
    }
    while ( (unsigned __int16)v4 < (unsigned int)(unsigned __int16)CRestart::NumberOfHospitalRestarts );
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::NumberOfPoliceRestarts,
    (char *)&stderr + 2,
    v2);
  if ( CRestart::NumberOfPoliceRestarts )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)((char *)&CRestart::PoliceRestartPoints + 12 * v8),
        &byte_9[3],
        v7);
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)&CRestart::PoliceRestartHeadings[v8],
        byte_4,
        v10);
      CGenericGameStorage::_LoadDataFromWorkBuffer(
        (CGenericGameStorage *)&CRestart::PoliceRestartWhenToUse[v8],
        byte_4,
        v11);
      v8 = (unsigned __int16)++v9;
    }
    while ( (unsigned __int16)v9 < (unsigned int)(unsigned __int16)CRestart::NumberOfPoliceRestarts );
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::bOverrideRestart,
    (char *)&stderr + 1,
    v7);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&CRestart::OverridePosition, &byte_9[3], v12);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::bFadeInAfterNextDeath,
    (char *)&stderr + 1,
    v13);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::bFadeInAfterNextArrest,
    (char *)&stderr + 1,
    v14);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraHospitalRestartCoors,
    &byte_9[3],
    v15);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraHospitalRestartRadius,
    byte_4,
    v16);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraHospitalRestartHeading,
    byte_4,
    v17);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraPoliceStationRestartCoors,
    &byte_9[3],
    v18);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraPoliceStationRestartRadius,
    byte_4,
    v19);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CRestart::ExtraPoliceStationRestartHeading,
    byte_4,
    v20);
  return 1;
}


// ============================================================
