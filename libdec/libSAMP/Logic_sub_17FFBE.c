// ADDR: 0x184d2e
// SYMBOL: sub_184D2E
int __fastcall sub_184D2E(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 v3; // d17
  int v6; // r10
  int v7; // r1
  int result; // r0
  unsigned int v9; // r5
  unsigned __int16 i; // r6
  _QWORD v11[7]; // [sp+0h] [bp-38h] BYREF

  v3 = a1[1];
  v11[0] = *a1;
  v11[1] = v3;
  v6 = 0;
  memset(&v11[2], 0, 16);
  v7 = 0;
  *a3 = 0LL;
  a3[1] = 0LL;
  result = (int)(a3 + 2);
  a3[2] = 0LL;
  a3[3] = 0LL;
  do
  {
    v9 = *(_DWORD *)(a2 + 4 * v6);
    for ( i = 32; v9; v9 >>= 1 )
    {
      result = v9 << 31;
      if ( v9 << 31 )
      {
        if ( v7 )
          sub_1850D2((int)v11);
        result = sub_185136(a3, v11);
        v7 = 0;
      }
      --i;
      ++v7;
    }
    ++v6;
    v7 += i;
  }
  while ( v6 != 4 );
  return result;
}


// ======================================================================
// ADDR: 0x1851bc
// SYMBOL: sub_1851BC
int __fastcall sub_1851BC(int a1, int a2)
{
  _QWORD *v4; // r0
  _QWORD *v5; // r2
  int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r3
  bool v9; // zf
  _QWORD *v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // [sp+0h] [bp-78h] BYREF
  __int64 v14; // [sp+4h] [bp-74h]
  int v15; // [sp+Ch] [bp-6Ch]
  __int64 v16; // [sp+10h] [bp-68h]
  __int64 v17; // [sp+18h] [bp-60h]
  int v18; // [sp+20h] [bp-58h] BYREF
  __int64 v19; // [sp+24h] [bp-54h]
  int v20; // [sp+2Ch] [bp-4Ch]
  __int64 v21; // [sp+30h] [bp-48h]
  __int64 v22; // [sp+38h] [bp-40h]
  _BYTE v23[56]; // [sp+40h] [bp-38h] BYREF

  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  *(_DWORD *)a2 = 0xFFFF;
  v4 = (_QWORD *)(a2 + 4);
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  v5 = (_QWORD *)(a2 + 16);
  v18 = 1;
  v13 = 2;
  v6 = 28;
  *v5 = 0LL;
  v5[1] = 0LL;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a1 + v6);
    v8 = *(_DWORD *)(a2 + v6);
    if ( v8 > v7 )
      break;
    if ( v8 >= v7 )
    {
      v9 = v6 == 0;
      v6 -= 4;
      if ( !v9 )
        continue;
    }
    goto LABEL_8;
  }
  *(_DWORD *)a2 = 3;
  *v4 = 0LL;
  v4[1] = 0LL;
  v10 = (_QWORD *)((char *)v4 + 12);
  *v10 = 0LL;
  v10[1] = 0LL;
  do
  {
LABEL_8:
    sub_185136(a2, (int)&v13);
    sub_185648(
      a1,
      a2,
      v23,
      v11,
      v13,
      v14,
      HIDWORD(v14),
      v15,
      v16,
      HIDWORD(v16),
      v17,
      HIDWORD(v17),
      v18,
      v19,
      HIDWORD(v19),
      v20,
      v21,
      HIDWORD(v21),
      v22,
      HIDWORD(v22));
    result = memcmp(v23, &v18, 0x20u);
  }
  while ( result );
  return result;
}


