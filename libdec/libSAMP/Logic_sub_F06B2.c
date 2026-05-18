// ADDR: 0xf06c4
// SYMBOL: sub_F06C4
void *sub_F06C4()
{
  int v0; // r0

  v0 = (unsigned __int8)byte_23DED4;
  __dmb(0xBu);
  if ( !(v0 << 31) && j___cxa_guard_acquire((__guard *)&byte_23DED4) )
  {
    _cxa_atexit((void (*)(void *))std::mutex::~mutex, &unk_23DED0, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_23DED4);
  }
  return &unk_23DED0;
}


// ======================================================================
