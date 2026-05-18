// ADDR: 0xf7474
// SYMBOL: sub_F7474
int __fastcall sub_F7474(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( result )
    return (*(int (**)(void))(a1 + 4))();
  return result;
}


// ======================================================================
