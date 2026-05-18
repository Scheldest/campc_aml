// ADDR: 0x14fe70
// SYMBOL: sub_14FE70
int __fastcall sub_14FE70(int a1)
{
  void **v2; // r5
  int i; // r6
  void *v4; // r0

  v2 = (void **)(a1 + 60000);
  for ( i = 0; i != 2000; ++i )
    sub_14FEB6(a1, (unsigned __int16)i);
  v4 = *v2;
  if ( *v2 )
  {
    *(_DWORD *)(a1 + 60004) = v4;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
