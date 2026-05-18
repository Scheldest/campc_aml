
// Address: 0x1936e0
// Original: j__ZN33CTaskSimpleCarOpenDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *,bool)
// attributes: thunk
void __fastcall CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(
        CTaskSimpleCarOpenDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4,
        bool a5)
{
  _ZN33CTaskSimpleCarOpenDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x500ac8
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *,bool)
void __fastcall CTaskSimpleCarOpenDoorFromOutside::CTaskSimpleCarOpenDoorFromOutside(
        CTaskSimpleCarOpenDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4,
        bool a5)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_BYTE *)this + 24) = a5;
  *((_BYTE *)this + 25) = 0;
  *((_DWORD *)this + 7) = a4;
  *((_DWORD *)this + 8) = 0;
  *(_DWORD *)this = &off_66B03C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x500b18
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutsideD2Ev
// Demangled: CTaskSimpleCarOpenDoorFromOutside::~CTaskSimpleCarOpenDoorFromOutside()
void __fastcall CTaskSimpleCarOpenDoorFromOutside::~CTaskSimpleCarOpenDoorFromOutside(
        CTaskSimpleCarOpenDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  int PlayerPed; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B03C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  if ( *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = 0;
    PlayerPed = FindPlayerPed(-1);
    *(_DWORD *)(PlayerPed + 1164) |= 0x4000000u;
  }
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x500b74
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutsideD0Ev
// Demangled: CTaskSimpleCarOpenDoorFromOutside::~CTaskSimpleCarOpenDoorFromOutside()
void __fastcall CTaskSimpleCarOpenDoorFromOutside::~CTaskSimpleCarOpenDoorFromOutside(
        CTaskSimpleCarOpenDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  int PlayerPed; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B03C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v4 )
    CAnimBlendAssociation::SetFinishCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  if ( *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = 0;
    PlayerPed = FindPlayerPed(-1);
    *(_DWORD *)(PlayerPed + 1164) |= 0x4000000u;
  }
  CTask::~CTask(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x500bd4
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutside13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarOpenDoorFromOutside::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::MakeAbortable(
        CTaskSimpleCarOpenDoorFromOutside *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int Group; // r0
  int PlayerPed; // r0

  if ( a3 != 2 )
    return 0;
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
    *(_DWORD *)(v6 + 28) = -998637568;
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 5) - 8;
    if ( v8 > 2 )
      v9 = 357;
    else
      v9 = dword_61E6A8[v8];
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(v7 + 904)
                                                                                                  + 222)],
              v9);
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, int))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      Group,
      v9,
      1065353216);
  }
  if ( *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = 0;
    PlayerPed = FindPlayerPed(-1);
    *(_DWORD *)(PlayerPed + 1164) |= 0x4000000u;
  }
  return 1;
}


// ============================================================

// Address: 0x500c70
// Original: _ZNK33CTaskSimpleCarOpenDoorFromOutside13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarOpenDoorFromOutside::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::ComputeAnimID(
        CTaskSimpleCarOpenDoorFromOutside *this,
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
    v5 = dword_500CA8[v4];
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

