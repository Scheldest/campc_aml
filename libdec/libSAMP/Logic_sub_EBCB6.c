// ADDR: 0xebd6c
// SYMBOL: sub_EBD6C
int __fastcall sub_EBD6C(__int64 a1)
{
  __int64 v1; // r4
  __int64 v2; // kr00_8
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r2
  bool v7; // cf
  int v8; // r2
  int v9; // r0
  int v10; // r2
  int v11; // r3
  _DWORD v13[2]; // [sp+4h] [bp-24h] BYREF
  int v14; // [sp+Ch] [bp-1Ch]

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 4);
  LODWORD(a1) = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)v2 >= (unsigned int)a1 )
  {
    v6 = v2 - *(_DWORD *)v1;
    HIDWORD(a1) = (v6 >> 4) + 1;
    if ( HIDWORD(a1) >= 0x10000000 )
      std::__vector_base_common<true>::__throw_length_error(v1);
    LODWORD(a1) = a1 - *(_DWORD *)v1;
    if ( HIDWORD(a1) <= (int)a1 >> 3 )
      HIDWORD(a1) = (int)a1 >> 3;
    v7 = (unsigned int)a1 >= 0x7FFFFFF0;
    v8 = v6 >> 4;
    LODWORD(a1) = v13;
    if ( v7 )
      HIDWORD(a1) = 0xFFFFFFF;
    sub_E5D88(a1, v8, v1 + 8);
    v9 = v14;
    *(_DWORD *)(v14 + 8) = 0;
    v10 = *(_DWORD *)HIDWORD(v1);
    *(_DWORD *)(v9 + 12) = 0;
    v11 = *(_DWORD *)(HIDWORD(v1) + 4);
    *(_BYTE *)v9 = 0;
    sub_EAFFC((unsigned __int8 *)v9, 0, v10, v11);
    v14 += 16;
    sub_E5DD0((int *)v1, v13);
    sub_E5E26((int)v13);
    v5 = *(_DWORD *)(v1 + 4);
  }
  else
  {
    *(_DWORD *)(v2 + 8) = 0;
    v3 = *(_DWORD *)HIDWORD(a1);
    *(_DWORD *)(v2 + 12) = 0;
    v4 = *(_DWORD *)(HIDWORD(a1) + 4);
    *(_BYTE *)v2 = 0;
    sub_EAFFC((unsigned __int8 *)v2, SHIDWORD(a1), v3, v4);
    v5 = v2 + 16;
    *(_DWORD *)(v1 + 4) = v2 + 16;
  }
  return v5 - 16;
}


// ======================================================================
