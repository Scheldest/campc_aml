
// Address: 0x1913e0
// Original: j__ZN23CTaskSimplePlayerOnFoot19PlayerControlDuckedEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlDucked(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlDucked(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return _ZN23CTaskSimplePlayerOnFoot19PlayerControlDuckedEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x19219c
// Original: j__ZN23CTaskSimplePlayerOnFoot18PlayIdleAnimationsEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayIdleAnimations(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::PlayIdleAnimations(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return _ZN23CTaskSimplePlayerOnFoot18PlayIdleAnimationsEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x192efc
// Original: j__ZN23CTaskSimplePlayerOnFoot24PlayerControlZeldaWeaponEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return _ZN23CTaskSimplePlayerOnFoot24PlayerControlZeldaWeaponEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x193830
// Original: j__ZN23CTaskSimplePlayerOnFoot20PlayerControlFighterEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlFighter(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlFighter(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return _ZN23CTaskSimplePlayerOnFoot20PlayerControlFighterEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x194ce0
// Original: j__ZN23CTaskSimplePlayerOnFoot19ProcessPlayerWeaponEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return _ZN23CTaskSimplePlayerOnFoot19ProcessPlayerWeaponEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x198940
// Original: j__ZN23CTaskSimplePlayerOnFoot18PlayerControlZeldaEP10CPlayerPedb
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlZelda(CPlayerPed *,bool)
// attributes: thunk
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlZelda(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2, bool a3)
{
  return _ZN23CTaskSimplePlayerOnFoot18PlayerControlZeldaEP10CPlayerPedb(this, a2, a3);
}


// ============================================================

// Address: 0x199234
// Original: j__ZN23CTaskSimplePlayerOnFootC2Ev
// Demangled: CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(void)
// attributes: thunk
void __fastcall CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(CTaskSimplePlayerOnFoot *this)
{
  _ZN23CTaskSimplePlayerOnFootC2Ev(this);
}


// ============================================================

// Address: 0x5374e0
// Original: _ZN23CTaskSimplePlayerOnFootC2Ev
// Demangled: CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(void)
void __fastcall CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(CTaskSimplePlayerOnFoot *this)
{
  int AnimationBlockIndex; // r0
  int v3; // r1

  CTaskSimple::CTaskSimple(this);
  *(_DWORD *)this = &off_66CF38;
  AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"playidles", (const char *)&off_66CF38);
  v3 = CTimer::m_FrameCounter;
  *((_DWORD *)this + 8) = AnimationBlockIndex;
  *((_DWORD *)this + 9) = v3;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
}


// ============================================================

// Address: 0x537520
// Original: _ZN23CTaskSimplePlayerOnFootD2Ev
// Demangled: CTaskSimplePlayerOnFoot::~CTaskSimplePlayerOnFoot()
// attributes: thunk
void __fastcall CTaskSimplePlayerOnFoot::~CTaskSimplePlayerOnFoot(CTaskSimplePlayerOnFoot *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x537524
// Original: _ZN23CTaskSimplePlayerOnFootD0Ev
// Demangled: CTaskSimplePlayerOnFoot::~CTaskSimplePlayerOnFoot()
void __fastcall CTaskSimplePlayerOnFoot::~CTaskSimplePlayerOnFoot(CTaskSimplePlayerOnFoot *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x537534
// Original: _ZN23CTaskSimplePlayerOnFoot13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimplePlayerOnFoot::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimplePlayerOnFoot::MakeAbortable(
        CTaskSimplePlayerOnFoot *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v6; // r6
  int TaskSecondary; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  int v13; // r1

  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 0;
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
      goto LABEL_14;
    }
    return 0;
  }
  if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) )
    goto LABEL_14;
  if ( a4 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 61 )
      return 0;
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
    {
      TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 1018
        || (*((_BYTE *)a4 + 33) & 2) != 0 )
      {
        v8 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
        (*(void (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v8 + 28))(v8, a2, 1, a4);
      }
LABEL_14:
      if ( *((_DWORD *)a2 + 456) || (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) != 0 )
      {
        if ( !a4 )
          return 1;
      }
      else
      {
        v10 = CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera);
        v6 = 1;
        if ( !a4 || !v10 )
          return v6;
      }
      if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 9
        && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 66 )
      {
        return 1;
      }
      if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 9 )
        goto LABEL_31;
      v11 = *((_BYTE *)a4 + 60) == 0;
      if ( *((_BYTE *)a4 + 60) )
        v11 = *((_BYTE *)a4 + 9) == 0;
      if ( !v11 )
        goto LABEL_31;
      if ( !*((_DWORD *)a2 + 64) )
      {
        if ( (*((_BYTE *)a4 + 33) & 2) == 0 )
        {
          v12 = *((_DWORD *)a4 + 6);
          v6 = 1;
          if ( v12 < 48 || v12 == 52 )
            return v6;
        }
LABEL_31:
        CCamera::ClearPlayerWeaponMode((CCamera *)&TheCamera);
        CWeaponEffects::ClearCrossHair(*((CWeaponEffects **)a2 + 359), v13);
        CPed::SetWeaponLockOnTarget(a2, 0);
      }
      return 1;
    }
  }
  if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) )
    goto LABEL_14;
  v6 = 0;
  v9 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
  if ( (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v9 + 28))(v9, a2, 1, a4) == 1 )
    goto LABEL_14;
  return v6;
}


// ============================================================

