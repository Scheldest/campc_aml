
// Address: 0x45ce1c
// Original: _ZN5CPoolI8COctTreeS0_ED2Ev
// Demangled: CPool<COctTree,COctTree>::~CPool()
int __fastcall CPool<COctTree,COctTree>::~CPool(int a1)
{
  void *v2; // r0
  _DWORD *v3; // r5

  if ( *(int *)(a1 + 8) >= 1 )
  {
    if ( *(_BYTE *)(a1 + 16) )
    {
      if ( *(_DWORD *)a1 )
        operator delete[](*(void **)a1);
      v3 = (_DWORD *)(a1 + 4);
      v2 = *(void **)(a1 + 4);
      if ( v2 )
        operator delete[](v2);
    }
    else
    {
      v3 = (_DWORD *)(a1 + 4);
    }
    *(_DWORD *)a1 = 0;
    *v3 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
  }
  return a1;
}


// ============================================================
