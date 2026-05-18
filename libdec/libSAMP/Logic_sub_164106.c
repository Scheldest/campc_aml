// ADDR: 0x1640da
// SYMBOL: sub_1640DA
int __fastcall sub_1640DA(const char *a1, int a2)
{
  int *v3; // r0
  int v4; // r1
  _DWORD *v5; // r0

  v3 = (int *)sub_1640AC(a1, 2);
  if ( !v3 )
    return 0;
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v5 = v3 + 1;
  while ( v4 != a2 )
  {
    v4 = v5[1];
    v5 += 2;
    if ( !v4 )
      return 0;
  }
  return *v5;
}


// ======================================================================
