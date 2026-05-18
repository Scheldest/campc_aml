// ADDR: 0x152a9a
// SYMBOL: sub_152A9A
int __fastcall sub_152A9A(int a1, int a2)
{
  int v2; // r0
  __int16 v4; // [sp+6h] [bp-Ah] BYREF

  v4 = a2;
  if ( a2 && (v2 = sub_15426C(a1 + 12, &v4)) != 0 )
    return *(_DWORD *)(v2 + 12);
  else
    return 0;
}


// ======================================================================
