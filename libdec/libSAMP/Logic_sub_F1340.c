// ADDR: 0x10bb92
// SYMBOL: sub_10BB92
int __fastcall sub_10BB92(int a1)
{
  std::__shared_weak_count *v2; // r0

  sub_10BDE6(a1 + 72);
  v2 = *(std::__shared_weak_count **)(a1 + 4);
  if ( v2 )
    std::__shared_weak_count::__release_weak(v2);
  return a1;
}


// ======================================================================
