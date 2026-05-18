
// Address: 0x19076c
// Original: j__ZN30CTaskComplexPlayHandSignalAnimC2E11AnimationIdf
// Demangled: CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(AnimationId,float)
// attributes: thunk
int CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim()
{
  return _ZN30CTaskComplexPlayHandSignalAnimC2E11AnimationIdf();
}


// ============================================================

// Address: 0x193564
// Original: j__ZN30CTaskComplexPlayHandSignalAnimD2Ev
// Demangled: CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim()
// attributes: thunk
void __fastcall CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim(CTaskComplexPlayHandSignalAnim *this)
{
  _ZN30CTaskComplexPlayHandSignalAnimD2Ev(this);
}


// ============================================================

// Address: 0x19425c
// Original: j__ZN30CTaskComplexPlayHandSignalAnim10CreateTaskEv
// Demangled: CTaskComplexPlayHandSignalAnim::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexPlayHandSignalAnim::CreateTask(CTaskComplexPlayHandSignalAnim *this)
{
  return _ZN30CTaskComplexPlayHandSignalAnim10CreateTaskEv(this);
}


// ============================================================

// Address: 0x49228c
// Original: _ZN30CTaskComplexPlayHandSignalAnim10CreateTaskEv
// Demangled: CTaskComplexPlayHandSignalAnim::CreateTask(void)
int __fastcall CTaskComplexPlayHandSignalAnim::CreateTask(CTaskComplexPlayHandSignalAnim *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  int v8; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h] BYREF
  _BYTE v10[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v11[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v10, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, v4);
  CTask::operator new((CTask *)&off_18, v6);
  return CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
}


// ============================================================

// Address: 0x4d78a0
// Original: _ZN30CTaskComplexPlayHandSignalAnimC2E11AnimationIdf
// Demangled: CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(AnimationId,float)
int __fastcall CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(CTaskComplex *a1, int a2, int a3)
{
  int result; // r0
  char v6; // r2

  CTaskComplex::CTaskComplex(a1);
  v6 = *(_BYTE *)(result + 20);
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_BYTE *)(result + 20) = v6 & 0xF8;
  *(_DWORD *)result = &off_6695D0;
  return result;
}


// ============================================================

// Address: 0x4d78c8
// Original: _ZN30CTaskComplexPlayHandSignalAnimD2Ev
// Demangled: CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim()
void __fastcall CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim(CTaskComplexPlayHandSignalAnim *this)
{
  char v2; // r0
  _UNKNOWN **v3; // r1
  CBaseModelInfo *v4; // r0
  CBaseModelInfo *v5; // r0
  int v6; // r0

  v2 = *((_BYTE *)this + 20);
  v3 = &off_6695D0;
  *(_DWORD *)this = &off_6695D0;
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 8) != 0 )
      v4 = (CBaseModelInfo *)dword_91E2E8;
    else
      v4 = (CBaseModelInfo *)dword_91E2E0;
    CBaseModelInfo::RemoveRef(v4);
  }
  if ( (*((_BYTE *)this + 20) & 2) != 0 )
  {
    if ( (*((_BYTE *)this + 20) & 8) != 0 )
      v5 = (CBaseModelInfo *)dword_91E2EC;
    else
      v5 = (CBaseModelInfo *)dword_91E2E4;
    CBaseModelInfo::RemoveRef(v5);
  }
  if ( (*((_BYTE *)this + 20) & 4) != 0 )
  {
    CAnimManager::RemoveAnimBlockRef((CAnimManager *)CTaskComplexPlayHandSignalAnim::ms_animBlock, (int)v3);
    goto LABEL_25;
  }
  if ( (*((_BYTE *)this + 20) & 8) != 0 )
  {
    if ( !*(_WORD *)(dword_91E2E8 + 30) || !*(_WORD *)(dword_91E2EC + 30) )
    {
      v6 = CTaskComplexPlayHandSignalAnim::ms_animBlock;
      if ( CTaskComplexPlayHandSignalAnim::ms_animBlock != -1 )
        goto LABEL_23;
    }
  }
  else if ( !*(_WORD *)(dword_91E2E0 + 30) || !*(_WORD *)(dword_91E2E4 + 30) )
  {
    v6 = CTaskComplexPlayHandSignalAnim::ms_animBlock;
    if ( CTaskComplexPlayHandSignalAnim::ms_animBlock != -1 )
    {
LABEL_23:
      if ( !word_940B0E[16 * v6] )
        CStreaming::RemoveModel((CStreaming *)(v6 + 25575), 25575);
    }
  }
