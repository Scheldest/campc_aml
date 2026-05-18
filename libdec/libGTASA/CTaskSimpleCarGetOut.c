
// Address: 0x195b9c
// Original: j__ZN20CTaskSimpleCarGetOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(
        CTaskSimpleCarGetOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN20CTaskSimpleCarGetOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1967c8
// Original: j__ZN20CTaskSimpleCarGetOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarGetOut::StartAnim(CPed const*)
// attributes: thunk
int __fastcall CTaskSimpleCarGetOut::StartAnim(CTaskSimpleCarGetOut *this, const CPed *a2)
{
  return _ZN20CTaskSimpleCarGetOut9StartAnimEPK4CPed(this, a2);
}


// ============================================================

// Address: 0x503118
// Original: _ZN20CTaskSimpleCarGetOutC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(
        CTaskSimpleCarGetOut *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = a4;
  *(_DWORD *)this = &off_66B2AC;
  *((_DWORD *)this + 5) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x503164
// Original: _ZN20CTaskSimpleCarGetOutD2Ev
// Demangled: CTaskSimpleCarGetOut::~CTaskSimpleCarGetOut()
void __fastcall CTaskSimpleCarGetOut::~CTaskSimpleCarGetOut(CTaskSimpleCarGetOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66B2AC;
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

// Address: 0x5031a4
// Original: _ZN20CTaskSimpleCarGetOutD0Ev
// Demangled: CTaskSimpleCarGetOut::~CTaskSimpleCarGetOut()
void __fastcall CTaskSimpleCarGetOut::~CTaskSimpleCarGetOut(CTaskSimpleCarGetOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66B2AC;
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

// Address: 0x5031e8
// Original: _ZN20CTaskSimpleCarGetOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarGetOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarGetOut::MakeAbortable(CTaskSimpleCarGetOut *this, CPed *a2, int a3, const CEvent *a4)
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

// Address: 0x503204
// Original: _ZN20CTaskSimpleCarGetOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarGetOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarGetOut::ProcessPed(CTaskSimpleCarGetOut *this, CPed *a2)
{
  int v4; // r0
  int v6; // r0
  const CVehicle *v7; // r1
  int v8; // r2
  int *v9; // r6
  int v10; // r1
  int v11; // r2
  int Group; // r3
  _DWORD *v13; // r0
  int IsCarUpsideDown; // r0
  float v15; // s0
  _BYTE v16[64]; // [sp+8h] [bp-40h] BYREF

  if ( !*((_DWORD *)this + 5) )
    return 1;
  if ( *((_BYTE *)this + 8) )
  {
    if ( byte_796830 && CPed::IsPlayer(a2) == 1 )
    {
      v4 = *((_DWORD *)this + 5);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 68) &= ~0x800000u;
        *(_DWORD *)(*((_DWORD *)this + 5) + 68) &= ~0x40000u;
        *(_DWORD *)(*((_DWORD *)this + 5) + 1068) |= 0x200000u;
      }
    }
    return 1;
  }
  v6 = *((_DWORD *)this + 3);
  if ( v6 )
  {
    if ( *(float *)(v6 + 24) == 1.0 )
      *((_DWORD *)a2 + 289) |= 0x2000u;
    if ( !*((_BYTE *)this + 9) || *((_BYTE *)this + 16) )
      return 0;
    v7 = (const CVehicle *)*((_DWORD *)this + 5);
    if ( *((_DWORD *)v7 + 360) )
    {
      v9 = (int *)((char *)this + 24);
      v8 = *((_DWORD *)this + 6);
LABEL_15:
      if ( (unsigned int)(v8 - 8) > 2 )
        v10 = 375;
      else
        v10 = dword_61E6CC[v8 - 8];
      Group = CVehicleAnimGroup::GetGroup(
                (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                               * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 5) + 904) + 222)],
                v10);
      v8 = *v9;
      v13 = (_DWORD *)*((_DWORD *)this + 5);
      goto LABEL_20;
    }
    IsCarUpsideDown = CUpsideDownCarCheck::IsCarUpsideDown((CUpsideDownCarCheck *)v16, v7);
    *((_BYTE *)this + 16) = IsCarUpsideDown != 0;
    v9 = (int *)((char *)this + 24);
    v8 = *((_DWORD *)this + 6);
    if ( !IsCarUpsideDown )
      goto LABEL_15;
    v13 = (_DWORD *)*((_DWORD *)this + 5);
    v15 = *(float *)(v13[5] + 8);
    if ( (v8 & 0xFFFFFFFE) == 0xA )
    {
      if ( v15 >= -0.5 )
      {
LABEL_26:
        Group = 0;
LABEL_20:
        (*(void (__fastcall **)(_DWORD *, CPed *, int, int, _DWORD, _DWORD))(*v13 + 116))(
          v13,
          a2,
          v8,
          Group,
          *(__int16 *)(*((_DWORD *)this + 3) + 44),
          *(_DWORD *)(*((_DWORD *)this + 3) + 32));
        return 0;
      }
    }
    else if ( v15 <= 0.5 )
    {
      goto LABEL_26;
    }
    *((_BYTE *)this + 16) = 0;
    goto LABEL_15;
  }
  CTaskSimpleCarGetOut::StartAnim(this, a2);
  CPed::SetPedPositionInCar(a2);
  CPed::ReplaceWeaponWhenExitingVehicle(a2);
  *((_BYTE *)this + 9) = CCarEnterExit::CarHasDoorToOpen(
                           *((CCarEnterExit **)this + 5),
                           *((const CVehicle **)this + 6),
                           v11);
  return 0;
}


