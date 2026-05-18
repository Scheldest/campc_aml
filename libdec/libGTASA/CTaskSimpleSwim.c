
// Address: 0x189f4c
// Original: j__ZN15CTaskSimpleSwim25ProcessSwimmingResistanceEP4CPed
// Demangled: CTaskSimpleSwim::ProcessSwimmingResistance(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ProcessSwimmingResistance(CTaskSimpleSwim *this, CPed *a2)
{
  return _ZN15CTaskSimpleSwim25ProcessSwimmingResistanceEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18d838
// Original: j__ZN15CTaskSimpleSwim14ProcessEffectsEP4CPed
// Demangled: CTaskSimpleSwim::ProcessEffects(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ProcessEffects(CTaskSimpleSwim *this, CPed *a2)
{
  return _ZN15CTaskSimpleSwim14ProcessEffectsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18e6c8
// Original: j__ZN15CTaskSimpleSwim17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleSwim::ApplyRollAndPitch(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ApplyRollAndPitch(CTaskSimpleSwim *this, CPed *a2)
{
  return _ZN15CTaskSimpleSwim17ApplyRollAndPitchEP4CPed(this, a2);
}


// ============================================================

// Address: 0x191630
// Original: j__ZN15CTaskSimpleSwimC2EPK7CVectorP4CPed
// Demangled: CTaskSimpleSwim::CTaskSimpleSwim(CVector const*,CPed *)
// attributes: thunk
void __fastcall CTaskSimpleSwim::CTaskSimpleSwim(CTaskSimpleSwim *this, const CVector *a2, CPed *a3)
{
  _ZN15CTaskSimpleSwimC2EPK7CVectorP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x192c94
// Original: j__ZN15CTaskSimpleSwim16ProcessControlAIEP4CPed
// Demangled: CTaskSimpleSwim::ProcessControlAI(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ProcessControlAI(CTaskSimpleSwim *this, CPed *a2)
{
  return _ZN15CTaskSimpleSwim16ProcessControlAIEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19d92c
// Original: j__ZN15CTaskSimpleSwim10CreateTaskEv
// Demangled: CTaskSimpleSwim::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleSwim::CreateTask(CTaskSimpleSwim *this)
{
  return _ZN15CTaskSimpleSwim10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19dff8
// Original: j__ZN15CTaskSimpleSwim19ProcessControlInputEP10CPlayerPed
// Demangled: CTaskSimpleSwim::ProcessControlInput(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ProcessControlInput(CTaskSimpleSwim *this, CPlayerPed *a2)
{
  return _ZN15CTaskSimpleSwim19ProcessControlInputEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x1a1574
// Original: j__ZN15CTaskSimpleSwim16ProcessSwimAnimsEP4CPed
// Demangled: CTaskSimpleSwim::ProcessSwimAnims(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleSwim::ProcessSwimAnims(CTaskSimpleSwim *this, CPed *a2)
{
  return _ZN15CTaskSimpleSwim16ProcessSwimAnimsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x496ef4
// Original: _ZN15CTaskSimpleSwim10CreateTaskEv
// Demangled: CTaskSimpleSwim::CreateTask(void)
void __fastcall CTaskSimpleSwim::CreateTask(CTaskSimpleSwim *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CPed *Ped; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskSimpleSwim *v8; // r0
  CPools *v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, byte_4, a3);
  if ( v9[0] == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v9[0], (int)v9[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, &byte_9[3], v4);
  v8 = (CTaskSimpleSwim *)CTask::operator new((CTask *)&dword_68, v7);
  CTaskSimpleSwim::CTaskSimpleSwim(v8, (const CVector *)v9, Ped);
}


// ============================================================

// Address: 0x53a020
// Original: _ZN15CTaskSimpleSwimC2EPK7CVectorP4CPed
// Demangled: CTaskSimpleSwim::CTaskSimpleSwim(CVector const*,CPed *)
void __fastcall CTaskSimpleSwim::CTaskSimpleSwim(CTaskSimpleSwim *this, const CVector *a2, CPed *a3)
{
  __int64 v6; // d16

  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 2) = 3212836864LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 191;
  *(_DWORD *)this = &off_66CF6C;
  *((_DWORD *)this + 8) = a3;
  if ( a2 )
  {
    v6 = *(_QWORD *)a2;
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
    *(_QWORD *)((char *)this + 20) = v6;
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 8);
  *((_BYTE *)this + 100) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 21) = 0;
}


// ============================================================

// Address: 0x53a0b4
// Original: _ZN15CTaskSimpleSwimD2Ev
// Demangled: CTaskSimpleSwim::~CTaskSimpleSwim()
void __fastcall CTaskSimpleSwim::~CTaskSimpleSwim(CTaskSimpleSwim *this)
{
  int v2; // r1
  CEntity *v3; // r0
  CEntity *v4; // r0

  v2 = *((unsigned __int8 *)this + 9);
  *(_DWORD *)this = &off_66CF6C;
  if ( v2 )
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 1420) - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
  v3 = (CEntity *)*((_DWORD *)this + 15);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 15);
  v4 = (CEntity *)*((_DWORD *)this + 8);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 8);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x53a118
// Original: _ZN15CTaskSimpleSwimD0Ev
// Demangled: CTaskSimpleSwim::~CTaskSimpleSwim()
void __fastcall CTaskSimpleSwim::~CTaskSimpleSwim(CTaskSimpleSwim *this)
{
  int v2; // r1
  CEntity *v3; // r0
  CEntity *v4; // r0
  void *v5; // r0

  v2 = *((unsigned __int8 *)this + 9);
  *(_DWORD *)this = &off_66CF6C;
  if ( v2 )
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 1420) - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
  v3 = (CEntity *)*((_DWORD *)this + 15);
  if ( v3 )
    CEntity::CleanUpOldReference(v3, (CEntity **)this + 15);
  v4 = (CEntity *)*((_DWORD *)this + 8);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 8);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x53a180
// Original: _ZN15CTaskSimpleSwim13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleSwim::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleSwim::MakeAbortable(CTaskSimpleSwim *this, CPed *a2, int a3, const CEvent *a4)
{
  int Association; // r0
  FxSystem_c *v8; // r0
  bool v10; // zf

  if ( a3 == 2 )
  {
    CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
    CPed::SetMoveState(a2, 1);
    *((_DWORD *)a2 + 335) = 1;
    if ( *((_DWORD *)this + 3) != 191 )
    {
      Association = RpAnimBlendClumpGetAssociation();
      if ( Association )
        *(_DWORD *)(Association + 28) = -998637568;
    }
    CPed::RestoreHeadingRate(a2);
  }
  else
  {
    if ( !a4 )
      return 0;
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) <= 70 )
    {
      if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 9 )
        return 0;
      v10 = *((_BYTE *)a4 + 60) == 0;
      if ( *((_BYTE *)a4 + 60) )
        v10 = *((_BYTE *)a4 + 9) == 0;
      if ( v10 )
        return 0;
    }
  }
  v8 = (FxSystem_c *)*((_DWORD *)this + 24);
  if ( v8 )
  {
    FxSystem_c::Kill(v8);
    *((_DWORD *)this + 24) = 0;
  }
  return 1;
}


// ============================================================

