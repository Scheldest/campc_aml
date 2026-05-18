// ADDR: 0x10867c
// SYMBOL: sub_10867C
int (*sub_10867C())(void)
{
  int (*result)(void); // r0
  bool v1; // zf

  result = (int (*)(void))dword_23DF24;
  if ( dword_23DF24 )
  {
    result = (int (*)(void))(dword_23DF24 + 6745600);
    v1 = dword_23DF24 == -6745600;
    if ( dword_23DF24 != -6745600 )
    {
      result = *(int (**)(void))result;
      v1 = result == 0;
    }
    if ( !v1 )
      return (int (*)(void))result();
  }
  return result;
}


// ======================================================================
// ADDR: 0x1086a8
// SYMBOL: sub_1086A8
int sub_1086A8()
{
  bool v0; // zf
  int (*v1)(void); // r2
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6770500);
    v0 = dword_23DF24 == -6770500;
    if ( dword_23DF24 != -6770500 )
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
// ADDR: 0x1086d4
// SYMBOL: sub_1086D4
int (*sub_1086D4())(void)
{
  int (*result)(void); // r0
  bool v1; // zf

  result = (int (*)(void))dword_23DF24;
  if ( dword_23DF24 )
  {
    result = (int (*)(void))(dword_23DF24 + 6761440);
    v1 = dword_23DF24 == -6761440;
    if ( dword_23DF24 != -6761440 )
    {
      result = *(int (**)(void))result;
      v1 = result == 0;
    }
    if ( !v1 )
      return (int (*)(void))result();
  }
  return result;
}


// ======================================================================
