
// Address: 0x196034
// Original: j__ZN29CTaskComplexProstituteSolicitC2EP4CPed
// Demangled: CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(CPed *)
// attributes: thunk
void __fastcall CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(
        CTaskComplexProstituteSolicit *this,
        CPed *a2)
{
  _ZN29CTaskComplexProstituteSolicitC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x199628
// Original: j__ZN29CTaskComplexProstituteSolicit24GetRidOfPlayerProstituteEv
// Demangled: CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void)
// attributes: thunk
int __fastcall CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(CTaskComplexProstituteSolicit *this)
{
  return _ZN29CTaskComplexProstituteSolicit24GetRidOfPlayerProstituteEv(this);
}


// ============================================================

// Address: 0x19c574
// Original: j__ZN29CTaskComplexProstituteSolicit11IsTaskValidEP4CPedS1_
// Demangled: CTaskComplexProstituteSolicit::IsTaskValid(CPed *,CPed *)
// attributes: thunk
int __fastcall CTaskComplexProstituteSolicit::IsTaskValid(CTaskComplexProstituteSolicit *this, CPed *a2, CPed *a3)
{
  return _ZN29CTaskComplexProstituteSolicit11IsTaskValidEP4CPedS1_(this, a2, a3);
}


// ============================================================

// Address: 0x51b3ac
// Original: _ZN29CTaskComplexProstituteSolicitC2EP4CPed
// Demangled: CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(CPed *)
void __fastcall CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(
        CTaskComplexProstituteSolicit *this,
        CPed *a2)
{
  __int16 v4; // r2

  CTaskComplex::CTaskComplex(this);
  v4 = *((_WORD *)this + 22);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 850;
  *((_WORD *)this + 22) = v4 & 0xE000 | 0x2C0;
  *(_DWORD *)this = &off_66C074;
  *((_DWORD *)this + 3) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x51b3f0
// Original: _ZN29CTaskComplexProstituteSolicitD2Ev
// Demangled: CTaskComplexProstituteSolicit::~CTaskComplexProstituteSolicit()
void __fastcall CTaskComplexProstituteSolicit::~CTaskComplexProstituteSolicit(CTaskComplexProstituteSolicit *this)
{
  int PlayerPed; // r0
  int v3; // r5
  CEntity *v4; // r0
  CEntity **v5; // r5
  CEntity *v6; // t1

  *(_DWORD *)this = &off_66C074;
  PlayerPed = FindPlayerPed(-1);
  if ( PlayerPed )
  {
    v3 = *(_DWORD *)(PlayerPed + 1092);
    v6 = *(CEntity **)(v3 + 164);
    v5 = (CEntity **)(v3 + 164);
    v4 = v6;
    if ( v6 )
    {
      CEntity::CleanUpOldReference(v4, v5);
      *v5 = 0;
    }
    if ( (*((_WORD *)this + 22) & 0x100) != 0 )
      *((_WORD *)this + 22) &= ~0x100u;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51b43c
// Original: _ZN29CTaskComplexProstituteSolicitD0Ev
// Demangled: CTaskComplexProstituteSolicit::~CTaskComplexProstituteSolicit()
void __fastcall CTaskComplexProstituteSolicit::~CTaskComplexProstituteSolicit(CTaskComplexProstituteSolicit *this)
{
  int PlayerPed; // r0
  int v3; // r5
  CEntity *v4; // r0
  CEntity **v5; // r5
  CEntity *v6; // t1
  void *v7; // r0

  *(_DWORD *)this = &off_66C074;
  PlayerPed = FindPlayerPed(-1);
  if ( PlayerPed )
  {
    v3 = *(_DWORD *)(PlayerPed + 1092);
    v6 = *(CEntity **)(v3 + 164);
    v5 = (CEntity **)(v3 + 164);
    v4 = v6;
    if ( v6 )
    {
      CEntity::CleanUpOldReference(v4, v5);
      *v5 = 0;
    }
    if ( (*((_WORD *)this + 22) & 0x100) != 0 )
      *((_WORD *)this + 22) &= ~0x100u;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v7);
}


// ============================================================

// Address: 0x51b48c
// Original: _ZN29CTaskComplexProstituteSolicit13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexProstituteSolicit::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexProstituteSolicit::MakeAbortable(
        CTaskComplexProstituteSolicit *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             a3,
             a4);
  if ( result == 1 )
    *((_WORD *)this + 22) &= ~0x100u;
  return result;
}


// ============================================================

// Address: 0x51b4a8
// Original: _ZN29CTaskComplexProstituteSolicit11IsTaskValidEP4CPedS1_
// Demangled: CTaskComplexProstituteSolicit::IsTaskValid(CPed *,CPed *)
int __fastcall CTaskComplexProstituteSolicit::IsTaskValid(CTaskComplexProstituteSolicit *this, CPed *a2, CPed *a3)
{
  CPed *PlayerPed; // r1
  int result; // r0
  CTaskComplexProstituteSolicit *v7; // r0
  bool v8; // zf
  int SimplestActiveTask; // r0
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  int v13; // r0
  int v14; // r1
  char *v15; // r2
  char *v16; // r0
  float32x2_t v17; // d16
  unsigned __int64 v18; // d1

  PlayerPed = (CPed *)FindPlayerPed(-1);
  result = 0;
  if ( a2 && PlayerPed == a2 )
  {
    if ( (*((_DWORD *)a2 + 289) & 0x100) == 0 )
      return 0;
    result = 0;
    if ( (*((_DWORD *)a2 + 291) & 0x40) == 0 && *((_DWORD *)a2 + 356) )
    {
      v7 = *(CTaskComplexProstituteSolicit **)(*((_DWORD *)a2 + 273) + 164);
      v8 = v7 == 0;
      if ( v7 )
        v8 = v7 == this;
      if ( !v8 )
        return 0;
      if ( CVehicle::GetVehicleAppearance(*((CVehicle **)a2 + 356)) != 1 )
        return 0;
      if ( CVehicle::IsUpsideDown(*((CVehicle **)a2 + 356)) )
        return 0;
      if ( CVehicle::IsOnItsSide(*((CVehicle **)a2 + 356)) )
        return 0;
      SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) != 709 )
        return 0;
      v10 = *((_DWORD *)a2 + 356);
      if ( *(CPed **)(v10 + 1124) != a2 )
        return 0;
      v11 = *((_DWORD *)this + 356);
      v12 = v11 == 0;
      if ( v11 )
        v12 = v11 == v10;
      if ( !v12 )
        return 0;
      if ( v11 )
      {
        if ( *(_BYTE *)(v11 + 1160) != 1 )
          return 0;
      }
      else if ( *(_BYTE *)(v10 + 1160) )
      {
        return 0;
      }
      if ( !*(_BYTE *)(v10 + 1164) || (*(_BYTE *)(*(_DWORD *)(v10 + 904) + 205) & 2) != 0 )
        return 0;
      v13 = *((_DWORD *)this + 5);
      v14 = *((_DWORD *)a2 + 5);
      v15 = (char *)(v13 + 48);
      if ( !v13 )
        v15 = (char *)this + 4;
      v16 = (char *)(v14 + 48);
      if ( !v14 )
        v16 = (char *)a2 + 4;
      v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), *(float32x2_t *)(v15 + 4)).n64_u64[0];
      v18 = vmul_f32(v17, v17).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v16 - *(float *)v15) * (float)(*(float *)v16 - *(float *)v15))
                         + *(float *)&v18)
                 + *((float *)&v18 + 1)) > 100.0
        || CTheScripts::IsPlayerOnAMission((CTheScripts *)v16) )
      {
        return 0;
      }
      return CGameLogic::IsCoopGameGoingOn(0) ^ 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x51b5dc
