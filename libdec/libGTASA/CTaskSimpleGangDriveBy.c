
// Address: 0x18a618
// Original: j__ZN22CTaskSimpleGangDriveBy25LineOfSightClearForAttackEP4CPedR7CVector
// Demangled: CTaskSimpleGangDriveBy::LineOfSightClearForAttack(CPed *,CVector &)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::LineOfSightClearForAttack(CTaskSimpleGangDriveBy *this, CPed *a2, CVector *a3)
{
  return _ZN22CTaskSimpleGangDriveBy25LineOfSightClearForAttackEP4CPedR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x18ce04
// Original: j__ZN22CTaskSimpleGangDriveBy13LookForTargetEP4CPed
// Demangled: CTaskSimpleGangDriveBy::LookForTarget(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::LookForTarget(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  return _ZN22CTaskSimpleGangDriveBy13LookForTargetEP4CPed(this, a2);
}


// ============================================================

// Address: 0x190090
// Original: j__ZN22CTaskSimpleGangDriveByD2Ev
// Demangled: CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy()
// attributes: thunk
void __fastcall CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy(CTaskSimpleGangDriveBy *this)
{
  _ZN22CTaskSimpleGangDriveByD2Ev(this);
}


// ============================================================

// Address: 0x19417c
// Original: j__ZN22CTaskSimpleGangDriveBy12PlayerTargetEP4CPed
// Demangled: CTaskSimpleGangDriveBy::PlayerTarget(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::PlayerTarget(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  return _ZN22CTaskSimpleGangDriveBy12PlayerTargetEP4CPed(this, a2);
}


// ============================================================

// Address: 0x195f74
// Original: j__ZN22CTaskSimpleGangDriveByC2EP7CEntityPK7CVectorfaab
// Demangled: CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(CEntity *,CVector const*,float,signed char,signed char,bool)
// attributes: thunk
void __fastcall CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(
        CTaskSimpleGangDriveBy *this,
        CEntity *a2,
        const CVector *a3,
        float a4,
        signed __int8 a5,
        signed __int8 a6,
        bool a7)
{
  _ZN22CTaskSimpleGangDriveByC2EP7CEntityPK7CVectorfaab(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x198eb8
// Original: j__ZN22CTaskSimpleGangDriveBy7FireGunEP4CPed
// Demangled: CTaskSimpleGangDriveBy::FireGun(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::FireGun(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  return _ZN22CTaskSimpleGangDriveBy7FireGunEP4CPed(this, a2);
}


// ============================================================

// Address: 0x199ecc
// Original: j__ZN22CTaskSimpleGangDriveBy6AimGunEP4CPed
// Demangled: CTaskSimpleGangDriveBy::AimGun(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::AimGun(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  return _ZN22CTaskSimpleGangDriveBy6AimGunEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19b658
// Original: j__ZN22CTaskSimpleGangDriveBy10ManageAnimEP4CPed
// Demangled: CTaskSimpleGangDriveBy::ManageAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::ManageAnim(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  return _ZN22CTaskSimpleGangDriveBy10ManageAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19b998
// Original: j__ZN22CTaskSimpleGangDriveBy10CreateTaskEv
// Demangled: CTaskSimpleGangDriveBy::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleGangDriveBy::CreateTask(CTaskSimpleGangDriveBy *this)
{
  return _ZN22CTaskSimpleGangDriveBy10CreateTaskEv(this);
}


// ============================================================

// Address: 0x4968c0
// Original: _ZN22CTaskSimpleGangDriveBy10CreateTaskEv
// Demangled: CTaskSimpleGangDriveBy::CreateTask(void)
void __fastcall CTaskSimpleGangDriveBy::CreateTask(CTaskSimpleGangDriveBy *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int Vehicle; // r0
  char v7; // r4
  CEntity *v8; // r4
  char v9; // r5
  int v10; // r2
  char v11; // r5
  int v12; // r2
  char v13; // r5
  int v14; // r2
  char v15; // r5
  int v16; // r2
  char v17; // r5
  unsigned int v18; // r1
  CTaskSimpleGangDriveBy *v19; // r0
  signed __int8 v20; // [sp+Eh] [bp-2Ah] BYREF
  signed __int8 v21; // [sp+Fh] [bp-29h] BYREF
  float v22; // [sp+10h] [bp-28h] BYREF
  CPools *v23[3]; // [sp+14h] [bp-24h] BYREF
  int v24; // [sp+20h] [bp-18h] BYREF
  bool v25[18]; // [sp+26h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v24, byte_4, a3);
  if ( v24 == 2 )
  {
    v7 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, v4);
      UseDataFence = v7;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, byte_4, v4);
    if ( v23[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v23[0], (int)v23[0] + 1);
      goto LABEL_13;
    }
  }
  else if ( v24 == 3 )
  {
    v5 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, v4);
      UseDataFence = v5;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, byte_4, v4);
    if ( v23[0] != (CPools *)-1 )
    {
      Vehicle = CPools::GetPed(v23[0], (int)v23[0] + 1);
LABEL_13:
      v8 = (CEntity *)Vehicle;
      goto LABEL_15;
    }
  }
  v8 = 0;
LABEL_15:
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, (char *)&stderr + 2, v4);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v23, &byte_9[3], v4);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v22, byte_4, v10);
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, v12);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 1, v12);
  v15 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, v14);
    UseDataFence = v15;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 1, v14);
  v17 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 2, v16);
    UseDataFence = v17;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v25, (char *)&stderr + 1, v16);
  v19 = (CTaskSimpleGangDriveBy *)CTask::operator new((CTask *)&dword_44, v18);
  CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v19, v8, (const CVector *)v23, v22, v21, v20, v25[0]);
}


// ============================================================

// Address: 0x4e434c
// Original: _ZN22CTaskSimpleGangDriveByC2EP7CEntityPK7CVectorfaab
// Demangled: CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(CEntity *,CVector const*,float,signed char,signed char,bool)
void __fastcall CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(
        CTaskSimpleGangDriveBy *this,
        CEntity *a2,
        const CVector *a3,
        float a4,
        signed __int8 a5,
        signed __int8 a6,
        bool a7)
{
  __int64 v11; // d16

  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 4) = 0;
  *((_BYTE *)this + 10) = a7;
  *(_DWORD *)((char *)this + 11) = 0;
  *((_BYTE *)this + 18) = a6;
  *((_BYTE *)this + 19) = a5;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 6) = 0;
  *((float *)this + 8) = a4;
  *((_DWORD *)this + 9) = 191;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_BYTE *)this + 17) = -1;
  *(_WORD *)((char *)this + 15) = 1;
  *((_BYTE *)this + 20) = -1;
  *((_WORD *)this + 11) = -1;
  *((_BYTE *)this + 28) = 1;
  *(_DWORD *)this = &off_669940;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 13);
  if ( a3 )
  {
    v11 = *(_QWORD *)a3;
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 2);
    *((_QWORD *)this + 7) = v11;
  }
}


// ============================================================

// Address: 0x4e43e8
// Original: _ZN22CTaskSimpleGangDriveByD2Ev
// Demangled: CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy()
void __fastcall CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy(CTaskSimpleGangDriveBy *this)
{
  int v2; // r1
  CAnimBlendAssociation *v3; // r0
  CEntity *v4; // r0

  v2 = *((unsigned __int8 *)this + 9);
  *(_DWORD *)this = &off_669940;
  if ( v2 )
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * *((_DWORD *)this + 10))
                      - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
  v3 = (CAnimBlendAssociation *)*((_DWORD *)this + 11);
  if ( v3 )
    CAnimBlendAssociation::SetDeleteCallback(
      v3,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v4 = (CEntity *)*((_DWORD *)this + 13);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 13);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4e4458
