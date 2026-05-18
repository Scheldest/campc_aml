// ADDR: 0x1e3e74
// SYMBOL: fmt::v8::detail::assert_fail(char const*,int,char const*)
void __fastcall __noreturn fmt::v8::detail::assert_fail(
        fmt::v8::detail *this,
        const char *a2,
        const char *a3,
        const char *a4)
{
  fprintf((FILE *)((char *)&_sF + 168), "%s:%d: assertion failed: %s", (const char *)this, a2, a3);
  std::terminate();
}


// ======================================================================
// ADDR: 0x1e3ea0
// SYMBOL: fmt::v8::detail::throw_format_error(char const*)
void __fastcall __noreturn fmt::v8::detail::throw_format_error(fmt::v8::detail *this, const char *a2)
{
  std::runtime_error *exception; // r4

  exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
  sub_EE924(exception, (const char *)this);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'fmt::v8::format_error,
    (void (*)(void *))fmt::v8::format_error::~format_error);
}


// ======================================================================
// ADDR: 0x1e3ed8
// SYMBOL: fmt::v8::detail::format_error_code(fmt::v8::detail::buffer<char> &,int,fmt::v8::basic_string_view<char>)
int __fastcall fmt::v8::detail::format_error_code(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  unsigned int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  char *v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // t1
  char *v17; // r0
  int v18; // r2
  int v19; // r1
  int v20; // t1
  char v22[4]; // [sp+18h] [bp-38h] BYREF
  int v23; // [sp+1Ch] [bp-34h]
  const char *v24; // [sp+20h] [bp-30h]
  int v25; // [sp+24h] [bp-2Ch]
  int (*v26)(); // [sp+28h] [bp-28h]
  int (*v27)(); // [sp+2Ch] [bp-24h]
  int v28; // [sp+30h] [bp-20h]

  v8 = a2;
  if ( a2 < 0 )
    v8 = -a2;
  v9 = __clz(v8 | 1) ^ 0x1F;
  *(_DWORD *)(a1 + 8) = 0;
  v10 = dword_91AF8[2 * v9];
  v11 = __CFADD__(v8, v10) + dword_91AF8[2 * v9 + 1];
  v12 = 492;
  if ( a2 < 0 )
    v12 = 491;
  if ( a4 <= v12 - v11 )
  {
    v24 = 0;
    v25 = 2;
    *(_DWORD *)v22 = "{}{}";
    v23 = 4;
    v26 = fmt::v8::detail::parse_format_specs<fmt::v8::basic_string_view<char>,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
    v27 = fmt::v8::detail::parse_format_specs<char [3],fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
    v13 = "{}{}";
    do
    {
      v14 = (int)v13;
      v16 = (unsigned __int8)*v13++;
      v15 = v16;
      if ( v16 == 125 )
      {
        if ( v13 == "" || *v13 != 125 )
          fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
        v13 = (char *)(v14 + 2);
      }
      else if ( v15 == 123 )
      {
        v13 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(
                        v14,
                        (int)"",
                        v22);
      }
    }
    while ( v13 != "" );
    *(_DWORD *)v22 = a3;
    v23 = a4;
    v24 = ": ";
    sub_DCAC4(a1, "{}{}", 4, v10, 205, 0, (int)v22, 0, 0);
  }
  v24 = 0;
  v25 = 2;
  *(_DWORD *)v22 = "{}{}";
  v23 = 4;
  v26 = fmt::v8::detail::parse_format_specs<char [7],fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v27 = fmt::v8::detail::parse_format_specs<int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v17 = "{}{}";
  do
  {
    v18 = (int)v17;
    v20 = (unsigned __int8)*v17++;
    v19 = v20;
    if ( v20 == 125 )
    {
      if ( v17 == "" || *v17 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v17 = (char *)(v18 + 2);
    }
    else if ( v19 == 123 )
    {
      v17 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(
                      v18,
                      (int)"",
                      v22);
    }
  }
  while ( v17 != "" );
  v24 = (const char *)a2;
  v25 = 0;
  *(_DWORD *)v22 = "error ";
  sub_DCAC4(a1, "{}{}", 4, v10, 28, 0, (int)v22, 0, 0);
  return v28;
}


// ======================================================================
// ADDR: 0x1e4090
// SYMBOL: fmt::v8::detail::report_error(void (*)(fmt::v8::detail::buffer<char> &,int,char const*),int,char const*)
int __fastcall fmt::v8::detail::report_error(void (*a1)(void))
{
  _DWORD v2[131]; // [sp+14h] [bp-20Ch] BYREF

  a1();
  if ( fwrite(v2, 0, 1u, (FILE *)((char *)&_sF + 168)) )
    fputc(10, (FILE *)((char *)&_sF + 168));
  return v2[126];
}


// ======================================================================
// ADDR: 0x1e412c
// SYMBOL: fmt::v8::basic_memory_buffer<char,500u,std::__ndk1::allocator<char>>::~basic_memory_buffer()
int __fastcall fmt::v8::basic_memory_buffer<char,500u,std::allocator<char>>::~basic_memory_buffer(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 4);
  if ( v2 != (void *)(a1 + 16) )
    operator delete(v2);
  return a1;
}


// ======================================================================
// ADDR: 0x1e4144
// SYMBOL: fmt::v8::format_error::~format_error()
// attributes: thunk
void __fastcall fmt::v8::format_error::~format_error(fmt::v8::format_error *this)
{
  _ZN3fmt2v812format_errorD2Ev_0(this);
}


// ======================================================================
// ADDR: 0x1e4148
// SYMBOL: fmt::v8::format_error::~format_error()
void __fastcall fmt::v8::format_error::~format_error(fmt::v8::format_error *this)
{
  void *v1; // r0
  const std::nothrow_t *v2; // r1

  std::underflow_error::~underflow_error(this);
  operator delete(v1, v2);
}


// ======================================================================
// ADDR: 0x1e4158
// SYMBOL: fmt::v8::vsystem_error(int,fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
int __fastcall fmt::v8::vsystem_error(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v12; // r4
  int v13; // r3
  _BYTE v15[8]; // [sp+14h] [bp-2Ch] BYREF
  void *v16; // [sp+1Ch] [bp-24h]
  int v17; // [sp+20h] [bp-20h]

  v12 = std::generic_category(_stack_chk_guard);
  fmt::v8::vformat(v15, a3, a4, v13, a5, a6, a7, a8);
  std::system_error::system_error(a1, a2, v12, v15);
  if ( v15[0] << 31 )
    operator delete(v16);
  return v17;
}


// ======================================================================
// ADDR: 0x1e41e8
// SYMBOL: fmt::v8::vformat(fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
int __fastcall fmt::v8::vformat(int a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _UNKNOWN **v10; // [sp+14h] [bp-224h] BYREF
  void *v11; // [sp+18h] [bp-220h]
  int v12; // [sp+1Ch] [bp-21Ch]
  int v13; // [sp+20h] [bp-218h]
  _DWORD v14[133]; // [sp+24h] [bp-214h] BYREF

  v13 = 500;
  v11 = v14;
  v12 = 0;
  v10 = &off_22A5C8;
  sub_DCAC4((int)&v10, a2, a3, (int)&off_22A5C8, a5, a6, a7, a8, 0);
  fmt::v8::to_string<char,500u>(a1, &v10);
  if ( v11 != v14 )
    operator delete(v11);
  return v14[126];
}


// ======================================================================
// ADDR: 0x1e427c
// SYMBOL: fmt::v8::detail::utf8_to_utf16::utf8_to_utf16(fmt::v8::basic_string_view<char>)
_DWORD *__fastcall fmt::v8::detail::utf8_to_utf16::utf8_to_utf16(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // r5
  unsigned int v7; // r6
  int v8; // r6
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r2
  _DWORD *v16; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v17[2]; // [sp+8h] [bp-28h] BYREF

  v6 = a2;
  *a1 = &off_231170;
  a1[1] = a1 + 4;
  a1[2] = 0;
  a1[3] = 500;
  v16 = a1;
  if ( a3 >= 4 )
  {
    v7 = a2 + a3 - 3;
    v6 = a2;
    while ( v6 < v7 )
    {
      v6 = sub_1E8278(&v16, v6, v6);
      if ( !v6 )
        goto LABEL_10;
    }
  }
  v8 = a2 + a3 - v6;
  if ( a2 + a3 != v6 )
  {
    memset(v17, 0, 7);
    _memcpy_chk(v17, v6, v8, 7);
    v9 = v17;
    do
    {
      v10 = sub_1E8278(&v16, v9, v6);
      if ( !v10 )
        break;
      v11 = v10 - (_DWORD)v9;
      v9 = (_DWORD *)v10;
      v6 += v11;
    }
    while ( v10 - (int)v17 < v8 );
  }
LABEL_10:
  v12 = a1[2];
  v13 = v12 + 1;
  if ( a1[3] < (unsigned int)(v12 + 1) )
  {
    (*(void (__fastcall **)(_DWORD *))*a1)(a1);
    v12 = a1[2];
    v13 = v12 + 1;
  }
  v14 = a1[1];
  a1[2] = v13;
  *(_DWORD *)(v14 + 4 * v12) = 0;
  return a1;
}


// ======================================================================
// ADDR: 0x1e4384
// SYMBOL: fmt::v8::format_system_error(fmt::v8::detail::buffer<char> &,int,char const*)
int __fastcall fmt::v8::format_system_error(int a1, int a2, int a3)
{
  int v6; // r0
  char *v7; // r0
  _BYTE v9[16]; // [sp+4h] [bp-24h] BYREF
  int v10; // [sp+14h] [bp-14h]

  v6 = std::generic_category(_stack_chk_guard);
  std::system_error::system_error(v9, a2, v6, a3);
  v7 = (char *)std::runtime_error::what((std::runtime_error *)v9);
  fmt::v8::detail::write<char,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(a1, v7);
  std::system_error::~system_error((std::system_error *)v9);
  return v10;
}


// ======================================================================
// ADDR: 0x1e4414
// SYMBOL: fmt::v8::detail::write<char,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>,char const*)
int __fastcall fmt::v8::detail::write<char,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(int a1, char *s)
{
  char *v4; // r1

  if ( !s )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"string pointer is null", 0);
  v4 = &s[strlen(s)];
  return sub_2244CC(s, v4, a1);
}


// ======================================================================
// ADDR: 0x1e4440
// SYMBOL: fmt::v8::report_system_error(int,char const*)
int __fastcall fmt::v8::report_system_error(fmt::v8 *this, int a2, const char *a3)
{
  return fmt::v8::detail::report_error((void (*)(void))fmt::v8::format_system_error);
}


// ======================================================================
// ADDR: 0x1e4454
// SYMBOL: fmt::v8::detail::error_handler::on_error(char const*)
void __fastcall __noreturn fmt::v8::detail::error_handler::on_error(
        fmt::v8::detail::error_handler *this,
        fmt::v8::detail *a2)
{
  fmt::v8::detail::throw_format_error(a2, (const char *)a2);
}


// ======================================================================
// ADDR: 0x1e445e
// SYMBOL: fmt::v8::to_string<char,500u>(fmt::v8::basic_memory_buffer<char,500u,std::__ndk1::allocator<char>> const&)
int __fastcall fmt::v8::to_string<char,500u>(_DWORD *a1, int a2)
{
  __int64 v2; // kr00_8
  void *v4; // r5
  void *v5; // r0
  int result; // r0

  v2 = *(_QWORD *)(a2 + 4);
  if ( HIDWORD(v2) >= 0xB )
  {
    v5 = (void *)operator new((HIDWORD(v2) + 16) & 0xFFFFFFF0);
    *a1 = ((HIDWORD(v2) + 16) & 0xFFFFFFF0) + 1;
    a1[1] = HIDWORD(v2);
    a1[2] = v5;
    v4 = v5;
  }
  else
  {
    *(_BYTE *)a1 = 2 * BYTE4(v2);
    v4 = (char *)a1 + 1;
    if ( !HIDWORD(v2) )
      goto LABEL_6;
  }
  j_memcpy(v4, (const void *)v2, HIDWORD(v2));
LABEL_6:
  result = 0;
  *((_BYTE *)v4 + HIDWORD(v2)) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x1e44a8
// SYMBOL: fmt::v8::detail::print(__sFILE *,fmt::v8::basic_string_view<char>)
size_t __fastcall fmt::v8::detail::print(FILE *s, void *ptr, size_t a3)
{
  size_t result; // r0
  void *exception; // r4
  _DWORD *v6; // r0

  result = fwrite(ptr, 1u, a3, s);
  if ( result < a3 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v6 = (_DWORD *)_errno(exception);
    fmt::v8::system_error<>(exception, *v6, "cannot write to file", 20);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::system_error,
      (void (*)(void *))std::system_error::~system_error);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e4500
// SYMBOL: fmt::v8::vprint(__sFILE *,fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
int __fastcall fmt::v8::vprint(FILE *a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _UNKNOWN **v10; // [sp+14h] [bp-224h] BYREF
  void *v11; // [sp+18h] [bp-220h]
  int v12; // [sp+1Ch] [bp-21Ch]
  int v13; // [sp+20h] [bp-218h]
  _DWORD v14[133]; // [sp+24h] [bp-214h] BYREF

  v13 = 500;
  v11 = v14;
  v12 = 0;
  v10 = &off_22A5C8;
  sub_DCAC4((int)&v10, a2, a3, (int)&off_22A5C8, a5, a6, a7, a8, 0);
  fmt::v8::detail::print(a1, v11);
  if ( v11 != v14 )
    operator delete(v11);
  return v14[126];
}


// ======================================================================
// ADDR: 0x1e4594
// SYMBOL: fmt::v8::vprint(fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
int __fastcall fmt::v8::vprint(char *a1, int a2, int a3, int a4, int a5, int a6)
{
  return fmt::v8::vprint((FILE *)((char *)&_sF + 84), a1, a2, a4, a3, a4, a5, a6);
}


// ======================================================================
// ADDR: 0x1e45c0
// SYMBOL: fmt::v8::detail::is_printable(uint)
int __fastcall fmt::v8::detail::is_printable(unsigned int this, unsigned int a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r5
  int v4; // r4
  unsigned int v5; // r6
  bool v6; // zf
  unsigned int v7; // r6
  char v8; // r1
  unsigned int j; // r2
  unsigned __int8 v10; // r6
  int v11; // r5
  int v12; // lr
  unsigned int v13; // r12
  unsigned int v14; // r1
  int v15; // r3
  unsigned int v16; // r5
  bool v17; // zf
  unsigned int v18; // r5
  unsigned int i; // r0
  unsigned __int8 v20; // r6
  int v21; // r5
  int32x4_t v22; // q8
  uint32x4_t v23; // q9

  if ( HIWORD(this) )
  {
    if ( this >> 17 )
    {
      v22.n128_u64[0] = 0xFFFD05E2FFFCECB5LL;
      v22.n128_u64[1] = 0xFFFD315EFFFD141FLL;
      v23.n128_u64[0] = 0x5E2000AEDB5LL;
      v23.n128_u64[1] = 0xE00000C1FLL;
      v22.n128_u64[0] = vmovn_s32(vcgtq_u32(v23, vaddq_s32(vdupq_n_s32(this), v22))).n64_u64[0];
      v8 = (v22.n128_u8[0] & 1 | (2 * (v22.n128_u8[2] & 1)) & 0xF | (4 * (v22.n128_u8[4] & 1)) & 0xF | (8 * v22.n128_u8[6]) & 0xF) == 0
        && this - 173790 > 0x21
        && this - 177973 > 0xA
        && this >> 1 != (_DWORD)&elf_hash_bucket[1665] + 3
        && &aZnkst6Ndk17num_47[this - 1114020] >= "baseEwb"
        && this < 0x110000;
      return v8 & 1;
    }
    v12 = (unsigned __int16)this;
    v13 = BYTE1(this);
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      v16 = byte_D6785[2 * v15];
      v17 = v13 == v16;
      if ( v13 < v16 )
      {
LABEL_24:
        v8 = 1;
        for ( i = 0; i <= 0x1A2; ++i )
        {
          v20 = byte_D69B5[i];
          if ( (v20 & 0x80) != 0 )
            v21 = byte_D69B5[++i] | ((v20 & 0x7F) << 8);
          else
            v21 = byte_D69B5[i];
          v12 -= v21;
          if ( v12 < 0 )
            break;
          v8 ^= 1u;
        }
        return v8 & 1;
      }
      v18 = byte_D6785[2 * v15 + 1] + v14;
      if ( v17 )
        break;
LABEL_23:
      ++v15;
      v14 = v18;
      if ( v15 == 38 )
        goto LABEL_24;
    }
    while ( byte_D67D1[v14] != (unsigned __int8)this )
    {
      if ( ++v14 >= v18 )
        goto LABEL_23;
    }
  }
  else
  {
    v2 = this >> 8;
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      v5 = byte_D6611[2 * v4];
      v6 = v2 == v5;
      if ( v2 < v5 )
      {
LABEL_9:
        v8 = 1;
        for ( j = 0; j <= 0x134; ++j )
        {
          v10 = byte_D6880[j];
          if ( (v10 & 0x80) != 0 )
            v11 = byte_D6880[++j] | ((v10 & 0x7F) << 8);
          else
            v11 = byte_D6880[j];
          this -= v11;
          if ( (this & 0x80000000) != 0 )
            break;
          v8 ^= 1u;
        }
        return v8 & 1;
      }
      v7 = byte_D6611[2 * v4 + 1] + v3;
      if ( v6 )
        break;
LABEL_8:
      ++v4;
      v3 = v7;
      if ( v4 == 41 )
        goto LABEL_9;
    }
    while ( byte_D6663[v3] != (unsigned __int8)this )
    {
      if ( ++v3 >= v7 )
        goto LABEL_8;
    }
  }
  v8 = 0;
  return v8 & 1;
}


