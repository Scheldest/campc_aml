// ADDR: 0x17d744
// SYMBOL: sub_17D744
int __fastcall sub_17D744(_DWORD *a1, void *dest, size_t a3)
{
  int v4; // r0
  int v5; // r5

  v4 = a1[2];
  v5 = 8 * a3;
  if ( v4 << 29 )
    return sub_17D786((int)a1, (int)dest);
  if ( v4 + v5 > *a1 )
    return 0;
  j_memcpy(dest, (const void *)(a1[3] + (v4 >> 3)), a3);
  a1[2] += v5;
  return 1;
}


// ======================================================================
