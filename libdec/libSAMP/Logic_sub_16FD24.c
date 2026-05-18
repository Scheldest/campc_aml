// ADDR: 0x16dc80
// SYMBOL: sub_16DC80
int __fastcall sub_16DC80(_DWORD *a1)
{
  int result; // r0

  result = a1[2];
  if ( result )
  {
    *a1 = 0;
    a1[1] = 0;
    if ( dword_381B58 )
      --*(_DWORD *)(dword_381B58 + 880);
    result = off_2390B0(result, dword_381B60);
    a1[2] = 0;
  }
  return result;
}


// ======================================================================
