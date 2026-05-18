// ADDR: 0x184ad4
// SYMBOL: sub_184AD4
unsigned int __fastcall sub_184AD4(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v3; // d19
  __int64 v5; // d16
  __int64 v6; // d17
  unsigned int result; // r0
  unsigned int v8; // r2
  int v9; // r1
  unsigned int v10; // r3
  int v11; // r2
  int v12; // r1
  unsigned int v13; // r2
  int v14; // r1
  unsigned int v15; // r3
  int v16; // r6
  int i; // r1
  unsigned int v18; // r2
  int v19; // r3
  unsigned int v21; // r1
  int v22; // r2
  unsigned int v23; // r3
  int v24; // r0
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r1
  unsigned int v28; // r2
  bool v29; // zf
  int v30; // r1
  int j; // r0
  unsigned int v32; // r2
  int v33; // r6
  int v34; // r0
  unsigned int v35; // r1
  unsigned int v36; // r2
  int v37; // r1
  unsigned int v38; // r2
  __int64 v39; // [sp+0h] [bp-20h] BYREF
  __int64 v40; // [sp+8h] [bp-18h]

  v3 = a2[1];
  v5 = *a1;
  v6 = a1[1];
  v39 = *a2;
  v40 = v3;
  result = HIDWORD(v3);
  *(_QWORD *)a3 = v5;
  *(_QWORD *)(a3 + 8) = v6;
  if ( v3 < 0 )
  {
LABEL_11:
    v13 = *(_DWORD *)(a3 + 12);
    if ( HIDWORD(v3) <= v13 )
    {
      v14 = 2;
      v15 = HIDWORD(v3);
      v16 = 1;
      do
      {
        if ( v15 < v13 || v14 == -1 )
          goto LABEL_48;
        v13 = *(_DWORD *)(a3 + 4 * v14);
        v15 = *((_DWORD *)&v39 + v14--);
      }
      while ( v15 <= v13 );
    }
    HIDWORD(v40) = HIDWORD(v3) >> 1;
    for ( i = 2; i != -1; --i )
    {
      v18 = *((_DWORD *)&v39 + i);
      *((_DWORD *)&v39 + i) = (result << 31) | (v18 >> 1);
      result = v18;
    }
    return result;
  }
  v8 = *(_DWORD *)(a3 + 12);
  if ( v8 <= HIDWORD(v3) )
  {
    v9 = 2;
    v10 = HIDWORD(v3);
    while ( v8 >= v10 && v9 != -1 )
    {
      v8 = *(_DWORD *)(a3 + 4 * v9);
      v10 = *((_DWORD *)&v39 + v9--);
      if ( v8 > v10 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v11 = 3;
  v12 = 0;
  while ( !*(_DWORD *)(a3 + 4 * v11) )
  {
    --v11;
    v12 += 32;
    if ( v11 == -1 )
      goto LABEL_26;
  }
  if ( v11 < 0 )
    goto LABEL_26;
  v19 = v11;
  while ( !*((_DWORD *)&v39 + v19) )
  {
    if ( v19-- <= 0 )
    {
      v19 = -1;
      break;
    }
  }
  if ( v19 == v11 )
  {
LABEL_26:
    v16 = 1;
    goto LABEL_27;
  }
  v33 = v12 + 32 * v19;
  sub_184F38((int)&v39);
  result = HIDWORD(v40);
  v16 = 97 - v33;
LABEL_27:
  if ( (result & 0x80000000) == 0 )
  {
    v21 = *(_DWORD *)(a3 + 12);
    while ( v21 > result )
    {
LABEL_34:
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = *((_DWORD *)&v39 + v24);
        *((_DWORD *)&v39 + v24++) = v25 | (2 * v26);
        v25 = v26 >> 31;
      }
      while ( v24 != 4 );
      result = HIDWORD(v40);
      ++v16;
      if ( SHIDWORD(v40) <= -1 )
        goto LABEL_37;
    }
    v22 = 2;
    v23 = v21;
    while ( v23 >= result && v22 != -1 )
    {
      v23 = *(_DWORD *)(a3 + 4 * v22);
      result = *((_DWORD *)&v39 + v22--);
      if ( v23 > result )
        goto LABEL_34;
    }
  }
LABEL_37:
  result = 12;
  do
  {
    v27 = *(_DWORD *)(a3 + result);
    v28 = *(_DWORD *)((char *)&v39 + result);
    if ( v28 > v27 )
    {
      v30 = 0;
      for ( j = 3; j != -1; --j )
      {
        v32 = *((_DWORD *)&v39 + j);
        *((_DWORD *)&v39 + j) = v30 | (v32 >> 1);
        v30 = v32 << 31;
      }
      --v16;
      goto LABEL_37;
    }
    if ( v28 < v27 )
      break;
    v29 = result == 0;
    result -= 4;
  }
  while ( !v29 );
  while ( v16 )
  {
LABEL_48:
    --v16;
    v34 = 12;
    while ( 1 )
    {
      v35 = *(_DWORD *)(a3 + v34);
      v36 = *(_DWORD *)((char *)&v39 + v34);
      if ( v36 > v35 )
        break;
      if ( v36 >= v35 )
      {
        v29 = v34 == 0;
        v34 -= 4;
        if ( !v29 )
          continue;
      }
      sub_184F9C(a3, &v39);
      break;
    }
    v37 = 0;
    for ( result = 3; result != -1; --result )
    {
      v38 = *((_DWORD *)&v39 + result);
      *((_DWORD *)&v39 + result) = v37 | (v38 >> 1);
      v37 = v38 << 31;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x184c5e
// SYMBOL: sub_184C5E
_QWORD *__fastcall sub_184C5E(__int64 *a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 v4; // d18
  __int64 v5; // d19
  __int64 v6; // d22
  __int64 v7; // d23
  __int64 v8; // d16
  __int64 v9; // d17
  int v10; // r10
  int v11; // r5
  int v12; // r8
  unsigned int i; // r9
  _QWORD *result; // r0
  __int64 v15; // d17
  __int128 v17; // [sp+8h] [bp-A0h] BYREF
  __int64 v18; // [sp+18h] [bp-90h]
  __int64 v19; // [sp+20h] [bp-88h]
  _QWORD v20[4]; // [sp+28h] [bp-80h] BYREF
  _QWORD v21[4]; // [sp+48h] [bp-60h] BYREF
  _QWORD v22[8]; // [sp+68h] [bp-40h] BYREF

  v4 = *a2;
  v5 = a2[1];
  v6 = *a1;
  v7 = a1[1];
  *(_QWORD *)((char *)&v17 + 4) = 0LL;
  HIDWORD(v17) = 0;
  v18 = 0LL;
  v19 = 0LL;
  v22[0] = v6;
  v22[1] = v7;
  memset(&v22[2], 0, 16);
  v21[0] = v4;
  v21[1] = v5;
  v8 = *a3;
  v9 = a3[1];
  memset(&v21[2], 0, 16);
  v20[0] = v8;
  v20[1] = v9;
  memset(&v20[2], 0, 16);
  LODWORD(v17) = 1;
  sub_184D9C(v22, v20, v22);
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = 32;
    for ( i = *((_DWORD *)v21 + v10); i; i >>= 1 )
    {
      if ( i << 31 )
      {
        for ( ; v11; --v11 )
        {
          sub_184FE4(v22);
          sub_184D9C(v22, v20, v22);
        }
        sub_185060(&v17, v22, &v17);
        sub_184D9C(&v17, v20, &v17);
        v11 = 0;
      }
      --v12;
      ++v11;
    }
    ++v10;
    v11 += v12;
  }
  while ( v10 != 4 );
  result = a4;
  v15 = *((_QWORD *)&v17 + 1);
  *a4 = v17;
  a4[1] = v15;
  return result;
}


// ======================================================================
// ADDR: 0x184d9c
// SYMBOL: sub_184D9C
unsigned int __fastcall sub_184D9C(__int64 *a1, __int64 *a2, int a3)
{
  __int64 *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  __int64 *v7; // r0
  __int64 v8; // d18
  __int64 v9; // d19
  __int64 v10; // d20
  __int64 v11; // d21
  __int64 v12; // d22
  __int64 v13; // d23
  unsigned int result; // r0
  unsigned int v15; // r2
  int v16; // r1
  unsigned int v17; // r3
  int v18; // r2
  int v19; // r1
  unsigned int v20; // r2
  int v21; // r1
  unsigned int v22; // r3
  int v23; // r6
  int i; // r1
  unsigned int v25; // r2
  int v26; // r3
  unsigned int v28; // r1
  int v29; // r2
  unsigned int v30; // r3
  int v31; // r0
  unsigned int v32; // r2
  unsigned int v33; // r3
  unsigned int v34; // r1
  unsigned int v35; // r2
  bool v36; // zf
  int v37; // r1
  int j; // r0
  unsigned int v39; // r2
  int v40; // r6
  int v41; // r0
  unsigned int v42; // r1
  unsigned int v43; // r2
  int v44; // r1
  unsigned int v45; // r2
  _QWORD v46[3]; // [sp+0h] [bp-30h] BYREF
  __int64 v47; // [sp+18h] [bp-18h]

  v4 = *a2;
  v5 = a2[1];
  v3 = a2 + 2;
  v8 = *a1;
  v9 = a1[1];
  v7 = a1 + 2;
  v10 = *v3;
  v11 = v3[1];
  v12 = *v7;
  v13 = v7[1];
  v46[0] = v4;
  v46[1] = v5;
  v46[2] = v10;
  v47 = v11;
  result = HIDWORD(v11);
  *(_QWORD *)a3 = v8;
  *(_QWORD *)(a3 + 8) = v9;
  *(_QWORD *)(a3 + 16) = v12;
  *(_QWORD *)(a3 + 24) = v13;
  if ( v11 < 0 )
  {
LABEL_11:
    v20 = *(_DWORD *)(a3 + 28);
    if ( HIDWORD(v11) <= v20 )
    {
      v21 = 6;
      v22 = HIDWORD(v11);
      v23 = 1;
      do
      {
        if ( v22 < v20 || v21 == -1 )
          goto LABEL_48;
        v20 = *(_DWORD *)(a3 + 4 * v21);
        v22 = *((_DWORD *)v46 + v21--);
      }
      while ( v22 <= v20 );
    }
    HIDWORD(v47) = HIDWORD(v11) >> 1;
    for ( i = 6; i != -1; --i )
    {
      v25 = *((_DWORD *)v46 + i);
      *((_DWORD *)v46 + i) = (result << 31) | (v25 >> 1);
      result = v25;
    }
    return result;
  }
  v15 = *(_DWORD *)(a3 + 28);
  if ( v15 <= HIDWORD(v11) )
  {
    v16 = 6;
    v17 = HIDWORD(v11);
    while ( v15 >= v17 && v16 != -1 )
    {
      v15 = *(_DWORD *)(a3 + 4 * v16);
      v17 = *((_DWORD *)v46 + v16--);
      if ( v15 > v17 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v18 = 7;
  v19 = 0;
  while ( !*(_DWORD *)(a3 + 4 * v18) )
  {
    --v18;
    v19 += 32;
    if ( v18 == -1 )
      goto LABEL_26;
  }
  if ( v18 < 0 )
    goto LABEL_26;
  v26 = v18;
  while ( !*((_DWORD *)v46 + v26) )
  {
    if ( v26-- <= 0 )
    {
      v26 = -1;
      break;
    }
  }
  if ( v26 == v18 )
  {
LABEL_26:
    v23 = 1;
    goto LABEL_27;
  }
  v40 = v19 + 32 * v26;
  sub_1850D2((int)v46);
  result = HIDWORD(v47);
  v23 = 225 - v40;
LABEL_27:
  if ( (result & 0x80000000) == 0 )
  {
    v28 = *(_DWORD *)(a3 + 28);
    while ( v28 > result )
    {
LABEL_34:
      v31 = 0;
      v32 = 0;
      do
      {
        v33 = *((_DWORD *)v46 + v31);
        *((_DWORD *)v46 + v31++) = v32 | (2 * v33);
        v32 = v33 >> 31;
      }
      while ( v31 != 8 );
      result = HIDWORD(v47);
      ++v23;
      if ( SHIDWORD(v47) <= -1 )
        goto LABEL_37;
    }
    v29 = 6;
    v30 = v28;
    while ( v30 >= result && v29 != -1 )
    {
      v30 = *(_DWORD *)(a3 + 4 * v29);
      result = *((_DWORD *)v46 + v29--);
      if ( v30 > result )
        goto LABEL_34;
    }
  }
LABEL_37:
  result = 28;
  do
  {
    v34 = *(_DWORD *)(a3 + result);
    v35 = *(_DWORD *)((char *)v46 + result);
    if ( v35 > v34 )
    {
      v37 = 0;
      for ( j = 7; j != -1; --j )
      {
        v39 = *((_DWORD *)v46 + j);
        *((_DWORD *)v46 + j) = v37 | (v39 >> 1);
        v37 = v39 << 31;
      }
      --v23;
      goto LABEL_37;
    }
    if ( v35 < v34 )
      break;
    v36 = result == 0;
    result -= 4;
  }
  while ( !v36 );
  while ( v23 )
  {
LABEL_48:
    --v23;
    v41 = 28;
    while ( 1 )
    {
      v42 = *(_DWORD *)(a3 + v41);
      v43 = *(_DWORD *)((char *)v46 + v41);
      if ( v43 > v42 )
        break;
      if ( v43 >= v42 )
      {
        v36 = v41 == 0;
        v41 -= 4;
        if ( !v36 )
          continue;
      }
      sub_185174(a3, v46);
      break;
    }
    v44 = 0;
    for ( result = 7; result != -1; --result )
    {
      v45 = *((_DWORD *)v46 + result);
      *((_DWORD *)v46 + result) = v44 | (v45 >> 1);
      v44 = v45 << 31;
    }
  }
  return result;
}


// ======================================================================
