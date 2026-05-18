
// Address: 0x18a0cc
// Original: j__ZN18CTaskSimpleJetPack13ProcessThrustEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessThrust(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::ProcessThrust(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack13ProcessThrustEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18cb3c
// Original: j__ZN18CTaskSimpleJetPack15DoJetPackEffectEP4CPed
// Demangled: CTaskSimpleJetPack::DoJetPackEffect(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::DoJetPackEffect(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack15DoJetPackEffectEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18d340
// Original: j__ZN18CTaskSimpleJetPackC2EPK7CVectorfiP7CEntity
// Demangled: CTaskSimpleJetPack::CTaskSimpleJetPack(CVector const*,float,int,CEntity *)
// attributes: thunk
void __fastcall CTaskSimpleJetPack::CTaskSimpleJetPack(
        CTaskSimpleJetPack *this,
        const CVector *a2,
        float a3,
        int a4,
        CEntity *a5)
{
  _ZN18CTaskSimpleJetPackC2EPK7CVectorfiP7CEntity(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18dcc8
// Original: j__ZN18CTaskSimpleJetPack17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleJetPack::ApplyRollAndPitch(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::ApplyRollAndPitch(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack17ApplyRollAndPitchEP4CPed(this, a2);
}


// ============================================================

// Address: 0x190814
// Original: j__ZN18CTaskSimpleJetPack13RenderJetPackEP4CPed
// Demangled: CTaskSimpleJetPack::RenderJetPack(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::RenderJetPack(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack13RenderJetPackEP4CPed(this, a2);
}


// ============================================================

// Address: 0x192588
// Original: j__ZN18CTaskSimpleJetPack19ProcessControlInputEP10CPlayerPed
// Demangled: CTaskSimpleJetPack::ProcessControlInput(CPlayerPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::ProcessControlInput(CTaskSimpleJetPack *this, CPlayerPed *a2)
{
  return _ZN18CTaskSimpleJetPack19ProcessControlInputEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x192ef0
// Original: j__ZN18CTaskSimpleJetPack12ProcessAnimsEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessAnims(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::ProcessAnims(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack12ProcessAnimsEP4CPed(this, a2);
}


// ============================================================

// Address: 0x194a80
// Original: j__ZN18CTaskSimpleJetPack10CreateTaskEv
// Demangled: CTaskSimpleJetPack::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::CreateTask(CTaskSimpleJetPack *this)
{
  return _ZN18CTaskSimpleJetPack10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1997b0
// Original: j__ZN18CTaskSimpleJetPackD2Ev
// Demangled: CTaskSimpleJetPack::~CTaskSimpleJetPack()
// attributes: thunk
void __fastcall CTaskSimpleJetPack::~CTaskSimpleJetPack(CTaskSimpleJetPack *this)
{
  _ZN18CTaskSimpleJetPackD2Ev(this);
}


// ============================================================

// Address: 0x1a0b38
// Original: j__ZN18CTaskSimpleJetPack11DropJetPackEP4CPed
// Demangled: CTaskSimpleJetPack::DropJetPack(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleJetPack::DropJetPack(CTaskSimpleJetPack *this, CPed *a2)
{
  return _ZN18CTaskSimpleJetPack11DropJetPackEP4CPed(this, a2);
}


// ============================================================

// Address: 0x496d60
// Original: _ZN18CTaskSimpleJetPack10CreateTaskEv
// Demangled: CTaskSimpleJetPack::CreateTask(void)
void __fastcall CTaskSimpleJetPack::CreateTask(CTaskSimpleJetPack *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  int v6; // r2
  char v7; // r4
  int v8; // r2
  char v9; // r4
  char *v10; // r1
  int v11; // r2
  char v12; // r4
  int Vehicle; // r0
  char v14; // r4
  char v15; // r4
  CEntity *v16; // r4
  CTaskSimpleJetPack *v17; // r0
  CPools *v18; // [sp+4h] [bp-24h] BYREF
  int v19; // [sp+8h] [bp-20h] BYREF
  int v20; // [sp+Ch] [bp-1Ch] BYREF
  float v21; // [sp+10h] [bp-18h] BYREF
  _BYTE v22[20]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v22, &byte_9[3], a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v21, byte_4, v4);
  v7 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, (char *)&stderr + 2, v6);
    UseDataFence = v7;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v20, byte_4, v6);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v19, byte_4, v8);
  if ( v19 == 2 )
  {
    v14 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, v11);
      UseDataFence = v14;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v11);
    v10 = (char *)v18 + 1;
    if ( v18 != (CPools *)-1 )
    {
      Vehicle = CPools::GetVehicle(v18, (int)v10);
      goto LABEL_24;
    }
LABEL_25:
    v16 = 0;
    goto LABEL_26;
  }
  if ( v19 == 4 )
  {
    v15 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, v11);
      UseDataFence = v15;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v11);
    v10 = (char *)v18 + 1;
    if ( v18 != (CPools *)-1 )
    {
      Vehicle = CPools::GetObject(v18, (int)v10);
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  if ( v19 != 3 )
    goto LABEL_25;
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, v11);
  v10 = (char *)v18 + 1;
  if ( v18 == (CPools *)-1 )
    goto LABEL_25;
  Vehicle = CPools::GetPed(v18, (int)v10);
LABEL_24:
  v16 = (CEntity *)Vehicle;
LABEL_26:
  v17 = (CTaskSimpleJetPack *)CTask::operator new((CTask *)&dword_70, (unsigned int)v10);
  CTaskSimpleJetPack::CTaskSimpleJetPack(v17, (const CVector *)v22, v21, v20, v16);
}


// ============================================================

// Address: 0x530b5c
// Original: _ZN18CTaskSimpleJetPackC2EPK7CVectorfiP7CEntity
// Demangled: CTaskSimpleJetPack::CTaskSimpleJetPack(CVector const*,float,int,CEntity *)
void __fastcall CTaskSimpleJetPack::CTaskSimpleJetPack(
        CTaskSimpleJetPack *this,
        const CVector *a2,
        float a3,
        int a4,
        CEntity *a5)
{
  __int64 v9; // d16

  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 20) = 0;
  *((float *)this + 21) = a3;
  *((_DWORD *)this + 22) = a4;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_WORD *)((char *)this + 13) = 0;
  *(_DWORD *)this = &off_66CC38;
  *((_DWORD *)this + 24) = a5;
  if ( a5 )
    CEntity::RegisterReference(a5, (CEntity **)this + 24);
  if ( a2 )
  {
    v9 = *(_QWORD *)a2;
    *((_DWORD *)this + 20) = *((_DWORD *)a2 + 2);
    *((_QWORD *)this + 9) = v9;
  }
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
}


// ============================================================

