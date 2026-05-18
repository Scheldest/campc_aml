// ADDR: 0x140860
// SYMBOL: sub_140860
int __fastcall sub_140860(int a1, int a2)
{
  int v3; // r0
  _BYTE v5[276]; // [sp+20h] [bp-120h] BYREF
  _DWORD v6[3]; // [sp+134h] [bp-Ch] BYREF

  v3 = sub_17D4A8(v5);
  v6[0] = a2;
  sub_17D628(v3, v6, 32, 1);
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
    *(_DWORD *)(dword_23DEF4 + 528),
    &unk_23C744,
    v5,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  return sub_17D542(v5);
}


// ======================================================================