// ======================================================================
// ADDR: 0x1e47b0
// SYMBOL: fmt::v8::detail::dragonbox::to_decimal<float>(float)
int __fastcall fmt::v8::detail::dragonbox::to_decimal<float>(__int64 a1)
{
  int v1; // r2
  int v2; // lr
  int v4; // r5
  int v5; // r2
  unsigned int v6; // r9
  unsigned int v7; // r11
  int v8; // r10
  unsigned int v9; // r3
  unsigned int v10; // kr00_4
  unsigned int v11; // r12
  unsigned int v12; // r4
  unsigned int v13; // r5
  unsigned int v14; // r3
  unsigned int v15; // r6
  _BOOL4 v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r0
  char v19; // r5
  int v20; // r2
  int v21; // r8
  unsigned int v22; // r5
  unsigned int v23; // r6
  int v24; // r9
  unsigned int v25; // r3
  int v26; // r4
  unsigned int v27; // r12
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r2
  unsigned int v31; // r2
  int v32; // r8
  int v33; // r1
  int v34; // r6
  unsigned int v35; // r3
  int v36; // r2
  int v37; // r6
  unsigned int v38; // r3
  int v40; // [sp+8h] [bp-30h]
  unsigned int v41; // [sp+Ch] [bp-2Ch]
  int v42; // [sp+10h] [bp-28h]
  int v43; // [sp+14h] [bp-24h]
  _DWORD *v44; // [sp+18h] [bp-20h]

  v1 = (unsigned __int8)(HIDWORD(a1) >> 23);
  HIDWORD(a1) &= 0x7FFFFFu;
  if ( v1 )
  {
    v2 = v1 - 150;
    if ( !HIDWORD(a1) )
    {
      v21 = (v2 * (int)&unk_9A209 - 261663) >> 21;
      v22 = *((_DWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands
            + 2 * (31 - v21));
      v23 = *((_DWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands
            + 2 * (31 - v21)
            + 1);
      v24 = v2 + ((-1741647 * v21) >> 19);
      v25 = ((*((_QWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands
              + 31
              - v21) >> 24)
           + __PAIR64__(v23, v22)) >> 32;
      v26 = 8 - v24;
      HIDWORD(a1) = (v25 << (v24 - 8)) | (((unsigned int)(*((_QWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands
                                                          + 31
                                                          - v21) >> 24)
                                         + v22) >> (40 - v24));
      LOWORD(v27) = -13107;
      if ( 8 - v24 >= 0 )
        HIDWORD(a1) = v25 >> v26;
      HIWORD(v27) = -13108;
      HIDWORD(a1) = (unsigned int)((HIDWORD(a1) * (unsigned __int64)v27) >> 32) >> 3;
      *(_DWORD *)a1 = HIDWORD(a1);
      v28 = ((__PAIR64__(v23, v22) - __PAIR64__(v23 >> 25, (v22 >> 25) | (v23 << 7))) >> 32 << ((unsigned __int8)v24 - 8)) | ((v22 - ((v22 >> 25) | (v23 << 7))) >> (40 - v24));
      if ( v26 >= 0 )
        v28 = (unsigned int)((__PAIR64__(v23, v22) - __PAIR64__(v23 >> 25, (v22 >> 25) | (v23 << 7))) >> 32) >> v26;
      if ( (v2 & 0xFFFFFFFE) != 2 )
        ++v28;
      if ( v28 <= 10 * HIDWORD(a1) )
      {
        v34 = 0;
        v35 = __ROR4__(-1030792151 * HIDWORD(a1), 2);
        if ( v35 <= 0x28F5C28 )
        {
          do
          {
            HIDWORD(a1) = v35;
            v34 += 2;
            v35 = __ROR4__(-1030792151 * v35, 2);
          }
          while ( v35 <= 0x28F5C28 );
          *(_DWORD *)a1 = HIDWORD(a1);
        }
        HIDWORD(a1) = __ROR4__(HIDWORD(a1) * v27, 1);
        if ( HIDWORD(a1) <= 0x19999999 )
        {
          *(_DWORD *)a1 = HIDWORD(a1);
          v34 |= 1u;
        }
        HIDWORD(a1) = v21 + 1 + v34;
        goto LABEL_51;
      }
      *(_DWORD *)(a1 + 4) = v21;
      HIDWORD(a1) = (v23 << (v24 - 7)) | (v22 >> (39 - v24));
      if ( 7 - v24 >= 0 )
        HIDWORD(a1) = v23 >> (7 - v24);
      HIDWORD(a1) = (unsigned int)(HIDWORD(a1) + 1) >> 1;
      *(_DWORD *)a1 = HIDWORD(a1);
      if ( v2 == -35 )
      {
        *(_DWORD *)a1 = HIDWORD(a1) & 0xFFFFFFFE;
      }
      else if ( HIDWORD(a1) < v28 )
      {
        *(_DWORD *)a1 = HIDWORD(a1) + 1;
      }
      return a1;
    }
    HIDWORD(a1) += 0x800000;
    v44 = (_DWORD *)a1;
  }
  else
  {
    if ( !HIDWORD(a1) )
    {
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      return a1;
    }
    v44 = (_DWORD *)a1;
    v2 = -149;
  }
  LODWORD(a1) = 2 * HIDWORD(a1);
  HIDWORD(a1) = BYTE4(a1) & 1;
  v4 = 32 - ((v2 * ((int)&stru_4D104.r_offset + 1)) >> 20);
  v5 = (v2 * ((int)&stru_4D104.r_offset + 1)) >> 20;
  v6 = *((_DWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands + 2 * v4);
  v7 = *((_DWORD *)&fmt::v8::detail::dragonbox::cache_accessor<float>::get_cached_power(int)::pow10_significands
       + 2 * v4
       + 1);
  v8 = v2 + (((1 - v5) * (int)&loc_1A934E) >> 19);
  v9 = ((_DWORD)a1 + 1) << v8;
  v10 = (v7 * (unsigned __int64)v9 + ((v6 * (unsigned __int64)v9) >> 32)) >> 32;
  v11 = v10 / 0x64;
  v12 = (v7 * (unsigned __int64)v9 + __PAIR64__(-100 * (v10 / 0x64), (v6 * (unsigned __int64)v9) >> 32)) >> 32;
  v13 = (v6 >> (63 - v8)) | (v7 << (v8 - 31));
  if ( 31 - v8 >= 0 )
    v13 = v7 >> (31 - v8);
  if ( v12 >= v13 )
  {
    v43 = (v2 * ((int)&stru_4D104.r_offset + 1)) >> 20;
    if ( v12 > v13 )
      goto LABEL_14;
    v29 = v6 * (a1 - 1);
    v30 = 1 << (64 - v8);
    v40 = 32 - v8;
    v41 = (__PAIR64__(v7, v6) * (unsigned int)(a1 - 1)) >> 32;
    if ( 32 - v8 >= 0 )
      v30 = 0;
    v42 = v30 & v29;
    v31 = 1u >> (v8 - 32);
    if ( v40 >= 0 )
      v31 = 1 << v40;
    v32 = v31 & v41;
    if ( (unsigned int)(v2 + 1) > 0x28 || HIDWORD(a1) )
    {
      v5 = (v2 * ((int)&stru_4D104.r_offset + 1)) >> 20;
      if ( !(v42 | v32) )
        goto LABEL_14;
    }
    else
    {
      v33 = (v41 << v8) | (v29 >> v40);
      if ( v8 <= 0 )
        v33 = v41 >> -(char)v8;
      v5 = (v2 * ((int)&stru_4D104.r_offset + 1)) >> 20;
      if ( !(v42 | v32) && v33 )
        goto LABEL_14;
    }
  }
  else if ( HIDWORD(a1) && !v12 && is_mul_ok(v6, v9) )
  {
    --v11;
    v12 = 100;
    v43 = (v2 * ((int)&stru_4D104.r_offset + 1)) >> 20;
LABEL_14:
    v14 = v12 - (v13 >> 1);
    HIDWORD(a1) = ((6554 * v14 + 32770) >> 16) + 10 * v11;
    if ( (unsigned __int16)(6554 * v14 - 32766) < 0x199Au )
    {
      v15 = v6 * a1;
      v16 = (v14 & 1) == 0;
      v17 = (__PAIR64__(v7, v6) * (unsigned int)a1) >> 32;
      v18 = (v17 << (v8 - 32)) | ((v6 * (unsigned int)a1) >> (64 - v8));
      v19 = 32 - v8;
      if ( 32 - v8 >= 0 )
        v18 = v17 >> v19;
      if ( (v18 & 1) == v16 )
      {
        v20 = -1;
      }
      else
      {
        LODWORD(a1) = (v17 << v8) | (v15 >> v19);
        if ( v8 <= 0 )
          LODWORD(a1) = v17 >> -(char)v8;
        v20 = -(((_DWORD)a1 == 0) & BYTE4(a1));
      }
      *v44 = HIDWORD(a1) + v20;
      LODWORD(a1) = v43;
      v44[1] = v43;
      return a1;
    }
    LODWORD(a1) = v44;
    *v44 = HIDWORD(a1);
    HIDWORD(a1) = v43;
LABEL_51:
    *(_DWORD *)(a1 + 4) = HIDWORD(a1);
    return a1;
  }
  HIDWORD(a1) = v5 + 1;
  v36 = 0;
  v37 = 0;
  v38 = __ROR4__(-1030792151 * v11, 2);
  if ( v38 <= 0x28F5C28 )
  {
    v37 = 0;
    do
    {
      v37 += 2;
      v11 = v38;
      v38 = __ROR4__(-1030792151 * v38, 2);
    }
    while ( v38 <= 0x28F5C28 );
  }
  LODWORD(a1) = __ROR4__(-858993459 * v11, 1);
  if ( (unsigned int)a1 <= 0x19999999 )
    v36 = 1;
  else
    LODWORD(a1) = v11;
  HIDWORD(a1) += v36 | v37;
  *(_QWORD *)v44 = a1;
  return a1;
}


// ======================================================================
// ADDR: 0x1e4b68
// SYMBOL: fmt::v8::detail::dragonbox::to_decimal<double>(double)
int __fastcall fmt::v8::detail::dragonbox::to_decimal<double>(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  int v6; // r4
  int v7; // r0
  int v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r8
  int v11; // r10
  int v12; // r3
  unsigned int v13; // r2
  __int64 v14; // kr30_8
  int v15; // r2
  int v16; // r1
  int v17; // r6
  int v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r9
  signed int v22; // r5
  unsigned int v23; // r4
  unsigned int v24; // r8
  int v25; // r3
  unsigned int v26; // r0
  int v27; // r0
  bool v28; // zf
  int v29; // r4
  int v30; // r1
  unsigned int v31; // r6
  unsigned int v32; // r9
  int v33; // r10
  char v34; // r4
  __int64 v35; // r0
  int v36; // r8
  __int64 v37; // r0
  unsigned int *v38; // r11
  unsigned int v39; // r9
  unsigned __int64 v40; // r2
  unsigned int v41; // r4
  unsigned int v42; // r2
  unsigned int v43; // r3
  unsigned int v44; // r5
  int v45; // r0
  int v46; // r1
  unsigned int v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r1
  unsigned int v50; // r0
  __int64 v51; // kr60_8
  __int64 v52; // kr68_8
  __int64 v53; // kr70_8
  unsigned __int64 v54; // kr78_8
  unsigned int v55; // r3
  int v56; // r0
  unsigned int v57; // r1
  __int64 v58; // r2
  unsigned int v59; // t2
  bool v60; // cc
  int v61; // r3
  __int64 v62; // kr90_8
  bool v63; // cf
  unsigned int v64; // r1
  int v65; // r12
  unsigned int v66; // r3
  int v67; // r0
  unsigned int v68; // r1
  bool v69; // cf
  bool v70; // zf
  int v71; // r0
  unsigned int v72; // r4
  unsigned int v73; // krA0_4
  int v74; // r6
  __int16 v75; // r0
  int v76; // r0
  int v77; // lr
  unsigned int v78; // r4
  unsigned int v79; // r6
  int v80; // r2
  unsigned int v81; // r6
  unsigned int v82; // r1
  unsigned int v83; // r0
  unsigned int v84; // r6
  unsigned int v86; // r2
  unsigned int v87; // r4
  unsigned int v88; // r4
  unsigned int v89; // r6
  unsigned int v90; // r2
  int v91; // r0
  int v92; // r1
  int v93; // [sp+8h] [bp-58h]
  int v94; // [sp+Ch] [bp-54h]
  unsigned int v95; // [sp+10h] [bp-50h]
  unsigned int v96; // [sp+10h] [bp-50h]
  int v97; // [sp+14h] [bp-4Ch]
  int v98; // [sp+18h] [bp-48h]
  int v99; // [sp+18h] [bp-48h]
  unsigned int *v100; // [sp+1Ch] [bp-44h]
  int v101; // [sp+1Ch] [bp-44h]
  __int64 v102; // [sp+20h] [bp-40h] BYREF
  char v103; // [sp+28h] [bp-38h]
  _BYTE v104[8]; // [sp+30h] [bp-30h] BYREF
  __int64 v105; // [sp+38h] [bp-28h]
  int v106; // [sp+40h] [bp-20h]

  v6 = a4 & 0xFFFFF;
  v7 = (a4 >> 20) & 0x7FF;
  if ( v7 )
  {
    v8 = v7 - 1075;
    if ( a3 | v6 )
    {
      v6 += 0x100000;
      v100 = (unsigned int *)a1;
      goto LABEL_6;
    }
    v29 = v8 * (_DWORD)&unk_9A209 - 261663;
    fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(v104, -(v29 >> 21));
    v101 = v29 >> 21;
    v30 = v8;
    v99 = v8;
    v31 = HIDWORD(v105);
    v32 = v105;
    v33 = v30 + ((-1741647 * (v29 >> 21)) >> 19);
    v34 = 11 - v33;
    v35 = v105 + (HIDWORD(v105) >> 21);
    LODWORD(v35) = ((unsigned int)v35 >> (11 - v33)) | (HIDWORD(v35) << (v33 + 21));
    v36 = -21 - v33;
    if ( -21 - v33 >= 0 )
      LODWORD(v35) = HIDWORD(v35) >> v36;
    HIDWORD(v35) >>= v34;
    if ( -21 - v33 >= 0 )
      HIDWORD(v35) = 0;
    v37 = sub_2217B4(v35, HIDWORD(v35), 10, 0);
    v96 = v32;
    *(_QWORD *)a1 = v37;
    v38 = (unsigned int *)a1;
    v40 = __PAIR64__(v31, v32) - (v31 >> 22);
    v39 = HIDWORD(v40) >> v34;
    LODWORD(v40) = (unsigned int)v40 >> v34;
    if ( v36 >= 0 )
      v39 = 0;
    v41 = (HIDWORD(v40) << (v33 + 21)) | v40;
    if ( v36 >= 0 )
      v41 = HIDWORD(v40) >> v36;
    v42 = (__PAIR64__(v39, v41) + 1) >> 32;
    v43 = v41 + 1;
    if ( (v99 & 0xFFFFFFFE) == 2 )
    {
      v42 = v39;
      v43 = v41;
    }
    if ( 10 * v37 < __PAIR64__(v42, v43) )
    {
      a1[2] = v101;
      v44 = v31 >> (10 - v33);
      v45 = -22 - v33;
      if ( -22 - v33 >= 0 )
        v44 = 0;
      v46 = (v31 << (v33 + 22)) | (v96 >> (10 - v33));
      if ( v45 >= 0 )
        v46 = v31 >> v45;
      v47 = (unsigned int)((__PAIR64__(v44, v46) + 1) >> 32) >> 1;
      v48 = (__int64)(__PAIR64__(v44, v46) + 1) >> 1;
      *v38 = v48;
      v38[1] = v47;
      if ( v99 == -77 )
      {
        v49 = v48 & 0xFFFFFFFE;
        v50 = v47 & 0x7FFFFFFF;
      }
      else
      {
        if ( __PAIR64__(v47, v48) >= __PAIR64__(v42, v43) )
          return v106;
        v50 = (__PAIR64__(v47, v48) + 1) >> 32;
        v49 = v48 + 1;
      }
      *v38 = v49;
      v38[1] = v50;
      return v106;
    }
    v51 = 2882303761LL * (unsigned int)v37;
    v52 = 2221002493LL * HIDWORD(v37);
    v53 = -1412663535LL * SHIDWORD(v37) + SHIDWORD(v52) + SHIDWORD(v51);
    v54 = (unsigned int)v52 + ((2221002493u * (unsigned __int64)(unsigned int)v37) >> 32);
    if ( (v54 + __PAIR64__(v53, -1412663535 * (int)v37)) >> 32 << 6
      || __PAIR64__((int)v54 - 1412663535 * (int)v37, -2073964803 * (int)v37) >= 0xABCC77118461CEFDLL )
    {
      v86 = (__int64)(0x8F5C28F5C28F5C29LL * v37) >> 2;
      v87 = ((_DWORD)v37 << 30) | ((unsigned int)((0x8F5C28F5C28F5C29LL * v37) >> 32) >> 2);
      if ( __PAIR64__(v87, v86) <= 0x28F5C28F5C28F5CLL )
      {
        v61 = 0;
        do
        {
          v37 = __PAIR64__(v87, v86);
          v61 += 2;
          v88 = (3264175145u * __PAIR64__(v87, v86)) >> 32;
          v86 = (v88 << 30) | ((-1030792151 * v86) >> 2);
          v87 = ((_DWORD)v37 << 30) | (v88 >> 2);
        }
        while ( __PAIR64__(v87, v86) <= 0x28F5C28F5C28F5CLL );
        *(_QWORD *)a1 = v37;
      }
      else
      {
        v61 = 0;
      }
      v89 = -858993459 * v37;
      v90 = (0xCCCCCCCCCCCCCCCDLL * v37) >> 32;
      v91 = ((_DWORD)v37 << 31) | (v90 >> 1);
      v92 = (v90 << 31) | (v89 >> 1);
      if ( __PAIR64__(v91, v92) <= 0x1999999999999999LL )
      {
        *a1 = v92;
        a1[1] = v91;
        v61 |= 1u;
      }
    }
    else
    {
      v55 = ((unsigned int)((v54 + __PAIR64__(v53, -1412663535 * (int)v37)) >> 32) >> 26) | (((__CFADD__(
                                                                                                 __CFADD__(
                                                                                                   (_DWORD)v54,
                                                                                                   (_DWORD)v51),
                                                                                                 (_DWORD)v53) | __CFADD__(HIDWORD(v54), __CFADD__((_DWORD)v54, (_DWORD)v51) + (_DWORD)v53))
                                                                                            + HIDWORD(v53)) << 6);
      v56 = 6;
      do
      {
        v57 = v55;
        v56 += 2;
        v55 = __ROR4__(-1030792151 * v55, 2);
      }
      while ( v55 <= 0x28F5C28 );
      v59 = __ROR4__(-858993459 * v57, 1);
      v58 = v59;
      v60 = v59 > 0x19999999;
      if ( v59 > 0x19999999 )
        LODWORD(v58) = v57;
      *(_QWORD *)a1 = v58;
      if ( !v60 )
        HIDWORD(v58) = 1;
      v61 = HIDWORD(v58) | v56;
    }
    a1[2] = v101 + 1 + v61;
  }
  else
  {
    if ( a3 | v6 )
    {
      v8 = -1074;
      v100 = (unsigned int *)a1;
LABEL_6:
      v97 = v8 * ((_DWORD)&stru_4D104.r_offset + 1);
      fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(
        v104,
        2 - ((v8 * ((int)&stru_4D104.r_offset + 1)) >> 20));
      v95 = v105;
      v94 = 2 * a3;
      v9 = 2 * a3 + 1;
      v93 = (2 * v6) | (a3 >> 31);
      v10 = HIDWORD(v105);
      v11 = v8 + (((int)&loc_1A934E * (2 - ((v8 * ((int)&stru_4D104.r_offset + 1)) >> 20))) >> 19);
      v98 = v8;
      v12 = (v9 >> (32 - v11)) | (v93 << v11);
      if ( v11 - 32 >= 0 )
        v12 = v9 << (v11 - 32);
      v13 = v9 << v11;
      if ( v11 - 32 >= 0 )
        v13 = 0;
      fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul(&v102, v9, v13, v12, v104);
      v14 = 3813930959LL * HIDWORD(v102);
      v15 = 549755813 * HIDWORD(v102) + HIDWORD(v14) + ((549755813 * (unsigned __int64)(unsigned int)v102) >> 32);
      v17 = (((3813930959u * (unsigned __int64)(unsigned int)v102) >> 32) + (unsigned int)v14) >> 32;
      v16 = (unsigned __int64)(3813930959LL * v102) >> 32;
      v63 = __CFADD__(__CFADD__(v16, 549755813 * v102), v15);
      v18 = __CFADD__(v16, 549755813 * v102) + v15;
      v19 = (v63 | __CFADD__(v17, v18))
          + ((unsigned __int64)(549755813LL * SHIDWORD(v102)
                              + SHIDWORD(v14)
                              + (int)((549755813 * (unsigned __int64)(unsigned int)v102) >> 32)) >> 32);
      v20 = v10;
      v21 = ((unsigned int)(v17 + v18) >> 7) | (v19 << 25);
      v22 = v19 >> 7;
      v23 = v102 - 1000 * v21;
      v24 = (v95 >> (63 - v11)) | (v10 << (v11 - 31));
      if ( 31 - v11 >= 0 )
        v24 = v20 >> (31 - v11);
      v25 = v97 >> 20;
      if ( v24 <= v23 )
      {
        if ( v24 < v23
          || ((v27 = fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(
                       v94 - 1,
                       (__PAIR64__(v93, v94) - 1) >> 32,
                       v104,
                       v11),
               (unsigned int)(v98 + 2) > 0x58)
           || (a3 & 1) != 0
            ? (v28 = v27 << 31 == 0)
            : (v28 = (v27 & 0x101) == 0),
              v25 = v97 >> 20,
              v28) )
        {
          v26 = v21;
LABEL_58:
          v72 = v23 - (v24 >> 1);
          v73 = 10 * v26 + ((656 * v72 + 32800) >> 16);
          v22 = (10LL * v26 + __PAIR64__(10 * v22, (656 * v72 + 32800) >> 16)) >> 32;
          v21 = v73;
          if ( (unsigned __int16)(656 * v72 - 32736) >> 4 <= 0x28u )
          {
            v74 = v25;
            v75 = fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(v94, v93, v104, v11);
            if ( (v72 & 1) == (v75 & 1) )
              v76 = -(v73 & ((unsigned __int16)(v75 & 0x100) >> 8));
            else
              v76 = -1;
            v22 = (__PAIR64__(v22, v73) + __PAIR64__(v76, v76)) >> 32;
            v21 = v73 + v76;
            v25 = v74;
          }
LABEL_72:
          *v100 = v21;
          v100[1] = v22;
          v100[2] = v25;
          return v106;
        }
      }
      else if ( (a3 & 1) != 0 && !v23 && v103 )
      {
        v22 = (__PAIR64__(v22, v21) - 1) >> 32;
        v26 = v21 - 1;
        v23 = 1000;
        goto LABEL_58;
      }
      v62 = -1412663535LL * v22
          + (int)((2221002493u * (unsigned __int64)(unsigned int)v22) >> 32)
          + (int)((2882303761u * (unsigned __int64)v21) >> 32);
      v63 = __CFADD__(((2221002493u * (unsigned __int64)v21) >> 32) - 2073964803 * v22, -1412663535 * v21);
      v65 = v25 + 1;
      v64 = (((2221002493u * (unsigned __int64)v21) >> 32)
           + (unsigned int)(-2073964803 * v22)
           + __PAIR64__(v62, -1412663535 * v21)) >> 32;
      if ( v64 << 6
        || __PAIR64__(
             ((2221002493u * (unsigned __int64)v21) >> 32) - 2073964803 * v22 - 1412663535 * v21,
             -2073964803 * v21) >= 0xABCC77118461CEFDLL )
      {
        v77 = 0;
        v78 = (__int64)(0x8F5C28F5C28F5C29LL * __PAIR64__(v22, v21)) >> 2;
        v79 = (v21 << 30) | ((unsigned int)((0x8F5C28F5C28F5C29LL * __PAIR64__(v22, v21)) >> 32) >> 2);
        v80 = 0;
        if ( __PAIR64__(v79, v78) <= 0x28F5C28F5C28F5CLL )
        {
          v80 = 0;
          do
          {
            v22 = v79;
            v21 = v78;
            v80 += 2;
            v81 = (3264175145u * __PAIR64__(v79, v78)) >> 32;
            v78 = (v81 << 30) | ((-1030792151 * v78) >> 2);
            v79 = (v21 << 30) | (v81 >> 2);
          }
          while ( __PAIR64__(v79, v78) <= 0x28F5C28F5C28F5CLL );
        }
        v82 = (__int64)(0xCCCCCCCCCCCCCCCDLL * __PAIR64__(v22, v21)) >> 1;
        v83 = (v21 << 31) | ((unsigned int)((0xCCCCCCCCCCCCCCCDLL * __PAIR64__(v22, v21)) >> 32) >> 1);
        LOWORD(v84) = -26214;
        if ( __PAIR64__(v83, v82) <= 0x1999999999999999LL )
        {
          v21 = (__int64)(0xCCCCCCCCCCCCCCCDLL * __PAIR64__(v22, v21)) >> 1;
          v22 = v83;
        }
        HIWORD(v84) = -26215;
        if ( __PAIR64__(v83, v82) < (v84 | 0x1999999900000000uLL) )
          v77 = 1;
        v71 = v80 | v77;
        v65 = v25 + 1;
      }
      else
      {
        v66 = (v64 >> 26) | (((__CFADD__(v63, (_DWORD)v62) | __CFADD__(
                                                               (((2221002493u * (unsigned __int64)v21) >> 32)
                                                              + (unsigned int)(-2073964803 * v22)) >> 32,
                                                               v63 + (_DWORD)v62))
                            + HIDWORD(v62)) << 6);
        v67 = 6;
        do
        {
          v68 = v66;
          v67 += 2;
          v66 = __ROR4__(-1030792151 * v66, 2);
        }
        while ( v66 <= 0x28F5C28 );
        v22 = 0;
        v21 = __ROR4__(-858993459 * v68, 1);
        v69 = v21 >= 0x19999999;
        v70 = v21 == 429496729;
        if ( v21 > 0x19999999 )
          v21 = v68;
        v71 = v67 | (v70 || !v69);
      }
      v25 = v65 + v71;
      goto LABEL_72;
    }
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return v106;
}


// ======================================================================
// ADDR: 0x1e51b4
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)
int *__fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int *result, int a2)
{
  int v2; // r2
  int v3; // r12
  _DWORD *v4; // r6
  int v5; // r3
  int v6; // r8
  int v7; // r6
  int v8; // r5
  int v9; // r2
  unsigned int v10; // r10
  unsigned int v11; // r4
  unsigned int v12; // r3
  unsigned __int64 v13; // kr18_8
  unsigned int v14; // r8
  int v15; // kr28_4
  int v16; // r9
  unsigned int v17; // r11
  __int64 v18; // kr38_8
  unsigned int v19; // r3
  int v20; // r6
  unsigned int v21; // r8
  unsigned __int64 v22; // kr50_8
  int v23; // r2
  unsigned int v24; // r9
  unsigned __int64 v25; // kr10_8
  int v26; // r4
  unsigned int v27; // r2
  unsigned int v28; // lr
  unsigned int v29; // r11
  int v30; // r4
  int v31; // r5
  int v32; // r6
  int v33; // r8
  char v34; // r1
  int v35; // r0
  unsigned int v36; // r3
  int v37; // r2
  int v38; // r0
  int v39; // r0
  int v40; // r2
  int v41; // r2
  unsigned int v42; // r1
  int v43; // [sp+4h] [bp-38h]
  unsigned int v44; // [sp+8h] [bp-34h]
  int v45; // [sp+Ch] [bp-30h]
  int v46; // [sp+14h] [bp-28h]
  int v47; // [sp+18h] [bp-24h]
  int v48; // [sp+18h] [bp-24h]
  int *v49; // [sp+1Ch] [bp-20h]

  v2 = (a2 + 292) / 27;
  v3 = fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)::pow10_significands[4 * v2];
  v4 = &fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)::pow10_significands[4 * v2];
  v6 = v4[2];
  v5 = v4[1];
  v7 = v4[3];
  v8 = 27 * v2 - 292;
  v9 = a2 - v8;
  if ( a2 != v8 )
  {
    v10 = v5;
    v49 = result;
    v11 = fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)::powers_of_5_64[2 * v9];
    v12 = fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)::powers_of_5_64[2 * v9 + 1];
    v13 = v12 * (unsigned __int64)(unsigned int)v6;
    v45 = v12 * v6;
    v47 = v12 * v3;
    v15 = v11 * v6;
    v14 = (v11 * (unsigned __int64)(unsigned int)v6) >> 32;
    v43 = v11 * v7;
    v16 = (unsigned __int64)((int)v12 * (__int64)v7
                           + (int)((v11 * (unsigned __int64)(unsigned int)v7) >> 32)
                           + SHIDWORD(v13)) >> 32;
    v17 = v12 * v7 + ((v11 * (unsigned __int64)(unsigned int)v7) >> 32) + HIDWORD(v13);
    v18 = (int)v12 * (__int64)(int)v10
        + (int)((v11 * (unsigned __int64)v10) >> 32)
        + (int)((v12 * (unsigned __int64)(unsigned int)v3) >> 32);
    v44 = v11 * v3;
    v19 = (v14 + (unsigned __int64)(v11 * v7) + __PAIR64__(v17, v45)) >> 32;
    v20 = v14 + v11 * v7 + v45;
    v21 = (__CFADD__(__CFADD__(v14 + v43, v45), (v14 + (unsigned __int64)(unsigned int)v43) >> 32) | __CFADD__(v17, v19))
        + v16;
    v22 = ((v11 * (unsigned __int64)(unsigned int)v3) >> 32) + v11 * v10;
    v25 = v22 + __PAIR64__(v18, v47);
    v23 = HIDWORD(v25);
    v24 = v25;
    v26 = (__CFADD__(__CFADD__((_DWORD)v22, v47), (_DWORD)v18) | __CFADD__(
                                                                   HIDWORD(v22),
                                                                   __CFADD__((_DWORD)v22, v47) + (_DWORD)v18))
        + HIDWORD(v18);
    v27 = ((v22 + __PAIR64__(v18, v47)) >> 32) + v15;
    v28 = v26 + __CFADD__((v22 + __PAIR64__(v18, v47)) >> 32, v15) + v20;
    v29 = (__CFADD__(__CFADD__((v22 + __PAIR64__(v18, v47)) >> 32, v15), v20) | __CFADD__(
                                                                                  v26,
                                                                                  __CFADD__(
                                                                                    (v22 + __PAIR64__(v18, v47)) >> 32,
                                                                                    v15)
                                                                                + v20))
        + v19;
    v48 = (__PAIR64__(
             v21,
             __CFADD__(__CFADD__((v22 + __PAIR64__(v18, v47)) >> 32, v15), v20) | (unsigned __int8)__CFADD__(
                                                                                                     v26,
                                                                                                     __CFADD__((v22 + __PAIR64__(v18, v47)) >> 32, v15) + v20))
         + v19) >> 32;
    v30 = ((a2 * (int)&loc_1A934E) >> 19) - (a2 - v8 + ((v8 * (int)&loc_1A934E) >> 19));
    v31 = 32 - v30;
    v32 = v30 - 32;
    v33 = (v27 >> v30) | (v28 << (32 - v30));
    v34 = 64 - v30;
    if ( v30 - 32 >= 0 )
      v33 = v28 >> v32;
    v35 = (v28 << v34) | (v27 >> (v30 - 32));
    if ( v31 >= 0 )
      v35 = v27 << v31;
    v36 = v24 >> v30;
    if ( v32 >= 0 )
      v36 = 0;
    v46 = v35 | v36;
    v37 = v27 << v34;
    v38 = (v44 >> v30) | (v24 << v31);
    if ( v32 >= 0 )
      v38 = v24 >> v32;
    if ( v31 >= 0 )
      v37 = 0;
    v39 = v38 | v37;
    v40 = v29 << v34;
    if ( v31 >= 0 )
      v40 = 0;
    v6 = v33 | v40;
    v5 = (__PAIR64__(v46, v39) + 1) >> 32;
    v3 = v39 + 1;
    v41 = (v29 >> (v30 - 32)) | (v48 << v34);
    v42 = v28 >> v30;
    if ( v31 >= 0 )
      v41 = v29 << v31;
    result = v49;
    if ( v32 >= 0 )
      v42 = 0;
    v7 = v41 | v42;
  }
  *result = v3;
  result[1] = v5;
  result[2] = v6;
  result[3] = v7;
  return result;
}


