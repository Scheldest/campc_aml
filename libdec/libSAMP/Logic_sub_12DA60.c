// ADDR: 0x12f718
// SYMBOL: sub_12F718
int __fastcall sub_12F718(int a1, int a2, int a3)
{
  unsigned int v6; // r1
  int v7; // r5
  int v9; // r0
  int v10; // r6
  _BYTE v11[8]; // [sp+4h] [bp-24h] BYREF
  void *v12; // [sp+Ch] [bp-1Ch]

  if ( *(_BYTE *)(*(_DWORD *)(dword_23DEEC + 116) + 80) )
    return 0;
  v6 = sub_F0B30();
  if ( *(_DWORD *)(a1 + 88) > v6 )
    return 0;
  *(_DWORD *)(a1 + 136) = a2;
  *(_DWORD *)(a1 + 88) = v6 + 500;
  if ( *(_BYTE *)(dword_381BF4 + 133) || *(_BYTE *)(dword_381BF4 + 132) )
  {
    if ( *(_BYTE *)(a1 + 144) != 1 )
    {
      v7 = 1;
      sub_17C118();
      return v7;
    }
    return 0;
  }
  if ( (unsigned int)sub_F0B30() <= *(_DWORD *)(*(_DWORD *)(dword_23DEEC + 108) + 124) )
    return 0;
  if ( !sub_10BDC0(dword_2631B0) )
    sub_10BDA0(dword_2631B0, 1);
  v9 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 140) = *(_DWORD *)(a1 + 84);
  sub_12F820(v9);
  v10 = *(_DWORD *)(a1 + 108);
  std::string::basic_string(v11, a3);
  sub_12F86A(v10, v11);
  if ( v11[0] << 31 )
    operator delete(v12);
  if ( *(_BYTE *)(a1 + 80) != 1 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, 1);
  v7 = 1;
  *(_BYTE *)(a1 + 80) = 1;
  *(_BYTE *)(dword_23DEF0 + 84) = 0;
  return v7;
}


// ======================================================================