// Original: _ZN29CTaskComplexProstituteSolicit24GetRidOfPlayerProstituteEv
// Demangled: CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void)
int __fastcall CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(CTaskComplexProstituteSolicit *this)
{
  int result; // r0
  __int16 v2; // r1

  result = *(_DWORD *)(*(_DWORD *)(FindPlayerPed(-1) + 1092) + 164);
  if ( result )
  {
    result = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(result + 1088), 1309);
    if ( result )
    {
      v2 = *(_WORD *)(result + 44);
      *(_WORD *)(result + 42) = 0;
      *(_WORD *)(result + 44) = v2 | 4;
    }
  }
  return result;
}


// ============================================================

// Address: 0x51b616
// Original: _ZN29CTaskComplexProstituteSolicit18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexProstituteSolicit::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexProstituteSolicit::CreateFirstSubTask(
        CTaskComplexProstituteSolicit *this,
        CPed *a2,
        CPed *a3)
{
  int v5; // r0
  int v6; // r1
  int v7; // r2
  __int64 *v8; // r3
  __int64 v9; // d16
  int PlayerPed; // r0
  int v11; // r2
  CEntity *v12; // r0

  if ( CTaskComplexProstituteSolicit::IsTaskValid(a2, *((CPed **)this + 3), a3) == 1 )
  {
    v5 = *((_DWORD *)this + 3);
    v6 = *(_DWORD *)(v5 + 1424);
    v7 = *(_DWORD *)(v6 + 20);
    v8 = (__int64 *)(v7 + 48);
    if ( !v7 )
      v8 = (__int64 *)(v6 + 4);
    v9 = *v8;
    *((_DWORD *)this + 6) = *((_DWORD *)v8 + 2);
    *((_QWORD *)this + 2) = v9;
    *(_DWORD *)(*(_DWORD *)(v5 + 1092) + 164) = a2;
    PlayerPed = FindPlayerPed(-1);
    CEntity::RegisterReference(
      *(CEntity **)(*(_DWORD *)(PlayerPed + 1092) + 164),
      (CEntity **)(*(_DWORD *)(PlayerPed + 1092) + 164));
    v11 = *(_DWORD *)(*((_DWORD *)this + 3) + 1092);
    v12 = *(CEntity **)(v11 + 168);
    if ( v12 != a2 )
    {
      if ( v12 )
      {
        CEntity::CleanUpOldReference(v12, (CEntity **)(v11 + 168));
        v11 = *(_DWORD *)(*((_DWORD *)this + 3) + 1092);
      }
      *(_DWORD *)(v11 + 168) = a2;
      CEntity::RegisterReference(
        *(CEntity **)(*(_DWORD *)(*((_DWORD *)this + 3) + 1092) + 168),
        (CEntity **)(*(_DWORD *)(*((_DWORD *)this + 3) + 1092) + 168));
    }
    return CTaskComplexProstituteSolicit::CreateSubTask(this, 907, a2);
  }
  else
  {
    *((_WORD *)this + 22) |= 4u;
    return 0;
  }
}


