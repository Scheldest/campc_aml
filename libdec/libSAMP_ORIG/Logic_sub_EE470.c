// ADDR: 0xee5d0
// SYMBOL: sub_EE5D0
std::__shared_count **__fastcall sub_EE5D0(std::__shared_count **a1)
{
  std::__shared_count *v2; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    std::__shared_count::__release_shared(v2);
  return a1;
}


// ======================================================================
