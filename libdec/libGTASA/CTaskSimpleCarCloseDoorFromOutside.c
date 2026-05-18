
// Address: 0x1923e8
// Original: j__ZN34CTaskSimpleCarCloseDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
        CTaskSimpleCarCloseDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN34CTaskSimpleCarCloseDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x193c04
// Original: j__ZN34CTaskSimpleCarCloseDoorFromOutsideD2Ev
// Demangled: CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside()
// attributes: thunk
void __fastcall CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside(
        CTaskSimpleCarCloseDoorFromOutside *this)
{
  _ZN34CTaskSimpleCarCloseDoorFromOutsideD2Ev(this);
}


// ============================================================

// Address: 0x19a494
// Original: j__ZN34CTaskSimpleCarCloseDoorFromOutside13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(CPed *,int,CEvent const*)
// attributes: thunk
int __fastcall CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(
        CTaskSimpleCarCloseDoorFromOutside *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return _ZN34CTaskSimpleCarCloseDoorFromOutside13MakeAbortableEP4CPediPK6CEvent(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19c078
// Original: j__ZN34CTaskSimpleCarCloseDoorFromOutside9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarCloseDoorFromOutside::StartAnim(CPed const*)
// attributes: thunk
int __fastcall CTaskSimpleCarCloseDoorFromOutside::StartAnim(CTaskSimpleCarCloseDoorFromOutside *this, const CPed *a2)
{
  return _ZN34CTaskSimpleCarCloseDoorFromOutside9StartAnimEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x5017e4
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutsideC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
        CTaskSimpleCarCloseDoorFromOutside *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B10C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x50182c
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutsideD2Ev
// Demangled: CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside()
void __fastcall CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside(
        CTaskSimpleCarCloseDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B10C;
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

// Address: 0x50186c
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutsideD0Ev
// Demangled: CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside()
void __fastcall CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside(
        CTaskSimpleCarCloseDoorFromOutside *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B10C;
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

// Address: 0x5018b0
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(
        CTaskSimpleCarCloseDoorFromOutside *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
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
    v8 = *((_DWORD *)this + 5) - 8;
    if ( v8 > 2 )
      v9 = 382;
    else
      v9 = dword_61E6C0[v8];
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

// Address: 0x501930
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarCloseDoorFromOutside::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::ComputeAnimID(
        CTaskSimpleCarCloseDoorFromOutside *this,
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
    v5 = dword_501968[v4];
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

// Address: 0x50197c
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarCloseDoorFromOutside::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::ProcessPed(CTaskSimpleCarCloseDoorFromOutside *this, CPed *a2)
{
  int v5; // r0
  unsigned int v6; // r0
  int v7; // r6
  int Group; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( LOBYTE(CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(*(_DWORD *)(v5 + 904) + 222) + 4]) << 31 )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    CTaskSimpleCarCloseDoorFromOutside::StartAnim(this, a2);
    if ( !*((_DWORD *)this + 3) )
      return 1;
  }
  v6 = *((_DWORD *)this + 5) - 8;
  if ( v6 > 2 )
    v7 = 382;
  else
    v7 = dword_61E6C0[v6];
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v7);
  (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 4) + 116))(
    *((_DWORD *)this + 4),
    a2,
    *((_DWORD *)this + 5),
    Group,
    v7,
    *(_DWORD *)(*((_DWORD *)this + 3) + 32));
  return 0;
}


// ============================================================

// Address: 0x501a28
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarCloseDoorFromOutside::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::StartAnim(CTaskSimpleCarCloseDoorFromOutside *this, const CPed *a2)
{
  int v4; // r0
  float *v5; // r6
  float *v6; // r1
  double v7; // d16
  int v8; // r0
  int result; // r0
  float *v10; // r0
  float v11; // s4
  float v12; // s6
  float *v13; // r0
  float v14; // s4
  float v15; // s0
  int v16; // r1
  int v17; // r0
  CPad *v18; // r0
  unsigned __int16 *Pad; // r8
  int v20; // r0
  _BOOL4 v21; // r6
  int v22; // r0
  int DoorStatus; // r0
  unsigned int v24; // r0
  int v25; // r6
  int Group; // r0
  CAnimBlendAssociation *v27; // r0
  bool v28; // zf
  bool v29; // zf
  bool v30; // zf
  double v31; // [sp+0h] [bp-20h] BYREF
  float v32; // [sp+8h] [bp-18h]

  v4 = *((_DWORD *)a2 + 5);
  v5 = (float *)((char *)a2 + 4);
  v6 = (float *)((char *)a2 + 4);
  if ( v4 )
    v6 = (float *)(v4 + 48);
  v7 = *(double *)v6;
  v32 = v6[2];
  v31 = v7;
  CPedPlacement::FindZCoorForPed((CPedPlacement *)&v31, (CVector *)v6);
  v8 = *((_DWORD *)a2 + 5);
  if ( v8 )
    v5 = (float *)(v8 + 48);
  if ( v32 < (float)(v5[2] + -1.0) )
    goto LABEL_6;
  *(_BYTE *)(*((_DWORD *)this + 4) + 188) = 0;
  v10 = (float *)*((_DWORD *)this + 4);
  v11 = v10[19] + 0.001;
  v12 = v10[20] + 0.001;
  v10[18] = v10[18] + 0.001;
  v10[19] = v11;
  v10[20] = v12;
  v13 = (float *)*((_DWORD *)this + 4);
  v14 = v13[22] + 0.001;
  v15 = v13[23] + 0.001;
  v13[21] = v13[21] + 0.001;
  v13[22] = v14;
  v13[23] = v15;
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v17 = *((_DWORD *)a2 + 359);
    if ( v17 == 1 )
    {
      v18 = (CPad *)((char *)&stderr + 1);
    }
    else
    {
      if ( v17 )
      {
        Pad = 0;
LABEL_14:
        v20 = *((_DWORD *)this + 4);
        v21 = 0;
        if ( !*(_DWORD *)(v20 + 1440) )
          v21 = (unsigned int)CDamageManager::GetEngineStatus((CDamageManager *)(v20 + 1460)) > 0xE0;
        if ( !Pad[136] && *(_DWORD *)(*((_DWORD *)this + 4) + 1288) != 6 )
        {
          if ( CPad::GetTarget((CPad *)Pad, 0) )
            goto LABEL_19;
          v28 = *Pad == 0;
          if ( !*Pad )
            v28 = Pad[1] == 0;
          if ( !v28 )
            goto LABEL_19;
          v29 = Pad[8] == 0;
          if ( !Pad[8] )
            v29 = Pad[9] == 0;
          if ( !v29 )
            goto LABEL_19;
          v30 = Pad[10] == 0;
          if ( !Pad[10] )
            v30 = Pad[11] == 0;
          if ( !v30 )
            goto LABEL_19;
        }
        if ( *(_DWORD *)(*((_DWORD *)this + 4) + 1172) != 0 || v21 )
        {
LABEL_19:
          v22 = *((_DWORD *)this + 4);
          if ( !*(_DWORD *)(v22 + 1440)
            && (!CDamageManager::GetDoorStatus((CDamageManager *)(v22 + 1460), *((_DWORD *)this + 5))
             || CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 4) + 1460), *((_DWORD *)this + 5)) == 2) )
          {
            DoorStatus = CDamageManager::GetDoorStatus(
                           (CDamageManager *)(*((_DWORD *)this + 4) + 1460),
                           *((_DWORD *)this + 5));
            CDamageManager::SetDoorStatus(
              (CDamageManager *)(*((_DWORD *)this + 4) + 1460),
              *((_DWORD *)this + 5),
              DoorStatus + 1);
          }
LABEL_6:
          result = 1;
          *((_BYTE *)this + 8) = 1;
          return result;
        }
        goto LABEL_23;
      }
      v18 = 0;
    }
    Pad = (unsigned __int16 *)CPad::GetPad(v18, v16);
    goto LABEL_14;
  }
