
// Address: 0x18a8c8
// Original: j__ZN23CTaskComplexAvoidEntity13ComputeSphereER10CColSpherePP7CEntity
// Demangled: CTaskComplexAvoidEntity::ComputeSphere(CColSphere &,CEntity **)
// attributes: thunk
int __fastcall CTaskComplexAvoidEntity::ComputeSphere(CTaskComplexAvoidEntity *this, CColSphere *a2, CEntity **a3)
{
  return _ZN23CTaskComplexAvoidEntity13ComputeSphereER10CColSpherePP7CEntity(this, a2, a3);
}


// ============================================================

// Address: 0x19bc28
// Original: j__ZN23CTaskComplexAvoidEntity7SetUpIKEP4CPed
// Demangled: CTaskComplexAvoidEntity::SetUpIK(CPed *)
// attributes: thunk
int __fastcall CTaskComplexAvoidEntity::SetUpIK(CTaskComplexAvoidEntity *this, CPed *a2)
{
  return _ZN23CTaskComplexAvoidEntity7SetUpIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x5229f4
// Original: _ZN23CTaskComplexAvoidEntityC2EiP7CEntityRK7CVector
// Demangled: CTaskComplexAvoidEntity::CTaskComplexAvoidEntity(int,CEntity *,CVector const&)
void __fastcall CTaskComplexAvoidEntity::CTaskComplexAvoidEntity(
        CTaskComplexAvoidEntity *this,
        int a2,
        CEntity *a3,
        const CVector *a4)
{
  __int64 v8; // d16
  __int64 v9; // d16
  char v10; // r2

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a2;
  *(_DWORD *)this = &off_66C33C;
  *((_DWORD *)this + 3) = a3;
  v8 = *(_QWORD *)a4;
  *((_DWORD *)this + 10) = *((_DWORD *)a4 + 2);
  *((_QWORD *)this + 4) = v8;
  v9 = *(_QWORD *)a4;
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 2);
  *((_WORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 44) = v9;
  v10 = *((_BYTE *)this + 80);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 80) = v10 & 0xFE;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x522a64
// Original: _ZN23CTaskComplexAvoidEntityD2Ev
// Demangled: CTaskComplexAvoidEntity::~CTaskComplexAvoidEntity()
void __fastcall CTaskComplexAvoidEntity::~CTaskComplexAvoidEntity(CTaskComplexAvoidEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C33C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x522a90
// Original: _ZN23CTaskComplexAvoidEntityD0Ev
// Demangled: CTaskComplexAvoidEntity::~CTaskComplexAvoidEntity()
void __fastcall CTaskComplexAvoidEntity::~CTaskComplexAvoidEntity(CTaskComplexAvoidEntity *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C33C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x522ac0
// Original: _ZN23CTaskComplexAvoidEntity7SetUpIKEP4CPed
// Demangled: CTaskComplexAvoidEntity::SetUpIK(CPed *)
int __fastcall CTaskComplexAvoidEntity::SetUpIK(CTaskComplexAvoidEntity *this, CPed *a2)
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
      result = *((unsigned __int8 *)this + 80) << 31;
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
            v11 = *((float *)this + 8) - *v10;
            v12 = *((float *)this + 10) - v10[2];
            v17 = *((float *)this + 9) - v10[1];
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
                v14 = *((float *)this + 8);
                v15[1] = (float)(v17 + v17) + *((float *)this + 9);
                v15[0] = (float)(v16 + v16) + v14;
                v15[2] = v13 + 0.61;
                IKChainManager_c::LookAt(
                  (int)&g_ikChainMan,
                  (int)"TaskAvoidEntity",
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
                result = *((unsigned __int8 *)this + 80) | 1;
                *((_BYTE *)this + 80) = result;
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

// Address: 0x522c90
// Original: _ZN23CTaskComplexAvoidEntity6QuitIKEP4CPed
// Demangled: CTaskComplexAvoidEntity::QuitIK(CPed *)
int __fastcall CTaskComplexAvoidEntity::QuitIK(CTaskComplexAvoidEntity *this, CPed *a2)
{
  int result; // r0

  result = *((unsigned __int8 *)this + 80) << 31;
  if ( result )
  {
    result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
    if ( result )
      return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
  return result;
}


// ============================================================

// Address: 0x522ccc
// Original: _ZN23CTaskComplexAvoidEntity13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexAvoidEntity::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexAvoidEntity::MakeAbortable(
        CTaskComplexAvoidEntity *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( *((unsigned __int8 *)this + 80) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  return 1;
}


// ============================================================

// Address: 0x522d04
// Original: _ZN23CTaskComplexAvoidEntity17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexAvoidEntity::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexAvoidEntity::CreateNextSubTask(CTaskComplexAvoidEntity *this, CPed *a2)
{
  if ( *((unsigned __int8 *)this + 80) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  return 0;
}


// ============================================================

// Address: 0x522d3c
// Original: _ZN23CTaskComplexAvoidEntity18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexAvoidEntity::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexAvoidEntity::CreateFirstSubTask(CTaskComplexAvoidEntity *this, CPed *a2)
{
  int v4; // r0
  char *v5; // r6
  char *v6; // r1
  __int64 v7; // d16
  CEntity *v8; // r1
  int v9; // r0
  unsigned int v10; // r1
  CTaskSimple *v11; // r0
  int v12; // r4
  int v13; // r0
  __int64 v14; // d16
  char v15; // r3
  char v16; // r1
  CVector *v17; // [sp+8h] [bp-68h]
  _BYTE v18[8]; // [sp+Ch] [bp-64h] BYREF
  int v19; // [sp+14h] [bp-5Ch]
  CEntity *v20; // [sp+20h] [bp-50h] BYREF
  _BYTE v21[48]; // [sp+24h] [bp-4Ch] BYREF
  int v22; // [sp+54h] [bp-1Ch]
  __int64 v23; // [sp+58h] [bp-18h]

  v4 = *((_DWORD *)a2 + 5);
  v5 = (char *)a2 + 4;
  v6 = (char *)a2 + 4;
  if ( v4 )
    v6 = (char *)(v4 + 48);
  v7 = *(_QWORD *)v6;
  *((_DWORD *)this + 7) = *((_DWORD *)v6 + 2);
  *(_QWORD *)((char *)this + 20) = v7;
  v8 = (CEntity *)*((_DWORD *)this + 3);
  v22 = 0;
  v23 = 0LL;
  memset(v21, 0, sizeof(v21));
  v20 = v8;
  CTaskComplexAvoidEntity::ComputeSphere((CTaskComplexAvoidEntity *)v21, (CColSphere *)v18, &v20);
  v9 = *((_DWORD *)a2 + 5);
  if ( v9 )
    v5 = (char *)(v9 + 48);
  v19 = *((_DWORD *)v5 + 2);
  if ( CPedGeometryAnalyser::ComputeRouteRoundSphere(
         a2,
         (const CPed *)v18,
         (CTaskComplexAvoidEntity *)((char *)this + 20),
         (CTaskComplexAvoidEntity *)((char *)this + 32),
         (CTaskComplexAvoidEntity *)((char *)this + 56),
         (CTaskComplexAvoidEntity *)((char *)this + 44),
         v17) )
  {
    v11 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, v10);
    v12 = *((_DWORD *)this + 4);
    CTaskSimple::CTaskSimple(v11);
    *(_DWORD *)(v13 + 8) = v12;
    *(_DWORD *)v13 = &off_66C0B0;
    v14 = *(_QWORD *)((char *)this + 44);
    v15 = *(_BYTE *)(v13 + 29);
    v16 = *(_BYTE *)(v13 + 28) & 0xC0;
    *(_DWORD *)(v13 + 20) = *((_DWORD *)this + 13);
    *(_DWORD *)v13 = &off_66C0E4;
    *(_DWORD *)(v13 + 24) = 1056964608;
    *(_BYTE *)(v13 + 29) = v15 & 0xE0;
    *(_BYTE *)(v13 + 28) = v16;
    *(_QWORD *)(v13 + 12) = v14;
  }
  else if ( *((unsigned __int8 *)this + 80) << 31 )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
  }
}


// ============================================================

// Address: 0x522e48
// Original: _ZN23CTaskComplexAvoidEntity19ComputeDetourTargetERK4CPed
// Demangled: CTaskComplexAvoidEntity::ComputeDetourTarget(CPed const&)
int __fastcall CTaskComplexAvoidEntity::ComputeDetourTarget(CTaskComplexAvoidEntity *this, const CPed *a2)
{
  CEntity *v4; // r1
  int v5; // r0
  char *v6; // r1
  CVector *v8; // [sp+8h] [bp-68h]
  _BYTE v9[8]; // [sp+Ch] [bp-64h] BYREF
  int v10; // [sp+14h] [bp-5Ch]
  CEntity *v11; // [sp+20h] [bp-50h] BYREF
  _BYTE v12[48]; // [sp+24h] [bp-4Ch] BYREF
  int v13; // [sp+54h] [bp-1Ch]
  __int64 v14; // [sp+58h] [bp-18h]

  v4 = (CEntity *)*((_DWORD *)this + 3);
  v13 = 0;
  v14 = 0LL;
  memset(v12, 0, sizeof(v12));
  v11 = v4;
  CTaskComplexAvoidEntity::ComputeSphere((CTaskComplexAvoidEntity *)v12, (CColSphere *)v9, &v11);
  v5 = *((_DWORD *)a2 + 5);
  v6 = (char *)(v5 + 48);
  if ( !v5 )
    v6 = (char *)a2 + 4;
  v10 = *((_DWORD *)v6 + 2);
  return CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           (const CPed *)v9,
           (CTaskComplexAvoidEntity *)((char *)this + 20),
           (CTaskComplexAvoidEntity *)((char *)this + 32),
           (CTaskComplexAvoidEntity *)((char *)this + 56),
           (CTaskComplexAvoidEntity *)((char *)this + 44),
           v8);
}


// ============================================================

// Address: 0x522eba
// Original: _ZN23CTaskComplexAvoidEntity22NearbyEntitiesInSphereERK4CPedRK10CColSpherePP7CEntityS8_
// Demangled: CTaskComplexAvoidEntity::NearbyEntitiesInSphere(CPed const&,CColSphere const&,CEntity **,CEntity **)
int CTaskComplexAvoidEntity::NearbyEntitiesInSphere()
{
  return 0;
}


// ============================================================

// Address: 0x522ec0
// Original: _ZN23CTaskComplexAvoidEntity13ComputeSphereER10CColSpherePP7CEntity
// Demangled: CTaskComplexAvoidEntity::ComputeSphere(CColSphere &,CEntity **)
int __fastcall CTaskComplexAvoidEntity::ComputeSphere(CTaskComplexAvoidEntity *this, CColSphere *a2, CEntity **a3)
{
  unsigned __int64 v3; // d2
  float32x2_t v4; // d4
  float v5; // s0
  int v6; // r12
  int v7; // r3
  float v8; // s2
  CEntity *v9; // r0
  int v10; // lr
  float *v11; // r4
  int v12; // r0
  float v13; // s6
  float v14; // s0
  float v15; // s2
  float32x2_t v16; // d3
  CEntity *v17; // r3
  int v18; // lr
  float *v19; // r4
  int v20; // r3
  float v22; // [sp+Ch] [bp-14h] BYREF
  float v23; // [sp+10h] [bp-10h]
  float v24; // [sp+14h] [bp-Ch]

  v5 = 0.0;
  v6 = 0;
  v7 = 0;
  v22 = 0.0;
  v23 = 0.0;
  v8 = 0.0;
  v24 = 0.0;
  LODWORD(v3) = 0;
  do
  {
    v9 = a3[v7];
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 + 5);
      ++v6;
      v11 = (float *)(v10 + 48);
      if ( !v10 )
        v11 = (float *)((char *)v9 + 4);
      *(float *)&v3 = *v11 + *(float *)&v3;
      v22 = *(float *)&v3;
      v8 = v11[1] + v8;
      v23 = v8;
      v5 = v11[2] + v5;
      v24 = v5;
    }
    ++v7;
  }
  while ( v7 != 16 );
  v12 = 0;
  v24 = 0.0;
  v13 = 1.0 / (float)v6;
  v14 = v13 * v8;
  v15 = v13 * *(float *)&v3;
  LODWORD(v3) = 0;
  v16.n64_u64[0] = v3;
  v23 = v14;
  v22 = v15;
  do
  {
    v17 = a3[v12];
    if ( v17 )
    {
      v18 = *((_DWORD *)v17 + 5);
      v19 = (float *)(v18 + 48);
      if ( !v18 )
        v19 = (float *)((char *)v17 + 4);
      v20 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)v17 + 19)]) + 44);
      v4.n64_f32[0] = (float)((float)((float)((float)(*v19 - v15) * (float)(*v19 - v15))
                                    + (float)((float)(v19[1] - v14) * (float)(v19[1] - v14)))
                            + 0.0)
                    + (float)(*(float *)(v20 + 36) * *(float *)(v20 + 36));
      v16.n64_u64[0] = vmax_f32(v4, v16).n64_u64[0];
    }
    ++v12;
  }
  while ( v12 != 16 );
  return CColSphere::Set(a2, sqrtf(v16.n64_f32[0]) + 0.7, (const CVector *)&v22, 0, 0, 0xFFu);
}


