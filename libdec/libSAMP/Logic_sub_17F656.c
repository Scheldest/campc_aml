// ADDR: 0x182356
// SYMBOL: sub_182356
int __fastcall sub_182356(int a1)
{
  double *v1; // r2
  int result; // r0

  v1 = (double *)(a1 + 2056);
  result = 1;
  if ( *v1 <= 0.0 && !*(_WORD *)(a1 + 2064) )
  {
    result = *(unsigned __int16 *)(a1 + 2066);
    if ( *(_WORD *)(a1 + 2066) )
      return 1;
  }
  return result;
}


// ======================================================================
