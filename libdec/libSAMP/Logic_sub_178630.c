// ADDR: 0x1788de
// SYMBOL: sub_1788DE
int __fastcall sub_1788DE(int *a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v6; // r6
  void *v7; // r0
  const void *v8; // r1
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r6
  void *v13; // r0
  const void *v14; // r1
  int v15; // r8

  result = a1[5];
  if ( result < a2 )
  {
    v4 = a1[1];
    if ( v4 < a2 )
    {
      if ( v4 )
        v6 = v4 + v4 / 2;
      else
        v6 = 8;
      if ( v6 <= a2 )
        v6 = a2;
      if ( v4 < v6 )
      {
        v7 = (void *)sub_1654B0(4 * v6);
        v8 = (const void *)a1[2];
        v9 = (int)v7;
        if ( v8 )
        {
          j_memcpy(v7, v8, 4 * *a1);
          sub_165578(a1[2]);
        }
        a1[1] = v6;
        a1[2] = v9;
      }
    }
    v10 = *a1;
    if ( *a1 < a2 )
    {
      do
        *(_DWORD *)(a1[2] + 4 * v10++) = -1082130432;
      while ( a2 != v10 );
    }
    v11 = a1[6];
    *a1 = a2;
    if ( v11 < a2 )
    {
      if ( v11 )
        v12 = v11 + v11 / 2;
      else
        v12 = 8;
      if ( v12 <= a2 )
        v12 = a2;
      if ( v11 < v12 )
      {
        v13 = (void *)sub_1654B0(2 * v12);
        v14 = (const void *)a1[7];
        v15 = (int)v13;
        if ( v14 )
        {
          j_memcpy(v13, v14, 2 * a1[5]);
          sub_165578(a1[7]);
        }
        a1[6] = v12;
        a1[7] = v15;
      }
    }
    result = a1[5];
    if ( result < a2 )
    {
      do
        *(_WORD *)(a1[7] + 2 * result++) = -1;
      while ( a2 != result );
    }
    a1[5] = a2;
  }
  return result;
}


// ======================================================================
