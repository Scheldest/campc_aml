
// Address: 0x1969a8
// Original: j__ZN39CTaskSimpleCarOpenLockedDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN39CTaskSimpleCarOpenLockedDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x500fa0
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::CTaskSimpleCarOpenLockedDoorFromOutside(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B070;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x500fe8
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutsideD2Ev
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::~CTaskSimpleCarOpenLockedDoorFromOutside()
void __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::~CTaskSimpleCarOpenLockedDoorFromOutside(
        CTaskSimpleCarOpenLockedDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B070;
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

// Address: 0x501028
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutsideD0Ev
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::~CTaskSimpleCarOpenLockedDoorFromOutside()
void __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::~CTaskSimpleCarOpenLockedDoorFromOutside(
        CTaskSimpleCarOpenLockedDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B070;
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

// Address: 0x50106c
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutside13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::MakeAbortable(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v5; // r0

  if ( a3 != 2 )
    return 0;
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
    *(_DWORD *)(v5 + 28) = -998637568;
  return 1;
}


// ============================================================

// Address: 0x501088
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutside10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::ProcessPed(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        CPed *a2)
{
  int v5; // r0
  int v6; // r6
  CVehicleAnimGroup *v7; // r0
  int Group; // r0
  CAnimBlendAssociation *v9; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    v6 = 390;
    v7 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                        * *(unsigned __int8 *)(*(_DWORD *)(v5 + 904)
                                                                                             + 222)];
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v6 = 389;
    Group = CVehicleAnimGroup::GetGroup(v7, v6);
    v9 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v6);
    *((_DWORD *)this + 3) = v9;
    CAnimBlendAssociation::SetFinishCallback(
      v9,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarOpenLockedDoorFromOutside::FinishAnimCarOpenLockedDoorFromOutsideCB,
      this);
  }
  return 0;
}


// ============================================================

// Address: 0x501104
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutside9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::StartAnim(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        const CPed *a2)
{
  __int64 v4; // r0
  int v5; // r6
  __int16 v6; // r0
  int Group; // r0
  CAnimBlendAssociation *v8; // r0

  v4 = *((_QWORD *)this + 2);
  v5 = 390;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 904) + 222);
  if ( (HIDWORD(v4) & 0xFFFFFFFE) == 0xA )
    v5 = 389;
  Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v5);
  v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v8;
  return sub_18C20C(
           v8,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarOpenLockedDoorFromOutside::FinishAnimCarOpenLockedDoorFromOutsideCB,
           this);
}


// ============================================================

// Address: 0x50116c
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutside14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[6], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x50117e
// Original: _ZN39CTaskSimpleCarOpenLockedDoorFromOutside40FinishAnimCarOpenLockedDoorFromOutsideCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::FinishAnimCarOpenLockedDoorFromOutsideCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::FinishAnimCarOpenLockedDoorFromOutsideCB(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
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

// Address: 0x506b78
// Original: _ZNK39CTaskSimpleCarOpenLockedDoorFromOutside5CloneEv
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarOpenLockedDoorFromOutside::Clone(
        CTaskSimpleCarOpenLockedDoorFromOutside *this,
        unsigned int a2)
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
  *(_DWORD *)v5 = &off_66B070;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506bc8
// Original: _ZNK39CTaskSimpleCarOpenLockedDoorFromOutside11GetTaskTypeEv
// Demangled: CTaskSimpleCarOpenLockedDoorFromOutside::GetTaskType(void)
int __fastcall CTaskSimpleCarOpenLockedDoorFromOutside::GetTaskType(CTaskSimpleCarOpenLockedDoorFromOutside *this)
{
  return 803;
}


// ============================================================
