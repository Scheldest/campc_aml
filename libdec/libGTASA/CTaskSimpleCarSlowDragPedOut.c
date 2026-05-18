
// Address: 0x19b640
// Original: j__ZN28CTaskSimpleCarSlowDragPedOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarSlowDragPedOut::CTaskSimpleCarSlowDragPedOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *,bool)
// attributes: thunk
void __fastcall CTaskSimpleCarSlowDragPedOut::CTaskSimpleCarSlowDragPedOut(
        CTaskSimpleCarSlowDragPedOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4,
        bool a5)
{
  _ZN28CTaskSimpleCarSlowDragPedOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x504064
// Original: _ZN28CTaskSimpleCarSlowDragPedOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarSlowDragPedOut::CTaskSimpleCarSlowDragPedOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *,bool)
void __fastcall CTaskSimpleCarSlowDragPedOut::CTaskSimpleCarSlowDragPedOut(
        CTaskSimpleCarSlowDragPedOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4,
        bool a5)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_BYTE *)this + 28) = a5;
  *(_DWORD *)this = &off_66B37C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5040b0
// Original: _ZN28CTaskSimpleCarSlowDragPedOutD2Ev
// Demangled: CTaskSimpleCarSlowDragPedOut::~CTaskSimpleCarSlowDragPedOut()
void __fastcall CTaskSimpleCarSlowDragPedOut::~CTaskSimpleCarSlowDragPedOut(CTaskSimpleCarSlowDragPedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B37C;
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

// Address: 0x5040f0
// Original: _ZN28CTaskSimpleCarSlowDragPedOutD0Ev
// Demangled: CTaskSimpleCarSlowDragPedOut::~CTaskSimpleCarSlowDragPedOut()
void __fastcall CTaskSimpleCarSlowDragPedOut::~CTaskSimpleCarSlowDragPedOut(CTaskSimpleCarSlowDragPedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B37C;
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

// Address: 0x504134
// Original: _ZN28CTaskSimpleCarSlowDragPedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSlowDragPedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSlowDragPedOut::MakeAbortable(
        CTaskSimpleCarSlowDragPedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r6
  int Group; // r0

  if ( a3 != 2 )
    return 0;
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
    *(_DWORD *)(v6 + 28) = -998637568;
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 5);
    if ( (unsigned int)(v8 - 10) >= 2 )
    {
      if ( v8 == 18 )
        v9 = 366;
      else
        v9 = 365;
    }
    else
    {
      v9 = 364;
    }
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
  return 1;
}


// ============================================================

