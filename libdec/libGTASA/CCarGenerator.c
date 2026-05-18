
// Address: 0x18bc58
// Original: j__ZN13CCarGenerator16CheckForBlockageEi
// Demangled: CCarGenerator::CheckForBlockage(int)
// attributes: thunk
int __fastcall CCarGenerator::CheckForBlockage(CCarGenerator *this, int a2)
{
  return _ZN13CCarGenerator16CheckForBlockageEi(this, a2);
}


// ============================================================

// Address: 0x18dfd4
// Original: j__ZN13CCarGenerator8SwitchOnEv
// Demangled: CCarGenerator::SwitchOn(void)
// attributes: thunk
int __fastcall CCarGenerator::SwitchOn(CCarGenerator *this)
{
  return _ZN13CCarGenerator8SwitchOnEv(this);
}


// ============================================================

// Address: 0x191514
// Original: j__ZN13CCarGenerator9SwitchOffEv
// Demangled: CCarGenerator::SwitchOff(void)
// attributes: thunk
int __fastcall CCarGenerator::SwitchOff(CCarGenerator *this)
{
  return _ZN13CCarGenerator9SwitchOffEv(this);
}


// ============================================================

// Address: 0x19384c
// Original: j__ZN13CCarGenerator20DoInternalProcessingEv
// Demangled: CCarGenerator::DoInternalProcessing(void)
// attributes: thunk
int __fastcall CCarGenerator::DoInternalProcessing(CCarGenerator *this)
{
  return _ZN13CCarGenerator20DoInternalProcessingEv(this);
}


// ============================================================

// Address: 0x19fe04
// Original: j__ZN13CCarGenerator30CheckIfWithinRangeOfAnyPlayersEv
// Demangled: CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void)
// attributes: thunk
int __fastcall CCarGenerator::CheckIfWithinRangeOfAnyPlayers(CCarGenerator *this)
{
  return _ZN13CCarGenerator30CheckIfWithinRangeOfAnyPlayersEv(this);
}


// ============================================================

// Address: 0x1a00f0
// Original: j__ZN13CCarGenerator7ProcessEv
// Demangled: CCarGenerator::Process(void)
// attributes: thunk
int __fastcall CCarGenerator::Process(CCarGenerator *this)
{
  return _ZN13CCarGenerator7ProcessEv(this);
}


// ============================================================

// Address: 0x56d4f8
// Original: _ZN13CCarGenerator9SwitchOffEv
// Demangled: CCarGenerator::SwitchOff(void)
int __fastcall CCarGenerator::SwitchOff(int this)
{
  *(_WORD *)(this + 26) = 0;
  return this;
}


// ============================================================

// Address: 0x56d500
// Original: _ZN13CCarGenerator8SwitchOnEv
// Demangled: CCarGenerator::SwitchOn(void)
int __fastcall CCarGenerator::SwitchOn(int this)
{
  *(_WORD *)(this + 26) = -1;
  *(_DWORD *)(this + 20) = CTimer::m_snTimeInMilliseconds + 4;
  return this;
}


// ============================================================

// Address: 0x56d518
// Original: _ZN13CCarGenerator11CalcNextGenEv
// Demangled: CCarGenerator::CalcNextGen(void)
int __fastcall CCarGenerator::CalcNextGen(CCarGenerator *this)
{
  return CTimer::m_snTimeInMilliseconds + 4;
}


// ============================================================

