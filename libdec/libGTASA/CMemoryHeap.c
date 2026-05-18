
// Address: 0x18dc50
// Original: j__ZN11CMemoryHeap6MallocEj
// Demangled: CMemoryHeap::Malloc(uint)
// attributes: thunk
int __fastcall CMemoryHeap::Malloc(CMemoryHeap *this, unsigned int a2)
{
  return _ZN11CMemoryHeap6MallocEj(this, a2);
}


// ============================================================

// Address: 0x191d8c
// Original: j__ZN11CMemoryHeapC2Ev
// Demangled: CMemoryHeap::CMemoryHeap(void)
// attributes: thunk
void __fastcall CMemoryHeap::CMemoryHeap(CMemoryHeap *this)
{
  _ZN11CMemoryHeapC2Ev(this);
}


// ============================================================

// Address: 0x1958cc
// Original: j__ZNK11CMemoryHeap14GetSizeOfHolesEv
// Demangled: CMemoryHeap::GetSizeOfHoles(void)
// attributes: thunk
int __fastcall CMemoryHeap::GetSizeOfHoles(CMemoryHeap *this)
{
  return _ZNK11CMemoryHeap14GetSizeOfHolesEv(this);
}


// ============================================================

// Address: 0x196908
// Original: j__ZN11CMemoryHeap4InitEPvjb
// Demangled: CMemoryHeap::Init(void *,uint,bool)
// attributes: thunk
int __fastcall CMemoryHeap::Init(CMemoryHeap *this, void *a2, unsigned int a3, bool a4)
{
  return _ZN11CMemoryHeap4InitEPvjb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19b8ac
// Original: j__ZN11CMemoryHeap15FillInBlockDataEP13HeapBlockDescS1_j
// Demangled: CMemoryHeap::FillInBlockData(HeapBlockDesc *,HeapBlockDesc *,uint)
// attributes: thunk
int CMemoryHeap::FillInBlockData()
{
  return _ZN11CMemoryHeap15FillInBlockDataEP13HeapBlockDescS1_j();
}


// ============================================================

// Address: 0x19d4f4
// Original: j__ZN11CMemoryHeap4FreeEPv
// Demangled: CMemoryHeap::Free(void *)
// attributes: thunk
int __fastcall CMemoryHeap::Free(CMemoryHeap *this, void *a2)
{
  return _ZN11CMemoryHeap4FreeEPv(this, a2);
}


// ============================================================

// Address: 0x19dbfc
// Original: j__ZN11CMemoryHeap7ReallocEPvj
// Demangled: CMemoryHeap::Realloc(void *,uint)
// attributes: thunk
int __fastcall CMemoryHeap::Realloc(CMemoryHeap *this, void *a2, unsigned int a3)
{
  return _ZN11CMemoryHeap7ReallocEPvj(this, a2, a3);
}


// ============================================================

// Address: 0x5d2378
// Original: _ZN11CMemoryHeapC2Ev
// Demangled: CMemoryHeap::CMemoryHeap(void)
void __fastcall CMemoryHeap::CMemoryHeap(CMemoryHeap *this)
{
  *(_DWORD *)this = 0;
}


// ============================================================

// Address: 0x5d237e
// Original: _ZN11CMemoryHeap4InitEPvjb
// Demangled: CMemoryHeap::Init(void *,uint,bool)
char *__fastcall CMemoryHeap::Init(CMemoryHeap *this, char *a2, unsigned int a3, int a4)
{
  char *result; // r0
  int v6; // r1
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r2
  char *v10; // r2

  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = -1;
  *((_BYTE *)this + 60) = 1;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = &a2[a3 - 16];
  a2[a3 - 12] = 1;
  *(_WORD *)(*((_DWORD *)this + 1) + 6) = -1;
  **((_DWORD **)this + 1) = 0;
  *(_DWORD *)(*((_DWORD *)this + 1) + 12) = *(_DWORD *)this;
  **(_DWORD **)this = a3 - 32;
  *(_BYTE *)(*(_DWORD *)this + 4) = 0;
  *(_DWORD *)(*(_DWORD *)this + 12) = 0;
  result = (char *)this + 8;
  *((_DWORD *)this + 13) = (char *)this + 8;
  v6 = *(_DWORD *)this;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 6) = (char *)this + 32;
  *(_DWORD *)(v6 + 16) = (char *)this + 32;
  *(_DWORD *)(*((_DWORD *)this + 6) + 20) = v6;
  *(_DWORD *)(v6 + 20) = (char *)this + 8;
  *((_DWORD *)this + 6) = v6;
  if ( a4 == 1 )
  {
    *((_DWORD *)this + 14) = 0;
    v7 = (_DWORD *)CMemoryHeap::Malloc(this, 0xF00u);
    *((_DWORD *)this + 14) = v7;
    v7[4] = v7 + 6;
    v7[11] = v7;
    v7[12] = 16;
    v7[13] = 0;
    v8 = 32;
    v7[14] = 0;
    result = (char *)&dword_74;
    do
    {
      v9 = *((_DWORD *)this + 14);
      *(_DWORD *)&result[v9] = 0;
      v10 = &result[v9];
      *((_DWORD *)v10 - 10) = v10 - 32;
      *((_DWORD *)v10 - 3) = v10 - 56;
      *((_DWORD *)v10 - 2) = v8;
      v8 += 16;
      result += 60;
      *((_DWORD *)v10 - 1) = 0;
    }
    while ( v8 != 1040 );
  }
  return result;
}