// Address: 0x5041b8
// Original: _ZNK28CTaskSimpleCarSlowDragPedOut13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarSlowDragPedOut::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarSlowDragPedOut::ComputeAnimID(CTaskSimpleCarSlowDragPedOut *this, int *a2, int *a3)
{
  unsigned int v4; // r1
  int v5; // r1
  int result; // r0

  v4 = *((_DWORD *)this + 5) - 8;
  if ( v4 < 0xB && 0x40Fu >> v4 << 31 )
  {
    v5 = dword_504200[v4];
    *a3 = v5;
  }
  else
  {
    v5 = *a3;
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

// Address: 0x504230
// Original: _ZN28CTaskSimpleCarSlowDragPedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSlowDragPedOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSlowDragPedOut::ProcessPed(CTaskSimpleCarSlowDragPedOut *this, CPed *a2)
{
  __int64 v4; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int Group; // r0
  CAnimBlendAssociation *v12; // r0
  int v13; // r2
  CCarEnterExit *v14; // r0
  const CVehicle *v15; // r1
  CCarEnterExit *v16; // r0
  int v17; // r8
  unsigned int v18; // r6
  CAEVehicleAudioEntity *v19; // r9
  int VehicleTypeForAudio; // r0
  unsigned __int16 v21; // r1
  unsigned __int16 v22; // r1
  CAEVehicleAudioEntity *v23; // r6
  unsigned __int16 v24; // r1
  int v25; // r0
  CPed *v26; // r0
  int IsPedFemaleForAudio; // r0

  if ( *((_BYTE *)this + 8) )
    goto LABEL_2;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    goto LABEL_2;
  HIDWORD(v4) = *(unsigned __int8 *)(*(_DWORD *)(v5 + 904) + 222);
  LODWORD(v4) = 1;
  v6 = HIDWORD(v4) == 15;
  if ( HIDWORD(v4) != 15 )
    v6 = HIDWORD(v4) == 24;
  if ( !v6 )
  {
    LODWORD(v4) = *((_DWORD *)this + 5);
    if ( v4 != 0x1000000008LL )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        if ( (unsigned int)(v4 - 10) >= 2 )
          v10 = (_DWORD)v4 == 18 ? 366 : 365;
        else
          v10 = 364;
        Group = CVehicleAnimGroup::GetGroup(
                  (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * SWORD2(v4)],
                  v10);
        v12 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v10);
        *((_DWORD *)this + 3) = v12;
        CAnimBlendAssociation::SetFinishCallback(
          v12,
          (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarSlowDragPedOut::FinishAnimCarSlowDragPedOutCB,
          this);
        v14 = (CCarEnterExit *)*((_DWORD *)this + 4);
        if ( v14 )
        {
          v15 = (const CVehicle *)*((_DWORD *)this + 5);
          v16 = v15 == (const CVehicle *)&byte_9[1]
              ? (CCarEnterExit *)((char *)v14 + 1124)
              : (CCarEnterExit *)(*((_DWORD *)this + 4)
                                + 4 * CCarEnterExit::ComputePassengerIndexFromCarDoor(v14, v15, v13)
                                + 1128);
          v17 = *(_DWORD *)v16;
          if ( *(_DWORD *)v16 )
          {
            v18 = rand() & 0x3FF;
            v19 = (CAEVehicleAudioEntity *)(*((_DWORD *)this + 4) + 316);
            VehicleTypeForAudio = CAEVehicleAudioEntity::GetVehicleTypeForAudio(v19);
            if ( v18 <= 0x200 )
            {
              v22 = 119;
              if ( !VehicleTypeForAudio )
                v22 = 118;
              if ( (unsigned __int16)CPed::Say((CPed *)v17, v22, 0, 1.0, 0, 0, 0) != 0xFFFF )
                goto LABEL_10;
              v23 = (CAEVehicleAudioEntity *)(*((_DWORD *)this + 4) + 316);
              if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v23) == 1 )
              {
                v24 = 121;
              }
              else if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v23) )
              {
                v24 = 124;
              }
              else
              {
                IsPedFemaleForAudio = CAEPedSpeechAudioEntity::IsPedFemaleForAudio((CAEPedSpeechAudioEntity *)(v17 + 664));
                v24 = 122;
                if ( !IsPedFemaleForAudio )
                  v24 = 123;
              }
              v26 = a2;
            }
            else
            {
              if ( VehicleTypeForAudio == 1 )
              {
                v21 = 121;
              }
              else if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v19) )
              {
                v21 = 124;
              }
              else
              {
                v25 = CAEPedSpeechAudioEntity::IsPedFemaleForAudio((CAEPedSpeechAudioEntity *)(v17 + 664));
                v21 = 122;
                if ( !v25 )
                  v21 = 123;
              }
              if ( (unsigned __int16)CPed::Say(a2, v21, 0, 1.0, 0, 0, 0) != 0xFFFF )
                goto LABEL_10;
              v6 = CAEVehicleAudioEntity::GetVehicleTypeForAudio((CAEVehicleAudioEntity *)(*((_DWORD *)this + 4) + 316)) == 0;
              v24 = 119;
              v26 = (CPed *)v17;
              if ( v6 )
                v24 = 118;
            }
            CPed::Say(v26, v24, 0, 1.0, 0, 0, 0);
          }
        }
      }
LABEL_10:
      v7 = *((_DWORD *)this + 5);
      if ( (unsigned int)(v7 - 10) >= 2 )
      {
        if ( v7 == 18 )
          v8 = 366;
        else
          v8 = 365;
      }
      else
      {
        v8 = 364;
      }
      v9 = CVehicleAnimGroup::GetGroup(
             (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                            * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                 + 222)],
             v8);
      (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 4) + 116))(
        *((_DWORD *)this + 4),
        a2,
        *((_DWORD *)this + 5),
        v9,
        v8,
        *(_DWORD *)(*((_DWORD *)this + 3) + 32));
      LODWORD(v4) = 0;
      return v4;
    }
