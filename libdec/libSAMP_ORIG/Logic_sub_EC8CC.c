// ADDR: 0xecc3c
// SYMBOL: sub_ECC3C
int __fastcall sub_ECC3C(int a1, int a2)
{
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    sub_F62BC(a1);
    sub_F62E4(a1, a2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0xecc70
// SYMBOL: sub_ECC70
int __fastcall sub_ECC70(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecc94
// SYMBOL: sub_ECC94
int __fastcall sub_ECC94(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xeccb8
// SYMBOL: sub_ECCB8
int __fastcall sub_ECCB8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xeccdc
// SYMBOL: sub_ECCDC
int __fastcall sub_ECCDC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecd00
// SYMBOL: sub_ECD00
int __fastcall sub_ECD00(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecd24
// SYMBOL: sub_ECD24
int __fastcall sub_ECD24(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecd48
// SYMBOL: sub_ECD48
int __fastcall sub_ECD48(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecd6c
// SYMBOL: sub_ECD6C
int __fastcall sub_ECD6C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecd90
// SYMBOL: sub_ECD90
int __fastcall sub_ECD90(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecdb4
// SYMBOL: sub_ECDB4
int __fastcall sub_ECDB4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecdd8
// SYMBOL: sub_ECDD8
int __fastcall sub_ECDD8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecdfc
// SYMBOL: sub_ECDFC
int __fastcall sub_ECDFC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xece20
// SYMBOL: sub_ECE20
int __fastcall sub_ECE20(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xece44
// SYMBOL: sub_ECE44
int __fastcall sub_ECE44(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xece68
// SYMBOL: sub_ECE68
int __fastcall sub_ECE68(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xece8c
// SYMBOL: sub_ECE8C
int __fastcall sub_ECE8C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xeceb0
// SYMBOL: sub_ECEB0
int __fastcall sub_ECEB0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xeced4
// SYMBOL: sub_ECED4
int __fastcall sub_ECED4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecef8
// SYMBOL: sub_ECEF8
int __fastcall sub_ECEF8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_get<char,std::istreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecf1c
// SYMBOL: sub_ECF1C
int __fastcall sub_ECF1C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecf40
// SYMBOL: sub_ECF40
int __fastcall sub_ECF40(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecf64
// SYMBOL: sub_ECF64
int __fastcall sub_ECF64(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecf88
// SYMBOL: sub_ECF88
int __fastcall sub_ECF88(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecfac
// SYMBOL: sub_ECFAC
int __fastcall sub_ECFAC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecfd0
// SYMBOL: sub_ECFD0
int __fastcall sub_ECFD0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xecff4
// SYMBOL: sub_ECFF4
int __fastcall sub_ECFF4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed018
// SYMBOL: sub_ED018
int __fastcall sub_ED018(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xed03c
// SYMBOL: sub_ED03C
int __fastcall sub_ED03C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  return sub_EE550(a1, a2);
}


// ======================================================================
// ADDR: 0xf635c
// SYMBOL: sub_F635C
_DWORD *__fastcall sub_F635C(_DWORD *a1, int a2)
{
  *a1 = &off_111DB4;
  a1[1] = a2 - 1;
  a1[2] = std::__cloc((std::__ndk1 *)(a2 - 1));
  *a1 = &off_112824;
  return a1;
}


// ======================================================================
// ADDR: 0xf6398
// SYMBOL: sub_F6398
_DWORD *__fastcall sub_F6398(_DWORD *a1, int a2)
{
  *a1 = &off_111DB4;
  a1[1] = a2 - 1;
  a1[2] = std::__cloc((std::__ndk1 *)(a2 - 1));
  *a1 = &off_112864;
  return a1;
}


// ======================================================================
