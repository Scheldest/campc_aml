// ADDR: 0x1631dc
// SYMBOL: sub_1631DC
int __fastcall sub_1631DC(int result, int a2, int a3, int a4, float a5, int a6)
{
  bool v6; // zf
  int (__fastcall *v7)(int, int, int, int, _DWORD, int); // r12

  if ( dword_23DF24 )
  {
    v7 = (int (__fastcall *)(int, int, int, int, _DWORD, int))(dword_23DF24 + 6746388);
    v6 = dword_23DF24 == -6746388;
    if ( dword_23DF24 != -6746388 )
    {
      v7 = *(int (__fastcall **)(int, int, int, int, _DWORD, int))v7;
      v6 = v7 == 0;
    }
    if ( !v6 )
      return v7(result, a2, a3, a4, LODWORD(a5), a6);
  }
  return result;
}


// ======================================================================
