// ADDR: 0xe8b20
// SYMBOL: sub_E8B20
int __fastcall sub_E8B20(_QWORD *a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v6; // r1
  int v8; // r0
  int v9; // r5
  int v10; // r3
  int v11; // r0
  int v12; // r6
  _DWORD *v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r1
  int v16; // r6
  __int64 v17; // r0
  _DWORD *v18; // r2

  v6 = *(_DWORD **)a2;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = a3[1] - v8 + 8 * (*a3 - (_DWORD)v6);
  if ( v9 <= 0 )
  {
    LODWORD(v17) = *(_DWORD *)a4;
  }
  else
  {
    if ( v8 )
    {
      v10 = -1 << v8;
      v11 = 32 - v8;
      v12 = v11;
      if ( v9 < v11 )
        v12 = v9;
      v13 = *(_DWORD **)a4;
      v9 -= v12;
      *v13 = (**(_DWORD **)a4 & ~((0xFFFFFFFF >> (v11 - v12)) & v10)) + (*v6 & (0xFFFFFFFF >> (v11 - v12)) & v10);
      v14 = *(_DWORD *)(a4 + 4) + v12;
      *(_DWORD *)a4 = &v13[v14 >> 5];
      v15 = *(_DWORD **)a2;
      *(_DWORD *)(a4 + 4) = v14 & 0x1F;
      v6 = v15 + 1;
      *(_DWORD *)a2 = v6;
    }
    v16 = v9 / 32;
    j_memmove(*(void **)a4, v6, 4 * (v9 / 32));
    HIDWORD(v17) = v9 % 32;
    LODWORD(v17) = *(_DWORD *)a4 + 4 * (v9 / 32);
    *(_DWORD *)a4 = v17;
    if ( v9 % 32 >= 1 )
    {
      v18 = *(_DWORD **)a2;
      *(_DWORD *)a2 += 4 * v16;
      LODWORD(v17) = *(_DWORD *)a4;
      **(_DWORD **)a4 = (v18[v16] & (0xFFFFFFFF >> (32 - BYTE4(v17))))
                      + (**(_DWORD **)a4 & ~(0xFFFFFFFF >> (32 - BYTE4(v17))));
      *(_DWORD *)(a4 + 4) = HIDWORD(v17);
    }
  }
  HIDWORD(v17) = *(_DWORD *)(a4 + 4);
  *a1 = v17;
  return v17;
}


