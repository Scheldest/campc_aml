// ADDR: 0x1fb09a
// SYMBOL: sub_1FB09A
bool __fastcall sub_1FB09A(int *a1)
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