// Address: 0x530bec
// Original: _ZN18CTaskSimpleJetPackD2Ev
// Demangled: CTaskSimpleJetPack::~CTaskSimpleJetPack()
void __fastcall CTaskSimpleJetPack::~CTaskSimpleJetPack(CTaskSimpleJetPack *this)
{
  int v2; // r0
  CBaseModelInfo *ClumpModelInfo; // r0
  FxSystem_c *v4; // r0
  FxSystem_c *v5; // r0
  CEntity *v6; // r0

  v2 = *((_DWORD *)this + 16);
  *(_DWORD *)this = &off_66CC38;
  if ( v2 )
  {
    ClumpModelInfo = (CBaseModelInfo *)CVisibilityPlugins::GetClumpModelInfo();
    CBaseModelInfo::RemoveRef(ClumpModelInfo);
    if ( GetFirstAtomic() && j_RpSkinGeometryGetSkin() )
      RpClumpForAllAtomics(*((_DWORD *)this + 16), AtomicRemoveAnimFromSkinCB, 0);
    RpClumpDestroy();
    *((_DWORD *)this + 16) = 0;
  }
  v4 = (FxSystem_c *)*((_DWORD *)this + 25);
  if ( v4 )
  {
    FxSystem_c::Kill(v4);
    *((_DWORD *)this + 25) = 0;
  }
  v5 = (FxSystem_c *)*((_DWORD *)this + 26);
  if ( v5 )
  {
    FxSystem_c::Kill(v5);
    *((_DWORD *)this + 26) = 0;
  }
  v6 = (CEntity *)*((_DWORD *)this + 24);
  if ( v6 )
    CEntity::CleanUpOldReference(v6, (CEntity **)this + 24);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x530c68
// Original: _ZN18CTaskSimpleJetPack17StopJetPackEffectEv
// Demangled: CTaskSimpleJetPack::StopJetPackEffect(void)
FxSystem_c *__fastcall CTaskSimpleJetPack::StopJetPackEffect(CTaskSimpleJetPack *this)
{
  FxSystem_c *v2; // r0
  FxSystem_c *result; // r0

  v2 = (FxSystem_c *)*((_DWORD *)this + 25);
  if ( v2 )
  {
    FxSystem_c::Kill(v2);
    *((_DWORD *)this + 25) = 0;
  }
  result = (FxSystem_c *)*((_DWORD *)this + 26);
  if ( result )
  {
    FxSystem_c::Kill(result);
    result = 0;
    *((_DWORD *)this + 26) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x530c8c
// Original: _ZN18CTaskSimpleJetPackD0Ev
// Demangled: CTaskSimpleJetPack::~CTaskSimpleJetPack()
void __fastcall CTaskSimpleJetPack::~CTaskSimpleJetPack(CTaskSimpleJetPack *this)
{
  void *v1; // r0

  CTaskSimpleJetPack::~CTaskSimpleJetPack(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x530c9c
// Original: _ZN18CTaskSimpleJetPack13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleJetPack::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleJetPack::MakeAbortable(CTaskSimpleJetPack *this, CPed *a2, int a3, const CEvent *a4)
{
  bool v7; // zf
  FxSystem_c *v9; // r0
  FxSystem_c *v10; // r0

  if ( !a4 )
  {
LABEL_11:
    if ( *((_BYTE *)this + 12) && CPed::IsPlayer(a2) == 1 )
    {
      CPed::ReplaceWeaponWhenExitingVehicle(a2);
      *((_BYTE *)this + 12) = 0;
    }
    v9 = (FxSystem_c *)*((_DWORD *)this + 25);
    *((_BYTE *)this + 8) = 1;
    if ( v9 )
    {
      FxSystem_c::Kill(v9);
      *((_DWORD *)this + 25) = 0;
    }
    v10 = (FxSystem_c *)*((_DWORD *)this + 26);
    if ( v10 )
    {
      FxSystem_c::Kill(v10);
      *((_DWORD *)this + 26) = 0;
    }
    CAEPedAudioEntity::TurnOffJetPack((CPed *)((char *)a2 + 316));
    return 1;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    if ( *((float *)a2 + 337) > 0.0 )
      return 0;
    v7 = *((unsigned __int8 *)a2 + 1156) << 31 == 0;
    if ( !(*((unsigned __int8 *)a2 + 1156) << 31) )
      v7 = *((unsigned __int8 *)a2 + 69) << 31 == 0;
    if ( v7 )
      return 0;
  }
  if ( CPed::IsPlayer(a2) != 1 || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 58 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4) < 63 )
      return 0;
    goto LABEL_11;
  }
  return 1;
}


// ============================================================

// Address: 0x530d4c
// Original: _ZN18CTaskSimpleJetPack10ProcessPedEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessPed(CPed *)
int __fastcall CTaskSimpleJetPack::ProcessPed(CTaskSimpleJetPack *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  FxSystem_c *v6; // r0
  FxSystem_c *v7; // r0
  float v9; // s0
  float v10; // s2
  float v11; // r6
  float v12; // s16
  int v13; // s0
  int v14; // r0

  v4 = *((unsigned __int8 *)this + 8);
  v5 = *((unsigned __int8 *)this + 12);
  if ( v4 )
  {
    if ( v5 && CPed::IsPlayer(a2) == 1 )
      CPed::ReplaceWeaponWhenExitingVehicle(a2);
    v6 = (FxSystem_c *)*((_DWORD *)this + 25);
    if ( v6 )
    {
      FxSystem_c::Kill(v6);
      *((_DWORD *)this + 25) = 0;
    }
    v7 = (FxSystem_c *)*((_DWORD *)this + 26);
    if ( v7 )
    {
      FxSystem_c::Kill(v7);
      *((_DWORD *)this + 26) = 0;
    }
    return 1;
  }
  else
  {
    if ( !v5 )
    {
      if ( CPed::IsPlayer(a2) == 1 )
        CPed::RemoveWeaponWhenEnteringVehicle(a2, 1);
      *((_BYTE *)this + 12) = 1;
    }
    *((_DWORD *)a2 + 292) |= 0x100u;
    if ( CTaskSimpleJetPack::ProcessAnims(this, a2) == 1 )
    {
      if ( *((float *)a2 + 337) >= 1.0 )
      {
        if ( CPed::IsPlayer(a2) == 1 )
          CTaskSimpleJetPack::ProcessControlInput(this, a2);
      }
      else
      {
        *((_DWORD *)this + 5) = 0;
        *(_WORD *)((char *)this + 13) = 0;
        v9 = -1.0;
        if ( (rand() & 1) != 0 )
          v9 = 1.0;
        v10 = *((float *)this + 4) + v9;
        *((float *)this + 4) = v10;
        if ( v10 <= 3.0 )
        {
          if ( v10 < -3.0 )
            *((float *)this + 4) = -3.0;
        }
        else
        {
          *((float *)this + 4) = 3.0;
        }
        v11 = sinf((float)((float)(unsigned int)CTimer::m_snTimeInMilliseconds * 1.5708) / 1000.0);
        v12 = CTaskSimpleJetPack::JETPACK_TURN_RATE;
        v13 = rand();
        v14 = *((_DWORD *)a2 + 273);
        *((float *)a2 + 344) = *((float *)a2 + 344)
                             + (float)(*(float *)&CTimer::ms_fTimeStep
                                     * (float)((float)(v12 * v11) * (float)((float)((float)v13 * 4.6566e-10) + 0.0)));
        if ( v14 )
          *(_DWORD *)(v14 + 20) = 0;
      }
      CTaskSimpleJetPack::ProcessThrust(this, a2);
      if ( *((char *)this + 14) > 0 || fabsf(*((float *)this + 4)) > 0.1 )
        *((_DWORD *)a2 + 289) &= ~1u;
    }
    return 0;
  }
}


// ============================================================

// Address: 0x530f20
// Original: _ZN18CTaskSimpleJetPack12ProcessAnimsEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessAnims(CPed *)
int __fastcall CTaskSimpleJetPack::ProcessAnims(CTaskSimpleJetPack *this, CPed *a2, int a3)
{
  _DWORD *v5; // r5
  CBaseModelInfo *v6; // r6
  int v7; // r5

  if ( byte_714028 == 1 )
  {
    v5 = (_DWORD *)((char *)this + 64);
    if ( *((_DWORD *)this + 16) )
      goto LABEL_6;
    v6 = (CBaseModelInfo *)dword_91E280;
    *v5 = (*(int (__fastcall **)(int))(*(_DWORD *)dword_91E280 + 44))(dword_91E280);
    CBaseModelInfo::AddRef(v6);
  }
  else
  {
    CStreaming::RequestModel((CStreaming *)((char *)&elf_hash_bucket[29] + 2), 8, a3);
    v5 = (_DWORD *)((char *)this + 64);
  }
  if ( !*v5 )
    return 0;
LABEL_6:
  if ( *((unsigned __int8 *)a2 + 1156) << 31 )
  {
    if ( CPed::IsPlayer(a2) == 1 )
      CPlayerPed::SetRealMoveAnim(a2);
    return 1;
  }
  else
  {
    CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 312), 3u);
    v7 = 1;
    CPed::SetMoveState(a2, 1);
  }
  return v7;
}


// ============================================================

// Address: 0x530fb8
// Original: _ZN18CTaskSimpleJetPack19ProcessControlInputEP10CPlayerPed
// Demangled: CTaskSimpleJetPack::ProcessControlInput(CPlayerPed *)
int *__fastcall CTaskSimpleJetPack::ProcessControlInput(CTaskSimpleJetPack *this, CPlayerPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  float32x2_t v6; // d5
  CPad *PadFromPlayer; // r6
  int WeaponInfo; // r0
  int v11; // r0
  float PedWalkLeftRight; // s20
  CHID *PedWalkUpDown; // r0
  float v14; // s18
  float v15; // s16
  int InputType; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  float v20; // r0
  float v21; // s0
  float *v22; // r1
  float v23; // s22
  float v24; // s24
  float v25; // s26
  float v26; // s28
  float v27; // s22
  float v28; // r0
  _DWORD *v29; // r0
  float v30; // s0
  float v31; // s2
  float v32; // s4
  float v33; // r0
  char *v34; // r0
  int v35; // r1
  int v36; // r2
  float *v37; // r3
  float v38; // s2
  float v39; // s0
  float v40; // s8
  float v41; // s10
  int v42; // r0
  bool v43; // zf
  __int16 v44; // r0
  char v45; // r0
  int v46; // r4
  int v47; // r5
  int v48; // r0
  int LookRight; // r0
  _DWORD *v50; // r0
  int v51; // r1
  int *result; // r0
  float v53; // s4
  float v54; // s2
  float v55; // s4
  float v56; // [sp+0h] [bp-50h]

  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  CPed::GetWeaponSkill(a2);
  WeaponInfo = CWeaponInfo::GetWeaponInfo();
  if ( *(_DWORD *)WeaponInfo == 1 && (*(_BYTE *)(WeaponInfo + 24) & 2) != 0 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)a2 + 272) + 20);
    if ( v11 )
    {
      if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v11 + 20))(v11) )
        CTaskSimplePlayerOnFoot::ProcessPlayerWeapon(*(CTaskSimplePlayerOnFoot **)(*((_DWORD *)a2 + 272) + 20), a2);
    }
  }
  PedWalkLeftRight = (float)CPad::GetPedWalkLeftRight(PadFromPlayer);
  PedWalkUpDown = (CHID *)CPad::GetPedWalkUpDown(PadFromPlayer);
  v14 = (float)(int)PedWalkUpDown;
  v15 = sqrtf((float)(PedWalkLeftRight * PedWalkLeftRight) + (float)(v14 * v14)) / 60.0;
  InputType = CHID::GetInputType(PedWalkUpDown);
  v17 = InputType == 2;
  if ( InputType == 2 )
    v17 = *((unsigned __int8 *)a2 + 1156) << 31 == 0;
  if ( v17 )
  {
    v22 = (float *)((char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF);
    v23 = v22[182];
    v24 = v22[183];
    v25 = -v23;
    v26 = -v24;
    if ( CCamera::GetLookDirection((CCamera *)&TheCamera) == 3 )
    {
      v25 = v23;
      v26 = v24;
    }
    *((float *)a2 + 344) = atan2f(COERCE_FLOAT(LODWORD(v25) ^ 0x80000000), v26);
    v27 = *(float *)&CTimer::ms_fTimeStep;
    v28 = powf(*(float *)&CTaskSimpleJetPack::JETPACK_ANGLE_RATE, *(float *)&CTimer::ms_fTimeStep);
    v2.n64_u32[0] = 1.0;
    v14 = v14 * 0.0078125;
    *((float *)this + 5) = (float)(v28 * *((float *)this + 5))
                         + (float)((float)(v14 * (float)(1.0 - v28)) * CTaskSimpleJetPack::THRUST_MAX_ANGLE);
    if ( (float)(PedWalkLeftRight * 0.0078125) >= 0.0 )
    {
      v3.n64_u32[0] = *((_DWORD *)this + 4);
      v29 = (_DWORD *)((char *)this + 16);
      if ( (float)(PedWalkLeftRight * 0.0078125) > 0.0 )
      {
        v3.n64_f32[0] = v3.n64_f32[0] + (float)(v27 * 0.1);
        v2.n64_u64[0] = vmin_f32(v3, v2).n64_u64[0];
        *v29 = v2.n64_u32[0];
        goto LABEL_36;
      }
      if ( v3.n64_f32[0] <= 0.0 )
      {
        if ( v3.n64_f32[0] < 0.0 )
        {
          v4.n64_u32[0] = 0;
          v2.n64_f32[0] = v3.n64_f32[0] + (float)(v27 * 0.05);
          v2.n64_u64[0] = vmin_f32(v2, v4).n64_u64[0];
          *v29 = v2.n64_u32[0];
        }
        goto LABEL_36;
      }
      v2.n64_u32[0] = -1119040307;
      v4.n64_u32[0] = 0;
    }
    else
    {
      v2.n64_u32[0] = -1110651699;
      v4.n64_u32[0] = -1.0;
      v3.n64_u32[0] = *((_DWORD *)this + 4);
      v29 = (_DWORD *)((char *)this + 16);
    }
    v2.n64_f32[0] = v3.n64_f32[0] + (float)(v27 * v2.n64_f32[0]);
    v2.n64_u64[0] = vmax_f32(v2, v4).n64_u64[0];
    *v29 = v2.n64_u32[0];
    goto LABEL_36;
  }
  v18 = *((_DWORD *)a2 + 456);
  v19 = v18 == 0;
  if ( !v18 )
    v19 = *((unsigned __int8 *)a2 + 1156) << 31 == 0;
  if ( v19 && CPad::GetTarget(PadFromPlayer, 0) != 1 )
  {
    v14 = v14 * 0.0078125;
    if ( (float)(PedWalkLeftRight * 0.0078125) == 0.0 )
    {
      v30 = *(float *)&CTimer::ms_fTimeStep;
    }
    else
    {
      v30 = *(float *)&CTimer::ms_fTimeStep;
      v31 = *((float *)a2 + 344)
          + (float)((float)((float)(PedWalkLeftRight * 0.0078125) * CTaskSimpleJetPack::JETPACK_TURN_RATE)
                  * *(float *)&CTimer::ms_fTimeStep);
      *((float *)a2 + 344) = v31;
      if ( v31 > 3.1416 )
      {
        v32 = -6.2832;
LABEL_33:
        *((float *)a2 + 344) = v31 + v32;
        goto LABEL_34;
      }
      if ( v31 < -3.1416 )
      {
        v32 = 6.2832;
        goto LABEL_33;
      }
    }
LABEL_34:
    v33 = powf(*(float *)&CTaskSimpleJetPack::JETPACK_ANGLE_RATE, v30);
    v21 = (float)(v33 * *((float *)this + 5))
        + (float)((float)(v14 * (float)(1.0 - v33)) * CTaskSimpleJetPack::THRUST_MAX_ANGLE);
    goto LABEL_35;
  }
  if ( v15 > 0.0 )
  {
    v20 = COERCE_FLOAT(
            CGeneral::GetRadianAngleBetweenPoints(
              0,
              0.0,
              COERCE_FLOAT(LODWORD(PedWalkLeftRight) ^ 0x80000000),
              v14,
              v56));
    *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v20 - unk_9520F4), COERCE_FLOAT(&TheCamera));
    v21 = (float)(v15 * (float)(CTaskSimpleJetPack::THRUST_MAX_ANGLE * -0.75)) * 0.46875;