// ======================================================================
// ADDR: 0xe8bf4
// SYMBOL: sub_E8BF4
_QWORD *__fastcall sub_E8BF4(_QWORD *result, unsigned int **a2, _DWORD *a3, int *a4)
{
  unsigned int *v4; // r4
  unsigned int *v5; // r12
  int v6; // r11
  unsigned int v7; // r12
  int v8; // r5
  signed int v9; // r4
  unsigned int v10; // r6
  __int64 v11; // kr08_8
  int v12; // r10
  unsigned int v13; // r4
  unsigned int v14; // r5
  unsigned int v15; // r12
  unsigned int v16; // r5
  unsigned int v17; // r4
  char v18; // r2
  bool v19; // cf
  unsigned int v20; // r4
  unsigned int v21; // r4
  int v22; // r8
  unsigned int *v23; // r9
  unsigned int v24; // r5
  unsigned int v25; // r6
  int v26; // lr
  int v27; // r9
  int *v28; // r6
  int v29; // r8
  unsigned int v30; // r2
  bool v31; // cc
  int *v32; // r4
  int v33; // r10
  unsigned int v34; // r5
  int v35; // lr
  int v36; // r0
  int v37; // lr
  int v38; // r4
  int v39; // r2
  int v40; // r1
  __int64 v41; // kr10_8
  unsigned int v42; // r2
  unsigned int v43; // r5
  char v44; // r6
  int v45; // r4
  unsigned int v46; // r12
  unsigned int v47; // r2
  unsigned int *v48; // r5
  _QWORD *v49; // [sp+0h] [bp-24h]
  int v50; // [sp+4h] [bp-20h]

  v4 = a2[1];
  v5 = *a2;
  v6 = a3[1] - (_DWORD)v4 + 8 * (*a3 - (_DWORD)*a2);
  if ( v6 >= 1 )
  {
    v49 = result;
    if ( v4 )
    {
      v7 = *v5;
      v8 = -1 << (char)v4;
      v9 = 32 - (_DWORD)v4;
      v10 = v9;
      if ( v6 < v9 )
        v10 = a3[1] - (_DWORD)a2[1] + 8 * (*a3 - (_DWORD)*a2);
      v11 = *(_QWORD *)a4;
      v12 = v10;
      v6 -= v10;
      v13 = (0xFFFFFFFF >> (v9 - v10)) & v8;
      v14 = 32 - a4[1];
      if ( v14 < v10 )
        v12 = 32 - a4[1];
      v15 = v7 & v13;
      *(_DWORD *)v11 &= ~((-1 << SBYTE4(v11)) & (0xFFFFFFFF >> (v14 - v12)));
      v16 = (unsigned int)a2[1];
      v17 = a4[1];
      v18 = v17 - v16;
      v19 = v16 >= v17;
      v20 = v15 >> (v16 - v17);
      if ( !v19 )
        v20 = v15 << v18;
      *(_DWORD *)v11 = v20 | HIDWORD(v11);
      v21 = a4[1] + v12;
      v22 = v21 & 0x1F;
      v23 = (unsigned int *)(v11 + 4 * (v21 >> 5));
      v24 = v10 - v12;
      *a4 = (int)v23;
      a4[1] = v22;
      if ( (int)(v10 - v12) >= 1 )
      {
        v22 = v10 - v12;
        v25 = *v23 & ~(0xFFFFFFFF >> (32 - v24));
        *v23 = v25;
        *v23 = v25 | (v15 >> ((unsigned __int8)a2[1] + v12));
        a4[1] = v24;
      }
      v5 = *a2 + 1;
      *a2 = v5;
    }
    else
    {
      v22 = a4[1];
    }
    v26 = 32 - v22;
    if ( v6 < 32 )
    {
      v38 = v6;
    }
    else
    {
      v27 = -1 << v22;
      v50 = ~(-1 << v22);
      do
      {
        v28 = (int *)*a4;
        v29 = v26;
        v30 = *v5;
        v31 = (unsigned int)v6 > 0x3F;
        v32 = (int *)(*a4 + 4);
        v33 = *v32;
        *a4 = (int)v32;
        v5 = *a2 + 1;
        v34 = v30 >> v26;
        v35 = *v28;
        *a2 = v5;
        v36 = v50 & v35;
        *v28 = v50 & v35;
        v37 = a4[1];
        *v32 = v34 | v33 & v27;
        v38 = v6 - 32;
        v39 = v30 << v37;
        v26 = v29;
        v6 -= 32;
        *v28 = v36 | v39;
      }
      while ( v31 );
    }
    result = v49;
    if ( v38 >= 1 )
    {
      v40 = v38;
      v41 = *(_QWORD *)a4;
      if ( v26 < v38 )
        v40 = v26;
      v42 = *v5;
      v43 = *(_DWORD *)v41 & ~((-1 << SBYTE4(v41)) & (0xFFFFFFFF >> (v26 - v40)));
      v44 = 32 - v38;
      *(_DWORD *)v41 = v43;
      v45 = v38 - v40;
      v46 = v42 & (0xFFFFFFFF >> v44);
      *(_DWORD *)v41 = (v46 << a4[1]) | v43;
      v47 = a4[1] + v40;
      v48 = (unsigned int *)(v41 + 4 * (v47 >> 5));
      *a4 = (int)v48;
      a4[1] = v47 & 0x1F;
      if ( v45 >= 1 )
      {
        *v48 = *v48 & ~(0xFFFFFFFF >> (32 - v45)) | (v46 >> v40);
        a4[1] = v45;
      }
    }
  }
  *result = *(_QWORD *)a4;
  return result;
}


// ======================================================================
