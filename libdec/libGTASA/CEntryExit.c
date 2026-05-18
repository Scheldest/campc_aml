
// Address: 0x18cac8
// Original: j__ZN10CEntryExit18RequestAmbientPedsEv
// Demangled: CEntryExit::RequestAmbientPeds(void)
// attributes: thunk
int __fastcall CEntryExit::RequestAmbientPeds(CEntryExit *this)
{
  return _ZN10CEntryExit18RequestAmbientPedsEv(this);
}


// ============================================================

// Address: 0x18ec8c
// Original: j__ZN10CEntryExit22FindValidTeleportPointER7CVector
// Demangled: CEntryExit::FindValidTeleportPoint(CVector &)
// attributes: thunk
int __fastcall CEntryExit::FindValidTeleportPoint(CEntryExit *this, CVector *a2)
{
  return _ZN10CEntryExit22FindValidTeleportPointER7CVector(this, a2);
}


// ============================================================

// Address: 0x1939cc
// Original: j__ZN10CEntryExit8IsInAreaERK7CVector
// Demangled: CEntryExit::IsInArea(CVector const&)
// attributes: thunk
int __fastcall CEntryExit::IsInArea(CEntryExit *this, const CVector *a2)
{
  return _ZN10CEntryExit8IsInAreaERK7CVector(this, a2);
}


// ============================================================

