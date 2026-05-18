// ADDR: 0x2178f6
// SYMBOL: sub_2178F6
int __fastcall sub_2178F6(unsigned __int8 **a1, int *a2)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v3; // r3
  unsigned int v4; // r4
  int v6; // r4
  int v7; // r4

  *a2 = 0;
  v2 = a1[1];
  v3 = *a1;
  if ( v2 == *a1 )
    return 1;
  v4 = *v3;
  if ( v4 < 0x30 || v4 > 0x39 )
    return 1;
  v6 = 0;
  while ( v3 != v2 && (unsigned int)*v3 - 48 <= 9 )
  {
    v7 = 5 * v6;
    *a1 = v3 + 1;
    *a2 = 2 * v7;
    v6 = *v3 + 2 * v7 - 48;
    *a2 = v6;
    ++v3;
  }
  return 0;
}


// ======================================================================
