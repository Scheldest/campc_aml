// ADDR: 0x10c6f4
// SYMBOL: sub_10C6F4
int __fastcall sub_10C6F4(int a1, int *a2)
{
  int v2; // r4
  void *v3; // r0
  void *v5; // [sp+4h] [bp-14h] BYREF

  v2 = *a2;
  sub_10C718(&v5, a1);
  v3 = v5;
  v5 = 0;
  if ( v3 )
    operator delete(v3);
  return v2;
}


// ======================================================================
