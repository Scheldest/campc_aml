// ADDR: 0xe2a7c
// SYMBOL: sub_E2A7C
unsigned __int8 *__fastcall sub_E2A7C(_DWORD **a1, unsigned __int8 *a2, int a3)
{
  unsigned int v4; // r3
  unsigned int v7; // r6
  unsigned int v8; // r2
  unsigned int v9; // r12
  unsigned int v10; // r4
  unsigned int v11; // r1
  unsigned int v12; // r0
  int v13; // r3
  unsigned int v14; // r6
  bool v15; // cc
  int v16; // r2
  unsigned int v17; // r0
  bool v18; // zf
  _DWORD *v19; // r0

  v4 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v10 = ((0x80FF0000 >> (*a2 >> 3)) & 1) + byte_91EB0[v4 >> 3];
  v11 = dword_91EF8[v10];
  v12 = (((v7 & 0x3F) << 12) | ((dword_91ED0[v10] & v4) << 18) | ((v8 & 0x3F) << 6)) + (v9 & 0x3F);
  v13 = (v7 >> 2) & 0x30;
  v14 = v12 >> v11;
  v15 = dword_91EE4[v10] > v12 >> v11;
  v16 = (((v8 >> 4) & 0xC) + v13) | (v9 >> 6);
  v17 = v12 >> v11 >> 16;
  if ( v15 )
    v16 += 64;
  if ( v17 > 0x10 )
    v16 += 256;
  if ( (v14 & 0xFFFFF800) == 0xD800 )
    v16 |= 0x80u;
  if ( (v16 ^ 0x2Au) >> dword_91F0C[v10] )
    v14 = -1;
  if ( v14 >= 0x20 && v14 != 34 )
  {
    v18 = v14 == 92;
    if ( v14 != 92 )
      v18 = v14 == 127;
    if ( !v18 && fmt::v8::detail::is_printable((fmt::v8::detail *)v14, v11) )
      return &a2[v10];
  }
  v19 = *a1;
  *v19 = a3;
  v19[1] = a3 + v10;
  v19[2] = v14;
  return 0;
}


// ======================================================================
