
// Address: 0x19273c
// Original: j__ZN23CTaskSimpleCarSetPedOutC2EP8CVehicleib
// Demangled: CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(CVehicle *,int,bool)
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
        CTaskSimpleCarSetPedOut *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  _ZN23CTaskSimpleCarSetPedOutC2EP8CVehicleib(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19456c
// Original: j__ZN23CTaskSimpleCarSetPedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedOut::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarSetPedOut::ProcessPed(CTaskSimpleCarSetPedOut *this, CPed *a2)
{
  return _ZN23CTaskSimpleCarSetPedOut10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1978e8
// Original: j__ZN23CTaskSimpleCarSetPedOutD2Ev
// Demangled: CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut()
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut(CTaskSimpleCarSetPedOut *this)
{
  _ZN23CTaskSimpleCarSetPedOutD2Ev(this);
}


// ============================================================

// Address: 0x198844
// Original: j__ZN23CTaskSimpleCarSetPedOut25PositionPedOutOfCollisionEP4CPedP8CVehiclei
// Demangled: CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(CPed *,CVehicle *,int)
// attributes: thunk
int __fastcall CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(
        CTaskSimpleCarSetPedOut *this,
        CPed *a2,
        CVehicle *a3,
        int a4)
{
  return _ZN23CTaskSimpleCarSetPedOut25PositionPedOutOfCollisionEP4CPedP8CVehiclei(this, a2, a3, a4);
}


// ============================================================

// Address: 0x502a60
// Original: _ZN23CTaskSimpleCarSetPedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSetPedOut::ProcessPed(CTaskSimpleCarSetPedOut *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  const CPed *v6; // r1
  int v7; // r3
  CPed **v8; // r0
  int v9; // r0
  int v10; // r0
  CVector *v11; // r1
  double v12; // d16
  int v13; // r0
  int v14; // r2
  bool v15; // zf
  const CPed *v16; // r1
  int v17; // r5
  CTaskSimplePlayerOnFoot *v18; // r6
  CTaskManager *v19; // r0
  CTask *WanderTaskByPedType; // r1
  int v21; // r9
  CTaskSimpleStandStill *v22; // r6
  int v23; // r0
  int v25; // r0
  double v26; // [sp+8h] [bp-28h] BYREF
  int v27; // [sp+10h] [bp-20h]

  v4 = *((_DWORD *)a2 + 289);
  v5 = *((_DWORD *)a2 + 7);
  *((_DWORD *)a2 + 289) = v4 & 0xFFFFFEFF;
  *((_DWORD *)a2 + 7) = v5 | 1;
  CPed::UpdateStatLeavingVehicle(a2);
  if ( !*((_BYTE *)this + 19) )
    CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(a2, 0, *((CVehicle **)this + 3), v7);
  CCarEnterExit::RemoveCarSitAnim(a2, v6);
  CPed::RestartNonPartialAnims(a2);
  if ( !*((_WORD *)this + 9) && *(_DWORD *)(*((_DWORD *)this + 2) + 1444) != 5 )
  {
    *((_DWORD *)a2 + 18) = 0;
    *((_DWORD *)a2 + 19) = 0;
    *((_DWORD *)a2 + 20) = 0;
  }
  if ( *((_DWORD *)a2 + 356) )
  {
    if ( *((_BYTE *)this + 20) )
      CVehicle::ClearGettingOutFlags(*((CVehicle **)this + 2), *((_BYTE *)this + 20));
    if ( *((_BYTE *)this + 21) )
      *(_BYTE *)(*((_DWORD *)this + 2) + 1161) -= *((_BYTE *)this + 21);
    v8 = (CPed **)*((_DWORD *)a2 + 356);
    if ( v8[281] == a2 )
    {
      CVehicle::RemoveDriver((CVehicle *)v8, *((_BYTE *)this + 16) == 0);
      *(_BYTE *)(*((_DWORD *)a2 + 356) + 58) = *(_BYTE *)(*((_DWORD *)a2 + 356) + 58) & 7 | 0x20;
      v9 = *((_DWORD *)a2 + 356);
      if ( *(_DWORD *)(v9 + 1288) == 5 )
        *(_DWORD *)(v9 + 1288) = 1;
      if ( *((_DWORD *)a2 + 359) == 6 && CVehicle::IsLawEnforcementVehicle(*((CVehicle **)a2 + 356)) )
        CVehicle::ChangeLawEnforcerState(*((CVehicle **)a2 + 356), 0);
    }
    else
    {
      CVehicle::RemovePassenger((CVehicle *)v8, a2);
    }
    v10 = *((_DWORD *)a2 + 5);
    v11 = (CVector *)(v10 + 48);
    if ( !v10 )
      v11 = (CPed *)((char *)a2 + 4);
    v12 = *(double *)v11;
    v27 = *((_DWORD *)v11 + 2);
    v26 = v12;
    if ( CGarages::IsPointWithinAnyGarage((CGarages *)&v26, v11) == 1 )
    {
      *(_BYTE *)(*((_DWORD *)a2 + 356) + 1202) &= 0xE7u;
      v13 = *((_DWORD *)a2 + 356);
      v14 = *(_DWORD *)(v13 + 1072);
      *(_DWORD *)(v13 + 1068) &= ~0x40u;
      *(_DWORD *)(v13 + 1072) = v14;
    }
  }
  v15 = *((_BYTE *)this + 18) == 0;
  if ( !*((_BYTE *)this + 18) )
    v15 = *((_BYTE *)this + 19) == 0;
  if ( v15 )
  {
    v25 = *((_DWORD *)a2 + 356);
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 1440) == 9 && fabsf(*(float *)(v25 + 72)) < 0.1 && fabsf(*(float *)(v25 + 76)) < 0.1 )
        *(_BYTE *)(v25 + 1576) |= 0x10u;
    }
  }
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v17 = *((_DWORD *)a2 + 272);
    v18 = (CTaskSimplePlayerOnFoot *)CTask::operator new((CTask *)&dword_34, (unsigned int)v16);
    CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(v18);
    v19 = (CTaskManager *)(v17 + 4);
    WanderTaskByPedType = v18;
  }
  else
  {
    v21 = *((_DWORD *)a2 + 272);
    if ( *((_BYTE *)a2 + 1096) == 2 )
    {
      v22 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v16);
      CTaskSimpleStandStill::CTaskSimpleStandStill(
        v22,
        (int)"gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity",
        1,
        0,
        8.0);
      v19 = (CTaskManager *)(v21 + 4);
      WanderTaskByPedType = v22;
    }
    else
    {
      WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(a2, v16);
      v19 = (CTaskManager *)(v21 + 4);
    }
  }
  CTaskManager::SetTask(v19, WanderTaskByPedType, 4, 0);
  CPed::ReplaceWeaponWhenExitingVehicle(a2);
  *((_DWORD *)a2 + 291) |= 8u;
  CPed::SetPedState(a2);
  v23 = *((_DWORD *)this + 2);
  if ( v23 && (*(_BYTE *)(v23 + 71) & 8) != 0 )
    *((_DWORD *)a2 + 17) |= 0x8000000u;
  return 1;
}