// ============================================================

// Address: 0x522fe4
// Original: _ZN23CTaskComplexAvoidEntity18ComputeAvoidSphereERK4CPedR10CColSphere
// Demangled: CTaskComplexAvoidEntity::ComputeAvoidSphere(CPed const&,CColSphere &)
int __fastcall CTaskComplexAvoidEntity::ComputeAvoidSphere(
        CTaskComplexAvoidEntity *this,
        const CPed *a2,
        CColSphere *a3)
{
  CEntity *v5; // r0
  int v6; // r0
  char *v7; // r1
  int result; // r0
  CEntity *v9; // [sp+0h] [bp-48h] BYREF
  __int64 v10; // [sp+4h] [bp-44h]
  __int64 v11; // [sp+Ch] [bp-3Ch]
  __int64 v12; // [sp+14h] [bp-34h]
  __int64 v13; // [sp+1Ch] [bp-2Ch]
  __int64 v14; // [sp+24h] [bp-24h]
  __int64 v15; // [sp+2Ch] [bp-1Ch]
  int v16; // [sp+34h] [bp-14h]
  __int64 v17; // [sp+38h] [bp-10h]

  v5 = (CEntity *)*((_DWORD *)this + 3);
  v16 = 0;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v9 = v5;
  CTaskComplexAvoidEntity::ComputeSphere(v5, a3, &v9);
  v6 = *((_DWORD *)a2 + 5);
  v7 = (char *)(v6 + 48);
  if ( !v6 )
    v7 = (char *)a2 + 4;
  result = *((_DWORD *)v7 + 2);
  *((_DWORD *)a3 + 2) = result;
  return result;
}