// ======================================================================
// ADDR: 0x18525c
// SYMBOL: sub_18525C
_QWORD *__fastcall sub_18525C(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // d17
  __int64 v6; // d17
  _QWORD *v7; // r6
  unsigned int v8; // r1
  unsigned int v9; // r0
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
  _QWORD *result; // r0
  __int64 v27; // d17
  _BYTE v29[16]; // [sp+18h] [bp-80h] BYREF
  _DWORD v30[4]; // [sp+28h] [bp-70h] BYREF
  _QWORD v31[2]; // [sp+38h] [bp-60h] BYREF
  _DWORD v32[4]; // [sp+48h] [bp-50h] BYREF
  _BYTE v33[16]; // [sp+58h] [bp-40h] BYREF
  _QWORD v34[6]; // [sp+68h] [bp-30h] BYREF

  v32[0] = 1;
  memset(&v32[1], 0, 12);
  sub_185F4A((int)a2, (int)a1, (int)v29);
  v5 = a2[1];
  v34[0] = *a2;
  v34[1] = v5;
  sub_184F9C((int)v34, (int)v29);
  v6 = a1[1];
  v31[0] = *a1;
  v31[1] = v6;
  while ( 1 )
  {
    sub_185F4A((int)v31, (int)v30, (int)v29);
    v7 = a2;
    if ( !LODWORD(v31[0]) )
    {
      v8 = 0;
      do
      {
        v9 = v8;
        if ( v8 == 3 )
          break;
      }
      while ( !*((_DWORD *)v31 + ++v8) );
      if ( v9 > 2 )
      {
LABEL_33:
        result = v34;
        goto LABEL_36;
      }
    }
    sub_186116(v34, v29, v32, a2, v33);
    sub_185F4A((int)v30, (int)v31, (int)v29);
    if ( !v30[0] )
    {
      v11 = 0;
      do
      {
        v12 = v11;
        if ( v11 == 3 )
          break;
      }
      while ( !v30[++v11] );
      v7 = a2;
      if ( v12 > 2 )
      {
LABEL_34:
        result = v33;
        goto LABEL_36;
      }
    }
    sub_186116(v33, v29, v34, v7, v32);
    sub_185F4A((int)v31, (int)v30, (int)v29);
    if ( !LODWORD(v31[0]) )
    {
      v14 = 0;
      do
      {
        v15 = v14;
        if ( v14 == 3 )
          break;
      }
      while ( !*((_DWORD *)v31 + ++v14) );
      v7 = a2;
      if ( v15 > 2 )
        break;
    }
    sub_186116(v32, v29, v33, v7, v34);
    sub_185F4A((int)v30, (int)v31, (int)v29);
    if ( !v30[0] )
    {
      v17 = 0;
      do
      {
        v18 = v17;
        if ( v17 == 3 )
          break;
      }
      while ( !v30[++v17] );
      v7 = a2;
      if ( v18 > 2 )
        goto LABEL_33;
    }
    sub_186116(v34, v29, v32, v7, v33);
    sub_185F4A((int)v31, (int)v30, (int)v29);
    if ( !LODWORD(v31[0]) )
    {
      v20 = 0;
      do
      {
        v21 = v20;
        if ( v20 == 3 )
          break;
      }
      while ( !*((_DWORD *)v31 + ++v20) );
      v7 = a2;
      if ( v21 > 2 )
        goto LABEL_34;
    }
    sub_186116(v33, v29, v34, v7, v32);
    sub_185F4A((int)v30, (int)v31, (int)v29);
    if ( !v30[0] )
    {
      v23 = 0;
      do
      {
        v24 = v23;
        if ( v23 == 3 )
          break;
      }
      while ( !v30[++v23] );
      v7 = a2;
      if ( v24 > 2 )
        break;
    }
    sub_186116(v32, v29, v33, v7, v34);
  }
  result = v32;
LABEL_36:
  v27 = result[1];
  *a3 = *result;
  a3[1] = v27;
  return result;
}


// ======================================================================
// ADDR: 0x1854a8
// SYMBOL: sub_1854A8
int __fastcall sub_1854A8(__int64 *a1, __int64 *a2)
{
  __int64 v4; // d18
  __int64 v5; // d19
  __int64 v6; // d20
  __int64 v7; // d21
  int v8; // r1
  unsigned int v9; // r2
  __int64 *v11; // r5
  __int64 v12; // d16
  __int64 v13; // d17
  __int64 v14; // d18
  __int64 v15; // d19
  int result; // r0
  __int64 v17; // d17
  __int64 v18; // d18
  __int64 v19; // d19
  _QWORD *v20; // r4
  __int64 v21; // [sp+0h] [bp-90h] BYREF
  __int64 v22; // [sp+8h] [bp-88h]
  __int64 v23; // [sp+10h] [bp-80h]
  __int64 v24; // [sp+18h] [bp-78h]
  __int64 v25; // [sp+20h] [bp-70h]
  __int64 v26; // [sp+28h] [bp-68h]
  __int64 v27; // [sp+30h] [bp-60h]
  __int64 v28; // [sp+38h] [bp-58h]
  _DWORD v29[8]; // [sp+40h] [bp-50h] BYREF
  __int64 v30; // [sp+60h] [bp-30h]
  __int64 v31; // [sp+68h] [bp-28h]
  __int64 v32; // [sp+70h] [bp-20h]
  __int64 v33; // [sp+78h] [bp-18h]

  sub_186258();
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  memset(v29, 0, sizeof(v29));
  v30 = v4;
  v31 = v5;
  v32 = v6;
  v33 = v7;
  v8 = 0;
  do
  {
    v9 = v29[v8];
    v29[v8] = v9 - 1;
    if ( v9 - 1 < v9 )
      break;
  }
  while ( v8++ != 15 );
  v12 = *a1;
  v13 = a1[1];
  v11 = a1 + 2;
  v14 = *v11;
  v15 = v11[1];
  v21 = v12;
  v22 = v13;
  v23 = v14;
  v24 = v15;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  result = sub_186522((int)v29, (int)&v21, (int)&v21);
  v17 = v22;
  v18 = v23;
  v19 = v24;
  *a2 = v21;
  a2[1] = v17;
  v20 = a2 + 2;
  *v20 = v18;
  v20[1] = v19;
  return result;
}


