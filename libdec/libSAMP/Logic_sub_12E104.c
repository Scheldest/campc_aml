// ADDR: 0x12e138
// SYMBOL: sub_12E138
_DWORD *__fastcall sub_12E138(_DWORD *a1, __int64 **a2)
{
  __int64 *v4; // r1
  __int64 *v5; // r2
  __int64 *v6; // r1
  __int64 *v7; // r2
  __int64 *v8; // r0
  __int64 v9; // kr08_8
  unsigned int *v10; // r3
  unsigned int v11; // r5

  *a1 = 0;
  a1[1] = 0;
  v4 = *a2;
  v5 = a2[1];
  a1[2] = 0;
  if ( v5 != v4 )
  {
    sub_12E19A(a1, v5 - v4);
    v7 = a2[1];
    v6 = *a2;
    v8 = (__int64 *)a1[1];
    while ( v6 != v7 )
    {
      v9 = *v6;
      *v8 = *v6;
      if ( HIDWORD(v9) )
      {
        v10 = (unsigned int *)(HIDWORD(v9) + 4);
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 + 1, v10) );
      }
      ++v8;
      ++v6;
    }
    a1[1] = v8;
  }
  return a1;
}


// ======================================================================
