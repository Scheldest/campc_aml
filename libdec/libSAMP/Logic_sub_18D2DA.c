// ADDR: 0x18d30c
// SYMBOL: sub_18D30C
int __fastcall sub_18D30C(int a1)
{
  sub_18D390(a1, 0);
  if ( *(_DWORD *)(a1 + 8) && *(_DWORD *)a1 )
    operator delete[](*(void **)a1);
  return a1;
}


// ======================================================================