// ============================================================

// Address: 0x503c74
// Original: _ZN23CTaskSimpleCarSetPedOutC2EP8CVehicleib
// Demangled: CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(CVehicle *,int,bool)
void __fastcall CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
        CTaskSimpleCarSetPedOut *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 3) = a3;
  *((_BYTE *)this + 16) = a4;
  *((_BYTE *)this + 21) = 0;
  *(_DWORD *)((char *)this + 17) = 0;
  *(_DWORD *)this = &off_66B348;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x503cc0
// Original: _ZN23CTaskSimpleCarSetPedOutD2Ev
// Demangled: CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut()
void __fastcall CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut(CTaskSimpleCarSetPedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B348;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x503cec
// Original: _ZN23CTaskSimpleCarSetPedOutD0Ev
// Demangled: CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut()
void __fastcall CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut(CTaskSimpleCarSetPedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B348;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x503d1c
// Original: _ZN23CTaskSimpleCarSetPedOut25PositionPedOutOfCollisionEP4CPedP8CVehiclei
// Demangled: CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(CPed *,CVehicle *,int)
int *__fastcall CTaskSimpleCarSetPedOut::PositionPedOutOfCollision(int *this, CPed *a2, CVehicle *a3, int a4)
{
  CPed *v4; // r4
  int *v5; // r5
  bool v6; // zf
  int v8; // r0
  float v9; // s0
  CMatrix *v10; // r0
  float *v11; // r0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  float *v15; // r0
  float v16; // s4
  float v17; // s0
  float *v18; // r0
  float v19; // s2
  float v20; // s4
  float *v21; // r0
  float v22; // s2
  float v23; // s4
  const CVector *v24; // r10
  int v25; // r0
  int v26; // r9
  float v27; // s6
  float v28; // s4
  float v29; // s0
  int v30; // r1
  int v31; // r0
  int v32; // r2
  int v33; // r1
  CWorld *v34; // r0
  int IsLineOfSightClear; // r0

  v4 = a2;
  v5 = this;
  v6 = a2 == 0;
  if ( !a2 )
  {
    v4 = (CPed *)this[356];
    v6 = v4 == 0;
  }
  if ( !v6 )
  {
    v8 = *((_DWORD *)v4 + 5);
    if ( v8 )
      v9 = atan2f(COERCE_FLOAT(*(_DWORD *)(v8 + 16) ^ 0x80000000), *(float *)(v8 + 20));
    else
      v9 = *((float *)v4 + 4);
    v10 = (CMatrix *)v5[5];
    *((float *)v5 + 343) = v9;
    *((float *)v5 + 344) = v9;
    if ( v10 )
      CMatrix::SetRotateZOnly(v10, v9);
    else
      *((float *)v5 + 4) = v9;
    if ( *((_DWORD *)v4 + 360) == 5 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)v4 + 226) + 205) & 4) != 0 )
      {
        v11 = (float *)*((_DWORD *)v4 + 5);
        v12 = v11[8];
        v13 = v11[9];
        v14 = v11[10];
        v15 = (float *)v5[5];
        v16 = (float)(v13 * 0.5) + v15[13];
        v17 = (float)(v14 * 0.5) + v15[14];
        v15[12] = (float)(v12 * 0.5) + v15[12];
        v15[13] = v16;
        v15[14] = v17;
      }
      if ( (*(int (__fastcall **)(int *, _DWORD))(*v5 + 56))(v5, 0) != 1 )
      {
LABEL_19:
        v27 = *((float *)v4 + 20) * 0.9;
        v28 = *((float *)v4 + 19) * 0.9;
        v29 = *((float *)v4 + 18) * 0.9;
        v30 = v5[347];
        this = (int *)(v5[289] | 1);
        v5[289] = (int)this;
        *((float *)v5 + 18) = v29;
        *((float *)v5 + 19) = v28;
        *((float *)v5 + 20) = v27 + -0.1;
        if ( !v30 )
        {
          v5[347] = (int)v4;
          return (int *)j_CEntity::RegisterReference(v4, (CEntity **)v5 + 347);
        }
        return this;
      }
      v18 = (float *)v5[5];
      if ( (*((_BYTE *)v4 + 1071) & 0x40) == 0 )
      {
        v19 = v18[13] - (float)(v18[5] * 0.3);
        v20 = v18[14] - (float)(v18[6] * 0.3);
        v18[12] = v18[12] - (float)(v18[4] * 0.3);
        v18[13] = v19;
        v18[14] = v20;
        if ( (*(int (__fastcall **)(int *, _DWORD))(*v5 + 56))(v5, 0) == 1 )
        {
          v21 = (float *)v5[5];
          v22 = (float)(v21[5] * 0.3) + v21[13];
          v23 = (float)(v21[6] * 0.3) + v21[14];
          v21[12] = (float)(v21[4] * 0.3) + v21[12];
          v21[13] = v22;
          v21[14] = v23;
          return (int *)CPed::PositionPedOutOfCollision((CPed *)v5, (int)a3, v4, 1);
        }
        goto LABEL_19;
      }
      v18[14] = v18[14] + -0.3;
      this = (int *)(*(int (__fastcall **)(int *, _DWORD))(*v5 + 56))(v5, 0);
      if ( this == (int *)((char *)&stderr + 1) )
      {
        *(float *)(v5[5] + 56) = *(float *)(v5[5] + 56) + 0.3;
        return (int *)CPed::PositionPedOutOfCollision((CPed *)v5, (int)a3, v4, 1);
      }
    }
    else
    {
      v24 = (const CVector *)(v5 + 1);
      CWorld::pIgnoreEntity = (int)v4;
      v25 = CWorld::TestSphereAgainstWorld();
      if ( v25 )
        v26 = v25 != *((_DWORD *)v4 + 64);
      else
        v26 = 0;
      v31 = CWorld::TestSphereAgainstWorld();
      if ( v31 )
        v26 |= v31 != *((_DWORD *)v4 + 64);
      v32 = *((_DWORD *)v4 + 5);
      v33 = v5[5];
      v34 = (CWorld *)(v32 + 48);
      if ( !v32 )
        v34 = (CPed *)((char *)v4 + 4);
      if ( v33 )
        v24 = (const CVector *)(v33 + 48);
      IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                             v34,
                             v24,
                             (const CVector *)((char *)&stderr + 1),
                             0,
                             0,
                             1,
                             0,
                             0,
                             0,
                             0);
      if ( v26 || !IsLineOfSightClear )
        CPed::PositionPedOutOfCollision((CPed *)v5, (int)a3, v4, 1);
      this = &CWorld::pIgnoreEntity;
      CWorld::pIgnoreEntity = 0;
    }
  }
  return this;
}


