// ADDR: 0x12fef4
// SYMBOL: sub_12FEF4
_DWORD *__fastcall sub_12FEF4(_DWORD *a1)
{
  int v2; // r6
  _DWORD *v3; // r5

  sub_13D71C(a1, 1);
  v2 = 27;
  *a1 = &off_22DEAC;
  do
  {
    v3 = (_DWORD *)operator new(0x6Cu);
    sub_13D71C(v3, 0);
    a1[v2] = v3;
    *v3 = &off_22DEE4;
    sub_12BDF6((int)a1, (int)v3);
    ++v2;
  }
  while ( v2 != 31 );
  return a1;
}


// ======================================================================
