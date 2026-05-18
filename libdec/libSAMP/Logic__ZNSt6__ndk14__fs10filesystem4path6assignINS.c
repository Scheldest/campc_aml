// ADDR: 0x1f3528
// SYMBOL: sub_1F3528
unsigned __int8 *__fastcall sub_1F3528(unsigned __int8 *result)
{
  if ( *result << 31 )
  {
    **((_BYTE **)result + 2) = 0;
    *((_DWORD *)result + 1) = 0;
  }
  else
  {
    *(_WORD *)result = 0;
  }
  return result;
}


// ======================================================================