// Address: 0x56d528
// Original: _ZN13CCarGenerator20DoInternalProcessingEv
// Demangled: CCarGenerator::DoInternalProcessing(void)
int __fastcall CCarGenerator::DoInternalProcessing(CCarGenerator *this)
{
  unsigned __int8 v2; // r8
  int v3; // r1
  int v4; // r2
  int v5; // r0
  int v7; // r5
  CZone **v8; // r2
  int v9; // r0
  float v10; // r0
  int v11; // r0
  int v12; // r2
  bool v13; // zf
  unsigned int v14; // r1
  float v15; // r2
  int v16; // r0
  int v17; // r6
  bool v18; // zf
  __int16 *v19; // r10
  float v20; // s4
  __int16 *v21; // r11
  float v22; // s2
  float v23; // s0
  float v24; // s16
  unsigned int v25; // r1
  float v26; // r0
  int v27; // r0
  int v28; // r2
  unsigned int *v29; // r10
  float v30; // s0
  int v31; // r0
  float v32; // s0
  float v33; // s2
  float v34; // s4
  float *v35; // r0
  float *v36; // r0
  float v37; // s16
  float v38; // s18
  float v39; // s20
  float *v40; // r0
  float v41; // s2
  float v42; // s4
  char v43; // r1
  unsigned int v44; // r1
  unsigned int NodeClosestToCoors; // r0
  unsigned int v46; // r8
  int v47; // r11
  char v48; // r0
  bool v49; // zf
  float *v50; // r0
  float *v51; // r1
  float v52; // s2
  float v53; // s0
  int v54; // r5
  char v55; // r0
  int v56; // r0
  bool v57; // zf
  int v58; // r0
  int v59; // r1
  _BYTE v60[4]; // [sp+1Ch] [bp-84h] BYREF
  _BYTE v61[8]; // [sp+20h] [bp-80h] BYREF
  float v62; // [sp+28h] [bp-78h]
  unsigned __int8 v63; // [sp+45h] [bp-5Bh]
  float v64[3]; // [sp+4Ch] [bp-54h] BYREF
  char v65[4]; // [sp+58h] [bp-48h] BYREF
  float v66; // [sp+5Ch] [bp-44h]
  float v67; // [sp+60h] [bp-40h]
  int v68; // [sp+64h] [bp-3Ch]

  v2 = CClock::ms_nGameClockHours - 7;
  if ( (*((_BYTE *)this + 13) & 0x10) == 0 )
  {
    if ( v2 < 0xFu )
    {
      if ( CCarCtrl::NumParkedCars > 4 )
        return _stack_chk_guard - v68;
    }
    else if ( CCarCtrl::NumParkedCars > 9 )
    {
      return _stack_chk_guard - v68;
    }
  }
  v3 = *(__int16 *)this;
  if ( v3 <= -1 )
  {
    if ( v3 == -1 || (v7 = -v3, LOBYTE(CStreaming::ms_aInfoForModel[-10 * v3 + 8]) != 1) )
    {
      FindPlayerCoors((int)v61);
      CTheZones::GetZoneInfo((CTheZones *)v61, 0, v8);
      v9 = CLoadedCarGroup::PickRandomCar((CLoadedCarGroup *)&CPopulation::m_AppropriateLoadedCars, 1, 1);
      v7 = v9;
      if ( v9 < 0 )
        return _stack_chk_guard - v68;
      v10 = CModelInfo::ms_modelInfoPtrs[v9];
      if ( *(_BYTE *)(LODWORD(v10) + 101) == 5 )
        return _stack_chk_guard - v68;
      v11 = *(_DWORD *)(LODWORD(v10) + 44);
      if ( v11 )
      {
        if ( (float)(*(float *)(v11 + 16) - *(float *)(v11 + 4)) > 8.0 )
          return _stack_chk_guard - v68;
      }
      *(_WORD *)this = -(__int16)v7;
      *((_WORD *)this + 1) = -1;
    }
    if ( CCarGenerator::CheckForBlockage(this, v7) )
      goto LABEL_8;
  }
  else
  {
    if ( CCarGenerator::CheckForBlockage(this, v3) )
    {
LABEL_8:
      v5 = *((_DWORD *)this + 5);
LABEL_9:
      *((_DWORD *)this + 5) = v5 + 4;
      return _stack_chk_guard - v68;
    }
    CStreaming::RequestModel((CStreaming *)*(__int16 *)this, 8, v4);
    v7 = *(__int16 *)this;
    if ( v7 == 588 )
      CStreaming::RequestModel((CStreaming *)&dword_A8, 8, v12);
  }
  if ( LOBYTE(CStreaming::ms_aInfoForModel[10 * v7 + 8]) == 1 )
  {
    v13 = v7 == 588;
    if ( v7 == 588 )
      v13 = *(unsigned __int16 *)this == 588;
    if ( !v13 || byte_713060 == 1 )
    {
      if ( CModelInfo::IsBoatModel((CModelInfo *)v7, 5 * v7) )
        goto LABEL_27;
      v18 = v7 == 417;
      if ( v7 != 417 )
        v18 = v7 == 460;
      if ( v18 || v7 == 447 )
      {
LABEL_27:
        v16 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v7]) + 84);
        switch ( v16 )
        {
          case 5:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[448], v14);
            CBoat::CBoat((CBoat *)v17, v7, 3u);
            break;
          case 4:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[583], v14);
            CPlane::CPlane((CPlane *)v17, v7, 3u);
            break;
          case 3:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[588], v14);
            CHeli::CHeli((CHeli *)v17, v7, 3u);
            break;
          default:
            v17 = 0;
            break;
        }
        v19 = (__int16 *)((char *)this + 4);
        v24 = (float)*((__int16 *)this + 4) * 0.125;
        v21 = (__int16 *)((char *)this + 6);
        if ( v24 <= -100.0 )
          v24 = COERCE_FLOAT(
                  CWorld::FindGroundZForCoord(
                    COERCE_CWORLD_((float)*((__int16 *)this + 2) * 0.125),
                    (float)*((__int16 *)this + 3) * 0.125,
                    v15));
        *(_WORD *)(v17 + 1200) = 255;
