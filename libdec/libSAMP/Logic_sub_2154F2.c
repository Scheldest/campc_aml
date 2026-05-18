// ADDR: 0x2155ba
// SYMBOL: sub_2155BA
unsigned int __fastcall sub_2155BA(int a1, int a2)
{
  unsigned int result; // r0
  __int64 v4; // kr00_8
  size_t v5; // r1
  void *v6; // r0

  v4 = *(_QWORD *)(a1 + 4);
  result = *(_DWORD *)(a1 + 8);
  v5 = a2 + v4;
  if ( v5 >= result )
  {
    if ( v5 <= 2 * result )
      v5 = 2 * result;
    v6 = *(void **)a1;
    *(_DWORD *)(a1 + 8) = v5;
    result = (unsigned int)realloc(v6, v5);
    *(_DWORD *)a1 = result;
    if ( !result )
      std::terminate();
  }
  return result;
}


// ======================================================================
