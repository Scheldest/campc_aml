// ADDR: 0x220308
// SYMBOL: sub_220308
int __fastcall sub_220308(int a1, int a2, int a3)
{
  int result; // r0

  if ( a2 )
  {
    result = sub_21FE54(a1, a2, a3, &dword_38417C);
    if ( result == -2 )
    {
      *(_DWORD *)_errno(-2) = 84;
      return -1;
    }
  }
  else
  {
    result = 0;
    dword_38417C = 0;
  }
  return result;
}


// ======================================================================
