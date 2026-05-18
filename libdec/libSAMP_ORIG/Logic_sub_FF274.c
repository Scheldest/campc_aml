// ADDR: 0xff296
// SYMBOL: sub_FF296
bool __fastcall sub_FF296(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  while ( a1 != a2 && *a1 == *a3 )
  {
    ++a3;
    ++a1;
  }
  return a1 == a2;
}


// ======================================================================