LABEL_25:
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4d7a04
// Original: _ZN30CTaskComplexPlayHandSignalAnimD0Ev
// Demangled: CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim()
void __fastcall CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim(CTaskComplexPlayHandSignalAnim *this)
{
  void *v1; // r0

  CTaskComplexPlayHandSignalAnim::~CTaskComplexPlayHandSignalAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4d7a14
// Original: _ZN30CTaskComplexPlayHandSignalAnim13CreateSubTaskEi
// Demangled: CTaskComplexPlayHandSignalAnim::CreateSubTask(int)
CTaskComplexSequence *__fastcall CTaskComplexPlayHandSignalAnim::CreateSubTask(
        CTaskComplexPlayHandSignalAnim *this,
        int a2)
{
  CTaskSimpleStandStill *v3; // r4
  CTaskComplexSequence *v4; // r8
  unsigned int v5; // r1
  CTaskSimpleStandStill *v6; // r5
  unsigned __int16 v7; // r0
  unsigned int v8; // r1
  CTaskSimple *v9; // r0
  __int64 v10; // kr00_8
  CTaskSimple *v11; // r5
  char v12; // r6
  char v13; // r0

  v3 = 0;
  if ( a2 == 425 )
  {
    v4 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, 0x1A9u);
    CTaskComplexSequence::CTaskComplexSequence(v4);
    v6 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v5);
    v7 = rand();
    CTaskSimpleStandStill::CTaskSimpleStandStill(v6, (int)(float)((float)((float)v7 * 0.000015259) * 1500.0), 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v4, v6);
    v9 = (CTaskSimple *)CTask::operator new((CTask *)&dword_24, v8);
    v10 = *(_QWORD *)((char *)this + 12);
    v11 = v9;
    v12 = *((_BYTE *)this + 20);
    CTaskSimple::CTaskSimple(v9);
    *((_DWORD *)v11 + 2) = 0;
    *(_DWORD *)v11 = &off_66959C;
    *((_QWORD *)v11 + 2) = v10;
    v13 = *((_BYTE *)v11 + 12);
    *((_BYTE *)v11 + 24) = (v12 & 8) != 0;
    *((_DWORD *)v11 + 7) = 0;
    *((_DWORD *)v11 + 8) = 0;
    *((_BYTE *)v11 + 12) = v13 & 0xF8;
    CTaskComplexSequence::AddTask(v4, v11);
    return v4;
  }
  else if ( a2 == 203 )
  {
    v3 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, 0xCBu);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v3, 0, 1, 0, 8.0);
  }
  return v3;
}


// ============================================================

// Address: 0x4d7af0
// Original: _ZN30CTaskComplexPlayHandSignalAnim15GetAnimIdForPedEP4CPed
// Demangled: CTaskComplexPlayHandSignalAnim::GetAnimIdForPed(CPed *)
int __fastcall CTaskComplexPlayHandSignalAnim::GetAnimIdForPed(CTaskComplexPlayHandSignalAnim *this, CPed *a2)
{
  int v2; // r1
  int v3; // r0
  int result; // r0

  v2 = *((_DWORD *)a2 + 359);
  v3 = v2 - 7;
  if ( (unsigned int)(v2 - 7) < 5 && 0x17u >> v3 << 31 )
    return dword_4D7B1C[v3];
  result = -1;
  if ( v2 == 14 )
    return 323;
  return result;
}


// ============================================================