// Address: 0x537798
// Original: _ZN23CTaskSimplePlayerOnFoot19ProcessPlayerWeaponEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(CPlayerPed *)
int __fastcall CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  int result; // r0
  char *v5; // r6
  int WeaponInfo; // r8
  int v7; // r0
  CPed *v8; // r10
  int v9; // r5
  CEntity *v10; // r9
  CEntity *v11; // r1
  CEntity *v12; // r2
  int v13; // r1
  char v14; // r1
  int v15; // r0
  char v16; // r11
  int v17; // r0
  int v18; // r0
  bool v19; // zf
  int FirstAssociation; // r5
  char *v21; // r0
  unsigned int v22; // r1
  int v23; // r6
  CTaskComplexUseGoggles *v24; // r5
  CEntity *v25; // r2
  signed __int8 v26; // r8
  CTaskSimpleThrowProjectile *v27; // r0
  char v28; // r1
  CTaskSimpleUseGun *v29; // r0
  CHID *Target; // r0
  int v31; // r0
  bool v32; // zf
  int v33; // r8
  unsigned int v34; // r1
  CTask *v35; // r5
  CEventDamage *v36; // r0
  int v37; // r8
  __int16 v38; // r1
  int v39; // r1
  CWeapon *v40; // r0
  CVector *v41; // r2
  int MeleeAttack; // r0
  CPedIntelligence **v43; // r6
  int ActiveTaskByType; // r6
  int v45; // r3
  char *v46; // r0
  int v47; // r6
  int v48; // r0
  unsigned int v49; // r1
  int v50; // r11
  signed __int8 v51; // r5
  int v52; // r0
  int v53; // r1
  int v54; // r0
  CEntity **v55; // r0
  int v56; // r0
  bool v57; // zf
  unsigned int v58; // r1
  int v59; // r6
  CTask *v60; // r5
  int v61; // r0
  unsigned int v62; // r1
  int v63; // r5
  int v64; // r0
  int v65; // r1
  int v66; // r0
  CEntity **v67; // r0
  CTask *v68; // r6
  int v69; // r0
  int Association; // r0
  int TaskSecondary; // r0
  unsigned int v72; // r1
  int v73; // r5
  CEntity **v74; // r0
  CTaskSimpleFight *v75; // r6
  CEntity **v76; // r0
  int v77; // r0
  bool v78; // zf
  int IsTargetingActive; // r0
  bool v80; // zf
  int v81; // r0
  unsigned int v82; // r1
  int v83; // r5
  CEntity **v84; // r0
  CPedIntelligence **v85; // r5
  CPad *v86; // r6
  float v87; // s16
  CEntity **TaskFighting; // r0
  signed __int8 v89; // r2
  CTaskSimpleUseGun *TaskUseGun; // r0
  CEntity **v91; // r0
  __int64 v92; // kr00_8
  CTaskSimpleUseGun *v93; // r0
  int v94; // r5
  _BOOL4 v95; // r6
  int v96; // r0
  float *v97; // r0
  int v98; // r1
  float *v99; // r2
  float *v100; // r3
  float v101; // s20
  float v102; // s18
  float v103; // s16
  float v104; // s4
  float v105; // s2
  float v106; // s0
  int v107; // r1
  int v108; // r0
  unsigned int v109; // r2
  float v110; // r6
  float v111; // r8
  int v112; // r3
  int v113; // r0
  int v114; // r1
  CEntity **v115; // r5
  CTask *v116; // r9
  MobileSettings *v117; // r0
  __int16 v118; // r1
  CHID *v119; // r0
  bool v120; // zf
  CGameLogic *v121; // r0
  bool v122; // zf
  int v123; // r0
  bool v124; // zf
  unsigned int v125; // r1
  CPad *v126; // r0
  CEntity *v127; // r1
  CPlayerPed *v128; // r0
  bool v129; // r2
  int v130; // r5
  int v131; // r0
  int v132; // r0
  int v133; // r5
  CHID *v134; // r0
  __int16 v135; // r1
  int v136; // r1
  bool v137; // zf
  int v138; // r6
  int v139; // r8
  CTask *v140; // r1
  int TaskDuck; // r0
  int v142; // r0
  int v143; // r0
  int InputType; // r0
  bool v145; // zf
  int v146; // r2
  int v147; // r3
  const CVector *v148; // r1
  int v149; // r5
  double v150; // d16
  float v151; // s2
  float *v152; // r0
  float v153; // s0
  float v154; // s10
  float v155; // s0
  int v156; // r0
  unsigned int v157; // r1
  int v158; // r5
  CTask *v159; // r6
  int v160; // r1
  CTaskSimplePlayerOnFoot *v161; // [sp+24h] [bp-A4h]
  CTaskSimplePlayerOnFoot *v162; // [sp+24h] [bp-A4h]
  int v163; // [sp+28h] [bp-A0h]
  CEntity *v164; // [sp+2Ch] [bp-9Ch]
  int v165; // [sp+30h] [bp-98h]
  CPad *PadFromPlayer; // [sp+34h] [bp-94h]
  double v167; // [sp+38h] [bp-90h] BYREF
  float v168; // [sp+40h] [bp-88h]
  double v169; // [sp+78h] [bp-50h] BYREF
  float v170; // [sp+80h] [bp-48h]

  result = CTheScripts::bDrawCrossHair;
  if ( CTheScripts::bDrawCrossHair == 2 )
    return result;
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  v5 = (char *)a2 + 1444;
  CPed::GetWeaponSkill(a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  v7 = *((_DWORD *)a2 + 456);
  v8 = 0;
  v9 = *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361);
  if ( v7 && (*(_BYTE *)(v7 + 58) & 7) == 3 )
    v8 = (CPed *)*((_DWORD *)a2 + 456);
  v10 = (CEntity *)*((_DWORD *)a2 + 457);
  if ( v10 && (*((_BYTE *)v10 + 58) & 7) == 3 )
    v8 = (CPed *)*((_DWORD *)a2 + 457);
  v11 = 0;
  if ( v7 && (*(_BYTE *)(v7 + 58) & 7) == 2 )
    v11 = (CEntity *)*((_DWORD *)a2 + 456);
  if ( v10 )
  {
    v12 = v11;
    if ( (*((_BYTE *)v10 + 58) & 7) == 2 )
      v12 = (CEntity *)*((_DWORD *)a2 + 457);
    v164 = v12;
    if ( (*((_BYTE *)v10 + 58) & 7) != 2 )
      v10 = v11;
  }
  else
  {
    v10 = v11;
    v164 = v11;
  }
  if ( (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 4) != 0 && !v7 )
  {
    CCamera::ClearPlayerWeaponMode((CCamera *)&TheCamera);
    CWeaponEffects::ClearCrossHair(*((CWeaponEffects **)a2 + 359), v13);
  }
  v14 = 100;
  if ( (*(_DWORD *)(WeaponInfo + 24) & 1) != 0 )
    v14 = 95;
  *((_BYTE *)a2 + 1822) = v14;
  if ( CPad::WeaponJustDown(PadFromPlayer, a2, 1, 0) == 1
    && (v8 || CHID::GetInputType((CHID *)((char *)&stderr + 1)) == 2 && *((_DWORD *)a2 + 489)) )
  {
    CPlayerPed::PlayerHasJustAttackedSomeone(a2);
  }
  v165 = v9;
  if ( *((_DWORD *)a2 + 462) || (*(_DWORD *)(WeaponInfo + 24) & 4) == 0 )
  {
    if ( v9 == 36 && !CPad::GetTarget(PadFromPlayer, 0) )
    {
      v15 = *((_DWORD *)a2 + 273);
      *(_DWORD *)(v15 + 148) = 0;
      *(_DWORD *)(v15 + 152) = 0;
    }
LABEL_33:
    if ( *(_DWORD *)WeaponInfo == 5 )
    {
      if ( CPad::WeaponJustDown(PadFromPlayer, a2, 0, 1) == 1 )
      {
        v21 = (char *)a2 + 28 * *((char *)a2 + 1820);
        v22 = *((_DWORD *)v21 + 361);
        if ( v22 - 44 >= 2 )
        {
          if ( v22 == 40 )
          {
            v39 = *((_DWORD *)a2 + 5);
            v40 = (CWeapon *)(v21 + 1444);
            v41 = (CVector *)(v39 + 48);
            if ( !v39 )
              v41 = (CPlayerPed *)((char *)a2 + 4);
            CWeapon::Fire(v40, a2, v41, v41, 0, 0, 0);
          }
        }
        else
        {
          v23 = *((_DWORD *)a2 + 272);
          if ( !*(_DWORD *)(v23 + 16) )
          {
            v24 = (CTaskComplexUseGoggles *)CTask::operator new((CTask *)&byte_9[3], v22);
            CTaskComplexUseGoggles::CTaskComplexUseGoggles(v24);
            CTaskManager::SetTask((CTaskManager *)(v23 + 4), v24, 3, 0);
            *(_BYTE *)(*((_DWORD *)a2 + 273) + 133) = 1;
          }
        }
      }
    }
    else
    {
      if ( !*(_DWORD *)WeaponInfo )
      {
        v161 = this;
        v163 = WeaponInfo;
        if ( v8 )
          goto LABEL_36;
        Target = (CHID *)CPad::GetTarget(PadFromPlayer, 0);
        if ( !Target )
        {
          Target = (CHID *)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
          if ( !Target )
          {
            ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 307);
            v37 = 0;
            if ( CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera) || ActiveTaskByType )
            {
              v43 = (CPedIntelligence **)((char *)a2 + 1088);
            }
            else
            {
              v43 = (CPedIntelligence **)((char *)a2 + 1088);
              if ( !CRopes::PlayerControlsCrane )
              {
                if ( CPad::MeleeAttackJustDown(PadFromPlayer) )
                {
                  v37 = 11;
                  if ( CHID::IsPressed(36, 0) )
                    v37 = 12;
                }
                else
                {
                  v37 = 0;
                }
              }
            }
            if ( CPad::GetBlock(PadFromPlayer) )
              v37 = 2;
            Association = RpAnimBlendClumpGetAssociation();
            v8 = 0;
            if ( Association )
              *(_DWORD *)(Association + 24) = -1073741824;
            if ( v37 << 24 )
              goto LABEL_150;
            goto LABEL_249;
          }
        }
        if ( CHID::GetInputType(Target) == 2 && (v8 = (CPed *)*((_DWORD *)a2 + 489)) != 0 )
        {
LABEL_36:
          v16 = 1;
          if ( *(float *)(*((_DWORD *)a2 + 273) + 20) < 1.9
            && *((_DWORD *)a2 + 276) != 7
            && !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0) )
          {
            v17 = *(_DWORD *)(WeaponInfo + 28);
            if ( v17 )
            {
              v18 = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * v17);
              v19 = v18 == 0;
              if ( v18 )
                v19 = *(_BYTE *)(v18 + 16) == 0;
              if ( !v19 && CPedIntelligence::TestForStealthKill(*((CPedIntelligence **)a2 + 272), v8, 0) == 1 )
              {
                if ( (*((_BYTE *)a2 + 1159) & 4) != 0 )
                {
                  if ( !CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1)
                    || (TaskDuck = CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1),
                        *(float *)(TaskDuck + 28) == 0.0)
                    && *(float *)(TaskDuck + 32) == 0.0
                    && (v160 = *(_DWORD *)(TaskDuck + 16)) != 0
                    && *(float *)(v160 + 24) >= 1.0
                    && !*(_BYTE *)(TaskDuck + 25)
                    && *(__int16 *)(TaskDuck + 14) < 1 )
                  {
                    FirstAssociation = CAnimManager::BlendAnimation(
                                         *((_DWORD *)a2 + 6),
                                         *(_DWORD *)(WeaponInfo + 28),
                                         0x15Bu);
                  }
                  else
                  {
                    FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
                  }
                }
                else
                {
                  FirstAssociation = 0;
                }
                goto LABEL_73;
              }
            }
          }
        }
        else
        {
          v16 = 0;
          v8 = 0;
        }
        FirstAssociation = RpAnimBlendClumpGetAssociation();
        if ( FirstAssociation )
          *(_DWORD *)(FirstAssociation + 24) = -1073741824;
        else
          FirstAssociation = 0;
