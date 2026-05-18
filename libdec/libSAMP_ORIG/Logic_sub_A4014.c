// ADDR: 0xa3d60
// SYMBOL: sub_A3D60
_DWORD *__fastcall sub_A3D60(_DWORD *result, _DWORD *a2)
{
  __int64 v2; // kr00_8
  int v3; // r2
  int v4; // lr
  int v5; // r2
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int v10; // r2
  int v11; // r5
  int v12; // r6
  int v13; // r4
  int v14; // r5
  int v15; // r5
  int v16; // r2
  int v17; // r2
  bool v18; // cc
  int v19; // r1

  v2 = *(_QWORD *)(a2 + 1);
  if ( (int)v2 >= SHIDWORD(v2) )
  {
    v5 = 0;
    v4 = a2[1];
LABEL_3:
    v6 = v5;
    if ( !v5 )
      goto LABEL_27;
    goto LABEL_7;
  }
  v3 = *a2;
  v4 = v2 + 1;
  a2[1] = v2 + 1;
  v5 = *(unsigned __int8 *)(v3 + v2) << 8;
  if ( (int)v2 + 1 >= SHIDWORD(v2) )
    goto LABEL_3;
  v7 = *a2;
  a2[1] = v2 + 2;
  v8 = *(unsigned __int8 *)(v7 + v4);
  v4 = v2 + 2;
  v6 = v8 | v5;
  if ( !v6 )
    goto LABEL_27;
LABEL_7:
  if ( v4 >= SHIDWORD(v2) )
  {
    v10 = 0;
  }
  else
  {
    v9 = *a2;
    a2[1] = v4 + 1;
    v10 = *(unsigned __int8 *)(v9 + v4++);
  }
  v11 = v4 + v10 * v6;
  v12 = v11;
  if ( SHIDWORD(v2) < v11 )
    v12 = HIDWORD(v2);
  if ( v11 < 0 )
    v12 = HIDWORD(v2);
  if ( v10 )
  {
    v13 = 0;
    do
    {
      if ( v12 < SHIDWORD(v2) )
      {
        v14 = *a2;
        a2[1] = v12 + 1;
        v15 = *(unsigned __int8 *)(v14 + v12++);
      }
      else
      {
        v15 = 0;
      }
      v13 = (v13 << 8) | v15;
      --v10;
    }
    while ( v10 );
    v16 = v13 - 1;
  }
  else
  {
    v16 = -1;
  }
  v17 = v16 + v12;
  v4 = v17;
  if ( SHIDWORD(v2) < v17 )
    v4 = HIDWORD(v2);
  if ( v17 < 0 )
    v4 = HIDWORD(v2);
  a2[1] = v4;
LABEL_27:
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( (int)((v4 - v2) | v2) >= 0 )
  {
    v18 = SHIDWORD(v2) < (int)v2;
    if ( SHIDWORD(v2) >= (int)v2 )
      v18 = SHIDWORD(v2) < v4;
    if ( !v18 )
    {
      v19 = *a2;
      result[2] = v4 - v2;
      *result = v19 + v2;
    }
  }
  return result;
}


// ======================================================================