// Address: 0x194a2c
// Original: j__ZN10CEntryExit17TransitionStartedEP4CPed
// Demangled: CEntryExit::TransitionStarted(CPed *)
// attributes: thunk
int __fastcall CEntryExit::TransitionStarted(CEntryExit *this, CPed *a2)
{
  return _ZN10CEntryExit17TransitionStartedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19a4a0
// Original: j__ZN10CEntryExit19GenerateAmbientPedsERK7CVector
// Demangled: CEntryExit::GenerateAmbientPeds(CVector const&)
// attributes: thunk
int __fastcall CEntryExit::GenerateAmbientPeds(CEntryExit *this, const CVector *a2)
{
  return _ZN10CEntryExit19GenerateAmbientPedsERK7CVector(this, a2);
}


// ============================================================

// Address: 0x19b64c
// Original: j__ZN10CEntryExit18WarpGangWithPlayerEP4CPed
// Demangled: CEntryExit::WarpGangWithPlayer(CPed *)
// attributes: thunk
int __fastcall CEntryExit::WarpGangWithPlayer(CEntryExit *this, CPed *a2)
{
  return _ZN10CEntryExit18WarpGangWithPlayerEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a0cc8
// Original: j__ZN10CEntryExit23ProcessStealableObjectsEP4CPed
// Demangled: CEntryExit::ProcessStealableObjects(CPed *)
// attributes: thunk
int __fastcall CEntryExit::ProcessStealableObjects(CEntryExit *this, CPed *a2)
{
  return _ZN10CEntryExit23ProcessStealableObjectsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a109c
// Original: j__ZN10CEntryExit33GetPositionRelativeToOutsideWorldER7CVector
// Demangled: CEntryExit::GetPositionRelativeToOutsideWorld(CVector &)
// attributes: thunk
int __fastcall CEntryExit::GetPositionRelativeToOutsideWorld(CEntryExit *this, CVector *a2)
{
  return _ZN10CEntryExit33GetPositionRelativeToOutsideWorldER7CVector(this, a2);
}


// ============================================================

// Address: 0x1a16fc
// Original: j__ZN10CEntryExit18TransitionFinishedEP4CPed
// Demangled: CEntryExit::TransitionFinished(CPed *)
// attributes: thunk
int __fastcall CEntryExit::TransitionFinished(CEntryExit *this, CPed *a2)
{
  return _ZN10CEntryExit18TransitionFinishedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x3051e0
// Original: _ZN10CEntryExit18TransitionFinishedEP4CPed
// Demangled: CEntryExit::TransitionFinished(CPed *)
int __fastcall CEntryExit::TransitionFinished(CEntryExit *this, CMatrix **a2)
{
  float v4; // r0
  int IsHolding; // r0
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  int v9; // r6
  CEventAreaCodes *v10; // r5
  CHud *v11; // r0
  unsigned __int8 v12; // r2
  int v13; // r4
  CMatrix *v14; // r1
  CEntryExit *v15; // r0
  int *v16; // r1
  int v17; // r0
  const CVector *v18; // r1
  unsigned int v19; // r2
  int v20; // r3
  int v21; // r6
  const CVector *v22; // r1
  int ObjectsInFrustum; // r5
  int PlayerPed; // r0
  const CPed *v25; // r1
  int v26; // r6
  int v27; // r2
  int *v28; // r3
  int v29; // r5
  int v30; // r5
  unsigned int v31; // r1
  int PedsGroup; // r5
  CEventAreaCodes *v33; // r4
  int Pad; // r0
  CPlayerPed *v35; // r1
  int v36; // r0
  int v37; // r3
  int *v38; // r1
  CWaterLevel *v39; // r0
  CGarages *NearestWaterAndItsFlow; // r0
  int v41; // r0
  char v42; // r1
  char *v43; // r3
  CPopulation *v44; // r0
  bool v45; // r1
  CTimer *AllRequestedModels; // r0
  int v47; // r3
  int v48; // r6
  const CVector *v49; // r1
  const CVector *v50; // r1
  bool v51; // r1
  CTimer *VehiclesInLoadScene; // r0
  bool v53; // r1
  const CVector *v54; // r1
  bool v55; // r1
  unsigned int v56; // r1
  bool v57; // r1
  bool v58; // r2
  bool v59; // r1
  CMatrix *v60; // r0
  float v61; // s0
  CMatrix *v62; // r6
  __int64 v63; // kr00_8
  float v64; // s16
  float v65; // r0
  int v66; // r0
  CEntity *v67; // r2
  CMatrix *v68; // r1
  CTheScripts *v69; // r0
  const char *v70; // r1
  CShopping *v71; // r0
  CPopulation *v72; // r0
  CTheScripts *v73; // r0
  CEntryExit *v74; // r0
  int v75; // r0
  __int16 v76; // r1
  int v77; // r0
  void *v78; // r4
  int v79; // r0
  int v80; // r1
  CTaskComplexFacial *TaskSecondary; // r0
  bool v82; // r2
  int v84; // [sp+8h] [bp-40h] BYREF
  int v85; // [sp+Ch] [bp-3Ch]
  int v86; // [sp+10h] [bp-38h]
  __int64 v87; // [sp+1Ch] [bp-2Ch] BYREF
  float v88; // [sp+24h] [bp-24h]

  v4 = *(float *)(CEntryExit::ms_spawnPoint + 40);
  v87 = *(_QWORD *)(CEntryExit::ms_spawnPoint + 32);
  v88 = v4;
  IsHolding = CPed::GetEntityThatThisPedIsHolding((CPed *)a2);
  if ( IsHolding )
    *(_BYTE *)(IsHolding + 51) = *(_BYTE *)(CEntryExit::ms_spawnPoint + 50);
  v6 = *((unsigned __int16 *)this + 24);
  v7 = (v6 & ((unsigned int)&elf_hash_bucket[65] + 2)) == 0;
  if ( (v6 & ((unsigned int)&elf_hash_bucket[65] + 2)) == 0 )
    v7 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( v7 )
  {
    CColStore::AddCollisionNeededAtPosn((CColStore *)&v87, (const CVector *)((char *)&elf_hash_bucket[65] + 2));
    CIplStore::AddIplsNeededAtPosn((CIplStore *)&v87, v18);
    if ( CEntryExit::ms_bWarping )
    {
      CRenderer::m_loadingPriority = 0;
      CStreaming::AddModelsToRequestList((CStreaming *)&v87, (const CVector *)&dword_20, v19);
      v20 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 36);
      v21 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 40);
      v22 = *(const CVector **)(CEntryExit::ms_spawnPoint + 44);
      v84 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 32);
      v85 = v20;
      v86 = v21;
      CRenderer::RequestObjectsInDirection((CRenderer *)&v84, v22, COERCE_FLOAT(32), v20);
      CPathFind::SetPathsNeededAtPosition((CPathFind *)ThePaths, (const CVector *)&v87);
    }
    switch ( CEntryExitManager::ms_exitEnterState )
    {
      case 2:
        if ( CCamera::GetFading((CCamera *)&TheCamera) )
          return 0;
        CEntryExitManager::ms_exitEnterState = 3;
        break;
      case 1:
        v66 = *((_DWORD *)a2[272] + 4);
        if ( !v66 || (*(int (__fastcall **)(int))(*(_DWORD *)v66 + 20))(v66) != 932 )
        {
          CCamera::SetFadeColour((CCamera *)&TheCamera, 0, 0, 0);
          CCamera::Fade((CCamera *)&TheCamera, 1.0, 0);
          CEntryExitManager::ms_exitEnterState = 2;
        }
        if ( *(_BYTE *)(CEntryExit::ms_spawnPoint + 50) )
        {
          if ( *(_BYTE *)this )
          {
            if ( !*((_BYTE *)this + 50) )
              goto LABEL_16;
            if ( CEntryExitManager::ms_entryExitStackPosn < 2 )
              goto LABEL_16;
            if ( *((_DWORD *)&CEntryExitManager::ms_entryExitStack + CEntryExitManager::ms_entryExitStackPosn - 1) != CEntryExit::ms_spawnPoint )
              goto LABEL_16;
            this = (CEntryExit *)*((_DWORD *)&CEntryExitManager::ms_entryExitStack
                                 + CEntryExitManager::ms_entryExitStackPosn
                                 - 2);
            if ( this )
              goto LABEL_16;
          }
        }
        return 0;
      case 0:
        ObjectsInFrustum = CRenderer::GetObjectsInFrustum();
        PlayerPed = FindPlayerPed(-1);
        v25 = (const CPed *)CGame::currArea;
        CEntryExitManager::ms_numVisibleEntities = 0;
        if ( ObjectsInFrustum )
        {
          v26 = 0;
          v27 = 1 - ObjectsInFrustum;
          v28 = &dword_A88BC0;
          do
          {
            v29 = *v28;
            if ( *v28 != PlayerPed && v25 == (const CPed *)*(unsigned __int8 *)(v29 + 51) )
            {
              CEntryExitManager::ms_visibleEntityList[v26] = v29;
              v30 = *v28;
              CEntryExitManager::ms_numVisibleEntities = ++v26;
              *(_BYTE *)(v30 + 51) = 13;
            }
            if ( !v27 )
              break;
            ++v27;
            ++v28;
          }
          while ( v26 < 32 );
        }
        CEntryExitManager::ms_exitEnterState = 1;
        CEntryExitManager::ms_oldAreaCode = (int)v25;
        CGame::currArea = *(unsigned __int8 *)(CEntryExit::ms_spawnPoint + 50);
        PedsGroup = CPedGroups::GetPedsGroup((CPedGroups *)a2, v25);
        if ( PedsGroup )
        {
          v33 = (CEventAreaCodes *)CEvent::operator new((CEvent *)&word_10, v31);
          CEventAreaCodes::CEventAreaCodes(v33, (CPed *)a2);
          *(_DWORD *)v33 = &off_6671AC;
          CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)&v84, (CPed *)a2, v33);
          CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(PedsGroup + 48), (CEvent *)&v84);
          CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)&v84);
        }
        return 0;
    }
  }
  else
  {
    if ( CEntryExitManager::ms_exitEnterState == 2 )
    {
      if ( !CCamera::GetFading((CCamera *)&TheCamera) )
      {
        v13 = 0;
        CEntryExitManager::ms_exitEnterState = 3;
        return v13;
      }
      return 0;
    }
    if ( !CEntryExitManager::ms_exitEnterState )
    {
      CCamera::SetFadeColour((CCamera *)&TheCamera, 0, 0, 0);
      CCamera::Fade((CCamera *)&TheCamera, 0.5, 0);
      CEntryExitManager::ms_exitEnterState = (int)&stderr + 2;
      v9 = CPedGroups::GetPedsGroup((CPedGroups *)a2, (const CPed *)((char *)&stderr + 2));
      if ( v9 )
      {
        v10 = (CEventAreaCodes *)CEvent::operator new((CEvent *)&word_10, v8);
        CEventAreaCodes::CEventAreaCodes(v10, (CPed *)a2);
        *(_DWORD *)v10 = &off_6671AC;
        CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)&v84, (CPed *)a2, v10);
        CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v9 + 48), (CEvent *)&v84);
        CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)&v84);
      }
      if ( *(_BYTE *)(CEntryExit::ms_spawnPoint + 50) )
      {
        if ( *(_BYTE *)this )
        {
          if ( !*((_BYTE *)this + 50)
            || CEntryExitManager::ms_entryExitStackPosn < 2
            || *((_DWORD *)&CEntryExitManager::ms_entryExitStack + CEntryExitManager::ms_entryExitStackPosn - 1) != CEntryExit::ms_spawnPoint
            || (this = (CEntryExit *)*((_DWORD *)&CEntryExitManager::ms_entryExitStack
                                     + CEntryExitManager::ms_entryExitStackPosn
                                     - 2)) != 0 )
          {
LABEL_16:
            v11 = (CHud *)CText::Get((CText *)TheText, this);
            CHud::SetZoneName(v11, (unsigned __int16 *)((char *)&stderr + 1), v12);
            return 0;
          }
        }
      }
      return 0;
    }
    CGame::currArea = *(unsigned __int8 *)(CEntryExit::ms_spawnPoint + 50);
    CEntryExitManager::ms_numVisibleEntities = 0;
  }
  v14 = a2[356];
  v15 = (CEntryExit *)CGame::currArea;
  *((_BYTE *)a2 + 51) = CGame::currArea;
  if ( v14 && *((unsigned __int8 *)a2 + 1157) << 31 )
    *((_BYTE *)v14 + 51) = (_BYTE)v15;
  if ( v15 )
    v15 = this;
  a2[485] = v15;
  v16 = (int *)*((_DWORD *)this + 14);
  v17 = CEntryExitManager::ms_entryExitStackPosn;
  if ( !v16 )
    v16 = (int *)this;
  if ( CEntryExitManager::ms_entryExitStackPosn >= 1
    && *((int **)&CEntryExitManager::ms_entryExitStack + CEntryExitManager::ms_entryExitStackPosn - 1) == v16 )
  {
    --CEntryExitManager::ms_entryExitStackPosn;
  }
  else if ( *((_BYTE *)v16 + 50) )
  {
    v16 = &CEntryExitManager::ms_entryExitStackPosn;
    ++CEntryExitManager::ms_entryExitStackPosn;
    *((_DWORD *)&CEntryExitManager::ms_entryExitStack + v17) = this;
  }
  else
  {
    v16 = 0;
    CEntryExitManager::ms_entryExitStackPosn = 0;
  }
  a2[291] = (CMatrix *)((unsigned int)a2[291] | 0x4000000);
  Pad = CPad::GetPad(0, (int)v16);
  v35 = (CPlayerPed *)(*(_WORD *)(Pad + 272) & 0xFFF7);
  *(_WORD *)(Pad + 272) = (_WORD)v35;
  CClothes::RebuildPlayerIfNeeded((CClothes *)a2, v35);
  if ( (*((_BYTE *)this + 49) & 2) != 0 )
  {
    v13 = 1;
    *(_WORD *)(CEntryExit::ms_spawnPoint + 48) &= ~0x2000u;
    return v13;
  }
  v36 = LODWORD(v88);
  v37 = dword_951FBC;
  if ( dword_951FBC )
  {
    *(_QWORD *)(dword_951FBC + 48) = v87;
    v38 = (int *)(v37 + 56);
  }
  else
  {
    qword_951FAC = v87;
    v38 = &dword_951FB4;
  }
  *v38 = v36;
  CCamera::RestoreWithJumpCut((CCamera *)&TheCamera);
  v39 = (CWaterLevel *)CAudioZones::Update();
  NearestWaterAndItsFlow = (CGarages *)CWaterLevel::FindNearestWaterAndItsFlow(v39);
  CGarages::CloseHideOutGaragesBeforeSave(NearestWaterAndItsFlow);
  v41 = CEntryExitManager::ms_numVisibleEntities;
  v7 = CEntryExitManager::ms_numVisibleEntities-- == 0;
  if ( !v7 )
  {
    v42 = CEntryExitManager::ms_oldAreaCode;
    do
    {
      v43 = (char *)&CEntryExitManager::ms_visibleEntityList[v41--];
      *(_BYTE *)(*((_DWORD *)v43 - 1) + 51) = v42;
    }
    while ( v41 );
    CEntryExitManager::ms_numVisibleEntities = -1;
  }
  v44 = (CPopulation *)InteriorManager_c::SetEntryExitPtr((InteriorManager_c *)&g_interiorMan, this);
  CPopulation::RemoveAllRandomPeds(v44);
  CEntryExit::RequestAmbientPeds(this);
  bLoadingScene = 1;
  AllRequestedModels = (CTimer *)CStreaming::LoadAllRequestedModels(0, v45);
  bLoadingScene = 0;
  CTimer::Suspend(AllRequestedModels);
  if ( !CGame::currArea )
  {
    CTimeCycle::FindFarClipForCoors();
    RwCameraSetFarClipPlane();
  }
  v47 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 36);
  v48 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 40);
  v49 = *(const CVector **)(CEntryExit::ms_spawnPoint + 44);
  v84 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 32);
  v85 = v47;
  v86 = v48;
  CRenderer::RequestObjectsInDirection((CRenderer *)&v84, v49, COERCE_FLOAT(32), v47);
  CStreaming::LoadScene((CStreaming *)&v87, v50);
  CStreaming::LoadAllRequestedModels(0, v51);
  VehiclesInLoadScene = (CTimer *)InteriorManager_c::Update((InteriorManager_c *)&g_interiorMan);
  if ( VehiclesInLoadScene == (CTimer *)((char *)&stderr + 1) )
  {
    CStreaming::SetLoadVehiclesInLoadScene(0, v53);
    CStreaming::LoadScene((CStreaming *)&v87, v54);
    VehiclesInLoadScene = (CTimer *)CStreaming::SetLoadVehiclesInLoadScene((CStreaming *)((char *)&stderr + 1), v55);
  }
  CTimer::Resume(VehiclesInLoadScene);
  CStreaming::ClearFlagForAll((CStreaming *)&dword_20, v56);
  if ( *(_BYTE *)(CEntryExit::ms_spawnPoint + 51) )
    CTimeCycle::StartExtraColour((CTimeCycle *)(*(unsigned __int8 *)(CEntryExit::ms_spawnPoint + 51) - 1), 0, v58);
  else
    CTimeCycle::StopExtraColour(0, v57);
  CRubbish::SetVisibility((CRubbish *)(*(_WORD *)(CEntryExit::ms_spawnPoint + 48) & 1), v59);
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v62 = a2[356];
    v63 = v87;
    v64 = v88 + -1.0;
    v65 = (*(float (__fastcall **)(CMatrix *))(*(_DWORD *)v62 + 216))(v62);
    (*(void (__fastcall **)(CMatrix *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v62 + 60))(
      v62,
      v63,
      HIDWORD(v63),
      v64 + v65,
      0);
    v60 = (CMatrix *)*((_DWORD *)v62 + 5);
    v61 = (float)(*(float *)(CEntryExit::ms_spawnPoint + 44) * 3.1416) / 180.0;
    if ( !v60 )
    {
      *((float *)v62 + 4) = v61;
      goto LABEL_82;
    }
    goto LABEL_68;
  }
  CEntryExit::FindValidTeleportPoint(0, (CVector *)&v87);
  (*((void (__fastcall **)(CMatrix **, _DWORD, _DWORD, float, _DWORD))*a2 + 15))(
    a2,
    v87,
    HIDWORD(v87),
    COERCE_FLOAT(LODWORD(v88)),
    0);
  v60 = a2[5];
  v61 = (float)(*(float *)(CEntryExit::ms_spawnPoint + 44) * 3.1416) / 180.0;
  *((float *)a2 + 344) = v61;
  *((float *)a2 + 343) = v61;
  if ( v60 )
  {
LABEL_68:
    CMatrix::SetRotateZOnly(v60, v61);
    goto LABEL_82;
  }
  *((float *)a2 + 4) = v61;
