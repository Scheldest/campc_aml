// ADDR: 0x185988
// SYMBOL: sub_185988
int __fastcall sub_185988(__int64 *a1, __int64 *a2, _QWORD *a3, int a4)
{
  __int64 *v4; // r0
  __int64 v5; // d18
  __int64 v6; // d19
  __int64 *v8; // r1
  __int64 v9; // d16
  __int64 v10; // d17
  __int64 v12; // d22
  __int64 v13; // d23
  __int64 v14; // d20
  __int64 v15; // d21
  unsigned int v16; // r0
  unsigned int v17; // r2
  int v18; // r1
  unsigned int v19; // r3
  int v20; // r2
  int v21; // r1
  unsigned int v22; // r2
  int v23; // r1
  unsigned int v24; // r3
  int v25; // r9
  int i; // r1
  unsigned int v27; // r2
  int v28; // r3
  unsigned int v30; // r1
  int v31; // r2
  unsigned int v32; // r3
  int v33; // r0
  unsigned int v34; // r2
  unsigned int v35; // r3
  int v36; // r0
  unsigned int v37; // r1
  unsigned int v38; // r2
  bool v39; // zf
  int v40; // r1
  int j; // r0
  unsigned int v42; // r2
  unsigned int v43; // r4
  int v44; // r0
  unsigned int v45; // r1
  unsigned int v46; // r2
  int v47; // r1
  int k; // r0
  unsigned int v49; // r2
  int v51; // r4
  _QWORD v52[3]; // [sp+0h] [bp-38h] BYREF
  __int64 v53; // [sp+18h] [bp-20h]

  v5 = *a1;
  v6 = a1[1];
  v4 = a1 + 2;
  v9 = *a2;
  v10 = a2[1];
  v8 = a2 + 2;
  v12 = *v4;
  v13 = v4[1];
  v14 = *v8;
  v15 = v8[1];
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = v6;
  *(_QWORD *)(a4 + 16) = v12;
  *(_QWORD *)(a4 + 24) = v13;
  v52[0] = v9;
  v52[1] = v10;
  v52[2] = v14;
  v53 = v15;
  v16 = HIDWORD(v15);
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  a3[3] = 0LL;
  if ( v15 < 0 )
  {
LABEL_11:
    v22 = *(_DWORD *)(a4 + 28);
    if ( HIDWORD(v15) <= v22 )
    {
      v23 = 6;
      v24 = HIDWORD(v15);
      v25 = 1;
      while ( v24 >= v22 && v23 != -1 )
      {
        v22 = *(_DWORD *)(a4 + 4 * v23);
        v24 = *((_DWORD *)v52 + v23--);
        if ( v24 > v22 )
          goto LABEL_16;
      }
      goto LABEL_47;
    }
LABEL_16:
    HIDWORD(v53) = HIDWORD(v15) >> 1;
    for ( i = 6; i != -1; --i )
    {
      v27 = *((_DWORD *)v52 + i);
      *((_DWORD *)v52 + i) = (v16 << 31) | (v27 >> 1);
      v16 = v27;
    }
LABEL_58:
    v43 = 0;
    return sub_1850D2((int)a3, v43);
  }
  v17 = *(_DWORD *)(a4 + 28);
  if ( v17 <= HIDWORD(v15) )
  {
    v18 = 6;
    v19 = HIDWORD(v15);
    while ( v17 >= v19 && v18 != -1 )
    {
      v17 = *(_DWORD *)(a4 + 4 * v18);
      v19 = *((_DWORD *)v52 + v18--);
      if ( v17 > v19 )
        goto LABEL_7;
    }
    goto LABEL_11;
  }
LABEL_7:
  v20 = 7;
  v21 = 0;
  while ( !*(_DWORD *)(a4 + 4 * v20) )
  {
    --v20;
    v21 += 32;
    if ( v20 == -1 )
      goto LABEL_26;
  }
  if ( v20 < 0 )
    goto LABEL_26;
  v28 = v20;
  while ( !*((_DWORD *)v52 + v28) )
  {
    if ( v28-- <= 0 )
    {
      v28 = -1;
      break;
    }
  }
  if ( v28 == v20 )
  {
LABEL_26:
    v25 = 1;
    goto LABEL_27;
  }
  v51 = v21 + 32 * v28;
  sub_1850D2((int)v52, 224 - v51);
  v16 = HIDWORD(v53);
  v25 = 225 - v51;
LABEL_27:
  if ( (v16 & 0x80000000) == 0 )
  {
    v30 = *(_DWORD *)(a4 + 28);
    while ( v30 > v16 )
    {
LABEL_34:
      v33 = 0;
      v34 = 0;
      do
      {
        v35 = *((_DWORD *)v52 + v33);
        *((_DWORD *)v52 + v33++) = v34 | (2 * v35);
        v34 = v35 >> 31;
      }
      while ( v33 != 8 );
      v16 = HIDWORD(v53);
      ++v25;
      if ( SHIDWORD(v53) <= -1 )
        goto LABEL_37;
    }
    v31 = 6;
    v32 = v30;
    while ( v32 >= v16 && v31 != -1 )
    {
      v32 = *(_DWORD *)(a4 + 4 * v31);
      v16 = *((_DWORD *)v52 + v31--);
      if ( v32 > v16 )
        goto LABEL_34;
    }
  }
LABEL_37:
  v36 = 28;
  do
  {
    v37 = *(_DWORD *)(a4 + v36);
    v38 = *(_DWORD *)((char *)v52 + v36);
    if ( v38 > v37 )
    {
      v40 = 0;
      for ( j = 7; j != -1; --j )
      {
        v42 = *((_DWORD *)v52 + j);
        *((_DWORD *)v52 + j) = v40 | (v42 >> 1);
        v40 = v42 << 31;
      }
      --v25;
      goto LABEL_37;
    }
    if ( v38 < v37 )
      break;
    v39 = v36 == 0;
    v36 -= 4;
  }
  while ( !v39 );
  if ( !v25 )
    goto LABEL_58;
LABEL_47:
  v43 = 0;
  do
  {
    ++v43;
    --v25;
    v44 = 28;
    while ( 1 )
    {
      v45 = *(_DWORD *)(a4 + v44);
      v46 = *(_DWORD *)((char *)v52 + v44);
      if ( v46 > v45 )
        break;
      if ( v46 >= v45 )
      {
        v39 = v44 == 0;
        v44 -= 4;
        if ( !v39 )
          continue;
      }
      sub_185174(a4, (int)v52);
      sub_1850D2((int)a3, v43);
      v43 = 0;
      *(_DWORD *)a3 |= 1u;
      break;
    }
    v47 = 0;
    for ( k = 7; k != -1; --k )
    {
      v49 = *((_DWORD *)v52 + k);
      *((_DWORD *)v52 + k) = v47 | (v49 >> 1);
      v47 = v49 << 31;
    }
  }
  while ( v25 );
  return sub_1850D2((int)a3, v43);
}