LABEL_35:
    *((float *)this + 5) = v21;
    goto LABEL_36;
  }
  *(_DWORD *)(*((_DWORD *)a2 + 273) + 20) = 0;
LABEL_36:
  v34 = (char *)*((_DWORD *)a2 + 456);
  if ( v34 && !(*((unsigned __int8 *)a2 + 1156) << 31) )
  {
    v35 = *((_DWORD *)v34 + 5);
    v36 = *((_DWORD *)a2 + 5);
    v37 = (float *)(v35 + 48);
    if ( !v35 )
      v37 = (float *)(v34 + 4);
    v34 = (char *)(v36 + 48);
    if ( !v36 )
      v34 = (char *)a2 + 4;
    v38 = *(float *)v34 - *v37;
    v39 = *((float *)v34 + 1) - v37[1];
    v5.n64_f32[0] = sqrtf((float)(v38 * v38) + (float)(v39 * v39));
    v40 = (float)(fabsf(*((float *)v34 + 2) - v37[2]) * 0.2) + 3.0;
    if ( v5.n64_f32[0] < v40 )
    {
      v6.n64_u32[0] = 1036831949;
      v41 = vmax_f32(v5, v6).n64_f32[0];
      v34 = (char *)CPhysical::ApplyMoveForce(
                      a2,
                      (float)((float)((float)((float)((float)(v38 * (float)(1.0 / v41))
                                                    * (float)((float)(1.0 - (float)(v5.n64_f32[0] / v40)) * 3.0))
                                            * 0.008)
                                    * CTaskSimpleJetPack::THRUST_FULL)
                            * *((float *)a2 + 36))
                    * *(float *)&CTimer::ms_fTimeStep,
                      (float)((float)((float)((float)((float)(v39 * (float)(1.0 / v41))
                                                    * (float)((float)(1.0 - (float)(v5.n64_f32[0] / v40)) * 3.0))
                                            * 0.008)
                                    * CTaskSimpleJetPack::THRUST_FULL)
                            * *((float *)a2 + 36))
                    * *(float *)&CTimer::ms_fTimeStep,
                      (float)((float)((float)((float)((float)((float)(1.0 / v41) * 0.0)
                                                    * (float)((float)(1.0 - (float)(v5.n64_f32[0] / v40)) * 3.0))
                                            * 0.008)
                                    * CTaskSimpleJetPack::THRUST_FULL)
                            * *((float *)a2 + 36))
                    * *(float *)&CTimer::ms_fTimeStep);
    }
  }
  v42 = CHID::GetInputType((CHID *)v34);
  v43 = v42 == 2;
  if ( v42 == 2 )
    v43 = *((unsigned __int8 *)a2 + 1156) << 31 == 0;
  if ( !v43 )
  {
    if ( CPad::GetJetpackHover(PadFromPlayer) != 1 )
    {
      v44 = 0;
LABEL_54:
      *(_WORD *)((char *)this + 13) = v44;
      goto LABEL_55;
    }
LABEL_53:
    *((_DWORD *)this + 4) = 0;
    v44 = 1;
    goto LABEL_54;
  }
  *((_BYTE *)this + 13) = 0;
  if ( CPad::GetBrake(PadFromPlayer) )
    v45 = -1;
  else
    v45 = CPad::GetAccelerate(PadFromPlayer) != 0 || v14 != 0.0;
  *((_BYTE *)this + 14) = v45;
  if ( CPad::GetJetpackHover(PadFromPlayer) == 1 )
    goto LABEL_53;
  v2.n64_u32[0] = *((_DWORD *)this + 4);
  if ( v2.n64_f32[0] <= 0.0 )
  {
    if ( v2.n64_f32[0] < 0.0 )
    {
      v4.n64_u32[0] = 0;
      v2.n64_f32[0] = v2.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * 0.05);
      v2.n64_u64[0] = vmin_f32(v2, v4).n64_u64[0];
      *((_DWORD *)this + 4) = v2.n64_u32[0];
    }
  }
  else
  {
    v4.n64_u32[0] = 0;
    v2.n64_f32[0] = v2.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * -0.05);
    v2.n64_u64[0] = vmax_f32(v2, v4).n64_u64[0];
    *((_DWORD *)this + 4) = v2.n64_u32[0];
  }