// Address: 0x53a216
// Original: _ZN15CTaskSimpleSwim15DestroyFxSystemEv
// Demangled: CTaskSimpleSwim::DestroyFxSystem(void)
FxSystem_c *__fastcall CTaskSimpleSwim::DestroyFxSystem(CTaskSimpleSwim *this)
{
  FxSystem_c *result; // r0

  result = (FxSystem_c *)*((_DWORD *)this + 24);
  if ( result )
  {
    FxSystem_c::Kill(result);
    result = 0;
    *((_DWORD *)this + 24) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x53a230
// Original: _ZN15CTaskSimpleSwim10ProcessPedEP4CPed
// Demangled: CTaskSimpleSwim::ProcessPed(CPed *)
int __fastcall CTaskSimpleSwim::ProcessPed(CTaskSimpleSwim *this, CPed *a2)
{
  int v4; // r6
  FxSystem_c *v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r6
  int v13; // r0
  unsigned int v14; // r2
  CEventDamage *v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r1
  bool v18; // cf
  unsigned int v19; // r1
  int v20; // r1
  float *v21; // r2
  int v22; // r1
  float v23; // s0
  float v25; // s16
  int Association; // r0
  bool v27; // r1
  bool v28; // zf
  float v29; // s16
  _BYTE v30[64]; // [sp+14h] [bp-74h] BYREF
  _BYTE v31[52]; // [sp+54h] [bp-34h] BYREF

  if ( *((_DWORD *)this + 15) )
  {
    CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
    v4 = 1;
    CPed::SetMoveState(a2, 1);
    *((_DWORD *)a2 + 335) = 1;
    v5 = (FxSystem_c *)*((_DWORD *)this + 24);
    if ( !v5 )
      return v4;
    goto LABEL_34;
  }
  if ( *((float *)this + 22) <= CTaskSimpleSwim::SWIM_STOP_TIME )
  {
    v6 = *((_DWORD *)a2 + 289);
    if ( (v6 & 0x100) == 0 )
    {
      v7 = *((_DWORD *)a2 + 290);
      v8 = *((_DWORD *)a2 + 291);
      v9 = *((_DWORD *)a2 + 292);
      *((_DWORD *)a2 + 289) = v6 & 0xFFFFFDFF;
      *((_DWORD *)a2 + 290) = v7;
      *((_DWORD *)a2 + 291) = v8;
      *((_DWORD *)a2 + 292) = v9;
      if ( CPed::IsPlayer(a2) == 1 )
      {
        v10 = *((_DWORD *)this + 23);
        v11 = v10 == 0;
        if ( v10 )
          v11 = *((unsigned __int16 *)this + 5) == 4;
        if ( v11 )
        {
          CTaskSimpleSwim::ProcessControlInput(this, a2);
          *((_DWORD *)this + 23) = 0;
        }
        else
        {
          CTaskSimpleSwim::ProcessControlAI(this, a2);
          v16 = *((_DWORD *)this + 23);
          v17 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
          v18 = v16 >= v17;
          v19 = v16 - v17;
          if ( v19 == 0 || !v18 )
            v19 = 0;
          *((_DWORD *)this + 23) = v19;
          v20 = *((_DWORD *)a2 + 5);
          v21 = (float *)(v20 + 48);
          if ( !v20 )
            v21 = (float *)((char *)a2 + 4);
          *(float *)(*((_DWORD *)a2 + 273) + 20) = sqrtf(
                                                     (float)((float)(*((float *)this + 5) - *v21)
                                                           * (float)(*((float *)this + 5) - *v21))
                                                   + (float)((float)(*((float *)this + 6) - v21[1])
                                                           * (float)(*((float *)this + 6) - v21[1])));
          v22 = *((_DWORD *)a2 + 273);
          v23 = *(float *)(v22 + 20);
          if ( v23 < 0.5 )
          {
            *(_DWORD *)(v22 + 20) = 0;
            goto LABEL_32;
          }
          if ( v23 > 1.0 )
            *(_DWORD *)(v22 + 20) = 1065353216;
        }
        v25 = 1.0;
        if ( *((_WORD *)this + 5) == 4 )
        {
          Association = RpAnimBlendClumpGetAssociation();
          v27 = 1;
          if ( Association )
            v25 = (float)(*(float *)(Association + 36) * *(float *)(Association + 24)) + 1.0;
        }
        else
        {
          v27 = 0;
        }
        CPlayerPed::HandlePlayerBreath(a2, v27, v25);
        v28 = *((_BYTE *)this + 8) == 0;
        if ( *((_BYTE *)this + 8) )
          v28 = *((unsigned __int16 *)this + 5) == 4;
        if ( !v28 )
        {
          v29 = *(float *)(*((_DWORD *)a2 + 273) + 68);
          if ( v29 < (float)(COERCE_FLOAT(CStats::GetFatAndMuscleModifier()) * 0.5) )
            CPed::Say(a2, 0x164u, 0, 1.0, 0, 0, 0);
        }
        CPed::SetMoveState(a2, 0);
      }
      else
      {
        CTaskSimpleSwim::ProcessControlAI(this, a2);
        if ( *((_WORD *)this + 5) == 4 )
        {
          CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)v31, 0, CTimer::ms_fTimeStep, 53, 3, 0);
          v15 = (CEventDamage *)CEventDamage::CEventDamage(
                                  (int)v30,
                                  0,
                                  CTimer::m_snTimeInMilliseconds,
                                  53,
                                  3,
                                  0,
                                  0,
                                  (*((_DWORD *)a2 + 289) >> 8) & 1);
          if ( CEventDamage::AffectsPed(v15, a2) == 1 )
            CPedDamageResponseCalculator::ComputeDamageResponse((int)v31, a2);
          else
            v30[62] = 1;
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v30, 0);
          CEventDamage::~CEventDamage((CEventDamage *)v30);
          CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v31);
        }
      }
      CTaskSimpleSwim::ProcessSwimAnims(this, a2);
      CTaskSimpleSwim::ProcessSwimmingResistance(this, a2);
      CTaskSimpleSwim::ProcessEffects(this, a2);
      return 0;
    }
  }
  if ( *((_DWORD *)this + 3) == 191 )
    v12 = 0;
  else
    v12 = RpAnimBlendClumpGetAssociation();
  *((_DWORD *)a2 + 335) = 1;
  CPed::SetMoveState(a2, 1);
  if ( v12 )
  {
    if ( *(_WORD *)(v12 + 44) == 128 )
      *(_WORD *)(v12 + 46) |= 8u;
    else
      *(_DWORD *)(v12 + 28) = -1065353216;
    v13 = *((_DWORD *)this + 3);
    if ( v13 == 312 )
    {
      *((_DWORD *)a2 + 335) = 6;
      CPed::SetMoveState(a2, 6);
      v14 = 1;
      goto LABEL_33;
    }
    if ( v13 == 311 )
    {
      *((_DWORD *)a2 + 335) = 4;
      CPed::SetMoveState(a2, 4);
      v14 = 0;
      goto LABEL_33;
    }
  }
LABEL_32:
  v14 = 3;
LABEL_33:
  CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), v14);
  CPed::RestoreHeadingRate(a2);
  v5 = (FxSystem_c *)*((_DWORD *)this + 24);
  if ( !v5 )
    return 1;
LABEL_34:
  FxSystem_c::Kill(v5);
  v4 = 1;
  *((_DWORD *)this + 24) = 0;
  return v4;
}


// ============================================================

// Address: 0x53a564
// Original: _ZN15CTaskSimpleSwim16ProcessControlAIEP4CPed
// Demangled: CTaskSimpleSwim::ProcessControlAI(CPed *)
char *__fastcall CTaskSimpleSwim::ProcessControlAI(CTaskSimpleSwim *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  float *v7; // r3
  float *v8; // r1
  float v9; // s0
  float v10; // s4
  float v11; // s0
  int v12; // r0
  float v13; // s4
  float v14; // s6
  int v15; // r1
  float *v16; // r2
  float v17; // s0
  float v18; // s4
  float v19; // s2
  float v20; // s2
  int v21; // r0
  float *v22; // r6
  float *v23; // r1
  int IsPlayer; // r0
  int v25; // r1
  float *v26; // r2
  float v27; // s4
  float v28; // s0
  int v29; // r0
  const CPed *v30; // r1
  int PedsGroup; // r0
  int Leader; // r0
  int v33; // r0
  int v34; // r6
  int v35; // r0
  bool v36; // zf
  int v37; // r0
  float *v38; // r1
  char *result; // r0
  float v40; // s0
  int v41; // r0
  float v42; // s4
  float v43; // s6
  float v44; // [sp+4h] [bp-24h] BYREF
  float v45; // [sp+8h] [bp-20h]
  float v46; // [sp+Ch] [bp-1Ch]

  v4 = *((_DWORD *)this + 8);
  *((_WORD *)this + 5) = 0;
  if ( v4 )
  {
    v5 = *((_DWORD *)a2 + 5);
    v6 = *(_DWORD *)(v4 + 20);
    v7 = (float *)(v5 + 48);
    if ( !v5 )
      v7 = (float *)((char *)a2 + 4);
    v8 = (float *)(v6 + 48);
    if ( !v6 )
      v8 = (float *)(v4 + 4);
    v9 = *v8 - *v7;
    v10 = v8[2] - v7[2];
    v45 = v8[1] - v7[1];
    v44 = v9;
    v46 = v10;
    CVector::Normalise((CVector *)&v44);
    v11 = *((float *)this + 21);
    if ( v11 == 0.0 )
    {
      v11 = (float)((float)(rand() & 3) * 0.5) + 1.5;
      *((float *)this + 21) = v11;
    }
    v12 = *((_DWORD *)this + 8);
    v13 = v11 * v45;
    v14 = v11 * v46;
    v15 = *(_DWORD *)(v12 + 20);
    v16 = (float *)(v15 + 48);
    if ( !v15 )
      v16 = (float *)(v12 + 4);
    v17 = *v16 - (float)(v11 * v44);
    v18 = v16[1] - v13;
    v19 = v16[2] - v14;
    *((float *)this + 5) = v17;
    *((float *)this + 6) = v18;
    *((float *)this + 7) = v19;
  }
  else
  {
    v17 = *((float *)this + 5);
  }
  v20 = *((float *)this + 6);
  if ( v20 == 0.0 && v17 == 0.0 && *((float *)this + 7) == 0.0 )
    goto LABEL_29;
  v21 = *((_DWORD *)a2 + 5);
  v22 = (float *)((char *)a2 + 4);
  v23 = (float *)((char *)a2 + 4);
  if ( v21 )
    v23 = (float *)(v21 + 48);
  *((float *)a2 + 344) = atan2f(-(float)(v17 - *v23), v20 - v23[1]);
  IsPlayer = CPed::IsPlayer(a2);
  v25 = *((_DWORD *)a2 + 5);
  v26 = (float *)((char *)a2 + 4);
  if ( v25 )
    v26 = (float *)(v25 + 48);
  v27 = 1.0;
  v28 = sqrtf(
          (float)((float)(*((float *)this + 5) - *v26) * (float)(*((float *)this + 5) - *v26))
        + (float)((float)(*((float *)this + 6) - v26[1]) * (float)(*((float *)this + 6) - v26[1])));
  if ( IsPlayer )
    v27 = 0.5;
  if ( v28 <= v27 )
    goto LABEL_29;
  v29 = *((_DWORD *)this + 8);
  *((_WORD *)this + 5) = (unsigned __int16)&stderr + 1;
  if ( !v29
    || !CPedGroups::GetPedsGroup(a2, (const CPed *)((char *)&stderr + 1))
    || (PedsGroup = CPedGroups::GetPedsGroup(a2, v30),
        Leader = CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8)),
        Leader != *((_DWORD *)this + 8)) )
  {
    if ( *((float *)this + 4) > 1.0 )
    {
      v33 = *((_DWORD *)a2 + 5);
      if ( v33 )
        v22 = (float *)(v33 + 48);
      if ( sqrtf(
             (float)((float)(*((float *)this + 5) - *v22) * (float)(*((float *)this + 5) - *v22))
           + (float)((float)(*((float *)this + 6) - v22[1]) * (float)(*((float *)this + 6) - v22[1]))) > 2.0 )
        *((_WORD *)this + 5) = 2;
    }
LABEL_29:
    v34 = 0;
    goto LABEL_30;
  }
  if ( CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(Leader + 1088))
    && *(_WORD *)(CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(*((_DWORD *)this + 8) + 1088)) + 10) == 2 )
  {
    v41 = *((_DWORD *)a2 + 5);
    if ( v41 )
      v22 = (float *)(v41 + 48);
    v42 = *v22;
    v43 = v22[1];
    v34 = 1;
    if ( sqrtf(
           (float)((float)(*((float *)this + 5) - v42) * (float)(*((float *)this + 5) - v42))
         + (float)((float)(*((float *)this + 6) - v43) * (float)(*((float *)this + 6) - v43))) > 5.0 )
      *((_WORD *)this + 5) = 2;
  }
  else
  {
    v34 = 1;
  }