LABEL_73:
        v31 = CPad::MeleeAttackJustDown(PadFromPlayer);
        v32 = FirstAssociation == 0;
        v33 = v31;
        if ( FirstAssociation )
          v32 = v31 == 0;
        if ( !v32
          && ((*(float *)(FirstAssociation + 24) > 0.5) & (unsigned __int8)v16) == 1
          && CPedIntelligence::TestForStealthKill(*((CPedIntelligence **)a2 + 272), v8, 1) )
        {
          v35 = (CTask *)CTask::operator new((CTask *)&dword_20, v34);
          CTaskSimpleStealthKill::CTaskSimpleStealthKill();
          CTaskManager::SetTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), v35, 3, 0);
          CPedDamageResponseCalculator::CPedDamageResponseCalculator(
            (int)&v169,
            (int)a2,
            0,
            *(_DWORD *)&v5[28 * *((char *)a2 + 1820)],
            3,
            0);
          v36 = (CEventDamage *)CEventDamage::CEventDamage(
                                  (int)&v167,
                                  a2,
                                  CTimer::m_snTimeInMilliseconds,
                                  *(_DWORD *)&v5[28 * *((char *)a2 + 1820)],
                                  3,
                                  0,
                                  0,
                                  (*((_DWORD *)v8 + 289) >> 8) & 1);
          if ( CEventDamage::AffectsPed(v36, v8) == 1 )
          {
            CPedDamageResponseCalculator::ComputeDamageResponse((int)&v169, v8);
            CEventGroup::Add((CEventGroup *)(*((_DWORD *)v8 + 272) + 104), (CEvent *)&v167, 0);
            CCrime::ReportCrime();
            CAEPedWeaponAudioEntity::AddAudioEvent((CPlayerPed *)((char *)a2 + 920), 156);
          }
          CPlayerPed::ClearWeaponTarget(a2);
          CEventDamage::~CEventDamage((CEventDamage *)&v167);
          CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)&v169);
          this = v161;
          WeaponInfo = v163;
          goto LABEL_155;
        }
        if ( v33 == 1 )
        {
          LOBYTE(v37) = 11;
          this = v161;
          goto LABEL_150;
        }
        this = v161;
        if ( (unsigned __int8)v33 == 2 )
        {
          LOBYTE(v37) = 12;
          if ( (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 25) & 2) != 0 )
            LOBYTE(v37) = 11;
          goto LABEL_150;
        }
        if ( CPad::GetBlock(PadFromPlayer) )
        {
          LOBYTE(v37) = 2;
          goto LABEL_150;
        }
        MeleeAttack = CPad::GetMeleeAttack(PadFromPlayer);
        v43 = (CPedIntelligence **)((char *)a2 + 1088);
        if ( v165 == 9 && MeleeAttack && CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)*v43 + 4), 0) )
        {
          LOBYTE(v37) = 11;
LABEL_150:
          TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
          v73 = *((_DWORD *)a2 + 272);
          if ( TaskSecondary )
          {
            if ( CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
            {
              v74 = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
              CTaskSimpleFight::ControlFight(v74, *((CEntity **)a2 + 456), v37);
            }
          }
          else
          {
            v75 = (CTaskSimpleFight *)CTask::operator new((CTask *)&word_28, v72);
            CTaskSimpleFight::CTaskSimpleFight(v75, *((CEntity **)a2 + 456), (char)v37, 0x7D0u);
            CTaskManager::SetTaskSecondary((CTaskManager *)(v73 + 4), v75, 0);
          }
          goto LABEL_154;
        }
LABEL_249:
        if ( CPedIntelligence::GetTaskFighting(*v43) )
        {
          v115 = (CEntity **)CTaskManager::GetTaskSecondary((CPedIntelligence *)((char *)*v43 + 4), 0);
          WeaponInfo = v163;
          if ( *((_DWORD *)a2 + 276) == 1 && CPad::GetSprint(PadFromPlayer, 0) == 1 )
            CTaskSimpleFight::ControlFight(v115, *((CEntity **)a2 + 456), 15);
          else
            CTaskSimpleFight::ControlFight(
              v115,
              *((CEntity **)a2 + 456),
              *(unsigned __int8 *)(*((_DWORD *)a2 + 273) + 32) != *((unsigned __int8 *)a2 + 1820));
          goto LABEL_155;
        }
LABEL_154:
        WeaponInfo = v163;
        goto LABEL_155;
      }
      if ( *((_DWORD *)a2 + 276) != 7
        && *(unsigned __int8 *)(*((_DWORD *)a2 + 273) + 32) == *((unsigned __int8 *)a2 + 1820)
        && CPad::GetWeapon(PadFromPlayer, a2, 1) )
      {
        switch ( *(_DWORD *)WeaponInfo )
        {
          case 1:
          case 3:
            v163 = WeaponInfo;
            if ( CTaskSimpleUseGun::RequirePistolWhip(a2, *((CPed **)a2 + 456), v25) )
            {
              v26 = 5;
            }
            else if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 362) == 2 )
            {
              v56 = CPad::GetTarget(PadFromPlayer, 0);
              v57 = v56 == 0;
              if ( !v56 )
                v57 = *((_DWORD *)a2 + 456) == 0;
              if ( v57 && (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) == 0 )
                break;
              v26 = 1;
            }
            else
            {
              v26 = 2;
            }
            v61 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
            v63 = *((_DWORD *)a2 + 272);
            if ( v61 )
            {
              v64 = CTaskManager::GetTaskSecondary((CTaskManager *)(v63 + 4), 0);
              v65 = (*(int (__fastcall **)(int))(*(_DWORD *)v64 + 20))(v64);
              v66 = *((_DWORD *)a2 + 272);
              if ( v65 == 1017 )
              {
                if ( CPedIntelligence::GetTaskUseGun((CPedIntelligence *)v66) )
                {
                  v67 = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
                  CTaskSimpleUseGun::ControlGun(v67, a2, *((CEntity **)a2 + 456), v26);
                }
              }
              else
              {
                v69 = CTaskManager::GetTaskSecondary((CTaskManager *)(v66 + 4), 0);
                (*(void (__fastcall **)(int, CPlayerPed *, int, _DWORD))(*(_DWORD *)v69 + 28))(v69, a2, 1, 0);
              }
            }
            else
            {
              v68 = (CTask *)CTask::operator new((CTask *)&off_3C, v62);
              CTaskSimpleUseGun::CTaskSimpleUseGun();
              CTaskManager::SetTaskSecondary((CTaskManager *)(v63 + 4), v68, 0);
              *(_DWORD *)(*((_DWORD *)a2 + 273) + 44) = 0;
            }
            if ( CPad::GetTarget(PadFromPlayer, 0) )
              goto LABEL_154;
            WeaponInfo = v163;
            if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) == 42 )
              *(float *)(*((_DWORD *)a2 + 273) + 84) = -CWeapon::ms_fExtinguisherAimAngle;
            break;
          case 2:
            v46 = (char *)a2 + 28 * *((char *)a2 + 1820);
            if ( (unsigned int)(*((_DWORD *)v46 + 361) - 35) > 1 )
            {
              if ( CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0)
                || CPad::WeaponJustDown(PadFromPlayer, a2, 1, 1) != 1 )
              {
                if ( CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0)
                  && (v132 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0),
                      (*(int (__fastcall **)(int))(*(_DWORD *)v132 + 20))(v132) != 1018) )
                {
                  v143 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
                  (*(void (__fastcall **)(int, CPlayerPed *, int, _DWORD))(*(_DWORD *)v143 + 28))(v143, a2, 1, 0);
                }
                else if ( CPedIntelligence::GetTaskThrow(*((CPedIntelligence **)a2 + 272)) )
                {
                  v133 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
                  v28 = CPad::WeaponJustDown(PadFromPlayer, a2, 1, 1) ^ 1;
                  v27 = (CTaskSimpleThrowProjectile *)v133;
                  goto LABEL_58;
                }
              }
              else
              {
                v59 = *((_DWORD *)a2 + 272);
                v60 = (CTask *)CTask::operator new((CTask *)&dword_24, v58);
                CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile();
                CTaskManager::SetTaskSecondary((CTaskManager *)(v59 + 4), v60, 0);
              }
            }
            else
            {
              v162 = this;
              v47 = *((_DWORD *)v46 + 362);
              v48 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
              v50 = *((_DWORD *)a2 + 272);
              v51 = 2;
              if ( v47 == 2 )
                v51 = 1;
              if ( v48 )
              {
                v52 = CTaskManager::GetTaskSecondary((CTaskManager *)(v50 + 4), 0);
                v53 = (*(int (__fastcall **)(int))(*(_DWORD *)v52 + 20))(v52);
                v54 = *((_DWORD *)a2 + 272);
                if ( v53 == 1017 )
                {
                  this = v162;
                  if ( CPedIntelligence::GetTaskUseGun((CPedIntelligence *)v54) )
                  {
                    v55 = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
                    CTaskSimpleUseGun::ControlGun(v55, a2, *((CEntity **)a2 + 456), v51);
                  }
                }
                else
                {
                  v142 = CTaskManager::GetTaskSecondary((CTaskManager *)(v54 + 4), 0);
                  (*(void (__fastcall **)(int, CPlayerPed *, int, _DWORD))(*(_DWORD *)v142 + 28))(v142, a2, 1, 0);
                  this = v162;
                }
              }
              else
              {
                v138 = WeaponInfo;
                v139 = CTask::operator new((CTask *)&off_3C, v49);
                CTaskSimpleUseGun::CTaskSimpleUseGun();
                v140 = (CTask *)v139;
                WeaponInfo = v138;
                CTaskManager::SetTaskSecondary((CTaskManager *)(v50 + 4), v140, 0);
                this = v162;
              }
            }
            break;
          case 4:
            if ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 46
              && (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 365) )
            {
              operator*();
              v168 = v170;
              v167 = v169;
              CWeapon::Fire(
                (CPlayerPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444),
                a2,
                (CVector *)&v167,
                0,
                0,
                0,
                0);
            }
            break;
          default:
            break;
        }
      }
      else if ( CPedIntelligence::GetTaskThrow(*((CPedIntelligence **)a2 + 272)) )
      {
        v27 = (CTaskSimpleThrowProjectile *)CTaskManager::GetTaskSecondary(
                                              (CTaskManager *)(*((_DWORD *)a2 + 272) + 4),
                                              0);
        v28 = 1;
LABEL_58:
        CTaskSimpleThrowProjectile::ControlThrow(v27, v28, 0, 0);
      }
    }
LABEL_155:
    if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 362) == 2 && (*(_BYTE *)(WeaponInfo + 25) & 0x10) != 0 )
    {
      if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
      {
        v76 = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
        CTaskSimpleUseGun::ControlGun(v76, a2, *((CEntity **)a2 + 456), 4);
        goto LABEL_159;
      }
      if ( (*((_BYTE *)a2 + 1159) & 4) == 0 )
      {
        if ( RpAnimBlendClumpGetAssociation() )
          goto LABEL_159;
        v107 = *(_DWORD *)(WeaponInfo + 28);
        v108 = *((_DWORD *)a2 + 6);
        v109 = *(_QWORD *)(WeaponInfo + 24) & 0x1000;
        if ( (*(_QWORD *)(WeaponInfo + 24) & 0x1000) != 0 )
          v109 = 226;
LABEL_226:
        CAnimManager::BlendAnimation(v108, v107, v109);
        goto LABEL_159;
      }
      if ( (*(_DWORD *)(WeaponInfo + 24) & 0x3000) == 0x3000 )
      {
        if ( CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1) )
        {
          v113 = CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)a2 + 272), 1);
          if ( *(float *)(v113 + 28) == 0.0 && *(float *)(v113 + 32) == 0.0 )
          {
            v114 = *(_DWORD *)(v113 + 16);
            if ( v114 )
            {
              if ( *(float *)(v114 + 24) >= 1.0
                && !*(_BYTE *)(v113 + 25)
                && *(__int16 *)(v113 + 14) <= 0
                && !RpAnimBlendClumpGetAssociation() )
              {
                v107 = *(_DWORD *)(WeaponInfo + 28);
                v108 = *((_DWORD *)a2 + 6);
                if ( (*(_DWORD *)(WeaponInfo + 24) & 0x2000) != 0 )
                {
                  v109 = *(_DWORD *)(WeaponInfo + 24) & 0x1000;
                  if ( v109 )
                    v109 = 227;
                }
                else
                {
                  v109 = 0;
                }
                goto LABEL_226;
              }
            }
          }
        }
      }
    }
