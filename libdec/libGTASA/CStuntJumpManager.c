
// Address: 0x18bb44
// Original: j__ZN17CStuntJumpManager18ShutdownForRestartEv
// Demangled: CStuntJumpManager::ShutdownForRestart(void)
// attributes: thunk
int __fastcall CStuntJumpManager::ShutdownForRestart(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager18ShutdownForRestartEv(this);
}


// ============================================================

// Address: 0x191a0c
// Original: j__ZN17CStuntJumpManager4SaveEv
// Demangled: CStuntJumpManager::Save(void)
// attributes: thunk
int __fastcall CStuntJumpManager::Save(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager4SaveEv(this);
}


// ============================================================

// Address: 0x195028
// Original: j__ZN17CStuntJumpManager6AddOneERK9CBoundBoxS2_RK7CVectori
// Demangled: CStuntJumpManager::AddOne(CBoundBox const&,CBoundBox const&,CVector const&,int)
// attributes: thunk
int CStuntJumpManager::AddOne()
{
  return _ZN17CStuntJumpManager6AddOneERK9CBoundBoxS2_RK7CVectori();
}


// ============================================================

// Address: 0x19689c
// Original: j__ZN17CStuntJumpManager4LoadEv
// Demangled: CStuntJumpManager::Load(void)
// attributes: thunk
int __fastcall CStuntJumpManager::Load(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager4LoadEv(this);
}


// ============================================================

// Address: 0x199538
// Original: j__ZN17CStuntJumpManager6UpdateEv
// Demangled: CStuntJumpManager::Update(void)
// attributes: thunk
int __fastcall CStuntJumpManager::Update(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager6UpdateEv(this);
}


// ============================================================

// Address: 0x19d764
// Original: j__ZN17CStuntJumpManager4InitEv
// Demangled: CStuntJumpManager::Init(void)
// attributes: thunk
int __fastcall CStuntJumpManager::Init(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager4InitEv(this);
}


// ============================================================

// Address: 0x19e204
// Original: j__ZN17CStuntJumpManager8ShutdownEv
// Demangled: CStuntJumpManager::Shutdown(void)
// attributes: thunk
int __fastcall CStuntJumpManager::Shutdown(CStuntJumpManager *this)
{
  return _ZN17CStuntJumpManager8ShutdownEv(this);
}


// ============================================================

// Address: 0x361510
// Original: _ZN17CStuntJumpManager4InitEv
// Demangled: CStuntJumpManager::Init(void)
char *__fastcall CStuntJumpManager::Init(CStuntJumpManager *this)
{
  int v1; // r4
  _BYTE *v2; // r0
  char v3; // r1
  int i; // r0
  char *result; // r0

  v1 = operator new(0x14u);
  *(_DWORD *)v1 = operator new[](0x4400u);
  v2 = (_BYTE *)operator new[](0x100u);
  *(_BYTE *)(v1 + 16) = 1;
  *(_DWORD *)(v1 + 4) = v2;
  *(_DWORD *)(v1 + 8) = 256;
  *(_DWORD *)(v1 + 12) = -1;
  v3 = v2[1];
  *v2 = 0x80;
  v2[1] = v3 | 0x80;
  *(_BYTE *)(*(_DWORD *)(v1 + 4) + 1) &= 0x80u;
  for ( i = 2; i != 256; ++i )
  {
    *(_BYTE *)(*(_DWORD *)(v1 + 4) + i) |= 0x80u;
    *(_BYTE *)(*(_DWORD *)(v1 + 4) + i) &= 0x80u;
  }
  result = &CStuntJumpManager::m_bActive;
  CStuntJumpManager::m_bActive = 1;
  CStuntJumpManager::mp_poolStuntJumps = v1;
  return result;
}


// ============================================================

// Address: 0x361590
// Original: _ZN17CStuntJumpManager8ShutdownEv
// Demangled: CStuntJumpManager::Shutdown(void)
int *__fastcall CStuntJumpManager::Shutdown(CStuntJumpManager *this)
{
  _DWORD *v1; // r4
  void *v2; // r0
  _DWORD *v3; // r5
  int *result; // r0

  v1 = (_DWORD *)CStuntJumpManager::mp_poolStuntJumps;
  if ( CStuntJumpManager::mp_poolStuntJumps )
  {
    if ( *(int *)(CStuntJumpManager::mp_poolStuntJumps + 8) >= 1 )
    {
      if ( *(_BYTE *)(CStuntJumpManager::mp_poolStuntJumps + 16) )
      {
        if ( *(_DWORD *)CStuntJumpManager::mp_poolStuntJumps )
          operator delete[](*(void **)CStuntJumpManager::mp_poolStuntJumps);
        v3 = v1 + 1;
        v2 = (void *)v1[1];
        if ( v2 )
          operator delete[](v2);
      }
      else
      {
        v3 = (_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 4);
      }
      *v1 = 0;
      *v3 = 0;
    }
    operator delete(v1);
  }
  result = &CStuntJumpManager::mp_poolStuntJumps;
  CStuntJumpManager::mp_poolStuntJumps = 0;
  return result;
}