// ============================================================

// Address: 0x51b6b0
// Original: _ZN29CTaskComplexProstituteSolicit13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexProstituteSolicit::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexProstituteSolicit::CreateSubTask(CTaskComplexProstituteSolicit *this, int a2, CPed *a3)
{
  int v4; // r4
  unsigned int v5; // r1
  CEntity *v6; // r5
  char v7; // r0
  __int64 v9; // [sp+8h] [bp-90h]
  int v10; // [sp+10h] [bp-88h]
  float v11; // [sp+28h] [bp-70h] BYREF
  float v12; // [sp+34h] [bp-64h] BYREF
  _BYTE v13[64]; // [sp+40h] [bp-58h] BYREF
  int v14; // [sp+80h] [bp-18h]
  int v15; // [sp+84h] [bp-14h]

  v4 = 0;
  if ( a2 > 724 )
  {
    switch ( a2 )
    {
      case 725:
        *((_WORD *)this + 22) = *((_WORD *)this + 22) & 0xFFFC | 1;
        v4 = CTask::operator new((CTask *)&dword_24, 0x2D5u);
        CTaskComplexCarDrive::CTaskComplexCarDrive(
          (CTaskComplexCarDrive *)v4,
          *(CVehicle **)(*((_DWORD *)this + 3) + 1424));
        break;
      case 907:
        v14 = 0;
        v15 = 0;
        Invert(*(const CMatrix **)(*(_DWORD *)(*((_DWORD *)this + 3) + 1424) + 20), (CMatrix *)v13);
        CCarEnterExit::GetPositionToOpenCarDoor(
          (CCarEnterExit *)&v12,
          *(const CVehicle **)(*((_DWORD *)this + 3) + 1424),
          10);
        CCarEnterExit::GetPositionToOpenCarDoor(
          (CCarEnterExit *)&v11,
          *(const CVehicle **)(*((_DWORD *)this + 3) + 1424),
          8);
        operator*();
        v4 = CTask::operator new((CTask *)&dword_58, v5);
        v6 = *(CEntity **)(*((_DWORD *)this + 3) + 1424);
        CTaskComplex::CTaskComplex((CTaskComplex *)v4);
        *(_QWORD *)(v4 + 24) = 0x400000003F800000LL;
        *(_QWORD *)(v4 + 32) = 0x4000000000000000LL;
        *(_DWORD *)v4 = &off_668978;
        *(_DWORD *)(v4 + 16) = 50000;
        *(_DWORD *)(v4 + 20) = 1000;
        *(_WORD *)(v4 + 48) = 0;
        *(_WORD *)(v4 + 60) = 0;
        *(_DWORD *)(v4 + 40) = 0;
        *(_DWORD *)(v4 + 44) = 0;
        *(_DWORD *)(v4 + 52) = 0;
        *(_DWORD *)(v4 + 56) = 0;
        *(_DWORD *)(v4 + 64) = &off_66D3DC;
        v7 = *(_BYTE *)(v4 + 84);
        *(_DWORD *)(v4 + 72) = 0;
        *(_DWORD *)(v4 + 76) = 0;
        *(_DWORD *)(v4 + 80) = 6;
        *(_BYTE *)(v4 + 84) = v7 & 0xF0;
        *(_DWORD *)(v4 + 68) = 0;
        *(_DWORD *)(v4 + 12) = v6;
        if ( v6 )
          CEntity::RegisterReference(v6, (CEntity **)(v4 + 12));
        *(_DWORD *)(v4 + 76) = v10;
        *(_QWORD *)(v4 + 68) = v9;
        CMatrix::~CMatrix((CMatrix *)v13);
        break;
      case 920:
        v4 = CTask::operator new((CTask *)&word_28, 0x398u);
        CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(
          (CTaskComplexTurnToFaceEntityOrCoord *)v4,
          *((CEntity **)this + 3),
          0.5,
          0.2);
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 203:
        v4 = CTask::operator new((CTask *)&dword_20, 0xCBu);
        CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 5000, 0, 0, 8.0);
        break;
      case 700:
        v4 = CTask::operator new((CTask *)&dword_50, 0x2BCu);
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
          (CTaskComplexEnterCarAsPassenger *)v4,
          *(CVehicle **)(*((_DWORD *)this + 3) + 1424),
          8,
          0);
        break;
      case 704:
        v4 = CTask::operator new((CTask *)&dword_34, 0x2C0u);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar(
          (CTaskComplexLeaveCar *)v4,
          *(CVehicle **)(*((_DWORD *)this + 3) + 1424),
          0,
          0,
          1,
          0);
        break;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x51b920
// Original: _ZN29CTaskComplexProstituteSolicit17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexProstituteSolicit::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexProstituteSolicit::CreateNextSubTask(
        CTaskComplexProstituteSolicit *this,
        CPed *a2,
        CPed *a3)
{
  CPed *v5; // r1
  int v6; // r0
  int v7; // r1
  int v9; // r0
  int v10; // r1
  __int64 *v11; // r2
  __int64 v12; // d16
  const char *v13; // r0
  CPlayerPed *PlayerPed; // r0
  unsigned __int8 v15; // r1
  const char *v16; // r0
  const char *v17; // r0
  bool v18; // [sp+4h] [bp-34h]
  bool v19; // [sp+4h] [bp-34h]
  bool v20; // [sp+4h] [bp-34h]

  v5 = (CPed *)*((_DWORD *)this + 3);
  if ( !v5 )
    return 0;
  if ( !CTaskComplexProstituteSolicit::IsTaskValid(a2, v5, a3) )
    *((_WORD *)this + 22) |= 4u;
  v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v6 <= 724 )
  {
    switch ( v6 )
    {
      case 203:
        if ( (*((_BYTE *)this + 45) & 4) != 0 )
        {
          if ( byte_796856
            || (PlayerPed = (CPlayerPed *)FindPlayerPed(-1),
                *(int *)(CPlayerPed::GetPlayerInfoForThisPlayerPed(PlayerPed) + 184) > 19) )
          {
            v7 = 700;
          }
          else
          {
            CMessages::ClearMessages(0, v15);
            v16 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_06");
            CMessages::AddMessage((CMessages *)"PROS_06", v16, (unsigned __int16 *)&elf_hash_bucket[437], 1u, 1u, v18);
            v17 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_09");
            CMessages::AddMessage((CMessages *)"PROS_09", v17, (unsigned __int16 *)&elf_hash_bucket[687], 1u, 1u, v20);
            v7 = 1302;
          }
          return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
        }
        goto LABEL_15;
      case 700:
        CPed::Say(a2, 0xC5u, 0, 1.0, 0, 0, 0);
        v9 = *(_DWORD *)(*((_DWORD *)this + 3) + 1424);
        v10 = *(_DWORD *)(v9 + 20);
        v11 = (__int64 *)(v10 + 48);
        if ( !v10 )
          v11 = (__int64 *)(v9 + 4);
        v7 = 725;
        v12 = *v11;
        *((_DWORD *)this + 6) = *((_DWORD *)v11 + 2);
        *((_QWORD *)this + 2) = v12;
        return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
      case 704:
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"TaskProzzy",
          a2,
          *((_DWORD *)this + 3),
          2500,
          -1,
          0,
          0,
          0.25,
          500,
          3,
          0);
LABEL_15:
        v7 = 1302;
        return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
    }
    return 0;
  }
  if ( v6 == 725 )
  {
    v7 = 704;
    return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
  }
  if ( v6 == 920 )
  {
    CPed::Say(a2, 0xC0u, 0, 1.0, 0, 0, 0);
    v13 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_04");
    CMessages::AddMessage((CMessages *)"PROS_04", v13, (unsigned __int16 *)&elf_hash_bucket[1187], 1u, 1u, v19);
    v7 = 203;
    return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
  }
  if ( v6 != 907 )
    return 0;
  IKChainManager_c::LookAt(
    (int)&g_ikChainMan,
    (int)"TaskProzzy",
    a2,
    *((_DWORD *)this + 3),
    5000,
    -1,
    0,
    0,
    0.25,
    500,
    3,
    0);
  v7 = 920;
  return CTaskComplexProstituteSolicit::CreateSubTask(this, v7, a2);
}


