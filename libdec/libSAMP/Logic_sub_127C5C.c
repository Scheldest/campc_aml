// ADDR: 0x12756c
// SYMBOL: sub_12756C
int __fastcall sub_12756C(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_127AF4();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
