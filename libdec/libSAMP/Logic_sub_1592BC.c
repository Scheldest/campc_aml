// ADDR: 0x126dbe
// SYMBOL: sub_126DBE
int __fastcall sub_126DBE(int a1, const void *a2, size_t n)
{
  size_t v3; // r5
  bool v5; // cf
  size_t v6; // r2
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  v5 = n >= v3;
  v6 = v3;
  if ( !v5 )
    v6 = n;
  if ( !v6 || (result = memcmp(*(const void **)a1, a2, v6)) == 0 )
  {
    if ( v3 == n )
    {
      return 0;
    }
    else
    {
      result = 1;
      if ( v3 < n )
        return -1;
    }
  }
  return result;
}


// ======================================================================
