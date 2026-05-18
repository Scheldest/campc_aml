// ADDR: 0xf5fc8
// SYMBOL: sub_F5FC8
int __fastcall sub_F5FC8(int a1, int a2)
{
  int v2; // r12
  int (__fastcall **v3)(int, int); // lr
  bool v4; // zf

  v2 = 0;
  v3 = (int (__fastcall **)(int, int))dword_23DF24;
  v4 = dword_23DF24 == 0;
  if ( dword_23DF24 )
  {
    v3 = (int (__fastcall **)(int, int))(dword_23DF24 + 6747744);
    v4 = dword_23DF24 == -6747744;
  }
  if ( !v4 )
  {
    if ( *v3 )
      return (*v3)(a1, a2);
    else
      return 0;
  }
  return v2;
}


// ======================================================================
