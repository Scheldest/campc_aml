// ADDR: 0x1f33b0
// SYMBOL: sub_1F33B0
int __fastcall sub_1F33B0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( result )
    return (*(int (**)(void))(a1 + 4))();
  return result;
}


// ======================================================================