LABEL_55:
  if ( CPad::GetAccelerate(PadFromPlayer) )
    *((_BYTE *)this + 14) = 1;
  if ( CPad::GetBrake(PadFromPlayer) )
    *((_BYTE *)this + 14) = -1;
  v46 = CPad::GetPedWalkUpDown(PadFromPlayer);
  v47 = CPad::GetPedWalkLeftRight(PadFromPlayer);
  if ( CHID::GetInputType((CHID *)v47) == 2 )
  {
    if ( CHID::IsPressed(86, 0) == 1 )
      *((_BYTE *)this + 14) = 1;
    if ( CHID::IsPressed(87, 0) == 1 )
      *((_BYTE *)this + 14) = -1;
    if ( CHID::IsPressed(86, 0) == 1 && CHID::IsPressed(87, 0) == 1 )
      *((_BYTE *)this + 14) = 0;
  }
  if ( !*((_BYTE *)this + 14) && *((unsigned __int8 *)a2 + 1156) << 31 )
    goto LABEL_72;
  if ( v46 < 0 )
    v46 = -v46;
  if ( v46 <= 64 )
  {
    v48 = v47;
    if ( v47 < 0 )
      v48 = -v47;
    if ( v48 >= 65 )
      *((_BYTE *)this + 14) = 0;
  }
  else
  {
LABEL_72:
    v47 = 0;
  }
  if ( (CPad::GetLookLeft(PadFromPlayer, 1) || v47 <= -1) && !CPad::GetTarget(PadFromPlayer, 0) )
  {
    v4.n64_u32[0] = -1.0;
    v50 = (_DWORD *)((char *)this + 16);
    v2.n64_f32[0] = *((float *)this + 4) + (float)(*(float *)&CTimer::ms_fTimeStep * -0.1);
    v2.n64_u32[0] = vmax_f32(v2, v4).n64_u32[0];
    goto LABEL_90;
  }
  LookRight = CPad::GetLookRight(PadFromPlayer, 1);
  if ( (v47 > 0 || LookRight == 1) && !CPad::GetTarget(PadFromPlayer, 0) )
  {
    v4.n64_u32[0] = 1.0;
    v50 = (_DWORD *)((char *)this + 16);
    v2.n64_f32[0] = *((float *)this + 4) + (float)(*(float *)&CTimer::ms_fTimeStep * 0.1);
LABEL_89:
    v2.n64_u32[0] = vmin_f32(v2, v4).n64_u32[0];
    goto LABEL_90;
  }
  v2.n64_u32[0] = *((_DWORD *)this + 4);
  v50 = (_DWORD *)((char *)this + 16);
  if ( v2.n64_f32[0] <= 0.0 )
  {
    if ( v2.n64_f32[0] >= 0.0 )
      goto LABEL_91;
    v4.n64_u32[0] = 0;
    v2.n64_f32[0] = v2.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * 0.05);
    goto LABEL_89;
  }
  v4.n64_u32[0] = 0;
  v2.n64_f32[0] = v2.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * -0.05);
  v2.n64_u32[0] = vmax_f32(v2, v4).n64_u32[0];
