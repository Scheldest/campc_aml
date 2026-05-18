
// Address: 0x189e8c
// Original: j__ZN7CCopPed17AddCriminalToKillEP4CPed
// Demangled: CCopPed::AddCriminalToKill(CPed *)
// attributes: thunk
int __fastcall CCopPed::AddCriminalToKill(CCopPed *this, CPed *a2)
{
  return _ZN7CCopPed17AddCriminalToKillEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1974e4
// Original: j__ZN7CCopPedC2E8eCopType
// Demangled: CCopPed::CCopPed(eCopType)
// attributes: thunk
int CCopPed::CCopPed()
{
  return _ZN7CCopPedC2E8eCopType();
}


// ============================================================

// Address: 0x19e52c
// Original: j__ZN7CCopPed20ClearCriminalsToKillEv
// Demangled: CCopPed::ClearCriminalsToKill(void)
// attributes: thunk
int __fastcall CCopPed::ClearCriminalsToKill(CCopPed *this)
{
  return _ZN7CCopPed20ClearCriminalsToKillEv(this);
}


// ============================================================

// Address: 0x1a03a8
// Original: j__ZN7CCopPed10SetPartnerEPS_
// Demangled: CCopPed::SetPartner(CCopPed*)
// attributes: thunk
int __fastcall CCopPed::SetPartner(CCopPed *this, CCopPed *a2)
{
  return _ZN7CCopPed10SetPartnerEPS_(this, a2);
}


// ============================================================

// Address: 0x49e5c0
// Original: _ZN7CCopPedC2E8eCopType
// Demangled: CCopPed::CCopPed(eCopType)
int __fastcall CCopPed::CCopPed(int a1, unsigned int a2)
{
  char v4; // r0
  int v5; // s0
  char v6; // r1
  unsigned int DefaultCopModel; // r1
  CPed *v8; // r0
  int v9; // r0

  CPed::CPed((CPed *)a1, 6u);
  *(_DWORD *)(a1 + 1960) = a2;
  *(_DWORD *)a1 = &off_668B18;
  switch ( a2 )
  {
    case 0u:
      DefaultCopModel = CStreaming::GetDefaultCopModel((CStreaming *)&off_668B18);
      v8 = (CPed *)a1;
      goto LABEL_8;
    case 1u:
      v8 = (CPed *)a1;
      DefaultCopModel = 284;
      goto LABEL_8;
    case 2u:
    case 3u:
      CPed::SetModelIndex((CPed *)a1, 0x11Du);
      CPed::GiveDelayedWeapon();
      CPed::SetCurrentWeapon(a1, 28);
      v4 = 68;
      v5 = 1112014848;
      v6 = 70;
      goto LABEL_9;
    case 4u:
      CPed::SetModelIndex((CPed *)a1, 0x11Eu);
      CPed::GiveDelayedWeapon();
      CPed::SetCurrentWeapon(a1, 29);
      v4 = 76;
      v5 = 1120403456;
      v6 = 60;
      goto LABEL_9;
    case 5u:
      CPed::SetModelIndex((CPed *)a1, 0x11Fu);
      CPed::GiveDelayedWeapon();
      CPed::SetCurrentWeapon(a1, 31);
      v4 = 84;
      v5 = 1120403456;
      v6 = 80;
      goto LABEL_9;
    case 7u:
      v8 = (CPed *)a1;
      DefaultCopModel = 283;
      goto LABEL_8;
    default:
      v8 = (CPed *)a1;
      DefaultCopModel = a2;
LABEL_8:
      CPed::SetModelIndex(v8, DefaultCopModel);
      CPed::GiveWeapon(a1, 3, 1000, 1);
      CPed::GiveDelayedWeapon();
      v5 = 0;
      *(_BYTE *)(a1 + 1820) = 0;
      v4 = 60;
      v6 = 30;
LABEL_9:
      *(_BYTE *)(a1 + 1821) = v6;
      *(_BYTE *)(a1 + 1822) = v4;
      *(_DWORD *)(a1 + 1876) = 0;
      *(_WORD *)(a1 + 1956) = 0;
      *(_DWORD *)(a1 + 1964) = 0;
      *(_DWORD *)(a1 + 1356) = v5;
      CPed::SetWeaponLockOnTarget((CPed *)a1, 0);
      CAEPedSpeechAudioEntity::Initialise((CAEPedSpeechAudioEntity *)(a1 + 664), (CEntity *)a1);
      v9 = *(_DWORD *)(a1 + 1088);
      *(_DWORD *)(v9 + 196) = 8;
      *(_DWORD *)(v9 + 200) = 1114636288;
      *(_QWORD *)(a1 + 1977) = 0LL;
      *(_QWORD *)(a1 + 1985) = 0LL;
      *(_QWORD *)(a1 + 1968) = 0LL;
      *(_QWORD *)(a1 + 1976) = 0LL;
      return a1;
  }
}


// ============================================================

// Address: 0x49e718
// Original: _ZN7CCopPedD2Ev
// Demangled: CCopPed::~CCopPed()
void __fastcall CCopPed::~CCopPed(CEntity **this)
{
  CWanted *PlayerWanted; // r0
  CEntity *v3; // r0

  *this = (CEntity *)&off_668B18;
  if ( FindPlayerPed(-1) )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    CWanted::RemovePursuitCop(PlayerWanted, (CCopPed *)this);
  }
  v3 = this[492];
  if ( v3 )
    CEntity::CleanUpOldReference(v3, this + 492);
  CCopPed::ClearCriminalsToKill((CCopPed *)this);
  j_CPed::~CPed((CPed *)this);
}


