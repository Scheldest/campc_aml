
// Address: 0x18ab40
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWandering13ComputeSphereER10CColSpherePP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeSphere(CColSphere &,CPed **)
// attributes: thunk
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CColSphere *a2,
        CPed **a3)
{
  return _ZN39CTaskComplexAvoidOtherPedWhileWandering13ComputeSphereER10CColSpherePP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x18d148
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWandering18ComputeAvoidSphereERK4CPedR10CColSphere
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(CPed const&,CColSphere &)
// attributes: thunk
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2,
        CColSphere *a3)
{
  return _ZN39CTaskComplexAvoidOtherPedWhileWandering18ComputeAvoidSphereERK4CPedR10CColSphere(this, a2, a3);
}


// ============================================================

// Address: 0x190b90
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWanderingC2EP4CPedRK7CVectori
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(CPed *,CVector const&,int)
// attributes: thunk
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2,
        const CVector *a3,
        int a4)
{
  _ZN39CTaskComplexAvoidOtherPedWhileWanderingC2EP4CPedRK7CVectori(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1926c0
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWandering10CreateTaskEv
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::CreateTask(CTaskComplexAvoidOtherPedWhileWandering *this)
{
  return _ZN39CTaskComplexAvoidOtherPedWhileWandering10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1999c8
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWandering7SetUpIKEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::SetUpIK(CPed *)
// attributes: thunk
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::SetUpIK(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2)
{
  return _ZN39CTaskComplexAvoidOtherPedWhileWandering7SetUpIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19f27c
// Original: j__ZN39CTaskComplexAvoidOtherPedWhileWandering18NearbyPedsInSphereERK4CPedRK10CColSpherePPS0_S7_
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(CPed const&,CColSphere const&,CPed**,CPed**)
// attributes: thunk
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2,
        const CColSphere *a3,
        CPed **a4,
        CPed **a5)
{
  return _ZN39CTaskComplexAvoidOtherPedWhileWandering18NearbyPedsInSphereERK4CPedRK10CColSpherePPS0_S7_(
           this,
           a2,
           a3,
           a4,
           a5);
}


// ============================================================

// Address: 0x495970
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering10CreateTaskEv
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CreateTask(void)
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::CreateTask(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  CPed *Ped; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  unsigned int v9; // r1
  CTaskComplexAvoidOtherPedWhileWandering *v10; // r0
  _BYTE v11[12]; // [sp+4h] [bp-24h] BYREF
  int v12; // [sp+10h] [bp-18h] BYREF
  CPools *v13; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, a3);
  if ( v13 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v13, (int)v13 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, &byte_9[3], v7);
  v10 = (CTaskComplexAvoidOtherPedWhileWandering *)CTask::operator new((CTask *)&dword_60, v9);
  CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(v10, Ped, (const CVector *)v11, v12);
}


// ============================================================

// Address: 0x521b90
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWanderingC2EP4CPedRK7CVectori
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(CPed *,CVector const&,int)
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2,
        const CVector *a3,
        int a4)
{
  __int64 v8; // d16
  __int64 v9; // d16
  char v10; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)this = &off_66C300;
  *((_DWORD *)this + 3) = a2;
  v8 = *(_QWORD *)a3;
  *((_DWORD *)this + 9) = *((_DWORD *)a3 + 2);
  *(_QWORD *)((char *)this + 28) = v8;
  v9 = *(_QWORD *)a3;
  *((_DWORD *)this + 12) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 17) = 0;
  *((_WORD *)this + 36) = 0;
  *((_WORD *)this + 42) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  v10 = *((_BYTE *)this + 92);
  *((_DWORD *)this + 22) = a4;
  *((_QWORD *)this + 5) = v9;
  *((_BYTE *)this + 92) = v10 & 0xF8;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x521c08
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWanderingD2Ev
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::~CTaskComplexAvoidOtherPedWhileWandering()
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::~CTaskComplexAvoidOtherPedWhileWandering(
        CTaskComplexAvoidOtherPedWhileWandering *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C300;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x521c34
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWanderingD0Ev
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::~CTaskComplexAvoidOtherPedWhileWandering()
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::~CTaskComplexAvoidOtherPedWhileWandering(
        CTaskComplexAvoidOtherPedWhileWandering *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C300;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x521c64
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering6QuitIKEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::QuitIK(CPed *)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::QuitIK(CTaskComplexAvoidOtherPedWhileWandering *this, CPed *a2)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 92) << 31;
  if ( result )
  {
    result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
    if ( result )
      return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  return result;
}


// ============================================================

// Address: 0x521ca0
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::MakeAbortable(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         a3,
         a4) != 1 )
    return 0;
  if ( *((unsigned __int8 *)this + 92) << 31 )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  *((_DWORD *)a2 + 292) &= ~0x40u;
  return 1;
}