LABEL_23:
  v24 = *((_DWORD *)this + 5) - 8;
  if ( v24 > 2 )
    v25 = 382;
  else
    v25 = dword_61E6C0[v24];
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            v25);
  v27 = (CAnimBlendAssociation *)CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), Group, v25);
  *((_DWORD *)this + 3) = v27;
  return CAnimBlendAssociation::SetFinishCallback(
           v27,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarCloseDoorFromOutside::FinishAnimCarCloseDoorFromOutsideCB,
           this);
}


// ============================================================

// Address: 0x501c1c
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarCloseDoorFromOutside::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[6], a2, this[4], this[3]);
  return 1;
}


// ============================================================

// Address: 0x501c2e
// Original: _ZN34CTaskSimpleCarCloseDoorFromOutside35FinishAnimCarCloseDoorFromOutsideCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarCloseDoorFromOutside::FinishAnimCarCloseDoorFromOutsideCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::FinishAnimCarCloseDoorFromOutsideCB(
        CTaskSimpleCarCloseDoorFromOutside *this,
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

// Address: 0x506c80
// Original: _ZNK34CTaskSimpleCarCloseDoorFromOutside5CloneEv
// Demangled: CTaskSimpleCarCloseDoorFromOutside::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarCloseDoorFromOutside::Clone(
        CTaskSimpleCarCloseDoorFromOutside *this,
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
  *(_DWORD *)v5 = &off_66B10C;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506cd0
// Original: _ZNK34CTaskSimpleCarCloseDoorFromOutside11GetTaskTypeEv
// Demangled: CTaskSimpleCarCloseDoorFromOutside::GetTaskType(void)
int __fastcall CTaskSimpleCarCloseDoorFromOutside::GetTaskType(CTaskSimpleCarCloseDoorFromOutside *this)
{
  return 806;
}


// ============================================================