LABEL_82:
  CCamera::Fade((CCamera *)&TheCamera, 1.0, 1);
  v68 = a2[5];
  v69 = (CMatrix *)((char *)v68 + 48);
  if ( !v68 )
    v69 = (CTheScripts *)(a2 + 1);
  CTheScripts::ClearSpaceForMissionEntity(v69, (const CVector *)a2, v67);
  v71 = (CShopping *)*(unsigned __int16 *)(CEntryExit::ms_spawnPoint + 48);
  if ( ((unsigned __int8)v71 & 0x10) != 0 )
  {
    v72 = (CPopulation *)CShopping::RemoveLoadedShop(v71);
  }
  else
  {
    v72 = (CPopulation *)((_DWORD)v71 << 28);
    if ( (int)v72 < 0 )
    {
      CShopping::LoadShop(this, v70);
      v72 = (CPopulation *)*((_DWORD *)this + 14);
      if ( v72 )
      {
        v72 = (CPopulation *)(*((unsigned __int16 *)this + 24) | 0x10);
        *((_WORD *)this + 24) = (_WORD)v72;
      }
    }
  }
  v73 = (CTheScripts *)CPopulation::ManageAllPopulation(v72);
  CTheScripts::Process(v73);
  v74 = (CEntryExit *)(*(unsigned __int8 *)(CEntryExit::ms_spawnPoint + 49) << 31);
  if ( v74 )
    v74 = (CEntryExit *)CEntryExit::WarpGangWithPlayer(v74, (CPed *)a2);
  CEntryExit::ProcessStealableObjects(v74, (CPed *)a2);
  v75 = CEntryExit::ms_spawnPoint;
  v76 = *(_WORD *)(CEntryExit::ms_spawnPoint + 48);
  *(_WORD *)(CEntryExit::ms_spawnPoint + 48) = v76 & 0xDFFF;
  if ( v76 <= -1 )
  {
    v77 = -286331153 * ((v75 - *(_DWORD *)CEntryExitManager::mp_poolEntryExits) >> 2);
    if ( *(char *)(*(_DWORD *)(CEntryExitManager::mp_poolEntryExits + 4) + v77) >= 0 )
    {
      v78 = (void *)(*(_DWORD *)CEntryExitManager::mp_poolEntryExits + 60 * v77);
      CQuadTreeNode::DeleteItem((CQuadTreeNode *)CEntryExitManager::mp_QuadTree, v78);
      v79 = CEntryExitManager::mp_poolEntryExits;
      v80 = -286331153 * (((int)v78 - *(_DWORD *)CEntryExitManager::mp_poolEntryExits) >> 2);
      *(_BYTE *)(*(_DWORD *)(CEntryExitManager::mp_poolEntryExits + 4) + v80) = *(_BYTE *)(*(_DWORD *)(CEntryExitManager::mp_poolEntryExits + 4)
                                                                                         - 286331153
                                                                                         * (((int)v78
                                                                                           - *(_DWORD *)CEntryExitManager::mp_poolEntryExits) >> 2)) | 0x80;
      if ( v80 < *(_DWORD *)(v79 + 12) )
        *(_DWORD *)(v79 + 12) = v80;
    }
  }
  TaskSecondary = (CTaskComplexFacial *)CTaskManager::GetTaskSecondary((CMatrix *)((char *)a2[272] + 4), 3);
  CTaskComplexFacial::StopAll(TaskSecondary);
  v13 = 1;
  CGame::TidyUpMemory((CGame *)((char *)&stderr + 1), 1, v82);
  return v13;
}


