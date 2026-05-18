// ADDR: 0x152694
// SYMBOL: sub_152694
int __fastcall sub_152694(int a1, __int16 a2)
{
  int v2; // r0
  __int16 v4; // [sp+6h] [bp-Ah] BYREF

  v4 = a2;
  v2 = sub_153102(a1 + 32, &v4);
  if ( v2 )
    return *(_DWORD *)(v2 + 12);
  else
    return 0;
}


// ======================================================================
