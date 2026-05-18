
// Address: 0x18da4c
// Original: j__ZN21CTaskSimpleBikeJackedD2Ev
// Demangled: CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked()
// attributes: thunk
void __fastcall CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked(CTaskSimpleBikeJacked *this)
{
  _ZN21CTaskSimpleBikeJackedD2Ev(this);
}


// ============================================================

// Address: 0x19cc24
// Original: j__ZN21CTaskSimpleBikeJackedC2EP8CVehicleiiP4CPedb
// Demangled: CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(CVehicle *,int,int,CPed *,bool)
// attributes: thunk
void __fastcall CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(
        CTaskSimpleBikeJacked *this,
        CVehicle *a2,
        int a3,
        int a4,
        CPed *a5,
        bool a6)
{
  _ZN21CTaskSimpleBikeJackedC2EP8CVehicleiiP4CPedb(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x50554c
// Original: _ZN21CTaskSimpleBikeJackedC2EP8CVehicleiiP4CPedb
// Demangled: CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(CVehicle *,int,int,CPed *,bool)
void __fastcall CTaskSimpleBikeJacked::CTaskSimpleBikeJacked(
        CTaskSimpleBikeJacked *this,
        CVehicle *a2,
        int a3,
        int a4,
        CPed *a5,
        bool a6)
{
  CEntity *v10; // r0

  CTaskSimple::CTaskSimple(this);
  v10 = a5;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 191;
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = a4;
  *((_BYTE *)this + 36) = a6;
  *((_DWORD *)this + 10) = 0;
  *(_DWORD *)this = &off_66B490;
  *((_DWORD *)this + 8) = a5;
  *((_DWORD *)this + 5) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 5);
    v10 = (CEntity *)*((_DWORD *)this + 8);
  }
  if ( v10 )
    CEntity::RegisterReference(v10, (CEntity **)this + 8);
}


// ============================================================

