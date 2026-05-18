
// Address: 0x18c754
// Original: j__ZN16CTaskSimpleInAir17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleInAir::ApplyRollAndPitch(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleInAir::ApplyRollAndPitch(CTaskSimpleInAir *this, CPed *a2)
{
  return _ZN16CTaskSimpleInAir17ApplyRollAndPitchEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ebbc
// Original: j__ZN16CTaskSimpleInAirC2Ebbb
// Demangled: CTaskSimpleInAir::CTaskSimpleInAir(bool,bool,bool)
// attributes: thunk
void __fastcall CTaskSimpleInAir::CTaskSimpleInAir(CTaskSimpleInAir *this, bool a2, bool a3, bool a4)
{
  _ZN16CTaskSimpleInAirC2Ebbb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a0614
// Original: j__ZN16CTaskSimpleInAir10CreateTaskEv
// Demangled: CTaskSimpleInAir::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleInAir::CreateTask(CTaskSimpleInAir *this)
{
  return _ZN16CTaskSimpleInAir10CreateTaskEv(this);
}


// ============================================================

// Address: 0x491534
// Original: _ZN16CTaskSimpleInAir10CreateTaskEv
// Demangled: CTaskSimpleInAir::CreateTask(void)
void __fastcall CTaskSimpleInAir::CreateTask(CTaskSimpleInAir *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  unsigned int v8; // r1
  CTaskSimpleInAir *v9; // r0
  bool v10; // r1
  char v11; // [sp+7h] [bp-11h] BYREF
  char v12; // [sp+8h] [bp-10h] BYREF
  bool v13; // [sp+9h] [bp-Fh] BYREF
  _BYTE v14[2]; // [sp+Ah] [bp-Eh] BYREF
  _BYTE v15[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v16[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, (char *)&stderr + 1, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 1, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 1, v6);
  v9 = (CTaskSimpleInAir *)CTask::operator new((CTask *)&off_3C, v8);
  v10 = v13;
  if ( v13 )
    v10 = 1;
  CTaskSimpleInAir::CTaskSimpleInAir(v9, v10, v12 != 0, v11 != 0);
}


// ============================================================

// Address: 0x52c2e0
// Original: _ZN16CTaskSimpleInAirC2Ebbb
// Demangled: CTaskSimpleInAir::CTaskSimpleInAir(bool,bool,bool)
void __fastcall CTaskSimpleInAir::CTaskSimpleInAir(CTaskSimpleInAir *this, bool a2, bool a3, bool a4)
{
  int v7; // r0
  int v8; // r1

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)(v7 + 50) = 0;
  *(_DWORD *)(v7 + 46) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 44) = 0;
  *(_DWORD *)(v7 + 56) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  *(_DWORD *)(v7 + 32) = 0;
  *(_BYTE *)(v7 + 36) = a2 | (2 * a3) | (4 * a4) | *(_BYTE *)(v7 + 36) & 0xF8;
  *(_DWORD *)v7 = &off_66CAF0;
  v8 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(v7 + 52) = 1;
  *(_DWORD *)(v7 + 44) = v8;
  *(_DWORD *)(v7 + 48) = 500;
}


// ============================================================

// Address: 0x52c34c
// Original: _ZN16CTaskSimpleInAirD2Ev
// Demangled: CTaskSimpleInAir::~CTaskSimpleInAir()
void __fastcall CTaskSimpleInAir::~CTaskSimpleInAir(CTaskSimpleInAir *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66CAF0;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v3 = (CEntity *)*((_DWORD *)this + 14);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 14);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52c38c
// Original: _ZN16CTaskSimpleInAirD0Ev
// Demangled: CTaskSimpleInAir::~CTaskSimpleInAir()
void __fastcall CTaskSimpleInAir::~CTaskSimpleInAir(CTaskSimpleInAir *this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0
  void *v4; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_66CAF0;
  if ( v2 )
    CAnimBlendAssociation::SetDeleteCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v3 = (CEntity *)*((_DWORD *)this + 14);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 14);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x52c3d0
// Original: _ZN16CTaskSimpleInAir13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleInAir::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleInAir::MakeAbortable(CTaskSimpleInAir *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r0

  if ( a3 != 2
    && (a3 != 1
     || (*((_BYTE *)a2 + 1162) & 8) == 0
     && (!a4
      || ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 32
       || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) != 71)
      && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 93)) )
  {
    return 0;
  }
  v7 = *((_DWORD *)this + 7);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 28) = -1056964608;
    *(_WORD *)(*((_DWORD *)this + 7) + 46) |= 4u;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 7),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)a2 + 289) &= ~0x200u;
  return 1;
}


// ============================================================

