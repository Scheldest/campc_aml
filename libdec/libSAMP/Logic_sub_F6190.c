// ADDR: 0xf61a4
// SYMBOL: sub_F61A4
int sub_F61A4()
{
  int v0; // r0
  _DWORD *v2; // r0

  v0 = (unsigned __int8)byte_2400D4;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_2400D4) )
  {
    v2 = (_DWORD *)operator new(4u);
    *v2 = 0;
    dword_2400D0 = (int)v2;
    _cxa_atexit((void (*)(void *))sub_F6218, &dword_2400D0, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_2400D4);
  }
  return dword_2400D0;
}


// ======================================================================
// ADDR: 0x15e868
// SYMBOL: sub_15E868
int __fastcall sub_15E868(int *a1, int a2)
{
  int v2; // r0

  v2 = sub_15E798(a1, a2);
  return sub_15F2BA(v2 + 20);
}


// ======================================================================
