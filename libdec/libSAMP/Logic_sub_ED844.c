// ADDR: 0xedea0
// SYMBOL: sub_EDEA0
unsigned int __fastcall sub_EDEA0(__int64 *a1, char *s, unsigned int a3)
{
  __int64 v3; // kr00_8
  size_t v6; // r0
  signed int v7; // r5
  const void *v8; // r0
  int v9; // r11
  int v10; // r1
  int v12; // r8
  int v13; // r1
  char *v14; // r0
  char *v15; // r6

  v3 = *a1;
  v6 = strlen(s);
  if ( HIDWORD(v3) < a3 )
    return -1;
  v7 = v6;
  if ( v6 )
  {
    v8 = (const void *)(v3 + a3);
    v9 = v3 + HIDWORD(v3);
    v10 = HIDWORD(v3) - a3;
    if ( (int)(HIDWORD(v3) - a3) >= v7 )
    {
      v12 = (unsigned __int8)*s;
      do
      {
        v13 = v10 - v7;
        if ( v13 == -1 )
          break;
        v14 = (char *)memchr(v8, v12, v13 + 1);
        if ( !v14 )
          break;
        v15 = v14;
        if ( !memcmp(v14, s, v7) )
          break;
        v8 = v15 + 1;
        v10 = v9 - (_DWORD)(v15 + 1);
      }
      while ( v10 >= v7 );
    }
    a3 = HIDWORD(v3) - v3;
    if ( HIDWORD(v3) == v9 )
      return -1;
  }
  return a3;
}


// ======================================================================
// ADDR: 0xedf1c
// SYMBOL: sub_EDF1C
int __fastcall sub_EDF1C(int *a1, char *s, unsigned int a3)
{
  signed int v3; // r6
  int v4; // r8
  unsigned int v5; // r5
  size_t v7; // r0
  size_t v8; // r12
  char *v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // t1
  int v13; // r6
  int v14; // r4
  int v15; // r5
  size_t v16; // r1
  size_t v17; // r2
  bool v18; // zf
  int v19; // r1

  v3 = a1[1];
  v4 = *a1;
  v5 = a3;
  if ( v3 < a3 )
    v5 = a1[1];
  v7 = strlen(s);
  if ( v3 - v5 > v7 )
    v3 = v5 + v7;
  v8 = v4 + v3;
  if ( v7 && v3 >= (int)v7 )
  {
    v9 = &s[v7];
    v10 = v4 + v3;
LABEL_8:
    while ( v7 + v4 - 1 != v10 )
    {
      v11 = v10;
      v12 = *(unsigned __int8 *)--v10;
      if ( v12 == (unsigned __int8)*(v9 - 1) )
      {
        v13 = -2;
        while ( v7 + v13 != -1 )
        {
          v14 = (unsigned __int8)v9[v13];
          v15 = *(unsigned __int8 *)(v11 + v13--);
          if ( v15 != v14 )
            goto LABEL_8;
        }
        v16 = v10 + 1 - v7;
        goto LABEL_16;
      }
    }
  }
  v16 = v8;
LABEL_16:
  v17 = v16 - v4;
  v18 = v16 == v8;
  v19 = v16 - v4;
  if ( v18 )
    v19 = -1;
  if ( !v7 )
    return v17;
  return v19;
}


// ======================================================================
// ADDR: 0xedfe8
// SYMBOL: sub_EDFE8
_DWORD *__fastcall sub_EDFE8(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v6; // r6
  char *v7; // r1

  *a1 = &off_22A95C;
  v6 = (int)(a1 + 1);
  a1[24] = &off_22A970;
  std::ios_base::init((std::ios_base *)(a1 + 24), a1 + 1);
  a1[42] = 0;
  a1[43] = -1;
  a1[24] = &off_22A938;
  *a1 = &off_22A924;
  sub_E6108(v6);
  v7 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v7 = (char *)(a2 + 1);
  if ( !sub_E61BC(v6, v7, a3 | 0x10) )
    std::ios_base::clear(
      (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | 4);
  return a1;
}


// ======================================================================
// ADDR: 0xee094
// SYMBOL: sub_EE094
int __fastcall sub_EE094(int *a1, unsigned __int8 *a2, char *s)
{
  char *v4; // r11
  size_t v6; // r6
  unsigned int v7; // r5
  int v8; // r3
  size_t v9; // r9
  const void *v10; // r10
  unsigned int v11; // r0
  void *v12; // r4
  char *v13; // r5
  unsigned int v14; // r11
  int v15; // r0

  *a1 = 0;
  a1[1] = 0;
  v4 = s;
  a1[2] = 0;
  v6 = *((_DWORD *)a2 + 1);
  v7 = *a2;
  v9 = strlen(s);
  v10 = (const void *)*((_DWORD *)a2 + 2);
  if ( (v7 & 1) == 0 )
  {
    v10 = a2 + 1;
    v6 = v7 >> 1;
  }
  v11 = v6 + v9;
  if ( v6 + v9 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  if ( v11 > 0xA )
  {
    v13 = v4;
    v14 = (v11 + 16) & 0xFFFFFFF0;
    v12 = (void *)operator new(v14);
    v15 = v14 | 1;
    v4 = v13;
    *a1 = v15;
    a1[1] = v6;
    a1[2] = (int)v12;
  }
  else
  {
    *(_BYTE *)a1 = 2 * v6;
    v12 = (char *)a1 + 1;
  }
  if ( v6 )
    j_memcpy(v12, v10, v6);
  *((_BYTE *)v12 + v6) = 0;
  return std::string::append(a1, v4, v9, v8);
}


// ======================================================================
// ADDR: 0xee13c
// SYMBOL: sub_EE13C
void __fastcall __noreturn sub_EE13C(int a1)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(8u);
  sub_EE174(exception, a1);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::out_of_range,
    (void (*)(void *))std::invalid_argument::~invalid_argument);
}