// ============================================================

// Address: 0x3615e4
// Original: _ZN17CStuntJumpManager18ShutdownForRestartEv
// Demangled: CStuntJumpManager::ShutdownForRestart(void)
char *__fastcall CStuntJumpManager::ShutdownForRestart(CStuntJumpManager *this)
{
  int v1; // r0
  int v2; // r1
  char *result; // r0

  v1 = CStuntJumpManager::mp_poolStuntJumps;
  if ( *(int *)(CStuntJumpManager::mp_poolStuntJumps + 8) >= 1 )
  {
    v2 = 0;
    do
    {
      *(_BYTE *)(*(_DWORD *)(v1 + 4) + v2) |= 0x80u;
      *(_BYTE *)(*(_DWORD *)(v1 + 4) + v2++) &= 0x80u;
    }
    while ( v2 < *(_DWORD *)(v1 + 8) );
  }
  result = &CStuntJumpManager::m_bHitReward;
  CStuntJumpManager::m_bHitReward = 0;
  CStuntJumpManager::mp_Active = 0;
  CStuntJumpManager::m_iTimer = 0;
  CStuntJumpManager::m_jumpState = 0;
  CStuntJumpManager::m_iNumJumps = 0;
  CStuntJumpManager::m_iNumCompleted = 0;
  return result;
}


// ============================================================

