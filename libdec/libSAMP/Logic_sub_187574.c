// ADDR: 0x187734
// SYMBOL: sub_187734
int __fastcall sub_187734(_DWORD *a1)
{
  _DWORD *v1; // r11
  int *v2; // r10
  int *v3; // r8
  unsigned int v4; // r5
  int v5; // r1
  _DWORD *v6; // r4
  unsigned int v7; // r6
  void *v8; // r0
  int v9; // r4
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  bool v13; // cf
  unsigned int v14; // r2
  unsigned int v15; // r1
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r4
  void *v19; // r0
  unsigned int v20; // r2
  int v21; // r3
  unsigned int v22; // r2
  unsigned int v23; // r0
  unsigned int i; // r5
  int v25; // r1
  _DWORD *v26; // r6
  int v27; // r4
  void *v28; // r0
  int v29; // r4
  unsigned int v30; // r1
  unsigned int v31; // r6
  unsigned int v32; // r2
  unsigned int v33; // r5
  int v34; // r3
  unsigned int v35; // r0
  int v36; // r4
  void *v37; // r0
  int v38; // r0
  int v39; // r9
  _DWORD *v40; // r4
  int v41; // r3
  unsigned int v42; // r1
  unsigned int *v43; // r4
  unsigned int v44; // t1
  unsigned int *v45; // r6
  unsigned int v46; // r0
  unsigned int *v47; // r5
  unsigned int v48; // r2
  unsigned int *v49; // r11
  unsigned int v50; // r2
  unsigned int v51; // r8
  unsigned int v52; // r3
  unsigned int v53; // r2
  void *v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r2
  unsigned int v57; // r1
  unsigned int j; // r4
  void *v59; // r0
  _DWORD *v61; // [sp+0h] [bp-20h]

  v1 = a1;
  v2 = a1 + 424;
  v3 = a1 + 42;
  if ( a1[43] )
  {
    v4 = 0;
    do
    {
      v5 = *v3;
      v6 = *(_DWORD **)(*v3 + 4 * v4);
      if ( v6[3] )
      {
        v7 = 0;
        do
        {
          v8 = *(void **)(*(_DWORD *)(v6[2] + 4 * v7) + 52);
          if ( v8 )
          {
            operator delete[](v8);
            v5 = *v3;
          }
          sub_17E56C(v2, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 4 * v4) + 8) + 4 * v7));
          v5 = *v3;
          ++v7;
          v6 = *(_DWORD **)(*v3 + 4 * v4);
        }
        while ( v7 < v6[3] );
      }
      sub_18A128(v6 + 2);
      operator delete(v6);
      ++v4;
    }
    while ( v4 < v1[43] );
  }
  v9 = 0;
  sub_18A274(v3, 0);
  v11 = v1[5];
  v10 = v1[4];
  v12 = v1[6];
  v13 = v11 >= v10;
  v14 = v11 - v10;
  if ( !v13 )
    v9 = -v12;
  if ( v14 != v9 )
  {
    do
    {
      v15 = v10 + 1;
      v16 = v1[3];
      v17 = v15 - v12;
      if ( v15 != v12 )
        v17 = v15;
      v1[4] = v17;
      if ( !v17 )
        v17 = v12;
      v18 = *(_DWORD *)(v16 + 4 * v17 - 4);
      v19 = *(void **)(v18 + 52);
      if ( v19 )
        operator delete[](v19);
      sub_17E56C(v2, v18);
      v20 = v1[5];
      v10 = v1[4];
      v21 = 0;
      v12 = v1[6];
      v13 = v20 >= v10;
      v22 = v20 - v10;
      if ( !v13 )
        v21 = -v12;
    }
    while ( v22 != v21 );
  }
  sub_17E3FA((int)(v1 + 3), 32);
  v23 = v1[1];
  if ( v23 )
  {
    for ( i = 0; i < v23; ++i )
    {
      v25 = *v1;
      v26 = *(_DWORD **)(*v1 + 4 * i);
      if ( v26 )
      {
        if ( *v26 )
        {
          while ( 1 )
          {
            v27 = **(_DWORD **)(*(_DWORD *)(v25 + 4 * i) + 8);
            sub_18A29A();
            v28 = *(void **)(v27 + 52);
            if ( v28 )
              operator delete[](v28);
            sub_17E56C(v2, v27);
            if ( !*v26 )
              break;
            v25 = *v1;
          }
        }
        sub_18A2DA(v26);
        sub_18A2DA(v26);
        operator delete(v26);
        v23 = v1[1];
      }
    }
  }
  v29 = 0;
  sub_1879D6(v1, 0);
  if ( v1[20] )
  {
    sub_18A30C(v1 + 16);
    v1[20] = 0;
    v1[21] = 0;
  }
  v30 = v1[24];
  v31 = v1[23];
  v32 = v1[25];
  if ( v30 < v31 )
    v29 = -v32;
  if ( v30 - v31 != v29 )
  {
    do
    {
      v33 = v31 + 1;
      v34 = v1[22];
      v31 = v31 + 1 - v32;
      if ( v31 )
        v31 = v33;
      v35 = v31;
      v1[23] = v31;
      if ( !v31 )
        v35 = v32;
      v36 = *(_DWORD *)(v34 + 4 * v35 - 4);
      if ( v36 )
      {
        v37 = *(void **)(v36 + 52);
        if ( v37 )
          operator delete[](v37);
        sub_17E56C(v2, v36);
        v30 = v1[24];
        v31 = v1[23];
        v32 = v1[25];
      }
      v38 = 0;
      if ( v30 < v31 )
        v38 = -v32;
    }
    while ( v30 - v31 != v38 );
  }
  sub_17E3FA((int)(v1 + 22), 512);
  v39 = 0;
  v61 = v1;
  do
  {
    v40 = &v1[4 * v39];
    v41 = 0;
    v44 = v40[29];
    v43 = v40 + 29;
    v42 = v44;
    v45 = v43 - 3;
    v47 = v43 - 2;
    v46 = *(v43 - 2);
    v49 = v43 - 1;
    v48 = *(v43 - 1);
    v13 = v48 >= v46;
    v50 = v48 - v46;
    if ( !v13 )
      v41 = -v42;
    if ( v50 != v41 )
    {
      v51 = 0;
      do
      {
        v52 = v46 + v51;
        v53 = *v45;
        if ( v46 + v51 >= v42 )
          v46 -= v42;
        v54 = *(void **)(*(_DWORD *)(v53 + 4 * (v46 + v51)) + 52);
        if ( v54 )
        {
          operator delete[](v54);
          v53 = *v45;
          v42 = *v43;
          v52 = v51 + *v47;
        }
        v55 = v52 - v42;
        if ( v52 < v42 )
          v55 = v52;
        sub_17E56C(v2, *(_DWORD *)(v53 + 4 * v55));
        v46 = *v47;
        ++v51;
        v42 = *v43;
        v56 = *v49 - *v47;
        if ( *v49 < *v47 )
          v56 += v42;
      }
      while ( v51 < v56 );
    }
    sub_17E3FA((int)(v43 - 3), 32);
    v1 = v61;
    ++v39;
  }
  while ( v39 != 4 );
  v57 = v61[418];
  if ( v57 )
  {
    for ( j = 0; j < v57; ++j )
    {
      v59 = *(void **)(v61[417] + 4 * j);
      if ( v59 )
      {
        operator delete(v59);
        v57 = v61[418];
      }
    }
  }
  sub_1879FC(v61 + 417, 0);
  sub_17E50E(v2);
  return sub_18A188(v61 + 7, 0);
}


// ======================================================================
