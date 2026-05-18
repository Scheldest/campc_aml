// ADDR: 0xfaad0
// SYMBOL: sub_FAAD0
_DWORD *__fastcall sub_FAAD0(_DWORD *a1)
{
  int v1; // r1
  std::__shared_weak_count *v3; // r0

  v1 = a1[4];
  if ( v1 )
    sub_164196(dword_23DF24 + 6752264, v1, 0);
  sub_FAB24(a1 + 1);
  v3 = (std::__shared_weak_count *)a1[3];
  a1[1] = &off_22AE84;
  if ( v3 )
    std::__shared_weak_count::__release_weak(v3);
  return a1;
}


// ======================================================================
