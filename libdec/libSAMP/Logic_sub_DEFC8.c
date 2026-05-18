// ADDR: 0xdf2b8
// SYMBOL: sub_DF2B8
int __fastcall sub_DF2B8(int *a1, int a2)
{
  int v3; // r1
  int v5; // r0
  char v6; // r4
  int v7; // r1
  int v8; // r2
  unsigned __int64 v9; // r2
  int v10; // r5
  int v11; // r0
  _BYTE *v12; // r4
  unsigned int v13; // r8
  __int64 v14; // r0
  int v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r5
  int v20; // r0
  char v21; // r4
  int v22; // r1
  int v23; // r2
  int v25; // [sp+4h] [bp-4Ch]
  int v26; // [sp+8h] [bp-48h]
  char v27; // [sp+Ch] [bp-44h]
  _BYTE *v28; // [sp+10h] [bp-40h]
  _BYTE v29[21]; // [sp+17h] [bp-39h] BYREF
  _DWORD v30[9]; // [sp+2Ch] [bp-24h] BYREF

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
  HIDWORD(v9) = a1[3];
  v10 = a1[2];
  v11 = a1[4];
  if ( *((_BYTE *)a1 + 20) )
  {
    v27 = *((_BYTE *)a1 + 20);
    v12 = &v29[v11 + 1];
    v25 = a2;
    v28 = v12;
    v26 = v11 - 1;
    if ( v11 < 3 )
    {
      v15 = v10;
    }
    else
    {
      v13 = ((unsigned int)(v11 - 1) >> 1) + 1;
      do
      {
        v14 = sub_2217B4(v10, HIDWORD(v9), 100, 0);
        v15 = v14;
        LODWORD(v14) = v10 - 100 * v14;
        --v13;
        HIDWORD(v9) = HIDWORD(v14);
        v10 = v15;
        *((_WORD *)v12 - 1) = *(_WORD *)&a00010203040506[2 * v14];
        v12 -= 2;
      }
      while ( v13 > 1 );
    }
    if ( v26 << 31 )
    {
      v9 = sub_2217B4(v15, HIDWORD(v9), 10, 0);
      *--v12 = (v15 - 10 * v9) | 0x30;
    }
    else
    {
      LODWORD(v9) = v15;
    }
    *(v12 - 1) = v27;
    sub_DD0CC(v30, (int)(v12 - 2), v9, 1);
    v16 = (int)v28;
    a2 = v25;
  }
  else
  {
    LODWORD(v9) = a1[2];
    sub_DD0CC(v30, (int)v29, v9, a1[4]);
    v16 = v30[1];
  }
  v17 = sub_DCF1C((int)v29, v16, a2);
  v18 = a1[6];
  v19 = v17;
  if ( v18 >= 1 )
    v19 = sub_DE834(v17, v18, (char *)a1 + 28);
  v20 = *(_DWORD *)(v19 + 8);
  v21 = *((_BYTE *)a1 + 29);
  v22 = v20 + 1;
  if ( *(_DWORD *)(v19 + 12) < (unsigned int)(v20 + 1) )
  {
    (**(void (__fastcall ***)(int))v19)(v19);
    v20 = *(_DWORD *)(v19 + 8);
    v22 = v20 + 1;
  }
  v23 = *(_DWORD *)(v19 + 4);
  *(_DWORD *)(v19 + 8) = v22;
  *(_BYTE *)(v23 + v20) = v21;
  return sub_DE870(a1[8], v19);
}


// ======================================================================
// ADDR: 0xdf400
// SYMBOL: sub_DF400
int __fastcall sub_DF400(int a1, int a2, int a3, unsigned int a4, int *a5)
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
  result = sub_DF2B8(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xdf460
// SYMBOL: sub_DF460
int __fastcall sub_DF460(int a1, int a2, int a3, unsigned int a4, int a5)
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
  result = sub_DF4C0(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xdf618
// SYMBOL: sub_DF618
int __fastcall sub_DF618(int a1, int a2, int a3, unsigned int a4, int **a5)
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
  result = sub_DF6DC(a1, *a5[3], *a5[1], a5[1][1], *a5[2], *a5[3], *(unsigned __int8 *)a5[4], a5[5]);
  v17 = *a5[6];
  if ( v17 >= 1 )
    result = sub_DE834(result, v17, (char *)a5[7]);
  if ( v15 )
    return sub_DD992(result, v15, v6);
  return result;
}


// ======================================================================
// ADDR: 0xdf8d4
// SYMBOL: sub_DF8D4
int __fastcall sub_DF8D4(int a1, int a2, int a3, unsigned int a4, int a5)
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
  result = sub_DF934(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
