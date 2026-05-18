// ADDR: 0x1633dc
// SYMBOL: sub_1633DC
int __fastcall sub_1633DC(
        int result,
        int a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  bool v10; // zf
  int (__fastcall *v11)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int); // r12

  if ( dword_23DF24 )
  {
    v11 = (int (__fastcall *)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(dword_23DF24 + 6762268);
    v10 = dword_23DF24 == -6762268;
    if ( dword_23DF24 != -6762268 )
    {
      v11 = *(int (__fastcall **)(int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))v11;
      v10 = v11 == 0;
    }
    if ( !v10 )
      return v11(result, a2, a3, a4, LODWORD(a5), LODWORD(a6), LODWORD(a7), LODWORD(a8), LODWORD(a9), a10);
  }
  return result;
}


// ======================================================================
