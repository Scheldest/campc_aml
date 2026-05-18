// ADDR: 0xed394
// SYMBOL: sub_ED394
void **__fastcall sub_ED394(void **a1, void **a2)
{
  if ( a1 != a2 )
    sub_F63D4((int)a1, *a2);
  return a1;
}


// ======================================================================
// ADDR: 0xed3ac
// SYMBOL: sub_ED3AC
int __fastcall sub_ED3AC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed3d0
// SYMBOL: sub_ED3D0
int __fastcall sub_ED3D0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed3f4
// SYMBOL: sub_ED3F4
int __fastcall sub_ED3F4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed418
// SYMBOL: sub_ED418
int __fastcall sub_ED418(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed43c
// SYMBOL: sub_ED43C
int __fastcall sub_ED43C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed460
// SYMBOL: sub_ED460
int __fastcall sub_ED460(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed484
// SYMBOL: sub_ED484
_DWORD *__fastcall sub_ED484(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r3
  _DWORD *result; // r0

  v2 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v2 = a2 + 1;
  result = (_DWORD *)std::codecvt<wchar_t,char,mbstate_t>::codecvt(a1, v2);
  *result = &off_112D88;
  return result;
}


// ======================================================================
// ADDR: 0xed4a8
// SYMBOL: sub_ED4A8
int __fastcall sub_ED4A8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed4cc
// SYMBOL: sub_ED4CC
int __fastcall sub_ED4CC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed4f0
// SYMBOL: sub_ED4F0
int __fastcall sub_ED4F0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed514
// SYMBOL: sub_ED514
int __fastcall sub_ED514(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed538
// SYMBOL: sub_ED538
int __fastcall sub_ED538(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed55c
// SYMBOL: sub_ED55C
_DWORD *__fastcall sub_ED55C(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r1

  *a1 = &off_112A4C;
  a1[1] = a3 - 1;
  sub_F6750(a1 + 3);
  sub_F6750(a1 + 6);
  sub_F6750(a1 + 9);
  sub_F6750(a1 + 12);
  v5 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = a2 + 1;
  std::moneypunct_byname<char,false>::init(a1, v5);
  return a1;
}


// ======================================================================
// ADDR: 0xed5e0
// SYMBOL: sub_ED5E0
int __fastcall sub_ED5E0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed604
// SYMBOL: sub_ED604
_DWORD *__fastcall sub_ED604(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r1

  *a1 = &off_112A90;
  a1[1] = a3 - 1;
  sub_F6750(a1 + 3);
  sub_F6750(a1 + 6);
  sub_F6750(a1 + 9);
  sub_F6750(a1 + 12);
  v5 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = a2 + 1;
  std::moneypunct_byname<char,true>::init(a1, v5);
  return a1;
}


// ======================================================================
// ADDR: 0xed688
// SYMBOL: sub_ED688
int __fastcall sub_ED688(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed6ac
// SYMBOL: sub_ED6AC
_DWORD *__fastcall sub_ED6AC(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r1

  *a1 = &off_112AD4;
  a1[1] = a3 - 1;
  sub_F6750(a1 + 4);
  sub_F6854(a1 + 7);
  sub_F6854(a1 + 10);
  sub_F6854(a1 + 13);
  v5 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = a2 + 1;
  std::moneypunct_byname<wchar_t,false>::init(a1, v5);
  return a1;
}


// ======================================================================
// ADDR: 0xed734
// SYMBOL: sub_ED734
int __fastcall sub_ED734(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed758
// SYMBOL: sub_ED758
_DWORD *__fastcall sub_ED758(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v5; // r1

  *a1 = &off_112B18;
  a1[1] = a3 - 1;
  sub_F6750(a1 + 4);
  sub_F6854(a1 + 7);
  sub_F6854(a1 + 10);
  sub_F6854(a1 + 13);
  v5 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = a2 + 1;
  std::moneypunct_byname<wchar_t,true>::init(a1, v5);
  return a1;
}


// ======================================================================
// ADDR: 0xed7e0
// SYMBOL: sub_ED7E0
int __fastcall sub_ED7E0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed804
// SYMBOL: sub_ED804
_DWORD *__fastcall sub_ED804(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  *a1 = &off_1125D4;
  a1[1] = a3 - 1;
  a1[2] = &off_112604;
  std::__time_get_storage<char>::__time_get_storage(a1 + 3);
  *a1 = &off_1126E4;
  result = a1;
  a1[2] = &off_112730;
  return result;
}


// ======================================================================
// ADDR: 0xed84c
// SYMBOL: sub_ED84C
int __fastcall sub_ED84C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed870
// SYMBOL: sub_ED870
_DWORD *__fastcall sub_ED870(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  *a1 = &off_112660;
  a1[1] = a3 - 1;
  a1[2] = &off_112690;
  std::__time_get_storage<wchar_t>::__time_get_storage(a1 + 3);
  *a1 = &off_112788;
  result = a1;
  a1[2] = &off_1127D4;
  return result;
}


// ======================================================================
// ADDR: 0xed8b8
// SYMBOL: sub_ED8B8
int __fastcall sub_ED8B8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed8dc
// SYMBOL: sub_ED8DC
_DWORD *sub_ED8DC()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_F652C();
  *result = &off_11289C;
  return result;
}


// ======================================================================
// ADDR: 0xed8f4
// SYMBOL: sub_ED8F4
int __fastcall sub_ED8F4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed918
// SYMBOL: sub_ED918
_DWORD *sub_ED918()
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_F6568();
  *result = &off_1128C0;
  return result;
}


// ======================================================================
// ADDR: 0xed930
// SYMBOL: sub_ED930
int __fastcall sub_ED930(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed954
// SYMBOL: sub_ED954
int __fastcall sub_ED954(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
