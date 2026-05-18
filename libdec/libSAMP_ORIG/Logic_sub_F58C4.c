// ADDR: 0xf6a5c
// SYMBOL: sub_F6A5C
int __fastcall sub_F6A5C(int a1, int a2, int a3)
{
  if ( a1 != a2 && a2 != a3 )
    sub_F6AC4();
  return sub_F6A76();
}


// ======================================================================
// ADDR: 0xf6a7a
// SYMBOL: sub_F6A7A
int __fastcall sub_F6A7A(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v3; // r1

  v3 = (unsigned __int8 *)*((_DWORD *)a1 + 2);
  if ( !(*a1 << 31) )
    v3 = a1 + 4;
  std::wstring::erase(a1, (a2 - (int)v3) >> 2, 1);
  return a2;
}


// ======================================================================
// ADDR: 0xf6a98
// SYMBOL: sub_F6A98
unsigned __int8 *__fastcall sub_F6A98(unsigned __int8 *a1)
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
    result = (unsigned __int8 *)(HIDWORD(v4) + 4 * (v4 - 1));
  }
  else
  {
    v2 = (v1 >> 1) - 1;
    *a1 = 2 * v2;
    result = &a1[4 * v2 + 4];
  }
  *(_DWORD *)result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x10c428
// SYMBOL: sub_10C428
int __fastcall sub_10C428(int a1, int a2)
{
  return std::wstring::push_back(a1, a2);
}


// ======================================================================