// Original: _ZN22CTaskSimpleGangDriveByD0Ev
// Demangled: CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy()
void __fastcall CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy(CTaskSimpleGangDriveBy *this)
{
  int v2; // r1
  CAnimBlendAssociation *v3; // r0
  CEntity *v4; // r0
  void *v5; // r0

  v2 = *((unsigned __int8 *)this + 9);
  *(_DWORD *)this = &off_669940;
  if ( v2 )
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((*(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * *((_DWORD *)this + 10))
                      - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
  v3 = (CAnimBlendAssociation *)*((_DWORD *)this + 11);
  if ( v3 )
    CAnimBlendAssociation::SetDeleteCallback(
      v3,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v4 = (CEntity *)*((_DWORD *)this + 13);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 13);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4e44cc
// Original: _ZN22CTaskSimpleGangDriveBy13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGangDriveBy::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGangDriveBy::MakeAbortable(CTaskSimpleGangDriveBy *this, CPed *a2, int a3, const CEvent *a4)
{
  bool v8; // zf
  int v9; // r0
  int result; // r0
  __int16 v11; // r1
  int v12; // r0
  int v13; // r0
  float v14; // s0
  bool v15; // cc

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    *((_BYTE *)this + 15) = 6;
    return 0;
  }
  if ( a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v8 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v8 = *((_BYTE *)a4 + 9) == 0;
    if ( v8 )
      return 0;
  }
  *((_BYTE *)this + 15) = 7;
  if ( CTaskSimpleGangDriveBy::ManageAnim(this, a2) == 1 )
  {
    v9 = *((_DWORD *)this + 11);
    *((_BYTE *)this + 16) = *((_BYTE *)this + 15);
    if ( a3 == 2 )
    {
      *(_DWORD *)(v9 + 28) = -998637568;
    }
    else
    {
      v11 = *(_WORD *)(v9 + 46);
      if ( (v11 & 1) == 0 )
        *(_WORD *)(v9 + 46) = v11 | 1;
    }
  }
  v12 = *((_DWORD *)a2 + 273);
  if ( v12 )
    *(_WORD *)(v12 + 52) |= 8u;
  if ( CPed::IsPlayer(a2) == 1 )
    *(_BYTE *)(CPlayerPed::GetPlayerInfoForThisPlayerPed(a2) + 339) = 1;
  v13 = *((_DWORD *)this + 11);
  if ( v13 )
  {
    if ( !(*(unsigned __int8 *)(v13 + 46) << 31) )
    {
      v14 = *(float *)(v13 + 28);
      v15 = v14 <= 0.0;
      if ( v14 > 0.0 )
        goto LABEL_24;
      if ( v14 >= 0.0 )
        v15 = *(float *)(v13 + 24) <= 0.0;
      if ( !v15 )
      {
LABEL_24:
        *(_DWORD *)(v13 + 28) = -1056964608;
        v13 = *((_DWORD *)this + 11);
      }
    }
    CAnimBlendAssociation::SetDeleteCallback(
      (CAnimBlendAssociation *)v13,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
    *((_DWORD *)this + 11) = 0;
  }
  result = 1;
  *((_BYTE *)this + 8) = 1;
  return result;
}


// ============================================================

// Address: 0x4e45b4
// Original: _ZN22CTaskSimpleGangDriveBy10ManageAnimEP4CPed
// Demangled: CTaskSimpleGangDriveBy::ManageAnim(CPed *)
bool __fastcall CTaskSimpleGangDriveBy::ManageAnim(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  int AnimationBlock; // r0
  CAnimManager *AnimBlockName; // r0
  const char *v6; // r1
  int v7; // r2
  int v8; // r0
  unsigned int v9; // r2
  __int16 *v10; // r0
  int v12; // r6
  CAnimBlendAssociation *v13; // r0
  int v14; // r8
  int v15; // r0

  AnimationBlock = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * *((_DWORD *)this + 10));
  if ( !AnimationBlock )
  {
    AnimBlockName = (CAnimManager *)CAnimManager::GetAnimBlockName();
    AnimationBlock = CAnimManager::GetAnimationBlock(AnimBlockName, v6);
  }
  v7 = *(unsigned __int8 *)(AnimationBlock + 16);
  v8 = (AnimationBlock - (int)CAnimManager::ms_aAnimBlocks) >> 5;
  if ( v7 != 1 )
  {
    CStreaming::RequestModel((CStreaming *)(v8 + 25575), 8, v7);
    return 0;
  }
  if ( !*((_BYTE *)this + 9) )
  {
    CAnimManager::AddAnimBlockRef((CAnimManager *)v8, *((unsigned __int8 *)this + 9));
    *((_BYTE *)this + 9) = 1;
  }
  v9 = *((_DWORD *)this + 9);
  v10 = (__int16 *)*((_DWORD *)this + 11);
  if ( v9 == 191 )
  {
    if ( !v10 )
      return 0;
  }
  else if ( !v10 )
  {
    if ( *((__int16 *)this + 11) > 0 || !*((_BYTE *)this + 12) )
      return 0;
    v12 = 0;
    goto LABEL_19;
  }
  if ( v9 == v10[22] || (unsigned __int8)(*((_BYTE *)this + 15) - 1) > 2u || *((char *)this + 16) > 3 )
    goto LABEL_27;
  CAnimBlendAssociation::SetDeleteCallback(
    (CAnimBlendAssociation *)v10,
    (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
    0);
  v12 = 1;
  *(_WORD *)(*((_DWORD *)this + 11) + 46) &= ~1u;
  v9 = *((_DWORD *)this + 9);
LABEL_19:
  v13 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)this + 10), v9);
  *((_DWORD *)this + 11) = v13;
  CAnimBlendAssociation::SetDeleteCallback(
    v13,
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleGangDriveBy::FinishAnimGangDriveByCB,
    this);
  if ( *((_BYTE *)this + 15) == 3 && *((char *)this + 17) <= 1 )
  {
    v14 = *(__int16 *)(*((_DWORD *)this + 12) + 32);
    *((_BYTE *)this + 17) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(v14 - 2)) + 2;
  }
  if ( v12 == 1 )
  {
    CAnimBlendAssociation::SetCurrentTime(
      *((CAnimBlendAssociation **)this + 11),
      *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START);
    *(_WORD *)(*((_DWORD *)this + 11) + 46) &= ~1u;
    *(_WORD *)((char *)this + 15) = 256;
    if ( !CPed::IsPlayer(a2) )
      *((_WORD *)this + 11) = 100;
  }
  else
  {
    *((_BYTE *)this + 16) = *((_BYTE *)this + 15);
    *((_BYTE *)this + 15) = 0;
  }
LABEL_27:
  v15 = *((_DWORD *)this + 11);
  return v15 && *(float *)(v15 + 24) > 0.9 && *(float *)(v15 + 28) >= 0.0;
}


// ============================================================

