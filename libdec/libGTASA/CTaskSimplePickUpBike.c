
// Address: 0x192190
// Original: j__ZN21CTaskSimplePickUpBikeC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimplePickUpBike::CTaskSimplePickUpBike(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimplePickUpBike::CTaskSimplePickUpBike(
        CTaskSimplePickUpBike *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN21CTaskSimplePickUpBikeC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x501188
// Original: _ZN21CTaskSimplePickUpBikeC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimplePickUpBike::CTaskSimplePickUpBike(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimplePickUpBike::CTaskSimplePickUpBike(
        CTaskSimplePickUpBike *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B0A4;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5011d0
// Original: _ZN21CTaskSimplePickUpBikeD2Ev
// Demangled: CTaskSimplePickUpBike::~CTaskSimplePickUpBike()
void __fastcall CTaskSimplePickUpBike::~CTaskSimplePickUpBike(CTaskSimplePickUpBike *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B0A4;
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

// Address: 0x501210
// Original: _ZN21CTaskSimplePickUpBikeD0Ev
// Demangled: CTaskSimplePickUpBike::~CTaskSimplePickUpBike()
void __fastcall CTaskSimplePickUpBike::~CTaskSimplePickUpBike(CTaskSimplePickUpBike *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B0A4;
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

// Address: 0x501254
// Original: _ZN21CTaskSimplePickUpBike13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimplePickUpBike::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimplePickUpBike::MakeAbortable(CTaskSimplePickUpBike *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r1

  if ( a3 != 2 )
    return 0;
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
    *(_DWORD *)(v5 + 28) = -998637568;
  *(_BYTE *)(*((_DWORD *)this + 4) + 1576) &= ~8u;
  return 1;
}


// ============================================================

// Address: 0x50127c
// Original: _ZN21CTaskSimplePickUpBike10ProcessPedEP4CPed
// Demangled: CTaskSimplePickUpBike::ProcessPed(CPed *)
int __fastcall CTaskSimplePickUpBike::ProcessPed(CTaskSimplePickUpBike *this, CPed *a2)
{
  int v5; // r0
  int v6; // r6
  float v7; // s0
  int v8; // r1
  CVehicleAnimGroup *v9; // r0
  int Group; // r0
  CAnimBlendAssociation *v11; // r0
  int v12; // r0
  int v13; // r1

  if ( *((_BYTE *)this + 8) )
    return 1;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    v6 = 354;
    v7 = *(float *)(*(_DWORD *)(v5 + 20) + 8);
    v8 = 353;
    v9 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                        * *(unsigned __int8 *)(*(_DWORD *)(v5 + 904)
                                                                                             + 222)];
    if ( v7 > 0.0 )
      v8 = 351;
    if ( v7 < 0.0 )
      v6 = 352;
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v6 = v8;
    Group = CVehicleAnimGroup::GetGroup(v9, v6);
    v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v6);
    *((_DWORD *)this + 3) = v11;
    CAnimBlendAssociation::SetFinishCallback(
      v11,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimplePickUpBike::FinishAnimPickUpBikeCB,
      this);
    v5 = *((_DWORD *)this + 4);
  }
  if ( (*(_BYTE *)(v5 + 1576) & 8) == 0 )
  {
    v12 = *((_DWORD *)this + 3);
    if ( v12 )
    {
      if ( (v13 = *(__int16 *)(v12 + 44), (unsigned int)(v13 - 351) <= 1) && *(float *)(v12 + 32) > 0.4667
        || (unsigned int)(v13 - 353) <= 1 && *(float *)(v12 + 32) > 0.4667 )
      {
        *(_BYTE *)(*((_DWORD *)this + 4) + 1576) |= 8u;
      }
    }
  }
  return 0;
}


// ============================================================

// Address: 0x501378
// Original: _ZN21CTaskSimplePickUpBike9StartAnimEPK4CPed
// Demangled: CTaskSimplePickUpBike::StartAnim(CPed const*)
int __fastcall CTaskSimplePickUpBike::StartAnim(CTaskSimplePickUpBike *this, const CPed *a2)
{
  __int64 v4; // r0
  int v5; // r6
  unsigned int v6; // r1
  float v7; // s0
  int v8; // r2
  CVehicleAnimGroup *v9; // r0
  int Group; // r0
  CAnimBlendAssociation *v11; // r0

  v4 = *((_QWORD *)this + 2);
  v5 = 354;
  v6 = HIDWORD(v4) & 0xFFFFFFFE;
  v7 = *(float *)(*(_DWORD *)(v4 + 20) + 8);
  v8 = 353;
  v9 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                      * *(unsigned __int8 *)(*(_DWORD *)(v4 + 904) + 222)];
  if ( v7 > 0.0 )
    v8 = 351;
  if ( v7 < 0.0 )
    v5 = 352;
  if ( v6 == 10 )
    v5 = v8;
  Group = CVehicleAnimGroup::GetGroup(v9, v5);
  v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v11;
  return sub_18C20C(v11, (void (*)(CAnimBlendAssociation *, void *))CTaskSimplePickUpBike::FinishAnimPickUpBikeCB, this);
}


// ============================================================

// Address: 0x501408
// Original: _ZN21CTaskSimplePickUpBike14SetPedPositionEP4CPed
// Demangled: CTaskSimplePickUpBike::SetPedPosition(CPed *)
int __fastcall CTaskSimplePickUpBike::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[6], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x50141a
// Original: _ZN21CTaskSimplePickUpBike22FinishAnimPickUpBikeCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimplePickUpBike::FinishAnimPickUpBikeCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimplePickUpBike::FinishAnimPickUpBikeCB(
        CTaskSimplePickUpBike *this,
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

// Address: 0x506bd0
// Original: _ZNK21CTaskSimplePickUpBike5CloneEv
// Demangled: CTaskSimplePickUpBike::Clone(void)
CTaskSimple *__fastcall CTaskSimplePickUpBike::Clone(CTaskSimplePickUpBike *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *((_DWORD *)this + 6);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 5) = HIDWORD(v4);
  *((_DWORD *)v5 + 6) = v6;
  *(_DWORD *)v5 = &off_66B0A4;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506c20
// Original: _ZNK21CTaskSimplePickUpBike11GetTaskTypeEv
// Demangled: CTaskSimplePickUpBike::GetTaskType(void)
int __fastcall CTaskSimplePickUpBike::GetTaskType(CTaskSimplePickUpBike *this)
{
  return 804;
}


// ============================================================
