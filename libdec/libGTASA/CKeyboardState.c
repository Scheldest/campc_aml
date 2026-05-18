
// Address: 0x3f82d4
// Original: _ZN14CKeyboardState5ClearEv
// Demangled: CKeyboardState::Clear(void)
char *__fastcall CKeyboardState::Clear(CKeyboardState *this)
{
  char *result; // r0

  memset(this, 0, 0x23Cu);
  *((_WORD *)this + 311) = 0;
  *(_QWORD *)((char *)this + 606) = 0LL;
  *(_QWORD *)((char *)this + 614) = 0LL;
  *(_QWORD *)((char *)this + 590) = 0LL;
  *(_QWORD *)((char *)this + 598) = 0LL;
  result = (char *)this + 574;
  *(_QWORD *)((char *)this + 574) = 0LL;
  *(_QWORD *)((char *)this + 582) = 0LL;
  return result;
}


// ============================================================