// ============================================================

// Address: 0x503364
// Original: _ZN20CTaskSimpleCarGetOut9StartAnimEPK4CPed
// Demangled: CTaskSimpleCarGetOut::StartAnim(CPed const*)
int __fastcall CTaskSimpleCarGetOut::StartAnim(CTaskSimpleCarGetOut *this, const CPed *a2)
{
  const CVehicle *v4; // r1
  int v5; // r0
  _BYTE *v6; // r1
  int v7; // r2
  float v8; // s0
  int v9; // r6
  int Group; // r1
  CAnimBlendAssociation *v11; // r0
  int v13; // [sp+0h] [bp-40h] BYREF

  CCarEnterExit::RemoveCarSitAnim(a2, a2);
  v4 = (const CVehicle *)*((_DWORD *)this + 5);
  if ( *((_DWORD *)v4 + 360) )
  {
    v6 = (char *)this + 16;
    v5 = *((unsigned __int8 *)this + 16);
  }
  else
  {
    v5 = CUpsideDownCarCheck::IsCarUpsideDown((CUpsideDownCarCheck *)&v13, v4) != 0;
    *((_BYTE *)this + 16) = v5;
    v6 = (char *)this + 16;
  }
  v7 = *((_DWORD *)this + 6);
  if ( !v5 )
  {
LABEL_12:
    if ( (unsigned int)(v7 - 8) > 2 )
      v9 = 375;
    else
      v9 = dword_61E6CC[v7 - 8];
    Group = CVehicleAnimGroup::GetGroup(
              (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                             * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 5) + 904)
                                                                                                  + 222)],
              v9);
    goto LABEL_16;
  }
  v8 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 5) + 20) + 8);
  if ( (v7 & 0xFFFFFFFE) != 0xA )
  {
    if ( v8 <= 0.5 )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v8 < -0.5 )
  {
LABEL_11:
    *v6 = 0;
    goto LABEL_12;
  }
LABEL_7:
  v9 = 109;
  if ( (v7 & 0xFFFFFFFE) == 0xA )
    v9 = 108;
  Group = 0;
LABEL_16:
  v11 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), Group, v9);
  *((_DWORD *)this + 3) = v11;
  return CAnimBlendAssociation::SetFinishCallback(
           v11,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarGetOut::FinishAnimCarGetOutCB,
           this);
}


// ============================================================

