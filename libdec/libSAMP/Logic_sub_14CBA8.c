// ADDR: 0x14f250
// SYMBOL: sub_14F250
int __fastcall sub_14F250(int a1, int a2, int a3)
{
  int v5; // r0
  void *v6; // r0
  int result; // r0

  if ( a3 )
    sub_14F404(a1, a2);
  v5 = *(_DWORD *)(a1 + 4 * a2);
  if ( v5 )
  {
    v6 = (void *)sub_107E64(v5, a2);
    operator delete(v6);
  }
  result = 0;
  *(_DWORD *)(a1 + 4 * a2) = 0;
  return result;
}


// ======================================================================
