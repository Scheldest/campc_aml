// ADDR: 0xf68fa
// SYMBOL: sub_F68FA
int __fastcall sub_F68FA(int a1, int a2, int a3)
{
  if ( a1 != a2 && a2 != a3 )
    sub_F695C();
  return sub_F6914();
}


// ======================================================================
// ADDR: 0xf6918
// SYMBOL: sub_F6918
int __fastcall sub_F6918(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v3; // r1

  v3 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v3 = a1 + 1;
  std::string::erase(a1, a2 - (_DWORD)v3, 1);
  return a2;
}


// ======================================================================
// ADDR: 0xf6934
// SYMBOL: sub_F6934
unsigned __int8 *__fastcall sub_F6934(unsigned __int8 *a1)
{
  unsigned int v1; // r1
  int v2; // r1
  unsigned __int8 *result; // r0
  __int64 v4; // kr00_8

  v1 = *a1;
  if ( v1 << 31 )
  {
    v4 = *(_QWORD *)(a1 + 4);
    *((_DWORD *)a1 + 1) = v4 - 1;
    result = (unsigned __int8 *)(HIDWORD(v4) + v4 - 1);
  }
  else
  {
    v2 = (v1 >> 1) - 1;
    *a1 = 2 * v2;
    result = &a1[v2 + 1];
  }
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x10c41c
// SYMBOL: sub_10C41C
int __fastcall sub_10C41C(int a1, int a2)
{
  return std::string::push_back(a1, a2);
}


// ======================================================================