// ============================================================

// Address: 0x305af4
// Original: _ZN10CEntryExit8IsInAreaERK7CVector
// Demangled: CEntryExit::IsInArea(CVector const&)
int __fastcall CEntryExit::IsInArea(CEntryExit *this, const CVector *a2)
{
  float v4; // s0
  float v6; // r1
  float v7; // s8
  float v8; // s0
  float v9; // s4
  float v10; // s18
  float v11; // s2
  float v12; // s0
  float v13; // [sp+0h] [bp-88h]
  float v14; // [sp+4h] [bp-84h]
  float v15; // [sp+8h] [bp-80h]
  _BYTE v16[64]; // [sp+10h] [bp-78h] BYREF
  int v17; // [sp+50h] [bp-38h]
  int v18; // [sp+54h] [bp-34h]
  float v19; // [sp+58h] [bp-30h]
  float v20; // [sp+5Ch] [bp-2Ch]
  float v21; // [sp+60h] [bp-28h]

  if ( *((float *)this + 7) == 0.0 )
  {
    if ( *(float *)a2 >= *((float *)this + 2) && *(float *)a2 <= *((float *)this + 4) )
    {
      v4 = *((float *)a2 + 1);
      if ( v4 >= *((float *)this + 5)
        && v4 <= *((float *)this + 3)
        && fabsf(*((float *)a2 + 2) - *((float *)this + 6)) < 1.0 )
      {
        return 1;
      }
    }
  }
  else
  {
    v6 = *((float *)this + 7);
    v7 = *((float *)this + 5);
    v8 = *(float *)a2;
    v9 = (float)(*((float *)this + 3) - v7) * 0.5;
    v10 = *((float *)this + 2) + (float)((float)(*((float *)this + 4) - *((float *)this + 2)) * 0.5);
    v11 = *((float *)a2 + 1);
    v21 = *((float *)a2 + 2);
    v20 = v11 - (float)(v7 + v9);
    v19 = v8 - v10;
    v17 = 0;
    v18 = 0;
    CMatrix::SetRotateZ((CMatrix *)v16, v6);
    operator*();
    v12 = (float)(v7 + v9) + v14;
    v19 = v10 + v13;
    v20 = v12;
    v21 = v15 + 0.0;
    if ( (float)(v10 + v13) >= *((float *)this + 2)
      && (float)(v10 + v13) <= *((float *)this + 4)
      && v12 >= *((float *)this + 5)
      && v12 <= *((float *)this + 3)
      && fabsf(*((float *)a2 + 2) - *((float *)this + 6)) < 1.0 )
    {
      CMatrix::~CMatrix((CMatrix *)v16);
      return 1;
    }
    CMatrix::~CMatrix((CMatrix *)v16);
  }
  return 0;
}