// ======================================================================
// ADDR: 0x18553a
// SYMBOL: sub_18553A
int __fastcall sub_18553A(__int64 *a1, _QWORD *a2)
{
  __int64 *v2; // r0
  __int64 v3; // d16
  __int64 v4; // d17
  __int64 v6; // d20
  __int64 v7; // d21
  int result; // r0
  __int64 v9; // d17
  __int64 v10; // d18
  __int64 v11; // d19
  _QWORD v12[8]; // [sp+0h] [bp-C8h] BYREF
  _QWORD v13[8]; // [sp+40h] [bp-88h] BYREF
  _BYTE v14[32]; // [sp+80h] [bp-48h] BYREF
  int v15; // [sp+A0h] [bp-28h]
  __int64 v16; // [sp+A4h] [bp-24h]
  int v17; // [sp+ACh] [bp-1Ch]
  __int64 v18; // [sp+B0h] [bp-18h]
  __int64 v19; // [sp+B8h] [bp-10h]

  v3 = *a1;
  v4 = a1[1];
  v2 = a1 + 2;
  v6 = *v2;
  v7 = v2[1];
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  memset(v14, 0, sizeof(v14));
  v15 = 1;
  v13[0] = v3;
  v13[1] = v4;
  v13[2] = v6;
  v13[3] = v7;
  memset(&v13[4], 0, 32);
  result = sub_185CB0(v14, v13, v12);
  v9 = v12[1];
  v10 = v12[2];
  v11 = v12[3];
  *a2 = v12[0];
  a2[1] = v9;
  a2 += 2;
  *a2 = v10;
  a2[1] = v11;
  return result;
}


// ======================================================================
// ADDR: 0x18559e
// SYMBOL: sub_18559E
int __fastcall sub_18559E(__int64 *a1, __int64 *a2)
{
  __int64 v4; // d18
  __int64 v5; // d19
  int v6; // r1
  unsigned int v7; // r2
  __int64 v9; // d17
  int result; // r0
  __int64 v11; // d17
  __int64 v12; // [sp+0h] [bp-48h] BYREF
  __int64 v13; // [sp+8h] [bp-40h]
  __int64 v14; // [sp+10h] [bp-38h]
  __int64 v15; // [sp+18h] [bp-30h]
  _DWORD v16[4]; // [sp+20h] [bp-28h] BYREF
  __int64 v17; // [sp+30h] [bp-18h]
  __int64 v18; // [sp+38h] [bp-10h]

  sub_186722();
  v4 = *a2;
  v5 = a2[1];
  memset(v16, 0, sizeof(v16));
  v17 = v4;
  v18 = v5;
  v6 = 0;
  do
  {
    v7 = v16[v6];
    v16[v6] = v7 - 1;
    if ( v7 - 1 < v7 )
      break;
  }
  while ( v6++ != 7 );
  v9 = a1[1];
  v12 = *a1;
  v13 = v9;
  v14 = 0LL;
  v15 = 0LL;
  result = sub_185988((int)v16, (int)&v12, (int)&v12);
  v11 = v13;
  *a2 = v12;
  a2[1] = v11;
  return result;
}


// ======================================================================
// ADDR: 0x185604
// SYMBOL: sub_185604
unsigned int __fastcall sub_185604(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // d17
  unsigned int result; // r0
  __int64 v5; // d17
  _QWORD v6[4]; // [sp+0h] [bp-68h] BYREF
  __int64 v7[4]; // [sp+20h] [bp-48h] BYREF
  __int64 v8[2]; // [sp+40h] [bp-28h] BYREF
  int v9; // [sp+50h] [bp-18h]
  int v10; // [sp+54h] [bp-14h]
  int v11; // [sp+58h] [bp-10h]
  int v12; // [sp+5Ch] [bp-Ch]

  v3 = a1[1];
  v7[0] = *a1;
  v7[1] = v3;
  memset(&v7[2], 0, 16);
  memset(v8, 0, sizeof(v8));
  v9 = 1;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = sub_184D9C(v8, v7, (int)v6);
  v5 = v6[1];
  *a2 = v6[0];
  a2[1] = v5;
  return result;
}


