
// Address: 0x18b0b0
// Original: j__ZN19CAnimBlendHierarchy10MoveMemoryEv
// Demangled: CAnimBlendHierarchy::MoveMemory(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::MoveMemory(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy10MoveMemoryEv(this);
}


// ============================================================

// Address: 0x193414
// Original: j__ZN19CAnimBlendHierarchy21RemoveQuaternionFlipsEv
// Demangled: CAnimBlendHierarchy::RemoveQuaternionFlips(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::RemoveQuaternionFlips(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy21RemoveQuaternionFlipsEv(this);
}


// ============================================================

// Address: 0x19480c
// Original: j__ZN19CAnimBlendHierarchy7SetNameEPKc
// Demangled: CAnimBlendHierarchy::SetName(char const*)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::SetName(CAnimBlendHierarchy *this, CKeyGen *a2)
{
  return _ZN19CAnimBlendHierarchy7SetNameEPKc(this, a2);
}


// ============================================================

// Address: 0x1980a0
// Original: j__ZN19CAnimBlendHierarchy22RemoveUncompressedDataEv
// Demangled: CAnimBlendHierarchy::RemoveUncompressedData(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::RemoveUncompressedData(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy22RemoveUncompressedDataEv(this);
}


// ============================================================

// Address: 0x198ce0
// Original: j__ZN19CAnimBlendHierarchyD2Ev
// Demangled: CAnimBlendHierarchy::~CAnimBlendHierarchy()
// attributes: thunk
void __fastcall CAnimBlendHierarchy::~CAnimBlendHierarchy(CAnimBlendHierarchy *this)
{
  _ZN19CAnimBlendHierarchyD2Ev(this);
}


// ============================================================

// Address: 0x199434
// Original: j__ZN19CAnimBlendHierarchy23CalcTotalTimeCompressedEv
// Demangled: CAnimBlendHierarchy::CalcTotalTimeCompressed(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::CalcTotalTimeCompressed(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy23CalcTotalTimeCompressedEv(this);
}


// ============================================================

// Address: 0x199d10
// Original: j__ZN19CAnimBlendHierarchy13CalcTotalTimeEv
// Demangled: CAnimBlendHierarchy::CalcTotalTime(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::CalcTotalTime(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy13CalcTotalTimeEv(this);
}


// ============================================================

// Address: 0x19a35c
// Original: j__ZN19CAnimBlendHierarchyC2Ev
// Demangled: CAnimBlendHierarchy::CAnimBlendHierarchy(void)
// attributes: thunk
void __fastcall CAnimBlendHierarchy::CAnimBlendHierarchy(CAnimBlendHierarchy *this)
{
  _ZN19CAnimBlendHierarchyC2Ev(this);
}


// ============================================================

// Address: 0x19b1c8
// Original: j__ZN19CAnimBlendHierarchy8ShutdownEv
// Demangled: CAnimBlendHierarchy::Shutdown(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::Shutdown(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy8ShutdownEv(this);
}


// ============================================================

// Address: 0x19b5a0
// Original: j__ZN19CAnimBlendHierarchy10UncompressEv
// Demangled: CAnimBlendHierarchy::Uncompress(void)
// attributes: thunk
int __fastcall CAnimBlendHierarchy::Uncompress(CAnimBlendHierarchy *this)
{
  return _ZN19CAnimBlendHierarchy10UncompressEv(this);
}


// ============================================================

// Address: 0x38a100
// Original: _ZN19CAnimBlendHierarchyC2Ev
// Demangled: CAnimBlendHierarchy::CAnimBlendHierarchy(void)
void __fastcall CAnimBlendHierarchy::CAnimBlendHierarchy(CAnimBlendHierarchy *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = -1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
}


// ============================================================

