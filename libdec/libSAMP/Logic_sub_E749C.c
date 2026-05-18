// ADDR: 0xe8994
// SYMBOL: sub_E8994
unsigned int __fastcall sub_E8994(_DWORD *a1, unsigned __int8 *a2)
{
  unsigned int v3; // r0
  int v4; // r2
  unsigned int v6; // r1
  int v7; // r3
  int v8; // r2
  unsigned int result; // r0
  bool v10; // zf
  int v11; // r3
  int v12; // r2

  v3 = a1[1];
  v4 = a1[2];
  if ( v3 == 32 * v4 )
  {
    if ( (int)(v3 + 1) <= -1 )
      std::__vector_base_common<true>::__throw_length_error(a1);
    if ( v3 > 0x3FFFFFFE )
    {
      v6 = 0x7FFFFFFF;
    }
    else
    {
      v6 = (v3 + 32) & 0xFFFFFFE0;
      if ( v6 <= v4 << 6 )
        v6 = v4 << 6;
    }
    sub_E8A02(a1, v6);
    v3 = a1[1];
  }
  v7 = *a2;
  a1[1] = v3 + 1;
  v8 = 1 << (v3 & 0x1F);
  result = v3 >> 5;
  v10 = v7 == 0;
  v11 = *(_DWORD *)(*a1 + 4 * result);
  if ( v10 )
    v12 = v11 & ~v8;
  else
    v12 = v8 | v11;
  *(_DWORD *)(*a1 + 4 * result) = v12;
  return result;
}


// ======================================================================
