// ADDR: 0x10d5b4
// SYMBOL: sub_10D5B4
int *sub_10D5B4()
{
  int v0; // r0

  v0 = (unsigned __int8)byte_263264;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_263264) )
  {
    dword_263258 = 0;
    dword_26325C = 0;
    dword_263260 = 0;
    _cxa_atexit((void (*)(void *))sub_10D618, &dword_263258, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_263264);
  }
  return &dword_263258;
}


// ======================================================================
