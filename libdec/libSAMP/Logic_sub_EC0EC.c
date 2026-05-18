// ADDR: 0xec10e
// SYMBOL: sub_EC10E
_DWORD *__fastcall sub_EC10E(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v4; // r1
  unsigned __int8 *v5; // r2
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r6
  int v8; // r5

  *a1 = 0;
  a1[1] = 0;
  v4 = *a2;
  v5 = a2[1];
  a1[2] = 0;
  if ( v5 != v4 )
  {
    sub_EC16E(a1, (v5 - v4) >> 4);
    v6 = a2[1];
    v7 = *a2;
    v8 = a1[1];
    while ( v7 != v6 )
    {
      sub_E4834(v8, v7);
      v8 += 16;
      v7 += 16;
    }
    a1[1] = v8;
  }
  return a1;
}


// ======================================================================
