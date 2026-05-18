// ADDR: 0x1552ac
// SYMBOL: sub_1552AC
int __fastcall sub_1552AC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  _BYTE v5[276]; // [sp+0h] [bp-120h] BYREF
  int v6[3]; // [sp+114h] [bp-Ch] BYREF

  v2 = sub_17D4A8(v5);
  v6[0] = 16843520;
  sub_17D628(v2, v6, 32, 1);
  v3 = *(_DWORD **)(a1 + 92);
  if ( v3 && *v3 )
    sub_17D84A(v5);
  else
    sub_17D828(v5);
  sub_15535A(a1, 3, v5);
  return sub_17D542(v5);
}


// ======================================================================
// ADDR: 0x1554e2
// SYMBOL: sub_1554E2
int __fastcall sub_1554E2(int a1, _DWORD *a2)
{
  int v4; // r1
  int result; // r0
  unsigned int i; // r5
  int v7; // r0
  int v8; // r3
  unsigned int v9; // r6
  int v10; // r5
  int v11; // r4
  __int16 v12; // [sp+Ah] [bp-2Eh] BYREF
  __int64 v13; // [sp+Ch] [bp-2Ch] BYREF
  int v14; // [sp+14h] [bp-24h]
  unsigned __int16 v15; // [sp+1Ah] [bp-1Eh] BYREF
  unsigned __int16 v16; // [sp+1Ch] [bp-1Ch] BYREF
  _WORD v17[13]; // [sp+1Eh] [bp-1Ah] BYREF

  if ( !sub_17D786((int)a2, (int)v17) )
    return 0;
  v4 = sub_17D786((int)a2, (int)&v16);
  result = 0;
  if ( !v4 )
    return result;
  v15 = 0;
  if ( !sub_17D786((int)a2, (int)&v15) )
    return 0;
  v14 = 0;
  v13 = 0LL;
  if ( v15 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v12 = 0;
      sub_17D786((int)a2, (int)&v12);
      v7 = HIDWORD(v13);
      if ( HIDWORD(v13) == v14 )
      {
        sub_14F668((int *)&v13, &v12);
      }
      else
      {
        *(_WORD *)HIDWORD(v13) = v12;
        HIDWORD(v13) = v7 + 2;
      }
    }
    sub_17D902(a2);
  }
  v8 = a2[2];
  v9 = *a2 - v8 + 7;
  if ( v9 > 0x1007 )
  {
    if ( (_DWORD)v13 )
    {
      HIDWORD(v13) = v13;
      operator delete((void *)v13);
    }
    return 0;
  }
  v10 = a2[3];
  v11 = v9 >> 3;
  if ( v9 < 0x18 )
    v11 = 0;
  sub_152CF8(*(_DWORD *)(a1 + 88), v17[0], v16, &v13, v10 + ((v8 + 7) >> 3), v11);
  if ( (_DWORD)v13 )
  {
    HIDWORD(v13) = v13;
    operator delete((void *)v13);
  }
  return 1;
}


// ======================================================================
