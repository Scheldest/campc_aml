// ADDR: 0x163b28
// SYMBOL: sub_163B28
int __fastcall sub_163B28(int a1)
{
  int v2; // r0

  v2 = (unsigned __int8)byte_381AB0;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_381AB0) )
  {
    dword_381AAC = dword_23DF24 + 7208964;
    j___cxa_guard_release((__guard *)&byte_381AB0);
  }
  return *(_DWORD *)(dword_381AAC + 4 * a1);
}


// ======================================================================
