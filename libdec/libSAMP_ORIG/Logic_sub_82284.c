// ADDR: 0x8231c
// SYMBOL: sub_8231C
int __fastcall sub_8231C(int result, __int64 *a2)
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
  bool v11; // zf
  int *v12; // r3
  int *v13; // r3
  int v14; // t1
  int v15; // r2
  int v16; // r1
  int v17; // r1
  int *v18; // r1
  int v19; // r4
  int *v20; // r5
  int **v21; // r5
  int v22; // t1
  int v23; // r4
  int v24; // r3
  int v25; // r2
  int v26; // r2
  int v27; // r1
  int *v28; // r4
  int *v29; // r4
  int v30; // t1
  int v31; // r3
  int *v32; // r2
  bool v33; // zf
  int v34; // r0
  int *v35; // r2
  int *v36; // r2
  int v37; // t1
  int v38; // r0
  int *v39; // r3
  int **v40; // r3
  int v41; // t1
  int v42; // r1
  int v43; // r2
  int *v44; // r3
  _DWORD *v45; // r3
  int v46; // t1
  int *v47; // r1
  int v48; // r3
  _DWORD *v49; // r3
  int **v50; // r3
  int v51; // t1

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
    v11 = *((_DWORD *)a2 + 1) == 0;
    *v3 = *a2;
    *(_DWORD *)(v10 + 8) = v3;
    if ( !v11 )
      *(_DWORD *)(HIDWORD(v10) + 8) = v3;
    *((_BYTE *)v3 + 12) = *((_BYTE *)a2 + 12);
    if ( (__int64 *)result == a2 )
      result = (int)v3;
  }
  v11 = v8 == 0;
  if ( v8 )
    v11 = result == 0;
  if ( v11 )
    return result;
  if ( !v5 )
  {
    result = 1;
    *(_BYTE *)(v2 + 12) = 1;
    return result;
  }
  while ( 1 )
  {
    v15 = *(_DWORD *)(v7 + 8);
    if ( *(_DWORD *)v15 == v7 )
      break;
    if ( *(_BYTE *)(v7 + 12) )
    {
      v16 = v7;
    }
    else
    {
      v18 = *(int **)(v15 + 4);
      *(_BYTE *)(v7 + 12) = 1;
      *(_BYTE *)(v15 + 12) = 0;
      v19 = *v18;
      *(_DWORD *)(v15 + 4) = *v18;
      if ( v19 )
        *(_DWORD *)(v19 + 8) = v15;
      v18[2] = *(_DWORD *)(v15 + 8);
      v20 = *(int **)(v15 + 8);
      v22 = *v20;
      v21 = (int **)(v20 + 1);
      if ( v22 == v15 )
        v21 = *(int ***)(v15 + 8);
      *v21 = v18;
      *v18 = v15;
      v23 = *(_DWORD *)v7;
      *(_DWORD *)(v15 + 8) = v18;
      v16 = *(_DWORD *)(v23 + 4);
      if ( result == v23 )
        result = v7;
    }
    v24 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 && !*(_BYTE *)(v24 + 12) )
    {
      v25 = *(_DWORD *)(v16 + 4);
      if ( !v25 )
        goto LABEL_65;
LABEL_64:
      if ( *(_BYTE *)(v25 + 12) )
      {
LABEL_65:
        *(_BYTE *)(v24 + 12) = 1;
        v34 = *(_DWORD *)(v24 + 4);
        *(_BYTE *)(v16 + 12) = 0;
        *(_DWORD *)v16 = v34;
        if ( v34 )
          *(_DWORD *)(v34 + 8) = v16;
        *(_DWORD *)(v24 + 8) = *(_DWORD *)(v16 + 8);
        v35 = *(int **)(v16 + 8);
        v37 = *v35;
        v36 = v35 + 1;
        if ( v37 == v16 )
          v36 = *(int **)(v16 + 8);
        *v36 = v24;
        v25 = v16;
        *(_DWORD *)(v16 + 8) = v24;
        *(_DWORD *)(v24 + 4) = v16;
      }
      else
      {
        v24 = v16;
      }
      result = *(_DWORD *)(v24 + 8);
      v47 = *(int **)(result + 4);
      *(_BYTE *)(v24 + 12) = *(_BYTE *)(result + 12);
      v48 = *v47;
      *(_BYTE *)(result + 12) = 1;
      *(_BYTE *)(v25 + 12) = 1;
      *(_DWORD *)(result + 4) = v48;
      if ( v48 )
        *(_DWORD *)(v48 + 8) = result;
      v47[2] = *(_DWORD *)(result + 8);
      v49 = *(_DWORD **)(result + 8);
      v51 = *v49;
      v50 = (int **)(v49 + 1);
      if ( v51 == result )
        v50 = *(int ***)(result + 8);
      *v50 = v47;
      *(_DWORD *)(result + 8) = v47;
      *v47 = result;
      return result;
    }
    v25 = *(_DWORD *)(v16 + 4);
    if ( v25 && !*(_BYTE *)(v25 + 12) )
      goto LABEL_64;
    v26 = *(_DWORD *)(v16 + 8);
    *(_BYTE *)(v16 + 12) = 0;
    if ( v26 == result )
    {
      v26 = result;
LABEL_60:
      result = 1;
      *(_BYTE *)(v26 + 12) = 1;
      return result;
    }
    if ( !*(_BYTE *)(v26 + 12) )
      goto LABEL_60;
