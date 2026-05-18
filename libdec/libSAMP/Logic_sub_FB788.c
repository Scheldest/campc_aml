// ADDR: 0x144af8
// SYMBOL: sub_144AF8
int __fastcall sub_144AF8(int result, unsigned int a2)
{
  int v2; // r4
  char v3; // r5
  int v4; // r0
  _BYTE v5[279]; // [sp+8h] [bp-120h] BYREF
  _BYTE v6[9]; // [sp+11Fh] [bp-9h] BYREF

  if ( a2 <= 2 )
  {
    v2 = result;
    result = *(_DWORD *)(result + 536);
    if ( result == 5 )
    {
      result = *(_DWORD *)(v2 + 524);
      v3 = a2;
      if ( *(unsigned __int8 *)(result + 72) != a2 )
      {
        *(_BYTE *)(result + 72) = a2;
        v4 = sub_17D4A8(v5);
        v6[0] = -36;
        sub_17D628(v4, v6, 8, 1);
        v6[0] = 78;
        sub_17D628(v5, v6, 8, 1);
        v6[0] = v3;
        sub_17D628(v5, v6, 8, 1);
        (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(v2 + 528) + 32))(
          *(_DWORD *)(v2 + 528),
          v5,
          2,
          9,
          6);
        return sub_17D542(v5);
      }
    }
  }
  return result;
}


// ======================================================================
