// ADDR: 0xe046c
// SYMBOL: sub_E046C
int __fastcall sub_E046C(int a1, const void *a2, size_t a3)
{
  size_t v3; // r5
  size_t v4; // r4
  int result; // r0
  int v6; // r1

  v3 = *(_DWORD *)(a1 + 4);
  v4 = a3;
  if ( v3 < a3 )
    a3 = *(_DWORD *)(a1 + 4);
  if ( !a3 || (result = memcmp(*(const void **)a1, a2, a3)) == 0 )
  {
    v6 = 1;
    if ( v3 < v4 )
      v6 = -1;
    result = v3 - v4;
    if ( v3 != v4 )
      return v6;
  }
  return result;
}


// ======================================================================