// ============================================================

// Address: 0x51bb48
// Original: _ZN29CTaskComplexProstituteSolicit14ControlSubTaskEP4CPed
// Demangled: CTaskComplexProstituteSolicit::ControlSubTask(CPed *)
int __fastcall CTaskComplexProstituteSolicit::ControlSubTask(CTaskComplexProstituteSolicit *this, CPed *a2, CPed *a3)
{
  __int16 v5; // r0
  __int16 v6; // r0
  int IsTaskValid; // r0
  __int16 v8; // r1
  int v9; // r11
  _DWORD *v10; // r9
  CPed *v11; // r0
  int result; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r2
  float32x2_t v17; // d16
  unsigned __int64 v18; // d1
  CPed *v19; // r0
  unsigned int v20; // r5
  __int16 v21; // r1
  int v22; // r0
  float32x2_t v23; // d17
  float v24; // s0
  __int16 v25; // r0
  float32x2_t v26; // d16
  unsigned __int64 v27; // d1
  float v28; // s18
  float v29; // r2
  int PlayerWanted; // r12
  int v31; // r8
  __int16 v32; // r0
  int v33; // lr
  _DWORD *v34; // r1
  bool v35; // zf
  int v36; // r0
  int v37; // r3
  char *v38; // r5
  CWorld *v39; // r0
  _DWORD *v40; // r6
  float32x2_t v41; // d16
  unsigned __int64 v42; // d1
  float v43; // s0
  bool v44; // zf
  int v45; // r2
  int v46; // r3
  int v47; // r2
  int v48; // r1
  int v49; // r3
  const CVector *v50; // r1
  int v51; // r5
  int IsLineOfSightClear; // r0
  int v53; // r1
  __int16 v54; // r0
  int v55; // r6
  _BOOL4 v56; // r5
  const char *v57; // r1
  unsigned int v58; // r2
  __int16 v59; // r0
  bool v60; // zf
  int v61; // r8
  const char *v62; // r0
  unsigned int v63; // r6
  CWanted *v64; // r0
  __int16 v65; // r0
  const char *v66; // r1
  __int16 v67; // r0
  int v68; // r2
  unsigned int v69; // r6
  int v70; // r0
  int v71; // r0
  _WORD *v72; // r5
  const char *v73; // r0
  CPad *Pad; // r0
  int v75; // r1
  int v76; // r0
  int v77; // r2
  int v78; // r3
  int v79; // r2
  float v80; // s2
  int v81; // r3
  double v82; // d16
  int v83; // r2
  double *v84; // r1
  unsigned __int16 v85; // r1
  int v86; // r0
  __int16 v87; // r0
  CPlayerPed *v88; // r0
  float v89; // r2
  CPlayerInfo *PlayerInfoForThisPlayerPed; // r6
  int v91; // r0
  __int16 v92; // r1
  const char *v93; // r0
  const char *v94; // r0
  int v95; // [sp+4h] [bp-6Ch]
  bool v96; // [sp+4h] [bp-6Ch]
  bool v97; // [sp+14h] [bp-5Ch]
  int v98; // [sp+18h] [bp-58h]
  unsigned int v99; // [sp+1Ch] [bp-54h]
  double v100; // [sp+20h] [bp-50h] BYREF
  int v101; // [sp+28h] [bp-48h]

  v5 = *((_WORD *)this + 22);
  if ( (v5 & 0x102) == 0x100 )
  {
    v6 = v5 & 0xFEFF;
  }
  else
  {
    if ( (v5 & 0x102) != 2 )
      goto LABEL_6;
    v6 = v5 | 0x100;
  }
  *((_WORD *)this + 22) = v6;
LABEL_6:
  IsTaskValid = CTaskComplexProstituteSolicit::IsTaskValid(a2, *((CPed **)this + 3), a3);
  v8 = *((_WORD *)this + 22);
  if ( !IsTaskValid )
  {
    v8 = v8 & 0xFEFB | 4;
    *((_WORD *)this + 22) = v8;
  }
  v9 = (int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
  if ( (v8 & 4) != 0 )
  {
    if ( *((_WORD *)this + 21) )
    {
      v13 = *((unsigned __int16 *)this + 21) - v9;
      *((_WORD *)this + 21) = v13;
      if ( v13 << 16 >= 1 )
        return *((_DWORD *)this + 2);
      CAEPedSpeechAudioEntity::SetCJMood(
        (CAEPedSpeechAudioEntity *)byte_9,
        (__int16)&elf_hash_chain[13526],
        0xFFFFFFFF,
        -1,
        -1,
        v95);
      CPed::Say(*((CPed **)this + 3), 0xBu, 0, 1.0, 0, 0, 0);
      v10 = (_DWORD *)((char *)this + 8);
      *((_WORD *)this + 21) = 0;
    }
    else
    {
      v10 = (_DWORD *)((char *)this + 8);
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 704
        && (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(*(_DWORD *)*v10 + 28))(*v10, a2, 1, 0) == 1 )
      {
        return CTaskComplexProstituteSolicit::CreateSubTask(this, 704, a2);
      }
    }
    return *v10;
  }
  v10 = (_DWORD *)((char *)this + 8);
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 203 )
  {
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 20))(*v10) == 907
      || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 20))(*v10) == 700 )
    {
      v14 = *(_DWORD *)(*((_DWORD *)this + 3) + 1424);
      v15 = *(_DWORD *)(v14 + 20);
      v16 = v15 + 48;
      if ( !v15 )
        v16 = v14 + 4;
      v17.n64_u64[0] = vsub_f32(*(float32x2_t *)(v16 + 4), *(float32x2_t *)((char *)this + 20)).n64_u64[0];
      v18 = vmul_f32(v17, v17).n64_u64[0];
      if ( (float)((float)((float)((float)(*(float *)v16 - *((float *)this + 4))
                                 * (float)(*(float *)v16 - *((float *)this + 4)))
                         + *(float *)&v18)
                 + *((float *)&v18 + 1)) <= 16.0 )
        return *v10;
      goto LABEL_29;
    }
    if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v10 + 20))(*v10) != 725 )
      return *v10;
    v20 = CTimer::m_snTimeInMilliseconds;
    if ( dword_952054 == 1 )
    {
      *((_DWORD *)this + 7) = CTimer::m_snTimeInMilliseconds;
      v21 = *((_WORD *)this + 22);
      *((_WORD *)this + 21) = 8000;
      result = *((_DWORD *)this + 2);
      *((_WORD *)this + 22) = v21 & 0xF67F | 0x880;
      return result;
    }
    v22 = *(_DWORD *)(*((_DWORD *)this + 3) + 1424);
    v23.n64_u64[0] = *(unsigned __int64 *)(v22 + 76);
    v24 = *(float *)(v22 + 72) * 50.0;
    v25 = *((_WORD *)this + 22);
    v26.n64_u64[0] = vmul_f32(v23, (float32x2_t)0x4248000042480000LL).n64_u64[0];
    v27 = vmul_f32(v26, v26).n64_u64[0];
    v28 = (float)((float)(v24 * v24) + *(float *)&v27) + *((float *)&v27 + 1);
    if ( v28 >= 0.5625 || (v25 & 0x80) != 0 )
    {
      *((_WORD *)this + 22) = v25 & 0xFF7F;
      *((_DWORD *)this + 7) = v20;
    }
    PlayerWanted = FindPlayerWanted(-1);
    v99 = v20;
    if ( v20 > *((_DWORD *)this + 8) )
    {
      v31 = 0;
      v32 = *((_WORD *)this + 22) & 0xFFC7;
      *((_DWORD *)this + 8) = v20 + 1000;
      *((_WORD *)this + 22) = v32;
      v33 = *((_DWORD *)a2 + 272) + 304;
      do
      {
        v34 = *(_DWORD **)(v33 + 4 * v31);
        if ( v34 )
        {
          v29 = *((float *)this + 3);
          v35 = v34 == (_DWORD *)LODWORD(v29);
          if ( v34 != (_DWORD *)LODWORD(v29) )
            v35 = v34[359] == 22;
          if ( !v35 )
          {
            v36 = *((_DWORD *)a2 + 5);
            v37 = v34[5];
            v38 = (char *)(v36 + 48);
            v35 = v36 == 0;
            v39 = (CWorld *)(v34 + 1);
            if ( v35 )
              v38 = (char *)a2 + 4;
            v40 = v34 + 1;
            if ( v37 )
              v40 = (_DWORD *)(v37 + 48);
            v41.n64_u64[0] = vsub_f32(*(float32x2_t *)(v40 + 1), *(float32x2_t *)(v38 + 4)).n64_u64[0];
            v42 = vmul_f32(v41, v41).n64_u64[0];
            v43 = (float)((float)((float)(*(float *)v40 - *(float *)v38) * (float)(*(float *)v40 - *(float *)v38))
                        + *(float *)&v42)
                + *((float *)&v42 + 1);
            if ( v43 < 56.25 )
              *((_WORD *)this + 22) |= 0x10u;
            if ( v43 < 400.0 )
              *((_WORD *)this + 22) |= 8u;
            if ( v34[359] == 6 )
            {
              v44 = PlayerWanted == 0;
              if ( PlayerWanted )
                v44 = (*((_WORD *)this + 22) & 2) == 0;
              if ( !v44 && *(int *)(PlayerWanted + 44) <= 0 )
              {
                v45 = *(_DWORD *)(LODWORD(v29) + 1424);
                v98 = *(_DWORD *)(v45 + 28);
                v46 = *(_DWORD *)(v45 + 32);
                *(_DWORD *)(v45 + 28) = v98 & 0xFFFFFFFE;
                *(_DWORD *)(v45 + 32) = v46;
                v47 = *((_DWORD *)this + 3);
                v48 = v34[5];
                v49 = *(_DWORD *)(v47 + 20);
                if ( v48 )
                  v39 = (CWorld *)(v48 + 48);
                v50 = (const CVector *)(v49 + 48);
                if ( !v49 )
                  v50 = (const CVector *)(v47 + 4);
                v51 = PlayerWanted;
                IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                       v39,
                                       v50,
                                       (const CVector *)((char *)&stderr + 1),
                                       1,
                                       0,
                                       (bool)&stderr + 1,
                                       0,
                                       (CColLine *)((char *)&stderr + 1),
                                       0,
                                       v97);
                PlayerWanted = v51;
                v53 = *(_DWORD *)(*((_DWORD *)this + 3) + 1424);
                LODWORD(v29) = *(_DWORD *)(v53 + 28) & 0xFFFFFFFE | v98 & 1;
                *(float *)(v53 + 28) = v29;
                if ( IsLineOfSightClear == 1 )
                  *((_WORD *)this + 22) |= 0x20u;
              }
            }
          }
        }
        ++v31;
      }
      while ( v31 != 16 );
    }
    v54 = *((_WORD *)this + 22);
    if ( (v54 & 1) != 0 )
    {
      if ( v28 < 0.5625 && v99 - *((_DWORD *)this + 7) > 0xFA0 )
      {
        if ( (v54 & 8) != 0 )
        {
          if ( (*((_WORD *)this + 22) & 0x1000) == 0 )
          {
            v62 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_01");
            CMessages::AddMessage((CMessages *)"PROS_01", v62, (unsigned __int16 *)&elf_hash_bucket[687], 1u, 1u, v95);
            *((_WORD *)this + 22) |= 0x1000u;
          }
        }
        else
        {
          *((_DWORD *)this + 9) = v99;
          *((_WORD *)this + 22) = v54 & 0xFFFC | 2;
          v57 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_02");
          CMessages::AddMessage((CMessages *)"PROS_02", v57, (unsigned __int16 *)&elf_hash_bucket[437], 1u, 1u, v95);
        }
      }
      return *v10;
    }
    if ( (v54 & 2) == 0 )
      return *v10;
    v55 = PlayerWanted;
    if ( (v54 & 0x40) != 0 )
    {
      *((_WORD *)this + 21) = 15000;
      *((_WORD *)this + 22) = v54 & 0xFFBF;
      CStats::IncrementStat((CStats *)((char *)&dword_BC + 2), 0, v29);
    }
    if ( CPad::GetAccelerate((CPad *)&Pads) )
      v56 = 1;
    else
      v56 = CPad::GetBrake((CPad *)&Pads) != 0;
    v58 = rand();
    v59 = *((_WORD *)this + 22);
    v60 = v55 == 0;
    v61 = 0;
    if ( v55 )
      v60 = (v59 & 0x20) == 0;
    if ( !v60 )
    {
      if ( *(int *)(v55 + 44) > 0 )
      {
        v61 = 0;
        if ( !v56 )
          goto LABEL_87;
        goto LABEL_84;
      }
      v63 = v58;
      v64 = (CWanted *)FindPlayerWanted(-1);
      v61 = 1;
      CWanted::SetWantedLevel(v64, 1);
      v59 = *((_WORD *)this + 22);
      v58 = v63;
    }
    if ( !v56 )
    {
LABEL_87:
      if ( !(v61 | ((unsigned __int8)(v59 & 0x10) >> 4)) )
      {
        v69 = v58;
        v70 = *((unsigned __int16 *)this + 20) - v9;
        *((_WORD *)this + 20) = v70;
        if ( v70 << 16 >= 0x10000 )
        {
          v72 = (_WORD *)((char *)this + 42);
        }
        else
        {
          rand();
          v72 = (_WORD *)((char *)this + 42);
          v71 = *((__int16 *)this + 21);
          if ( v71 < 10001 )
          {
            if ( v71 < 5001 )
            {
              if ( v71 <= 1000 )
              {
                *((_WORD *)this + 20) = 850;
                Pad = (CPad *)CPad::GetPad(0, 5001);
                CPad::StartShake(Pad, 1000, 0x78u, 0);
              }
              else
              {
                *((_WORD *)this + 20) = 120;
              }
            }
            else
            {
              *((_WORD *)this + 20) = 450;
            }
          }
          else
          {
            *((_WORD *)this + 20) = 850;
          }
          v75 = *((_DWORD *)this + 3);
          v76 = *(_DWORD *)(v75 + 1424);
          v77 = *(_DWORD *)(v76 + 20);
          v78 = v77 + 48;
          if ( !v77 )
            v78 = v76 + 4;
          v79 = *(_DWORD *)(v75 + 20);
          v80 = *(float *)(v78 + 4);
          v81 = v79 + 48;
          if ( !v79 )
            v81 = v75 + 4;
          v82 = *(double *)v81;
          v101 = *(_DWORD *)(v81 + 8);
          v100 = v82;
          if ( v69 << 31 )
          {
            v84 = &v100;
          }
          else
          {
            v83 = *((_DWORD *)a2 + 5);
            v84 = (double *)(v83 + 48);
            if ( !v83 )
              v84 = (double *)((char *)a2 + 4);
          }
          *(float *)&v95 = *((float *)v84 + 1) - v80;
          CPhysical::ApplyTurnForce();
          CAEVehicleAudioEntity::AddAudioEvent(
            (CAEVehicleAudioEntity *)(*(_DWORD *)(*((_DWORD *)this + 3) + 1424) + 316),
            108,
            0.0);
          if ( v69 >= 0x10000000 && (*((_WORD *)this + 22) & 0x200) != 0 )
          {
            if ( (unsigned __int16)v69 <= 0xFEu )
              v85 = 112;
            else
              v85 = 116;
            CPed::Say(a2, v85, 0, 0.5, 0, 0, 0);
          }
        }
        v86 = (unsigned __int16)*v72 - v9;
        *v72 = v86;
        if ( v86 << 16 < 0x10000 )
        {
          v87 = *((_WORD *)this + 22);
          *((_WORD *)this + 21) = 3000;
          *((_WORD *)this + 22) = v87 & 0xFFF9 | 4;
        }
        if ( v99 - *((_DWORD *)this + 9) > 0x3E8 )
        {
          v88 = (CPlayerPed *)*((_DWORD *)this + 3);
          *((_DWORD *)this + 9) = v99;
          PlayerInfoForThisPlayerPed = (CPlayerInfo *)CPlayerPed::GetPlayerInfoForThisPlayerPed(v88);
          v91 = *((_DWORD *)PlayerInfoForThisPlayerPed + 46);
          if ( byte_796856 )
          {
            *((_DWORD *)PlayerInfoForThisPlayerPed + 46) = v91 + 2;
          }
          else if ( v91 < 2 )
          {
            *((_DWORD *)PlayerInfoForThisPlayerPed + 46) = 0;
            v92 = *((_WORD *)this + 22);
            *((_WORD *)this + 21) = 0;
            *((_WORD *)this + 22) = v92 & 0xFFF9 | 4;
            CMessages::ClearMessages(0, v92);
            v93 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_06");
            CMessages::AddMessage((CMessages *)"PROS_06", v93, (unsigned __int16 *)&elf_hash_bucket[437], 1u, 1u, v95);
            v94 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_09");
            CMessages::AddMessage((CMessages *)"PROS_09", v94, (unsigned __int16 *)&elf_hash_bucket[687], 1u, 1u, v96);
          }
          else
          {
            *((_DWORD *)PlayerInfoForThisPlayerPed + 46) = v91 - 2;
            CStats::IncrementStat((CStats *)((char *)&dword_20 + 1), 0, v89);
            ++*((_WORD *)a2 + 943);
          }
          if ( (*((_BYTE *)this + 45) & 8) == 0 )
            CPlayerInfo::AddHealth(PlayerInfoForThisPlayerPed, 2);
        }
        return *v10;
      }
      *((_DWORD *)this + 7) = v99;
      v67 = v59 & 0xF7FC;
      v68 = *((__int16 *)this + 21);
      *((_WORD *)this + 22) = v67 | 0x801;
      if ( v68 <= 2999 )
      {
        *((_WORD *)this + 21) = 0;
        *((_WORD *)this + 22) = v67 | 0x805;
        return *v10;
      }
      v73 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_01");
      CMessages::AddMessage((CMessages *)"PROS_01", v73, (unsigned __int16 *)&elf_hash_bucket[687], 1u, 1u, v95);
      goto LABEL_94;
    }
