
// Address: 0x18e854
// Original: j__ZN26CTaskSimpleThrowProjectileC2EP7CEntity7CVector
// Demangled: CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile(CEntity *,CVector)
// attributes: thunk
int CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile()
{
  return _ZN26CTaskSimpleThrowProjectileC2EP7CEntity7CVector();
}


// ============================================================

// Address: 0x198f58
// Original: j__ZN26CTaskSimpleThrowProjectile9StartAnimEP4CPed
// Demangled: CTaskSimpleThrowProjectile::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleThrowProjectile::StartAnim(CTaskSimpleThrowProjectile *this, CPed *a2)
{
  return _ZN26CTaskSimpleThrowProjectile9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a0988
// Original: j__ZN26CTaskSimpleThrowProjectile12ControlThrowEbP7CEntityP7CVector
// Demangled: CTaskSimpleThrowProjectile::ControlThrow(bool,CEntity *,CVector *)
// attributes: thunk
int __fastcall CTaskSimpleThrowProjectile::ControlThrow(
        CTaskSimpleThrowProjectile *this,
        bool a2,
        CEntity *a3,
        CVector *a4)
{
  return _ZN26CTaskSimpleThrowProjectile12ControlThrowEbP7CEntityP7CVector(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4de920
// Original: _ZN26CTaskSimpleThrowProjectileC2EP7CEntity7CVector
// Demangled: CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile(CEntity *,CVector)
int __fastcall CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile(int a1, CEntity *a2, int a3, int a4, int a5)
{
  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_WORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 10) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)a1 = &off_6696DC;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)(a1 + 16));
  *(_DWORD *)(a1 + 32) = CTimer::m_snTimeInMilliseconds;
  return a1;
}


// ============================================================

// Address: 0x4de97c
// Original: _ZN26CTaskSimpleThrowProjectileD2Ev
// Demangled: CTaskSimpleThrowProjectile::~CTaskSimpleThrowProjectile()
void __fastcall CTaskSimpleThrowProjectile::~CTaskSimpleThrowProjectile(CTaskSimpleThrowProjectile *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6696DC;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 3) = 0;
  }
  v3 = (CEntity *)*((_DWORD *)this + 4);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 4);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4de9c0
// Original: _ZN26CTaskSimpleThrowProjectileD0Ev
// Demangled: CTaskSimpleThrowProjectile::~CTaskSimpleThrowProjectile()
void __fastcall CTaskSimpleThrowProjectile::~CTaskSimpleThrowProjectile(CTaskSimpleThrowProjectile *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0
  void *v4; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6696DC;
  if ( v2 )
  {
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 3) = 0;
  }
  v3 = (CEntity *)*((_DWORD *)this + 4);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 4);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4dea08
