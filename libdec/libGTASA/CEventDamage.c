
// Address: 0x18b258
// Original: j__ZN12CEventDamage4FromERKS_
// Demangled: CEventDamage::From(CEventDamage const&)
// attributes: thunk
int __fastcall CEventDamage::From(CEventDamage *this, const CEventDamage *a2)
{
  return _ZN12CEventDamage4FromERKS_(this, a2);
}


// ============================================================

// Address: 0x1918a4
// Original: j__ZN12CEventDamage16ComputeDeathAnimEP4CPedb
// Demangled: CEventDamage::ComputeDeathAnim(CPed *,bool)
// attributes: thunk
int __fastcall CEventDamage::ComputeDeathAnim(CEventDamage *this, CPed *a2, bool a3)
{
  return _ZN12CEventDamage16ComputeDeathAnimEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x196ce0
// Original: j__ZN12CEventDamageD2Ev
// Demangled: CEventDamage::~CEventDamage()
// attributes: thunk
void __fastcall CEventDamage::~CEventDamage(CEventDamage *this)
{
  _ZN12CEventDamageD2Ev(this);
}


// ============================================================

// Address: 0x197f7c
// Original: j__ZNK12CEventDamage13ProcessDamageEP4CPed
// Demangled: CEventDamage::ProcessDamage(CPed *)
// attributes: thunk
int __fastcall CEventDamage::ProcessDamage(CEventDamage *this, CPed *a2)
{
  return _ZNK12CEventDamage13ProcessDamageEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1988e0
// Original: j__ZN12CEventDamageC2EP7CEntityj11eWeaponType14ePedPieceTypeshbb
// Demangled: CEventDamage::CEventDamage(CEntity *,uint,eWeaponType,ePedPieceTypes,uchar,bool,bool)
// attributes: thunk
int __fastcall CEventDamage::CEventDamage(int a1, CEntity *this, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN12CEventDamageC2EP7CEntityj11eWeaponType14ePedPieceTypeshbb(a1, this, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19b7f4
// Original: j__ZNK12CEventDamage10AffectsPedEP4CPed
// Demangled: CEventDamage::AffectsPed(CPed *)
// attributes: thunk
int __fastcall CEventDamage::AffectsPed(CEventDamage *this, CPed *a2)
{
  return _ZNK12CEventDamage10AffectsPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19cce8
// Original: j__ZNK12CEventDamage15ComputeHeadShotERb
// Demangled: CEventDamage::ComputeHeadShot(bool &)
// attributes: thunk
int __fastcall CEventDamage::ComputeHeadShot(CEventDamage *this, bool *a2)
{
  return _ZNK12CEventDamage15ComputeHeadShotERb(this, a2);
}


// ============================================================

// Address: 0x19d8c8
// Original: j__ZN12CEventDamage17ComputeDamageAnimEP4CPedb
// Demangled: CEventDamage::ComputeDamageAnim(CPed *,bool)
// attributes: thunk
int __fastcall CEventDamage::ComputeDamageAnim(CEventDamage *this, CPed *a2, bool a3)
{
  return _ZN12CEventDamage17ComputeDamageAnimEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x19e058
// Original: j__ZN12CEventDamage16IsSameEventForAIEPS_
// Demangled: CEventDamage::IsSameEventForAI(CEventDamage*)
// attributes: thunk
int __fastcall CEventDamage::IsSameEventForAI(CEventDamage *this, CEventDamage *a2)
{
  return _ZN12CEventDamage16IsSameEventForAIEPS_(this, a2);
}


// ============================================================

// Address: 0x37236c
// Original: _ZN12CEventDamageC2EP7CEntityj11eWeaponType14ePedPieceTypeshbb
// Demangled: CEventDamage::CEventDamage(CEntity *,uint,eWeaponType,ePedPieceTypes,uchar,bool,bool)
int __fastcall CEventDamage::CEventDamage(int a1, CEntity *this, int a3, int a4, int a5, char a6, char a7, char a8)
{
  char v9; // r6
  char v10; // r0

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 13107456;
  *(_WORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a5;
  *(_BYTE *)(a1 + 32) = a6;
  v9 = *(_BYTE *)(a1 + 33);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 191;
  *(_DWORD *)(a1 + 44) = 1090519040;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  v10 = a7 | (8 * a8) | v9 & 0xE0;
  *(_BYTE *)(a1 + 33) = v10;
  *(_DWORD *)a1 = &off_665FF0;
  *(_DWORD *)(a1 + 16) = this;
  if ( this )
  {
    CEntity::RegisterReference(this, (CEntity **)(a1 + 16));
    v10 = *(_BYTE *)(a1 + 33);
  }
  *(_BYTE *)(a1 + 33) = v10 | 8;
  return a1;
}


// ============================================================

// Address: 0x372404
// Original: _ZN12CEventDamageD2Ev
// Demangled: CEventDamage::~CEventDamage()
void __fastcall CEventDamage::~CEventDamage(CEventDamage *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665FF0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x37242c
// Original: _ZN12CEventDamageD0Ev
// Demangled: CEventDamage::~CEventDamage()
void __fastcall CEventDamage::~CEventDamage(CEventDamage *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665FF0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x372480
// Original: _ZN12CEventDamageC2ERKS_
// Demangled: CEventDamage::CEventDamage(CEventDamage const&)
void __fastcall CEventDamage::CEventDamage(CEventDamage *this, const CEventDamage *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *(_DWORD *)this = &off_665FF0;
  CEventDamage::From(this, a2);
}


// ============================================================

// Address: 0x3724b8
// Original: _ZN12CEventDamage4FromERKS_
// Demangled: CEventDamage::From(CEventDamage const&)
int __fastcall CEventDamage::From(CEventDamage *this, const CEventDamage *a2)
{
  CEntity *v4; // r0
  int v5; // r0
  unsigned int v6; // r0
  __int64 v7; // d16
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r0
  int result; // r0

  v4 = (CEntity *)*((_DWORD *)a2 + 4);
  *((_DWORD *)this + 4) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)this + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  v5 = *((unsigned __int8 *)this + 33);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  v6 = v5 & 0xFFFFFFFE | *((_BYTE *)a2 + 33) & 1;
  *((_BYTE *)this + 33) = v6;
  v7 = *(_QWORD *)((char *)a2 + 52);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *(_QWORD *)((char *)this + 52) = v7;
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  v8 = v6 & 0xFFFFFFFB | (4 * ((*((unsigned __int8 *)a2 + 33) >> 2) & 1));
  *((_BYTE *)this + 33) = v8;
  v9 = v8 & 0xFFFFFFFD | (2 * ((*((unsigned __int8 *)a2 + 33) >> 1) & 1));
  *((_BYTE *)this + 33) = v9;
  v10 = v9 & 0xFFFFFFF7 | (8 * ((*((unsigned __int8 *)a2 + 33) >> 3) & 1));
  *((_BYTE *)this + 33) = v10;
  result = v10 & 0xEF | *((_BYTE *)a2 + 33) & 0x10;
  *((_BYTE *)this + 33) = result;
  return result;
}


// ============================================================

// Address: 0x372550
// Original: _ZNK12CEventDamage13CloneEditableEv
// Demangled: CEventDamage::CloneEditable(void)
int __fastcall CEventDamage::CloneEditable(CEventDamage *this)
{
  int v2; // r2
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r3
  int v7; // r4
  char v8; // r1

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pEventPool;
  v5 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v3[3] = ++v5;
    if ( v5 == v4 )
    {
      v5 = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        goto LABEL_7;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + v5);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + v5) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  v5 = *v3 + 68 * v3[3];
LABEL_7:
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 13107456;
  *(_WORD *)(v5 + 12) = -1;
  *(_DWORD *)(v5 + 52) = 0;
  *(_DWORD *)(v5 + 56) = 0;
  *(_DWORD *)(v5 + 60) = 0;
  *(_DWORD *)v5 = &off_665FF0;
  CEventDamage::From((CEventDamage *)v5, this);
  v8 = *(_BYTE *)(v5 + 33);
  *(_DWORD *)(v5 + 40) = *((_DWORD *)this + 10);
  *(_BYTE *)(v5 + 33) = *((_BYTE *)this + 33) & 0x10 | v8 & 0xEF;
  return v5;
}


// ============================================================

// Address: 0x372600
// Original: _ZN12CEventDamageaSERKS_
// Demangled: CEventDamage::operator=(CEventDamage const&)
CEventDamage *__fastcall CEventDamage::operator=(CEventDamage *a1, const CEventDamage *a2)
{
  CEventDamage::From(a1, a2);
  return a1;
}


// ============================================================

// Address: 0x37260e
// Original: _ZNK12CEventDamage15GetSourceEntityEv
// Demangled: CEventDamage::GetSourceEntity(void)
int __fastcall CEventDamage::GetSourceEntity(CEventDamage *this)
{
  int result; // r0
  int v2; // r1

  result = *((_DWORD *)this + 4);
  if ( !result )
    return 0;
  if ( (*(_BYTE *)(result + 58) & 7) == 2 )
  {
    v2 = *(_DWORD *)(result + 1124);
    if ( !v2 )
      return result;
    return v2;
  }
  return result;
}


// ============================================================

// Address: 0x372634
// Original: _ZNK12CEventDamage15IsCriminalEventEv
// Demangled: CEventDamage::IsCriminalEvent(void)
bool __fastcall CEventDamage::IsCriminalEvent(CEventDamage *this)
{
  int v2; // r0
  char v3; // r1
  int v4; // r4

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
    return 0;
  v3 = *(_BYTE *)(v2 + 58);
  if ( (v3 & 7) == 3 )
  {
    if ( CPed::IsPlayer((CPed *)v2) )
      return 1;
    v2 = *((_DWORD *)this + 4);
    v3 = *(_BYTE *)(v2 + 58);
  }
  if ( (v3 & 7) != 2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 1124);
  return v4 == FindPlayerPed(-1);
}


// ============================================================

// Address: 0x372676
// Original: _ZNK12CEventDamage19ReportCriminalEventEP4CPed
// Demangled: CEventDamage::ReportCriminalEvent(CPed *)
unsigned int __fastcall CEventDamage::ReportCriminalEvent(CEventDamage *this, CPedType **a2)
{
  unsigned int result; // r0
  int v5; // r1
  int v6; // r0

  result = (*(int (__fastcall **)(CEventDamage *))(*(_DWORD *)this + 32))(this);
  if ( result == 1 )
  {
    result = *((_DWORD *)this + 4);
    if ( result )
    {
      CPedType::PoliceDontCareAboutCrimesAgainstPedType(a2[359], v5);
      v6 = *((_DWORD *)this + 6);
      if ( v6 <= 41 || (result = v6 - 49, result <= 1) )
      {
        FindPlayerWanted(-1);
        return CWanted::RegisterCrime();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x372734
// Original: _ZNK12CEventDamage24DoInformVehicleOccupantsEP4CPed
// Demangled: CEventDamage::DoInformVehicleOccupants(CPed *)
bool __fastcall CEventDamage::DoInformVehicleOccupants(CEventDamage *this, CPed *a2)
{
  int v3; // r1
  _BOOL4 result; // r0

  v3 = (*(int (__fastcall **)(CEventDamage *))(*(_DWORD *)this + 44))(this);
  result = 0;
  if ( v3 )
    return *((_DWORD *)this + 6) != 53;
  return result;
}


// ============================================================

// Address: 0x372758
// Original: _ZNK12CEventDamage10AffectsPedEP4CPed
// Demangled: CEventDamage::AffectsPed(CPed *)
bool __fastcall CEventDamage::AffectsPed(CEventDamage *this, CPedIntelligence **a2)
{
  int v4; // r6
  int v5; // r0
  bool v6; // zf
  const CEntity **v7; // r6
  const CEntity *v8; // r0
  const CPed *v9; // r2
  _BOOL4 result; // r0
  int v11; // r0
  int v12; // r1
  bool v13; // zf
  int ActiveTaskByType; // r0
  int v15; // r1
  bool v16; // zf
  int v17; // r0
  int ActiveTask; // r0
  CPedIntelligence *v19; // r1
  int v20; // r2
  float *v21; // r3
  float *v22; // r1
  float v23; // s2
  float v24; // s4
  int CanPhysicalBeDamaged; // r6
  float v26; // [sp+4h] [bp-1Ch] BYREF
  float v27; // [sp+8h] [bp-18h]
  float v28; // [sp+Ch] [bp-14h]

  if ( *((_BYTE *)this + 62) && !*((_BYTE *)this + 63) )
    return 1;
  if ( CPed::IsAlive((CPed *)a2) != 1
    || (CPedIntelligence **)FindPlayerPed(-1) == a2
    && (*(_BYTE *)(*(_DWORD *)(FindPlayerPed(-1) + 1092) + 52) & 0x10) == 0
    || *((_DWORD *)this + 6) == 53 && (*((_BYTE *)a2 + 1162) & 0x10) == 0 )
  {
    return 0;
  }
  if ( (CPedIntelligence **)FindPlayerPed(-1) == a2 )
  {
    v11 = *((_DWORD *)this + 4);
    if ( v11 )
    {
      v12 = *(_BYTE *)(v11 + 58) & 7;
      v13 = v12 == 3;
      if ( v12 == 3 )
        v13 = *(_DWORD *)(v11 + 1436) == 8;
      if ( v13 && *((int *)this + 6) >= 16 )
      {
        ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v11 + 1088) + 4), 1000);
        if ( !ActiveTaskByType || *(CPedIntelligence ***)(ActiveTaskByType + 16) != a2 )
          return 0;
      }
    }
  }
  if ( (CPedIntelligence **)FindPlayerPed(-1) != a2
    || !BYTE2(CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus + 83]) )
  {
    goto LABEL_18;
  }
  v15 = *((_DWORD *)this + 6);
  result = 0;
  v16 = v15 == 18;
  if ( v15 != 18 )
    v16 = v15 == 37;
  if ( !v16 )
  {
LABEL_18:
    if ( (*((_BYTE *)a2 + 70) & 0x40) != 0 )
    {
      v4 = (*(int (__fastcall **)(CEventDamage *))(*(_DWORD *)this + 44))(this);
      if ( v4 != FindPlayerPed(-1) )
      {
        v5 = *((_DWORD *)this + 6);
        v6 = v5 == 51;
        if ( v5 != 51 )
          v6 = v5 == 53;
        if ( !v6 && *((float *)a2 + 337) > 0.0 )
          return 0;
      }
    }
    if ( *((unsigned __int8 *)a2 + 1168) << 31
      && *(_DWORD *)CWeaponInfo::GetWeaponInfo() == 1
      && (unsigned int)(*((_DWORD *)this + 7) - 3) < 2 )
    {
      return 0;
    }
    if ( *((_BYTE *)this + 9) )
    {
      v7 = (const CEntity **)((char *)this + 16);
    }
    else
    {
      v7 = (const CEntity **)((char *)this + 16);
      v17 = *((_DWORD *)this + 4);
      if ( *((_DWORD *)this + 6) == 23 )
      {
        if ( !v17
          || (*(_BYTE *)(v17 + 58) & 7) != 3
          || (*((_BYTE *)this + 33) & 8) == 0
          || !(*((unsigned __int8 *)a2 + 1157) << 31) )
        {
          return 0;
        }
      }
      else if ( !v17 )
      {
LABEL_59:
        CanPhysicalBeDamaged = CPhysical::CanPhysicalBeDamaged();
        result = CanPhysicalBeDamaged != 0;
        if ( *((_DWORD *)this + 6) != 54 )
          return result;
        if ( (*((_BYTE *)a2 + 70) & 0x10) != 0 || a2[64] )
          return 0;
        if ( *((float *)a2 + 337) > 0.0 )
          return (CanPhysicalBeDamaged != 0) & (CPedIntelligence::GetTaskJetPack(a2[272]) == 0);
        return result;
      }
      if ( (*(_BYTE *)(v17 + 58) & 7) == 3 )
      {
        if ( CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v17 + 1088) + 4)) )
        {
          ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)*v7 + 272) + 4));
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 1027 )
          {
            v19 = a2[5];
            v20 = *((_DWORD *)*v7 + 5);
            v21 = (float *)((char *)v19 + 48);
            if ( !v19 )
              v21 = (float *)(a2 + 1);
            v22 = (float *)(v20 + 48);
            v23 = v21[1];
            v24 = v21[2];
            if ( !v20 )
              v22 = (float *)((char *)*v7 + 4);
            v26 = *v22 - *v21;
            v27 = v22[1] - v23;
            v28 = v22[2] - v24;
            CVector::Normalise((CVector *)&v26);
            if ( COERCE_FLOAT(CPedIntelligence::CanSeeEntityWithLights(a2[272], *v7, 0)) <= 0.0
              || (float)((float)((float)(*((float *)a2[5] + 4) * v26) + (float)(*((float *)a2[5] + 5) * v27))
                       + (float)(*((float *)a2[5] + 6) * v28)) < CPedAcquaintanceScanner::ms_fThresholdDotProduct )
            {
              return 0;
            }
          }
        }
      }
    }
    v8 = *v7;
    if ( *v7
      && (*((_BYTE *)v8 + 58) & 7) == 3
      && !CPed::IsPlayer(v8)
      && CPedGroups::AreInSameGroup((CPedGroups *)a2, *v7, v9) == 1
      && *((_DWORD *)this + 6) != 51 )
    {
      return 0;
    }
    goto LABEL_59;
  }
  return result;
}


