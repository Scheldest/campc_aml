
// Address: 0x18fe64
// Original: j__ZN15CMissionCleanup15AddEntityToListEih
// Demangled: CMissionCleanup::AddEntityToList(int,uchar)
// attributes: thunk
int __fastcall CMissionCleanup::AddEntityToList(CMissionCleanup *this, int a2, unsigned __int8 a3)
{
  return _ZN15CMissionCleanup15AddEntityToListEih(this, a2, a3);
}


// ============================================================

// Address: 0x197be8
// Original: j__ZN15CMissionCleanup7ProcessEv
// Demangled: CMissionCleanup::Process(void)
// attributes: thunk
int __fastcall CMissionCleanup::Process(CMissionCleanup *this)
{
  return _ZN15CMissionCleanup7ProcessEv(this);
}


// ============================================================

// Address: 0x19e930
// Original: j__ZN15CMissionCleanup20RemoveEntityFromListEih
// Demangled: CMissionCleanup::RemoveEntityFromList(int,uchar)
// attributes: thunk
int __fastcall CMissionCleanup::RemoveEntityFromList(CMissionCleanup *this, int a2, unsigned __int8 a3)
{
  return _ZN15CMissionCleanup20RemoveEntityFromListEih(this, a2, a3);
}


// ============================================================

// Address: 0x19f24c
// Original: j__ZN15CMissionCleanup42CheckIfCollisionHasLoadedForMissionObjectsEv
// Demangled: CMissionCleanup::CheckIfCollisionHasLoadedForMissionObjects(void)
// attributes: thunk
int __fastcall CMissionCleanup::CheckIfCollisionHasLoadedForMissionObjects(CMissionCleanup *this)
{
  return _ZN15CMissionCleanup42CheckIfCollisionHasLoadedForMissionObjectsEv(this);
}


// ============================================================

// Address: 0x32731c
// Original: _ZN15CMissionCleanupC2Ev
// Demangled: CMissionCleanup::CMissionCleanup(void)
void __fastcall CMissionCleanup::CMissionCleanup(CMissionCleanup *this)
{
  int v1; // r2
  char *v2; // r3

  v1 = 0;
  *((_BYTE *)this + 600) = 0;
  do
  {
    *((_BYTE *)this + 8 * v1) = 0;
    v2 = (char *)this + 8 * v1++;
    *((_DWORD *)v2 + 1) = 0;
  }
  while ( v1 != 75 );
}


// ============================================================

// Address: 0x327336
// Original: _ZN15CMissionCleanup4InitEv
// Demangled: CMissionCleanup::Init(void)
int __fastcall CMissionCleanup::Init(int this)
{
  int v1; // r2
  int v2; // r3

  v1 = 0;
  *(_BYTE *)(this + 600) = 0;
  do
  {
    *(_BYTE *)(this + 8 * v1) = 0;
    v2 = this + 8 * v1++;
    *(_DWORD *)(v2 + 4) = 0;
  }
  while ( v1 != 75 );
  return this;
}


// ============================================================

// Address: 0x327350
// Original: _ZN15CMissionCleanup8FindFreeEv
// Demangled: CMissionCleanup::FindFree(void)
_BYTE *__fastcall CMissionCleanup::FindFree(_BYTE *this)
{
  int v1; // r1

  v1 = 0;
  while ( *this )
  {
    ++v1;
    this += 8;
    if ( (unsigned __int16)v1 >= 0x4Bu )
      return 0;
  }
  return this;
}


// ============================================================

// Address: 0x327368
// Original: _ZN15CMissionCleanup42CheckIfCollisionHasLoadedForMissionObjectsEv
// Demangled: CMissionCleanup::CheckIfCollisionHasLoadedForMissionObjects(void)
int __fastcall CMissionCleanup::CheckIfCollisionHasLoadedForMissionObjects(CMissionCleanup *this)
{
  unsigned int *v1; // r6
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r9
  int v6; // r2
  _DWORD *v7; // r4
  CIplStore *v8; // r8
  CColStore *v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r1
  int v18; // r9
  int v19; // r2
  _DWORD *v20; // r4
  CIplStore *v21; // r8
  CColStore *v22; // r0
  int v23; // r2
  int v24; // r1
  int result; // r0

  v1 = (unsigned int *)((char *)this + 4);
  v2 = 0;
  do
  {
    v3 = *((unsigned __int8 *)v1 - 4);
    switch ( v3 )
    {
      case 3:
        v13 = *v1;
        if ( (*v1 & 0x80000000) != 0 )
          break;
        v14 = v13 >> 8;
        if ( *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pObjectPool + 4) + (v13 >> 8)) != (unsigned __int8)v13 )
          break;
        v15 = *(_DWORD *)CPools::ms_pObjectPool;
        v16 = 420;
        goto LABEL_28;
      case 2:
        v17 = *v1;
        if ( (*v1 & 0x80000000) != 0 )
          break;
        v14 = v17 >> 8;
        if ( *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pPedPool + 4) + (v17 >> 8)) != (unsigned __int8)v17 )
          break;
        v15 = *(_DWORD *)CPools::ms_pPedPool;
        v16 = 1996;
