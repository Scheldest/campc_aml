
// Address: 0x1901d8
// Original: j__ZN22CTaskComplexGangLeaderC2EP9CPedGroup
// Demangled: CTaskComplexGangLeader::CTaskComplexGangLeader(CPedGroup *)
// attributes: thunk
void __fastcall CTaskComplexGangLeader::CTaskComplexGangLeader(CTaskComplexGangLeader *this, CPedGroup *a2)
{
  _ZN22CTaskComplexGangLeaderC2EP9CPedGroup(this, a2);
}


// ============================================================

// Address: 0x197604
// Original: j__ZN22CTaskComplexGangLeader18DoGangAttackSpeechEP4CPedS1_
// Demangled: CTaskComplexGangLeader::DoGangAttackSpeech(CPed *,CPed *)
// attributes: thunk
int __fastcall CTaskComplexGangLeader::DoGangAttackSpeech(CTaskComplexGangLeader *this, CPed *a2, CPed *a3)
{
  return _ZN22CTaskComplexGangLeader18DoGangAttackSpeechEP4CPedS1_(this, a2, a3);
}


// ============================================================

// Address: 0x1979dc
// Original: j__ZN22CTaskComplexGangLeader17DoGangAbuseSpeechEP4CPedS1_
// Demangled: CTaskComplexGangLeader::DoGangAbuseSpeech(CPed *,CPed *)
// attributes: thunk
int __fastcall CTaskComplexGangLeader::DoGangAbuseSpeech(CTaskComplexGangLeader *this, CPed *a2, CPed *a3)
{
  return _ZN22CTaskComplexGangLeader17DoGangAbuseSpeechEP4CPedS1_(this, a2, a3);
}


// ============================================================

// Address: 0x19b008
// Original: j__ZN22CTaskComplexGangLeader19ShouldLoadGangAnimsEv
// Demangled: CTaskComplexGangLeader::ShouldLoadGangAnims(void)
// attributes: thunk
int __fastcall CTaskComplexGangLeader::ShouldLoadGangAnims(CTaskComplexGangLeader *this)
{
  return _ZN22CTaskComplexGangLeader19ShouldLoadGangAnimsEv(this);
}


// ============================================================

// Address: 0x19cb6c
// Original: j__ZN22CTaskComplexGangLeader24GetRandomGangAmbientAnimEP4CPedP7CEntity
// Demangled: CTaskComplexGangLeader::GetRandomGangAmbientAnim(CPed *,CEntity *)
// attributes: thunk
int __fastcall CTaskComplexGangLeader::GetRandomGangAmbientAnim(CTaskComplexGangLeader *this, CPed *a2, CEntity *a3)
{
  return _ZN22CTaskComplexGangLeader24GetRandomGangAmbientAnimEP4CPedP7CEntity(this, a2, a3);
}


// ============================================================

// Address: 0x515280
// Original: _ZN22CTaskComplexGangLeaderC2EP9CPedGroup
// Demangled: CTaskComplexGangLeader::CTaskComplexGangLeader(CPedGroup *)
void __fastcall CTaskComplexGangLeader::CTaskComplexGangLeader(CTaskComplexGangLeader *this, CPedGroup *a2)
{
  int v3; // r0

  CTaskComplex::CTaskComplex(this);
  *(_WORD *)(v3 + 24) = 0;
  *(_WORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_WORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 12) = a2;
  *(_BYTE *)(v3 + 52) = 0;
  *(_DWORD *)v3 = &off_66BD7C;
}


// ============================================================

// Address: 0x5152b4
// Original: _ZN22CTaskComplexGangLeaderD2Ev
// Demangled: CTaskComplexGangLeader::~CTaskComplexGangLeader()
void __fastcall CTaskComplexGangLeader::~CTaskComplexGangLeader(CTaskComplexGangLeader *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1

  v2 = (const char *)*((unsigned __int8 *)this + 52);
  *(_DWORD *)this = &off_66BD7C;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 52) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5152f4
// Original: _ZN22CTaskComplexGangLeaderD0Ev
// Demangled: CTaskComplexGangLeader::~CTaskComplexGangLeader()
void __fastcall CTaskComplexGangLeader::~CTaskComplexGangLeader(CTaskComplexGangLeader *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  void *v5; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 52);
  *(_DWORD *)this = &off_66BD7C;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 52) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x515338
// Original: _ZN22CTaskComplexGangLeader13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGangLeader::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGangLeader::MakeAbortable(CTaskComplexGangLeader *this, CPed *a2, int a3, const CEvent *a4)
{
  int v4; // r0

  v4 = *((_DWORD *)this + 2);
  if ( v4 && (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v4 + 28))(v4, a2, a3, a4) != 1 )
    return 0;
  *((_DWORD *)a2 + 291) &= ~0x400000u;
  return 1;
}