// Address: 0x52c45c
// Original: _ZN16CTaskSimpleInAir10ProcessPedEP4CPed
// Demangled: CTaskSimpleInAir::ProcessPed(CPed *)
int __fastcall CTaskSimpleInAir::ProcessPed(CTaskSimpleInAir *this, CPed *a2)
{
  int v4; // r8
  float v5; // r1
  float v6; // r2
  float v7; // r8
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned __int16 v10; // r1
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  char *v14; // r4
  int v15; // r0
  int *v16; // r4
  CAnimBlendAssociation *v17; // r0
  int Association; // r0
  CAnimBlendAssociation *v19; // r0
  float v20; // s0
  char v21; // r1
  _DWORD *v22; // r0
  bool v23; // zf
  float *v24; // r0
  float v25; // s0
  float v26; // s2
  float v27; // s4
  float v28; // s6
  bool v29; // cc
  _DWORD *v30; // r9
  int v31; // r0
  float v32; // s0
  int v33; // r2
  bool v34; // zf
  int v35; // r0
  int result; // r0
  unsigned __int16 *v37; // r0
  bool v38; // zf
  CAnimBlendAssociation *v39; // r0
  int IsPlayer; // r1
  int v41; // r0
  int v42; // r9
  CEntity *v43; // r0
  bool v44; // [sp+4h] [bp-6Ch]
  _BYTE v45[4]; // [sp+1Ch] [bp-54h] BYREF
  _BYTE v46[8]; // [sp+20h] [bp-50h] BYREF
  float v47; // [sp+28h] [bp-48h]
  float v48[9]; // [sp+4Ch] [bp-24h] BYREF

  v4 = *((_DWORD *)a2 + 5) + 48;
  v5 = *(float *)v4;
  v6 = *(float *)(v4 + 4);
  v7 = *(float *)(v4 + 8);
  v48[0] = v5;
  v48[1] = v6;
  v48[2] = v7;
  if ( *((_BYTE *)this + 52) )
  {
    if ( *((_BYTE *)this + 53) )
    {
      v8 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 53) = 0;
      *((_DWORD *)this + 11) = v8;
      v9 = v8;
    }
    else
    {
      v9 = *((_DWORD *)this + 11);
      v8 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v9 + *((_DWORD *)this + 12) <= v8
      && *((_DWORD *)a2 + 275) != 39
      && (float)(*((float *)a2 + 20) * 50.0) <= -20.0 )
    {
      if ( CPed::IsPlayer(a2) == 1 )
        v10 = 358;
      else
        v10 = 346;
      CPed::Say(a2, v10, 0, 1.0, 0, 0, 0);
      *((_BYTE *)this + 52) = 0;
    }
  }
  v11 = *((_DWORD *)this + 7);
  if ( !v11 )
  {
    *((_DWORD *)a2 + 289) |= 0x200u;
    if ( (*((_BYTE *)this + 36) & 1) != 0 )
    {
      Association = RpAnimBlendClumpGetAssociation();
      *((_DWORD *)this + 7) = Association;
      if ( !Association && (Association = RpAnimBlendClumpGetAssociation(), (*((_DWORD *)this + 7) = Association) == 0)
        || *(float *)(Association + 24) < 1.0 && *(float *)(Association + 28) <= 0.0 )
      {
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x76u);
      }
    }
    else if ( (*((_BYTE *)this + 36) & 2) != 0 )
    {
      if ( *((float *)a2 + 20) <= 0.0 )
      {
        v19 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x79u);
        *((_DWORD *)this + 7) = v19;
        CAnimBlendAssociation::SetDeleteCallback(
          v19,
          (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleInAir::DeleteInAirAnimCB,
          this);
        *(_DWORD *)(*((_DWORD *)this + 7) + 28) = 1056964608;
        *(_DWORD *)(*((_DWORD *)this + 7) + 24) = 1065353216;
      }
    }
    else
    {
      v15 = *((_DWORD *)this + 7);
      if ( !v15 )
      {
        v16 = (int *)((char *)a2 + 24);
        v15 = RpAnimBlendClumpGetAssociation();
        *((_DWORD *)this + 7) = v15;
        if ( !v15 )
        {
LABEL_28:
          v17 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*v16, 0, 0x79u);
          *((_DWORD *)this + 7) = v17;
          if ( !v17 )
            goto LABEL_39;
          goto LABEL_38;
        }
      }
      if ( *(float *)(v15 + 24) < 1.0 && *(float *)(v15 + 28) <= 0.0 )
      {
        v16 = (int *)((char *)a2 + 24);
        goto LABEL_28;
      }
    }
    v17 = (CAnimBlendAssociation *)*((_DWORD *)this + 7);
    if ( !v17 )
      goto LABEL_39;
