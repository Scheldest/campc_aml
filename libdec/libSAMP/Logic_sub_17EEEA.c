// ADDR: 0x180eac
// SYMBOL: sub_180EAC
void __fastcall sub_180EAC(int a1, int a2)
{
  void *v3; // r0

  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      v3 = *(void **)(a2 + 20);
      if ( v3 )
        operator delete(v3);
    }
    opus_decoder_destroy_0(a2, a2);
  }
}


// ======================================================================