LABEL_159:
    if ( !*((_DWORD *)a2 + 456) && CHID::IsPressed(36, 0) == 1 )
      CPlayerPed::HandleMeleeTargeting(a2);
    if ( *((_DWORD *)a2 + 462) && (v165 == 33 || (*(_DWORD *)(WeaponInfo + 24) & 4) != 0)
      || *(unsigned __int8 *)(*((_DWORD *)a2 + 273) + 32) != *((unsigned __int8 *)a2 + 1820) )
    {
      goto LABEL_176;
    }
    v77 = *((_DWORD *)a2 + 276);
    v78 = v77 == 7;
    if ( v77 != 7 )
      v78 = *(_DWORD *)WeaponInfo == 2;
    if ( v78
      || (unsigned int)(v165 - 40) <= 5 && ((1 << (v165 - 40)) & 0x31) != 0
      || CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera)
      || !CCamera::IsTargetingActive((CCamera *)&TheCamera, a2)
      && (v165 != 4 && !*(_DWORD *)WeaponInfo || !CPad::GetEnterTargeting(PadFromPlayer)) )
    {
LABEL_176:
      if ( *(unsigned __int8 *)(*((_DWORD *)a2 + 273) + 32) != *((unsigned __int8 *)a2 + 1820)
        || *((_DWORD *)a2 + 276) == 7
        || CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera) != 1 )
      {
        goto LABEL_181;
      }
      IsTargetingActive = CCamera::IsTargetingActive((CCamera *)&TheCamera);
      v80 = IsTargetingActive == 0;
      if ( !IsTargetingActive )
        v80 = *((_DWORD *)a2 + 64) == 0;
      if ( v80 )
      {
LABEL_181:
        if ( *((_DWORD *)a2 + 456) || (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) != 0 )
        {
          v85 = (CPedIntelligence **)((char *)a2 + 1088);
          v86 = PadFromPlayer;
          if ( CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
          {
            v87 = *(float *)(*((_DWORD *)a2 + 273) + 16);
            TaskFighting = (CEntity **)CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272));
            if ( v87 < -0.5 )
              v89 = 16;
            else
              v89 = 15;
            CTaskSimpleFight::ControlFight(TaskFighting, 0, v89);
          }
        }
        else
        {
          v85 = (CPedIntelligence **)((char *)a2 + 1088);
          v86 = PadFromPlayer;
        }
        if ( CPedIntelligence::GetTaskUseGun(*v85) )
        {
          if ( CPad::GetWeapon(v86, a2, 0)
            || CPad::GetPedWalkUpDown(v86) <= 50
            && CPad::GetPedWalkUpDown(v86) >= -50
            && CPad::GetPedWalkLeftRight(v86) <= 50
            && CPad::GetPedWalkLeftRight(v86) >= -50 )
          {
            TaskUseGun = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(*v85);
            CTaskSimpleUseGun::PlayerPassiveControlGun(TaskUseGun);
          }
          else
          {
            v91 = (CEntity **)CPedIntelligence::GetTaskUseGun(*v85);
            CTaskSimpleUseGun::ControlGun(v91, a2, *((CEntity **)a2 + 456), 7);
          }
          if ( (*(_BYTE *)(WeaponInfo + 24) & 2) == 0
            && *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 4 )
          {
            v92 = *((_QWORD *)&TheCamera + 66 * (unsigned __int8)byte_951FFF + 91);
            *((float *)a2 + 344) = atan2f(COERCE_FLOAT(v92 ^ 0x80000000), *((float *)&v92 + 1));
          }
          if ( *((_DWORD *)a2 + 456) || (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) != 0 )
          {
            v93 = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(*v85);
            CTaskSimpleUseGun::AbortIK(v93, a2);
          }
        }
        if ( *((_DWORD *)a2 + 456) )
          CPlayerPed::ClearWeaponTarget(a2);
        CPlayerPed::Clear3rdPersonMouseTarget(a2);
        *(_WORD *)(*((_DWORD *)a2 + 273) + 52) &= ~8u;
        goto LABEL_205;
      }
      v81 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
      v83 = *((_DWORD *)a2 + 272);
      if ( !v81 )
      {
        v116 = (CTask *)CTask::operator new((CTask *)&off_3C, v82);
        CTaskSimpleUseGun::CTaskSimpleUseGun();
        CTaskManager::SetTaskSecondary((CTaskManager *)(v83 + 4), v116, 0);
        goto LABEL_205;
      }
      if ( !CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
      {
LABEL_205:
        *(_WORD *)(*((_DWORD *)a2 + 273) + 52) = (4 * *((_WORD *)a2 + 912)) & 4 | *(_WORD *)(*((_DWORD *)a2 + 273) + 52) & 0xFFFB;
        v94 = *((_DWORD *)a2 + 456);
        if ( !v94 )
          goto LABEL_234;
        v95 = (*(_BYTE *)(v94 + 58) & 7) == 3 && ((*(_BYTE *)(v94 + 1166) & 0x10) != 0 || *(_DWORD *)(v94 + 1100) == 55);
        if ( *(_DWORD *)WeaponInfo
          || (v96 = CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)), !v95) && v96 )
        {
          if ( (*((_BYTE *)a2 + 1159) & 4) != 0 || (*(_BYTE *)(WeaponInfo + 24) & 2) == 0 )
            goto LABEL_234;
        }
        v97 = (float *)*((_DWORD *)a2 + 5);
        v98 = *(_DWORD *)(v94 + 20);
        v99 = v97 + 12;
        if ( !v97 )
          v99 = (float *)((char *)a2 + 4);
        v100 = (float *)(v98 + 48);
        if ( !v98 )
          v100 = (float *)(v94 + 4);
        v101 = *v100 - *v99;
        v102 = v100[1] - v99[1];
        v103 = v100[2] - v99[2];
        if ( v97 )
        {
          v104 = v97[4];
          v105 = v97[5];
          v106 = v97[6];
        }
        else
        {
          v110 = *((float *)a2 + 4);
          v111 = sinf(v110);
          v105 = cosf(v110);
          v106 = 0.0;
          LODWORD(v104) = LODWORD(v111) ^ 0x80000000;
        }
        if ( (float)((float)(v103 * v106) + (float)((float)(v102 * v105) + (float)(v101 * v104))) <= 0.0 )
        {
LABEL_234:
          result = *((_DWORD *)this + 12);
          if ( result )
          {
            result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
            if ( result )
            {
              result = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2);
              if ( result == *((_DWORD *)this + 12) )
                result = IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
            }
          }
        }
        else if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
               || (result = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2), result != v94) )
        {
          v112 = -1;
          if ( (*(_BYTE *)(v94 + 58) & 7) == 3 )
            v112 = 5;
          result = IKChainManager_c::LookAt(
                     (int)&g_ikChainMan,
                     (int)"ProcPlyrWeapon",
                     a2,
                     v94,
                     (int)&unk_98967F,
                     v112,
                     0,
                     0,
                     0.25,
                     500,
                     3,
                     0);
        }
        *((_DWORD *)this + 12) = v94;
        return result;
      }
LABEL_179:
      v84 = (CEntity **)CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
      CTaskSimpleUseGun::ControlGun(v84, a2, *((CEntity **)a2 + 456), 1);
      goto LABEL_205;
    }
    CheckForTargetToPutHandsUp(a2, v8);
    if ( v8
      && CPlayerPed::DoesTargetHaveToBeBroken(a2, v8, (CPlayerPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444))
      || v164
      && CPlayerPed::DoesTargetHaveToBeBroken(a2, v10, (CPlayerPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444))
      || (*((_BYTE *)a2 + 1156) & 0x40) == 0
      && (CPed::GetWeaponSkill(a2), !(*(unsigned __int8 *)(CWeaponInfo::GetWeaponInfo() + 24) << 31)) )
    {
      CPlayerPed::ClearWeaponTarget(a2);
      CPlayerPed::FindWeaponLockOnTarget(a2);
    }
    v117 = (MobileSettings *)(v165 - 33);
    if ( (unsigned int)(v165 - 33) <= 5 )
    {
      v117 = (MobileSettings *)(1 << (char)v117);
      if ( ((unsigned __int8)v117 & 0x31) != 0 )
      {
LABEL_268:
        v118 = *(_WORD *)(*((_DWORD *)a2 + 273) + 52);
        v119 = (CHID *)(*(_DWORD *)(WeaponInfo + 24) & 1);
        if ( (v118 & 8) != 0 || !v119 )
        {
          if ( (v118 & 8) != 0
            && v119
            && CHID::GetInputType(v119) != 2
            && (CPad::ShiftTargetLeftJustDown(PadFromPlayer) || CPad::ShiftTargetRightJustDown(PadFromPlayer) == 1) )
          {
            v130 = *((_DWORD *)a2 + 456);
            v131 = CPad::ShiftTargetLeftJustDown(PadFromPlayer);
            v129 = v131;
            if ( !v130 )
            {
              v128 = a2;
              v127 = 0;
LABEL_294:
              CPlayerPed::FindNextWeaponLockOnTarget(v128, v127, v129);
              goto LABEL_341;
            }
            if ( v131 == 1 )
              CPlayerPed::FindNextWeaponLockOnTarget(a2, *((CEntity **)a2 + 456), 1);
            v126 = PadFromPlayer;
LABEL_292:
            if ( CPad::ShiftTargetRightJustDown(v126) != 1 )
              goto LABEL_341;
            v127 = (CEntity *)*((_DWORD *)a2 + 456);
            v128 = a2;
            v129 = 0;
            goto LABEL_294;
          }
          v134 = (CHID *)(*(unsigned __int8 *)(WeaponInfo + 24) << 28);
          if ( (*(_BYTE *)(WeaponInfo + 24) & 8) != 0 )
          {
            v134 = (CHID *)*((_DWORD *)a2 + 456);
            if ( !v134 )
            {
              v134 = (CHID *)*((_DWORD *)a2 + 273);
              v135 = *((_WORD *)v134 + 26);
              if ( (v135 & 8) == 0 )
                goto LABEL_340;
            }
          }
          if ( CHID::GetInputType(v134) == 2 && (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) != 0 )
          {
            v136 = *(_DWORD *)WeaponInfo;
            if ( *(_DWORD *)WeaponInfo )
              LOBYTE(v136) = 1;
            CPlayerPed::Compute3rdPersonMouseTarget(a2, v136);
          }
        }
        else
        {
          v120 = v164 == 0;
          if ( !v164 )
            v120 = v8 == 0;
          if ( !v120 || (v165 | 4) == 0x25 )
          {
            v121 = (CGameLogic *)(CPad::AimWeaponLeftRight(PadFromPlayer, a2, 0) & 0x7FFFFFFF);
            if ( *(float *)&v121 <= 100.0 || CGameLogic::IsCoopGameGoingOn(v121) == 1 )
            {
              v122 = v164 == 0;
              if ( !v164 )
                v122 = v8 == 0;
              if ( v122 )
                goto LABEL_287;
              if ( v8 )
              {
                if ( (char *)&stderr + 1 != (char *)&stderr + 1 )
                  goto LABEL_287;
                v123 = CLocalisation::KickingWhenDown((CLocalisation *)((char *)&stderr + 1));
                v124 = v123 == 0;
                v125 = *((_DWORD *)v8 + 275) & 0xFFFFFFFE;
                if ( !v123 )
                  v124 = v125 == 54;
                if ( v124
                  || v125 == 54 && (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)v8 + 470)) > 0x12C )
                {
LABEL_287:
                  CPlayerPed::ClearWeaponTarget(a2);
                  CPlayerPed::FindWeaponLockOnTarget(a2);
                }
              }
            }
            if ( !*((_DWORD *)a2 + 456) )
              goto LABEL_349;
            if ( CPad::ShiftTargetLeftJustDown(PadFromPlayer) == 1 )
              CPlayerPed::FindNextWeaponLockOnTarget(a2, *((CEntity **)a2 + 456), 1);
            v126 = PadFromPlayer;
            goto LABEL_292;
          }
          if ( CPad::GetEnterTargeting(PadFromPlayer) == 1
            || *((_DWORD *)this + 9) < (unsigned int)(CTimer::m_FrameCounter - 1) )
          {
            CPlayerPed::FindWeaponLockOnTarget(a2);
            v134 = (CHID *)*((_DWORD *)a2 + 273);
            v135 = *((_WORD *)v134 + 26);
LABEL_340:
            *((_WORD *)v134 + 26) = v135 | 8;
          }
        }