// ============================================================

// Address: 0x515364
// Original: _ZN22CTaskComplexGangLeader17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGangLeader::CreateNextSubTask(CPed *)
CTaskComplexTurnToFaceEntityOrCoord *__fastcall CTaskComplexGangLeader::CreateNextSubTask(
        CTaskComplexGangLeader *this,
        CPed *a2)
{
  int v3; // r5
  int v4; // r0
  unsigned __int16 v5; // r0
  unsigned int v6; // r1
  CEntity *Member; // r6
  CTaskComplexTurnToFaceEntityOrCoord *v8; // r4
  unsigned int v9; // r1
  int v10; // s0
  unsigned __int16 v11; // r0
  unsigned __int16 v12; // r0

  v3 = CPedGroupMembership::CountMembers((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8));
  v4 = *((_DWORD *)this + 2);
  if ( v4
    && ((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 203
     || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 426)
    && (v5 = rand(),
        (Member = (CEntity *)CPedGroupMembership::GetMember(
                               (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8),
                               (int)(float)((float)((float)v5 * 0.000015259) * (float)v3))) != 0) )
  {
    v8 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v6);
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v8, Member, 0.5, 0.2);
  }
  else
  {
    v10 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
    if ( v3 < 3 || v10 >= 96 )
    {
      v11 = rand();
      *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 24) = 1;
      *((_DWORD *)this + 5) = (int)(float)((float)((float)v11 * 0.000015259) * 15000.0) + 15000;
      v8 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&dword_38, 0x3A98u);
      v12 = rand();
      CTaskComplexWanderGang::CTaskComplexWanderGang(
        v8,
        4,
        (int)(float)((float)((float)v12 * 0.000015259) * 8.0),
        5000,
        1,
        0.05);
    }
    else
    {
      v8 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&dword_20, v9);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v8, 5000, 0, 0, 8.0);
    }
  }
  return v8;
}


// ============================================================

// Address: 0x5154e0
// Original: _ZN22CTaskComplexGangLeader18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGangLeader::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexGangLeader::CreateFirstSubTask(CTaskComplexGangLeader *this, CPed *a2)
{
  return (*(int (__fastcall **)(CTaskComplexGangLeader *, CPed *))(*(_DWORD *)this + 40))(this, a2);
}


// ============================================================

// Address: 0x5154e8
// Original: _ZN22CTaskComplexGangLeader14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGangLeader::ControlSubTask(CPed *)
int __fastcall CTaskComplexGangLeader::ControlSubTask(CTaskComplexGangLeader *this, CPed *a2)
{
  int v4; // r6
  int v5; // r1
  float *v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r0
  int v10; // r2
  char v11; // r0
  CAnimManager *AnimationBlockIndex; // r0
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r1
  int v17; // r4
  unsigned int v18; // r0
  unsigned int v19; // r1
  int v20; // r1
  FxSystem_c *FxSystem; // r0
  FxSystem_c *v22; // r6
  unsigned __int16 v23; // r6
  unsigned __int16 v24; // r0
  CPed *Member; // r0
  bool v26; // zf
  __int16 *IsHolding; // r11
  int Association; // r6
  int v29; // r8
  int v30; // r6
  int v31; // r10
  int v32; // r9
  int v33; // r0
  unsigned __int16 v34; // r0
  unsigned __int16 v35; // r0
  int v36; // r0
  unsigned int v37; // r1
  int v38; // r6
  CTask *v39; // r5
  unsigned __int16 v40; // r0
  int ClosestGroupPed; // r8
  int v43; // r0
  unsigned __int16 v44; // r1
  CEntity *v45; // r2
  unsigned int v46; // r1
  float v47[3]; // [sp+24h] [bp-3Ch] BYREF
  CEntity *v48; // [sp+30h] [bp-30h] BYREF
  char v49; // [sp+34h] [bp-2Ch]

  *((_DWORD *)a2 + 291) &= ~0x400000u;
  v4 = *((unsigned __int8 *)this + 52);
  v5 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v6 = *(float **)(v5 + 1424);
  v7 = v6 == 0;
  if ( v6 )
  {
    v5 = *(_DWORD *)(v5 + 1156) & 0x100;
    v7 = v5 == 0;
  }
  if ( !v7 && (float)((float)((float)(v6[18] * v6[18]) + (float)(v6[19] * v6[19])) + (float)(v6[20] * v6[20])) > 0.04 )
  {
    v8 = 0;
    if ( !v4 )
      goto LABEL_6;
LABEL_10:
    if ( v8 )
      goto LABEL_14;
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v5);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v13);
    v11 = 0;
    goto LABEL_12;
  }
  v8 = CStreaming::IsVeryBusy((CStreaming *)v6) ^ 1;
  if ( v4 )
    goto LABEL_10;