LABEL_51:
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v17 + 20))(v17, 0);
        *(_DWORD *)(v17 + 1068) &= ~0x10u;
        *(float *)&v27 = COERCE_FLOAT(CEntity::GetDistanceFromCentreOfMassToBaseOfModel((CEntity *)v17));
        v28 = *v19;
        v29 = (unsigned int *)(v17 + 1068);
        v30 = *(float *)&v27;
        v31 = *(_DWORD *)(v17 + 20);
        v32 = v24 + v30;
        v33 = (float)*v21 * 0.125;
        v34 = (float)v28 * 0.125;
        if ( v31 )
        {
          *(float *)(v31 + 48) = v34;
          *(float *)(*(_DWORD *)(v17 + 20) + 52) = v33;
          v35 = (float *)(*(_DWORD *)(v17 + 20) + 56);
        }
        else
        {
          v35 = (float *)(v17 + 12);
          *(float *)(v17 + 4) = v34;
          *(float *)(v17 + 8) = v33;
        }
        *v35 = v32;
        v36 = *(float **)(v17 + 20);
        if ( v36 )
        {
          v37 = v36[12];
          v38 = v36[13];
          v39 = v36[14];
          CMatrix::SetRotate((CMatrix *)v36, 0.0, 0.0, (float)*((unsigned __int8 *)this + 10) * 0.024544);
          v40 = *(float **)(v17 + 20);
          v41 = v38 + v40[13];
          v42 = v39 + v40[14];
          v40[12] = v37 + v40[12];
          v40[13] = v41;
          v40[14] = v42;
        }
        else
        {
          *(float *)(v17 + 16) = (float)*((unsigned __int8 *)this + 10) * 0.024544;
        }
        v43 = *(_BYTE *)(v17 + 58);
        *(_DWORD *)(v17 + 1288) = 1;
        *(_BYTE *)(v17 + 58) = v43 & 7 | 0x20;
        v44 = *v29 & 0xFFFDFFFF | (((*((unsigned __int8 *)this + 13) >> 3) & 1) << 17);
        *v29 = v44;
        if ( v2 <= 0xEu
          && (unsigned int)(*(__int16 *)(v17 + 38) - 531) <= 1
          && (NodeClosestToCoors = CPathFind::FindNodeClosestToCoors(),
              v46 = NodeClosestToCoors,
              v44 = 0xFFFF,
              (unsigned __int16)NodeClosestToCoors != 0xFFFF)
          && (v44 = ThePaths[(unsigned __int16)NodeClosestToCoors + 513],
              *(unsigned __int16 *)(v44 + 28 * HIWORD(NodeClosestToCoors) + 24) << 28)
          && (v44 = *(__int16 *)(v44 + 28 * HIWORD(NodeClosestToCoors) + 16),
              v47 = *(_DWORD *)(ThePaths[(unsigned __int16)NodeClosestToCoors + 657] + 4 * v44),
              ThePaths[(unsigned __int16)v47 + 513]) )
        {
          CVehicle::SetVehicleCreatedBy((CVehicle *)v17, 1, 0);
          *(_BYTE *)(v17 + 958) = 1;
          *(_BYTE *)(v17 + 980) = 7;
          *(_DWORD *)(v17 + 916) = v46;
          v48 = *(_BYTE *)(v17 + 58);
          *(_DWORD *)(v17 + 920) = v47;
          *(_BYTE *)(v17 + 58) = v48 & 7 | (8 * ((_DWORD)&stderr + 3));
          *(_DWORD *)(v17 + 1072) |= 0x40u;
          *(_WORD *)(v17 + 1200) = 255;
          *((_BYTE *)this + 13) |= 1u;
          CWorld::Add((CWorld *)v17, (CEntity *)((char *)&stderr + 3));
          CCarCtrl::SetUpDriverAndPassengersForVehicle((CCarCtrl *)v17, (CVehicle *)byte_4, 0, 0, 0, 99, 0);
        }
        else
        {
          CWorld::Add((CWorld *)v17, (CEntity *)v44);
        }
        v49 = v7 == 588;
        if ( v7 == 588 )
          v49 = *(unsigned __int16 *)this == 588;
        if ( v49 && byte_713060 == 1 )
        {
          v50 = *(float **)(v17 + 20);
          v51 = v50 + 12;
          if ( !v50 )
            v51 = (float *)(v17 + 4);
          v52 = *v51 - (float)(*v50 * 3.0);
          v53 = v51[2] - (float)(v50[2] * 3.0);
          v66 = v51[1] - (float)(v50[1] * 3.0);
          *(float *)v65 = v52;
          v67 = v53;
          v54 = CPopulation::AddPed();
          if ( v54 )
          {
            v55 = byte_A065C8;
            __dmb(0xBu);
            if ( (v55 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A065C8) )
            {
              dword_A065BC = 0;
              dword_A065C0 = 0;
              dword_A065C4 = 1058642330;
              j___cxa_guard_release((__guard *)&byte_A065C8);
            }
            CPed::AttachPedToEntity(v54, (CEntity *)v17, dword_A065BC, dword_A065C0, dword_A065C4, 3, 0.0, 0);
            CScriptsForBrains::CheckIfNewEntityNeedsScript();
          }
        }
        if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) < *((unsigned __int8 *)this
                                                                                            + 11) )
          *(_WORD *)(v17 + 1120) = -1;
        if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) < *((unsigned __int8 *)this
                                                                                            + 12) )
          *(_DWORD *)(v17 + 1288) = 2;
        v56 = *((unsigned __int8 *)this + 2);
        v57 = v56 == 255;
        if ( v56 != 255 )
          v57 = *((unsigned __int8 *)this + 3) == 255;
        if ( v57 )
        {
          if ( *(__int16 *)this < -1 )
          {
            *((_BYTE *)this + 2) = *(_BYTE *)(v17 + 1080);
            *((_BYTE *)this + 3) = *(_BYTE *)(v17 + 1081);
          }
        }
        else
        {
          *(_BYTE *)(v17 + 1080) = v56;
          *(_BYTE *)(v17 + 1081) = *((_BYTE *)this + 3);
        }
        CVisibilityPlugins::SetClumpAlpha(*(_DWORD *)(v17 + 24), 0);
        v58 = *((unsigned __int16 *)this + 13);
        *((_WORD *)this + 12) = *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4)
                                                   - 1075391197 * ((v17 - *(_DWORD *)CPools::ms_pVehiclePool) >> 2)) | (unsigned __int16)(8960 * ((v17 - *(_DWORD *)CPools::ms_pVehiclePool) >> 2));
        if ( v58 != 0xFFFF )
          *((_WORD *)this + 13) = v58 - 1;
        v5 = CTimer::m_snTimeInMilliseconds;
        goto LABEL_9;
      }
      v19 = (__int16 *)((char *)this + 4);
      v20 = (float)*((__int16 *)this + 4) * 0.125;
      v64[0] = (float)*((__int16 *)this + 2) * 0.125;
      v21 = (__int16 *)((char *)this + 6);
      v22 = v20 + 2.0;
      v23 = (float)*((__int16 *)this + 3) * 0.125;
      if ( v20 <= -100.0 )
        v22 = 1000.0;
      v64[2] = v22;
      v64[1] = v23;
      if ( CWorld::ProcessVerticalLine((CVector *)v64, -998637568, (int)v61, (int)v60, 1, 0, 0, 0, 0, 0, 0) == 1 )
      {
        v24 = v62;
        CSpecialPlateHandler::Find(
          (CSpecialPlateHandler *)CTheCarGenerators::m_SpecialPlateHandler,
          (unsigned int)(this - (CCarGenerator *)CTheCarGenerators::CarGeneratorArray) >> 5,
          v65);
        if ( v65[0] )
        {
          v26 = CModelInfo::ms_modelInfoPtrs[v7];
          v25 = *(_DWORD *)(LODWORD(v26) + 60);
          if ( v25 )
            CVehicleModelInfo::SetCustomCarPlateText((CVehicleModelInfo *)LODWORD(v26), v65);
        }
        switch ( *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v7]) + 84) )
        {
          case 1:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[557], v25);
            CMonsterTruck::CMonsterTruck((CMonsterTruck *)v17, v7, 3u);
            break;
          case 2:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[565], v25);
            CQuadBike::CQuadBike((CQuadBike *)v17, v7, 3u);
            break;
          case 3:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[588], v25);
            CHeli::CHeli((CHeli *)v17, v7, 3u);
            break;
          case 4:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[583], v25);
            CPlane::CPlane((CPlane *)v17, v7, 3u);
            break;
          case 6:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[369], v25);
            CTrain::CTrain((CTrain *)v17, v7, 3u);
            break;
          case 9:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[459], v25);
            CBike::CBike((CBike *)v17, v7, 3u);
            goto LABEL_96;
          case 0xA:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[468], v25);
            CBmx::CBmx((CBmx *)v17, v7, 3u);