// ============================================================

// Address: 0x50703c
// Original: _ZNK23CTaskSimpleCarSetPedOut5CloneEv
// Demangled: CTaskSimpleCarSetPedOut::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarSetPedOut::Clone(CTaskSimpleCarSetPedOut *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r5
  char v6; // r9

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_QWORD *)this + 1);
  v5 = v3;
  v6 = *((_BYTE *)this + 16);
  CTaskSimple::CTaskSimple(v3);
  *((_DWORD *)v5 + 3) = HIDWORD(v4);
  *((_BYTE *)v5 + 16) = v6;
  *((_BYTE *)v5 + 21) = 0;
  *(_DWORD *)((char *)v5 + 17) = 0;
  *(_DWORD *)v5 = &off_66B348;
  *((_DWORD *)v5 + 2) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 2);
  *((_BYTE *)v5 + 17) = *((_BYTE *)this + 17);
  *((_BYTE *)v5 + 18) = *((_BYTE *)this + 18);
  *((_BYTE *)v5 + 19) = *((_BYTE *)this + 19);
  *((_BYTE *)v5 + 20) = *((_BYTE *)this + 20);
  *((_BYTE *)v5 + 21) = *((_BYTE *)this + 21);
  return v5;
}


// ============================================================

// Address: 0x5070a8
// Original: _ZNK23CTaskSimpleCarSetPedOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarSetPedOut::GetTaskType(void)
int __fastcall CTaskSimpleCarSetPedOut::GetTaskType(CTaskSimpleCarSetPedOut *this)
{
  return 816;
}


// ============================================================

// Address: 0x5070ae
// Original: _ZN23CTaskSimpleCarSetPedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSetPedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSetPedOut::MakeAbortable(
        CTaskSimpleCarSetPedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