// ======================================================================
// ADDR: 0x1e5350
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul(ulong long,fmt::v8::detail::uint128_fallback const&)
bool __fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v6; // kr08_8
  unsigned __int64 v7; // kr10_8
  unsigned __int64 v8; // kr18_8
  __int64 v9; // kr28_8
  unsigned __int64 v10; // kr30_8
  unsigned __int64 v11; // kr38_8
  unsigned __int64 v12; // kr40_8
  __int64 v13; // r0
  unsigned __int64 v14; // r2
  bool v15; // cf
  unsigned __int64 v16; // r0
  _BOOL4 result; // r0
  unsigned int v18; // [sp+0h] [bp-20h]

  v6 = *((_QWORD *)a5 + 1);
  v7 = HIDWORD(v6) * (unsigned __int64)a3;
  v8 = (unsigned int)v6 * (unsigned __int64)a4;
  v9 = SHIDWORD(v6) * (__int64)(int)a4 + SHIDWORD(v8) + SHIDWORD(v7);
  v18 = v6 * a3;
  v10 = (((unsigned int)v6 * (unsigned __int64)a3) >> 32) + (unsigned int)v8;
  v11 = *a5 * (unsigned __int64)a4;
  v12 = a5[1] * (unsigned __int64)a3;
  v13 = (int)a5[1] * (__int64)(int)a4 + SHIDWORD(v11) + SHIDWORD(v12);
  v14 = ((*a5 * (unsigned __int64)a3) >> 32) + (unsigned int)v11;
  v15 = __CFADD__(__CFADD__((_DWORD)v14, (_DWORD)v12), (_DWORD)v13);
  LODWORD(v13) = __CFADD__((_DWORD)v14, (_DWORD)v12) + (_DWORD)v13;
  v15 |= __CFADD__(HIDWORD(v14), (_DWORD)v13);
  LODWORD(v13) = HIDWORD(v14) + v13;
  HIDWORD(v13) += v15;
  v15 = __CFADD__(__CFADD__((_DWORD)v13, v18), HIDWORD(v13));
  v16 = v13 + __PAIR64__((int)v10 + (int)v7, v18);
  result = v16 == 0;
  *(_QWORD *)a1 = __PAIR64__(
                    (unsigned int)(__CFADD__(__CFADD__((_DWORD)v10, (_DWORD)v7), (_DWORD)v9) | __CFADD__(
                                                                                                 HIDWORD(v10),
                                                                                                 __CFADD__(
                                                                                                   (_DWORD)v10,
                                                                                                   (_DWORD)v7)
                                                                                               + (_DWORD)v9))
                  + HIDWORD(v9),
                    v15 | (unsigned __int8)__CFADD__(v10 + v7, HIDWORD(v16)))
                + ((v10 + __PAIR64__(v9, v7)) >> 32);
  *(_BYTE *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1e53d8
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(ulong long,fmt::v8::detail::uint128_fallback const&,int)
int __fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(
        __int64 a1,
        unsigned int *a2,
        int a3)
{
  unsigned __int64 v3; // kr20_8
  unsigned __int64 v4; // kr30_8
  int v5; // r4
  int v6; // r5
  __int64 v7; // r8
  unsigned int v8; // r2
  unsigned int v9; // r6
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r4
  int v13; // lr
  int v14; // r5
  int v15; // r6
  int v16; // r2
  unsigned int v17; // r1

  v3 = a2[1] * (unsigned __int64)(unsigned int)a1;
  v4 = a2[1] * (unsigned __int64)HIDWORD(a1)
     + *((_QWORD *)a2 + 1) * a1
     + ((*a2 * (unsigned __int64)HIDWORD(a1)) >> 32)
     + HIDWORD(v3);
  v5 = (((*a2 * (unsigned __int64)(unsigned int)a1) >> 32) + *a2 * HIDWORD(a1)) >> 32;
  v6 = (a1 * (unsigned __int64)*a2) >> 32;
  v7 = *(_QWORD *)a2 * a1;
  v8 = v5 + __CFADD__(v6, (_DWORD)v3) + (_DWORD)v4;
  v9 = (__CFADD__(__CFADD__(v6, (_DWORD)v3), (_DWORD)v4) | __CFADD__(v5, __CFADD__(v6, (_DWORD)v3) + (_DWORD)v4))
     + HIDWORD(v4);
  v10 = (unsigned int)(v6 + v3) >> (64 - a3);
  v11 = (v8 >> (64 - a3)) | (v9 << (a3 - 32));
  v12 = 32 - a3;
  if ( 32 - a3 >= 0 )
    v11 = v9 >> v12;
  v13 = v11 & 1;
  v14 = (v8 >> v12) | (v9 << a3);
  v15 = a3 - 32;
  if ( a3 - 32 >= 0 )
    v14 = v8 << v15;
  if ( v12 >= 0 )
    v10 = 0;
  v16 = v8 << a3;
  v17 = ((unsigned int)v7 >> (64 - a3)) | (HIDWORD(v7) << (a3 - 32));
  if ( v15 >= 0 )
    v16 = 0;
  if ( v12 >= 0 )
    v17 = HIDWORD(v7) >> v12;
  return v13 | (((v10 | v14 | v17 | v16) == 0) << 8);
}


// ======================================================================
// ADDR: 0x1e5492
// SYMBOL: fmt::v8::detail::locale_ref::locale_ref<std::__ndk1::locale>(std::__ndk1::locale const&)
_DWORD *__fastcall fmt::v8::detail::locale_ref::locale_ref<std::locale>(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


// ======================================================================
// ADDR: 0x1e5496
// SYMBOL: fmt::v8::detail::locale_ref::get<std::__ndk1::locale>(void)
int __fastcall fmt::v8::detail::locale_ref::get<std::locale>(std::locale *a1, const std::locale **a2)
{
  const std::locale *v2; // r1

  v2 = *a2;
  if ( v2 )
    return std::locale::locale(a1, v2);
  else
    return std::locale::locale(a1);
}


// ======================================================================
// ADDR: 0x1e54ac
// SYMBOL: fmt::v8::detail::thousands_sep_impl<char>(fmt::v8::detail::locale_ref)
int __fastcall fmt::v8::detail::thousands_sep_impl<char>(int a1, const std::locale *a2)
{
  int v3; // r5
  int v4; // r1
  char v5; // r0
  double v6; // d16
  double v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]

  if ( a2 )
    std::locale::locale((std::locale *)&v8, a2);
  else
    std::locale::locale((std::locale *)&v8);
  v3 = std::locale::use_facet((std::locale *)&v8, (std::locale::id *)&std::numpunct<char>::id);
  std::locale::~locale((std::locale *)&v8);
  (*(void (__fastcall **)(double *, int))(*(_DWORD *)v3 + 20))(&v8, v3);
  v4 = HIDWORD(v8);
  if ( !(LOBYTE(v8) << 31) )
    v4 = LOBYTE(v8) >> 1;
  if ( v4 )
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 16))(v3);
  else
    v5 = 0;
  v6 = v8;
  *(_DWORD *)(a1 + 8) = v9;
  *(_BYTE *)(a1 + 12) = v5;
  *(double *)a1 = v6;
  return v10;
}


// ======================================================================
// ADDR: 0x1e5550
// SYMBOL: fmt::v8::detail::decimal_point_impl<char>(fmt::v8::detail::locale_ref)
int __fastcall fmt::v8::detail::decimal_point_impl<char>(std::locale *a1)
{
  int v1; // r0
  int v2; // r4
  int v4; // [sp+0h] [bp-10h] BYREF

  if ( a1 )
    std::locale::locale((std::locale *)&v4, a1);
  else
    std::locale::locale((std::locale *)&v4);
  v1 = std::locale::use_facet((std::locale *)&v4, (std::locale::id *)&std::numpunct<char>::id);
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  std::locale::~locale((std::locale *)&v4);
  return v2;
}


// ======================================================================
// ADDR: 0x1e55b8
// SYMBOL: fmt::v8::detail::format_float<double>(double,int,fmt::v8::detail::float_specs,fmt::v8::detail::buffer<char> &)
size_t __fastcall fmt::v8::detail::format_float<double>(double a1, signed int n, int a3, __int64 a4)
{
  int v5; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  bool v10; // zf
  int v11; // r3
  int v12; // r4
  int v13; // r1
  unsigned int v14; // r3
  unsigned int v15; // r5
  unsigned __int64 v16; // kr10_8
  __int64 v17; // kr20_8
  unsigned __int64 v18; // r2
  int v19; // r11
  unsigned int v20; // r0
  unsigned int v21; // r8
  int v22; // r12
  unsigned int v23; // r5
  int v24; // r1
  unsigned int v25; // r2
  int v26; // r10
  unsigned int v27; // r3
  int v28; // r6
  int v29; // r1
  unsigned __int64 v30; // kr30_8
  char *v31; // r4
  int v32; // r1
  __int64 *v33; // r8
  unsigned int v34; // r6
  unsigned int v35; // r1
  int v36; // r2
  unsigned int v37; // r3
  __int64 v38; // r4
  __int64 v39; // kr38_8
  int v40; // r9
  unsigned __int64 v41; // r2
  int v42; // r4
  int v43; // r0
  char v44; // r5
  int v45; // r11
  unsigned int v46; // r8
  __int64 v47; // r0
  int v48; // r6
  unsigned int v49; // r4
  int v50; // kr00_4
  int v51; // kr08_4
  unsigned int v52; // r0
  unsigned int v53; // r1
  int v54; // r5
  int v55; // r8
  int v56; // r0
  int v57; // r1
  int v58; // lr
  int v59; // r4
  int v60; // r1
  int v61; // r2
  unsigned int v62; // r3
  unsigned int v63; // r1
  int v64; // r0
  int v66; // r0
  int v67; // r1
  int v68; // r2
  float v69; // s0
  float v70; // s0
  unsigned int v71; // r2
  int v72; // r6
  unsigned int v73; // r6
  char v74; // r5
  unsigned __int64 v75; // r0
  unsigned int v76; // r3
  int v77; // r2
  unsigned int v78; // r3
  bool v79; // cf
  char v80; // r0
  unsigned int v81; // r4
  unsigned int v82; // r0
  unsigned int v83; // r4
  int v84; // r0
  unsigned int v85; // r0
  std::runtime_error *exception; // r4
  unsigned __int64 v87; // [sp+0h] [bp-A8h]
  unsigned __int64 v88; // [sp+0h] [bp-A8h]
  unsigned __int64 v89; // [sp+0h] [bp-A8h]
  unsigned __int64 v90; // [sp+8h] [bp-A0h]
  unsigned int v91; // [sp+1Ch] [bp-8Ch]
  int v92; // [sp+20h] [bp-88h]
  int v93; // [sp+24h] [bp-84h]
  unsigned int v94; // [sp+28h] [bp-80h]
  int v95; // [sp+2Ch] [bp-7Ch]
  int v96; // [sp+30h] [bp-78h]
  unsigned __int64 v97; // [sp+3Ch] [bp-6Ch]
  __int64 v98; // [sp+44h] [bp-64h]
  char v99; // [sp+48h] [bp-60h]
  unsigned __int64 v100; // [sp+50h] [bp-58h] BYREF
  signed int v101; // [sp+58h] [bp-50h]
  int v102; // [sp+5Ch] [bp-4Ch]
  bool v103; // [sp+60h] [bp-48h]
  int v104; // [sp+64h] [bp-44h] BYREF
  unsigned __int64 v105; // [sp+68h] [bp-40h] BYREF
  int v106; // [sp+70h] [bp-38h]

  v5 = LODWORD(a1);
  if ( a1 <= 0.0 )
  {
    if ( n >= 1 && (unsigned __int8)a4 == 2 )
    {
      v63 = *(_DWORD *)(HIDWORD(a4) + 12);
      if ( v63 < n )
      {
        (**(void (__fastcall ***)(_DWORD, signed int))HIDWORD(a4))(HIDWORD(a4), n);
        v63 = *(_DWORD *)(HIDWORD(a4) + 12);
      }
      v64 = *(_DWORD *)(HIDWORD(a4) + 4);
      if ( v63 >= n )
        v63 = n;
      *(_DWORD *)(HIDWORD(a4) + 8) = v63;
      sub_22177C(v64, n, 48);
      return -n;
    }
    else
    {
      v66 = *(_DWORD *)(HIDWORD(a4) + 8);
      v67 = v66 + 1;
      if ( *(_DWORD *)(HIDWORD(a4) + 12) < (unsigned int)(v66 + 1) )
      {
        (**(void (__fastcall ***)(_DWORD))HIDWORD(a4))(HIDWORD(a4));
        v66 = *(_DWORD *)(HIDWORD(a4) + 8);
        v67 = v66 + 1;
      }
      v68 = *(_DWORD *)(HIDWORD(a4) + 4);
      *(_DWORD *)(HIDWORD(a4) + 8) = v67;
      *(_BYTE *)(v68 + v66) = 48;
      return 0;
    }
  }
  if ( n <= -1 )
  {
    if ( (a4 & 0x40000) != 0 )
    {
      v69 = a1;
      fmt::v8::detail::dragonbox::to_decimal<float>(&v100, LODWORD(v69));
      sub_DCF8C(SHIDWORD(a4), v100);
      return HIDWORD(v100);
    }
    else
    {
      fmt::v8::detail::dragonbox::to_decimal<double>(&v100, HIDWORD(a1), LODWORD(a1), HIDWORD(a1));
      sub_DD160(SHIDWORD(a4), v100);
      return v101;
    }
  }
  v7 = (HIDWORD(a1) >> 20) & 0x7FF;
  v8 = HIDWORD(a1) & 0xFFFFF;
  v9 = v7 - 1075;
  if ( !v7 )
    v9 = -1074;
  v94 = v9;
  v91 = v7;
  v10 = v7 == 0;
  v11 = v8;
  v93 = v8;
  if ( !v10 )
    v11 = v8 + 0x100000;
  v96 = v5;
  v92 = v11;
  fmt::v8::detail::normalize<0,unsigned long long>(&v105);
  v12 = (int)((unsigned __int64)(1292913986LL * (-61 - v106) + 0x15BFFFFFFFFLL) >> 32) / 8 + 1;
  v13 = v106 + fmt::v8::detail::basic_impl_data<void>::pow10_exponents[v12];
  v106 = v13 + 64;
  HIDWORD(v100) = 0;
  v101 = n;
  v103 = (unsigned __int8)a4 == 2;
  v14 = fmt::v8::detail::basic_impl_data<void>::pow10_significands[2 * v12];
  v15 = fmt::v8::detail::basic_impl_data<void>::pow10_significands[2 * v12 + 1];
  v16 = HIDWORD(v105) * (unsigned __int64)v14;
  v17 = SHIDWORD(v105) * (__int64)(int)v15 + SHIDWORD(v16) + (int)(((unsigned int)v105 * (unsigned __int64)v15) >> 32);
  v18 = __PAIR64__(((unsigned int)v16 + (((unsigned int)v105 * (unsigned __int64)v14) >> 32)) >> 32, (v105 * v14) >> 32)
      + (unsigned int)v105 * v15;
  v19 = -64 - v13;
  v20 = HIDWORD(v18) + __CFADD__((_DWORD)v18, 0x80000000) + (_DWORD)v17;
  v21 = (__CFADD__(__CFADD__((_DWORD)v18, 0x80000000), (_DWORD)v17) | __CFADD__(
                                                                        HIDWORD(v18),
                                                                        __CFADD__((_DWORD)v18, 0x80000000) + (_DWORD)v17))
      + HIDWORD(v17);
  v22 = v13 + 96;
  v105 = __PAIR64__(v21, v20);
  v23 = (v20 >> (-64 - v13)) | (v21 << (v13 + 96));
  v24 = -96 - v13;
  if ( v24 >= 0 )
    v23 = v21 >> v24;
  v25 = __clz(v23 | 1);
  v26 = __CFADD__(dword_91AF8[2 * (v25 ^ 0x1F)], v23) + dword_91AF8[2 * (v25 ^ 0x1F) + 1];
  v27 = 1u >> v22;
  v28 = 1 << v19;
  if ( v24 >= 0 )
  {
    v27 = 1 << v24;
    v28 = 0;
  }
  v29 = 348 - 8 * v12;
  v95 = v12;
  v97 = __PAIR64__(v27, v28);
  v31 = *(char **)(HIDWORD(a4) + 4);
  v30 = __PAIR64__(v27, v28) - 1;
  v102 = v29;
  LODWORD(v100) = v31;
  v104 = v26;
  if ( (unsigned __int8)a4 != 2 )
    goto LABEL_15;
  v32 = v29 + v26;
  if ( v32 >= 1 && 0x7FFFFFFF - v32 < (unsigned int)n )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    sub_EE924(exception, "number is too big");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'fmt::v8::format_error,
      (void (*)(void *))fmt::v8::format_error::~format_error);
  }
  v101 = v32 + n;
  if ( v32 + n > 0 )
  {
LABEL_15:
    LODWORD(v98) = HIDWORD(v17) & v20;
    HIDWORD(v98) = HIDWORD(v30) & v21;
    v33 = (__int64 *)&fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 2];
    while ( 1 )
    {
      --v26;
      v34 = 0;
      LOBYTE(v35) = v23;
      switch ( v26 )
      {
        case 0:
          break;
        case 1:
          v35 = v23 / 0xA;
          v34 = v23 % 0xA;
          break;
        case 2:
          v35 = v23 / 0x64;
          v36 = 100;
          goto LABEL_27;
        case 3:
          v35 = v23 / 0x3E8;
          v36 = 1000;
          goto LABEL_27;
        case 4:
          v35 = v23 / 0x2710;
          v36 = 10000;
          goto LABEL_27;
        case 5:
          v35 = v23 / 0x186A0;
          v34 = v23 % 0x186A0;
          break;
        case 6:
          v35 = v23 / 0xF4240;
          v34 = v23 % 0xF4240;
          break;
        case 7:
          v35 = v23 / 0x989680;
          v36 = 10000000;
          goto LABEL_27;
        case 8:
          v35 = v23 / 0x5F5E100;
          v36 = 100000000;
          goto LABEL_27;
        case 9:
          v35 = (unsigned int)(((v23 >> 9) * (unsigned __int64)((unsigned int)&stru_44B7C.r_info + 3)) >> 32) >> 7;
          v36 = 1000000000;
LABEL_27:
          v34 = v23 - v35 * v36;
          break;
        default:
          LOBYTE(v35) = 0;
          v34 = v23;
          break;
      }
      v37 = v34 >> v22;
      LODWORD(v38) = v34 << v19;
      v39 = *v33;
      v40 = v19 - 32;
      if ( v19 - 32 >= 0 )
      {
        v37 = v34 << v40;
        LODWORD(v38) = 0;
      }
      HIDWORD(v38) = HIDWORD(v98);
      v87 = v38 + __PAIR64__(v37, v98);
      HIDWORD(v41) = ((unsigned int)v39 >> v22) | (HIDWORD(v39) << v19);
      LODWORD(v41) = (_DWORD)v39 << v19;
      if ( v40 >= 0 )
        HIDWORD(v41) = (_DWORD)v39 << v40;
      v42 = v22;
      if ( v40 >= 0 )
        LODWORD(v41) = 0;
      v43 = fmt::v8::detail::gen_digits_handler::on_digit(
              (fmt::v8::detail::gen_digits_handler *)&v100,
              v35 + 48,
              v41,
              v87,
              1uLL,
              1);
      if ( v43 )
        break;
      --v33;
      v23 = v34;
      v22 = v42;
      if ( v26 + 1 <= 1 )
      {
        v47 = 10 * v98;
        v44 = v19;
        v45 = (10 * v98) & HIDWORD(v17);
        v46 = ((unsigned __int64)(10 * v98) >> 32) & HIDWORD(v30);
        LODWORD(v47) = ((unsigned int)v47 >> v44) | (HIDWORD(v47) << v42);
        HIDWORD(v88) = v46;
        if ( v40 >= 0 )
          LODWORD(v47) = HIDWORD(v47) >> v40;
        v99 = v42;
        LODWORD(v88) = (10 * v98) & HIDWORD(v17);
        v43 = fmt::v8::detail::gen_digits_handler::on_digit(
                (fmt::v8::detail::gen_digits_handler *)&v100,
                v47 + 48,
                v97,
                v88,
                0xAuLL,
                0);
        --v26;
        if ( !v43 )
        {
          v48 = 10;
          v49 = 0;
          do
          {
            v50 = v48;
            v48 *= 10;
            v51 = v45;
            LODWORD(v90) = v48;
            v49 = (10 * __PAIR64__(v49, v50)) >> 32;
            HIDWORD(v90) = v49;
            v45 = (10 * v45) & HIDWORD(v17);
            LODWORD(v89) = v45;
            v52 = (10 * __PAIR64__(v46, v51)) >> 32;
            v46 = v52 & HIDWORD(v30);
            v53 = ((unsigned int)(10 * v51) >> v44) | (v52 << v99);
            if ( v40 >= 0 )
              v53 = v52 >> v40;
            HIDWORD(v89) = v52 & HIDWORD(v30);
            v43 = fmt::v8::detail::gen_digits_handler::on_digit(
                    (fmt::v8::detail::gen_digits_handler *)&v100,
                    v53 + 48,
                    v97,
                    v89,
                    v90,
                    0);
            --v26;
          }
          while ( !v43 );
        }
        break;
      }
    }
    v10 = v43 == 2;
    v54 = HIDWORD(a4);
    v55 = a4;
    v56 = v96;
    if ( !v10 )
      goto LABEL_85;
    v57 = HIDWORD(v100);
    v58 = v101;