// ============================================================

// Address: 0x5d2438
// Original: _ZN11CMemoryHeap6MallocEj
// Demangled: CMemoryHeap::Malloc(uint)
int *__fastcall CMemoryHeap::Malloc(CMemoryHeap *this, unsigned int a2)
{
  unsigned int v2; // r12
  int v3; // r1
  int v4; // r4
  int v5; // lr
  int i; // r2
  int *v7; // r3
  unsigned int *v8; // r1
  _DWORD *v9; // r4
  int v11; // r2

  v2 = a2;
  v3 = a2 + 16;
  if ( (v2 & 0xF) != 0 )
    v2 = v3 & 0xFFFFFFF0;
  if ( v2 <= 0x400 )
  {
    v4 = *((_DWORD *)this + 14);
    if ( v4 )
    {
      v5 = (v2 >> 4) - 1;
      for ( i = 60 * (v2 >> 4) - 8; ; i += 60 )
      {
        v7 = *(int **)(v4 + i - 36);
        if ( (int *)(v4 + i - 28) == v7 )
        {
          ++*(_DWORD *)(v4 + i);
          if ( v5 > 62 )
            break;
        }
        else
        {
          --*(_DWORD *)(v4 + i + 4);
          *(_DWORD *)(v7[4] + 20) = v7[5];
          *(_DWORD *)(v7[5] + 16) = v7[4];
          if ( v7 )
          {
            *((_BYTE *)v7 + 4) = 1;
            v11 = *v7;
            *((_WORD *)v7 + 3) = *((_DWORD *)this + 17);
            *((_DWORD *)this + 16) += v11 + 16;
            return v7 + 4;
          }
          if ( v5 > 62 )
            break;
        }
        v4 = *((_DWORD *)this + 14);
        ++v5;
      }
    }
  }
  v8 = (unsigned int *)*((_DWORD *)this + 6);
  if ( v8 == (unsigned int *)((char *)this + 32) )
    return 0;
  while ( *v8 < v2 )
  {
    v8 = (unsigned int *)v8[4];
    if ( v8 == (unsigned int *)((char *)this + 32) )
      return 0;
  }
  v9 = v8 + 4;
  *(_DWORD *)(v8[4] + 20) = v8[5];
  *(_DWORD *)(v8[5] + 16) = v8[4];
  CMemoryHeap::FillInBlockData();
  return v9;
}