// ============================================================

// Address: 0x372a68
// Original: _ZNK12CEventDamage15AffectsPedGroupEP9CPedGroup
// Demangled: CEventDamage::AffectsPedGroup(CPedGroup *)
int __fastcall CEventDamage::AffectsPedGroup(CEventDamage *this, CPedGroup *a2)
{
  int v5; // r0
  int ActiveTask; // r0
  CPedGroupMembership *v7; // r9
  int v8; // r6
  int Member; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  float *v13; // r3
  float *v14; // r1
  float v15; // [sp+4h] [bp-24h] BYREF
  float v16; // [sp+8h] [bp-20h]
  float v17; // [sp+Ch] [bp-1Ch]

  if ( *((_DWORD *)this + 6) == 23 )
    return 0;
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
  {
    if ( (*(_BYTE *)(v5 + 58) & 7) == 3 )
    {
      if ( CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v5 + 1088) + 4)) )
      {
        ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4));
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 1027 )
        {
          v7 = (CPedGroup *)((char *)a2 + 8);
          v8 = -1;
          while ( 1 )
          {
            Member = CPedGroupMembership::GetMember(v7, ++v8);
            if ( Member )
            {
              v10 = *((_DWORD *)this + 4);
              v11 = *(_DWORD *)(Member + 20);
              v12 = *(_DWORD *)(v10 + 20);
              v13 = (float *)(v11 + 48);
              if ( !v11 )
                v13 = (float *)(Member + 4);
              v14 = (float *)(v12 + 48);
              if ( !v12 )
                v14 = (float *)(v10 + 4);
              v15 = *v14 - *v13;
              v16 = v14[1] - v13[1];
              v17 = v14[2] - v13[2];
              CVector::Normalise((CVector *)&v15);
              if ( COERCE_FLOAT(
                     CPedIntelligence::CanSeeEntityWithLights(
                       *(CPedIntelligence **)(Member + 1088),
                       *((const CEntity **)this + 4),
                       0)) > 0.0
                && (float)((float)((float)(*(float *)(*(_DWORD *)(Member + 20) + 16) * v15)
                                 + (float)(*(float *)(*(_DWORD *)(Member + 20) + 20) * v16))
                         + (float)(*(float *)(*(_DWORD *)(Member + 20) + 24) * v17)) > CPedAcquaintanceScanner::ms_fThresholdDotProduct )
              {
                break;
              }
            }
            if ( v8 >= 7 )
              return 0;
          }
        }
      }
    }
  }
  return 1;
}


