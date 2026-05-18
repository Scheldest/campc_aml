// ADDR: 0x1eee4c
// SYMBOL: sub_1EEE4C
void **__fastcall sub_1EEE4C(int a1)
{
  void **i; // r5
  void **v3; // r6
  void *v4; // r0

  sub_1EEE78();
  v3 = *(void ***)(a1 + 8);
  for ( i = *(void ***)(a1 + 4); i != v3; ++i )
  {
    v4 = *i;
    operator delete(v4);
  }
  return sub_1EEE22((void **)a1);
}


// ======================================================================
