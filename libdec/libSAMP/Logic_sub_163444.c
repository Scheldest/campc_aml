// ADDR: 0x163504
// SYMBOL: sub_163504
int __fastcall sub_163504(
        int a1,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11)
{
  int v11; // r12
  int (__fastcall **v12)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // lr
  bool v13; // zf

  v11 = 0;
  v12 = (int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))dword_23DF24;
  v13 = dword_23DF24 == 0;
  if ( dword_23DF24 )
  {
    v12 = (int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(dword_23DF24 + 6761048);
    v13 = dword_23DF24 == -6761048;
  }
  if ( !v13 )
  {
    if ( *v12 )
      return (*v12)(
               a1,
               a2,
               a3,
               a4,
               LODWORD(a5),
               LODWORD(a6),
               LODWORD(a7),
               LODWORD(a8),
               LODWORD(a9),
               LODWORD(a10),
               LODWORD(a11));
    else
      return 0;
  }
  return v11;
}


// ======================================================================
