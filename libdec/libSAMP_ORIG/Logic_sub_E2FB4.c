// ADDR: 0xe2fce
// SYMBOL: sub_E2FCE
bool __fastcall sub_E2FCE(int *a1)
{
  int v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    if ( std::wstreambuf::sgetc(v2) != -1 )
      return *a1 == 0;
    *a1 = 0;
  }
  return 1;
}


// ======================================================================