LABEL_96:
            *(_BYTE *)(v17 + 1576) |= 0x10u;
            break;
          case 0xB:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[579], v25);
            CTrailer::CTrailer((CTrailer *)v17, v7, 3u);
            break;
          default:
            v17 = CVehicle::operator new((CVehicle *)&elf_hash_bucket[552], v25);
            CAutomobile::CAutomobile((CAutomobile *)v17, v7, 3u, 1u);
            break;
        }
        CEntity::GetDistanceFromCentreOfMassToBaseOfModel((CEntity *)v17);
        v59 = *(_DWORD *)(v17 + 1068);
        *(_BYTE *)(v17 + 1202) &= 0xE7u;
        *(_DWORD *)(v17 + 1068) = v59 & 0xFFFFFFBF;
        CVehicle::SetCollisionLighting((CVehicle *)v17, v63);
        goto LABEL_51;
      }
    }
  }
  return _stack_chk_guard - v68;
}


// ============================================================

// Address: 0x56dd90
// Original: _ZN13CCarGenerator16CheckForBlockageEi
// Demangled: CCarGenerator::CheckForBlockage(int)
int __fastcall CCarGenerator::CheckForBlockage(CCarGenerator *this, int a2)
{
  int v4; // r6
  float v5; // r9
  int v6; // r0
  float v7; // s0
  const CVector *v8; // r1
  float v9; // s4
  float v10; // s0
  int v11; // r2
  int v12; // r6
  int v13; // r5
  int v14; // r4
  int v15; // r1
  float v16; // s8
  float v17; // s4
  int v18; // r6
  float v19; // s4
  float v20; // s6
  int v21; // r1
  int v22; // r4
  float v23; // s4
  float v24; // s6
  bool v26; // [sp+1Ch] [bp-5Ch]
  float v27[3]; // [sp+20h] [bp-58h] BYREF
  __int16 v28; // [sp+2Eh] [bp-4Ah] BYREF
  _DWORD v29[18]; // [sp+30h] [bp-48h] BYREF

  v4 = 0;
  v5 = CModelInfo::ms_modelInfoPtrs[a2];
  v6 = *(_DWORD *)(LODWORD(v5) + 44);
  if ( v6 )
    v7 = *(float *)(v6 + 36);
  else
    v7 = 2.0;
  v8 = (const CVector *)LODWORD(v7);
  v9 = (float)*((__int16 *)this + 2) * 0.125;
  v10 = (float)*((__int16 *)this + 4) * 0.125;
  v27[1] = (float)*((__int16 *)this + 3) * 0.125;
  v27[0] = v9;
  v27[2] = v10;
  CWorld::FindObjectsKindaColliding(
    (CWorld *)v27,
    v8,
    COERCE_FLOAT(1),
    (bool)&v28,
    (__int16 *)byte_8,
    (__int16)v29,
    0,
    1,
    1,
    0,
    0,
    v26);
  if ( v28 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = v29[v11];
      v13 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v12 + 38)]) + 44);
      if ( *(_DWORD *)(LODWORD(v5) + 44) )
      {
        v14 = *(_DWORD *)(v12 + 20);
        v15 = v14 + 48;
        v16 = (float)*((__int16 *)this + 4);
        if ( !v14 )
          v15 = v12 + 4;
        v17 = *(float *)(v15 + 8);
        v18 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[a2]) + 44);
        if ( (float)(*(float *)(v18 + 8) + (float)(v16 * 0.125)) >= (float)((float)(v17 + *(float *)(v13 + 20)) + 1.0) )
          goto LABEL_16;
        v19 = v17 + *(float *)(v13 + 8);
        v20 = (float)(v16 * 0.125) + *(float *)(v18 + 20);
      }
      else
      {
        v21 = *(_DWORD *)(v12 + 20);
        v22 = v21 + 48;
        if ( !v21 )
          v22 = v12 + 4;
        v23 = *(float *)(v22 + 8);
        v24 = (float)*((__int16 *)this + 4) * 0.125;
        if ( (float)(v24 + -1.0) >= (float)((float)(v23 + *(float *)(v13 + 20)) + 1.0) )
          goto LABEL_16;
        v20 = v24 + 1.0;
        v19 = v23 + *(float *)(v13 + 8);
      }
      if ( v20 > (float)(v19 + -1.0) )
      {
        v4 = 1;
        *((_BYTE *)this + 13) |= 1u;
        return v4;
      }