LABEL_30:
  v35 = *((_DWORD *)this + 8);
  v36 = v35 == 0;
  if ( v35 )
    v36 = *(unsigned __int8 *)(v35 + 1156) << 31 == 0;
  if ( !v36 && !(*(unsigned __int8 *)(v35 + 69) << 31) )
    goto LABEL_57;
  if ( (*((_BYTE *)a2 + 1169) & 0x20) != 0 && !(*(unsigned __int8 *)(v35 + 69) << 31) )
  {
    v37 = *((_DWORD *)a2 + 5);
    v38 = (float *)(v37 + 48);
    if ( !v37 )
      v38 = (float *)((char *)a2 + 4);
    if ( sqrtf(
           (float)((float)(*((float *)this + 5) - *v38) * (float)(*((float *)this + 5) - *v38))
         + (float)((float)(*((float *)this + 6) - v38[1]) * (float)(*((float *)this + 6) - v38[1]))) < 1.0 )
    {
LABEL_57:
      if ( !((CTimer::m_FrameCounter + *((unsigned __int16 *)a2 + 18) + 124) << 25)
        && CTaskSimpleClimb::TestForClimb(
             a2,
             (CTaskSimpleSwim *)((char *)this + 64),
             (CTaskSimpleSwim *)((char *)this + 76),
             (float *)this + 20,
             (unsigned __int8 *)&stderr + 1,
             SLOBYTE(v44)) )
      {
        *((_WORD *)this + 5) = 5;
      }
    }
  }
  result = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  if ( !v34 )
  {
    result = (char *)CPed::IsPlayer(a2);
    if ( !result && *((float *)this + 4) < 0.0 )
    {
      result = (char *)a2 + 1252;
      v40 = *((float *)a2 + 314) * 0.5;
      *((float *)a2 + 313) = *((float *)a2 + 313) * 0.5;
      *((float *)a2 + 314) = v40;
    }
  }
  return result;
}


// ============================================================

// Address: 0x53a8e8
// Original: _ZN15CTaskSimpleSwim19ProcessControlInputEP10CPlayerPed
// Demangled: CTaskSimpleSwim::ProcessControlInput(CPlayerPed *)
float __fastcall CTaskSimpleSwim::ProcessControlInput(CTaskSimpleSwim *this, CPlayerPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  float32x2_t v6; // d4
  float32x2_t v7; // d10
  float32x2_t v8; // d11
  int v11; // r0
  bool v12; // zf
  float result; // r0
  CPad *PadFromPlayer; // r6
  float PedWalkLeftRight; // s16
  int PedWalkUpDown; // r0
  CPlayerPed *v17; // r1
  float v18; // s18
  float v19; // s20
  float v20; // s16
  unsigned int v21; // r0
  float *IsPlayerUse2PlayerControls; // r0
  float v23; // r0
  float v24; // s22
  float v25; // s20
  float v26; // r9
  float v27; // r8
  float v28; // s0
  int v29; // r6
  float *v30; // r1
  float v31; // s16
  float v32; // s18
  unsigned __int32 v33; // s20
  float v34; // s22
  float v35; // s24
  int LookDirection; // r6
  float v37; // r0
  float v38; // s4
  float v39; // s4
  float v40; // s0
  float v41; // s18
  float v42; // s16
  float v43; // s4
  float v44; // s6
  float v45; // s0
  float v46; // r6
  float v47; // s0
  float v48; // s2
  __int64 v49; // kr00_8
  float *v50; // r4
  float v51; // s0
  float v52; // s2
  int v53; // r1
  float v54; // s6
  float v55; // s0
  float v56; // s8
  float v57; // s6
  int v58; // r0
  float v59; // s2
  float v60; // s4
  float v61; // r0
  float v62; // s24
  float v63; // r0
  float v64; // s2
  float v65; // s4
  int v66; // r1
  int v67; // r0
  float v68; // s2
  bool v69; // fnf
  int v70; // r0
  float v71; // s4
  float v72; // s6
  float v73; // s4
  int v74; // r0
  float *v75; // r0
  float *v76; // r1
  float v77; // s16
  float v78; // s18
  float v79; // s20
  float v80; // s22
  float v81; // s24
  float v82; // s26
  __int16 v83; // r4
  float v84; // s6
  float v85; // s4
  float v86; // s8
  float v87; // s6
  float v88; // s8
  float v89; // s10
  int v90; // r1
  float v91; // s0
  float v92; // s4
  bool v93; // nf
  int v94; // s4
  bool v95; // fzf
  bool v96; // fnf
  int v97; // r0
  float v98; // s18
  float v99; // s0
  int v100; // r6
  float v101; // s18
  bool v102; // zf
  float v103; // s20
  float v104; // s0
  bool v105; // zf
  float v106; // s22
  float v107; // s20
  float v108; // s0
  float v109; // r2
  float *v110; // [sp+0h] [bp-58h]
  CVector *v111; // [sp+8h] [bp-50h] BYREF
  float v112[19]; // [sp+Ch] [bp-4Ch] BYREF

  v11 = *((unsigned __int8 *)this + 8);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *((_BYTE *)this + 9) == 0;
  if ( v12 )
  {
    result = *((float *)a2 + 273);
    *(_DWORD *)(LODWORD(result) + 20) = 0;
    return result;
  }
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  PedWalkLeftRight = (float)CPad::GetPedWalkLeftRight(PadFromPlayer);
  PedWalkUpDown = CPad::GetPedWalkUpDown(PadFromPlayer);
  v18 = PedWalkLeftRight * 0.0078125;
  v19 = (float)PedWalkUpDown * 0.0078125;
  if ( *((__int16 *)this + 5) <= 2 )
  {
    if ( CPad::SwimJumpJustDown(PadFromPlayer) == 1 )
    {
      *((_WORD *)this + 5) = 5;
    }
    else if ( CPad::DiveJustDown(PadFromPlayer) == 1 )
    {
      v17 = 0;
      *((_WORD *)this + 5) = 3;
      *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 0;
    }
  }
  v20 = sqrtf((float)(v18 * v18) + (float)(v19 * v19));
  v21 = *((__int16 *)this + 5);
  if ( v21 >= 3 )
  {
    if ( v21 != 4 )
    {
      if ( v21 == 3 && *((float *)this + 13) > 0.0 )
        *((_DWORD *)this + 13) = 0;
      goto LABEL_129;
    }
    if ( CHID::GetInputType((CHID *)byte_4) == 2 )
    {
      v30 = (float *)((char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF);
      v31 = v30[182];
      v32 = v30[183];
      v33 = *((_DWORD *)v30 + 184);
      v34 = -v31;
      v35 = -v32;
      LookDirection = CCamera::GetLookDirection((CCamera *)&TheCamera);
      if ( LookDirection == 3 )
      {
        v34 = v31;
        v35 = v32;
      }
      v37 = atan2f(COERCE_FLOAT(LODWORD(v34) ^ 0x80000000), v35);
      v2.n64_u32[0] = 0;
      v38 = *((float *)a2 + 343);
      if ( LookDirection == 3 )
        v2.n64_u32[0] = v33;
      *((float *)a2 + 344) = v37;
      v3.n64_f32[0] = v37 - v38;
      if ( (float)(v37 - v38) >= -3.1416 )
      {
        if ( v3.n64_f32[0] <= 3.1416 )
          v39 = -0.0;
        else
          v39 = 6.2832;
      }
      else
      {
        v39 = -6.2832;
      }
      v7.n64_u32[0] = -1.0;
      v8.n64_u32[0] = 1.0;
      v42 = *(float *)&CTimer::ms_fTimeStep;
      v61 = v2.n64_f32[0];
      v3.n64_f32[0] = (float)(v39 - v3.n64_f32[0]) * 10.0;
      v41 = vmin_f32(vmax_f32(v3, v7), v8).n64_f32[0];
      v62 = *((float *)this + 10) + (float)(*(float *)&CTimer::ms_fTimeStep * (float)(v41 * 0.04));
      v2.n64_f32[0] = *((float *)this + 12) + (float)(*(float *)&CTimer::ms_fTimeStep * (float)(v41 * 0.08));
      *((float *)this + 10) = v62;
      *((float *)this + 12) = v2.n64_f32[0];
      v63 = asinf(v61);
      v64 = *((float *)this + 9);
      v2.n64_f32[0] = (float)(v63 - v64) * 10.0;
      v2.n64_u64[0] = vmin_f32(vmax_f32(v2, v7), v8).n64_u64[0];
      if ( *((float *)this + 13) == 0.0 || v2.n64_f32[0] < 0.0 )
        *((float *)this + 9) = v64 + (float)((float)(v2.n64_f32[0] * 0.02) * v42);
      v65 = v62 + v62;
      v66 = 0;
      v67 = 0;
      v68 = v62 + v62;
      if ( (float)(v62 + v62) > 1.0 )
      {
        v68 = 1.0;
        v66 = 1;
      }
      v69 = v68 < -1.0;
LABEL_113:
      v3.n64_u32[0] = 1.0;
      v6.n64_u32[0] = -1.0;
      v89 = 1.0;
      if ( v69 )
        v67 = 1;
      v90 = v66 | v67;
      if ( v67 )
        v89 = -1.0;
      if ( v90 )
        v65 = v89;
      v2.n64_f32[0] = v2.n64_f32[0] + (float)(v65 * (float)(v41 * -0.08));
      *((float *)this + 11) = *((float *)this + 11)
                            + (float)(v42 * (float)(vmax_f32(vmin_f32(v2, v3), v6).n64_f32[0] * -0.08));
      goto LABEL_120;
    }
    if ( v20 <= 0.0 )
    {
      v42 = *(float *)&CTimer::ms_fTimeStep;
LABEL_120:
      v91 = *((float *)this + 9) + (float)(v42 * 0.001);
      v92 = v91;
      if ( v91 > 1.3963 )
        v92 = 1.3963;
      v93 = v92 < -1.3963;
      *(float *)&v94 = 1.3963;
      v95 = v91 == 1.3963;
      v96 = v91 < 1.3963;
      if ( v93 )
      {
        *(float *)&v94 = -1.3963;
        v91 = -1.3963;
      }
      if ( !v96 && !v95 )
        v91 = *(float *)&v94;
      *((float *)this + 9) = v91;
      v97 = *((_DWORD *)a2 + 273);
      if ( *(float *)(v97 + 24) <= 0.0 )
        *(_DWORD *)(v97 + 24) = 1036831949;
      CPlayerPed::ControlButtonSprint();
      goto LABEL_129;
    }
    v40 = 1.0 / v20;
    v41 = v18 * (float)(1.0 / v20);
    v42 = *(float *)&CTimer::ms_fTimeStep;
    v43 = *((float *)a2 + 344) + (float)((float)(v41 * -0.03) * *(float *)&CTimer::ms_fTimeStep);
    *((float *)a2 + 344) = v43;
    if ( v43 <= 3.1416 )
    {
      if ( v43 >= -3.1416 )
        goto LABEL_102;
      v44 = 6.2832;
    }
    else
    {
      v44 = -6.2832;
    }
    *((float *)a2 + 344) = v43 + v44;
LABEL_102:
    v2.n64_f32[0] = v19 * v40;
    v84 = *((float *)this + 13);
    v85 = *((float *)this + 10) + (float)((float)(v41 * 0.04) * v42);
    v86 = *((float *)this + 12) + (float)((float)(v41 * 0.08) * v42);
    *((float *)this + 10) = v85;
    *((float *)this + 12) = v86;
    if ( dword_6E05DC )
    {
      if ( v2.n64_f32[0] <= 0.0 && v84 != 0.0 )
        goto LABEL_110;
      v87 = 0.02;
    }
    else
    {
      if ( v2.n64_f32[0] >= 0.0 && v84 != 0.0 )
        goto LABEL_110;
      v87 = -0.02;
    }
    *((float *)this + 9) = *((float *)this + 9) + (float)((float)(v2.n64_f32[0] * v87) * v42);
LABEL_110:
    v65 = v85 + v85;
    v66 = 0;
    v67 = 0;
    v88 = v65;
    if ( v65 > 1.0 )
    {
      v88 = 1.0;
      v66 = 1;
    }
    v69 = v88 < -1.0;
    goto LABEL_113;
  }
  IsPlayerUse2PlayerControls = (float *)CGameLogic::IsPlayerUse2PlayerControls(a2, v17);
  if ( IsPlayerUse2PlayerControls != (float *)((char *)&stderr + 1) )
  {
    v29 = 0;
    goto LABEL_47;
  }
  if ( v20 <= 0.0 )
    goto LABEL_45;
  v23 = COERCE_FLOAT(CGeneral::GetRadianAngleBetweenPoints(0, 0.0, COERCE_FLOAT(LODWORD(v18) ^ 0x80000000), v19, *(float *)&v110));
  v24 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v23 - unk_9520F4), COERCE_FLOAT(&TheCamera)));
  v25 = *((float *)a2 + 343);
  v26 = sinf(v24);
  v27 = cosf(v24);
  if ( v24 > (float)(v25 + 3.1416) )
  {
    v28 = -6.2832;
LABEL_34:
    v24 = v24 + v28;
    goto LABEL_35;
  }
  if ( v24 < (float)(v25 + -3.1416) )
  {
    v28 = 6.2832;
    goto LABEL_34;
  }