// Address: 0x38a112
// Original: _ZN19CAnimBlendHierarchyD2Ev
// Demangled: CAnimBlendHierarchy::~CAnimBlendHierarchy()
void __fastcall CAnimBlendHierarchy::~CAnimBlendHierarchy(CAnimBlendHierarchy *this, CAnimBlendHierarchy *a2)
{
  int v3; // r0
  void *v4; // r9
  void *v5; // r1
  int v6; // r0
  int v7; // r1
  void *v8; // r8
  int v9; // r6
  int v10; // r5

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    a2 = (CAnimBlendHierarchy *)(*(unsigned __int8 *)(v3 + 4) << 28);
    if ( (*(_BYTE *)(v3 + 4) & 8) != 0 )
      v4 = *(void **)(v3 + 8);
    else
      v4 = 0;
  }
  else
  {
    v4 = 0;
  }
  CAnimManager::RemoveFromUncompressedCache(this, a2);
  v6 = *((_DWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (void *)(v6 - 8);
    if ( v7 )
    {
      v9 = v6 - 12;
      v10 = 12 * v7;
      do
      {
        CAnimBlendSequence::~CAnimBlendSequence((CAnimBlendSequence *)(v9 + v10));
        v10 -= 12;
      }
      while ( v10 );
    }
    operator delete[](v8);
  }
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
    CMemoryMgr::Free(v4, v5);
}


// ============================================================

// Address: 0x38a17e
// Original: _ZN19CAnimBlendHierarchy19RemoveAnimSequencesEv
// Demangled: CAnimBlendHierarchy::RemoveAnimSequences(void)
int __fastcall CAnimBlendHierarchy::RemoveAnimSequences(CAnimBlendHierarchy *this, CAnimBlendHierarchy *a2)
{
  int v3; // r0
  CMemoryMgr *v4; // r9
  void *v5; // r1
  int v6; // r0
  int v7; // r1
  void *v8; // r8
  int v9; // r6
  int v10; // r5
  int result; // r0

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    a2 = (CAnimBlendHierarchy *)(*(unsigned __int8 *)(v3 + 4) << 28);
    if ( (*(_BYTE *)(v3 + 4) & 8) != 0 )
      v4 = *(CMemoryMgr **)(v3 + 8);
    else
      v4 = 0;
  }
  else
  {
    v4 = 0;
  }
  CAnimManager::RemoveFromUncompressedCache(this, a2);
  v6 = *((_DWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (void *)(v6 - 8);
    if ( v7 )
    {
      v9 = v6 - 12;
      v10 = 12 * v7;
      do
      {
        CAnimBlendSequence::~CAnimBlendSequence((CAnimBlendSequence *)(v9 + v10));
        v10 -= 12;
      }
      while ( v10 );
    }
    operator delete[](v8);
  }
  result = 0;
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
    return j_CMemoryMgr::Free(v4, v5);
  return result;
}


// ============================================================