LABEL_38:
    CAnimBlendAssociation::SetDeleteCallback(
      v17,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleInAir::DeleteInAirAnimCB,
      this);
    v11 = *((_DWORD *)this + 7);
    if ( !v11 )
      goto LABEL_39;
  }
  v12 = *(unsigned __int16 *)(v11 + 44);
  v13 = v12 == 128;
  if ( v12 == 128 )
    v13 = *((unsigned __int8 *)a2 + 1156) << 31 == 0;
  if ( v13
    && *(float *)(v11 + 32) < *(float *)(*(_DWORD *)(v11 + 20) + 16)
    && (*(float *)(v11 + 24) >= 1.0 || *(float *)(v11 + 28) > 0.0) )
  {
    CPhysical::ApplyMoveForce(a2, 0, 0, (float)(*((float *)a2 + 36) * 0.0028) * *(float *)&CTimer::ms_fTimeStep);
    v14 = (char *)this + 36;
    goto LABEL_79;
  }
LABEL_39:
  v20 = *((float *)a2 + 20);
  if ( v20 > 0.0 && (*((float *)a2 + 18) != 0.0 || v20 != 0.0 || *((float *)a2 + 19) != 0.0)
    || (v14 = (char *)this + 36, v21 = *((_BYTE *)this + 36), (v21 & 2) == 0)
    && (*((_DWORD *)a2 + 275) & 0xFFFFFFFE) == 0x36 )
  {
    v14 = (char *)this + 36;
    if ( (*((_BYTE *)this + 36) & 2) == 0 )
    {
      v22 = (_DWORD *)*((_DWORD *)this + 1);
      v23 = v22 == 0;
      if ( v22 )
      {
        v22 = (_DWORD *)v22[1];
        v23 = v22 == 0;
      }
      if ( !v23 && (*(int (__fastcall **)(_DWORD *))(*v22 + 20))(v22) == 211 )
      {
        v24 = (float *)*((_DWORD *)a2 + 5);
        v25 = v24[4];
        v26 = v24[5];
        v27 = v24[6];
        v28 = (float)((float)(*((float *)a2 + 18) * v25) + (float)(*((float *)a2 + 19) * v26))
            + (float)(*((float *)a2 + 20) * v27);
        v29 = v28 < 0.05;
        if ( v28 < 0.05 )
          v29 = *((_DWORD *)this + 10) < 1000;
        if ( v29 )
        {
          CPhysical::ApplyMoveForce(
            a2,
            v25 * (float)((float)(0.05 - v28) * *((float *)a2 + 36)),
            v26 * (float)((float)(0.05 - v28) * *((float *)a2 + 36)),
            v27 * (float)((float)(0.05 - v28) * *((float *)a2 + 36)));
          *((_DWORD *)this + 10) += (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
        }
      }
    }
    goto LABEL_79;
  }
  v30 = (_DWORD *)((char *)a2 + 1156);
  if ( v20 < *((float *)this + 8) )
    *((float *)this + 8) = v20;
  v31 = 1;
  if ( !(*((unsigned __int8 *)a2 + 1156) << 31) )
  {
    v31 = CWorld::ProcessVerticalLine((CVector *)v48, COERCE_INT(v7 + -4.0), (int)v46, (int)v45, 1, 1, 0, 1, 0, 0, 0);
    v21 = *v14;
  }
  if ( (v21 & 2) != 0 )
  {
    v32 = *((float *)a2 + 20);
    if ( v32 > 0.0 || v32 <= CTaskSimpleInAir::ms_fMaxStuckVelocity )
    {
      *((_DWORD *)this + 10) = 0;
    }
    else
    {
      v33 = *((_DWORD *)this + 10);
      *((_DWORD *)this + 10) = v33 + 1;
      if ( v33 >= CTaskSimpleInAir::ms_iNumStuckFallingFramesBeforeQuitting )
      {
        *v30 |= 1u;
        goto LABEL_65;
      }
    }
  }
  if ( !v31 )
  {
    if ( *((_DWORD *)a2 + 275) != 39 && *((float *)a2 + 20) < -0.1 )
    {
      v37 = (unsigned __int16 *)*((_DWORD *)this + 7);
      v38 = v37 == 0;
      if ( v37 )
        v38 = v37[22] == 120;
      if ( !v38 )
      {
        CAnimBlendAssociation::SetDeleteCallback(
          (CAnimBlendAssociation *)v37,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        v39 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x78u);
        *((_DWORD *)this + 7) = v39;
        CAnimBlendAssociation::SetDeleteCallback(
          v39,
          (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleInAir::DeleteInAirAnimCB,
          this);
      }
    }
    goto LABEL_79;
  }
LABEL_65:
  if ( (float)(*(float *)(*((_DWORD *)a2 + 5) + 56) - v47) < 1.3 )
    goto LABEL_69;
  v34 = *(unsigned __int8 *)v30 << 31 == 0;
  if ( !(*(unsigned __int8 *)v30 << 31) )
    v34 = *((_DWORD *)a2 + 64) == 0;
  if ( !v34 )
  {
LABEL_69:
    v35 = *((_DWORD *)this + 7);
    if ( v35 && (*v14 & 2) != 0 )
    {
      *(_DWORD *)(v35 + 28) = -998637568;
      *(_WORD *)(*((_DWORD *)this + 7) + 46) |= 4u;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 7),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 7) = 0;
    }
    *v30 &= ~0x200u;
    return 1;
  }
