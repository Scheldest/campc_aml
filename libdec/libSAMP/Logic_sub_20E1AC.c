// ADDR: 0x20e20c
// SYMBOL: sub_20E20C
int __fastcall sub_20E20C(int result, unsigned int a2)
{
  if ( a2 > 0x1C || *(_BYTE *)(result + 112) )
    return operator new[](4 * a2);
  *(_BYTE *)(result + 112) = 1;
  return result;
}


// ======================================================================
