// ADDR: 0xe9e8e
// SYMBOL: sub_E9E8E
int __fastcall sub_E9E8E(int result, __int64 *a2)
{
  int v2; // r12
  __int64 *v3; // r2
  __int64 *v4; // r3
  int v5; // lr
  int *v6; // r4
  int v7; // r3
  int v8; // r4
  int v9; // r5
  __int64 v10; // kr00_8
  int v11; // r2
  int v12; // r1
  int v13; // r1
  int *v14; // r1
  int v15; // r4
  int *v16; // r5
  int **v17; // r5
  int v18; // t1
  int v19; // r4
  int v20; // r3
  int v21; // r2
  int v22; // r2
  int v23; // r1
  int *v24; // r4
  int *v25; // r4
  int v26; // t1
  int v27; // r3
  int *v28; // r2
  int *v29; // r3
  int *v30; // r3
  int v31; // t1
  int v32; // r0
  int *v33; // r2
  int *v34; // r2
  int v35; // t1
  int v36; // r0
  int *v37; // r3
  int **v38; // r3
  int v39; // t1
  int v40; // r1
  int v41; // r2
  int *v42; // r3
  _DWORD *v43; // r3
  int v44; // t1
  int *v45; // r1
  int v46; // r3
  _DWORD *v47; // r3
  int **v48; // r3
  int v49; // t1

  v2 = *(_DWORD *)a2;
  v3 = a2;
  if ( *(_DWORD *)a2 )
  {
    v4 = (__int64 *)*((_DWORD *)a2 + 1);
    if ( !v4 )
    {
      v3 = a2;
      goto LABEL_7;
    }
    do
    {
      v3 = v4;
      v4 = *(__int64 **)v4;
    }
    while ( v4 );
  }
  v2 = *((_DWORD *)v3 + 1);
  if ( v2 )
  {
LABEL_7:
    v5 = 0;
    *(_DWORD *)(v2 + 8) = *((_DWORD *)v3 + 2);
    goto LABEL_8;
  }
  v2 = 0;
  v5 = 1;
LABEL_8:
  v6 = (int *)*((_DWORD *)v3 + 2);
  v7 = *v6;
  if ( (__int64 *)*v6 == v3 )
  {
    *v6 = v2;
    if ( v3 == (__int64 *)result )
    {
      v7 = 0;
      result = v2;
    }
    else
    {
      v7 = v6[1];
    }
  }
  else
  {
    v6[1] = v2;
  }
  v8 = *((unsigned __int8 *)v3 + 12);
  if ( v3 != a2 )
  {
    v9 = *((_DWORD *)a2 + 2);
    *((_DWORD *)v3 + 2) = v9;
    *(_DWORD *)(v9 + 4 * (**((_DWORD **)a2 + 2) != (_DWORD)a2)) = v3;
    v10 = *a2;
    *v3 = *a2;
    *(_DWORD *)(v10 + 8) = v3;
    if ( HIDWORD(v10) )
      *(_DWORD *)(HIDWORD(v10) + 8) = v3;
    *((_BYTE *)v3 + 12) = *((_BYTE *)a2 + 12);
    if ( (__int64 *)result == a2 )
      result = (int)v3;
  }
  if ( !v8 || !result )
    return result;
  if ( !v5 )
  {
    result = 1;
    *(_BYTE *)(v2 + 12) = 1;
    return result;
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(v7 + 8);
    if ( *(_DWORD *)v11 == v7 )
      break;
    if ( *(_BYTE *)(v7 + 12) )
    {
      v12 = v7;
    }
    else
    {
      v14 = *(int **)(v11 + 4);
      *(_BYTE *)(v7 + 12) = 1;
      *(_BYTE *)(v11 + 12) = 0;
      v15 = *v14;
      *(_DWORD *)(v11 + 4) = *v14;
      if ( v15 )
        *(_DWORD *)(v15 + 8) = v11;
      v14[2] = *(_DWORD *)(v11 + 8);
      v16 = *(int **)(v11 + 8);
      v18 = *v16;
      v17 = (int **)(v16 + 1);
      if ( v18 == v11 )
        v17 = *(int ***)(v11 + 8);
      *v17 = v14;
      *v14 = v11;
      v19 = *(_DWORD *)v7;
      *(_DWORD *)(v11 + 8) = v14;
      v12 = *(_DWORD *)(v19 + 4);
      if ( result == v19 )
        result = v7;
    }
    v20 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 && !*(_BYTE *)(v20 + 12) )
    {
      v21 = *(_DWORD *)(v12 + 4);
      if ( !v21 )
        goto LABEL_59;
LABEL_58:
      if ( *(_BYTE *)(v21 + 12) )
      {
LABEL_59:
        *(_BYTE *)(v20 + 12) = 1;
        v32 = *(_DWORD *)(v20 + 4);
        *(_BYTE *)(v12 + 12) = 0;
        *(_DWORD *)v12 = v32;
        if ( v32 )
          *(_DWORD *)(v32 + 8) = v12;
        *(_DWORD *)(v20 + 8) = *(_DWORD *)(v12 + 8);
        v33 = *(int **)(v12 + 8);
        v35 = *v33;
        v34 = v33 + 1;
        if ( v35 == v12 )
          v34 = *(int **)(v12 + 8);
        *v34 = v20;
        v21 = v12;
        *(_DWORD *)(v12 + 8) = v20;
        *(_DWORD *)(v20 + 4) = v12;
      }
      else
      {
        v20 = v12;
      }
      result = *(_DWORD *)(v20 + 8);
      v45 = *(int **)(result + 4);
      *(_BYTE *)(v20 + 12) = *(_BYTE *)(result + 12);
      v46 = *v45;
      *(_BYTE *)(result + 12) = 1;
      *(_BYTE *)(v21 + 12) = 1;
      *(_DWORD *)(result + 4) = v46;
      if ( v46 )
        *(_DWORD *)(v46 + 8) = result;
      v45[2] = *(_DWORD *)(result + 8);
      v47 = *(_DWORD **)(result + 8);
      v49 = *v47;
      v48 = (int **)(v47 + 1);
      if ( v49 == result )
        v48 = *(int ***)(result + 8);
      *v48 = v45;
      *(_DWORD *)(result + 8) = v45;
      *v45 = result;
      return result;
    }
    v21 = *(_DWORD *)(v12 + 4);
    if ( v21 && !*(_BYTE *)(v21 + 12) )
      goto LABEL_58;
    v22 = *(_DWORD *)(v12 + 8);
    *(_BYTE *)(v12 + 12) = 0;
    if ( v22 == result )
    {
      v22 = result;
LABEL_56:
      result = 1;
      *(_BYTE *)(v22 + 12) = 1;
      return result;
    }
    if ( !*(_BYTE *)(v22 + 12) )
      goto LABEL_56;
LABEL_51:
    v29 = *(int **)(v22 + 8);
    v31 = *v29;
    v30 = v29 + 1;
    if ( v31 != v22 )
      v30 = *(int **)(v22 + 8);
    v7 = *v30;
  }
  if ( *(_BYTE *)(v7 + 12) )
  {
    v13 = v7;
  }
  else
  {
    v23 = *(_DWORD *)(v7 + 4);
    *(_BYTE *)(v7 + 12) = 1;
    *(_BYTE *)(v11 + 12) = 0;
    *(_DWORD *)v11 = v23;
    if ( v23 )
      *(_DWORD *)(v23 + 8) = v11;
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v11 + 8);
    v24 = *(int **)(v11 + 8);
    v26 = *v24;
    v25 = v24 + 1;
    if ( v26 == v11 )
      v25 = *(int **)(v11 + 8);
    *v25 = v7;
    v13 = *(_DWORD *)v11;
    *(_DWORD *)(v11 + 8) = v7;
    *(_DWORD *)(v7 + 4) = v11;
    if ( result == v11 )
      result = v7;
  }
  v27 = *(_DWORD *)v13;
  if ( *(_DWORD *)v13 && !*(_BYTE *)(v27 + 12) )
    goto LABEL_72;
  v28 = *(int **)(v13 + 4);
  if ( !v28 || *((_BYTE *)v28 + 12) )
  {
    v22 = *(_DWORD *)(v13 + 8);
    *(_BYTE *)(v13 + 12) = 0;
    if ( !*(_BYTE *)(v22 + 12) || v22 == result )
      goto LABEL_56;
    goto LABEL_51;
  }
  if ( !v27 )
    goto LABEL_67;
  if ( *(_BYTE *)(v27 + 12) )
  {
    v28 = *(int **)(v13 + 4);
LABEL_67:
    *((_BYTE *)v28 + 12) = 1;
    v36 = *v28;
    *(_BYTE *)(v13 + 12) = 0;
    *(_DWORD *)(v13 + 4) = v36;
    if ( v36 )
      *(_DWORD *)(v36 + 8) = v13;
    v28[2] = *(_DWORD *)(v13 + 8);
    v37 = *(int **)(v13 + 8);
    v39 = *v37;
    v38 = (int **)(v37 + 1);
    if ( v39 == v13 )
      v38 = *(int ***)(v13 + 8);
    *v38 = v28;
    v27 = v13;
    *(_DWORD *)(v13 + 8) = v28;
    *v28 = v13;
  }
  else
  {
LABEL_72:
    v28 = (int *)v13;
  }
  result = v28[2];
  v40 = *(_DWORD *)result;
  *((_BYTE *)v28 + 12) = *(_BYTE *)(result + 12);
  v41 = *(_DWORD *)(v40 + 4);
  *(_BYTE *)(result + 12) = 1;
  *(_BYTE *)(v27 + 12) = 1;
  *(_DWORD *)result = v41;
  if ( v41 )
    *(_DWORD *)(v41 + 8) = result;
  *(_DWORD *)(v40 + 8) = *(_DWORD *)(result + 8);
  v42 = *(int **)(result + 8);
  v44 = *v42;
  v43 = v42 + 1;
  if ( v44 == result )
    v43 = *(_DWORD **)(result + 8);
  *v43 = v40;
  *(_DWORD *)(result + 8) = v40;
  *(_DWORD *)(v40 + 4) = result;
  return result;
}


// ======================================================================
