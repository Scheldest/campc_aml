// ADDR: 0xebc06
// SYMBOL: sub_EBC06
int __fastcall sub_EBC06(__int64 a1)
{
  __int64 v1; // r4
  __int64 v2; // kr00_8
  int v3; // r0
  int v4; // r2
  int v5; // r2
  bool v6; // cf
  int v7; // r6
  _DWORD v9[2]; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+Ch] [bp-1Ch]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 4);
  LODWORD(a1) = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v2 >= (unsigned int)a1 )
  {
    v4 = v2 - *(_DWORD *)v1;
    HIDWORD(a1) = (v4 >> 4) + 1;
    if ( HIDWORD(a1) >= 0x10000000 )
      std::__vector_base_common<true>::__throw_length_error(v1);
    LODWORD(a1) = a1 - *(_DWORD *)v1;
    v5 = v4 >> 4;
    if ( HIDWORD(a1) <= (int)a1 >> 3 )
      HIDWORD(a1) = (int)a1 >> 3;
    v6 = (unsigned int)a1 >= 0x7FFFFFF0;
    LODWORD(a1) = v9;
    if ( v6 )
      HIDWORD(a1) = 0xFFFFFFF;
    sub_E5D88(a1, v5, v1 + 8);
    v7 = v10;
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v7 + 12) = 0;
    *(_BYTE *)v7 = 3;
    *(_DWORD *)(v7 + 8) = sub_EA114(SHIDWORD(v1));
    v10 += 16;
    sub_E5DD0((int *)v1, v9);
    sub_E5E26((int)v9);
    v3 = *(_DWORD *)(v1 + 4);
  }
  else
  {
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    *(_BYTE *)v2 = 3;
    *(_DWORD *)(v2 + 8) = sub_EA114(SHIDWORD(a1));
    v3 = v2 + 16;
    *(_DWORD *)(v1 + 4) = v2 + 16;
  }
  return v3 - 16;
}


// ======================================================================
