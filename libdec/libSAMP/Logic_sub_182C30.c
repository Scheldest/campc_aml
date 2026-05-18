// ADDR: 0x182e34
// SYMBOL: sub_182E34
int __fastcall sub_182E34(int a1, int a2, __int64 *a3)
{
  __int64 v6; // d16
  __int64 v7; // d17
  __int64 v8; // d18
  __int64 v9; // d19

  sub_1848C6(a1);
  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = *a3;
  v7 = a3[1];
  a3 += 2;
  v8 = *a3;
  v9 = a3[1];
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = v9;
  sub_1854A8(a1 + 32, a1 + 64);
  return sub_18553A(a1 + 32, a1 + 96);
}


// ======================================================================
// ADDR: 0x182e82
// SYMBOL: sub_182E82
int __fastcall sub_182E82(int a1, int a2, int a3)
{
  if ( *(_BYTE *)(a1 + 128) )
    return sub_186AF0(a3, a2, a1, a1 + 196, a1 + 244, a1 + 292, a1 + 212, a1 + 228, a1 + 260, a1 + 276);
  else
    return sub_186C66(a2, a1, a1 + 32, a3);
}


// ======================================================================
// ADDR: 0x184892
// SYMBOL: sub_184892
int __fastcall sub_184892(int a1)
{
  __int64 v2; // kr00_8
  int v3; // r6

  v2 = *(_QWORD *)(a1 + 4);
  if ( *(_DWORD *)(v2 + 8) == HIDWORD(v2) || *(_BYTE *)(*(_DWORD *)(v2 + 8) + 4) )
  {
    v3 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 8) = operator new(0xCu);
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 8) = v3;
  }
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v2 + 8);
  return v2;
}


// ======================================================================
