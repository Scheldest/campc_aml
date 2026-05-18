// ADDR: 0xf32c8
// SYMBOL: sub_F32C8
int __fastcall sub_F32C8(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_F3810();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