// ============================================================

// Address: 0x521d04
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::CreateNextSubTask(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    return (*(int (__fastcall **)(CTaskComplexAvoidOtherPedWhileWandering *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  if ( *((unsigned __int8 *)this + 92) << 31 )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  *((_DWORD *)a2 + 292) &= ~0x40u;
  return 0;
}


// ============================================================

// Address: 0x521d64
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::CreateFirstSubTask(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2)
{
  int v4; // r0
  char *v5; // r6
  char *v6; // r1
  __int64 v7; // d16
  int v8; // r0
  unsigned int v9; // r1
  CTaskSimple *v10; // r0
  int v11; // r4
  int result; // r0
  __int64 v13; // d16
  char v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r3
  int v18; // r1
  CVector *v19; // [sp+8h] [bp-50h]
  _BYTE v20[8]; // [sp+Ch] [bp-4Ch] BYREF
  int v21; // [sp+14h] [bp-44h]
  __int64 v22; // [sp+20h] [bp-38h] BYREF
  int v23; // [sp+28h] [bp-30h]
  __int64 v24; // [sp+30h] [bp-28h] BYREF
  int v25; // [sp+38h] [bp-20h]

  if ( *((_DWORD *)this + 3) )
  {
    v4 = *((_DWORD *)a2 + 5);
    v5 = (char *)a2 + 4;
    v6 = (char *)a2 + 4;
    if ( v4 )
      v6 = (char *)(v4 + 48);
    v7 = *(_QWORD *)v6;
    *((_DWORD *)this + 6) = *((_DWORD *)v6 + 2);
    *((_QWORD *)this + 2) = v7;
    CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(this, a2, (CColSphere *)v20);
    v24 = *((_QWORD *)this + 2);
    v22 = *(_QWORD *)((char *)this + 28);
    v8 = *((_DWORD *)a2 + 5);
    if ( v8 )
      v5 = (char *)(v8 + 48);
    v25 = *((_DWORD *)v5 + 2);
    v23 = v25;
    v21 = v25;
    if ( CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           (const CPed *)v20,
           (const CColSphere *)&v24,
           (const CVector *)&v22,
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 52),
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 40),
           v19) )
    {
      *((_DWORD *)a2 + 292) |= 0x40u;
      v10 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v9);
      v11 = *((_DWORD *)this + 22);
      CTaskSimple::CTaskSimple(v10);
      *(_DWORD *)(result + 8) = v11;
      *(_DWORD *)result = &off_66C0B0;
      v13 = *((_QWORD *)this + 5);
      LOBYTE(v11) = *(_BYTE *)(result + 29);
      v14 = *(_BYTE *)(result + 28) & 0xC0;
      *(_DWORD *)(result + 20) = *((_DWORD *)this + 12);
      *(_DWORD *)result = &off_66C0E4;
      *(_DWORD *)(result + 24) = 1056964608;
      *(_BYTE *)(result + 29) = v11 & 0xE0;
      *(_BYTE *)(result + 28) = v14;
      *(_QWORD *)(result + 12) = v13;
      v15 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 84) = 1;
      *((_DWORD *)this + 19) = v15;
      *((_DWORD *)this + 20) = 2000;
      return result;
    }
    if ( *((unsigned __int8 *)this + 92) << 31 )
    {
      if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
        IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    }
  }
  v16 = *((_DWORD *)a2 + 291);
  v17 = *((_DWORD *)a2 + 292);
  v18 = *((_DWORD *)a2 + 290);
  *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
  *((_DWORD *)a2 + 290) = v18;
  *((_DWORD *)a2 + 291) = v16;
  result = 0;
  *((_DWORD *)a2 + 292) = v17 & 0xFFFFFFBF;
  return result;
}


// ============================================================

