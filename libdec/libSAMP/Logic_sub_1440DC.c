// ADDR: 0x163108
// SYMBOL: sub_163108
int sub_163108()
{
  bool v0; // zf
  int (*v1)(void); // r3
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6770140);
    v0 = dword_23DF24 == -6770140;
    if ( dword_23DF24 != -6770140 )
    {
      v1 = *(int (**)(void))v1;
      v0 = v1 == 0;
    }
    if ( !v0 )
      return v1();
  }
  return result;
}


// ======================================================================
