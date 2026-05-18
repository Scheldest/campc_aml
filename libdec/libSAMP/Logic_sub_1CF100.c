// ADDR: 0x1d6750
// SYMBOL: sub_1D6750
int __fastcall sub_1D6750(_WORD *a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v3; // r7
  int *v4; // r3
  int v5; // lr
  _WORD *v6; // r8
  unsigned __int8 *v7; // r6
  int v8; // r5
  int v9; // r12
  int v10; // r4
  int v11; // r5
  _WORD *v12; // r6
  int v13; // r9
  int *v14; // r5
  int v15; // lr
  unsigned __int8 *v16; // r4
  int v17; // r12
  int v18; // r12
  int v19; // r12
  int v20; // r0
  int v21; // r1
  _WORD *v22; // r12
  _DWORD *v23; // lr
  int v24; // r2
  int *v25; // r1
  int *v26; // r9
  int v27; // r5
  int v28; // r4
  int v29; // r6
  int v30; // r4
  int v31; // r0
  int v33; // [sp+4h] [bp-BCh]
  int v34; // [sp+8h] [bp-B8h]
  int v35; // [sp+Ch] [bp-B4h]
  _WORD *v36; // [sp+10h] [bp-B0h]
  unsigned __int8 *v37; // [sp+14h] [bp-ACh]
  int v38; // [sp+1Ch] [bp-A4h]
  int v39; // [sp+20h] [bp-A0h]
  int v40; // [sp+24h] [bp-9Ch]
  int v41; // [sp+28h] [bp-98h]
  _WORD *v42; // [sp+2Ch] [bp-94h]
  _BYTE v43[36]; // [sp+34h] [bp-8Ch] BYREF
  _BYTE v44[36]; // [sp+58h] [bp-68h] BYREF
  _BYTE v45[36]; // [sp+7Ch] [bp-44h] BYREF
  int v46; // [sp+A0h] [bp-20h]

  v33 = 4 * a3;
  if ( a3 >= 1 )
  {
    v3 = v45;
    v4 = (int *)v44;
    v5 = a3;
    v6 = a1;
    v7 = a2;
    do
    {
      v8 = *v7;
      *v3 = v8;
      v9 = (__int16)(v8 | (v7[1] << 8));
      *v3++ = v9;
      v10 = v7[2];
      *v4 = v10;
      LOWORD(v8) = v7[3];
      v7 += 4;
      v11 = (__int16)(v10 | ((_WORD)v8 << 8));
      if ( v11 <= 0 )
        v11 = 0;
      if ( v11 >= 88 )
        v11 = 88;
      --v5;
      *v4++ = v11;
      *v6++ = v9;
    }
    while ( v5 );
    a2 += v33;
  }
  v12 = &a1[a3];
  v38 = 2 * a3;
  v34 = 8 * a3;
  v39 = 9;
  v13 = 1;
  v40 = a3;
  do
  {
    if ( a3 >= 1 )
    {
      v14 = (int *)v43;
      v15 = a3;
      v16 = a2;
      do
      {
        v17 = *v16;
        --v15;
        *v14 = v17;
        v18 = v17 | (v16[1] << 8);
        *v14 = v18;
        v19 = v18 | (v16[2] << 16);
        *v14 = v19;
        v20 = v16[3];
        v16 += 4;
        *v14++ = v19 | (v20 << 24);
      }
      while ( v15 );
      a2 += v33;
    }
    v37 = a2;
    v21 = v13;
    v36 = v12;
    v42 = v12;
    v35 = v13;
    do
    {
      v41 = v21;
      if ( a3 >= 1 )
      {
        v22 = v42;
        v23 = v43;
        v24 = v40;
        v25 = (int *)v44;
        v26 = (int *)v45;
        do
        {
          v27 = *v25;
          v28 = *v23 & 0xF;
          *v23++ >>= 4;
          v29 = dword_C4AF0[v27] * dword_C4AB0[v28];
          v30 = v27 + dword_C4C54[v28];
          v31 = *v26 + v29 / 8;
          if ( v31 <= -32768 )
            v31 = -32768;
          if ( v31 >= 0x7FFF )
            v31 = 0x7FFF;
          if ( v30 <= 0 )
            v30 = 0;
          if ( v30 >= 88 )
            v30 = 88;
          *v26++ = v31;
          *v25++ = v30;
          --v24;
          *v22++ = v31;
        }
        while ( v24 );
      }
      a3 = v40;
      v42 = (_WORD *)((char *)v42 + v38);
      v21 = v41 + 1;
    }
    while ( v41 + 1 != v39 );
    v12 = &v36[v34];
    v39 += 8;
    v13 = v35 + 8;
    a2 = v37;
  }
  while ( v35 <= 56 );
  return _stack_chk_guard - v46;
}


