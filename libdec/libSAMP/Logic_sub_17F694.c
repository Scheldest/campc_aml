// ADDR: 0x17e5aa
// SYMBOL: sub_17E5AA
bool __fastcall sub_17E5AA(int a1, int a2)
{
  _BOOL4 result; // r0

  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 1;
  result = 0;
  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    return *(unsigned __int16 *)(a1 + 4) < (unsigned int)*(unsigned __int16 *)(a2 + 4);
  return result;
}


// ======================================================================
