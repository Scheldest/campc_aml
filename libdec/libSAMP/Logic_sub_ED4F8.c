// ADDR: 0xed844
// SYMBOL: sub_ED844
int __fastcall sub_ED844(int a1)
{
  int v2; // r0
  int v3; // r3
  size_t v4; // r0
  int v5; // r2
  int v6; // r3
  size_t v7; // r6
  const char *v8; // r8
  unsigned int v9; // r2
  int v10; // r4
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r2
  const char *v17; // r1
  char *v18; // r4
  int v19; // r0
  double v20; // d16
  int v21; // r0
  int v22; // r4
  char v23; // r5
  char v24; // r6
  __int16 v25; // r1
  int v26; // r2
  unsigned int v27; // r4
  std::__fs::filesystem *v28; // r0
  std::error_code *v29; // r2
  unsigned int v30; // r4
  unsigned int v31; // r1
  unsigned int v32; // r6
  _DWORD *v33; // r0
  std::error_code *v35; // r2
  double v36; // d16
  double v37; // d16
  std::error_code *v38; // r2
  int v39; // r0
  char *v40; // r1
  std::ios_base *v41; // r5
  __int64 v42; // r0
  int v43; // r0
  int v44; // r1
  _BYTE v45[8]; // [sp+Ch] [bp-1A4h] BYREF
  void *v46; // [sp+14h] [bp-19Ch]
  double v47; // [sp+18h] [bp-198h] BYREF
  void *v48; // [sp+20h] [bp-190h]
  char *s; // [sp+24h] [bp-18Ch] BYREF
  int v50; // [sp+28h] [bp-188h] BYREF
  void *v51[22]; // [sp+2Ch] [bp-184h] BYREF
  _UNKNOWN **v52; // [sp+84h] [bp-12Ch] BYREF
  _UNKNOWN **v53; // [sp+88h] [bp-128h] BYREF
  double v54; // [sp+D8h] [bp-D8h] BYREF
  void *v55; // [sp+E0h] [bp-D0h]
  _UNKNOWN **v56; // [sp+138h] [bp-78h]
  double v57; // [sp+188h] [bp-28h] BYREF
  void *v58; // [sp+190h] [bp-20h]

  v2 = (unsigned __int8)byte_23DEC4;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_23DEC4) )
  {
    dword_23DEB8 = 0;
    unk_23DEBC = 0;
    dword_23DEC0 = 0;
    _cxa_atexit((void (*)(void *))std::string::~string, &dword_23DEB8, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_23DEC4);
  }
  v3 = unk_23DEBC;
  if ( !((unsigned __int8)dword_23DEB8 << 31) )
    v3 = (unsigned __int8)dword_23DEB8 >> 1;
  if ( !v3 )
  {
    dladdr(sub_ED844, &s);
    if ( !s || !*s )
    {
      v7 = 16;
      v8 = "com.arizona.game";
      goto LABEL_38;
    }
    LODWORD(v54) = s;
    v4 = strlen(s);
    HIDWORD(v54) = v4;
    if ( v4 )
    {
      v5 = v4;
      while ( v5 )
      {
        v6 = (unsigned __int8)s[--v5];
        if ( v6 == 47 )
          goto LABEL_14;
      }
    }
    v5 = -1;
LABEL_14:
    v9 = v5 + 1;
    LODWORD(v57) = s;
    if ( v4 < v9 )
      v9 = v4;
    HIDWORD(v57) = v9;
    if ( sub_EDEA0((int)&v57, "/data/app") )
    {
      v10 = -1;
      v11 = sub_EDF1C((int)&v54, "/lib/");
      v12 = LODWORD(v54);
      if ( HIDWORD(v54) < v11 )
        v11 = HIDWORD(v54);
      if ( !v11 )
        goto LABEL_32;
      v10 = v11;
      while ( v10 )
      {
        v13 = *(unsigned __int8 *)(LODWORD(v54) - 1 + v10--);
        if ( v13 == 47 )
          goto LABEL_32;
      }
    }
    else
    {
      v10 = -1;
      v14 = sub_EDF1C((int)&v54, "==");
      v12 = LODWORD(v54);
      v11 = v14 - 23;
      if ( HIDWORD(v54) < v11 )
        v11 = HIDWORD(v54);
      if ( !v11 )
        goto LABEL_32;
      v10 = v11;
      while ( v10 )
      {
        v15 = *(unsigned __int8 *)(LODWORD(v54) - 1 + v10--);
        if ( v15 == 47 )
          goto LABEL_32;
      }
    }
    v10 = -1;
LABEL_32:
    v16 = v10 + 1;
    if ( v11 < v10 + 1 )
      sub_EE13C("string_view::substr", v12);
    v7 = v11 - v16;
    v17 = (const char *)(v12 + v16);
    if ( v11 - v16 >= 0xFFFFFFF0 )
      std::__basic_string_common<true>::__throw_length_error(&v57);
    if ( v7 < 0xB )
    {
      v18 = (char *)&v57 + 1;
      LOBYTE(v57) = 2 * v7;
      if ( !v7 )
      {
        v7 = 0;
LABEL_40:
        v18[v7] = 0;
        v19 = std::string::insert((int)&v57, 0, "/sdcard/Android/data/");
        v20 = *(double *)v19;
        v55 = *(void **)(v19 + 8);
        v54 = v20;
        *(_DWORD *)v19 = 0;
        *(_DWORD *)(v19 + 4) = 0;
        *(_DWORD *)(v19 + 8) = 0;
        v21 = std::string::append((int)&v54, "/files/logcat/client.log");
        v22 = *(_DWORD *)(v21 + 8);
        v23 = *(_BYTE *)v21;
        v24 = *(_BYTE *)(v21 + 1);
        v25 = *(_WORD *)(v21 + 6);
        v26 = *(_DWORD *)(v21 + 2);
        *(_DWORD *)v21 = 0;
        *(_DWORD *)(v21 + 4) = 0;
        *(_DWORD *)(v21 + 8) = 0;
        LODWORD(v47) = v26;
        WORD2(v47) = v25;
        if ( (unsigned __int8)dword_23DEB8 << 31 )
          operator delete((void *)dword_23DEC0);
        BYTE1(dword_23DEB8) = v24;
        LOBYTE(dword_23DEB8) = v23;
        *(int *)((char *)&dword_23DEB8 + 2) = LODWORD(v47);
        word_23DEBE = WORD2(v47);
        dword_23DEC0 = v22;
        if ( LOBYTE(v54) << 31 )
          operator delete(v55);
        if ( LOBYTE(v57) << 31 )
          operator delete(v58);
        goto LABEL_46;
      }
LABEL_39:
      j_memcpy(v18, v17, v7);
      goto LABEL_40;
    }
    v8 = v17;
LABEL_38:
    v18 = (char *)operator new((v7 + 16) & 0xFFFFFFF0);
    v17 = v8;
    HIDWORD(v57) = v7;
    v58 = v18;
    LODWORD(v57) = ((v7 + 16) & 0xFFFFFFF0) + 1;
    goto LABEL_39;
  }
