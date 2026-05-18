// ADDR: 0x20e348
// SYMBOL: sub_20E348
unsigned __int64 __fastcall sub_20E348(unsigned int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r4
  unsigned __int64 v6; // [sp+0h] [bp-18h] BYREF
  unsigned int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]

  HIDWORD(v6) = a2;
  v7 = a3;
  v8 = a4;
  v4 = *(_DWORD *)(a1 + 4);
  v6 = __PAIR64__(v4, a1);
  v7 = v4 + 4 * a4;
  sub_20E3FE(a1 + 16, a2, a3, (char *)&v6 + 4);
  *(_DWORD *)(v6 + 4) = HIDWORD(v6);
  return v6;
}


// ======================================================================
// ADDR: 0x20e390
// SYMBOL: sub_20E390
_DWORD *__fastcall sub_20E390(_DWORD *result)
{
  void *v1; // r1
  _DWORD *v2; // r4

  v1 = (void *)*result;
  if ( *result )
  {
    v2 = result;
    result[1] = v1;
    sub_20E22A((int)(result + 4), v1);
    result = 0;
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x20e3b4
// SYMBOL: sub_20E3B4
int __fastcall sub_20E3B4(_DWORD *a1, unsigned int a2)
{
  int v2; // r0

  if ( a2 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v2 = a1[2] - *a1;
  if ( a2 <= v2 >> 1 )
    a2 = v2 >> 1;
  if ( (unsigned int)v2 >= 0x7FFFFFFC )
    return 0x3FFFFFFF;
  return a2;
}


// ======================================================================
// ADDR: 0x20e3e4
// SYMBOL: sub_20E3E4
int __fastcall sub_20E3E4(_BYTE *src, _BYTE *a2, void *dest)
{
  size_t v3; // r5

  v3 = a2 - src;
  if ( a2 != src )
    j_memmove(dest, src, v3);
  return (int)dest + v3;
}


// ======================================================================
