// ADDR: 0x108420
// SYMBOL: sub_108420
bool __fastcall sub_108420(unsigned int a1)
{
  _DWORD *v1; // r0
  _BOOL4 result; // r0

  result = 0;
  if ( a1 <= 0x4E20 )
  {
    v1 = *(_DWORD **)(*(_DWORD *)(dword_23DF24 + 6788820) + 4 * a1);
    if ( v1 )
    {
      if ( *v1 != -20 )
        return 1;
    }
  }
  return result;
}


// ======================================================================