LABEL_35:
  v45 = 1.0;
  LODWORD(v46) = LODWORD(v26) ^ 0x80000000;
  if ( (float)(v24 - v25) <= 1.0 )
  {
    v45 = v24 - v25;
    if ( (float)(v24 - v25) < -1.0 )
      v45 = -1.0;
  }
  v47 = v25 + (float)((float)(v45 * 0.08) * *(float *)&CTimer::ms_fTimeStep);
  *((float *)a2 + 344) = v47;
  if ( v47 <= 3.1416 )
  {
    if ( v47 >= -3.1416 )
      goto LABEL_43;
    v48 = 6.2832;
  }
  else
  {
    v48 = -6.2832;
  }
  *((float *)a2 + 344) = v47 + v48;
LABEL_43:
  IsPlayerUse2PlayerControls = (float *)CGameLogic::IsPlayerAllowedToGoInThisDirection();
  if ( IsPlayerUse2PlayerControls == (float *)((char *)&stderr + 1) )
  {
    IsPlayerUse2PlayerControls = (float *)*((_DWORD *)a2 + 5);
    v19 = -(float)(v20
                 * (float)((float)((float)(IsPlayerUse2PlayerControls[4] * v46)
                                 + (float)(v27 * IsPlayerUse2PlayerControls[5]))
                         + (float)(IsPlayerUse2PlayerControls[6] * 0.0)));
    v18 = v20
        * (float)((float)((float)(*IsPlayerUse2PlayerControls * v46) + (float)(v27 * IsPlayerUse2PlayerControls[1]))
                + (float)(IsPlayerUse2PlayerControls[2] * 0.0));
LABEL_45:
    v29 = 1;
    goto LABEL_47;
  }
  v18 = 0.0;
  v29 = 1;
  v19 = 0.0;
  v20 = 0.0;
LABEL_47:
  if ( CHID::GetInputType((CHID *)IsPlayerUse2PlayerControls) != 2 )
  {
    if ( v20 <= 0.0 )
    {
      v58 = *((_DWORD *)a2 + 273);
      v3.n64_u32[0] = *(_DWORD *)(v58 + 20);
      v55 = *(float *)&CTimer::ms_fTimeStep;
      if ( v3.n64_f32[0] > 0.0 )
      {
        v5.n64_u32[0] = 0;
        v3.n64_f32[0] = v3.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * -0.05);
        *(_DWORD *)(v58 + 20) = vmax_f32(v3, v5).n64_u32[0];
      }
      goto LABEL_88;
    }
    if ( v29 == 1 )
    {
      v55 = *(float *)&CTimer::ms_fTimeStep;
LABEL_85:
      v70 = *((_DWORD *)a2 + 273);
      v71 = *(float *)(v70 + 20);
      v72 = v20 - v71;
      v73 = (float)(v55 * 0.07) + v71;
      if ( v72 > (float)(v55 * 0.07) )
        v20 = v73;
      *(float *)(v70 + 20) = v20;
      goto LABEL_88;
    }
    v55 = *(float *)&CTimer::ms_fTimeStep;
    v59 = *((float *)a2 + 344) + (float)((float)(v18 * -0.03) * *(float *)&CTimer::ms_fTimeStep);
    *((float *)a2 + 344) = v59;
    if ( v59 <= 3.1416 )
    {
      if ( v59 >= -3.1416 )
        goto LABEL_79;
      v60 = 6.2832;
    }
    else
    {
      v60 = -6.2832;
    }
    *((float *)a2 + 344) = v59 + v60;