// Address: 0x38a1f0
// Original: _ZN19CAnimBlendHierarchy8ShutdownEv
// Demangled: CAnimBlendHierarchy::Shutdown(void)
void __fastcall CAnimBlendHierarchy::Shutdown(CAnimBlendHierarchy *this, CAnimBlendHierarchy *a2)
{
  int v3; // r0
  void *v4; // r9
  void *v5; // r1
  int v6; // r0
  int v7; // r1
  void *v8; // r8
  int v9; // r6
  int v10; // r5

  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    a2 = (CAnimBlendHierarchy *)(*(unsigned __int8 *)(v3 + 4) << 28);
    if ( (*(_BYTE *)(v3 + 4) & 8) != 0 )
      v4 = *(void **)(v3 + 8);
    else
      v4 = 0;
  }
  else
  {
    v4 = 0;
  }
  CAnimManager::RemoveFromUncompressedCache(this, a2);
  v6 = *((_DWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 - 4);
    v8 = (void *)(v6 - 8);
    if ( v7 )
    {
      v9 = v6 - 12;
      v10 = 12 * v7;
      do
      {
        CAnimBlendSequence::~CAnimBlendSequence((CAnimBlendSequence *)(v9 + v10));
        v10 -= 12;
      }
      while ( v10 );
    }
    operator delete[](v8);
  }
  *((_WORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( v4 )
    CMemoryMgr::Free(v4, v5);
  *((_BYTE *)this + 10) = 0;
}


// ============================================================

// Address: 0x38a25c
// Original: _ZN19CAnimBlendHierarchy12FindSequenceEPc
// Demangled: CAnimBlendHierarchy::FindSequence(char *)
_DWORD *__fastcall CAnimBlendHierarchy::FindSequence(CAnimBlendHierarchy *this, CKeyGen *a2)
{
  int UppercaseKey; // r0
  int v4; // r2
  int v5; // r1
  _DWORD *result; // r0
  int v7; // r3

  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v4 = *((__int16 *)this + 4);
  v5 = UppercaseKey;
  if ( v4 < 1 )
    return 0;
  result = (_DWORD *)*((_DWORD *)this + 1);
  v7 = 0;
  while ( *result != v5 )
  {
    ++v7;
    result += 3;
    if ( v7 >= v4 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x38a28e
// Original: _ZN19CAnimBlendHierarchy7SetNameEPKc
// Demangled: CAnimBlendHierarchy::SetName(char const*)
int __fastcall CAnimBlendHierarchy::SetName(CAnimBlendHierarchy *this, CKeyGen *a2)
{
  int result; // r0

  result = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  *(_DWORD *)this = result;
  return result;
}


// ============================================================

// Address: 0x38a2a0
// Original: _ZN19CAnimBlendHierarchy13CalcTotalTimeEv
// Demangled: CAnimBlendHierarchy::CalcTotalTime(void)
int __fastcall CAnimBlendHierarchy::CalcTotalTime(int this)
{
  int v1; // r8
  float v2; // s0
  int v3; // r10
  int v4; // r5
  int v5; // r5
  __int16 v6; // r9
  int v7; // t1
  int v8; // r6
  _WORD *v9; // r12
  int *v10; // lr
  int v11; // r1
  float v12; // s2
  __int16 v13; // r5
  int v14; // r2
  int v15; // r1
  int v16; // r5
  int v17; // r6
  int v18; // r4
  int v19; // r3
  int v20; // r1
  float v21; // s0

  v1 = *(__int16 *)(this + 8);
  *(_DWORD *)(this + 16) = 0;
  if ( v1 >= 1 )
  {
    v2 = 0.0;
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(this + 4) + 12 * v3;
      v7 = *(__int16 *)(v4 + 6);
      v5 = v4 + 6;
      v6 = v7;
      v8 = v7 - 1;
      v9 = (_WORD *)(v5 - 2);
      v10 = (int *)(v5 + 2);
      v11 = 20 * (v7 - 1);
      if ( (*(_BYTE *)(v5 - 2) & 2) != 0 )
        v11 = 32 * v8;
      v12 = *(float *)(v11 + *(_DWORD *)(v5 + 2) + 16);
      if ( v12 <= v2 )
      {
        v13 = v6;
      }
      else
      {
        *(float *)(this + 16) = v12;
        v13 = *(_WORD *)v5;
      }
      if ( v13 >= 2 )
      {
        v14 = 32 * v13 - 64;
        v15 = 5 * v13;
        v16 = v13 + 1;
        v17 = 4 * v15 - 40;
        do
        {
          v18 = v17 + 20;
          v19 = *v10;
          --v16;
          if ( (*v9 & 2) != 0 )
            v18 = v14 + 32;
          v20 = v17 - 20;
          if ( (*v9 & 2) != 0 )
            v17 = v14;
          v14 -= 32;
          v21 = *(float *)(v17 + v19 + 16);
          v17 = v20;
          *(float *)(v19 + v18 + 16) = *(float *)(v19 + v18 + 16) - v21;
        }
        while ( v16 > 2 );
        LOWORD(v1) = *(_WORD *)(this + 8);
      }
      if ( ++v3 >= (__int16)v1 )
        break;
      v2 = *(float *)(this + 16);
    }
  }
  return this;
}


// ============================================================

// Address: 0x38a380
// Original: _ZN19CAnimBlendHierarchy23CalcTotalTimeCompressedEv
// Demangled: CAnimBlendHierarchy::CalcTotalTimeCompressed(void)
int __fastcall CAnimBlendHierarchy::CalcTotalTimeCompressed(int this)
{
  int v1; // r8
  float v2; // s2
  int v3; // r10
  int v4; // r5
  int v5; // r5
  __int16 v6; // r9
  int v7; // t1
  int v8; // r6
  _WORD *v9; // r12
  int *v10; // lr
  int v11; // r1
  float v12; // s4
  __int16 v13; // r5
  int v14; // r2
  int v15; // r1
  int v16; // r5
  int v17; // r6
  int v18; // r4
  int v19; // r3
  int v20; // r1
  int v21; // r6
  int v22; // r3
  __int16 v23; // r4

  v1 = *(__int16 *)(this + 8);
  *(_DWORD *)(this + 16) = 0;
  if ( v1 >= 1 )
  {
    v2 = 0.0;
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_DWORD *)(this + 4) + 12 * v3;
      v7 = *(__int16 *)(v4 + 6);
      v5 = v4 + 6;
      v6 = v7;
      v8 = v7 - 1;
      v9 = (_WORD *)(v5 - 2);
      v10 = (int *)(v5 + 2);
      v11 = 10 * (v7 - 1);
      if ( (*(_BYTE *)(v5 - 2) & 2) != 0 )
        v11 = 16 * v8;
      v12 = (float)*(__int16 *)(v11 + *(_DWORD *)(v5 + 2) + 8) * 0.016667;
      if ( v12 <= v2 )
      {
        v13 = v6;
      }
      else
      {
        *(float *)(this + 16) = v12;
        v13 = *(_WORD *)v5;
      }
      if ( v13 >= 2 )
      {
        v14 = 16 * v13 - 32;
        v15 = 5 * v13;
        v16 = v13 + 1;
        v17 = 2 * v15 - 20;
        do
        {
          v18 = v17 + 10;
          v19 = *v10;
          --v16;
          if ( (*v9 & 2) != 0 )
            v18 = v14 + 16;
          v20 = v17 - 10;
          if ( (*v9 & 2) != 0 )
            v17 = v14;
          v14 -= 16;
          v21 = v17 + v19;
          v22 = v19 + v18;
          v23 = *(_WORD *)(v22 + 8) - *(_WORD *)(v21 + 8);
          v17 = v20;
          *(_WORD *)(v22 + 8) = v23;
        }
        while ( v16 > 2 );
        LOWORD(v1) = *(_WORD *)(this + 8);
      }
      if ( ++v3 >= (__int16)v1 )
        break;
      v2 = *(float *)(this + 16);
    }
  }
  return this;
}


// ============================================================

// Address: 0x38a46c
// Original: _ZN19CAnimBlendHierarchy21RemoveQuaternionFlipsEv
// Demangled: CAnimBlendHierarchy::RemoveQuaternionFlips(void)
int __fastcall CAnimBlendHierarchy::RemoveQuaternionFlips(CAnimBlendHierarchy *this)
{
  int result; // r0
  int v3; // r5
  int i; // r6

  result = *((__int16 *)this + 4);
  if ( result >= 1 )
  {
    v3 = 0;
    for ( i = 0; i < result; ++i )
    {
      CAnimBlendSequence::RemoveQuaternionFlips((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v3));
      result = *((__int16 *)this + 4);
      v3 += 12;
    }
  }
  return result;
}


// ============================================================

// Address: 0x38a49c
// Original: _ZN19CAnimBlendHierarchy18AllocSequenceBlockEb
// Demangled: CAnimBlendHierarchy::AllocSequenceBlock(bool)
void *__fastcall CAnimBlendHierarchy::AllocSequenceBlock(CAnimBlendHierarchy *this, bool a2)
{
  int v4; // r4
  size_t v5; // r6
  int v6; // r5

  if ( *((__int16 *)this + 4) < 1 )
  {
    v5 = 0;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      v5 += CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v4), a2);
      ++v6;
      v4 += 12;
    }
    while ( v6 < *((__int16 *)this + 4) );
  }
  return sub_19CF58(v5, a2);
}