// ============================================================

// Address: 0x49e764
// Original: _ZN7CCopPed20ClearCriminalsToKillEv
// Demangled: CCopPed::ClearCriminalsToKill(void)
int __fastcall CCopPed::ClearCriminalsToKill(CCopPed *this)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r3
  unsigned int v5; // r2
  int v6; // r12
  CEntity *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r3
  unsigned int v11; // r2
  int v12; // r12
  CEntity *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  int v18; // r12
  CEntity *v19; // r0
  int v20; // r0
  _DWORD *v21; // r0
  int v22; // r3
  unsigned int v23; // r2
  int v24; // r12
  CEntity *v25; // r0
  int result; // r0
  CEntity **v27; // r4
  CEntity *v28; // r0
  int v29; // r3
  unsigned int v30; // r2
  int v31; // r5

  v2 = *((_DWORD *)this + 493);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 1360) = CTimer::m_snTimeInMilliseconds;
    v3 = (_DWORD *)*((_DWORD *)this + 493);
    v4 = v3[291];
    v5 = v3[290] & 0xFFFFFFBF;
    v6 = v3[292];
    v3[289] = v3[289];
    v3[290] = v5;
    v3[291] = v4;
    v3[292] = v6;
    *(_DWORD *)(*((_DWORD *)this + 493) + 1944) = 1065353216;
    v7 = (CEntity *)*((_DWORD *)this + 493);
    if ( v7 )
      CEntity::CleanUpOldReference(v7, (CEntity **)this + 493);
    *((_DWORD *)this + 493) = 0;
  }
  v8 = *((_DWORD *)this + 494);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 1360) = CTimer::m_snTimeInMilliseconds;
    v9 = (_DWORD *)*((_DWORD *)this + 494);
    v10 = v9[291];
    v11 = v9[290] & 0xFFFFFFBF;
    v12 = v9[292];
    v9[289] = v9[289];
    v9[290] = v11;
    v9[291] = v10;
    v9[292] = v12;
    *(_DWORD *)(*((_DWORD *)this + 494) + 1944) = 1065353216;
    v13 = (CEntity *)*((_DWORD *)this + 494);
    if ( v13 )
      CEntity::CleanUpOldReference(v13, (CEntity **)this + 494);
    *((_DWORD *)this + 494) = 0;
  }
  v14 = *((_DWORD *)this + 495);
  if ( v14 )
  {
    *(_DWORD *)(v14 + 1360) = CTimer::m_snTimeInMilliseconds;
    v15 = (_DWORD *)*((_DWORD *)this + 495);
    v16 = v15[291];
    v17 = v15[290] & 0xFFFFFFBF;
    v18 = v15[292];
    v15[289] = v15[289];
    v15[290] = v17;
    v15[291] = v16;
    v15[292] = v18;
    *(_DWORD *)(*((_DWORD *)this + 495) + 1944) = 1065353216;
    v19 = (CEntity *)*((_DWORD *)this + 495);
    if ( v19 )
      CEntity::CleanUpOldReference(v19, (CEntity **)this + 495);
    *((_DWORD *)this + 495) = 0;
  }
  v20 = *((_DWORD *)this + 496);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 1360) = CTimer::m_snTimeInMilliseconds;
    v21 = (_DWORD *)*((_DWORD *)this + 496);
    v22 = v21[291];
    v23 = v21[290] & 0xFFFFFFBF;
    v24 = v21[292];
    v21[289] = v21[289];
    v21[290] = v23;
    v21[291] = v22;
    v21[292] = v24;
    *(_DWORD *)(*((_DWORD *)this + 496) + 1944) = 1065353216;
    v25 = (CEntity *)*((_DWORD *)this + 496);
    if ( v25 )
      CEntity::CleanUpOldReference(v25, (CEntity **)this + 496);
    *((_DWORD *)this + 496) = 0;
  }
  result = *((_DWORD *)this + 497);
  if ( result )
  {
    v27 = (CEntity **)((char *)this + 1988);
    *(_DWORD *)(result + 1360) = CTimer::m_snTimeInMilliseconds;
    v28 = *v27;
    v29 = *((_DWORD *)*v27 + 291);
    v30 = *((_DWORD *)*v27 + 290) & 0xFFFFFFBF;
    v31 = *((_DWORD *)*v27 + 292);
    *((_DWORD *)v28 + 289) = *((_DWORD *)*v27 + 289);
    *((_DWORD *)v28 + 290) = v30;
    *((_DWORD *)v28 + 291) = v29;
    *((_DWORD *)v28 + 292) = v31;
    *((_DWORD *)*v27 + 486) = 1065353216;
    if ( *v27 )
      CEntity::CleanUpOldReference(*v27, v27);
    result = 0;
    *v27 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x49e934
// Original: _ZN7CCopPedD0Ev
// Demangled: CCopPed::~CCopPed()
void __fastcall CCopPed::~CCopPed(CEntity **this)
{
  CWanted *PlayerWanted; // r0
  CEntity *v3; // r0
  void *v4; // r0

  *this = (CEntity *)&off_668B18;
  if ( FindPlayerPed(-1) )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    CWanted::RemovePursuitCop(PlayerWanted, (CCopPed *)this);
  }
  v3 = this[492];
  if ( v3 )
    CEntity::CleanUpOldReference(v3, this + 492);
  CCopPed::ClearCriminalsToKill((CCopPed *)this);
  CPed::~CPed((CPed *)this);
  sub_19B910(v4);
}