LABEL_28:
        v18 = v15 + v14 * v16;
        if ( v18 && (*(_BYTE *)(v18 + 30) & 4) != 0 )
        {
          v20 = (_DWORD *)(v18 + 20);
          v19 = *(_DWORD *)(v18 + 20);
          v21 = (CIplStore *)(v18 + 4);
          v22 = (CColStore *)(v18 + 4);
          if ( v19 )
            v22 = (CColStore *)(v19 + 48);
          if ( CColStore::HasCollisionLoaded(v22, (const CVector *)*(unsigned __int8 *)(v18 + 51), v19) == 1 )
          {
            if ( *v20 )
              v21 = (CIplStore *)(*v20 + 48);
            if ( CIplStore::HaveIplsLoaded(v21, (const CVector *)*(unsigned __int8 *)(v18 + 51), v23) == 1 )
            {
              v24 = *(_DWORD *)(v18 + 28);
              *(_DWORD *)(v18 + 28) = v24 & 0xFFFBFFFF;
              if ( (v24 & 4) == 0 )
                CPhysical::AddToMovingList((CPhysical *)v18);
            }
          }
        }
        break;
      case 1:
        v4 = *v1;
        if ( (*v1 & 0x80000000) == 0
          && *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + (v4 >> 8)) == (unsigned __int8)v4 )
        {
          v5 = *(_DWORD *)CPools::ms_pVehiclePool + 2604 * (v4 >> 8);
          if ( v5 )
          {
            if ( (*(_BYTE *)(v5 + 30) & 4) != 0 )
            {
              v7 = (_DWORD *)(v5 + 20);
              v6 = *(_DWORD *)(v5 + 20);
              v8 = (CIplStore *)(v5 + 4);
              v9 = (CColStore *)(v5 + 4);
              if ( v6 )
                v9 = (CColStore *)(v6 + 48);
              if ( CColStore::HasCollisionLoaded(v9, (const CVector *)*(unsigned __int8 *)(v5 + 51), v6) == 1 )
              {
                if ( *v7 )
                  v8 = (CIplStore *)(*v7 + 48);
                if ( CIplStore::HaveIplsLoaded(v8, (const CVector *)*(unsigned __int8 *)(v5 + 51), v10) == 1 )
                {
                  v11 = *(_DWORD *)(v5 + 28);
                  *(_DWORD *)(v5 + 28) = v11 & 0xFFFBFFFF;
                  if ( (v11 & 4) == 0 )
                    CPhysical::AddToMovingList((CPhysical *)v5);
                  v12 = *(_DWORD *)(v5 + 1440);
                  switch ( v12 )
                  {
                    case 11:
                      goto LABEL_21;
                    case 9:
                      CBike::PlaceOnRoadProperly((CBike *)v5);
                      goto LABEL_38;
                    case 0:
LABEL_21:
                      CAutomobile::PlaceOnRoadProperly((CAutomobile *)v5);
                      break;
                  }
                }
              }
            }
          }
        }
        break;
    }
LABEL_38:
    ++v2;
    v1 += 2;
    result = (unsigned __int16)v2;
  }
  while ( (unsigned __int16)v2 < 0x4Bu );
  return result;
}


// ============================================================

// Address: 0x327508
// Original: _ZN15CMissionCleanup15AddEntityToListEih
// Demangled: CMissionCleanup::AddEntityToList(int,uchar)
int __fastcall CMissionCleanup::AddEntityToList(int this, int a2, char a3)
{
  char *v3; // r12
  int v4; // lr

  v3 = (char *)(this + 4);
  v4 = 0;
  while ( *(v3 - 4) )
  {
    ++v4;
    v3 += 8;
    if ( (unsigned __int16)v4 >= 0x4Bu )
      return this;
  }
  if ( v3 != &byte_4 )
  {
    *(v3 - 4) = a3;
    *(_DWORD *)v3 = a2;
    ++*(_BYTE *)(this + 600);
  }
  return this;
}


// ============================================================

