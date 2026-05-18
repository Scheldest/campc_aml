
// Address: 0x504624
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarSlowBeDraggedOut::CTaskSimpleCarSlowBeDraggedOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *,bool)
void __fastcall CTaskSimpleCarSlowBeDraggedOut::CTaskSimpleCarSlowBeDraggedOut(
        CTaskSimpleCarSlowBeDraggedOut *this,
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
  *(_DWORD *)this = &off_66B3B0;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x504674
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOutD2Ev
// Demangled: CTaskSimpleCarSlowBeDraggedOut::~CTaskSimpleCarSlowBeDraggedOut()
void __fastcall CTaskSimpleCarSlowBeDraggedOut::~CTaskSimpleCarSlowBeDraggedOut(CTaskSimpleCarSlowBeDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B3B0;
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

// Address: 0x5046b4
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOutD0Ev
// Demangled: CTaskSimpleCarSlowBeDraggedOut::~CTaskSimpleCarSlowBeDraggedOut()
void __fastcall CTaskSimpleCarSlowBeDraggedOut::~CTaskSimpleCarSlowBeDraggedOut(CTaskSimpleCarSlowBeDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B3B0;
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

// Address: 0x5046f8
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSlowBeDraggedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::MakeAbortable(
        CTaskSimpleCarSlowBeDraggedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
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
    *(_DWORD *)(v6 + 28) = -998637568;
  v7 = *((_DWORD *)this + 4);
  if ( v7 )
  {
    v8 = 379;
    v9 = (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                        * *(unsigned __int8 *)(*(_DWORD *)(v7 + 904)
                                                                                             + 222)];
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v8 = 378;
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

// Address: 0x504770
// Original: _ZNK30CTaskSimpleCarSlowBeDraggedOut13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarSlowBeDraggedOut::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::ComputeAnimID(CTaskSimpleCarSlowBeDraggedOut *this, int *a2, int *a3)
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
    v5 = dword_5047A8[v4];
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

// Address: 0x5047bc
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSlowBeDraggedOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::ProcessPed(CTaskSimpleCarSlowBeDraggedOut *this, CPed *a2)
{
  unsigned int v4; // r2
  int v5; // r4
  int v6; // r0
  __int64 v8; // r0
  int v9; // r6
  __int16 v10; // r0
  int v11; // r0
  CAnimBlendAssociation *v12; // r0
  __int64 v13; // r0
  int v14; // r6
  __int16 v15; // r0
  int Group; // r0

  if ( !*((_DWORD *)this + 4) )
    return 1;
  if ( !*((_BYTE *)this + 8) )
  {
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
    {
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        return 1;
      if ( *(float *)(v6 + 32) > 1.7 )
        *(_DWORD *)(*((_DWORD *)this + 7) + 20) = 2;
      if ( *((_BYTE *)this + 24) )
      {
        v13 = *((_QWORD *)this + 2);
        v14 = 379;
        v15 = *(unsigned __int8 *)(*(_DWORD *)(v13 + 904) + 222);
        if ( (HIDWORD(v13) & 0xFFFFFFFE) == 0xA )
          v14 = 378;
        Group = CVehicleAnimGroup::GetGroup(
                  (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v15],
                  v14);
        (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, int, int, _DWORD))(**((_DWORD **)this + 4) + 116))(
          *((_DWORD *)this + 4),
          a2,
          *((_DWORD *)this + 5),
          Group,
          v14,
          *(_DWORD *)(*((_DWORD *)this + 3) + 32));
      }
    }
    else
    {
      CCarEnterExit::RemoveCarSitAnim(a2, a2);
      v8 = *((_QWORD *)this + 2);
      v9 = 379;
      v10 = *(unsigned __int8 *)(*(_DWORD *)(v8 + 904) + 222);
      if ( (HIDWORD(v8) & 0xFFFFFFFE) == 0xA )
        v9 = 378;
      v11 = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v10], v9);
      v12 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v11, v9);
      *((_DWORD *)this + 3) = v12;
      CAnimBlendAssociation::SetFinishCallback(
        v12,
        (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarSlowBeDraggedOut::FinishAnimCarSlowBeDraggedOutCB,
        this);
      *((_BYTE *)this + 25) = (*(_WORD *)(*((_DWORD *)this + 3) + 46) & 0x800) != 0;
    }
    return 0;
  }
  if ( RpAnimBlendClumpGetAssociation() || RpAnimBlendClumpGetAssociation() )
    return 1;
  if ( *((_BYTE *)this + 25) )
    v4 = 39;
  else
    v4 = 36;
  v5 = 0;
  CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v4);
  return v5;
}


