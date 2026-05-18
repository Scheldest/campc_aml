// ADDR: 0x1ef5d6
// SYMBOL: sub_1EF5D6
int __fastcall sub_1EF5D6(int result, int *a2, int a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r2
  char *v5; // r3
  int v6; // r5

  v3 = *(_DWORD **)(result + 8);
  v4 = (a3 - (_DWORD)a2) & 0xFFFFFFFC;
  v5 = (char *)v3 + v4;
  while ( v4 )
  {
    v6 = *a2++;
    v4 -= 4;
    *v3++ = v6;
  }
  *(_DWORD *)(result + 8) = v5;
  return result;
}


// ======================================================================
// ADDR: 0x1ef5f2
// SYMBOL: sub_1EF5F2
int __fastcall sub_1EF5F2(_BYTE *src, _BYTE *a2, void *dest)
{
  size_t v3; // r5

  v3 = a2 - src;
  if ( a2 != src )
    j_memmove(dest, src, v3);
  return (int)dest + v3;
}


// ======================================================================