LABEL_90:
  *v50 = v2.n64_u32[0];
LABEL_91:
  if ( v15 <= 0.0 )
  {
    result = (int *)*((_DWORD *)a2 + 273);
    result[5] = 0;
  }
  else
  {
    v51 = *((_DWORD *)a2 + 273);
    result = &CTimer::ms_fTimeStep;
    v53 = *(float *)(v51 + 20);
    v54 = v15 - v53;
    v55 = (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) + v53;
    if ( v54 > (float)(*(float *)&CTimer::ms_fTimeStep * 0.07) )
      v15 = v55;
    *(float *)(v51 + 20) = v15;
  }
  return result;
}


// ============================================================

// Address: 0x531720
// Original: _ZN18CTaskSimpleJetPack16ProcessControlAIEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessControlAI(CPed *)
void __fastcall CTaskSimpleJetPack::ProcessControlAI(CTaskSimpleJetPack *this, CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x531724
// Original: _ZN18CTaskSimpleJetPack13ProcessThrustEP4CPed
// Demangled: CTaskSimpleJetPack::ProcessThrust(CPed *)
int __fastcall CTaskSimpleJetPack::ProcessThrust(CTaskSimpleJetPack *this, CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t *v7; // r10
  float32x2_t v8; // d8
  float v9; // s18
  char *v10; // r11
  float v11; // s0
  float v12; // s2
  float v13; // s4
  float v14; // s6
  float v15; // s8
  float *v16; // r1
  float v17; // s2
  _DWORD *v18; // r4
  float v19; // r11
  float v20; // r8
  float *v21; // r6
  float v22; // r0
  float *v23; // r11
  float *v24; // r1
  float v25; // s21
  float v26; // s22
  float v27; // s24
  float v28; // s26
  float v29; // s30
  float v30; // s8
  float v31; // s0
  float v32; // s2
  float v33; // s4
  float v34; // s6
  float v35; // r1
  float v36; // r2
  float v37; // r3
  float v38; // s0
  float *v39; // r0
  float v40; // s6
  float v41; // s30
  float32x2_t v42; // d8
  float v43; // s18
  float v44; // s20
  float v45; // s19
  float v46; // r0
  float v47; // s24
  float v48; // s28
  float v49; // r8
  float v50; // s26
  float v51; // s19
  float v52; // s20
  float v53; // s0
  float v54; // s30
  float v55; // s19
  float v56; // s0
  float v57; // s18
  unsigned __int64 v58; // d1
  float v59; // s16
  float v60; // s2
  float v61; // s0
  float v62; // s30
  float v63; // s16
  float v64; // s18
  float v65; // s20
  float v66; // r0
  __int64 v67; // d16
  int result; // r0
  CAEPedAudioEntity *v69; // r5

  v7 = (float32x2_t *)((char *)a2 + 76);
  v8.n64_u64[0] = *(unsigned __int64 *)((char *)a2 + 76);
  v9 = *((float *)a2 + 18);
  if ( *((_BYTE *)this + 13) )
  {
    v10 = (char *)a2 + 20;
    CPhysical::ApplyMoveForce(
      a2,
      (float)((float)(*(float *)(*((_DWORD *)a2 + 5) + 32) * 0.008) * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep,
      (float)((float)(*(float *)(*((_DWORD *)a2 + 5) + 36) * 0.008) * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep,
      (float)((float)(*(float *)(*((_DWORD *)a2 + 5) + 40) * 0.008) * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep);
    v11 = *((float *)a2 + 18);
    v12 = *((float *)a2 + 19);
    v13 = *((float *)a2 + 20);
    v14 = (float)(CTaskSimpleJetPack::THRUST_STOP * 0.008) * *(float *)&CTimer::ms_fTimeStep;
    v15 = (float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13);
    if ( (float)(v14 * v14) > v15 )
      v14 = v14 * 0.75;
    if ( (float)(v14 * v14) > v15 )
    {
      *((_DWORD *)a2 + 18) = 0;
      *((_DWORD *)a2 + 19) = 0;
      *((_DWORD *)a2 + 20) = 0;
      goto LABEL_21;
    }
    v30 = 1.0 / sqrtf(v15);
    v31 = (float)(v11 * v30) * v14;
    v32 = (float)(v12 * v30) * v14;
    v33 = (float)(v13 * v30) * v14;
    v34 = *((float *)a2 + 36);
    v35 = -(float)(v31 * v34);
    v36 = -(float)(v32 * v34);
    v37 = -(float)(v33 * v34);
    goto LABEL_20;
  }
  v10 = (char *)a2 + 20;
  v16 = (float *)*((_DWORD *)a2 + 5);
  v17 = CTaskSimpleJetPack::THRUST_NOMINAL;
  if ( *((char *)this + 14) < 0 )
    v17 = CTaskSimpleJetPack::THRUST_NOMINAL * 0.5;
  CPhysical::ApplyMoveForce(
    a2,
    (float)((float)(v17 * (float)(v16[8] * 0.008)) * *((float *)a2 + 36)) * *(float *)&CTimer::ms_fTimeStep,
    (float)((float)(v17 * (float)(v16[9] * 0.008)) * *((float *)a2 + 36)) * *(float *)&CTimer::ms_fTimeStep,
    *(float *)&CTimer::ms_fTimeStep * (float)(*((float *)a2 + 36) * (float)(v17 * (float)(v16[10] * 0.008))));
  if ( *((char *)this + 14) >= 1 )
  {
    v18 = (_DWORD *)((char *)a2 + 20);
    v19 = *((float *)this + 5);
    v20 = sinf(v19);
    v21 = (float *)*((_DWORD *)a2 + 5);
    v22 = cosf(v19);
    v23 = (float *)((char *)a2 + 4);
    v24 = (float *)((char *)a2 + 4);
    if ( v21 )
      v24 = v21 + 12;
    v25 = v24[2];
    v3.n64_u32[0] = 0.75;
    v4.n64_f32[0] = (float)(v22 * v21[10]) - (float)(v21[6] * v20);
    v26 = (float)(v22 * v21[9]) - (float)(v21[5] * v20);
    v27 = (float)(v22 * v21[8]) - (float)(v21[4] * v20);
    LODWORD(v28) = vmin_f32(v4, v3).n64_u32[0];
    if ( v25 <= (float)(COERCE_FLOAT(CCamera::CalculateGroundHeight((CCamera *)&TheCamera, 2u)) + 100.0) )
    {
      v2.n64_u32[0] = 1.0;
    }
    else
    {
      if ( *v18 )
        v23 = (float *)(*v18 + 48);
      v29 = v23[2];
      v4.n64_u32[0] = 0;
      v2.n64_f32[0] = (float)((float)(v29
                                    - (float)(COERCE_FLOAT(CCamera::CalculateGroundHeight((CCamera *)&TheCamera, 2u))
                                            + 100.0))
                            / -20.0)
                    + 1.0;
      v2.n64_u32[0] = vmax_f32(v2, v4).n64_u32[0];
    }
    CPhysical::ApplyMoveForce(
      a2,
      (float)((float)((float)((float)(v27 * 0.008) * v2.n64_f32[0]) * CTaskSimpleJetPack::THRUST_FULL)
            * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep,
      (float)((float)((float)((float)(v26 * 0.008) * v2.n64_f32[0]) * CTaskSimpleJetPack::THRUST_FULL)
            * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep,
      (float)((float)((float)((float)(v28 * 0.008) * v2.n64_f32[0]) * CTaskSimpleJetPack::THRUST_FULL)
            * *((float *)a2 + 36))
    * *(float *)&CTimer::ms_fTimeStep);
    v10 = (char *)a2 + 20;
  }
  v38 = *((float *)this + 4);
  if ( v38 != 0.0 )
  {
    v39 = (float *)*((_DWORD *)a2 + 5);
    v40 = *((float *)a2 + 36);
    v35 = (float)((float)((float)((float)(v38 * *v39) * 0.008) * CTaskSimpleJetPack::THRUST_STRAFE) * v40)
        * *(float *)&CTimer::ms_fTimeStep;
    v36 = (float)((float)((float)((float)(v38 * v39[1]) * 0.008) * CTaskSimpleJetPack::THRUST_STRAFE) * v40)
        * *(float *)&CTimer::ms_fTimeStep;
    v37 = *(float *)&CTimer::ms_fTimeStep
        * (float)(v40 * (float)(CTaskSimpleJetPack::THRUST_STRAFE * (float)((float)(v38 * v39[2]) * 0.008)));
LABEL_20:
    CPhysical::ApplyMoveForce(a2, LODWORD(v35), LODWORD(v36), LODWORD(v37));
  }
LABEL_21:
  v41 = *((float *)this + 6);
  v42.n64_u64[0] = vadd_f32(
                     vsub_f32((float32x2_t)v7->n64_u64[0], v8),
                     vsub_f32((float32x2_t)v7->n64_u64[0], *(float32x2_t *)((char *)this + 52))).n64_u64[0];
  v43 = (float)(*((float *)a2 + 18) - v9) + (float)(*((float *)a2 + 18) - *((float *)this + 12));
  v44 = *((float *)this + 9);
  v45 = (float)((float)(v43 * *(float *)(*(_DWORD *)v10 + 16))
              + (float)(v42.n64_f32[0] * *(float *)(*(_DWORD *)v10 + 20)))
      + (float)(v42.n64_f32[1] * *(float *)(*(_DWORD *)v10 + 24));
  if ( (*((_DWORD *)a2 + 289) & 3) != 0 )
    v45 = 0.0;
  v46 = sinf(*((float *)this + 6));
  v47 = *(float *)&CTimer::ms_fTimeStep;
  v48 = CTaskSimpleJetPack::LEG_SWING_DELTA_V_MULT;
  v49 = *(float *)&CTimer::ms_fTimeStep;
  v50 = CTaskSimpleJetPack::LEG_SWING_GRAVITY_MULT;
  v51 = (float)(v44 - (float)(CTaskSimpleJetPack::LEG_SWING_DELTA_V_MULT * v45))
      - (float)((float)(v46 * CTaskSimpleJetPack::LEG_SWING_GRAVITY_MULT) * *(float *)&CTimer::ms_fTimeStep);
  v52 = powf(*(float *)&CTaskSimpleJetPack::LEG_SWING_DAMP_FRAC, *(float *)&CTimer::ms_fTimeStep);
  *((float *)this + 9) = v52 * v51;
  v53 = v41 + (float)(v47 * (float)(v52 * v51));
  *((float *)this + 6) = v53;
  v54 = CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE;
  if ( v53 <= CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE )
  {
    if ( v53 < (float)-CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE )
      *((float *)this + 6) = -CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE;
  }
  else
  {
    *((float *)this + 6) = CTaskSimpleJetPack::LEG_SWING_MAX_ANGLE;
  }
  v56 = v43 * **(float **)v10;
  v57 = *((float *)this + 7);
  v58 = vmul_f32(v42, *(float32x2_t *)(*(_DWORD *)v10 + 4)).n64_u64[0];
  v59 = (float)(v56 + *(float *)&v58) + *((float *)&v58 + 1);
  if ( (*((_DWORD *)a2 + 289) & 3) != 0 )
    v59 = 0.0;
  v55 = *((float *)this + 10);
  v60 = v52 * (float)((float)(v55 - (float)(v48 * v59)) - (float)((float)(sinf(*((float *)this + 7)) * v50) * v47));
  *((float *)this + 10) = v60;
  v61 = v57 + (float)(v47 * v60);
  *((float *)this + 7) = v61;
  if ( v61 <= v54 )
  {
    v62 = -v54;
    if ( v61 < v62 )
      *((float *)this + 7) = v62;
  }
  else
  {
    *((float *)this + 7) = v54;
  }
  *((float *)this + 8) = v52 * *((float *)this + 8);
  v63 = *((float *)a2 + 18);
  v64 = *((float *)a2 + 19);
  v65 = *((float *)a2 + 20);
  v66 = powf(
          1.0
        - (float)(CTaskSimpleJetPack::THRUST_MOVE_DAMPING
                * sqrtf((float)((float)(v63 * v63) + (float)(v64 * v64)) + (float)(v65 * v65))),
          v49);
  *((float *)a2 + 18) = v63 * v66;
  *((float *)a2 + 19) = v64 * v66;
  *((float *)a2 + 20) = v65 * v66;
  v67 = *((_QWORD *)a2 + 9);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 6) = v67;
  result = *((unsigned __int8 *)this + 8);
  if ( !*((_BYTE *)this + 8) )
  {
    v69 = (CPed *)((char *)a2 + 316);
    CAEPedAudioEntity::TurnOnJetPack(v69);
    return sub_19B2FC(v69, (float)*((char *)this + 14), *((float *)this + 5));
  }
  return result;
}


// ============================================================

// Address: 0x531d54
// Original: _ZN18CTaskSimpleJetPack11DropJetPackEP4CPed
// Demangled: CTaskSimpleJetPack::DropJetPack(CPed *)
int __fastcall CTaskSimpleJetPack::DropJetPack(CTaskSimpleJetPack *this, CPed *a2)
{
  int v4; // r0
  float *v5; // r2
  int result; // r0
  float *v7; // [sp+0h] [bp-30h]
  int v8; // [sp+4h] [bp-2Ch]
  float *v9; // [sp+8h] [bp-28h]
  int v10; // [sp+Ch] [bp-24h]
  int v11; // [sp+10h] [bp-20h]
  _BYTE v12[4]; // [sp+14h] [bp-1Ch] BYREF
  float v13; // [sp+18h] [bp-18h] BYREF
  float v14; // [sp+1Ch] [bp-14h] BYREF

  if ( !*((_BYTE *)this + 8) )
  {
    v4 = *((_DWORD *)a2 + 5);
    v5 = (float *)(v4 + 48);
    if ( !v4 )
      v5 = (float *)((char *)a2 + 4);
    CPickups::CreatePickupCoorsCloseToCoors(*(CPickups **)v5, v5[1], v5[2], COERCE_FLOAT(v12), &v13, &v14, v9);
    v7 = (float *)&byte_5;
    v8 = 0;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    CPickups::GenerateNewOne();
  }
  result = (*(int (__fastcall **)(CTaskSimpleJetPack *, CPed *, int, _DWORD, float *, int, float *, int, int))(*(_DWORD *)this + 28))(
             this,
             a2,
             1,
             0,
             v7,
             v8,
             v9,
             v10,
             v11);
  *(_WORD *)((char *)this + 13) = 0;
  *((_DWORD *)this + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x531dc4
// Original: _ZN18CTaskSimpleJetPack17ApplyRollAndPitchEP4CPed
// Demangled: CTaskSimpleJetPack::ApplyRollAndPitch(CPed *)
int __fastcall CTaskSimpleJetPack::ApplyRollAndPitch(CTaskSimpleJetPack *this, CPed *a2)
{
  int result; // r0
  char *v5; // r10
  int v6; // r6
  int v7; // r5

  result = *((unsigned __int8 *)a2 + 1156) << 30;
  if ( !result )
  {
    v5 = (char *)a2 + 1156;
    v6 = *(_DWORD *)(*((_DWORD *)a2 + 300) + 16);
    RtQuatRotate(v6, &CPedIK::ZaxisIK, (float)(*((float *)this + 6) * 180.0) / 3.1416, 2);
    RtQuatRotate(v6, &CPedIK::YaxisIK, (float)(*((float *)this + 7) * 180.0) / 3.1416, 2);
    v7 = *(_DWORD *)(*((_DWORD *)a2 + 301) + 16);
    RtQuatRotate(v7, &CPedIK::ZaxisIK, (float)(*((float *)this + 6) * 180.0) / 3.1416, 2);
    RtQuatRotate(v7, &CPedIK::YaxisIK, (float)(*((float *)this + 7) * 180.0) / 3.1416, 2);
    result = *((_DWORD *)v5 + 1) | 0x4000;
    *((_DWORD *)v5 + 1) = result;
  }
  return result;
}


// ============================================================

// Address: 0x531e94
// Original: _ZN18CTaskSimpleJetPack13RenderJetPackEP4CPed
// Demangled: CTaskSimpleJetPack::RenderJetPack(CPed *)
int __fastcall CTaskSimpleJetPack::RenderJetPack(CTaskSimpleJetPack *this, CPed *a2)
{
  FxSystem_c *v4; // r0
  FxSystem_c *v5; // r0
  _QWORD *MatrixArray; // r0
  __int64 *v7; // r1
  __int64 v8; // d18
  __int64 v9; // d19
  __int64 *v10; // r3
  __int64 v11; // d16
  __int64 v12; // d17
  _QWORD *v13; // r9
  __int64 v14; // d23
  __int64 v15; // d20
  __int64 v16; // d21
  int FrameFromName; // r0
  int v18; // r11
  float v19; // r6
  int v20; // r0
  int v21; // r11
  float v22; // r6
  int result; // r0
  __int64 v24; // [sp+0h] [bp-50h]
  __int64 v25; // [sp+0h] [bp-50h]
  int v26; // [sp+8h] [bp-48h]
  int v27; // [sp+8h] [bp-48h]

  if ( *((_DWORD *)this + 16) && !*((_BYTE *)this + 8) )
  {
    GetAnimHierarchyFromSkinClump();
    MatrixArray = (_QWORD *)RpHAnimHierarchyGetMatrixArray();
    v7 = MatrixArray + 28;
    v8 = MatrixArray[26];
    v9 = MatrixArray[27];
    v10 = MatrixArray + 24;
    MatrixArray += 30;
    v11 = *v7;
    v12 = v7[1];
    v13 = *(_QWORD **)(*((_DWORD *)this + 16) + 4);
    v14 = MatrixArray[1];
    v15 = *v10;
    v16 = v10[1];
    v13[8] = *MatrixArray;
    v13[9] = v14;
    v13[6] = v11;
    v13[7] = v12;
    v13[4] = v8;
    v13[5] = v9;
    v13[2] = v15;
    v13[3] = v16;
    RwMatrixTranslate();
    RwMatrixRotate();
    FrameFromName = CClumpModelInfo::GetFrameFromName();
    if ( FrameFromName )
    {
      v18 = FrameFromName + 64;
      v26 = *(_DWORD *)(FrameFromName + 72);
      v24 = *(_QWORD *)(FrameFromName + 64);
      if ( *((_BYTE *)this + 13) )
      {
        v19 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds / 79.577;
        sinf(v19);
        cosf(v19);
      }
      RwMatrixRotate();
      RwMatrixRotate();
      *(_DWORD *)(v18 + 8) = v26;
      *(_QWORD *)v18 = v24;
    }
    v20 = CClumpModelInfo::GetFrameFromName();
    if ( v20 )
    {
      v21 = v20 + 64;
      v27 = *(_DWORD *)(v20 + 72);
      v25 = *(_QWORD *)(v20 + 64);
      if ( *((_BYTE *)this + 13) )
      {
        v22 = (float)(unsigned int)CTimer::m_snTimeInMilliseconds / 79.577;
        sinf(v22);
        cosf(v22);
      }
      RwMatrixRotate();
      RwMatrixRotate();
      *(_DWORD *)(v21 + 8) = v27;
      *(_QWORD *)v21 = v25;
    }
    RwFrameUpdateObjects(v13);
    RpClumpRender();
    CTaskSimpleJetPack::DoJetPackEffect(this, a2);
  }
  else
  {
    v4 = (FxSystem_c *)*((_DWORD *)this + 25);
    if ( v4 )
    {
      FxSystem_c::Kill(v4);
      *((_DWORD *)this + 25) = 0;
    }
    v5 = (FxSystem_c *)*((_DWORD *)this + 26);
    if ( v5 )
    {
      FxSystem_c::Kill(v5);
      *((_DWORD *)this + 26) = 0;
    }
  }
  result = *((_DWORD *)a2 + 343);
  *((_DWORD *)this + 15) = result;
  return result;
}


// ============================================================

// Address: 0x5321d4
// Original: _ZN18CTaskSimpleJetPack15DoJetPackEffectEP4CPed
// Demangled: CTaskSimpleJetPack::DoJetPackEffect(CPed *)
FxSystem_c *__fastcall CTaskSimpleJetPack::DoJetPackEffect(CTaskSimpleJetPack *this, CPed *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r5
  FxSystem_c *FxSystem; // r0
  FxSystem_c *v7; // r0
  char v8; // r0
  float v9; // s2
  float v10; // s0
  FxSystem_c *v11; // r0
  FxSystem_c *result; // r0
  int v13; // [sp+4h] [bp-1Ch] BYREF
  int v14; // [sp+8h] [bp-18h]
  int v15; // [sp+Ch] [bp-14h]

  v3 = *((_DWORD *)a2 + 6);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    v5 = v4 + 16;
    if ( !*((_DWORD *)this + 25) )
    {
      v14 = 0;
      v15 = 0;
      v13 = 0;
      FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"jetpack", (int)&v13, v4 + 16, 0);
      *((_DWORD *)this + 25) = FxSystem;
      if ( FxSystem )
      {
        FxSystem_c::Play(FxSystem);
        FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 25), 1u);
        FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 25));
        *((_DWORD *)this + 27) = 0;
      }
    }
    if ( !*((_DWORD *)this + 26) )
    {
      v14 = 0;
      v15 = 0;
      v13 = 0;
      v7 = (FxSystem_c *)FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"jetpack", (int)&v13, v5, 0);
      *((_DWORD *)this + 26) = v7;
      if ( v7 )
      {
        FxSystem_c::Play(v7);
        FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 26), 1u);
        FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 26));
        *((_DWORD *)this + 27) = 0;
      }
    }
  }
  v8 = byte_9FF864;
  __dmb(0xBu);
  if ( (v8 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_9FF864) )
  {
    dword_9FF858 = 0;
    *(_DWORD *)algn_9FF85C = 0;
    dword_9FF860 = -1105618534;
    j___cxa_guard_release((__guard *)&byte_9FF864);
  }
  if ( *((_DWORD *)this + 25) )
  {
    CClumpModelInfo::GetFrameFromName();
    RwFrameGetLTM();
    FxSystem_c::SetMatrix();
    FxSystem_c::SetOffsetPos();
  }
  if ( *((_DWORD *)this + 26) )
  {
    CClumpModelInfo::GetFrameFromName();
    RwFrameGetLTM();
    FxSystem_c::SetMatrix();
    FxSystem_c::SetOffsetPos();
  }
  if ( *((_BYTE *)this + 14) )
  {
    v9 = 1.0;
  }
  else
  {
    v9 = 0.0;
    if ( *((float *)this + 4) != 0.0 )
      v9 = 1.0;
  }
  v10 = *((float *)this + 27);
  if ( v10 >= v9 )
  {
    if ( v10 > v9 )
    {
      v10 = v10 + -0.1;
      *((float *)this + 27) = v10;
      if ( v10 < 0.0 )
      {
        v10 = 0.0;
        *((_DWORD *)this + 27) = 0;
      }
    }
  }
  else
  {
    v10 = v10 + 0.1;
    *((float *)this + 27) = v10;
    if ( v10 > 1.0 )
    {
      *((_DWORD *)this + 27) = 1065353216;
      v10 = 1.0;
    }
  }
  v11 = (FxSystem_c *)*((_DWORD *)this + 25);
  if ( v11 )
    FxSystem_c::SetConstTime(v11, 1u, v10);
  result = (FxSystem_c *)*((_DWORD *)this + 26);
  if ( result )
    return (FxSystem_c *)FxSystem_c::SetConstTime(result, 1u, *((float *)this + 27));
  return result;
}


