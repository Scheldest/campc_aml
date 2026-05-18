// ADDR: 0x15e4bc
// SYMBOL: sub_15E4BC
int *__fastcall sub_15E4BC(int a1, unsigned __int8 *a2)
{
  int *result; // r0

  result = (int *)dword_23DEEC;
  if ( dword_23DEEC )
  {
    result = *(int **)(dword_23DEEC + 132);
    if ( result )
      return sub_137B98((int)result, a2, a1);
  }
  return result;
}


// ======================================================================
