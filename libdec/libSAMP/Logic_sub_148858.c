// ADDR: 0x1489ac
// SYMBOL: sub_1489AC
int __fastcall sub_1489AC(int a1)
{
  unsigned int *v1; // r0
  unsigned int v2; // r4
  int result; // r0
  int v4; // r0
  _BYTE v5[276]; // [sp+20h] [bp-120h] BYREF
  unsigned int v6[3]; // [sp+134h] [bp-Ch] BYREF

  v1 = (unsigned int *)(a1 + 143364);
  __dmb(0xBu);
  do
    v2 = __ldrex(v1);
  while ( __strex(0xFFFFFFFF, v1) );
  result = v2 + 1;
  __dmb(0xBu);
  if ( v2 != -1 )
  {
    v4 = sub_17D4A8(v5);
    v6[0] = v2;
    sub_17D628(v4, v6, 32, 1);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
      *(_DWORD *)(dword_23DEF4 + 528),
      &unk_23C7B8,
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
  return result;
}


// ======================================================================
