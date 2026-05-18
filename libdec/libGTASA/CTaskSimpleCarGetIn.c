
// Address: 0x18b454
// Original: j__ZN19CTaskSimpleCarGetIn9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarGetIn::StartAnim(CPed const*)
// attributes: thunk
int __fastcall CTaskSimpleCarGetIn::StartAnim(CTaskSimpleCarGetIn *this, const CPed *a2)
{
  return _ZN19CTaskSimpleCarGetIn9StartAnimEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x19d37c
// Original: j__ZN19CTaskSimpleCarGetInC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
        CTaskSimpleCarGetIn *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN19CTaskSimpleCarGetInC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x501c38
// Original: _ZN19CTaskSimpleCarGetInC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarGetIn::CTaskSimpleCarGetIn(
        CTaskSimpleCarGetIn *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  *(_DWORD *)this = &off_66B140;
  *((_DWORD *)this + 6) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 6);
}


// ============================================================

// Address: 0x501c80
// Original: _ZN19CTaskSimpleCarGetInD2Ev
// Demangled: CTaskSimpleCarGetIn::~CTaskSimpleCarGetIn()
void __fastcall CTaskSimpleCarGetIn::~CTaskSimpleCarGetIn(CTaskSimpleCarGetIn *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B140;
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

// Address: 0x501cc0
// Original: _ZN19CTaskSimpleCarGetInD0Ev
// Demangled: CTaskSimpleCarGetIn::~CTaskSimpleCarGetIn()
void __fastcall CTaskSimpleCarGetIn::~CTaskSimpleCarGetIn(CTaskSimpleCarGetIn *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 24);
  v2 = (CEntity *)*((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66B140;
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

// Address: 0x501d04
// Original: _ZN19CTaskSimpleCarGetIn13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarGetIn::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarGetIn::MakeAbortable(CTaskSimpleCarGetIn *this, CPed *a2, int a3, const CEvent *a4)
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

// Address: 0x501d20
// Original: _ZN19CTaskSimpleCarGetIn10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarGetIn::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarGetIn::ProcessPed(CTaskSimpleCarGetIn *this, CPed *a2)
{
  int v4; // r0
  int v5; // r0
  int v7; // r1
  bool v8; // zf

  v4 = *((_DWORD *)this + 6);
  if ( !v4 )
    return 1;
  if ( *((_BYTE *)this + 8) )
  {
    CPed::RemoveWeaponWhenEnteringVehicle(a2, 0);
    if ( byte_796830 )
    {
      if ( CPed::IsPlayer(a2) == 1 )
      {
        v5 = *((_DWORD *)this + 6);
        if ( v5 )
        {
          *(_DWORD *)(v5 + 68) |= 0x800000u;
          *(_DWORD *)(*((_DWORD *)this + 6) + 68) |= 0x40000u;
          *(_DWORD *)(*((_DWORD *)this + 6) + 1068) &= ~0x200000u;
          return 1;
        }
      }
    }
    return 1;
  }
  if ( !*((_DWORD *)this + 3) )
  {
    CTaskSimpleCarGetIn::StartAnim(this, a2);
    v4 = *((_DWORD *)this + 6);
  }
  if ( *(_DWORD *)(v4 + 1444) == 10 )
  {
    v7 = *((_DWORD *)this + 3);
    v8 = v7 == 0;
    if ( v7 )
      v8 = *(unsigned __int8 *)(v7 + 46) << 31 == 0;
    if ( !v8
      && (unsigned int)(*(__int16 *)(v7 + 44) - 359) <= 3
      && *(float *)(v7 + 32) > (float)(BMX_PUSHOFF_START_FRAME / 30.0) )
    {
      CPhysical::ApplyMoveForce(
        v4,
        (float)((float)(BMX_PUSHOFF_FORCE_MULT * *(float *)(v4 + 144)) * *(float *)&CTimer::ms_fTimeStep)
      * *(float *)(*(_DWORD *)(v4 + 20) + 16),
        (float)((float)(BMX_PUSHOFF_FORCE_MULT * *(float *)(v4 + 144)) * *(float *)&CTimer::ms_fTimeStep)
      * *(float *)(*(_DWORD *)(v4 + 20) + 20),
        (float)((float)(BMX_PUSHOFF_FORCE_MULT * *(float *)(v4 + 144)) * *(float *)&CTimer::ms_fTimeStep)
      * *(float *)(*(_DWORD *)(v4 + 20) + 24));
    }
  }
  return 0;
}


// ============================================================

// Address: 0x501e2c
// Original: _ZN19CTaskSimpleCarGetIn9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarGetIn::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarGetIn::StartAnim(CTaskSimpleCarGetIn *this, const CPed *a2)
{
  int v4; // r6
  int Group; // r1
  CAnimBlendAssociation *v6; // r0

  v4 = 359;
  switch ( *((_DWORD *)this + 7) )
  {
    case 8:
      v4 = 360;
      break;
    case 9:
      v4 = 362;
      break;
    case 0xB:
      v4 = 361;
      break;
    case 0x12:
      v4 = 363;
      break;
    default:
      break;
  }
  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 6) + 904)
                                                                                                + 222)],
            v4);
  if ( Group == 107 )
  {
    if ( *((_DWORD *)this + 7) == 10
      && ((*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 6) + 156))(*((_DWORD *)this + 6), 10)
       || !(*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 152))(
             *((_DWORD *)this + 6),
             *((_DWORD *)this + 7))) )
    {
      Group = 88;
    }
    else
    {
      Group = 107;
    }
  }
  v6 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v4);
  *((_DWORD *)this + 3) = v6;
  return sub_18C20C(v6, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarGetIn::FinishAnimCarGetInCB, this);
}


