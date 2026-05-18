// ADDR: 0x157f84
// SYMBOL: sub_157F84
void __fastcall sub_157F84(int a1, int a2)
{
  if ( *(unsigned __int8 *)(a2 + 16) << 31 )
    operator delete(*(void **)(a2 + 24));
  if ( *(unsigned __int8 *)(a2 + 4) << 31 )
    operator delete(*(void **)(a2 + 12), (const std::nothrow_t *)a2);
}


// ======================================================================