// Address: 0x4d7b30
// Original: _ZN30CTaskComplexPlayHandSignalAnim11UseFatHandsEP4CPed
// Demangled: CTaskComplexPlayHandSignalAnim::UseFatHands(CPed *)
bool __fastcall CTaskComplexPlayHandSignalAnim::UseFatHands(CTaskComplexPlayHandSignalAnim *this, CPed *a2)
{
  unsigned int v2; // r1

  v2 = *((__int16 *)a2 + 19) - 103;
  return v2 <= 4 && ((1 << v2) & 0x15) != 0;
}


// ============================================================

// Address: 0x4d7b50
// Original: _ZN30CTaskComplexPlayHandSignalAnim18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexPlayHandSignalAnim::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexPlayHandSignalAnim::CreateFirstSubTask(CTaskComplexPlayHandSignalAnim *this, CPed *a2)
{
  int *v4; // r1
  unsigned int v5; // r0
  _BYTE *v6; // r4
  char v7; // t1
  char v8; // r0
  unsigned int v9; // r0
  char v10; // t1
  CTaskSimpleStandStill *v11; // r0

  if ( !IKChainManager_c::IsArmPointing((IKChainManager_c *)&g_ikChainMan, 1, a2) )
  {
    if ( *((_DWORD *)this + 3) == -1 )
    {
      v9 = *((_DWORD *)a2 + 359) - 7;
      if ( v9 > 7 || !(0x97u >> v9 << 31) )
      {
        *((_DWORD *)this + 3) = -1;
        return;
      }
      v4 = dword_4D7BE8;
      *((_DWORD *)this + 3) = dword_4D7BE8[v9];
    }
    v5 = *((__int16 *)a2 + 19) - 103;
    if ( v5 <= 4 && (v4 = &stderr + 1, ((1 << v5) & 0x15) != 0) )
    {
      v7 = *((_BYTE *)this + 20);
      v6 = (char *)this + 20;
      v8 = v7 | 8;
    }
    else
    {
      v10 = *((_BYTE *)this + 20);
      v6 = (char *)this + 20;
      v8 = v10 & 0xF7;
    }
    *v6 = v8;
    v11 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v4);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v11, 0, 1, 0, 8.0);
  }
}


// ============================================================

// Address: 0x4d7c08
// Original: _ZN30CTaskComplexPlayHandSignalAnim17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexPlayHandSignalAnim::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexPlayHandSignalAnim::CreateNextSubTask(CTaskComplexPlayHandSignalAnim *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4d7c0c
// Original: _ZN30CTaskComplexPlayHandSignalAnim14ControlSubTaskEP4CPed
// Demangled: CTaskComplexPlayHandSignalAnim::ControlSubTask(CPed *)
CTaskComplexSequence *__fastcall CTaskComplexPlayHandSignalAnim::ControlSubTask(
        CTaskComplexPlayHandSignalAnim *this,
        CPed *a2)
{
  int v3; // r0
  int v4; // r5
  int *v5; // r2
  CBaseModelInfo *v6; // r0
  CStreaming *v7; // r0
  int v8; // r1
  int AnimationBlockIndex; // r0
  int v10; // r2

  v3 = *((unsigned __int8 *)this + 20);
  v4 = *((_DWORD *)this + 2);
  if ( (v3 & 8) != 0 )
  {
    v5 = &elf_hash_bucket[1921];
    if ( byte_714230 == 1 )
    {
      if ( !(v3 << 31) )
      {
        CBaseModelInfo::AddRef((CBaseModelInfo *)dword_91E2E8);
        *((_BYTE *)this + 20) |= 1u;
      }
    }
    else
    {
      CStreaming::RequestModel((CStreaming *)&elf_hash_bucket[36], 8, (int)&elf_hash_bucket[1921]);
    }
    if ( byte_714244 == 1 )
    {
      if ( (*((_BYTE *)this + 20) & 2) != 0 )
        goto LABEL_20;
      v6 = (CBaseModelInfo *)dword_91E2EC;
      goto LABEL_16;
    }
    v7 = (CStreaming *)((char *)&elf_hash_bucket[36] + 1);
  }
  else
  {
    v5 = &elf_hash_bucket[1911];
    if ( byte_714208 == 1 )
    {
      if ( !(v3 << 31) )
      {
        CBaseModelInfo::AddRef((CBaseModelInfo *)dword_91E2E0);
        *((_BYTE *)this + 20) |= 1u;
      }
    }
    else
    {
      CStreaming::RequestModel((CStreaming *)((char *)&elf_hash_bucket[35] + 2), 8, (int)&elf_hash_bucket[1911]);
    }
    if ( byte_71421C == 1 )
    {
      if ( (*((_BYTE *)this + 20) & 2) != 0 )
        goto LABEL_20;
      v6 = (CBaseModelInfo *)dword_91E2E4;
LABEL_16:
      CBaseModelInfo::AddRef(v6);
      *((_BYTE *)this + 20) |= 2u;
      goto LABEL_20;
    }
    v7 = (CStreaming *)(elf_hash_bucket + 143);
  }
  CStreaming::RequestModel(v7, 8, (int)v5);
LABEL_20:
  LOBYTE(v8) = *((_BYTE *)this + 20);
  if ( (v8 & 3) != 3 )
    goto LABEL_26;
  AnimationBlockIndex = CTaskComplexPlayHandSignalAnim::ms_animBlock;
  if ( CTaskComplexPlayHandSignalAnim::ms_animBlock == -1 )
  {
    AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"ghands", 0);
    CTaskComplexPlayHandSignalAnim::ms_animBlock = AnimationBlockIndex;
  }
  v10 = LOBYTE(CStreaming::ms_aInfoForModel[10 * AnimationBlockIndex + 255758]);
  if ( v10 == 1 )
  {
    v8 = *((unsigned __int8 *)this + 20);
    if ( (v8 & 4) == 0 )
    {
      CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, v8);
      LOBYTE(v8) = *((_BYTE *)this + 20) | 4;
      *((_BYTE *)this + 20) = v8;
    }
