// ADDR: 0x214f4c
// SYMBOL: sub_214F4C
int __fastcall sub_214F4C(int a1)
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
// ADDR: 0x214f60
// SYMBOL: sub_214F60
int __fastcall sub_214F60(int a1)
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
