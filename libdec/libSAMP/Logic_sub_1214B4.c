// ADDR: 0x1216b8
// SYMBOL: sub_1216B8
int sub_1216B8(char *a1, int a2, int a3, int a4, ...)
{
  va_list va; // [sp+10h] [bp+0h] BYREF

  va_start(va, a4);
  return vsnprintf(a1, 0x80u, "%s_%s", va);
}


// ======================================================================
// ADDR: 0x16390c
// SYMBOL: sub_16390C
int __fastcall sub_16390C(int a1, int a2, int a3, int (__fastcall **a4)(int))
{
  int result; // r0
  bool v6; // zf
  int (__fastcall *v7)(int); // r3

  result = 0;
  v6 = dword_23DF24 == 0;
  if ( dword_23DF24 )
  {
    a4 = (int (__fastcall **)(int))(dword_23DF24 + 6761748);
    v6 = dword_23DF24 == -6761748;
  }
  if ( !v6 )
  {
    v7 = *a4;
    if ( v7 )
      return v7(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x163950
// SYMBOL: sub_163950
int __fastcall sub_163950(int a1)
{
  int result; // r0
  int (__fastcall *v3)(int); // r3

  result = 0;
  if ( dword_23DF24 && dword_23DF24 != -6757944 )
  {
    v3 = *(int (__fastcall **)(int))(dword_23DF24 + 6757944);
    if ( v3 )
      return v3(a1);
    else
      return 0;
  }
  return result;
}


// ======================================================================
