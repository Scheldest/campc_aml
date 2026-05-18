// ADDR: 0xfa4d8
// SYMBOL: sub_FA4D8
_DWORD *__fastcall sub_FA4D8(_DWORD *result)
{
  result[2] = 0;
  result[3] = 0;
  *result = 1;
  return result;
}


// ======================================================================
// ADDR: 0x144460
// SYMBOL: sub_144460
int __fastcall sub_144460(int a1, const char *a2)
{
  int result; // r0
  size_t v5; // r6
  _BYTE v6[276]; // [sp+20h] [bp-128h] BYREF
  size_t v7[5]; // [sp+134h] [bp-14h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    sub_17D4A8(v6);
    v5 = _strlen_chk(a2, 0xFFFFFFFF);
    v7[0] = v5;
    sub_17D628(v6, v7, 32, 1);
    sub_17D566(v6, a2, v5);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
      *(_DWORD *)(a1 + 528),
      &unk_23C7B4,
      v6,
      1,
      8,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    return sub_17D542(v6);
  }
  return result;
}


// ======================================================================
