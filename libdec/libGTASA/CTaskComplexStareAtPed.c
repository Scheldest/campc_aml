
// Address: 0x192a44
// Original: j__ZN22CTaskComplexStareAtPedC2EP9CPedGroupP4CPedi
// Demangled: CTaskComplexStareAtPed::CTaskComplexStareAtPed(CPedGroup *,CPed *,int)
// attributes: thunk
void __fastcall CTaskComplexStareAtPed::CTaskComplexStareAtPed(
        CTaskComplexStareAtPed *this,
        CPedGroup *a2,
        CPed *a3,
        int a4)
{
  _ZN22CTaskComplexStareAtPedC2EP9CPedGroupP4CPedi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x192be8
// Original: j__ZN22CTaskComplexStareAtPedD2Ev
// Demangled: CTaskComplexStareAtPed::~CTaskComplexStareAtPed()
// attributes: thunk
void __fastcall CTaskComplexStareAtPed::~CTaskComplexStareAtPed(CTaskComplexStareAtPed *this)
{
  _ZN22CTaskComplexStareAtPedD2Ev(this);
}


// ============================================================

// Address: 0x5197ec
// Original: _ZN22CTaskComplexStareAtPedC2EP9CPedGroupP4CPedi
// Demangled: CTaskComplexStareAtPed::CTaskComplexStareAtPed(CPedGroup *,CPed *,int)
void __fastcall CTaskComplexStareAtPed::CTaskComplexStareAtPed(
        CTaskComplexStareAtPed *this,
        CPedGroup *a2,
        CPed *a3,
        int a4)
{
  int v8; // r0
  CEntity **v9; // r1

  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 16) = 0;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_66BEE0;
  v8 = IsEntityPointerValid(a3);
  v9 = (CEntity **)((char *)this + 16);
  if ( v8 == 1 )
  {
    *v9 = a3;
    CEntity::RegisterReference(a3, v9);
  }
  else
  {
    *v9 = 0;
  }
  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 18) = 0;
}


// ============================================================

// Address: 0x519848
// Original: _ZN22CTaskComplexStareAtPedD2Ev
// Demangled: CTaskComplexStareAtPed::~CTaskComplexStareAtPed()
void __fastcall CTaskComplexStareAtPed::~CTaskComplexStareAtPed(CTaskComplexStareAtPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66BEE0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 37) )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 37) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x519890
// Original: _ZN22CTaskComplexStareAtPedD0Ev
// Demangled: CTaskComplexStareAtPed::~CTaskComplexStareAtPed()
void __fastcall CTaskComplexStareAtPed::~CTaskComplexStareAtPed(CTaskComplexStareAtPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v5; // r1
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66BEE0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  if ( *((_BYTE *)this + 37) )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex(
                                            (CAnimManager *)"gangs",
                                            (const char *)v3);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v5);
    *((_BYTE *)this + 37) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x5198dc
// Original: _ZNK22CTaskComplexStareAtPed5CloneEv
// Demangled: CTaskComplexStareAtPed::Clone(void)
int __fastcall CTaskComplexStareAtPed::Clone(CTaskComplexStareAtPed *this, unsigned int a2)
{
  unsigned int v3; // r8
  int v4; // r4
  __int64 v5; // kr00_8
  int v6; // r0
  CEntity **v7; // r1

  if ( *((_BYTE *)this + 32) )
  {
    a2 = *((_DWORD *)this + 6) + *((_DWORD *)this + 7);
    v3 = a2 - CTimer::m_snTimeInMilliseconds;
  }
  else
  {
    v3 = *((_DWORD *)this + 5);
  }
  v4 = CTask::operator new((CTask *)&word_28, a2);
  v5 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v4);
  *(_WORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 12) = v5;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)v4 = &off_66BEE0;
  v6 = IsEntityPointerValid((CEntity *)HIDWORD(v5));
  v7 = (CEntity **)(v4 + 16);
  if ( v6 == 1 )
  {
    *v7 = (CEntity *)HIDWORD(v5);
    CEntity::RegisterReference((CEntity *)HIDWORD(v5), v7);
  }
  else
  {
    *v7 = 0;
  }
  *(_DWORD *)(v4 + 20) = v3;
  *(_WORD *)(v4 + 36) = 0;
  return v4;
}


// ============================================================

// Address: 0x519960
// Original: _ZN22CTaskComplexStareAtPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexStareAtPed::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexStareAtPed::CreateNextSubTask(CEntity **this, CPed *a2)
{
  unsigned int v3; // r1
  float v4; // s16
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r0
  CTaskComplexTurnToFaceEntityOrCoord *v7; // r0

  if ( (*(int (__fastcall **)(CEntity *))(*(_DWORD *)this[2] + 20))(this[2]) == 920 )
  {
    v4 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0;
    v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v6, (int)v4 + 500, 0, 0, 8.0);
  }
  else
  {
    v7 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v3);
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v7, this[4], 0.5, 0.2);
  }
}


// ============================================================

// Address: 0x5199f4
// Original: _ZN22CTaskComplexStareAtPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexStareAtPed::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexStareAtPed::CreateFirstSubTask(CTaskComplexStareAtPed *this, CPed *a2)
{
  int v2; // r2
  int v3; // r1
  float v4; // s16
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r0

  v2 = *((_DWORD *)this + 5);
  v3 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 32) = 1;
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 7) = v2;
  v4 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0;
  v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v6, (int)v4 + 500, 0, 0, 8.0);
}


// ============================================================