// ======================================================================
// ADDR: 0x1d69d0
// SYMBOL: sub_1D69D0
int __fastcall sub_1D69D0(_BYTE *a1, __int16 *a2, int *a3, int *a4, int a5)
{
  int v5; // r5
  int *v6; // r4
  _BYTE *v7; // r6
  int *v8; // r9
  int *v9; // r7
  __int16 *v10; // r2
  _BYTE *v11; // r8
  int v12; // r0
  int v13; // r10
  int v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r0
  unsigned int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // t1
  int v24; // t1
  __int16 *v25; // r9
  int v26; // r7
  int v27; // r10
  _BYTE *v28; // r8
  int v29; // r7
  int v30; // r5
  int v31; // r6
  unsigned int v32; // r4
  int v33; // r0
  int v34; // r1
  int v35; // r0
  int v36; // r1
  int v37; // r6
  int v38; // r1
  int v39; // r1
  bool v40; // zf
  int result; // r0
  int v42; // [sp+4h] [bp-44h]
  __int16 *v43; // [sp+8h] [bp-40h]
  int v44; // [sp+8h] [bp-40h]
  __int16 *v45; // [sp+Ch] [bp-3Ch]
  __int16 *v46; // [sp+10h] [bp-38h]
  int v47; // [sp+18h] [bp-30h]
  __int16 *v48; // [sp+1Ch] [bp-2Ch]
  int v49; // [sp+20h] [bp-28h]
  int v50; // [sp+20h] [bp-28h]
  int *v51; // [sp+24h] [bp-24h]
  int *v52; // [sp+28h] [bp-20h]

  v5 = a5;
  v6 = a4;
  v7 = a1;
  v52 = a3;
  if ( a5 > 0 )
  {
    v8 = a3;
    v9 = a4;
    v10 = a2;
    v11 = a1;
    v43 = a2;
    v12 = a5;
    do
    {
      v49 = v12;
      v13 = dword_C4AF0[*v9];
      v48 = v10 + 1;
      v14 = *v10 - *v8;
      v15 = 2 * v13;
      v47 = *v8;
      v16 = v14;
      if ( v14 < 0 )
        v16 = *v8 - *v10;
      if ( v15 > v16 )
        v15 = v16;
      v17 = sub_220A40(8 * v15, v13);
      v18 = ((unsigned int)v14 >> 28) & 8 | ((v17 - 1 + ((unsigned int)(v17 - 1) >> 31)) >> 1);
      v19 = dword_C4AB0[v18];
      v20 = dword_C4C54[v18];
      v21 = v47 + v19 * v13 / 8;
      if ( v21 <= -32768 )
        v21 = -32768;
      if ( v21 >= 0x7FFF )
        v21 = 0x7FFF;
      *v8 = v21;
      v22 = *v9 + v20;
      if ( v22 <= 0 )
        v22 = 0;
      if ( v22 >= 88 )
        v22 = 88;
      *v9 = v22;
      *v11 = *v8;
      v23 = *v8++;
      v11[1] = BYTE1(v23);
      v11[2] = *v9;
      v24 = *v9++;
      v11[3] = BYTE1(v24);
      v11 += 4;
      v10 = v48;
      v12 = v49 - 1;
    }
    while ( v49 != 1 );
    a3 = v52;
    v5 = a5;
    v7 += 4 * a5;
    a2 = v43;
  }
  v25 = &a2[v5];
  v50 = 2 * v5;
  v42 = 8 * v5;
  v26 = 1;
  v51 = v6;
  do
  {
    v45 = v25;
    v44 = v26;
    if ( v5 >= 1 )
    {
      v27 = 0;
      v28 = v7;
      do
      {
        v29 = 0;
        v46 = v25;
        do
        {
          v30 = a3[v27];
          v31 = dword_C4AF0[v6[v27]];
          v33 = 2 * v31;
          v34 = *v25 - v30;
          if ( v34 < 0 )
            v34 = v30 - *v25;
          if ( v33 > v34 )
            v33 = v34;
          v32 = *v25 - v30;
          v35 = (v32 >> 28) & 8 | ((sub_220A40(8 * v33, v31) - 1) / 2);
          v36 = dword_C4AB0[v35] * v31;
          v37 = dword_C4C54[v35];
          v38 = v30 + v36 / 8;
          if ( v38 <= -32768 )
            v38 = -32768;
          if ( v38 >= 0x7FFF )
            v38 = 0x7FFF;
          a3 = v52;
          v52[v27] = v38;
          v6 = v51;
          v39 = v51[v27] + v37;
          v7 = v28;
          if ( v39 <= 0 )
            v39 = 0;
          if ( v39 >= 88 )
            v39 = 88;
          v40 = (v29 & 1) == 0;
          v51[v27] = v39;
          ++v29;
          if ( !v40 )
          {
            v7 = v28 + 1;
            LOBYTE(v35) = *v28 | (16 * v35);
          }
          *v28 = v35;
          v28 = v7;
          v25 = (__int16 *)((char *)v25 + v50);
        }
        while ( v29 != 8 );
        ++v27;
        v28 = v7;
        v25 = v46 + 1;
        v5 = a5;
      }
      while ( v27 != a5 );
    }
    v25 = &v45[v42];
    result = v44 + 8;
    v26 = v44 + 8;
  }
  while ( v44 < 57 );
  return result;
}


// ======================================================================