// ======================================================================
// ADDR: 0xee274
// SYMBOL: sub_EE274
_DWORD *__fastcall sub_EE274(_DWORD *a1, _BYTE *a2)
{
  int v4; // r0
  __int64 v5; // kr00_8
  int v6; // r1
  _BYTE v8[12]; // [sp+4h] [bp-Ch] BYREF

  std::istream::sentry::sentry(v8, a1, 0);
  if ( v8[0] )
  {
    v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 24);
    v5 = *(_QWORD *)(v4 + 12);
    if ( (_DWORD)v5 == HIDWORD(v5) )
    {
      v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 40))(v4);
      if ( v4 == -1 )
      {
        v6 = 6;
        goto LABEL_6;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 12) = v5 + 1;
      LOBYTE(v4) = *(_BYTE *)v5;
    }
    *a2 = v4;
    v6 = 0;
LABEL_6:
    std::ios_base::clear(
      (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v6 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16));
  }
  return a1;
}


// ======================================================================
// ADDR: 0xee308
// SYMBOL: sub_EE308
int __fastcall sub_EE308(int a1, int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r5
  __int64 v8; // kr10_8
  __int64 v9; // kr18_8
  int v10; // r2
  char v11; // lr
  __int16 v12; // r6
  int v13; // r6
  int v14; // lr
  int v15; // r2
  int v16; // r6
  int v17; // r1
  int v18; // r2

  result = std::streambuf::basic_streambuf();
  v4 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)result = &off_22A7C8;
  if ( v4 == a2 + 44 )
  {
    v4 = result + 44;
    *(_DWORD *)(result + 32) = result + 44;
    v7 = *(_DWORD *)(a2 + 32);
    v5 = *(_DWORD *)(a2 + 40) - v7 + result + 44;
    v6 = *(_DWORD *)(a2 + 36) - v7 + result + 44;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 40);
    v6 = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(result + 32) = v4;
  }
  *(_DWORD *)(result + 36) = v6;
  *(_DWORD *)(result + 40) = v5;
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 64);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(result + 56) = v8;
  *(_QWORD *)(result + 64) = v9;
  *(_DWORD *)(result + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a2 + 76);
  v10 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(result + 80) = *(_DWORD *)(a2 + 80);
  v11 = *(_BYTE *)(a2 + 88);
  v12 = *(_WORD *)(a2 + 89);
  *(_DWORD *)(result + 84) = *(_DWORD *)(a2 + 84);
  *(_BYTE *)(result + 88) = v11;
  *(_WORD *)(result + 89) = v12;
  if ( v10 )
  {
    v13 = *(_DWORD *)(a2 + 28);
    if ( v10 == *(_DWORD *)(a2 + 56) )
      v4 = v8;
    *(_DWORD *)(result + 20) = v4;
    *(_DWORD *)(result + 24) = v4;
    *(_DWORD *)(result + 28) = v13 - v10 + v4;
    *(_DWORD *)(result + 24) = v4 + *(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 20);
  }
  else
  {
    v14 = *(_DWORD *)(a2 + 8);
    if ( v14 )
    {
      v15 = *(_DWORD *)(a2 + 12) - v14;
      if ( v14 == *(_DWORD *)(a2 + 56) )
      {
        v17 = v8 + v15;
        v18 = *(_DWORD *)(a2 + 16) - v14;
        *(_DWORD *)(result + 8) = v8;
        *(_DWORD *)(result + 12) = v17;
        *(_DWORD *)(result + 16) = v18 + v8;
      }
      else
      {
        v16 = *(_DWORD *)(a2 + 16) - v14 + v4;
        *(_DWORD *)(result + 8) = v4;
        *(_DWORD *)(result + 12) = v15 + v4;
        *(_DWORD *)(result + 16) = v16;
      }
    }
  }
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 60) = 0LL;
  *(_WORD *)(a2 + 88) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}


// ======================================================================