// Address: 0x519a64
// Original: _ZN22CTaskComplexStareAtPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexStareAtPed::ControlSubTask(CPed *)
int __fastcall CTaskComplexStareAtPed::ControlSubTask(CTaskComplexStareAtPed *this, CPed *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  _BOOL4 v6; // r6
  CPed *v7; // r2
  int v8; // r5
  int v9; // r1
  float *v10; // r0
  bool v11; // zf
  int v12; // r0
  int AnimationBlockIndex; // r0
  int v14; // r2
  char v15; // r0
  CAnimManager *v16; // r0
  int v17; // r1
  CPed *v18; // r1
  int LookAtEntity; // r0
  int v20; // r3
  int v21; // r0
  bool v22; // zf
  __int64 v23; // kr00_8
  int v24; // r6
  int Leader; // r0
  int v26; // r1
  int v27; // r2
  int v28; // r3
  float32x2_t v29; // d16
  unsigned __int64 v30; // d1
  unsigned int v32; // r1
  int v33; // r6
  CTask *v34; // r5
  unsigned __int16 v35; // r0

  if ( *((_BYTE *)this + 32) )
  {
    if ( *((_BYTE *)this + 33) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 33) = 0;
      *((_DWORD *)this + 6) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 6);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    v6 = v5 + *((_DWORD *)this + 7) <= v4;
  }
  else
  {
    v6 = 0;
  }
  v7 = (CPed *)(elf_hash_bucket + 152);
  v8 = *((unsigned __int8 *)this + 37);
  v9 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v10 = *(float **)(v9 + 1424);
  v11 = v10 == 0;
  if ( v10 )
  {
    v9 = *(_DWORD *)(v9 + 1156) & 0x100;
    v11 = v9 == 0;
  }
  if ( v11
    || (float)((float)((float)(v10[18] * v10[18]) + (float)(v10[19] * v10[19])) + (float)(v10[20] * v10[20])) <= 0.04 )
  {
    v12 = CStreaming::IsVeryBusy((CStreaming *)v10) ^ 1;
    if ( !v8 )
    {
LABEL_12:
      if ( v12 == 1 )
      {
        AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v9);
        if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] != 1 )
        {
          CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v14);
          goto LABEL_19;
        }
        CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
        v15 = 1;
        goto LABEL_18;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v12 = 0;
    if ( !*((_BYTE *)this + 37) )
      goto LABEL_12;
  }
  if ( !v12 )
  {
    v16 = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v9);
    CAnimManager::RemoveAnimBlockRef(v16, v17);
    v15 = 0;
LABEL_18:
    *((_BYTE *)this + 37) = v15;
  }
LABEL_19:
  v18 = (CPed *)*((_DWORD *)this + 4);
  if ( v18 == 0 || v6 )
    goto LABEL_44;
  CTaskComplexGangLeader::DoGangAbuseSpeech(a2, v18, v7);
  if ( *((_BYTE *)this + 36) )
  {
    LookAtEntity = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2);
    v20 = *((_DWORD *)this + 4);
    if ( LookAtEntity != v20 )
      IKChainManager_c::LookAt((int)&g_ikChainMan, (int)"TaskStareAtPed", a2, v20, 9999999, 5, 0, 1, 0.15, 500, 3, 0);
  }
  else
  {
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"TaskStareAtPed",
      a2,
      *((_DWORD *)this + 4),
      9999999,
      5,
      0,
      1,
      0.15,
      500,
      3,
      0);
    *((_BYTE *)this + 36) = 1;
  }
  if ( !*((_BYTE *)this + 37) )
    goto LABEL_44;
  v21 = *((_DWORD *)this + 4);
  v22 = v21 == 0;
  if ( v21 )
  {
    v21 = *((_DWORD *)this + 3);
    v22 = v21 == 0;
  }
  if ( v22 || !CPedGroupMembership::GetLeader((CPedGroupMembership *)(v21 + 8)) )
    goto LABEL_44;
  v23 = *(_QWORD *)((char *)this + 12);
  v24 = *(_DWORD *)(HIDWORD(v23) + 20);
  Leader = CPedGroupMembership::GetLeader((CPedGroupMembership *)(v23 + 8));
  v26 = *(_DWORD *)(Leader + 20);
  v27 = v24 + 48;
  if ( !v24 )
    v27 = HIDWORD(v23) + 4;
  v28 = v26 + 48;
  if ( !v26 )
    v28 = Leader + 4;
  v29.n64_u64[0] = vsub_f32(*(float32x2_t *)(v27 + 4), *(float32x2_t *)(v28 + 4)).n64_u64[0];
  v30 = vmul_f32(v29, v29).n64_u64[0];
  if ( (float)((float)((float)((float)(*(float *)v27 - *(float *)v28) * (float)(*(float *)v27 - *(float *)v28))
                     + *(float *)&v30)
             + *((float *)&v30 + 1)) <= 64.0 )
  {
    if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4)
      && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) == 50 )
    {
      v33 = *((_DWORD *)a2 + 272);
      v34 = (CTask *)CTask::operator new((CTask *)&dword_20, v32);
      v35 = rand();
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(
        (int)v34,
        52,
        (int)(float)((float)((float)v35 * 0.000015259) * 8.0) + 279,
        1082130432,
        0);
      CTaskManager::SetTaskSecondary((CTaskManager *)(v33 + 4), v34, 4);
    }
    return *((_DWORD *)this + 2);
  }
  else
  {
LABEL_44:
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 500);
    return 0;
  }
}


// ============================================================

// Address: 0x51c4a6
// Original: _ZNK22CTaskComplexStareAtPed11GetTaskTypeEv
// Demangled: CTaskComplexStareAtPed::GetTaskType(void)
int __fastcall CTaskComplexStareAtPed::GetTaskType(CTaskComplexStareAtPed *this)
{
  return 257;
}


// ============================================================
