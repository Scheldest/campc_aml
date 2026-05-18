// ADDR: 0x104098
// SYMBOL: sub_104098
int __fastcall sub_104098(int a1, float a2, float a3, float a4)
{
  int result; // r0
  int v9; // [sp+10h] [bp-10h]
  int v10; // [sp+14h] [bp-Ch]
  int v11; // [sp+18h] [bp-8h]

  result = sub_1082F4(*(_DWORD *)(a1 + 8));
  if ( result )
  {
    result = *(_DWORD *)(a1 + 92);
    if ( result )
    {
      result = *(unsigned __int8 *)(result + 1157) << 31;
      if ( result )
        return sub_107188(
                 &unk_B36C2,
                 *(_DWORD *)(a1 + 8),
                 COERCE_UNSIGNED_INT64(a2),
                 HIDWORD(COERCE_UNSIGNED_INT64(a2)),
                 COERCE_UNSIGNED_INT64(a3),
                 HIDWORD(COERCE_UNSIGNED_INT64(a3)),
                 COERCE_UNSIGNED_INT64(a4),
                 HIDWORD(COERCE_UNSIGNED_INT64(a4)),
                 v9,
                 v10,
                 v11);
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x109f36
// SYMBOL: sub_109F36
int __fastcall sub_109F36(int a1)
{
  int v1; // r0
  int v2; // r1
  int result; // r0
  bool v4; // cf

  v1 = *(_DWORD *)(a1 + 12);
  if ( !v1 )
    return 0;
  v2 = *(unsigned __int16 *)(v1 + 38);
  result = 1;
  v4 = (unsigned int)(v2 - 537) >= 2;
  if ( (unsigned int)(v2 - 537) >= 2 )
    v4 = (unsigned int)(v2 - 569) >= 2;
  if ( v4 && v2 != 449 )
    return 0;
  return result;
}


// ======================================================================
// ADDR: 0x1414b4
// SYMBOL: sub_1414B4
int __fastcall sub_1414B4(int a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r6
  _BYTE v7[278]; // [sp+20h] [bp-128h] BYREF
  _WORD v8[9]; // [sp+136h] [bp-12h] BYREF

  sub_17D4A8(v7);
  if ( a2 >> 4 <= 0x7C )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
    if ( sub_F2396(v4, a2) )
    {
      v5 = *(_DWORD *)(v4 + 4 * a2);
      if ( v5 )
      {
        if ( !sub_10411A(*(_DWORD *)(a1 + 28)) )
          *(_WORD *)(a1 + 24) = a2;
        if ( sub_109F36(v5) )
          sub_F85F0(*(_DWORD *)(dword_23DEF0 + 4));
        if ( !sub_109A0C(v5) )
        {
          v8[0] = a2;
          sub_17D628(v7, v8, 16, 1);
          (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(dword_23DEF4 + 528) + 108))(
            *(_DWORD *)(dword_23DEF4 + 528),
            &unk_23C75C,
            v7,
            1,
            10,
            0,
            0,
            -1,
            0xFFFF,
            0xFFFF,
            0);
        }
      }
    }
  }
  return sub_17D542(v7);
}


// ======================================================================
