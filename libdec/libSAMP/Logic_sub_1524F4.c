// ADDR: 0x15535a
// SYMBOL: sub_15535A
int __fastcall sub_15535A(int a1, char a2, int a3)
{
  int v6; // r0
  _BYTE v8[276]; // [sp+1Ch] [bp-12Ch] BYREF
  int v9; // [sp+130h] [bp-18h] BYREF
  _BYTE v10[17]; // [sp+137h] [bp-11h] BYREF

  v9 = 252;
  v6 = sub_17D4A8(v8);
  v10[0] = a2;
  sub_17D628(v6, v10, 8, 1);
  if ( a3 )
    sub_17D6C2(v8, a3);
  (*(void (__fastcall **)(_DWORD, int *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 16)
                                                                                                  + 108))(
    *(_DWORD *)(a1 + 16),
    &v9,
    v8,
    1,
    9,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v8);
}


// ======================================================================
