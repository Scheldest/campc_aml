// ADDR: 0xf5f74
// SYMBOL: sub_F5F74
int __fastcall sub_F5F74(int a1)
{
  sub_F5FC8(a1);
  if ( !off_2400CC )
    sub_164196(dword_23DF24 + 6745368, sub_F601C, &off_2400CC);
  return a1;
}


// ======================================================================
// ADDR: 0x16398c
// SYMBOL: sub_16398C
int sub_16398C()
{
  bool v0; // zf
  int (*v1)(void); // r1
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6759152);
    v0 = dword_23DF24 == -6759152;
    if ( dword_23DF24 != -6759152 )
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
// ADDR: 0x1639bc
// SYMBOL: sub_1639BC
int sub_1639BC()
{
  bool v0; // zf
  int (*v1)(void); // r1
  int result; // r0

  if ( dword_23DF24 )
  {
    v1 = (int (*)(void))(dword_23DF24 + 6746136);
    v0 = dword_23DF24 == -6746136;
    if ( dword_23DF24 != -6746136 )
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
// ADDR: 0x163a6c
// SYMBOL: sub_163A6C
int __fastcall sub_163A6C(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r2

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6751632 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6751632);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x163bfa
// SYMBOL: sub_163BFA
int __fastcall sub_163BFA(int a1)
{
  return a1 + 12;
}


// ======================================================================