// Address: 0x32754c
// Original: _ZN15CMissionCleanup20RemoveEntityFromListEih
// Demangled: CMissionCleanup::RemoveEntityFromList(int,uchar)
int __fastcall CMissionCleanup::RemoveEntityFromList(CMissionCleanup *this, int a2, int a3)
{
  _DWORD *v5; // r6
  unsigned int v7; // r9
  int v8; // r11
  int *v9; // r12
  int *v10; // r3
  int v11; // r0
  bool v12; // zf
  int v13; // r2
  int v14; // r0
  int v15; // r1
  CPhysical *v16; // r0
  bool v17; // zf
  int result; // r0
  int v19; // [sp+0h] [bp-28h]
  int *v20; // [sp+4h] [bp-24h]
  int *v21; // [sp+8h] [bp-20h]

  v5 = (_DWORD *)((char *)this + 4);
  v7 = (unsigned int)a2 >> 8;
  v8 = 0;
  v9 = &CPools::ms_pPedPool;
  v10 = &CPools::ms_pVehiclePool;
  do
  {
    v11 = *((unsigned __int8 *)v5 - 4);
    v12 = v11 == a3;
    if ( v11 == a3 )
      v12 = *v5 == a2;
    if ( v12 )
    {
      if ( a3 == 3 )
      {
        if ( a2 >= 0 )
        {
          v13 = (unsigned __int8)a2;
          if ( *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pObjectPool + 4) + v7) == (unsigned __int8)a2 )
          {
            v14 = *(_DWORD *)CPools::ms_pObjectPool;
            v15 = 420;
            goto LABEL_18;
          }
        }
      }
      else if ( a3 == 2 )
      {
        if ( a2 >= 0 )
        {
          v13 = (unsigned __int8)a2;
          if ( *(unsigned __int8 *)(*(_DWORD *)(*v9 + 4) + v7) == (unsigned __int8)a2 )
          {
            v14 = *(_DWORD *)*v9;
            v15 = 1996;
            goto LABEL_18;
          }
        }
      }
      else if ( a3 == 1 && a2 >= 0 )
      {
        v13 = (unsigned __int8)a2;
        if ( *(unsigned __int8 *)(*(_DWORD *)(*v10 + 4) + v7) == (unsigned __int8)a2 )
        {
          v14 = *(_DWORD *)*v10;
          v15 = 2604;
LABEL_18:
          v16 = (CPhysical *)(v14 + v7 * v15);
          v17 = v16 == 0;
          if ( v16 )
          {
            v15 = (int)v16 + 28;
            v13 = *((_DWORD *)v16 + 7);
            v17 = (v13 & 0x40000) == 0;
          }
          if ( !v17 )
          {
            v20 = v10;
            v19 = *(_DWORD *)(v15 + 4);
            v21 = v9;
            *(_DWORD *)v15 = v13 & 0xFFFBFFFF;
            *(_DWORD *)(v15 + 4) = v19;
            if ( (v13 & 4) == 0 )
            {
              CPhysical::AddToMovingList(v16);
              v9 = v21;
              v10 = v20;
            }
          }
        }
      }
      *((_BYTE *)v5 - 4) = 0;
      *v5 = 0;
      --*((_BYTE *)this + 600);
    }
    ++v8;
    v5 += 2;
    result = (unsigned __int16)v8;
  }
  while ( (unsigned __int16)v8 < 0x4Bu );
  return result;
}


// ============================================================

