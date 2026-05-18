
// Address: 0x190eac
// Original: j__ZN24CTaskComplexInAirAndLandC2Ebb
// Demangled: CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(bool,bool)
// attributes: thunk
void __fastcall CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(CTaskComplexInAirAndLand *this, bool a2, bool a3)
{
  _ZN24CTaskComplexInAirAndLandC2Ebb(this, a2, a3);
}


// ============================================================

// Address: 0x1927d0
// Original: j__ZN24CTaskComplexInAirAndLand10CreateTaskEv
// Demangled: CTaskComplexInAirAndLand::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexInAirAndLand::CreateTask(CTaskComplexInAirAndLand *this)
{
  return _ZN24CTaskComplexInAirAndLand10CreateTaskEv(this);
}


// ============================================================

// Address: 0x4914a8
// Original: _ZN24CTaskComplexInAirAndLand10CreateTaskEv
// Demangled: CTaskComplexInAirAndLand::CreateTask(void)
void __fastcall CTaskComplexInAirAndLand::CreateTask(CTaskComplexInAirAndLand *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  CTaskComplexInAirAndLand *v7; // r0
  bool v8; // r1
  char v9; // [sp+2h] [bp-Eh] BYREF
  bool v10; // [sp+3h] [bp-Dh] BYREF
  _BYTE v11[2]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v12[10]; // [sp+6h] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, (char *)&stderr + 1, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, (char *)&stderr + 1, v4);
  v7 = (CTaskComplexInAirAndLand *)CTask::operator new((CTask *)&word_10, v6);
  v8 = v10;
  if ( v10 )
    v8 = 1;
  CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(v7, v8, v9 != 0);
}


// ============================================================

// Address: 0x52bda8
// Original: _ZN24CTaskComplexInAirAndLandC2Ebb
// Demangled: CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(bool,bool)
void __fastcall CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(CTaskComplexInAirAndLand *this, bool a2, bool a3)
{
  int v5; // r0

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v5 + 12) = a2;
  *(_BYTE *)(v5 + 13) = a3;
  *(_BYTE *)(v5 + 14) = 0;
  *(_DWORD *)v5 = &off_66CAB4;
}


// ============================================================

// Address: 0x52bdcc
// Original: _ZN24CTaskComplexInAirAndLandD2Ev
// Demangled: CTaskComplexInAirAndLand::~CTaskComplexInAirAndLand()
// attributes: thunk
void __fastcall CTaskComplexInAirAndLand::~CTaskComplexInAirAndLand(CTaskComplexInAirAndLand *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x52bdd0
// Original: _ZN24CTaskComplexInAirAndLandD0Ev
// Demangled: CTaskComplexInAirAndLand::~CTaskComplexInAirAndLand()
void __fastcall CTaskComplexInAirAndLand::~CTaskComplexInAirAndLand(CTaskComplexInAirAndLand *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x52bde0
// Original: _ZN24CTaskComplexInAirAndLand18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexInAirAndLand::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexInAirAndLand::CreateFirstSubTask(CTaskComplexInAirAndLand *this, CPed *a2)
{
  CTaskSimple *v3; // r0
  int v4; // r5
  int v5; // r4
  int result; // r0
  char v7; // r3

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&off_3C, (unsigned int)a2);
  v4 = *((unsigned __int8 *)this + 12);
  v5 = *((unsigned __int8 *)this + 13);
  CTaskSimple::CTaskSimple(v3);
  *(_DWORD *)(result + 50) = 0;
  *(_DWORD *)(result + 46) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  v7 = *(_BYTE *)(result + 36);
  *(_DWORD *)result = &off_66CAF0;
  *(_BYTE *)(result + 36) = (v4 != 0) | (2 * (v5 != 0)) | v7 & 0xF8;
  *(_DWORD *)(result + 44) = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)(result + 48) = 500;
  *(_BYTE *)(result + 52) = 1;
  return result;
}


// ============================================================

