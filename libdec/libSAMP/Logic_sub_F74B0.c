// ADDR: 0xf7c96
// SYMBOL: sub_F7C96
void __fastcall sub_F7C96(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_F7C96(a1, *(_DWORD *)a2);
    sub_F7C96(a1, *((_DWORD *)a2 + 1));
    if ( a2[16] << 31 )
      operator delete(*((void **)a2 + 6));
    operator delete(a2, v4);
  }
}


// ======================================================================