LABEL_2:
    LODWORD(v4) = 1;
  }
  return v4;
}


// ============================================================

// Address: 0x504438
// Original: _ZN28CTaskSimpleCarSlowDragPedOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarSlowDragPedOut::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarSlowDragPedOut::StartAnim(CTaskSimpleCarSlowDragPedOut *this, const CPed *a2)
{
  int v4; // r0
  int v5; // r6
  int Group; // r0
  CAnimBlendAssociation *v7; // r0

  v4 = *((_DWORD *)this + 5);
  if ( (unsigned int)(v4 - 10) >= 2 )
  {
    if ( v4 == 18 )
      v5 = 366;
    else
      v5 = 365;
  }
  else
  {
    v5 = 364;
  }
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v5);
  v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v7;
  return sub_18C20C(
           v7,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarSlowDragPedOut::FinishAnimCarSlowDragPedOutCB,
           this);
}


// ============================================================

// Address: 0x504554
// Original: _ZN28CTaskSimpleCarSlowDragPedOut14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarSlowDragPedOut::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarSlowDragPedOut::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[6], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x504568
// Original: _ZN28CTaskSimpleCarSlowDragPedOut29FinishAnimCarSlowDragPedOutCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarSlowDragPedOut::FinishAnimCarSlowDragPedOutCB(CAnimBlendAssociation *,void *)
_DWORD *__fastcall CTaskSimpleCarSlowDragPedOut::FinishAnimCarSlowDragPedOutCB(
        CTaskSimpleCarSlowDragPedOut *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  _DWORD *result; // r0
  int v5; // r1
  int v6; // r6
  int Group; // r0
  int DoorStatus; // r0

  *((_DWORD *)a2 + 3) = 0;
  result = (_DWORD *)*((_DWORD *)a2 + 4);
  *((_BYTE *)a2 + 8) = 1;
  if ( result )
  {
    v5 = *((_DWORD *)a2 + 5);
    if ( (unsigned int)(v5 - 10) >= 2 )
    {
      if ( v5 == 18 )
        v6 = 366;
      else
        v6 = 365;
    }
    else
    {
      v6 = 364;
    }
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(result[226] + 222)],
              v6);
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int, int, int))(**((_DWORD **)a2 + 4) + 116))(
      *((_DWORD *)a2 + 4),
      0,
      *((_DWORD *)a2 + 5),
      Group,
      v6,
      1065353216);
    result = (_DWORD *)*((_DWORD *)a2 + 4);
    if ( result )
    {
      if ( !result[360] )
      {
        if ( !CDamageManager::GetDoorStatus((CDamageManager *)(result + 365), *((_DWORD *)a2 + 5))
          || (result = (_DWORD *)CDamageManager::GetDoorStatus(
                                   (CDamageManager *)(*((_DWORD *)a2 + 4) + 1460),
                                   *((_DWORD *)a2 + 5)),
              result == (int *)((char *)&stderr + 2)) )
        {
          DoorStatus = CDamageManager::GetDoorStatus(
                         (CDamageManager *)(*((_DWORD *)a2 + 4) + 1460),
                         *((_DWORD *)a2 + 5));
          return (_DWORD *)j_CDamageManager::SetDoorStatus(
                             (CDamageManager *)(*((_DWORD *)a2 + 4) + 1460),
                             *((_DWORD *)a2 + 5),
                             DoorStatus + 1);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5070b4
// Original: _ZNK28CTaskSimpleCarSlowDragPedOut5CloneEv
// Demangled: CTaskSimpleCarSlowDragPedOut::Clone(void)
int __fastcall CTaskSimpleCarSlowDragPedOut::Clone(CTaskSimpleCarSlowDragPedOut *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *(_QWORD *)((char *)this + 20);
  LOBYTE(this) = *((_BYTE *)this + 28);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 20) = v5;
  *(_BYTE *)(v3 + 28) = (_BYTE)this;
  *(_DWORD *)v3 = &off_66B37C;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x507108
// Original: _ZNK28CTaskSimpleCarSlowDragPedOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarSlowDragPedOut::GetTaskType(void)
int __fastcall CTaskSimpleCarSlowDragPedOut::GetTaskType(CTaskSimpleCarSlowDragPedOut *this)
{
  return 820;
}


// ============================================================
