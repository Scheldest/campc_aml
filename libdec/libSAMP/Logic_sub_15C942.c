// ADDR: 0x15ca02
// SYMBOL: sub_15CA02
int __fastcall sub_15CA02(int a1, int *a2)
{
  int v2; // r4
  void *v3; // r0
  void *v5; // [sp+4h] [bp-14h] BYREF

  v2 = *a2;
  sub_15CA26(&v5, a1);
  v3 = v5;
  v5 = 0;
  if ( v3 )
    operator delete(v3);
  return v2;
}


// ======================================================================
