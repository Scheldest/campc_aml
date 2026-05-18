// ADDR: 0x15e4f4
// SYMBOL: sub_15E4F4
int sub_15E4F4()
{
  int result; // r0

  result = dword_23DEEC;
  if ( dword_23DEEC )
  {
    result = *(_DWORD *)(dword_23DEEC + 132);
    if ( result )
      return sub_1380DC(result);
  }
  return result;
}


// ======================================================================
