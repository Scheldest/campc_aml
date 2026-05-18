// ADDR: 0x161010
// SYMBOL: sub_161010
int __fastcall sub_161010(int a1)
{
  void *v2; // r0

  if ( *(_DWORD *)(a1 + 4) )
  {
    v2 = (void *)sub_16131C();
    operator delete(v2);
  }
  return a1;
}


// ======================================================================