LABEL_6:
  if ( !v8 )
    goto LABEL_14;
  v9 = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v5);
  if ( CAnimManager::ms_aAnimBlocks[32 * v9 + 16] == 1 )
  {
    CAnimManager::AddAnimBlockRef((CAnimManager *)v9, 1);
    v11 = 1;
LABEL_12:
    *((_BYTE *)this + 52) = v11;
    goto LABEL_14;
  }
  CStreaming::RequestModel((CStreaming *)(v9 + 25575), 8, v10);
LABEL_14:
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203
    && !((unsigned __int8)CTimer::m_FrameCounter << 28)
    && (unsigned __int16)CPathFind::FindNodeClosestToCoors() == 0xFFFF )
  {
    v34 = rand();
    *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 24) = 1;
    *((_DWORD *)this + 5) = (int)(float)((float)((float)v34 * 0.000015259) * 40000.0) + 20000;
    v17 = CTask::operator new((CTask *)&dword_38, 0x4E20u);
    v35 = rand();
    CTaskComplexWanderGang::CTaskComplexWanderGang(
      (CTaskComplexWanderGang *)v17,
      4,
      (int)(float)((float)((float)v35 * 0.000015259) * 8.0),
      5000,
      1,
      0.05);
    return v17;
  }
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 912
    && *((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v14 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 25) = 0;
      *((_DWORD *)this + 4) = v14;
      v15 = v14;
    }
    else
    {
      v15 = *((_DWORD *)this + 4);
      v14 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v15 + *((_DWORD *)this + 5) <= v14
      && COERCE_FLOAT(CTaskComplexWanderGang::GetDistanceSqToNode(*((CTaskComplexWanderGang **)this + 2), a2)) < 2.0 )
    {
      CPedGroupIntelligence::SetDefaultTaskAllocatorType((CPedGroupIntelligence *)(*((_DWORD *)this + 3) + 48), 5);
      v17 = CTask::operator new((CTask *)&dword_20, v16);
      CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v17, 500, 0, 0, 8.0);
      return v17;
    }
  }
  if ( *((_BYTE *)this + 48) )
  {
    if ( *((_BYTE *)this + 49) )
    {
      v18 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 49) = 0;
      *((_DWORD *)this + 10) = v18;
      v19 = v18;
    }
    else
    {
      v19 = *((_DWORD *)this + 10);
      v18 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v19 + *((_DWORD *)this + 11) <= v18 )
    {
      v47[1] = 0.1;
      v47[0] = 0.0;
      v47[2] = 0.0;
      v20 = *((_DWORD *)a2 + 6);
      if ( v20 )
      {
        FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                   (int)&g_fxMan,
                                   (CKeyGen *)"exhale",
                                   (int)v47,
                                   *(_DWORD *)(v20 + 4) + 16,
                                   0);
        v22 = FxSystem;
        if ( FxSystem )
        {
          FxSystem_c::AttachToBone(FxSystem, a2, 5);
          FxSystem_c::PlayAndKill(v22);
        }
        *((_BYTE *)this + 48) = 0;
      }
    }
  }
  (*(void (__fastcall **)(CTaskComplexGangLeader *, CPed *))(*(_DWORD *)this + 52))(this, a2);
  if ( CEntity::IsVisible(a2) != 1 )
    return *((_DWORD *)this + 2);
  if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= 96 )
  {
    v23 = rand();
    v24 = rand();
    Member = (CPed *)CPedGroupMembership::GetMember(
                       (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8),
                       (int)(float)((float)((float)v24 * 0.000015259) * 8.0));
    v26 = Member == 0;
    if ( Member )
      v26 = Member == a2;
    if ( !v26 )
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"TaskGangLeader",
        a2,
        (int)Member,
        (int)(float)((int)(float)((float)((float)v23 * 0.000015259) * 2000.0) + 3000),
        5,
        0,
        1,
        0.15,
        500,
        3,
        0);
  }
  if ( !*((_BYTE *)this + 52) || *((int *)a2 + 276) > 5 )
    return *((_DWORD *)this + 2);
  IsHolding = (__int16 *)CPed::GetEntityThatThisPedIsHolding(a2);
  if ( !IsHolding )
  {
    if ( CPed::IsPlayingHandSignal(a2) || CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
      return *((_DWORD *)this + 2);
    v36 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0);
    v37 = v36 - 51;
    if ( (unsigned int)(v36 - 51) > 4 )
    {
      if ( v36 != 100 )
        return *((_DWORD *)this + 2);
      v38 = *((_DWORD *)a2 + 272);
      v39 = (CTask *)CTask::operator new((CTask *)&off_18, v37);
      CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
    }
    else
    {
      v38 = *((_DWORD *)a2 + 272);
      v39 = (CTask *)CTask::operator new((CTask *)&dword_20, v37);
      v40 = rand();
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(
        (int)v39,
        52,
        (int)(float)((float)((float)v40 * 0.000015259) * 8.0) + 279,
        1082130432,
        0);
    }
    CTaskManager::SetTaskSecondary((CTaskManager *)(v38 + 4), v39, 4);
    return *((_DWORD *)this + 2);
  }
  Association = RpAnimBlendClumpGetAssociation();
  v29 = RpAnimBlendClumpGetAssociation();
  v30 = Association | v29 | RpAnimBlendClumpGetAssociation();
  v31 = RpAnimBlendClumpGetAssociation();
  v32 = v30 | v31;
  if ( v30 | v31 )
  {
    v32 = 1;
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    *((_DWORD *)a2 + 291) |= 0x400000u;
  }
  if ( v29 | v31 && (v29 && *(float *)(v29 + 32) < 0.5 || v31 && *(float *)(v31 + 32) < 0.5) && !*((_BYTE *)this + 48) )
  {
    *((_QWORD *)this + 5) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xA8C00000000LL;
    *((_BYTE *)this + 48) = 1;
  }
  v33 = IsHolding[19];
  if ( v33 == (unsigned __int16)MI_GANG_DRINK )
  {
    CPed::Say(a2, 0x17u, 0, 0.2, 0, 0, 0);
  }
  else if ( v33 == (unsigned __int16)MI_GANG_SMOKE )
  {
    CPed::Say(a2, 0xC8u, 0, 0.2, 0, 0, 0);
  }
  if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1211) )
    return *((_DWORD *)this + 2);
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0) != 200 )
  {
    if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) == 50
      && CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 307) )
    {
      CTaskComplexGangLeader::GetRandomGangAmbientAnim(a2, (CPed *)IsHolding, v45);
      CTaskSimpleHoldEntity::PlayAnim();
    }
    return *((_DWORD *)this + 2);
  }
  if ( v32 )
    return *((_DWORD *)this + 2);
  ClosestGroupPed = CPedGroup::GetClosestGroupPed(*((CPedGroup **)this + 3), a2, v47);
  if ( !ClosestGroupPed
    || v47[0] >= 4.0
    || CPed::IsPlayer(a2) == 1
    || CPed::GetEntityThatThisPedIsHolding((CPed *)ClosestGroupPed)
    || *(_DWORD *)(ClosestGroupPed + 28 * *(char *)(ClosestGroupPed + 1820) + 1444) )
  {
    return *((_DWORD *)this + 2);
  }
  v43 = IsHolding[19];
  if ( v43 == (unsigned __int16)MI_GANG_DRINK )
  {
    v44 = 24;
LABEL_86:
    CPed::Say((CPed *)ClosestGroupPed, v44, 0, 1.0, 0, 0, 0);
    goto LABEL_87;
  }
  if ( v43 == (unsigned __int16)MI_GANG_SMOKE )
  {
    v44 = 201;
    goto LABEL_86;
  }