LABEL_79:
    if ( *((_WORD *)this + 5) )
    {
      if ( v19 <= 0.0 )
        goto LABEL_85;
    }
    else
    {
      v20 = -0.0;
    }
    v20 = v20 - v19;
    if ( v20 < 0.0 )
      v20 = 0.0;
    goto LABEL_85;
  }
  v49 = *((_QWORD *)&TheCamera + 66 * (unsigned __int8)byte_951FFF + 91);
  *((float *)a2 + 344) = atan2f(COERCE_FLOAT(v49 ^ 0x80000000), *((float *)&v49 + 1));
  v50 = (float *)((char *)a2 + 1376);
  if ( CCamera::GetLookDirection((CCamera *)&TheCamera) != 3 )
  {
    v51 = *v50 + 3.1416;
    *v50 = v51;
    if ( v51 > 3.1416 )
      *v50 = v51 + -6.2832;
  }
  v52 = -v19;
  v53 = *((_DWORD *)a2 + 273);
  v54 = *(float *)(v53 + 20);
  v55 = *(float *)&CTimer::ms_fTimeStep;
  v56 = (float)-v19 - v54;
  v57 = (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) + v54;
  if ( v56 > (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
    v52 = v57;
  *(float *)(v53 + 20) = v52;
  v3.n64_f32[0] = *v50 - *((float *)a2 + 343);
  if ( v3.n64_f32[0] >= -3.1416 )
  {
    if ( v3.n64_f32[0] <= 3.1416 )
      v4.n64_u32[0] = 0x80000000;
    else
      v4.n64_u32[0] = 1086918619;
  }
  else
  {
    v4.n64_u32[0] = -1060565029;
  }
  v3.n64_f32[0] = v4.n64_f32[0] - v3.n64_f32[0];
  v4.n64_u32[0] = -1.0;
  v3.n64_f32[0] = v3.n64_f32[0] * 10.0;
  v5.n64_u32[0] = 1.0;
  LODWORD(v18) = vmin_f32(vmax_f32(v3, v4), v5).n64_u32[0];
LABEL_88:
  v74 = *((unsigned __int16 *)this + 5);
  *((float *)this + 12) = *((float *)this + 12) + (float)((float)(v18 * 0.08) * v55);
  if ( v74 == 2 )
  {
    *((float *)this + 10) = (float)((float)(v18 * 0.04) * v55) + *((float *)this + 10);
    *(float *)&v111 = 0.0;
    v112[0] = 0.0;
    v75 = (float *)*((_DWORD *)a2 + 5);
    v76 = v75 + 12;
    v77 = v75[4];
    v78 = v75[5];
    v79 = v75[6];
    if ( !v75 )
      v76 = (float *)((char *)a2 + 4);
    v80 = *v76;
    v81 = v76[1];
    v82 = v76[2];
    if ( CWaterLevel::GetWaterLevel(
           COERCE_CWATERLEVEL_(*v76 + v77),
           v81 + v78,
           v82 + v79,
           COERCE_FLOAT(v112),
           (float *)((char *)&stderr + 1),
           0,
           v111) == 1
      && CWaterLevel::GetWaterLevel(
           COERCE_CWATERLEVEL_(v80 - v77),
           v81 - v78,
           v82 - v79,
           COERCE_FLOAT(&v111),
           (float *)((char *)&stderr + 1),
           0,
           v111) == 1 )
    {
      *((float *)this + 9) = atan2f(v112[0] - *(float *)&v111, 2.0);
    }
  }
  else if ( v74 == 1 )
  {
    *((float *)this + 11) = (float)((float)(fabsf(v18) * 0.04) * v55) + *((float *)this + 11);
  }
  v83 = 2;
  if ( COERCE_FLOAT(CPlayerPed::ControlButtonSprint()) < 1.0 )
    v83 = *(float *)(*((_DWORD *)a2 + 273) + 20) > 0.5;
  *((_WORD *)this + 5) = v83;
LABEL_129:
  v98 = *((float *)this + 10);
  if ( v98 > 0.01 || v98 < -0.01 )
    v99 = v98 * powf(0.95, *(float *)&CTimer::ms_fTimeStep);
  else
    v99 = 0.0;
  v100 = *((unsigned __int16 *)this + 5);
  v101 = 0.92;
  v102 = v100 == 2;
  *((float *)this + 10) = v99;
  if ( v100 != 2 )
    v102 = v100 == 4;
  if ( !v102 )
  {
    v103 = *((float *)this + 9);
    if ( v103 > 0.01 || v103 < -0.01 )
      v104 = v103 * powf(0.95, *(float *)&CTimer::ms_fTimeStep);
    else
      v104 = 0.0;
    v105 = v100 == 5;
    *((float *)this + 9) = v104;
    if ( v100 != 5 )
      v105 = v100 == 3;
    if ( v105 )
      v101 = 0.95;
  }
  v106 = *((float *)this + 12);
  v107 = *((float *)this + 11);
  if ( v106 > 0.01 || v106 < -0.01 || v107 > 0.01 || v107 < -0.01 )
  {
    result = powf(v101, *(float *)&CTimer::ms_fTimeStep);
    v108 = result * v107;
    *((float *)this + 12) = result * v106;
  }
  else
  {
    v108 = 0.0;
    result = 0.0;
    *((_DWORD *)this + 12) = 0;
  }
  *((float *)this + 11) = v108;
  if ( v100 != 2 )
  {
    if ( v100 == 1 )
      v109 = 0.5;
    else
      v109 = 1.0;
    return COERCE_FLOAT(CPlayerPed::HandleSprintEnergy(a2, 0, v109));
  }
  return result;
}


// ============================================================

// Address: 0x53b380
// Original: _ZN15CTaskSimpleSwim16ProcessSwimAnimsEP4CPed
// Demangled: CTaskSimpleSwim::ProcessSwimAnims(CPed *)
int __fastcall CTaskSimpleSwim::ProcessSwimAnims(CTaskSimpleSwim *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  int Association; // r0
  FxSystem_c *v8; // r0
  int IsPlayer; // r0
  bool v10; // zf
  int AnimationBlock; // r0
  CAnimManager *AnimBlockName; // r0
  const char *v13; // r1
  int v14; // r2
  int v15; // r0
  int result; // r0
  bool v17; // zf
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  float *v26; // r6
  float *v27; // r2
  int v28; // r0
  int v29; // r0
  int v30; // r6
  int v31; // r6
  int v32; // r6
  int v33; // r0
  int v34; // r0
  float v35; // s0
  float v36; // s0
  int v37; // r1
  int v38; // r0
  int v39; // r0
  unsigned int v40; // r2
  float *v41; // r6
  int v42; // r0
  float *v43; // r2
  int v44; // r0
  int v45; // r0
  bool v46; // zf
  int v47; // r0
  int v48; // r2
  CStats *v49; // r0
  CEntity *v50; // r0
  float v51; // s0
  float v52; // s0
  int v53; // r0
  int v54; // r6
  bool v55; // [sp+4h] [bp-1Ch]
  CVector *v56; // [sp+8h] [bp-18h] BYREF
  float v57[5]; // [sp+Ch] [bp-14h] BYREF

  Association = RpAnimBlendClumpGetAssociation();
  if ( *((_BYTE *)this + 8) )
  {
    if ( Association && *(float *)(Association + 24) < 1.0 && *(float *)(Association + 28) <= 0.0 )
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0xEu);
  }
  else
  {
    if ( (Association || (Association = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0xEu)) != 0)
      && *(float *)(Association + 24) >= 1.0 )
    {
      *((_BYTE *)this + 8) = 1;
    }
    RpAnimBlendClumpSetBlendDeltas();
    v8 = (FxSystem_c *)*((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 367);
    if ( v8 )
    {
      FxSystem_c::Kill(v8);
      *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 367) = 0;
    }
    v57[0] = 0.0;
    IsPlayer = CPed::IsPlayer(a2);
    v10 = IsPlayer == 1;
    if ( IsPlayer == 1 )
      v10 = *((unsigned __int16 *)this + 5) == 0;
    if ( v10 )
    {
      v25 = *((_DWORD *)a2 + 5);
      v26 = (float *)((char *)a2 + 4);
      v27 = (float *)((char *)a2 + 4);
      if ( v25 )
        v27 = (float *)(v25 + 48);
      if ( CWaterLevel::GetWaterLevel(
             *(CWaterLevel **)v27,
             v27[1],
             v27[2],
             COERCE_FLOAT(v57),
             (float *)((char *)&stderr + 1),
             0,
             v56) == 1 )
      {
        v28 = *((_DWORD *)a2 + 5);
        if ( v28 )
          v26 = (float *)(v28 + 48);
        if ( v26[2] < (float)(v57[0] + -2.0) )
          *((_WORD *)this + 5) = 4;
      }
    }
  }
  if ( !*((_BYTE *)this + 9) )
  {
    AnimationBlock = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 1420);
    if ( !AnimationBlock )
    {
      AnimBlockName = (CAnimManager *)CAnimManager::GetAnimBlockName();
      AnimationBlock = CAnimManager::GetAnimationBlock(AnimBlockName, v13);
    }
    v14 = *(unsigned __int8 *)(AnimationBlock + 16);
    v15 = (AnimationBlock - (int)CAnimManager::ms_aAnimBlocks) >> 5;
    if ( v14 == 1 )
    {
      CAnimManager::AddAnimBlockRef((CAnimManager *)v15, (int)CAnimManager::ms_aAnimBlocks);
      *((_BYTE *)this + 9) = 1;
    }
    else
    {
      CStreaming::RequestModel((CStreaming *)(v15 + 25575), 8, v14);
    }
  }
  result = *((unsigned __int8 *)this + 8);
  v17 = result == 0;
  if ( *((_BYTE *)this + 8) )
  {
    result = *((unsigned __int8 *)this + 9);
    v17 = result == 0;
  }
  if ( v17 )
    return result;
  switch ( *((_WORD *)this + 5) )
  {
    case 0:
      if ( *((_DWORD *)this + 3) != 14 )
      {
        v18 = RpAnimBlendClumpGetAssociation();
        if ( v18 )
          *(_DWORD *)(v18 + 28) = -1082130432;
        v19 = RpAnimBlendClumpGetAssociation();
        if ( v19 )
          *(_DWORD *)(v19 + 28) = -1082130432;
        v20 = RpAnimBlendClumpGetAssociation();
        if ( v20 )
          *(_DWORD *)(v20 + 28) = -1065353216;
        v21 = RpAnimBlendClumpGetAssociation();
        if ( v21 )
          *(_DWORD *)(v21 + 28) = -1073741824;
        v22 = RpAnimBlendClumpGetAssociation();
        if ( v22 )
          *(_DWORD *)(v22 + 28) = -1073741824;
        v23 = RpAnimBlendClumpGetAssociation();
        if ( v23 )
          *(_DWORD *)(v23 + 28) = -1065353216;
        v24 = RpAnimBlendClumpGetAssociation();
        if ( v24 )
          *(_DWORD *)(v24 + 28) = -1065353216;
        *((_DWORD *)this + 3) = 14;
      }
      goto LABEL_99;
    case 1:
      v29 = *((_DWORD *)a2 + 6);
      v30 = 311;
      if ( *((_DWORD *)this + 3) != 311 )
      {
        v40 = 311;
        goto LABEL_97;
      }
      v31 = RpAnimBlendClumpGetAssociation();
      if ( !v31 )
        goto LABEL_85;
      if ( CPed::IsPlayer(a2) == 1 )
      {
        *(_DWORD *)(v31 + 36) = *(_DWORD *)(*((_DWORD *)a2 + 273) + 20);
      }
      else
      {
        v51 = *((float *)this + 4);
        if ( v51 > 0.0 && v51 <= 1.0 )
          *(float *)(v31 + 36) = v51;
      }
      goto LABEL_99;
    case 2:
      v29 = *((_DWORD *)a2 + 6);
      if ( *((_DWORD *)this + 3) != 312 )
      {
        v30 = 312;
        v40 = 312;
        goto LABEL_97;
      }
      v32 = RpAnimBlendClumpGetAssociation();
      if ( !v32 )
        goto LABEL_85;
      if ( *((_DWORD *)a2 + 273) )
      {
        v2.n64_u32[0] = 1.0;
        v3.n64_u32[0] = CPlayerPed::GetButtonSprintResults();
        *(_DWORD *)(v32 + 36) = vmax_f32(v3, v2).n64_u32[0];
      }
      else
      {
        v2.n64_u32[0] = *((_DWORD *)this + 4);
        if ( v2.n64_f32[0] > 1.0 )
        {
          v4.n64_u32[0] = 1.5;
          v2.n64_f32[0] = v2.n64_f32[0] + -1.0;
          *(_DWORD *)(v32 + 36) = vmin_f32(v2, v4).n64_u32[0];
        }
      }
      goto LABEL_99;
    case 3:
      v29 = *((_DWORD *)a2 + 6);
      v30 = 313;
      if ( *((_DWORD *)this + 3) != 313 )
      {
        v40 = 313;
        goto LABEL_97;
      }
      v33 = RpAnimBlendClumpGetAssociation();
      if ( !v33 )
        goto LABEL_85;
      if ( *(float *)(v33 + 32) == *(float *)(*(_DWORD *)(v33 + 20) + 16) )
        *((_WORD *)this + 5) = 4;
      goto LABEL_99;
    case 4:
      if ( (*((_DWORD *)this + 3) & 0xFFFFFFFE) == 0x13A && *((float *)this + 13) >= 0.0 )
      {
        if ( *((_DWORD *)a2 + 273) && COERCE_FLOAT(CPlayerPed::GetButtonSprintResults()) >= 1.0 )
        {
          v53 = RpAnimBlendClumpGetAssociation();
          v54 = v53;
          if ( !v53 || *(float *)(v53 + 28) < 0.0 || *(float *)(v53 + 24) == 0.0 )
            v54 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 71, 0x13Au);
          if ( *(float *)(v54 + 32) == *(float *)(*(_DWORD *)(v54 + 20) + 16) )
          {
            CAnimBlendAssociation::Start((CAnimBlendAssociation *)v54, 0.0);
            v2.n64_u32[0] = 1060320051;
            v3.n64_u32[0] = CPlayerPed::GetButtonSprintResults();
            *(_DWORD *)(v54 + 36) = vmax_f32(v3, v2).n64_u32[0];
          }
          v30 = 314;
        }
        else
        {
          v47 = RpAnimBlendClumpGetAssociation();
          if ( v47 && *(float *)(v47 + 28) >= 0.0 && *(float *)(v47 + 24) != 0.0 )
          {
            v30 = 315;
          }
          else
          {
            v29 = *((_DWORD *)a2 + 6);
            v30 = 315;
            v40 = 315;
LABEL_97:
            CAnimManager::BlendAnimation(v29, 71, v40);
          }
        }
        goto LABEL_98;
      }
      v34 = RpAnimBlendClumpGetAssociation();
      if ( v34 )
      {
        v35 = *((float *)this + 13);
        if ( v35 < 0.0 && *(float *)(v34 + 24) >= 0.99 )
        {
          if ( v35 <= -2.0 )
            v36 = 1.3963;
          else
            v36 = (float)(CTaskSimpleSwim::SWIM_DIVE_UNDER_ANGLE * 3.1416) / 180.0;
          *((_DWORD *)this + 13) = 0;
          *((float *)this + 9) = v36;
        }
      }
      else
      {
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 71, 0x13Au);
        v45 = *((_DWORD *)this + 3);
        v46 = v45 == 191;
        if ( v45 != 191 )
          v46 = v45 == 14;
        if ( v46 )
          v52 = -2.0;
        else
          v52 = -1.0;
        *((_DWORD *)this + 3) = 314;
        *((float *)this + 13) = v52;
      }
      goto LABEL_99;
    case 5:
      v37 = *((_DWORD *)this + 3);
      if ( v37 == 316 )
      {
        v38 = RpAnimBlendClumpGetAssociation();
        if ( v38 )
        {
          if ( (float)(*(float *)(v38 + 32) + *(float *)(v38 + 40)) >= (float)(*(float *)(*(_DWORD *)(v38 + 20) + 16)
                                                                             * 0.25) )
          {
            v30 = 128;
            v39 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x80u);
            *(_WORD *)(v39 + 46) |= 8u;
LABEL_98:
            *((_DWORD *)this + 3) = v30;
          }
          goto LABEL_99;
        }
        goto LABEL_85;
      }
      if ( v37 == 128 )
      {
        if ( !RpAnimBlendClumpGetAssociation() )
          goto LABEL_85;
        v41 = (float *)((char *)a2 + 4);
        *(float *)&v56 = 0.0;
        v42 = *((_DWORD *)a2 + 5);
        v43 = (float *)((char *)a2 + 4);
        if ( v42 )
          v43 = (float *)(v42 + 48);
        if ( CWaterLevel::GetWaterLevel(
               *(CWaterLevel **)v43,
               v43[1],
               v43[2],
               COERCE_FLOAT(&v56),
               (float *)((char *)&stderr + 1),
               0,
               v56) == 1 )
        {
          v44 = *((_DWORD *)a2 + 5);
          if ( v44 )
            v41 = (float *)(v44 + 48);
          if ( *(float *)&v56 > (float)(v41[2] + 0.5) )
LABEL_85:
            *((_WORD *)this + 5) = 0;
        }
      }
      else
      {
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 71, 0x13Cu);
        *((_DWORD *)this + 3) = 316;
        *((float *)a2 + 20) = 8.0 / *((float *)a2 + 36);
        v50 = (CEntity *)CTaskSimpleClimb::TestForClimb(
                           a2,
                           (CTaskSimpleSwim *)((char *)this + 64),
                           (CTaskSimpleSwim *)((char *)this + 76),
                           (float *)this + 20,
                           (unsigned __int8 *)&stderr + 1,
                           v55);
        *((_DWORD *)this + 15) = v50;
        if ( v50 )
          CEntity::RegisterReference(v50, (CEntity **)this + 15);
      }
