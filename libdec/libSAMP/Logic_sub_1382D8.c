// ADDR: 0x139b94
// SYMBOL: sub_139B94
int __fastcall sub_139B94(_DWORD *a1)
{
  int v2; // r1
  unsigned int v3; // r0
  unsigned int v4; // r1
  __int64 v5; // r0

  v2 = a1[1];
  v3 = a1[4];
  v4 = *(_DWORD *)(v2 + 4 * (v3 / 0xAA)) + 24 * (v3 % 0xAA);
  if ( *(unsigned __int8 *)(v4 + 4) << 31 )
  {
    operator delete(*(void **)(v4 + 12));
    v3 = a1[4];
  }
  LODWORD(v5) = v3 + 1;
  HIDWORD(v5) = a1[5] - 1;
  *((_QWORD *)a1 + 2) = v5;
  return sub_139BE2(a1, 1);
}


// ======================================================================
// ADDR: 0x15e580
// SYMBOL: sub_15E580
bool __fastcall sub_15E580(unsigned int a1)
{
  int v1; // r1
  _DWORD *v2; // r0

  return dword_23DEF4
      && (v1 = **(_DWORD **)(dword_23DEF4 + 944)) != 0
      && a1 <= 0x3EC
      && *(_BYTE *)(v1 + a1 + 4020)
      && (v2 = *(_DWORD **)(v1 + 4 * a1 + 4)) != 0
      && *v2 != 0;
}


// ======================================================================
// ADDR: 0x15e670
// SYMBOL: sub_15E670
char *__fastcall sub_15E670(unsigned int a1)
{
  int v2; // r0
  _DWORD *v4; // r2

  if ( !dword_23DEF4 )
    return &byte_8F794;
  v2 = **(_DWORD **)(dword_23DEF4 + 944);
  if ( !v2 )
    return &byte_8F794;
  if ( *(unsigned __int16 *)(v2 + 5024) == a1 )
    return (char *)(v2 + 5026);
  if ( a1 <= 0x3EC && *(_BYTE *)(v2 + a1 + 4020) && (v4 = *(_DWORD **)(v2 + 4 * a1 + 4)) != 0 && *v4 )
    return (char *)sub_148E64(v2, a1);
  else
    return &byte_8F794;
}


// ======================================================================
