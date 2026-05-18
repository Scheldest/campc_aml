// ADDR: 0xdd00e
// SYMBOL: `virtual thunk to'std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream()
int __fastcall `virtual thunk to'std::istream::~istream(_DWORD *a1)
{
  return std::ios::~ios((char *)a1 + *(_DWORD *)(*a1 - 12) + 8);
}


// ======================================================================
// ADDR: 0xdd032
// SYMBOL: `virtual thunk to'std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::~basic_istream()
void __fastcall `virtual thunk to'std::istream::~istream(_DWORD *a1)
{
  std::istream::~istream((int)a1 + *(_DWORD *)(*a1 - 12));
}


// ======================================================================
// ADDR: 0xdeb9a
// SYMBOL: `virtual thunk to'std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream()
int __fastcall `virtual thunk to'std::wistream::~wistream(_DWORD *a1)
{
  return std::ios::~ios((char *)a1 + *(_DWORD *)(*a1 - 12) + 8);
}


// ======================================================================
// ADDR: 0xdebbe
// SYMBOL: `virtual thunk to'std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_istream()
void __fastcall `virtual thunk to'std::wistream::~wistream(_DWORD *a1)
{
  std::wistream::~wistream((int)a1 + *(_DWORD *)(*a1 - 12));
}


// ======================================================================
// ADDR: 0xe06ee
// SYMBOL: `virtual thunk to'std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream()
int __fastcall `virtual thunk to'std::ostream::~ostream(_DWORD *a1)
{
  return std::ios::~ios((char *)a1 + *(_DWORD *)(*a1 - 12) + 4);
}


// ======================================================================
// ADDR: 0xe0712
// SYMBOL: `virtual thunk to'std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream()
void __fastcall `virtual thunk to'std::ostream::~ostream(_DWORD *a1)
{
  std::ostream::~ostream((int)a1 + *(_DWORD *)(*a1 - 12));
}


// ======================================================================
// ADDR: 0xe1852
// SYMBOL: `virtual thunk to'std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream()
int __fastcall `virtual thunk to'std::wostream::~wostream(_DWORD *a1)
{
  return std::ios::~ios((char *)a1 + *(_DWORD *)(*a1 - 12) + 4);
}


// ======================================================================
// ADDR: 0xe1876
// SYMBOL: `virtual thunk to'std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::~basic_ostream()
void __fastcall `virtual thunk to'std::wostream::~wostream(_DWORD *a1)
{
  std::wostream::~wostream((int)a1 + *(_DWORD *)(*a1 - 12));
}


// ======================================================================
// ADDR: 0xe29ba
// SYMBOL: `non-virtual thunk to'std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream()
int __fastcall `non-virtual thunk to'std::iostream::~basic_iostream(int a1)
{
  return std::ios::~ios(a1 + 4);
}


// ======================================================================
// ADDR: 0xe29c0
// SYMBOL: `virtual thunk to'std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream()
int __fastcall `virtual thunk to'std::iostream::~basic_iostream(_DWORD *a1)
{
  return std::ios::~ios((char *)a1 + *(_DWORD *)(*a1 - 12) + 12);
}


// ======================================================================
// ADDR: 0xe29e4
// SYMBOL: `non-virtual thunk to'std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream()
void __fastcall `non-virtual thunk to'std::iostream::~basic_iostream(int a1)
{
  std::iostream::~basic_iostream(a1 - 8);
}


// ======================================================================
// ADDR: 0xe29ea
// SYMBOL: `virtual thunk to'std::__ndk1::basic_iostream<char,std::__ndk1::char_traits<char>>::~basic_iostream()
void __fastcall `virtual thunk to'std::iostream::~basic_iostream(_DWORD *a1)
{
  std::iostream::~basic_iostream((int)a1 + *(_DWORD *)(*a1 - 12));
}


// ======================================================================
