// ADDR: 0x163f70
// SYMBOL: sub_163F70
int sub_163F70()
{
  return *(_DWORD *)(dword_23DF24 + 6778636) + 13;
}


// ======================================================================
// ADDR: 0x163fa8
// SYMBOL: sub_163FA8
int sub_163FA8()
{
  return *(_DWORD *)(dword_23DF24 + 6785656);
}


// ======================================================================
// ADDR: 0x163fc0
// SYMBOL: sub_163FC0
int sub_163FC0()
{
  int result; // r0
  int (**v1)(void); // r1

  result = 0;
  if ( dword_23DF24 )
  {
    v1 = (int (**)(void))(dword_23DF24 + 6769340);
    if ( dword_23DF24 != -6769340 )
    {
      if ( *v1 )
        return (*v1)();
      else
        return 0;
    }
  }
  return result;
}


// ======================================================================
