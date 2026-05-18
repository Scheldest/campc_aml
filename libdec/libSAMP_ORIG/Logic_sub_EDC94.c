// ADDR: 0xede50
// SYMBOL: sub_EDE50
int __fastcall sub_EDE50(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xede88
// SYMBOL: sub_EDE88
int __fastcall sub_EDE88(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedec0
// SYMBOL: sub_EDEC0
int __fastcall sub_EDEC0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedef8
// SYMBOL: sub_EDEF8
int __fastcall sub_EDEF8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedf30
// SYMBOL: sub_EDF30
int __fastcall sub_EDF30(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedf68
// SYMBOL: sub_EDF68
int __fastcall sub_EDF68(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedfa0
// SYMBOL: sub_EDFA0
int __fastcall sub_EDFA0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xedfd8
// SYMBOL: sub_EDFD8
int __fastcall sub_EDFD8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee010
// SYMBOL: sub_EE010
int __fastcall sub_EE010(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee048
// SYMBOL: sub_EE048
int __fastcall sub_EE048(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee080
// SYMBOL: sub_EE080
int __fastcall sub_EE080(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee0b8
// SYMBOL: sub_EE0B8
int __fastcall sub_EE0B8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee0f0
// SYMBOL: sub_EE0F0
int __fastcall sub_EE0F0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee128
// SYMBOL: sub_EE128
int __fastcall sub_EE128(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee160
// SYMBOL: sub_EE160
int __fastcall sub_EE160(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee198
// SYMBOL: sub_EE198
int __fastcall sub_EE198(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee1d0
// SYMBOL: sub_EE1D0
int __fastcall sub_EE1D0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee208
// SYMBOL: sub_EE208
int __fastcall sub_EE208(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee240
// SYMBOL: sub_EE240
int __fastcall sub_EE240(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee278
// SYMBOL: sub_EE278
int __fastcall sub_EE278(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee2b0
// SYMBOL: sub_EE2B0
int __fastcall sub_EE2B0(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee2e8
// SYMBOL: sub_EE2E8
int __fastcall sub_EE2E8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee320
// SYMBOL: sub_EE320
int __fastcall sub_EE320(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee358
// SYMBOL: sub_EE358
int __fastcall sub_EE358(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee390
// SYMBOL: sub_EE390
int __fastcall sub_EE390(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee3c8
// SYMBOL: sub_EE3C8
int __fastcall sub_EE3C8(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee400
// SYMBOL: sub_EE400
int __fastcall sub_EE400(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
// ADDR: 0xee438
// SYMBOL: sub_EE438
int __fastcall sub_EE438(int a1, int a2)
{
  int v4; // r0
  std::__shared_count *v5; // r1

  v4 = std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  v5 = (std::__shared_count *)sub_EE674(a2, v4);
  return sub_EE550(a1, v5);
}


// ======================================================================
