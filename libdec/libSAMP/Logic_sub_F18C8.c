// ADDR: 0x174194
// SYMBOL: sub_174194
int *__fastcall sub_174194(int *result, int *a2, float *a3, unsigned int a4, float a5, int a6)
{
  int *v9; // r5

  if ( a4 >= 0x1000000 )
  {
    v9 = result;
    if ( a5 <= 0.0 )
    {
      sub_172DC0((int)result, 6, 4);
      return sub_172EB6((int)v9, a2, a3, a4);
    }
    else
    {
      sub_173CBC((int)result, (float *)a2, a3, a5, a6);
      sub_173720((int)v9, (__int64 *)v9[24], v9[22], a4);
      result = 0;
      v9[22] = 0;
    }
  }
  return result;
}


// ======================================================================