// ============================================================

// Address: 0x372b9c
// Original: _ZNK12CEventDamage17TakesPriorityOverERK6CEvent
// Demangled: CEventDamage::TakesPriorityOver(CEvent const&)
bool __fastcall CEventDamage::TakesPriorityOver(CEventDamage *this, const CEvent *a2)
{
  bool v4; // zf
  bool v5; // zf
  bool v6; // zf
  CPed *v7; // r0
  bool v8; // zf
  int v9; // r6
  int v11; // r5

  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 66 )
  {
    v4 = *((_BYTE *)this + 60) == 0;
    if ( *((_BYTE *)this + 60) )
      v4 = *((_BYTE *)this + 9) == 0;
    if ( !v4 )
      return 1;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 58 )
  {
    v5 = *((_BYTE *)this + 60) == 0;
    if ( *((_BYTE *)this + 60) )
      v5 = *((_BYTE *)this + 9) == 0;
    if ( !v5 )
      return 1;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 8 )
  {
    v6 = *((_BYTE *)this + 60) == 0;
    if ( *((_BYTE *)this + 60) )
      v6 = *((_BYTE *)this + 9) == 0;
    if ( !v6 )
      return 1;
  }
  v7 = (CPed *)*((_DWORD *)this + 4);
  if ( v7
    && (*((_BYTE *)v7 + 58) & 7) == 3
    && CPed::IsPlayer(v7) == 1
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 44))(a2) != *((_DWORD *)this + 4) )
      return 1;
    v8 = *((_BYTE *)this + 60) == 0;
    if ( *((_BYTE *)this + 60) )
      v8 = *((_BYTE *)this + 9) == 0;
    if ( !v8 )
      return 1;
  }
  else if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9 )
  {
    v9 = (*(int (__fastcall **)(CEventDamage *))(*(_DWORD *)this + 44))(this);
    if ( v9 != (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 44))(a2) )
      return 1;
  }
  v11 = (*(int (__fastcall **)(CEventDamage *))(*(_DWORD *)this + 12))(this);
  return v11 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x372c84
