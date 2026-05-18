
// Address: 0x18c2a4
// Original: j__ZN28CPedDamageResponseCalculator21ComputeDamageResponseEP4CPedR18CPedDamageResponseb
// Demangled: CPedDamageResponseCalculator::ComputeDamageResponse(CPed *,CPedDamageResponse &,bool)
// attributes: thunk
int __fastcall CPedDamageResponseCalculator::ComputeDamageResponse(int a1, CPed *this)
{
  return _ZN28CPedDamageResponseCalculator21ComputeDamageResponseEP4CPedR18CPedDamageResponseb(a1, this);
}


// ============================================================

// Address: 0x18df0c
// Original: j__ZN28CPedDamageResponseCalculator18ComputeWillKillPedEP4CPedR18CPedDamageResponseb
// Demangled: CPedDamageResponseCalculator::ComputeWillKillPed(CPed *,CPedDamageResponse &,bool)
// attributes: thunk
int __fastcall CPedDamageResponseCalculator::ComputeWillKillPed(int a1, CPed *this)
{
  return _ZN28CPedDamageResponseCalculator18ComputeWillKillPedEP4CPedR18CPedDamageResponseb(a1, this);
}


// ============================================================

// Address: 0x1906b8
// Original: j__ZN28CPedDamageResponseCalculator21ComputeWillForceDeathEP4CPedR18CPedDamageResponse
// Demangled: CPedDamageResponseCalculator::ComputeWillForceDeath(CPed *,CPedDamageResponse &)
// attributes: thunk
int __fastcall CPedDamageResponseCalculator::ComputeWillForceDeath(int a1, CPed *this)
{
  return _ZN28CPedDamageResponseCalculator21ComputeWillForceDeathEP4CPedR18CPedDamageResponse(a1, this);
}


// ============================================================

// Address: 0x1912e4
// Original: j__ZN28CPedDamageResponseCalculator24AccountForPedDamageStatsEP4CPedR18CPedDamageResponse
// Demangled: CPedDamageResponseCalculator::AccountForPedDamageStats(CPed *,CPedDamageResponse &)
// attributes: thunk
int __fastcall CPedDamageResponseCalculator::AccountForPedDamageStats(int a1, CPed *this)
{
  return _ZN28CPedDamageResponseCalculator24AccountForPedDamageStatsEP4CPedR18CPedDamageResponse(a1, this);
}


// ============================================================

// Address: 0x199c7c
// Original: j__ZN28CPedDamageResponseCalculatorD2Ev
// Demangled: CPedDamageResponseCalculator::~CPedDamageResponseCalculator()
// attributes: thunk
void __fastcall CPedDamageResponseCalculator::~CPedDamageResponseCalculator(CPedDamageResponseCalculator *this)
{
  _ZN28CPedDamageResponseCalculatorD2Ev(this);
}


// ============================================================

