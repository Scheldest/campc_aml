
// Address: 0x189ee4
// Original: j__ZN10CMemoryMgr14LockScratchPadEv
// Demangled: CMemoryMgr::LockScratchPad(void)
// attributes: thunk
int __fastcall CMemoryMgr::LockScratchPad(CMemoryMgr *this)
{
  return _ZN10CMemoryMgr14LockScratchPadEv(this);
}


// ============================================================

// Address: 0x18f03c
// Original: j__ZN10CMemoryMgr17ReleaseScratchPadEv
// Demangled: CMemoryMgr::ReleaseScratchPad(void)
// attributes: thunk
int __fastcall CMemoryMgr::ReleaseScratchPad(CMemoryMgr *this)
{
  return _ZN10CMemoryMgr17ReleaseScratchPadEv(this);
}


// ============================================================

// Address: 0x190f00
// Original: j__ZN10CMemoryMgr4InitEv
// Demangled: CMemoryMgr::Init(void)
// attributes: thunk
int __fastcall CMemoryMgr::Init(CMemoryMgr *this)
{
  return _ZN10CMemoryMgr4InitEv(this);
}


// ============================================================

// Address: 0x1923c4
// Original: j__ZN10CMemoryMgr10MoveMemoryEPv
// Demangled: CMemoryMgr::MoveMemory(void *)
// attributes: thunk
int __fastcall CMemoryMgr::MoveMemory(CMemoryMgr *this, void *a2)
{
  return _ZN10CMemoryMgr10MoveMemoryEPv(this, a2);
}


// ============================================================

// Address: 0x1930d8
// Original: j__ZN10CMemoryMgr6CallocEjj
// Demangled: CMemoryMgr::Calloc(uint,uint)
// attributes: thunk
void *__fastcall CMemoryMgr::Calloc(size_t item_count, size_t item_size, unsigned int a3)
{
  return _ZN10CMemoryMgr6CallocEjj(item_count, item_size);
}


// ============================================================

// Address: 0x193d34
// Original: j__ZN10CMemoryMgr4FreeEPv
// Demangled: CMemoryMgr::Free(void *)
// attributes: thunk
void __fastcall CMemoryMgr::Free(void *this, void *a2)
{
  _ZN10CMemoryMgr4FreeEPv(this);
}


// ============================================================

// Address: 0x199850
// Original: j__ZN10CMemoryMgr14InitScratchPadEv
// Demangled: CMemoryMgr::InitScratchPad(void)
// attributes: thunk
int __fastcall CMemoryMgr::InitScratchPad(CMemoryMgr *this)
{
  return _ZN10CMemoryMgr14InitScratchPadEv(this);
}


// ============================================================

// Address: 0x19c2d0
// Original: j__ZN10CMemoryMgr9FreeAlignEPv
// Demangled: CMemoryMgr::FreeAlign(void *)
// attributes: thunk
int __fastcall CMemoryMgr::FreeAlign(CMemoryMgr *this, void *a2)
{
  return _ZN10CMemoryMgr9FreeAlignEPv(this, a2);
}


// ============================================================

// Address: 0x19cf5c
// Original: j__ZN10CMemoryMgr6MallocEj
// Demangled: CMemoryMgr::Malloc(uint)
// attributes: thunk
void *__fastcall CMemoryMgr::Malloc(size_t byte_count, unsigned int a2)
{
  return _ZN10CMemoryMgr6MallocEj(byte_count);
}


// ============================================================

// Address: 0x1a0008
// Original: j__ZN10CMemoryMgr8ShutdownEv
// Demangled: CMemoryMgr::Shutdown(void)
// attributes: thunk
int __fastcall CMemoryMgr::Shutdown(CMemoryMgr *this)
{
  return _ZN10CMemoryMgr8ShutdownEv(this);
}


// ============================================================

// Address: 0x1a0a18
// Original: j__ZN10CMemoryMgr11MallocAlignEjj
// Demangled: CMemoryMgr::MallocAlign(uint,uint)
// attributes: thunk
int __fastcall CMemoryMgr::MallocAlign(CMemoryMgr *this, unsigned int a2, unsigned int a3)
{
  return _ZN10CMemoryMgr11MallocAlignEjj(this, a2, a3);
}


// ============================================================