// Original: _ZN12CEventDamage16IsSameEventForAIEPS_
// Demangled: CEventDamage::IsSameEventForAI(CEventDamage*)
bool __fastcall CEventDamage::IsSameEventForAI(CEventDamage *this, CEventDamage *a2)
{
  return *((_DWORD *)this + 4) == *((_DWORD *)a2 + 4) && *((_DWORD *)this + 6) == *((_DWORD *)a2 + 6);
}


// ============================================================

// Address: 0x372ca0
// Original: _ZNK12CEventDamage13ProcessDamageEP4CPed
// Demangled: CEventDamage::ProcessDamage(CPed *)
unsigned int __fastcall CEventDamage::ProcessDamage(CEventDamage *this, CPed *a2)
{
  unsigned int result; // r0
  int v5; // r1
  int *v6; // r0

  result = *((_DWORD *)this + 6);
  switch ( result )
  {
    case 0u:
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x2Eu:
      result = *((unsigned __int8 *)this + 61);
      if ( *((_BYTE *)this + 61) )
      {
        v5 = 2;
        goto LABEL_11;
      }
      break;
    case 0x10u:
    case 0x23u:
    case 0x24u:
    case 0x33u:
      result = *((unsigned __int8 *)this + 61);
      if ( *((_BYTE *)this + 61) )
      {
        v6 = (int *)((char *)&dword_610260
                   + 4 * (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 5.0));
        goto LABEL_10;
      }
      break;
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Eu:
    case 0x1Fu:
    case 0x21u:
    case 0x22u:
    case 0x26u:
      result = *((unsigned __int8 *)this + 61);
      if ( *((_BYTE *)this + 61) )
      {
        result = *((_DWORD *)this + 7) - 5;
        if ( result < 5 )
        {
          v6 = &dword_372D50[result];
LABEL_10:
          v5 = *v6;
LABEL_11:
          result = j_CPed::RemoveBodyPart(a2, v5, *((_BYTE *)this + 32));
        }
      }
      break;
    default:
      return result;
  }
  return result;
}


// ============================================================

// Address: 0x372d6c
// Original: _ZNK12CEventDamage23ComputeBodyPartToRemoveERi
// Demangled: CEventDamage::ComputeBodyPartToRemove(int &)
int __fastcall CEventDamage::ComputeBodyPartToRemove(int this, int *a2)
{
  *a2 = 0;
  switch ( *(_DWORD *)(this + 24) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x2E:
      this = *(unsigned __int8 *)(this + 61);
      if ( this )
      {
LABEL_6:
        this = 2;
        goto LABEL_13;
      }
      break;
    case 0x10:
    case 0x23:
    case 0x24:
    case 0x33:
      this = *(unsigned __int8 *)(this + 61);
      if ( this )
      {
        this = dword_610260[(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 5.0)];
LABEL_13:
        *a2 = this;
      }
      break;
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
    case 0x21:
    case 0x22:
    case 0x26:
      if ( *(_BYTE *)(this + 61) )
      {
        this = *(_DWORD *)(this + 28) - 5;
        switch ( this )
        {
          case 0:
            this = 3;
            goto LABEL_13;
          case 1:
            this = 4;
            goto LABEL_13;
          case 2:
            this = 7;
            goto LABEL_13;
          case 3:
            this = 8;
            goto LABEL_13;
          case 4:
            goto LABEL_6;
          default:
            return this;
        }
      }
      break;
    default:
      return this;
  }
  return this;
}


// ============================================================

// Address: 0x372e30
// Original: _ZNK12CEventDamage15ComputeHeadShotERb
// Demangled: CEventDamage::ComputeHeadShot(bool &)
int __fastcall CEventDamage::ComputeHeadShot(int this, bool *a2)
{
  *a2 = 0;
  switch ( *(_DWORD *)(this + 24) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x2E:
      this = *(unsigned __int8 *)(this + 61);
      if ( this )
        goto LABEL_6;
      break;
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
      if ( *(_BYTE *)(this + 61) )
      {
        this = *(_DWORD *)(this + 28);
        if ( this == 9 )
        {
LABEL_6:
          this = 1;
          *a2 = 1;
        }
      }
      break;
    default:
      return this;
  }
  return this;
}


// ============================================================