LABEL_84:
    *((_DWORD *)this + 7) = v99;
    v65 = v59 & 0xF7FC;
    *((_WORD *)this + 22) = v65 | 0x801;
    if ( v58 < 0x1FFFFFFF || *((__int16 *)this + 21) <= 2999 )
    {
      *((_WORD *)this + 21) = 0;
      *((_WORD *)this + 22) = v65 | 0x805;
      v66 = (const char *)CText::Get((CText *)TheText, (CKeyGen *)"PROS_09");
      CMessages::AddMessage((CMessages *)"PROS_09", v66, (unsigned __int16 *)&elf_hash_bucket[687], 1u, 1u, v95);
      return *v10;
    }
LABEL_94:
    *((_WORD *)this + 21) = 8000;
    return *v10;
  }
  if ( CPad::ConversationYesJustDown((CPad *)&Pads) != 1 )
  {
    if ( CPad::ConversationNoJustDown((CPad *)&Pads) == 1 )
    {
      v19 = (CPed *)*((_DWORD *)this + 3);
      if ( v19 )
        CPed::Say(v19, 0xC3u, 0, 1.0, 0, 0, 0);
LABEL_29:
      *((_WORD *)this + 22) |= 4u;
      return *v10;
    }
    return *v10;
  }
  v11 = (CPed *)*((_DWORD *)this + 3);
  *((_WORD *)this + 22) |= 0x400u;
  if ( v11 )
    CPed::Say(v11, 0xC4u, 0, 1.0, 0, 0, 0);
  return (*(int (__fastcall **)(CTaskComplexProstituteSolicit *, CPed *))(*(_DWORD *)this + 40))(this, a2);
}