LABEL_87:
  CEvent::CEvent((CEvent *)v47);
  v48 = a2;
  LODWORD(v47[0]) = &off_6670C0;
  CEntity::RegisterReference(a2, &v48);
  v49 = 0;
  CEventGroup::Add((CEventGroup *)(*(_DWORD *)(ClosestGroupPed + 1088) + 104), (CEvent *)v47, 0);
  v17 = CTask::operator new((CTask *)&word_30, v46);
  CTaskComplex::CTaskComplex((CTaskComplex *)v17);
  *(_WORD *)(v17 + 40) = 0;
  *(_BYTE *)(v17 + 16) = 1;
  *(_DWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 36) = 0;
  *(_DWORD *)v17 = &off_66BFFC;
  *(_DWORD *)(v17 + 12) = ClosestGroupPed;
  CEntity::RegisterReference((CEntity *)ClosestGroupPed, (CEntity **)(v17 + 12));
  LODWORD(v47[0]) = &off_6670C0;
  if ( v48 )
    CEntity::CleanUpOldReference(v48, &v48);
  CEvent::~CEvent((CEvent *)v47);
  return v17;
}


// ============================================================

// Address: 0x515cb8
// Original: _ZN22CTaskComplexGangLeader19ShouldLoadGangAnimsEv
// Demangled: CTaskComplexGangLeader::ShouldLoadGangAnims(void)
int __fastcall CTaskComplexGangLeader::ShouldLoadGangAnims(CTaskComplexGangLeader *this)
{
  int v1; // r1
  float *v2; // r0
  bool v3; // zf

  v1 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v2 = *(float **)(v1 + 1424);
  v3 = v2 == 0;
  if ( v2 )
    v3 = (*(_DWORD *)(v1 + 1156) & 0x100) == 0;
  if ( v3 || (float)((float)((float)(v2[18] * v2[18]) + (float)(v2[19] * v2[19])) + (float)(v2[20] * v2[20])) <= 0.04 )
    return CStreaming::IsVeryBusy((CStreaming *)v2) ^ 1;
  else
    return 0;
}