// Address: 0x372e90
// Original: _ZN12CEventDamage16ComputeDeathAnimEP4CPedb
// Demangled: CEventDamage::ComputeDeathAnim(CPed *,bool)
unsigned int __fastcall CEventDamage::ComputeDeathAnim(CEventDamage *this, CPed *a2, int a3)
{
  int ActiveTask; // r0
  unsigned int result; // r0
  _DWORD *v7; // r8
  int v8; // r0
  int TaskFighting; // r10
  int v10; // r0
  float *v11; // r9
  float *v12; // r1
  int SimplestActiveTask; // r0
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r2
  float v21; // s0
  int v22; // r0
  int v23; // r0
  float v24; // s4
  float v25; // s16
  float v26; // s2
  int v27; // r1
  int v28; // r0
  int v29; // r0
  int v30; // r1
  int v31; // r2
  float *v32; // r1
  float v33; // s4
  float v34; // s2
  float v35; // s6
  float v36; // s6
  float v37; // s4
  int v38; // r0
  int v39; // r0
  int v40; // r1

  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 15;
  *((_DWORD *)this + 11) = 1082130432;
  *((_DWORD *)this + 12) = 1065353216;
  if ( *((unsigned __int8 *)a2 + 1157) << 31
    || a3 == 1
    && CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4))
    && (ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)),
        !(*(int (__fastcall **)(int, CPed *, int, CEventDamage *))(*(_DWORD *)ActiveTask + 28))(ActiveTask, a2, 1, this)) )
  {
    result = 191;
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 6) == 53
    || (v7 = (_DWORD *)((char *)a2 + 1156), *((unsigned __int8 *)a2 + 69) << 31) && !(*(unsigned __int8 *)v7 << 31) )
  {
    result = 140;
LABEL_8:
    *((_DWORD *)this + 10) = result;
    return result;
  }
  v8 = *((_DWORD *)this + 4);
  if ( v8 && (*(_BYTE *)(v8 + 58) & 7) == 3 )
    TaskFighting = CPedIntelligence::GetTaskFighting(*(CPedIntelligence **)(v8 + 1088));
  else
    TaskFighting = 0;
  CPed::GetBonePosition(a2);
  v10 = *((_DWORD *)a2 + 5);
  v11 = (float *)((char *)a2 + 4);
  v12 = (float *)((char *)a2 + 4);
  if ( v10 )
    v12 = (float *)(v10 + 48);
  if ( (float)(v12[2] + -0.2) > 0.0 )
  {
    if ( CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)) )
    {
      SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) == 207
        || (v14 = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)),
            (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 20))(v14) == 205) )
      {
        *((_BYTE *)this + 33) |= 2u;
        result = RpAnimBlendClumpGetFirstAssociation();
        v15 = 36;
        if ( result )
          v15 = 39;
        *((_DWORD *)this + 10) = v15;
        return result;
      }
    }
  }
  v16 = *((unsigned __int8 *)this + 32);
  if ( TaskFighting && !*((_BYTE *)this + 32) )
  {
    v17 = *(char *)(TaskFighting + 36);
    v18 = *(char *)(TaskFighting + 37);
    v19 = v17 - 4;
    if ( v17 < 4 )
      v19 = 0;
    if ( v18 <= 2 && v17 >= 4 )
    {
      v20 = 17 * v19;
      if ( ((16 << v18) & (unsigned __int16)word_9FD4E4[4 * v20]) != 0 )
      {
        v21 = 1.0;
        *((_DWORD *)this + 9) = CTaskSimpleFight::m_aComboData[2 * v20];
        v22 = *(char *)(TaskFighting + 37);
        *((_DWORD *)this + 11) = 1098907648;
        v23 = v22 + 219;
LABEL_54:
        *((_DWORD *)this + 10) = v23;
        goto LABEL_55;
      }
    }
  }
  v21 = 0.0;
  v24 = 1.0;
  v25 = 0.0;
  v26 = 0.0;
  switch ( *((_DWORD *)this + 6) )
  {
    case 0:
    case 1:
    case 3:
    case 9:
    case 0x2E:
      v25 = 0.5;
      goto LABEL_36;
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xA:
      v25 = 1.5;
      goto LABEL_36;
    case 4:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
LABEL_36:
      if ( *((_BYTE *)this + 61) )
      {
        v27 = 19;
        v25 = 0.0;
LABEL_45:
        *((_DWORD *)this + 10) = v27;
      }
      else
      {
        v27 = 25;
        switch ( *((_BYTE *)this + 32) )
        {
          case 0:
            v27 = 24;
            goto LABEL_45;
          case 1:
            goto LABEL_45;
          case 2:
            v27 = 26;
            goto LABEL_45;
          case 3:
            v27 = 27;
            goto LABEL_45;
          default:
            break;
        }
      }
      v28 = *((_DWORD *)this + 4);
      if ( v28 && (*(_BYTE *)(v28 + 58) & 7) == 3 && (v29 = *(_DWORD *)(v28 + 1092)) != 0 )
      {
        if ( (*(_BYTE *)(v29 + 52) & 2) != 0 )
          v21 = v25 * 5.0;
        else
          v21 = v25 * COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
      }
      else
      {
        v21 = v25;
      }
      goto LABEL_55;
    case 0x10:
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x33:
      if ( v16 > 3 )
        goto LABEL_55;
      v23 = v16 + 24;
      goto LABEL_54;
    case 0x11:
    case 0x12:
    case 0x25:
    case 0x29:
    case 0x2A:
      goto LABEL_53;
    case 0x16:
    case 0x17:
    case 0x1C:
    case 0x1D:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x34:
      goto LABEL_52;
    case 0x18:
      goto LABEL_50;
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x26:
      v24 = 2.0;
LABEL_50:
      v26 = v24;
      goto LABEL_52;
    case 0x1E:
    case 0x1F:
      v26 = 0.5;
LABEL_52:
      if ( *((_BYTE *)this + 61) )
      {
LABEL_53:
        v23 = 15;
        goto LABEL_54;
      }
      if ( v26 <= 0.0 )
      {
        v38 = 15;
        goto LABEL_73;
      }
      if ( v16 <= 3 )
      {
        v38 = v16 + 24;
LABEL_73:
        *((_DWORD *)this + 10) = v38;
        v21 = v26;
        goto LABEL_55;
      }
      v21 = v26;
LABEL_55:
      result = (unsigned __int8)byte_79683F;
      if ( byte_79683F )
      {
        result = *((_DWORD *)this + 6);
        if ( result < 2 || result == 46 )
          v21 = v21 * 20.0;
      }
      if ( v21 > 0.0 )
      {
        result = *((_DWORD *)this + 4);
        if ( result )
        {
          v30 = *((_DWORD *)a2 + 5);
          v31 = *(_DWORD *)(result + 20);
          if ( v30 )
            v11 = (float *)(v30 + 48);
          v32 = (float *)(v31 + 48);
          if ( !v31 )
            v32 = (float *)(result + 4);
          v33 = *v32 - *v11;
          v34 = v32[1] - v11[1];
          v35 = (float)(v33 * v33) + (float)(v34 * v34);
          if ( v35 <= 0.0 )
          {
            v37 = 1.0;
          }
          else
          {
            v36 = 1.0 / sqrtf(v35);
            v34 = v34 * v36;
            v37 = v33 * v36;
          }
          *v7 &= 0xFFFFFFFC;
          return CPhysical::ApplyMoveForce(a2, (float)(v21 * -5.0) * v37, (float)(v21 * -5.0) * v34, 1084227584);
        }
      }
      return result;
    case 0x31:
    case 0x32:
      switch ( *((_BYTE *)this + 32) )
      {
        case 0:
          v39 = *((_DWORD *)this + 7);
          if ( v39 == 5 )
            goto LABEL_84;
          v40 = 26;
          goto LABEL_88;
        case 1:
          v23 = 25;
          goto LABEL_54;
        case 2:
          v39 = *((_DWORD *)this + 7);
          if ( v39 == 5 )
          {
LABEL_84:
            v23 = 22;
            goto LABEL_54;
          }
          v40 = 24;
LABEL_88:
          if ( v39 == 6 )
            v40 = 23;
          *((_DWORD *)this + 10) = v40;
          break;
        case 3:
          v23 = 27;
          goto LABEL_54;
        default:
          goto LABEL_55;
      }
      goto LABEL_55;
    case 0x35:
      v23 = 140;
      goto LABEL_54;
    case 0x36:
      v23 = 17;
      goto LABEL_54;
    default:
      goto LABEL_55;
  }
}


