
// Address: 0x1926d8
// Original: j__ZN21CTaskSimpleCarJumpOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(
        CTaskSimpleCarJumpOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN21CTaskSimpleCarJumpOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x503554
// Original: _ZN21CTaskSimpleCarJumpOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(
        CTaskSimpleCarJumpOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  float *v8; // r0

  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = a3;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 29) = 0;
  *((_DWORD *)this + 8) = a4;
  *(_DWORD *)this = &off_66B2E0;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
    v8 = (float *)*((_DWORD *)this + 4);
    *((float *)this + 5) = sqrtf((float)((float)(v8[18] * v8[18]) + (float)(v8[19] * v8[19])) + (float)(v8[20] * v8[20]));
  }
}


// ============================================================

// Address: 0x5035cc
// Original: _ZN21CTaskSimpleCarJumpOutD2Ev
// Demangled: CTaskSimpleCarJumpOut::~CTaskSimpleCarJumpOut()
void __fastcall CTaskSimpleCarJumpOut::~CTaskSimpleCarJumpOut(CTaskSimpleCarJumpOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B2E0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x50360c
// Original: _ZN21CTaskSimpleCarJumpOutD0Ev
// Demangled: CTaskSimpleCarJumpOut::~CTaskSimpleCarJumpOut()
void __fastcall CTaskSimpleCarJumpOut::~CTaskSimpleCarJumpOut(CTaskSimpleCarJumpOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B2E0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x503650
// Original: _ZN21CTaskSimpleCarJumpOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarJumpOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarJumpOut::MakeAbortable(CTaskSimpleCarJumpOut *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r0
  int result; // r0
  int v9; // r0

  if ( a3 == 2 )
  {
    v7 = *((_DWORD *)this + 3);
    if ( v7 )
      *(_DWORD *)(v7 + 28) = -998637568;
    return 1;
  }
  else
  {
    result = 0;
    if ( a3 == 1 && a4 )
    {
      if ( ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 33
         || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 66)
        && (v9 = *((_DWORD *)this + 3)) != 0
        && !(*((unsigned __int8 *)a2 + 1157) << 31) )
      {
        *(_DWORD *)(v9 + 28) = -1073741824;
        result = 1;
        *((_BYTE *)this + 8) = 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5036bc
// Original: _ZN21CTaskSimpleCarJumpOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarJumpOut::ProcessPed(CPed *)
bool __fastcall CTaskSimpleCarJumpOut::ProcessPed(CTaskSimpleCarJumpOut *this, CPed *a2, int a3)
{
  int v6; // r0
  int v7; // r1
  float v8; // s0
  int v9; // r1
  bool v10; // zf
  float v11; // s16
  float v12; // s0
  int v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r0
  CEntity *v19; // r6
  float v20; // s0
  int v21; // r1
  bool v22; // zf
  int *v23; // r3
  int v24; // r8
  int v25; // r0
  CEntity **v26; // r8
  const CPed *v27; // r1
  int v28; // r0
  float v29; // r1
  float v30; // s16
  float v31; // s0
  int v32; // r6
  int v33; // r0
  CAnimBlendAssociation *v34; // r0
  int v35; // r0
  int v36; // r6
  CVehicleAnimGroup *v37; // r0
  int Group; // r0
  CMatrix *v39; // r0
  int v40; // r0
  __int64 v41; // d16
  int v42; // r0
  int DoorStatus; // r0
  _DWORD v44[2]; // [sp+8h] [bp-38h] BYREF
  CEntity *v45; // [sp+10h] [bp-30h]
  int v46; // [sp+14h] [bp-2Ch]
  char v47; // [sp+18h] [bp-28h]
  int v48; // [sp+19h] [bp-27h]
  char v49; // [sp+1Dh] [bp-23h]

  if ( *((_BYTE *)this + 8) )
    return 1;
  v6 = *((_DWORD *)this + 4);
  if ( !v6 )
    return 1;
  v7 = *((_DWORD *)this + 3);
  if ( !v7 )
    goto LABEL_11;
  v8 = *(float *)(v7 + 32);
  if ( v8 < 0.73333 )
  {
    v9 = *(_DWORD *)(v6 + 1440);
    v10 = v9 == 9;
    if ( v9 != 9 )
      v10 = *(_DWORD *)(v6 + 1444) == 2;
    if ( v10 )
      goto LABEL_11;
  }
  if ( v8 < 0.45 && !*(_DWORD *)(v6 + 1440) )
  {
LABEL_11:
    v11 = *(float *)&CTimer::ms_fTimeStep;
    v12 = powf(0.96, *(float *)&CTimer::ms_fTimeStep) * *((float *)this + 5);
    *((float *)this + 5) = v12;
    *((float *)a2 + 314) = *((float *)a2 + 314) + (float)(v11 * v12);
  }
  v13 = *((_DWORD *)a2 + 289);
  if ( (v13 & 0x100) != 0 )
  {
    v18 = *((_DWORD *)this + 3);
    if ( v18 )
    {
      v19 = (CEntity *)*((_DWORD *)this + 4);
      v20 = 0.35;
      v21 = *((_DWORD *)v19 + 360);
      v22 = v21 == 9;
      if ( v21 != 9 )
      {
        a3 = *((_DWORD *)v19 + 361);
        v22 = a3 == 2;
      }
      if ( !v22 )
      {
        v23 = dword_5039B4;
        if ( a3 == 4 )
          v23 = &dword_5039B4[1];
        v20 = *(float *)v23;
      }
      if ( *(float *)(v18 + 32) <= v20 )
      {
        if ( !v21 )
        {
          v35 = *((_DWORD *)v19 + 226);
          v36 = 385;
          v37 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(v35 + 222)];
          if ( (*((_DWORD *)this + 6) & 0xFFFFFFFE) == 0xA )
            v36 = 384;
          Group = CVehicleAnimGroup::GetGroup(v37, v36);
          (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 4) + 116))(
            *((_DWORD *)this + 4),
            a2,
            *((_DWORD *)this + 6),
            Group,
            v36,
            *(_DWORD *)(*((_DWORD *)this + 3) + 32));
        }
      }
      else
      {
        v24 = *((_DWORD *)this + 6);
        CTaskSimple::CTaskSimple((CTaskSimple *)v44);
        v45 = v19;
        v46 = v24;
        v26 = (CEntity **)(v25 + 8);
        v47 = 1;
        v49 = 0;
        v48 = 0;
        v44[0] = &off_66B348;
        if ( v19 )
          CEntity::RegisterReference(v19, v26);
        HIBYTE(v48) = *((_BYTE *)this + 28);
        v49 = *((_BYTE *)this + 29);
        CTaskSimpleCarSetPedOut::ProcessPed((CTaskSimpleCarSetPedOut *)v44, a2);
        CCarEnterExit::RemoveCarSitAnim(a2, v27);
        v28 = *((_DWORD *)this + 4);
        v29 = *(float *)(v28 + 20);
        v30 = *(float *)(LODWORD(v29) + 40);
        if ( v29 == 0.0 )
          v31 = *(float *)(v28 + 16);
        else
          v31 = atan2f(COERCE_FLOAT(*(_DWORD *)(LODWORD(v29) + 16) ^ 0x80000000), *(float *)(LODWORD(v29) + 20));
        if ( v30 < 0.0 )
          v31 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v31 + 3.1416), v29));
        v39 = (CMatrix *)*((_DWORD *)a2 + 5);
        *((float *)a2 + 343) = v31;
        *((float *)a2 + 344) = v31;
        if ( v39 )
          CMatrix::SetRotateZOnly(v39, v31);
        else
          *((float *)a2 + 4) = v31;
        v40 = *((_DWORD *)this + 4);
        v41 = *(_QWORD *)(v40 + 72);
        *((_DWORD *)a2 + 20) = *(_DWORD *)(v40 + 80);
        *((_QWORD *)a2 + 9) = v41;
        *((_DWORD *)a2 + 75) = *((_DWORD *)this + 4);
        *((_DWORD *)a2 + 290) |= 0x80000000;
        v42 = *((_DWORD *)this + 4);
        if ( !*(_DWORD *)(v42 + 1440)
          && (!CDamageManager::GetDoorStatus((CDamageManager *)(v42 + 1460), *((_DWORD *)this + 6))
           || CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 4) + 1460), *((_DWORD *)this + 6)) == 2) )
        {
          DoorStatus = CDamageManager::GetDoorStatus(
                         (CDamageManager *)(*((_DWORD *)this + 4) + 1460),
                         *((_DWORD *)this + 6));
          CDamageManager::SetDoorStatus(
            (CDamageManager *)(*((_DWORD *)this + 4) + 1460),
            *((_DWORD *)this + 6),
            DoorStatus + 1);
        }
        v44[0] = &off_66B348;
        if ( v45 )
          CEntity::CleanUpOldReference(v45, v26);
        CTask::~CTask((CTask *)v44);
      }
    }
    else
    {
      v32 = 385;
      if ( (*((_DWORD *)this + 6) & 0xFFFFFFFE) == 0xA )
        v32 = 384;
      v33 = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                  + 222)],
              v32);
      v34 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v33, v32);
      *((_DWORD *)this + 3) = v34;
      CAnimBlendAssociation::SetFinishCallback(
        v34,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarJumpOut::FinishAnimCarJumpOutCB,
        this);
    }
    return 0;
  }
  else
  {
    v14 = *((_DWORD *)this + 4);
    if ( v14 )
    {
      if ( !*(_DWORD *)(v14 + 1440) )
      {
        v15 = *((_DWORD *)a2 + 290);
        v16 = *((_DWORD *)a2 + 292);
        v17 = *((_DWORD *)a2 + 291) | 0x100000;
        *((_DWORD *)a2 + 333) |= 8u;
        *((_DWORD *)a2 + 289) = v13;
        *((_DWORD *)a2 + 290) = v15;
        *((_DWORD *)a2 + 291) = v17;
        *((_DWORD *)a2 + 292) = v16;
      }
    }
    return *((_DWORD *)this + 3) == 0;
  }
}