// Address: 0x4e4754
// Original: _ZN22CTaskSimpleGangDriveBy10ProcessPedEP4CPed
// Demangled: CTaskSimpleGangDriveBy::ProcessPed(CPed *)
int __fastcall CTaskSimpleGangDriveBy::ProcessPed(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  _DWORD *WeaponInfo; // r0
  bool v5; // zf
  CVehicle *v6; // r0
  int v7; // r6
  int v9; // r6
  bool v10; // zf
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  char v15; // r0
  unsigned __int8 v16; // r1
  int IsPlayer; // r0
  bool v18; // zf
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  float v23; // s0
  float v24; // s2
  float v25; // r1
  float v26; // s16
  unsigned __int16 v27; // r0
  char v28; // r1
  int v29; // r0
  float v30; // s0
  int v31; // r1
  int v32; // r0
  int v33; // r1
  char v34; // r1
  int v35; // r0
  int v36; // r0
  __int16 v37; // r0
  __int16 v38; // r5
  int v39; // r0
  int v40; // r6
  CPad *PadFromPlayer; // r0
  int v42; // r0
  bool v43; // zf
  float v44; // s0

  CPed::GetWeaponSkill(a2);
  WeaponInfo = (_DWORD *)CWeaponInfo::GetWeaponInfo();
  v5 = WeaponInfo == 0;
  if ( WeaponInfo )
    v5 = *WeaponInfo == 1;
  if ( !v5 )
    return 1;
  v6 = (CVehicle *)*((_DWORD *)a2 + 356);
  if ( v6 )
  {
    if ( CVehicle::CanPedLeanOut(v6, a2) != 1 )
      return 1;
  }
  if ( *((_BYTE *)this + 8) )
    return 1;
  if ( !*((_DWORD *)this + 6) )
  {
    v9 = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 6) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) + v9;
  }
  if ( !*((_DWORD *)this + 12) )
  {
    CPed::GetWeaponSkill(a2);
    *((_DWORD *)this + 12) = CWeaponInfo::GetWeaponInfo();
  }
  v10 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v10 = *((_DWORD *)a2 + 356) == 0;
  if ( v10 || *((float *)a2 + 337) < 1.0 )
  {
    v7 = 1;
    (*(void (__fastcall **)(CTaskSimpleGangDriveBy *, CPed *, int, _DWORD))(*(_DWORD *)this + 28))(this, a2, 1, 0);
    return v7;
  }
  if ( !CPed::IsPlayer(a2) )
    *((_DWORD *)a2 + 292) |= 0x100000u;
  if ( !*((_DWORD *)this + 10) )
  {
    v11 = *((_DWORD *)a2 + 356);
    v12 = *(_DWORD *)(v11 + 1444);
    if ( v12 == 2 )
    {
      *((_BYTE *)this + 10) = 0;
      v13 = 75;
LABEL_38:
      *((_DWORD *)this + 10) = v13;
LABEL_39:
      IsPlayer = CPed::IsPlayer(a2);
      v18 = IsPlayer == 0;
      if ( !IsPlayer )
        v18 = *((_DWORD *)a2 + 320) == 0;
      if ( v18 )
      {
        v19 = CWeaponInfo::GetWeaponInfo();
        CPed::AddWeaponModel(a2, *(_DWORD *)(v19 + 12));
      }
      goto LABEL_44;
    }
    if ( *(_DWORD *)(v11 + 1440) == 9 )
    {
      v14 = 73;
      if ( *(_DWORD *)(v11 + 1620) == 2 && *(CPed **)(v11 + 1124) == a2 )
        v14 = 74;
      *((_BYTE *)this + 10) = 0;
      *((_DWORD *)this + 10) = v14;
      goto LABEL_39;
    }
    if ( !v12 )
    {
      if ( *(CPed **)(v11 + 1128) == a2 )
      {
        v15 = 1;
        v16 = 8;
        goto LABEL_36;
      }
      if ( *(CPed **)(v11 + 1132) == a2 )
      {
        v15 = 0;
        v16 = 11;
        goto LABEL_36;
      }
      if ( *(CPed **)(v11 + 1136) == a2 )
      {
        v15 = 1;
        v16 = 9;
LABEL_36:
        *((_BYTE *)this + 10) = v15;
        CVehicle::SetWindowOpenFlag(*((CVehicle **)a2 + 356), v16);
      }
    }
    v13 = 72;
    goto LABEL_38;
  }
LABEL_44:
  if ( CPed::IsPlayer(a2) == 1 )
    CTaskSimpleGangDriveBy::PlayerTarget(this, a2);
  else
    CTaskSimpleGangDriveBy::LookForTarget(this, a2);
  if ( *((_DWORD *)this + 10) == 74 )
  {
    v20 = *((_DWORD *)a2 + 356);
    if ( *(_DWORD *)(v20 + 1440) == 9 )
      *(_BYTE *)(v20 + 1992) = 1;
  }
  if ( CTaskSimpleGangDriveBy::ManageAnim(this, a2) != 1 )
    goto LABEL_90;
  v21 = *((_DWORD *)this + 11);
  v22 = *(unsigned __int16 *)(v21 + 46);
  if ( (v22 & 1) != 0 )
  {
    v23 = *(float *)(v21 + 32);
    if ( v23 > CTaskSimpleGangDriveBy::ANIM_LOOP_FIRE
      && (float)(v23 - *(float *)(v21 + 40)) <= CTaskSimpleGangDriveBy::ANIM_LOOP_FIRE
      && (*((_BYTE *)this + 16) & 0xFE) == 2 )
    {
      CTaskSimpleGangDriveBy::FireGun(this, a2);
      v21 = *((_DWORD *)this + 11);
      v22 = *(unsigned __int16 *)(v21 + 46);
    }
  }
  if ( !(v22 << 31)
    && *((__int16 *)this + 11) <= 0
    && (*((_BYTE *)this + 15) & 0xFE) == 2
    && (*(float *)(v21 + 32) < *(float *)(*(_DWORD *)(v21 + 20) + 16) || *(float *)(v21 + 28) >= 0.0) )
  {
    *(_WORD *)(v21 + 46) = v22 | 1;
    v26 = (float)*(__int16 *)(*((_DWORD *)this + 12) + 32) * 0.5;
    v27 = rand();
    v28 = *((_BYTE *)this + 15);
    *((_BYTE *)this + 15) = 0;
    *((_BYTE *)this + 16) = v28;
    *((_BYTE *)this + 17) = (int)(float)((float)((float)v27 * 0.000015259) * (float)((int)v26 - 1)) + 1;
    goto LABEL_73;
  }
  if ( (v22 & 1) != 0 )
    goto LABEL_65;
  if ( *((_BYTE *)this + 15) != 7 )
  {
    if ( *((_DWORD *)this + 9) != *(__int16 *)(v21 + 44) )
    {
      *(_WORD *)(v21 + 46) = v22 | 1;
      goto LABEL_73;
    }
LABEL_65:
    if ( *((_BYTE *)this + 16) == 1 && (v22 & 1) != 0 && *((_DWORD *)this + 9) == *(__int16 *)(v21 + 44) )
    {
      v24 = *(float *)(v21 + 32);
      if ( v24 > *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START
        && (float)(v24 - *(float *)(v21 + 40)) <= *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START )
      {
        v25 = *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START;
        *(_WORD *)(v21 + 46) = v22 & 0xFFFE;
        CAnimBlendAssociation::SetCurrentTime(*((CAnimBlendAssociation **)this + 11), v25);
      }
    }
    goto LABEL_73;
  }
  *(_WORD *)(v21 + 46) = v22 | 1;
  *((_BYTE *)this + 16) = *((_BYTE *)this + 15);
  *((_BYTE *)this + 15) = 7;
LABEL_73:
  v29 = *((_DWORD *)this + 11);
  if ( *((_DWORD *)this + 9) == *(__int16 *)(v29 + 44) )
  {
    v30 = *(float *)(v29 + 32);
    if ( v30 > CTaskSimpleGangDriveBy::ANIM_LOOP_END
      && (float)(v30 - *(float *)(v29 + 40)) <= CTaskSimpleGangDriveBy::ANIM_LOOP_END )
    {
      v31 = *((char *)this + 15);
      if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 362) == 2 && v31 <= 2 )
      {
        *((_WORD *)this + 11) = 2000;
        *((_BYTE *)this + 15) = 2;
      }
      else if ( ((v31 & 0xFFFFFFFE) == 2 || *((_BYTE *)this + 16) == 3 && *((char *)this + 17) >= 1)
             && *((_BYTE *)this + 11) )
      {
        CAnimBlendAssociation::SetCurrentTime(
          (CAnimBlendAssociation *)v29,
          *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START);
        *(_WORD *)(*((_DWORD *)this + 11) + 46) |= 1u;
        v32 = *((char *)this + 16);
        v33 = *((char *)this + 15);
        if ( v33 > v32 )
        {
          *((_BYTE *)this + 16) = v33;
          v32 = v33;
        }
        v34 = 0;
        *((_BYTE *)this + 15) = 0;
        if ( v32 == 3 )
          v34 = *((_BYTE *)this + 17) - 1;
        *((_BYTE *)this + 17) = v34;
      }
      else if ( v31 == 1 )
      {
        CAnimBlendAssociation::SetCurrentTime(
          (CAnimBlendAssociation *)v29,
          *(float *)&CTaskSimpleGangDriveBy::ANIM_LOOP_START);
        *(_WORD *)(*((_DWORD *)this + 11) + 46) &= ~1u;
        *((_WORD *)this + 11) = -1;
        *(_WORD *)((char *)this + 15) = 256;
      }
    }
  }