// ============================================================

// Address: 0x37327c
// Original: _ZN12CEventDamage17ComputeDamageAnimEP4CPedb
// Demangled: CEventDamage::ComputeDamageAnim(CPed *,bool)
int __fastcall CEventDamage::ComputeDamageAnim(CEventDamage *this, CPed *a2, int a3)
{
  int v5; // r1
  bool v6; // zf
  float v7; // s18
  unsigned int v8; // r6
  unsigned int v9; // r1
  _DWORD *v10; // r11
  int v11; // r4
  int v12; // r1
  int TaskFighting; // r10
  int TaskUseGun; // r5
  int WeaponInfo; // r0
  unsigned int v16; // r1
  int result; // r0
  int v18; // r0
  int v19; // r4
  int SimplestActiveTask; // r6
  int v21; // r0
  float *v22; // r1
  int IsPlayer; // r0
  int FirstAssociation; // r0
  int v25; // r1
  float v26; // s16
  int v27; // r6
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r1
  bool v32; // zf
  char v33; // r0
  int v34; // r1
  int v35; // r11
  int v36; // r2
  bool v37; // cc
  int v38; // r2
  int v39; // r1
  int v40; // r2
  int v41; // r2
  int v42; // r2
  int v43; // r3
  int v44; // r3
  bool v45; // zf
  int v46; // r3
  int v47; // r1
  int v48; // r0
  int *v49; // r2
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int ActiveTask; // r0
  char v54; // r1
  int v55; // r0
  int v56; // r1
  float *v57; // r3
  int v58; // r2
  float *v59; // r1
  float v60; // s2
  float v61; // s0
  float v62; // s4
  float v63; // s4
  float v64; // s2
  int CurrentEvent; // r0
  int v66; // r6
  int v67; // r6
  int v68; // r1
  unsigned int v69; // r0
  int v70; // r0
  int v71; // r0
  int v72; // r1
  int v73; // r0
  int v74; // r0
  int v75; // r1
  int v76; // r0
  int v77; // r0
  int v78; // r1
  int v79; // r0
  int v80; // r0
  int v81; // r1
  int v82; // r0
  int v83; // [sp+4h] [bp-54h]

  v5 = *((_DWORD *)a2 + 289);
  v6 = (v5 & 0x100) == 0;
  if ( (v5 & 0x100) != 0 )
    v6 = *((_DWORD *)a2 + 356) == 0;
  if ( !v6 )
  {
    WeaponInfo = CWeaponInfo::GetWeaponInfo();
    if ( !*(_DWORD *)WeaponInfo && (v16 = *((_DWORD *)this + 6), v16 >= 2) && v16 != 46
      || *(__int16 *)(WeaponInfo + 34) >= 51 )
    {
      *((_BYTE *)this + 33) |= 2u;
    }
    result = 191;
    *((_DWORD *)this + 10) = 191;
    return result;
  }
  v7 = 1.0;
  v8 = 0;
  v9 = *((_DWORD *)this + 6) - 24;
  v10 = (_DWORD *)((char *)a2 + 1156);
  v11 = 0;
  if ( v9 <= 9 )
    v8 = (0x20Fu >> v9) & 1;
  v12 = *((_DWORD *)this + 4);
  if ( (*((_DWORD *)a2 + 292) & 4) == 0 )
    v11 = 1;
  TaskFighting = 0;
  v83 = *((_DWORD *)a2 + 276);
  if ( v12 )
  {
    if ( (*(_BYTE *)(v12 + 58) & 7) == 3 )
    {
      TaskFighting = CPedIntelligence::GetTaskFighting(*(CPedIntelligence **)(v12 + 1088));
      if ( TaskFighting )
        TaskUseGun = 0;
      else
        TaskUseGun = CPedIntelligence::GetTaskUseGun(*(CPedIntelligence **)(*((_DWORD *)this + 4) + 1088));
      v18 = *(_DWORD *)(*((_DWORD *)this + 4) + 1092);
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 52) & 2) != 0 )
          v7 = 2.0;
        else
          v7 = (float)(COERCE_FLOAT(CStats::GetFatAndMuscleModifier()) * 0.5) + 0.5;
      }
    }
    else
    {
      TaskFighting = 0;
      TaskUseGun = 0;
    }
  }
  else
  {
    TaskUseGun = 0;
  }
  v19 = v11 & v8;
  CPed::GetBonePosition(a2);
  SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v21 = *((_DWORD *)a2 + 5);
  v22 = (float *)((char *)a2 + 4);
  if ( v21 )
    v22 = (float *)(v21 + 48);
  if ( v22[2] <= 0.0
    || (IsPlayer = CPed::IsPlayer(a2), !SimplestActiveTask)
    || IsPlayer
    || (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) != 207
    && (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) != 205 )
  {
    v26 = 0.0;
    if ( *((_DWORD *)this + 7) != 3 )
      goto LABEL_65;
    if ( TaskUseGun && *(_BYTE *)(TaskUseGun + 16) == 5 )
    {
      v27 = *((unsigned __int8 *)this + 32);
      if ( *((_BYTE *)this + 32) )
        v27 = 1;
    }
    else
    {
      if ( v19 != 1 )
      {
        v28 = 0;
        goto LABEL_46;
      }
      v27 = 1;
    }
    v28 = (CPed::IsPlayer(a2) ^ 1) & v27;
LABEL_46:
    if ( !(*v10 & 0x4000000 | *((_DWORD *)a2 + 292) & 4) )
    {
      v31 = *((_DWORD *)a2 + 64);
      v32 = v31 == 0;
      if ( !v31 )
        v32 = v28 == 1;
      if ( v32 && *((_DWORD *)this + 4) )
      {
        v26 = 5.0;
        goto LABEL_64;
      }
    }
    v29 = *((_DWORD *)this + 6);
    if ( v29 > 8 )
    {
      if ( v29 == 54 )
      {
        v30 = *((_DWORD *)this + 4);
        if ( v30 )
        {
          if ( (*(_BYTE *)(v30 + 58) & 7) == 4 )
            goto LABEL_64;
        }
      }
    }
    else if ( *((float *)a2 + 337) < 15.0 )
    {
      v26 = v7 * 5.0;
      goto LABEL_64;
    }
    if ( !TaskFighting || *(_BYTE *)(TaskFighting + 37) != 4 || CPed::IsPlayer(a2) || *((int *)a2 + 276) < 5 )
      goto LABEL_65;
LABEL_64:
    *((_BYTE *)this + 33) |= 2u;
    goto LABEL_65;
  }
  *((_BYTE *)this + 33) |= 2u;
  FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
  v25 = 36;
  if ( FirstAssociation )
    v25 = 39;
  v26 = 0.0;
  *((_DWORD *)this + 10) = v25;
