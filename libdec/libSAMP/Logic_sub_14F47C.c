// ADDR: 0x14f4c0
// SYMBOL: sub_14F4C0
int __fastcall sub_14F4C0(int a1, __int16 a2)
{
  int v3; // r0
  _BYTE v5[278]; // [sp+20h] [bp-120h] BYREF
  _WORD v6[5]; // [sp+136h] [bp-Ah] BYREF

  v3 = sub_17D4A8(v5);
  v6[0] = a2;
  sub_17D628(v3, v6, 16, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C7C8,
    v5,
    1,
    9,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v5);
}


// ======================================================================