// ============================================================

// Address: 0x515d30
// Original: _ZN22CTaskComplexGangLeader15TryToPassObjectEP4CPedP9CPedGroup
// Demangled: CTaskComplexGangLeader::TryToPassObject(CPed *,CPedGroup *)
int __fastcall CTaskComplexGangLeader::TryToPassObject(CTaskComplexGangLeader *this, CPed *a2, CPedGroup *a3)
{
  int ClosestGroupPed; // r4
  float v6[3]; // [sp+4h] [bp-Ch] BYREF

  ClosestGroupPed = CPedGroup::GetClosestGroupPed(a2, this, v6);
  if ( !ClosestGroupPed || v6[0] >= 4.0 )
    return 0;
  if ( CPed::IsPlayer(this) == 1 )
    return 0;
  return ClosestGroupPed;
}


// ============================================================

// Address: 0x515d70
// Original: _ZN22CTaskComplexGangLeader24GetRandomGangAmbientAnimEP4CPedP7CEntity
// Demangled: CTaskComplexGangLeader::GetRandomGangAmbientAnim(CPed *,CEntity *)
int __fastcall CTaskComplexGangLeader::GetRandomGangAmbientAnim(CTaskComplexGangLeader *this, CPed *a2, CEntity *a3)
{
  int v4; // r0
  int v5; // s0
  float v6; // s4
  int result; // r0
  int v8; // r1
  bool v9; // zf
  int v10; // r1
  bool v11; // zf

  if ( !a2 )
    goto LABEL_7;
  v4 = *((__int16 *)a2 + 19);
  if ( v4 != (unsigned __int16)MI_GANG_DRINK )
  {
    if ( v4 == (unsigned __int16)MI_GANG_SMOKE && (rand() & 1) != 0 )
    {
      v10 = *((__int16 *)this + 19);
      result = 302;
      v11 = v10 == 103;
      if ( v10 != 103 )
        v11 = v10 == 105;
      if ( !v11 )
        return 300;
      return result;
    }
LABEL_7:
    v6 = 8.0;
    v5 = (unsigned __int16)rand();
    return (int)(float)((float)((float)v5 * 0.000015259) * v6) + 279;
  }
  if ( (rand() & 1) == 0 )
  {
    v5 = (unsigned __int16)rand();
    v6 = 4.0;
    return (int)(float)((float)((float)v5 * 0.000015259) * v6) + 279;
  }
  v8 = *((__int16 *)this + 19);
  result = 301;
  v9 = v8 == 103;
  if ( v8 != 103 )
    v9 = v8 == 105;
  if ( !v9 )
    return 299;
  return result;
}


// ============================================================