// Address: 0x5055b8
// Original: _ZN21CTaskSimpleBikeJackedD2Ev
// Demangled: CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked()
void __fastcall CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked(CTaskSimpleBikeJacked *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  CTaskUtilityLineUpPedWithCar *v5; // r0
  void *v6; // r0
  CAnimBlendAssociation *v7; // r0

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_66B490;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 8);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 8);
  v5 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 10);
  if ( v5 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v5);
    operator delete(v6);
  }
  v7 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  if ( v7 )
    CAnimBlendAssociation::SetFinishCallback(
      v7,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x505614
// Original: _ZN21CTaskSimpleBikeJackedD0Ev
// Demangled: CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked()
void __fastcall CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked(CTaskSimpleBikeJacked *this)
{
  void *v1; // r0

  CTaskSimpleBikeJacked::~CTaskSimpleBikeJacked(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x505624
// Original: _ZN21CTaskSimpleBikeJacked13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleBikeJacked::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleBikeJacked::MakeAbortable(CTaskSimpleBikeJacked *this, CPed *a2, int a3, const CEvent *a4)
{
  int v5; // r0

  if ( a3 != 2 )
    return 0;
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
    *(_DWORD *)(v5 + 28) = -998637568;
  return 1;
}


// ============================================================

// Address: 0x505640
// Original: _ZN21CTaskSimpleBikeJacked10ProcessPedEP4CPed
// Demangled: CTaskSimpleBikeJacked::ProcessPed(CPed *)
int __fastcall CTaskSimpleBikeJacked::ProcessPed(CTaskSimpleBikeJacked *this, CPed *a2)
{
  bool v4; // zf
  unsigned int v5; // r2
  int v6; // r6
  int v8; // r0
  int Association; // r0
  int v10; // r1
  bool v11; // zf
  unsigned __int16 v12; // r1
  CPed *v13; // r8
  CAEVehicleAudioEntity *v14; // r6
  unsigned __int16 v15; // r1
  CPed *v16; // r8
  CAEVehicleAudioEntity *v17; // r6
  unsigned __int16 v18; // r1
  int IsPedFemaleForAudio; // r0
  CPed *v20; // r0
  int v21; // r0
  int v22; // r6
  int *v23; // r0
  CAnimBlendAssociation *v24; // r0
  CTaskUtilityLineUpPedWithCar *v25; // r0
  int v26; // r0
  _DWORD v27[13]; // [sp+24h] [bp-54h] BYREF
  char v28; // [sp+59h] [bp-1Fh]

  if ( !*((_DWORD *)this + 5) )
    return 1;
  v4 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    v4 = *((_DWORD *)this + 3) == 0;
  if ( v4 )
    return 1;
  if ( *((_BYTE *)this + 8) )
  {
    v5 = *((_DWORD *)this + 4);
    v6 = 1;
    if ( v5 != 191 )
    {
      CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v5);
      CEventKnockOffBike::CEventKnockOffBike(
        (int)v27,
        *((CEntity **)this + 5),
        *((_DWORD *)this + 5) + 72,
        *((_DWORD *)this + 5) + 228,
        0.0,
        0.0,
        55,
        0,
        *((_DWORD *)this + 7),
        *((_DWORD *)this + 8),
        *((unsigned __int8 *)this + 36),
        1);
      v28 |= 2u;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v27, 1);
      *((_DWORD *)this + 4) = 191;
      CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v27);
      return 0;
    }
    return v6;
  }
  if ( !CPed::IsPlayer(a2) && CVehicle::IsDriver(*((CVehicle **)this + 5), a2) == 1 )
    CPed::SetRadioStation(a2);
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v8 = *((_DWORD *)a2 + 356);
    if ( v8 )
      CAEVehicleAudioEntity::PlayerAboutToExitVehicleAsDriver((CAEVehicleAudioEntity *)(v8 + 316));
  }
  if ( !*((_DWORD *)this + 3) )
  {
    if ( *((_DWORD *)this + 8) )
    {
      Association = RpAnimBlendClumpGetAssociation();
      if ( !Association )
      {
        Association = RpAnimBlendClumpGetAssociation();
        if ( !Association )
          Association = RpAnimBlendClumpGetAssociation();
      }
      v10 = *((_DWORD *)this + 8);
      v11 = Association == 0;
      if ( Association )
        v11 = v10 == 0;
      if ( v11 )
      {
        if ( !v10 )
          goto LABEL_49;
      }
      else if ( *(float *)(Association + 32) <= 0.3 )
      {
        goto LABEL_50;
      }
      if ( (rand() & 0x3FFu) <= 0x200 )
      {
        v16 = (CPed *)*((_DWORD *)this + 8);
        v17 = (CAEVehicleAudioEntity *)(*((_DWORD *)this + 5) + 316);
        if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v17) == 1 )
        {
          v18 = 121;
        }
        else if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v17) )
        {
          v18 = 124;
        }
        else
        {
          IsPedFemaleForAudio = CAEPedSpeechAudioEntity::IsPedFemaleForAudio((CPed *)((char *)a2 + 664));
          v18 = 122;
          if ( !IsPedFemaleForAudio )
            v18 = 123;
        }
        if ( (unsigned __int16)CPed::Say(v16, v18, 0, 1.0, 0, 0, 0) != 0xFFFF )
          goto LABEL_49;
        v4 = CAEVehicleAudioEntity::GetVehicleTypeForAudio((CAEVehicleAudioEntity *)(*((_DWORD *)this + 5) + 316)) == 0;
        v15 = 119;
        v20 = a2;
        if ( v4 )
          v15 = 118;
      }
      else
      {
        v4 = CAEVehicleAudioEntity::GetVehicleTypeForAudio((CAEVehicleAudioEntity *)(*((_DWORD *)this + 5) + 316)) == 0;
        v12 = 119;
        if ( v4 )
          v12 = 118;
        if ( (unsigned __int16)CPed::Say(a2, v12, 0, 1.0, 0, 0, 0) != 0xFFFF )
          goto LABEL_49;
        v13 = (CPed *)*((_DWORD *)this + 8);
        v14 = (CAEVehicleAudioEntity *)(*((_DWORD *)this + 5) + 316);
        if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v14) == 1 )
        {
          v15 = 121;
        }
        else if ( CAEVehicleAudioEntity::GetVehicleTypeForAudio(v14) )
        {
          v15 = 124;
        }
        else
        {
          v21 = CAEPedSpeechAudioEntity::IsPedFemaleForAudio((CPed *)((char *)a2 + 664));
          v15 = 122;
          if ( !v21 )
            v15 = 123;
        }
        v20 = v13;
      }
      CPed::Say(v20, v15, 0, 1.0, 0, 0, 0);
    }