// Address: 0x361674
// Original: _ZN17CStuntJumpManager6UpdateEv
// Demangled: CStuntJumpManager::Update(void)
int __fastcall CStuntJumpManager::Update(CStuntJumpManager *this)
{
  int result; // r0
  int PlayerPed; // r5
  __int16 v3; // r6
  int v4; // r4
  bool v5; // zf
  int v6; // r11
  int v7; // r8
  int *v8; // r3
  float v9; // r2
  float *v10; // r1
  float v11; // s2
  float v12; // s4
  float v13; // r2
  unsigned __int16 *v14; // r4
  char v15; // r2
  bool v16; // r2
  int v17; // r2
  int v18; // r6
  float *v19; // r3
  float v20; // s2
  float v21; // s4
  CVehicle *PlayerVehicle; // r0
  CMessages *v23; // r0
  unsigned __int16 v24; // r3
  const char *v25; // r1
  CMessages *v26; // r0
  unsigned int v27; // [sp+8h] [bp-48h]
  int v28; // [sp+14h] [bp-3Ch]
  int *v29; // [sp+14h] [bp-3Ch]
  _DWORD v30[10]; // [sp+28h] [bp-28h] BYREF

  result = CStuntJumpManager::mp_poolStuntJumps;
  if ( CStuntJumpManager::mp_poolStuntJumps )
  {
    PlayerPed = FindPlayerPed(-1);
    v3 = *(_WORD *)&CWorld::PlayerInFocus;
    result = CStuntJumpManager::m_jumpState;
    if ( CStuntJumpManager::m_jumpState == 2 )
    {
      result = (int)&CStuntJumpManager::m_iTimer;
      CStuntJumpManager::m_iTimer += (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
      if ( CStuntJumpManager::m_iTimer >= 300 )
      {
        CTimer::ms_fTimeScale = 1065353216;
        CCamera::RestoreWithJumpCut((CCamera *)&TheCamera);
        if ( CStuntJumpManager::m_bHitReward && !*(_BYTE *)(CStuntJumpManager::mp_Active + 64) )
        {
          *(_BYTE *)(CStuntJumpManager::mp_Active + 64) = 1;
          ++CStuntJumpManager::m_iNumCompleted;
          CStats::IncrementStat((CStats *)((char *)&dword_90 + 1), 0, v13);
          if ( CStuntJumpManager::m_iNumCompleted == CStuntJumpManager::m_iNumJumps )
            v14 = (_WORD *)(elf_hash_bucket + 9748);
          else
            v14 = *(unsigned __int16 **)(CStuntJumpManager::mp_Active + 60);
          CWorld::Players[101 * v3 + 46] += (int)v14;
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 43, 0.0, 1.0);
          v23 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)&dword_361BD8);
          if ( v23 )
            CMessages::AddBigMessageQ(v23, (unsigned __int16 *)&elf_hash_bucket[1187], 4u, v24);
          if ( CStuntJumpManager::m_iNumCompleted == CStuntJumpManager::m_iNumJumps )
          {
            v25 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"USJ_ALL");
            if ( v25 )
              CHud::SetHelpMessage((CHud *)"USJ_ALL", v25, 0, 0, 0, 0, v27);
          }
          v26 = (CMessages *)CText::Get((CText *)TheText, (CKeyGen *)"REWARD");
          if ( v26 )
            CMessages::AddBigMessageWithNumber(
              v26,
              (unsigned __int16 *)&elf_hash_bucket[1437],
              5u,
              v14,
              -1,
              -1,
              -1,
              -1,
              -1,
              v28);
        }
        result = (int)&CStuntJumpManager::mp_Active;
        CStuntJumpManager::mp_Active = 0;
        CStuntJumpManager::m_jumpState = 0;
      }
    }
    else
    {
      v4 = *(_DWORD *)(PlayerPed + 1424);
      if ( CStuntJumpManager::m_jumpState == 1 )
      {
        if ( CStuntJumpManager::mp_Active )
        {
          result = CStuntJumpManager::m_iTimer;
          if ( *(_BYTE *)(v4 + 189) && CStuntJumpManager::m_iTimer > 99 )
            goto LABEL_55;
          v15 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 55];
          v16 = v15 != 0;
          v17 = (*(_BYTE *)(v4 + 58) & 0xF8) == 0x28
             || (*(_BYTE *)(v4 + 1071) & 0x40) != 0
             || *(unsigned __int8 *)(v4 + 69) << 31
             || v16
             || (*(_BYTE *)(PlayerPed + 1157) & 1) == 0;
          v18 = *(_DWORD *)(v4 + 20);
          v19 = (float *)(v18 + 48);
          if ( !v18 )
            v19 = (float *)(v4 + 4);
          if ( *v19 >= *(float *)(CStuntJumpManager::mp_Active + 24) )
          {
            v20 = v19[1];
            if ( v20 >= *(float *)(CStuntJumpManager::mp_Active + 28) )
            {
              v21 = v19[2];
              if ( v21 >= *(float *)(CStuntJumpManager::mp_Active + 32)
                && *v19 <= *(float *)(CStuntJumpManager::mp_Active + 36)
                && v20 <= *(float *)(CStuntJumpManager::mp_Active + 40)
                && v21 <= *(float *)(CStuntJumpManager::mp_Active + 44) )
              {
                CStuntJumpManager::m_bHitReward = 1;
              }
            }
          }
          if ( v17 )
          {
LABEL_55:
            result = 0;
            CStuntJumpManager::m_iTimer = 0;
            CStuntJumpManager::m_jumpState = 2;
          }
          CStuntJumpManager::m_iTimer = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0)
                                      + result;
          if ( result <= 1000
            && (int)((unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0) + result) > 1000 )
          {
            result = FindPlayerVehicle(-1, 0);
            if ( result )
            {
              PlayerVehicle = (CVehicle *)FindPlayerVehicle(-1, 0);
              result = CVehicle::PickRandomPassenger(PlayerVehicle);
              if ( result )
                return CPed::Say((CPed *)result, 0x25u, 0, 1.0, 0, 0, 0);
            }
          }
        }
        else
        {
          result = (int)&CStuntJumpManager::m_jumpState;
          CStuntJumpManager::m_jumpState = 0;
        }
      }
      else if ( !CStuntJumpManager::m_jumpState )
      {
        result = (unsigned __int8)CStuntJumpManager::m_bActive;
        if ( CStuntJumpManager::m_bActive )
        {
          result = LOBYTE(CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 55]);
          if ( !LOBYTE(CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 55]) )
          {
            v5 = v4 == 0;
            if ( v4 )
            {
              result = *(_DWORD *)(PlayerPed + 1156) & 0x100;
              v5 = result == 0;
            }
            if ( !v5 )
            {
              result = CVehicle::GetVehicleAppearance(*(CVehicle **)(PlayerPed + 1424));
              if ( result != 4 )
              {
                result = *(_DWORD *)(v4 + 1124);
                if ( result == PlayerPed )
                {
                  result = CVehicle::GetVehicleAppearance((CVehicle *)v4);
                  if ( result != 5 )
                  {
                    result = CVehicle::GetVehicleAppearance((CVehicle *)v4);
                    if ( result != 3 )
                    {
                      result = *(unsigned __int8 *)(v4 + 189);
                      if ( !*(_BYTE *)(v4 + 189)
                        && (float)(sqrtf(
                                     (float)((float)(*(float *)(v4 + 72) * *(float *)(v4 + 72))
                                           + (float)(*(float *)(v4 + 76) * *(float *)(v4 + 76)))
                                   + (float)(*(float *)(v4 + 80) * *(float *)(v4 + 80)))
                                 * 50.0) >= 20.0 )
                      {
                        v6 = 0;
                        v7 = 0;
                        v8 = &CStuntJumpManager::m_jumpState;
                        do
                        {
                          result = CStuntJumpManager::mp_poolStuntJumps;
                          if ( *(char *)(*(_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 4) + v7) >= 0 )
                          {
                            v9 = *(float *)(v4 + 20);
                            result = *(_DWORD *)CStuntJumpManager::mp_poolStuntJumps + v6;
                            v10 = (float *)(LODWORD(v9) + 48);
                            if ( v9 == 0.0 )
                              v10 = (float *)(v4 + 4);
                            if ( *v10 >= *(float *)result )
                            {
                              v11 = v10[1];
                              if ( v11 >= *(float *)(result + 4) )
                              {
                                v12 = v10[2];
                                if ( v12 >= *(float *)(result + 8)
                                  && *v10 <= *(float *)(result + 12)
                                  && v11 <= *(float *)(result + 16)
                                  && v12 <= *(float *)(result + 20) )
                                {
                                  CStuntJumpManager::m_iTimer = 0;
                                  CStuntJumpManager::mp_Active = result;
                                  v29 = v8;
                                  *v8 = 1;
                                  CStuntJumpManager::m_bHitReward = 0;
                                  if ( !*(_BYTE *)(result + 65) )
                                  {
                                    *(_BYTE *)(result + 65) = 1;
                                    CStats::IncrementStat((CStats *)&dword_90, 0, v9);
                                    result = CStuntJumpManager::mp_Active;
                                  }
                                  CTimer::ms_fTimeScale = 1050253722;
                                  memset(v30, 0, 12);
                                  CCamera::SetCamPositionForFixedMode(
                                    (CCamera *)&TheCamera,
                                    (const CVector *)(result + 48),
                                    (const CVector *)v30);
                                  result = CCamera::TakeControl((CCamera *)&TheCamera, (CEntity *)v4, 15, 2, 1);
                                  v8 = v29;
                                }
                              }
                            }
                          }
                          ++v7;
                          v6 += 68;
                        }
                        while ( v7 != 256 );
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x361c50
// Original: _ZN17CStuntJumpManager6RenderEv
// Demangled: CStuntJumpManager::Render(void)
void __fastcall CStuntJumpManager::Render(CStuntJumpManager *this)
{
  ;
}


// ============================================================

// Address: 0x361c54
// Original: _ZN17CStuntJumpManager6AddOneERK9CBoundBoxS2_RK7CVectori
// Demangled: CStuntJumpManager::AddOne(CBoundBox const&,CBoundBox const&,CVector const&,int)
int __fastcall CStuntJumpManager::AddOne(_QWORD *a1, _QWORD *a2, __int64 *a3, int a4)
{
  _DWORD *v4; // r12
  int v5; // r4
  int v6; // lr
  int v7; // r8
  int v8; // r6
  int v9; // r5
  int v10; // r5
  __int64 v11; // d17
  __int64 v12; // d18
  __int64 v13; // d17
  __int64 v14; // d18
  __int64 v15; // d16

  v4 = (_DWORD *)CStuntJumpManager::mp_poolStuntJumps;
  if ( !CStuntJumpManager::mp_poolStuntJumps )
    return -1;
  v5 = *(_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 12);
  v6 = *(_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 8);
  v7 = 0;
  do
  {
    v4[3] = ++v5;
    if ( v5 == v6 )
    {
      v5 = 0;
      v4[3] = 0;
      if ( v7 << 31 )
        return -1;
      v7 = 1;
    }
    v8 = v4[1];
    v9 = *(char *)(v8 + v5);
  }
  while ( v9 > -1 );
  *(_BYTE *)(v8 + v5) = v9 & 0x7F;
  *(_BYTE *)(v4[1] + v4[3]) = (*(_BYTE *)(v4[1] + v4[3]) + 1) & 0x7F | *(_BYTE *)(v4[1] + v4[3]) & 0x80;
  v10 = *v4 + 68 * v4[3];
  if ( !v10 )
    return -1;
  v11 = a1[1];
  v12 = a1[2];
  *(_QWORD *)v10 = *a1;
  *(_QWORD *)(v10 + 8) = v11;
  *(_QWORD *)(v10 + 16) = v12;
  v13 = a2[1];
  v14 = a2[2];
  *(_QWORD *)(v10 + 24) = *a2;
  *(_QWORD *)(v10 + 32) = v13;
  *(_QWORD *)(v10 + 40) = v14;
  v15 = *a3;
  *(_DWORD *)(v10 + 56) = *((_DWORD *)a3 + 2);
  *(_DWORD *)(v10 + 60) = a4;
  *(_WORD *)(v10 + 64) = 0;
  *(_QWORD *)(v10 + 48) = v15;
  ++CStuntJumpManager::m_iNumJumps;
  return -252645135 * ((v10 - *(_DWORD *)CStuntJumpManager::mp_poolStuntJumps) >> 2);
}


// ============================================================

// Address: 0x361d48
// Original: _ZN17CStuntJumpManager9SetActiveEb
// Demangled: CStuntJumpManager::SetActive(bool)
char __fastcall CStuntJumpManager::SetActive(char this, bool a2)
{
  CStuntJumpManager::m_bActive = this;
  return this;
}


// ============================================================

// Address: 0x48e9bc
// Original: _ZN17CStuntJumpManager4SaveEv
// Demangled: CStuntJumpManager::Save(void)
int __fastcall CStuntJumpManager::Save(CStuntJumpManager *this)
{
  CGenericGameStorage *v1; // r4
  int v2; // r2
  int v3; // r5
  int i; // r6
  int v5; // r9
  void *v6; // r4
  int v7; // r2

  v1 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v1 = CStuntJumpManager::m_iNumJumps;
  CGenericGameStorage::_SaveDataToWorkBuffer(v1, byte_4, v2);
  free(v1);
  v3 = 0;
  for ( i = 0; i != 256; ++i )
  {
    if ( *(char *)(*(_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 4) + i) >= 0 )
    {
      v5 = *(_DWORD *)CStuntJumpManager::mp_poolStuntJumps;
      v6 = malloc(0x44u);
      memcpy_1(v6, (const void *)(v5 + v3), 0x44u);
      CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v6, &dword_44, v7);
      free(v6);
    }
    v3 += 68;
  }
  return 1;
}


// ============================================================

// Address: 0x48ea3c
// Original: _ZN17CStuntJumpManager4LoadEv
// Demangled: CStuntJumpManager::Load(void)
int __fastcall CStuntJumpManager::Load(CStuntJumpManager *this, int a2, int a3)
{
  int v3; // r0
  int v4; // r4
  _DWORD *v5; // r1
  int v6; // r3
  CGenericGameStorage *v7; // r0
  int v8; // r2
  int v9; // r5
  int v10; // r6
  int v12[5]; // [sp+4h] [bp-14h] BYREF

  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, byte_4, a3);
  v3 = v12[0];
  if ( v12[0] >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = (_DWORD *)CStuntJumpManager::mp_poolStuntJumps;
      v6 = 0;
      v7 = *(CGenericGameStorage **)(CStuntJumpManager::mp_poolStuntJumps + 12);
      v8 = *(_DWORD *)(CStuntJumpManager::mp_poolStuntJumps + 8);
      do
      {
        v7 = (CGenericGameStorage *)((char *)v7 + 1);
        v5[3] = v7;
        if ( v7 == (CGenericGameStorage *)v8 )
        {
          v7 = 0;
          v5[3] = 0;
          if ( v6 << 31 )
            goto LABEL_9;
          v6 = 1;
        }
        v9 = v5[1];
        v10 = *((char *)v7 + v9);
      }
      while ( v10 > -1 );
      *((_BYTE *)v7 + v9) = v10 & 0x7F;
      v8 = v5[3];
      *(_BYTE *)(v5[1] + v8) = (*(_BYTE *)(v5[1] + v8) + 1) & 0x7F | *(_BYTE *)(v5[1] + v8) & 0x80;
      v7 = (CGenericGameStorage *)(*v5 + 68 * v5[3]);
LABEL_9:
      CGenericGameStorage::_LoadDataFromWorkBuffer(v7, &dword_44, v8);
      v3 = v12[0];
      ++v4;
    }
    while ( v4 < v12[0] );
  }
  CStuntJumpManager::m_iNumJumps = v3;
  return 1;
}


// ============================================================