LABEL_65:
  v33 = *((_BYTE *)this + 33);
  v34 = *((unsigned __int8 *)this + 32);
  if ( (v33 & 2) != 0 )
  {
    v35 = 0;
    if ( !TaskFighting || *((_BYTE *)this + 32) )
      goto LABEL_111;
    v36 = *(char *)(TaskFighting + 36);
    v37 = v36 < 4;
    v38 = v36 - 4;
    v39 = *(char *)(TaskFighting + 37);
    if ( v37 )
      v38 = 0;
    v40 = (unsigned __int16)word_9FD4E4[68 * v38];
    if ( ((16 << v39) & v40) != 0 )
    {
      v10 = (_DWORD *)((char *)a2 + 1156);
      v34 = 0;
    }
    else if ( v39 > 2 || (v10 = (_DWORD *)((char *)a2 + 1156), v46 = 4096 << v39, v34 = 0, (v46 & v40) == 0) )
    {
      v35 = 0;
      goto LABEL_111;
    }
  }
  *((_BYTE *)this + 33) = v33 & 0xFD;
  if ( TaskFighting )
  {
    if ( !v34 )
    {
      v41 = *(char *)(TaskFighting + 36);
      if ( v41 >= 4 && *(char *)(TaskFighting + 37) <= 2 )
      {
        *((_DWORD *)this + 9) = CTaskSimpleFight::m_aComboData[34 * v41 - 136];
        v42 = *(char *)(TaskFighting + 37);
        *((_DWORD *)this + 11) = 1098907648;
        *((_DWORD *)this + 10) = v42 + 219;
        v43 = *(char *)(TaskFighting + 36);
        v37 = v43 < 4;
        v44 = v43 - 4;
        if ( v37 )
          v44 = 0;
        if ( ((16 << *(_BYTE *)(TaskFighting + 37)) & (unsigned __int16)word_9FD4E4[68 * v44]) != 0 )
          *((_BYTE *)this + 33) = v33 | 2;
        goto LABEL_110;
      }
    }
  }
  if ( TaskUseGun )
  {
    v45 = v34 == 0;
    if ( !v34 )
      v45 = *(_BYTE *)(TaskUseGun + 16) == 5;
    if ( v45 )
    {
      *((_DWORD *)this + 9) = CTaskSimpleFight::m_aComboData[0];
      *((_DWORD *)this + 10) = 220;
      *((_DWORD *)this + 11) = 1098907648;
      goto LABEL_110;
    }
  }
  if ( (unsigned int)(*((_DWORD *)this + 6) - 22) > 0xB || v19 == 1 && CPed::IsPlayer(a2) != 1 )
    goto LABEL_104;
  if ( CPed::IsPlayer(a2) != 1 )
  {
    if ( v83 > 1 )
      goto LABEL_98;
LABEL_97:
    if ( *v10 & 0x4000000 | v10[3] & 4 )
      goto LABEL_98;
LABEL_104:
    if ( CPed::IsPlayer(a2) == 1 )
    {
      v50 = *((_DWORD *)this + 6);
      if ( v50 < 22 )
        goto LABEL_128;
      v51 = *((_DWORD *)a2 + 273);
      if ( (unsigned int)CTimer::m_snTimeInMilliseconds <= *(_DWORD *)(v51 + 40) || *((_DWORD *)a2 + 275) == 50 )
      {
LABEL_108:
        v52 = 191;
LABEL_109:
        *((_DWORD *)this + 10) = v52;
        goto LABEL_110;
      }
      *(_DWORD *)(v51 + 40) = (unsigned int)(float)((float)(unsigned int)CTimer::m_snTimeInMilliseconds + 2500.0);
    }
    v50 = *((_DWORD *)this + 6);
LABEL_128:
    if ( (unsigned int)(v50 - 22) <= 0x19 )
    {
      CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
      v66 = CurrentEvent;
      if ( CurrentEvent )
      {
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) == 9 )
          v67 = *(_DWORD *)(v66 + 40);
        else
          v67 = -1;
      }
      else
      {
        v67 = -1;
      }
      switch ( *((_DWORD *)this + 7) )
      {
        case 3:
        case 4:
          v69 = *((char *)this + 32);
          if ( v69 < 4 )
          {
            v70 = dword_373A38[v69];
            goto LABEL_178;
          }
          if ( *((_DWORD *)this + 10) != v67 )
            goto LABEL_110;
          do
          {
            v70 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4.0) + 183;
LABEL_178:
            *((_DWORD *)this + 10) = v70;
          }
          while ( v70 == v67 );
          break;
        case 5:
          v71 = *((unsigned __int8 *)this + 32);
          v72 = 172;
          if ( v71 == 1 )
            v72 = 173;
          if ( v71 == 2 )
            v72 = 171;
          *((_DWORD *)this + 10) = v72;
          if ( v72 != v67 )
            goto LABEL_110;
          v35 = 1;
          do
          {
            v73 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) + 171;
            *((_DWORD *)this + 10) = v73;
          }
          while ( v73 == v67 );
          goto LABEL_111;
        case 6:
          v74 = *((unsigned __int8 *)this + 32);
          v75 = 175;
          if ( v74 == 3 )
            v75 = 176;
          if ( v74 == 2 )
            v75 = 174;
          *((_DWORD *)this + 10) = v75;
          if ( v75 != v67 )
            goto LABEL_110;
          v35 = 1;
          do
          {
            v76 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) + 174;
            *((_DWORD *)this + 10) = v76;
          }
          while ( v76 == v67 );
          goto LABEL_111;
        case 7:
          v80 = *((unsigned __int8 *)this + 32);
          v81 = 178;
          if ( v80 == 1 )
            v81 = 179;
          if ( v80 == 2 )
            v81 = 177;
          *((_DWORD *)this + 10) = v81;
          if ( v81 != v67 )
            goto LABEL_110;
          v35 = 1;
          do
          {
            v82 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) + 177;
            *((_DWORD *)this + 10) = v82;
          }
          while ( v82 == v67 );
          goto LABEL_111;
        case 8:
          v77 = *((unsigned __int8 *)this + 32);
          v78 = 181;
          if ( v77 == 3 )
            v78 = 182;
          if ( v77 == 2 )
            v78 = 180;
          *((_DWORD *)this + 10) = v78;
          if ( v78 != v67 )
            goto LABEL_110;
          v35 = 1;
          do
          {
            v79 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3.0) + 180;
            *((_DWORD *)this + 10) = v79;
          }
          while ( v79 == v67 );
          goto LABEL_111;
        default:
          v52 = *((unsigned __int8 *)this + 32) + 32;
          goto LABEL_109;
      }
      goto LABEL_110;
    }
    v68 = *((unsigned __int8 *)this + 32);
    *((_DWORD *)this + 10) = v68 + 32;
    if ( v68 == 2 )
    {
      if ( v50 > 15 )
        goto LABEL_110;
      v52 = 40;
    }
    else
    {
      if ( v68 || (float)(*((float *)this + 13) + *((float *)this + 14)) <= 20.0 )
        goto LABEL_110;
      v52 = 37;
    }
    goto LABEL_109;
  }
  if ( v83 <= 1 && v19 == 1 )
    goto LABEL_97;