LABEL_99:
      result = *((_DWORD *)a2 + 273);
      if ( !result )
        return result;
      v48 = *((unsigned __int16 *)this + 5);
      if ( *(float *)(result + 20) <= 0.5 )
      {
        if ( v48 != 4 )
          return result;
        v48 = 4;
      }
      v49 = 0;
      if ( v48 == 4 )
        v49 = (CStats *)((char *)&stderr + 1);
      return CStats::UpdateStatsWhenSwimming(v49, v48 == 2, v48);
    default:
      goto LABEL_99;
  }
}


// ============================================================

// Address: 0x53b9b8
// Original: _ZN15CTaskSimpleSwim25ProcessSwimmingResistanceEP4CPed
// Demangled: CTaskSimpleSwim::ProcessSwimmingResistance(CPed *)
int __fastcall CTaskSimpleSwim::ProcessSwimmingResistance(CTaskSimpleSwim *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  float32x2_t v6; // d4
  float32x2_t v7; // d8
  float32x2_t v10; // d9
  int Association; // r6
  int v12; // r0
  float v13; // s4
  float v14; // s0
  float v15; // s6
  int *v16; // r4
  float *v17; // t1
  float v18; // s4
  float v19; // s5
  float v20; // s10
  float v21; // s8
  float v22; // s12
  float v23; // s14
  float v24; // s8
  float *v25; // r0
  float v26; // s22
  float v27; // s20
  float v28; // s24
  float v29; // s26
  float v30; // s28
  float v31; // s2
  float v32; // s23
  float v33; // s25
  int v34; // r0
  float *v35; // r6
  float v36; // r9
  float v37; // s20
  float v38; // s30
  float v39; // s22
  float v40; // s24
  float v41; // s26
  float v42; // s28
  float v43; // s21
  float v44; // s6
  int result; // r0
  char *v46; // r6
  float *v47; // r2
  float v48; // s0
  float v49; // s2
  float v50; // s4
  float v51; // s6
  float v52; // s22
  float *v53; // r1
  float v54; // s26
  float v55; // s28
  float v56; // s20
  float v57; // s2
  float v58; // s4
  float v59; // s2
  float v60; // s0
  float v61; // s0
  float v62; // s2
  float *v63; // r1
  float32x2_t v64; // d16
  float v65; // s0
  float32x2_t v66; // d2
  CTaskSimpleSwim *v67; // [sp+8h] [bp-68h]
  CVector *v68; // [sp+8h] [bp-68h]
  float v69[25]; // [sp+Ch] [bp-64h] BYREF

  v7.n64_u32[0] = 981668463;
  v2.n64_u32[0] = CTimer::ms_fTimeStep;
  v10.n64_u64[0] = vmax_f32(v2, v7).n64_u64[0];
  switch ( *((_WORD *)this + 5) )
  {
    case 0:
    case 1:
    case 2:
      Association = RpAnimBlendClumpGetAssociation();
      v12 = RpAnimBlendClumpGetAssociation();
      if ( Association )
      {
        v13 = *(float *)(Association + 24);
        v14 = v13 * 0.4;
        v3.n64_f32[0] = 1.0 - v13;
      }
      else
      {
        v3.n64_u32[0] = 1.0;
        v14 = 0.0;
      }
      v67 = this;
      if ( v12 )
      {
        v15 = *(float *)(v12 + 24);
        v3.n64_f32[0] = v3.n64_f32[0] - v15;
        v14 = v14 + (float)(v15 * 0.2);
      }
      v17 = (float *)*((_DWORD *)a2 + 5);
      v16 = (int *)((char *)a2 + 20);
      v18 = 1.0 / v10.n64_f32[0];
      v10.n64_u32[0] = 0;
      v19 = *((float *)a2 + 313);
      v3.n64_u64[0] = vmax_f32(v3, v10).n64_u64[0];
      v20 = v19 * v17[2];
      v5.n64_u32[1] = *((_DWORD *)a2 + 314);
      v21 = v19 * v17[1];
      v5.n64_f32[0] = v19 * *v17;
      v4.n64_u32[1] = 1057803469;
      v2.n64_f32[1] = v18 * (float)(v5.n64_f32[1] * v17[6]);
      v22 = v18 * (float)(v5.n64_f32[1] * v17[4]);
      v23 = v18 * (float)(v5.n64_f32[1] * v17[5]);
      v24 = (float)(v18 * v21) + 0.0;
      v5.n64_f32[0] = (float)(v18 * v5.n64_f32[0]) + 0.0;
      v10.n64_f32[0] = v14 + (float)(v3.n64_f32[0] * 0.55);
      v4.n64_f32[0] = (float)((float)(v18 * v20) + 0.0) + v2.n64_f32[1];
      v3.n64_f32[0] = v24 + v23;
      v2.n64_f32[0] = v5.n64_f32[0] + v22;
      goto LABEL_19;
    case 3:
      v67 = this;
      v16 = (int *)((char *)a2 + 20);
      v25 = (float *)*((_DWORD *)a2 + 5);
      v26 = v25[2];
      v27 = 1.0 / v10.n64_f32[0];
      v28 = v25[6];
      v29 = *((float *)a2 + 313);
      v30 = *((float *)a2 + 314);
      v31 = (float)(1.0 / v10.n64_f32[0]) * (float)(v29 * v25[1]);
      v10.n64_f32[1] = (float)(1.0 / v10.n64_f32[0]) * (float)(v30 * v25[5]);
      v32 = (float)(1.0 / v10.n64_f32[0]) * (float)(v30 * v25[4]);
      v33 = (float)((float)(1.0 / v10.n64_f32[0]) * (float)(v29 * *v25)) + 0.0;
      v34 = RpAnimBlendClumpGetAssociation();
      v10.n64_u32[0] = -1.0;
      v3.n64_f32[0] = (float)(v31 + 0.0) + v10.n64_f32[1];
      v2.n64_f32[0] = v33 + v32;
      if ( v34 )
        v4.n64_f32[0] = (float)(*(float *)(v34 + 32) * -0.1) / *(float *)(*(_DWORD *)(v34 + 20) + 16);
      else
        v4.n64_f32[0] = (float)((float)(v27 * (float)(v29 * v26)) + 0.0) + (float)(v27 * (float)(v30 * v28));
      goto LABEL_19;
    case 4:
      v16 = (int *)((char *)a2 + 20);
      v35 = (float *)*((_DWORD *)a2 + 5);
      v67 = this;
      v36 = *((float *)this + 9);
      v37 = 1.0 / v10.n64_f32[0];
      v38 = cosf(v36);
      v39 = *v35;
      v40 = v35[1];
      v41 = v35[2];
      v42 = v35[4];
      v43 = v35[6];
      v2.n64_u32[1] = 0;
      v2.n64_f32[0] = (float)(*((float *)a2 + 314) * sinf(v36)) / v10.n64_f32[0];
      v10.n64_u32[0] = -1.0;
      v44 = (float)((float)((float)(v37 * (float)(*((float *)a2 + 313) * v41)) + 0.0)
                  + (float)(v37 * (float)((float)(v38 * v43) * *((float *)a2 + 314))))
          + v2.n64_f32[0];
      v2.n64_f32[0] = (float)((float)(v37 * (float)(*((float *)a2 + 313) * v39)) + 0.0)
                    + (float)(v37 * (float)((float)(v38 * v42) * *((float *)a2 + 314)));
      v3.n64_f32[0] = (float)((float)(v37 * (float)(*((float *)a2 + 313) * v40)) + 0.0)
                    + (float)(v37 * (float)((float)(v38 * v35[5]) * *((float *)a2 + 314)));
      v4.n64_f32[0] = v44 + 0.0075;
      goto LABEL_19;
    case 5:
      result = RpAnimBlendClumpGetAssociation();
      if ( (result || (result = RpAnimBlendClumpGetAssociation()) != 0)
        && *(float *)(result + 32) < *(float *)(*(_DWORD *)(result + 20) + 16)
        && (*(float *)(result + 24) >= 1.0 || *(float *)(result + 28) > 0.0) )
      {
        return sub_193318();
      }
      return result;
    default:
      v2.n64_u32[0] = 0;
      v10.n64_u32[0] = -1.0;
      v67 = this;
      v16 = (int *)((char *)a2 + 20);
      v3.n64_u32[0] = 0;
      v4.n64_u32[0] = 0;
LABEL_19:
      v46 = (char *)a2 + 4;
      *((_DWORD *)a2 + 18) = v2.n64_u32[0];
      *((_DWORD *)a2 + 19) = v3.n64_u32[0];
      *((_DWORD *)a2 + 20) = v4.n64_u32[0];
      v47 = (float *)((char *)a2 + 4);
      v48 = *(float *)&CTimer::ms_fTimeStep * v2.n64_f32[0];
      v49 = *(float *)&CTimer::ms_fTimeStep * v3.n64_f32[0];
      if ( *v16 )
        v47 = (float *)(*v16 + 48);
      v50 = *v47;
      v51 = v47[1];
      v69[0] = 0.0;
      if ( CWaterLevel::GetWaterLevel(
             COERCE_CWATERLEVEL_(v48 + v50),
             v49 + v51,
             v47[2],
             COERCE_FLOAT(v69),
             (float *)((char *)&stderr + 1),
             0,
             v67) == 1 )
      {
        if ( *((_WORD *)v68 + 5) == 4 )
        {
          v52 = *((float *)v68 + 13);
          if ( v52 >= 0.0 )
          {
            v53 = (float *)((char *)a2 + 4);
            if ( *v16 )
              v53 = (float *)(*v16 + 48);
            v54 = v69[0];
            v55 = v53[2];
            v56 = *((float *)v68 + 9);
            if ( v69[0] >= (float)(v55 + 0.65) || v56 <= 0.7854 )
            {
              if ( v56 >= 0.0 )
              {
                if ( v69[0] >= (float)(v55 + 0.65) )
                {
                  v62 = 0.0;
                  if ( v52 > 0.001 )
                    v62 = v52 * 0.95;
                  *((float *)v68 + 13) = v62;
                }
                else
                {
                  v2.n64_u32[0] = 1020054733;
                  if ( v52 > 0.025 )
                  {
                    v52 = v52 * 0.95;
                    *((float *)v68 + 13) = v52;
                  }
                  v59 = *(float *)&CTimer::ms_fTimeStep;
                  if ( v52 < 0.025 )
                  {
                    v4.n64_f32[0] = v52 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.002);
                    LODWORD(v52) = vmin_f32(v4, v2).n64_u32[0];
                    *((float *)v68 + 13) = v52;
                  }
                  v60 = v56 + (float)(v52 * v59);
                  *((float *)v68 + 9) = v60;
                  v10.n64_f32[0] = (float)((float)((float)(v60 / 0.7854) * 0.75) * 0.35) + 0.2;
                }
              }
              else
              {
                if ( v54 >= (float)((float)(v55 - sinf(*((float *)v68 + 9))) + 0.65) )
                {
                  v61 = 0.0;
                  if ( v52 > 0.001 )
                    v61 = v52 * 0.95;
                  v57 = *(float *)&CTimer::ms_fTimeStep;
                  v58 = v61;
                }
                else
                {
                  v57 = *(float *)&CTimer::ms_fTimeStep;
                  v58 = v52 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.002);
                  if ( v58 > 0.05 )
                    v58 = 0.05;
                }
                *((float *)v68 + 13) = v58;
                *((float *)v68 + 9) = v56 + (float)(v58 * v57);
              }
            }
            else
            {
              *((_DWORD *)v68 + 13) = 0;
              *((_WORD *)v68 + 5) = 0;
            }
          }
        }
        if ( v10.n64_f32[0] > 0.0 )
        {
          v63 = (float *)((char *)a2 + 4);
          if ( *v16 )
            v63 = (float *)(*v16 + 48);
          v6.n64_f32[0] = *(float *)&CTimer::ms_fTimeStep * 0.1;
          v5.n64_f32[0] = *(float *)&CTimer::ms_fTimeStep * -0.1;
          v4.n64_f32[0] = (float)(v69[0] - (float)(v10.n64_f32[0] + v63[2])) / *(float *)&CTimer::ms_fTimeStep;
          v64.n64_u64[0] = vmin_f32(v6, v4).n64_u64[0];
          v69[0] = v69[0] - (float)(v10.n64_f32[0] + v63[2]);
          v65 = *((float *)a2 + 20);
          v6.n64_f32[0] = *(float *)&CTimer::ms_fTimeStep * 0.02;
          v66.n64_u64[0] = vmax_f32(v5, v64).n64_u64[0];
          v3.n64_f32[0] = *(float *)&CTimer::ms_fTimeStep * -0.02;
          v66.n64_f32[0] = v66.n64_f32[0] - v65;
          v3.n64_u64[0] = vmax_f32(v3, vmin_f32(v6, v66)).n64_u64[0];
          *((float *)a2 + 20) = v65 + v3.n64_f32[0];
        }
      }
      result = *v16;
      if ( *v16 )
        v46 = (char *)(result + 48);
      if ( *((float *)v46 + 2) < -69.0 )
      {
        result = -1031143424;
        v2.n64_u32[0] = 0;
        *((_DWORD *)v46 + 2) = -1031143424;
        v3.n64_u32[0] = *((_DWORD *)a2 + 20);
        *((_DWORD *)a2 + 20) = vmax_f32(v3, v2).n64_u32[0];
      }
      return result;
  }
}