// ============================================================

// Address: 0x51c670
// Original: _ZNK29CTaskComplexProstituteSolicit5CloneEv
// Demangled: CTaskComplexProstituteSolicit::Clone(void)
int __fastcall CTaskComplexProstituteSolicit::Clone(CTaskComplexProstituteSolicit *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r4
  __int16 v5; // r3

  v3 = CTask::operator new((CTask *)&word_30, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  v5 = *(_WORD *)(v3 + 44);
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 850;
  *(_DWORD *)v3 = &off_66C074;
  *(_WORD *)(v3 + 44) = v5 & 0xE000 | 0x2C0;
  *(_DWORD *)(v3 + 12) = v4;
  CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x51c6bc
// Original: _ZNK29CTaskComplexProstituteSolicit11GetTaskTypeEv
// Demangled: CTaskComplexProstituteSolicit::GetTaskType(void)
int __fastcall CTaskComplexProstituteSolicit::GetTaskType(CTaskComplexProstituteSolicit *this)
{
  return 1309;
}


// ============================================================

// Address: 0x51c6c4
// Original: _ZN29CTaskComplexProstituteSolicit9SerializeEv
// Demangled: CTaskComplexProstituteSolicit::Serialize(void)
void __fastcall CTaskComplexProstituteSolicit::Serialize(CTaskComplexProstituteSolicit *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CPed *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexProstituteSolicit *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexProstituteSolicit *))(*(_DWORD *)this + 20))(this) == 1309 )
  {
    v5 = (CPed *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolPedRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexProstituteSolicit *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1309, v10);
  }
}


// ============================================================
