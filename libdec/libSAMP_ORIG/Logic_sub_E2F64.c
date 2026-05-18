// ADDR: 0xe2f7e
// SYMBOL: sub_E2F7E
bool __fastcall sub_E2F7E(int *a1)
{
  int v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    if ( std::streambuf::sgetc(v2) != -1 )
      return *a1 == 0;
    *a1 = 0;
  }
  return 1;
}


// ======================================================================
