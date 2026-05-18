// ADDR: 0x15fbd2
// SYMBOL: sub_15FBD2
int __fastcall sub_15FBD2(int a1, int *a2)
{
  int v2; // r4
  int *v3; // r5
  void *v5; // [sp+4h] [bp-14h] BYREF
  char v6; // [sp+Ch] [bp-Ch]

  v2 = *a2;
  sub_15FC08(&v5, a1);
  v3 = (int *)v5;
  v5 = 0;
  if ( v3 )
  {
    if ( v6 )
      sub_F629E(v3 + 3, 0);
    operator delete(v3);
  }
  return v2;
}


// ======================================================================