// ============================================================

// Address: 0x5039d4
// Original: _ZN21CTaskSimpleCarJumpOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarJumpOut::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarJumpOut::StartAnim(CTaskSimpleCarJumpOut *this, const CPed *a2)
{
  int v4; // r6
  unsigned int v5; // r1
  __int16 v6; // r0
  int Group; // r0
  CAnimBlendAssociation *v8; // r0

  v4 = 385;
  v5 = *((_DWORD *)this + 6) & 0xFFFFFFFE;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904) + 222);
  if ( v5 == 10 )
    v4 = 384;
  Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v4);
  v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v4);
  *((_DWORD *)this + 3) = v8;
  return sub_18C20C(v8, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarJumpOut::FinishAnimCarJumpOutCB, this);
}


// ============================================================

// Address: 0x503a3c
// Original: _ZN21CTaskSimpleCarJumpOut13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarJumpOut::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarJumpOut::ComputeAnimID(CTaskSimpleCarJumpOut *this, int *a2, int *a3)
{
  unsigned int v4; // r1
  int v5; // r1
  int result; // r0

  v4 = *((_DWORD *)this + 6) - 8;
  if ( v4 >= 4 )
  {
    v5 = *a3;
  }
  else
  {
    v5 = dword_503A74[v4];
    *a3 = v5;
  }
  result = CVehicleAnimGroup::GetGroup(
             (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                            * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                 + 222)],
             v5);
  *a2 = result;
  return result;
}


