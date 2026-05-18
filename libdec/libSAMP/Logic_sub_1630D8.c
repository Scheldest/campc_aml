// ADDR: 0x1630dc
// SYMBOL: sub_1630DC
int sub_1630DC()
{
  bool v0; // zf
  int (*v1)(void); // r2
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6754812);
    v0 = dword_23DF24 == -6754812;
    if ( dword_23DF24 != -6754812 )
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
