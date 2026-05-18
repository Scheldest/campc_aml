// ADDR: 0x17dad8
// SYMBOL: sub_17DAD8
_DWORD *__fastcall sub_17DAD8(_DWORD *result)
{
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x17dc88
// SYMBOL: sub_17DC88
int __fastcall sub_17DC88(int *a1, int a2)
{
  int i; // r6
  int v5; // r0
  int v6; // r1
  int *v7; // r0
  int v8; // r4
  int v9; // r6
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r2
  int j; // r10
  int v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r6
  int v21[133]; // [sp+0h] [bp-638h] BYREF
  int v22; // [sp+214h] [bp-424h] BYREF
  int *v23; // [sp+218h] [bp-420h]
  int *v24; // [sp+21Ch] [bp-41Ch]
  _DWORD v25[262]; // [sp+220h] [bp-418h]

  v24 = 0;
  v22 = 0;
  v23 = 0;
  sub_17DAF0(a1);
  for ( i = 0; i != 256; ++i )
  {
    v5 = operator new(0x14u);
    v6 = *(_DWORD *)(a2 + 4 * i);
    v25[i] = v5;
    *(_BYTE *)v5 = i;
    if ( !v6 )
      v6 = 1;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    sub_17DDCE(v5, v5, &v22);
  }
  while ( 1 )
  {
    v7 = v23;
    if ( v23 )
      v24 = v23;
    else
      v7 = v24;
    v8 = *v7;
    sub_17E070(&v22);
    v9 = *v24;
    sub_17E070(&v22);
    v10 = (_DWORD *)operator new(0x14u);
    v11 = v22;
    v12 = *(_DWORD *)(v9 + 4);
    v13 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v8 + 16) = v10;
    v10[2] = v8;
    v10[3] = v9;
    *(_DWORD *)(v9 + 16) = v10;
    v10[1] = v13 + v12;
    if ( !v11 )
      break;
    sub_17DDCE(v10, v10, &v22);
  }
  *a1 = (int)v10;
  v10[4] = 0;
  sub_17D4A8((int)v21);
  for ( j = 0; j != 256; ++j )
  {
    v15 = v25[j];
    v16 = 0;
    v17 = *a1;
    do
    {
      v18 = *(_DWORD *)(v15 + 16);
      v19 = (unsigned __int16)v16++;
      *((_BYTE *)&v21[69] + v19) = *(_DWORD *)(v18 + 8) != v15;
      v15 = v18;
    }
    while ( v18 != v17 );
    if ( v16 << 16 )
    {
      do
      {
        if ( *((_BYTE *)&v21[69] + v19) )
          sub_17D84A(v21);
        else
          sub_17D828(v21);
        --v19;
      }
      while ( v19 != -1 );
    }
    LOWORD(a1[2 * j + 2]) = (unsigned __int8)sub_17DA6A(v21, &a1[2 * j + 1]);
    sub_17D55E(v21);
  }
  sub_17D542((int)v21);
  sub_17E03E(&v22);
  return sub_17E03E(&v22);
}


// ======================================================================