// Address: 0x515e20
// Original: _ZN22CTaskComplexGangLeader12ScanForStuffEP4CPed
// Demangled: CTaskComplexGangLeader::ScanForStuff(CPed *)
void __fastcall CTaskComplexGangLeader::ScanForStuff(CTaskComplexGangLeader *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d10
  unsigned int v6; // r0
  unsigned int v7; // r1
  int v8; // r0
  CEvent *v9; // r6
  int v10; // r4
  int v11; // r8
  int *v12; // r11
  int v13; // r5
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  float32x2_t *v17; // r1
  _QWORD *v18; // r2
  float32x2_t *v19; // r0
  float *v20; // r2
  float32x2_t v21; // d16
  float v22; // s0
  float32x2_t v23; // d16
  unsigned __int64 v24; // d1
  unsigned int v25; // r1
  CEvent *v26; // r11
  int v27; // r6
  CEvent *v28; // r2
  CEventGroupEvent *v29; // r0
  int v30; // r0
  int v31; // r4
  int v32; // r11
  int v33; // r5
  const CPed *v34; // r1
  int PedsGroup; // r8
  int PlayerPed; // r0
  int ActiveTaskByType; // r0
  CPedGroup *v38; // r1
  CTaskComplexWanderGang *v39; // r6
  int GroupId; // r4
  unsigned int v41; // r1
  CTaskComplexBeInGroup *v42; // r6
  int v43; // r6
  CEntity *v44; // r9
  CPedGroupMembership *v45; // r8
  int Member; // r0
  bool v47; // zf
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r1
  float32x2_t v52; // d16
  unsigned __int64 v53; // d1
  bool v54; // nf
  unsigned __int16 v55; // r4
  int v56; // r0
  CEntity **v57; // r6
  int v58; // r4
  unsigned __int16 v59; // [sp+4h] [bp-84h]
  int *v60; // [sp+8h] [bp-80h]
  _DWORD v61[4]; // [sp+10h] [bp-78h] BYREF
  CEntity *v62; // [sp+20h] [bp-68h] BYREF
  char v63; // [sp+24h] [bp-64h]
  int v64; // [sp+28h] [bp-60h]
  _DWORD v65[3]; // [sp+2Ch] [bp-5Ch] BYREF
  int v66; // [sp+38h] [bp-50h]
  CEntity *v67; // [sp+3Ch] [bp-4Ch]
  char v68; // [sp+40h] [bp-48h]
  int v69; // [sp+44h] [bp-44h]

  if ( !*((_BYTE *)this + 36)
    || (!*((_BYTE *)this + 37)
      ? (v7 = *((_DWORD *)this + 7), v6 = CTimer::m_snTimeInMilliseconds)
      : (v6 = CTimer::m_snTimeInMilliseconds, *((_BYTE *)this + 37) = 0, *((_DWORD *)this + 7) = v6, v7 = v6),
        v7 + *((_DWORD *)this + 8) <= v6) )
  {
    v8 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
    if ( v8 > 4 )
    {
      if ( v8 == 20 )
      {
        v30 = 76;
        v31 = *((_DWORD *)a2 + 272);
        while ( 1 )
        {
          v32 = v30;
          v33 = *(_DWORD *)(v31 + 4 * v30);
          if ( v33 )
          {
            if ( *(_BYTE *)(v33 + 1096) == 1 )
            {
              v34 = (const CPed *)*((_DWORD *)a2 + 359);
              if ( v34 == *(const CPed **)(v33 + 1436) )
              {
                PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)v33, v34);
                if ( PedsGroup != *((_DWORD *)this + 3) && !(*(unsigned __int8 *)(v33 + 1157) << 31) )
                {
                  PlayerPed = FindPlayerPed(-1);
                  if ( !CPedGroupMembership::IsMember(
                          (CPedGroupMembership *)&CPedGroups::ms_groups[181
                                                                      * *(_DWORD *)(*(_DWORD *)(PlayerPed + 1092) + 56)
                                                                      + 2],
                          (const CPed *)v33) )
                  {
                    ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                                         (CTaskManager *)(*((_DWORD *)a2 + 272) + 4),
                                         912);
                    v39 = (CTaskComplexWanderGang *)ActiveTaskByType;
                    if ( !ActiveTaskByType
                      || (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTaskByType + 52))(ActiveTaskByType) != 4
                      || CTaskComplexWanderGang::CanJoinGang(v39) )
                    {
                      break;
                    }
                  }
                }
              }
            }
          }
          v30 = v32 + 1;
          if ( v32 - 76 >= 15 )
            return;
        }
        if ( !PedsGroup )
        {
          GroupId = CPedGroups::GetGroupId(*((CPedGroups **)this + 3), v38);
          if ( CPedGroupMembership::CountMembersExcludingLeader((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8)) <= 6 )
          {
            v42 = (CTaskComplexBeInGroup *)CTask::operator new((CTask *)&word_28, v41);
            CTaskComplexBeInGroup::CTaskComplexBeInGroup(v42, GroupId, 0);
            CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)v65, 3, v42, 0);
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v33 + 1088) + 104), (CEvent *)v65, 0);
            CPedGroupMembership::AddFollower((CPedGroupMembership *)(*((_DWORD *)this + 3) + 8), (CPed *)v33);
            CPedGroup::Process(*((CPedGroup **)this + 3));
            CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)v65);
          }
        }
        v43 = 0;
        v3.n64_u32[0] = 1315859240;
        v44 = 0;
        v45 = (CPedGroupMembership *)(*((_DWORD *)this + 3) + 8);
        do
        {
          Member = CPedGroupMembership::GetMember(v45, v43);
          v47 = Member == 0;
          if ( Member )
            v47 = Member == v33;
          if ( !v47 )
          {
            v48 = *(_DWORD *)(Member + 20);
            v49 = *(_DWORD *)(v33 + 20);
            v50 = v48 + 48;
            if ( !v48 )
              v50 = Member + 4;
            v51 = v49 + 48;
            if ( !v49 )
              v51 = v33 + 4;
            v52.n64_u64[0] = vsub_f32(*(float32x2_t *)(v51 + 4), *(float32x2_t *)(v50 + 4)).n64_u64[0];
            v53 = vmul_f32(v52, v52).n64_u64[0];
            v2.n64_f32[0] = (float)((float)((float)(*(float *)v51 - *(float *)v50)
                                          * (float)(*(float *)v51 - *(float *)v50))
                                  + *(float *)&v53)
                          + *((float *)&v53 + 1);
            v54 = v2.n64_f32[0] < v3.n64_f32[0];
            v3.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
            if ( v54 )
              v44 = (CEntity *)Member;
          }
          ++v43;
        }
        while ( v43 != 8 );
        if ( v3.n64_f32[0] <= 100.0 && v3.n64_f32[0] >= 16.0 )
        {
          v55 = rand();
          CEvent::CEvent((CEvent *)v65);
          v57 = (CEntity **)(v56 + 16);
          v67 = v44;
          v68 = 1;
          v69 = 1056964608;
          v65[0] = &off_669034;
          v66 = (int)(float)((float)((float)v55 * 0.000015259) * 7.0);
          v58 = v66;
          if ( v44 )
            CEntity::RegisterReference(v44, v57);
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v33 + 1088) + 104), (CEvent *)v65, 0);
          CEvent::CEvent((CEvent *)v61);
          v61[3] = v58;
          v61[0] = &off_669034;
          v62 = (CEntity *)v33;
          v63 = 0;
          v64 = 1056964608;
          CEntity::RegisterReference((CEntity *)v33, &v62);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)v44 + 272) + 104), (CEvent *)v61, 0);
          v61[0] = &off_669034;
          if ( v62 )
            CEntity::CleanUpOldReference(v62, &v62);
          CEvent::~CEvent((CEvent *)v61);
          v65[0] = &off_669034;
          if ( v67 )
            CEntity::CleanUpOldReference(v67, v57);
          CEvent::~CEvent((CEvent *)v65);
        }
        *(_QWORD *)((char *)this + 28) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x271000000000LL;
        *((_BYTE *)this + 36) = 1;
      }
    }
    else
    {
      v9 = (CEvent *)v65;
      v10 = *((_DWORD *)a2 + 272) + 224;
      v11 = 0;
      v12 = &CTimer::m_snTimeInMilliseconds;
      do
      {
        v13 = *(_DWORD *)(v10 + 4 * v11);
        if ( v13 && !*(_DWORD *)(v13 + 1444) )
        {
          v14 = *(_BYTE *)(v13 + 58) & 0xF8;
          v15 = v14 == 32;
          if ( v14 == 32 )
            v15 = *(unsigned __int8 *)(v13 + 1074) << 31 == 0;
          if ( v15 && *(_BYTE *)(v13 + 1192) != 2 )
          {
            v16 = *((_DWORD *)a2 + 5);
            v17 = *(float32x2_t **)(v13 + 20);
            v18 = (_QWORD *)(v16 + 48);
            if ( !v16 )
              v18 = (_QWORD *)((char *)a2 + 4);
            v19 = v17 + 6;
            v21.n64_u64[0] = *v18;
            v20 = (float *)(v18 + 1);
            if ( !v17 )
              v19 = (float32x2_t *)(v13 + 4);
            v22 = v19[1].n64_f32[0] - *v20;
            if ( fabsf(v22) < 5.0 )
            {
              v23.n64_u64[0] = vsub_f32((float32x2_t)v19->n64_u64[0], v21).n64_u64[0];
              v24 = vmul_f32(v23, v23).n64_u64[0];
              if ( (float)((float)(*(float *)&v24 + *((float *)&v24 + 1)) + (float)(v22 * v22)) < 300.0 )
              {
                v59 = rand();
                v60 = v12;
                v26 = v9;
                v27 = CEvent::operator new((CEvent *)&dword_14, v25);
                CEvent::CEvent((CEvent *)v27);
                *(_DWORD *)v27 = &off_667074;
                *(_DWORD *)(v27 + 16) = (int)(float)((float)((float)v59 * 0.000015259) * 15000.0) + 10000;
                *(_DWORD *)(v27 + 12) = v13;
                CEntity::RegisterReference((CEntity *)v13, (CEntity **)(v27 + 12));
                v28 = (CEvent *)v27;
                v29 = v26;
                v9 = v26;
                v12 = v60;
                CEventGroupEvent::CEventGroupEvent(v29, a2, v28);
                CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(*((_DWORD *)this + 3) + 48), v9);
                *((_DWORD *)this + 7) = *v60;
                *((_DWORD *)this + 8) = 60000;
                *((_BYTE *)this + 36) = 1;
                CEventGroupEvent::~CEventGroupEvent(v9);
              }
            }
          }
        }
        ++v11;
      }
      while ( v11 != 16 );
    }
  }
}


