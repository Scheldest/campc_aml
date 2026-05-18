// ADDR: 0x1828b4
// SYMBOL: sub_1828B4
int __fastcall sub_1828B4(int a1, int a2, _QWORD *a3, int a4)
{
  int v7; // r0
  int v8; // r11
  unsigned __int8 *v9; // r5
  __int64 v10; // kr00_8
  int v11; // r0
  __int64 v12; // d17
  _DWORD v15[69]; // [sp+24h] [bp-134h] BYREF
  _DWORD v16[8]; // [sp+138h] [bp-20h] BYREF

  v7 = sub_17D4C0((int)v15, 11);
  LOBYTE(v16[0]) = 34;
  sub_17D628(v7, v16, 8, 1);
  v16[0] = *(_DWORD *)(a2 + 4);
  sub_17D628((int)v15, v16, 32, 1);
  LOWORD(v16[0]) = *(_WORD *)(a2 + 8);
  sub_17D628((int)v15, v16, 16, 1);
  LOWORD(v16[0]) = sub_1811B4(a1, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), 1);
  sub_17D628((int)v15, v16, 16, 1);
  v8 = v15[0];
  v9 = (unsigned __int8 *)v15[3];
  v10 = *(_QWORD *)(a2 + 4);
  v11 = sub_17E2E4();
  sub_1825E8(a1, v9, v8, 0, 8, 0, v10, 0, 0, v11, 0);
  *(_BYTE *)(a2 + 2092) = a4;
  if ( a4 )
  {
    v12 = a3[1];
    *(_QWORD *)(a2 + 2076) = *a3;
    *(_QWORD *)(a2 + 2084) = v12;
    *(_DWORD *)(a2 + 2108) = 7;
  }
  return sub_17D542((int)v15);
}


// ======================================================================
// ADDR: 0x182980
// SYMBOL: sub_182980
int __fastcall sub_182980(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r5
  int v5; // r0
  __int64 v6; // d19
  __int64 v7; // d16
  __int64 v8; // d17
  __int64 v9; // d20
  __int64 v10; // d21
  unsigned int v11; // r5
  unsigned int v12; // r6
  int v13; // r2
  int v14; // r0
  unsigned __int8 v16; // [sp+23h] [bp-105h] BYREF
  __int64 v17; // [sp+24h] [bp-104h]
  __int64 v18; // [sp+2Ch] [bp-FCh]
  int v19; // [sp+34h] [bp-F4h]
  int v20; // [sp+38h] [bp-F0h]
  __int64 v21; // [sp+3Ch] [bp-ECh]
  __int64 v22; // [sp+44h] [bp-E4h]
  __int64 v23; // [sp+4Ch] [bp-DCh]
  __int64 v24; // [sp+54h] [bp-D4h]
  _BYTE v25[180]; // [sp+5Ch] [bp-CCh] BYREF
  unsigned int src; // [sp+110h] [bp-18h] BYREF
  _DWORD v27[5]; // [sp+114h] [bp-14h] BYREF

  src = a2;
  v27[0] = a3;
  sub_18BA18(v25);
  v4 = *(_DWORD *)(a1 + 2416);
  v16 = 15;
  if ( v4 < sub_17E2E4() )
    sub_17FF4A(a1);
  sub_18BA58(v25);
  sub_18C9EC((int)v25, &src);
  sub_18C9EC((int)v25, v27);
  sub_18C9EC((int)v25, (void *)(a1 + 2420));
  sub_18CA7C((int)v25);
  v5 = sub_18CB50(v25);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_QWORD *)(a1 + 2100);
  v8 = *(_QWORD *)(a1 + 2108);
  v9 = *(_QWORD *)(a1 + 2116);
  v10 = *(_QWORD *)(a1 + 2124);
  v17 = *(_QWORD *)v5;
  v18 = v6;
  v19 = *(_DWORD *)(v5 + 16);
  v11 = src;
  v12 = v27[0];
  v21 = v7;
  v22 = v8;
  v13 = *(_DWORD *)(a1 + 2068);
  v23 = v9;
  v24 = v10;
  v20 = v13;
  v14 = sub_17E2E4();
  sub_1825E8(a1, &v16, 456, 0, 6, 0, __SPAIR64__(v12, v11), 0, 0, v14, 0);
  return sub_18BA88(v25);
}


// ======================================================================
// ADDR: 0x182a56
// SYMBOL: sub_182A56
int __fastcall sub_182A56(int a1)
{
  int v1; // r2
  int result; // r0
  int v3; // r1
  int v4; // r2

  v1 = *(_DWORD *)(a1 + 832);
  if ( v1 && !*(_BYTE *)(a1 + 4) && (v3 = *(unsigned __int16 *)(a1 + 8), *(_WORD *)(a1 + 8)) )
  {
    v4 = v1 + 1736;
    LOWORD(result) = 0;
    do
    {
      if ( *(_BYTE *)(v4 - 1736) && !*(_BYTE *)v4 && *(_DWORD *)(v4 + 372) == 8 )
        LOWORD(result) = result + 1;
      --v3;
      v4 += 2112;
    }
    while ( v3 );
  }
  else
  {
    LOWORD(result) = 0;
  }
  return (unsigned __int16)result;
}


// ======================================================================