// ============================================================

// Address: 0x49e984
// Original: _ZN7CCopPed14ProcessControlEv
// Demangled: CCopPed::ProcessControl(void)
int __fastcall CCopPed::ProcessControl(CCopPed *this)
{
  CPedIntelligence *v2; // r0
  int result; // r0
  int GameCamPosition; // r0
  int v5; // r1
  float *v6; // r2
  float v7; // s0
  float v8; // s2
  float v9[3]; // [sp+24h] [bp-44h] BYREF
  int v10; // [sp+30h] [bp-38h] BYREF
  _BYTE v11[52]; // [sp+34h] [bp-34h] BYREF

  if ( *(_DWORD *)(FindPlayerWanted(-1) + 44) )
  {
    v2 = (CPedIntelligence *)*((_DWORD *)this + 272);
    if ( *((_DWORD *)v2 + 45) == 7 )
      CPedIntelligence::SetPedDecisionMakerType(v2, 1);
  }
  CPed::ProcessControl(this);
  result = *((unsigned __int8 *)this + 28) << 25;
  if ( (*((_BYTE *)this + 28) & 0x40) == 0 )
  {
    result = *((_DWORD *)this + 275);
    if ( result != 55 )
    {
      CWeapon::Update((CCopPed *)((char *)this + 28 * *((char *)this + 1820) + 1444), this);
      result = *((_DWORD *)this + 275);
      if ( result != 54 )
      {
        if ( *((_DWORD *)this + 456) )
          CPed::Say(this, 0xDCu, 0, 1.0, 0, 0, 0);
        result = *((unsigned __int8 *)this + 1957);
        if ( *((_BYTE *)this + 1957) )
        {
          if ( CEntity::GetIsOnScreen(this) )
          {
            result = ((_BYTE)CTimer::m_FrameCounter + (unsigned __int8)*((_WORD *)this + 18)) & 0x1F;
            if ( result == 17 )
            {
              v10 = 0;
              GameCamPosition = CCamera::GetGameCamPosition((CCamera *)&TheCamera);
              v5 = *((_DWORD *)this + 5);
              v6 = (float *)(v5 + 48);
              if ( !v5 )
                v6 = (float *)((char *)this + 4);
              v7 = *v6 + 0.0;
              v8 = v6[2] + 0.7;
              v9[1] = v6[1] + 0.0;
              v9[0] = v7;
              v9[2] = v8;
              CWorld::ProcessLineOfSight(GameCamPosition, (int)v9, (int)v11, (int)&v10, 1, 0, 0, 0, 0, 0, 0, 0);
              result = v10;
              if ( v10 )
                return (*(int (__fastcall **)(CCopPed *))(*(_DWORD *)this + 88))(this);
            }
          }
          else
          {
            return (*(int (__fastcall **)(CCopPed *))(*(_DWORD *)this + 88))(this);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x49eab0
// Original: _ZN7CCopPed10SetPartnerEPS_
// Demangled: CCopPed::SetPartner(CCopPed*)
CEntity *__fastcall CCopPed::SetPartner(CCopPed *this, CCopPed *a2)
{
  CEntity *result; // r0
  CEntity **v5; // r5

  result = (CEntity *)*((_DWORD *)this + 492);
  v5 = (CEntity **)((char *)this + 1968);
  if ( result )
    result = (CEntity *)CEntity::CleanUpOldReference(result, (CEntity **)this + 492);
  *v5 = a2;
  if ( a2 )
    return (CEntity *)j_CEntity::RegisterReference(a2, v5);
  return result;
}


// ============================================================

// Address: 0x49eae0
// Original: _ZN7CCopPed17AddCriminalToKillEP4CPed
// Demangled: CCopPed::AddCriminalToKill(CPed *)
int __fastcall CCopPed::AddCriminalToKill(CCopPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r6
  float *v7; // r0
  CPed **v8; // r9
  float *v9; // r0
  CPed **v10; // r11
  float *v11; // r0
  CPed **v12; // r10
  float *v13; // r0
  CPed **v14; // r8
  float *v15; // r0
  CPed *v16; // r1
  bool v17; // zf
  CPed *v18; // r1
  bool v19; // zf
  bool v20; // zf
  CEntity **v21; // r1
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // r2
  CCopPed *v27; // r0

  if ( !a2 )
    return -1;
  if ( CPed::IsPlayer(a2) )
    return -1;
  v4 = *((_DWORD *)a2 + 359);
  if ( (unsigned int)v4 <= 0x13 && ((1 << v4) & (unsigned int)"v") != 0 )
    return -1;
  if ( v4 > 23 || *((_BYTE *)a2 + 1096) == 2 )
    return -1;
  v7 = (float *)*((_DWORD *)this + 493);
  v8 = (CPed **)((char *)this + 1972);
  if ( v7 && v7[337] <= 0.0 )
  {
    CEntity::CleanUpOldReference((CEntity *)v7, (CEntity **)this + 493);
    *v8 = 0;
  }
  v9 = (float *)*((_DWORD *)this + 494);
  v10 = (CPed **)((char *)this + 1976);
  if ( v9 && v9[337] <= 0.0 )
  {
    CEntity::CleanUpOldReference((CEntity *)v9, (CEntity **)this + 494);
    *v10 = 0;
  }
  v11 = (float *)*((_DWORD *)this + 495);
  v12 = (CPed **)((char *)this + 1980);
  if ( v11 && v11[337] <= 0.0 )
  {
    CEntity::CleanUpOldReference((CEntity *)v11, (CEntity **)this + 495);
    *v12 = 0;
  }
  v13 = (float *)*((_DWORD *)this + 496);
  v14 = (CPed **)((char *)this + 1984);
  if ( v13 && v13[337] <= 0.0 )
  {
    CEntity::CleanUpOldReference((CEntity *)v13, (CEntity **)this + 496);
    *v14 = 0;
  }
  v15 = (float *)*((_DWORD *)this + 497);
  if ( v15 )
  {
    if ( v15[337] <= 0.0 )
    {
      CEntity::CleanUpOldReference((CEntity *)v15, (CEntity **)this + 497);
      v15 = 0;
      *((_DWORD *)this + 497) = 0;
    }
  }
  else
  {
    v15 = 0;
  }
  if ( *((float *)a2 + 337) <= 0.0 )
    return -1;
  if ( *v8 )
  {
    if ( *v8 == a2 )
      return 0;
    if ( !*v10 )
    {
      v16 = *v12;
      v5 = 1;
      goto LABEL_45;
    }
    v5 = -1;
    if ( *v10 == a2 )
      return 1;
  }
  else
  {
    v5 = 0;
    if ( *v10 == a2 )
      return 1;
  }
  v16 = *v12;
  v17 = v5 == -1;
  if ( v5 == -1 )
    v17 = v16 == 0;
  if ( v17 )
  {
    v18 = *v14;
    v5 = 2;
    goto LABEL_37;
  }
LABEL_45:
  if ( v16 == a2 )
    return 2;
  v18 = *v14;
  v20 = v5 == -1;
  if ( v5 == -1 )
    v20 = v18 == 0;
  if ( v20 )
  {
    v5 = 3;
    goto LABEL_51;
  }
LABEL_37:
  if ( v18 == a2 )
    return 3;
  v19 = v5 == -1;
  if ( v5 == -1 )
    v19 = v15 == 0;
  if ( !v19 )
  {
LABEL_51:
    if ( v15 == (float *)a2 )
      return 4;
    if ( v5 != -1 )
      goto LABEL_53;
    return -1;
  }
  v5 = 4;
LABEL_53:
  v21 = (CEntity **)((char *)this + 4 * v5 + 1972);
  *v21 = a2;
  CEntity::RegisterReference(a2, v21);
  v22 = *((_DWORD *)a2 + 292);
  v23 = *((_DWORD *)a2 + 356);
  v24 = CTimer::m_snTimeInMilliseconds;
  *((_DWORD *)a2 + 290) |= 0x40u;
  *((_DWORD *)a2 + 292) = v22 | 0x800;
  *((_DWORD *)a2 + 486) = 1050253722;
  *((_DWORD *)a2 + 340) = v24 + 300000;
  if ( v23 )
  {
    *(_WORD *)(v23 + 1200) = 255;
    v25 = *((_DWORD *)a2 + 356);
    v26 = *(_DWORD *)(v25 + 1072) | 0x40;
    *(_DWORD *)(v25 + 1068) = *(_DWORD *)(v25 + 1068);
    *(_DWORD *)(v25 + 1072) = v26;
  }
  v27 = (CCopPed *)*((_DWORD *)this + 492);
  if ( v27 )
    CCopPed::AddCriminalToKill(v27, a2);
  return v5;
}


// ============================================================

// Address: 0x49ed04
// Original: _ZN7CCopPed20RemoveCriminalToKillEP4CPedi
// Demangled: CCopPed::RemoveCriminalToKill(CPed *,int)
CEntity *__fastcall CCopPed::RemoveCriminalToKill(CCopPed *this, CPed *a2, int a3)
{
  char *v3; // r1
  CEntity *result; // r0
  _DWORD *v5; // r4

  v3 = (char *)this + 4 * a3;
  result = (CEntity *)*((_DWORD *)v3 + 493);
  if ( result )
  {
    v5 = v3 + 1972;
    CEntity::CleanUpOldReference(result, (CEntity **)v3 + 493);
    result = 0;
    *v5 = 0;
  }
  return result;
}


// ============================================================
