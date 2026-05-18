// ADDR: 0x17a9b0
// SYMBOL: sub_17A9B0
void *__fastcall sub_17A9B0(void *src, size_t n)
{
  void *result; // r0
  int v5; // r5

  result = (void *)dword_381BF0;
  v5 = dword_381BF0 + n;
  if ( dword_381BF0 + n <= dword_381BE8 )
  {
    if ( dword_381BE4 <= (unsigned int)src )
      result = j_memcpy((void *)dword_381BF0, src, n);
    else
      v5 = dword_381BE8 + 1;
  }
  dword_381BF0 = v5;
  return result;
}


// ======================================================================
