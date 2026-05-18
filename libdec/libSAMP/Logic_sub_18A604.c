// ADDR: 0x18a83a
// SYMBOL: sub_18A83A
int __fastcall sub_18A83A(int a1, int a2, int a3, _WORD *a4)
{
  int v4; // r12
  int v5; // lr
  int v6; // r9
  int v7; // r2
  int v8; // r6
  int v9; // r4
  int v10; // r2
  int v11; // r8
  int v12; // lr
  int v13; // r2
  int v14; // r4
  int v15; // r6
  int v16; // r0
  __int16 v17; // r2
  int result; // r0

  v4 = a3 - 1;
  v5 = *(_DWORD *)(a2 + 208 + 4 * (a3 - 1));
  v6 = *(_DWORD *)(a2 + 208 + 4 * a3);
  v7 = *(_DWORD *)(v5 + 4);
  *a4 = *(_WORD *)(v6 + 8);
  *(_DWORD *)(v5 + 4) = v7 + 1;
  v8 = v5 + 2 * v7;
  v9 = *(_DWORD *)(v6 + 4);
  v10 = v5 + 4 * v7;
  v11 = *(_DWORD *)(v6 + 72);
  v12 = v9 - 1;
  *(_WORD *)(v8 + 8) = *(_WORD *)(v6 + 8);
  *(_DWORD *)(v10 + 72) = v11;
  if ( v9 >= 2 )
  {
    v13 = 0;
    do
    {
      v14 = v6 + 2 * v13;
      v15 = v6 + 4 * v13++;
      v16 = *(_DWORD *)(v15 + 76);
      *(_WORD *)(v14 + 8) = *(_WORD *)(v14 + 10);
      *(_DWORD *)(v15 + 72) = v16;
    }
    while ( v12 != v13 );
  }
  v17 = *(_WORD *)(v6 + 8);
  *(_DWORD *)(v6 + 4) = v12;
  *(_WORD *)(a2 + 2 * v4 + 8) = v17;
  result = *(unsigned __int16 *)(v6 + 8);
  a4[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x18a8b6
// SYMBOL: sub_18A8B6
int __fastcall sub_18A8B6(int a1, unsigned int a2, _DWORD *a3, int a4, int a5, unsigned __int8 *a6, int a7)
{
  int v7; // r4
  int v8; // r5
  int v9; // r11
  int v11; // r0
  unsigned __int8 *v12; // r1
  int v13; // r0
  unsigned __int8 *v14; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r10
  int v20; // r1
  _DWORD *v21; // r4
  int v22; // r0
  int v23; // r12
  int v24; // r0
  int v25; // lr
  _DWORD *v26; // r9
  int v27; // r0
  int v28; // r2
  int v29; // r3
  int i; // r0
  int j; // r5
  int v32; // r1
  bool v33; // cc
  _WORD *v34; // r1
  __int16 v35; // r0
  int v36; // r3
  int v37; // r6
  int k; // r5
  __int64 v39; // d17
  __int64 v40; // d18
  __int64 v41; // d19
  int v42; // r3
  int v43; // r0
  int v44; // r1
  unsigned int v45; // r5
  _DWORD *v46; // r0
  int *v47; // r1
  int v48; // r3
  int v49; // t1
  void *v50; // r0
  __int16 v51; // r2
  __int16 v52; // r3

  v7 = a5;
  v8 = a4;
  v9 = *((_DWORD *)a6 + 1);
  if ( v9 > 31 )
  {
    v16 = *(_DWORD *)(a1 + 8);
    if ( v16 )
    {
      v17 = *(_DWORD *)(a1 + 4);
      v18 = v16 - 1;
      *(_DWORD *)(a1 + 8) = v18;
      v19 = *(_DWORD *)(v17 + 4 * v18);
    }
    else
    {
      v21 = a3;
      v22 = operator new(0x154u);
      a3 = v21;
      v7 = a5;
      v19 = v22;
    }
    *(_BYTE *)v19 = *a6;
    v23 = *a6;
    if ( *a6 )
    {
      *(_DWORD *)(v19 + 200) = *((_DWORD *)a6 + 50);
      v24 = *((_DWORD *)a6 + 50);
      if ( v24 )
        *(_DWORD *)(v24 + 204) = v19;
      *((_DWORD *)a6 + 50) = v19;
      *(_DWORD *)(v19 + 204) = a6;
    }
    if ( v8 <= 15 )
    {
      for ( i = 0; i != 17; ++i )
        *(_WORD *)(v19 + 8 + 2 * i) = *(_WORD *)&a6[2 * i + 38];
      if ( v23 )
      {
        for ( j = 0; j != 17; ++j )
          *(_DWORD *)(v19 + 72 + 4 * j) = *(_DWORD *)&a6[4 * j + 132];
      }
      else
      {
        for ( k = 0; k != 17; ++k )
          *(_DWORD *)(v19 + 208 + 4 * k) = *(_DWORD *)&a6[4 * k + 272];
        *(_DWORD *)(a7 + 4) = 2;
        *(_WORD *)a7 = *(_WORD *)(v19 + 8);
        v39 = *(_QWORD *)(v19 + 18);
        v40 = *(_QWORD *)(v19 + 26);
        v41 = *(_QWORD *)(v19 + 34);
        *(_QWORD *)(v19 + 8) = *(_QWORD *)(v19 + 10);
        *(_QWORD *)(v19 + 16) = v39;
        *(_QWORD *)(v19 + 24) = v40;
        *(_QWORD *)(v19 + 32) = v41;
      }
      v42 = 0;
      *((_DWORD *)a6 + 1) = 15;
      v43 = 14;
      v44 = 7;
      while ( 1 )
      {
        v45 = *(unsigned __int16 *)&a6[2 * v44 + 8];
        if ( v45 == a2 )
          break;
        if ( v45 <= a2 )
          v42 = v44 + 1;
        else
          v43 = v44 - 1;
        v44 = v42 + (v43 - v42) / 2;
        if ( v43 < v42 )
          goto LABEL_57;
      }
      v42 = v44;
LABEL_57:
      sub_18A8B6(a1, a2, a3, v42, v7, a6, a7);
      v37 = 17;
      goto LABEL_73;
    }
    v25 = v8 - 16;
    v26 = a3;
    if ( v8 == 16 )
    {
      *(_WORD *)(v19 + 8) = a2;
      v28 = 0;
      v29 = 16;
    }
    else
    {
      v27 = 0;
      v28 = v8 - 16;
      do
      {
        *(_WORD *)(v19 + 8 + 2 * v27) = *(_WORD *)&a6[2 * v27 + 40];
        ++v27;
      }
      while ( v25 != v27 );
      v7 = a5;
      v29 = v8;
      *(_WORD *)(v19 + 2 * v25 + 8) = a2;
      if ( (unsigned int)v8 > 0x1F )
      {
LABEL_40:
        if ( v23 )
        {
          if ( v8 <= 16 )
          {
            v25 = 0;
            v8 = 16;
            *(_DWORD *)(v19 + 72) = *v26;
          }
          else
          {
            v36 = 0;
            do
            {
              *(_DWORD *)(v19 + 72 + 4 * v36) = *(_DWORD *)&a6[4 * v36 + 136];
              ++v36;
            }
            while ( v25 != v36 );
            *(_DWORD *)(v19 + 4 * v25 + 72) = *v26;
            if ( (unsigned int)v8 > 0x1F )
            {
              v37 = v8 - 15;
LABEL_72:
              *((_DWORD *)a6 + 1) = 16;
LABEL_73:
              *(_DWORD *)(v19 + 4) = v37;
              return v19;
            }
          }
          v37 = v25 - v8 + 33;
          do
          {
            *(_DWORD *)(v19 + 12 + 4 * v8) = *(_DWORD *)&a6[4 * v8 + 72];
            ++v8;
          }
          while ( v8 != 32 );
          goto LABEL_72;
        }
        if ( v8 < 17 )
        {
          v8 = 16;
          v25 = 0;
        }
        else
        {
          v46 = (_DWORD *)(v19 + 208);
          v47 = (int *)(a6 + 276);
          v48 = v8 - 16;
          do
          {
            v49 = *v47++;
            --v48;
            *v46++ = v49;
          }
          while ( v48 );
        }
        *(_DWORD *)(v19 + 4 * v25 + 208) = v7;
        if ( v8 >= v9 )
        {
          v50 = (void *)(v19 + 8);
          v52 = *(_WORD *)(v19 + 8);
          v37 = v25 + 1;
          *(_DWORD *)(a7 + 4) = 2;
          *(_WORD *)a7 = v52;
          if ( !v25 )
            goto LABEL_72;
        }
        else
        {
          do
          {
            *(_DWORD *)(v19 + 148 + 4 * v8) = *(_DWORD *)&a6[4 * v8 + 212];
            ++v8;
          }
          while ( v9 != v8 );
          v50 = (void *)(v19 + 8);
          v51 = *(_WORD *)(v19 + 8);
          v25 = v8 - 16;
          v37 = v8 - 15;
          *(_DWORD *)(a7 + 4) = 2;
          *(_WORD *)a7 = v51;
        }
        j_memmove(v50, (const void *)(v19 + 10), 2 * v25);
        goto LABEL_72;
      }
    }
    v34 = (_WORD *)(v19 + 2 * v28 + 10);
    do
    {
      v35 = *(_WORD *)&a6[2 * v29++ + 8];
      *v34++ = v35;
    }
    while ( v29 != 32 );
    goto LABEL_40;
  }
  if ( v9 > a4 )
  {
    v11 = *((_DWORD *)a6 + 1);
    do
    {
      v12 = &a6[2 * v11--];
      *((_WORD *)v12 + 4) = *((_WORD *)v12 + 3);
    }
    while ( v11 > a4 );
    if ( *a6 )
    {
      if ( v9 > a4 )
      {
        v13 = v9;
        do
        {
          v14 = &a6[4 * v13--];
          *((_DWORD *)v14 + 18) = *((_DWORD *)v14 + 17);
        }
        while ( v13 > a4 );
      }
      goto LABEL_13;
    }
    if ( v9 > a4 )
    {
      v32 = v9;
      do
      {
        v33 = v32 <= a4 + 1;
        *(_DWORD *)&a6[4 * v32 + 212] = *(_DWORD *)&a6[4 * v32 + 208];
        --v32;
      }
      while ( !v33 );
    }
LABEL_35:
    *(_DWORD *)&a6[4 * a4 + 212] = a5;
    *(_WORD *)&a6[2 * a4 + 8] = a2;
    goto LABEL_36;
  }
  if ( !*a6 )
    goto LABEL_35;
LABEL_13:
  v20 = *a3;
  *(_WORD *)&a6[2 * a4 + 8] = a2;
  *(_DWORD *)&a6[4 * a4 + 72] = v20;
LABEL_36:
  *((_DWORD *)a6 + 1) = v9 + 1;
  return 0;
}


// ======================================================================
// ADDR: 0x18abae
// SYMBOL: sub_18ABAE
int __fastcall sub_18ABAE(int a1, int a2, int a3, _WORD *a4)
{
  __int64 v4; // kr00_8
  int v5; // lr
  unsigned int v6; // r4
  int v7; // r5
  int v8; // r0
  bool v9; // cc
  int v10; // r6
  int v11; // r5
  int v12; // lr
  __int16 v13; // r4
  int v14; // r5
  int result; // r0

  v4 = *(_QWORD *)(a2 + 4 * a3 + 208);
  v5 = *(_DWORD *)(HIDWORD(v4) + 4);
  *a4 = *(_WORD *)(HIDWORD(v4) + 8);
  if ( v5 >= 1 )
  {
    v6 = v5;
    do
    {
      v7 = HIDWORD(v4) + 2 * v6;
      v8 = HIDWORD(v4) + 4 * v6;
      v9 = v6-- > 1;
      v10 = *(_DWORD *)(v8 + 68);
      *(_WORD *)(v7 + 8) = *(_WORD *)(v7 + 6);
      *(_DWORD *)(v8 + 72) = v10;
    }
    while ( v9 );
  }
  v11 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(HIDWORD(v4) + 4) = v5 + 1;
  --v11;
  v12 = *(_DWORD *)(v4 + 4);
  v13 = *(_WORD *)(v4 + 2 * v11 + 8);
  *(_WORD *)(HIDWORD(v4) + 8) = v13;
  *(_WORD *)(a2 + 2 * a3 + 8) = v13;
  v14 = *(_DWORD *)(v4 + 4 * v11 + 72);
  result = *(unsigned __int16 *)(HIDWORD(v4) + 8);
  *(_DWORD *)(v4 + 4) = v12 - 1;
  *(_DWORD *)(HIDWORD(v4) + 72) = v14;
  a4[1] = result;
  return result;
}


// ======================================================================