LABEL_46:
    v104 = v57 - 8 * v95 + v26 + 347;
    if ( (v55 & 0x40000) != 0 )
    {
      v70 = a1;
      v56 = LODWORD(v70) & 0x7FFFFF;
      v71 = __clz(LODWORD(v70) & 0x7FFFFF);
      v62 = ((LODWORD(v70) & 0x7F800000u) >> 23) - 150;
      if ( (LODWORD(v70) & 0x7F800000) != 0 )
        v56 += 0x800000;
      else
        v62 = -149;
      v61 = (v71 >> 5) & ((LODWORD(v70) & 0x7F800000u) >> 24 != 0);
      v60 = 0;
      v59 = (unsigned __int8)a4;
    }
    else
    {
      v59 = (unsigned __int8)a4;
      v60 = v92;
      v61 = v91 > 1 && (v93 | v56) == 0;
      v62 = v94;
    }
    v72 = 767;
    if ( v58 < 767 )
      v72 = v58;
    if ( v59 == 2 )
      v61 += 4;
    fmt::v8::detail::format_dragon(v56, v60, 0, 0, v62, 0, v61, v72, v54, &v104);
    goto LABEL_90;
  }
  if ( v32 + n < 0 )
  {
    v54 = HIDWORD(a4);
    v55 = a4;
  }
  else
  {
    v73 = v20;
    v74 = v22;
    v75 = sub_2217B4(v20, v21, 10, 0);
    v76 = fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 2];
    v77 = (fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 1] << v19) | (v76 >> v74);
    if ( v19 - 32 >= 0 )
      v77 = v76 << (v19 - 32);
    v78 = v76 << v19;
    if ( v19 - 32 >= 0 )
      v78 = 0;
    if ( __PAIR64__(v77, v78) - v75 >= v75 && __PAIR64__(v77, v78) - 2 * v75 > 0x13 )
    {
      v80 = 48;
      v54 = HIDWORD(a4);
      v55 = a4;
    }
    else
    {
      if ( __PAIR64__(v21, v73) < 0x64 )
      {
        v58 = 0;
        v57 = 0;
        v54 = HIDWORD(a4);
        v55 = a4;
        v56 = v96;
        goto LABEL_46;
      }
      v54 = HIDWORD(a4);
      v55 = a4;
      v79 = v75 - 10 >= __PAIR64__(v77, v78) - (v75 - 10);
      v56 = v96;
      if ( !v79 )
      {
        v58 = 0;
        v57 = 0;
        goto LABEL_46;
      }
      v80 = 49;
    }
    HIDWORD(v100) = 1;
    *v31 = v80;
    v26 = v104;
  }
LABEL_85:
  v81 = HIDWORD(v100);
  v82 = *(_DWORD *)(v54 + 12);
  v104 = v102 + v26;
  if ( v82 < HIDWORD(v100) )
  {
    (**(void (__fastcall ***)(int, _DWORD))v54)(v54, HIDWORD(v100));
    v82 = *(_DWORD *)(v54 + 12);
  }
  if ( v82 < v81 )
    v81 = v82;
  *(_DWORD *)(v54 + 8) = v81;
  v59 = (unsigned __int8)a4;
LABEL_90:
  if ( v59 != 2 && (v55 & 0x80000) == 0 )
  {
    v83 = *(_DWORD *)(v54 + 8);
    if ( v83 )
    {
      v84 = *(_DWORD *)(v54 + 4) - 1;
      while ( *(_BYTE *)(v84 + v83) == 48 )
      {
        --v83;
        ++v104;
        if ( !v83 )
          goto LABEL_96;
      }
      v85 = *(_DWORD *)(v54 + 12);
      if ( v85 < v83 )
      {
        (**(void (__fastcall ***)(int, unsigned int))v54)(v54, v83);
        v85 = *(_DWORD *)(v54 + 12);
      }
    }
    else
    {
LABEL_96:
      v85 = *(_DWORD *)(v54 + 12);
      v83 = 0;
    }
    if ( v85 < v83 )
      v83 = v85;
    *(_DWORD *)(v54 + 8) = v83;
  }
  return v104;
}


// ======================================================================
// ADDR: 0x1e5c84
// SYMBOL: fmt::v8::detail::normalize<0,ulong long>(fmt::v8::detail::basic_fp<ulong long>)
int __fastcall fmt::v8::detail::normalize<0,unsigned long long>(int result, __int64 a2, int a3, int a4)
{
  unsigned int v6; // r6
  __int64 v7; // kr00_8
  unsigned int v8; // r4
  bool v9; // nf
  int v10; // r6
  unsigned int v11; // r6

  if ( (a2 & 0x10000000000000LL) == 0 )
  {
    v6 = __clz(a2) + 32;
    if ( (a2 & 0xFFFFF00000000LL) != 0 )
      v6 = __clz(HIDWORD(a2) & 0xFFFFF);
    HIDWORD(a2) = (HIDWORD(a2) << (v6 - 11)) | ((unsigned int)a2 >> (43 - v6));
    v8 = 0;
    v7 = v6 - 11LL;
    v10 = v6 - 43;
    v9 = v10 < 0;
    if ( v10 >= 0 )
      HIDWORD(a2) = (_DWORD)a2 << v10;
    LODWORD(a2) = (_DWORD)a2 << v7;
    v11 = 0;
    if ( !v9 )
      LODWORD(a2) = 0;
    do
    {
      v11 = (__PAIR64__(v11, v8++) + 1) >> 32;
      --a3;
    }
    while ( __PAIR64__(v11, v8) != v7 );
  }
  *(_DWORD *)(result + 8) = a3 - 11;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)result = a2 << 11;
  return result;
}


// ======================================================================
// ADDR: 0x1e5d0c
// SYMBOL: fmt::v8::detail::format_dragon(fmt::v8::detail::basic_fp<fmt::v8::detail::uint128_fallback>,uint,int,fmt::v8::detail::buffer<char> &,int &)
int __fastcall fmt::v8::detail::format_dragon(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int *a10)
{
  int v14; // r5
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  const fmt::v8::detail::bigint *v19; // r3
  const fmt::v8::detail::bigint *v20; // r1
  unsigned int v21; // r8
  int v22; // r4
  int *v23; // r2
  int v24; // r0
  unsigned int v25; // r9
  int v26; // r0
  unsigned int v27; // r1
  int v28; // r5
  int v29; // r4
  const fmt::v8::detail::bigint *v30; // r3
  int v31; // r0
  unsigned int v32; // r1
  unsigned int v33; // r2
  bool v34; // cc
  _BYTE *v35; // r0
  int v36; // r10
  unsigned int v37; // r9
  int v38; // r6
  const fmt::v8::detail::bigint *v39; // r2
  int v40; // r8
  const fmt::v8::detail::bigint *v41; // r3
  int v42; // r0
  const fmt::v8::detail::bigint *v43; // r3
  int v44; // r5
  int v45; // r0
  char v46; // r0
  const fmt::v8::detail::bigint *v47; // r3
  int v48; // r0
  __int64 v49; // r2
  char v50; // r4
  int v51; // r1
  int v52; // r0
  unsigned int v53; // r4
  unsigned int v54; // r0
  int v56; // r1
  int v57; // r1
  std::runtime_error *exception; // r4
  int v59; // [sp+1Ch] [bp-28Ch]
  fmt::v8::detail::bigint *v60; // [sp+20h] [bp-288h]
  fmt::v8::detail::bigint *v61; // [sp+24h] [bp-284h]
  _UNKNOWN **v62; // [sp+28h] [bp-280h] BYREF
  void *v63; // [sp+2Ch] [bp-27Ch]
  int v64; // [sp+30h] [bp-278h]
  int v65; // [sp+34h] [bp-274h]
  _DWORD v66[34]; // [sp+38h] [bp-270h] BYREF
  _UNKNOWN **v67; // [sp+C0h] [bp-1E8h] BYREF
  void *v68; // [sp+C4h] [bp-1E4h]
  int v69; // [sp+C8h] [bp-1E0h]
  int v70; // [sp+CCh] [bp-1DCh]
  _DWORD v71[34]; // [sp+D0h] [bp-1D8h] BYREF
  _UNKNOWN **v72; // [sp+158h] [bp-150h] BYREF
  void *v73; // [sp+15Ch] [bp-14Ch]
  int v74; // [sp+160h] [bp-148h]
  int v75; // [sp+164h] [bp-144h]
  _DWORD v76[34]; // [sp+168h] [bp-140h] BYREF
  _UNKNOWN **v77; // [sp+1F0h] [bp-B8h] BYREF
  void *v78; // [sp+1F4h] [bp-B4h]
  int v79; // [sp+1F8h] [bp-B0h]
  int v80; // [sp+1FCh] [bp-ACh]
  _DWORD v81[42]; // [sp+200h] [bp-A8h] BYREF

  v78 = v81;
  v79 = 0;
  v71[33] = 0;
  v72 = &off_231150;
  v73 = v76;
  v76[33] = 0;
  v77 = &off_231150;
  v66[33] = 0;
  v67 = &off_231150;
  v68 = v71;
  v14 = 2;
  v62 = &off_231150;
  v81[33] = 0;
  v80 = 32;
  v75 = 32;
  v74 = 0;
  v70 = 32;
  v69 = 0;
  v64 = 0;
  v65 = 32;
  if ( (a7 & 1) == 0 )
    v14 = 1;
  v63 = v66;
  if ( a5 < 0 )
  {
    if ( *a10 <= -1 )
    {
      fmt::v8::detail::bigint::assign_pow10((fmt::v8::detail::bigint *)&v77, -*a10);
      fmt::v8::detail::bigint::assign((fmt::v8::detail::bigint *)&v67, (const fmt::v8::detail::bigint *)&v77);
      if ( (a7 & 1) != 0 )
      {
        fmt::v8::detail::bigint::assign((fmt::v8::detail::bigint *)&v62, (const fmt::v8::detail::bigint *)&v77);
        v60 = (fmt::v8::detail::bigint *)&v62;
        ((void (*)(void))fmt::v8::detail::bigint::operator<<=)();
      }
      else
      {
        v60 = 0;
      }
      fmt::v8::detail::bigint::multiply<fmt::v8::detail::uint128_fallback,0>(&v77, v56, a1, a2, a3, a4);
      fmt::v8::detail::bigint::operator<<=(&v77, v14);
      fmt::v8::detail::bigint::assign<unsigned long long,0>(&v72, v57, 1, 0);
      fmt::v8::detail::bigint::operator<<=(&v72, v14 - a5);
    }
    else
    {
      fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(&v77, a10, a1, a2, a3, a4);
      fmt::v8::detail::bigint::operator<<=(&v77, v14);
      fmt::v8::detail::bigint::assign_pow10((fmt::v8::detail::bigint *)&v72, *a10);
      fmt::v8::detail::bigint::operator<<=(&v72, v14 - a5);
      fmt::v8::detail::bigint::assign<unsigned long long,0>(&v67, v17, 1, 0);
      if ( (a7 & 1) != 0 )
      {
        v60 = (fmt::v8::detail::bigint *)&v62;
        fmt::v8::detail::bigint::assign<unsigned long long,0>(&v62, v18, 2, 0);
      }
      else
      {
        v60 = 0;
      }
    }
  }
  else
  {
    fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(&v77, a10, a1, a2, a3, a4);
    fmt::v8::detail::bigint::operator<<=(&v77, v14 + a5);
    fmt::v8::detail::bigint::assign<unsigned long long,0>(&v67, v15, 1, 0);
    fmt::v8::detail::bigint::operator<<=(&v67, a5);
    if ( (a7 & 1) != 0 )
    {
      fmt::v8::detail::bigint::assign<unsigned long long,0>(&v62, v16, 1, 0);
      v60 = (fmt::v8::detail::bigint *)&v62;
      fmt::v8::detail::bigint::operator<<=(&v62, a5 + 1);
    }
    else
    {
      v60 = 0;
    }
    fmt::v8::detail::bigint::assign_pow10((fmt::v8::detail::bigint *)&v72, *a10);
    fmt::v8::detail::bigint::operator<<=(&v72, v14);
  }
  v20 = (const fmt::v8::detail::bigint *)&v67;
  v21 = a8;
  if ( v60 )
    v20 = v60;
  v61 = v20;
  v22 = a1 & 1;
  if ( (a7 & 2) == 0 )
    goto LABEL_19;
  if ( fmt::v8::detail::add_compare((fmt::v8::detail *)&v77, v20, (const fmt::v8::detail::bigint *)&v72, v19)
     + (v22 ^ 1) <= 0 )
  {
    --*a10;
    fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v77, 0xAu);
    if ( a8 <= -1 )
    {
      fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v67, 0xAu);
      if ( v60 )
        fmt::v8::detail::bigint::multiply(v61, 0xAu);
    }
  }
  if ( (a7 & 4) != 0 )
  {
    v23 = a10;
    v24 = *a10;
    if ( *a10 >= 0 && 2147483646 - v24 < a8 )
    {
      exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "number is too big");
      *(_DWORD *)exception = &off_23113C;
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'fmt::v8::format_error,
        (void (*)(void *))fmt::v8::format_error::~format_error);
    }
    v21 = v24 + a8 + 1;
  }
  else
  {
LABEL_19:
    v23 = a10;
  }
  if ( (int)v21 <= -1 )
  {
    v36 = v22 ^ 1;
    v37 = 0;
    v59 = *(_DWORD *)(a9 + 4);
    while ( 1 )
    {
      v38 = fmt::v8::detail::bigint::divmod_assign(
              (fmt::v8::detail::bigint *)&v77,
              (const fmt::v8::detail::bigint *)&v72);
      v40 = fmt::v8::detail::compare((fmt::v8::detail *)&v77, (const fmt::v8::detail::bigint *)&v67, v39);
      v42 = fmt::v8::detail::add_compare((fmt::v8::detail *)&v77, v61, (const fmt::v8::detail::bigint *)&v72, v41) + v36;
      *(_BYTE *)(v59 + v37) = v38 + 48;
      if ( v40 < v36 || v42 >= 1 )
        break;
      fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v77, 0xAu);
      fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v67, 0xAu);
      if ( v60 )
        fmt::v8::detail::bigint::multiply(v61, 0xAu);
      ++v37;
    }
    if ( v40 >= v36 )
    {
      v46 = v38 + 49;
      v44 = v59;
    }
    else
    {
      v44 = v59;
      if ( v42 < 1 )
        goto LABEL_61;
      v45 = fmt::v8::detail::add_compare(
              (fmt::v8::detail *)&v77,
              (const fmt::v8::detail::bigint *)&v77,
              (const fmt::v8::detail::bigint *)&v72,
              v43);
      if ( v45 <= 0 && (!(v38 << 31) || v45) )
        goto LABEL_61;
      v46 = *(_BYTE *)(v59 + v37) + 1;
    }
    *(_BYTE *)(v44 + v37) = v46;
LABEL_61:
    v53 = v37 + 1;
    v54 = *(_DWORD *)(a9 + 12);
    if ( v54 <= v37 )
    {
      (**(void (__fastcall ***)(int, int))a9)(a9, v37 + 1);
      v54 = *(_DWORD *)(a9 + 12);
    }
    if ( v54 < v53 )
      v53 = v54;
    *(_DWORD *)(a9 + 8) = v53;
    *a10 -= v37;
    goto LABEL_68;
  }
  v25 = v21 - 1;
  *v23 -= v21 - 1;
  if ( v21 )
  {
    v26 = a9;
    v27 = *(_DWORD *)(a9 + 12);
    if ( v27 < v21 )
    {
      (**(void (__fastcall ***)(int, unsigned int))a9)(a9, v21);
      v26 = a9;
      v27 = *(_DWORD *)(a9 + 12);
    }
    if ( v27 >= v21 )
      v27 = v21;
    *(_DWORD *)(v26 + 8) = v27;
    if ( v21 >= 2 )
    {
      v28 = 0;
      do
      {
        *(_BYTE *)(*(_DWORD *)(a9 + 4) + v28) = fmt::v8::detail::bigint::divmod_assign(
                                                  (fmt::v8::detail::bigint *)&v77,
                                                  (const fmt::v8::detail::bigint *)&v72)
                                              + 48;
        fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v77, 0xAu);
        ++v28;
      }
      while ( v25 != v28 );
    }
    v29 = fmt::v8::detail::bigint::divmod_assign((fmt::v8::detail::bigint *)&v77, (const fmt::v8::detail::bigint *)&v72);
    v31 = fmt::v8::detail::add_compare(
            (fmt::v8::detail *)&v77,
            (const fmt::v8::detail::bigint *)&v77,
            (const fmt::v8::detail::bigint *)&v72,
            v30);
    if ( v31 > 0 || v29 << 31 && !v31 )
    {
      if ( v29 == 9 )
      {
        *(_BYTE *)(*(_DWORD *)(a9 + 4) + v25) = 58;
        if ( v21 >= 2 )
        {
          v32 = v21 - 2;
          do
          {
            v33 = *(_DWORD *)(a9 + 4) + v32;
            if ( *(_BYTE *)(v33 + 1) != 58 )
              break;
            *(_BYTE *)(v33 + 1) = 48;
            ++*(_BYTE *)(*(_DWORD *)(a9 + 4) + v32);
            v34 = v32 + 2 > 2;
            --v32;
          }
          while ( v34 );
        }
        v35 = *(_BYTE **)(a9 + 4);
        if ( *v35 == 58 )
        {
          *v35 = 49;
          ++*a10;
        }
        goto LABEL_68;
      }
      LOBYTE(v29) = v29 + 1;
    }
    *(_BYTE *)(*(_DWORD *)(a9 + 4) + v25) = v29 + 48;
    goto LABEL_68;
  }
  fmt::v8::detail::bigint::multiply((fmt::v8::detail::bigint *)&v72, 0xAu);
  v48 = fmt::v8::detail::add_compare(
          (fmt::v8::detail *)&v77,
          (const fmt::v8::detail::bigint *)&v77,
          (const fmt::v8::detail::bigint *)&v72,
          v47);
  v49 = *(_QWORD *)(a9 + 8);
  v50 = 48;
  if ( v48 > 0 )
    v50 = 49;
  v51 = v49 + 1;
  if ( HIDWORD(v49) < (unsigned int)(v49 + 1) )
  {
    (**(void (__fastcall ***)(int))a9)(a9);
    LODWORD(v49) = *(_DWORD *)(a9 + 8);
    v51 = v49 + 1;
  }
  v52 = *(_DWORD *)(a9 + 4);
  *(_DWORD *)(a9 + 8) = v51;
  *(_BYTE *)(v52 + v49) = v50;
LABEL_68:
  if ( v63 != v66 )
    operator delete(v63);
  if ( v68 != v71 )
    operator delete(v68);
  if ( v73 != v76 )
    operator delete(v73);
  if ( v78 != v81 )
    operator delete(v78);
  return v81[34];
}