LABEL_49:
    v22 = *((_DWORD *)a2 + 6);
    v23 = (int *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 5) + 192))(*((_DWORD *)this + 5));
    v24 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v22, *v23, 0xC9u);
    *((_DWORD *)this + 3) = v24;
    CAnimBlendAssociation::SetFinishCallback(
      v24,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleBikeJacked::FinishAnimBikeHitCB,
      this);
    CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 72, 0.0, 1.0, 0, 0, 0, 0);
  }
LABEL_50:
  v6 = 0;
  if ( !*((_DWORD *)this + 10) )
  {
    v25 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
    memset(v27, 0, 12);
    CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v25, (const CVector *)v27, 0, 0, *((_DWORD *)this + 6));
    *((_DWORD *)this + 10) = v26;
  }
  return v6;
}


// ============================================================

// Address: 0x5058dc
// Original: _ZN21CTaskSimpleBikeJacked19FinishAnimBikeHitCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleBikeJacked::FinishAnimBikeHitCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleBikeJacked::FinishAnimBikeHitCB(
        CTaskSimpleBikeJacked *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int v3; // r0
  int result; // r0

  *((_BYTE *)a2 + 8) = 1;
  v3 = *((_DWORD *)a2 + 6);
  *((_DWORD *)a2 + 3) = 0;
  if ( (v3 | 2) == 0xA )
    result = 105;
  else
    result = 106;
  *((_DWORD *)a2 + 4) = result;
  return result;
}


// ============================================================

// Address: 0x5058f6
// Original: _ZN21CTaskSimpleBikeJacked14SetPedPositionEP4CPed
// Demangled: CTaskSimpleBikeJacked::SetPedPosition(CPed *)
int __fastcall CTaskSimpleBikeJacked::SetPedPosition(CTaskSimpleBikeJacked *this, CPed *a2)
{
  int v2; // r0
  bool v3; // zf

  v2 = *((_DWORD *)a2 + 356);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( !v3 )
    CPed::SetPedPositionInCar(a2);
  return 1;
}


// ============================================================

// Address: 0x507260
// Original: _ZNK21CTaskSimpleBikeJacked5CloneEv
// Demangled: CTaskSimpleBikeJacked::Clone(void)
int __fastcall CTaskSimpleBikeJacked::Clone(CTaskSimpleBikeJacked *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r8
  int v5; // r9
  int v6; // r10
  CEntity *v7; // r5

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 7);
  v7 = (CEntity *)*((_DWORD *)this + 8);
  LOBYTE(this) = *((_BYTE *)this + 36);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 191;
  *(_DWORD *)(v3 + 24) = v5;
  *(_DWORD *)(v3 + 28) = v6;
  *(_BYTE *)(v3 + 36) = (_BYTE)this;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)v3 = &off_66B490;
  *(_DWORD *)(v3 + 32) = v7;
  *(_DWORD *)(v3 + 20) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 20));
    v7 = *(CEntity **)(v3 + 32);
  }
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 32));
  return v3;
}


// ============================================================

// Address: 0x5072d8
// Original: _ZNK21CTaskSimpleBikeJacked11GetTaskTypeEv
// Demangled: CTaskSimpleBikeJacked::GetTaskType(void)
int __fastcall CTaskSimpleBikeJacked::GetTaskType(CTaskSimpleBikeJacked *this)
{
  return 826;
}


// ============================================================
