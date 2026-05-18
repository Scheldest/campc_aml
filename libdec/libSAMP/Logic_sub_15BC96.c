// ADDR: 0x15bcc8
// SYMBOL: sub_15BCC8
size_t __fastcall sub_15BCC8(int a1, unsigned int a2, size_t n, char *dest)
{
  unsigned int v5; // r0
  unsigned int v8; // r5
  unsigned int v9; // r9
  size_t v10; // r4

  v5 = *(_DWORD *)a1;
  if ( v5 <= a2 )
  {
    v8 = 0;
    goto LABEL_5;
  }
  v8 = a2;
  if ( a2 + n <= v5 )
  {
LABEL_5:
    j_memcpy(dest, (const void *)(*(_DWORD *)(a1 + 8) + v8), n);
    return n + v8;
  }
  v9 = v5 - a2;
  j_memcpy(dest, (const void *)(*(_DWORD *)(a1 + 8) + a2), v5 - a2);
  v10 = n - v9;
  j_memcpy(&dest[v9], *(const void **)(a1 + 8), v10);
  return v10;
}


// ======================================================================
