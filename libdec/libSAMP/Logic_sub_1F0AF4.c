// ADDR: 0x1f3478
// SYMBOL: sub_1F3478
void __fastcall sub_1F3478(std::nothrow_t *a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v2 )
    operator delete[](v2, a1);
}


// ======================================================================
