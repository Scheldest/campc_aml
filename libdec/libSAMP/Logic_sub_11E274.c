// ADDR: 0x11e028
// SYMBOL: sub_11E028
int __fastcall sub_11E028(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_11E1B0();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