// Address: 0x327664
// Original: _ZN15CMissionCleanup7ProcessEv
// Demangled: CMissionCleanup::Process(void)
int __fastcall CMissionCleanup::Process(CMissionCleanup *this, char *a2)
{
  int v3; // r1
  int Pad; // r0
  CTrain *v5; // r0
  bool v6; // r1
  CTheZones *v7; // r0
  CPickups *PlayerWanted; // r0
  CRoadBlocks *v9; // r0
  bool v10; // r1
  CVehicleRecording *v11; // r0
  __int64 v12; // r0
  CWeather *v13; // r0
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r1
  CTheScripts *v23; // r0
  int *v24; // r6
  CPlayerPed *v25; // r0
  CPed *v26; // r0
  int v27; // r1
  CPad *v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r1
  int TaskByType; // r0
  CTaskComplexUseMobilePhone *v38; // r5
  CRestart *v39; // r0
  int v40; // r3
  _DWORD *v41; // r6
  char *v42; // r2
  int v43; // r1
  int v44; // r8
  CMissionCleanup *v45; // r4
  _UNKNOWN **v46; // r1
  int v47; // r1
  CTheScripts *v48; // r0
  int v49; // r1
  CTheScripts *v50; // r0
  int v51; // r1
  CTheScripts *v52; // r0
  int ActualScriptThingIndex; // r0
  FxSystem_c *v54; // r0
  int v55; // r1
  CPedGroups *v56; // r0
  int v57; // r1
  int v58; // r0
  int v59; // r0
  int v60; // r6
  char *v61; // r0
  int v62; // r1
  _BYTE *v63; // r0
  CDecisionMakerTypesFileLoader *v64; // r0
  int v65; // r1
  int v66; // r1
  int v67; // r1
  int i; // r6
  const char *v69; // r1
  int TxdSlot; // r0
  int v71; // r1
  int j; // r4
  CPedType *v73; // r5
  int PedFlag; // r0
  unsigned int v75; // r3
  int v76; // r1
  int v77; // r0
  unsigned int v78; // r3
  int v79; // r1
  int v80; // r0
  unsigned int v81; // r3
  int v82; // r1
  int v83; // r0
  unsigned int v84; // r3
  int v85; // r1
  int v86; // r0
  unsigned int v87; // r3
  int v88; // r2
  int v89; // r2
  int v90; // r2
  int v91; // r2
  int v92; // r2
  int v93; // r2
  int v94; // r2
  int v95; // r2
  int v96; // r2
  int v97; // r2
  int v98; // r2
  int v99; // r2
  int v100; // r2
  int v101; // r2
  int v102; // r2
  int v103; // r2
  int v104; // r2
  int v105; // r2
  int v106; // r2
  int v107; // r2
  int v108; // r2
  int v109; // r2
  int v110; // r2
  int v111; // r2
  int v112; // r2
  int v113; // r2
  int v114; // r2
  int v115; // r2
  int v116; // r2
  int v117; // r2
  int v118; // r2
  int v119; // r2
  int v120; // r2
  int v121; // r2
  int v122; // r2
  int v123; // r2
  int v124; // r2
  int v125; // r2
  int v126; // r2
  int v127; // r2
  unsigned int v129; // [sp+8h] [bp-40h]

  if ( CTheScripts::bScriptHasFadedOut )
  {
    a2 = &CTheScripts::bScriptHasFadedOut;
    CTheScripts::bScriptHasFadedOut = 0;
    if ( (unsigned __int8)(byte_96B778 - 1) >= 2u )
    {
      CCamera::Fade((CCamera *)&TheCamera, 0.5, 1);
      Pad = CPad::GetPad(0, v3);
      LOWORD(a2) = *(_WORD *)(Pad + 272) & 0xFFDF;
      *(_WORD *)(Pad + 272) = (_WORD)a2;
    }
  }
  v5 = (CTrain *)CTrain::DisableRandomTrains(0, (bool)a2);
  CTrain::ReleaseMissionTrains(v5);
  CPlane::SwitchAmbientPlanes((CPlane *)((char *)&stderr + 1), v6);
  CCarCtrl::CarDensityMultiplier = 1065353216;
  CPopulation::PedDensityMultiplier = 1065353216;
  if ( CGangWars::bTrainingMission )
  {
    CGangWars::bTrainingMission = 0;
    v7 = 0;
    if ( !CGangWars::bGangWarsActive )
      v7 = (CTheZones *)((char *)&stderr + 1);
    CTheZones::FillZonesWithGangColours(v7, (bool)&CGangWars::bTrainingMission);
  }
  CGangWars::bCanTriggerGangWarWhenOnAMission = 0;
  CPopulation::m_AllRandomPedsThisType = -1;
  CGangWars::ClearSpecificZonesToTriggerGangWar((CGangWars *)&CGangWars::bCanTriggerGangWarWhenOnAMission);
  CPopulation::m_bOnlyCreateRandomGangMembers = 0;
  CPopulation::m_bDontCreateRandomGangMembers = 0;
  CPopulation::m_bDontCreateRandomCops = 0;
  CGarages::NoResprays = 0;
  CGarages::AllRespraysCloseOrOpen(
    (CGarages *)((char *)&stderr + 1),
    (bool)&CPopulation::m_bDontCreateRandomGangMembers);
  CCullZones::bMilitaryZonesDisabled = 0;
  PlayerWanted = (CPickups *)FindPlayerWanted(-1);
  *((_DWORD *)PlayerWanted + 5) = 1065353216;
  v9 = (CRoadBlocks *)CPickups::RemoveMissionPickUps(PlayerWanted);
  CRoadBlocks::ClearScriptRoadBlocks(v9);
  CStreaming::DisableCopBikes(0, v10);
  CObject::bArea51SamSiteDisabled = 0;
  byte_959608 = 1;
  CObject::bAircraftCarrierSamSiteDisabled = 1;
  CPathFind::ReleaseRequestedNodes((CPathFind *)ThePaths);
  CPathFind::UnMarkAllRoadNodesAsDontWander((CPathFind *)ThePaths);
  v11 = (CVehicleRecording *)CPathFind::TidyUpNodeSwitchesAfterMission((CPathFind *)ThePaths);
  CVehicleRecording::RemoveAllRecordingsThatArentUsed(v11);
  CCamera::SetWideScreenOff((CCamera *)&TheCamera);
  LODWORD(v12) = &loc_310032;
  HIDWORD(v12) = &loc_300002;
  *(_QWORD *)&dword_951FEC = v12;
  byte_951FEB = 0;
  byte_952C20 = 0;
  CCamera::InitialiseScriptableComponents((CCamera *)&TheCamera);
  CCamera::ResetDuckingSystem((CCamera *)&TheCamera, 0);
  gCurDistForCam = 1065353216;
  CGameLogic::bScriptCoopGameGoingOn = 0;
  gAllowScriptedFixedCameraCollision = 0;
  CTheScripts::bDrawCrossHair = 0;
  CSpecialFX::bVideoCam = 0;
  CSpecialFX::bLiftCam = 0;
  CPostEffects::ScriptResetForEffects((CPostEffects *)&gCurDistForCam);
  CEntryExitManager::ms_bDisabled = 0;
  if ( !CGame::currArea )
    CTimeCycle::StopExtraColour(0, (bool)&CEntryExitManager::ms_bDisabled);
  CAudioEngine::ClearMissionAudio((CAudioEngine *)&AudioEngine, 0);
  CAudioEngine::ClearMissionAudio((CAudioEngine *)&AudioEngine, 1u);
  CAudioEngine::ClearMissionAudio((CAudioEngine *)&AudioEngine, 2u);
  CAudioEngine::ClearMissionAudio((CAudioEngine *)&AudioEngine, 3u);
  v13 = (CWeather *)CAudioEngine::Service((CAudioEngine *)&AudioEngine);
  CWeather::ReleaseWeather(v13);
  dword_959160 = 99999;
  CStreaming::SetMissionDoesntRequireSpecialChar(0, 99999);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)((char *)&stderr + 1), v14);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)((char *)&stderr + 2), v15);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)((char *)&stderr + 3), v16);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)&byte_4, v17);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)&byte_5, v18);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)byte_6, v19);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)&byte_7, v20);
  CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)byte_8, v21);
  v23 = (CTheScripts *)CStreaming::SetMissionDoesntRequireSpecialChar((CStreaming *)byte_9, v22);
  CTheScripts::ClearAllSuppressedCarModels(v23);
  CTheScripts::ForceRandomCarModel = -1;
  CStreaming::ms_disableStreaming = 0;
  CTheScripts::RadarZoomValue = 0;
  CHud::m_ItemToFlash = -1;
  CTheScripts::RadarShowBlipOnAllLevels = 0;
  CTheScripts::HideAllFrontEndMapBlips = 0;
  CHud::bScriptDontDisplayRadar = 0;
  CHud::bScriptDontDisplayVehicleName = 0;
  CHud::bScriptDontDisplayAreaName = 0;
  CHud::bScriptForceDisplayWithCounters = 0;
  byte_98F119 = 0;
  C3dMarkers::ForceRender(0, (unsigned __int8)&CTheScripts::RadarZoomValue);
  CTheScripts::bDrawOddJobTitleBeforeFade = 1;
  CTheScripts::bDrawSubtitlesBeforeFade = 1;
  CTheScripts::fCameraHeadingWhenPlayerIsAttached = 0;
  CTheScripts::bDisplayHud = 1;
  CTheScripts::fCameraHeadingStepWhenPlayerIsAttached = 0;
  CTheScripts::bEnableCraneRaise = 1;
  CTheScripts::bEnableCraneLower = 1;
  CTheScripts::bEnableCraneRelease = 1;
  byte_96B691 = 0;
  CTheScripts::bUseMessageFormatting = 0;
  CTheScripts::MessageCentre = 0;
  CTheScripts::MessageWidth = 0;
  v24 = &CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(CWorld::Players[0] + 1092) + 56)];
  CPedGroupIntelligence::SetDefaultTaskAllocatorType((CPedGroupIntelligence *)(v24 + 12), 1);
  CPedGroupIntelligence::SetGroupDecisionMakerType((CPedGroupIntelligence *)(v24 + 12), -1);
  v24[11] = 1123024896;
  v25 = (CPlayerPed *)CWorld::Players[0];
  *(_WORD *)(*(_DWORD *)(CWorld::Players[0] + 1092) + 52) &= ~0x100u;
  CPlayerPed::ForceGroupToAlwaysFollow(v25, 0);
  CPlayerPed::ForceGroupToNeverFollow((CPlayerPed *)CWorld::Players[0], 0);
  CPlayerPed::MakePlayerGroupReappear((CPlayerPed *)CWorld::Players[0]);
  v26 = (CPed *)CWorld::Players[0];
  *(_BYTE *)(*(_DWORD *)(CWorld::Players[0] + 1092) + 67) = 99;
  *((_DWORD *)v26 + 463) = 1065353216;
  word_96B6E1 = 1;
  CPed::EnablePedSpeech(v26);
  CPed::EnablePedSpeechForScriptSpeech((CPed *)CWorld::Players[0]);
  v28 = (CPad *)CPad::GetPad(0, v27);
  CPad::SetDrunkInputDelay(v28, 0);
  *(_BYTE *)(CPad::GetPad(0, v29) + 300) = 0;
  *(_BYTE *)(CPad::GetPad(0, v30) + 301) = 0;
  *(_BYTE *)(CPad::GetPad(0, v31) + 302) = 0;
  *(_BYTE *)(CPad::GetPad(0, v32) + 303) = 0;
  *(_BYTE *)(CPad::GetPad(0, v33) + 304) = 0;
  *(_BYTE *)(CPad::GetPad(0, v34) + 305) = 0;
  *(_BYTE *)(CPad::GetPad(0, v35) + 306) = 0;
  *(_BYTE *)(CPad::GetPad(0, v36) + 307) = 0;
  byte_96B7EF = 1;
  TaskByType = CTaskManager::FindTaskByType((CTaskManager *)(*(_DWORD *)(CWorld::Players[0] + 1088) + 4), 3, 1600);
  v38 = (CTaskComplexUseMobilePhone *)TaskByType;
  if ( TaskByType && (*(int (__fastcall **)(int))(*(_DWORD *)TaskByType + 20))(TaskByType) == 1600 )
    CTaskComplexUseMobilePhone::Stop(v38, (CPed *)CWorld::Players[0]);
  CVehicle::bDisableRemoteDetonationOnContact = 0;
  CVehicle::bDisableRemoteDetonation = 0;
  CGameLogic::ClearSkip((CGameLogic *)((char *)&stderr + 1), (bool)&CVehicle::bDisableRemoteDetonation);
  if ( (unsigned __int8)(CGameLogic::GameState - 1) >= 2u && *(_DWORD *)(FindPlayerPed(-1) + 1100) != 55 )
  {
    v39 = *(CRestart **)(FindPlayerPed(-1) + 1100);
    if ( v39 != (CRestart *)((char *)&dword_34 + 2) )
      CRestart::ClearRespawnPointForDurationOfMission(v39);
  }
  CTheScripts::RiotIntensity = 0;
  CFireManager::ClearAllScriptFireFlags((CFireManager *)gFireManager);
  CTheScripts::StoreVehicleWasRandom = 1;
  CTheScripts::StoreVehicleIndex = -1;
  unk_811648 = 0xFFFFFFFFLL;
  unk_811650 = 0xFFFFFFFFLL;
  CTheScripts::UpsideDownCars = 0xFFFFFFFFLL;
  unk_811630 = 0xFFFFFFFFLL;
  unk_811638 = 0xFFFFFFFFLL;
  unk_811640 = 0xFFFFFFFFLL;
  v40 = 0;
  do
  {
    *(_DWORD *)((char *)&CTheScripts::StuckCars + v40) = -1;
    v41 = (_DWORD *)((char *)&CTheScripts::StuckCars + v40);
    v40 += 36;
    v41[1] = -979615744;
    v41[2] = -979615744;
    v41[3] = -979615744;
    v41[4] = -1;
    *(_DWORD *)((char *)v41 + 30) = 0;
    *(_DWORD *)((char *)v41 + 26) = 0;
    v41[5] = 0;
    v41[6] = 0;
  }
  while ( v40 != 576 );
  v42 = &CStats::bShowUpdateStats;
  CEventGunShot::ms_fGunShotSenseRangeForRiot2 = -1082130432;
  CStats::bShowUpdateStats = 1;
  CVehicle::ms_forceVehicleLightsOff = 0;
  if ( !CTheScripts::bMiniGameInProgress )
  {
    if ( !CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 44] )
      CCamera::Restore((CCamera *)&TheCamera);
    v43 = CWorld::Players[0];
    *(_BYTE *)(**(_DWORD **)(CWorld::Players[0] + 1092) + 30) &= ~1u;
    *(_BYTE *)(**(_DWORD **)(v43 + 1092) + 30) &= ~4u;
    CPlayerInfo::MakePlayerSafe((CPlayerInfo *)CWorld::Players, 0, 10000.0);
    CHud::SetHelpMessage(0, 0, (unsigned __int16 *)((char *)&stderr + 1), 0, 0, 0, v129);
  }
  v44 = 0;
  v45 = this;
  v46 = &CTheScripts::ScriptSequenceTaskArray;
  while ( 2 )
  {
    switch ( *(_BYTE *)v45 )
    {
      case 0:
        goto LABEL_63;
      case 1:
        v47 = *((_DWORD *)v45 + 1);
        if ( v47 >= 0
          && *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + ((unsigned int)v47 >> 8)) == (unsigned __int8)v47 )
        {
          v48 = (CTheScripts *)(*(_DWORD *)CPools::ms_pVehiclePool
                              + ((unsigned int)v47 >> 8) * (_DWORD)&elf_hash_bucket[588]);
          if ( v48 )
            CTheScripts::CleanUpThisVehicle(v48, (CVehicle *)&elf_hash_bucket[588]);
        }
        goto LABEL_62;
      case 2:
        v49 = *((_DWORD *)v45 + 1);
        if ( v49 >= 0
          && *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pPedPool + 4) + ((unsigned int)v49 >> 8)) == (unsigned __int8)v49 )
        {
          v50 = (CTheScripts *)(*(_DWORD *)CPools::ms_pPedPool + ((unsigned int)v49 >> 8)
                                                               * (_DWORD)&elf_hash_bucket[436]);
          if ( v50 )
            CTheScripts::CleanUpThisPed(v50, (CPed *)&elf_hash_bucket[436]);
        }
        goto LABEL_62;
      case 3:
        v51 = *((_DWORD *)v45 + 1);
        if ( v51 >= 0
          && *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pObjectPool + 4) + ((unsigned int)v51 >> 8)) == (unsigned __int8)v51 )
        {
          v52 = (CTheScripts *)(*(_DWORD *)CPools::ms_pObjectPool
                              + ((unsigned int)v51 >> 8) * (_DWORD)&elf_hash_bucket[42]);
          if ( v52 )
            CTheScripts::CleanUpThisObject(v52, (CObject *)&elf_hash_bucket[42]);
        }
        goto LABEL_62;
      case 4:
        ActualScriptThingIndex = CTheScripts::GetActualScriptThingIndex(
                                   *((CTheScripts **)v45 + 1),
                                   1,
                                   (unsigned __int8)v42);
        if ( ActualScriptThingIndex >= 0 )
        {
          v54 = *(FxSystem_c **)&CTheScripts::ScriptEffectSystemArray[8 * ActualScriptThingIndex + 4];
          if ( v54 )
          {
            FxSystem_c::Kill(v54);
            CTheScripts::RemoveScriptEffectSystem(*((CTheScripts **)v45 + 1), v55);
          }
        }
        goto LABEL_62;
      case 5:
        v56 = (CPedGroups *)CTheScripts::GetActualScriptThingIndex(*((CTheScripts **)v45 + 1), 8, (unsigned __int8)v42);
        if ( (int)v56 >= 0 )
          CPedGroups::RemoveGroup(v56, v57);
        goto LABEL_62;
      case 7:
        v58 = CTheScripts::GetActualScriptThingIndex(*((CTheScripts **)v45 + 1), 6, (unsigned __int8)v42);
        if ( v58 >= 0 )
          CScripted2dEffects::ms_activated[v58] = 0;
        goto LABEL_62;
      case 8:
        v59 = CTheScripts::GetActualScriptThingIndex(*((CTheScripts **)v45 + 1), 4, (unsigned __int8)v42);
        v60 = v59;
        if ( v59 >= 0 )
        {
          v61 = (char *)&CTaskSequences::ms_taskSequence + 64 * v59;
          v62 = *((_DWORD *)v61 + 15);
          v63 = v61 + 56;
          if ( v62 )
          {
            *v63 = 1;
          }
          else
          {
            *v63 = 0;
            CTaskComplexSequence::Flush((CTaskComplexSequence *)((char *)&CTaskSequences::ms_taskSequence + 64 * v60));
          }
          CTaskSequences::ms_bIsOpened[v60] = 0;
          CTheScripts::ScriptSequenceTaskArray[4 * v60] = 0;
        }
        goto LABEL_62;
      case 9:
        v64 = (CDecisionMakerTypesFileLoader *)CTheScripts::GetActualScriptThingIndex(
                                                 *((CTheScripts **)v45 + 1),
                                                 7,
                                                 (unsigned __int8)v42);
        if ( (int)v64 >= 0 )
          CDecisionMakerTypesFileLoader::UnloadDecisionMaker(v64, v65);
        goto LABEL_62;
      case 0xB:
        if ( CTheScripts::GetActualScriptThingIndex(*((CTheScripts **)v45 + 1), 2, (unsigned __int8)v42) >= 0 )
          CTheScripts::RemoveScriptSearchLight(*((CTheScripts **)v45 + 1), v66);
        goto LABEL_62;
      case 0xC:
        if ( CTheScripts::GetActualScriptThingIndex(*((CTheScripts **)v45 + 1), 3, (unsigned __int8)v42) >= 0 )
          CTheScripts::RemoveScriptCheckpoint(*((CTheScripts **)v45 + 1), v67);
        goto LABEL_62;
      case 0xD:
        for ( i = 0; i != 512; i += 4 )
          CSprite2d::Delete((CSprite2d *)((char *)&CTheScripts::ScriptSprites + i));
        TxdSlot = CTxdStore::FindTxdSlot((CTxdStore *)"script", v69);
        if ( TxdSlot != -1 )
        {
          v71 = *(_DWORD *)(*(_DWORD *)CTxdStore::ms_pTxdPool + 56 * TxdSlot);
          if ( v71 )
            CTxdStore::RemoveTxd((CTxdStore *)TxdSlot, v71);
        }
        goto LABEL_62;
      default:
LABEL_62:
        CMissionCleanup::RemoveEntityFromList(this, *((_DWORD *)v45 + 1), *(_BYTE *)v45);
LABEL_63:
        ++v44;
        v45 = (CMissionCleanup *)((char *)v45 + 8);
        if ( (unsigned __int16)v44 < 0x4Bu )
          continue;
        for ( j = 0; j != 24; ++j )
        {
          v73 = (CPedType *)&off_18;
          do
          {
            PedFlag = CPedType::GetPedFlag(v73, (int)v46);
            CPedType::ClearPedTypeAsAcquaintance(0, j, PedFlag, v75);
            v77 = CPedType::GetPedFlag(v73, v76);
            CPedType::ClearPedTypeAsAcquaintance((CPedType *)((char *)&stderr + 1), j, v77, v78);
            v80 = CPedType::GetPedFlag(v73, v79);
            CPedType::ClearPedTypeAsAcquaintance((CPedType *)((char *)&stderr + 2), j, v80, v81);
            v83 = CPedType::GetPedFlag(v73, v82);
            CPedType::ClearPedTypeAsAcquaintance((CPedType *)((char *)&stderr + 3), j, v83, v84);
            v86 = CPedType::GetPedFlag(v73, v85);
            CPedType::ClearPedTypeAsAcquaintance((CPedType *)&byte_4, j, v86, v87);
            v73 = (CPedType *)((char *)v73 + 1);
          }
          while ( v73 != (CPedType *)&dword_20 );
        }
        CPedType::ClearPedTypeAcquaintances(0, 24, v88);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 24, v89);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 24, v90);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 24, v91);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 24, v92);
        CPedType::ClearPedTypeAcquaintances(0, 25, v93);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 25, v94);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 25, v95);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 25, v96);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 25, v97);
        CPedType::ClearPedTypeAcquaintances(0, 26, v98);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 26, v99);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 26, v100);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 26, v101);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 26, v102);
        CPedType::ClearPedTypeAcquaintances(0, 27, v103);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 27, v104);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 27, v105);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 27, v106);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 27, v107);
        CPedType::ClearPedTypeAcquaintances(0, 28, v108);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 28, v109);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 28, v110);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 28, v111);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 28, v112);
        CPedType::ClearPedTypeAcquaintances(0, 29, v113);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 29, v114);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 29, v115);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 29, v116);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 29, v117);
        CPedType::ClearPedTypeAcquaintances(0, 30, v118);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 30, v119);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 30, v120);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 30, v121);
        CPedType::ClearPedTypeAcquaintances((CPedType *)&byte_4, 30, v122);
        CPedType::ClearPedTypeAcquaintances(0, 31, v123);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 1), 31, v124);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 2), 31, v125);
        CPedType::ClearPedTypeAcquaintances((CPedType *)((char *)&stderr + 3), 31, v126);
        return sub_197248((CPedType *)&byte_4, 31, v127);
    }
  }
}


// ============================================================

// Address: 0x3281d0
// Original: _ZN15CMissionCleanup18DoFadeScrewUpCheckEv
// Demangled: CMissionCleanup::DoFadeScrewUpCheck(void)
unsigned int __fastcall CMissionCleanup::DoFadeScrewUpCheck(CMissionCleanup *this)
{
  unsigned int result; // r0
  int v2; // r1

  result = (unsigned __int8)CTheScripts::bScriptHasFadedOut;
  if ( CTheScripts::bScriptHasFadedOut )
  {
    CTheScripts::bScriptHasFadedOut = 0;
    result = (unsigned __int8)(byte_96B778 - 1);
    if ( result >= 2 )
    {
      CCamera::Fade((CCamera *)&TheCamera, 0.5, 1);
      result = CPad::GetPad(0, v2);
      *(_WORD *)(result + 272) &= ~0x20u;
    }
  }
  return result;
}


// ============================================================