// Address: 0x500cbc
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutside10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarOpenDoorFromOutside::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::ProcessPed(CTaskSimpleCarOpenDoorFromOutside *this, CPed *a2)
{
  int v4; // r5
  _DWORD *v6; // r0
  __int16 v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r6
  unsigned int v11; // r0
  int v12; // r6
  int Group; // r0
  int v14; // r0
  CAnimBlendAssociation *v15; // r0
  CPed *v16; // r0
  bool v17; // zf
  _DWORD *v18; // r0
  int v19; // r2
  unsigned int v20; // r3
  int v21; // r6
  __int64 v22; // kr00_8
  float v23; // s0
  float v24; // s2
  int v25; // r0
  float v26; // s0
  int v27; // r2
  int v28; // r3
  float v29; // s2

  if ( *((_BYTE *)this + 8) )
    return 1;
  v6 = (_DWORD *)*((_DWORD *)this + 4);
  if ( !v6 )
    return 1;
  v7 = *(unsigned __int8 *)(v6[226] + 222);
  if ( (CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(v6[226] + 222) + 4] & 0x40) != 0 )
  {
    v11 = *((_DWORD *)this + 5) - 8;
    if ( v11 > 2 )
      v12 = 357;
    else
      v12 = dword_61E6A8[v11];
    Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v7], v12);
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, int))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      Group,
      v12,
      1065353216);
    return 1;
  }
  if ( !*((_DWORD *)this + 3) )
  {
    v8 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v6 + 140))(v6, *((_DWORD *)this + 5));
    v9 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 8) = v8;
    if ( (unsigned int)(v9 - 8) > 2 )
      v10 = 357;
    else
      v10 = dword_61E6A8[v9 - 8];
    v14 = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v10);
    v15 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v14, v10);
    *((_DWORD *)this + 3) = v15;
    CAnimBlendAssociation::SetFinishCallback(
      v15,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarOpenDoorFromOutside::FinishAnimCarOpenDoorFromOutsideCB,
      this);
    v16 = (CPed *)*((_DWORD *)this + 4);
    v17 = v16 == 0;
    if ( v16 )
    {
      v16 = (CPed *)*((_DWORD *)v16 + 281);
      v17 = v16 == 0;
    }
    if ( !v17 && CPed::IsPlayer(v16) == 1 && *((_BYTE *)this + 24) && *((_DWORD *)a2 + 359) == 6 )
    {
      v18 = *(_DWORD **)(*((_DWORD *)this + 4) + 1124);
      v19 = v18[290];
      v20 = v18[291] & 0xFBFFFFFF;
      v21 = v18[292];
      v18[289] = v18[289];
      v18[290] = v19;
      v18[291] = v20;
      v18[292] = v21;
      *((_BYTE *)this + 25) = 1;
    }
  }
  v22 = *(_QWORD *)((char *)this + 12);
  v23 = *(float *)(v22 + 32);
  v24 = *(float *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                            * *(unsigned __int8 *)(*(_DWORD *)(HIDWORD(v22) + 904) + 222)
                                                            + 16];
  if ( v23 >= v24 || *(_DWORD *)(HIDWORD(v22) + 1440) )
  {
    v25 = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(HIDWORD(v22) + 904)
                                                                                                + 222)],
            *(__int16 *)(v22 + 44));
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, _DWORD, _DWORD))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      v25,
      *(__int16 *)(*((_DWORD *)this + 3) + 44),
      *(_DWORD *)(*((_DWORD *)this + 3) + 32));
    return 0;
  }
  else
  {
    v26 = v23 / v24;
    v27 = *((_DWORD *)this + 5);
    if ( (unsigned int)(v27 - 8) > 3 )
      v28 = 2;
    else
      v28 = dword_500EA8[v27 - 8];
    v29 = *((float *)this + 8);
    v4 = 0;
    (*(void (__fastcall **)(_DWORD, CPed *, int, int, _DWORD, _DWORD))(*(_DWORD *)HIDWORD(v22) + 112))(
      HIDWORD(v22),
      a2,
      v27,
      v28,
      (float)(1.0 - v26) * v29,
      0);
  }
  return v4;
}


// ============================================================

// Address: 0x500eb8
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutside9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarOpenDoorFromOutside::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::StartAnim(CTaskSimpleCarOpenDoorFromOutside *this, const CPed *a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int Group; // r0
  CAnimBlendAssociation *v7; // r0

  v4 = *((_DWORD *)this + 5) - 8;
  if ( v4 > 2 )
    v5 = 357;
  else
    v5 = dword_61E6A8[v4];
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v5);
  v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v7;
  return sub_18C20C(
           v7,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarOpenDoorFromOutside::FinishAnimCarOpenDoorFromOutsideCB,
           this);
}


// ============================================================

// Address: 0x500f28
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutside14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarOpenDoorFromOutside::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[7], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x500f3c
// Original: _ZN33CTaskSimpleCarOpenDoorFromOutside34FinishAnimCarOpenDoorFromOutsideCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarOpenDoorFromOutside::FinishAnimCarOpenDoorFromOutsideCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::FinishAnimCarOpenDoorFromOutsideCB(
        CTaskSimpleCarOpenDoorFromOutside *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r5
  int result; // r0
  int Group; // r0

  *((_BYTE *)a2 + 8) = 1;
  v4 = *((_DWORD *)a2 + 5);
  *((_DWORD *)a2 + 3) = 0;
  v5 = v4 - 8;
  if ( v5 > 2 )
    v6 = 357;
  else
    v6 = dword_61E6A8[v5];
  result = *((_DWORD *)a2 + 4);
  if ( result )
  {
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(result + 904)
                                                                                                  + 222)],
              v6);
    return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, int, int, int))(**((_DWORD **)a2 + 4) + 116))(
             *((_DWORD *)a2 + 4),
             0,
             *((_DWORD *)a2 + 5),
             Group,
             v6,
             1065353216);
  }
  return result;
}


// ============================================================

// Address: 0x506b14
// Original: _ZNK33CTaskSimpleCarOpenDoorFromOutside5CloneEv
// Demangled: CTaskSimpleCarOpenDoorFromOutside::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarOpenDoorFromOutside::Clone(
        CTaskSimpleCarOpenDoorFromOutside *this,
        unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r9

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *((_DWORD *)this + 7);
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 5) = HIDWORD(v4);
  *((_BYTE *)v5 + 24) = (_BYTE)this;
  *((_BYTE *)v5 + 25) = 0;
  *((_DWORD *)v5 + 7) = v6;
  *((_DWORD *)v5 + 8) = 0;
  *(_DWORD *)v5 = &off_66B03C;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506b70
// Original: _ZNK33CTaskSimpleCarOpenDoorFromOutside11GetTaskTypeEv
// Demangled: CTaskSimpleCarOpenDoorFromOutside::GetTaskType(void)
int __fastcall CTaskSimpleCarOpenDoorFromOutside::GetTaskType(CTaskSimpleCarOpenDoorFromOutside *this)
{
  return 802;
}


// ============================================================