// ============================================================

// Address: 0x5048f4
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarSlowBeDraggedOut::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::StartAnim(CTaskSimpleCarSlowBeDraggedOut *this, const CPed *a2)
{
  __int64 v4; // r0
  int v5; // r6
  __int16 v6; // r0
  int Group; // r0
  CAnimBlendAssociation *v8; // r0
  int result; // r0

  CCarEnterExit::RemoveCarSitAnim(a2, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = 379;
  v6 = *(unsigned __int8 *)(*(_DWORD *)(v4 + 904) + 222);
  if ( (HIDWORD(v4) & 0xFFFFFFFE) == 0xA )
    v5 = 378;
  Group = CVehicleAnimGroup::GetGroup((CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74 * v6], v5);
  v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v5);
  *((_DWORD *)this + 3) = v8;
  CAnimBlendAssociation::SetFinishCallback(
    v8,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarSlowBeDraggedOut::FinishAnimCarSlowBeDraggedOutCB,
    this);
  result = (*(unsigned __int16 *)(*((_DWORD *)this + 3) + 46) >> 11) & 1;
  *((_BYTE *)this + 25) = (*(_WORD *)(*((_DWORD *)this + 3) + 46) & 0x800) != 0;
  return result;
}


// ============================================================

// Address: 0x50496c
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOut14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarSlowBeDraggedOut::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::SetPedPosition(CTaskSimpleCarSlowBeDraggedOut *this, CPed *a2)
{
  CVehicle *v4; // r2
  CAnimBlendAssociation *v5; // r3
  int v6; // r6
  CAnimBlendAssociation *Association; // r3

  v4 = (CVehicle *)*((_DWORD *)this + 4);
  if ( v4 )
  {
    v5 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
    if ( !*((_BYTE *)this + 8) )
    {
      if ( !v5 )
      {
        CPed::SetPedPositionInCar(a2);
        return 1;
      }
      goto LABEL_4;
    }
    if ( v5 )
    {
LABEL_4:
      CTaskUtilityLineUpPedWithCar::ProcessPed(*((CTaskUtilityLineUpPedWithCar **)this + 7), a2, v4, v5);
      return 1;
    }
    v6 = 379;
    if ( (*((_DWORD *)this + 5) & 0xFFFFFFFE) == 0xA )
      v6 = 378;
    CVehicleAnimGroup::GetGroup(
      (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                     * *(unsigned __int8 *)(*((_DWORD *)v4 + 226) + 222)],
      v6);
    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    *((_DWORD *)this + 3) = Association;
    if ( Association )
      CTaskUtilityLineUpPedWithCar::ProcessPed(
        *((CTaskUtilityLineUpPedWithCar **)this + 7),
        a2,
        *((CVehicle **)this + 4),
        Association);
    *((_DWORD *)this + 3) = 0;
  }
  return 1;
}


// ============================================================

// Address: 0x504a00
// Original: _ZN30CTaskSimpleCarSlowBeDraggedOut31FinishAnimCarSlowBeDraggedOutCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarSlowBeDraggedOut::FinishAnimCarSlowBeDraggedOutCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::FinishAnimCarSlowBeDraggedOutCB(
        CTaskSimpleCarSlowBeDraggedOut *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_DWORD *)a2 + 3) = 0;
  result = 1;
  *((_BYTE *)a2 + 8) = 1;
  return result;
}


// ============================================================

// Address: 0x507110
// Original: _ZNK30CTaskSimpleCarSlowBeDraggedOut5CloneEv
// Demangled: CTaskSimpleCarSlowBeDraggedOut::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarSlowBeDraggedOut::Clone(CTaskSimpleCarSlowBeDraggedOut *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *((_QWORD *)this + 2);
  v5 = v3;
  v6 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_DWORD *)v5 + 5) = HIDWORD(v4);
  *((_BYTE *)v5 + 24) = 0;
  *((_BYTE *)v5 + 25) = 0;
  *((_DWORD *)v5 + 7) = v6;
  *(_DWORD *)v5 = &off_66B3B0;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x507164
// Original: _ZNK30CTaskSimpleCarSlowBeDraggedOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarSlowBeDraggedOut::GetTaskType(void)
int __fastcall CTaskSimpleCarSlowBeDraggedOut::GetTaskType(CTaskSimpleCarSlowBeDraggedOut *this)
{
  return 821;
}


// ============================================================