// ============================================================

// Address: 0x53c008
// Original: _ZN15CTaskSimpleSwim14ProcessEffectsEP4CPed
// Demangled: CTaskSimpleSwim::ProcessEffects(CPed *)
int __fastcall CTaskSimpleSwim::ProcessEffects(CTaskSimpleSwim *this, CPed *a2)
{
  float *v4; // r0
  float *v5; // r8
  float *v6; // r5
  float v7; // s4
  float v8; // s2
  float v9; // s0
  float v10; // r6
  float v11; // r4
  float v12; // s16
  float v13; // s0
  float v14; // s18
  int v15; // r0
  float v16; // r4
  FxSystem_c *v17; // r0
  float *v18; // r6
  int result; // r0
  CGeneral *AngleBetweenPoints; // r0
  float v21; // r1
  float v22; // r4
  int v23; // r0
  int v24; // r9
  int v25; // r10
  int v26; // r4
  int v27; // r6
  int v28; // r0
  int v29; // r4
  float v30; // s16
  int v31; // r0
  FxSystem_c *v32; // r0
  int v33; // r5
  FxSystem_c *v34; // r0
  int v35; // r4
  float v36; // s16
  int v37; // r4
  FxSystem_c *FxSystem; // r0
  int MatrixArray; // r0
  double v40; // d16
  CPhysical *v41; // [sp+0h] [bp-90h]
  int v42; // [sp+14h] [bp-7Ch]
  int v43; // [sp+18h] [bp-78h]
  int v44; // [sp+1Ch] [bp-74h]
  int v45; // [sp+20h] [bp-70h]
  int v46; // [sp+24h] [bp-6Ch] BYREF
  int v47; // [sp+28h] [bp-68h]
  int v48; // [sp+2Ch] [bp-64h]
  double v49; // [sp+30h] [bp-60h] BYREF
  float v50; // [sp+38h] [bp-58h]
  double v51; // [sp+50h] [bp-40h] BYREF
  float v52; // [sp+58h] [bp-38h]

  v4 = (float *)*((_DWORD *)a2 + 5);
  v5 = (float *)((char *)a2 + 4);
  v6 = (float *)((char *)a2 + 4);
  if ( v4 )
  {
    v6 = v4 + 12;
    v7 = v4[4];
    v8 = v4[5];
    v9 = v4[6];
  }
  else
  {
    v10 = *((float *)a2 + 4);
    v11 = sinf(v10);
    v8 = cosf(v10);
    v9 = 0.0;
    LODWORD(v7) = LODWORD(v11) ^ 0x80000000;
  }
  v12 = (float)(v8 * 0.4) + v6[1];
  v13 = (float)(v9 * 0.4) + v6[2];
  v14 = *v6 + (float)(v7 * 0.4);
  *((float *)&v51 + 1) = v12;
  *(float *)&v51 = v14;
  v52 = v13;
  v15 = *((_DWORD *)a2 + 273);
  if ( v15 )
  {
    v16 = *(float *)(v15 + 144);
    v52 = v16;
  }
  else
  {
    v16 = v13 + 0.5;
    v52 = v13 + 0.5;
  }
  if ( *((_WORD *)this + 5) )
  {
    v17 = (FxSystem_c *)*((_DWORD *)this + 24);
    if ( v17 )
    {
      FxSystem_c::Kill(v17);
      *((_DWORD *)this + 24) = 0;
    }
  }
  else
  {
    v18 = (float *)RwMatrixCreate();
    v18[14] = v16;
    v18[12] = v14;
    v18[13] = v12;
    RwMatrixUpdate(v18);
    if ( *((_DWORD *)this + 24)
      || (v49 = 0.0,
          v50 = 0.0,
          FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                     (int)&g_fxMan,
                                     (CKeyGen *)"water_ripples",
                                     (int)&v49,
                                     (int)v18,
                                     0),
          (*((_DWORD *)this + 24) = FxSystem) != 0)
      && (FxSystem_c::CopyParentMatrix(FxSystem), FxSystem_c::Play(*((FxSystem_c **)this + 24)), *((_DWORD *)this + 24)) )
    {
      FxSystem_c::SetMatrix();
      FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 24), 1u);
    }
    RwMatrixDestroy(v18);
  }
  result = *((unsigned __int16 *)this + 5);
  if ( result == 3 )
  {
    result = *((unsigned __int8 *)this + 100);
    if ( !*((_BYTE *)this + 100) )
    {
      v50 = v52;
      v49 = v51;
      Fx_c::TriggerWaterSplash((Fx_c *)&g_fx, (CVector *)&v49);
      *((_BYTE *)this + 100) = 1;
      return CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 75, 0.0, 1.0, 0, 0, 0, 0);
    }
  }
  else
  {
    *((_BYTE *)this + 100) = 0;
    if ( (unsigned int)(result - 1) >= 2 )
    {
      if ( result == 4 )
      {
        result = CTimer::m_snTimeInMilliseconds;
        if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 14)) >= 0x65 )
        {
          *((_DWORD *)this + 14) = CTimer::m_snTimeInMilliseconds;
          if ( CPed::IsPlayer(a2) == 1 )
          {
            v36 = *(float *)(*((_DWORD *)a2 + 273) + 68);
            v37 = (int)(float)((float)(100.0
                                     - (float)((float)(v36 / COERCE_FLOAT(CStats::GetFatAndMuscleModifier())) * 100.0))
                             / 3.0);
          }
          else
          {
            v37 = 5;
          }
          result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
          if ( v37 > result )
          {
            GetAnimHierarchyFromSkinClump();
            MatrixArray = RpHAnimHierarchyGetMatrixArray();
            v40 = *(double *)(MatrixArray + 240);
            v50 = *(float *)(MatrixArray + 248);
            v49 = v40;
            LOBYTE(MatrixArray) = byte_9FF888;
            __dmb(0xBu);
            if ( (MatrixArray & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_9FF888) )
            {
              FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&unk_9FF86C, 1.0, 1.0, 1.0, 0.25, 0.3, 0.0, 0.5);
              j___cxa_guard_release((__guard *)&byte_9FF888);
            }
            v46 = 0;
            v47 = 0;
            v48 = 0x40000000;
            return FxSystem_c::AddParticle(dword_820528, (int)&v49, (int)&v46, 0, (int)&unk_9FF86C, -1.0, 1.2, 0.6, 0);
          }
        }
      }
    }
    else
    {
      if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 14)) >= 0x65 )
      {
        *((_DWORD *)this + 14) = CTimer::m_snTimeInMilliseconds;
        AngleBetweenPoints = (CGeneral *)CGeneral::GetAngleBetweenPoints(
                                           *(CGeneral **)(*((_DWORD *)a2 + 5) + 16),
                                           *(float *)(*((_DWORD *)a2 + 5) + 20),
                                           0.0,
                                           0.0,
                                           *(float *)&v41);
        v22 = COERCE_FLOAT(CGeneral::LimitAngle(AngleBetweenPoints, v21));
        FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v49, 1.0, 1.0, 1.0, 0.2, 0.4, 0.0, 0.5);
        v46 = 0;
        v47 = 0;
        v48 = 0;
        FxSystem_c::AddParticle(dword_820554, (int)&v51, (int)&v46, 0, v23, v22 + 180.0, 1.2, 0.6, 0);
      }
      CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 76, 0.0, 1.0, 0, 0, 0, 0);
      result = *((unsigned __int16 *)this + 5);
      if ( result == 2 )
      {
        GetAnimHierarchyFromSkinClump();
        v42 = RpHAnimIDGetIndex();
        v24 = RpHAnimHierarchyGetMatrixArray();
        v25 = RpHAnimIDGetIndex();
        v26 = RpHAnimHierarchyGetMatrixArray();
        v44 = RpHAnimIDGetIndex();
        v43 = RpHAnimHierarchyGetMatrixArray();
        v45 = RpHAnimIDGetIndex();
        v27 = RpHAnimHierarchyGetMatrixArray();
        v28 = *((_DWORD *)a2 + 5);
        v29 = v26 + (v25 << 6);
        if ( v28 )
          v5 = (float *)(v28 + 48);
        v30 = v5[2];
        v31 = v24 + (v42 << 6);
        if ( fabsf(*(float *)(v31 + 56) - v30) < 0.05 )
        {
          v32 = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"water_swim", v31 + 48, 0, 0);
          if ( v32 )
          {
            FxSystem_c::PlayAndKill(v32);
            CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 74, 0.0, 1.0, 0, 0, 0, 0);
          }
        }
        v33 = v43 + (v44 << 6);
        if ( fabsf(*(float *)(v29 + 56) - v30) < 0.05 )
        {
          v34 = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"water_swim", v29 + 48, 0, 0);
          if ( v34 )
          {
            FxSystem_c::PlayAndKill(v34);
            CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 74, 0.0, 1.0, 0, 0, 0, 0);
          }
        }
        result = v45;
        v35 = v27 + (v45 << 6);
        if ( fabsf(*(float *)(v33 + 56) - v30) < 0.05 )
        {
          result = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"water_swim", v33 + 48, 0, 0);
          if ( result )
          {
            FxSystem_c::PlayAndKill((FxSystem_c *)result);
            result = CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 74, 0.0, 1.0, 0, 0, 0, 0);
          }
        }
        if ( fabsf(*(float *)(v35 + 56) - v30) < 0.05 )
        {
          result = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"water_swim", v35 + 48, 0, 0);
          if ( result )
          {
            FxSystem_c::PlayAndKill((FxSystem_c *)result);
            return CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 74, 0.0, 1.0, 0, 0, 0, 0);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x53c5a4
