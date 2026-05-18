// ADDR: 0x126b98
// SYMBOL: sub_126B98
_DWORD *__fastcall sub_126B98(_DWORD *a1)
{
  void *v2; // r0

  sub_164196(dword_23DF24 + 6750476, a1[5], 0);
  sub_164196(dword_23DF24 + 6744176, a1[6], 0);
  sub_164196(dword_23DF24 + 6769104, a1[7], 0);
  sub_164196(dword_23DF24 + 6767976, a1[8], 0);
  sub_164196(dword_23DF24 + 6764380, a1[9], 0);
  v2 = *(void **)(dword_23DF24 + 6786768);
  if ( v2 )
    operator delete(v2);
  *(_DWORD *)(dword_23DF24 + 6786768) = a1[4];
  sub_127108(a1 + 1, a1[2]);
  return a1;
}


// ======================================================================
