// ADDR: 0x20f2c4
// SYMBOL: sub_20F2C4
int __fastcall sub_20F2C4(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( result )
    return (*(int (**)(void))(a1 + 4))();
  return result;
}


// ======================================================================
