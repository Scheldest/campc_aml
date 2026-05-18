// ADDR: 0x1630ac
// SYMBOL: sub_1630AC
int sub_1630AC()
{
  bool v0; // zf
  int (*v1)(void); // r1
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6768336);
    v0 = dword_23DF24 == -6768336;
    if ( dword_23DF24 != -6768336 )
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
