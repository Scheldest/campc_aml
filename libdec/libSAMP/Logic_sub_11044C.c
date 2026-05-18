// ADDR: 0x1101ac
// SYMBOL: sub_1101AC
int __fastcall sub_1101AC(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_110388();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
