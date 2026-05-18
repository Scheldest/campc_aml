// ADDR: 0x13d904
// SYMBOL: sub_13D904
_DWORD *__fastcall sub_13D904(_DWORD *a1)
{
  int v2; // r5

  sub_13DD5C();
  *a1 = &off_22F048;
  v2 = operator new(0x64u);
  sub_12BC78(v2);
  a1[24] = v2;
  *(_DWORD *)v2 = &off_22F080;
  *(_QWORD *)(v2 + 84) = 0LL;
  *(_QWORD *)(v2 + 92) = 0LL;
  sub_12BDF6((int)a1, v2);
  return a1;
}


// ======================================================================
