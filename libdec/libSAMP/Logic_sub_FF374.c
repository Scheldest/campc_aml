// ADDR: 0x109420
// SYMBOL: sub_109420
bool __fastcall sub_109420(int a1)
{
  size_t v2; // r5
  int v3; // r1

  if ( !a1 )
    return 0;
  v2 = sysconf(39);
  sub_221798(a1, v2);
  return msync((void *)(a1 - v3), v2, 1) == 0;
}


// ======================================================================
// ADDR: 0x163884
// SYMBOL: sub_163884
int __fastcall sub_163884(int a1)
{
  return *(_DWORD *)(a1 + 116);
}


// ======================================================================
