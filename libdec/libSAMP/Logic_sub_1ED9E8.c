// ADDR: 0x1ee6fe
// SYMBOL: sub_1EE6FE
__int64 __fastcall sub_1EE6FE(int a1, int a2, char *s)
{
  __int64 v4; // r0

  LODWORD(v4) = std::string::append(a2, s);
  HIDWORD(v4) = *(_DWORD *)(v4 + 8);
  *(_QWORD *)a1 = *(_QWORD *)v4;
  *(_DWORD *)(a1 + 8) = HIDWORD(v4);
  return sub_1EE5C6(v4);
}


// ======================================================================
// ADDR: 0x1ee720
// SYMBOL: sub_1EE720
void __fastcall __noreturn sub_1EE720(int a1, _DWORD *a2)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(0x18u);
  sub_1EE800(exception, a1, *a2, a2[1]);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::__fs::filesystem::filesystem_error,
    (void (*)(void *))std::__fs::filesystem::filesystem_error::~filesystem_error);
}


// ======================================================================
// ADDR: 0x1ee764
// SYMBOL: sub_1EE764
void __fastcall __noreturn sub_1EE764(int a1, int a2, _DWORD *a3)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(0x18u);
  sub_1EEA10(exception, a1, a2, *a3, a3[1]);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::__fs::filesystem::filesystem_error,
    (void (*)(void *))std::__fs::filesystem::filesystem_error::~filesystem_error);
}


// ======================================================================
// ADDR: 0x1ee7b0
// SYMBOL: sub_1EE7B0
void __fastcall __noreturn sub_1EE7B0(int a1, int a2, int a3, _DWORD *a4)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(0x18u);
  sub_1EEB48(exception, a1, a2, a3, *a4, a4[1]);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::__fs::filesystem::filesystem_error,
    (void (*)(void *))std::__fs::filesystem::filesystem_error::~filesystem_error);
}


// ======================================================================