// Original: _ZN26CTaskSimpleThrowProjectile13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleThrowProjectile::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleThrowProjectile::MakeAbortable(
        CTaskSimpleThrowProjectile *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  CAnimBlendAssociation *v6; // r0
  int result; // r0
  bool v8; // zf
  CAnimBlendAssociation *v9; // r0

  if ( a3 == 2 )
  {
    v6 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
    if ( v6 )
    {
      CAnimBlendAssociation::SetFinishCallback(
        v6,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *(_DWORD *)(*((_DWORD *)this + 3) + 28) = -998637568;
      result = 1;
      *((_DWORD *)this + 3) = 0;
      return result;
    }
  }
  else if ( a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v8 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v8 = *((_BYTE *)a4 + 9) == 0;
    if ( !v8 || (*((_BYTE *)a4 + 33) & 2) != 0 )
    {
      v9 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
      if ( v9 )
      {
        CAnimBlendAssociation::SetFinishCallback(
          v9,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *(_DWORD *)(*((_DWORD *)this + 3) + 28) = -1065353216;
        *((_DWORD *)this + 3) = 0;
      }
      *((_BYTE *)this + 8) = 1;
    }
  }
  return 1;
}


// ============================================================

// Address: 0x4dea88
// Original: _ZN26CTaskSimpleThrowProjectile10ProcessPedEP4CPed
// Demangled: CTaskSimpleThrowProjectile::ProcessPed(CPed *)
int __fastcall CTaskSimpleThrowProjectile::ProcessPed(CTaskSimpleThrowProjectile *this, CPed *a2)
{
  int v4; // r6
  int WeaponInfo; // r8
  int v6; // r0
  int v7; // r1
  float *v8; // r2
  float v9; // s0
  _DWORD *v10; // r0
  int v11; // r1
  int v13; // r0
  int v14; // r1
  __int64 *v15; // r2
  __int64 v16; // d16
  double v17; // d16
  int v18; // r8
  int MatrixArray; // r0
  CWeapon *v20; // r0
  double v21; // [sp+10h] [bp-28h] BYREF
  int v22; // [sp+18h] [bp-20h]

  v4 = 1;
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( !*((_BYTE *)this + 8) )
  {
    if ( !(*(unsigned __int8 *)(WeaponInfo + 25) << 31) )
      return 1;
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
    {
      v7 = *(__int16 *)(v6 + 44);
      if ( (unsigned int)(v7 - 229) > 1 )
        return 0;
      v8 = (float *)(WeaponInfo + 72);
      v9 = *(float *)(v6 + 32);
      if ( (unsigned __int16)v7 == 230 )
        v8 = (float *)(WeaponInfo + 84);
      if ( v9 <= *v8 || (float)(v9 - *(float *)(v6 + 40)) > *v8 || !(*(unsigned __int8 *)(v6 + 46) << 31) )
        return 0;
      if ( CPed::IsPlayer(a2) == 1 )
      {
        if ( *((_BYTE *)this + 10) )
        {
          v10 = (_DWORD *)((char *)this + 32);
          v11 = *((_DWORD *)this + 8);
        }
        else
        {
          v10 = (_DWORD *)((char *)this + 32);
          v11 = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 8);
          *((_DWORD *)this + 8) = v11;
        }
        if ( v11 >= 534 )
        {
          v11 = 533;
          *v10 = 533;
        }
        *(float *)(*((_DWORD *)a2 + 273) + 44) = (float)((float)v11 * 50.0) / 1000.0;
      }
      v13 = *((_DWORD *)this + 4);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v13 + 20);
        v15 = (__int64 *)(v14 + 48);
        if ( !v14 )
          v15 = (__int64 *)(v13 + 4);
        v16 = *v15;
        *((_DWORD *)this + 7) = *((_DWORD *)v15 + 2);
        *(_QWORD *)((char *)this + 20) = v16;
      }
      v17 = *(double *)(WeaponInfo + 36);
      v22 = *(_DWORD *)(WeaponInfo + 44);
      v21 = v17;
      GetAnimHierarchyFromSkinClump();
      v18 = RpHAnimIDGetIndex();
      MatrixArray = RpHAnimHierarchyGetMatrixArray();
      RwV3dTransformPoints(&v21, &v21, 1, MatrixArray + (v18 << 6));
      if ( *((float *)this + 5) == 0.0 )
      {
        v20 = (CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444);
        if ( *((float *)this + 7) == 0.0 )
        {
          CWeapon::Fire(v20, a2, (CVector *)&v21, (CVector *)&v21, 0, 0, 0);
          return 0;
        }
      }
      else
      {
        v20 = (CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444);
      }
      CWeapon::Fire(v20, a2, (CVector *)&v21, (CVector *)&v21, 0, (CTaskSimpleThrowProjectile *)((char *)this + 20), 0);
    }
    else
    {
      CTaskSimpleThrowProjectile::StartAnim(this, a2);
    }
    return 0;
  }
  return v4;
}


// ============================================================

// Address: 0x4dec40
// Original: _ZN26CTaskSimpleThrowProjectile9StartAnimEP4CPed
// Demangled: CTaskSimpleThrowProjectile::StartAnim(CPed *)
int __fastcall CTaskSimpleThrowProjectile::StartAnim(CTaskSimpleThrowProjectile *this, CPed *a2)
{
  int WeaponInfo; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r4
  int v9; // r2
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1
  float v12; // s2
  float v13; // s0
  int v14; // r1
  float *v15; // r2
  unsigned int v16; // r2
  int v17; // r1
  int v18; // r0
  CAnimBlendAssociation *v19; // r0

  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( *((_BYTE *)this + 9) )
  {
    v5 = *((_DWORD *)this + 4);
    if ( v5 )
    {
      v6 = *((_DWORD *)a2 + 5);
      v7 = *(_DWORD *)(v5 + 20);
      v8 = (char *)(v6 + 48);
      if ( !v6 )
        v8 = (char *)a2 + 4;
      v9 = v7 + 48;
      if ( !v7 )
        v9 = v5 + 4;
      v10.n64_u64[0] = vsub_f32(*(float32x2_t *)(v9 + 4), *(float32x2_t *)(v8 + 4)).n64_u64[0];
      v11 = vmul_f32(v10, v10).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v9 - *(float *)v8) * (float)(*(float *)v9 - *(float *)v8))
                         + *(float *)&v11)
                 + *((float *)&v11 + 1)) > 100.0 )
        goto LABEL_13;
    }
    v12 = *((float *)this + 6);
    v13 = *((float *)this + 5);
    if ( v13 == 0.0 && v12 == 0.0 && *((float *)this + 7) == 0.0 )
      goto LABEL_15;
    v14 = *((_DWORD *)a2 + 5);
    v15 = (float *)(v14 + 48);
    if ( !v14 )
      v15 = (float *)((char *)a2 + 4);
    if ( (float)((float)((float)((float)(v13 - *v15) * (float)(v13 - *v15))
                       + (float)((float)(v12 - v15[1]) * (float)(v12 - v15[1])))
               + (float)((float)(*((float *)this + 7) - v15[2]) * (float)(*((float *)this + 7) - v15[2]))) <= 100.0 )
    {
LABEL_15:
      v16 = 229;
      if ( !*((_BYTE *)this + 10) && *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) != 39 )
        v16 = 230;
    }
    else
    {
LABEL_13:
      v16 = 230;
    }
    v17 = *(_DWORD *)(WeaponInfo + 28);
    v18 = *((_DWORD *)a2 + 6);
  }
  else
  {
    v17 = *(_DWORD *)(WeaponInfo + 28);
    v16 = 228;
    v18 = *((_DWORD *)a2 + 6);
  }
  v19 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v18, v17, v16);
  *((_DWORD *)this + 3) = v19;
  return sub_18C20C(
           v19,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleThrowProjectile::FinishAnimThrowProjectileCB,
           this);
}