LABEL_16:
      if ( ++v11 >= v28 )
        return 0;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x56df3c
// Original: _ZN13CCarGenerator7ProcessEv
// Demangled: CCarGenerator::Process(void)
int __fastcall CCarGenerator::Process(CCarGenerator *this)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r2
  unsigned int v5; // r0
  int v6; // r1
  char v7; // r2

  result = *((unsigned __int16 *)this + 12);
  if ( result != 0xFFFF )
    goto LABEL_18;
  if ( (CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter
     || (unsigned int)CTimer::m_snTimeInMilliseconds >= *((_DWORD *)this + 5))
    && *((_WORD *)this + 13)
    && CCarGenerator::CheckIfWithinRangeOfAnyPlayers(this) )
  {
    CCarGenerator::DoInternalProcessing(this);
  }
  result = *((unsigned __int16 *)this + 12);
  if ( result != 0xFFFF )
  {
LABEL_18:
    if ( (__int16)result > -1
      && (v3 = (unsigned int)(__int16)result >> 8,
          result = (unsigned __int8)result,
          *(unsigned __int8 *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + v3) == (unsigned __int8)result)
      && (result = *(_DWORD *)CPools::ms_pVehiclePool, (v4 = *(_DWORD *)CPools::ms_pVehiclePool + 2604 * v3) != 0) )
    {
      if ( *(unsigned __int8 *)(v4 + 58) <= 7u )
      {
        v5 = result + 2604 * v3;
        v6 = *((_DWORD *)this + 5);
        *((_WORD *)this + 12) = -1;
        v7 = *((_BYTE *)this + 13);
        *((_DWORD *)this + 5) = v6 + 60000;
        *((_BYTE *)this + 13) = v7 | 1;
        *(_WORD *)(v5 + 1200) = 0;
        result = *(__int16 *)this;
        if ( result <= -1 )
          *(_WORD *)this = -1;
      }
    }
    else
    {
      *((_WORD *)this + 12) = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x56dff8
// Original: _ZN13CCarGenerator30CheckIfWithinRangeOfAnyPlayersEv
// Demangled: CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void)
int __fastcall CCarGenerator::CheckIfWithinRangeOfAnyPlayers(CCarGenerator *this)
{
  float *PlayerCentreOfWorld; // r0
  float v3; // s6
  float v4; // s0
  float v5; // s10
  float v6; // s8
  int v7; // r0
  float v8; // s18
  float v9; // s16
  float v10; // s22
  float v11; // s0
  int v12; // r4
  char v14; // r0
  float v15; // s2
  float *PlayerSpeed; // r0
  float v17[13]; // [sp+4h] [bp-34h] BYREF

  PlayerCentreOfWorld = (float *)FindPlayerCentreOfWorld(*(int *)&CWorld::PlayerInFocus);
  v3 = (float)*((__int16 *)this + 2);
  v4 = (float)*((__int16 *)this + 4) * 0.125;
  if ( fabsf(PlayerCentreOfWorld[2] - v4) > 50.0 )
    return 0;
  v5 = PlayerCentreOfWorld[1];
  v6 = *PlayerCentreOfWorld;
  v7 = *(__int16 *)this;
  v8 = v5 - (float)((float)*((__int16 *)this + 3) * 0.125);
  v9 = v6 - (float)(v3 * 0.125);
  v10 = sqrtf((float)(v9 * v9) + (float)(v8 * v8));
  if ( v7 < 1 )
    goto LABEL_7;
  if ( *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v7]) + 84) == 5
    && v10 < (float)(unk_952098 * 240.0)
    && (v17[1] = (float)*((__int16 *)this + 3) * 0.125,
        v17[0] = v3 * 0.125,
        v17[2] = v4,
        CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)v17, 0.0))
    && !COcclusion::IsPositionOccluded() )
  {
    v11 = unk_952098 * 160.0;
  }
  else
  {
LABEL_7:
    v11 = unk_952098 * 160.0;
    if ( v10 >= (float)(unk_952098 * 160.0) )
    {
      if ( (*((_BYTE *)this + 13) & 1) != 0 )
        *((_BYTE *)this + 13) &= ~1u;
      return 0;
    }
  }
  if ( CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter )
    return 1;
  v14 = *((_BYTE *)this + 13);
  if ( (v14 & 1) != 0 )
    return 0;
  v15 = (float)*((__int16 *)this + 4) * 0.125;
  if ( !CGame::currArea && v15 >= 950.0 )
    return 0;
  if ( CGame::currArea && v15 < 950.0 )
    return 0;
  v12 = 0;
  if ( v10 >= (float)(v11 + -20.0) || (v14 & 2) != 0 )
  {
    PlayerSpeed = (float *)FindPlayerSpeed(-1);
    if ( (float)((float)(v9 * *PlayerSpeed) + (float)(v8 * PlayerSpeed[1])) <= 0.0 )
      return 1;
  }
  return v12;
}


