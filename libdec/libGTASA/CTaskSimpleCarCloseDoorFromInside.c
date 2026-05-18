
// Address: 0x198ab8
// Original: j__ZN33CTaskSimpleCarCloseDoorFromInsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarCloseDoorFromInside::CTaskSimpleCarCloseDoorFromInside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarCloseDoorFromInside::CTaskSimpleCarCloseDoorFromInside(
        CTaskSimpleCarCloseDoorFromInside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN33CTaskSimpleCarCloseDoorFromInsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x501424
// Original: _ZN33CTaskSimpleCarCloseDoorFromInsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarCloseDoorFromInside::CTaskSimpleCarCloseDoorFromInside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarCloseDoorFromInside::CTaskSimpleCarCloseDoorFromInside(
        CTaskSimpleCarCloseDoorFromInside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B0D8;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x50146c
// Original: _ZN33CTaskSimpleCarCloseDoorFromInsideD2Ev
// Demangled: CTaskSimpleCarCloseDoorFromInside::~CTaskSimpleCarCloseDoorFromInside()
void __fastcall CTaskSimpleCarCloseDoorFromInside::~CTaskSimpleCarCloseDoorFromInside(
        CTaskSimpleCarCloseDoorFromInside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B0D8;
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

// Address: 0x5014ac
// Original: _ZN33CTaskSimpleCarCloseDoorFromInsideD0Ev
// Demangled: CTaskSimpleCarCloseDoorFromInside::~CTaskSimpleCarCloseDoorFromInside()
void __fastcall CTaskSimpleCarCloseDoorFromInside::~CTaskSimpleCarCloseDoorFromInside(
        CTaskSimpleCarCloseDoorFromInside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B0D8;
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

// Address: 0x5014f0
// Original: _ZN33CTaskSimpleCarCloseDoorFromInside13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarCloseDoorFromInside::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarCloseDoorFromInside::MakeAbortable(
        CTaskSimpleCarCloseDoorFromInside *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int Group; // r0

  if ( a3 == 2 )
  {
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
      *(_DWORD *)(v6 + 28) = -998637568;
    v7 = *((_DWORD *)this + 4);
    if ( v7 )
    {
      v8 = *((_DWORD *)this + 5) - 8;
      if ( v8 > 2 )
        v9 = 369;
      else
        v9 = dword_61E6B4[v8];
      Group = CVehicleAnimGroup::GetGroup(
                (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                               * *(unsigned __int8 *)(*(_DWORD *)(v7 + 904) + 222)],
                v9);
      (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, int))(**((_DWORD **)this + 4) + 116))(
        *((_DWORD *)this + 4),
        a2,
        *((_DWORD *)this + 5),
        Group,
        v9,
        1065353216);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x50156c
// Original: _ZNK33CTaskSimpleCarCloseDoorFromInside13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarCloseDoorFromInside::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarCloseDoorFromInside::ComputeAnimID(
        CTaskSimpleCarCloseDoorFromInside *this,
        int *a2,
        int *a3)
{
  unsigned int v4; // r1
  int v5; // r1
  int result; // r0

  v4 = *((_DWORD *)this + 5) - 8;
  if ( v4 >= 4 )
  {
    v5 = *a3;
  }
  else
  {
    v5 = dword_5015A4[v4];
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

// Address: 0x5015b8
// Original: _ZN33CTaskSimpleCarCloseDoorFromInside10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarCloseDoorFromInside::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarCloseDoorFromInside::ProcessPed(CTaskSimpleCarCloseDoorFromInside *this, CPed *a2)
{
  int v5; // r0
  __int16 v6; // r0
  int v7; // r1
  unsigned int v8; // r1
  int v9; // r6
  unsigned int v10; // r1
  int v11; // r6
  int Group; // r0
  int v13; // r0
  CAnimBlendAssociation *v14; // r0
  int v15; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 1;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(v5 + 904) + 222);
  if ( (CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6 + 4] & 2) != 0 )
  {
    v10 = *((_DWORD *)this + 5) - 8;
    if ( v10 > 2 )
      v11 = 369;
    else
      v11 = dword_61E6B4[v10];
    Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v11);
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, int))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      Group,
      v11,
      1065353216);
    return 1;
  }
  v7 = *((_DWORD *)this + 3);
  if ( !v7 )
  {
    if ( *((_DWORD *)a2 + 275) != 63 )
    {
      v8 = *((_DWORD *)this + 5) - 8;
      if ( v8 > 2 )
        v9 = 369;
      else
        v9 = dword_61E6B4[v8];
      v13 = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v9);
      v14 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v13, v9);
      *((_DWORD *)this + 3) = v14;
      CAnimBlendAssociation::SetFinishCallback(
        v14,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarCloseDoorFromInside::FinishAnimCarCloseDoorFromInsideCB,
        this);
      v7 = *((_DWORD *)this + 3);
      v6 = *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904) + 222);
      goto LABEL_15;
    }
    return 1;
  }