// Address: 0x5d2d14
// Original: _ZN10CMemoryMgr4InitEv
// Demangled: CMemoryMgr::Init(void)
void __fastcall CMemoryMgr::Init(CMemoryMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5d2d16
// Original: _ZN10CMemoryMgr8ShutdownEv
// Demangled: CMemoryMgr::Shutdown(void)
void __fastcall CMemoryMgr::Shutdown(CMemoryMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5d2d18
// Original: _ZN10CMemoryMgr14InternalMallocEj
// Demangled: CMemoryMgr::InternalMalloc(uint)
int __fastcall CMemoryMgr::InternalMalloc(CMemoryMgr *this, unsigned int a2)
{
  int result; // r0

  if ( (unsigned int)this > 0x800 )
    return sub_18DC4C((CMemoryHeap *)&unk_A83D74, (unsigned int)this);
  result = CMemoryHeap::Malloc((CMemoryHeap *)&dword_A83DBC, (unsigned int)this);
  if ( !result )
    return sub_18DC4C((CMemoryHeap *)&unk_A83D74, (unsigned int)this);
  return result;
}


// ============================================================

// Address: 0x5d2d4c
// Original: _ZN10CMemoryMgr15InternalReallocEPvj
// Demangled: CMemoryMgr::InternalRealloc(void *,uint)
int __fastcall CMemoryMgr::InternalRealloc(CMemoryMgr *this, unsigned int a2, unsigned int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  unsigned int v6; // r5
  int *v7; // r0
  void *v9; // r6

  v6 = a2;
  if ( dword_A83E04 <= (unsigned int)this && dword_A83E08 > (unsigned int)this )
  {
    v7 = &dword_A83E04;
    return sub_19DBF8((CMemoryHeap *)v7, this, a2);
  }
  if ( dword_A83DBC > (unsigned int)this || dword_A83DC0 <= (unsigned int)this )
  {
    if ( a2 > 0x800 )
    {
      v7 = (int *)&unk_A83D74;
      return sub_19DBF8((CMemoryHeap *)v7, this, a2);
    }
    v9 = (void *)CMemoryHeap::Malloc((CMemoryHeap *)&dword_A83DBC, a2);
    if ( v9 )
      goto LABEL_15;
    a2 = v6;
  }
  else if ( a2 <= 0x800 )
  {
    v7 = &dword_A83DBC;
    return sub_19DBF8((CMemoryHeap *)v7, this, a2);
  }
  v9 = (void *)CMemoryHeap::Malloc((CMemoryHeap *)&unk_A83D74, a2);
  if ( !v9 )
    return 0;
LABEL_15:
  v3.n64_f32[0] = (float)v6;
  v4.n64_f32[0] = (float)*((int *)this - 4);
  memcpy_1(v9, this, (unsigned int)vmin_f32(v3, v4).n64_f32[0]);
  free(this);
  return (int)v9;
}


// ============================================================

// Address: 0x5d2e24
// Original: _ZN10CMemoryMgr4FreeEPv
// Demangled: CMemoryMgr::Free(void *)
// attributes: thunk
void CMemoryMgr::Free(void *p)
{
  j_free(p);
}


// ============================================================

// Address: 0x5d2e28
// Original: _ZN10CMemoryMgr6MallocEj
// Demangled: CMemoryMgr::Malloc(uint)
// attributes: thunk
void *CMemoryMgr::Malloc(size_t byte_count)
{
  return j_malloc(byte_count);
}


// ============================================================

// Address: 0x5d2e2c
// Original: _ZN10CMemoryMgr7ReallocEPvj
// Demangled: CMemoryMgr::Realloc(void *,uint)
// attributes: thunk
void *CMemoryMgr::Realloc(void *ptr, size_t size)
{
  return j_realloc(ptr, size);
}


// ============================================================

// Address: 0x5d2e30
// Original: _ZN10CMemoryMgr6CallocEjj
// Demangled: CMemoryMgr::Calloc(uint,uint)
// attributes: thunk
void *CMemoryMgr::Calloc(size_t item_count, size_t item_size)
{
  return j_calloc(item_count, item_size);
}


// ============================================================

// Address: 0x5d2e34
// Original: _ZN10CMemoryMgr14InitScratchPadEv
// Demangled: CMemoryMgr::InitScratchPad(void)
int __fastcall CMemoryMgr::InitScratchPad(CMemoryMgr *this)
{
  return sub_196904((CMemoryHeap *)&dword_A83E04, PC_Scratch, 0x4000u, 0);
}


// ============================================================

// Address: 0x5d2e50
// Original: _ZN10CMemoryMgr20MallocFromScratchPadEj
// Demangled: CMemoryMgr::MallocFromScratchPad(uint)
int __fastcall CMemoryMgr::MallocFromScratchPad(CMemoryMgr *this, unsigned int a2)
{
  int result; // r0
  int v3; // r12
  int v4; // r1

  result = CMemoryHeap::Malloc((CMemoryHeap *)&dword_A83E04, (unsigned int)this);
  v3 = *(_DWORD *)(result - 16) + 16;
  v4 = *(__int16 *)(result - 10);
  CMemoryMgr::m_memUsed += v3;
  ++CMemoryMgr::m_blocksUsed;
  if ( v4 != -1 )
  {
    *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * v4) += v3;
    ++*(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * v4);
  }
  return result;
}


// ============================================================

// Address: 0x5d2ec8
// Original: _ZN10CMemoryMgr14RegisterMallocEPv
// Demangled: CMemoryMgr::RegisterMalloc(void *)
int __fastcall CMemoryMgr::RegisterMalloc(CMemoryMgr *this, void *a2)
{
  int v2; // lr
  int result; // r0

  v2 = *((_DWORD *)this - 4) + 16;
  result = *((__int16 *)this - 5);
  CMemoryMgr::m_memUsed += v2;
  ++CMemoryMgr::m_blocksUsed;
  if ( result != -1 )
  {
    *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * result) += v2;
    ++*(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * result);
  }
  return result;
}