// ============================================================

// Address: 0x38a4e2
// Original: _ZN19CAnimBlendHierarchy16GetSequenceBlockEv
// Demangled: CAnimBlendHierarchy::GetSequenceBlock(void)
int __fastcall CAnimBlendHierarchy::GetSequenceBlock(CAnimBlendHierarchy *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 1);
  if ( (*(_BYTE *)(v1 + 4) & 8) != 0 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}


// ============================================================

// Address: 0x38a4f0
// Original: _ZN19CAnimBlendHierarchy10UncompressEv
// Demangled: CAnimBlendHierarchy::Uncompress(void)
int __fastcall CAnimBlendHierarchy::Uncompress(CAnimBlendHierarchy *this, unsigned int a2)
{
  int v3; // r4
  size_t v4; // r5
  int v5; // r6
  unsigned __int8 *v6; // r5
  int v7; // r0
  void *v8; // r8
  int v9; // r1
  int DataSize; // r0
  int v11; // r6
  int v12; // r4
  float v13; // s0
  int result; // r0
  int v15; // r4
  int v16; // r5
  int v17; // r3
  float v18; // s0
  int v19; // r10
  int v20; // r1
  int v21; // r1
  __int16 v22; // r8
  int v23; // t1
  int v24; // r4
  _WORD *v25; // r12
  int v26; // r0
  _DWORD *v27; // r5
  float v28; // s2
  __int16 v29; // r1
  int v30; // r3
  int v31; // r4
  int v32; // r1
  int v33; // r6
  int v34; // r0

  if ( *((__int16 *)this + 4) < 1 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v4 += CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v3), 0);
      ++v5;
      v3 += 12;
    }
    while ( v5 < *((__int16 *)this + 4) );
  }
  v6 = (unsigned __int8 *)CMemoryMgr::Malloc(v4, a2);
  v7 = *((_DWORD *)this + 1);
  if ( (*(_BYTE *)(v7 + 4) & 8) != 0 )
    v8 = *(void **)(v7 + 8);
  else
    v8 = 0;
  v9 = *((__int16 *)this + 4);
  if ( v9 >= 1 )
  {
    CAnimBlendSequence::Uncompress((CAnimBlendSequence *)v7, v6);
    DataSize = CAnimBlendSequence::GetDataSize(*((CAnimBlendSequence **)this + 1), 0);
    v9 = *((__int16 *)this + 4);
    if ( v9 >= 2 )
    {
      v11 = 1;
      v12 = 12;
      do
      {
        v6 += DataSize;
        CAnimBlendSequence::Uncompress((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v12), v6);
        DataSize = CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v12), 0);
        v9 = *((__int16 *)this + 4);
        ++v11;
        v12 += 12;
      }
      while ( v11 < v9 );
    }
  }
  if ( v8 )
    CMemoryMgr::Free(v8, (void *)v9);
  v13 = *((float *)this + 4);
  result = 0;
  *((_BYTE *)this + 10) = 0;
  if ( v13 == 0.0 )
  {
    if ( *((__int16 *)this + 4) < 1 )
    {
      result = 0;
      *((_DWORD *)this + 4) = 0;
    }
    else
    {
      v15 = 0;
      v16 = 0;
      do
      {
        CAnimBlendSequence::RemoveQuaternionFlips((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v15));
        v17 = *((__int16 *)this + 4);
        ++v16;
        v15 += 12;
      }
      while ( v16 < v17 );
      result = 0;
      *((_DWORD *)this + 4) = 0;
      if ( v17 >= 1 )
      {
        v18 = 0.0;
        v19 = 0;
        while ( 1 )
        {
          v20 = *((_DWORD *)this + 1) + 12 * v19;
          v23 = *(__int16 *)(v20 + 6);
          v21 = v20 + 6;
          v22 = v23;
          v24 = v23 - 1;
          v25 = (_WORD *)(v21 - 2);
          v26 = 20 * (v23 - 1);
          v27 = (_DWORD *)(v21 + 2);
          if ( (*(_BYTE *)(v21 - 2) & 2) != 0 )
            v26 = 32 * v24;
          v28 = *(float *)(v26 + *(_DWORD *)(v21 + 2) + 16);
          if ( v28 <= v18 )
          {
            v29 = v22;
          }
          else
          {
            *((float *)this + 4) = v28;
            v29 = *(_WORD *)v21;
          }
          if ( v29 >= 2 )
          {
            v30 = 32 * v29 - 64;
            v31 = v29 + 1;
            v32 = 20 * v29 - 40;
            do
            {
              v33 = v32 + 20;
              --v31;
              if ( (*v25 & 2) != 0 )
                v33 = v30 + 32;
              v34 = v32 - 20;
              if ( (*v25 & 2) != 0 )
                v32 = v30;
              v30 -= 32;
              *(float *)(*v27 + v33 + 16) = *(float *)(*v27 + v33 + 16) - *(float *)(v32 + *v27 + 16);
              v32 = v34;
            }
            while ( v31 > 2 );
            LOWORD(v17) = *((_WORD *)this + 4);
          }
          ++v19;
          result = (__int16)v17;
          if ( v19 >= (__int16)v17 )
            break;
          v18 = *((float *)this + 4);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x38a6ac
// Original: _ZN19CAnimBlendHierarchy17CompressKeyframesEv
// Demangled: CAnimBlendHierarchy::CompressKeyframes(void)
int __fastcall CAnimBlendHierarchy::CompressKeyframes(CAnimBlendHierarchy *this, unsigned int a2)
{
  int v3; // r4
  size_t v4; // r5
  int v5; // r6
  unsigned __int8 *v6; // r5
  int result; // r0
  CMemoryMgr *v8; // r8
  int v9; // r1
  int v10; // r6
  int v11; // r4

  if ( *((__int16 *)this + 4) < 1 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v4 += CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v3), 1);
      ++v5;
      v3 += 12;
    }
    while ( v5 < *((__int16 *)this + 4) );
  }
  v6 = (unsigned __int8 *)CMemoryMgr::Malloc(v4, a2);
  result = *((_DWORD *)this + 1);
  if ( (*(_BYTE *)(result + 4) & 8) != 0 )
    v8 = *(CMemoryMgr **)(result + 8);
  else
    v8 = 0;
  v9 = *((__int16 *)this + 4);
  if ( v9 >= 1 )
  {
    CAnimBlendSequence::CompressKeyframes((CAnimBlendSequence *)result, v6);
    result = CAnimBlendSequence::GetDataSize(*((CAnimBlendSequence **)this + 1), 1);
    v9 = *((__int16 *)this + 4);
    if ( v9 >= 2 )
    {
      v10 = 1;
      v11 = 12;
      do
      {
        v6 += result;
        CAnimBlendSequence::CompressKeyframes((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v11), v6);
        result = CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v11), 1);
        v9 = *((__int16 *)this + 4);
        ++v10;
        v11 += 12;
      }
      while ( v10 < v9 );
    }
  }
  if ( v8 )
    return j_CMemoryMgr::Free(v8, (void *)v9);
  return result;
}


