// ADDR: 0xf6104
// SYMBOL: sub_F6104
int __fastcall sub_F6104(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r2

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6751268 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6751268);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