// ======================================================================
// ADDR: 0x1e6204
// SYMBOL: fmt::v8::detail::format_float<long double>(long double,int,fmt::v8::detail::float_specs,fmt::v8::detail::buffer<char> &)
size_t __fastcall fmt::v8::detail::format_float<long double>(double a1, signed int n, int a3, __int64 a4)
{
  int v5; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  bool v10; // zf
  int v11; // r3
  int v12; // r4
  int v13; // r1
  unsigned int v14; // r3
  unsigned int v15; // r5
  unsigned __int64 v16; // kr10_8
  __int64 v17; // kr20_8
  unsigned __int64 v18; // r2
  int v19; // r11
  unsigned int v20; // r0
  unsigned int v21; // r8
  int v22; // r12
  unsigned int v23; // r5
  int v24; // r1
  unsigned int v25; // r2
  int v26; // r10
  unsigned int v27; // r3
  int v28; // r6
  int v29; // r1
  unsigned __int64 v30; // kr30_8
  char *v31; // r4
  int v32; // r1
  __int64 *v33; // r8
  unsigned int v34; // r6
  unsigned int v35; // r1
  int v36; // r2
  unsigned int v37; // r3
  __int64 v38; // r4
  __int64 v39; // kr38_8
  int v40; // r9
  unsigned __int64 v41; // r2
  int v42; // r4
  int v43; // r0
  char v44; // r5
  int v45; // r11
  unsigned int v46; // r8
  __int64 v47; // r0
  int v48; // r6
  unsigned int v49; // r4
  int v50; // kr00_4
  int v51; // kr08_4
  unsigned int v52; // r0
  unsigned int v53; // r1
  int v54; // r5
  int v55; // r8
  int v56; // r0
  int v57; // r1
  int v58; // lr
  int v59; // r4
  int v60; // r1
  int v61; // r2
  unsigned int v62; // r3
  unsigned int v63; // r1
  int v64; // r0
  int v66; // r0
  int v67; // r1
  int v68; // r2
  float v69; // s0
  float v70; // s0
  unsigned int v71; // r2
  int v72; // r6
  unsigned int v73; // r6
  char v74; // r5
  unsigned __int64 v75; // r0
  unsigned int v76; // r3
  int v77; // r2
  unsigned int v78; // r3
  bool v79; // cf
  char v80; // r0
  unsigned int v81; // r4
  unsigned int v82; // r0
  unsigned int v83; // r4
  int v84; // r0
  unsigned int v85; // r0
  std::runtime_error *exception; // r4
  unsigned __int64 v87; // [sp+0h] [bp-A8h]
  unsigned __int64 v88; // [sp+0h] [bp-A8h]
  unsigned __int64 v89; // [sp+0h] [bp-A8h]
  unsigned __int64 v90; // [sp+8h] [bp-A0h]
  unsigned int v91; // [sp+1Ch] [bp-8Ch]
  int v92; // [sp+20h] [bp-88h]
  int v93; // [sp+24h] [bp-84h]
  unsigned int v94; // [sp+28h] [bp-80h]
  int v95; // [sp+2Ch] [bp-7Ch]
  int v96; // [sp+30h] [bp-78h]
  unsigned __int64 v97; // [sp+3Ch] [bp-6Ch]
  __int64 v98; // [sp+44h] [bp-64h]
  char v99; // [sp+48h] [bp-60h]
  unsigned __int64 v100; // [sp+50h] [bp-58h] BYREF
  signed int v101; // [sp+58h] [bp-50h]
  int v102; // [sp+5Ch] [bp-4Ch]
  bool v103; // [sp+60h] [bp-48h]
  int v104; // [sp+64h] [bp-44h] BYREF
  unsigned __int64 v105; // [sp+68h] [bp-40h] BYREF
  int v106; // [sp+70h] [bp-38h]

  v5 = LODWORD(a1);
  if ( a1 <= 0.0 )
  {
    if ( n >= 1 && (unsigned __int8)a4 == 2 )
    {
      v63 = *(_DWORD *)(HIDWORD(a4) + 12);
      if ( v63 < n )
      {
        (**(void (__fastcall ***)(_DWORD, signed int))HIDWORD(a4))(HIDWORD(a4), n);
        v63 = *(_DWORD *)(HIDWORD(a4) + 12);
      }
      v64 = *(_DWORD *)(HIDWORD(a4) + 4);
      if ( v63 >= n )
        v63 = n;
      *(_DWORD *)(HIDWORD(a4) + 8) = v63;
      sub_22177C(v64, n, 48);
      return -n;
    }
    else
    {
      v66 = *(_DWORD *)(HIDWORD(a4) + 8);
      v67 = v66 + 1;
      if ( *(_DWORD *)(HIDWORD(a4) + 12) < (unsigned int)(v66 + 1) )
      {
        (**(void (__fastcall ***)(_DWORD))HIDWORD(a4))(HIDWORD(a4));
        v66 = *(_DWORD *)(HIDWORD(a4) + 8);
        v67 = v66 + 1;
      }
      v68 = *(_DWORD *)(HIDWORD(a4) + 4);
      *(_DWORD *)(HIDWORD(a4) + 8) = v67;
      *(_BYTE *)(v68 + v66) = 48;
      return 0;
    }
  }
  if ( n <= -1 )
  {
    if ( (a4 & 0x40000) != 0 )
    {
      v69 = a1;
      fmt::v8::detail::dragonbox::to_decimal<float>(&v100, LODWORD(v69));
      sub_DCF8C(SHIDWORD(a4), v100);
      return HIDWORD(v100);
    }
    else
    {
      fmt::v8::detail::dragonbox::to_decimal<double>(&v100, HIDWORD(a1), LODWORD(a1), HIDWORD(a1));
      sub_DD160(SHIDWORD(a4), v100);
      return v101;
    }
  }
  v7 = (HIDWORD(a1) >> 20) & 0x7FF;
  v8 = HIDWORD(a1) & 0xFFFFF;
  v9 = v7 - 1075;
  if ( !v7 )
    v9 = -1074;
  v94 = v9;
  v91 = v7;
  v10 = v7 == 0;
  v11 = v8;
  v93 = v8;
  if ( !v10 )
    v11 = v8 + 0x100000;
  v96 = v5;
  v92 = v11;
  fmt::v8::detail::normalize<0,unsigned long long>(&v105);
  v12 = (int)((unsigned __int64)(1292913986LL * (-61 - v106) + 0x15BFFFFFFFFLL) >> 32) / 8 + 1;
  v13 = v106 + fmt::v8::detail::basic_impl_data<void>::pow10_exponents[v12];
  v106 = v13 + 64;
  HIDWORD(v100) = 0;
  v101 = n;
  v103 = (unsigned __int8)a4 == 2;
  v14 = fmt::v8::detail::basic_impl_data<void>::pow10_significands[2 * v12];
  v15 = fmt::v8::detail::basic_impl_data<void>::pow10_significands[2 * v12 + 1];
  v16 = HIDWORD(v105) * (unsigned __int64)v14;
  v17 = SHIDWORD(v105) * (__int64)(int)v15 + SHIDWORD(v16) + (int)(((unsigned int)v105 * (unsigned __int64)v15) >> 32);
  v18 = __PAIR64__(((unsigned int)v16 + (((unsigned int)v105 * (unsigned __int64)v14) >> 32)) >> 32, (v105 * v14) >> 32)
      + (unsigned int)v105 * v15;
  v19 = -64 - v13;
  v20 = HIDWORD(v18) + __CFADD__((_DWORD)v18, 0x80000000) + (_DWORD)v17;
  v21 = (__CFADD__(__CFADD__((_DWORD)v18, 0x80000000), (_DWORD)v17) | __CFADD__(
                                                                        HIDWORD(v18),
                                                                        __CFADD__((_DWORD)v18, 0x80000000) + (_DWORD)v17))
      + HIDWORD(v17);
  v22 = v13 + 96;
  v105 = __PAIR64__(v21, v20);
  v23 = (v20 >> (-64 - v13)) | (v21 << (v13 + 96));
  v24 = -96 - v13;
  if ( v24 >= 0 )
    v23 = v21 >> v24;
  v25 = __clz(v23 | 1);
  v26 = __CFADD__(dword_91AF8[2 * (v25 ^ 0x1F)], v23) + dword_91AF8[2 * (v25 ^ 0x1F) + 1];
  v27 = 1u >> v22;
  v28 = 1 << v19;
  if ( v24 >= 0 )
  {
    v27 = 1 << v24;
    v28 = 0;
  }
  v29 = 348 - 8 * v12;
  v95 = v12;
  v97 = __PAIR64__(v27, v28);
  v31 = *(char **)(HIDWORD(a4) + 4);
  v30 = __PAIR64__(v27, v28) - 1;
  v102 = v29;
  LODWORD(v100) = v31;
  v104 = v26;
  if ( (unsigned __int8)a4 != 2 )
    goto LABEL_15;
  v32 = v29 + v26;
  if ( v32 >= 1 && 0x7FFFFFFF - v32 < (unsigned int)n )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    sub_EE924(exception, "number is too big");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'fmt::v8::format_error,
      (void (*)(void *))fmt::v8::format_error::~format_error);
  }
  v101 = v32 + n;
  if ( v32 + n > 0 )
  {
LABEL_15:
    LODWORD(v98) = HIDWORD(v17) & v20;
    HIDWORD(v98) = HIDWORD(v30) & v21;
    v33 = (__int64 *)&fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 2];
    while ( 1 )
    {
      --v26;
      v34 = 0;
      LOBYTE(v35) = v23;
      switch ( v26 )
      {
        case 0:
          break;
        case 1:
          v35 = v23 / 0xA;
          v34 = v23 % 0xA;
          break;
        case 2:
          v35 = v23 / 0x64;
          v36 = 100;
          goto LABEL_27;
        case 3:
          v35 = v23 / 0x3E8;
          v36 = 1000;
          goto LABEL_27;
        case 4:
          v35 = v23 / 0x2710;
          v36 = 10000;
          goto LABEL_27;
        case 5:
          v35 = v23 / 0x186A0;
          v34 = v23 % 0x186A0;
          break;
        case 6:
          v35 = v23 / 0xF4240;
          v34 = v23 % 0xF4240;
          break;
        case 7:
          v35 = v23 / 0x989680;
          v36 = 10000000;
          goto LABEL_27;
        case 8:
          v35 = v23 / 0x5F5E100;
          v36 = 100000000;
          goto LABEL_27;
        case 9:
          v35 = (unsigned int)(((v23 >> 9) * (unsigned __int64)((unsigned int)&stru_44B7C.r_info + 3)) >> 32) >> 7;
          v36 = 1000000000;
LABEL_27:
          v34 = v23 - v35 * v36;
          break;
        default:
          LOBYTE(v35) = 0;
          v34 = v23;
          break;
      }
      v37 = v34 >> v22;
      LODWORD(v38) = v34 << v19;
      v39 = *v33;
      v40 = v19 - 32;
      if ( v19 - 32 >= 0 )
      {
        v37 = v34 << v40;
        LODWORD(v38) = 0;
      }
      HIDWORD(v38) = HIDWORD(v98);
      v87 = v38 + __PAIR64__(v37, v98);
      HIDWORD(v41) = ((unsigned int)v39 >> v22) | (HIDWORD(v39) << v19);
      LODWORD(v41) = (_DWORD)v39 << v19;
      if ( v40 >= 0 )
        HIDWORD(v41) = (_DWORD)v39 << v40;
      v42 = v22;
      if ( v40 >= 0 )
        LODWORD(v41) = 0;
      v43 = fmt::v8::detail::gen_digits_handler::on_digit(
              (fmt::v8::detail::gen_digits_handler *)&v100,
              v35 + 48,
              v41,
              v87,
              1uLL,
              1);
      if ( v43 )
        break;
      --v33;
      v23 = v34;
      v22 = v42;
      if ( v26 + 1 <= 1 )
      {
        v47 = 10 * v98;
        v44 = v19;
        v45 = (10 * v98) & HIDWORD(v17);
        v46 = ((unsigned __int64)(10 * v98) >> 32) & HIDWORD(v30);
        LODWORD(v47) = ((unsigned int)v47 >> v44) | (HIDWORD(v47) << v42);
        HIDWORD(v88) = v46;
        if ( v40 >= 0 )
          LODWORD(v47) = HIDWORD(v47) >> v40;
        v99 = v42;
        LODWORD(v88) = (10 * v98) & HIDWORD(v17);
        v43 = fmt::v8::detail::gen_digits_handler::on_digit(
                (fmt::v8::detail::gen_digits_handler *)&v100,
                v47 + 48,
                v97,
                v88,
                0xAuLL,
                0);
        --v26;
        if ( !v43 )
        {
          v48 = 10;
          v49 = 0;
          do
          {
            v50 = v48;
            v48 *= 10;
            v51 = v45;
            LODWORD(v90) = v48;
            v49 = (10 * __PAIR64__(v49, v50)) >> 32;
            HIDWORD(v90) = v49;
            v45 = (10 * v45) & HIDWORD(v17);
            LODWORD(v89) = v45;
            v52 = (10 * __PAIR64__(v46, v51)) >> 32;
            v46 = v52 & HIDWORD(v30);
            v53 = ((unsigned int)(10 * v51) >> v44) | (v52 << v99);
            if ( v40 >= 0 )
              v53 = v52 >> v40;
            HIDWORD(v89) = v52 & HIDWORD(v30);
            v43 = fmt::v8::detail::gen_digits_handler::on_digit(
                    (fmt::v8::detail::gen_digits_handler *)&v100,
                    v53 + 48,
                    v97,
                    v89,
                    v90,
                    0);
            --v26;
          }
          while ( !v43 );
        }
        break;
      }
    }
    v10 = v43 == 2;
    v54 = HIDWORD(a4);
    v55 = a4;
    v56 = v96;
    if ( !v10 )
      goto LABEL_85;
    v57 = HIDWORD(v100);
    v58 = v101;
LABEL_46:
    v104 = v57 - 8 * v95 + v26 + 347;
    if ( (v55 & 0x40000) != 0 )
    {
      v70 = a1;
      v56 = LODWORD(v70) & 0x7FFFFF;
      v71 = __clz(LODWORD(v70) & 0x7FFFFF);
      v62 = ((LODWORD(v70) & 0x7F800000u) >> 23) - 150;
      if ( (LODWORD(v70) & 0x7F800000) != 0 )
        v56 += 0x800000;
      else
        v62 = -149;
      v61 = (v71 >> 5) & ((LODWORD(v70) & 0x7F800000u) >> 24 != 0);
      v60 = 0;
      v59 = (unsigned __int8)a4;
    }
    else
    {
      v59 = (unsigned __int8)a4;
      v60 = v92;
      v61 = v91 > 1 && (v93 | v56) == 0;
      v62 = v94;
    }
    v72 = 767;
    if ( v58 < 767 )
      v72 = v58;
    if ( v59 == 2 )
      v61 += 4;
    fmt::v8::detail::format_dragon(v56, v60, 0, 0, v62, 0, v61, v72, v54, &v104);
    goto LABEL_90;
  }
  if ( v32 + n < 0 )
  {
    v54 = HIDWORD(a4);
    v55 = a4;
  }
  else
  {
    v73 = v20;
    v74 = v22;
    v75 = sub_2217B4(v20, v21, 10, 0);
    v76 = fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 2];
    v77 = (fmt::v8::detail::basic_impl_data<void>::power_of_10_64[2 * v26 - 1] << v19) | (v76 >> v74);
    if ( v19 - 32 >= 0 )
      v77 = v76 << (v19 - 32);
    v78 = v76 << v19;
    if ( v19 - 32 >= 0 )
      v78 = 0;
    if ( __PAIR64__(v77, v78) - v75 >= v75 && __PAIR64__(v77, v78) - 2 * v75 > 0x13 )
    {
      v80 = 48;
      v54 = HIDWORD(a4);
      v55 = a4;
    }
    else
    {
      if ( __PAIR64__(v21, v73) < 0x64 )
      {
        v58 = 0;
        v57 = 0;
        v54 = HIDWORD(a4);
        v55 = a4;
        v56 = v96;
        goto LABEL_46;
      }
      v54 = HIDWORD(a4);
      v55 = a4;
      v79 = v75 - 10 >= __PAIR64__(v77, v78) - (v75 - 10);
      v56 = v96;
      if ( !v79 )
      {
        v58 = 0;
        v57 = 0;
        goto LABEL_46;
      }
      v80 = 49;
    }
    HIDWORD(v100) = 1;
    *v31 = v80;
    v26 = v104;
  }
LABEL_85:
  v81 = HIDWORD(v100);
  v82 = *(_DWORD *)(v54 + 12);
  v104 = v102 + v26;
  if ( v82 < HIDWORD(v100) )
  {
    (**(void (__fastcall ***)(int, _DWORD))v54)(v54, HIDWORD(v100));
    v82 = *(_DWORD *)(v54 + 12);
  }
  if ( v82 < v81 )
    v81 = v82;
  *(_DWORD *)(v54 + 8) = v81;
  v59 = (unsigned __int8)a4;
LABEL_90:
  if ( v59 != 2 && (v55 & 0x80000) == 0 )
  {
    v83 = *(_DWORD *)(v54 + 8);
    if ( v83 )
    {
      v84 = *(_DWORD *)(v54 + 4) - 1;
      while ( *(_BYTE *)(v84 + v83) == 48 )
      {
        --v83;
        ++v104;
        if ( !v83 )
          goto LABEL_96;
      }
      v85 = *(_DWORD *)(v54 + 12);
      if ( v85 < v83 )
      {
        (**(void (__fastcall ***)(int, unsigned int))v54)(v54, v83);
        v85 = *(_DWORD *)(v54 + 12);
      }
    }
    else
    {
LABEL_96:
      v85 = *(_DWORD *)(v54 + 12);
      v83 = 0;
    }
    if ( v85 < v83 )
      v83 = v85;
    *(_DWORD *)(v54 + 8) = v83;
  }
  return v104;
}


// ======================================================================
// ADDR: 0x1e68d0
// SYMBOL: fmt::v8::detail::thousands_sep_impl<wchar_t>(fmt::v8::detail::locale_ref)
int __fastcall fmt::v8::detail::thousands_sep_impl<wchar_t>(int a1, const std::locale *a2)
{
  int v3; // r5
  int v4; // r1
  int v5; // r0
  double v6; // d16
  double v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]

  if ( a2 )
    std::locale::locale((std::locale *)&v8, a2);
  else
    std::locale::locale((std::locale *)&v8);
  v3 = std::locale::use_facet((std::locale *)&v8, (std::locale::id *)&std::numpunct<wchar_t>::id);
  std::locale::~locale((std::locale *)&v8);
  (*(void (__fastcall **)(double *, int))(*(_DWORD *)v3 + 20))(&v8, v3);
  v4 = HIDWORD(v8);
  if ( !(LOBYTE(v8) << 31) )
    v4 = LOBYTE(v8) >> 1;
  if ( v4 )
    v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 16))(v3);
  else
    v5 = 0;
  v6 = v8;
  *(_DWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 12) = v5;
  *(double *)a1 = v6;
  return v10;
}


// ======================================================================
// ADDR: 0x1e6974
// SYMBOL: fmt::v8::detail::decimal_point_impl<wchar_t>(fmt::v8::detail::locale_ref)
int __fastcall fmt::v8::detail::decimal_point_impl<wchar_t>(std::locale *a1)
{
  int v1; // r0
  int v2; // r4
  int v4; // [sp+0h] [bp-10h] BYREF

  if ( a1 )
    std::locale::locale((std::locale *)&v4, a1);
  else
    std::locale::locale((std::locale *)&v4);
  v1 = std::locale::use_facet((std::locale *)&v4, (std::locale::id *)&std::numpunct<wchar_t>::id);
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
  std::locale::~locale((std::locale *)&v4);
  return v2;
}


// ======================================================================
// ADDR: 0x1e69dc
// SYMBOL: fmt::v8::detail::buffer<wchar_t>::append<wchar_t>(wchar_t const*,wchar_t const*)
int __fastcall fmt::v8::detail::buffer<wchar_t>::append<wchar_t>(int result, int *a2, int *a3)
{
  int v3; // r9
  unsigned int v4; // r12
  int *v6; // r6
  unsigned int v7; // r4
  int *v8; // r5
  _DWORD *v9; // r3
  unsigned int v10; // r1
  int v11; // t1

  if ( a2 != a3 )
  {
    v3 = result;
    result = *(_DWORD *)(result + 8);
    v4 = *(_DWORD *)(v3 + 12);
    v6 = a2;
    do
    {
      if ( v4 < result + a3 - v6 )
      {
        (**(void (__fastcall ***)(int))v3)(v3);
        v4 = *(_DWORD *)(v3 + 12);
        result = *(_DWORD *)(v3 + 8);
      }
      v7 = a3 - v6;
      if ( v4 - result < v7 )
        v7 = v4 - result;
      if ( v7 )
      {
        v8 = v6;
        v9 = (_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * result);
        v10 = v7;
        do
        {
          v11 = *v8++;
          --v10;
          *v9++ = v11;
        }
        while ( v10 );
      }
      result += v7;
      v6 += v7;
      *(_DWORD *)(v3 + 8) = result;
    }
    while ( v6 != a3 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e6a94
// SYMBOL: fmt::v8::detail::gen_digits_handler::on_digit(char,ulong long,ulong long,ulong long,bool)
int __fastcall fmt::v8::detail::gen_digits_handler::on_digit(
        fmt::v8::detail::gen_digits_handler *this,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  __int64 v6; // r4
  int v7; // r1
  __int64 v8; // kr00_8
  int v9; // r1
  int v10; // r2
  int v11; // r3
  bool v12; // cc
  __int64 v13; // kr10_8

  v6 = *(_QWORD *)this;
  ++*((_DWORD *)this + 1);
  *(_BYTE *)(v6 + HIDWORD(v6)) = a2;
  if ( a5 >= a4 && !a6 )
    return 2;
  v8 = *(_QWORD *)((char *)this + 4);
  if ( (int)v8 < SHIDWORD(v8) )
    return 0;
  if ( a6 || (v7 = 2, a5 < a3) && a5 < a3 - a5 )
  {
    if ( a3 - a4 < a4 || a3 - 2 * a4 < 2 * a5 )
    {
      if ( a4 < a5 || a4 - a5 < a3 - (a4 - a5) )
        return 2;
      ++*(_BYTE *)(*(_DWORD *)this + v8 - 1);
      v9 = *((_DWORD *)this + 1);
      if ( v9 >= 2 )
      {
        v10 = v9 - 2;
        do
        {
          v11 = *(_DWORD *)this + v10;
          if ( *(unsigned __int8 *)(v11 + 1) <= 0x39u )
            break;
          *(_BYTE *)(v11 + 1) = 48;
          ++*(_BYTE *)(*(_DWORD *)this + v10);
          v12 = (unsigned int)(v10 + 2) > 2;
          --v10;
        }
        while ( v12 );
      }
      if ( **(unsigned __int8 **)this > 0x39u )
      {
        **(_BYTE **)this = 49;
        if ( *((_BYTE *)this + 16) )
        {
          v13 = *(_QWORD *)this;
          ++*((_DWORD *)this + 1);
          *(_BYTE *)(v13 + HIDWORD(v13)) = 48;
        }
        else
        {
          ++*((_DWORD *)this + 3);
        }
      }
    }
    return 1;
  }
  return v7;
}


// ======================================================================
// ADDR: 0x1e6bb0
// SYMBOL: fmt::v8::detail::bigint::operator<<=(int)
int __fastcall fmt::v8::detail::bigint::operator<<=(int a1, int a2)
{
  unsigned int v3; // r2
  bool v4; // zf
  int v5; // r12
  int v7; // r0
  int v8; // r4
  unsigned int v9; // r5
  unsigned int v10; // r6
  __int64 v11; // r2
  int v12; // r1

  v3 = a2 + ((unsigned int)(a2 >> 31) >> 27);
  *(_DWORD *)(a1 + 148) += a2 / 32;
  v5 = a2 % 32;
  v4 = a2 % 32 == 0;
  if ( a2 % 32 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    v4 = v3 == 0;
  }
  if ( !v4 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v7 + 4 * v8);
      *(_DWORD *)(v7 + 4 * v8++) = (v10 << v5) + v9;
      v9 = v10 >> (32 - v5);
    }
    while ( v3 != v8 );
    if ( v9 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v11 + 1;
      if ( HIDWORD(v11) < (unsigned int)(v11 + 1) )
      {
        (**(void (__fastcall ***)(int))a1)(a1);
        LODWORD(v11) = *(_DWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 4);
        v12 = v11 + 1;
      }
      *(_DWORD *)(a1 + 8) = v12;
      *(_DWORD *)(v7 + 4 * v11) = v9;
    }
  }
  return a1;
}


// ======================================================================
// ADDR: 0x1e6c32
// SYMBOL: fmt::v8::detail::bigint::assign_pow10(int)
int __fastcall fmt::v8::detail::bigint::assign_pow10(fmt::v8::detail::bigint *this, int a2)
{
  int v4; // r0
  int v5; // r6
  int i; // r6

  if ( !a2 )
    return sub_2244F0(this, 0, 1, 0);
  v4 = 1;
  do
  {
    v5 = v4;
    v4 *= 2;
  }
  while ( v5 <= a2 );
  fmt::v8::detail::bigint::assign<unsigned long long,0>(this, a2, 5, 0);
  for ( i = v5 >> 2; i; i >>= 1 )
  {
    fmt::v8::detail::bigint::square(this);
    if ( (i & a2) != 0 )
      fmt::v8::detail::bigint::multiply(this, 5u);
  }
  return sub_2244E4(this, a2);
}


// ======================================================================
// ADDR: 0x1e6c90
// SYMBOL: fmt::v8::detail::bigint::assign(fmt::v8::detail::bigint const&)
int __fastcall fmt::v8::detail::bigint::assign(int a1, int a2)
{
  unsigned int v3; // r6
  unsigned int v5; // r0
  int result; // r0

  v3 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a1 + 12) < v3 )
  {
    (**(void (__fastcall ***)(int, _DWORD))a1)(a1, *(_DWORD *)(a2 + 8));
    v5 = *(_DWORD *)(a1 + 12);
    if ( v5 >= v3 )
      v5 = v3;
    *(_DWORD *)(a1 + 8) = v5;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 8) = v3;
  if ( v3 )
LABEL_6:
    j_memmove(*(void **)(a1 + 4), *(const void **)(a2 + 4), 4 * v3);
  result = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 148) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1e6cd6
// SYMBOL: fmt::v8::detail::add_compare(fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&)
int __fastcall fmt::v8::detail::add_compare(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r4
  int v5; // r8
  int v6; // lr
  int v7; // r9
  int v8; // r6
  int v9; // r10
  int v10; // r0
  int v11; // r12
  int result; // r0
  int v13; // r5
  unsigned int v14; // r11
  unsigned int *v15; // r3
  int v16; // r4
  unsigned int v17; // r9
  unsigned int v18; // r2
  unsigned int v19; // r0
  unsigned __int64 v20; // kr00_8
  unsigned __int64 v21; // kr08_8
  int v22; // [sp+4h] [bp-28h]
  int v23; // [sp+Ch] [bp-20h]

  v4 = a1[37];
  v5 = v4 + a1[2];
  v6 = a2[37];
  v7 = a3[2];
  v8 = a3[37];
  v9 = v6 + a2[2];
  v10 = v5;
  if ( v5 < v9 )
    v10 = v6 + a2[2];
  v11 = v8 + v7;
  if ( v10 + 1 < v8 + v7 )
    return -1;
  if ( v10 > v11 )
    return 1;
  v13 = v4;
  if ( v6 < v4 )
    v13 = a2[37];
  if ( v8 < v13 )
    v13 = a3[37];
  result = 0;
  if ( v11 > v13 )
  {
    v14 = 0;
    v22 = a1[1] + 4 * ~v4;
    v15 = (unsigned int *)(a3[1] + 4 * v7 - 4);
    v23 = v4;
    v16 = v8 + v7;
    while ( 1 )
    {
      v17 = 0;
      if ( v16 > v23 && v5 >= v16 )
        v17 = *(_DWORD *)(v22 + 4 * v16);
      v18 = 0;
      if ( v16 <= v6 )
      {
        v19 = 0;
      }
      else
      {
        v19 = 0;
        if ( v9 >= v16 )
          v19 = *(_DWORD *)(a2[1] + 4 * ~v6 + 4 * v16);
      }
      v20 = v19 + (unsigned __int64)v17;
      if ( v16 > v8 && v11 >= v16 )
        v18 = *v15;
      if ( __PAIR64__(v14, v18) < v20 )
        break;
      v21 = __PAIR64__(v14, v18) - v20;
      if ( __PAIR64__(v14, v18) - v20 > 1 )
        return -1;
      --v16;
      --v15;
      v14 = v18 - v20;
      if ( v16 <= v13 )
      {
        result = HIDWORD(v21) | v21;
        if ( v21 )
          return -1;
        return result;
      }
    }
    return 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e6dd2
// SYMBOL: fmt::v8::detail::bigint::divmod_assign(fmt::v8::detail::bigint const&)
int __fastcall fmt::v8::detail::bigint::divmod_assign(
        fmt::v8::detail::bigint *this,
        const fmt::v8::detail::bigint *a2,
        const fmt::v8::detail::bigint *a3)
{
  int v5; // r6
  const fmt::v8::detail::bigint *v6; // r2

  if ( (int)fmt::v8::detail::compare(this, a2, a3) < 0 )
    return 0;
  fmt::v8::detail::bigint::align(this, a2);
  v5 = 0;
  do
  {
    fmt::v8::detail::bigint::subtract_aligned(this, a2);
    ++v5;
  }
  while ( (int)fmt::v8::detail::compare(this, a2, v6) > -1 );
  return v5;
}


// ======================================================================
// ADDR: 0x1e6e14
// SYMBOL: fmt::v8::detail::compare(fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&)
int __fastcall fmt::v8::detail::compare(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r3
  int v4; // r2
  int v5; // r4
  bool v6; // cc
  int v7; // lr
  int v8; // r12
  int v9; // r2
  int v10; // r4
  unsigned int *v11; // r0
  int v12; // r1
  unsigned int v13; // r4
  bool v14; // cc
  int result; // r0

  v2 = a2[2];
  v3 = a1[2];
  v4 = a2[37] + v2;
  v5 = a1[37] + v3;
  v6 = v5 <= v4;
  if ( v5 != v4 )
  {
LABEL_8:
    result = -1;
    if ( !v6 )
      return 1;
    return result;
  }
  v7 = v2 - 1;
  v8 = v3 - 1;
  v9 = (v3 - v2) & ~((v3 - v2) >> 31);
  if ( v3 <= v9 )
  {
LABEL_6:
    v6 = v8 <= v7;
    if ( v8 == v7 )
      return 0;
    goto LABEL_8;
  }
  v8 = v9 - 1;
  v10 = a1[1];
  v11 = (unsigned int *)(a2[1] + 4 * v7);
  v7 = v2 + v9 + ~v3;
  v12 = v10 - 4;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 4 * v3);
    v14 = v13 > *v11;
    if ( v13 != *v11 )
      break;
    --v3;
    --v11;
    if ( v3 <= v9 )
      goto LABEL_6;
  }
  result = -1;
  if ( v14 )
    return 1;
  return result;
}