// ============================================================

// Address: 0x305c90
// Original: _ZN10CEntryExit17TransitionStartedEP4CPed
// Demangled: CEntryExit::TransitionStarted(CPed *)
int __fastcall CEntryExit::TransitionStarted(CEntryExit *this, CPed *a2, unsigned __int8 a3)
{
  bool v5; // nf
  int result; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r1
  int v10; // r0
  bool v11; // zf
  __int16 v12; // r1
  bool v13; // zf
  float v14; // s0
  float v15; // s2
  float v16; // s20
  float v17; // s18
  float v18; // s22
  float v19; // s24
  float v20; // s26
  int CanPlayerStartMission; // r1
  int v22; // r0
  unsigned int v23; // r1
  bool v24; // zf
  float v25; // s0
  float v26; // r2
  unsigned int v27; // r1
  float *NearestDoor; // r6
  CTaskComplexGotoDoorAndOpen *v29; // r5
  int v30; // r0
  float *v31; // r1
  float v32; // s6
  float v33; // s0
  int Pad; // r0
  unsigned int v35; // r1
  CTaskSimple *v36; // r5
  CTaskComplexGotoDoorAndOpen *v37; // r5
  float v38; // [sp+0h] [bp-90h] BYREF
  float v39; // [sp+4h] [bp-8Ch]
  float v40; // [sp+8h] [bp-88h]
  float v41; // [sp+18h] [bp-78h] BYREF
  float v42; // [sp+1Ch] [bp-74h]
  float v43; // [sp+20h] [bp-70h]
  float v44[3]; // [sp+24h] [bp-6Ch] BYREF
  float v45; // [sp+30h] [bp-60h] BYREF
  float v46; // [sp+34h] [bp-5Ch]
  float v47; // [sp+38h] [bp-58h]
  float v48; // [sp+3Ch] [bp-54h] BYREF
  float v49; // [sp+40h] [bp-50h]
  float v50; // [sp+44h] [bp-4Ch]

  v5 = (*((_BYTE *)this + 49) & 0x40) != 0;
  result = 0;
  if ( !v5 || CEntryExitManager::ms_exitEnterState )
    return result;
  if ( CClock::GetIsTimeInRange((CClock *)*((unsigned __int8 *)this + 52), *((_BYTE *)this + 53), a3) != 1 )
    return 0;
  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
  {
    if ( (*((_BYTE *)this + 49) & 8) == 0 )
      goto LABEL_7;
    return 0;
  }
  v9 = *((_DWORD *)a2 + 356);
  v10 = *(_DWORD *)(v9 + 1440);
  v11 = v10 == 9;
  if ( v10 != 9 )
    v11 = v10 == 0;
  if ( !v11 || (*(_BYTE *)(*(_DWORD *)(v9 + 904) + 204) & 8) != 0 )
    return 0;
  v12 = *((_WORD *)this + 24);
  v13 = (v12 & 0x20) == 0;
  if ( (v12 & 0x20) == 0 )
    v13 = v10 == 0;
  if ( v13 || (v12 & 0x40) == 0 && v10 == 9 )
    return 0;
LABEL_7:
  v7 = *((_DWORD *)this + 14);
  if ( v7 )
  {
    CEntryExit::ms_spawnPoint = *((_DWORD *)this + 14);
    v8 = (int *)(v7 + 56);
  }
  else
  {
    v8 = &CEntryExit::ms_spawnPoint;
  }
  *v8 = (int)this;
  v14 = *((float *)this + 2) + *((float *)this + 4);
  v15 = *((float *)this + 5) + *((float *)this + 3);
  v50 = *((float *)this + 6);
  v16 = v50;
  v17 = v14 * 0.5;
  v49 = v15 * 0.5;
  v48 = v14 * 0.5;
  v18 = *(float *)(CEntryExit::ms_spawnPoint + 32) - (float)(v14 * 0.5);
  v19 = *(float *)(CEntryExit::ms_spawnPoint + 36) - (float)(v15 * 0.5);
  v20 = *(float *)(CEntryExit::ms_spawnPoint + 40) - v50;
  v46 = v19;
  v45 = v18;
  v47 = v20;
  CanPlayerStartMission = CPlayerPed::CanPlayerStartMission(a2);
  result = 0;
  if ( CanPlayerStartMission )
  {
    *((_WORD *)this + 24) |= 0x2000u;
    CEntryExit::ms_pDoor = 0;
    v22 = *((_DWORD *)a2 + 289);
    v23 = *((_DWORD *)a2 + 291) & 0xFBFFFFFF;
    *((_DWORD *)a2 + 291) = v23;
    v24 = (v22 & 0x100) == 0;
    if ( (v22 & 0x100) == 0 )
    {
      v23 = 514;
      v24 = (*((_WORD *)this + 24) & 0x202) == 0;
    }
    v25 = sqrtf((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20));
    if ( v24 )
    {
      CEntryExit::ms_bWarping = v25 > 10.0;
      CVector::Normalise((CVector *)&v45);
      NearestDoor = (float *)CEntryExitManager::FindNearestDoor(this, (const CEntryExit *)0x41200000, v26);
      if ( NearestDoor )
      {
        v29 = (CTaskComplexGotoDoorAndOpen *)CTask::operator new((CTask *)&dword_38, v27);
        CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(v29, (CObject *)NearestDoor);
        CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v38, 3, v29, 0);
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v38, 0);
        CEntryExit::ms_pDoor = (int)NearestDoor;
        v30 = *((_DWORD *)NearestDoor + 5);
        v31 = (float *)(v30 + 48);
        if ( !v30 )
          v31 = NearestDoor + 1;
        v32 = v31[1];
        v33 = *v31 - v48;
        v47 = 0.0;
        v45 = v33;
        v46 = v32 - v49;
        CVector::Normalise((CVector *)&v45);
      }
      else
      {
        if ( CEntryExit::ms_bWarping )
        {
          *((_WORD *)this + 24) |= 2u;
          return 1;
        }
        v37 = (CTaskComplexGotoDoorAndOpen *)CTask::operator new((CTask *)&dword_38, v27);
        v38 = (float)(v45 * 4.0) + v17;
        v39 = (float)(v46 * 4.0) + (float)(v15 * 0.5);
        v40 = (float)(v47 * 4.0) + v16;
        CTaskComplexGotoDoorAndOpen::CTaskComplexGotoDoorAndOpen(v37, (const CVector *)&v48, (const CVector *)&v38);
        CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v38, 3, v37, 0);
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v38, 0);
      }
      CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v38);
      v44[1] = v49 - (float)(v46 * 3.0);
      v44[0] = v48 - (float)(v45 * 3.0);
      v42 = v46 + v49;
      v41 = v45 + v48;
      v43 = v47 + v50;
      v44[2] = (float)(v50 - (float)(v47 * 3.0)) + 1.0;
      if ( fabsf((float)(v45 + v48) + -2229.0) < 1.0 )
      {
        v42 = (float)(v46 + v49) + -0.5;
        v41 = (float)(v45 + v48) + 1.875;
      }
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
      CCamera::SetCamPositionForFixedMode((CCamera *)&TheCamera, (const CVector *)v44, (const CVector *)&v38);
      CCamera::TakeControlNoEntity((CCamera *)&TheCamera, (const CVector *)&v41, 2, 1);
    }
    else if ( v25 > 10.0 )
    {
      v23 = 1;
      CEntryExit::ms_bWarping = 1;
    }
    Pad = CPad::GetPad(0, v23);
    v35 = *(unsigned __int16 *)(Pad + 272) | 8;
    *(_WORD *)(Pad + 272) = v35;
    if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    {
      v36 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, v35);
      CTaskSimple::CTaskSimple(v36);
      *(_DWORD *)v36 = &off_6653F4;
      CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v38, 3, v36, 0);
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v38, 0);
      CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v38);
    }
    return 1;
  }
  return result;
}