LABEL_90:
  if ( *((_BYTE *)this + 16) )
  {
    if ( *((char *)this + 16) <= 3 )
    {
      v35 = *((_DWORD *)this + 11);
      if ( v35 )
      {
        if ( *(float *)(v35 + 24) > 0.5 || *(float *)(v35 + 28) > 0.0 && !(*(unsigned __int8 *)(v35 + 46) << 31) )
          CTaskSimpleGangDriveBy::AimGun(this, a2);
      }
    }
  }
  v36 = *((__int16 *)this + 11);
  if ( v36 <= -1 )
  {
    v38 = 100 - *((char *)this + 19);
    v37 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(100 * v38 - 200)) + 200;
  }
  else
  {
    v37 = v36 - (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  }
  *((_WORD *)this + 11) = v37;
  v39 = CPed::IsPlayer(a2);
  v40 = *((char *)this + 15);
  if ( v39 == 1 )
  {
    if ( v40 <= 3 )
    {
      *((_WORD *)this + 11) = 0;
      PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
      v40 = 1;
      if ( CPad::GetWeapon(PadFromPlayer, a2, 1) )
        v40 = 2;
LABEL_110:
      *((_BYTE *)this + 15) = v40;
    }
  }
  else if ( !*((_BYTE *)this + 15) )
  {
    switch ( *((_BYTE *)this + 16) )
    {
      case 1:
        if ( !*((_BYTE *)this + 19) && *((_BYTE *)this + 12) )
          goto LABEL_108;
        if ( *((_BYTE *)this + 11) )
        {
          v40 = 3;
          goto LABEL_110;
        }
        if ( *((__int16 *)this + 11) <= 0 )
        {
          v40 = 0;
          *((_WORD *)this + 11) = 2 * (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
        }
        else
        {
LABEL_130:
          v40 = 0;
        }
        break;
      case 6:
      case 7:
        v40 = 7;
        goto LABEL_110;
      default:
        if ( !*((_BYTE *)this + 12) )
          goto LABEL_130;
LABEL_108:
        v40 = 1;
        goto LABEL_110;
    }
  }
  v42 = *((unsigned __int8 *)this + 16);
  if ( v42 != 4 && !*((_DWORD *)this + 11) )
  {
    v43 = v42 == 7;
    if ( v42 != 7 )
      v43 = v40 == 7;
    if ( v43 )
      *((_BYTE *)this + 8) = 1;
  }
  if ( CPed::IsPlayer(a2) == 1 )
    CWeapon::Update((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444), a2);
  v44 = (float)(*(float *)(*((_DWORD *)a2 + 356) + 72) * *(float *)(*((_DWORD *)a2 + 356) + 72))
      + (float)(*(float *)(*((_DWORD *)a2 + 356) + 76) * *(float *)(*((_DWORD *)a2 + 356) + 76));
  if ( v44 <= 0.5 )
  {
    v7 = 0;
    if ( v44 < 0.01 )
      CPed::Say(a2, 0x1Eu, 0, 1.0, 0, 0, 0);
  }
  else
  {
    v7 = 0;
    CPed::Say(a2, 0x1Fu, 0, 1.0, 0, 0, 0);
  }
  return v7;
}


// ============================================================

// Address: 0x4e4e00
// Original: _ZN22CTaskSimpleGangDriveBy12PlayerTargetEP4CPed
// Demangled: CTaskSimpleGangDriveBy::PlayerTarget(CPed *)
int __fastcall CTaskSimpleGangDriveBy::PlayerTarget(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  int v4; // r0
  bool v5; // zf
  char *v6; // r1
  int v7; // r2
  double v8; // d16
  int v9; // r1
  float v10; // r0
  int v11; // r1
  float v12; // s16
  int v13; // r0
  float v14; // s0
  int v15; // r0
  float v16; // s0
  float v17; // s2
  float v18; // s0
  int v19; // s0
  int v20; // r0
  int result; // r0
  double v22; // [sp+0h] [bp-20h] BYREF
  int v23; // [sp+8h] [bp-18h]

  v4 = *((unsigned __int16 *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191);
  v5 = v4 == 55;
  if ( v4 != 55 )
    v5 = v4 == 49;
  if ( !v5 )
  {
    v15 = 256;
    *(_WORD *)((char *)this + 11) = 256;
    goto LABEL_30;
  }
  *(_WORD *)((char *)this + 11) = 257;
  v6 = (char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
  v7 = *((_DWORD *)v6 + 184);
  v8 = *((double *)v6 + 91);
  v9 = *((unsigned __int16 *)v6 + 191);
  v23 = v7;
  v22 = v8;
  if ( v9 == 49 )
    CCam::Get_TwoPlayer_AimVector(
      (CCam *)((char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF + 368),
      (CVector *)&v22);
  v10 = atan2f(COERCE_FLOAT(LODWORD(v22) ^ 0x80000000), COERCE_FLOAT((*(_QWORD *)&v22 ^ 0x80000000uLL) >> 32));
  v11 = *((_DWORD *)a2 + 356);
  v12 = v10;
  v13 = *(_DWORD *)(v11 + 20);
  if ( v13 )
    v14 = atan2f(COERCE_FLOAT(*(_DWORD *)(v13 + 16) ^ 0x80000000), *(float *)(v13 + 20));
  else
    v14 = *(float *)(v11 + 16);
  v16 = v12 - v14;
  if ( v16 > 3.1416 )
  {
    v17 = -6.2832;
LABEL_14:
    v16 = v16 + v17;
    goto LABEL_15;
  }
  if ( v16 < -3.1416 )
  {
    v17 = 6.2832;
    goto LABEL_14;
  }
LABEL_15:
  v18 = v16 + 0.7854;
  if ( v18 < 0.0 )
    v18 = v18 + 6.2832;
  v19 = (int)(float)(v18 / 1.5708);
  v15 = (char)v19;
  switch ( (char)v19 )
  {
    case 0:
      v15 = 233;
      if ( *((_BYTE *)this + 10) )
        v15 = 237;
      goto LABEL_29;
    case 1:
      v15 = 231;
      if ( *((_BYTE *)this + 10) )
        v15 = 236;
      goto LABEL_29;
    case 2:
      v15 = 234;
      if ( *((_BYTE *)this + 10) )
        v15 = 238;
      goto LABEL_29;
    case 3:
      v15 = 232;
      if ( *((_BYTE *)this + 10) )
        v15 = (int)&dword_E8 + 3;
LABEL_29:
      *((_DWORD *)this + 9) = v15;
      break;
    default:
      break;
  }
LABEL_30:
  if ( !CGameLogic::IsCoopGameGoingOn((CGameLogic *)v15) )
    CCamera::SetNewPlayerWeaponMode((CCamera *)&TheCamera, 55, 0, 0);
  v20 = *((_DWORD *)a2 + 273);
  if ( v20 )
    *(_WORD *)(v20 + 52) |= 8u;
  result = CPed::IsPlayer(a2);
  if ( result == 1 )
  {
    result = CPlayerPed::GetPlayerInfoForThisPlayerPed(a2);
    *(_BYTE *)(result + 339) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x4e4fb0
// Original: _ZN22CTaskSimpleGangDriveBy13LookForTargetEP4CPed
// Demangled: CTaskSimpleGangDriveBy::LookForTarget(CPed *)
int __fastcall CTaskSimpleGangDriveBy::LookForTarget(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  __int64 v4; // kr00_8
  float v5; // s16
  int v6; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float *v10; // r1
  float v11; // s26
  float v12; // s24
  float v13; // s22
  float v14; // r0
  int v15; // r1
  float v16; // s28
  int v17; // r0
  float v18; // s0
  float v19; // s20
  float v20; // s18
  float v21; // s0
  float v22; // s0
  int v23; // r1
  int v24; // r0
  int v25; // r1
  float *v26; // r0
  int v27; // r0
  float *v28; // r1
  float v29; // s4
  float v30; // s0
  unsigned int v31; // r0
  unsigned int v32; // r1
  int v33; // r2
  int result; // r0
  int v35; // r3
  float v36; // s0
  int v37; // r1
  bool v38; // zf
  int v39; // r1
  bool v40; // nf
  float v41; // s0
  int v42; // r1
  bool v43; // nf
  int v44; // r1
  int v45; // r1
  bool v46; // nf
  float v47; // [sp+4h] [bp-54h] BYREF
  float v48; // [sp+8h] [bp-50h]
  float v49; // [sp+Ch] [bp-4Ch]

  v4 = *((_QWORD *)this + 6);
  v5 = *(float *)(v4 + 8);
  if ( HIDWORD(v4) )
  {
    if ( !*(_DWORD *)(HIDWORD(v4) + 20) )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)HIDWORD(v4));
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(HIDWORD(v4) + 4), *(CMatrix **)(HIDWORD(v4) + 20));
    }
    operator*();
    v6 = *((_DWORD *)a2 + 5);
    v7 = v47;
    v8 = v48;
    v9 = v49;
  }
  else
  {
    v6 = *((_DWORD *)a2 + 5);
    v7 = *((float *)this + 14);
    v8 = *((float *)this + 15);
    v9 = *((float *)this + 16);
  }
  v10 = (float *)(v6 + 48);
  if ( !v6 )
    v10 = (float *)((char *)a2 + 4);
  v11 = v7 - *v10;
  v12 = v8 - v10[1];
  v13 = v9 - v10[2];
  v14 = atan2f(-v11, v12);
  v15 = *((_DWORD *)a2 + 356);
  v16 = v14;
  v17 = *(_DWORD *)(v15 + 20);
  if ( v17 )
    v18 = atan2f(COERCE_FLOAT(*(_DWORD *)(v17 + 16) ^ 0x80000000), *(float *)(v17 + 20));
  else
    v18 = *(float *)(v15 + 16);
  v19 = sqrtf((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13));
  v20 = v16 - v18;
  if ( (float)(v16 - v18) <= 3.1416 )
  {
    if ( v20 >= -3.1416 )
      goto LABEL_16;
    v21 = 6.2832;
  }
  else
  {
    v21 = -6.2832;
  }
  v20 = v20 + v21;
LABEL_16:
  v22 = *((float *)this + 8);
  v23 = *((unsigned __int8 *)this + 13);
  *((_BYTE *)this + 12) = v19 < v5;
  *((_BYTE *)this + 11) = 0;
  if ( v23 )
  {
    if ( v19 > v22 )
      goto LABEL_36;
  }
  else if ( v19 < v22 )
  {
    *((_BYTE *)this + 13) = 1;
  }
  v24 = *((_DWORD *)this + 13);
  if ( v24 )
  {
    v25 = *(_BYTE *)(v24 + 58) & 7;
    if ( v25 == 2 )
    {
      v26 = (float *)(v24 + 1228);
    }
    else
    {
      if ( v25 != 3 )
        goto LABEL_27;
      v26 = (float *)(v24 + 1348);
    }
    if ( *v26 <= 0.0 )
    {
LABEL_36:
      result = 7;
      *((_BYTE *)this + 15) = 7;
      return result;
    }
  }
LABEL_27:
  v27 = *((_DWORD *)a2 + 5);
  v28 = (float *)(v27 + 48);
  if ( !v27 )
    v28 = (float *)((char *)a2 + 4);
  v29 = v28[2];
  v30 = v11 + *v28;
  v48 = v12 + v28[1];
  v47 = v30;
  v49 = v13 + v29;
  if ( !CTaskSimpleGangDriveBy::LineOfSightClearForAttack(this, a2, (CVector *)&v47) )
  {
    result = 0;
LABEL_107:
    *((_BYTE *)this + 11) = result;
    return result;
  }
  v31 = *((unsigned __int8 *)this + 18);
  v32 = (char)v31;
  if ( v31 <= 6 && ((1 << v31) & 0x63) != 0 )
  {
    v33 = 0;
    LOBYTE(result) = -1;
    v35 = 0;
    goto LABEL_33;
  }
  v36 = v20 + 0.7854;
  if ( (float)(v20 + 0.7854) < 0.0 )
    v36 = (float)(v20 + 0.7854) + 6.2832;
  result = (int)(float)(v36 / 1.5708);
  if ( v20 <= 0.2618 || v20 >= 2.8798 )
  {
    v33 = 0;
    if ( v20 > -2.8798 )
      v33 = 0x1000000;
    if ( v20 >= -0.2618 )
      v33 = 0;
  }
  else
  {
    v33 = -16777216;
  }
  if ( v20 < 1.309 && v20 > -1.309 )
  {
    v35 = -1;
    if ( v32 > 8 )
      goto LABEL_71;
LABEL_33:
    switch ( v32 )
    {
      case 0u:
        goto LABEL_35;
      case 1u:
        goto LABEL_44;
      case 2u:
        if ( *((_DWORD *)this + 9) != 191 )
          goto LABEL_51;
LABEL_35:
        LOBYTE(result) = 1;
        goto LABEL_77;
      case 3u:
        if ( *((_DWORD *)this + 9) != 191 )
          goto LABEL_51;
LABEL_44:
        LOBYTE(result) = 3;
        goto LABEL_77;
      case 4u:
        if ( *((_DWORD *)this + 9) != 191 )
        {
LABEL_51:
          v37 = (unsigned __int8)result;
          if ( (unsigned __int8)result != 3 )
            LOBYTE(result) = -1;
          v38 = v37 == 1;
          goto LABEL_75;
        }
        LOBYTE(result) = -1;
        if ( v33 >> 24 == 1 )
          LOBYTE(result) = 3;
        if ( v33 >> 24 == -1 )
          LOBYTE(result) = 1;
        break;
      case 5u:
        LOBYTE(result) = 0;
        goto LABEL_77;
      case 6u:
        LOBYTE(result) = 2;
        goto LABEL_77;
      case 7u:
        if ( *((_DWORD *)this + 9) == 191 )
        {
          LOBYTE(result) = -1;
          if ( v35 == 1 )
            LOBYTE(result) = 2;
          if ( v35 == -1 )
            LOBYTE(result) = 0;
        }
        else
        {
          v37 = (unsigned __int8)result;
          if ( (unsigned __int8)result != 2 )
            LOBYTE(result) = -1;
          v38 = v37 == 0;
LABEL_75:
          if ( v38 )
            LOBYTE(result) = v37;
        }
        break;
      case 8u:
        goto LABEL_77;
      default:
        goto LABEL_71;
    }
    goto LABEL_77;
  }
  v35 = v20 > 1.8326 && v20 < -1.8326;
  if ( v32 <= 8 )
    goto LABEL_33;
LABEL_71:
  LOBYTE(result) = -1;
LABEL_77:
  result = (char)result;
  switch ( (char)result )
  {
    case 0:
      result = *((unsigned __int8 *)this + 10);
      v39 = 233;
      if ( *((_BYTE *)this + 10) )
        v39 = 237;
      v40 = v20 < 0.7854;
      *((_DWORD *)this + 9) = v39;
      if ( v20 <= 0.7854 )
        v40 = v19 < v5;
      if ( v40 )
      {
        v41 = -0.7854;
        goto LABEL_105;
      }
      break;
    case 1:
      result = *((unsigned __int8 *)this + 10);
      v42 = 231;
      if ( *((_BYTE *)this + 10) )
        v42 = 236;
      v43 = v20 < 2.3562;
      *((_DWORD *)this + 9) = v42;
      if ( v20 <= 2.3562 )
        v43 = v19 < v5;
      if ( v43 )
      {
        v41 = 0.7854;
        goto LABEL_105;
      }
      break;
    case 2:
      result = *((unsigned __int8 *)this + 10);
      v44 = 234;
      if ( *((_BYTE *)this + 10) )
        v44 = 238;
      *((_DWORD *)this + 9) = v44;
      if ( v19 < v5 && (v20 >= -2.3562 || v20 <= 2.3562) )
        goto LABEL_106;
      break;
    case 3:
      result = *((unsigned __int8 *)this + 10);
      v45 = 232;
      if ( *((_BYTE *)this + 10) )
        v45 = 235;
      v46 = v20 < -0.7854;
      *((_DWORD *)this + 9) = v45;
      if ( v20 <= -0.7854 )
        v46 = v19 < v5;
      if ( v46 )
      {
        v41 = -2.3562;
LABEL_105:
        if ( v20 >= v41 )
        {
LABEL_106:
          result = 1;
          goto LABEL_107;
        }
      }
      break;
    default:
      return result;
  }
  return result;
}


// ============================================================

// Address: 0x4e53dc
// Original: _ZN22CTaskSimpleGangDriveBy7FireGunEP4CPed
// Demangled: CTaskSimpleGangDriveBy::FireGun(CPed *)
int __fastcall CTaskSimpleGangDriveBy::FireGun(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  int v4; // r0
  double v5; // d16
  int v6; // r5
  int MatrixArray; // r0
  int v8; // r1
  float *v9; // r9
  int v10; // r0
  float *v11; // r2
  float v12; // s2
  float v13; // s4
  int result; // r0
  int v15; // r1
  int v16; // r6
  float v17; // s0
  float v18; // s2
  float v19; // s4
  float v20; // s6
  float v21; // s8
  float v22; // s10
  int v23; // r0
  int v24; // r1
  bool v25; // zf
  int v26; // r1
  float v27; // s0
  float v28; // s2
  float *v29; // r0
  float v30; // s4
  float v31; // s12
  float v32; // s10
  float v33; // s8
  float v34; // s6
  float v35; // s10
  float v36; // s6
  int v37; // r2
  bool v38; // zf
  float *v39; // r0
  float v40; // s12
  float v41; // s10
  float v42; // s6
  float v43; // s8
  float v44; // s10
  float *v45; // r0
  float v46; // s6
  float v47; // s12
  float v48; // s10
  float *v49; // r0
  float v50; // s8
  float v51; // s12
  float v52; // s10
  double v53; // d16
  int v54; // r6
  CEntity *v55; // r0
  int v56; // r1
  CVector *v57; // r3
  double v58; // [sp+10h] [bp-60h]
  float v59; // [sp+18h] [bp-58h]
  double v60; // [sp+20h] [bp-50h] BYREF
  float v61; // [sp+28h] [bp-48h]
  double v62; // [sp+30h] [bp-40h] BYREF
  float v63; // [sp+38h] [bp-38h]
  float v64; // [sp+3Ch] [bp-34h] BYREF
  float v65; // [sp+40h] [bp-30h]
  float v66; // [sp+44h] [bp-2Ch]
  double v67; // [sp+48h] [bp-28h] BYREF
  float v68; // [sp+50h] [bp-20h]

  v4 = *((_DWORD *)this + 12);
  v5 = *(double *)(v4 + 36);
  v68 = *(float *)(v4 + 44);
  v67 = v5;
  GetAnimHierarchyFromSkinClump();
  v6 = RpHAnimIDGetIndex();
  MatrixArray = RpHAnimHierarchyGetMatrixArray();
  RwV3dTransformPoints(&v67, &v67, 1, MatrixArray + (v6 << 6));
  v8 = *((_DWORD *)a2 + 356);
  v9 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v8 + 38)]) + 44);
  v10 = *(_DWORD *)(v8 + 20);
  v11 = (float *)(v10 + 48);
  if ( !v10 )
    v11 = (float *)(v8 + 4);
  v12 = *((float *)&v67 + 1) - v11[1];
  v13 = v68 - v11[2];
  *(float *)&v62 = *(float *)&v67 - *v11;
  *((float *)&v62 + 1) = v12;
  v63 = v13;
  if ( CPed::IsPlayer(a2) == 1 )
  {
    result = 33 * (unsigned __int8)byte_951FFF;
    v15 = *((unsigned __int16 *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191);
    if ( v15 != 55 && v15 != 49 )
      return result;
    CCamera::Find3rdPersonCamTargetVector();
    v64 = v64 - *(float *)&v67;
    v65 = v65 - *((float *)&v67 + 1);
    v66 = v66 - v68;
    *(_DWORD *)(*((_DWORD *)a2 + 273) + 44) = 0;
  }
  else
  {
    v16 = *((_DWORD *)this + 13);
    if ( v16 )
    {
      if ( !*(_DWORD *)(v16 + 20) )
      {
        CPlaceable::AllocateMatrix(*((CPlaceable **)this + 13));
        CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v16 + 4), *(CMatrix **)(v16 + 20));
      }
      operator*();
      v18 = *((float *)&v67 + 1);
      v17 = *(float *)&v67;
      v19 = v68;
      v21 = *((float *)&v60 + 1);
      v20 = *(float *)&v60;
      v22 = v61;
    }
    else
    {
      v18 = *((float *)&v67 + 1);
      v17 = *(float *)&v67;
      v19 = v68;
      v20 = *((float *)this + 14);
      v21 = *((float *)this + 15);
      v22 = *((float *)this + 16);
    }
    v64 = v20 - v17;
    v65 = v21 - v18;
    v66 = v22 - v19;
  }
  CVector::Normalise((CVector *)&v64);
  v23 = *((_DWORD *)this + 11);
  if ( v23 )
  {
    v24 = *(__int16 *)(v23 + 44);
    v25 = v24 == 231;
    if ( v24 != 231 )
      v25 = v24 == 236;
    if ( v25 )
      goto LABEL_19;
  }
  v26 = *((unsigned __int8 *)this + 20);
  if ( v26 == 1 )
  {
LABEL_19:
    v27 = v64;
    v28 = v65;
    v29 = *(float **)(*((_DWORD *)a2 + 356) + 20);
    v30 = v66;
    v31 = v29[1];
    v32 = v29[2];
    v33 = (float)((float)(*v29 * v64) + (float)(v31 * v65)) + (float)(v32 * v66);
    if ( v33 < -0.1 )
    {
      v34 = (float)((float)(*v29 * *(float *)&v62) + (float)(v31 * *((float *)&v62 + 1))) + (float)(v32 * v63);
      v35 = *v9;
LABEL_21:
      v36 = (float)((float)(v35 - v34) + -0.2) / (float)-v33;
LABEL_30:
      *(float *)&v62 = *(float *)&v67 + (float)(v27 * v36);
      *((float *)&v62 + 1) = *((float *)&v67 + 1) + (float)(v28 * v36);
      v63 = v68 + (float)(v30 * v36);
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  if ( v23 )
  {
    v37 = *(__int16 *)(v23 + 44);
    v38 = v37 == 232;
    if ( v37 != 232 )
      v38 = v37 == 235;
    if ( v38 )
      goto LABEL_27;
  }
  if ( v26 == 3 )
  {
LABEL_27:
    v27 = v64;
    v28 = v65;
    v39 = *(float **)(*((_DWORD *)a2 + 356) + 20);
    v30 = v66;
    v40 = v39[1];
    v41 = v39[2];
    v42 = (float)((float)(*v39 * v64) + (float)(v40 * v65)) + (float)(v41 * v66);
    if ( v42 <= 0.1 )
      goto LABEL_38;
    v43 = (float)((float)(*v39 * *(float *)&v62) + (float)(v40 * *((float *)&v62 + 1))) + (float)(v41 * v63);
    v44 = v9[3];
LABEL_29:
    v36 = (float)((float)(v44 - v43) + 0.2) / v42;
    goto LABEL_30;
  }
  if ( (!v23 || (*(__int16 *)(v23 + 44) | 4) != 0xEE) && v26 != 2 )
  {
    v27 = v64;
    v28 = v65;
    v49 = *(float **)(*((_DWORD *)a2 + 356) + 20);
    v30 = v66;
    v50 = v49[4];
    v51 = v49[5];
    v52 = v49[6];
    v42 = (float)((float)(v50 * v64) + (float)(v51 * v65)) + (float)(v52 * v66);
    if ( v42 <= 0.1 )
      goto LABEL_38;
    v43 = (float)((float)(v50 * *(float *)&v62) + (float)(v51 * *((float *)&v62 + 1))) + (float)(v52 * v63);
    v44 = v9[4];
    goto LABEL_29;
  }
  v27 = v64;
  v28 = v65;
  v45 = *(float **)(*((_DWORD *)a2 + 356) + 20);
  v30 = v66;
  v46 = v45[4];
  v47 = v45[5];
  v48 = v45[6];
  v33 = (float)((float)(v46 * v64) + (float)(v47 * v65)) + (float)(v48 * v66);
  if ( v33 < -0.1 )
  {
    v34 = (float)((float)(v46 * *(float *)&v62) + (float)(v47 * *((float *)&v62 + 1))) + (float)(v48 * v63);
    v35 = v9[1];
    goto LABEL_21;
  }
LABEL_38:
  v63 = v68;
  v62 = v67;
LABEL_39:
  *((_DWORD *)a2 + 333) |= 1u;
  if ( *((float *)this + 14) == 0.0 && *((float *)this + 15) == 0.0 && *((float *)this + 16) == 0.0 )
  {
    v55 = (CEntity *)*((_DWORD *)this + 13);
    v56 = *((char *)a2 + 1820);
    v57 = 0;
  }
  else
  {
    v53 = *((double *)this + 7);
    v61 = *((float *)this + 16);
    v60 = v53;
    v54 = *((_DWORD *)this + 13);
    if ( v54 )
    {
      if ( !*(_DWORD *)(v54 + 20) )
      {
        CPlaceable::AllocateMatrix(*((CPlaceable **)this + 13));
        CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v54 + 4), *(CMatrix **)(v54 + 20));
      }
      operator*();
      v61 = v59;
      v60 = v58;
      v55 = (CEntity *)*((_DWORD *)this + 13);
    }
    else
    {
      v55 = 0;
    }
    v56 = *((char *)a2 + 1820);
    v57 = (CVector *)&v60;
  }
  CWeapon::Fire((CPed *)((char *)a2 + 28 * v56 + 1444), a2, (CVector *)&v67, (CVector *)&v67, v55, v57, (CVector *)&v62);
  return CPed::DoGunFlash(a2, 250, 0);
}


