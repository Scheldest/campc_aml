// ADDR: 0x10e2b8
// SYMBOL: sub_10E2B8
void __fastcall sub_10E2B8(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_10E2B8(a1, *(_DWORD *)a2);
    sub_10E2B8(a1, *((_DWORD *)a2 + 1));
    if ( a2[20] << 31 )
      operator delete(*((void **)a2 + 7));
    operator delete(a2, v4);
  }
}


// ======================================================================
