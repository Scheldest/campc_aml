// ADDR: 0x111ca0
// SYMBOL: sub_111CA0
int __fastcall sub_111CA0(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r0

  v2 = a1 + 4;
  std::mutex::lock((std::mutex *)(a1 + 4));
  v5 = (_DWORD *)sub_111E0C(a1 + 8);
  *(_DWORD *)(*(_DWORD *)a2 + 4) = (v5[1] - *v5) >> 3;
  sub_111D6E(v5, a2);
  return sub_224304(v2);
}


// ======================================================================