// Address: 0x521ec0
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering19ComputeDetourTargetERK4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeDetourTarget(CPed const&)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeDetourTarget(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2)
{
  int v4; // r0
  char *v5; // r1
  CVector *v7; // [sp+8h] [bp-48h]
  _BYTE v8[8]; // [sp+Ch] [bp-44h] BYREF
  int v9; // [sp+14h] [bp-3Ch]
  __int64 v10; // [sp+20h] [bp-30h] BYREF
  int v11; // [sp+28h] [bp-28h]
  __int64 v12; // [sp+30h] [bp-20h] BYREF
  int v13; // [sp+38h] [bp-18h]

  CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(this, a2, (CColSphere *)v8);
  v12 = *((_QWORD *)this + 2);
  v10 = *(_QWORD *)((char *)this + 28);
  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)(v4 + 48);
  if ( !v4 )
    v5 = (char *)a2 + 4;
  v13 = *((_DWORD *)v5 + 2);
  v11 = v13;
  v9 = v13;
  return CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           (const CPed *)v8,
           (const CColSphere *)&v12,
           (const CVector *)&v10,
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 52),
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 40),
           v7);
}


// ============================================================

// Address: 0x521f1a
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering18NearbyPedsInSphereERK4CPedRK10CColSpherePPS0_S7_
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(CPed const&,CColSphere const&,CPed**,CPed**)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2,
        const CColSphere *a3,
        CPed **a4,
        CPed **a5)
{
  int v7; // r8
  CPed *v8; // r11
  int v9; // r0
  float v10; // r1
  const CVector *v11; // r2
  CPed **v12; // r0
  char v14; // [sp+44h] [bp-34h]
  _BYTE v15[48]; // [sp+48h] [bp-30h] BYREF

  v7 = 0;
  v14 = 0;
  do
  {
    v8 = a4[v7];
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 + 5);
      LOWORD(v10) = 26214;
      v11 = (const CVector *)(v9 + 48);
      if ( !v9 )
        v11 = (CPed *)((char *)v8 + 4);
      HIWORD(v10) = 16262;
      CColSphere::Set((CColSphere *)v15, v10, v11, 0, 0, 0xFFu);
      if ( CColSphere::IntersectSphere(a3, (const CColSphere *)v15) == 1 )
      {
        v12 = a5;
        if ( !*a5 )
          goto LABEL_22;
        v12 = a5 + 1;
        if ( !a5[1] )
          goto LABEL_22;
        v12 = a5 + 2;
        if ( !a5[2] )
          goto LABEL_22;
        v12 = a5 + 3;
        if ( !a5[3] )
          goto LABEL_22;
        v12 = a5 + 4;
        if ( !a5[4] )
          goto LABEL_22;
        v12 = a5 + 5;
        if ( !a5[5] )
          goto LABEL_22;
        v12 = a5 + 6;
        if ( !a5[6] )
          goto LABEL_22;
        v12 = a5 + 7;
        if ( !a5[7] )
          goto LABEL_22;
        v12 = a5 + 8;
        if ( !a5[8]
          || (v12 = a5 + 9, !a5[9])
          || (v12 = a5 + 10, !a5[10])
          || (v12 = a5 + 11, !a5[11])
          || (v12 = a5 + 12, !a5[12])
          || (v12 = a5 + 13, !a5[13])
          || (v12 = a5 + 14, !a5[14])
          || (v12 = a5 + 15, !a5[15]) )
        {
LABEL_22:
          a4[v7] = 0;
          *v12 = v8;
          v14 = 1;
        }
      }
    }
    ++v7;
  }
  while ( v7 != 16 );
  return v14 & 1;
}


// ============================================================