// ======================================================================
// ADDR: 0x1e6e84
// SYMBOL: fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>::grow(uint)
void __fastcall fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::grow(
        _DWORD *a1,
        unsigned int a2)
{
  unsigned int v3; // r6
  int *v4; // r8
  _DWORD *v5; // r0
  const std::nothrow_t *v6; // r1
  int *v7; // r2
  _DWORD *v8; // r3
  int v9; // t1

  v3 = a1[3] + (a1[3] >> 1);
  if ( v3 >= a2 )
  {
    if ( v3 >= 0x40000000 )
    {
      if ( a2 >> 30 )
        goto LABEL_13;
      v3 = 0x3FFFFFFF;
    }
  }
  else
  {
    v3 = a2;
    if ( a2 >= 0x40000000 )
LABEL_13:
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
  }
  v4 = (int *)a1[1];
  v5 = (_DWORD *)operator new(4 * v3);
  v6 = (const std::nothrow_t *)a1[2];
  if ( v6 )
  {
    v6 = (const std::nothrow_t *)(4 * (_DWORD)v6);
    v7 = v4;
    v8 = v5;
    do
    {
      v9 = *v7++;
      v6 = (const std::nothrow_t *)((char *)v6 - 4);
      *v8++ = v9;
    }
    while ( v6 );
  }
  a1[1] = v5;
  a1[3] = v3;
  if ( v4 != a1 + 4 )
    operator delete(v4, v6);
}


// ======================================================================
// ADDR: 0x1e6f00
// SYMBOL: fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(fmt::v8::detail::uint128_fallback)
unsigned int __fastcall fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v9; // r12
  unsigned int v10; // r5
  int v11; // r4
  int v12; // r0
  bool v13; // zf
  unsigned int result; // r0

  v9 = *(_DWORD *)(a1 + 4);
  v10 = 0;
  do
  {
    do
    {
      *(_DWORD *)(v9 + 4 * v10) = a3;
      v11 = a5;
      ++v10;
      v12 = a4;
      a3 = a4;
      a5 = a6;
      v13 = a6 == 0;
      a4 = v11;
      a6 = 0;
    }
    while ( !v13 );
    a3 = v12;
    a4 = v11;
    a6 = 0;
  }
  while ( v12 | v11 );
  result = *(_DWORD *)(a1 + 12);
  if ( result < v10 )
  {
    (**(void (__fastcall ***)(int, unsigned int))a1)(a1, v10);
    result = *(_DWORD *)(a1 + 12);
  }
  *(_DWORD *)(a1 + 148) = 0;
  if ( result < v10 )
    v10 = result;
  *(_DWORD *)(a1 + 8) = v10;
  return result;
}


// ======================================================================
// ADDR: 0x1e6f68
// SYMBOL: fmt::v8::detail::bigint::assign<ulong long,0>(ulong long)
unsigned int __fastcall fmt::v8::detail::bigint::assign<unsigned long long,0>(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  unsigned int v6; // r5
  bool v7; // zf
  unsigned int result; // r0

  v5 = *(_DWORD *)(a1 + 4);
  v6 = 0;
  do
  {
    *(_DWORD *)(v5 + 4 * v6++) = a3;
    v7 = a4 == 0;
    a3 = a4;
    a4 = 0;
  }
  while ( !v7 );
  result = *(_DWORD *)(a1 + 12);
  if ( result <= v6 - 1 )
  {
    (**(void (__fastcall ***)(int, unsigned int))a1)(a1, v6);
    result = *(_DWORD *)(a1 + 12);
  }
  *(_DWORD *)(a1 + 148) = 0;
  if ( result < v6 )
    v6 = result;
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}


// ======================================================================
// ADDR: 0x1e6fa8
// SYMBOL: fmt::v8::detail::bigint::square(void)
int __fastcall fmt::v8::detail::bigint::square(fmt::v8::detail::bigint *this)
{
  int v2; // r5
  unsigned int v3; // r0
  int v4; // r10
  int v5; // r2
  int v6; // r11
  int v7; // r1
  unsigned int v8; // r9
  unsigned int v9; // r4
  unsigned int v10; // r8
  unsigned int v11; // r3
  int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r6
  char v15; // cf
  unsigned int v16; // kr00_4
  unsigned int v17; // kr08_4
  unsigned int v18; // r5
  unsigned int v19; // r12
  int v20; // r11
  int v21; // r4
  int v22; // r6
  int v23; // r2
  unsigned int *v24; // r3
  unsigned int *v25; // r4
  int v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // t1
  unsigned int v29; // t1
  unsigned int v30; // kr18_4
  unsigned int v31; // r0
  unsigned int v32; // r3
  _DWORD *v33; // r0
  fmt::v8::detail::bigint *v35; // [sp+0h] [bp-D0h]
  int v36; // [sp+8h] [bp-C8h]
  int v37; // [sp+Ch] [bp-C4h]
  int v38; // [sp+10h] [bp-C0h]
  int v39; // [sp+14h] [bp-BCh]
  int v40; // [sp+18h] [bp-B8h]
  int v41; // [sp+18h] [bp-B8h]
  char v42[4]; // [sp+1Ch] [bp-B4h] BYREF
  void *v43; // [sp+20h] [bp-B0h]
  _DWORD v44[41]; // [sp+2Ch] [bp-A4h] BYREF

  v2 = *((_DWORD *)this + 2);
  fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::basic_memory_buffer(v42, this);
  v3 = *((_DWORD *)this + 3);
  v4 = 2 * v2;
  v38 = v2;
  if ( v3 < 2 * v2 )
  {
    (**(void (__fastcall ***)(fmt::v8::detail::bigint *, int))this)(this, 2 * v2);
    v3 = *((_DWORD *)this + 3);
  }
  if ( v3 >= v4 )
    v3 = 2 * v2;
  *((_DWORD *)this + 2) = v3;
  v37 = *((_DWORD *)this + 1);
  v35 = this;
  v36 = 2 * v2;
  if ( v2 < 1 )
  {
    v10 = 0;
    v19 = 0;
    v8 = 0;
    v18 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 1;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = 0;
      v39 = v7;
      v40 = v5;
      do
      {
        v13 = *((_DWORD *)v43 + v12++);
        v14 = *(_DWORD *)((char *)v43 + v5);
        v5 -= 4;
        v15 = __CFADD__(__CFADD__(v8, v14 * v13), v9) | __CFADD__(
                                                          (v14 * (unsigned __int64)v13) >> 32,
                                                          __CFADD__(v8, v14 * v13) + v9);
        v16 = v14 * v13 + v8;
        v9 = (v14 * (unsigned __int64)v13 + __PAIR64__(v9, v8)) >> 32;
        v8 = v16;
        v17 = v15 + v10;
        v11 = (__PAIR64__(v11, v15) + v10) >> 32;
        v10 = v17;
      }
      while ( v6 != v12 );
      v18 = v17;
      ++v6;
      v10 = v11;
      v19 = 0;
      v11 = 0;
      *(_DWORD *)(v37 + 4 * v39) = v16;
      v5 = v40 + 4;
      v7 = v39 + 1;
      v8 = v9;
      v9 = v17;
    }
    while ( v39 + 1 != v38 );
    v4 = v36;
    v37 = *((_DWORD *)v35 + 1);
  }
  if ( v38 < v4 )
  {
    v20 = v38;
    v21 = 1;
    v22 = v38 - 1;
    v23 = v38 - 1;
    do
    {
      if ( v20 - v22 >= v38 )
      {
        v31 = v10;
      }
      else
      {
        v41 = v21;
        v24 = (unsigned int *)((char *)v43 + 4 * v22);
        v25 = (unsigned int *)((char *)v43 + 4 * v21);
        v26 = v23;
        do
        {
          v28 = *v25++;
          v27 = v28;
          v29 = *v24--;
          v15 = __CFADD__(__CFADD__(v8, v29 * v27), v18) | __CFADD__(
                                                             (v29 * (unsigned __int64)v27) >> 32,
                                                             __CFADD__(v8, v29 * v27) + v18);
          v18 = (v29 * (unsigned __int64)v27 + __PAIR64__(v18, v8)) >> 32;
          v8 += v29 * v27;
          v30 = v15 + v10;
          v19 = (__PAIR64__(v19, v15) + v10) >> 32;
          v10 = v30;
          --v26;
        }
        while ( v26 );
        v22 = v38 - 1;
        v4 = v36;
        v31 = v30;
        v21 = v41;
      }
      v32 = v8;
      v10 = v19;
      v8 = v18;
      ++v21;
      --v23;
      v19 = 0;
      v18 = v31;
      *(_DWORD *)(v37 + 4 * v20++) = v32;
    }
    while ( v20 != v4 );
  }
  fmt::v8::detail::bigint::remove_leading_zeros(v35);
  v33 = v43;
  *((_DWORD *)v35 + 37) *= 2;
  if ( v33 != v44 )
    operator delete(v33);
  return v44[33];
}


// ======================================================================
// ADDR: 0x1e7154
// SYMBOL: fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>::basic_memory_buffer(fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>&&)
_DWORD *__fastcall fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::basic_memory_buffer(
        _DWORD *a1)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = &off_231150;
  a1[1] = 0;
  fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::move(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x1e7180
// SYMBOL: fmt::v8::detail::bigint::remove_leading_zeros(void)
unsigned int __fastcall fmt::v8::detail::bigint::remove_leading_zeros(fmt::v8::detail::bigint *this)
{
  int v2; // r0
  __int64 v3; // kr00_8
  unsigned int v4; // r5
  unsigned int result; // r0

  v3 = *(_QWORD *)((char *)this + 4);
  v2 = *((_DWORD *)this + 2);
  v4 = v2;
  if ( v2 >= 1 )
    v4 = 1;
  while ( v2 >= 2 )
  {
    if ( *(_DWORD *)(v3 - 4 + 4 * v2--) )
    {
      v4 = v2 + 1;
      break;
    }
  }
  result = *((_DWORD *)this + 3);
  if ( result < v4 )
  {
    (**(void (__fastcall ***)(fmt::v8::detail::bigint *, unsigned int))this)(this, v4);
    result = *((_DWORD *)this + 3);
  }
  if ( result < v4 )
    v4 = result;
  *((_DWORD *)this + 2) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x1e71c2
// SYMBOL: fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>::move(fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>&)
unsigned int __fastcall fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::move(
        int a1,
        _DWORD *a2)
{
  int *v3; // r0
  unsigned int v4; // r5
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // t1
  unsigned int result; // r0

  v4 = a2[2];
  v3 = (int *)a2[1];
  v5 = a2[3];
  if ( v3 == a2 + 4 )
  {
    v6 = (_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 12) = v5;
    *(_DWORD *)(a1 + 4) = a1 + 16;
    if ( v4 )
    {
      v7 = (int)&a2[v4 + 4];
      do
      {
        v8 = *v3++;
        *v6++ = v8;
      }
      while ( v3 != (int *)v7 );
    }
  }
  else
  {
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 12) = v5;
    a2[1] = a2 + 4;
    a2[2] = 0;
    a2[3] = 0;
  }
  result = *(_DWORD *)(a1 + 12);
  if ( result < v4 )
  {
    (**(void (__fastcall ***)(int, unsigned int))a1)(a1, v4);
    result = *(_DWORD *)(a1 + 12);
  }
  if ( result < v4 )
    v4 = result;
  *(_DWORD *)(a1 + 8) = v4;
  return result;
}


// ======================================================================
// ADDR: 0x1e721c
// SYMBOL: fmt::v8::detail::bigint::multiply<fmt::v8::detail::uint128_fallback,0>(fmt::v8::detail::uint128_fallback)
int __fastcall fmt::v8::detail::bigint::multiply<fmt::v8::detail::uint128_fallback,0>(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  _DWORD *v5; // r5
  int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r6
  unsigned int v9; // r10
  unsigned int v10; // r4
  unsigned int v11; // lr
  unsigned __int64 v12; // r10
  int v13; // r8
  unsigned __int64 v14; // kr18_8
  int v15; // r3
  bool v16; // cf
  int v17; // lr
  int v18; // r1
  unsigned int v19; // r3
  _BOOL4 v20; // off
  unsigned int v21; // r6
  unsigned int v22; // r1
  unsigned int v23; // r6
  unsigned __int64 v24; // kr00_8
  unsigned int v25; // kr20_4
  _DWORD *v26; // r3
  int result; // r0
  int v28; // r0
  unsigned int v29; // r9
  int v30; // r1
  bool v31; // zf
  _DWORD *v32; // [sp+4h] [bp-34h]
  unsigned int v34; // [sp+Ch] [bp-2Ch]
  unsigned int v35; // [sp+10h] [bp-28h]
  unsigned __int64 v36; // [sp+14h] [bp-24h]

  v5 = *(_DWORD **)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 8);
  v32 = v5;
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v34 = a4;
    do
    {
      v36 = __PAIR64__(v7, v10);
      v11 = v9;
      v12 = a4 * (unsigned __int64)(unsigned int)*v5;
      v35 = a5 * *v5;
      v13 = (HIDWORD(a5) * (unsigned __int64)(unsigned int)*v5) >> 32;
      v14 = a3 * (unsigned __int64)(unsigned int)*v5;
      v15 = (a5 * (unsigned __int64)(unsigned int)*v5) >> 32;
      if ( __CFADD__(HIDWORD(a5) * *v5, ((unsigned int)a5 * (unsigned __int64)(unsigned int)*v5) >> 32) )
        ++v13;
      *v5++ = v14 + v11;
      v16 = __CFADD__(__CFADD__((_DWORD)v14, v11), (_DWORD)v12);
      v17 = __CFADD__((_DWORD)v14, v11) + (_DWORD)v12;
      v16 |= __CFADD__(HIDWORD(v14), v17);
      v17 += HIDWORD(v14);
      v18 = v16 + HIDWORD(v12);
      v20 = __CFADD__(v16, HIDWORD(v12));
      v16 = __CFADD__(v20, v15);
      v19 = v20 + v15;
      v16 |= __CFADD__(v8, v19);
      v19 += v8;
      v21 = v16 + v13;
      v16 = __CFADD__(v18, v35);
      v24 = __PAIR64__(v19, v18) + v35;
      v25 = HIDWORD(v24);
      v22 = v24;
      v23 = (__PAIR64__(v21, v16) + v19) >> 32;
      v10 = (__PAIR64__(v22, v17) + v36) >> 32;
      v9 = v17 + v36;
      a4 = v34;
      v8 = (__PAIR64__(v23, __CFADD__(__CFADD__(v17, (_DWORD)v36), HIDWORD(v36)) | (unsigned __int8)__CFADD__(v22, v10))
          + v25) >> 32;
      v7 = (__CFADD__(__CFADD__(v17, (_DWORD)v36), HIDWORD(v36)) | __CFADD__(v22, v10)) + v25;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v7 = 0;
    v8 = 0;
  }
  v26 = v32;
  result = v7 | v9 | v8 | v10;
  if ( result )
  {
    while ( 1 )
    {
      v28 = *(_DWORD *)(a1 + 8);
      v29 = v10;
      v10 = v7;
      v30 = v28 + 1;
      if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v28 + 1) )
      {
        (**(void (__fastcall ***)(int))a1)(a1);
        v28 = *(_DWORD *)(a1 + 8);
        v26 = *(_DWORD **)(a1 + 4);
        v30 = v28 + 1;
      }
      *(_DWORD *)(a1 + 8) = v30;
      v7 = v8;
      v26[v28] = v9;
      v31 = v8 == 0;
      v8 = 0;
      v9 = v29;
      if ( v31 )
      {
        result = v29 | v10;
        v8 = 0;
        v9 = v29;
        if ( !(v29 | v10) )
          break;
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e72fc
// SYMBOL: fmt::v8::detail::bigint::multiply(uint)
int __fastcall fmt::v8::detail::bigint::multiply(int this, unsigned int a2)
{
  int v2; // r2
  int v3; // r8
  int v4; // r3
  unsigned int v5; // r5
  unsigned int v6; // r6
  __int64 v7; // r2
  int v8; // r1

  v2 = *(_DWORD *)(this + 8);
  if ( v2 )
  {
    v3 = this;
    this = *(_DWORD *)(this + 4);
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = (*(unsigned int *)(this + 4 * v4) * (unsigned __int64)a2 + v5) >> 32;
      *(_DWORD *)(this + 4 * v4) = *(_DWORD *)(this + 4 * v4) * a2 + v5;
      ++v4;
      v5 = v6;
    }
    while ( v2 != v4 );
    if ( v6 )
    {
      v7 = *(_QWORD *)(v3 + 8);
      v8 = v7 + 1;
      if ( HIDWORD(v7) < (unsigned int)(v7 + 1) )
      {
        (**(void (__fastcall ***)(int))v3)(v3);
        LODWORD(v7) = *(_DWORD *)(v3 + 8);
        this = *(_DWORD *)(v3 + 4);
        v8 = v7 + 1;
      }
      *(_DWORD *)(v3 + 8) = v8;
      *(_DWORD *)(this + 4 * v7) = v6;
    }
  }
  return this;
}


// ======================================================================
// ADDR: 0x1e7350
// SYMBOL: fmt::v8::detail::bigint::align(fmt::v8::detail::bigint const&)
_DWORD *__fastcall fmt::v8::detail::bigint::align(_DWORD *this, const fmt::v8::detail::bigint *a2)
{
  int v2; // r9
  int v3; // r10
  int v4; // r8
  unsigned int v5; // r1
  int v6; // r6
  _DWORD *v7; // r4
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r3

  v2 = *((_DWORD *)a2 + 37);
  v3 = this[37];
  v4 = v3 - v2;
  if ( v3 - v2 >= 1 )
  {
    v5 = this[3];
    v6 = this[2];
    v7 = this;
    v8 = v6 + v4;
    if ( v5 < v6 + v4 )
    {
      (*(void (__fastcall **)(_DWORD *, int))*this)(this, v6 + v4);
      v5 = v7[3];
    }
    v9 = v7[1];
    if ( v5 < v8 )
      v8 = v5;
    v7[2] = v8;
    if ( v6 < 1 )
      goto LABEL_10;
    v10 = v9 - 4;
    v11 = v6 + v3 - v2;
    do
    {
      v12 = *(_DWORD *)(v10 + 4 * v6--);
      *(_DWORD *)(v10 + 4 * v11--) = v12;
    }
    while ( v6 );
    if ( v4 >= 1 )
LABEL_10:
      sub_22178C(v9, 4 * v4);
    this = (_DWORD *)(v7[37] - v4);
    v7[37] = this;
  }
  return this;
}


// ======================================================================
// ADDR: 0x1e73cc
// SYMBOL: fmt::v8::detail::bigint::subtract_aligned(fmt::v8::detail::bigint const&)
int __fastcall fmt::v8::detail::bigint::subtract_aligned(
        fmt::v8::detail::bigint *this,
        unsigned int **a2,
        const fmt::v8::detail::bigint *a3)
{
  unsigned int *v5; // r1
  unsigned int v6; // r4
  unsigned int *v7; // r2
  int v8; // r3
  int v9; // r0
  unsigned int v10; // t1
  unsigned int v11; // r6
  int v12; // r6
  int v13; // r1
  unsigned int v14; // r5
  unsigned int v15; // r2
  bool v16; // cf

  fmt::v8::detail::compare(this, (const fmt::v8::detail::bigint *)a2, a3);
  v5 = a2[2];
  if ( v5 )
  {
    v6 = 0;
    v7 = a2[1];
    v8 = *((_DWORD *)this + 1);
    v9 = (int)a2[37] - *((_DWORD *)this + 37);
    do
    {
      v10 = *v7++;
      v11 = *(_DWORD *)(v8 + 4 * v9);
      *(_DWORD *)(v8 + 4 * v9) = v11 - (v10 + v6);
      v12 = (v11 - (v10 + (unsigned __int64)v6)) >> 32;
      v5 = (unsigned int *)((char *)v5 - 1);
      ++v9;
      v6 = (unsigned int)v12 >> 31;
    }
    while ( v5 );
    if ( v12 <= -1 )
    {
      v13 = *((_DWORD *)this + 1);
      v14 = 1;
      v15 = *(_DWORD *)(v13 + 4 * v9);
      do
      {
        v16 = v15 >= v14;
        v15 -= v14;
        v14 = !v16;
      }
      while ( !v16 );
      *(_DWORD *)(v13 + 4 * v9) = v15;
    }
  }
  return sub_2244FC(this);
}


// ======================================================================
// ADDR: 0x1e744c
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  _BYTE *v4; // r4
  int v5; // r0
  const char *v7; // r1
  int v8; // r0
  unsigned int v9; // r0
  const char *v10; // r1
  bool v11; // cc
  char *v13; // [sp+4h] [bp-1Ch] BYREF
  unsigned int arg_id; // [sp+8h] [bp-18h]

  v4 = (_BYTE *)(a1 + 1);
  if ( (_BYTE *)(a1 + 1) == a2 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", _stack_chk_guard);
  v5 = (unsigned __int8)*v4;
  if ( v5 != 123 )
  {
    if ( v5 == 125 )
    {
      fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
    }
    else
    {
      v13 = a3;
      arg_id = 0;
      if ( v5 == 58 )
        arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
      else
        v4 = (_BYTE *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter &>(
                        v4,
                        a2,
                        &v13);
      if ( v4 == a2 )
        goto LABEL_17;
      v8 = (unsigned __int8)*v4;
      if ( v8 == 125 )
        return v4 + 1;
      if ( v8 != 58 )
LABEL_17:
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"missing '}' in format string", v7);
      ++v4;
      v9 = arg_id;
      v10 = (const char *)(*(_DWORD *)a3 - (_DWORD)v4 + *((_DWORD *)a3 + 1));
      v11 = arg_id > 1;
      *(_DWORD *)a3 = v4;
      *((_DWORD *)a3 + 1) = v10;
      if ( !v11 )
        v4 = (_BYTE *)(*(int (__fastcall **)(char *))&a3[4 * v9 + 16])(a3);
      if ( v4 == a2 || *v4 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unknown format specifier", v10);
    }
  }
  return v4 + 1;
}


// ======================================================================
// ADDR: 0x1e751c
// SYMBOL: fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(void)
int __fastcall fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(char *a1)
{
  int result; // r0
  int v3; // r2

  result = *((_DWORD *)a1 + 2);
  if ( result <= -1 )
    fmt::v8::detail::throw_format_error(
      (fmt::v8::detail *)"cannot switch from manual to automatic argument indexing",
      a1);
  v3 = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 2) = result + 1;
  if ( result >= v3 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"argument not found", a1);
  return result;
}


// ======================================================================
// ADDR: 0x1e7550
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  const char *v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  bool v11; // cc
  unsigned __int8 *v12; // [sp+0h] [bp-18h] BYREF

  v5 = (const char *)*a1;
  v12 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    v11 = (unsigned int)v5 > 0x5F;
    if ( v5 != (_BYTE *)&dword_5C + 3 )
      v11 = ((unsigned __int8)v5 & 0xDFu) - 65 > 0x19;
    if ( !v11 )
      fmt::v8::detail::throw_format_error(
        (fmt::v8::detail *)"compile-time checks for named arguments require C++20 support",
        v5);
LABEL_15:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", v5);
  }
  if ( v5 == (const char *)&word_30 )
  {
    v6 = a1 + 1;
    v7 = 0;
    v12 = v6;
  }
  else
  {
    v7 = sub_E036C(&v12, a2, 0x7FFFFFFF);
    v6 = v12;
  }
  if ( v6 == a2 )
    goto LABEL_15;
  v8 = *v6;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( !v9 )
    goto LABEL_15;
  fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*a3, v7);
  a3[1] = v7;
  return v12;
}


