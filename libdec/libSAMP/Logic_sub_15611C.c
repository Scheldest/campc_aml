// ADDR: 0x15614c
// SYMBOL: sub_15614C
void __fastcall sub_15614C(int a1, int a2)
{
  if ( a2 )
  {
    if ( *(unsigned __int8 *)(a2 + 16) << 31 )
      operator delete(*(void **)(a2 + 24));
    if ( *(unsigned __int8 *)(a2 + 4) << 31 )
      operator delete(*(void **)(a2 + 12));
    operator delete((void *)a2, (const std::nothrow_t *)a2);
  }
}


// ======================================================================
