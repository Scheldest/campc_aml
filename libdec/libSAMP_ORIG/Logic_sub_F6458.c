// ADDR: 0xf650e
// SYMBOL: sub_F650E
char *__fastcall sub_F650E(int a1, const void *a2, int a3, void **a4)
{
  int v4; // r5
  char *result; // r0

  v4 = a3 - (_DWORD)a2;
  if ( a3 - (int)a2 >= 1 )
  {
    j_memcpy(*a4, a2, a3 - (_DWORD)a2);
    result = (char *)*a4 + v4;
    *a4 = result;
  }
  return result;
}


// ======================================================================
