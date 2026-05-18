// ADDR: 0xf66c6
// SYMBOL: sub_F66C6
void *__fastcall sub_F66C6(int a1, const void *a2, int a3, _DWORD *a4)
{
  signed int v4; // r2
  void *result; // r0

  v4 = a3 - (_DWORD)a2;
  result = (void *)(*a4 - v4);
  *a4 = result;
  if ( v4 >= 1 )
    return j_memcpy(result, a2, v4);
  return result;
}


// ======================================================================
