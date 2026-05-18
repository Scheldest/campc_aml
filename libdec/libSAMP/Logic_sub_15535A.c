// ADDR: 0x17d6c2
// SYMBOL: sub_17D6C2
unsigned int __fastcall sub_17D6C2(int *a1, int *a2)
{
  int v3; // r6
  unsigned int result; // r0
  int v6; // r6
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r6
  int v11; // r6
  int v12; // r3

  v3 = *a2;
  result = sub_17D5BA((int)a1, *a2);
  if ( v3 >= 1 )
  {
    result = v3 + 1;
    do
    {
      v6 = a2[2];
      if ( v6 >= *a2 )
        break;
      v7 = *(unsigned __int8 *)(a2[3] + (v6 >> 3));
      a2[2] = v6 + 1;
      v8 = *a1;
      v9 = v7 & (0x80u >> (v6 & 7));
      v10 = *a1 & 7;
      if ( v10 )
      {
        if ( v9 )
          *(_BYTE *)(a1[3] + (v8 >> 3)) |= 0x80u >> v10;
      }
      else
      {
        v11 = a1[3];
        v12 = v8 >> 3;
        *(_BYTE *)(v11 + v12) = v9 ? 0x80 : 0;
      }
      --result;
      ++*a1;
    }
    while ( result > 1 );
  }
  return result;
}


// ======================================================================
