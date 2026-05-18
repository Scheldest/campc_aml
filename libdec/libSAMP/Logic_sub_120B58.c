// ADDR: 0x120848
// SYMBOL: sub_120848
int __fastcall sub_120848(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_120A40();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