// ============================================================

// Address: 0x4e58ec
// Original: _ZN22CTaskSimpleGangDriveBy6AimGunEP4CPed
// Demangled: CTaskSimpleGangDriveBy::AimGun(CPed *)
int __fastcall CTaskSimpleGangDriveBy::AimGun(CTaskSimpleGangDriveBy *this, CPed *a2)
{
  int result; // r0
  int v5; // r1
  float *v6; // r6
  float v7; // s0
  int v8; // r4
  __int64 v9; // d16
  CGeneral *v10; // r0
  CPedIK *v11; // r6
  int v12; // r0
  __int64 *v13; // r1
  float v14; // s16
  int v15; // r0
  float v16; // s0
  int v17; // r0
  int v18; // r5
  float v19; // r4
  int v20; // r0
  float v21; // s0
  float v22; // s2
  int v23; // r0
  float v24; // s20
  float v25; // s0
  float v26; // r0
  float v27; // s0
  int v28; // r1
  float v29; // s2
  bool v30; // cc
  bool v31; // r3
  float v32; // s2
  int v33; // r0
  __int64 *v34; // r1
  float v35; // [sp+0h] [bp-58h]
  float v36; // [sp+0h] [bp-58h]
  __int64 v37; // [sp+10h] [bp-48h]
  __int64 v38; // [sp+10h] [bp-48h]
  CGeneral *v39; // [sp+18h] [bp-40h]
  CGeneral *v40[2]; // [sp+20h] [bp-38h]
  CGeneral *v41; // [sp+28h] [bp-30h]

  *((_DWORD *)a2 + 333) &= ~4u;
  *(_QWORD *)v40 = 0LL;
  v41 = 0;
  if ( CPed::IsPlayer(a2) != 1 )
  {
    v7 = *((float *)this + 14);
    v8 = *((_DWORD *)this + 13);
    if ( v8 )
    {
      if ( v7 == 0.0 && *((float *)this + 15) == 0.0 && *((float *)this + 16) == 0.0 )
      {
        if ( (*(_BYTE *)(v8 + 58) & 7) == 3 )
        {
          CPed::GetBonePosition(*((CEntity **)this + 13));
          goto LABEL_21;
        }
        v33 = *(_DWORD *)(v8 + 20);
        v34 = (__int64 *)(v33 + 48);
        if ( !v33 )
          v34 = (__int64 *)(v8 + 4);
        v9 = *v34;
        v10 = (CGeneral *)*((_DWORD *)v34 + 2);
      }
      else
      {
        if ( !*(_DWORD *)(v8 + 20) )
        {
          CPlaceable::AllocateMatrix(*((CPlaceable **)this + 13));
          CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v8 + 4), *(CMatrix **)(v8 + 20));
        }
        operator*();
        v9 = v37;
        v10 = v39;
      }
    }
    else
    {
      if ( v7 == 0.0 && *((float *)this + 15) == 0.0 && *((float *)this + 16) == 0.0 )
        goto LABEL_21;
      v10 = (CGeneral *)*((_DWORD *)this + 16);
      v9 = *((_QWORD *)this + 7);
    }
    v41 = v10;
    *(_QWORD *)v40 = v9;
    goto LABEL_21;
  }
  result = *((unsigned __int16 *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191);
  if ( result == 49 )
  {
    v6 = (float *)((char *)a2 + 4);
    v5 = *((_DWORD *)a2 + 5);
  }
  else
  {
    if ( result != 55 )
      return result;
    v5 = *((_DWORD *)a2 + 5);
    v6 = (float *)((char *)a2 + 4);
  }
  if ( v5 )
    v6 = (float *)(v5 + 48);
  v35 = v6[2] + 0.7;
  CCamera::Find3rdPersonCamTargetVector();
LABEL_21:
  v11 = (CPed *)((char *)a2 + 1304);
  CPed::GetBonePosition(a2);
  v12 = *((_DWORD *)a2 + 5);
  v13 = (__int64 *)(v12 + 48);
  if ( !v12 )
    v13 = (__int64 *)((char *)a2 + 4);
  v38 = *v13;
  v14 = COERCE_FLOAT(CGeneral::GetRadianAngleBetweenPoints(v40[0], *(float *)&v40[1], *(float *)&v38, *((float *)&v38 + 1), v35));
  v15 = *((_DWORD *)a2 + 356);
  v16 = 0.0;
  if ( v15 && *(_DWORD *)(v15 + 1440) == 9 )
  {
    *(float *)&v17 = COERCE_FLOAT(
                       CGeneral::GetRadianAngleBetweenPoints(
                         v41,
                         sqrtf(
                           (float)((float)(*(float *)&v38 - *(float *)v40) * (float)(*(float *)&v38 - *(float *)v40))
                         + (float)((float)(*((float *)&v38 + 1) - *(float *)&v40[1])
                                 * (float)(*((float *)&v38 + 1) - *(float *)&v40[1]))),
                         0.0,
                         0.0,
                         v36));
    v18 = *((_DWORD *)a2 + 356);
    v19 = *(float *)&v17;
    v20 = *(_DWORD *)(v18 + 20);
    if ( v20 )
      v21 = atan2f(COERCE_FLOAT(*(_DWORD *)(v20 + 16) ^ 0x80000000), *(float *)(v20 + 20));
    else
      v21 = *(float *)(v18 + 16);
    v22 = sinf(v14 - v21);
    v23 = *(_DWORD *)(v18 + 20);
    v24 = v22 * *(float *)(v18 + 1628);
    if ( v23 )
      v25 = atan2f(COERCE_FLOAT(*(_DWORD *)(v23 + 16) ^ 0x80000000), *(float *)(v23 + 20));
    else
      v25 = *(float *)(v18 + 16);
    v26 = cosf(v14 - v25);
    v27 = -1.0;
    v28 = *(_DWORD *)(v18 + 20);
    v29 = *(float *)(v28 + 24);
    v30 = v29 <= -1.0;
    if ( v29 >= -1.0 )
      v30 = v29 <= 1.0;
    if ( v30 )
    {
      if ( v29 >= -1.0 )
        v27 = *(float *)(v28 + 24);
    }
    else
    {
      v27 = 1.0;
    }
    v16 = (float)(v19 + v24) + (float)(v26 * asinf(v27));
  }
  v31 = 0;
  if ( (unsigned int)(*(__int16 *)(*((_DWORD *)this + 11) + 44) - 231) > 7 )
    return CPedIK::PointGunInDirection(v11, v14, v16, v31, -1.0);
  if ( ((1 << (*(_WORD *)(*((_DWORD *)this + 11) + 44) + 25)) & 0x21) != 0 )
  {
    v32 = -1.5708;
    v16 = -v16;
  }
  else
  {
    if ( ((1 << (*(_WORD *)(*((_DWORD *)this + 11) + 44) + 25)) & 0x12) == 0 )
    {
      if ( ((1 << (*(_WORD *)(*((_DWORD *)this + 11) + 44) + 25)) & 0x88) != 0 )
      {
        v16 = -v16;
        v14 = v14 + -3.1416;
        v31 = 0;
      }
      return CPedIK::PointGunInDirection(v11, v14, v16, v31, -1.0);
    }
    v32 = 1.5708;
  }
  v14 = v14 + v32;
  v31 = 1;
  return CPedIK::PointGunInDirection(v11, v14, v16, v31, -1.0);
}


