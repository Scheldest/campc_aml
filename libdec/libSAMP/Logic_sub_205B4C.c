// ADDR: 0x205d08
// SYMBOL: sub_205D08
int __fastcall sub_205D08(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205d40
// SYMBOL: sub_205D40
int __fastcall sub_205D40(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205d78
// SYMBOL: sub_205D78
int __fastcall sub_205D78(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205db0
// SYMBOL: sub_205DB0
int __fastcall sub_205DB0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205de8
// SYMBOL: sub_205DE8
int __fastcall sub_205DE8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205e20
// SYMBOL: sub_205E20
int __fastcall sub_205E20(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205e58
// SYMBOL: sub_205E58
int __fastcall sub_205E58(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205e90
// SYMBOL: sub_205E90
int __fastcall sub_205E90(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205ec8
// SYMBOL: sub_205EC8
int __fastcall sub_205EC8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205f00
// SYMBOL: sub_205F00
int __fastcall sub_205F00(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205f38
// SYMBOL: sub_205F38
int __fastcall sub_205F38(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205f70
// SYMBOL: sub_205F70
int __fastcall sub_205F70(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205fa8
// SYMBOL: sub_205FA8
int __fastcall sub_205FA8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x205fe0
// SYMBOL: sub_205FE0
int __fastcall sub_205FE0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206018
// SYMBOL: sub_206018
int __fastcall sub_206018(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206050
// SYMBOL: sub_206050
int __fastcall sub_206050(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206088
// SYMBOL: sub_206088
int __fastcall sub_206088(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2060c0
// SYMBOL: sub_2060C0
int __fastcall sub_2060C0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2060f8
// SYMBOL: sub_2060F8
int __fastcall sub_2060F8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206130
// SYMBOL: sub_206130
int __fastcall sub_206130(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206168
// SYMBOL: sub_206168
int __fastcall sub_206168(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2061a0
// SYMBOL: sub_2061A0
int __fastcall sub_2061A0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2061d8
// SYMBOL: sub_2061D8
int __fastcall sub_2061D8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206210
// SYMBOL: sub_206210
int __fastcall sub_206210(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206248
// SYMBOL: sub_206248
int __fastcall sub_206248(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x206280
// SYMBOL: sub_206280
int __fastcall sub_206280(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2062b8
// SYMBOL: sub_2062B8
int __fastcall sub_2062B8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
// ADDR: 0x2062f0
// SYMBOL: sub_2062F0
int __fastcall sub_2062F0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  v5 = (std::__shared_count *)sub_20652C(a2, v4);
  return sub_206408(a1, v5);
}


// ======================================================================