LABEL_341:
        if ( *((_DWORD *)a2 + 456) )
        {
          if ( *(_DWORD *)WeaponInfo || (*((_BYTE *)a2 + 1159) & 4) != 0 )
            *(_WORD *)(*((_DWORD *)a2 + 273) + 52) &= ~8u;
LABEL_345:
          CCamera::SetNewPlayerWeaponMode((CCamera *)&TheCamera, 53, 0, 0);
          v146 = *((_DWORD *)a2 + 456);
          if ( v146 )
          {
            v147 = *(_DWORD *)(v146 + 20);
            v148 = (const CVector *)(v147 + 48);
            if ( !v147 )
              v148 = (const CVector *)(v146 + 4);
          }
          else
          {
            v149 = *((_DWORD *)a2 + 5);
            v150 = *(double *)(v149 + 16);
            v168 = *(float *)(v149 + 24);
            v167 = v150;
            v151 = sinf(*(float *)(*((_DWORD *)a2 + 273) + 84));
            v152 = (float *)(v149 + 48);
            v148 = (const CVector *)&v167;
            v153 = (float)(v151 + v168) * 5.0;
            v168 = v153;
            if ( !v149 )
              v152 = (float *)((char *)a2 + 4);
            v154 = v152[1];
            v155 = v152[2] + v153;
            *(float *)&v167 = *v152 + (float)(*(float *)&v167 * 5.0);
            *((float *)&v167 + 1) = v154 + (float)(*((float *)&v167 + 1) * 5.0);
            v168 = v155;
          }
          CCamera::UpdateAimingCoors((CCamera *)&TheCamera, v148);
          v156 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 0);
          v158 = *((_DWORD *)a2 + 272);
          if ( !v156 )
          {
            v159 = (CTask *)CTask::operator new((CTask *)&off_3C, v157);
            CTaskSimpleUseGun::CTaskSimpleUseGun();
            CTaskManager::SetTaskSecondary((CTaskManager *)(v158 + 4), v159, 0);
            goto LABEL_205;
          }
          if ( !CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
            goto LABEL_205;
          goto LABEL_179;
        }
LABEL_349:
        if ( *(_DWORD *)WeaponInfo <= 5u && ((1 << *(_DWORD *)WeaponInfo) & 0x25) != 0 )
          goto LABEL_205;
        goto LABEL_345;
      }
    }
    if ( MobileSettings::IsLockOnMode(v117) )
    {
      v137 = v164 == 0;
      if ( !v164 )
        v137 = v8 == 0;
      if ( !v137 )
        goto LABEL_268;
    }
    else
    {
      InputType = CHID::GetInputType(0);
      v145 = v164 == 0;
      if ( !v164 )
        v145 = v8 == 0;
      if ( !v145 || InputType != 1 )
        goto LABEL_268;
    }
    CPlayerPed::FindWeaponLockOnTarget(a2);
    goto LABEL_268;
  }
  if ( !CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera)
    && (CPad::GetEnterTargeting(PadFromPlayer)
     || CPad::GetTarget(PadFromPlayer, 0) == 1 && *((_DWORD *)this + 9) < (unsigned int)(CTimer::m_FrameCounter - 1)) )
  {
    switch ( v9 )
    {
      case '"':
        v38 = 7;
        break;
      case '#':
        v38 = 8;
        break;
      case '$':
        v45 = *((_DWORD *)a2 + 273);
        *(_DWORD *)(v45 + 148) = CTimer::m_snTimeInMilliseconds;
        *(_DWORD *)(v45 + 152) = 0;
        v38 = 51;
        break;
      case '+':
        v38 = 46;
        break;
      default:
        v38 = 34;
        break;
    }
    CCamera::SetNewPlayerWeaponMode((CCamera *)&TheCamera, v38, 0, 0);
    return sub_18D928(a2);
  }
  else
  {
    if ( CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera) || CPad::WeaponUsesTargetingButton(0) != 1 )
      goto LABEL_33;
    if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) )
    {
      v29 = (CTaskSimpleUseGun *)CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
      CTaskSimpleUseGun::PlayerPassiveControlGun(v29);
    }
    result = *((_DWORD *)a2 + 273);
    *(_WORD *)(result + 52) &= ~4u;
  }
  return result;
}


// ============================================================