// ============================================================

// Address: 0x533530
// Original: _ZNK18CTaskSimpleJetPack5CloneEv
// Demangled: CTaskSimpleJetPack::Clone(void)
CTaskSimple *__fastcall CTaskSimpleJetPack::Clone(CTaskSimpleJetPack *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4
  CEntity *v6; // r8
  __int64 v7; // d16
  CTaskSimple *result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_70, a2);
  v4 = *(_QWORD *)((char *)this + 84);
  v5 = v3;
  v6 = (CEntity *)*((_DWORD *)this + 24);
  CTaskSimple::CTaskSimple(v3);
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  *((_QWORD *)v5 + 2) = 0LL;
  *((_QWORD *)v5 + 3) = 0LL;
  *((_BYTE *)v5 + 12) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 20) = 0;
  *(_QWORD *)((char *)v5 + 84) = v4;
  *((_DWORD *)v5 + 23) = 0;
  *(_WORD *)((char *)v5 + 13) = 0;
  *(_DWORD *)v5 = &off_66CC38;
  *((_DWORD *)v5 + 24) = v6;
  if ( v6 )
    CEntity::RegisterReference(v6, (CEntity **)v5 + 24);
  v7 = *((_QWORD *)this + 9);
  *((_DWORD *)v5 + 20) = *((_DWORD *)this + 20);
  result = v5;
  *((_QWORD *)v5 + 9) = v7;
  *((_DWORD *)v5 + 25) = 0;
  *((_DWORD *)v5 + 26) = 0;
  return result;
}