// ============================================================

// Address: 0x5d250c
// Original: _ZN11CMemoryHeap8ShutdownEv
// Demangled: CMemoryHeap::Shutdown(void)
int __fastcall CMemoryHeap::Shutdown(void **this)
{
  int result; // r0

  free(*this);
  result = 0;
  *this = 0;
  return result;
}


// ============================================================

// Address: 0x5d251e
// Original: _ZN11CMemoryHeap16PrintMemoryLeaksEv
// Demangled: CMemoryHeap::PrintMemoryLeaks(void)
void __fastcall CMemoryHeap::PrintMemoryLeaks(CMemoryHeap *this)
{
  ;
}


// ============================================================

// Address: 0x5d2520
// Original: _ZN11CMemoryHeap14RegisterMallocEP13HeapBlockDesc
// Demangled: CMemoryHeap::RegisterMalloc(HeapBlockDesc *)
int __fastcall CMemoryHeap::RegisterMalloc(int result, int *a2)
{
  int v2; // r3

  *((_BYTE *)a2 + 4) = 1;
  v2 = *a2;
  *((_WORD *)a2 + 3) = *(_DWORD *)(result + 68);
  *(_DWORD *)(result + 64) += v2 + 16;
  return result;
}


// ============================================================

// Address: 0x5d2534
// Original: _ZN11CMemoryHeap4FreeEPv
// Demangled: CMemoryHeap::Free(void *)
_DWORD *__fastcall CMemoryHeap::Free(_DWORD *this, _DWORD *a2)
{
  char *v2; // r1
  int v3; // t1
  char *v4; // r12
  char *v5; // r2
  int v6; // r3
  _DWORD *v7; // r2
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r2
  unsigned int *v11; // r0

  if ( !a2 )
    return this;
  v3 = *(a2 - 4);
  v2 = (char *)(a2 - 4);
  this[16] += -16 - v3;
  v4 = (char *)*((_DWORD *)v2 + 3);
  v5 = &v2[*(_DWORD *)v2];
  v2[4] = 0;
  v6 = (unsigned __int8)v5[20];
  v7 = v5 + 16;
  if ( v6 )
  {
    if ( !v4 )
      goto LABEL_8;
LABEL_6:
    if ( !v4[4] )
    {
      *(_DWORD *)(*((_DWORD *)v4 + 4) + 20) = *((_DWORD *)v4 + 5);
      *(_DWORD *)(*((_DWORD *)v4 + 5) + 16) = *((_DWORD *)v4 + 4);
      v2 = v4;
    }
    goto LABEL_8;
  }
  *(_DWORD *)(v7[4] + 20) = v7[5];
  *(_DWORD *)(v7[5] + 16) = v7[4];
  v7 = (_DWORD *)((char *)v7 + *v7 + 16);
  if ( v4 )
    goto LABEL_6;
LABEL_8:
  *(_DWORD *)v2 = (char *)(v7 - 4) - v2;
  v7[3] = v2;
  v8 = this[14];
  v9 = *(_DWORD *)v2;
  if ( v8 && v9 <= 0x400 )
  {
    this = (_DWORD *)(v8 + 60 * (v9 >> 4));
    *((_DWORD *)v2 + 4) = *(this - 11);
    *(_DWORD *)(*(this - 11) + 20) = v2;
    *((_DWORD *)v2 + 5) = this - 15;
    v10 = *(this - 1);
    *(this - 11) = v2;
    *(this - 1) = v10 + 1;
  }
  else
  {
    v11 = this + 2;
    do
      v11 = (unsigned int *)v11[4];
    while ( *v11 < v9 );
    this = (_DWORD *)v11[5];
    *((_DWORD *)v2 + 4) = this[4];
    *(_DWORD *)(this[4] + 20) = v2;
    *((_DWORD *)v2 + 5) = this;
    this[4] = v2;
  }
  return this;
}


