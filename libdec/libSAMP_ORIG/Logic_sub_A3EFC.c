// ADDR: 0xa40f8
// SYMBOL: sub_A40F8
int __fastcall sub_A40F8(int *a1)
{
  __int64 v1; // kr00_8
  int v2; // r12
  int v3; // lr
  int v4; // r2
  int v6; // r2
  int v7; // r0
  int v8; // r4
  int v9; // r2
  int v10; // r1
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r2

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
    if ( v4 == 29 )
    {
      if ( v3 < SHIDWORD(v1) )
      {
        a1[1] = v1 + 2;
        v3 = v1 + 2;
      }
      if ( v3 >= SHIDWORD(v1) )
      {
        v12 = 0;
      }
      else
      {
        a1[1] = v3 + 1;
        v12 = *(unsigned __int8 *)(v2 + v3++);
      }
      v13 = v1 | v12;
      if ( v3 >= SHIDWORD(v1) )
      {
        v15 = 0;
      }
      else
      {
        a1[1] = v3 + 1;
        v14 = *(unsigned __int8 *)(v2 + v3++);
        v15 = v14 << 8;
      }
      v11 = v15 | (v13 << 16);
      goto LABEL_28;
    }
    if ( v4 == 28 )
    {
      if ( v3 >= SHIDWORD(v1) )
      {
        v11 = 0;
      }
      else
      {
        a1[1] = v1 + 2;
        v10 = *(unsigned __int8 *)(v2 + v3);
        v3 = v1 + 2;
        v11 = v10 << 8;
      }
LABEL_28:
      if ( v3 >= SHIDWORD(v1) )
        return v11;
      a1[1] = v3 + 1;
      return *(unsigned __int8 *)(v2 + v3) | v11;
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
