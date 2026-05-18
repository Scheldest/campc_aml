// ADDR: 0x2166ee
// SYMBOL: sub_2166EE
bool __fastcall sub_2166EE(unsigned __int8 *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  while ( a1 != a2 && *a1 == *a3 )
  {
    ++a3;
    ++a1;
  }
  return a1 == a2;
}


// ======================================================================