// ============================================================

// Address: 0x4ded94
// Original: _ZN26CTaskSimpleThrowProjectile12ControlThrowEbP7CEntityP7CVector
// Demangled: CTaskSimpleThrowProjectile::ControlThrow(bool,CEntity *,CVector *)
int __fastcall CTaskSimpleThrowProjectile::ControlThrow(
        CTaskSimpleThrowProjectile *this,
        int a2,
        CEntity *a3,
        CVector *a4)
{
  CEntity **v4; // r4
  CEntity *v7; // r0
  bool v10; // zf
  int v11; // r1
  int v12; // r0
  bool v13; // zf
  __int64 v14; // d16

  v7 = (CEntity *)*((unsigned __int8 *)this + 8);
  if ( v7 )
    return 1;
  v10 = a2 == 1;
  if ( a2 == 1 )
  {
    v7 = (CEntity *)*((unsigned __int8 *)this + 10);
    v10 = v7 == 0;
  }
  if ( v10 )
  {
    v11 = *((_DWORD *)this + 8);
    v12 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 10) = 1;
    v7 = (CEntity *)(v12 - v11);
    *((_DWORD *)this + 8) = v7;
  }
  v13 = a3 == 0;
  if ( a3 )
  {
    v4 = (CEntity **)((char *)this + 16);
    v7 = (CEntity *)*((_DWORD *)this + 4);
    v13 = v7 == a3;
  }
  if ( !v13 )
  {
    if ( v7 )
      CEntity::CleanUpOldReference(v7, v4);
    *v4 = a3;
    CEntity::RegisterReference(a3, v4);
  }
  if ( a4 )
  {
    v14 = *(_QWORD *)a4;
    *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
    *(_QWORD *)((char *)this + 20) = v14;
  }
  return 0;
}


// ============================================================

// Address: 0x4dee10
// Original: _ZN26CTaskSimpleThrowProjectile27FinishAnimThrowProjectileCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleThrowProjectile::FinishAnimThrowProjectileCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleThrowProjectile::FinishAnimThrowProjectileCB(
        CTaskSimpleThrowProjectile *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  if ( *((_BYTE *)a2 + 9) )
    *((_BYTE *)a2 + 8) = 1;
  else
    *((_BYTE *)a2 + 9) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x4e99bc
// Original: _ZNK26CTaskSimpleThrowProjectile5CloneEv
// Demangled: CTaskSimpleThrowProjectile::Clone(void)
int __fastcall CTaskSimpleThrowProjectile::Clone(CTaskSimpleThrowProjectile *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8
  int v6; // r6

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *(_QWORD *)((char *)this + 20);
  v6 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_WORD *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 10) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 28) = v6;
  *(_DWORD *)v3 = &off_6696DC;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  *(_DWORD *)(v3 + 32) = CTimer::m_snTimeInMilliseconds;
  return v3;
}


// ============================================================

// Address: 0x4e9a20
// Original: _ZNK26CTaskSimpleThrowProjectile11GetTaskTypeEv
// Demangled: CTaskSimpleThrowProjectile::GetTaskType(void)
int __fastcall CTaskSimpleThrowProjectile::GetTaskType(CTaskSimpleThrowProjectile *this)
{
  return 1018;
}


// ============================================================
