// ADDR: 0x20524c
// SYMBOL: sub_20524C
void **__fastcall sub_20524C(void **a1, void **a2)
{
  if ( a1 != a2 )
    sub_20E2C4((int)a1, *a2);
  return a1;
}


// ======================================================================
// ADDR: 0x205264
// SYMBOL: sub_205264
int __fastcall sub_205264(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205288
// SYMBOL: sub_205288
int __fastcall sub_205288(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2052ac
// SYMBOL: sub_2052AC
int __fastcall sub_2052AC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2052d0
// SYMBOL: sub_2052D0
int __fastcall sub_2052D0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2052f4
// SYMBOL: sub_2052F4
int __fastcall sub_2052F4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205318
// SYMBOL: sub_205318
int __fastcall sub_205318(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x20533c
// SYMBOL: sub_20533C
_DWORD *__fastcall sub_20533C(int a1, unsigned __int8 *a2)
{
  char *v2; // r3
  _DWORD *result; // r0

  v2 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v2 = (char *)(a2 + 1);
  result = (_DWORD *)std::codecvt<wchar_t,char,mbstate_t>::codecvt(a1, v2);
  *result = &off_232798;
  return result;
}


// ======================================================================
// ADDR: 0x205360
// SYMBOL: sub_205360
int __fastcall sub_205360(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205384
// SYMBOL: sub_205384
int __fastcall sub_205384(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2053a8
// SYMBOL: sub_2053A8
int __fastcall sub_2053A8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2053cc
// SYMBOL: sub_2053CC
int __fastcall sub_2053CC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2053f0
// SYMBOL: sub_2053F0
int __fastcall sub_2053F0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205414
// SYMBOL: sub_205414
_DWORD *__fastcall sub_205414(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  __int64 v5; // r0
  __int64 v6; // r0
  __int64 v7; // r0
  __int64 v8; // r0
  unsigned __int8 *v9; // r1

  HIDWORD(v5) = &off_23245C;
  *a1 = &off_23245C;
  a1[1] = a3 - 1;
  LODWORD(v5) = a1 + 3;
  v6 = sub_1EE5C6(v5);
  LODWORD(v6) = a1 + 6;
  v7 = sub_1EE5C6(v6);
  LODWORD(v7) = a1 + 9;
  v8 = sub_1EE5C6(v7);
  LODWORD(v8) = a1 + 12;
  sub_1EE5C6(v8);
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v9 = a2 + 1;
  std::moneypunct_byname<char,false>::init(a1, v9);
  return a1;
}


// ======================================================================
// ADDR: 0x205498
// SYMBOL: sub_205498
int __fastcall sub_205498(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2054bc
// SYMBOL: sub_2054BC
_DWORD *__fastcall sub_2054BC(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  __int64 v5; // r0
  __int64 v6; // r0
  __int64 v7; // r0
  __int64 v8; // r0
  unsigned __int8 *v9; // r1

  HIDWORD(v5) = &off_2324A0;
  *a1 = &off_2324A0;
  a1[1] = a3 - 1;
  LODWORD(v5) = a1 + 3;
  v6 = sub_1EE5C6(v5);
  LODWORD(v6) = a1 + 6;
  v7 = sub_1EE5C6(v6);
  LODWORD(v7) = a1 + 9;
  v8 = sub_1EE5C6(v7);
  LODWORD(v8) = a1 + 12;
  sub_1EE5C6(v8);
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v9 = a2 + 1;
  std::moneypunct_byname<char,true>::init(a1, v9);
  return a1;
}


// ======================================================================
// ADDR: 0x205540
// SYMBOL: sub_205540
int __fastcall sub_205540(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205564
// SYMBOL: sub_205564
_DWORD *__fastcall sub_205564(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r1
  int v8; // r1
  unsigned __int8 *v9; // r1

  HIDWORD(v5) = &off_2324E4;
  *a1 = &off_2324E4;
  a1[1] = a3 - 1;
  LODWORD(v5) = a1 + 4;
  v6 = sub_1EE5C6(v5);
  sub_20E6C4(a1 + 7, HIDWORD(v6));
  sub_20E6C4(a1 + 10, v7);
  sub_20E6C4(a1 + 13, v8);
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v9 = a2 + 1;
  std::moneypunct_byname<wchar_t,false>::init(a1, v9);
  return a1;
}


// ======================================================================
// ADDR: 0x2055ec
// SYMBOL: sub_2055EC
int __fastcall sub_2055EC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205610
// SYMBOL: sub_205610
_DWORD *__fastcall sub_205610(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r1
  int v8; // r1
  unsigned __int8 *v9; // r1

  HIDWORD(v5) = &off_232528;
  *a1 = &off_232528;
  a1[1] = a3 - 1;
  LODWORD(v5) = a1 + 4;
  v6 = sub_1EE5C6(v5);
  sub_20E6C4(a1 + 7, HIDWORD(v6));
  sub_20E6C4(a1 + 10, v7);
  sub_20E6C4(a1 + 13, v8);
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v9 = a2 + 1;
  std::moneypunct_byname<wchar_t,true>::init(a1, v9);
  return a1;
}


// ======================================================================
// ADDR: 0x205698
// SYMBOL: sub_205698
int __fastcall sub_205698(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2056bc
// SYMBOL: sub_2056BC
_DWORD *__fastcall sub_2056BC(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  *a1 = &off_231FE4;
  a1[1] = a3 - 1;
  a1[2] = &off_232014;
  std::__time_get_storage<char>::__time_get_storage(a1 + 3);
  *a1 = &off_2320F4;
  result = a1;
  a1[2] = &off_232140;
  return result;
}


// ======================================================================
// ADDR: 0x205704
// SYMBOL: sub_205704
int __fastcall sub_205704(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205728
// SYMBOL: sub_205728
_DWORD *__fastcall sub_205728(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  *a1 = &off_232070;
  a1[1] = a3 - 1;
  a1[2] = &off_2320A0;
  std::__time_get_storage<wchar_t>::__time_get_storage(a1 + 3);
  *a1 = &off_232198;
  result = a1;
  a1[2] = &off_2321E4;
  return result;
}


// ======================================================================
// ADDR: 0x205770
// SYMBOL: sub_205770
int __fastcall sub_205770(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x205794
// SYMBOL: sub_205794
_DWORD *sub_205794()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_20E41C();
  *result = &off_2322AC;
  return result;
}


// ======================================================================
// ADDR: 0x2057ac
// SYMBOL: sub_2057AC
int __fastcall sub_2057AC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x2057d0
// SYMBOL: sub_2057D0
_DWORD *sub_2057D0()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_20E458();
  *result = &off_2322D0;
  return result;
}


// ======================================================================
// ADDR: 0x2057e8
// SYMBOL: sub_2057E8
int __fastcall sub_2057E8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x20580c
// SYMBOL: sub_20580C
int __fastcall sub_20580C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
