// ADDR: 0x174be2
// SYMBOL: sub_174BE2
int *__fastcall sub_174BE2(int *result, int a2, int *a3, __int64 *a4, int *a5, __int64 *a6, unsigned int a7)
{
  int *v7; // r4
  int v8; // r0

  if ( a7 >= 0x1000000 )
  {
    v7 = result;
    v8 = result[19];
    if ( v8 && *(_DWORD *)(v7[21] + 4 * v8 - 4) == a2 )
    {
      sub_172DC0((int)v7, 6, 4);
      return sub_172F38((int)v7, a3, a4, a5, a6, a7);
    }
    else
    {
      sub_172D4E(v7, a2);
      sub_172DC0((int)v7, 6, 4);
      sub_172F38((int)v7, a3, a4, a5, a6, a7);
      --v7[19];
      return (int *)sub_172B7A(v7);
    }
  }
  return result;
}


// ======================================================================
