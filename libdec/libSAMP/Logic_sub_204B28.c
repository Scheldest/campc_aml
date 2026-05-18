// ADDR: 0x206408
// SYMBOL: sub_206408
int __fastcall sub_206408(int a1, std::__shared_count *this, unsigned int a3)
{
  int v6; // r1
  int *v7; // r6
  int v8; // t1
  std::__shared_count *v9; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  std::__shared_count::__add_shared(this);
  v8 = *(_DWORD *)(a1 + 8);
  v7 = (int *)(a1 + 8);
  v6 = v8;
  v11[0] = this;
  if ( a3 >= (v7[1] - v8) >> 2 )
  {
    sub_206504(v7, a3 + 1);
    v6 = *v7;
  }
  v9 = *(std::__shared_count **)(v6 + 4 * a3);
  if ( v9 )
  {
    std::__shared_count::__release_shared(v9);
    v6 = *v7;
  }
  v11[0] = 0;
  *(_DWORD *)(v6 + 4 * a3) = this;
  sub_206488(v11);
  return v11[1];
}


// ======================================================================
