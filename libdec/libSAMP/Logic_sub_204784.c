// ADDR: 0x204af4
// SYMBOL: sub_204AF4
int __fastcall sub_204AF4(int a1, int a2)
{
  *(_BYTE *)(a1 + 128) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    sub_20E1AC(a1);
    sub_20E1D4(a1, a2);
  }
  return a1;
}


// ======================================================================
// ADDR: 0x204b28
// SYMBOL: sub_204B28
int __fastcall sub_204B28(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204b4c
// SYMBOL: sub_204B4C
int __fastcall sub_204B4C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::collate<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204b70
// SYMBOL: sub_204B70
int __fastcall sub_204B70(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204b94
// SYMBOL: sub_204B94
int __fastcall sub_204B94(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::ctype<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204bb8
// SYMBOL: sub_204BB8
int __fastcall sub_204BB8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204bdc
// SYMBOL: sub_204BDC
int __fastcall sub_204BDC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<wchar_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204c00
// SYMBOL: sub_204C00
int __fastcall sub_204C00(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char16_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204c24
// SYMBOL: sub_204C24
int __fastcall sub_204C24(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::codecvt<char32_t,char,mbstate_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204c48
// SYMBOL: sub_204C48
int __fastcall sub_204C48(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204c6c
// SYMBOL: sub_204C6C
int __fastcall sub_204C6C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::numpunct<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204c90
// SYMBOL: sub_204C90
int __fastcall sub_204C90(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_get<char,std::istreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204cb4
// SYMBOL: sub_204CB4
int __fastcall sub_204CB4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204cd8
// SYMBOL: sub_204CD8
int __fastcall sub_204CD8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204cfc
// SYMBOL: sub_204CFC
int __fastcall sub_204CFC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204d20
// SYMBOL: sub_204D20
int __fastcall sub_204D20(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,false>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204d44
// SYMBOL: sub_204D44
int __fastcall sub_204D44(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<char,true>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204d68
// SYMBOL: sub_204D68
int __fastcall sub_204D68(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,false>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204d8c
// SYMBOL: sub_204D8C
int __fastcall sub_204D8C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::moneypunct<wchar_t,true>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204db0
// SYMBOL: sub_204DB0
int __fastcall sub_204DB0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_get<char,std::istreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204dd4
// SYMBOL: sub_204DD4
int __fastcall sub_204DD4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204df8
// SYMBOL: sub_204DF8
int __fastcall sub_204DF8(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204e1c
// SYMBOL: sub_204E1C
int __fastcall sub_204E1C(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204e40
// SYMBOL: sub_204E40
int __fastcall sub_204E40(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<char,std::istreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204e64
// SYMBOL: sub_204E64
int __fastcall sub_204E64(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204e88
// SYMBOL: sub_204E88
int __fastcall sub_204E88(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<char,std::ostreambuf_iterator<char>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204eac
// SYMBOL: sub_204EAC
int __fastcall sub_204EAC(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204ed0
// SYMBOL: sub_204ED0
int __fastcall sub_204ED0(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<char>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x204ef4
// SYMBOL: sub_204EF4
int __fastcall sub_204EF4(int a1, std::__shared_count *a2)
{
  std::locale::id::__get((std::locale::id *)&std::messages<wchar_t>::id);
  return sub_206408(a1, a2);
}


// ======================================================================
// ADDR: 0x20e24c
// SYMBOL: sub_20E24C
_DWORD *__fastcall sub_20E24C(_DWORD *a1, int a2)
{
  *a1 = &off_2317C4;
  a1[1] = a2 - 1;
  a1[2] = std::__cloc((std::__ndk1 *)(a2 - 1));
  *a1 = &off_232234;
  return a1;
}


// ======================================================================
// ADDR: 0x20e288
// SYMBOL: sub_20E288
_DWORD *__fastcall sub_20E288(_DWORD *a1, int a2)
{
  *a1 = &off_2317C4;
  a1[1] = a2 - 1;
  a1[2] = std::__cloc((std::__ndk1 *)(a2 - 1));
  *a1 = &off_232274;
  return a1;
}


// ======================================================================
