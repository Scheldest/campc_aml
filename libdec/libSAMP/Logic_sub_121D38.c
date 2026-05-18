// ADDR: 0x123338
// SYMBOL: sub_123338
int sub_123338(int a1, int a2, int a3, char *format, ...)
{
  va_list va; // [sp+10h] [bp+0h] BYREF

  va_start(va, format);
  return vsnprintf(byte_2639B4, 0x200u, format, va);
}


// ======================================================================
// ADDR: 0x163f1c
// SYMBOL: sub_163F1C
int sub_163F1C()
{
  int result; // r0
  int (**v1)(void); // r1

  result = 0;
  if ( dword_23DF24 )
  {
    v1 = (int (**)(void))(dword_23DF24 + 6758192);
    if ( dword_23DF24 != -6758192 )
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
// ADDR: 0x163f54
// SYMBOL: sub_163F54
int sub_163F54()
{
  return *(_DWORD *)(dword_23DF24 + 6778636) + 8;
}


// ======================================================================
// ADDR: 0x163f8c
// SYMBOL: sub_163F8C
int sub_163F8C()
{
  return *(_DWORD *)(dword_23DF24 + 6778636) + 14;
}


// ======================================================================
// ADDR: 0x22431c
// SYMBOL: sub_22431C
__int64 __fastcall sub_22431C(int a1, int a2, int a3)
{
  return _strcat_chk(a1, a2, a3);
}


// ======================================================================