LABEL_79:
  if ( !((unsigned __int8)*v14 << 31) || *((_DWORD *)this + 14) || (*((_DWORD *)a2 + 275) & 0xFFFFFFFE) == 0x36 )
    return 0;
  IsPlayer = CPed::IsPlayer(a2);
  result = 0;
  if ( IsPlayer == 1 && !CGame::currArea )
  {
    if ( *((float *)a2 + 20) <= -0.2
      || sqrtf((float)(*((float *)a2 + 18) * *((float *)a2 + 18)) + (float)(*((float *)a2 + 19) * *((float *)a2 + 19))) <= 0.05 )
    {
      return 0;
    }
    v41 = *((_DWORD *)this + 1);
    if ( v41 && (*(int (__fastcall **)(int))(*(_DWORD *)v41 + 20))(v41) == 240 && (v42 = *((_DWORD *)this + 1)) != 0 )
    {
      if ( *(_BYTE *)(v42 + 14) )
        return 0;
    }
    else
    {
      v42 = 0;
    }
    v43 = (CEntity *)CTaskSimpleClimb::TestForClimb(
                       a2,
                       (CTaskSimpleInAir *)((char *)this + 8),
                       (CTaskSimpleInAir *)((char *)this + 20),
                       (float *)this + 6,
                       0,
                       v44);
    *((_DWORD *)this + 14) = v43;
    if ( v43 )
    {
      CEntity::RegisterReference(v43, (CEntity **)this + 14);
      return 0;
    }
    result = 0;
    if ( v42 && *((float *)this + 5) < -1000.0 )
    {
      *(_BYTE *)(v42 + 14) = 1;
      return 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x52ca3c
// Original: _ZN16CTaskSimpleInAir17DeleteInAirAnimCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleInAir::DeleteInAirAnimCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleInAir::DeleteInAirAnimCB(int this, CAnimBlendAssociation *a2, void *a3)
{
  bool v3; // zf

  v3 = this == 0;
  if ( this )
    v3 = a2 == 0;
  if ( !v3 && *((_DWORD *)a2 + 7) == this )
  {
    this = 0;
    *((_DWORD *)a2 + 7) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x52cb84
// Original: _ZN16CTaskSimpleInAir17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleInAir::ApplyRollAndPitch(CPed *)
void __fastcall CTaskSimpleInAir::ApplyRollAndPitch(CTaskSimpleInAir *this, CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x532d50
// Original: _ZNK16CTaskSimpleInAir5CloneEv
// Demangled: CTaskSimpleInAir::Clone(void)
int __fastcall CTaskSimpleInAir::Clone(CTaskSimpleInAir *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0
  char v5; // r3

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_3C, a2);
  LOBYTE(this) = *((_BYTE *)this + 36);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 50) = 0;
  *(_DWORD *)(result + 46) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  v5 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66CAF0;
  *(_BYTE *)(result + 36) = (unsigned __int8)this & 7 | v5 & 0xF8;
  *(_DWORD *)(result + 44) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(result + 48) = 500;
  *(_BYTE *)(result + 52) = 1;
  return result;
}


// ============================================================

// Address: 0x532db4
// Original: _ZNK16CTaskSimpleInAir11GetTaskTypeEv
// Demangled: CTaskSimpleInAir::GetTaskType(void)
int __fastcall CTaskSimpleInAir::GetTaskType(CTaskSimpleInAir *this)
{
  return 241;
}


// ============================================================

// Address: 0x532db8
// Original: _ZN16CTaskSimpleInAir9SerializeEv
// Demangled: CTaskSimpleInAir::Serialize(void)
int __fastcall CTaskSimpleInAir::Serialize(CTaskSimpleInAir *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v9; // r0
  bool v10; // [sp+5h] [bp-13h] BYREF
  bool v11; // [sp+6h] [bp-12h] BYREF
  _BYTE v12[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskSimpleInAir *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleInAir *))(*(_DWORD *)this + 20))(this) == 241 )
  {
    v12[0] = *((_BYTE *)this + 36) & 1;
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 1, v5);
    v11 = (*((_BYTE *)this + 36) & 2) != 0;
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)&v11, (char *)&stderr + 1, v6);
    v10 = (*((_BYTE *)this + 36) & 4) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 1, v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskSimpleInAir *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(241, v9);
  }
}


// ============================================================
