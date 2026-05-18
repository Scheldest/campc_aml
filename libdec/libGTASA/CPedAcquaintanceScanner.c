
// Address: 0x18bcb8
// Original: j__ZN23CPedAcquaintanceScanner21ScanAcquaintanceTypesERK4CPediiPS0_RS3_Ri
// Demangled: CPedAcquaintanceScanner::ScanAcquaintanceTypes(CPed const&,int,int,CPed*,CPed*&,int &)
// attributes: thunk
int __fastcall CPedAcquaintanceScanner::ScanAcquaintanceTypes(
        CPedAcquaintanceScanner *this,
        const CPed *a2,
        int a3,
        int a4,
        CPed *a5,
        CPed **a6,
        CPedAcquaintanceScanner *a7)
{
  return _ZN23CPedAcquaintanceScanner21ScanAcquaintanceTypesERK4CPediiPS0_RS3_Ri(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x18f42c
// Original: j__ZN23CPedAcquaintanceScanner23FindClosestAcquaintanceER4CPediPP7CEntityiRPS0_Ri
// Demangled: CPedAcquaintanceScanner::FindClosestAcquaintance(CPed &,int,CEntity **,int,CPed*&,int &)
// attributes: thunk
int __fastcall CPedAcquaintanceScanner::FindClosestAcquaintance(
        CPedAcquaintanceScanner *this,
        CPed *a2,
        int a3,
        CEntity **a4,
        int a5,
        CPed **a6,
        int *a7)
{
  return _ZN23CPedAcquaintanceScanner23FindClosestAcquaintanceER4CPediPP7CEntityiRPS0_Ri(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1909a8
// Original: j__ZNK23CPedAcquaintanceScanner15IsScanPermittedERK4CPed
// Demangled: CPedAcquaintanceScanner::IsScanPermitted(CPed const&)
// attributes: thunk
int __fastcall CPedAcquaintanceScanner::IsScanPermitted(CPedAcquaintanceScanner *this, const CPed *a2)
{
  return _ZNK23CPedAcquaintanceScanner15IsScanPermittedERK4CPed(this, a2);
}


// ============================================================

// Address: 0x198ec4
// Original: j__ZN23CPedAcquaintanceScanner13CanJoinLARiotERK4CPedS2_
// Demangled: CPedAcquaintanceScanner::CanJoinLARiot(CPed const&,CPed const&)
// attributes: thunk
int __fastcall CPedAcquaintanceScanner::CanJoinLARiot(CPedAcquaintanceScanner *this, const CPed *a2, const CPed *a3)
{
  return _ZN23CPedAcquaintanceScanner13CanJoinLARiotERK4CPedS2_(this, a2, a3);
}


// ============================================================

// Address: 0x1a14e8
// Original: j__ZN23CPedAcquaintanceScanner20AddAcquaintanceEventERK4CPediPS0_
// Demangled: CPedAcquaintanceScanner::AddAcquaintanceEvent(CPed const&,int,CPed*)
// attributes: thunk
int __fastcall CPedAcquaintanceScanner::AddAcquaintanceEvent(
        CPedAcquaintanceScanner *this,
        const CPed *a2,
        int a3,
        CPed *a4)
{
  return _ZN23CPedAcquaintanceScanner20AddAcquaintanceEventERK4CPediPS0_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4bc33c
// Original: _ZN23CPedAcquaintanceScanner28ScanForPedAcquaintanceEventsER4CPedPP7CEntityi
// Demangled: CPedAcquaintanceScanner::ScanForPedAcquaintanceEvents(CPed &,CEntity **,int)
unsigned int __fastcall CPedAcquaintanceScanner::ScanForPedAcquaintanceEvents(
        CPedAcquaintanceScanner *this,
        CPed *a2,
        CEntity **a3,
        int a4)
{
  int v8; // r0
  unsigned int result; // r0
  int v10; // r0
  int v11; // [sp+10h] [bp-18h] BYREF
  CPed *v12; // [sp+14h] [bp-14h] BYREF

  if ( !*((_BYTE *)this + 8) )
  {
    *(_QWORD *)this = __PAIR64__(CPedAcquaintanceScanner::ms_iAcquaintanceScanPeriod, CTimer::m_snTimeInMilliseconds);
    *((_BYTE *)this + 8) = 1;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v8 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 9) = 0;
    *(_DWORD *)this = v8;
  }
  else
  {
    v8 = *(_DWORD *)this;
  }
  result = v8 + *((_DWORD *)this + 1);
  if ( result <= CTimer::m_snTimeInMilliseconds )
  {
    v10 = CPedAcquaintanceScanner::ms_iAcquaintanceScanPeriod;
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = v10;
    *((_BYTE *)this + 8) = 1;
    result = CPedAcquaintanceScanner::IsScanPermitted(this, a2);
    if ( result == 1 )
    {
      v12 = 0;
      v11 = -1;
      return CPedAcquaintanceScanner::FindClosestAcquaintance(this, a2, -1, a3, a4, &v12, &v11);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4bc3ec
// Original: _ZNK23CPedAcquaintanceScanner15IsScanPermittedERK4CPed
// Demangled: CPedAcquaintanceScanner::IsScanPermitted(CPed const&)
int __fastcall CPedAcquaintanceScanner::IsScanPermitted(CPedAcquaintanceScanner *this, CPedIntelligence **a2)
{
  const CPed *v4; // r1
  int v5; // r0
  bool v6; // zf
  int CurrentEvent; // r0
  CEventEditableResponse *v8; // r5
  int v10; // r6
  int v11; // r0

  if ( CPed::IsAlive((CPed *)a2) != 1 )
    return 0;
  v5 = *((unsigned __int8 *)a2 + 1096);
  v6 = v5 == 2;
  if ( v5 == 2 )
    v6 = *((_BYTE *)this + 12) == 0;
  if ( v6 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v10 = *((unsigned __int8 *)this + 13);
      if ( *((_BYTE *)this + 13) )
        v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( CPedScriptedTaskRecord::GetStatus((CPedScriptedTaskRecord *)a2, v4) )
    {
      v11 = *((unsigned __int8 *)this + 14);
      if ( *((_BYTE *)this + 14) )
        v11 = 1;
      if ( !(v11 | v10) )
        return 0;
    }
    else if ( v10 != 1 )
    {
      return 0;
    }
  }
  CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CPedIntelligence *)((char *)a2[272] + 56));
  v8 = (CEventEditableResponse *)CurrentEvent;
  if ( !CurrentEvent || (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) != 36 )
    return 1;
  if ( *((_DWORD *)a2[272] + 49) && CEventEditableResponse::ComputeResponseTaskOfType(v8, (CPed *)a2, 1700) == 1 )
    return CPedIntelligence::FindRespectedFriendInInformRange(a2[272]);
  return 0;
}


// ============================================================

// Address: 0x4bc4a0
// Original: _ZN23CPedAcquaintanceScanner23FindClosestAcquaintanceER4CPediPP7CEntityiRPS0_Ri
// Demangled: CPedAcquaintanceScanner::FindClosestAcquaintance(CPed &,int,CEntity **,int,CPed*&,int &)
void __fastcall CPedAcquaintanceScanner::FindClosestAcquaintance(
        CPedAcquaintanceScanner *this,
        CPed *a2,
        int a3,
        CEntity **a4,
        int a5,
        CPed **a6,
        int *a7)
{
  CPed *v7; // r10
  int v8; // r11
  CEntity **v9; // r6
  int v11; // r5
  CEntity *v12; // r4
  int v13; // r0
  int v14; // r1
  float *v15; // r2
  float *v16; // r0
  float v17; // s4
  float v18; // s10
  float v19; // s0
  bool v20; // zf
  bool v21; // zf
  int v22; // r9
  int v23; // r6
  int v24; // r10
  bool v25; // zf
  int v26; // r11
  int Acquaintances; // r8
  int v28; // r1
  int v29; // r0
  CPed *v30; // r11
  const CPed *v31; // r2
  int v32; // r0
  CDecisionMakerTypes *v33; // r0
  int v34; // r10
  int v35; // r2
  int v36; // r6
  int v37; // r2
  int v38; // r6
  _DWORD *v39; // r6
  int v40; // r1
  bool v41; // zf
  int v42; // r1
  bool v43; // zf
  int v44; // r2
  const CPed *v45; // r2
  int v46; // r4
  CPed **v47; // r5
  int v48; // r9
  CPed *v49; // r6
  int v50; // r0
  CPedAcquaintanceScanner *v51; // [sp+10h] [bp-B8h]
  CEntity **v52; // [sp+18h] [bp-B0h]
  int v53; // [sp+28h] [bp-A0h]
  CAcquaintance *v55; // [sp+30h] [bp-98h]
  char *v56; // [sp+34h] [bp-94h]
  _QWORD v57[2]; // [sp+38h] [bp-90h] BYREF
  float v58; // [sp+4Ch] [bp-7Ch] BYREF
  float v59; // [sp+50h] [bp-78h]
  float v60; // [sp+54h] [bp-74h]
  _DWORD v61[28]; // [sp+58h] [bp-70h] BYREF

  v7 = a2;
  v8 = a5;
  v9 = a4;
  *a6 = 0;
  if ( a5 >= 1 )
  {
    v11 = 0;
    v56 = (char *)a2 + 1156;
    v55 = (CPed *)((char *)a2 + 1260);
    v53 = 0;
    do
    {
LABEL_3:
      while ( 1 )
      {
        v12 = v9[v11++];
        if ( v12 )
        {
          if ( CPed::IsAlive(v12) )
          {
            v13 = *((_DWORD *)v7 + 5);
            v14 = *((_DWORD *)v12 + 5);
            v15 = (float *)(v13 + 48);
            if ( !v13 )
              v15 = (float *)((char *)v7 + 4);
            v16 = (float *)(v14 + 48);
            v17 = v15[2];
            if ( !v14 )
              v16 = (float *)((char *)v12 + 4);
            v18 = v16[2];
            v19 = *v16 - *v15;
            v59 = v16[1] - v15[1];
            v58 = v19;
            v60 = v18 - v17;
            CVector::Normalise((CVector *)&v58);
            if ( (float)((float)((float)(*(float *)(*((_DWORD *)v7 + 5) + 16) * v58)
                               + (float)(*(float *)(*((_DWORD *)v7 + 5) + 20) * v59))
                       + (float)(*(float *)(*((_DWORD *)v7 + 5) + 24) * v60)) > CPedAcquaintanceScanner::ms_fThresholdDotProduct )
              break;
            v20 = (unsigned __int8)v56[1] << 31 == 0;
            if ( !((unsigned __int8)v56[1] << 31) )
              v20 = *((unsigned __int8 *)v12 + 1157) << 31 == 0;
            if ( !v20 )
              break;
          }
        }
        if ( v11 >= v8 )
          goto LABEL_59;
      }
      v52 = v9;
      v22 = a3 + 1;
      v21 = a3 == -1;
      if ( a3 == -1 )
        v21 = *((_DWORD *)v12 + 359) == 6;
      if ( v21 )
        goto LABEL_27;
      v51 = v7;
      v23 = 0;
      v24 = 4;
      do
      {
        v25 = v22 == 0;
        if ( v22 )
          v25 = a3 == v24;
        if ( v25 )
        {
          v26 = a3;
          Acquaintances = CAcquaintance::GetAcquaintances(v55, v24);
          v29 = CPedType::GetPedFlag(*((CPedType **)v12 + 359), v28) & Acquaintances;
          a3 = v26;
          v8 = a5;
          v23 |= v29 != 0;
        }
        if ( v24 < 1 )
          break;
        --v24;
      }
      while ( !(v23 << 31) );
      v7 = v51;
      if ( v23 << 31
        || CGameLogic::LaRiotsActiveHere(0) == 1 && CPedAcquaintanceScanner::CanJoinLARiot(v51, v12, v45) == 1 )
      {
LABEL_27:
        if ( *((_DWORD *)v12 + 359) != 6 )
        {
          v30 = v7;
          v57[0] = 0x2500000024LL;
          v57[1] = 0x2800000027LL;
          if ( CGameLogic::LaRiotsActiveHere((CGameLogic *)v57) != 1
            || !CPedAcquaintanceScanner::CanJoinLARiot(v7, v12, v31) )
          {
            v32 = CDecisionMakerTypes::m_pPedDecisionTypes;
            if ( !CDecisionMakerTypes::m_pPedDecisionTypes )
            {
              v33 = (CDecisionMakerTypes *)operator new(0xF1C0u);
              CDecisionMakerTypes::CDecisionMakerTypes(v33);
              CDecisionMakerTypes::m_pPedDecisionTypes = v32;
            }
            a4 = 0;
            v34 = *(_DWORD *)(*((_DWORD *)v7 + 272) + 180);
            v35 = 36;
            while ( 1 )
            {
              v36 = *(_DWORD *)(v32 + 4 * v35 + 49204);
              v37 = v32 + 54508;
              if ( v34 != -2 )
              {
                if ( v34 == -1 )
                {
                  v37 = v32 + 49588;
                  if ( *((_BYTE *)v30 + 1096) == 2 )
                    v37 = v32 + 52048;
                }
                else
                {
                  v37 = v32 + 2460 * v34 + 4;
                }
              }
              v38 = 15 * v36;
              if ( *(_DWORD *)(v37 + 4 * v38) != 200 )
                break;
              v39 = (_DWORD *)(v37 + 4 * v38);
              v40 = v39[1];
              v41 = v40 == 200;
              if ( v40 == 200 )
                v41 = v39[2] == 200;
              if ( !v41 )
                break;
              v42 = v39[3];
              v43 = v42 == 200;
              if ( v42 == 200 )
                v43 = v39[4] == 200;
              if ( !v43 )
                break;
              v44 = v39[5];
              if ( (int)a4 > 3 || v44 != 200 )
              {
                if ( v44 != 200 )
                  break;
                v7 = v30;
                v9 = v52;
                v8 = a5;
                if ( v11 < a5 )
                  goto LABEL_3;
                goto LABEL_59;
              }
              v35 = *((_DWORD *)v57 + (_DWORD)a4 + 1);
              a4 = (CEntity **)((char *)a4 + 1);
            }
          }
          v7 = v30;
          v8 = a5;
        }
        v61[v53++] = v12;
      }
      v9 = v52;
    }
    while ( v11 < v8 );
LABEL_59:
    v46 = v53;
    if ( v53 >= 1 )
    {
      v47 = (CPed **)v61;
      v48 = -1;
      do
      {
        if ( v48 == 4 )
        {
          v48 = 4;
        }
        else
        {
          v49 = *v47;
          if ( (unsigned __int8)v56[1] << 31 )
            v50 = 1;
          else
            v50 = *((_BYTE *)v49 + 1157) & 1;
          if ( CPedGeometryAnalyser::CanPedTargetPed(v7, *v47, (CPed *)(v50 ^ 1), (bool)a4) == 1 )
            v48 = CPedAcquaintanceScanner::ScanAcquaintanceTypes(
                    this,
                    v7,
                    a3,
                    v48,
                    v49,
                    a6,
                    (CPedAcquaintanceScanner *)a7);
        }
        --v46;
        ++v47;
      }
      while ( v46 );
    }
  }
}


// ============================================================

// Address: 0x4bc7bc
// Original: _ZN23CPedAcquaintanceScanner13CanJoinLARiotERK4CPedS2_
// Demangled: CPedAcquaintanceScanner::CanJoinLARiot(CPed const&,CPed const&)
bool __fastcall CPedAcquaintanceScanner::CanJoinLARiot(CPedAcquaintanceScanner *this, CPedType **a2, const CPed *a3)
{
  unsigned int v5; // r6
  const CPed *v8; // r1
  int v9; // r0
  int Acquaintances; // r6
  int v11; // r1
  int PedsGroup; // r0
  CPedGroupMembership *v13; // r8
  CPed *Leader; // r0
  int *v15; // r5

  v5 = *((_DWORD *)this + 359);
  if ( v5 <= 0x13 && ((1 << v5) & (unsigned int)"v") != 0 || CPed::IsPlayer(this) || *((_BYTE *)this + 1096) == 2 )
    return 0;
  if ( CPed::IsPlayer((CPed *)a2) == 1 )
  {
    v9 = **((_DWORD **)this + 272);
LABEL_9:
    Acquaintances = CAcquaintance::GetAcquaintances((CAcquaintance *)(v9 + 1260), 0);
    return (CPedType::GetPedFlag(a2[359], v11) & Acquaintances) == 0;
  }
  PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)a2, v8);
  if ( PedsGroup )
  {
    v13 = (CPedGroupMembership *)(PedsGroup + 8);
    if ( CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8)) )
    {
      Leader = (CPed *)CPedGroupMembership::GetLeader(v13);
      if ( CPed::IsPlayer(Leader) == 1 )
      {
        v15 = (int *)*((_DWORD *)this + 272);
        a2 = (CPedType **)CPedGroupMembership::GetLeader(v13);
        v9 = *v15;
        goto LABEL_9;
      }
    }
  }
  return v5 - 7 > 9 || (unsigned int)a2[359] - 7 > 9 || v5 != (_DWORD)a2[359];
}


// ============================================================

// Address: 0x4bc948
// Original: _ZN23CPedAcquaintanceScanner21ScanAcquaintanceTypesERK4CPediiPS0_RS3_Ri
// Demangled: CPedAcquaintanceScanner::ScanAcquaintanceTypes(CPed const&,int,int,CPed*,CPed*&,int &)
int __fastcall CPedAcquaintanceScanner::ScanAcquaintanceTypes(
        CPedAcquaintanceScanner *this,
        CPedIntelligence **a2,
        int a3,
        int a4,
        CPedType **a5,
        CPed **a6,
        CPedAcquaintanceScanner *a7)
{
  int CanSeeEntityWithLights; // r0
  int result; // r0
  float v13; // s16
  CAcquaintance *v14; // r10
  int v15; // r8
  int v16; // r6
  bool v17; // zf
  bool v18; // zf
  int Acquaintances; // r5
  int v20; // r1
  int PedFlag; // r0
  int v22; // r0
  int *v23; // r1
  int v24; // r2
  int v25; // r1
  const CPed *v26; // r2
  int v27; // r1
  CPedAcquaintanceScanner *v28; // [sp+8h] [bp-30h]
  CPedAcquaintanceScanner *v29; // [sp+Ch] [bp-2Ch]

  CanSeeEntityWithLights = CPedIntelligence::CanSeeEntityWithLights(a2[272], (const CEntity *)a5, 0);
  if ( a4 == 4 )
    return -1;
  v13 = *(float *)&CanSeeEntityWithLights;
  v14 = (CAcquaintance *)(a2 + 315);
  v28 = this;
  v15 = -a4;
  v16 = 4;
  v29 = (CPedAcquaintanceScanner *)a2;
  while ( 1 )
  {
    v17 = a3 == -1;
    if ( a3 != -1 )
      v17 = a3 == v16;
    if ( !v17 )
      goto LABEL_26;
    v18 = a3 == -1;
    if ( a3 == -1 )
      v18 = v16 == 2;
    if ( !v18 || a5[359] != (CPedType *)byte_6 )
    {
      Acquaintances = CAcquaintance::GetAcquaintances(v14, v16);
      PedFlag = CPedType::GetPedFlag(a5[359], v20);
      if ( (PedFlag & Acquaintances) == 0
        && (CGameLogic::LaRiotsActiveHere((CGameLogic *)PedFlag) != 1
         || CPedAcquaintanceScanner::CanJoinLARiot(v29, (const CPed *)a5, v26) != 1) )
      {
        goto LABEL_26;
      }
    }
    if ( v13 <= 0.0 && (v13 == 0.0 || v16 != 4) )
      goto LABEL_26;
    *a6 = (CPed *)a5;
    *(_DWORD *)a7 = v16;
    if ( a3 != -1 )
      return a3;
    if ( *a6 )
    {
      v22 = CPedAcquaintanceScanner::AddAcquaintanceEvent(a7, v29, v16, *a6);
      v23 = (int *)&CPedAcquaintanceScanner::ms_iAcquaintanceLatencyPeriodDefinite;
      if ( *(_DWORD *)a7 == 4 )
        v23 = (int *)&CPedAcquaintanceScanner::ms_iAcquaintanceLatencyPeriodMaybe;
      v24 = CTimer::m_snTimeInMilliseconds;
      if ( v13 >= 0.0 )
        v23 = (int *)&CPedAcquaintanceScanner::ms_iAcquaintanceLatencyPeriodDefinite;
      v25 = *v23;
      *((_BYTE *)v28 + 8) = 1;
      *(_DWORD *)v28 = v24;
      *((_DWORD *)v28 + 1) = v25;
      if ( v22 )
        return *(_DWORD *)a7;
    }
LABEL_26:
    result = -1;
    if ( v16 >= 1 )
    {
      v27 = v15 + v16--;
      if ( v27 != 1 )
        continue;
    }
    return result;
  }
}


// ============================================================

// Address: 0x4bcba8
// Original: _ZN23CPedAcquaintanceScanner20AddAcquaintanceEventERK4CPediPS0_
// Demangled: CPedAcquaintanceScanner::AddAcquaintanceEvent(CPed const&,int,CPed*)
bool __fastcall CPedAcquaintanceScanner::AddAcquaintanceEvent(
        CPedAcquaintanceScanner *this,
        CPedIntelligence **a2,
        int a3,
        CPed *a4)
{
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r5
  float v10; // r0
  const CPed *v11; // r1
  int PedsGroup; // r0
  int v13; // r0
  char *v14; // r1
  double v15; // d16
  const CPed *v16; // r2
  _DWORD v17[2]; // [sp+0h] [bp-38h] BYREF
  __int16 v18; // [sp+Ah] [bp-2Eh]
  int v19; // [sp+14h] [bp-24h]
  double v20; // [sp+18h] [bp-20h]
  int v21; // [sp+20h] [bp-18h]

  switch ( a3 )
  {
    case 0:
      CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
      v6 = &`vtable for'CEventAcquaintancePedRespect;
      goto LABEL_8;
    case 1:
      CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
      v6 = &`vtable for'CEventAcquaintancePedLike;
      goto LABEL_8;
    case 2:
      if ( *((_DWORD *)a4 + 359) != 6 )
        return 0;
      CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
      v6 = &`vtable for'CEventSeenCop;
      goto LABEL_8;
    case 3:
      CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
      v6 = &`vtable for'CEventAcquaintancePedDislike;
      goto LABEL_8;
    case 4:
      v10 = COERCE_FLOAT(CPedIntelligence::CanSeeEntityWithLights(a2[272], a4, 0));
      if ( v10 <= 0.0 )
      {
        v7 = 0;
        if ( v10 < 0.0 )
        {
          CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
          v21 = 0;
          v20 = 0.0;
          v17[0] = &off_666C78;
          v19 = CTimer::m_snTimeInMilliseconds;
          v13 = *((_DWORD *)a4 + 5);
          v14 = (char *)(v13 + 48);
          if ( !v13 )
            v14 = (char *)a4 + 4;
          v15 = *(double *)v14;
          v21 = *((_DWORD *)v14 + 2);
          v20 = v15;
LABEL_9:
          v8 = CEventGroup::Add((CPedIntelligence *)((char *)a2[272] + 104), (CEvent *)v17, 0);
          CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v17);
          return v8 != 0;
        }
      }
      else
      {
        if ( !byte_79680A
          && (CGameLogic::LaRiotsActiveHere(0) != 1
           || CPedAcquaintanceScanner::CanJoinLARiot((CPedAcquaintanceScanner *)a2, a4, v16) != 1) )
        {
          CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
          v6 = &`vtable for'CEventAcquaintancePedHate;
LABEL_8:
          v17[0] = *v6 + 8;
          goto LABEL_9;
        }
        CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)v17, a4);
        v17[0] = &off_6653A4;
        PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)a2, v11);
        if ( PedsGroup )
        {
          v18 = 1502;
          v7 = CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(PedsGroup + 48), (CEvent *)v17);
        }
        else
        {
          v18 = 1000;
          v7 = CEventGroup::Add((CPedIntelligence *)((char *)a2[272] + 104), (CEvent *)v17, 0) != 0;
        }
        CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)v17);
      }
      return v7;
    default:
      return 0;
  }
}


// ============================================================

// Address: 0x4bce28
// Original: _ZN23CPedAcquaintanceScanner8SetTimerEi
// Demangled: CPedAcquaintanceScanner::SetTimer(int)
int __fastcall CPedAcquaintanceScanner::SetTimer(int this, int a2)
{
  *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(this + 4) = a2;
  *(_BYTE *)(this + 8) = 1;
  return this;
}


// ============================================================