// ============================================================

// Address: 0x4e5c7c
// Original: _ZN22CTaskSimpleGangDriveBy25LineOfSightClearForAttackEP4CPedR7CVector
// Demangled: CTaskSimpleGangDriveBy::LineOfSightClearForAttack(CPed *,CVector &)
bool __fastcall CTaskSimpleGangDriveBy::LineOfSightClearForAttack(CTaskSimpleGangDriveBy *this, CPed *a2, CVector *a3)
{
  int v4; // r5
  int v5; // r3
  int v6; // r5
  float *v7; // r0
  float v8; // s0
  float v9; // s2
  float v11[5]; // [sp+14h] [bp-14h] BYREF

  v4 = CTimer::m_snTimeInMilliseconds;
  if ( (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 6) )
  {
    v5 = *((_DWORD *)this + 13);
    *((_BYTE *)this + 28) = 0;
    if ( v5 )
    {
      v6 = *((_DWORD *)a2 + 5);
      v7 = (float *)(v6 + 48);
      if ( !v6 )
        v7 = (float *)((char *)a2 + 4);
      v8 = v7[2] + 0.5;
      v9 = *v7 + 0.0;
      v11[1] = v7[1] + 0.0;
      CWorld::pIgnoreEntity = v5;
      v11[2] = v8;
      if ( !CWorld::GetIsLineOfSightClear(
              (CWorld *)v11,
              a3,
              (const CVector *)((char *)&stderr + 1),
              0,
              0,
              0,
              0,
              (CColLine *)((char *)&stderr + 1),
              0,
              SLOBYTE(v9)) )
        *((_BYTE *)this + 28) = 1;
      v4 = CTimer::m_snTimeInMilliseconds;
      CWorld::pIgnoreEntity = 0;
    }
    *((_DWORD *)this + 6) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0) + v4 + 1750;
  }
  return *((_BYTE *)this + 28) == 0;
}


