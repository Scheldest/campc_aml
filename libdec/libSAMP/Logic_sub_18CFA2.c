// ADDR: 0x18d0f4
// SYMBOL: sub_18D0F4
int __fastcall sub_18D0F4(int a1)
{
  sub_18D110(a1, 0);
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
// ADDR: 0x18d110
// SYMBOL: sub_18D110
unsigned int __fastcall sub_18D110(int a1, int a2)
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