// ============================================================

// Address: 0x5d25fc
// Original: _ZN11CMemoryHeap12RegisterFreeEP17HeapFreeBlockDesc
// Demangled: CMemoryHeap::RegisterFree(HeapFreeBlockDesc *)
int __fastcall CMemoryHeap::RegisterFree(int this, HeapFreeBlockDesc *a2)
{
  *(_DWORD *)(this + 64) += -16 - *(_DWORD *)a2;
  return this;
}


// ============================================================

// Address: 0x5d260c
// Original: _ZN11CMemoryHeap7ReallocEPvj
// Demangled: CMemoryHeap::Realloc(void *,uint)
int *__fastcall CMemoryHeap::Realloc(CMemoryHeap *this, char *a2, unsigned int a3)
{
  char *v3; // r4
  unsigned int v4; // r3
  unsigned int v6; // r0
  char *v7; // r1
  void *v8; // r0
  void *v9; // r6

  v3 = a2;
  v4 = a3;
  if ( !a2 )
    return CMemoryHeap::Malloc(this, a3);
  v7 = a2 - 16;
  v6 = *((_DWORD *)v3 - 4);
  if ( (a3 & 0xF) != 0 )
    v4 = (a3 + 16) & 0xFFFFFFF0;
  if ( v4 <= v6 )
  {
    *((_DWORD *)this + 16) += -16 - v6;
  }
  else
  {
    if ( v7[v6 + 20] || v6 + *(_DWORD *)&v7[v6 + 16] + 16 < v4 )
    {
      v8 = (void *)CMemoryHeap::Malloc(this, v4);
      v9 = v8;
      if ( !v8 )
        return 0;
      memcpy_1(v8, v3, *((_DWORD *)v3 - 4));
      CMemoryHeap::Free(this, v3);
      return (int *)v9;
    }
    *(_DWORD *)(*(_DWORD *)&v7[v6 + 32] + 20) = *(_DWORD *)&v7[v6 + 36];
    *(_DWORD *)(*(_DWORD *)&v7[v6 + 36] + 16) = *(_DWORD *)&v7[v6 + 32];
    *((_DWORD *)this + 16) += -16 - *(_DWORD *)v7;
  }
  CMemoryHeap::FillInBlockData();
  return (int *)v3;
}


// ============================================================

// Address: 0x5d26c6
// Original: _ZNK11CMemoryHeap14IntegrityCheckEv
// Demangled: CMemoryHeap::IntegrityCheck(void)
int **__fastcall CMemoryHeap::IntegrityCheck(int **this)
{
  int **i; // r1
  int *v2; // r12
  int j; // r2
  int *v4; // r1
  int *v5; // r3
  int *k; // r1
  int *v7; // r1
  int *v8; // lr
  int v9; // r3
  int v10; // r2
  _DWORD v11[22]; // [sp-58h] [bp-58h] BYREF

  for ( i = (int **)this[6]; i != this + 8; i = (int **)i[4] )
    ;
  v2 = this[14];
  if ( v2 )
  {
    for ( j = 0; j != 64; ++j )
    {
      v4 = &v2[15 * j];
      v5 = (int *)v4[4];
      for ( k = v4 + 6; v5 != k; v5 = (int *)v5[4] )
        ;
    }
  }
  memset(v11, 0, 80);
  v8 = this[1];
  v7 = *this;
  if ( *this != v8 )
  {
    do
    {
      v9 = *v7;
      if ( *((_BYTE *)v7 + 4) )
      {
        v10 = *((__int16 *)v7 + 3);
        if ( v10 != -1 )
        {
          v11[v10] += v9 + 16;
          v9 = *v7;
        }
      }
      this = (int **)((char *)v7 + v9);
      v7 = (int *)((char *)v7 + v9 + 16);
    }
    while ( v8 != v7 );
    v7 = v8;
  }
  while ( 1 )
  {
    v7 = (int *)v7[3];
    if ( !v7 )
      break;
    this = (int **)*((unsigned __int8 *)v7 + 4);
  }
  return this;
}


