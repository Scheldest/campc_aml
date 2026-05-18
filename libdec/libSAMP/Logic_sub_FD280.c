// ADDR: 0x12f5e0
// SYMBOL: sub_12F5E0
int __fastcall sub_12F5E0(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2

  result = *(_DWORD *)(a1 + 136);
  if ( result )
  {
    v3 = sub_F0B30();
    result = dword_381BF4;
    *(_DWORD *)(a1 + 136) = 0;
    v4 = *(unsigned __int8 *)(result + 133);
    *(_DWORD *)(a1 + 88) = v3 + 500;
    if ( v4 || *(_BYTE *)(result + 132) )
    {
      if ( *(_BYTE *)(a1 + 144) == 1 )
        return sub_17C118();
    }
    else
    {
      if ( sub_10BDC0(dword_2631B0) )
        sub_10BDA0(dword_2631B0, 0);
      if ( *(_BYTE *)(a1 + 80) )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 36))(a1, 0);
      *(_BYTE *)(a1 + 80) = 0;
      result = dword_23DEF0;
      *(_BYTE *)(dword_23DEF0 + 84) = 1;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1443e8
// SYMBOL: sub_1443E8
int __fastcall sub_1443E8(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  _BYTE v6[279]; // [sp+8h] [bp-120h] BYREF
  _BYTE v7[9]; // [sp+11Fh] [bp-9h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v5 = sub_17D4A8(v6);
    v7[0] = -36;
    sub_17D628(v5, v7, 8, 1);
    v7[0] = 69;
    sub_17D628(v6, v7, 8, 1);
    if ( a2 )
      sub_17D84A(v6);
    else
      sub_17D828(v6);
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(a1 + 528) + 32))(
      *(_DWORD *)(a1 + 528),
      v6,
      2,
      9,
      6);
    return sub_17D542(v6);
  }
  return result;
}


// ======================================================================
// ADDR: 0x17c270
// SYMBOL: sub_17C270
int __fastcall sub_17C270(int a1)
{
  int i; // r5
  int result; // r0

  for ( i = 0; i != 28; ++i )
  {
    result = a1 + i;
    if ( *(_BYTE *)(a1 + i + 104) )
    {
      *(_BYTE *)(result + 76) = 1;
      result = sub_17C2A4(a1, (unsigned __int8)i, 0, 0);
    }
  }
  return result;
}


// ======================================================================