// ============================================================

// Address: 0x306af8
// Original: _ZN10CEntryExit33GetPositionRelativeToOutsideWorldER7CVector
// Demangled: CEntryExit::GetPositionRelativeToOutsideWorld(CVector &)
int __fastcall CEntryExit::GetPositionRelativeToOutsideWorld(int result, float *a2)
{
  int v2; // r2
  float v3; // s8
  float v4; // s0
  float v5; // s2
  float v6; // s2
  float v7; // s4

  v2 = *(_DWORD *)(result + 56);
  if ( !v2 )
    v2 = result;
  if ( *(_BYTE *)(v2 + 50) )
  {
    v3 = *(float *)(result + 24) + a2[2];
    v4 = *a2 + (float)((float)(*(float *)(result + 8) + *(float *)(result + 16)) * 0.5);
    v5 = (float)((float)(*(float *)(result + 12) + *(float *)(result + 20)) * 0.5) + a2[1];
    *a2 = v4;
    a2[1] = v5;
    a2[2] = v3;
    v6 = v5 - *(float *)(v2 + 36);
    v7 = v3 - *(float *)(v2 + 40);
    *a2 = v4 - *(float *)(v2 + 32);
    a2[1] = v6;
    a2[2] = v7;
  }
  return result;
}


// ============================================================

// Address: 0x306c5c
// Original: _ZN10CEntryExit27GetEntryExitToDisplayNameOfEv
// Demangled: CEntryExit::GetEntryExitToDisplayNameOf(void)
_BYTE *__fastcall CEntryExit::GetEntryExitToDisplayNameOf(_BYTE *this)
{
  bool v1; // zf

  v1 = *(_BYTE *)(CEntryExit::ms_spawnPoint + 50) == 0;
  if ( *(_BYTE *)(CEntryExit::ms_spawnPoint + 50) )
    v1 = *this == 0;
  if ( v1 )
    return 0;
  if ( this[50]
    && CEntryExitManager::ms_entryExitStackPosn >= 2
    && CEntryExitManager::ms_entryExitStack[CEntryExitManager::ms_entryExitStackPosn - 1] == CEntryExit::ms_spawnPoint )
  {
    return (_BYTE *)CEntryExitManager::ms_entryExitStack[CEntryExitManager::ms_entryExitStackPosn - 2];
  }
  return this;
}


// ============================================================

// Address: 0x306cbc
// Original: _ZN10CEntryExit23RequestObjectsInFrustumEv
// Demangled: CEntryExit::RequestObjectsInFrustum(void)
int __fastcall CEntryExit::RequestObjectsInFrustum(const CVector **this)
{
  int v1; // r1
  __int64 v3; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+Ch] [bp-Ch]

  v1 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 40);
  v3 = *(_QWORD *)(CEntryExit::ms_spawnPoint + 32);
  v4 = v1;
  return CRenderer::RequestObjectsInDirection((CRenderer *)&v3, this[11], COERCE_FLOAT(32), SHIDWORD(v3));
}


// ============================================================