// Address: 0x5220b8
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering13ComputeSphereER10CColSpherePP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeSphere(CColSphere &,CPed **)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CColSphere *a2,
        CPed **a3)
{
  unsigned __int64 v3; // d0
  float32x2_t v4; // d4
  int v5; // r12
  int v6; // r3
  float v7; // s2
  float v8; // s4
  CPed *v9; // r0
  int v10; // lr
  float *v11; // r4
  int v12; // r0
  float v13; // s6
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float32x2_t v17; // d3
  CPed *v18; // r3
  int v19; // r12
  float *v20; // r4
  float v22; // [sp+Ch] [bp-14h] BYREF
  float v23; // [sp+10h] [bp-10h]
  float v24; // [sp+14h] [bp-Ch]

  LODWORD(v3) = 0;
  v5 = 0;
  v6 = 0;
  v22 = 0.0;
  v23 = 0.0;
  v7 = 0.0;
  v24 = 0.0;
  v8 = 0.0;
  do
  {
    v9 = a3[v6];
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 + 5);
      ++v5;
      v11 = (float *)(v10 + 48);
      if ( !v10 )
        v11 = (float *)((char *)v9 + 4);
      v8 = *v11 + v8;
      v22 = v8;
      v7 = v11[1] + v7;
      v23 = v7;
      *(float *)&v3 = v11[2] + *(float *)&v3;
      v24 = *(float *)&v3;
    }
    ++v6;
  }
  while ( v6 != 16 );
  v12 = 0;
  v13 = 1.0 / (float)v5;
  v14 = v13 * v7;
  v15 = v13 * v8;
  v16 = v13 * *(float *)&v3;
  LODWORD(v3) = 0;
  v23 = v14;
  v22 = v15;
  v24 = v16;
  v17.n64_u64[0] = v3;
  do
  {
    v18 = a3[v12];
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 + 5);
      v20 = (float *)(v19 + 48);
      if ( !v19 )
        v20 = (float *)((char *)v18 + 4);
      v4.n64_f32[0] = (float)((float)((float)(*v20 - v15) * (float)(*v20 - v15))
                            + (float)((float)(v20[1] - v14) * (float)(v20[1] - v14)))
                    + 0.0;
      v17.n64_u64[0] = vmax_f32(v4, v17).n64_u64[0];
    }
    ++v12;
  }
  while ( v12 != 16 );
  return CColSphere::Set(a2, sqrtf(v17.n64_f32[0]) + 1.05, (const CVector *)&v22, 0, 0, 0xFFu);
}


// ============================================================

// Address: 0x5221c0
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering18ComputeAvoidSphereERK4CPedR10CColSphere
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(CPed const&,CColSphere &)
CTaskComplexAvoidOtherPedWhileWandering *__fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2,
        CColSphere *a3)
{
  int v5; // r0
  int v7; // r4
  const CVector *v8; // r2
  bool v9; // zf
  float v10; // r1
  const CPed *v11; // r2
  int v12; // r4
  int i; // r9
  const CPed *v14; // r1
  CPed *v15; // r0
  CTaskComplexAvoidOtherPedWhileWandering *result; // r0
  CTaskComplexAvoidOtherPedWhileWandering *v17; // r0
  const CPed *v18; // r1
  CPed *v19[16]; // [sp+Ch] [bp-9Ch] BYREF
  CPed *v20[23]; // [sp+4Ch] [bp-5Ch] BYREF

  v5 = *((_DWORD *)this + 3);
  v7 = *((_DWORD *)a2 + 272);
  v10 = *(float *)(v5 + 20);
  v8 = (const CVector *)(LODWORD(v10) + 48);
  v9 = LODWORD(v10) == 0;
  LOWORD(v10) = 26214;
  if ( v9 )
    v8 = (const CVector *)(v5 + 4);
  HIWORD(v10) = 16262;
  CColSphere::Set(a3, v10, v8, 0, 0, 0xFFu);
  v12 = v7 + 304;
  for ( i = 0; i != 16; ++i )
  {
    v14 = *(const CPed **)(v12 + 4 * i);
    if ( v14 == *((const CPed **)this + 3) )
    {
      v15 = 0;
    }
    else if ( CPedGroups::AreInSameGroup(a2, v14, v11) )
    {
      v15 = 0;
    }
    else
    {
      v15 = *(CPed **)(v12 + 4 * i);
    }
    v20[i] = v15;
    v19[i] = 0;
  }
  v19[0] = *((CPed **)this + 3);
  result = (CTaskComplexAvoidOtherPedWhileWandering *)CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(
                                                        v19[0],
                                                        v14,
                                                        a3,
                                                        v20,
                                                        v19);
  if ( result == (CTaskComplexAvoidOtherPedWhileWandering *)((char *)&stderr + 1) )
  {
    do
    {
      v17 = (CTaskComplexAvoidOtherPedWhileWandering *)CTaskComplexAvoidOtherPedWhileWandering::ComputeSphere(
                                                         result,
                                                         a3,
                                                         v19);
      result = (CTaskComplexAvoidOtherPedWhileWandering *)CTaskComplexAvoidOtherPedWhileWandering::NearbyPedsInSphere(
                                                            v17,
                                                            v18,
                                                            a3,
                                                            v20,
                                                            v19);
    }
    while ( result );
  }
  return result;
}


