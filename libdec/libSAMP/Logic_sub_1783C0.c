// ADDR: 0x178630
// SYMBOL: sub_178630
int __fastcall sub_178630(int a1, int a2, unsigned __int16 *a3)
{
  int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r3
  unsigned int v7; // t1
  int v8; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r10
  int result; // r0
  char *v14; // r9
  int *v15; // r1
  int i; // r3
  int v17; // r4
  int v18; // t1
  int v19; // r12
  int v20; // r1
  char *v21; // r3
  int v22; // r0
  int v23; // r11
  int v24; // r2
  char *v25; // r0
  const void *v26; // r1
  float *v27; // lr
  _DWORD *v28; // r12
  int v29; // r1
  int v30; // r0
  int v31; // r2
  int v32; // r3
  int v33; // r4
  int v34; // r6
  float *v35; // r12
  int v36; // r2
  int v37; // r3
  int v38; // r4
  int v39; // r6
  float v40; // s0
  __int16 v41; // r1
  int v42; // r3
  int v43; // r1
  int v44; // s0
  int v45; // r2
  int v46; // r1

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
    sub_165578(v9);
    *(_DWORD *)(a1 + 8) = 0;
  }
  v10 = *(_DWORD *)(a1 + 28);
  if ( v10 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_165578(v10);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_BYTE *)(a1 + 84) = 0;
  sub_1788DE(a1, v8, a3);
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
    v21 = *(char **)(a1 + 44);
  }
  else
  {
    v20 = *(unsigned __int16 *)(v11 + 64);
    v21 = *(char **)(a1 + 44);
    v14 = *(char **)(a1 + 40);
    if ( v20 != 0xFFFF )
      v21 = &v14[40 * v20];
  }
  if ( v21 )
  {
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
          v25 = (char *)sub_1654B0(40 * v23);
          v26 = *(const void **)(a1 + 40);
          v14 = v25;
          if ( v26 )
          {
            j_memcpy(v25, v26, 40 * *(_DWORD *)(a1 + 32));
            sub_165578(*(_DWORD *)(a1 + 40));
          }
          v19 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 36) = v23;
          *(_DWORD *)(a1 + 40) = v14;
        }
      }
      *(_DWORD *)(a1 + 32) = v12 + 1;
    }
    v27 = (float *)&v14[40 * v12];
    if ( v19 <= 32 )
    {
      v28 = *(_DWORD **)(a1 + 44);
    }
    else
    {
      v28 = *(_DWORD **)(a1 + 44);
      v29 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 28) + 64);
      if ( v29 != 0xFFFF )
        v28 = (_DWORD *)(*(_DWORD *)(a1 + 40) + 40 * v29);
    }
    v30 = *v28;
    v31 = v28[1];
    v32 = v28[2];
    v33 = v28[3];
    v34 = v28[4];
    v35 = (float *)(v28 + 5);
    *(_DWORD *)v27 = v30;
    *((_DWORD *)v27 + 1) = v31;
    *((_DWORD *)v27 + 2) = v32;
    *((_DWORD *)v27 + 3) = v33;
    *((_DWORD *)v27 + 4) = v34;
    v36 = *((_DWORD *)v35 + 1);
    v37 = *((_DWORD *)v35 + 2);
    v38 = *((_DWORD *)v35 + 3);
    v39 = *((_DWORD *)v35 + 4);
    v27[5] = *v35;
    *((_DWORD *)v27 + 6) = v36;
    *((_DWORD *)v27 + 7) = v37;
    *((_DWORD *)v27 + 8) = v38;
    *((_DWORD *)v27 + 9) = v39;
    result = *(_DWORD *)(a1 + 8);
    v40 = v27[1] * 4.0;
    v19 = *(_DWORD *)(a1 + 20);
    v11 = *(_DWORD *)(a1 + 28);
    v41 = *(_WORD *)(a1 + 32);
    *(_WORD *)v27 = 9;
    *(_WORD *)(v11 + 18) = v41 - 1;
    v27[1] = v40;
    *(float *)(result + 36) = v40;
  }
  v42 = *(unsigned __int16 *)(a1 + 66);
  if ( v19 <= v42 || (v43 = *(unsigned __int16 *)(v11 + 2 * v42), v43 == 0xFFFF) )
  {
    v44 = 0;
    *(_DWORD *)(a1 + 44) = 0;
  }
  else
  {
    v45 = *(_DWORD *)(a1 + 40);
    v46 = v45 + 40 * v43;
    *(_DWORD *)(a1 + 44) = v46;
    if ( v45 )
      v44 = *(_DWORD *)(v46 + 4);
    else
      v44 = 0;
  }
  *(_DWORD *)(a1 + 12) = v44;
  do
  {
    if ( *(float *)result < 0.0 )
      *(_DWORD *)result = *(_DWORD *)(a1 + 12);
    result += 4;
    --v8;
  }
  while ( v8 );
  return result;
}


// ======================================================================
