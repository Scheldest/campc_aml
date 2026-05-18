// ADDR: 0x163176
// SYMBOL: sub_163176
int **__fastcall sub_163176(int **result, int a2, int a3, float a4, float a5, int a6)
{
  float v7; // s0
  int v8; // r3

  v7 = a5;
  if ( *result )
  {
    v8 = **result;
    if ( v8 )
    {
      if ( a4 == 0.0 )
        a4 = (float)*(int *)(v8 + 12);
      if ( a5 == 0.0 )
        v7 = (float)*(int *)(v8 + 16);
    }
  }
  if ( a4 != 0.0 )
    return (int **)sub_1631DC((int)result, a2, a3, SLODWORD(a4), v7, a6);
  return result;
}


// ======================================================================