// Address: 0x503440
// Original: _ZN20CTaskSimpleCarGetOut13ComputeAnimIDERiS0_
// Demangled: CTaskSimpleCarGetOut::ComputeAnimID(int &,int &)
int __fastcall CTaskSimpleCarGetOut::ComputeAnimID(CTaskSimpleCarGetOut *this, int *a2, int *a3)
{
  const CVehicle *v5; // r1
  int v7; // r0
  _BYTE *v8; // r1
  int v9; // r2
  float v10; // s0
  int result; // r0
  int v12; // r1
  int v13; // [sp+0h] [bp-40h] BYREF

  v5 = (const CVehicle *)*((_DWORD *)this + 5);
  if ( *((_DWORD *)v5 + 360) )
  {
    v8 = (char *)this + 16;
    v7 = *((unsigned __int8 *)this + 16);
  }
  else
  {
    v7 = CUpsideDownCarCheck::IsCarUpsideDown((CUpsideDownCarCheck *)&v13, v5) != 0;
    *((_BYTE *)this + 16) = v7;
    v8 = (char *)this + 16;
  }
  v9 = *((_DWORD *)this + 6);
  if ( !v7 )
  {
LABEL_12:
    if ( (unsigned int)(v9 - 8) >= 4 )
    {
      v12 = *a3;
    }
    else
    {
      v12 = dword_503508[v9 - 8];
      *a3 = v12;
    }
    result = CVehicleAnimGroup::GetGroup(
               (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                              * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 5) + 904) + 222)],
               v12);
    goto LABEL_16;
  }
  v10 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 5) + 20) + 8);
  if ( (v9 & 0xFFFFFFFE) != 0xA )
  {
    if ( v10 <= 0.5 )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v10 < -0.5 )
  {
LABEL_11:
    *v8 = 0;
    goto LABEL_12;
  }
LABEL_7:
  if ( (unsigned int)(v9 - 8) <= 3 )
    *a3 = dword_5034F8[v9 - 8];
  result = 0;
LABEL_16:
  *a2 = result;
  return result;
}


// ============================================================

// Address: 0x50351c
// Original: _ZN20CTaskSimpleCarGetOut14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarGetOut::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarGetOut::SetPedPosition(CTaskSimpleCarGetOut *this, CPed *a2)
{
  CAnimBlendAssociation *v2; // r3

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v2 )
    CTaskUtilityLineUpPedWithCar::ProcessPed(
      *((CTaskUtilityLineUpPedWithCar **)this + 7),
      a2,
      *((CVehicle **)this + 5),
      v2);
  else
    CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x50354a
// Original: _ZN20CTaskSimpleCarGetOut21FinishAnimCarGetOutCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarGetOut::FinishAnimCarGetOutCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleCarGetOut::FinishAnimCarGetOutCB(
        CTaskSimpleCarGetOut *this,
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

// Address: 0x506f0c
// Original: _ZNK20CTaskSimpleCarGetOut5CloneEv
// Demangled: CTaskSimpleCarGetOut::Clone(void)
CTaskSimple *__fastcall CTaskSimpleCarGetOut::Clone(CTaskSimpleCarGetOut *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  int v6; // r6

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *(_QWORD *)((char *)this + 20);
  v5 = v3;
  v6 = *((_DWORD *)this + 7);
  CTaskSimple::CTaskSimple(v3);
  *((_WORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 3) = 0;
  *((_BYTE *)v5 + 16) = 0;
  *((_DWORD *)v5 + 6) = HIDWORD(v4);
  *((_DWORD *)v5 + 7) = v6;
  *(_DWORD *)v5 = &off_66B2AC;
  *((_DWORD *)v5 + 5) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 5);
  return v5;
}


// ============================================================

// Address: 0x506f5c
// Original: _ZNK20CTaskSimpleCarGetOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarGetOut::GetTaskType(void)
int __fastcall CTaskSimpleCarGetOut::GetTaskType(CTaskSimpleCarGetOut *this)
{
  return 813;
}


// ============================================================