// Address: 0x538c8c
// Original: _ZN23CTaskSimplePlayerOnFoot18PlayIdleAnimationsEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayIdleAnimations(CPlayerPed *)
int __fastcall CTaskSimplePlayerOnFoot::PlayIdleAnimations(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x538ef0
// Original: _ZN23CTaskSimplePlayerOnFoot20PlayerControlFighterEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlFighter(CPlayerPed *)
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlFighter(CTaskSimplePlayerOnFoot *this, CPedIntelligence **a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d14
  int result; // r0
  int v9; // r9
  int v10; // r11
  CPad *PadFromPlayer; // r10
  float PedWalkLeftRight; // s18
  float PedWalkUpDown; // s20
  float v14; // s26
  float v15; // s24
  float v16; // s16
  float v17; // s28
  float v18; // r0
  int v19; // r4
  float v20; // r5
  float v21; // r4
  float *v22; // r0
  float v23; // r0
  int v24; // r4
  float v25; // s16
  float v26; // r0
  float *v27; // r1
  float v28; // s0
  float v29; // s4
  float v30; // s22
  CPedIntelligence *v31; // r0
  char *v32; // r4
  float v33; // s0
  float v34; // s4
  bool v35; // fzf
  bool v36; // fnf
  float v37; // s4
  float v38; // s4
  float v39; // s0
  float v40; // s4
  CPedIntelligence *v41; // r0
  CPedIntelligence *v42; // r1
  int v43; // r2
  char *v44; // r3
  char *v45; // r1
  float32x2_t v46; // d16
  unsigned __int64 v47; // d1
  int Sprint; // r0
  int v49; // r0
  float v50; // s18
  int v51; // r0
  bool v52; // zf
  char v53; // r4
  float v54; // s2
  float v55; // s0
  CPedIntelligence *v56; // r0
  float v57; // s4
  float v58; // s6
  float v59; // s2
  unsigned int v60; // r0
  int Duck; // r0
  bool v62; // zf
  CPed *v63; // r1
  CEntity **v64; // r0
  signed __int8 v65; // r2
  float v66; // s2
  float v67; // s0
  float v68; // [sp+0h] [bp-60h]

  result = CPedIntelligence::GetTaskFighting(a2[272]);
  v9 = result;
  if ( !result )
    return result;
  v10 = *(_DWORD *)CWeaponInfo::GetWeaponInfo();
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer((CPlayerPed *)a2);
  PedWalkLeftRight = (float)CPad::GetPedWalkLeftRight(PadFromPlayer);
  PedWalkUpDown = (float)CPad::GetPedWalkUpDown(PadFromPlayer);
  v14 = PedWalkLeftRight * 0.0078125;
  v15 = *(float *)&CTimer::ms_fTimeStep;
  v16 = PedWalkUpDown * 0.0078125;
  if ( CGameLogic::IsPlayerUse2PlayerControls((CGameLogic *)a2, (CPlayerPed *)&CTimer::ms_fTimeStep) == 1 )
  {
    v17 = sqrtf((float)(v14 * v14) + (float)(v16 * v16));
    if ( v17 > 0.0 )
    {
      v18 = COERCE_FLOAT(
              CGeneral::GetRadianAngleBetweenPoints(
                0,
                0.0,
                -(float)(PedWalkLeftRight * 0.0078125),
                PedWalkUpDown * 0.0078125,
                v68));
      v19 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v18 - unk_9520F4), COERCE_FLOAT(&TheCamera));
      LODWORD(v20) = COERCE_UNSIGNED_INT(sinf(*(float *)&v19)) ^ 0x80000000;
      v21 = cosf(*(float *)&v19);
      v68 = 0.0;
      if ( CGameLogic::IsPlayerAllowedToGoInThisDirection() == 1 )
      {
        v22 = (float *)a2[5];
        v16 = -(float)(v17 * (float)((float)((float)(v22[4] * v20) + (float)(v21 * v22[5])) + (float)(v22[6] * 0.0)));
        v14 = v17 * (float)((float)((float)(*v22 * v20) + (float)(v21 * v22[1])) + (float)(v22[2] * 0.0));
      }
      else
      {
        v14 = 0.0;
        v16 = 0.0;
      }
    }
  }
  else if ( a2[456] || CHID::GetInputType(0) == 2 && CPad::GetTarget(PadFromPlayer, 0) == 1 )
  {
    v5.n64_f32[0] = sqrtf((float)(v14 * v14) + (float)(v16 * v16));
    if ( v5.n64_f32[0] > 0.0 )
    {
      v23 = COERCE_FLOAT(
              CGeneral::GetRadianAngleBetweenPoints(
                0,
                0.0,
                -(float)(PedWalkLeftRight * 0.0078125),
                PedWalkUpDown * 0.0078125,
                v68));
      v24 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v23 - unk_9520F4), COERCE_FLOAT(&TheCamera));
      v25 = sinf(*(float *)&v24);
      v26 = cosf(*(float *)&v24);
      v27 = (float *)a2[5];
      v28 = (float)((float)(v26 * v27[1]) - (float)(*v27 * v25)) + (float)(v27[2] * 0.0);
      v4.n64_u32[0] = 1.0;
      v29 = vmin_f32(v5, v4).n64_f32[0];
      v16 = -(float)(v29 * (float)((float)((float)(v26 * v27[5]) - (float)(v27[4] * v25)) + (float)(v27[6] * 0.0)));
      v14 = v29 * v28;
    }
  }
  v30 = v15 * 0.07;
  if ( !a2[456] && (CHID::GetInputType(0) != 2 || CPad::GetTarget(PadFromPlayer, 0) != 1) )
  {
    *(float *)&v49 = COERCE_FLOAT(
                       CGeneral::GetRadianAngleBetweenPoints(
                         0,
                         0.0,
                         COERCE_FLOAT(LODWORD(PedWalkLeftRight) ^ 0x80000000),
                         PedWalkUpDown,
                         v68));
    v3.n64_u32[0] = 1.0;
    v2.n64_f32[0] = sqrtf((float)(v14 * v14) + (float)(v16 * v16));
    v50 = vmin_f32(v2, v3).n64_f32[0];
    if ( v50 == 0.0 )
    {
      *((_DWORD *)a2[273] + 3) = 0;
      *((_DWORD *)a2[273] + 4) = 0;
    }
    else if ( v16 <= 0.0 )
    {
      v54 = -v50;
      v55 = *(float *)&v49;
      v56 = a2[273];
      v57 = *((float *)v56 + 4);
      v58 = (float)-v50 - v57;
      if ( fabsf(v58) > v30 )
      {
        v59 = -v30;
        if ( v58 > 0.0 )
          v59 = v15 * 0.07;
        v54 = v57 + v59;
      }
      *((float *)v56 + 4) = v54;
      *((_DWORD *)a2[273] + 3) = 0;
      a2[344] = (CPedIntelligence *)CGeneral::LimitRadianAngle(
                                      COERCE_CGENERAL_(v55 - unk_9520F4),
                                      COERCE_FLOAT(&TheCamera));
    }
    if ( v16 > 0.0 || a2[456] || *(char *)(v9 + 39) > 10 )
      v60 = 0;
    else
      v60 = *((_DWORD *)this + 10) + (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    *((_DWORD *)this + 10) = v60;
    if ( CPad::GetSprint(PadFromPlayer, 0) )
      goto LABEL_61;
    Duck = CPad::GetDuck(PadFromPlayer);
    if ( v16 > 0.0 )
      goto LABEL_61;
    v62 = v10 == 0;
    if ( !v10 )
      v62 = Duck == 0;
    if ( !v62 || *((_DWORD *)this + 10) >> 4 > 0x7Cu )
    {
LABEL_61:
      CPad::GetSprint(PadFromPlayer, 0);
      v53 = 15;
      if ( v50 > 0.5 )
        v53 = 16;
      if ( CTaskSimpleDuck::CanPedDuck((CTaskSimpleDuck *)a2, v63) == 1
        && CPad::DuckJustDown(PadFromPlayer, (CPed *)a2) == 1 )
      {
        CPedIntelligence::SetTaskDuckSecondary(a2[272], 0);
        v53 = 18;
      }
      goto LABEL_68;
    }
    v32 = (char *)(a2 + 273);
    goto LABEL_72;
  }
  v31 = a2[273];
  v32 = (char *)(a2 + 273);
  v33 = *((float *)v31 + 4);
  v34 = fabsf(v16 - v33);
  v35 = v34 == v30;
  v36 = v34 < v30;
  v37 = v16;
  if ( !v36 && !v35 )
  {
    v38 = -v30;
    if ( (float)(v16 - v33) > 0.0 )
      v38 = v15 * 0.07;
    v37 = v33 + v38;
  }
  *((float *)v31 + 4) = v37;
  v39 = *(float *)(*(_DWORD *)v32 + 12);
  if ( fabsf(v14 - v39) > v30 )
  {
    v40 = -v30;
    if ( (float)(v14 - v39) > 0.0 )
      v40 = v15 * 0.07;
    v14 = v39 + v40;
  }
  *(float *)(*(_DWORD *)v32 + 12) = v14;
  v41 = a2[456];
  if ( v41 )
  {
    v42 = a2[5];
    v43 = *((_DWORD *)v41 + 5);
    v44 = (char *)v42 + 48;
    if ( !v42 )
      v44 = (char *)(a2 + 1);
    v45 = (char *)(v43 + 48);
    if ( !v43 )
      v45 = (char *)v41 + 4;
    v46.n64_u64[0] = vsub_f32(*(float32x2_t *)(v45 + 4), *(float32x2_t *)(v44 + 4)).n64_u64[0];
    v47 = vmul_f32(v46, v46).n64_u64[0];
    if ( (float)((float)((float)((float)(*(float *)v45 - *(float *)v44) * (float)(*(float *)v45 - *(float *)v44))
                       + *(float *)&v47)
               + *((float *)&v47 + 1)) <= 16.0
      || *(char *)(v9 + 39) >= 11 )
    {
      Sprint = CPad::GetSprint(PadFromPlayer, 0);
      if ( !v10 && Sprint != 1 )
        goto LABEL_72;
    }
  }
  else
  {
    v51 = CPad::GetSprint(PadFromPlayer, 0);
    v52 = v10 == 0;
    if ( !v10 )
      v52 = v51 == 0;
    if ( v52 )
      goto LABEL_72;
  }
  if ( CPad::GetSprint(PadFromPlayer, 0) )
  {
    v53 = 17;
LABEL_68:
    v64 = (CEntity **)v9;
    v65 = v53;
    return CTaskSimpleFight::ControlFight(v64, 0, v65);
  }
  if ( v16 < -0.5 )
  {
    v53 = 16;
    goto LABEL_68;
  }
  if ( !CPad::GetBlock(PadFromPlayer) )
  {
    v53 = 15;
    goto LABEL_68;
  }
LABEL_72:
  result = *(_DWORD *)v32;
  v66 = *(float *)(*(_DWORD *)v32 + 16);
  if ( v66 == 0.0 )
  {
    v67 = *(float *)(result + 12);
  }
  else
  {
    v67 = *(float *)(result + 12);
    if ( fabsf(v66) > fabsf(v67) )
    {
      v64 = (CEntity **)v9;
      if ( v66 < 0.0 )
        v65 = 3;
      else
        v65 = 5;
      return CTaskSimpleFight::ControlFight(v64, 0, v65);
    }
  }
  if ( v67 != 0.0 )
  {
    v64 = (CEntity **)v9;
    if ( v67 <= 0.0 )
      v65 = 4;
    else
      v65 = 6;
    return CTaskSimpleFight::ControlFight(v64, 0, v65);
  }
  return result;
}


// ============================================================

// Address: 0x539474
// Original: _ZN23CTaskSimplePlayerOnFoot24PlayerControlZeldaWeaponEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(CPlayerPed *)
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(CTaskSimplePlayerOnFoot *this, CPedIntelligence **a2)
{
  int result; // r0
  int v4; // r5
  CPlayerPed *v5; // r1
  CPad *PadFromPlayer; // r8
  float PedWalkLeftRight; // s18
  CPlayerPed *v8; // r1
  float PedWalkUpDown; // s0
  float v10; // s16
  float v11; // r0
  int v12; // r6
  int *v13; // r9
  int v14; // r0
  CPedIntelligence *v15; // r1
  int v16; // r2
  float *v17; // r3
  float *v18; // r1
  CPed *v19; // r1
  float v20; // [sp+0h] [bp-48h]

  result = CPedIntelligence::GetTaskUseGun(a2[272]);
  v4 = result;
  if ( !result )
    return result;
  result = (int)a2[64];
  if ( result )
    return result;
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer((CPlayerPed *)a2);
  if ( (*(_BYTE *)(*(_DWORD *)(v4 + 48) + 24) & 4) != 0 && !CGameLogic::IsPlayerUse2PlayerControls((CGameLogic *)a2, v5) )
  {
    PedWalkLeftRight = 0.0;
    PedWalkUpDown = 0.0;
    v10 = 0.0;
    if ( !CCamera::Using1stPersonWeaponMode((CCamera *)&TheCamera) )
      goto LABEL_7;
  }
  else
  {
    PedWalkLeftRight = (float)CPad::GetPedWalkLeftRight(PadFromPlayer);
    PedWalkUpDown = (float)CPad::GetPedWalkUpDown(PadFromPlayer);
  }
  v10 = PedWalkLeftRight * 0.0078125;
  PedWalkLeftRight = PedWalkUpDown * 0.0078125;
LABEL_7:
  if ( CGameLogic::IsPlayerUse2PlayerControls((CGameLogic *)a2, v8) == 1 )
  {
    if ( sqrtf((float)(v10 * v10) + (float)(PedWalkLeftRight * PedWalkLeftRight)) <= 0.0 )
    {
      v13 = (int *)(a2 + 456);
    }
    else
    {
      v11 = COERCE_FLOAT(
              CGeneral::GetRadianAngleBetweenPoints(
                0,
                0.0,
                COERCE_FLOAT(LODWORD(v10) ^ 0x80000000),
                PedWalkLeftRight,
                v20));
      v12 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v11 - unk_9520F4), COERCE_FLOAT(&TheCamera));
      sinf(*(float *)&v12);
      cosf(*(float *)&v12);
      v13 = (int *)(a2 + 456);
      if ( !a2[456] )
        a2[344] = (CPedIntelligence *)v12;
      CGameLogic::IsPlayerAllowedToGoInThisDirection();
    }
    v14 = *v13;
    if ( *v13 )
    {
      v15 = a2[5];
      v16 = *(_DWORD *)(v14 + 20);
      v17 = (float *)((char *)v15 + 48);
      if ( !v15 )
        v17 = (float *)(a2 + 1);
      v18 = (float *)(v16 + 48);
      if ( !v16 )
        v18 = (float *)(v14 + 4);
      *((float *)a2 + 344) = atan2f(-(float)(*v18 - *v17), v18[1] - v17[1]);
    }
  }
  CTaskSimpleUseGun::ControlGunMove();
  result = CTaskSimpleDuck::CanPedDuck((CTaskSimpleDuck *)a2, v19);
  if ( result == 1 )
  {
    result = CPad::DuckJustDown(PadFromPlayer, (CPed *)a2);
    if ( result == 1 )
      return CPedIntelligence::SetTaskDuckSecondary(a2[272], 0);
  }
  return result;
}


