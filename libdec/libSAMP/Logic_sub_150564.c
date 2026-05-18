// ADDR: 0x150f3c
// SYMBOL: sub_150F3C
int sub_150F3C(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 2047, a3, va);
}


// ======================================================================
// ADDR: 0x159b70
// SYMBOL: sub_159B70
int __fastcall sub_159B70(int a1, char *s)
{
  int v4; // r0
  const char *v5; // r0
  int result; // r0
  _DWORD *v7; // r4
  char *v8; // r1
  _DWORD *v9; // r0
  void *v10; // r1
  void *v11; // r2
  _DWORD *v12; // r0
  size_t v13; // r0
  _DWORD *v14; // r4
  int v15; // r0
  int v16; // r6
  FILE *v17; // r4
  const char *v18; // r0
  size_t v19; // r2
  int v20; // r0
  const char *v21; // r0
  FILE *v22; // r4
  void *v23[2]; // [sp+20h] [bp-B8h] BYREF
  void *v24; // [sp+28h] [bp-B0h]
  _DWORD v25[2]; // [sp+2Ch] [bp-ACh] BYREF
  void *v26; // [sp+34h] [bp-A4h] BYREF
  _DWORD v27[8]; // [sp+38h] [bp-A0h] BYREF
  __int64 v28; // [sp+58h] [bp-80h]
  __int64 v29; // [sp+60h] [bp-78h]
  int v30; // [sp+68h] [bp-70h]
  _DWORD v31[27]; // [sp+6Ch] [bp-6Ch] BYREF

  v4 = (unsigned __int8)byte_381A2C;
  __dmb(0xBu);
  if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_381A2C) )
  {
    sub_15A228(v25);
    v21 = (const char *)v26;
    if ( !(LOBYTE(v25[0]) << 31) )
      v21 = (char *)v25 + 1;
    v22 = fopen(v21, (const char *)aW7);
    if ( LOBYTE(v25[0]) << 31 )
      operator delete(v26);
    dword_381A28 = (int)v22;
    j___cxa_guard_release((__guard *)&byte_381A2C);
  }
  if ( !dword_381A28 )
  {
    sub_15A228(v25);
    v5 = (const char *)v26;
    if ( !(LOBYTE(v25[0]) << 31) )
      v5 = (char *)v25 + 1;
    dword_381A28 = (int)fopen(v5, (const char *)aW7);
    if ( LOBYTE(v25[0]) << 31 )
      operator delete(v26);
  }
  if ( a1 == 4 )
  {
LABEL_26:
    v19 = strlen(s);
    v20 = 4;
    return sub_ED4F8(v20, s, v19);
  }
  else
  {
    v25[1] = 0;
    v25[0] = &off_22A6B8;
    v31[0] = &off_22A6CC;
    v26 = &off_22A62C;
    std::ios_base::init((std::ios_base *)v31, v27);
    v31[18] = 0;
    v31[19] = -1;
    v31[0] = &off_22A640;
    v25[0] = &off_22A618;
    v26 = &off_22A62C;
    std::streambuf::basic_streambuf(v27);
    v28 = 0LL;
    v29 = 0LL;
    v30 = 24;
    v27[0] = &off_22A710;
    if ( a1 )
    {
      v7 = sub_FB2B4(&v26, (int)&a5[2], 1);
      if ( (unsigned int)(a1 - 1) > 2 )
        v8 = &byte_8F794;
      else
        v8 = off_22F79C[a1 - 1];
      v9 = sub_DC6DC(v23, v8);
      v11 = v23[1];
      v10 = v24;
      if ( ((int)v23[0] & 1) == 0 )
      {
        v10 = (char *)v9 + 1;
        v11 = (void *)(LOBYTE(v23[0]) >> 1);
      }
      v12 = sub_FB2B4(v7, (int)v10, (int)v11);
      sub_FB2B4(v12, (int)"] ", 2);
      if ( LOBYTE(v23[0]) << 31 )
        operator delete(v24);
    }
    v13 = strlen(s);
    v14 = sub_FB2B4(&v26, (int)s, v13);
    std::ios_base::getloc((std::ios_base *)v23);
    v15 = std::locale::use_facet((std::locale *)v23, (std::locale::id *)&std::ctype<char>::id);
    v16 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 28))(v15, 10);
    std::locale::~locale((std::locale *)v23);
    std::ostream::put(v14, v16);
    std::ostream::flush(v14);
    v17 = (FILE *)dword_381A28;
    if ( dword_381A28 )
    {
      sub_116AEC(v23, v27);
      v18 = (const char *)v24;
      if ( !(LOBYTE(v23[0]) << 31) )
        v18 = (char *)v23 + 1;
      fputs(v18, v17);
      if ( LOBYTE(v23[0]) << 31 )
        operator delete(v24);
      fflush((FILE *)dword_381A28);
      v31[0] = &off_22A640;
      v25[0] = &off_22A618;
      v26 = &off_22A62C;
      v27[0] = &off_22A710;
      if ( (unsigned __int8)v28 << 31 )
        operator delete((void *)v29);
      std::streambuf::~streambuf(v27);
      std::iostream::~basic_iostream(v25, off_22A64C);
      result = std::ios::~ios(v31);
      switch ( a1 )
      {
        case 0:
          v19 = strlen(s);
          v20 = 0;
          return sub_ED4F8(v20, s, v19);
        case 1:
          v19 = strlen(s);
          v20 = 1;
          return sub_ED4F8(v20, s, v19);
        case 2:
          v19 = strlen(s);
          v20 = 2;
          return sub_ED4F8(v20, s, v19);
        case 3:
          v19 = strlen(s);
          v20 = 3;
          return sub_ED4F8(v20, s, v19);
        case 4:
          goto LABEL_26;
        default:
          return result;
      }
    }
    else
    {
      v31[0] = &off_22A640;
      v25[0] = &off_22A618;
      v27[0] = &off_22A710;
      v26 = &off_22A62C;
      if ( (unsigned __int8)v28 << 31 )
        operator delete((void *)v29);
      std::streambuf::~streambuf(v27);
      std::iostream::~basic_iostream(v25, off_22A64C);
      return std::ios::~ios(v31);
    }
  }
}


// ======================================================================