LABEL_46:
  std::__fs::filesystem::path::path<std::string,void>((int)&s);
  std::__fs::filesystem::__status((std::__fs::filesystem *)&v54, (const std::__fs::filesystem::path *)&s, 0);
  v27 = LOBYTE(v54) - 1;
  if ( (unsigned __int8)s << 31 )
    operator delete(v51[0]);
  if ( v27 >= 0xFE )
    return sub_EDFE8(a1, &dword_23DEB8, 16);
  v28 = (std::__fs::filesystem *)std::__fs::filesystem::path::path<std::string,void>((int)&s);
  v30 = std::__fs::filesystem::__file_size(v28, 0, v29);
  v32 = v31;
  if ( (unsigned __int8)s << 31 )
    operator delete(v51[0]);
  if ( __PAIR64__(v32, v30) >= 0x100000 )
  {
    sub_EE094((int)&s, (int)&dword_23DEB8, "_reduce");
    sub_EDFE8(&v54, &s, 4);
    if ( (unsigned __int8)s << 31 )
      operator delete(v51[0]);
    sub_E45B4(&s, (unsigned __int8 *)&dword_23DEB8);
    std::istream::seekg(&s, (__PAIR64__(v32, v30) - 4096) >> 32, 0, 0, v30 - 4096, (__PAIR64__(v32, v30) - 4096) >> 32);
    while ( 1 )
    {
      v33 = (_DWORD *)sub_EE274(&s, &v57);
      if ( (*((_BYTE *)v33 + *(_DWORD *)(*v33 - 12) + 16) & 5) != 0 )
        break;
      std::ostream::write(&v54, &v57, 1);
    }
    if ( !sub_E5108(v51) )
      std::ios_base::clear(
        (std::ios_base *)((char *)&s + *((_DWORD *)s - 3)),
        *(unsigned int *)((char *)&s + *((_DWORD *)s - 3) + 16) | 4);
    if ( !sub_E5108((_DWORD *)&v54 + 1) )
      std::ios_base::clear(
        (std::ios_base *)((char *)&v54 + *(_DWORD *)(LODWORD(v54) - 12)),
        *(_DWORD *)((char *)&v54 + *(_DWORD *)(LODWORD(v54) - 12) + 16) | 4);
    std::__fs::filesystem::path::path<std::string,void>((int)&v57);
    std::__fs::filesystem::__remove((std::__fs::filesystem *)&v57, 0, v35);
    if ( LOBYTE(v57) << 31 )
      operator delete(v58);
    sub_EE094((int)&v47, (int)&dword_23DEB8, "_reduce");
    v36 = v47;
    v47 = 0.0;
    v58 = v48;
    v48 = 0;
    v57 = v36;
    std::__fs::filesystem::path::path<std::string,void>((int)v45);
    std::__fs::filesystem::__copy(&v57, v45, 0, 0);
    if ( v45[0] << 31 )
      operator delete(v46);
    if ( LOBYTE(v57) << 31 )
      operator delete(v58);
    if ( LOBYTE(v47) << 31 )
      operator delete(v48);
    sub_EE094((int)&v47, (int)&dword_23DEB8, "_reduce");
    v37 = v47;
    v47 = 0.0;
    v58 = v48;
    v48 = 0;
    v57 = v37;
    std::__fs::filesystem::__remove((std::__fs::filesystem *)&v57, 0, v38);
    if ( LOBYTE(v57) << 31 )
      operator delete(v58);
    if ( LOBYTE(v47) << 31 )
      operator delete(v48);
    s = (char *)&off_22A760;
    v53 = &off_22A774;
    sub_E50B0((int)v51);
    std::istream::~istream(&s, off_22A780);
    std::ios::~ios(&v53);
    LODWORD(v54) = &off_22A924;
    v56 = &off_22A938;
    sub_E50B0((int)&v54 + 4);
    v39 = std::ostream::~ostream(&v54, off_22A944);
    std::ios::~ios(v39 + 96);
  }
  sub_EDFE8(&s, &dword_23DEB8, 1);
  v40 = s;
  *(_DWORD *)a1 = &off_22A95C;
  *(_DWORD *)(a1 + 96) = &off_22A970;
  v41 = (std::ios_base *)((char *)&s + *((_DWORD *)v40 - 3));
  std::ios_base::move((std::ios_base *)(a1 + 96), v41);
  v42 = *((_QWORD *)v41 + 9);
  *((_DWORD *)v41 + 18) = 0;
  *(_QWORD *)(a1 + 168) = v42;
  *(_DWORD *)(a1 + 96) = &off_22A938;
  *(_DWORD *)a1 = &off_22A924;
  v43 = sub_EE308(a1 + 4, &v50);
  v44 = *(_DWORD *)(*(_DWORD *)a1 - 12);
  v52 = &off_22A938;
  s = (char *)&off_22A924;
  *(_DWORD *)(v44 + a1 + 24) = v43;
  sub_E50B0((int)&v50);
  std::ostream::~ostream(&s, off_22A944);
  return std::ios::~ios(&v52);
}