LABEL_98:
  v47 = *((unsigned __int8 *)this + 32) + 28;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = v47;
  *((_DWORD *)this + 11) = 1090519040;
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v48 = *((_DWORD *)a2 + 273);
    if ( (unsigned int)CTimer::m_snTimeInMilliseconds > *(_DWORD *)(v48 + 40) && *((_DWORD *)a2 + 275) != 50 )
    {
      v49 = dword_373A50;
      if ( *((_DWORD *)this + 6) == 31 )
        v49 = &dword_373A50[1];
      *(_DWORD *)(v48 + 40) = (unsigned int)(float)(*(float *)v49 + (float)(unsigned int)CTimer::m_snTimeInMilliseconds);
      goto LABEL_110;
    }
    goto LABEL_108;
  }
LABEL_110:
  v35 = 1;
LABEL_111:
  if ( a3 == 1 )
  {
    if ( CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4)) )
    {
      ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
      if ( !(*(int (__fastcall **)(int, CPed *, int, CEventDamage *))(*(_DWORD *)ActiveTask + 28))(
              ActiveTask,
              a2,
              1,
              this) )
      {
        v54 = *((_BYTE *)this + 33);
        *((_DWORD *)this + 9) = 0;
        *((_DWORD *)this + 10) = 192;
        *((_BYTE *)this + 33) = v54 & 0xFD;
      }
    }
  }
  result = ((*((_BYTE *)this + 33) & 2) == 0) | v35;
  if ( !result )
  {
    result = *((unsigned __int8 *)this + 32) + 24;
    *((_DWORD *)this + 10) = result;
    if ( v26 > 0.0 )
    {
      v55 = *((_DWORD *)this + 4);
      v56 = *((_DWORD *)a2 + 5);
      v57 = (float *)((char *)a2 + 4);
      v58 = *(_DWORD *)(v55 + 20);
      if ( v56 )
        v57 = (float *)(v56 + 48);
      v59 = (float *)(v58 + 48);
      if ( !v58 )
        v59 = (float *)(v55 + 4);
      v60 = *v59 - *v57;
      v61 = v59[1] - v57[1];
      v62 = (float)(v60 * v60) + (float)(v61 * v61);
      if ( v62 <= 0.0 )
      {
        v64 = 1.0;
      }
      else
      {
        v63 = 1.0 / sqrtf(v62);
        v61 = v61 * v63;
        v64 = v60 * v63;
      }
      *((_DWORD *)a2 + 289) &= 0xFFFFFFFC;
      return CPhysical::ApplyMoveForce(a2, -(float)(v26 * v64), -(float)(v26 * v61), 1084227584);
    }
  }
  return result;
}


// ============================================================

// Address: 0x379924
// Original: _ZNK12CEventDamage12GetEventTypeEv
// Demangled: CEventDamage::GetEventType(void)
int __fastcall CEventDamage::GetEventType(CEventDamage *this)
{
  return 9;
}


// ============================================================

// Address: 0x379928
// Original: _ZNK12CEventDamage16GetEventPriorityEv
// Demangled: CEventDamage::GetEventPriority(void)
int __fastcall CEventDamage::GetEventPriority(CEventDamage *this)
{
  return 65;
}


// ============================================================

// Address: 0x37992c
// Original: _ZNK12CEventDamage11GetLifeTimeEv
// Demangled: CEventDamage::GetLifeTime(void)
int __fastcall CEventDamage::GetLifeTime(CEventDamage *this)
{
  return 0;
}


// ============================================================

// Address: 0x379930
// Original: _ZNK12CEventDamage18GetLocalSoundLevelEv
// Demangled: CEventDamage::GetLocalSoundLevel(void)
int __fastcall CEventDamage::GetLocalSoundLevel(CEventDamage *this)
{
  return 1113325568;
}


// ============================================================

// Address: 0x379938
// Original: _ZNK12CEventDamage27CanBeInterruptedBySameEventEv
// Demangled: CEventDamage::CanBeInterruptedBySameEvent(void)
int __fastcall CEventDamage::CanBeInterruptedBySameEvent(CEventDamage *this)
{
  return 1;
}


// ============================================================
