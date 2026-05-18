
// Address: 0x505920
// Original: _ZN21CTaskSimpleCarFallOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarFallOut::CTaskSimpleCarFallOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarFallOut::CTaskSimpleCarFallOut(
        CTaskSimpleCarFallOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B4C4;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x505968
// Original: _ZN21CTaskSimpleCarFallOutD2Ev
// Demangled: CTaskSimpleCarFallOut::~CTaskSimpleCarFallOut()
void __fastcall CTaskSimpleCarFallOut::~CTaskSimpleCarFallOut(CTaskSimpleCarFallOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B4C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x505994
// Original: _ZN21CTaskSimpleCarFallOutD0Ev
// Demangled: CTaskSimpleCarFallOut::~CTaskSimpleCarFallOut()
void __fastcall CTaskSimpleCarFallOut::~CTaskSimpleCarFallOut(CTaskSimpleCarFallOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B4C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5059c4
// Original: _ZN21CTaskSimpleCarFallOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarFallOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarFallOut::MakeAbortable(CTaskSimpleCarFallOut *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r6
  CVehicleAnimGroup *v9; // r0
  int Group; // r0

  if ( a3 != 2 )
    return 0;
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 28) = -998637568;
    CAnimBlendAssociation::SetFinishCallback(
      *((CAnimBlendAssociation **)this + 3),
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 3) = 0;
  }
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
  {
    v8 = 388;
    v9 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                        * *(unsigned __int8 *)(*(_DWORD *)(v7 + 904)
                                                                                             + 222)];
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v8 = 387;
    Group = CVehicleAnimGroup::GetGroup(v9, v8);
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, int))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      Group,
      v8,
      1065353216);
  }
  return 1;
}


// ============================================================

// Address: 0x505a50
// Original: _ZNK21CTaskSimpleCarFallOut13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarFallOut::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarFallOut::ComputeAnimID(CTaskSimpleCarFallOut *this, int *a2, int *a3)
{
  int v4; // r1
  int result; // r0

  v4 = 388;
  if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
    v4 = 387;
  *a3 = v4;
  result = CVehicleAnimGroup::GetGroup(
             (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                            * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                 + 222)],
             v4);
  *a2 = result;
  return result;
}


// ============================================================

// Address: 0x505a90
// Original: _ZN21CTaskSimpleCarFallOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarFallOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarFallOut::ProcessPed(CTaskSimpleCarFallOut *this, CPed *a2)
{
  int v4; // r0
  int v6; // r6
  CVehicleAnimGroup *v7; // r0
  int Group; // r0
  __int64 v9; // r0
  int v10; // r6
  __int16 v11; // r0
  int v12; // r0
  CAnimBlendAssociation *v13; // r0

  v4 = *((_DWORD *)this + 4);
  if ( !v4 || *((_BYTE *)this + 8) )
    return 1;
  if ( *((_DWORD *)this + 3) )
  {
    if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
      return 1;
    v6 = 388;
    v7 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                        * *(unsigned __int8 *)(*(_DWORD *)(v4 + 904)
                                                                                             + 222)];
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v6 = 387;
    Group = CVehicleAnimGroup::GetGroup(v7, v6);
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 4) + 116))(
      *((_DWORD *)this + 4),
      a2,
      *((_DWORD *)this + 5),
      Group,
      v6,
      *(_DWORD *)(*((_DWORD *)this + 3) + 32));
  }
  else
  {
    CCarEnterExit::RemoveCarSitAnim(a2, 0);
    v9 = *((_QWORD *)this + 2);
    v10 = 388;
    v11 = *(unsigned __int8 *)(*(_DWORD *)(v9 + 904) + 222);
    if ( (HIDWORD(v9) & 0xFFFFFFFE) == 0xA )
      v10 = 387;
    v12 = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v11], v10);
    v13 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v12, v10);
    *((_DWORD *)this + 3) = v13;
    CAnimBlendAssociation::SetFinishCallback(
      v13,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarFallOut::FinishAnimFallOutCB,
      this);
  }
  return 0;
}


// ============================================================

// Address: 0x505b68
// Original: _ZN21CTaskSimpleCarFallOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarFallOut::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarFallOut::StartAnim(CTaskSimpleCarFallOut *this, const CPed *a2)
{
  __int64 v4; // r0
  int v5; // r6
  __int16 v6; // r0
  int Group; // r0
  CAnimBlendAssociation *v8; // r0

  CCarEnterExit::RemoveCarSitAnim(a2, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = 388;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 904) + 222);
  if ( (HIDWORD(v4) & 0xFFFFFFFE) == 0xA )
    v5 = 387;
  Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v5);
  v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v8;
  return sub_18C20C(v8, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarFallOut::FinishAnimFallOutCB, this);
}


// ============================================================

// Address: 0x505bd8
// Original: _ZN21CTaskSimpleCarFallOut14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarFallOut::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarFallOut::SetPedPosition(CTaskSimpleCarFallOut *this, CPed *a2)
{
  CVehicle *v2; // r2
  CAnimBlendAssociation *v3; // r3

  v2 = (CVehicle *)*((_DWORD *)this + 4);
  if ( !v2 )
    return 1;
  v3 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( *((_BYTE *)this + 8) || v3 )
  {
    CTaskUtilityLineUpPedWithCar::ProcessPed(*((CTaskUtilityLineUpPedWithCar **)this + 6), a2, v2, v3);
    return 1;
  }
  CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x505c12
// Original: _ZN21CTaskSimpleCarFallOut19FinishAnimFallOutCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarFallOut::FinishAnimFallOutCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarFallOut::FinishAnimFallOutCB(
        CTaskSimpleCarFallOut *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0
  int v4; // r4
  CDamageManager *v5; // r5
  unsigned int v6; // r2

  *((_DWORD *)a2 + 3) = 0;
  result = *((_DWORD *)a2 + 4);
  *((_BYTE *)a2 + 8) = 1;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 1440) )
    {
      v4 = *((_DWORD *)a2 + 5);
      v5 = (CDamageManager *)(result + 1460);
      if ( !CDamageManager::GetDoorStatus((CDamageManager *)(result + 1460), v4)
        || (result = CDamageManager::GetDoorStatus(v5, v4), result == 2) )
      {
        v6 = CDamageManager::GetDoorStatus(v5, v4) + 1;
        return j_CDamageManager::SetDoorStatus(v5, v4, v6);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5072e0
// Original: _ZNK21CTaskSimpleCarFallOut5CloneEv
// Demangled: CTaskSimpleCarFallOut::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarFallOut::Clone(CTaskSimpleCarFallOut *this, unsigned int a2)
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
  *(_DWORD *)v5 = &off_66B4C4;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x507330
// Original: _ZNK21CTaskSimpleCarFallOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarFallOut::GetTaskType(void)
int __fastcall CTaskSimpleCarFallOut::GetTaskType(CTaskSimpleCarFallOut *this)
{
  return 834;
}


// ============================================================
