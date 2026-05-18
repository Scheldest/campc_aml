// ADDR: 0x1436d4
// SYMBOL: sub_1436D4
int __fastcall sub_1436D4(int a1)
{
  int v2; // r0
  _BYTE v4[279]; // [sp+8h] [bp-120h] BYREF
  _BYTE v5[9]; // [sp+11Fh] [bp-9h] BYREF

  v2 = sub_17D4A8(v4);
  v5[0] = -36;
  sub_17D628(v2, v5, 8, 1);
  v5[0] = 109;
  sub_17D628(v4, v5, 8, 1);
  v5[0] = *(_BYTE *)(dword_381BF4 + 107);
  sub_17D628(v4, v5, 8, 1);
  (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 32))(
    *(_DWORD *)(a1 + 528),
    v4,
    1,
    8,
    0);
  return sub_17D542(v4);
}


// ======================================================================
// ADDR: 0x144bc2
// SYMBOL: sub_144BC2
int __fastcall sub_144BC2(int result)
{
  int i; // r2
  int v2; // [sp+0h] [bp-4h]

  for ( i = 0; i != 10; ++i )
    *(_DWORD *)(result + 4 * i) ^= 0x548DED0Au;
  v2 = *(_DWORD *)(result + 40) ^ 0x548DED0A;
  *(_WORD *)(result + 40) = v2;
  *(_BYTE *)(result + 42) = BYTE2(v2);
  return result;
}


// ======================================================================
// ADDR: 0x144bf2
// SYMBOL: sub_144BF2
int __fastcall sub_144BF2(int result)
{
  int i; // r2
  int v2; // [sp+0h] [bp-4h]

  for ( i = 0; i != 5; ++i )
    *(_DWORD *)(result + 4 * i) ^= 0x548DED0Au;
  v2 = *(_DWORD *)(result + 20) ^ 0x548DED0A;
  *(_WORD *)(result + 20) = v2;
  *(_BYTE *)(result + 22) = BYTE2(v2);
  return result;
}


// ======================================================================