// ============================================================

// Address: 0x5162c0
// Original: _ZN22CTaskComplexGangLeader12GetDrinkAnimEP4CPed
// Demangled: CTaskComplexGangLeader::GetDrinkAnim(CPed *)
int __fastcall CTaskComplexGangLeader::GetDrinkAnim(CTaskComplexGangLeader *this, CPed *a2)
{
  int v2; // r1
  int result; // r0

  v2 = *((__int16 *)this + 19);
  result = 301;
  if ( v2 != 103 && v2 != 105 )
    return 299;
  return result;
}


// ============================================================

// Address: 0x5162d8
// Original: _ZN22CTaskComplexGangLeader12GetSmokeAnimEP4CPed
// Demangled: CTaskComplexGangLeader::GetSmokeAnim(CPed *)
int __fastcall CTaskComplexGangLeader::GetSmokeAnim(CTaskComplexGangLeader *this, CPed *a2)
{
  int v2; // r1
  int result; // r0

  v2 = *((__int16 *)this + 19);
  result = 302;
  if ( v2 != 103 && v2 != 105 )
    return 300;
  return result;
}


// ============================================================

// Address: 0x5162f0
// Original: _ZN22CTaskComplexGangLeader17DoGangAbuseSpeechEP4CPedS1_
// Demangled: CTaskComplexGangLeader::DoGangAbuseSpeech(CPed *,CPed *)
unsigned int __fastcall CTaskComplexGangLeader::DoGangAbuseSpeech(CTaskComplexGangLeader *this, CPed *a2, CPed *a3)
{
  unsigned int result; // r0
  int v6; // r0
  unsigned __int16 v7; // r1

  result = *((_DWORD *)this + 359) - 7;
  if ( result <= 9 )
  {
    v6 = *((_DWORD *)a2 + 359);
    if ( (unsigned int)(v6 - 7) >= 0xA )
    {
      result = CPed::IsPlayer(a2);
      if ( result != 1 )
        return result;
      v6 = *((_DWORD *)a2 + 359);
    }
    if ( v6 == 8 )
      goto LABEL_9;
    if ( v6 == 7 )
    {
      v7 = 1;
      return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
    }
    if ( CPed::IsPlayer(a2) == 1 )
    {
LABEL_9:
      v7 = 4;
      return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
    }
    result = *((_DWORD *)a2 + 359) - 10;
    switch ( *((_DWORD *)a2 + 359) )
    {
      case 0xA:
        v7 = 7;
        return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
      case 0xB:
        v7 = 8;
        return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
      case 0xC:
        v7 = 6;
        return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
      case 0xD:
        v7 = 5;
        return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
      case 0xE:
        v7 = 3;
        return CPed::Say(this, v7, 0, 1.0, 0, 0, 0);
      default:
        return result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x516380
// Original: _ZN22CTaskComplexGangLeader18DoGangAttackSpeechEP4CPedS1_
// Demangled: CTaskComplexGangLeader::DoGangAttackSpeech(CPed *,CPed *)
char *__fastcall CTaskComplexGangLeader::DoGangAttackSpeech(char *this, CPed *a2, CPed *a3)
{
  CPed *v3; // r4
  bool v4; // zf
  unsigned __int16 v6; // r1

  v3 = (CPed *)this;
  v4 = this == 0;
  if ( this )
    v4 = a2 == 0;
  if ( !v4 )
  {
    this = (char *)(*((_DWORD *)this + 359) - 7);
    if ( (unsigned int)this <= 9 )
    {
      this = (char *)*((_DWORD *)a2 + 359);
      if ( (unsigned int)(this - 7) >= 0xA )
      {
        this = (char *)FindPlayerPed(0);
        if ( this != (char *)a2 )
          return this;
        this = (char *)*((_DWORD *)a2 + 359);
      }
      if ( this == &byte_9[5] )
      {
        v6 = 19;
      }
      else if ( this == byte_9 )
      {
        v6 = 18;
      }
      else
      {
        if ( this != &byte_7 )
          return this;
        v6 = 17;
      }
      return (char *)CPed::Say(v3, v6, 0, 1.0, 0, 0, 0);
    }
  }
  return this;
}


// ============================================================

// Address: 0x51c3b0
// Original: _ZNK22CTaskComplexGangLeader5CloneEv
// Demangled: CTaskComplexGangLeader::Clone(void)
int __fastcall CTaskComplexGangLeader::Clone(CTaskComplexGangLeader *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_38, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_WORD *)(result + 24) = 0;
  *(_WORD *)(result + 36) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_WORD *)(result + 48) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 52) = 0;
  *(_DWORD *)result = &off_66BD7C;
  return result;
}


// ============================================================

// Address: 0x51c3ec
// Original: _ZNK22CTaskComplexGangLeader11GetTaskTypeEv
// Demangled: CTaskComplexGangLeader::GetTaskType(void)
int __fastcall CTaskComplexGangLeader::GetTaskType(CTaskComplexGangLeader *this)
{
  return 1201;
}


// ============================================================
