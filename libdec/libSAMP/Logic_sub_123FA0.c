// ADDR: 0x124120
// SYMBOL: sub_124120
int sub_124120()
{
  int result; // r0
  int (**v1)(void); // r1

  result = 0;
  if ( dword_23DF24 )
  {
    v1 = (int (**)(void))(dword_23DF24 + 6747192);
    if ( dword_23DF24 != -6747192 )
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
