// ADDR: 0x1531a8
// SYMBOL: sub_1531A8
int __fastcall sub_1531A8(int a1, int *a2)
{
  int v2; // r4
  char *v3; // r5
  void *v5; // [sp+4h] [bp-14h] BYREF
  char v6; // [sp+Ch] [bp-Ch]

  v2 = *a2;
  sub_1531DE(&v5, a1);
  v3 = (char *)v5;
  v5 = 0;
  if ( v3 )
  {
    if ( v6 )
      sub_153336(v3 + 12, 0);
    operator delete(v3);
  }
  return v2;
}


// ======================================================================