// ============================================================

// Address: 0x56e220
// Original: _ZN13CCarGenerator5SetupEffffisshhhtthh
// Demangled: CCarGenerator::Setup(float,float,float,float,int,short,short,uchar,uchar,uchar,ushort,ushort,uchar,uchar)
int __fastcall CCarGenerator::Setup(
        int this,
        float a2,
        float a3,
        float a4,
        float a5,
        __int16 a6,
        __int16 a7,
        __int16 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int8 a14,
        unsigned __int8 a15)
{
  float v15; // s0
  float i; // s0
  char v17; // r1
  int v18; // r2

  *(_WORD *)(this + 6) = (int)(float)(a3 * 8.0);
  v15 = a5;
  *(_WORD *)(this + 4) = (int)(float)(a2 * 8.0);
  for ( *(_WORD *)(this + 8) = (int)(float)(a4 * 8.0); v15 < 0.0; v15 = v15 + 360.0 )
    ;
  for ( ; v15 >= 360.0; v15 = v15 + -360.0 )
    ;
  for ( i = v15 * 0.017453; i < 0.0; i = i + 6.2832 )
    ;
  *(_BYTE *)(this + 11) = a10;
  *(_WORD *)this = a6;
  *(_BYTE *)(this + 2) = a7;
  *(_BYTE *)(this + 3) = a8;
  *(_BYTE *)(this + 12) = a11;
  *(_WORD *)(this + 14) = a12;
  *(_WORD *)(this + 16) = a13;
  v17 = *(_BYTE *)(this + 13);
  *(_WORD *)(this + 24) = -1;
  *(_BYTE *)(this + 10) = (unsigned int)(float)(i * 40.744);
  v18 = CTimer::m_snTimeInMilliseconds;
  *(_WORD *)(this + 26) = 0;
  *(_BYTE *)(this + 28) = a14;
  *(_BYTE *)(this + 29) = 1;
  *(_BYTE *)(this + 13) = v17 & 0xE4 | (2 * a9) & 2 | (16 * (a15 & 1));
  *(_DWORD *)(this + 20) = v18 + 1;
  return this;
}


// ============================================================
