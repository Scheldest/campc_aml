// ADDR: 0xfd280
// SYMBOL: sub_FD280
int __fastcall sub_FD280(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xfd294
// SYMBOL: sub_FD294
int __fastcall sub_FD294(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = v2;
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