// ============================================================

// Address: 0x503a88
// Original: _ZN21CTaskSimpleCarJumpOut14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarJumpOut::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarJumpOut::SetPedPosition(CTaskSimpleCarJumpOut *this, CPed *a2)
{
  int v5; // r0
  float *v6; // r8
  float *v7; // r2
  double v8; // d16
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  float v12; // s0
  int v13; // r0
  int v14; // r1
  double v15; // [sp+0h] [bp-20h] BYREF
  float v16; // [sp+8h] [bp-18h]

  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    return 0;
  CPed::SetPedPositionInCar(a2);
  if ( *((_DWORD *)this + 3) )
  {
    v5 = *((_DWORD *)a2 + 5);
    v6 = (float *)((char *)a2 + 4);
    v7 = (float *)((char *)a2 + 4);
    if ( v5 )
      v7 = (float *)(v5 + 48);
    v8 = *(double *)v7;
    v16 = v7[2];
    v15 = v8;
    CWorld::pIgnoreEntity = *((_DWORD *)this + 4);
    CPedPlacement::FindZCoorForPed((CPedPlacement *)&v15, (CVector *)&CWorld::pIgnoreEntity);
    CWorld::pIgnoreEntity = 0;
    v9 = *((_DWORD *)this + 4);
    v10 = *(_DWORD *)(v9 + 1440);
    v11 = v10 == 9;
    if ( v10 != 9 )
      v11 = *(_DWORD *)(v9 + 1444) == 2;
    if ( v11 )
      v12 = 0.27;
    else
      v12 = 0.07;
    v13 = *((_DWORD *)this + 3);
    if ( v13 && (*(__int16 *)(v13 + 44) & 0xFFFFFFFE) == 0x180 )
    {
      v14 = *((_DWORD *)a2 + 5);
      if ( v14 )
        v6 = (float *)(v14 + 48);
      if ( v16 > v6[2] )
        *(float *)(v14 + 56) = *(float *)(v14 + 56)
                             + (float)((float)(v16 - *(float *)(v14 + 56)) * (float)(*(float *)(v13 + 32) / v12));
    }
  }
  return 1;
}


// ============================================================

// Address: 0x503b5c
// Original: _ZN21CTaskSimpleCarJumpOut22FinishAnimCarJumpOutCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarJumpOut::FinishAnimCarJumpOutCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarJumpOut::FinishAnimCarJumpOutCB(
        CTaskSimpleCarJumpOut *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x506f64
// Original: _ZNK21CTaskSimpleCarJumpOut5CloneEv
// Demangled: CTaskSimpleCarJumpOut::Clone(void)
int __fastcall CTaskSimpleCarJumpOut::Clone(CTaskSimpleCarJumpOut *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  int v5; // r8
  int v6; // r6
  float *v7; // r0

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = v5;
  *(_BYTE *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 29) = 0;
  *(_DWORD *)(v3 + 32) = v6;
  *(_DWORD *)v3 = &off_66B2E0;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
    v7 = *(float **)(v3 + 16);
    *(float *)(v3 + 20) = sqrtf((float)((float)(v7[18] * v7[18]) + (float)(v7[19] * v7[19])) + (float)(v7[20] * v7[20]));
  }
  return v3;
}


// ============================================================

// Address: 0x506fe4
// Original: _ZNK21CTaskSimpleCarJumpOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarJumpOut::GetTaskType(void)
int __fastcall CTaskSimpleCarJumpOut::GetTaskType(CTaskSimpleCarJumpOut *this)
{
  return 814;
}


// ============================================================
