// ADDR: 0xa3138
// SYMBOL: sub_A3138
unsigned int __fastcall sub_A3138(int a1, int a2, unsigned __int16 *a3)
{
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r3
  unsigned int v7; // t1
  unsigned int v8; // r9
  int v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r5
  unsigned int result; // r0
  char *v14; // r8
  int *v15; // r1
  int i; // r3
  int v17; // r6
  int v18; // t1
  int v19; // r12
  int v20; // r6
  char *v21; // r3
  int v22; // r0
  int v23; // r11
  int v24; // r2
  char *v25; // r0
  const void *v26; // r1
  char *v27; // r3
  __int64 *v28; // r0
  int v29; // r1
  __int64 *v30; // r0
  __int64 v31; // d16
  __int64 v32; // d17
  __int64 v33; // d18
  __int64 v34; // d19
  __int64 v35; // d20
  float v36; // s0
  __int16 v37; // r1
  int v38; // r3
  int v39; // r1
  int v40; // s0
  int v41; // r2
  int v42; // r1
  unsigned int v44; // r1
  int v45; // s0
  unsigned int v46; // r3
  unsigned int v47; // r2
  unsigned __int64 v53; // d16
  unsigned int v54; // r1

  v4 = *(_DWORD *)(a1 + 32);
  if ( v4 )
  {
    a3 = *(unsigned __int16 **)(a1 + 40);
    v5 = 0;
    do
    {
      v7 = *a3;
      a3 += 20;
      v6 = v7;
      if ( v5 < v7 )
        v5 = v6;
      --v4;
    }
    while ( v4 );
    v8 = v5 + 1;
  }
  else
  {
    v8 = 1;
  }
  v9 = *(_DWORD *)(a1 + 8);
  if ( v9 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    sub_88614(v9);
    *(_DWORD *)(a1 + 8) = 0;
  }
  v10 = *(_DWORD *)(a1 + 28);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_88614(v10);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_BYTE *)(a1 + 84) = 0;
  sub_A36F6(a1, v8, a3);
  v12 = *(_DWORD *)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(a1 + 8);
  v14 = *(char **)(a1 + 40);
  if ( v12 >= 1 )
  {
    v15 = (int *)(v14 + 4);
    for ( i = 0; i != v12; ++i )
    {
      v17 = *((unsigned __int16 *)v15 - 2);
      v18 = *v15;
      v15 += 10;
      *(_WORD *)(v11 + 2 * v17) = i;
      *(_DWORD *)(result + 4 * v17) = v18;
    }
  }
  v19 = *(_DWORD *)(a1 + 20);
  if ( v19 <= 32 )
  {
    if ( !*(_DWORD *)(a1 + 44) )
      goto LABEL_40;
    goto LABEL_21;
  }
  v20 = *(unsigned __int16 *)(v11 + 64);
  v21 = *(char **)(a1 + 44);
  v14 = *(char **)(a1 + 40);
  if ( v20 != 0xFFFF )
    v21 = &v14[40 * v20];
  if ( v21 )
  {
LABEL_21:
    if ( *(_WORD *)&v14[40 * v12 - 40] == 9 )
    {
      --v12;
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 36);
      v23 = v12 + 1;
      if ( v22 <= v12 )
      {
        if ( v22 )
          v24 = v22 + v22 / 2;
        else
          v24 = 8;
        if ( v24 > v23 )
          v23 = v24;
        if ( v22 < v23 )
        {
          v25 = (char *)sub_885E4(40 * v23);
          v26 = *(const void **)(a1 + 40);
          v14 = v25;
          if ( v26 )
          {
            j_memcpy(v25, v26, 40 * *(_DWORD *)(a1 + 32));
            sub_88614(*(_DWORD *)(a1 + 40));
          }
          v19 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 36) = v23;
          *(_DWORD *)(a1 + 40) = v14;
        }
      }
      *(_DWORD *)(a1 + 32) = v12 + 1;
    }
    v27 = &v14[40 * v12];
    if ( v19 <= 32 )
    {
      v28 = *(__int64 **)(a1 + 44);
    }
    else
    {
      v28 = *(__int64 **)(a1 + 44);
      v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 28) + 64);
      if ( v29 != 0xFFFF )
        v28 = (__int64 *)(*(_DWORD *)(a1 + 40) + 40 * v29);
    }
    v31 = *v28;
    v32 = v28[1];
    v30 = v28 + 2;
    v33 = *v30;
    v34 = v30[1];
    v35 = v30[2];
    *(_QWORD *)v27 = v31;
    *((_QWORD *)v27 + 1) = v32;
    *((_QWORD *)v27 + 2) = v33;
    *((_QWORD *)v27 + 3) = v34;
    *((_QWORD *)v27 + 4) = v35;
    result = *(_DWORD *)(a1 + 8);
    v36 = *((float *)v27 + 1) * 4.0;
    v19 = *(_DWORD *)(a1 + 20);
    v11 = *(_DWORD *)(a1 + 28);
    v37 = *(_WORD *)(a1 + 32);
    *(_WORD *)v27 = 9;
    *(_WORD *)(v11 + 18) = v37 - 1;
    *((float *)v27 + 1) = v36;
    *(float *)(result + 36) = v36;
  }
LABEL_40:
  v38 = *(unsigned __int16 *)(a1 + 66);
  if ( v19 <= v38 || (v39 = *(unsigned __int16 *)(v11 + 2 * v38), v39 == 0xFFFF) )
  {
    v40 = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  else
  {
    v41 = *(_DWORD *)(a1 + 40);
    v42 = v41 + 40 * v39;
    *(_DWORD *)(a1 + 44) = v42;
    if ( v41 )
      v40 = *(_DWORD *)(v42 + 4);
    else
      v40 = 0;
  }
  *(_DWORD *)(a1 + 12) = v40;
  if ( v8 < 4 )
    goto LABEL_63;
  _CF = result >= a1 + 16;
  if ( result < a1 + 16 )
    _CF = a1 + 12 >= result + 4 * v8;
  if ( !_CF )
  {
LABEL_63:
    v44 = 0;
LABEL_64:
    result += 4 * v44;
    v54 = v8 - v44;
    do
    {
      if ( *(float *)result < 0.0 )
        *(_DWORD *)result = *(_DWORD *)(a1 + 12);
      result += 4;
      --v54;
    }
    while ( v54 );
    return result;
  }
  v44 = v8 & 0xFFFFFFFC;
  v45 = *(_DWORD *)(a1 + 12);
  v46 = result;
  v47 = v8 & 0xFFFFFFFC;
  do
  {
    _Q8 = *(_OWORD *)v46;
    __asm { VCLT.F32        Q8, Q8, #0.0 }
    v53 = vmovn_s32(_Q8).n64_u64[0];
    if ( (unsigned __int16)v53 << 31 )
      *(_DWORD *)v46 = v45;
    if ( WORD1(v53) << 31 )
      *(_DWORD *)(v46 + 4) = v45;
    if ( WORD2(v53) << 31 )
      *(_DWORD *)(v46 + 8) = v45;
    if ( HIWORD(v53) << 31 )
      *(_DWORD *)(v46 + 12) = v45;
    v47 -= 4;
    v46 += 16;
  }
  while ( v47 );
  if ( v8 != v44 )
    goto LABEL_64;
  return result;
}


// ======================================================================
