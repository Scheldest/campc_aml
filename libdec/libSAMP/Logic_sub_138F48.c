// ADDR: 0x138f68
// SYMBOL: sub_138F68
void __fastcall sub_138F68(int a1, int a2)
{
  if ( *(unsigned __int8 *)(a2 + 16) << 31 )
    operator delete(*(void **)(a2 + 24));
  if ( *(unsigned __int8 *)(a2 + 4) << 31 )
    operator delete(*(void **)(a2 + 12), (const std::nothrow_t *)a2);
}


// ======================================================================
