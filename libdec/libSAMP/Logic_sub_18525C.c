// ADDR: 0x185f4a
// SYMBOL: sub_185F4A
int __fastcall sub_185F4A(__int64 *a1, __int64 *a2, _QWORD *a3, int a4)
{
  __int64 v4; // d19
  __int64 v5; // d16
  __int64 v6; // d17
  unsigned int v9; // r0
  unsigned int v10; // r2
  int v11; // r1
  unsigned int v12; // r3
  int v13; // r2
  int v14; // r1
  unsigned int v15; // r2
  int v16; // r1
  unsigned int v17; // r3
  int v18; // r9
  int i; // r1
  unsigned int v20; // r2
  int v21; // r3
  unsigned int v23; // r1
  int v24; // r2
  unsigned int v25; // r3
  int v26; // r0
  unsigned int v27; // r2
  unsigned int v28; // r3
  int v29; // r0
  unsigned int v30; // r1
  unsigned int v31; // r2
  bool v32; // zf
  int v33; // r1
  int j; // r0
  unsigned int v35; // r2
  unsigned int v36; // r4
  int v37; // r0
  unsigned int v38; // r1
  unsigned int v39; // r2
  int v40; // r1
  int k; // r0
  unsigned int v42; // r2
  int v44; // r4
  __int64 v45; // [sp+0h] [bp-28h] BYREF
  __int64 v46; // [sp+8h] [bp-20h]

  v4 = a2[1];
  v5 = *a1;
  v6 = a1[1];
  v45 = *a2;
  v46 = v4;
  v9 = HIDWORD(v4);
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = v6;
  *a3 = 0LL;
  a3[1] = 0LL;
  if ( v4 < 0 )
  {
LABEL_11:
    v15 = *(_DWORD *)(a4 + 12);
    if ( HIDWORD(v4) <= v15 )
    {
      v16 = 2;
      v17 = HIDWORD(v4);
      v18 = 1;
      while ( v17 >= v15 && v16 != -1 )
      {
        v15 = *(_DWORD *)(a4 + 4 * v16);
        v17 = *((_DWORD *)&v45 + v16--);
        if ( v17 > v15 )
          goto LABEL_16;
      }
      goto LABEL_47;
    }
LABEL_16:
    HIDWORD(v46) = HIDWORD(v4) >> 1;
    for ( i = 2; i != -1; --i )
    {
      v20 = *((_DWORD *)&v45 + i);
      *((_DWORD *)&v45 + i) = (v9 << 31) | (v20 >> 1);
      v9 = v20;
    }
LABEL_58:
    v36 = 0;
    return sub_184F38((int)a3, v36);
  }
  v10 = *(_DWORD *)(a4 + 12);
  if ( v10 <= HIDWORD(v4) )
  {
    v11 = 2;
    v12 = HIDWORD(v4);
    while ( v10 >= v12 && v11 != -1 )
    {
      v10 = *(_DWORD *)(a4 + 4 * v11);
      v12 = *((_DWORD *)&v45 + v11--);
      if ( v10 > v12 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v13 = 3;
  v14 = 0;
  while ( !*(_DWORD *)(a4 + 4 * v13) )
  {
    --v13;
    v14 += 32;
    if ( v13 == -1 )
      goto LABEL_26;
  }
  if ( v13 < 0 )
    goto LABEL_26;
  v21 = v13;
  while ( !*((_DWORD *)&v45 + v21) )
  {
    if ( v21-- <= 0 )
    {
      v21 = -1;
      break;
    }
  }
  if ( v21 == v13 )
  {
LABEL_26:
    v18 = 1;
    goto LABEL_27;
  }
  v44 = v14 + 32 * v21;
  sub_184F38((int)&v45, 96 - v44);
  v9 = HIDWORD(v46);
  v18 = 97 - v44;
LABEL_27:
  if ( (v9 & 0x80000000) == 0 )
  {
    v23 = *(_DWORD *)(a4 + 12);
    while ( v23 > v9 )
    {
LABEL_34:
      v26 = 0;
      v27 = 0;
      do
      {
        v28 = *((_DWORD *)&v45 + v26);
        *((_DWORD *)&v45 + v26++) = v27 | (2 * v28);
        v27 = v28 >> 31;
      }
      while ( v26 != 4 );
      v9 = HIDWORD(v46);
      ++v18;
      if ( SHIDWORD(v46) <= -1 )
        goto LABEL_37;
    }
    v24 = 2;
    v25 = v23;
    while ( v25 >= v9 && v24 != -1 )
    {
      v25 = *(_DWORD *)(a4 + 4 * v24);
      v9 = *((_DWORD *)&v45 + v24--);
      if ( v25 > v9 )
        goto LABEL_34;
    }
  }
LABEL_37:
  v29 = 12;
  do
  {
    v30 = *(_DWORD *)(a4 + v29);
    v31 = *(_DWORD *)((char *)&v45 + v29);
    if ( v31 > v30 )
    {
      v33 = 0;
      for ( j = 3; j != -1; --j )
      {
        v35 = *((_DWORD *)&v45 + j);
        *((_DWORD *)&v45 + j) = v33 | (v35 >> 1);
        v33 = v35 << 31;
      }
      --v18;
      goto LABEL_37;
    }
    if ( v31 < v30 )
      break;
    v32 = v29 == 0;
    v29 -= 4;
  }
  while ( !v32 );
  if ( !v18 )
    goto LABEL_58;
LABEL_47:
  v36 = 0;
  do
  {
    ++v36;
    --v18;
    v37 = 12;
    while ( 1 )
    {
      v38 = *(_DWORD *)(a4 + v37);
      v39 = *(_DWORD *)((char *)&v45 + v37);
      if ( v39 > v38 )
        break;
      if ( v39 >= v38 )
      {
        v32 = v37 == 0;
        v37 -= 4;
        if ( !v32 )
          continue;
      }
      sub_184F9C(a4, (int)&v45);
      sub_184F38((int)a3, v36);
      v36 = 0;
      *(_DWORD *)a3 |= 1u;
      break;
    }
    v40 = 0;
    for ( k = 3; k != -1; --k )
    {
      v42 = *((_DWORD *)&v45 + k);
      *((_DWORD *)&v45 + k) = v40 | (v42 >> 1);
      v40 = v42 << 31;
    }
  }
  while ( v18 );
  return sub_184F38((int)a3, v36);
}


// ======================================================================
// ADDR: 0x186116
// SYMBOL: sub_186116
int __fastcall sub_186116(__int64 *a1, int a2, __int64 *a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // d17
  __int64 v8; // d17
  __int64 v9; // d16
  __int64 v10; // d17
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  bool v14; // zf
  _QWORD v16[2]; // [sp+0h] [bp-70h] BYREF
  __int64 v17[4]; // [sp+10h] [bp-60h] BYREF
  __int64 v18; // [sp+30h] [bp-40h] BYREF
  __int64 v19; // [sp+38h] [bp-38h]
  __int64 v20; // [sp+40h] [bp-30h]
  __int64 v21; // [sp+48h] [bp-28h]

  v5 = a1[1];
  v18 = *a1;
  v19 = v5;
  v20 = 0LL;
  v21 = 0LL;
  sub_1861AA(&v18);
  v8 = a4[1];
  v17[0] = *a4;
  v17[1] = v8;
  memset(&v17[2], 0, 16);
  sub_184D9C(&v18, v17, (int)&v18);
  v9 = *a3;
  v10 = a3[1];
  v11 = 12;
  v16[0] = v18;
  v16[1] = v19;
  *a5 = v9;
  a5[1] = v10;
  while ( 1 )
  {
    v12 = *(_DWORD *)((char *)a3 + v11);
    v13 = *(_DWORD *)((char *)v16 + v11);
    if ( v12 > v13 )
      break;
    if ( v12 >= v13 )
    {
      v14 = v11 == 0;
      v11 -= 4;
      if ( !v14 )
        continue;
    }
    sub_184F9C((int)a5, (int)v16);
    return sub_18621A(a5, a4);
  }
  return sub_184F9C((int)a5, (int)v16);
}


// ======================================================================