// Address: 0x52be54
// Original: _ZN24CTaskComplexInAirAndLand17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexInAirAndLand::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexInAirAndLand::CreateNextSubTask(CTaskComplexInAirAndLand *this, CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r4
  unsigned int v7; // r1
  int v8; // r0
  __int16 v9; // r2
  float v10; // s16
  char v11; // r0
  char v12; // r0
  CTaskSimple *v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  CPad *PadFromPlayer; // r4
  int v17; // r0
  int v18; // r0
  char v19; // r2
  int v20; // r0
  int v21; // r8
  int v22; // r0
  float v23; // s0
  CEntity **v24; // r6
  int v25; // r0
  char *v26; // r2
  double v27; // d16
  char v28; // r2
  int v29; // r0
  int IsWearingBalaclava; // r8
  int v31; // r0
  float v32; // s0
  int v33; // r0
  char *v34; // r2
  double v35; // d16
  CEventGroup *EventGlobalGroup; // r0
  _DWORD v38[4]; // [sp+10h] [bp-40h] BYREF
  CEntity *v39; // [sp+20h] [bp-30h]
  float v40; // [sp+24h] [bp-2Ch]
  int v41; // [sp+28h] [bp-28h]
  double v42; // [sp+2Ch] [bp-24h]
  int v43; // [sp+34h] [bp-1Ch]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v4 == 207 )
  {
    v13 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, v5);
    CTaskSimple::CTaskSimple(v13);
    *(_WORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 12) = 0;
    v6 = v14;
    *(_DWORD *)v14 = &off_66C998;
    return v6;
  }
  if ( v4 == 241 )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = *(_DWORD *)(v7 + 28);
    if ( *((_BYTE *)this + 13) )
    {
      if ( v8 )
      {
        v9 = *(_WORD *)(v8 + 46);
        *(_DWORD *)(v8 + 28) = -1056964608;
        *(_WORD *)(v8 + 46) = v9 | 4;
        CAnimBlendAssociation::SetFinishCallback(
          (CAnimBlendAssociation *)v8,
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *(_DWORD *)(*((_DWORD *)this + 2) + 28) = 0;
      }
      v10 = *((float *)a2 + 20);
      v6 = CTask::operator new((CTask *)&dword_14, v7);
      CTaskSimple::CTaskSimple((CTaskSimple *)v6);
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)v6 = &off_66CB24;
      v11 = *(_BYTE *)(v6 + 16);
      if ( v10 >= -0.1 )
      {
        *(_DWORD *)(v6 + 12) = -1;
        v12 = v11 & 0xF8 | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 12) = 26;
        v12 = v11 & 0xF8;
      }
      *(_BYTE *)(v6 + 16) = v12 | 4;
      return v6;
    }
    if ( v8 && *(_WORD *)(v8 + 44) == 120 )
    {
      if ( *(float *)(v7 + 32) >= -0.4 )
      {
        v6 = CTask::operator new((CTask *)&dword_14, v7);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        *(_DWORD *)(v6 + 8) = 0;
        v28 = *(_BYTE *)(v6 + 16);
        *(_DWORD *)(v6 + 12) = 123;
        *(_DWORD *)v6 = &off_66CB24;
        *(_BYTE *)(v6 + 16) = v28 & 0xF8 | 4;
      }
      else
      {
        v6 = CTask::operator new((CTask *)&dword_20, v7);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        *(_BYTE *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 12) = 26;
        *(_DWORD *)(v6 + 16) = 0;
        *(_DWORD *)(v6 + 20) = 0;
        *(_DWORD *)(v6 + 24) = 700;
        *(_DWORD *)(v6 + 28) = 700;
        *(_DWORD *)v6 = &off_66CA08;
      }
      CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 59, 0.0, 1.0, 0, 0, 0, 0);
      v29 = *((_DWORD *)a2 + 273);
      if ( !v29 )
        return v6;
      IsWearingBalaclava = CPedClothesDesc::GetIsWearingBalaclava(*(CPedClothesDesc **)(v29 + 4));
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v38);
      v32 = 60.0;
      if ( IsWearingBalaclava )
        v32 = 75.0;
      v39 = a2;
      v38[0] = &off_66715C;
      v41 = -1;
      v42 = 0.0;
      v43 = 0;
      v24 = (CEntity **)(v31 + 16);
      v40 = v32;
      CEntity::RegisterReference(a2, (CEntity **)(v31 + 16));
      if ( v41 == -1 )
      {
        v41 = CTimer::m_snTimeInMilliseconds;
        v33 = *((_DWORD *)v39 + 5);
        v34 = (char *)(v33 + 48);
        if ( !v33 )
          v34 = (char *)v39 + 4;
        v35 = *(double *)v34;
        v43 = *((_DWORD *)v34 + 2);
        v42 = v35;
      }
      goto LABEL_41;
    }
    if ( CPed::IsPlayer(a2) == 1 )
    {
      PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
      v17 = *(_DWORD *)(*((_DWORD *)this + 2) + 28);
      if ( v17 && *(_WORD *)(v17 + 44) == 9 )
      {
        v6 = CTask::operator new((CTask *)&dword_14, v15);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        v18 = 10;
LABEL_25:
        v19 = *(_BYTE *)(v6 + 16);
        *(_DWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 12) = v18;
        *(_BYTE *)(v6 + 16) = v19 & 0xF8 | 4;
        *(_DWORD *)v6 = &off_66CB24;
        CAEPedAudioEntity::AddAudioEvent((CPed *)((char *)a2 + 316), 58, 0.0, 1.0, 0, 0, 0, 0);
        v20 = *((_DWORD *)a2 + 273);
        if ( !v20 )
          return v6;
        v21 = CPedClothesDesc::GetIsWearingBalaclava(*(CPedClothesDesc **)(v20 + 4));
        CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v38);
        v23 = 55.0;
        if ( v21 )
          v23 = 70.0;
        v39 = a2;
        v38[0] = &off_66715C;
        v41 = -1;
        v42 = 0.0;
        v43 = 0;
        v24 = (CEntity **)(v22 + 16);
        v40 = v23;
        CEntity::RegisterReference(a2, (CEntity **)(v22 + 16));
        if ( v41 == -1 )
        {
          v41 = CTimer::m_snTimeInMilliseconds;
          v25 = *((_DWORD *)v39 + 5);
          v26 = (char *)(v25 + 48);
          if ( !v25 )
            v26 = (char *)v39 + 4;
          v27 = *(double *)v26;
          v43 = *((_DWORD *)v26 + 2);
          v42 = v27;
        }
LABEL_41:
        EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
        CEventGroup::Add(EventGlobalGroup, (CEvent *)v38, 0);
        v38[0] = &off_66715C;
        if ( v39 )
          CEntity::CleanUpOldReference(v39, v24);
        CEvent::~CEvent((CEvent *)v38);
        return v6;
      }
      if ( PadFromPlayer
        && *(float *)(*((_DWORD *)a2 + 273) + 20) > 1.5
        && (CPad::GetPedWalkLeftRight(PadFromPlayer) || CPad::GetPedWalkUpDown(PadFromPlayer)) )
      {
        v6 = CTask::operator new((CTask *)&dword_14, v15);
        CTaskSimple::CTaskSimple((CTaskSimple *)v6);
        v18 = 119;
        goto LABEL_25;
      }
    }
    v6 = CTask::operator new((CTask *)&dword_14, v15);
    CTaskSimple::CTaskSimple((CTaskSimple *)v6);
    v18 = 122;
    goto LABEL_25;
  }
  return v6;
}


