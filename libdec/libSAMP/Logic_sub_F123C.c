// ADDR: 0x1547c8
// SYMBOL: sub_1547C8
int __fastcall sub_1547C8(int a1)
{
  void *v2; // r1
  int v3; // r1
  std::__shared_weak_count *v4; // r0

  sub_154850();
  sub_156178(a1 + 136, *(_DWORD *)(a1 + 140));
  sub_E3F7A((unsigned __int8 *)(a1 + 96));
  v2 = *(void **)(a1 + 92);
  *(_DWORD *)(a1 + 92) = 0;
  if ( v2 )
    sub_15611C(a1 + 92, v2);
  v3 = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = 0;
  if ( v3 )
    sub_1561D2();
  sub_15BE48(a1 + 20);
  v4 = *(std::__shared_weak_count **)(a1 + 8);
  if ( v4 )
    std::__shared_weak_count::__release_weak(v4);
  return a1;
}


// ======================================================================
// ADDR: 0x2242d4
// SYMBOL: sub_2242D4
void __fastcall sub_2242D4(std::__shared_weak_count *a1)
{
  std::__shared_weak_count::~__shared_weak_count(a1);
}


// ======================================================================