LABEL_25:
    v12 = *(int **)(v26 + 8);
    v14 = *v12;
    v13 = v12 + 1;
    if ( v14 != v26 )
      v13 = *(int **)(v26 + 8);
    v7 = *v13;
  }
  if ( *(_BYTE *)(v7 + 12) )
  {
    v17 = v7;
  }
  else
  {
    v27 = *(_DWORD *)(v7 + 4);
    *(_BYTE *)(v7 + 12) = 1;
    *(_BYTE *)(v15 + 12) = 0;
    *(_DWORD *)v15 = v27;
    if ( v27 )
      *(_DWORD *)(v27 + 8) = v15;
    *(_DWORD *)(v7 + 8) = *(_DWORD *)(v15 + 8);
    v28 = *(int **)(v15 + 8);
    v30 = *v28;
    v29 = v28 + 1;
    if ( v30 == v15 )
      v29 = *(int **)(v15 + 8);
    *v29 = v7;
    v17 = *(_DWORD *)v15;
    *(_DWORD *)(v15 + 8) = v7;
    *(_DWORD *)(v7 + 4) = v15;
    if ( result == v15 )
      result = v7;
  }
  v31 = *(_DWORD *)v17;
  if ( *(_DWORD *)v17 && !*(_BYTE *)(v31 + 12) )
    goto LABEL_78;
  v32 = *(int **)(v17 + 4);
  if ( !v32 || *((_BYTE *)v32 + 12) )
  {
    v26 = *(_DWORD *)(v17 + 8);
    *(_BYTE *)(v17 + 12) = 0;
    v33 = *(_BYTE *)(v26 + 12) == 0;
    if ( *(_BYTE *)(v26 + 12) )
      v33 = v26 == result;
    if ( v33 )
      goto LABEL_60;
    goto LABEL_25;
  }
  if ( !v31 )
    goto LABEL_73;
  if ( *(_BYTE *)(v31 + 12) )
  {
    v32 = *(int **)(v17 + 4);
LABEL_73:
    *((_BYTE *)v32 + 12) = 1;
    v38 = *v32;
    *(_BYTE *)(v17 + 12) = 0;
    *(_DWORD *)(v17 + 4) = v38;
    if ( v38 )
      *(_DWORD *)(v38 + 8) = v17;
    v32[2] = *(_DWORD *)(v17 + 8);
    v39 = *(int **)(v17 + 8);
    v41 = *v39;
    v40 = (int **)(v39 + 1);
    if ( v41 == v17 )
      v40 = *(int ***)(v17 + 8);
    *v40 = v32;
    v31 = v17;
    *(_DWORD *)(v17 + 8) = v32;
    *v32 = v17;
  }
  else
  {
LABEL_78:
    v32 = (int *)v17;
  }
  result = v32[2];
  v42 = *(_DWORD *)result;
  *((_BYTE *)v32 + 12) = *(_BYTE *)(result + 12);
  v43 = *(_DWORD *)(v42 + 4);
  *(_BYTE *)(result + 12) = 1;
  *(_BYTE *)(v31 + 12) = 1;
  *(_DWORD *)result = v43;
  if ( v43 )
    *(_DWORD *)(v43 + 8) = result;
  *(_DWORD *)(v42 + 8) = *(_DWORD *)(result + 8);
  v44 = *(int **)(result + 8);
  v46 = *v44;
  v45 = v44 + 1;
  if ( v46 == result )
    v45 = *(_DWORD **)(result + 8);
  *v45 = v42;
  *(_DWORD *)(result + 8) = v42;
  *(_DWORD *)(v42 + 4) = result;
  return result;
}


// ======================================================================