// ============================================================

// Address: 0x38a760
// Original: _ZN19CAnimBlendHierarchy22RemoveUncompressedDataEv
// Demangled: CAnimBlendHierarchy::RemoveUncompressedData(void)
int __fastcall CAnimBlendHierarchy::RemoveUncompressedData(CAnimBlendHierarchy *this, unsigned int a2)
{
  int v3; // r4
  size_t v4; // r5
  int v5; // r6
  unsigned __int8 *v6; // r5
  int v7; // r0
  void *v8; // r8
  int v9; // r1
  int DataSize; // r0
  int v11; // r6
  int v12; // r4
  int result; // r0

  if ( *((__int16 *)this + 4) < 1 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do
    {
      v4 += CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v3), 1);
      ++v5;
      v3 += 12;
    }
    while ( v5 < *((__int16 *)this + 4) );
  }
  v6 = (unsigned __int8 *)CMemoryMgr::Malloc(v4, a2);
  v7 = *((_DWORD *)this + 1);
  if ( (*(_BYTE *)(v7 + 4) & 8) != 0 )
    v8 = *(void **)(v7 + 8);
  else
    v8 = 0;
  v9 = *((__int16 *)this + 4);
  if ( v9 >= 1 )
  {
    CAnimBlendSequence::RemoveUncompressedData((CAnimBlendSequence *)v7, v6);
    DataSize = CAnimBlendSequence::GetDataSize(*((CAnimBlendSequence **)this + 1), 1);
    v9 = *((__int16 *)this + 4);
    if ( v9 >= 2 )
    {
      v11 = 1;
      v12 = 12;
      do
      {
        v6 += DataSize;
        CAnimBlendSequence::RemoveUncompressedData((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v12), v6);
        DataSize = CAnimBlendSequence::GetDataSize((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v12), 1);
        v9 = *((__int16 *)this + 4);
        ++v11;
        v12 += 12;
      }
      while ( v11 < v9 );
    }
  }
  if ( v8 )
    CMemoryMgr::Free(v8, (void *)v9);
  result = 1;
  *((_BYTE *)this + 10) = 1;
  return result;
}


