// ADDR: 0x11a5b4
// SYMBOL: sub_11A5B4
int __fastcall sub_11A5B4(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r3

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6752144 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6752144);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1273f0
// SYMBOL: sub_1273F0
char *sub_1273F0()
{
  return byte_313AA8;
}


// ======================================================================
