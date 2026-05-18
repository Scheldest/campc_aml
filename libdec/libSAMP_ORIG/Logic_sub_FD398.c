// ADDR: 0xfd3de
// SYMBOL: sub_FD3DE
void *__fastcall sub_FD3DE(int a1, const void *a2, int a3, _DWORD *a4)
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