// ============================================================

// Address: 0x539700
// Original: _ZN23CTaskSimplePlayerOnFoot19PlayerControlDuckedEP10CPlayerPed
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlDucked(CPlayerPed *)
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlDucked(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2)
{
  int result; // r0
  int v4; // r5
  CPad *PadFromPlayer; // r6
  float v6; // s20
  float v7; // s18
  float v8; // s16
  bool v9; // zf
  CPed *v10; // r1
  CPlayerPed *v11; // r1
  float v12; // r0
  int v13; // r6
  float v14; // s0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  float v18; // r0
  int v19; // r8
  int v20; // r1
  int v21; // r0
  int v22; // r3
  float *v23; // r2
  float *v24; // r1
  float v25; // s0
  CVector *v26; // [sp+0h] [bp-48h]
  int v27; // [sp+4h] [bp-44h] BYREF
  int v28; // [sp+8h] [bp-40h]
  int v29; // [sp+Ch] [bp-3Ch]

  result = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1);
  v4 = result;
  if ( result )
  {
    PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
    v6 = (float)CPad::GetPedWalkLeftRight(PadFromPlayer) * 0.0078125;
    v7 = (float)CPad::GetPedWalkUpDown(PadFromPlayer) * 0.0078125;
    if ( *((_DWORD *)a2 + 64) )
    {
      v8 = 0.0;
    }
    else
    {
      v8 = sqrtf((float)(v6 * v6) + (float)(v7 * v7));
      if ( v8 > 1.0 )
        v8 = 1.0;
    }
    result = *(unsigned __int8 *)(v4 + 24);
    v9 = result == 0;
    if ( !*(_BYTE *)(v4 + 24) )
    {
      result = *(unsigned __int8 *)(v4 + 25);
      v9 = result == 0;
    }
    if ( v9 )
    {
      if ( CPad::DuckJustDown(PadFromPlayer, a2)
        || CPad::JumpJustDown(PadFromPlayer)
        || (v27 = 0, v28 = 0, v29 = 0, CPad::ExitVehicleJustDown(PadFromPlayer, 0, 0, 1, (const CVector *)&v27) == 1)
        || !CTaskSimpleDuck::CanPedDuck(a2, v10) )
      {
        CPedIntelligence::ClearTaskDuckSecondary(*((CPedIntelligence **)a2 + 272));
        if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272))
          && (result = *(unsigned __int8 *)(*(_DWORD *)(CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272))
                                                      + 48)
                                          + 24) << 30,
              result >= 0) )
        {
          if ( v8 > 0.5 )
          {
            v15 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x32u);
            *(_WORD *)(v15 + 46) |= 1u;
            *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 1065353216;
            v27 = 1065353216;
            v28 = 0;
            CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272));
            return CTaskSimpleUseGun::ControlGunMove();
          }
        }
        else
        {
          result = CPad::GetSprint(PadFromPlayer, 0);
          if ( v8 > 0.5 && result == 1 )
          {
            v16 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 1u);
            *(_WORD *)(v16 + 46) |= 1u;
            *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 1069547520;
            *((_DWORD *)a2 + 335) = 6;
            return CPed::SetMoveState(a2, 6);
          }
          else if ( v8 > 0.5 )
          {
            v17 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 0);
            *(_WORD *)(v17 + 46) |= 1u;
            *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 1069547520;
            *((_DWORD *)a2 + 335) = 4;
            return CPed::SetMoveState(a2, 4);
          }
        }
      }
      else if ( (*((_DWORD *)a2 + 456)
              || CPad::GetTarget(PadFromPlayer, 0)
              || (*(_BYTE *)(*((_DWORD *)a2 + 273) + 52) & 8) != 0
              || CPad::GetSprint(PadFromPlayer, 0) == 1)
             && !CWeapon::IsTypeMelee((CPlayerPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) )
      {
        if ( CGameLogic::IsPlayerUse2PlayerControls(a2, v11) == 1 )
        {
          v18 = COERCE_FLOAT(
                  CGeneral::GetRadianAngleBetweenPoints(
                    0,
                    0.0,
                    COERCE_FLOAT(LODWORD(v6) ^ 0x80000000),
                    v7,
                    *(float *)&v26));
          *(float *)&v19 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v18 - unk_9520F4), COERCE_FLOAT(&TheCamera)));
          sinf(*(float *)&v19);
          cosf(*(float *)&v19);
          CGameLogic::IsPlayerAllowedToGoInThisDirection();
          v20 = *((_DWORD *)a2 + 5);
          v21 = *((_DWORD *)a2 + 456);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v21 + 20);
            v23 = (float *)(v20 + 48);
            if ( !v20 )
              v23 = (float *)((char *)a2 + 4);
            v24 = (float *)(v22 + 48);
            if ( !v22 )
              v24 = (float *)(v21 + 4);
            v25 = atan2f(-(float)(*v24 - *v23), v24[1] - v23[1]);
          }
          else
          {
            v25 = *(float *)&v19;
          }
          *((float *)a2 + 344) = v25;
        }
        CTaskSimpleDuck::ControlDuckMove();
        result = *((_DWORD *)a2 + 273);
        *(_DWORD *)(result + 20) = 0;
      }
      else
      {
        if ( v8 <= 0.0 )
        {
          v14 = v8;
        }
        else
        {
          v12 = COERCE_FLOAT(
                  CGeneral::GetRadianAngleBetweenPoints(
                    0,
                    0.0,
                    COERCE_FLOAT(LODWORD(v6) ^ 0x80000000),
                    v7,
                    *(float *)&v26));
          v13 = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v12 - unk_9520F4), COERCE_FLOAT(&TheCamera));
          *((_DWORD *)a2 + 344) = v13;
          sinf(*(float *)&v13);
          cosf(*(float *)&v13);
          v14 = 0.0;
          if ( CGameLogic::IsPlayerAllowedToGoInThisDirection() )
            v14 = v8;
        }
        *(float *)(*((_DWORD *)a2 + 273) + 20) = v14;
        return CTaskSimpleDuck::ControlDuckMove();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x539ad4