// ============================================================

// Address: 0x5d2774
// Original: _ZNK11CMemoryHeap14GetSizeOfHolesEv
// Demangled: CMemoryHeap::GetSizeOfHoles(void)
int __fastcall CMemoryHeap::GetSizeOfHoles(CMemoryHeap *this, int a2, char *a3)
{
  char *v4; // lr
  char *v5; // r3
  int result; // r0
  bool v7; // zf
  char *v8; // r1
  int v9; // r12
  int i; // lr
  int v11; // r1
  int *v12; // r3
  int *j; // r1
  int v14; // r2

  v4 = (char *)this + 32;
  v5 = (char *)*((_DWORD *)this + 6);
  result = 0;
  v7 = v5 == v4;
  if ( v5 != v4 )
  {
    a3 = (char *)*((_DWORD *)v5 + 4);
    v7 = a3 == v4;
  }
  if ( !v7 )
  {
    result = 0;
    do
    {
      v8 = a3;
      result += *(_DWORD *)v5;
      if ( a3 == v4 )
        break;
      a3 = (char *)*((_DWORD *)a3 + 4);
      v5 = v8;
    }
    while ( a3 != v4 );
  }
  v9 = *((_DWORD *)this + 14);
  if ( v9 )
  {
    for ( i = 0; i != 64; ++i )
    {
      v11 = v9 + 60 * i;
      v12 = *(int **)(v11 + 16);
      for ( j = (int *)(v11 + 24); v12 != j; result += v14 )
      {
        v14 = *v12;
        v12 = (int *)v12[4];
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5d27d8
// Original: _ZNK11CMemoryHeap9ParseHeapEv
// Demangled: CMemoryHeap::ParseHeap(void)
int __fastcall CMemoryHeap::ParseHeap(CMemoryHeap *this, const char *a2)
{
  CTimer *v3; // r5
  int v4; // r3
  char *v5; // r11
  CTimer *v6; // r0
  int v7; // r8
  __int16 v8; // r2
  int v9; // r9
  int v10; // r3
  int v11; // r10
  int v12; // r9
  int v13; // r3
  unsigned int v14; // r1
  int v16; // [sp+8h] [bp-38h]
  char v17; // [sp+Fh] [bp-31h] BYREF
  _BYTE v18[16]; // [sp+10h] [bp-30h] BYREF
  int v19; // [sp+20h] [bp-20h]

  v3 = (CTimer *)CFileMgr::OpenFileForWriting((CFileMgr *)"heap.txt", a2);
  CTimer::Stop(v3);
  v5 = *(char **)this;
  v6 = (CTimer *)*((_DWORD *)this + 1);
  if ( *(_DWORD *)this < (unsigned int)v6 )
  {
    v7 = 0;
    do
    {
      v8 = *((_WORD *)v5 + 3) + 64;
      if ( !(unsigned __int8)*((_WORD *)v5 + 3) )
        LOBYTE(v8) = 42;
      v9 = *(_DWORD *)v5 >> 4;
      v17 = v8;
      if ( !(v7 << 26) )
      {
        sub_5E6BC0(v18, "\n%5dK:", v7 / 64);
        CFileMgr::Write(v3, (unsigned int)v18, byte_8, v10);
      }
      CFileMgr::Write(v3, (unsigned int)"#", (char *)&stderr + 1, v4);
      ++v7;
      if ( v9 )
      {
        v11 = -v9;
        v16 = v9;
        v12 = v7;
        do
        {
          if ( !(v12 << 26) )
          {
            sub_5E6BC0(v18, "\n%5dK:", v12 / 64);
            CFileMgr::Write(v3, (unsigned int)v18, byte_8, v13);
          }
          CFileMgr::Write(v3, (unsigned int)&v17, (char *)&stderr + 1, v4);
          ++v11;
          ++v12;
        }
        while ( v11 );
        v7 += v16;
      }
      v6 = (CTimer *)&v5[*(_DWORD *)v5];
      v5 = (char *)v6 + 16;
    }
    while ( *((_DWORD *)this + 1) > (unsigned int)v6 + 16 );
  }
  CTimer::Update(v6);
  CFileMgr::CloseFile(v3, v14);
  return _stack_chk_guard - v19;
}


// ============================================================

// Address: 0x5d28fc
// Original: _ZN11CMemoryHeap12SetDebugInfoEPvj
// Demangled: CMemoryHeap::SetDebugInfo(void *,uint)
int __fastcall CMemoryHeap::SetDebugInfo(int this, void *a2, unsigned int a3)
{
  *(_DWORD *)(this - 8) = a2;
  return this;
}


// ============================================================

// Address: 0x5d2902
// Original: _ZN11CMemoryHeap12GetDebugInfoEPv
// Demangled: CMemoryHeap::GetDebugInfo(void *)
int __fastcall CMemoryHeap::GetDebugInfo(CMemoryHeap *this, void *a2)
{
  return *((_DWORD *)this - 2);
}


// ============================================================

// Address: 0x5d290c
// Original: _ZN11CMemoryHeap13MoveHeapBlockEP17HeapFreeBlockDescP13HeapBlockDesc
// Demangled: CMemoryHeap::MoveHeapBlock(HeapFreeBlockDesc *,HeapBlockDesc *)
void *__fastcall CMemoryHeap::MoveHeapBlock(CMemoryHeap *a1, int a2, int a3)
{
  int v5; // r8
  void *v6; // r5

  v5 = *((_DWORD *)a1 + 17);
  *((_DWORD *)a1 + 17) = *(__int16 *)(a3 + 6);
  v6 = (void *)(a2 + 16);
  *(_DWORD *)(*(_DWORD *)(a2 + 16) + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(*(_DWORD *)(a2 + 20) + 16) = *(_DWORD *)(a2 + 16);
  CMemoryHeap::FillInBlockData();
  *((_DWORD *)a1 + 17) = v5;
  memcpy_1(v6, (const void *)(a3 + 16), *(_DWORD *)a3);
  memMoved += *(_DWORD *)a3;
  CMemoryHeap::Free(a1, (void *)(a3 + 16));
  return v6;
}


// ============================================================

// Address: 0x5d2978
// Original: _ZN11CMemoryHeap21WhereShouldMemoryMoveEPv
// Demangled: CMemoryHeap::WhereShouldMemoryMove(void *)
unsigned int *__fastcall CMemoryHeap::WhereShouldMemoryMove(CMemoryHeap *this, _DWORD *a2)
{
  unsigned int v2; // r4
  int v3; // r12
  int v4; // r1
  unsigned int *v5; // r1
  unsigned int v6; // r3

  v2 = *(a2 - 4);
  v3 = v2;
  if ( !*((_BYTE *)a2 + v2 + 4) )
    v3 = *(_DWORD *)((char *)a2 + v2) + v2 + 16;
  v4 = *(a2 - 1);
  if ( !*(_BYTE *)(v4 + 4) )
    v3 += *(_DWORD *)v4 + 16;
  if ( v3 == v2 )
    return 0;
  v5 = (unsigned int *)((char *)this + 8);
  do
  {
    v5 = (unsigned int *)v5[4];
    v6 = *v5;
  }
  while ( *v5 < v2 );
  if ( v6 >= v3 - 16 )
    return 0;
  if ( *((_BYTE *)this + 60) )
  {
    if ( (float)((float)((float)v2 * 1.25) + 16.0) <= (float)v6 )
      return 0;
  }
  return v5;
}


// ============================================================

// Address: 0x5d2a00
// Original: _ZN11CMemoryHeap10MoveMemoryEPv
// Demangled: CMemoryHeap::MoveMemory(void *)
_DWORD *__fastcall CMemoryHeap::MoveMemory(CMemoryHeap *this, _DWORD *a2)
{
  unsigned int v4; // r0
  char *v5; // r1
  int v6; // r2
  int v7; // r1
  unsigned int *v8; // r1
  unsigned int v9; // r3
  int v10; // r8
  void *v11; // r6

  v4 = *(a2 - 4);
  v5 = (char *)a2 + v4 - 16;
  v6 = v4;
  if ( !v5[20] )
    v6 = *((_DWORD *)v5 + 4) + v4 + 16;
  v7 = *(a2 - 1);
  if ( !*(_BYTE *)(v7 + 4) )
    v6 += *(_DWORD *)v7 + 16;
  if ( v6 == v4 )
    return a2;
  v8 = (unsigned int *)((char *)this + 8);
  do
  {
    v8 = (unsigned int *)v8[4];
    v9 = *v8;
  }
  while ( *v8 < v4 );
  if ( v9 >= v6 - 16 )
    return a2;
  if ( *((_BYTE *)this + 60) )
  {
    if ( v8 && (float)((float)((float)v4 * 1.25) + 16.0) > (float)v9 )
      goto LABEL_12;
    return a2;
  }
  if ( !v8 )
    return a2;
LABEL_12:
  v10 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 17) = *((__int16 *)a2 - 5);
  v11 = v8 + 4;
  *(_DWORD *)(v8[4] + 20) = v8[5];
  *(_DWORD *)(v8[5] + 16) = v8[4];
  CMemoryHeap::FillInBlockData();
  *((_DWORD *)this + 17) = v10;
  memcpy_1(v11, a2, *(a2 - 4));
  memMoved += *(a2 - 4);
  CMemoryHeap::Free(this, a2);
  return v11;
}


// ============================================================

// Address: 0x5d2ae8
// Original: _ZN11CMemoryHeap10MoveMemoryEPvPS0_i
// Demangled: CMemoryHeap::MoveMemory(void *,void **,int)
_DWORD *__fastcall CMemoryHeap::MoveMemory(CMemoryHeap *this, _DWORD *a2, const void **a3, int a4)
{
  unsigned int v7; // r5
  _BYTE *v9; // r11
  char *v10; // r1
  int v11; // r0
  int v12; // r1
  unsigned int *v13; // r1
  unsigned int v14; // r2
  void *v15; // r6
  size_t v16; // r2
  void *v17; // r8
  int v19; // [sp+0h] [bp-20h]

  v7 = *(a2 - 4);
  v9 = *a3;
  v10 = (char *)a2 + v7 - 16;
  v11 = v7;
  if ( !v10[20] )
    v11 = *((_DWORD *)v10 + 4) + v7 + 16;
  v12 = *(a2 - 1);
  if ( !*(_BYTE *)(v12 + 4) )
    v11 += *(_DWORD *)v12 + 16;
  if ( v11 == v7 )
    return a2;
  v13 = (unsigned int *)((char *)this + 8);
  do
  {
    v13 = (unsigned int *)v13[4];
    v14 = *v13;
  }
  while ( *v13 < v7 );
  if ( v14 >= v11 - 16 )
    return a2;
  if ( *((_BYTE *)this + 60) )
  {
    if ( v13 && (float)((float)((float)v7 * 1.25) + 16.0) > (float)v14 )
      goto LABEL_12;
    return a2;
  }
  if ( !v13 )
    return a2;
LABEL_12:
  v19 = *((_DWORD *)this + 17);
  *((_DWORD *)this + 17) = *((__int16 *)a2 - 5);
  v15 = v13 + 4;
  *(_DWORD *)(v13[4] + 20) = v13[5];
  *(_DWORD *)(v13[5] + 16) = v13[4];
  CMemoryHeap::FillInBlockData();
  *((_DWORD *)this + 17) = v19;
  memcpy_1(v15, a2, v9 - (_BYTE *)a2);
  v16 = ((char *)a2 - v9 + v7) & -a4;
  v17 = (void *)(((unsigned int)v15 + *(a2 - 4) - v16) & -a4);
  memcpy_1(v17, *a3, v16);
  *a3 = v17;
  memMoved += *(a2 - 4);
  CMemoryHeap::Free(this, a2);
  return v15;
}


// ============================================================

// Address: 0x5d2c08
// Original: _ZN11CMemoryHeap15FillInBlockDataEP13HeapBlockDescS1_j
// Demangled: CMemoryHeap::FillInBlockData(HeapBlockDesc *,HeapBlockDesc *,uint)
_DWORD *__fastcall CMemoryHeap::FillInBlockData(_DWORD *result, int *a2, unsigned int a3, int a4)
{
  char *v4; // r12
  int v5; // r2
  char *v6; // r1
  int v7; // r3
  _DWORD *v8; // r1
  int v9; // r2
  unsigned int v10; // r1
  int v11; // r1
  int v12; // r3
  unsigned int *v13; // r0

  v4 = (char *)a2 + a4 + 16;
  *a2 = a4;
  if ( a3 - 16 <= (unsigned int)v4 )
  {
    if ( (unsigned int)v4 < a3 )
      *a2 = -16 - (_DWORD)a2 + a3;
    *(_DWORD *)(a3 + 12) = a2;
    *((_BYTE *)a2 + 4) = 1;
    v12 = *a2;
    *((_WORD *)a2 + 3) = result[17];
    result[16] += v12 + 16;
  }
  else
  {
    *((_BYTE *)a2 + 4) = 1;
    *((_WORD *)a2 + 3) = result[17];
    result[16] += a4 + 16;
    *((_BYTE *)a2 + a4 + 20) = 0;
    *(_DWORD *)v4 = a3 - 16 - (_DWORD)v4;
    *(int *)((char *)a2 + a4 + 28) = (int)a2;
    *(_DWORD *)(a3 + 12) = v4;
    v5 = *(int *)((char *)a2 + a4 + 28);
    v6 = &v4[*(_DWORD *)v4];
    v7 = (unsigned __int8)v6[20];
    v8 = v6 + 16;
    if ( !v7 )
    {
      *(_DWORD *)(v8[4] + 20) = v8[5];
      *(_DWORD *)(v8[5] + 16) = v8[4];
      v8 = (_DWORD *)((char *)v8 + *v8 + 16);
    }
    if ( v5 && !*(_BYTE *)(v5 + 4) )
    {
      v4 = (char *)v5;
      *(_DWORD *)(*(_DWORD *)(v5 + 16) + 20) = *(_DWORD *)(v5 + 20);
      *(_DWORD *)(*(_DWORD *)(v5 + 20) + 16) = *(_DWORD *)(v5 + 16);
    }
    *(_DWORD *)v4 = (char *)(v8 - 4) - v4;
    v8[3] = v4;
    v9 = result[14];
    v10 = *(_DWORD *)v4;
    if ( v9 && v10 <= 0x400 )
    {
      result = (_DWORD *)(v9 + 60 * (v10 >> 4));
      *((_DWORD *)v4 + 4) = *(result - 11);
      *(_DWORD *)(*(result - 11) + 20) = v4;
      *((_DWORD *)v4 + 5) = result - 15;
      v11 = *(result - 1);
      *(result - 11) = v4;
      *(result - 1) = v11 + 1;
    }
    else
    {
      v13 = result + 2;
      do
        v13 = (unsigned int *)v13[4];
      while ( *v13 < v10 );
      result = (_DWORD *)v13[5];
      *((_DWORD *)v4 + 4) = result[4];
      *(_DWORD *)(result[4] + 20) = v4;
      *((_DWORD *)v4 + 5) = result;
      result[4] = v4;
    }
  }
  return result;
}


// ============================================================