// ============================================================

// Address: 0x4e5d68
// Original: _ZN22CTaskSimpleGangDriveBy23FinishAnimGangDriveByCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleGangDriveBy::FinishAnimGangDriveByCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleGangDriveBy::FinishAnimGangDriveByCB(int this, CAnimBlendAssociation *a2, void *a3)
{
  if ( *((_DWORD *)a2 + 11) == this )
  {
    this = 0;
    *((_DWORD *)a2 + 11) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x4ea07c
// Original: _ZNK22CTaskSimpleGangDriveBy5CloneEv
// Demangled: CTaskSimpleGangDriveBy::Clone(void)
int __fastcall CTaskSimpleGangDriveBy::Clone(CTaskSimpleGangDriveBy *this, unsigned int a2)
{
  int v3; // r5
  char v4; // r6
  char v5; // r9
  char v6; // r10
  CEntity *v7; // r8
  int v8; // r11
  __int64 v9; // d16

  v3 = CTask::operator new((CTask *)&dword_44, a2);
  v4 = *((_BYTE *)this + 10);
  v5 = *((_BYTE *)this + 18);
  v6 = *((_BYTE *)this + 19);
  v7 = (CEntity *)*((_DWORD *)this + 13);
  v8 = *((_DWORD *)this + 8);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 10) = v4;
  *(_WORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 11) = 0;
  *(_BYTE *)(v3 + 18) = v5;
  *(_BYTE *)(v3 + 19) = v6;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_WORD *)(v3 + 15) = 1;
  *(_BYTE *)(v3 + 17) = -1;
  *(_BYTE *)(v3 + 20) = -1;
  *(_WORD *)(v3 + 22) = -1;
  *(_DWORD *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 28) = 1;
  *(_DWORD *)v3 = &off_669940;
  *(_DWORD *)(v3 + 52) = v7;
  *(_DWORD *)(v3 + 56) = 0;
  *(_DWORD *)(v3 + 32) = v8;
  *(_DWORD *)(v3 + 36) = 191;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 52));
  v9 = *((_QWORD *)this + 7);
  *(_DWORD *)(v3 + 64) = *((_DWORD *)this + 16);
  *(_QWORD *)(v3 + 56) = v9;
  *(_BYTE *)(v3 + 14) = *((_BYTE *)this + 14);
  return v3;
}