// ============================================================

// Address: 0x501ee0
// Original: _ZN19CTaskSimpleCarGetIn14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarGetIn::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarGetIn::SetPedPosition(CTaskUtilityLineUpPedWithCar **this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar::ProcessPed(this[8], a2, this[6], this[3]);
  return 1;
}


// ============================================================

// Address: 0x501ef2
// Original: _ZN19CTaskSimpleCarGetIn20FinishAnimCarGetInCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarGetIn::FinishAnimCarGetInCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarGetIn::FinishAnimCarGetInCB(
        CTaskSimpleCarGetIn *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((_DWORD *)a2 + 3);
  *((_BYTE *)a2 + 8) = 1;
  if ( v3 )
    *(_DWORD *)(v3 + 28) = -998637568;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x501f0c
// Original: _ZN19CTaskSimpleCarGetIn17GetPositionInAnimEv
// Demangled: CTaskSimpleCarGetIn::GetPositionInAnim(void)
float __fastcall CTaskSimpleCarGetIn::GetPositionInAnim(CTaskSimpleCarGetIn *this)
{
  int v2; // r0

  if ( *((_BYTE *)this + 8) )
    return 1.0;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    return *(float *)(v2 + 32) / *(float *)(*(_DWORD *)(v2 + 20) + 16);
  else
    return 0.0;
}


// ============================================================

// Address: 0x506cd8
// Original: _ZNK19CTaskSimpleCarGetIn5CloneEv
// Demangled: CTaskSimpleCarGetIn::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarGetIn::Clone(CTaskSimpleCarGetIn *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_QWORD *)this + 3);
  v5 = v3;
  v6 = *((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 7) = HIDWORD(v4);
  *((_DWORD *)v5 + 8) = v6;
  *(_DWORD *)v5 = &off_66B140;
  *((_DWORD *)v5 + 6) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 6);
  return v5;
}


// ============================================================

// Address: 0x506d28
// Original: _ZNK19CTaskSimpleCarGetIn11GetTaskTypeEv
// Demangled: CTaskSimpleCarGetIn::GetTaskType(void)
int __fastcall CTaskSimpleCarGetIn::GetTaskType(CTaskSimpleCarGetIn *this)
{
  return 807;
}


// ============================================================
