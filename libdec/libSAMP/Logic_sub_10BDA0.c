// ADDR: 0x14469c
// SYMBOL: sub_14469C
int __fastcall sub_14469C(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[279]; // [sp+8h] [bp-128h] BYREF
  _BYTE v7[17]; // [sp+11Fh] [bp-11h] BYREF

  v4 = sub_17D4A8(v6);
  v7[0] = -36;
  sub_17D628(v4, v7, 8, 1);
  v7[0] = 1;
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


// ======================================================================