// ============================================================

// Address: 0x5d2f30
// Original: _ZN10CMemoryMgr25MallocAlignFromScratchPadEjj
// Demangled: CMemoryMgr::MallocAlignFromScratchPad(uint,uint)
unsigned int __fastcall CMemoryMgr::MallocAlignFromScratchPad(CMemoryMgr *this, unsigned int a2, unsigned int a3)
{
  int v4; // r0
  int v5; // r2
  int v6; // r1

  v4 = CMemoryHeap::Malloc((CMemoryHeap *)&dword_A83E04, (unsigned int)this + a2);
  v5 = *(_DWORD *)(v4 - 16) + 16;
  v6 = *(__int16 *)(v4 - 10);
  CMemoryMgr::m_memUsed += v5;
  ++CMemoryMgr::m_blocksUsed;
  if ( v6 != -1 )
  {
    *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * v6) += v5;
    ++*(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * v6);
  }
  *(_DWORD *)(((v4 + a2) & -a2) - 4) = v4;
  return (v4 + a2) & -a2;
}


// ============================================================

// Address: 0x5d2fbc
// Original: _ZN10CMemoryMgr14LockScratchPadEv
// Demangled: CMemoryMgr::LockScratchPad(void)
void __fastcall CMemoryMgr::LockScratchPad(CMemoryMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5d2fbe
// Original: _ZN10CMemoryMgr17ReleaseScratchPadEv
// Demangled: CMemoryMgr::ReleaseScratchPad(void)
void __fastcall CMemoryMgr::ReleaseScratchPad(CMemoryMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5d2fc0
// Original: _ZN10CMemoryMgr11MallocAlignEjj
// Demangled: CMemoryMgr::MallocAlign(uint,uint)
unsigned int __fastcall CMemoryMgr::MallocAlign(CMemoryMgr *this, unsigned int a2, unsigned int a3)
{
  void *v4; // r0

  v4 = malloc((size_t)this + a2);
  *(_DWORD *)((((unsigned int)v4 + a2) & -a2) - 4) = v4;
  return ((unsigned int)v4 + a2) & -a2;
}


// ============================================================

// Address: 0x5d2fda
// Original: _ZN10CMemoryMgr9FreeAlignEPv
// Demangled: CMemoryMgr::FreeAlign(void *)
void __fastcall CMemoryMgr::FreeAlign(void **this, void *a2)
{
  j_free(*(this - 1));
}


// ============================================================

// Address: 0x5d2fe2
// Original: _ZN10CMemoryMgr10MoveMemoryEPv
// Demangled: CMemoryMgr::MoveMemory(void *)
void __fastcall CMemoryMgr::MoveMemory(CMemoryMgr *this, void *a2)
{
  ;
}


// ============================================================

// Address: 0x5d2fe4
// Original: _ZN10CMemoryMgr10MoveMemoryEPvPS0_i
// Demangled: CMemoryMgr::MoveMemory(void *,void **,int)
void __fastcall CMemoryMgr::MoveMemory(CMemoryMgr *this, void *a2, void **a3, int a4)
{
  ;
}


// ============================================================

// Address: 0x5d2fe8
// Original: _ZN10CMemoryMgr21SetRestrictMemoryMoveEb
// Demangled: CMemoryMgr::SetRestrictMemoryMove(bool)
char __fastcall CMemoryMgr::SetRestrictMemoryMove(char this, bool a2)
{
  byte_A83DF8 = this;
  byte_A83DB0 = this;
  return this;
}


// ============================================================

// Address: 0x5d3004
// Original: _ZN10CMemoryMgr19GetLargestFreeBlockEv
// Demangled: CMemoryMgr::GetLargestFreeBlock(void)
int __fastcall CMemoryMgr::GetLargestFreeBlock(CMemoryMgr *this)
{
  return *(_DWORD *)dword_A83DA8;
}


// ============================================================

// Address: 0x5d3014
// Original: _ZN10CMemoryMgr14GetSizeOfHolesEv
// Demangled: CMemoryMgr::GetSizeOfHoles(void)
int __fastcall CMemoryMgr::GetSizeOfHoles(CMemoryMgr *this)
{
  int SizeOfHoles; // r4

  SizeOfHoles = CMemoryHeap::GetSizeOfHoles((CMemoryHeap *)&unk_A83D74);
  return CMemoryHeap::GetSizeOfHoles((CMemoryHeap *)&dword_A83DBC) + SizeOfHoles;
}


// ============================================================

// Address: 0x5d3038
// Original: _ZN10CMemoryMgr16PrintFrequenciesEv
// Demangled: CMemoryMgr::PrintFrequencies(void)
void __fastcall CMemoryMgr::PrintFrequencies(CMemoryMgr *this)
{
  ;
}


// ============================================================

// Address: 0x5d303c
// Original: _ZN10CMemoryMgr18InitMemoryTrackingEi
// Demangled: CMemoryMgr::InitMemoryTracking(int)
int __fastcall CMemoryMgr::InitMemoryTracking(CMemoryMgr *this, int a2)
{
  size_t v3; // r6
  int v4; // r11
  _DWORD *v5; // r10
  void *v6; // r0
  int result; // r0

  v3 = 4 * (_DWORD)this;
  CMemoryMgr::m_memUsed = 0;
  CMemoryMgr::m_idStack[dword_A83E9C++] = CMemoryMgr::m_id;
  CMemoryMgr::m_idStack[dword_A83E9C] = 1;
  v4 = dword_A83E9C;
  v5 = malloc(4 * (_DWORD)this);
  CMemoryMgr::m_pMemUsedArray = (int)v5;
  v6 = malloc(v3);
  dword_A83E9C = v4;
  CMemoryMgr::m_pBlockArray = (int)v6;
  result = CMemoryMgr::m_idStack[v4];
  dword_A83DB8 = result;
  CMemoryMgr::m_id = result;
  dword_A83E00 = result;
  if ( (int)this >= 1 )
  {
    *v5 = 0;
    result = CMemoryMgr::m_pBlockArray;
    *(_DWORD *)CMemoryMgr::m_pBlockArray = 0;
    if ( this != (CMemoryMgr *)((char *)&stderr + 1) )
    {
      result = 1;
      do
      {
        *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * result) = 0;
        *(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * result++) = 0;
      }
      while ( this != (CMemoryMgr *)result );
    }
  }
  return result;
}


// ============================================================

// Address: 0x5d3124
// Original: _ZN10CMemoryMgr9PushMemIdEi
// Demangled: CMemoryMgr::PushMemId(int)
int __fastcall CMemoryMgr::PushMemId(CMemoryMgr *this, int a2)
{
  int v2; // r3

  dword_A83DB8 = (int)this;
  v2 = CMemoryMgr::m_id;
  CMemoryMgr::m_id = (int)this;
  CMemoryMgr::m_idStack[dword_A83E9C] = v2;
  dword_A83E00 = (int)this;
  return ++dword_A83E9C;
}


// ============================================================

// Address: 0x5d3168
// Original: _ZN10CMemoryMgr8PopMemIdEv
// Demangled: CMemoryMgr::PopMemId(void)
int __fastcall CMemoryMgr::PopMemId(CMemoryMgr *this)
{
  int result; // r0

  result = CMemoryMgr::m_idStack[--dword_A83E9C];
  dword_A83DB8 = result;
  CMemoryMgr::m_id = result;
  dword_A83E00 = result;
  return result;
}


// ============================================================

// Address: 0x5d31a4
// Original: _ZN10CMemoryMgr12RegisterFreeEPv
// Demangled: CMemoryMgr::RegisterFree(void *)
int __fastcall CMemoryMgr::RegisterFree(int this, void *a2)
{
  int v2; // lr

  if ( this )
  {
    v2 = *(_DWORD *)(this - 16) + 16;
    this = *(__int16 *)(this - 10);
    CMemoryMgr::m_memUsed -= v2;
    --CMemoryMgr::m_blocksUsed;
    if ( this != -1 )
    {
      *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * this) -= v2;
      --*(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * this);
    }
  }
  return this;
}


// ============================================================

// Address: 0x5d3210
// Original: _ZN10CMemoryMgr13GetMemoryUsedEi
// Demangled: CMemoryMgr::GetMemoryUsed(int)
int __fastcall CMemoryMgr::GetMemoryUsed(CMemoryMgr *this, int a2)
{
  return *(_DWORD *)(CMemoryMgr::m_pMemUsedArray + 4 * (_DWORD)this);
}


// ============================================================

// Address: 0x5d3224
// Original: _ZN10CMemoryMgr13GetBlocksUsedEi
// Demangled: CMemoryMgr::GetBlocksUsed(int)
int __fastcall CMemoryMgr::GetBlocksUsed(CMemoryMgr *this, int a2)
{
  return *(_DWORD *)(CMemoryMgr::m_pBlockArray + 4 * (_DWORD)this);
}


// ============================================================
