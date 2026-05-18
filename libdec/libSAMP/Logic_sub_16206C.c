// ADDR: 0x17d9c0
// SYMBOL: sub_17D9C0
int __fastcall sub_17D9C0(int *a1, _BYTE *a2, int a3, int a4)
{
  char v4; // r8
  int v5; // r4
  char v6; // r12
  int v7; // r2
  int v8; // r5
  int v9; // r3
  int v11; // r2
  _BYTE *v12; // r4
  int v13; // r3

  v4 = -16;
  v5 = (a3 >> 3) - 1;
  if ( a4 )
    v4 = 0;
  if ( a3 >= 16 )
  {
    v6 = a4 - 1;
    v7 = 8 * (a3 >> 3);
    do
    {
      v8 = a1[2];
      if ( v8 >= *a1 )
        return 0;
      v9 = *(unsigned __int8 *)(a1[3] + (v8 >> 3));
      a1[2] = v8 + 1;
      if ( ((v9 << (v8 & 7)) & 0x80) == 0 )
        return sub_17D786(a1, a2, v7, 1);
      a2[v5] = v6;
      v7 -= 8;
    }
    while ( v5-- > 1 );
  }
  v11 = a1[2];
  if ( v11 < *a1 )
  {
    v12 = &a2[v5];
    v13 = *(unsigned __int8 *)(a1[3] + (v11 >> 3));
    a1[2] = v11 + 1;
    if ( ((v13 << (v11 & 7)) & 0x80) != 0 )
    {
      if ( sub_17D786(a1, v12, 4, 1) )
      {
        *v12 |= v4;
        return 1;
      }
    }
    else if ( sub_17D786(a1, v12, 8, 1) )
    {
      return 1;
    }
  }
  return 0;
}


// ======================================================================