// ======================================================================
// ADDR: 0x185718
// SYMBOL: sub_185718
__int64 *__fastcall sub_185718(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r8
  _QWORD *v4; // r4
  __int64 v5; // d16
  __int64 v6; // d17
  __int64 v7; // d18
  __int64 v8; // d19
  __int64 v9; // d16
  __int64 v10; // d17
  __int64 v11; // d18
  __int64 v12; // d19
  _QWORD *v13; // r4
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
  unsigned int v29; // r1
  unsigned int v30; // r0
  int *v32; // r0
  __int64 *result; // r0
  __int64 v34; // d16
  __int64 v35; // d17
  __int64 v36; // d18
  __int64 v37; // d19
  _QWORD *v39; // [sp+14h] [bp-E4h]
  _BYTE v40[32]; // [sp+18h] [bp-E0h] BYREF
  _DWORD v41[8]; // [sp+38h] [bp-C0h] BYREF
  _QWORD v42[4]; // [sp+58h] [bp-A0h] BYREF
  int v43; // [sp+78h] [bp-80h] BYREF
  __int64 v44; // [sp+7Ch] [bp-7Ch]
  int v45; // [sp+84h] [bp-74h]
  __int64 v46; // [sp+88h] [bp-70h]
  __int64 v47; // [sp+90h] [bp-68h]
  _BYTE v48[32]; // [sp+98h] [bp-60h] BYREF
  _QWORD v49[8]; // [sp+B8h] [bp-40h] BYREF

  v3 = a1;
  v4 = a2;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v43 = 1;
  sub_185988((int)a2, (int)a1, (int)v40);
  v39 = v4;
  v5 = *v4;
  v6 = v4[1];
  v4 += 2;
  v7 = *v4;
  v8 = v4[1];
  v49[0] = v5;
  v49[1] = v6;
  v49[2] = v7;
  v49[3] = v8;
  sub_185174((int)v49, (int)v40);
  v9 = *v3;
  v10 = v3[1];
  v3 += 2;
  v11 = *v3;
  v12 = v3[1];
  v42[0] = v9;
  v42[1] = v10;
  v42[2] = v11;
  v42[3] = v12;
  while ( 1 )
  {
    sub_185988((int)v42, (int)v41, (int)v40);
    v13 = v39;
    if ( !LODWORD(v42[0]) )
    {
      v14 = 0;
      do
      {
        v15 = v14;
        if ( v14 == 7 )
          break;
      }
      while ( !*((_DWORD *)v42 + ++v14) );
      if ( v15 > 6 )
      {
LABEL_33:
        v32 = (int *)v49;
        goto LABEL_36;
      }
    }
    sub_185B6C(v49, v40, &v43, v39, v48);
    sub_185988((int)v41, (int)v42, (int)v40);
    if ( !v41[0] )
    {
      v17 = 0;
      do
      {
        v18 = v17;
        if ( v17 == 7 )
          break;
      }
      while ( !v41[++v17] );
      v13 = v39;
      if ( v18 > 6 )
      {
LABEL_34:
        v32 = (int *)v48;
        goto LABEL_36;
      }
    }
    sub_185B6C(v48, v40, v49, v13, &v43);
    sub_185988((int)v42, (int)v41, (int)v40);
    if ( !LODWORD(v42[0]) )
    {
      v20 = 0;
      do
      {
        v21 = v20;
        if ( v20 == 7 )
          break;
      }
      while ( !*((_DWORD *)v42 + ++v20) );
      v13 = v39;
      if ( v21 > 6 )
        break;
    }
    sub_185B6C(&v43, v40, v48, v13, v49);
    sub_185988((int)v41, (int)v42, (int)v40);
    if ( !v41[0] )
    {
      v23 = 0;
      do
      {
        v24 = v23;
        if ( v23 == 7 )
          break;
      }
      while ( !v41[++v23] );
      v13 = v39;
      if ( v24 > 6 )
        goto LABEL_33;
    }
    sub_185B6C(v49, v40, &v43, v13, v48);
    sub_185988((int)v42, (int)v41, (int)v40);
    if ( !LODWORD(v42[0]) )
    {
      v26 = 0;
      do
      {
        v27 = v26;
        if ( v26 == 7 )
          break;
      }
      while ( !*((_DWORD *)v42 + ++v26) );
      v13 = v39;
      if ( v27 > 6 )
        goto LABEL_34;
    }
    sub_185B6C(v48, v40, v49, v13, &v43);
    sub_185988((int)v41, (int)v42, (int)v40);
    if ( !v41[0] )
    {
      v29 = 0;
      do
      {
        v30 = v29;
        if ( v29 == 7 )
          break;
      }
      while ( !v41[++v29] );
      v13 = v39;
      if ( v30 > 6 )
        break;
    }
    sub_185B6C(&v43, v40, v48, v13, v49);
  }
  v32 = &v43;
LABEL_36:
  v34 = *(_QWORD *)v32;
  v35 = *((_QWORD *)v32 + 1);
  result = (__int64 *)(v32 + 4);
  v36 = *result;
  v37 = result[1];
  *a3 = v34;
  a3[1] = v35;
  a3[2] = v36;
  a3[3] = v37;
  return result;
}


// ======================================================================
