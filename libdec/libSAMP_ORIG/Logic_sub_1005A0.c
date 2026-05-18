// ADDR: 0x10068a
// SYMBOL: sub_10068A
int __fastcall sub_10068A(int a1)
{
  int v1; // r2

  v1 = *(unsigned __int8 *)(a1 + 5);
  if ( v1 == 2 )
    return (**(int (__fastcall ***)(int))a1)(a1);
  else
    return v1 == 0;
}


// ======================================================================
