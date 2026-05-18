// ADDR: 0x1804e8
// SYMBOL: sub_1804E8
int __fastcall sub_1804E8(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r4
  int v11; // r5
  int v12; // r0
  _DWORD v14[3]; // [sp+24h] [bp-134h] BYREF
  int v15; // [sp+30h] [bp-128h]
  char v16[29]; // [sp+13Bh] [bp-1Dh] BYREF

  v9 = sub_17D4C0((int)v14, 1);
  v16[0] = 32;
  sub_17D628(v9, v16, 8, 1);
  v10 = v14[0];
  v11 = v15;
  if ( a4 )
  {
    v12 = sub_17E2E4();
    sub_1825E8(a1, v11, v10, 3, 9, a5, a2, a3, 0, 0, v12, 0);
    *(_DWORD *)(sub_181978(a1, a2, a3, 1, 1) + 2108) = 1;
  }
  else
  {
    sub_180774(a1, v15, v14[0], 3, 9, a5, a2, a3, 0, 1);
  }
  return sub_17D542((int)v14);
}


// ======================================================================
// ADDR: 0x180590
// SYMBOL: sub_180590
int __fastcall sub_180590(_DWORD *a1)
{
  int v1; // r1
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  _DWORD *v6; // r6
  int result; // r0

  v1 = a1[2];
  v3 = 1;
  v4 = *(_DWORD **)(v1 + 8);
  v5 = v1;
  a1[3] = v4;
  do
  {
    v5 = *(_DWORD *)(v5 + 8);
    ++v3;
  }
  while ( v5 != v1 );
  if ( (unsigned int)(v3 - 1) < 9 )
  {
    v6 = v4;
  }
  else
  {
    do
    {
      v6 = (_DWORD *)v4[2];
      operator delete(v4);
      --v3;
      v4 = v6;
      a1[3] = v6;
    }
    while ( v3 > 9 );
    v1 = a1[2];
  }
  result = 0;
  a1[3] = v1;
  *(_DWORD *)(v1 + 8) = v6;
  *a1 = v1;
  a1[1] = v1;
  a1[4] = 0;
  a1[5] = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1805dc
// SYMBOL: sub_1805DC
int __fastcall sub_1805DC(_DWORD *a1)
{
  int v1; // r1
  _DWORD *v2; // r5
  int i; // r2
  void *v5; // r0
  int v6; // r0
  int v7; // r3
  int v8; // r0

  v1 = a1[227];
  v2 = a1 + 227;
  for ( i = a1[230]; v1 != i; a1[229] = v8 )
  {
    if ( !*(_BYTE *)(v1 + 284) )
      break;
    v5 = *(void **)(v1 + 16);
    v1 = *(_DWORD *)(v1 + 288);
    *v2 = v1;
    if ( v5 )
    {
      operator delete[](v5);
      v1 = a1[227];
      i = a1[230];
    }
    v6 = a1[229];
    v7 = a1[231];
    *(_BYTE *)(v6 + 284) = 0;
    v8 = *(_DWORD *)(v6 + 288);
    a1[231] = v7 + 1;
  }
  return sub_182FAE(v2);
}


// ======================================================================
// ADDR: 0x1876ae
// SYMBOL: sub_1876AE
int __fastcall sub_1876AE(int a1, int a2)
{
  int result; // r0

  result = sub_187734();
  if ( a2 )
    return sub_187396(a1);
  return result;
}


// ======================================================================
