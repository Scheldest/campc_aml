// ADDR: 0x1791aa
// SYMBOL: sub_1791AA
int __fastcall sub_1791AA(int *a1)
{
  __int64 v1; // kr00_8
  int v2; // r12
  int v3; // r3
  int v4; // r2
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r4
  int v9; // r2
  int v10; // r2
  int v11; // r4
  int v13; // r2
  int v14; // r4

  v1 = *(_QWORD *)(a1 + 1);
  if ( (int)v1 >= SHIDWORD(v1) )
    return 0;
  v2 = *a1;
  v3 = v1 + 1;
  a1[1] = v1 + 1;
  v4 = *(unsigned __int8 *)(v2 + v1);
  if ( (unsigned __int8)(v4 - 32) <= 0xD6u )
    return v4 - 139;
  if ( (unsigned __int8)(v4 + 9) <= 3u )
  {
    v6 = v4 << 8;
    if ( v3 >= SHIDWORD(v1) )
    {
      v7 = 0;
    }
    else
    {
      a1[1] = v1 + 2;
      v7 = *(unsigned __int8 *)(v2 + v3);
    }
    return v7 + v6 - 63124;
  }
  if ( (unsigned __int8)(v4 + 5) > 3u )
  {
    if ( v4 == 28 )
    {
      v5 = 0;
      v13 = 2;
      do
      {
        if ( v3 >= SHIDWORD(v1) )
        {
          v14 = 0;
        }
        else
        {
          a1[1] = v3 + 1;
          v14 = *(unsigned __int8 *)(v2 + v3++);
        }
        --v13;
        v5 = (v5 << 8) | v14;
      }
      while ( v13 );
      return v5;
    }
    if ( v4 == 29 )
    {
      v5 = 0;
      v10 = 4;
      do
      {
        if ( v3 >= SHIDWORD(v1) )
        {
          v11 = 0;
        }
        else
        {
          a1[1] = v3 + 1;
          v11 = *(unsigned __int8 *)(v2 + v3++);
        }
        --v10;
        v5 = (v5 << 8) | v11;
      }
      while ( v10 );
      return v5;
    }
    return 0;
  }
  v8 = 0;
  v9 = -256 * v4;
  if ( v3 < SHIDWORD(v1) )
  {
    a1[1] = v1 + 2;
    v8 = *(unsigned __int8 *)(v2 + v3);
  }
  return v9 - v8 + 64148;
}


// ======================================================================
