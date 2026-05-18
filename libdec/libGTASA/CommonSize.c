
// Address: 0x5d22d4
// Original: _ZN10CommonSize4InitEi
// Demangled: CommonSize::Init(int)
_DWORD *__fastcall CommonSize::Init(_DWORD *this, int a2)
{
  this[4] = this + 6;
  this[11] = this;
  this[12] = a2;
  this[13] = 0;
  this[14] = 0;
  return this;
}


// ============================================================

// Address: 0x5d22e6
// Original: _ZN10CommonSize6MallocEv
// Demangled: CommonSize::Malloc(void)
int __fastcall CommonSize::Malloc(CommonSize *this)
{
  char *v2; // r2
  int result; // r0

  v2 = (char *)this + 24;
  result = *((_DWORD *)this + 4);
  if ( (char *)result == v2 )
  {
    ++*((_DWORD *)this + 13);
    return 0;
  }
  else
  {
    --*((_DWORD *)this + 14);
    *(_DWORD *)(*(_DWORD *)(result + 16) + 20) = *(_DWORD *)(result + 20);
    *(_DWORD *)(*(_DWORD *)(result + 20) + 16) = *(_DWORD *)(result + 16);
  }
  return result;
}


// ============================================================

// Address: 0x5d231e
// Original: _ZN10CommonSize4FreeEP17HeapFreeBlockDesc
// Demangled: CommonSize::Free(HeapFreeBlockDesc *)
int __fastcall CommonSize::Free(int this, HeapFreeBlockDesc *a2)
{
  int v2; // r2

  *((_DWORD *)a2 + 4) = *(_DWORD *)(this + 16);
  *(_DWORD *)(*(_DWORD *)(this + 16) + 20) = a2;
  *((_DWORD *)a2 + 5) = this;
  v2 = *(_DWORD *)(this + 56);
  *(_DWORD *)(this + 16) = a2;
  *(_DWORD *)(this + 56) = v2 + 1;
  return this;
}


// ============================================================
