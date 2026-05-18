// ADDR: 0x10944e
// SYMBOL: sub_10944E
int __fastcall sub_10944E(int a1)
{
  if ( a1 && *(_DWORD *)a1 )
    return (*(int (**)(void))(*(_DWORD *)a1 + 20))();
  else
    return 0;
}


// ======================================================================
