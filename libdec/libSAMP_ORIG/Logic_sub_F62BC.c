// ADDR: 0xf631c
// SYMBOL: sub_F631C
int __fastcall sub_F631C(int result, unsigned int a2)
{
  if ( a2 > 0x1C || *(_BYTE *)(result + 112) )
    return operator new[](4 * a2);
  *(_BYTE *)(result + 112) = 1;
  return result;
}


// ======================================================================
