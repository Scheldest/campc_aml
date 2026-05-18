// ADDR: 0xeb59c
// SYMBOL: sub_EB59C
int __fastcall sub_EB59C(__int64 a1)
{
  __int64 v1; // r4
  __int64 v2; // kr00_8
  int v3; // r1
  int v4; // r0
  int v5; // r2
  int v6; // r2
  bool v7; // cf
  _BYTE *v8; // r0
  int v9; // r1
  _DWORD v11[2]; // [sp+4h] [bp-24h] BYREF
  _BYTE *v12; // [sp+Ch] [bp-1Ch]

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
    v6 = v5 >> 4;
    if ( HIDWORD(a1) <= (int)a1 >> 3 )
      HIDWORD(a1) = (int)a1 >> 3;
    v7 = (unsigned int)a1 >= 0x7FFFFFF0;
    LODWORD(a1) = v11;
    if ( v7 )
      HIDWORD(a1) = 0xFFFFFFF;
    sub_E5D88(a1, v6, v1 + 8);
    v8 = v12;
    v9 = (unsigned __int8)*(_BYTE *)HIDWORD(v1);
    *v12 = v9;
    sub_E5EF8((int)(v8 + 8), v9);
    v12 += 16;
    sub_E5DD0((int *)v1, v11);
    sub_E5E26((int)v11);
    v4 = *(_DWORD *)(v1 + 4);
  }
  else
  {
    v3 = (unsigned __int8)*(_BYTE *)HIDWORD(a1);
    *(_BYTE *)v2 = v3;
    sub_E5EF8(v2 + 8, v3);
    v4 = v2 + 16;
    *(_DWORD *)(v1 + 4) = v2 + 16;
  }
  return v4 - 16;
}


// ======================================================================