// ============================================================

// Address: 0x52226c
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering19ComputeDetourTargetERK4CPedR10CColSphere
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ComputeDetourTarget(CPed const&,CColSphere &)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ComputeDetourTarget(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        const CPed *a2,
        CColSphere *a3)
{
  int v3; // r12
  char *v4; // r3
  __int64 v6; // [sp+8h] [bp-28h] BYREF
  int v7; // [sp+10h] [bp-20h]
  __int64 v8; // [sp+18h] [bp-18h] BYREF
  int v9; // [sp+20h] [bp-10h]

  v8 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)((char *)this + 28);
  v3 = *((_DWORD *)a2 + 5);
  v4 = (char *)(v3 + 48);
  if ( !v3 )
    v4 = (char *)a2 + 4;
  v9 = *((_DWORD *)v4 + 2);
  v7 = v9;
  *((_DWORD *)a3 + 2) = v9;
  return CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           a3,
           (const CColSphere *)&v8,
           (const CVector *)&v6,
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 52),
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 40),
           (CVector *)v6);
}


// ============================================================

// Address: 0x5222b8
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering7SetUpIKEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::SetUpIK(CPed *)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::SetUpIK(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPed *a2)
{
  int Pad; // r6
  int result; // r0
  bool v6; // zf
  bool v7; // zf
  int v8; // r0
  float *v9; // r6
  float *v10; // r1
  float v11; // s0
  float v12; // s4
  float v13; // s4
  float v14; // s6
  float v15[3]; // [sp+20h] [bp-28h] BYREF
  float v16; // [sp+2Ch] [bp-1Ch] BYREF
  float v17; // [sp+30h] [bp-18h]
  float v18; // [sp+34h] [bp-14h]

  Pad = CPad::GetPad(0, (int)a2);
  result = FindPlayerPed(-1);
  v6 = result == (_DWORD)a2;
  if ( (CPed *)result == a2 )
  {
    result = *(unsigned __int16 *)(Pad + 272);
    v6 = result == 0;
  }
  if ( !v6 )
  {
    result = CEntity::GetIsOnScreen(a2);
    v7 = result == 1;
    if ( result == 1 )
    {
      result = *((unsigned __int8 *)this + 92) << 31;
      v7 = result == 0;
    }
    if ( v7 )
    {
      result = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2);
      if ( !result )
      {
        result = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 5);
        if ( !result )
        {
          v8 = *((_DWORD *)this + 1);
          if ( !v8
            || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 20))(v8), result != 917)
            && (result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 20))(*((_DWORD *)this + 1)),
                result != 939) )
          {
            result = *((_DWORD *)a2 + 5);
            v9 = (float *)((char *)a2 + 4);
            v10 = (float *)((char *)a2 + 4);
            if ( result )
              v10 = (float *)(result + 48);
            v11 = *((float *)this + 7) - *v10;
            v12 = *((float *)this + 9) - v10[2];
            v17 = *((float *)this + 8) - v10[1];
            v16 = v11;
            v18 = v12;
            if ( (float)((float)((float)(v11 * v11) + (float)(v17 * v17)) + (float)(v12 * v12)) > 9.0 )
            {
              CVector::Normalise((CVector *)&v16);
              result = *((_DWORD *)a2 + 5);
              if ( (float)((float)((float)(v16 * *(float *)(result + 16)) + (float)(v17 * *(float *)(result + 20)))
                         + (float)(v18 * *(float *)(result + 24))) < *(float *)&dword_9FEFB0 )
              {
                if ( result )
                  v9 = (float *)(result + 48);
                v13 = (float)(v18 + v18) + v9[2];
                v14 = *((float *)this + 7);
                v15[1] = (float)(v17 + v17) + *((float *)this + 8);
                v15[0] = (float)(v16 + v16) + v14;
                v15[2] = v13 + 0.61;
                IKChainManager_c::LookAt(
                  (int)&g_ikChainMan,
                  (int)"TaskAvoidOthPed",
                  a2,
                  0,
                  5000,
                  -1,
                  (int)v15,
                  0,
                  0.25,
                  500,
                  3,
                  0);
                result = *((unsigned __int8 *)this + 92) | 1;
                *((_BYTE *)this + 92) = result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x522488
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering14ControlSubTaskEP4CPed
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::ControlSubTask(CPed *)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::ControlSubTask(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        CPedIntelligence **a2)
{
  int v2; // r8
  int v5; // r1
  int v6; // r0
  int v7; // r4
  CPedIntelligence *v8; // r2
  unsigned int v9; // r3
  CPedIntelligence *v10; // r1
  signed int v12; // r1
  unsigned __int16 v13; // r0
  int v14; // r0
  float *v15; // r10
  CPedIntelligence *v16; // r2
  float *v17; // r1
  int v18; // r3
  float *v19; // r2
  float v20; // s16
  CTask *SimplestActiveTask; // r0
  bool v22; // zf
  const CTask *v23; // r1
  const CTask *v24; // r2
  float32x2_t *v25; // r0
  float32x2_t v26; // d16
  unsigned __int64 v27; // d1
  char v28; // r0
  __int64 v29; // r0
  char v30; // r2
  CTaskComplexGangFollower *TaskByType; // r0
  bool v32; // zf
  int v33; // r0
  float *v34; // r1
  float v35; // s2
  float v36; // s4
  CPedIntelligence *v37; // r0
  __int64 v38; // d16
  char v39; // r0
  CVector *v40; // [sp+8h] [bp-68h]
  float v41[2]; // [sp+Ch] [bp-64h] BYREF
  float v42; // [sp+14h] [bp-5Ch]
  __int64 v43; // [sp+20h] [bp-50h] BYREF
  float v44; // [sp+28h] [bp-48h]
  __int64 v45; // [sp+30h] [bp-40h] BYREF
  float v46; // [sp+38h] [bp-38h]

  v5 = *((_DWORD *)this + 3);
  v6 = *((unsigned __int8 *)this + 92);
  if ( !v5 )
  {
    if ( !(v6 << 31) || !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( (v6 & 2) != 0
    && (*(int (__fastcall **)(_DWORD, CPedIntelligence **, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         0) == 1 )
  {
    goto LABEL_11;
  }
  if ( !*((_BYTE *)this + 72) )
  {
    *((_QWORD *)this + 8) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xC800000000LL;
    *((_BYTE *)this + 72) = 1;
  }
  CTaskComplexAvoidOtherPedWhileWandering::SetUpIK(this, (CPed *)a2);
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    return *((_DWORD *)this + 2);
  v12 = *((_DWORD *)a2[272] + 158);
  if ( v12 <= 30 )
  {
    v14 = *((_DWORD *)this + 3);
    v15 = (float *)(a2 + 1);
    v16 = a2[5];
    v17 = (float *)(a2 + 1);
    v18 = *(_DWORD *)(v14 + 20);
    if ( v16 )
      v17 = (float *)((char *)v16 + 48);
    v19 = (float *)(v18 + 48);
    if ( !v18 )
      v19 = (float *)(v14 + 4);
    if ( fabsf(v17[2] - v19[2]) > 3.0 )
    {
      if ( !(*((unsigned __int8 *)this + 92) << 31)
        || !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
      {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    v20 = (float)((float)((float)(*v17 - *v19) * (float)(*v17 - *v19))
                + (float)((float)(v17[1] - v19[1]) * (float)(v17[1] - v19[1])))
        + 0.0;
    SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(v14 + 1088) + 4));
    v22 = SimplestActiveTask == 0;
    if ( SimplestActiveTask )
      v22 = *((_BYTE *)this + 84) == 0;
    if ( !v22 )
    {
      if ( *((_BYTE *)this + 85) )
      {
        v23 = (const CTask *)CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 85) = 0;
        *((_DWORD *)this + 19) = v23;
        v24 = v23;
      }
      else
      {
        v24 = (const CTask *)*((_DWORD *)this + 19);
        v23 = (const CTask *)CTimer::m_snTimeInMilliseconds;
      }
      if ( (const CTask *)((char *)v24 + *((_DWORD *)this + 20)) <= v23 )
      {
        if ( CTask::IsGoToTask(SimplestActiveTask, v23) )
        {
          v25 = (float32x2_t *)*((_DWORD *)this + 3);
          if ( (float)((float)((float)(*((float *)a2[5] + 4) * *(float *)(v25[2].n64_u32[1] + 16))
                             + (float)(*((float *)a2[5] + 5) * *(float *)(v25[2].n64_u32[1] + 20)))
                     + (float)(*((float *)a2[5] + 6) * *(float *)(v25[2].n64_u32[1] + 24))) >= 0.923
            && v20 > 1.0 )
          {
            v26.n64_u64[0] = vmul_f32(v25[9], (float32x2_t)0x4248000042480000LL).n64_u64[0];
            v27 = vmul_f32(v26, v26).n64_u64[0];
            if ( (float)((float)((float)(*(float *)&v27 + *((float *)&v27 + 1)) + 0.0) + 0.25) >= (float)((float)((float)((float)(*((float *)a2 + 18) * 50.0) * (float)(*((float *)a2 + 18) * 50.0)) + (float)((float)(*((float *)a2 + 19) * 50.0) * (float)(*((float *)a2 + 19) * 50.0))) + 0.0) )
            {
              if ( !(*((unsigned __int8 *)this + 92) << 31)
                || !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
              {
                goto LABEL_11;
              }
              goto LABEL_10;
            }
          }
        }
      }
    }
    v28 = byte_9FF01C;
    __dmb(0xBu);
    if ( (v28 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_9FF01C) )
    {
      unk_9FF018 = (float)(2.5 * 2.5) + 1.0;
      j___cxa_guard_release((__guard *)&byte_9FF01C);
    }
    if ( v20 > unk_9FF018 )
    {
      if ( !(*((unsigned __int8 *)this + 92) << 31)
        || !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
      {
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !*((_BYTE *)this + 72) )
      return *((_DWORD *)this + 2);
    if ( *((_BYTE *)this + 73) )
    {
      LODWORD(v29) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 73) = 0;
      *((_DWORD *)this + 16) = v29;
      HIDWORD(v29) = v29;
    }
    else
    {
      HIDWORD(v29) = *((_DWORD *)this + 16);
      LODWORD(v29) = CTimer::m_snTimeInMilliseconds;
    }
    if ( HIDWORD(v29) + *((_DWORD *)this + 17) > (unsigned int)v29 )
      return *((_DWORD *)this + 2);
    v30 = *((_BYTE *)this + 92);
    HIDWORD(v29) = 200;
    *((_QWORD *)this + 8) = v29;
    *((_BYTE *)this + 72) = 1;
    if ( (v30 & 4) != 0 )
    {
      TaskByType = (CTaskComplexGangFollower *)CPedIntelligence::FindTaskByType(a2[272], 1207);
      v32 = TaskByType == 0;
      if ( TaskByType )
      {
        v2 = *((_DWORD *)TaskByType + 4);
        v32 = v2 == 0;
      }
      if ( !v32 )
      {
        CTaskComplexGangFollower::CalculateOffsetPosition(TaskByType, (CVector *)v41);
        v33 = *(_DWORD *)(v2 + 20);
        v34 = (float *)(v33 + 48);
        if ( !v33 )
          v34 = (float *)(v2 + 4);
        v35 = v34[1] + v41[1];
        v36 = v34[2] + v42;
        *((float *)this + 7) = *v34 + v41[0];
        *((float *)this + 8) = v35;
        *((float *)this + 9) = v36;
      }
    }
    CTaskComplexAvoidOtherPedWhileWandering::ComputeAvoidSphere(this, (const CPed *)a2, (CColSphere *)v41);
    v45 = *((_QWORD *)this + 2);
    v43 = *(_QWORD *)((char *)this + 28);
    v37 = a2[5];
    if ( v37 )
      v15 = (float *)((char *)v37 + 48);
    v46 = v15[2];
    v44 = v46;
    v42 = v46;
    if ( CPedGeometryAnalyser::ComputeRouteRoundSphere(
           (CPedGeometryAnalyser *)a2,
           (const CPed *)v41,
           (const CColSphere *)&v45,
           (const CVector *)&v43,
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 52),
           (CTaskComplexAvoidOtherPedWhileWandering *)((char *)this + 40),
           v40) == 1 )
    {
      v7 = *((_DWORD *)this + 2);
      if ( *(float *)(v7 + 12) == *((float *)this + 10)
        && *(float *)(v7 + 16) == *((float *)this + 11)
        && *(float *)(v7 + 20) == *((float *)this + 12)
        && *(float *)(v7 + 24) == 0.5 )
      {
        return v7;
      }
      v38 = *((_QWORD *)this + 5);
      v39 = *(_BYTE *)(v7 + 28) & 0xD0;
      *(_DWORD *)(v7 + 20) = *((_DWORD *)this + 12);
      *(_DWORD *)(v7 + 24) = 1056964608;
      *(_QWORD *)(v7 + 12) = v38;
      *(_BYTE *)(v7 + 28) = v39 | 0x20;
      return *((_DWORD *)this + 2);
    }
    if ( !(*((unsigned __int8 *)this + 92) << 31)
      || !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
    {
      goto LABEL_11;
    }
LABEL_10:
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, (CPed *)a2, 250);
LABEL_11:
    v8 = a2[291];
    v9 = (unsigned int)a2[292];
    v10 = a2[290];
    a2[289] = a2[289];
    a2[290] = v10;
    a2[291] = v8;
    a2[292] = (CPedIntelligence *)(v9 & 0xFFFFFFBF);
    return 0;
  }
  if ( *((unsigned __int8 *)this + 92) << 31
    && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
  {
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, (CPed *)a2, 250);
  }
  v7 = CTask::operator new((CTask *)&dword_20, v12);
  v13 = rand();
  CTaskSimpleStandStill::CTaskSimpleStandStill(
    (CTaskSimpleStandStill *)v7,
    (int)(float)((float)((float)v13 * 0.000015259) * 2000.0) + 500,
    0,
    0,
    8.0);
  return v7;
}


// ============================================================

// Address: 0x527f0c
// Original: _ZNK39CTaskComplexAvoidOtherPedWhileWandering5CloneEv
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::Clone(void)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::Clone(
        CTaskComplexAvoidOtherPedWhileWandering *this,
        unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r6
  int v5; // r8
  __int64 v6; // d16
  __int64 v7; // d16
  char v8; // r2

  v3 = CTask::operator new((CTask *)&dword_60, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 22);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)v3 = &off_66C300;
  *(_DWORD *)(v3 + 12) = v4;
  v6 = *(_QWORD *)((char *)this + 28);
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  *(_QWORD *)(v3 + 28) = v6;
  v7 = *(_QWORD *)((char *)this + 28);
  *(_DWORD *)(v3 + 48) = *((_DWORD *)this + 9);
  *(_DWORD *)(v3 + 68) = 0;
  v8 = *(_BYTE *)(v3 + 92);
  *(_WORD *)(v3 + 72) = 0;
  *(_WORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 88) = v5;
  *(_QWORD *)(v3 + 40) = v7;
  *(_BYTE *)(v3 + 92) = v8 & 0xF8;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  if ( (*((_BYTE *)this + 92) & 4) != 0 )
    *(_BYTE *)(v3 + 92) |= 4u;
  return v3;
}


// ============================================================

// Address: 0x527fa0
// Original: _ZNK39CTaskComplexAvoidOtherPedWhileWandering11GetTaskTypeEv
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::GetTaskType(void)
int __fastcall CTaskComplexAvoidOtherPedWhileWandering::GetTaskType(CTaskComplexAvoidOtherPedWhileWandering *this)
{
  return 917;
}


// ============================================================

// Address: 0x527fa8
// Original: _ZN39CTaskComplexAvoidOtherPedWhileWandering9SerializeEv
// Demangled: CTaskComplexAvoidOtherPedWhileWandering::Serialize(void)
void __fastcall CTaskComplexAvoidOtherPedWhileWandering::Serialize(CPed **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  CGenericGameStorage *v10; // r5
  __int64 v11; // d16
  int v12; // r2
  int v13; // r0

  v2 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CPed **))*this + 5))(this) == 917 )
  {
    v5 = GettPoolPedRef(this[3]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = this[22];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(0xCu);
    v11 = *(_QWORD *)(this + 7);
    *((_DWORD *)v10 + 2) = this[9];
    *(_QWORD *)v10 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, &byte_9[3], v12);
    j_free(v10);
  }
  else
  {
    v13 = (*((int (__fastcall **)(CPed **))*this + 5))(this);
    sub_1941D4(917, v13);
  }
}


// ============================================================
