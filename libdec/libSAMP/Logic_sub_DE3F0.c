// ADDR: 0xde69c
// SYMBOL: sub_DE69C
int __fastcall sub_DE69C(int *a1, int a2)
{
  int v3; // r1
  int v5; // r0
  char v6; // r6
  int v7; // r1
  int v8; // r2
  char v9; // lr
  __int64 v10; // r2
  unsigned int v11; // r12
  _BYTE *v12; // r8
  unsigned int v13; // r6
  _BYTE *v14; // r1
  int v15; // r0
  int v16; // r0
  int v17; // r5
  int v18; // r0
  char v19; // r6
  int v20; // r1
  int v21; // r2
  _BYTE v23[11]; // [sp+1h] [bp-2Fh] BYREF
  _DWORD v24[9]; // [sp+Ch] [bp-24h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    v6 = byte_91D45[v3];
    v7 = v5 + 1;
    if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v5 + 1) )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v5 = *(_DWORD *)(a2 + 8);
      v7 = v5 + 1;
    }
    v8 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 8) = v7;
    *(_BYTE *)(v8 + v5) = v6;
  }
  v9 = *((_BYTE *)a1 + 12);
  v10 = *(_QWORD *)(a1 + 1);
  if ( v9 )
  {
    v11 = HIDWORD(v10) - 1;
    v12 = &v23[HIDWORD(v10) + 1];
    if ( SHIDWORD(v10) < 3 )
    {
      HIDWORD(v10) = a1[1];
      v14 = v12;
    }
    else
    {
      v13 = (v11 >> 1) + 1;
      v14 = &v23[HIDWORD(v10) + 1];
      do
      {
        --v13;
        HIDWORD(v10) = (unsigned int)v10 / 0x64;
        v15 = v10 - 100 * HIDWORD(v10);
        LODWORD(v10) = HIDWORD(v10);
        *((_WORD *)v14 - 1) = *(_WORD *)&a00010203040506[2 * v15];
        v14 -= 2;
      }
      while ( v13 > 1 );
    }
    if ( v11 << 31 )
    {
      LODWORD(v10) = HIDWORD(v10) / 0xA;
      *--v14 = (HIDWORD(v10) % 0xA) | 0x30;
    }
    else
    {
      LODWORD(v10) = HIDWORD(v10);
    }
    *(v14 - 1) = v9;
    sub_DCEB4(v24, (int)(v14 - 2), v10, 1);
  }
  else
  {
    sub_DCEB4(v24, (int)v23, v10, SHIDWORD(v10));
    v12 = (_BYTE *)v24[1];
  }
  v16 = sub_DCF1C((int)v23, (int)v12, a2);
  v17 = v16;
  if ( a1[4] >= 1 )
    v17 = sub_DE834(v16);
  v18 = *(_DWORD *)(v17 + 8);
  v19 = *((_BYTE *)a1 + 21);
  v20 = v18 + 1;
  if ( *(_DWORD *)(v17 + 12) < (unsigned int)(v18 + 1) )
  {
    (**(void (__fastcall ***)(int))v17)(v17);
    v18 = *(_DWORD *)(v17 + 8);
    v20 = v18 + 1;
  }
  v21 = *(_DWORD *)(v17 + 4);
  *(_DWORD *)(v17 + 8) = v20;
  *(_BYTE *)(v21 + v18) = v19;
  return sub_DE870(a1[6], v17);
}


// ======================================================================
// ADDR: 0xde7d4
// SYMBOL: sub_DE7D4
int __fastcall sub_DE7D4(int a1, int a2, int a3, unsigned int a4, int *a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_DE69C(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xde980
// SYMBOL: sub_DE980
int __fastcall sub_DE980(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_DE9E0(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xdeb84
// SYMBOL: sub_DEB84
int __fastcall sub_DEB84(int a1, int a2, int a3, unsigned int a4, int **a5)
{
  int v6; // r8
  unsigned int v7; // r6
  char v8; // r0
  int v9; // r9
  int v10; // r1
  int v11; // r0
  char v12; // r10
  int v13; // r1
  int v14; // r2
  int v15; // r9
  int result; // r0
  int v17; // r1

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = **a5;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = byte_91D45[v10];
    v13 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v13 = v11 + 1;
    }
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v13;
    *(_BYTE *)(v14 + v11) = v12;
  }
  v15 = v7 - v9;
  result = sub_DEC40(a1, *a5[1], *a5[2], *a5[3], *(unsigned __int8 *)a5[4], a5[5]);
  v17 = *a5[6];
  if ( v17 >= 1 )
    result = sub_DE834(result, v17, (char *)a5[7]);
  if ( v15 )
    return sub_DD992(result, v15, v6);
  return result;
}


// ======================================================================
// ADDR: 0xdee14
// SYMBOL: sub_DEE14
int __fastcall sub_DEE14(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_DEE74(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
