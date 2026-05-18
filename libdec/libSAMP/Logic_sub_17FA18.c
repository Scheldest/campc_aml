// ADDR: 0x1848ea
// SYMBOL: sub_1848EA
unsigned int __fastcall sub_1848EA(int a1, int a2)
{
  unsigned int result; // r0

  result = *(_DWORD *)(a1 + 8);
  if ( result )
  {
    if ( result > 0x200 && !a2 )
    {
      if ( *(_DWORD *)a1 )
        operator delete[](*(void **)a1);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    result = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return result;
}


// ======================================================================