// ======================================================================
// ADDR: 0x186722
// SYMBOL: sub_186722
__int64 *__fastcall sub_186722(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // r4
  unsigned int v4; // r2
  unsigned int v5; // r1
  __int64 v7; // d17
  unsigned int v8; // r2
  unsigned int v9; // r1
  unsigned int v11; // r1
  unsigned int v12; // r0
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v17; // r1
  unsigned int v18; // r0
  unsigned int v20; // r1
  unsigned int v21; // r0
  unsigned int v23; // r1
  unsigned int v24; // r0
  unsigned int v26; // r1
  unsigned int v27; // r0
  __int64 *result; // r0
  __int64 v30; // d17
  __int64 *v31; // [sp+14h] [bp-84h]
  __int64 v32[2]; // [sp+18h] [bp-80h] BYREF
  __int64 v33[2]; // [sp+28h] [bp-70h] BYREF
  __int64 v34[2]; // [sp+38h] [bp-60h] BYREF
  __int64 v35[2]; // [sp+48h] [bp-50h] BYREF
  __int64 v36[2]; // [sp+58h] [bp-40h] BYREF
  __int64 v37; // [sp+6Ch] [bp-2Ch] BYREF
  int v38; // [sp+74h] [bp-24h]
  int v39; // [sp+78h] [bp-20h]

  v3 = a1;
  v38 = 0;
  v37 = 1LL;
  v39 = 0;
  sub_185604(a1, v34);
  sub_185F4A(v3, v34, v32, (int)v33);
  if ( LODWORD(v33[0]) )
    goto LABEL_6;
  v4 = 0;
  do
  {
    v5 = v4;
    if ( v4 == 3 )
      break;
  }
  while ( !*((_DWORD *)v33 + ++v4) );
  if ( v5 <= 2 )
  {
LABEL_6:
    v7 = v3[1];
    v36[0] = *v3;
    v36[1] = v7;
    sub_184F9C((int)v36, (int)v32);
    sub_185F4A(v34, v33, v32, (int)v34);
    if ( LODWORD(v34[0]) )
      goto LABEL_11;
    v8 = 0;
    do
    {
      v9 = v8;
      if ( v8 == 3 )
        break;
    }
    while ( !*((_DWORD *)v34 + ++v8) );
    if ( v9 <= 2 )
    {
LABEL_11:
      v31 = v3;
      while ( 1 )
      {
        sub_186116(v32, (int)v36, &v37, v3, v35);
        sub_185F4A(v33, v34, v32, (int)v33);
        if ( !LODWORD(v33[0]) )
        {
          v11 = 0;
          do
          {
            v12 = v11;
            if ( v11 == 3 )
              break;
          }
          while ( !*((_DWORD *)v33 + ++v11) );
          v3 = v31;
          if ( v12 > 2 )
          {
LABEL_43:
            result = v35;
            goto LABEL_47;
          }
        }
        sub_186116(v32, (int)v35, v36, v3, &v37);
        sub_185F4A(v34, v33, v32, (int)v34);
        if ( !LODWORD(v34[0]) )
        {
          v14 = 0;
          do
          {
            v15 = v14;
            if ( v14 == 3 )
              break;
          }
          while ( !*((_DWORD *)v34 + ++v14) );
          v3 = v31;
          if ( v15 > 2 )
            break;
        }
        sub_186116(v32, (int)&v37, v35, v3, v36);
        sub_185F4A(v33, v34, v32, (int)v33);
        if ( !LODWORD(v33[0]) )
        {
          v17 = 0;
          do
          {
            v18 = v17;
            if ( v17 == 3 )
              break;
          }
          while ( !*((_DWORD *)v33 + ++v17) );
          v3 = v31;
          if ( v18 > 2 )
          {
LABEL_42:
            result = v36;
            goto LABEL_47;
          }
        }
        sub_186116(v32, (int)v36, &v37, v3, v35);
        sub_185F4A(v34, v33, v32, (int)v34);
        if ( !LODWORD(v34[0]) )
        {
          v20 = 0;
          do
          {
            v21 = v20;
            if ( v20 == 3 )
              break;
          }
          while ( !*((_DWORD *)v34 + ++v20) );
          v3 = v31;
          if ( v21 > 2 )
            goto LABEL_43;
        }
        sub_186116(v32, (int)v35, v36, v3, &v37);
        sub_185F4A(v33, v34, v32, (int)v33);
        if ( !LODWORD(v33[0]) )
        {
          v23 = 0;
          do
          {
            v24 = v23;
            if ( v23 == 3 )
              break;
          }
          while ( !*((_DWORD *)v33 + ++v23) );
          v3 = v31;
          if ( v24 > 2 )
            break;
        }
        sub_186116(v32, (int)&v37, v35, v3, v36);
        sub_185F4A(v34, v33, v32, (int)v34);
        if ( !LODWORD(v34[0]) )
        {
          v26 = 0;
          do
          {
            v27 = v26;
            if ( v26 == 3 )
              break;
          }
          while ( !*((_DWORD *)v34 + ++v26) );
          v3 = v31;
          if ( v27 >= 3 )
            goto LABEL_42;
        }
      }
      result = &v37;
    }
    else
    {
      result = v36;
    }
  }
  else
  {
    result = &v37;
  }
LABEL_47:
  v30 = result[1];
  *a2 = *result;
  a2[1] = v30;
  return result;
}


// ======================================================================