LABEL_26:
    if ( (v8 & 4) == 0 )
      return (CTaskComplexSequence *)v4;
    goto LABEL_27;
  }
  CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v10);
  if ( (*((_BYTE *)this + 20) & 4) == 0 )
    return (CTaskComplexSequence *)v4;
LABEL_27:
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    return CTaskComplexPlayHandSignalAnim::CreateSubTask(this, 425);
  return (CTaskComplexSequence *)v4;
}


// ============================================================

// Address: 0x4d85ac
// Original: _ZNK30CTaskComplexPlayHandSignalAnim5CloneEv
// Demangled: CTaskComplexPlayHandSignalAnim::Clone(void)
int __fastcall CTaskComplexPlayHandSignalAnim::Clone(CTaskComplexPlayHandSignalAnim *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0
  char v6; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  v6 = *(_BYTE *)(result + 20);
  *(_DWORD *)result = &off_6695D0;
  *(_BYTE *)(result + 20) = v6 & 0xF8;
  return result;
}


// ============================================================

// Address: 0x4d85dc
// Original: _ZNK30CTaskComplexPlayHandSignalAnim11GetTaskTypeEv
// Demangled: CTaskComplexPlayHandSignalAnim::GetTaskType(void)
int __fastcall CTaskComplexPlayHandSignalAnim::GetTaskType(CTaskComplexPlayHandSignalAnim *this)
{
  return 426;
}


// ============================================================

// Address: 0x4d85e4
// Original: _ZN30CTaskComplexPlayHandSignalAnim9SerializeEv
// Demangled: CTaskComplexPlayHandSignalAnim::Serialize(void)
void __fastcall CTaskComplexPlayHandSignalAnim::Serialize(CTaskComplexPlayHandSignalAnim *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  CGenericGameStorage *v7; // r5
  int v8; // r2
  int v9; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexPlayHandSignalAnim *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexPlayHandSignalAnim *))(*(_DWORD *)this + 20))(this) == 426 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 3);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, byte_4, v6);
    free(v5);
    if ( UseDataFence )
      AddDataFence();
    v7 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v7 = *((_DWORD *)this + 4);
    CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
    j_free(v7);
  }
  else
  {
    v9 = (*(int (__fastcall **)(CTaskComplexPlayHandSignalAnim *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(426, v9);
  }
}


// ============================================================