// Address: 0x1a0a54
// Original: j__ZN28CPedDamageResponseCalculatorC2EPK7CEntityf11eWeaponType14ePedPieceTypesb
// Demangled: CPedDamageResponseCalculator::CPedDamageResponseCalculator(CEntity const*,float,eWeaponType,ePedPieceTypes,bool)
// attributes: thunk
int __fastcall CPedDamageResponseCalculator::CPedDamageResponseCalculator(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  return _ZN28CPedDamageResponseCalculatorC2EPK7CEntityf11eWeaponType14ePedPieceTypesb(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x371ad4
// Original: _ZN28CPedDamageResponseCalculatorC2EPK7CEntityf11eWeaponType14ePedPieceTypesb
// Demangled: CPedDamageResponseCalculator::CPedDamageResponseCalculator(CEntity const*,float,eWeaponType,ePedPieceTypes,bool)
int __fastcall CPedDamageResponseCalculator::CPedDamageResponseCalculator(
        int result,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a5;
  *(_DWORD *)(result + 12) = a4;
  *(_BYTE *)(result + 16) = a6;
  return result;
}


// ============================================================

// Address: 0x371ae8
// Original: _ZN28CPedDamageResponseCalculatorD2Ev
// Demangled: CPedDamageResponseCalculator::~CPedDamageResponseCalculator()
void __fastcall CPedDamageResponseCalculator::~CPedDamageResponseCalculator(CPedDamageResponseCalculator *this)
{
  ;
}


// ============================================================

// Address: 0x371aec
// Original: _ZN28CPedDamageResponseCalculator21ComputeDamageResponseEP4CPedR18CPedDamageResponseb
// Demangled: CPedDamageResponseCalculator::ComputeDamageResponse(CPed *,CPedDamageResponse &,bool)
CEntity *__fastcall CPedDamageResponseCalculator::ComputeDamageResponse(int a1, CEntity **this, int a3)
{
  CEntity *result; // r0
  bool v7; // zf
  float *v8; // r9
  float *v9; // r0
  float v10; // s0
  CPed *v11; // r5
  CPed *v12; // r5
  CPlayerPed *PlayerPed; // r0
  __int64 v14; // kr00_8
  CEntity *v15; // lr
  unsigned int v16; // r0
  int v17; // r0
  _DWORD v18[3]; // [sp+0h] [bp-58h] BYREF
  __int16 v19; // [sp+Ch] [bp-4Ch]
  CEntity *v20[4]; // [sp+10h] [bp-48h] BYREF
  char v21; // [sp+20h] [bp-38h]
  char v22; // [sp+21h] [bp-37h]
  int v23; // [sp+24h] [bp-34h]
  int v24; // [sp+28h] [bp-30h]
  int v25; // [sp+2Ch] [bp-2Ch]
  int v26; // [sp+30h] [bp-28h]
  int v27; // [sp+34h] [bp-24h]
  int v28; // [sp+38h] [bp-20h]
  int v29; // [sp+3Ch] [bp-1Ch]

  result = (CEntity *)*(unsigned __int8 *)(a3 + 10);
  if ( !*(_BYTE *)(a3 + 10) )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(_DWORD *)(a3 + 8) = 16842752;
    result = (CEntity *)CPed::IsPlayer((CPed *)this);
    v7 = CPlayerPed::bDebugPlayerInvincible == 0;
    if ( CPlayerPed::bDebugPlayerInvincible )
      v7 = result == 0;
    if ( v7 )
    {
      CPedDamageResponseCalculator::AccountForPedDamageStats(a1, (CPed *)this);
      v8 = (float *)(this + 339);
      if ( *((float *)this + 339) != 0.0 && (unsigned int)(*(_DWORD *)(a1 + 12) - 53) >= 2 )
      {
        if ( (CEntity **)FindPlayerPed(-1) == this )
          CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 58] = CTimer::m_snTimeInMilliseconds;
        v9 = (float *)(a1 + 4);
        v10 = *(float *)(a1 + 4);
        if ( v10 <= *v8 )
        {
          *(float *)(a3 + 4) = v10;
          *v8 = *v8 - *v9;
        }
        else
        {
          *v9 = v10 - *v8;
          *(float *)(a3 + 4) = *v8;
          v9 = (float *)(this + 339);
        }
        *v9 = 0.0;
      }
      CPedDamageResponseCalculator::ComputeWillKillPed(a1, (CPed *)this);
      if ( *(_DWORD *)a1 )
      {
        v11 = *(CPed **)a1;
        if ( v11 == (CPed *)FindPlayerPed(-1) || (v12 = *(CPed **)a1, v12 == (CPed *)FindPlayerVehicle(-1, 0)) )
        {
          if ( *(CEntity ***)a1 != this && (float)(*(float *)a3 + *(float *)(a3 + 4)) > 3.0 )
            ++CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 80];
        }
      }
      if ( (CEntity **)FindPlayerPed(-1) == this )
      {
        PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
        CPlayerPed::AnnoyPlayerPed(PlayerPed, 0);
      }
      result = (CEntity *)CPed::IsPlayer((CPed *)this);
      if ( result == (CEntity *)((char *)&stderr + 1) )
      {
        result = *(CEntity **)a1;
        if ( *(_DWORD *)a1 )
        {
          if ( (*((_BYTE *)result + 58) & 7) == 3 )
          {
            v14 = *(_QWORD *)(a1 + 8);
            v15 = this[289];
            v19 = -1;
            v21 = 0;
            v18[1] = 0;
            v18[2] = 13107456;
            v20[0] = result;
            v20[1] = 0;
            v20[2] = (CEntity *)HIDWORD(v14);
            v20[3] = (CEntity *)v14;
            v23 = 0;
            v24 = 191;
            v25 = 1090519040;
            v28 = 0;
            v29 = 0;
            v26 = 1065353216;
            v27 = 0;
            v22 = ((unsigned int)v15 >> 5) & 8;
            v18[0] = &off_665FF0;
            CEntity::RegisterReference(result, v20);
            v22 |= 8u;
            CPlayerPed::MakeGroupRespondToPlayerTakingDamage((CPlayerPed *)this, (const CEventDamage *)v18);
            result = v20[0];
            v18[0] = &off_665FF0;
            if ( v20[0] )
              result = (CEntity *)CEntity::CleanUpOldReference(v20[0], v20);
          }
        }
      }
      if ( (float)(*(float *)a3 + *(float *)(a3 + 4)) > 0.0 )
      {
        if ( !CPed::IsPlayer((CPed *)this) )
        {
          v16 = *(_DWORD *)(a1 + 12);
          if ( v16 <= 9 && ((1 << v16) & 0x310) != 0 )
            *((_BYTE *)this + 1847) = -56;
        }
        if ( (CEntity **)FindPlayerPed(-1) == this )
          CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 57] = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 1896) = *(_DWORD *)(a1 + 12);
        result = *(CEntity **)a1;
        if ( *(_DWORD *)a1 )
        {
          this[475] = result;
          CEntity::RegisterReference(result, this + 475);
          this[476] = (CEntity *)CTimer::m_snTimeInMilliseconds;
          result = *(CEntity **)a1;
          if ( (*(_BYTE *)(*(_DWORD *)a1 + 58) & 7) == 3 )
          {
            result = (CEntity *)CPed::IsPlayer(result);
            if ( result == (CEntity *)((char *)&stderr + 1) )
            {
              v17 = FindPlayerPed(-1);
              return (CEntity *)CPedGroupMembership::IsMember(
                                  (CPedGroupMembership *)&CPedGroups::ms_groups[181
                                                                              * *(_DWORD *)(*(_DWORD *)(v17 + 1092) + 56)
                                                                              + 2],
                                  (const CPed *)this);
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x371df4
// Original: _ZN28CPedDamageResponseCalculator24AccountForPedDamageStatsEP4CPedR18CPedDamageResponse
// Demangled: CPedDamageResponseCalculator::AccountForPedDamageStats(CPed *,CPedDamageResponse &)
const CPed *__fastcall CPedDamageResponseCalculator::AccountForPedDamageStats(int a1, CPed *this)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d2
  float v6; // s16
  float v7; // s18
  const CPed *v8; // r2
  float v9; // s0
  const CPed *result; // r0
  bool v11; // zf
  const CPed *v12; // r1
  const CPed *v13; // r1
  bool v14; // zf
  bool v15; // zf

  v6 = *(float *)(a1 + 4);
  v7 = *(float *)&CPedDamageResponseCalculator::ms_fStealthKillDamage;
  if ( CPed::IsPlayer(this) )
    v9 = 0.33;
  else
    v9 = *(float *)(*((_DWORD *)this + 360) + 44);
  result = *(const CPed **)a1;
  v11 = *(_DWORD *)a1 == 0;
  *(float *)(a1 + 4) = v9 * *(float *)(a1 + 4);
  if ( !v11
    && (*((_BYTE *)result + 58) & 7) == 3
    && (result = (const CPed *)CPed::IsPlayer(result), result == (const CPed *)((char *)&stderr + 1)) )
  {
    result = (const CPed *)CPedGroups::AreInSameGroup(this, *(const CPed **)a1, v8);
    if ( result == (const CPed *)((char *)&stderr + 1) )
    {
      result = *(const CPed **)(a1 + 12);
      v11 = result == (const CPed *)((char *)&dword_24 + 1);
      if ( result != (const CPed *)((char *)&dword_24 + 1) )
        v11 = result == (const CPed *)((char *)&word_32 + 1);
      if ( !v11 && v6 != v7 )
      {
LABEL_27:
        v3.n64_u32[0] = 12.5;
        v2.n64_f32[0] = *(float *)(a1 + 4) * 0.1;
        *(_DWORD *)(a1 + 4) = vmin_f32(v2, v3).n64_u32[0];
      }
    }
  }
  else
  {
    if ( this )
    {
      result = (const CPed *)CPed::IsPlayer(this);
      if ( result == (const CPed *)((char *)&stderr + 1) )
      {
        v12 = *(const CPed **)a1;
        if ( !*(_DWORD *)a1 )
          return result;
        result = (const CPed *)(*((_BYTE *)v12 + 58) & 7);
        if ( result == (const CPed *)((char *)&stderr + 3) )
        {
          result = (const CPed *)CPedIntelligence::AreFriends(this, v12, v8);
          if ( result == (const CPed *)((char *)&stderr + 1) )
            goto LABEL_27;
        }
      }
    }
    v13 = *(const CPed **)a1;
    if ( *(_DWORD *)a1 )
    {
      result = (const CPed *)(*((_BYTE *)v13 + 58) & 7);
      v14 = result == (const CPed *)((char *)&stderr + 3);
      if ( result == (const CPed *)((char *)&stderr + 3) )
      {
        result = (const CPed *)*((unsigned __int8 *)this + 1096);
        v14 = result == (const CPed *)((char *)&stderr + 2);
      }
      if ( v14 )
      {
        result = (const CPed *)CPedGroups::AreInSameGroup(this, v13, v8);
        if ( result == (const CPed *)((char *)&stderr + 1) )
        {
          result = *(const CPed **)(a1 + 12);
          v15 = result == (const CPed *)((char *)&dword_24 + 1);
          if ( result != (const CPed *)((char *)&dword_24 + 1) )
            v15 = result == (const CPed *)((char *)&word_32 + 1);
          if ( !v15 )
            goto LABEL_27;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x371ee8
// Original: _ZN28CPedDamageResponseCalculator19AccountForPedArmourEP4CPedR18CPedDamageResponse
// Demangled: CPedDamageResponseCalculator::AccountForPedArmour(CPed *,CPedDamageResponse &)
unsigned int __fastcall CPedDamageResponseCalculator::AccountForPedArmour(unsigned int result, int a2, int a3)
{
  float *v3; // r4
  unsigned int v5; // r5
  float v6; // s0

  v3 = (float *)(a2 + 1356);
  v5 = result;
  if ( *(float *)(a2 + 1356) != 0.0 )
  {
    result = *(_DWORD *)(result + 12) - 53;
    if ( result >= 2 )
    {
      if ( FindPlayerPed(-1) == a2 )
        CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 58] = CTimer::m_snTimeInMilliseconds;
      result = v5 + 4;
      v6 = *(float *)(v5 + 4);
      if ( v6 <= *v3 )
      {
        *(float *)(a3 + 4) = v6;
        *v3 = *v3 - *(float *)result;
      }
      else
      {
        *(float *)result = v6 - *v3;
        *(float *)(a3 + 4) = *v3;
        result = (unsigned int)v3;
      }
      *(_DWORD *)result = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x371f90
// Original: _ZN28CPedDamageResponseCalculator18ComputeWillKillPedEP4CPedR18CPedDamageResponseb
// Demangled: CPedDamageResponseCalculator::ComputeWillKillPed(CPed *,CPedDamageResponse &,bool)
int __fastcall CPedDamageResponseCalculator::ComputeWillKillPed(int a1, CPed *this, int a3, int a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d2
  int IsPlayer; // r0
  bool v11; // zf
  int result; // r0
  _DWORD *v13; // r4
  float v14; // s16
  unsigned int v15; // r0
  float v16; // s0
  unsigned __int16 v17; // r1
  TouchSense *PlayerPed; // r0
  TouchSense *v19; // r0

  IsPlayer = CPed::IsPlayer(this);
  v11 = byte_796839 == 0;
  if ( byte_796839 )
    v11 = IsPlayer == 0;
  if ( v11 || (result = *(_DWORD *)(a1 + 12), result >= 47) )
  {
    v13 = (_DWORD *)((char *)this + 1348);
    v14 = *((float *)this + 337);
    *(_BYTE *)(a3 + 9) = CPedDamageResponseCalculator::ComputeWillForceDeath(a1, this);
    if ( byte_79683F )
    {
      v15 = *(_DWORD *)(a1 + 12);
      if ( v15 < 2 || v15 == 46 )
        *(_DWORD *)(a1 + 4) = *v13;
    }
    if ( (CPed *)FindPlayerPed(-1) == this
      && CTheScripts::pActiveScripts
      && !strcmp((const char *)(CTheScripts::pActiveScripts + 8), "intro1") )
    {
      *(float *)(a1 + 4) = *(float *)(a1 + 4) * 0.77;
    }
    if ( *(_BYTE *)(a3 + 9) )
      goto LABEL_14;
    if ( *(_DWORD *)(a1 + 12) == 54 && *(_BYTE *)(a1 + 16) )
    {
      result = 0;
      v5.n64_u32[0] = 5.0;
      *(_BYTE *)(a3 + 8) = 0;
      v4.n64_f32[0] = *(float *)v13 - *(float *)(a1 + 4);
      v16 = vmax_f32(v4, v5).n64_f32[0];
      *(float *)v13 = v16;
      *(float *)a3 = v14 - v16;
      if ( a4 == 1 )
        return CPed::Say(this, 0x159u, 0, 1.0, 0, 0, 0);
    }
    else
    {
      if ( (float)(*(float *)v13 - *(float *)(a1 + 4)) < 1.0 )
      {
LABEL_14:
        *(_BYTE *)(a3 + 8) = 1;
        *(_DWORD *)a3 = *v13;
        result = 0;
        *v13 = 0;
        return result;
      }
      *(_BYTE *)(a3 + 8) = 0;
      result = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a3 = result;
      *(float *)v13 = *(float *)v13 - *(float *)(a1 + 4);
      if ( a4 == 1 )
      {
        if ( *(_DWORD *)(a1 + 12) == 53 )
        {
          v17 = 357;
        }
        else
        {
          PlayerPed = (TouchSense *)FindPlayerPed(0);
          if ( PlayerPed == this )
          {
            v19 = (TouchSense *)TouchSense::instance(PlayerPed);
            TouchSense::playBuiltinEffect(v19, 2, 101, 115, 20);
          }
          if ( *(float *)(a1 + 4) < 5.0 && *(float *)v13 > 10.0 )
            return CPed::Say(this, 0x159u, 0, 1.0, 0, 0, 0);
          v17 = 344;
        }
        return CPed::Say(this, v17, 0, 1.0, 0, 0, 0);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x372138
// Original: _ZN28CPedDamageResponseCalculator16IsBleedingWeaponEP4CPed
// Demangled: CPedDamageResponseCalculator::IsBleedingWeapon(CPed *)
unsigned int __fastcall CPedDamageResponseCalculator::IsBleedingWeapon(CPedDamageResponseCalculator *this, CPed *a2)
{
  unsigned int v3; // r0

  if ( CPed::IsPlayer(a2) )
    return 0;
  v3 = *((_DWORD *)this + 3) - 4;
  if ( v3 > 5 )
    return 0;
  else
    return (0x31u >> (v3 & 0x3F)) & 1;
}


// ============================================================

// Address: 0x372164
// Original: _ZN28CPedDamageResponseCalculator15AdjustPedDamageEP4CPed
// Demangled: CPedDamageResponseCalculator::AdjustPedDamage(CPed *)
unsigned int __fastcall CPedDamageResponseCalculator::AdjustPedDamage(CPedDamageResponseCalculator *this, CPed *a2)
{
  unsigned int result; // r0

  result = (unsigned __int8)byte_79683F;
  if ( byte_79683F && ((result = *((_DWORD *)this + 3), result < 2) || result == 46) )
  {
    *((_DWORD *)this + 1) = *((_DWORD *)a2 + 337);
  }
  else if ( !a2 )
  {
    return result;
  }
  result = FindPlayerPed(-1);
  if ( (CPed *)result == a2 )
  {
    result = CTheScripts::pActiveScripts;
    if ( CTheScripts::pActiveScripts )
    {
      result = strcmp((const char *)(CTheScripts::pActiveScripts + 8), "intro1");
      if ( !result )
        *((float *)this + 1) = *((float *)this + 1) * 0.77;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3721d4
// Original: _ZN28CPedDamageResponseCalculator21ComputeWillForceDeathEP4CPedR18CPedDamageResponse
// Demangled: CPedDamageResponseCalculator::ComputeWillForceDeath(CPed *,CPedDamageResponse &)
bool __fastcall CPedDamageResponseCalculator::ComputeWillForceDeath(int a1, CPed *this)
{
  _BOOL4 result; // r0
  int v5; // r8
  bool v6; // zf
  CPed *v7; // r0
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int IsPlayer; // r0
  bool v12; // zf
  CPed *v13; // r0
  CPed *v14; // r4

  if ( (*((_BYTE *)this + 1161) & 0x10) == 0 )
  {
    result = 0;
    switch ( *(_DWORD *)(a1 + 12) )
    {
      case 8:
        v13 = *(CPed **)a1;
        if ( !*(_DWORD *)a1 )
          return 0;
        if ( (*((_BYTE *)v13 + 58) & 7) != 3 )
          return 0;
        if ( CPed::IsPlayer(v13) != 1 )
          return 0;
        v14 = *(CPed **)a1;
        if ( !CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)v14 + 272))
          || *(_BYTE *)(CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)v14 + 272)) + 36) != 11 )
        {
          return 0;
        }
        return *(_BYTE *)(CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)v14 + 272)) + 37) == 2
            && (rand() & 1) != 0
            || (rand() & 7) == 0;
      case 0x10:
      case 0x23:
      case 0x24:
      case 0x27:
      case 0x33:
        if ( !CLocalisation::KillPeds(0) )
          return 0;
        IsPlayer = CPed::IsPlayer(this);
        v12 = IsPlayer == 0;
        if ( !IsPlayer )
          v12 = *((unsigned __int8 *)this + 1157) << 31 == 0;
        return v12 && (float)(*(float *)(a1 + 4) + 1.0) > *((float *)this + 337);
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x26:
      case 0x34:
        if ( CPed::IsPlayer(this) || (*((_BYTE *)this + 1161) & 0x10) != 0 )
        {
          v5 = 1;
        }
        else if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 33) >= 2 )
        {
          v5 = rand() & 7;
        }
        else
        {
          v5 = 0;
        }
        v6 = *((unsigned __int8 *)this + 1157) << 31 == 0;
        if ( *((unsigned __int8 *)this + 1157) << 31 )
          v6 = *((_DWORD *)this + 356) == 0;
        if ( !v6 && !CPed::IsPlayer(this) && (*((_BYTE *)this + 1161) & 0x10) == 0 )
          return *(_DWORD *)(a1 + 8) == 9;
        if ( CPed::IsPlayer(this)
          || (v7 = *(CPed **)a1) == 0
          || (*((_BYTE *)v7 + 58) & 7) != 3
          || CPed::IsPlayer(v7) != 1 )
        {
          if ( v5 )
            return 0;
          return *(_DWORD *)(a1 + 8) == 9;
        }
        v8 = *(_DWORD *)(*(_DWORD *)a1 + 1092);
        v9 = *(_DWORD *)(v8 + 112);
        v10 = v9 == 5;
        if ( v9 != 5 )
          v10 = v5 == 0;
        if ( v10 || (*(_WORD *)(v8 + 52) & 8) != 0 )
          return *(_DWORD *)(a1 + 8) == 9;
        break;
      default:
        return result;
    }
  }
  return 0;
}


// ============================================================