// ============================================================

// Address: 0x52c1cc
// Original: _ZN24CTaskComplexInAirAndLand14ControlSubTaskEP4CPed
// Demangled: CTaskComplexInAirAndLand::ControlSubTask(CPed *)
int __fastcall CTaskComplexInAirAndLand::ControlSubTask(CTaskComplexInAirAndLand *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  unsigned int v8; // r1
  float v9; // s16
  float *v10; // r2
  float v11; // s18
  float v12; // s20
  char v13; // r9
  int v14; // r8
  CEntity **v15; // r5
  unsigned int v16; // r1
  char v17; // r11
  __int64 *v18; // r6
  __int64 v19; // d16
  int v21; // [sp+4h] [bp-3Ch]

  v4 = *((_DWORD *)this + 2);
  if ( v4 && !*((_BYTE *)this + 13) )
  {
    v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 20))(*((_DWORD *)this + 2));
    v6 = v5 == 241;
    if ( v5 == 241 )
      v6 = *((_BYTE *)this + 14) == 0;
    if ( v6 )
    {
      v7 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v7 + 56) )
      {
        v8 = *((_DWORD *)a2 + 5);
        v9 = *(float *)(v7 + 16);
        v10 = (float *)(v8 + 48);
        if ( !v8 )
          v10 = (float *)((char *)a2 + 4);
        v11 = v10[2];
        v12 = CTaskSimpleClimb::ms_fMinForStretchGrab;
        v4 = CTask::operator new((CTask *)&word_30, v8);
        v13 = *(_BYTE *)(v7 + 24);
        v21 = *(_DWORD *)(v7 + 20);
        v14 = *(_DWORD *)(v7 + 56);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_DWORD *)v4 = &off_66CC04;
        *(_WORD *)(v4 + 8) = 0;
        *(_BYTE *)(v4 + 10) = 0;
        *(_BYTE *)(v4 + 12) = 0;
        *(_DWORD *)(v4 + 44) = 0;
        *(_DWORD *)(v4 + 36) = v14;
        v15 = (CEntity **)(v4 + 36);
        CWidgetHelpText::ConditionSatisfied((CWidgetHelpText *)&elf_hash_bucket[193], v16);
        v17 = 1;
        v18 = (__int64 *)(v7 + 8);
        if ( (float)(v9 - v11) < (float)(v12 + -0.3) )
          v17 = 2;
        if ( *v15 )
          CEntity::RegisterReference(*v15, (CEntity **)(v4 + 36));
        v19 = *v18;
        *(_DWORD *)(v4 + 32) = *((_DWORD *)v18 + 2);
        *(_QWORD *)(v4 + 24) = v19;
        *(_BYTE *)(v4 + 15) = v13;
        *(_DWORD *)(v4 + 20) = v21;
        *(_BYTE *)(v4 + 13) = v17;
        *(_BYTE *)(v4 + 11) = 0;
        *(_BYTE *)(v4 + 14) = 0;
        *(_BYTE *)(v4 + 16) = -1;
        *(_WORD *)(v4 + 40) = 0;
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x532c6c
// Original: _ZNK24CTaskComplexInAirAndLand5CloneEv
// Demangled: CTaskComplexInAirAndLand::Clone(void)
int __fastcall CTaskComplexInAirAndLand::Clone(CTaskComplexInAirAndLand *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r5
  int v5; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((unsigned __int8 *)this + 12);
  v5 = *((unsigned __int8 *)this + 13);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 12) = v4 != 0;
  *(_BYTE *)(result + 13) = v5 != 0;
  *(_BYTE *)(result + 14) = 0;
  *(_DWORD *)result = &off_66CAB4;
  return result;
}


// ============================================================

// Address: 0x532ca4
// Original: _ZNK24CTaskComplexInAirAndLand11GetTaskTypeEv
// Demangled: CTaskComplexInAirAndLand::GetTaskType(void)
int __fastcall CTaskComplexInAirAndLand::GetTaskType(CTaskComplexInAirAndLand *this)
{
  return 240;
}


// ============================================================

// Address: 0x532ca8
// Original: _ZN24CTaskComplexInAirAndLand9SerializeEv
// Demangled: CTaskComplexInAirAndLand::Serialize(void)
int __fastcall CTaskComplexInAirAndLand::Serialize(CTaskComplexInAirAndLand *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v8; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexInAirAndLand *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexInAirAndLand *))(*(_DWORD *)this + 20))(this) == 240 )
  {
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CTaskComplexInAirAndLand *)((char *)this + 12), (char *)&stderr + 1, v5);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexInAirAndLand *)((char *)this + 13), (char *)&stderr + 1, v6);
  }
  else
  {
    v8 = (*(int (__fastcall **)(CTaskComplexInAirAndLand *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(240, v8);
  }
}


// ============================================================