// ======================================================================
// ADDR: 0xee410
// SYMBOL: sub_EE410
int __fastcall sub_EE410(int a1, int a2)
{
  int v4; // r2
  int v5; // r10
  int v6; // r3
  int v7; // r1
  bool v8; // zf
  __int64 v9; // kr00_8
  int v10; // r9
  __int64 v11; // kr08_8
  int v12; // r8
  int v13; // r12
  int v14; // lr
  int v15; // r3
  int v16; // r3
  __int64 v17; // kr10_8
  int v18; // r2
  int v19; // r0
  int v20; // r6
  int v21; // r2
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r6
  int v26; // r6
  __int64 v27; // kr18_8
  __int64 v28; // kr20_8
  int result; // r0

  std::streambuf::swap();
  v4 = *(_DWORD *)(a2 + 32);
  v5 = a2 + 44;
  v6 = *(_DWORD *)(a1 + 32);
  v7 = a1 + 44;
  v8 = v6 == a1 + 44;
  if ( v6 != a1 + 44 )
    v8 = v4 == v5;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a2 + 36);
    v10 = HIDWORD(v9) - v4;
    v11 = *(_QWORD *)(a1 + 36);
    v12 = v9 - v4;
    v13 = HIDWORD(v11) - v6;
    v14 = v11 - v6;
    if ( v6 != v7 || v4 == v5 )
    {
      if ( v6 != v7 && v4 == v5 )
      {
        *(_DWORD *)(a2 + 32) = v6;
        *(_DWORD *)(a1 + 32) = v7;
        v4 = *(_DWORD *)(a2 + 32);
        v6 = a1 + 44;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = v4;
      v4 = a2 + 44;
      *(_DWORD *)(a2 + 32) = v5;
      v6 = *(_DWORD *)(a1 + 32);
    }
    *(_DWORD *)(a1 + 36) = v6 + v12;
    *(_DWORD *)(a1 + 40) = v6 + v10;
    *(_DWORD *)(a2 + 36) = v4 + v14;
    *(_DWORD *)(a2 + 40) = v4 + v13;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = v4;
    *(_DWORD *)(a2 + 32) = v6;
    v15 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a2 + 36) = v15;
    v16 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 40) = v16;
  }
  v17 = *(_QWORD *)(a1 + 52);
  *(_QWORD *)(a1 + 52) = *(_QWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 56) = HIDWORD(v17);
  v18 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a2 + 52) = v17;
  *(_DWORD *)(a2 + 64) = v18;
  v19 = *(_DWORD *)(a1 + 60);
  v20 = *(_DWORD *)(a2 + 68);
  v21 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 68) = v20;
  *(_DWORD *)(a2 + 60) = v19;
  *(_DWORD *)(a2 + 68) = v21;
  v22 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a2 + 72) = v22;
  v23 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a2 + 76) = v23;
  LOBYTE(v23) = *(_BYTE *)(a1 + 88);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  *(_BYTE *)(a2 + 88) = v23;
  LOBYTE(v23) = *(_BYTE *)(a1 + 89);
  *(_BYTE *)(a1 + 89) = *(_BYTE *)(a2 + 89);
  *(_BYTE *)(a2 + 89) = v23;
  LOBYTE(v23) = *(_BYTE *)(a1 + 90);
  *(_BYTE *)(a1 + 90) = *(_BYTE *)(a2 + 90);
  *(_BYTE *)(a2 + 90) = v23;
  v24 = *(_DWORD *)(a1 + 8);
  v25 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 80) = v25;
  v26 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a2 + 84) = v26;
  if ( v24 == v5 )
  {
    v28 = *(_QWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 16) = HIDWORD(v28) - v5 + v7;
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 12) = v28 - v5 + v7;
  }
  else if ( *(_DWORD *)(a1 + 20) == v5 )
  {
    v27 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 28) = HIDWORD(v27) - v5 + v7;
    *(_DWORD *)(a1 + 20) = v7;
    *(_DWORD *)(a1 + 24) = v27 - v5 + v7;
  }
  if ( *(_DWORD *)(a2 + 8) == v7 )
  {
    result = *(_DWORD *)(a2 + 12) - v7 + v5;
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(a2 + 16) - v7 + v5;
    *(_DWORD *)(a2 + 8) = v5;
    *(_DWORD *)(a2 + 12) = result;
  }
  else
  {
    result = *(_DWORD *)(a2 + 20);
    if ( result == v7 )
    {
      result = *(_DWORD *)(a2 + 24) - v7 + v5;
      *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 28) - v7 + v5;
      *(_DWORD *)(a2 + 20) = v5;
      *(_DWORD *)(a2 + 24) = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xee584
// SYMBOL: sub_EE584
void sub_EE584(int a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  unsigned int v9; // r4
  char *v10; // r5
  int v11; // r6
  _UNKNOWN **v12; // [sp+18h] [bp-220h] BYREF
  void *v13; // [sp+1Ch] [bp-21Ch]
  unsigned int v14; // [sp+20h] [bp-218h]
  int v15; // [sp+24h] [bp-214h]
  _BYTE v16[528]; // [sp+28h] [bp-210h] BYREF

  v15 = 500;
  v13 = v16;
  v14 = 0;
  v12 = &off_22A5C8;
  sub_DCAC4((int)&v12, a2, a3, (int)&off_22A5C8, a5, a6, a7, a8, 0);
  v10 = (char *)v13;
  v9 = v14;
  do
  {
    v11 = 0x7FFFFFFF;
    if ( v9 < 0x7FFFFFFF )
      v11 = v9;
    std::ostream::write(a1, v10, v11);
    v9 -= v11;
    v10 += v11;
  }
  while ( v9 );
  if ( v13 != v16 )
    operator delete(v13);
}


// ======================================================================
// ADDR: 0x2242bc
// SYMBOL: sub_2242BC
int __fastcall sub_2242BC(int prio, const char *tag, const char *text)
{
  return _android_log_write(prio, tag, text);
}


// ======================================================================