// ============================================================

// Address: 0x4ea128
// Original: _ZNK22CTaskSimpleGangDriveBy11GetTaskTypeEv
// Demangled: CTaskSimpleGangDriveBy::GetTaskType(void)
int __fastcall CTaskSimpleGangDriveBy::GetTaskType(CTaskSimpleGangDriveBy *this)
{
  return 1022;
}


// ============================================================

// Address: 0x4ea130
// Original: _ZN22CTaskSimpleGangDriveBy9SerializeEv
// Demangled: CTaskSimpleGangDriveBy::Serialize(void)
int __fastcall CTaskSimpleGangDriveBy::Serialize(CTaskSimpleGangDriveBy *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r0
  int v6; // r6
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CVehicle *v9; // r0
  int v10; // r1
  int v11; // r5
  int v12; // r0
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CGenericGameStorage *v16; // r0
  CGenericGameStorage *v17; // r6
  int v18; // r2
  CGenericGameStorage *v19; // r5
  __int64 v20; // d16
  int v21; // r2
  int v22; // r6
  CGenericGameStorage *v23; // r5
  int v24; // r2
  int v25; // r2
  int v26; // r2
  int v27; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleGangDriveBy *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleGangDriveBy *))(*(_DWORD *)this + 20))(this) != 1022 )
  {
    v12 = (*(int (__fastcall **)(CTaskSimpleGangDriveBy *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1022, v12);
  }
  v5 = *((_DWORD *)this + 13);
  if ( !v5 )
  {
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    v16 = v14;
    goto LABEL_18;
  }
  v6 = *(_BYTE *)(v5 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v7 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v7 = v6;
  CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
  free(v7);
  v9 = (CVehicle *)*((_DWORD *)this + 13);
  v10 = *((_BYTE *)v9 + 58) & 7;
  if ( v10 == 2 )
  {
    v11 = GettPoolVehicleRef(v9);
    goto LABEL_15;
  }
  if ( v10 == 3 )
  {
    v11 = GettPoolPedRef(v9);
LABEL_15:
    if ( UseDataFence )
      AddDataFence();
    v17 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v17 = v11;
    CGenericGameStorage::_SaveDataToWorkBuffer(v17, byte_4, v18);
    v16 = v17;
LABEL_18:
    free(v16);
  }
  if ( UseDataFence )
    AddDataFence();
  v19 = (CGenericGameStorage *)malloc(0xCu);
  v20 = *((_QWORD *)this + 7);
  *((_DWORD *)v19 + 2) = *((_DWORD *)this + 16);
  *(_QWORD *)v19 = v20;
  CGenericGameStorage::_SaveDataToWorkBuffer(v19, &byte_9[3], v21);
  free(v19);
  v22 = *((_DWORD *)this + 8);
  if ( UseDataFence )
    AddDataFence();
  v23 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v23 = v22;
  CGenericGameStorage::_SaveDataToWorkBuffer(v23, byte_4, v24);
  free(v23);
  if ( UseDataFence )
    AddDataFence();
  CGenericGameStorage::_SaveDataToWorkBuffer((CTaskSimpleGangDriveBy *)((char *)this + 19), (char *)&stderr + 1, v25);
  if ( UseDataFence )
    AddDataFence();
  CGenericGameStorage::_SaveDataToWorkBuffer((CTaskSimpleGangDriveBy *)((char *)this + 18), (char *)&stderr + 1, v26);
  if ( UseDataFence )
    AddDataFence();
  return sub_19EA3C((CTaskSimpleGangDriveBy *)((char *)this + 10), (char *)&stderr + 1, v27);
}


// ============================================================
