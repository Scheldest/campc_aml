// ADDR: 0x12be7a
// SYMBOL: sub_12BE7A
char *__fastcall sub_12BE7A(int a1, char *dest, char *a3)
{
  int v5; // r0
  char *v6; // r2
  char *v7; // r1
  size_t v8; // r6

  if ( dest != a3 )
  {
    v5 = a3 - dest;
    v6 = *(char **)(a1 + 4);
    v7 = &dest[v5];
    v8 = v6 - &dest[v5];
    if ( v6 != &dest[v5] )
      j_memmove(dest, v7, v8);
    *(_DWORD *)(a1 + 4) = &dest[v8];
  }
  return dest;
}


// ======================================================================
