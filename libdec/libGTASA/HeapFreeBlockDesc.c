
// Address: 0x5d2310
// Original: _ZN17HeapFreeBlockDesc19RemoveHeapFreeBlockEv
// Demangled: HeapFreeBlockDesc::RemoveHeapFreeBlock(void)
__int64 __fastcall HeapFreeBlockDesc::RemoveHeapFreeBlock(HeapFreeBlockDesc *this)
{
  __int64 result; // r0
  __int64 v2; // kr00_8

  *(_DWORD *)(*((_DWORD *)this + 4) + 20) = *((_DWORD *)this + 5);
  v2 = *((_QWORD *)this + 2);
  LODWORD(result) = *((_DWORD *)this + 5);
  HIDWORD(result) = v2;
  *(_DWORD *)(result + 16) = v2;
  return result;
}


// ============================================================

// Address: 0x5d2332
// Original: _ZN17HeapFreeBlockDesc19InsertHeapFreeBlockEPS_
// Demangled: HeapFreeBlockDesc::InsertHeapFreeBlock(HeapFreeBlockDesc*)
int __fastcall HeapFreeBlockDesc::InsertHeapFreeBlock(int this, HeapFreeBlockDesc *a2)
{
  *((_DWORD *)a2 + 4) = *(_DWORD *)(this + 16);
  *(_DWORD *)(*(_DWORD *)(this + 16) + 20) = a2;
  *((_DWORD *)a2 + 5) = this;
  *(_DWORD *)(this + 16) = a2;
  return this;
}


// ============================================================

// Address: 0x5d2342
// Original: _ZN17HeapFreeBlockDesc21FindSmallestFreeBlockEi
// Demangled: HeapFreeBlockDesc::FindSmallestFreeBlock(int)
unsigned int *__fastcall HeapFreeBlockDesc::FindSmallestFreeBlock(unsigned int *this, unsigned int a2)
{
  do
    this = (unsigned int *)this[4];
  while ( *this < a2 );
  return this;
}


// ============================================================

// Address: 0x5d234c
// Original: _ZN17HeapFreeBlockDesc26InsertOrderedHeapFreeBlockEPS_
// Demangled: HeapFreeBlockDesc::InsertOrderedHeapFreeBlock(HeapFreeBlockDesc*)
int __fastcall HeapFreeBlockDesc::InsertOrderedHeapFreeBlock(HeapFreeBlockDesc *this, HeapFreeBlockDesc *a2)
{
  int result; // r0

  do
    this = (HeapFreeBlockDesc *)*((_DWORD *)this + 4);
  while ( *(_DWORD *)this < *(_DWORD *)a2 );
  result = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(result + 16);
  *(_DWORD *)(*(_DWORD *)(result + 16) + 20) = a2;
  *((_DWORD *)a2 + 5) = result;
  *(_DWORD *)(result + 16) = a2;
  return result;
}


// ============================================================

// Address: 0x5d2366
// Original: _ZN17HeapFreeBlockDesc20ReplaceHeapFreeBlockEPS_
// Demangled: HeapFreeBlockDesc::ReplaceHeapFreeBlock(HeapFreeBlockDesc*)
int __fastcall HeapFreeBlockDesc::ReplaceHeapFreeBlock(HeapFreeBlockDesc *this, HeapFreeBlockDesc *a2)
{
  int result; // r0

  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 4);
  *(_DWORD *)(*((_DWORD *)this + 4) + 20) = a2;
  *((_DWORD *)a2 + 5) = *((_DWORD *)this + 5);
  result = *((_DWORD *)this + 5);
  *(_DWORD *)(result + 16) = a2;
  return result;
}


// ============================================================
