// ADDR: 0x206488
// SYMBOL: sub_206488
std::__shared_count **__fastcall sub_206488(std::__shared_count **a1)
{
  std::__shared_count *v2; // r0

  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    std::__shared_count::__release_shared(v2);
  return a1;
}


// ======================================================================