// ============================================================

// Address: 0x38a812
// Original: _ZN19CAnimBlendHierarchy10MoveMemoryEv
// Demangled: CAnimBlendHierarchy::MoveMemory(void)
int __fastcall CAnimBlendHierarchy::MoveMemory(CAnimBlendHierarchy *this)
{
  int v2; // r0
  char v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2

  v2 = *((_DWORD *)this + 1);
  if ( !v2 )
    goto LABEL_14;
  if ( (*(_BYTE *)(v2 + 4) & 8) == 0 )
  {
    if ( *((__int16 *)this + 4) >= 1 )
    {
      v3 = CAnimBlendSequence::MoveMemory((CAnimBlendSequence *)v2);
      if ( *((__int16 *)this + 4) >= 2 )
      {
        v4 = 1;
        v5 = 12;
        do
        {
          v3 |= CAnimBlendSequence::MoveMemory((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v5));
          ++v4;
          v5 += 12;
        }
        while ( v4 < *((__int16 *)this + 4) );
      }
      return v3 & 1;
    }
LABEL_14:
    v3 = 0;
    return v3 & 1;
  }
  v6 = *(_DWORD *)(v2 + 8);
  if ( !v6 )
    goto LABEL_14;
  v7 = CMemoryMgr::MoveMemory(*(CMemoryMgr **)(v2 + 8), (void *)(*(unsigned __int8 *)(v2 + 4) << 28));
  if ( v6 == v7 )
    goto LABEL_14;
  if ( *((__int16 *)this + 4) >= 1 )
  {
    v8 = v7 - v6;
    v9 = 0;
    v10 = 8;
    do
    {
      ++v9;
      *(_DWORD *)(*((_DWORD *)this + 1) + v10) += v8;
      v10 += 12;
    }
    while ( v9 < *((__int16 *)this + 4) );
  }
  v3 = 1;
  return v3 & 1;
}


// ============================================================

// Address: 0x38a89e
// Original: _ZN19CAnimBlendHierarchy5PrintEv
// Demangled: CAnimBlendHierarchy::Print(void)
int __fastcall CAnimBlendHierarchy::Print(CAnimBlendHierarchy *this, CAnimBlendHierarchy *a2)
{
  int result; // r0
  int v4; // r5
  int i; // r6

  CAnimManager::UncompressAnimation(this, a2);
  result = *((__int16 *)this + 4);
  if ( result >= 1 )
  {
    v4 = 0;
    for ( i = 0; i < result; ++i )
    {
      CAnimBlendSequence::Print((CAnimBlendSequence *)(*((_DWORD *)this + 1) + v4));
      result = *((__int16 *)this + 4);
      v4 += 12;
    }
  }
  return result;
}


// ============================================================
