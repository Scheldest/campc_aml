
// Address: 0x1963cc
// Original: j__ZN21CTaskSimpleCarShuffleC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
        CTaskSimpleCarShuffle *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN21CTaskSimpleCarShuffleC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x501f44
// Original: _ZN21CTaskSimpleCarShuffleC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
        CTaskSimpleCarShuffle *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66B174;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x501f8c
// Original: _ZN21CTaskSimpleCarShuffleD2Ev
// Demangled: CTaskSimpleCarShuffle::~CTaskSimpleCarShuffle()
void __fastcall CTaskSimpleCarShuffle::~CTaskSimpleCarShuffle(CTaskSimpleCarShuffle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B174;
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

// Address: 0x501fcc
// Original: _ZN21CTaskSimpleCarShuffleD0Ev
// Demangled: CTaskSimpleCarShuffle::~CTaskSimpleCarShuffle()
void __fastcall CTaskSimpleCarShuffle::~CTaskSimpleCarShuffle(CTaskSimpleCarShuffle *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B174;
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

// Address: 0x502010
// Original: _ZN21CTaskSimpleCarShuffle13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarShuffle::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarShuffle::MakeAbortable(CTaskSimpleCarShuffle *this, CPed *a2, int a3, const CEvent *a4)
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

// Address: 0x50202c
// Original: _ZN21CTaskSimpleCarShuffle10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarShuffle::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarShuffle::ProcessPed(CTaskSimpleCarShuffle *this, CPed *a2)
{
  int v5; // r0
  int Group; // r0
  CAnimBlendAssociation *v7; // r0

  if ( *((_BYTE *)this + 8) )
    return 1;
  v5 = *((_DWORD *)this + 4);
  if ( !v5 )
    return 1;
  if ( !*((_DWORD *)this + 3) )
  {
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(v5 + 904)
                                                                                                  + 222)],
              372);
    v7 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, 0x174u);
    *((_DWORD *)this + 3) = v7;
    CAnimBlendAssociation::SetFinishCallback(
      v7,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarShuffle::FinishAnimCarShuffleCB,
      this);
  }
  return 0;
}


// ============================================================

// Address: 0x502094
// Original: _ZN21CTaskSimpleCarShuffle9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarShuffle::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarShuffle::StartAnim(CTaskSimpleCarShuffle *this, const CPed *a2)
{
  int Group; // r0
  CAnimBlendAssociation *v5; // r0

  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 4) + 904)
                                                                                                + 222)],
            372);
  v5 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, 0x174u);
  *((_DWORD *)this + 3) = v5;
  return sub_18C20C(v5, (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarShuffle::FinishAnimCarShuffleCB, this);
}


// ============================================================

// Address: 0x5020e8
// Original: _ZN21CTaskSimpleCarShuffle14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarShuffle::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarShuffle::SetPedPosition(CTaskSimpleCarShuffle *this, CPed *a2)
{
  float *v2; // r3

  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
  {
    v2 = (float *)*((_DWORD *)this + 3);
LABEL_5:
    CTaskUtilityLineUpPedWithCar::ProcessPed(
      *((CTaskUtilityLineUpPedWithCar **)this + 6),
      a2,
      *((CVehicle **)this + 4),
      (CAnimBlendAssociation *)v2);
    return 1;
  }
  v2 = (float *)*((_DWORD *)this + 3);
  if ( v2 && v2[6] > 0.9 )
    goto LABEL_5;
  CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x502128
// Original: _ZN21CTaskSimpleCarShuffle22FinishAnimCarShuffleCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarShuffle::FinishAnimCarShuffleCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarShuffle::FinishAnimCarShuffleCB(
        CTaskSimpleCarShuffle *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((_DWORD *)a2 + 3);
  if ( v3 )
    *(_DWORD *)(v3 + 28) = -998637568;
  *((_BYTE *)a2 + 8) = 1;
  result = 0;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x506d30
// Original: _ZNK21CTaskSimpleCarShuffle5CloneEv
// Demangled: CTaskSimpleCarShuffle::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarShuffle::Clone(CTaskSimpleCarShuffle *this, unsigned int a2)
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
  *(_DWORD *)v5 = &off_66B174;
  *((_DWORD *)v5 + 4) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 4);
  return v5;
}


// ============================================================

// Address: 0x506d80
// Original: _ZNK21CTaskSimpleCarShuffle11GetTaskTypeEv
// Demangled: CTaskSimpleCarShuffle::GetTaskType(void)
int __fastcall CTaskSimpleCarShuffle::GetTaskType(CTaskSimpleCarShuffle *this)
{
  return 808;
}


// ============================================================
