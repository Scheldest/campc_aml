// ADDR: 0xeb862
// SYMBOL: sub_EB862
int __fastcall sub_EB862(__int64 a1)
{
  __int64 v1; // r4
  __int64 v2; // kr00_8
  int v3; // r1
  int v4; // r0
  int v5; // r2
  bool v6; // cf
  int v7; // r2
  int v8; // r0
  int v9; // r1
  _DWORD v11[2]; // [sp+4h] [bp-24h] BYREF
  int v12; // [sp+Ch] [bp-1Ch]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 4);
  LODWORD(a1) = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v2 >= (unsigned int)a1 )
  {
    v5 = v2 - *(_DWORD *)v1;
    HIDWORD(a1) = (v5 >> 4) + 1;
    if ( HIDWORD(a1) >= 0x10000000 )
      std::__vector_base_common<true>::__throw_length_error(v1);
    LODWORD(a1) = a1 - *(_DWORD *)v1;
    if ( HIDWORD(a1) <= (int)a1 >> 3 )
      HIDWORD(a1) = (int)a1 >> 3;
    v6 = (unsigned int)a1 >= 0x7FFFFFF0;
    v7 = v5 >> 4;
    LODWORD(a1) = v11;
    if ( v6 )
      HIDWORD(a1) = 0xFFFFFFF;
    sub_E5D88(a1, v7, v1 + 8);
    v8 = v12;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v8 + 12) = 0;
    v9 = (unsigned __int8)*(_BYTE *)HIDWORD(v1);
    *(_BYTE *)v8 = 0;
    sub_EA862((unsigned __int8 *)v8, v9);
    v12 += 16;
    sub_E5DD0((int *)v1, v11);
    sub_E5E26((int)v11);
    v4 = *(_DWORD *)(v1 + 4);
  }
  else
  {
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v3 = (unsigned __int8)*(_BYTE *)HIDWORD(a1);
    *(_BYTE *)v2 = 0;
    sub_EA862((unsigned __int8 *)v2, v3);
    v4 = v2 + 16;
    *(_DWORD *)(v1 + 4) = v2 + 16;
  }
  return v4 - 16;
}


// ======================================================================