// ============================================================

// Address: 0x523030
// Original: _ZN23CTaskComplexAvoidEntity19ComputeDetourTargetERK4CPedRK10CColSphere
// Demangled: CTaskComplexAvoidEntity::ComputeDetourTarget(CPed const&,CColSphere const&)
int __fastcall CTaskComplexAvoidEntity::ComputeDetourTarget(
        CTaskComplexAvoidEntity *this,
        const CPed *a2,
        const CColSphere *a3)
{
  CVector *v4; // [sp+8h] [bp-8h]

  return CPedGeometryAnalyser::ComputeRouteRoundSphere(
           a2,
           a3,
           (CTaskComplexAvoidEntity *)((char *)this + 20),
           (CTaskComplexAvoidEntity *)((char *)this + 32),
           (CTaskComplexAvoidEntity *)((char *)this + 56),
           (CTaskComplexAvoidEntity *)((char *)this + 44),
           v4);
}


// ============================================================

// Address: 0x523058
// Original: _ZN23CTaskComplexAvoidEntity14ControlSubTaskEP4CPed
// Demangled: CTaskComplexAvoidEntity::ControlSubTask(CPed *)
int __fastcall CTaskComplexAvoidEntity::ControlSubTask(CTaskComplexAvoidEntity *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r3
  char *v7; // r2
  int v8; // r1
  float32x2_t v9; // d16
  unsigned __int64 v10; // d3

  if ( *((_DWORD *)this + 3) )
  {
    CTaskComplexAvoidEntity::SetUpIK(this, a2);
    if ( *(int *)(*((_DWORD *)a2 + 272) + 632) <= 30 )
    {
      v4 = *((_DWORD *)this + 3);
      v5 = *((_DWORD *)a2 + 5);
      v6 = *(_DWORD *)(v4 + 20);
      v7 = (char *)(v5 + 48);
      if ( !v5 )
        v7 = (char *)a2 + 4;
      v8 = v6 + 48;
      if ( !v6 )
        v8 = v4 + 4;
      v9.n64_u64[0] = vsub_f32(*(float32x2_t *)(v7 + 4), *(float32x2_t *)(v8 + 4)).n64_u64[0];
      v10 = vmul_f32(v9, v9).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v7 - *(float *)v8) * (float)(*(float *)v7 - *(float *)v8))
                         + *(float *)&v10)
                 + *((float *)&v10 + 1)) <= (float)(7.5 * (float)((float)(7.5 + 7.5) + (float)(7.5 + 7.5))) )
        return *((_DWORD *)this + 2);
      if ( *((unsigned __int8 *)this + 80) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
        goto LABEL_17;
    }
    else if ( *((unsigned __int8 *)this + 80) << 31
           && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    {
LABEL_17:
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
      return 0;
    }
  }
  else if ( *((unsigned __int8 *)this + 80) << 31 && IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
  {
    goto LABEL_17;
  }
  return 0;
}


// ============================================================

// Address: 0x5280b4
// Original: _ZNK23CTaskComplexAvoidEntity5CloneEv
// Demangled: CTaskComplexAvoidEntity::Clone(void)
int __fastcall CTaskComplexAvoidEntity::Clone(CTaskComplexAvoidEntity *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8
  __int64 v5; // d16
  __int64 v6; // d16
  char v7; // r2

  v3 = CTask::operator new((CTask *)&dword_54, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66C33C;
  *(_DWORD *)(v3 + 12) = v4;
  v5 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 40) = *((_DWORD *)this + 10);
  *(_QWORD *)(v3 + 32) = v5;
  v6 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 52) = *((_DWORD *)this + 10);
  *(_WORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 44) = v6;
  v7 = *(_BYTE *)(v3 + 80);
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_BYTE *)(v3 + 80) = v7 & 0xFE;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x52812c
// Original: _ZNK23CTaskComplexAvoidEntity11GetTaskTypeEv
// Demangled: CTaskComplexAvoidEntity::GetTaskType(void)
int __fastcall CTaskComplexAvoidEntity::GetTaskType(CTaskComplexAvoidEntity *this)
{
  return 939;
}


// ============================================================