// ============================================================

// Address: 0x5335cc
// Original: _ZNK18CTaskSimpleJetPack11GetTaskTypeEv
// Demangled: CTaskSimpleJetPack::GetTaskType(void)
int __fastcall CTaskSimpleJetPack::GetTaskType(CTaskSimpleJetPack *this)
{
  return 1303;
}


// ============================================================

// Address: 0x5335d4
// Original: _ZN18CTaskSimpleJetPack9SerializeEv
// Demangled: CTaskSimpleJetPack::Serialize(void)
void __fastcall CTaskSimpleJetPack::Serialize(CTaskSimpleJetPack *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  __int64 v6; // d16
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r0
  int v13; // r6
  CGenericGameStorage *v14; // r5
  int v15; // r2
  CVehicle *v16; // r0
  int v17; // r1
  int v18; // r4
  int v19; // r0
  CGenericGameStorage *v20; // r4
  int v21; // r2
  CGenericGameStorage *v22; // r5
  int v23; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleJetPack *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleJetPack *))(*(_DWORD *)this + 20))(this) == 1303 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(0xCu);
    v6 = *((_QWORD *)this + 9);
    *((_DWORD *)v5 + 2) = *((_DWORD *)this + 20);
    *(_QWORD *)v5 = v6;
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_9[3], v7);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = *((_DWORD *)this + 21);
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = *((_DWORD *)this + 22);
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    v12 = *((_DWORD *)this + 24);
    if ( v12 )
    {
      v13 = *(_BYTE *)(v12 + 58) & 7;
      if ( UseDataFence )
        AddDataFence();
      v14 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v14 = v13;
      CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
      free(v14);
      v16 = (CVehicle *)*((_DWORD *)this + 24);
      v17 = *((_BYTE *)v16 + 58) & 7;
      switch ( v17 )
      {
        case 2:
          v18 = GettPoolVehicleRef(v16);
          break;
        case 4:
          v18 = GettPoolObjRef(v16);
          break;
        case 3:
          v18 = GettPoolPedRef(v16);
          break;
        default:
          return;
      }
      if ( UseDataFence )
        AddDataFence();
      v22 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v22 = v18;
      CGenericGameStorage::_SaveDataToWorkBuffer(v22, byte_4, v23);
      j_free(v22);
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v20 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v20 = 0;
      CGenericGameStorage::_SaveDataToWorkBuffer(v20, byte_4, v21);
      j_free(v20);
    }
  }
  else
  {
    v19 = (*(int (__fastcall **)(CTaskSimpleJetPack *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(1303, v19);
  }
}


// ============================================================
