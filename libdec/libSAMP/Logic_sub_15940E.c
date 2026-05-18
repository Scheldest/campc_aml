// ADDR: 0x159450
// SYMBOL: sub_159450
int __fastcall sub_159450(int a1, int *a2, int a3)
{
  __int64 v4; // kr00_8
  int v7; // r0
  _BYTE v9[8]; // [sp+4h] [bp-2Ch] BYREF
  int v10; // [sp+Ch] [bp-24h]

  v4 = *(_QWORD *)(a1 + 4);
  if ( (unsigned int)v4 >= HIDWORD(v4) )
  {
    if ( (unsigned int)(-858993459 * (((int)v4 - *(_DWORD *)a1) >> 3) + 1) > 0x6666666 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    sub_159504(v9);
    sub_15917E(v10, *a2, a3);
    v10 += 40;
    sub_15955C(a1, v9);
    sub_1595DC(v9);
    v7 = *(_DWORD *)(a1 + 4);
  }
  else
  {
    sub_15917E(v4, *a2, a3);
    v7 = v4 + 40;
    *(_DWORD *)(a1 + 4) = v4 + 40;
  }
  return v7 - 40;
}


// ======================================================================