// ======================================================================
// ADDR: 0x1e75f4
// SYMBOL: fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(int)
int __fastcall fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(
        int result,
        const char *a2)
{
  int v2; // r2

  if ( *(int *)(result + 8) >= 1 )
    fmt::v8::detail::throw_format_error(
      (fmt::v8::detail *)"cannot switch from automatic to manual argument indexing",
      a2);
  v2 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 8) = -1;
  if ( v2 <= (int)a2 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"argument not found", a2);
  return result;
}


// ======================================================================
// ADDR: 0x1e7868
// SYMBOL: fmt::v8::detail::parse_align<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
const char *__fastcall fmt::v8::detail::parse_align<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        const char *a1,
        int a2,
        int *a3)
{
  const char *v4; // r3
  unsigned int v5; // r0
  const char *v6; // r6
  const char *v7; // r1
  bool v8; // zf
  int v9; // r5

  v4 = a1;
  v5 = *(unsigned __int8 *)a1;
  v6 = &v4[byte_91EB0[v5 >> 3] + ((0x80FF0000 >> (v5 >> 3)) & 1)];
  if ( a2 - (int)v6 < 1 )
    v6 = v4;
  while ( 1 )
  {
    v7 = (const char *)*(unsigned __int8 *)v6;
    if ( v7 == (_BYTE *)&dword_5C + 2 )
    {
      v9 = 3;
      goto LABEL_12;
    }
    if ( v7 == (_BYTE *)off_3C + 2 )
    {
      v9 = 2;
      goto LABEL_12;
    }
    if ( v7 == (const char *)off_3C )
      break;
    v8 = v6 == v4;
    v6 = v4;
    if ( v8 )
      return v4;
  }
  v9 = 1;
LABEL_12:
  if ( v6 == v4 )
  {
    v6 = v4;
  }
  else
  {
    if ( v5 == 123 )
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid fill character '{'", v7);
    sub_E079C(a3, v4, v6 - v4);
  }
  fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_align(
    a3,
    v9);
  return v6 + 1;
}


// ======================================================================
// ADDR: 0x1e78f0
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_sign(fmt::v8::sign::type)
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_sign(
        int *a1,
        const char *a2)
{
  unsigned int v2; // r2
  int result; // r0

  v2 = a1[3];
  if ( v2 - 1 >= 0xB )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"format specifier requires numeric argument", a2);
  if ( v2 - 1 <= 7 && (v2 > 8 || ((1 << v2) & 0x12A) == 0) )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"format specifier requires signed argument", a2);
  result = *a1;
  *(_WORD *)(result + 9) = *(_WORD *)(result + 9) & 0xFF8F | (16 * ((unsigned __int8)a2 & 7));
  return result;
}


// ======================================================================
// ADDR: 0x1e7940
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_zero(void)
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_zero(
        _DWORD *a1)
{
  const char *v1; // r1
  int v2; // r1
  int v3; // r2
  int result; // r0

  v1 = (const char *)(a1[3] - 1);
  if ( (unsigned int)v1 >= 0xB )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"format specifier requires numeric argument", v1);
  v2 = *a1;
  v3 = *(unsigned __int16 *)(*a1 + 9);
  if ( !(v3 << 28) )
  {
    *(_WORD *)(v2 + 9) = v3 & 0xFFF0 | 4;
    v2 = *a1;
  }
  result = 48;
  *(_BYTE *)(v2 + 11) = 48;
  return result;
}


// ======================================================================
// ADDR: 0x1e7978
// SYMBOL: fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
unsigned __int8 *__fastcall fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        unsigned __int8 *result,
        unsigned __int8 *a2,
        int a3)
{
  int v5; // r1
  int v6; // r1
  unsigned __int8 *v7; // r6
  int v8; // r0
  bool v9; // zf
  int arg_id; // r0
  int v11; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 *v12; // [sp+8h] [bp-18h] BYREF

  v5 = *result;
  v12 = result;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    if ( v5 == 123 )
    {
      v7 = result + 1;
      if ( result + 1 == a2 )
        goto LABEL_15;
      v8 = *v7;
      v11 = a3;
      v9 = v8 == 58;
      if ( v8 != 58 )
        v9 = v8 == 125;
      if ( v9 )
      {
        arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(*(char **)(a3 + 8));
        v5 = *(_DWORD *)(a3 + 4);
        *(_DWORD *)(v5 + 16) = 1;
        *(_DWORD *)(v5 + 20) = arg_id;
      }
      else
      {
        v7 = (unsigned __int8 *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter &>(
                                  v7,
                                  a2,
                                  &v11);
      }
      if ( v7 == a2 || *v7 != 125 )
LABEL_15:
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", (const char *)v5);
      result = v7 + 1;
      v12 = v7 + 1;
    }
  }
  else
  {
    v6 = sub_E036C(&v12, a2, -1);
    if ( v6 == -1 )
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"number is too big", (const char *)0xFFFFFFFF);
    result = v12;
    **(_DWORD **)a3 = v6;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1e7a30
// SYMBOL: fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
unsigned __int8 *__fastcall fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        int a1,
        unsigned __int8 *a2,
        int a3)
{
  const char *v4; // r1
  int v6; // r0
  unsigned __int8 *v7; // r6
  int v8; // r0
  bool v9; // zf
  int arg_id; // r0
  unsigned int v11; // r0
  int v13; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 *v14; // [sp+8h] [bp-18h] BYREF

  v4 = (const char *)(a1 + 1);
  v14 = (unsigned __int8 *)(a1 + 1);
  if ( (unsigned __int8 *)(a1 + 1) == a2 )
    goto LABEL_18;
  v4 = (const char *)*(unsigned __int8 *)v4;
  if ( (unsigned int)(v4 - 48) <= 9 )
  {
    v6 = sub_E036C(&v14, a2, -1);
    if ( v6 == -1 )
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"number is too big", 0);
    *(_DWORD *)(*(_DWORD *)a3 + 4) = v6;
    goto LABEL_14;
  }
  if ( v4 != (_BYTE *)&dword_78 + 3 )
LABEL_18:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"missing precision specifier", v4);
  v7 = (unsigned __int8 *)(a1 + 2);
  if ( (unsigned __int8 *)(a1 + 2) == a2 )
    goto LABEL_19;
  v8 = *v7;
  v13 = a3;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( v9 )
  {
    arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(*(char **)(a3 + 8));
    v4 = *(const char **)(a3 + 4);
    *((_DWORD *)v4 + 7) = 1;
    *((_DWORD *)v4 + 8) = arg_id;
  }
  else
  {
    v7 = (unsigned __int8 *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter &>(
                              v7,
                              a2,
                              &v13);
  }
  if ( v7 == a2 || (v14 = v7 + 1, *v7 != 125) )
LABEL_19:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", v4);
LABEL_14:
  v11 = *(_DWORD *)(a3 + 12);
  if ( v11 <= 0xE && ((1 << v11) & (unsigned int)&stru_41F0.st_shndx) != 0 )
    fmt::v8::detail::throw_format_error(
      (fmt::v8::detail *)"precision not allowed for this argument type",
      (const char *)&stru_41F0.st_shndx);
  return v14;
}


// ======================================================================
// ADDR: 0x1e7b18
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_align(fmt::v8::align::type)
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_align(
        int *a1,
        int a2)
{
  int result; // r0

  if ( a2 == 4 && (unsigned int)(a1[3] - 1) >= 0xB )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"format specifier requires numeric argument", byte_4);
  result = *a1;
  *(_WORD *)(result + 9) = *(_WORD *)(result + 9) & 0xFFF0 | a2 & 0xF;
  return result;
}


// ======================================================================
// ADDR: 0x1e7b44
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter &>(char const*,char const*,fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int *a3)
{
  unsigned int v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  unsigned __int8 *v8; // r1
  int v9; // r2
  int v10; // t1
  _DWORD *v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r4
  int v15; // r0
  unsigned __int8 *v17; // [sp+0h] [bp-18h] BYREF

  v5 = *a1;
  v17 = a1;
  if ( v5 - 48 > 9 )
  {
    if ( v5 != 95 )
    {
      v5 = (v5 & 0xDF) - 65;
      if ( v5 > 0x19 )
        goto LABEL_21;
    }
    v8 = a1 + 1;
    while ( v8 != a2 )
    {
      v10 = *v8++;
      v9 = v10;
      if ( (unsigned int)(v10 - 48) >= 0xA && v9 != 95 && (v9 & 0xDFu) - 65 >= 0x1A )
      {
        a2 = v8 - 1;
        break;
      }
    }
    v11 = *(_DWORD **)(*a3 + 4);
    v11[4] = 2;
    v11[5] = a1;
    v11[6] = a2 - a1;
  }
  else
  {
    if ( v5 == 48 )
    {
      v6 = a1 + 1;
      v7 = 0;
      v17 = v6;
    }
    else
    {
      v7 = sub_E036C(&v17, a2, 0x7FFFFFFF);
      v6 = v17;
    }
    if ( v6 == a2 )
      goto LABEL_21;
    v12 = *v6;
    v13 = v12 == 58;
    if ( v12 != 58 )
      v13 = v12 == 125;
    if ( !v13 )
LABEL_21:
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", (const char *)v5);
    v14 = *a3;
    fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*(_DWORD *)(*a3 + 8), v7);
    v15 = *(_DWORD *)(v14 + 4);
    a2 = v17;
    *(_DWORD *)(v15 + 16) = 1;
    *(_DWORD *)(v15 + 20) = v7;
  }
  return a2;
}


// ======================================================================
// ADDR: 0x1e7c18
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter &>(char const*,char const*,fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int *a3)
{
  unsigned int v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  unsigned __int8 *v8; // r1
  int v9; // r2
  int v10; // t1
  _DWORD *v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r4
  int v15; // r0
  unsigned __int8 *v17; // [sp+0h] [bp-18h] BYREF

  v5 = *a1;
  v17 = a1;
  if ( v5 - 48 > 9 )
  {
    if ( v5 != 95 )
    {
      v5 = (v5 & 0xDF) - 65;
      if ( v5 > 0x19 )
        goto LABEL_21;
    }
    v8 = a1 + 1;
    while ( v8 != a2 )
    {
      v10 = *v8++;
      v9 = v10;
      if ( (unsigned int)(v10 - 48) >= 0xA && v9 != 95 && (v9 & 0xDFu) - 65 >= 0x1A )
      {
        a2 = v8 - 1;
        break;
      }
    }
    v11 = *(_DWORD **)(*a3 + 4);
    v11[7] = 2;
    v11[8] = a1;
    v11[9] = a2 - a1;
  }
  else
  {
    if ( v5 == 48 )
    {
      v6 = a1 + 1;
      v7 = 0;
      v17 = v6;
    }
    else
    {
      v7 = sub_E036C(&v17, a2, 0x7FFFFFFF);
      v6 = v17;
    }
    if ( v6 == a2 )
      goto LABEL_21;
    v12 = *v6;
    v13 = v12 == 58;
    if ( v12 != 58 )
      v13 = v12 == 125;
    if ( !v13 )
LABEL_21:
      fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", (const char *)v5);
    v14 = *a3;
    fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*(_DWORD *)(*a3 + 8), v7);
    v15 = *(_DWORD *)(v14 + 4);
    a2 = v17;
    *(_DWORD *)(v15 + 28) = 1;
    *(_DWORD *)(v15 + 32) = v7;
  }
  return a2;
}


// ======================================================================
// ADDR: 0x1e7e54
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  _BYTE *v4; // r4
  int v5; // r0
  const char *v7; // r1
  int v8; // r0
  unsigned int v9; // r0
  const char *v10; // r1
  bool v11; // cc
  char *v13; // [sp+4h] [bp-1Ch] BYREF
  unsigned int arg_id; // [sp+8h] [bp-18h]

  v4 = (_BYTE *)(a1 + 1);
  if ( (_BYTE *)(a1 + 1) == a2 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", _stack_chk_guard);
  v5 = (unsigned __int8)*v4;
  if ( v5 != 123 )
  {
    if ( v5 == 125 )
    {
      fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
    }
    else
    {
      v13 = a3;
      arg_id = 0;
      if ( v5 == 58 )
        arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
      else
        v4 = (_BYTE *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter &>(
                        v4,
                        a2,
                        &v13);
      if ( v4 == a2 )
        goto LABEL_17;
      v8 = (unsigned __int8)*v4;
      if ( v8 == 125 )
        return v4 + 1;
      if ( v8 != 58 )
LABEL_17:
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"missing '}' in format string", v7);
      ++v4;
      v9 = arg_id;
      v10 = (const char *)(*(_DWORD *)a3 - (_DWORD)v4 + *((_DWORD *)a3 + 1));
      v11 = arg_id > 1;
      *(_DWORD *)a3 = v4;
      *((_DWORD *)a3 + 1) = v10;
      if ( !v11 )
        v4 = (_BYTE *)(*(int (__fastcall **)(char *))&a3[4 * v9 + 16])(a3);
      if ( v4 == a2 || *v4 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unknown format specifier", v10);
    }
  }
  return v4 + 1;
}


// ======================================================================
// ADDR: 0x1e7f24
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  const char *v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  bool v11; // cc
  unsigned __int8 *v12; // [sp+0h] [bp-18h] BYREF

  v5 = (const char *)*a1;
  v12 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    v11 = (unsigned int)v5 > 0x5F;
    if ( v5 != (_BYTE *)&dword_5C + 3 )
      v11 = ((unsigned __int8)v5 & 0xDFu) - 65 > 0x19;
    if ( !v11 )
      fmt::v8::detail::throw_format_error(
        (fmt::v8::detail *)"compile-time checks for named arguments require C++20 support",
        v5);
LABEL_15:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", v5);
  }
  if ( v5 == (const char *)&word_30 )
  {
    v6 = a1 + 1;
    v7 = 0;
    v12 = v6;
  }
  else
  {
    v7 = sub_E036C(&v12, a2, 0x7FFFFFFF);
    v6 = v12;
  }
  if ( v6 == a2 )
    goto LABEL_15;
  v8 = *v6;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( !v9 )
    goto LABEL_15;
  fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*a3, v7);
  a3[1] = v7;
  return v12;
}


// ======================================================================
// ADDR: 0x1e81fc
// SYMBOL: fmt::v8::basic_memory_buffer<wchar_t,500u,std::__ndk1::allocator<wchar_t>>::grow(uint)
void __fastcall fmt::v8::basic_memory_buffer<wchar_t,500u,std::allocator<wchar_t>>::grow(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r6
  int *v4; // r8
  _DWORD *v5; // r0
  const std::nothrow_t *v6; // r1
  int *v7; // r2
  _DWORD *v8; // r3
  int v9; // t1

  v3 = a1[3] + (a1[3] >> 1);
  if ( v3 >= a2 )
  {
    if ( v3 >= 0x40000000 )
    {
      if ( a2 >> 30 )
        goto LABEL_13;
      v3 = 0x3FFFFFFF;
    }
  }
  else
  {
    v3 = a2;
    if ( a2 >= 0x40000000 )
LABEL_13:
      sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
  }
  v4 = (int *)a1[1];
  v5 = (_DWORD *)operator new(4 * v3);
  v6 = (const std::nothrow_t *)a1[2];
  if ( v6 )
  {
    v6 = (const std::nothrow_t *)(4 * (_DWORD)v6);
    v7 = v4;
    v8 = v5;
    do
    {
      v9 = *v7++;
      v6 = (const std::nothrow_t *)((char *)v6 - 4);
      *v8++ = v9;
    }
    while ( v6 );
  }
  a1[1] = v5;
  a1[3] = v3;
  if ( v4 != a1 + 4 )
    operator delete(v4, v6);
}


// ======================================================================
// ADDR: 0x1e83fc
// SYMBOL: fmt::v8::detail::copy_str_noinline<char,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(char const*,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>)
// attributes: thunk
int fmt::v8::detail::copy_str_noinline<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>()
{
  return _ZN3fmt2v86detail17copy_str_noinlineIcPKcNSt6__ndk120back_insert_iteratorINS1_6bufferIcEEEEEET1_T0_SB_SA__0();
}


// ======================================================================
// ADDR: 0x1e8400
// SYMBOL: fmt::v8::detail::copy_str<char,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(char const*,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>)
int __fastcall fmt::v8::detail::copy_str<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(
        char *a1,
        char *a2,
        int a3)
{
  char *v5; // r6
  int v6; // r0
  char v7; // r5
  char v8; // t1
  int v9; // r1
  int v10; // r2

  if ( a1 != a2 )
  {
    v5 = a1;
    do
    {
      v6 = *(_DWORD *)(a3 + 8);
      v8 = *v5++;
      v7 = v8;
      v9 = v6 + 1;
      if ( *(_DWORD *)(a3 + 12) < (unsigned int)(v6 + 1) )
      {
        (**(void (__fastcall ***)(int))a3)(a3);
        v6 = *(_DWORD *)(a3 + 8);
        v9 = v6 + 1;
      }
      v10 = *(_DWORD *)(a3 + 4);
      *(_DWORD *)(a3 + 8) = v9;
      *(_BYTE *)(v10 + v6) = v7;
    }
    while ( v5 != a2 );
  }
  return a3;
}


// ======================================================================
// ADDR: 0x1e8440
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#1}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::appender fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#1}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\x{:02x}";
  v5[0] = "\\x{:02x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e84d4
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  _BYTE *v4; // r4
  int v5; // r0
  const char *v7; // r1
  int v8; // r0
  int v9; // r0
  const char *v10; // r1
  char *v12; // [sp+4h] [bp-1Ch] BYREF
  int arg_id; // [sp+8h] [bp-18h]

  v4 = (_BYTE *)(a1 + 1);
  if ( (_BYTE *)(a1 + 1) == a2 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", _stack_chk_guard);
  v5 = (unsigned __int8)*v4;
  if ( v5 != 123 )
  {
    if ( v5 == 125 )
    {
      fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
    }
    else
    {
      v12 = a3;
      arg_id = 0;
      if ( v5 == 58 )
        arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
      else
        v4 = (_BYTE *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &)::id_adapter &>(
                        v4,
                        a2,
                        &v12);
      if ( v4 == a2 )
        goto LABEL_17;
      v8 = (unsigned __int8)*v4;
      if ( v8 == 125 )
        return v4 + 1;
      if ( v8 != 58 )
LABEL_17:
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"missing '}' in format string", v7);
      ++v4;
      v9 = arg_id;
      v10 = (const char *)(*(_DWORD *)a3 - (_DWORD)v4 + *((_DWORD *)a3 + 1));
      *(_DWORD *)a3 = v4;
      *((_DWORD *)a3 + 1) = v10;
      if ( !v9 )
        v4 = (_BYTE *)(*((int (__fastcall **)(char *))a3 + 4))(a3);
      if ( v4 == a2 || *v4 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unknown format specifier", v10);
    }
  }
  return v4 + 1;
}


// ======================================================================
// ADDR: 0x1e85a0
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)::id_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  const char *v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  bool v11; // cc
  unsigned __int8 *v12; // [sp+0h] [bp-18h] BYREF

  v5 = (const char *)*a1;
  v12 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    v11 = (unsigned int)v5 > 0x5F;
    if ( v5 != (_BYTE *)&dword_5C + 3 )
      v11 = ((unsigned __int8)v5 & 0xDFu) - 65 > 0x19;
    if ( !v11 )
      fmt::v8::detail::throw_format_error(
        (fmt::v8::detail *)"compile-time checks for named arguments require C++20 support",
        v5);
LABEL_15:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", v5);
  }
  if ( v5 == (const char *)&word_30 )
  {
    v6 = a1 + 1;
    v7 = 0;
    v12 = v6;
  }
  else
  {
    v7 = sub_E036C(&v12, a2, 0x7FFFFFFF);
    v6 = v12;
  }
  if ( v6 == a2 )
    goto LABEL_15;
  v8 = *v6;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( !v9 )
    goto LABEL_15;
  fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*a3, v7);
  a3[1] = v7;
  return v12;
}


// ======================================================================
// ADDR: 0x1e8810
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#2}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::appender fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#2}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\u{:04x}";
  v5[0] = "\\u{:04x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e88a4
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#3}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::appender fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#3}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\U{:08x}";
  v5[0] = "\\U{:08x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e8938
// SYMBOL: fmt::v8::detail::check_format_string<uchar,fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#4}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned char,fmt::v8::appender fmt::v8::detail::write_escaped_cp<fmt::v8::appender,char>(fmt::v8::appender,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#4}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned char,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\x{:02x}";
  v5[0] = "\\x{:02x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e89cc
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  _BYTE *v4; // r4
  int v5; // r0
  const char *v7; // r1
  int v8; // r0
  int v9; // r0
  const char *v10; // r1
  char *v12; // [sp+4h] [bp-1Ch] BYREF
  int arg_id; // [sp+8h] [bp-18h]

  v4 = (_BYTE *)(a1 + 1);
  if ( (_BYTE *)(a1 + 1) == a2 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", _stack_chk_guard);
  v5 = (unsigned __int8)*v4;
  if ( v5 != 123 )
  {
    if ( v5 == 125 )
    {
      fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
    }
    else
    {
      v12 = a3;
      arg_id = 0;
      if ( v5 == 58 )
        arg_id = fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(a3);
      else
        v4 = (_BYTE *)fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &)::id_adapter &>(
                        v4,
                        a2,
                        &v12);
      if ( v4 == a2 )
        goto LABEL_17;
      v8 = (unsigned __int8)*v4;
      if ( v8 == 125 )
        return v4 + 1;
      if ( v8 != 58 )
LABEL_17:
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"missing '}' in format string", v7);
      ++v4;
      v9 = arg_id;
      v10 = (const char *)(*(_DWORD *)a3 - (_DWORD)v4 + *((_DWORD *)a3 + 1));
      *(_DWORD *)a3 = v4;
      *((_DWORD *)a3 + 1) = v10;
      if ( !v9 )
        v4 = (_BYTE *)(*((int (__fastcall **)(char *))a3 + 4))(a3);
      if ( v4 == a2 || *v4 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unknown format specifier", v10);
    }
  }
  return v4 + 1;
}


// ======================================================================
// ADDR: 0x1e8a98
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)::id_adapter)
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  const char *v5; // r1
  unsigned __int8 *v6; // r0
  int v7; // r6
  int v8; // r0
  bool v9; // zf
  bool v11; // cc
  unsigned __int8 *v12; // [sp+0h] [bp-18h] BYREF

  v5 = (const char *)*a1;
  v12 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    v11 = (unsigned int)v5 > 0x5F;
    if ( v5 != (_BYTE *)&dword_5C + 3 )
      v11 = ((unsigned __int8)v5 & 0xDFu) - 65 > 0x19;
    if ( !v11 )
      fmt::v8::detail::throw_format_error(
        (fmt::v8::detail *)"compile-time checks for named arguments require C++20 support",
        v5);
LABEL_15:
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid format string", v5);
  }
  if ( v5 == (const char *)&word_30 )
  {
    v6 = a1 + 1;
    v7 = 0;
    v12 = v6;
  }
  else
  {
    v7 = sub_E036C(&v12, a2, 0x7FFFFFFF);
    v6 = v12;
  }
  if ( v6 == a2 )
    goto LABEL_15;
  v8 = *v6;
  v9 = v8 == 58;
  if ( v8 != 58 )
    v9 = v8 == 125;
  if ( !v9 )
    goto LABEL_15;
  fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(*a3, v7);
  a3[1] = v7;
  return v12;
}


// ======================================================================
// ADDR: 0x1e8bc8
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#1}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::detail::counting_iterator fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#1}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\x{:02x}";
  v5[0] = "\\x{:02x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e8c5c
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#2}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::detail::counting_iterator fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#2}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\u{:04x}";
  v5[0] = "\\u{:04x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e8cf0
// SYMBOL: fmt::v8::detail::check_format_string<uint const&,fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#3}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned int const&,fmt::v8::detail::counting_iterator fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#3}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned int,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\U{:08x}";
  v5[0] = "\\U{:08x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x1e8d84
