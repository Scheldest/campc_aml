// ADDR: 0x144604
// SYMBOL: sub_144604
int __fastcall sub_144604(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  _BYTE v10[276]; // [sp+20h] [bp-128h] BYREF
  _DWORD v11[5]; // [sp+134h] [bp-14h] BYREF

  v8 = sub_17D4A8(v10);
  v11[0] = a2;
  sub_17D628(v8, v11, 32, 1);
  v11[0] = a3;
  sub_17D628(v10, v11, 32, 1);
  v11[0] = a4;
  sub_17D628(v10, v11, 32, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
    *(_DWORD *)(a1 + 528),
    &unk_23C7CC,
    v10,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v10);
}


// ======================================================================