// Address: 0x306da0
// Original: _ZN10CEntryExit18RequestAmbientPedsEv
// Demangled: CEntryExit::RequestAmbientPeds(void)
int __fastcall CEntryExit::RequestAmbientPeds(CEntryExit *this)
{
  int result; // r0
  __int64 v3; // [sp+0h] [bp-28h] BYREF
  __int64 v4; // [sp+8h] [bp-20h]
  __int64 v5; // [sp+10h] [bp-18h] BYREF
  __int64 v6; // [sp+18h] [bp-10h]

  if ( !CGame::currArea )
    return j_CStreaming::RemoveDodgyPedsFromRandomSlots(0);
  if ( !strcasecmp("bar1", (const char *)this) )
  {
    v3 = unk_60FDA8;
    v4 = unk_60FDB0;
    v5 = unk_60FDB8;
    v6 = unk_60FDC0;
    CStreaming::StreamPedsIntoRandomSlots((CStreaming *)&v3, (int *)&v5);
  }
  if ( !strcasecmp("strip2", (const char *)this) )
  {
    v3 = unk_60FDC8;
    v4 = unk_60FDD0;
    v5 = unk_60FDD8;
    v6 = unk_60FDE0;
    CStreaming::StreamPedsIntoRandomSlots((CStreaming *)&v3, (int *)&v5);
  }
  if ( !strcasecmp("LAstrip", (const char *)this) )
  {
    v3 = unk_60FDE8;
    v4 = unk_60FDF0;
    v5 = unk_60FDF8;
    v6 = unk_60FE00;
    CStreaming::StreamPedsIntoRandomSlots((CStreaming *)&v3, (int *)&v5);
  }
  if ( !strcasecmp("MAFCAS", (const char *)this) )
  {
    v3 = unk_60FE08;
    v4 = unk_60FE10;
    v5 = unk_60FE18;
    v6 = unk_60FE20;
    CStreaming::StreamPedsIntoRandomSlots((CStreaming *)&v3, (int *)&v5);
  }
  result = strcasecmp("TRICAS", (const char *)this);
  if ( !result )
  {
    v3 = unk_60FE28;
    v4 = unk_60FE30;
    v5 = unk_60FE38;
    v6 = unk_60FE40;
    return CStreaming::StreamPedsIntoRandomSlots((CStreaming *)&v3, (int *)&v5);
  }
  return result;
}


// ============================================================

// Address: 0x306ec0
// Original: _ZN10CEntryExit19GenerateAmbientPedsERK7CVector
// Demangled: CEntryExit::GenerateAmbientPeds(CVector const&)
int CEntryExit::GenerateAmbientPeds()
{
  return 0;
}


// ============================================================

// Address: 0x306ff8
// Original: _ZN10CEntryExit22FindValidTeleportPointER7CVector
// Demangled: CEntryExit::FindValidTeleportPoint(CVector &)
int __fastcall CEntryExit::FindValidTeleportPoint(CEntryExit *this, CVector *a2)
{
  int v3; // r1
  int v4; // r2
  int result; // r0
  int v6; // r4
  float v7; // s22
  float v8; // r0
  int v9; // r4
  float v10; // s20
  float v11; // r0
  double v12; // d16
  double v13; // [sp+20h] [bp-50h] BYREF
  int v14; // [sp+28h] [bp-48h]

  v3 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 36);
  v4 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 40);
  *(_DWORD *)a2 = *(_DWORD *)(CEntryExit::ms_spawnPoint + 32);
  *((_DWORD *)a2 + 1) = v3;
  *((_DWORD *)a2 + 2) = v4;
  result = CWorld::TestSphereAgainstWorld();
  if ( result )
  {
    v6 = -1;
    while ( 1 )
    {
      ++v6;
      v7 = cosf((float)((float)((float)v6 * 3.1416) + (float)((float)v6 * 3.1416)) * 0.125);
      v8 = sinf((float)((float)((float)v6 * 3.1416) + (float)((float)v6 * 3.1416)) * 0.125);
      v13 = *(double *)a2;
      v14 = *((_DWORD *)a2 + 2);
      *(float *)&v13 = (float)(v7 * 1.25) + *(float *)&v13;
      *((float *)&v13 + 1) = (float)(v8 * 1.25) + *((float *)&v13 + 1);
      if ( !CWorld::TestSphereAgainstWorld() )
      {
        if ( CWorld::GetIsLineOfSightClear(
               a2,
               (const CVector *)&v13,
               (const CVector *)((char *)&stderr + 1),
               1,
               0,
               1,
               1,
               0,
               0,
               1) )
        {
          break;
        }
      }
      if ( v6 >= 7 )
      {
        v9 = -1;
        while ( 1 )
        {
          ++v9;
          v10 = cosf((float)((float)((float)v9 * 3.1416) + (float)((float)v9 * 3.1416)) * 0.125);
          v11 = sinf((float)((float)((float)v9 * 3.1416) + (float)((float)v9 * 3.1416)) * 0.125);
          v13 = *(double *)a2;
          v14 = *((_DWORD *)a2 + 2);
          *(float *)&v13 = (float)(v10 + v10) + *(float *)&v13;
          *((float *)&v13 + 1) = (float)(v11 + v11) + *((float *)&v13 + 1);
          result = CWorld::TestSphereAgainstWorld();
          if ( !result )
          {
            result = CWorld::GetIsLineOfSightClear(
                       a2,
                       (const CVector *)&v13,
                       (const CVector *)((char *)&stderr + 1),
                       1,
                       0,
                       1,
                       1,
                       0,
                       0,
                       1);
            if ( result == 1 )
              break;
          }
          if ( v9 >= 7 )
            return result;
        }
        break;
      }
    }
    v12 = v13;
    result = v14;
    *((_DWORD *)a2 + 2) = v14;
    *(double *)a2 = v12;
  }
  return result;
}


// ============================================================