// SYMBOL: fmt::v8::detail::check_format_string<uchar,fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#4}::operator() const(void)::FMT_COMPILE_STRING,0>(char)
int fmt::v8::detail::check_format_string<unsigned char,fmt::v8::detail::counting_iterator fmt::v8::detail::write_escaped_cp<fmt::v8::detail::counting_iterator,char>(fmt::v8::detail::counting_iterator,fmt::v8::detail::find_escape_result<char> const&)::{lambda(void)#4}::operator() const(void)::FMT_COMPILE_STRING,0>()
{
  char *v0; // r0
  int v1; // r2
  int v2; // r1
  int v3; // t1
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v5[3] = 1;
  v5[2] = 0;
  v5[4] = fmt::v8::detail::parse_format_specs<unsigned char,fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>;
  v0 = "\\x{:02x}";
  v5[0] = "\\x{:02x}";
  v5[1] = 8;
  do
  {
    v1 = (int)v0;
    v3 = (unsigned __int8)*v0++;
    v2 = v3;
    if ( v3 == 125 )
    {
      if ( v0 == "" || *v0 != 125 )
        fmt::v8::detail::throw_format_error((fmt::v8::detail *)"unmatched '}' in format string", "");
      v0 = (char *)(v1 + 2);
    }
    else if ( v2 == 123 )
    {
      v0 = (char *)fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(
                     v1,
                     (int)"",
                     (char *)v5);
    }
  }
  while ( v0 != "" );
  return v5[5];
}


// ======================================================================
// ADDR: 0x224340
// SYMBOL: fmt::v8::format_error::~format_error()
void __fastcall fmt::v8::format_error::~format_error(fmt::v8::format_error *this)
{
  std::underflow_error::~underflow_error(this);
}


// ======================================================================
// ADDR: 0x224508
// SYMBOL: fmt::v8::detail::copy_str_noinline<char,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(char const*,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>)
int __fastcall fmt::v8::detail::copy_str_noinline<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(
        char *a1,
        char *a2,
        int a3)
{
  return fmt::v8::detail::copy_str<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x224c00
// SYMBOL: fmt::v8::detail::error_handler::on_error(char const*)
// attributes: thunk
void __fastcall __noreturn fmt::v8::detail::error_handler::on_error(
        fmt::v8::detail::error_handler *this,
        fmt::v8::detail *a2)
{
  _ZN3fmt2v86detail13error_handler8on_errorEPKc(this, a2);
}


// ======================================================================
// ADDR: 0x224c30
// SYMBOL: fmt::v8::detail::throw_format_error(char const*)
// attributes: thunk
void __fastcall __noreturn fmt::v8::detail::throw_format_error(fmt::v8::detail *this, const char *a2)
{
  _ZN3fmt2v86detail18throw_format_errorEPKc(this, a2);
}


// ======================================================================
// ADDR: 0x224c40
// SYMBOL: fmt::v8::detail::thousands_sep_impl<char>(fmt::v8::detail::locale_ref)
// attributes: thunk
int __fastcall fmt::v8::detail::thousands_sep_impl<char>(int a1, const std::locale *a2)
{
  return _ZN3fmt2v86detail18thousands_sep_implIcEENS1_20thousands_sep_resultIT_EENS1_10locale_refE(a1, a2);
}


// ======================================================================
// ADDR: 0x224c60
// SYMBOL: fmt::v8::detail::is_printable(uint)
// attributes: thunk
int __fastcall fmt::v8::detail::is_printable(unsigned int this, unsigned int a2)
{
  return _ZN3fmt2v86detail12is_printableEj(this, a2);
}


// ======================================================================
// ADDR: 0x224c70
// SYMBOL: fmt::v8::detail::dragonbox::to_decimal<float>(float)
// attributes: thunk
int __fastcall fmt::v8::detail::dragonbox::to_decimal<float>(__int64 a1)
{
  return _ZN3fmt2v86detail9dragonbox10to_decimalIfEENS2_10decimal_fpIT_EES5_(a1);
}


// ======================================================================
// ADDR: 0x224c80
// SYMBOL: fmt::v8::detail::decimal_point_impl<char>(fmt::v8::detail::locale_ref)
// attributes: thunk
int __fastcall fmt::v8::detail::decimal_point_impl<char>(std::locale *a1)
{
  return _ZN3fmt2v86detail18decimal_point_implIcEET_NS1_10locale_refE(a1);
}


// ======================================================================
// ADDR: 0x224c90
// SYMBOL: fmt::v8::detail::dragonbox::to_decimal<double>(double)
// attributes: thunk
int __fastcall fmt::v8::detail::dragonbox::to_decimal<double>(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  return _ZN3fmt2v86detail9dragonbox10to_decimalIdEENS2_10decimal_fpIT_EES5_(a1, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x224cb0
// SYMBOL: fmt::v8::detail::format_float<double>(double,int,fmt::v8::detail::float_specs,fmt::v8::detail::buffer<char> &)
// attributes: thunk
size_t __fastcall fmt::v8::detail::format_float<double>(double a1, signed int n, int a3, __int64 a4)
{
  return _ZN3fmt2v86detail12format_floatIdEEiT_iNS1_11float_specsERNS1_6bufferIcEE(a1, n, a3, a4);
}


// ======================================================================
// ADDR: 0x225220
// SYMBOL: fmt::v8::detail::locale_ref::get<std::__ndk1::locale>(void)
// attributes: thunk
int __fastcall fmt::v8::detail::locale_ref::get<std::locale>(std::locale *a1, const std::locale **a2)
{
  return _ZNK3fmt2v86detail10locale_ref3getINSt6__ndk16localeEEET_v(a1, a2);
}


// ======================================================================
// ADDR: 0x225340
// SYMBOL: fmt::v8::vformat(fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
// attributes: thunk
int __fastcall fmt::v8::vformat(int a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN3fmt2v87vformatENS0_17basic_string_viewIcEENS0_17basic_format_argsINS0_20basic_format_contextINS0_8appenderEcEEEE(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


// ======================================================================
// ADDR: 0x227340
// SYMBOL: fmt::v8::detail::format_error_code(fmt::v8::detail::buffer<char> &,int,fmt::v8::basic_string_view<char>)
// attributes: thunk
int __fastcall fmt::v8::detail::format_error_code(int a1, int a2, int a3, unsigned int a4)
{
  return _ZN3fmt2v86detail17format_error_codeERNS1_6bufferIcEEiNS0_17basic_string_viewIcEE(a1, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x227350
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)
// attributes: thunk
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  return _ZN3fmt2v86detail23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJNS0_17basic_string_viewIcEEA3_cEEEEEPKT_SC_SC_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227360
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)
// attributes: thunk
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  return _ZN3fmt2v86detail23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJA7_ciEEEEEPKT_SA_SA_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227370
// SYMBOL: fmt::v8::detail::report_error(void (*)(fmt::v8::detail::buffer<char> &,int,char const*),int,char const*)
// attributes: thunk
int __fastcall fmt::v8::detail::report_error(void (*a1)(void))
{
  return _ZN3fmt2v86detail12report_errorEPFvRNS1_6bufferIcEEiPKcEiS6_(a1);
}


// ======================================================================
// ADDR: 0x227390
// SYMBOL: fmt::v8::basic_memory_buffer<char,500u,std::__ndk1::allocator<char>>::~basic_memory_buffer()
// attributes: thunk
int __fastcall fmt::v8::basic_memory_buffer<char,500u,std::allocator<char>>::~basic_memory_buffer(int a1)
{
  return _ZN3fmt2v819basic_memory_bufferIcLj500ENSt6__ndk19allocatorIcEEED2Ev(a1);
}


// ======================================================================
// ADDR: 0x2273a0
// SYMBOL: fmt::v8::vsystem_error(int,fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
// attributes: thunk
int __fastcall fmt::v8::vsystem_error(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN3fmt2v813vsystem_errorEiNS0_17basic_string_viewIcEENS0_17basic_format_argsINS0_20basic_format_contextINS0_8appenderEcEEEE(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


// ======================================================================
// ADDR: 0x2273d0
// SYMBOL: fmt::v8::to_string<char,500u>(fmt::v8::basic_memory_buffer<char,500u,std::__ndk1::allocator<char>> const&)
// attributes: thunk
int __fastcall fmt::v8::to_string<char,500u>(_DWORD *a1, int a2)
{
  return _ZN3fmt2v89to_stringIcLj500EEENSt6__ndk112basic_stringIT_NS2_11char_traitsIS4_EENS2_9allocatorIS4_EEEERKNS0_19basic_memory_bufferIS4_XT0_ES8_EE(
           a1,
           a2);
}


// ======================================================================
// ADDR: 0x2273f0
// SYMBOL: fmt::v8::detail::write<char,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>,char const*)
// attributes: thunk
int __fastcall fmt::v8::detail::write<char,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(int a1, char *s)
{
  return _ZN3fmt2v86detail5writeIcNSt6__ndk120back_insert_iteratorINS1_6bufferIcEEEEEET0_S8_PKT_(a1, s);
}


// ======================================================================
// ADDR: 0x227410
// SYMBOL: fmt::v8::detail::copy_str_noinline<char,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(char const*,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>)
// attributes: thunk
int fmt::v8::detail::copy_str_noinline<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>()
{
  return _ZN3fmt2v86detail17copy_str_noinlineIcPKcNSt6__ndk120back_insert_iteratorINS1_6bufferIcEEEEEET1_T0_SB_SA_();
}


// ======================================================================
// ADDR: 0x227420
// SYMBOL: fmt::v8::detail::print(__sFILE *,fmt::v8::basic_string_view<char>)
// attributes: thunk
size_t __fastcall fmt::v8::detail::print(FILE *s, void *ptr, size_t a3)
{
  return _ZN3fmt2v86detail5printEP7__sFILENS0_17basic_string_viewIcEE(s, ptr, a3);
}


// ======================================================================
// ADDR: 0x227440
// SYMBOL: fmt::v8::vprint(__sFILE *,fmt::v8::basic_string_view<char>,fmt::v8::basic_format_args<fmt::v8::basic_format_context<fmt::v8::appender,char>>)
// attributes: thunk
int __fastcall fmt::v8::vprint(FILE *a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return _ZN3fmt2v86vprintEP7__sFILENS0_17basic_string_viewIcEENS0_17basic_format_argsINS0_20basic_format_contextINS0_8appenderEcEEEE(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


// ======================================================================
// ADDR: 0x227450
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int)
// attributes: thunk
int *__fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::get_cached_power(int *result, int a2)
{
  return _ZN3fmt2v86detail9dragonbox14cache_accessorIdE16get_cached_powerEi(result, a2);
}


// ======================================================================
// ADDR: 0x227460
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul(ulong long,fmt::v8::detail::uint128_fallback const&)
// attributes: thunk
bool __fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  return _ZN3fmt2v86detail9dragonbox14cache_accessorIdE11compute_mulEyRKNS1_16uint128_fallbackE(a1, a2, a3, a4, a5);
}


// ======================================================================
// ADDR: 0x227470
// SYMBOL: fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(ulong long,fmt::v8::detail::uint128_fallback const&,int)
// attributes: thunk
int __fastcall fmt::v8::detail::dragonbox::cache_accessor<double>::compute_mul_parity(
        __int64 a1,
        unsigned int *a2,
        int a3)
{
  return _ZN3fmt2v86detail9dragonbox14cache_accessorIdE18compute_mul_parityEyRKNS1_16uint128_fallbackEi(a1, a2, a3);
}


// ======================================================================
// ADDR: 0x227480
// SYMBOL: fmt::v8::detail::normalize<0,ulong long>(fmt::v8::detail::basic_fp<ulong long>)
// attributes: thunk
int __fastcall fmt::v8::detail::normalize<0,unsigned long long>(int result, __int64 a2, int a3, int a4)
{
  return _ZN3fmt2v86detail9normalizeILi0EyEENS1_8basic_fpIT0_EES5_(result, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x227490
// SYMBOL: fmt::v8::detail::gen_digits_handler::on_digit(char,ulong long,ulong long,ulong long,bool)
// attributes: thunk
int __fastcall fmt::v8::detail::gen_digits_handler::on_digit(
        fmt::v8::detail::gen_digits_handler *this,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6)
{
  return _ZN3fmt2v86detail18gen_digits_handler8on_digitEcyyyb(this, a2, a3, a4, a5, a6);
}


// ======================================================================
// ADDR: 0x2274a0
// SYMBOL: fmt::v8::detail::format_dragon(fmt::v8::detail::basic_fp<fmt::v8::detail::uint128_fallback>,uint,int,fmt::v8::detail::buffer<char> &,int &)
// attributes: thunk
int __fastcall fmt::v8::detail::format_dragon(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int *a10)
{
  return _ZN3fmt2v86detail13format_dragonENS1_8basic_fpINS1_16uint128_fallbackEEEjiRNS1_6bufferIcEERi(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}


// ======================================================================
// ADDR: 0x2274b0
// SYMBOL: fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(fmt::v8::detail::uint128_fallback)
// attributes: thunk
unsigned int __fastcall fmt::v8::detail::bigint::assign<fmt::v8::detail::uint128_fallback,0>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  return _ZN3fmt2v86detail6bigint6assignINS1_16uint128_fallbackELi0EEEvT_(a1, a2, a3, a4, a5, a6);
}


// ======================================================================
// ADDR: 0x2274c0
// SYMBOL: fmt::v8::detail::bigint::operator<<=(int)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::operator<<=(int a1, int a2)
{
  return _ZN3fmt2v86detail6bigintlSEi(a1, a2);
}


// ======================================================================
// ADDR: 0x2274d0
// SYMBOL: fmt::v8::detail::bigint::assign<ulong long,0>(ulong long)
// attributes: thunk
unsigned int __fastcall fmt::v8::detail::bigint::assign<unsigned long long,0>(int a1, int a2, int a3, int a4)
{
  return _ZN3fmt2v86detail6bigint6assignIyLi0EEEvT_(a1, a2, a3, a4);
}


// ======================================================================
// ADDR: 0x2274e0
// SYMBOL: fmt::v8::detail::bigint::assign_pow10(int)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::assign_pow10(fmt::v8::detail::bigint *this, int a2)
{
  return _ZN3fmt2v86detail6bigint12assign_pow10Ei(this, a2);
}


// ======================================================================
// ADDR: 0x2274f0
// SYMBOL: fmt::v8::detail::add_compare(fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&)
// attributes: thunk
int __fastcall fmt::v8::detail::add_compare(_DWORD *this, _DWORD *a2, _DWORD *a3, const fmt::v8::detail::bigint *a4)
{
  return _ZN3fmt2v86detail11add_compareERKNS1_6bigintES4_S4_(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227500
// SYMBOL: fmt::v8::detail::bigint::multiply(uint)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::multiply(int this, unsigned int a2)
{
  return _ZN3fmt2v86detail6bigint8multiplyEj(this, a2);
}


// ======================================================================
// ADDR: 0x227510
// SYMBOL: fmt::v8::detail::bigint::divmod_assign(fmt::v8::detail::bigint const&)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::divmod_assign(
        fmt::v8::detail::bigint *this,
        const fmt::v8::detail::bigint *a2,
        const fmt::v8::detail::bigint *a3)
{
  return _ZN3fmt2v86detail6bigint13divmod_assignERKS2_(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227520
// SYMBOL: fmt::v8::detail::compare(fmt::v8::detail::bigint const&,fmt::v8::detail::bigint const&)
// attributes: thunk
int __fastcall fmt::v8::detail::compare(_DWORD *this, _DWORD *a2, const fmt::v8::detail::bigint *a3)
{
  return _ZN3fmt2v86detail7compareERKNS1_6bigintES4_(this, a2);
}


// ======================================================================
// ADDR: 0x227530
// SYMBOL: fmt::v8::detail::bigint::assign(fmt::v8::detail::bigint const&)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::assign(int this, int a2)
{
  return _ZN3fmt2v86detail6bigint6assignERKS2_(this, a2);
}


// ======================================================================
// ADDR: 0x227540
// SYMBOL: fmt::v8::detail::bigint::multiply<fmt::v8::detail::uint128_fallback,0>(fmt::v8::detail::uint128_fallback)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::multiply<fmt::v8::detail::uint128_fallback,0>(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  return _ZN3fmt2v86detail6bigint8multiplyINS1_16uint128_fallbackELi0EEEvT_(a1, a2, a3, a4, a5);
}


// ======================================================================
// ADDR: 0x227550
// SYMBOL: fmt::v8::detail::bigint::square(void)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::square(fmt::v8::detail::bigint *this)
{
  return _ZN3fmt2v86detail6bigint6squareEv(this);
}


// ======================================================================
// ADDR: 0x227560
// SYMBOL: fmt::v8::detail::bigint::align(fmt::v8::detail::bigint const&)
// attributes: thunk
_DWORD *__fastcall fmt::v8::detail::bigint::align(_DWORD *this, const fmt::v8::detail::bigint *a2)
{
  return _ZN3fmt2v86detail6bigint5alignERKS2_(this, a2);
}


// ======================================================================
// ADDR: 0x227570
// SYMBOL: fmt::v8::detail::bigint::subtract_aligned(fmt::v8::detail::bigint const&)
// attributes: thunk
int __fastcall fmt::v8::detail::bigint::subtract_aligned(
        fmt::v8::detail::bigint *this,
        unsigned int **a2,
        const fmt::v8::detail::bigint *a3)
{
  return _ZN3fmt2v86detail6bigint16subtract_alignedERKS2_(this, a2, a3);
}


// ======================================================================
// ADDR: 0x227580
// SYMBOL: fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>::basic_memory_buffer(fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>&&)
// attributes: thunk
_DWORD *__fastcall fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::basic_memory_buffer(
        _DWORD *a1,
        int a2)
{
  return _ZN3fmt2v819basic_memory_bufferIjLj32ENSt6__ndk19allocatorIjEEEC2EOS5_(a1);
}


// ======================================================================
// ADDR: 0x227590
// SYMBOL: fmt::v8::detail::bigint::remove_leading_zeros(void)
// attributes: thunk
unsigned int __fastcall fmt::v8::detail::bigint::remove_leading_zeros(fmt::v8::detail::bigint *this)
{
  return _ZN3fmt2v86detail6bigint20remove_leading_zerosEv(this);
}


// ======================================================================
// ADDR: 0x2275a0
// SYMBOL: fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>::move(fmt::v8::basic_memory_buffer<uint,32u,std::__ndk1::allocator<uint>>&)
// attributes: thunk
unsigned int __fastcall fmt::v8::basic_memory_buffer<unsigned int,32u,std::allocator<unsigned int>>::move(
        int a1,
        _DWORD *a2)
{
  return _ZN3fmt2v819basic_memory_bufferIjLj32ENSt6__ndk19allocatorIjEEE4moveERS5_(a1, a2);
}


// ======================================================================
// ADDR: 0x2275b0
// SYMBOL: fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(void)
// attributes: thunk
int __fastcall fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::next_arg_id(char *a1)
{
  return _ZN3fmt2v86detail21compile_parse_contextIcNS1_13error_handlerEE11next_arg_idEv(a1);
}


// ======================================================================
// ADDR: 0x2275c0
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,fmt::v8::basic_string_view<char>,char [3]> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJNS0_17basic_string_viewIcEEA3_cEEEEEPKT_SD_SD_OT0_E10id_adapterEESD_SD_SD_SF_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x2275d0
// SYMBOL: fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(int)
// attributes: thunk
int __fastcall fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>::check_arg_id(
        int result,
        const char *a2)
{
  return _ZN3fmt2v86detail21compile_parse_contextIcNS1_13error_handlerEE12check_arg_idEi(result, a2);
}


// ======================================================================
// ADDR: 0x227600
// SYMBOL: fmt::v8::detail::parse_align<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
// attributes: thunk
const char *__fastcall fmt::v8::detail::parse_align<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        const char *a1,
        int a2,
        int *a3)
{
  return _ZN3fmt2v86detail11parse_alignIcRNS1_13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEEEEEPKT_SD_SD_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227610
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_sign(fmt::v8::sign::type)
// attributes: thunk
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_sign(
        int *a1,
        const char *a2)
{
  return _ZN3fmt2v86detail13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEE7on_signENS0_4sign4typeE(
           a1,
           a2);
}


// ======================================================================
// ADDR: 0x227620
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_zero(void)
// attributes: thunk
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_zero(
        _DWORD *a1)
{
  return _ZN3fmt2v86detail13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEE7on_zeroEv(a1);
}


// ======================================================================
// ADDR: 0x227630
// SYMBOL: fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        unsigned __int8 *result,
        unsigned __int8 *a2,
        int a3)
{
  return _ZN3fmt2v86detail11parse_widthIcRNS1_13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEEEEEPKT_SD_SD_OT0_(
           result,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227640
// SYMBOL: fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(
        int a1,
        unsigned __int8 *a2,
        int a3)
{
  return _ZN3fmt2v86detail15parse_precisionIcRNS1_13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEEEEEPKT_SD_SD_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227650
// SYMBOL: fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_align(fmt::v8::align::type)
// attributes: thunk
int __fastcall fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>>::on_align(
        int *a1,
        int a2)
{
  return _ZN3fmt2v86detail13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEE8on_alignENS0_5align4typeE(
           a1,
           a2);
}


// ======================================================================
// ADDR: 0x227660
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter &>(char const*,char const*,fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_width<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::width_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_11parse_widthIcRNS1_13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEEEEEPKT_SE_SE_OT0_E13width_adapterEESE_SE_SE_SG_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227670
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter &>(char const*,char const*,fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_precision<char,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &>(char const*,char const*,fmt::v8::detail::specs_checker<fmt::v8::detail::dynamic_specs_handler<fmt::v8::detail::compile_parse_context<char,fmt::v8::detail::error_handler>>> &)::precision_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        int *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_15parse_precisionIcRNS1_13specs_checkerINS1_21dynamic_specs_handlerINS1_21compile_parse_contextIcNS1_13error_handlerEEEEEEEEEPKT_SE_SE_OT0_E17precision_adapterEESE_SE_SE_SG_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x227680
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,char [7],int> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJA7_ciEEEEEPKT_SB_SB_OT0_E10id_adapterEESB_SB_SB_SD_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x2276a0
// SYMBOL: fmt::v8::detail::copy_str<char,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>>(char const*,char const*,std::__ndk1::back_insert_iterator<fmt::v8::detail::buffer<char>>)
// attributes: thunk
int __fastcall fmt::v8::detail::copy_str<char,char const*,std::back_insert_iterator<fmt::v8::detail::buffer<char>>>(
        char *a1,
        char *a2,
        int a3)
{
  return _ZN3fmt2v86detail8copy_strIcPKcNSt6__ndk120back_insert_iteratorINS1_6bufferIcEEEEEET1_T0_SB_SA_(a1, a2, a3);
}


// ======================================================================
// ADDR: 0x2276b0
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)
// attributes: thunk
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  return _ZN3fmt2v86detail23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJjEEEEEPKT_S9_S9_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x2276c0
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uint> &)::id_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned int> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJjEEEEEPKT_SA_SA_OT0_E10id_adapterEESA_SA_SA_SC_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x2276e0
// SYMBOL: fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)
// attributes: thunk
_BYTE *__fastcall fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(
        int a1,
        _BYTE *a2,
        char *a3)
{
  return _ZN3fmt2v86detail23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJhEEEEEPKT_S9_S9_OT0_(
           a1,
           a2,
           a3);
}


// ======================================================================
// ADDR: 0x2276f0
// SYMBOL: fmt::v8::detail::do_parse_arg_id<char,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)::id_adapter &>(char const*,char const*,fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,uchar> &)::id_adapter)
// attributes: thunk
unsigned __int8 *__fastcall fmt::v8::detail::do_parse_arg_id<char,char const* fmt::v8::detail::parse_replacement_field<char,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &>(char const*,char const*,fmt::v8::detail::format_string_checker<char,fmt::v8::detail::error_handler,unsigned char> &)::id_adapter &>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        _DWORD *a3)
{
  return _ZN3fmt2v86detail15do_parse_arg_idIcRZNS1_23parse_replacement_fieldIcRNS1_21format_string_checkerIcNS1_13error_handlerEJhEEEEEPKT_SA_SA_OT0_E10id_adapterEESA_SA_SA_SC_(
           a1,
           a2,
           a3);
}


// ======================================================================
