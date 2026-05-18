
// Address: 0x18b3d8
// Original: j__ZN14CTaskSequences4InitEv
// Demangled: CTaskSequences::Init(void)
// attributes: thunk
int __fastcall CTaskSequences::Init(CTaskSequences *this)
{
  return _ZN14CTaskSequences4InitEv(this);
}


// ============================================================

// Address: 0x1905dc
// Original: j__ZN14CTaskSequences18CleanUpForShutdownEv
// Demangled: CTaskSequences::CleanUpForShutdown(void)
// attributes: thunk
int __fastcall CTaskSequences::CleanUpForShutdown(CTaskSequences *this)
{
  return _ZN14CTaskSequences18CleanUpForShutdownEv(this);
}


// ============================================================

// Address: 0x190884
// Original: j__ZN14CTaskSequences4SaveEv
// Demangled: CTaskSequences::Save(void)
// attributes: thunk
int __fastcall CTaskSequences::Save(CTaskSequences *this)
{
  return _ZN14CTaskSequences4SaveEv(this);
}


// ============================================================

// Address: 0x190b6c
// Original: j__ZN14CTaskSequences16GetAvailableSlotEh
// Demangled: CTaskSequences::GetAvailableSlot(uchar)
// attributes: thunk
int __fastcall CTaskSequences::GetAvailableSlot(CTaskSequences *this, unsigned __int8 a2)
{
  return _ZN14CTaskSequences16GetAvailableSlotEh(this, a2);
}


// ============================================================

// Address: 0x1922a8
// Original: j__ZN14CTaskSequences4LoadEv
// Demangled: CTaskSequences::Load(void)
// attributes: thunk
int __fastcall CTaskSequences::Load(CTaskSequences *this)
{
  return _ZN14CTaskSequences4LoadEv(this);
}


// ============================================================

// Address: 0x4ee948
// Original: _ZN14CTaskSequences4SaveEv
// Demangled: CTaskSequences::Save(void)
void __fastcall CTaskSequences::Save(CTaskSequences *this)
{
  void *v1; // r4
  int v2; // r2
  int v3; // r2
  int v4; // r9
  _DWORD *v5; // r8
  int i; // r5
  int v7; // r4
  int v8; // r11
  CGenericGameStorage *v9; // r6
  int v10; // r2
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v1 = malloc(0x100u);
  memcpy_1(v1, CTheScripts::ScriptSequenceTaskArray, 0x100u);
  CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v1, &elf_hash_bucket[1], v2);
  free(v1);
  CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)CTaskSequences::ms_bIsOpened, &dword_40, v3);
  v4 = 0;
  v5 = &unk_9FDC64;
  do
  {
    for ( i = 0; i != 8; ++i )
    {
      v7 = v5[i];
      if ( v7 )
      {
        v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 20))(v5[i]);
        v9 = (CGenericGameStorage *)malloc(4u);
        *(_DWORD *)v9 = v8;
        CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
        free(v9);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 32))(v7);
      }
      else
      {
        v11 = (CGenericGameStorage *)malloc(4u);
        *(_DWORD *)v11 = -1;
        CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
        free(v11);
      }
    }
    ++v4;
    v5 += 16;
  }
  while ( v4 != 64 );
}


// ============================================================

// Address: 0x4eea10
// Original: _ZN14CTaskSequences4LoadEv
// Demangled: CTaskSequences::Load(void)
CTask *__fastcall CTaskSequences::Load(CTaskSequences *this, int a2, int a3)
{
  int v3; // r2
  int v4; // r2
  int v5; // r9
  _DWORD *v6; // r6
  int i; // r4
  CTask *result; // r0
  CTask *v9; // r5
  _DWORD v10[7]; // [sp+4h] [bp-1Ch] BYREF

  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)CTheScripts::ScriptSequenceTaskArray,
    &elf_hash_bucket[1],
    a3);
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)CTaskSequences::ms_bIsOpened, &dword_40, v3);
  v5 = 0;
  v6 = &unk_9FDC64;
  do
  {
    for ( i = 0; i != 8; ++i )
    {
      v10[0] = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v10, byte_4, v4);
      result = (CTask *)(v10[0] + 1);
      if ( v10[0] != -1 )
      {
        result = (CTask *)CTask::CreateTask(result);
        v9 = result;
        if ( result )
        {
          result = (CTask *)v6[i];
          if ( result )
            result = (CTask *)(*(int (__fastcall **)(CTask *))(*(_DWORD *)result + 4))(result);
          v6[i] = v9;
        }
      }
    }
    ++v5;
    v6 += 16;
  }
  while ( v5 != 64 );
  return result;
}


// ============================================================

// Address: 0x4eeaa0
// Original: _ZN14CTaskSequences4InitEv
// Demangled: CTaskSequences::Init(void)
int __fastcall CTaskSequences::Init(CTaskSequences *this)
{
  int v1; // r5
  CTaskComplexSequence *v2; // r4
  int result; // r0

  v1 = 0;
  v2 = (CTaskComplexSequence *)&CTaskSequences::ms_taskSequence;
  CTaskSequences::ms_iActiveSequence = -1;
  do
  {
    CTaskSequences::ms_bIsOpened[v1] = 0;
    result = CTaskComplexSequence::Flush(v2);
    ++v1;
    v2 = (CTaskComplexSequence *)((char *)v2 + 64);
  }
  while ( v1 != 64 );
  return result;
}


// ============================================================

// Address: 0x4eeaec
// Original: _ZN14CTaskSequences18CleanUpForShutdownEv
// Demangled: CTaskSequences::CleanUpForShutdown(void)
int __fastcall CTaskSequences::CleanUpForShutdown(CTaskSequences *this)
{
  int v1; // r5
  CTaskComplexSequence *v2; // r4
  int result; // r0

  v1 = 0;
  v2 = (CTaskComplexSequence *)&CTaskSequences::ms_taskSequence;
  do
  {
    CTaskSequences::ms_bIsOpened[v1] = 0;
    result = CTaskComplexSequence::Flush(v2);
    ++v1;
    v2 = (CTaskComplexSequence *)((char *)v2 + 64);
  }
  while ( v1 != 64 );
  return result;
}


// ============================================================

// Address: 0x4eeb28
// Original: _ZN14CTaskSequences16GetAvailableSlotEh
// Demangled: CTaskSequences::GetAvailableSlot(uchar)
unsigned int __fastcall CTaskSequences::GetAvailableSlot(unsigned int this, unsigned __int8 a2)
{
  int v2; // r12
  _DWORD *i; // r2
  bool v4; // zf

  v2 = 64;
  if ( this )
    this = 32;
  else
    v2 = 32;
  if ( this >= v2 )
    return -1;
  for ( i = (_DWORD *)((char *)&CTaskSequences::ms_taskSequence + 64 * this + 16); ; i += 16 )
  {
    v4 = CTaskSequences::ms_bIsOpened[this] == 0;
    if ( !CTaskSequences::ms_bIsOpened[this] )
      v4 = *i == 0;
    if ( v4 )
      break;
    if ( (int)++this >= v2 )
      return -1;
  }
  return this;
}


// ============================================================
