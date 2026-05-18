// ADDR: 0x117eec
// SYMBOL: sub_117EEC
int sub_117EEC(int a1, int a2, int a3, const char *a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, a2, a4, va);
}


// ======================================================================
// ADDR: 0x163588
// SYMBOL: sub_163588
int **__fastcall sub_163588(int **result, float a2, float a3, float a4, float a5, float a6, int a7)
{
  float v8; // s0
  float v9; // s4
  int v10; // r3

  v8 = a6;
  v9 = a5;
  if ( *result )
  {
    v10 = **result;
    if ( v10 )
    {
      if ( a4 == 0.0 )
        a4 = (float)*(int *)(v10 + 12);
      if ( a5 == 0.0 )
        v9 = (float)*(int *)(v10 + 16);
    }
  }
  if ( a6 > 0.0 && a4 != 0.0 )
  {
    if ( a6 > 1.0 )
      v8 = 1.0;
    return sub_163444(
             result,
             a2,
             (float)(v9 - (float)(v8 * v9)) + a3,
             a4,
             v8 * v9,
             a7,
             0,
             0.0,
             1.0,
             0.0,
             0.0,
             v8,
             1.0,
             v8);
  }
  return result;
}


// ======================================================================
