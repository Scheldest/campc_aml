// ADDR: 0x158c6c
// SYMBOL: sub_158C6C
_DWORD *__fastcall sub_158C6C(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0

  v2 = a1[2];
  *a1 = &off_22F5B4;
  sub_164AF4(v2);
  v3 = (void *)a1[3];
  if ( v3 )
  {
    a1[4] = v3;
    operator delete(v3);
  }
  return a1;
}


// ======================================================================
