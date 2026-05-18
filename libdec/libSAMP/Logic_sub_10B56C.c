// ADDR: 0x108640
// SYMBOL: sub_108640
int __fastcall sub_108640(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r2

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6771992 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6771992);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
