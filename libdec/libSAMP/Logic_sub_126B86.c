// ADDR: 0x127108
// SYMBOL: sub_127108
void __fastcall sub_127108(int a1, unsigned __int8 *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_127108(a1, *(_DWORD *)a2);
    sub_127108(a1, *((_DWORD *)a2 + 1));
    if ( a2[24] << 31 )
      operator delete(*((void **)a2 + 8));
    operator delete(a2, v4);
  }
}


// ======================================================================