// Address: 0x3071d4
// Original: _ZN10CEntryExit18WarpGangWithPlayerEP4CPed
// Demangled: CEntryExit::WarpGangWithPlayer(CPed *)
int __fastcall CEntryExit::WarpGangWithPlayer(CEntryExit *this, CPed *a2)
{
  int result; // r0
  int v4; // r9
  int v5; // r8
  int v6; // r5
  int v7; // r0
  float *v8; // r10
  float *v9; // r0
  float v10; // s0
  float v11; // s2
  int v12; // r6
  int v13; // r0
  float *v14; // r4
  float *v15; // r0
  float v16; // s0
  float v17; // s2
  int v18; // r0
  float *v19; // r4
  float *v20; // r0
  float v21; // s0
  float v22; // s2
  int v23; // r0
  int v24; // r1
  float *v25; // r2
  float *v26; // r0
  float v27; // s2
  float v28; // s6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v30; // r1
  int v31; // r4
  CMatrix *v32; // r0
  float v33; // [sp+0h] [bp-78h]
  CPedGroupMembership *v34; // [sp+34h] [bp-44h]
  float v35; // [sp+38h] [bp-40h] BYREF
  float v36; // [sp+3Ch] [bp-3Ch]
  int v37; // [sp+40h] [bp-38h]
  float v38; // [sp+44h] [bp-34h] BYREF
  float v39; // [sp+48h] [bp-30h]
  float v40; // [sp+4Ch] [bp-2Ch]

  result = *(_DWORD *)(*((_DWORD *)a2 + 273) + 56);
  if ( CPedGroups::ms_activeGroups[result] )
  {
    v34 = (CPedGroupMembership *)&CPedGroups::ms_groups[181 * result + 2];
    result = CPedGroupMembership::IsLeader(v34, a2);
    if ( result == 1 )
    {
      v4 = -1;
      v5 = 0;
      do
      {
        result = CPedGroupMembership::GetMember(v34, ++v4);
        v6 = result;
        if ( result && v5 <= 7 && (CPed *)result != a2 )
        {
          v7 = *((_DWORD *)a2 + 5);
          v8 = (float *)((char *)a2 + 4);
          if ( v7 )
            v8 = (float *)(v7 + 48);
          v9 = (float *)&CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v5];
          v10 = *v9 + *v8;
          v11 = v9[1] + v8[1];
          v40 = v8[2] + 0.0;
          v39 = v11;
          v38 = v10;
          result = CWorld::TestSphereAgainstWorld();
          v12 = v5 + 1;
          if ( result
            || (result = CWorld::GetIsLineOfSightClear(
                           (CWorld *)v8,
                           (const CVector *)&v38,
                           (const CVector *)((char *)&stderr + 1),
                           1,
                           0,
                           1,
                           1,
                           0,
                           0,
                           1)) == 0 )
          {
            if ( v5 > 6 )
              return result;
            v13 = *((_DWORD *)a2 + 5);
            v14 = (float *)((char *)a2 + 4);
            if ( v13 )
              v14 = (float *)(v13 + 48);
            v15 = (float *)&CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v12];
            v16 = *v15 + *v14;
            v17 = v15[1] + v14[1];
            v40 = v14[2] + 0.0;
            v39 = v17;
            v38 = v16;
            result = CWorld::TestSphereAgainstWorld();
            v12 = v5 + 2;
            if ( result
              || (result = CWorld::GetIsLineOfSightClear(
                             (CWorld *)v14,
                             (const CVector *)&v38,
                             (const CVector *)((char *)&stderr + 1),
                             1,
                             0,
                             1,
                             1,
                             0,
                             0,
                             1)) == 0 )
            {
              if ( v5 > 5 )
                return result;
              v18 = *((_DWORD *)a2 + 5);
              v19 = (float *)((char *)a2 + 4);
              if ( v18 )
                v19 = (float *)(v18 + 48);
              v20 = (float *)&CTaskComplexFollowLeaderInFormation::ms_offsets[2 * v12];
              v21 = *v20 + *v19;
              v22 = v20[1] + v19[1];
              v40 = v19[2] + 0.0;
              v39 = v22;
              v38 = v21;
              result = CWorld::TestSphereAgainstWorld();
              if ( result )
                return result;
              result = CWorld::GetIsLineOfSightClear(
                         (CWorld *)v19,
                         (const CVector *)&v38,
                         (const CVector *)((char *)&stderr + 1),
                         1,
                         0,
                         1,
                         1,
                         0,
                         0,
                         1);
              if ( result != 1 )
                return result;
              v12 = v5 + 3;
            }
          }
          v23 = *(_DWORD *)(v6 + 20);
          v24 = *((_DWORD *)a2 + 5);
          v25 = (float *)(v23 + 48);
          if ( !v23 )
            v25 = (float *)(v6 + 4);
          v26 = (float *)((char *)a2 + 4);
          v27 = v25[1];
          if ( v24 )
            v26 = (float *)(v24 + 48);
          v28 = v26[1];
          v35 = *v26 - *v25;
          v37 = 0;
          v36 = v28 - v27;
          CVector::Normalise((CVector *)&v35);
          RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                   (CGeneral *)LODWORD(v35),
                                                   v36,
                                                   0.0,
                                                   0.0,
                                                   v33);
          v31 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v30);
          (*(void (__fastcall **)(int, float, float, float, _DWORD))(*(_DWORD *)v6 + 60))(
            v6,
            COERCE_FLOAT(LODWORD(v38)),
            COERCE_FLOAT(LODWORD(v39)),
            COERCE_FLOAT(LODWORD(v40)),
            0);
          CPedIntelligence::FlushImmediately(*(CPedIntelligence **)(v6 + 1088), 0);
          v32 = *(CMatrix **)(v6 + 20);
          *(_DWORD *)(v6 + 1372) = v31;
          *(_DWORD *)(v6 + 1376) = v31;
          if ( v32 )
            CMatrix::SetRotateZOnly(v32, *(float *)&v31);
          else
            *(_DWORD *)(v6 + 16) = v31;
          *(_BYTE *)(v6 + 51) = *((_BYTE *)a2 + 51);
          result = *((_DWORD *)a2 + 485);
          v5 = v12;
          *(_DWORD *)(v6 + 1940) = result;
        }
      }
      while ( v4 < 6 );
    }
  }
  return result;
}


// ============================================================

// Address: 0x307500
// Original: _ZN10CEntryExit23ProcessStealableObjectsEP4CPed
// Demangled: CEntryExit::ProcessStealableObjects(CPed *)
int __fastcall CEntryExit::ProcessStealableObjects(CEntryExit *this, CPed *a2)
{
  int result; // r0
  CEntity *v3; // r4
  CEntity *v4; // r1
  unsigned __int8 v5; // r2

  result = CPed::GetEntityThatThisPedIsHolding(a2);
  v3 = (CEntity *)result;
  if ( result )
  {
    result = *(_BYTE *)(result + 58) & 7;
    if ( result == 4 )
    {
      result = *((unsigned __int8 *)v3 + 325) << 26;
      if ( (*((_BYTE *)v3 + 325) & 0x20) != 0 )
      {
        if ( (*((unsigned __int8 *)v3 + 320) | 4) != 6 )
        {
          if ( !*(_BYTE *)(CEntryExit::ms_spawnPoint + 50) )
          {
            v4 = v3;
            v5 = 1;
            goto LABEL_9;
          }
          if ( InteriorManager_c::FindStealableObjectId((InteriorManager_c *)&g_interiorMan, v3) != -1 )
          {
            v4 = v3;
            v5 = 0;
LABEL_9:
            InteriorManager_c::SetStealableObjectStolen((InteriorManager_c *)&g_interiorMan, v4, v5);
          }
        }
        result = *(unsigned __int8 *)(CEntryExit::ms_spawnPoint + 50);
        *((_BYTE *)v3 + 51) = result;
      }
    }
  }
  return result;
}


// ============================================================