LABEL_15:
  v15 = CVehicleAnimGroup::GetGroup(
          (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6],
          *(__int16 *)(v7 + 44));
  (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 4) + 116))(
    *((_DWORD *)this + 4),
    a2,
    *((_DWORD *)this + 5),
    v15,
    *(__int16 *)(*((_DWORD *)this + 3) + 44),
    *(_DWORD *)(*((_DWORD *)this + 3) + 32));
  return 0;
}


// ============================================================

// Address: 0x5016e8
// Original: _ZN33CTaskSimpleCarCloseDoorFromInside9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarCloseDoorFromInside::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarCloseDoorFromInside::StartAnim(CTaskSimpleCarCloseDoorFromInside *this, const CPed *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int Group; // r0
  CAnimBlendAssociation *v7; // r0

  v4 = *((_DWORD *)this + 5) - 8;
  if ( v4 > 2 )
    v5 = 369;
  else
    v5 = dword_61E6B4[v4];
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v5);
  v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v7;
  return sub_18C20C(
           v7,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarCloseDoorFromInside::FinishAnimCarCloseDoorFromInsideCB,
           this);
}


// ============================================================

// Address: 0x501758
// Original: _ZN33CTaskSimpleCarCloseDoorFromInside14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarCloseDoorFromInside::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarCloseDoorFromInside::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[6], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x50176c
// Original: _ZN33CTaskSimpleCarCloseDoorFromInside34FinishAnimCarCloseDoorFromInsideCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarCloseDoorFromInside::FinishAnimCarCloseDoorFromInsideCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarCloseDoorFromInside::FinishAnimCarCloseDoorFromInsideCB(
        CTaskSimpleCarCloseDoorFromInside *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r5
  int Group; // r0
  int v8; // r0
  int result; // r0

  v4 = *((_DWORD *)a2 + 4);
  *((_BYTE *)a2 + 8) = 1;
  if ( v4 )
  {
    v5 = *((_DWORD *)a2 + 5) - 8;
    if ( v5 > 2 )
      v6 = 369;
    else
      v6 = dword_61E6B4[v5];
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(v4 + 904)
                                                                                                  + 222)],
              v6);
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int, int, int))(**((_DWORD **)a2 + 4) + 116))(
      *((_DWORD *)a2 + 4),
      0,
      *((_DWORD *)a2 + 5),
      Group,
      v6,
      1065353216);
  }
  v8 = *((_DWORD *)a2 + 3);
  if ( v8 )
    *(_DWORD *)(v8 + 28) = -998637568;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x506c28
// Original: _ZNK33CTaskSimpleCarCloseDoorFromInside5CloneEv
// Demangled: CTaskSimpleCarCloseDoorFromInside::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarCloseDoorFromInside::Clone(
        CTaskSimpleCarCloseDoorFromInside *this,
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
  *(_DWORD *)v5 = &off_66B0D8;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506c78
// Original: _ZNK33CTaskSimpleCarCloseDoorFromInside11GetTaskTypeEv
// Demangled: CTaskSimpleCarCloseDoorFromInside::GetTaskType(void)
int __fastcall CTaskSimpleCarCloseDoorFromInside::GetTaskType(CTaskSimpleCarCloseDoorFromInside *this)
{
  return 805;
}


// ============================================================