// Original: _ZN23CTaskSimplePlayerOnFoot18PlayerControlZeldaEP10CPlayerPedb
// Demangled: CTaskSimplePlayerOnFoot::PlayerControlZelda(CPlayerPed *,bool)
int __fastcall CTaskSimplePlayerOnFoot::PlayerControlZelda(CTaskSimplePlayerOnFoot *this, CPlayerPed *a2, int a3)
{
  float v3; // r5
  int v6; // r0
  CPad *PadFromPlayer; // r10
  float PedWalkUpDown; // s0
  float PedWalkLeftRight; // s20
  float v11; // s18
  float v12; // s2
  float v13; // r0
  CMenuManager *v14; // r0
  unsigned __int8 *v15; // r2
  int v16; // r0
  int v17; // r0
  float v18; // s0
  float v19; // s2
  int v20; // r0
  int v21; // r5
  int v22; // r6
  CPlayerPed *v23; // r0
  int v24; // r1
  CPed *v25; // r1
  int Target; // r0
  bool v27; // zf
  int TaskByType; // r0
  _BOOL4 v29; // r5
  int result; // r0
  float *v31; // r5
  int v32; // r0
  unsigned int v33; // r1
  int v34; // r0
  float v35; // s0
  int v36; // r6
  CTaskComplexJump *v37; // r5
  CAnimBlendAssocGroup *v38; // r5
  int v39; // r6
  int ActiveTask; // r0
  unsigned int v41; // r1
  int v42; // r6
  CTaskComplexJump *v43; // r5
  unsigned __int8 *v44; // [sp+0h] [bp-40h]
  bool v45; // [sp+4h] [bp-3Ch]

  v6 = *((_DWORD *)a2 + 273);
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  if ( *((_DWORD *)a2 + 64) )
  {
    PedWalkUpDown = 0.0;
    PedWalkLeftRight = 0.0;
    v11 = 0.0;
  }
  else
  {
    PedWalkLeftRight = (float)CPad::GetPedWalkLeftRight(PadFromPlayer);
    PedWalkUpDown = (float)CPad::GetPedWalkUpDown(PadFromPlayer);
    v11 = sqrtf((float)(PedWalkLeftRight * PedWalkLeftRight) + (float)(PedWalkUpDown * PedWalkUpDown)) / 60.0;
  }
  v12 = v11;
  if ( *((_WORD *)PadFromPlayer + 21) )
    v12 = 1.0;
  if ( v11 > 1.0 )
    v11 = v12;
  if ( v11 <= 0.0 )
  {
    *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 0;
  }
  else
  {
    v13 = COERCE_FLOAT(
            CGeneral::GetRadianAngleBetweenPoints(
              0,
              0.0,
              COERCE_FLOAT(LODWORD(PedWalkLeftRight) ^ 0x80000000),
              PedWalkUpDown,
              *(float *)&v44));
    v14 = (CMenuManager *)CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v13 - unk_9520F4), COERCE_FLOAT(&TheCamera));
    v16 = CMenuManager::AdditionalOptionInput(v14, (unsigned __int8 *)a2, v15);
    sinf(*(float *)&v16);
    cosf(v3);
    if ( CGameLogic::IsPlayerAllowedToGoInThisDirection() == 1 )
    {
      v17 = *((_DWORD *)a2 + 273);
      v18 = *(float *)(v17 + 20);
      v19 = *(float *)&CTimer::ms_fTimeStep * 0.07;
      if ( (float)(v11 - v18) <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
      {
        if ( (float)(v11 - v18) >= (float)-v19 )
          *(float *)(v17 + 20) = v11;
        else
          *(float *)(v17 + 20) = v18 - v19;
      }
      else
      {
        *(float *)(v17 + 20) = v19 + v18;
      }
    }
    else
    {
      *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 0;
    }
  }
  if ( (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 25) & 2) == 0 )
  {
    v20 = *((_DWORD *)a2 + 347);
    if ( (!v20 || (*(_DWORD *)(v20 + 68) & 0xC) != 4)
      && (!CPedIntelligence::GetTaskHold(*((CPedIntelligence **)a2 + 272), 0)
       || !*(_DWORD *)(CPedIntelligence::GetTaskHold(*((CPedIntelligence **)a2 + 272), 0) + 56)) )
    {
      if ( !*(_BYTE *)(*((_DWORD *)a2 + 273) + 132) )
      {
        v21 = *((_DWORD *)a2 + 312);
        v22 = CAnimManager::ms_aAnimAssocGroups;
        if ( !SurfaceInfos_c::CantSprintOn((SurfaceInfos_c *)&g_surfaceInfos, *((unsigned __int8 *)a2 + 190)) )
        {
          v38 = (CAnimBlendAssocGroup *)(v22 + 20 * v21);
          v39 = *(_DWORD *)(CAnimBlendAssocGroup::GetAnimation(v38, 1u) + 16);
          if ( v39 != *(_DWORD *)(CAnimBlendAssocGroup::GetAnimation(v38, 2u) + 16) )
          {
            if ( COERCE_FLOAT(CPlayerPed::ControlButtonSprint()) < 1.0 )
              goto LABEL_27;
            v23 = a2;
            v24 = 7;
            goto LABEL_26;
          }
        }
      }
      if ( CPad::GetSprint(PadFromPlayer, 0) == 1 )
      {
        v23 = a2;
        v24 = 6;
LABEL_26:
        CPed::SetMoveState(v23, v24);
      }
    }
  }
LABEL_27:
  CPlayerPed::SetRealMoveAnim(a2);
  RpAnimBlendClumpGetAssociation();
  RpAnimBlendClumpGetAssociation();
  if ( CTaskSimpleDuck::CanPedDuck(a2, v25) && !a3 && CPad::DuckJustDown(PadFromPlayer, a2) == 1 )
    CPedIntelligence::SetTaskDuckSecondary(*((CPedIntelligence **)a2 + 272), 0);
  if ( !a3
    && (*((_BYTE *)a2 + 1157) & 2) == 0
    && (*(_BYTE *)(CWeaponInfo::GetWeaponInfo() + 25) & 2) == 0
    && CPad::JumpJustDown(PadFromPlayer) == 1 )
  {
    Target = CPad::GetTarget(PadFromPlayer, 0);
    v27 = Target == 0;
    if ( !Target )
      v27 = *((_DWORD *)a2 + 64) == 0;
    if ( v27 )
    {
      switch ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) )
      {
        case 7:
        case 8:
        case 0x22:
        case 0x2D:
        case 0x2E:
        case 0x33:
          break;
        default:
          CPlayerPed::ClearWeaponTarget(a2);
          if ( CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)) )
          {
            ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 211 )
            {
              v42 = *((_DWORD *)a2 + 272);
              v43 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, v41);
              CTaskComplexJump::CTaskComplexJump(v43, 0);
              CTaskManager::SetTask((CTaskManager *)(v42 + 4), v43, 3, 0);
            }
          }
          break;
      }
    }
  }
  TaskByType = CTaskManager::FindTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 3, 1600);
  v29 = 0;
  if ( TaskByType )
    v29 = (*(int (__fastcall **)(int))(*(_DWORD *)TaskByType + 20))(TaskByType) == 1600;
  if ( !CGame::currArea && !(CPad::GetSprint(PadFromPlayer, 0) ^ 1 | v29) )
  {
    if ( dword_6E085C )
    {
      v31 = (float *)((char *)this + 20);
      v32 = CTaskSimpleClimb::TestForClimb(
              a2,
              (CTaskSimplePlayerOnFoot *)((char *)this + 8),
              (CTaskSimplePlayerOnFoot *)((char *)this + 20),
              (float *)this + 6,
              (unsigned __int8 *)&stderr + 1,
              v45);
      *((_DWORD *)this + 7) = v32;
      if ( v32 )
      {
        v34 = *((_DWORD *)a2 + 5);
        if ( v34 )
          v35 = atan2f(COERCE_FLOAT(*(_DWORD *)(v34 + 16) ^ 0x80000000), *(float *)(v34 + 20));
        else
          v35 = *((float *)a2 + 4);
        if ( v35 > (float)(*v31 + -0.75) && v35 < (float)(*v31 + 0.75) )
        {
          v36 = *((_DWORD *)a2 + 272);
          v37 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, v33);
          CTaskComplexJump::CTaskComplexJump(v37, 0);
          CTaskManager::SetTask((CTaskManager *)(v36 + 4), v37, 3, 0);
        }
      }
    }
  }
  result = *((_DWORD *)a2 + 333) | 8;
  *((_DWORD *)a2 + 333) = result;
  return result;
}


// ============================================================

// Address: 0x539f2c
// Original: _ZN23CTaskSimplePlayerOnFoot10ProcessPedEP4CPed
// Demangled: CTaskSimplePlayerOnFoot::ProcessPed(CPed *)
int __fastcall CTaskSimplePlayerOnFoot::ProcessPed(CTaskSimplePlayerOnFoot *this, CPed *a2)
{
  int v4; // r4
  int v5; // r6
  CTaskSimplePlayerOnFoot *v6; // r0

  if ( CPlayerPed::GetPadFromPlayer(a2) )
  {
    v4 = *((_DWORD *)a2 + 276);
    v5 = v4 > 3;
    if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) == 9
      && CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) )
    {
      v5 = (v4 > 3) | (*(_BYTE *)(CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) + 37) == 4);
    }
    CPed::SetMoveState(a2, 1);
    if ( (*((_BYTE *)a2 + 1159) & 4) != 0 )
    {
      CTaskSimplePlayerOnFoot::PlayerControlDucked(
        (CTaskSimplePlayerOnFoot *)(*((unsigned __int8 *)a2 + 1159) << 29),
        a2);
    }
    else if ( v5 | (CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)a2 + 272)) == 0) )
    {
      if ( CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272))
        && *(_DWORD *)(CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272)) + 48)
        && (v6 = (CTaskSimplePlayerOnFoot *)(*(unsigned __int8 *)(*(_DWORD *)(CPedIntelligence::GetTaskUseGun(*((CPedIntelligence **)a2 + 272))
                                                                            + 48)
                                                                + 24) << 30),
            (int)v6 >= 0) )
      {
        CTaskSimplePlayerOnFoot::PlayerControlZeldaWeapon(v6, a2);
      }
      else
      {
        CTaskSimplePlayerOnFoot::PlayerControlZelda(this, a2, 0);
      }
    }
    else
    {
      CTaskSimplePlayerOnFoot::PlayerControlFighter(this, a2);
    }
    CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(this, a2);
  }
  *((_DWORD *)this + 9) = CTimer::m_FrameCounter;
  return 0;
}


// ============================================================

// Address: 0x53c684
// Original: _ZNK23CTaskSimplePlayerOnFoot5CloneEv
// Demangled: CTaskSimplePlayerOnFoot::Clone(void)
CTaskSimple *__fastcall CTaskSimplePlayerOnFoot::Clone(CTaskSimplePlayerOnFoot *this, unsigned int a2)
{
  CTaskSimple *v2; // r4
  int AnimationBlockIndex; // r0
  int v4; // r1
  CTaskSimple *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_34, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)v2 = &off_66CF38;
  AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"playidles", (const char *)&off_66CF38);
  v4 = CTimer::m_FrameCounter;
  *((_DWORD *)v2 + 8) = AnimationBlockIndex;
  *((_DWORD *)v2 + 9) = v4;
  *((_DWORD *)v2 + 10) = 0;
  result = v2;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  return result;
}


// ============================================================

// Address: 0x53c6cc
// Original: _ZNK23CTaskSimplePlayerOnFoot11GetTaskTypeEv
// Demangled: CTaskSimplePlayerOnFoot::GetTaskType(void)
int __fastcall CTaskSimplePlayerOnFoot::GetTaskType(CTaskSimplePlayerOnFoot *this)
{
  return 0;
}


// ============================================================

// Address: 0x53c6d0
// Original: _ZN23CTaskSimplePlayerOnFoot9SerializeEv
// Demangled: CTaskSimplePlayerOnFoot::Serialize(void)
int __fastcall CTaskSimplePlayerOnFoot::Serialize(CTaskSimplePlayerOnFoot *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimplePlayerOnFoot *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimplePlayerOnFoot *))(*(_DWORD *)this + 20))(this);
  if ( result )
  {
    v6 = (*(int (__fastcall **)(CTaskSimplePlayerOnFoot *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(0, v6);
  }
  return result;
}


// ============================================================
