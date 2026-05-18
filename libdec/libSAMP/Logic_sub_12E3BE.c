// ADDR: 0x12e5a0
// SYMBOL: sub_12E5A0
int __fastcall sub_12E5A0(int a1, unsigned int *a2)
{
  __int64 v4; // kr00_8
  unsigned int v5; // r0
  unsigned int v6; // r2
  int result; // r0
  int v8; // r2
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  _QWORD *v12; // r0
  _BYTE v13[8]; // [sp+4h] [bp-24h] BYREF
  _QWORD *v14; // [sp+Ch] [bp-1Ch]

  v4 = *(_QWORD *)(a1 + 4);
  if ( (unsigned int)v4 >= HIDWORD(v4) )
  {
    v8 = v4 - *(_DWORD *)a1;
    v9 = (v8 >> 3) + 1;
    if ( v9 >= 0x20000000 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    v10 = HIDWORD(v4) - *(_DWORD *)a1;
    if ( (unsigned int)v4 <= v10 >> 2 )
      v9 = v10 >> 2;
    v11 = v8 >> 3;
    if ( (unsigned int)v10 >= 0x7FFFFFF8 )
      v9 = 0x1FFFFFFF;
    sub_12E640(v13, v9, v11, a1 + 8);
    v12 = v14;
    *v14 = *(_QWORD *)a2;
    *a2 = 0;
    a2[1] = 0;
    v14 = v12 + 1;
    sub_12E688(a1, v13);
    return sub_12E6D8(v13);
  }
  else
  {
    v6 = a2[1];
    v5 = *a2;
    *(_DWORD *)(a1 + 4) = v4 + 8;
    *(_QWORD *)v4 = __PAIR64__(v6, v5);
    result = 0;
    *a2 = 0;
    a2[1] = 0;
  }
  return result;
}


// ======================================================================