// Original: _ZN15CTaskSimpleSwim17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleSwim::ApplyRollAndPitch(CPed *)
void __fastcall CTaskSimpleSwim::ApplyRollAndPitch(CTaskSimpleSwim *this, CPed *a2)
{
  __int64 v4; // r0
  _DWORD v5[18]; // [sp+0h] [bp-F0h] BYREF
  _BYTE v6[72]; // [sp+48h] [bp-A8h] BYREF
  int v7; // [sp+90h] [bp-60h]
  int v8; // [sp+94h] [bp-5Ch]
  _BYTE v9[88]; // [sp+98h] [bp-58h] BYREF

  v4 = *(_QWORD *)((char *)this + 44);
  v7 = HIDWORD(v4);
  v8 = v4;
  CPedIK::RotateTorso();
  CMatrix::CMatrix();
  v5[16] = 0;
  v5[17] = 0;
  CMatrix::SetTranslate((CMatrix *)v5, 0.0, 0.0, 0.0);
  CMatrix::RotateY((CMatrix *)v5, *((float *)this + 10));
  CMatrix::RotateX((CMatrix *)v5, *((float *)this + 9));
  operator*();
  CMatrix::operator=();
  CMatrix::~CMatrix((CMatrix *)v9);
  CMatrix::UpdateRW((CMatrix *)v6);
  CEntity::UpdateRwFrame(a2);
  CMatrix::~CMatrix((CMatrix *)v5);
  CMatrix::~CMatrix((CMatrix *)v6);
}


// ============================================================

// Address: 0x53c644
// Original: _ZN15CTaskSimpleSwim14CreateFxSystemEP4CPedP11RwMatrixTag
// Demangled: CTaskSimpleSwim::CreateFxSystem(CPed *,RwMatrixTag *)
FxSystem_c *__fastcall CTaskSimpleSwim::CreateFxSystem(int a1, int a2, int a3)
{
  FxSystem_c *result; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  memset(v5, 0, 12);
  result = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"water_ripples", (int)v5, a3, 0);
  *(_DWORD *)(a1 + 96) = result;
  if ( result )
  {
    FxSystem_c::CopyParentMatrix(result);
    return (FxSystem_c *)FxSystem_c::Play(*(FxSystem_c **)(a1 + 96));
  }
  return result;
}


// ============================================================

// Address: 0x53c740
// Original: _ZNK15CTaskSimpleSwim5CloneEv
// Demangled: CTaskSimpleSwim::Clone(void)
int __fastcall CTaskSimpleSwim::Clone(CTaskSimpleSwim *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r8
  __int64 v5; // d16
  int result; // r0

  v3 = CTask::operator new((CTask *)&dword_68, a2);
  v4 = (CEntity *)*((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_QWORD *)(v3 + 16) = 3212836864LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 36) = 0LL;
  *(_QWORD *)(v3 + 44) = 0LL;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 191;
  *(_DWORD *)v3 = &off_66CF6C;
  *(_DWORD *)(v3 + 32) = v4;
  v5 = *(_QWORD *)((char *)this + 20);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  *(_QWORD *)(v3 + 20) = v5;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 32));
  *(_BYTE *)(v3 + 100) = 0;
  result = v3;
  *(_DWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  return result;
}


// ============================================================

// Address: 0x53c7e4
// Original: _ZNK15CTaskSimpleSwim11GetTaskTypeEv
// Demangled: CTaskSimpleSwim::GetTaskType(void)
int __fastcall CTaskSimpleSwim::GetTaskType(CTaskSimpleSwim *this)
{
  return 1304;
}


// ============================================================

// Address: 0x53c7ec
// Original: _ZN15CTaskSimpleSwim9SerializeEv
// Demangled: CTaskSimpleSwim::Serialize(void)
void __fastcall CTaskSimpleSwim::Serialize(CTaskSimpleSwim *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  CGenericGameStorage *v13; // r5
  __int64 v14; // d16
  int v15; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleSwim *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleSwim *))(*(_DWORD *)this + 20))(this) == 1304 )
  {
    v5 = (CPed *)*((_DWORD *)this + 8);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(0xCu);
    v14 = *(_QWORD *)((char *)this + 20);
    *((_DWORD *)v13 + 2) = *((_DWORD *)this + 7);
    *(_QWORD *)v13 = v14;
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, &byte_9[3], v15);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleSwim *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1304, v10);
  }
}


// ============================================================
