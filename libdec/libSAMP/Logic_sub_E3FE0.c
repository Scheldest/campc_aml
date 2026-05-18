// ADDR: 0xe3f7a
// SYMBOL: sub_E3F7A
unsigned __int8 *__fastcall sub_E3F7A(unsigned __int8 *a1)
{
  sub_E57FC(a1 + 8, *a1);
  return a1;
}


// ======================================================================
// ADDR: 0xe45b4
// SYMBOL: sub_E45B4
_DWORD *__fastcall sub_E45B4(_DWORD *a1, unsigned __int8 *a2)
{
  int v4; // r6
  char *v5; // r1

  v4 = (int)(a1 + 2);
  a1[25] = &off_22A7AC;
  *a1 = &off_22A798;
  a1[1] = 0;
  std::ios_base::init((std::ios_base *)(a1 + 25), a1 + 2);
  a1[43] = 0;
  a1[44] = -1;
  a1[25] = &off_22A774;
  *a1 = &off_22A760;
  sub_E6108(v4);
  v5 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = (char *)(a2 + 1);
  if ( !sub_E61BC(v4, v5) )
    std::ios_base::clear(
      (std::ios_base *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 16) | 4);
  return a1;
}


// ======================================================================
// ADDR: 0xe4664
// SYMBOL: sub_E4664
_DWORD *__fastcall sub_E4664(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r1
  _BYTE v8[16]; // [sp+8h] [bp-B8h] BYREF
  _BYTE *v9; // [sp+18h] [bp-A8h]
  _DWORD v10[2]; // [sp+20h] [bp-A0h] BYREF
  _BYTE v11[16]; // [sp+28h] [bp-98h] BYREF
  _BYTE *v12; // [sp+38h] [bp-88h]
  int v13; // [sp+48h] [bp-78h] BYREF

  v4 = *(_DWORD *)(*a1 - 12);
  v10[0] = a1;
  v9 = 0;
  v10[1] = *(_DWORD *)((char *)a1 + v4 + 24);
  sub_E62C4(v11, v10, v8, 1, 0);
  sub_E6328(v11, 0, a2);
  sub_E6790(&v13);
  if ( v11 == v12 )
  {
    v5 = 4;
  }
  else
  {
    if ( !v12 )
      goto LABEL_6;
    v5 = 5;
  }
  (*(void (**)(void))(*(_DWORD *)v12 + 4 * v5))();
LABEL_6:
  if ( v8 == v9 )
  {
    v6 = 4;
    goto LABEL_10;
  }
  if ( v9 )
  {
    v6 = 5;
LABEL_10:
    (*(void (**)(void))(*(_DWORD *)v9 + 4 * v6))();
  }
  sub_E669A(v10);
  return a1;
}


// ======================================================================
// ADDR: 0xe4710
// SYMBOL: sub_E4710
int __fastcall sub_E4710(unsigned __int8 *a1, char *a2)
{
  int v3; // r0
  _DWORD *v5; // r0
  int v6; // r5
  int v7; // r4
  void *exception; // r4
  char *v10; // r0
  int v11; // r0
  double v12; // d16
  _DWORD v13[3]; // [sp+Ch] [bp-34h] BYREF
  double v14; // [sp+18h] [bp-28h] BYREF
  void *v15; // [sp+20h] [bp-20h]
  _BYTE v16[4]; // [sp+28h] [bp-18h] BYREF
  double *v17; // [sp+2Ch] [bp-14h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      exception = j___cxa_allocate_exception(0x10u);
      v10 = (char *)sub_E9DFC(a1);
      sub_DC6DC(v13, v10);
      v11 = std::string::insert((int)v13, 0, "cannot use operator[] with a string argument with ");
      v12 = *(double *)v11;
      v15 = *(void **)(v11 + 8);
      v14 = v12;
      *(_DWORD *)v11 = 0;
      *(_DWORD *)(v11 + 4) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      sub_E9CB0(exception, 305, &v14, a1);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
        (void (*)(void *))sub_E9438);
    }
  }
  else
  {
    *a1 = 1;
    v5 = (_DWORD *)operator new(0xCu);
    v5[1] = 0;
    v5[2] = 0;
    *v5 = v5 + 1;
    *((_DWORD *)a1 + 2) = v5;
  }
  v6 = *((_DWORD *)a1 + 2);
  sub_DC6DC(&v14, a2);
  v17 = &v14;
  sub_EBE18(v13, v6, &v14, &unk_9216D, &v17, v16);
  v7 = v13[0];
  if ( LOBYTE(v14) << 31 )
    operator delete(v15);
  return v7 + 32;
}


// ======================================================================
// ADDR: 0xe4834
// SYMBOL: sub_E4834
int __fastcall sub_E4834(int a1, unsigned __int8 *a2)
{
  int v2; // r2
  int v4; // r0

  v2 = *a2;
  *(_BYTE *)a1 = v2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  switch ( v2 )
  {
    case 1:
      v4 = sub_EBE7C(*((_DWORD *)a2 + 2));
      goto LABEL_8;
    case 2:
      v4 = sub_EC0EC(*((_DWORD *)a2 + 2));
      goto LABEL_8;
    case 3:
      v4 = sub_EA114(*((_DWORD *)a2 + 2));
      goto LABEL_8;
    case 4:
      *(_DWORD *)(a1 + 8) = a2[8];
      *(_DWORD *)(a1 + 12) = 0;
      return a1;
    case 5:
    case 6:
    case 7:
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      return a1;
    case 8:
      v4 = sub_EC194(*((_DWORD *)a2 + 2));
LABEL_8:
      *(_DWORD *)(a1 + 8) = v4;
      break;
    default:
      return a1;
  }
  return a1;
}


// ======================================================================
// ADDR: 0xe4890
// SYMBOL: sub_E4890
int __fastcall sub_E4890(int a1, unsigned __int8 *a2, int a3, int a4)
{
  int v6; // r0
  int v8; // r0
  int v10; // r0
  void *exception; // r4
  char *v12; // r0
  int v13; // r0
  double v14; // d16
  unsigned __int8 *v15; // [sp+0h] [bp-38h] BYREF
  int v16; // [sp+4h] [bp-34h]
  int v17; // [sp+8h] [bp-30h]
  int v18; // [sp+Ch] [bp-2Ch]
  double v19; // [sp+10h] [bp-28h] BYREF
  int v20; // [sp+18h] [bp-20h]
  unsigned int v21; // [sp+1Ch] [bp-1Ch]

  if ( *a2 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v12 = (char *)sub_E9DFC(a2);
    sub_DC6DC(&v15, v12);
    v13 = std::string::insert((int)&v15, 0, "cannot use value() with ");
    v14 = *(double *)v13;
    v20 = *(_DWORD *)(v13 + 8);
    v19 = v14;
    *(_DWORD *)v13 = 0;
    *(_DWORD *)(v13 + 4) = 0;
    *(_DWORD *)(v13 + 8) = 0;
    sub_E9CB0(exception, 306, &v19, a2);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v6 = *((_DWORD *)a2 + 2);
  v21 = 0x80000000;
  v20 = 0;
  LODWORD(v19) = a2;
  HIDWORD(v19) = sub_EC2C0(v6, a3);
  v8 = *a2;
  v17 = 0;
  v18 = 0x80000000;
  v15 = a2;
  v16 = 0;
  if ( v8 == 2 )
  {
    v17 = *(_DWORD *)(*((_DWORD *)a2 + 2) + 4);
  }
  else if ( v8 == 1 )
  {
    v16 = *((_DWORD *)a2 + 2) + 4;
  }
  else
  {
    v18 = 1;
  }
  if ( sub_EC314(&v19, &v15) )
    return std::string::basic_string(a1, a4);
  v10 = sub_EC238(&v19);
  return sub_EC3AC(a1, v10);
}


// ======================================================================
// ADDR: 0xe49a8
// SYMBOL: sub_E49A8
unsigned __int8 *__fastcall sub_E49A8(unsigned __int8 *a1, int a2, int a3)
{
  int v4; // r0
  int v6; // r0
  int v8; // r0
  void *exception; // r4
  char *v10; // r0
  int v11; // r0
  unsigned __int64 v12; // d16
  unsigned __int8 *v13; // [sp+0h] [bp-30h] BYREF
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]
  unsigned __int64 v17; // [sp+10h] [bp-20h] BYREF
  int v18; // [sp+18h] [bp-18h]
  unsigned int v19; // [sp+1Ch] [bp-14h]

  if ( *a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v10 = (char *)sub_E9DFC(a1);
    sub_DC6DC(&v13, v10);
    v11 = std::string::insert((int)&v13, 0, "cannot use value() with ");
    v12 = *(_QWORD *)v11;
    v18 = *(_DWORD *)(v11 + 8);
    v17 = v12;
    *(_DWORD *)v11 = 0;
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    sub_E9CB0(exception, 306, &v17, a1);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v4 = *((_DWORD *)a1 + 2);
  v19 = 0x80000000;
  v18 = 0;
  v17 = __PAIR64__(sub_EC2C0(v4, a2), (unsigned int)a1);
  v6 = *a1;
  v15 = 0;
  v16 = 0x80000000;
  v13 = a1;
  v14 = 0;
  if ( v6 == 2 )
  {
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 4);
  }
  else if ( v6 == 1 )
  {
    v14 = *((_DWORD *)a1 + 2) + 4;
  }
  else
  {
    v16 = 1;
  }
  if ( sub_EC314(&v17, &v13) )
    return *(unsigned __int8 **)a3;
  v8 = sub_EC238(&v17);
  v13 = 0;
  sub_EC49C(v8, &v13);
  return v13;
}


// ======================================================================
// ADDR: 0xe4abc
// SYMBOL: sub_E4ABC
bool __fastcall sub_E4ABC(unsigned __int8 *a1, int a2, unsigned __int8 *a3)
{
  int v4; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  void *exception; // r4
  char *v11; // r0
  int v12; // r0
  unsigned __int64 v13; // d16
  unsigned __int8 *v14; // [sp+0h] [bp-30h] BYREF
  int v15; // [sp+4h] [bp-2Ch]
  int v16; // [sp+8h] [bp-28h]
  int v17; // [sp+Ch] [bp-24h]
  unsigned __int64 v18; // [sp+10h] [bp-20h] BYREF
  int v19; // [sp+18h] [bp-18h]
  unsigned int v20; // [sp+1Ch] [bp-14h]

  if ( *a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v11 = (char *)sub_E9DFC(a1);
    sub_DC6DC(&v14, v11);
    v12 = std::string::insert((int)&v14, 0, "cannot use value() with ");
    v13 = *(_QWORD *)v12;
    v19 = *(_DWORD *)(v12 + 8);
    v18 = v13;
    *(_DWORD *)v12 = 0;
    *(_DWORD *)(v12 + 4) = 0;
    *(_DWORD *)(v12 + 8) = 0;
    sub_E9CB0(exception, 306, &v18, a1);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v4 = *((_DWORD *)a1 + 2);
  v20 = 0x80000000;
  v19 = 0;
  v18 = __PAIR64__(sub_EC2C0(v4, a2), (unsigned int)a1);
  v6 = *a1;
  v16 = 0;
  v17 = 0x80000000;
  v14 = a1;
  v15 = 0;
  if ( v6 == 2 )
  {
    v16 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 4);
  }
  else if ( v6 == 1 )
  {
    v15 = *((_DWORD *)a1 + 2) + 4;
  }
  else
  {
    v17 = 1;
  }
  if ( sub_EC314(&v18, &v14) )
  {
    v7 = *a3;
  }
  else
  {
    v8 = sub_EC238(&v18);
    LOBYTE(v14) = 0;
    sub_EC574(v8, &v14);
    v7 = (unsigned __int8)v14;
  }
  return v7 != 0;
}


// ======================================================================
// ADDR: 0xe4bdc
// SYMBOL: sub_E4BDC
unsigned __int8 *__fastcall sub_E4BDC(unsigned __int8 *a1, int a2, int a3)
{
  int v4; // r0
  int v6; // r0
  int v8; // r0
  void *exception; // r4
  char *v10; // r0
  int v11; // r0
  unsigned __int64 v12; // d16
  unsigned __int8 *v13; // [sp+0h] [bp-30h] BYREF
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]
  unsigned __int64 v17; // [sp+10h] [bp-20h] BYREF
  int v18; // [sp+18h] [bp-18h]
  unsigned int v19; // [sp+1Ch] [bp-14h]

  if ( *a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v10 = (char *)sub_E9DFC(a1);
    sub_DC6DC(&v13, v10);
    v11 = std::string::insert((int)&v13, 0, "cannot use value() with ");
    v12 = *(_QWORD *)v11;
    v18 = *(_DWORD *)(v11 + 8);
    v17 = v12;
    *(_DWORD *)v11 = 0;
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    sub_E9CB0(exception, 306, &v17, a1);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v4 = *((_DWORD *)a1 + 2);
  v19 = 0x80000000;
  v18 = 0;
  v17 = __PAIR64__(sub_EC2C0(v4, a2), (unsigned int)a1);
  v6 = *a1;
  v15 = 0;
  v16 = 0x80000000;
  v13 = a1;
  v14 = 0;
  if ( v6 == 2 )
  {
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 4);
  }
  else if ( v6 == 1 )
  {
    v14 = *((_DWORD *)a1 + 2) + 4;
  }
  else
  {
    v16 = 1;
  }
  if ( sub_EC314(&v17, &v13) )
    return *(unsigned __int8 **)a3;
  v8 = sub_EC238(&v17);
  v13 = 0;
  sub_EC634(v8, &v13);
  return v13;
}


// ======================================================================
// ADDR: 0xe4cf0
// SYMBOL: sub_E4CF0
int __fastcall sub_E4CF0(unsigned __int8 *a1, int a2, unsigned __int16 *a3)
{
  int v4; // r0
  int v6; // r0
  int v8; // r0
  void *exception; // r4
  char *v10; // r0
  int v11; // r0
  unsigned __int64 v12; // d16
  unsigned __int8 *v13; // [sp+0h] [bp-30h] BYREF
  int v14; // [sp+4h] [bp-2Ch]
  int v15; // [sp+8h] [bp-28h]
  int v16; // [sp+Ch] [bp-24h]
  unsigned __int64 v17; // [sp+10h] [bp-20h] BYREF
  int v18; // [sp+18h] [bp-18h]
  unsigned int v19; // [sp+1Ch] [bp-14h]

  if ( *a1 != 1 )
  {
    exception = j___cxa_allocate_exception(0x10u);
    v10 = (char *)sub_E9DFC(a1);
    sub_DC6DC(&v13, v10);
    v11 = std::string::insert((int)&v13, 0, "cannot use value() with ");
    v12 = *(_QWORD *)v11;
    v18 = *(_DWORD *)(v11 + 8);
    v17 = v12;
    *(_DWORD *)v11 = 0;
    *(_DWORD *)(v11 + 4) = 0;
    *(_DWORD *)(v11 + 8) = 0;
    sub_E9CB0(exception, 306, &v17, a1);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
      (void (*)(void *))sub_E9438);
  }
  v4 = *((_DWORD *)a1 + 2);
  v19 = 0x80000000;
  v18 = 0;
  v17 = __PAIR64__(sub_EC2C0(v4, a2), (unsigned int)a1);
  v6 = *a1;
  v15 = 0;
  v16 = 0x80000000;
  v13 = a1;
  v14 = 0;
  if ( v6 == 2 )
  {
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 2) + 4);
  }
  else if ( v6 == 1 )
  {
    v14 = *((_DWORD *)a1 + 2) + 4;
  }
  else
  {
    v16 = 1;
  }
  if ( sub_EC314(&v17, &v13) )
    return *a3;
  v8 = sub_EC238(&v17);
  LOWORD(v13) = 0;
  sub_EC7A8(v8, &v13);
  return (unsigned __int16)v13;
}


// ======================================================================
// ADDR: 0xe4e08
// SYMBOL: sub_E4E08
int __fastcall sub_E4E08(unsigned int a1, unsigned int a2)
{
  int result; // r0
  char **v4; // r2
  char **v5; // r4

  result = 0;
  if ( a1 <= 5 && a2 )
  {
    switch ( a1 )
    {
      case 0u:
        if ( a2 > 0x17 )
          goto LABEL_13;
        v4 = (char **)&off_23769C;
        goto LABEL_15;
      case 1u:
        if ( a2 > 2 )
          goto LABEL_13;
        v4 = (char **)&off_237830;
        goto LABEL_15;
      case 2u:
        if ( a2 > 3 )
          goto LABEL_13;
        v4 = (char **)&off_237880;
        goto LABEL_15;
      case 3u:
        if ( a2 > 3 )
          goto LABEL_13;
        v4 = (char **)&off_2378E4;
        goto LABEL_15;
      case 4u:
        if ( a2 > 3 )
          goto LABEL_13;
        v4 = &off_237944;
LABEL_15:
        v5 = &v4[4 * a2];
        sub_E4ED8(&dword_23DC18, v5 - 4);
        word_23DC24 = *((_WORD *)v5 - 2);
        result = 1;
        break;
      default:
LABEL_13:
        result = 0;
        break;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xe4e94
// SYMBOL: sub_E4E94
_DWORD *__fastcall sub_E4E94(_DWORD *a1)
{
  _DWORD *v2; // r5

  a1[25] = &off_22A774;
  v2 = a1 + 25;
  *a1 = &off_22A760;
  sub_E50B0(a1 + 2);
  std::istream::~istream(a1, off_22A780);
  std::ios::~ios(v2);
  return a1;
}


// ======================================================================
// ADDR: 0xe50b0
// SYMBOL: sub_E50B0
int __fastcall sub_E50B0(int a1)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)a1 = &off_22A7C8;
  sub_E5108(a1);
  if ( *(_BYTE *)(a1 + 88) )
  {
    v2 = *(void **)(a1 + 32);
    if ( v2 )
      operator delete[](v2);
  }
  if ( *(_BYTE *)(a1 + 89) )
  {
    v3 = *(void **)(a1 + 56);
    if ( v3 )
      operator delete[](v3);
  }
  return sub_224274(a1);
}


// ======================================================================
// ADDR: 0xec70c
// SYMBOL: sub_EC70C
_DWORD *__fastcall sub_EC70C(int a1, char *s)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r8
  _DWORD *v5; // r5
  bool v6; // nf
  _DWORD *v7; // r0
  _DWORD *v8; // r0

  v3 = (_DWORD *)(a1 + 4);
  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
    return v3;
  v5 = (_DWORD *)(a1 + 4);
  do
  {
    v6 = std::string::compare((int)(v2 + 4), s) < 0;
    v7 = v2;
    if ( v6 )
      v7 = v2 + 1;
    v8 = (_DWORD *)*v7;
    if ( !v6 )
      v5 = v2;
    v2 = v8;
  }
  while ( v8 );
  if ( v5 == v3 || std::string::compare((int)(v5 + 4), s) >= 1 )
    return v3;
  return v5;
}


// ======================================================================
// ADDR: 0xec75a
// SYMBOL: sub_EC75A
_DWORD *__fastcall sub_EC75A(int a1, char *s)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r8
  _DWORD *v5; // r5
  bool v6; // nf
  _DWORD *v7; // r0
  _DWORD *v8; // r0

  v3 = (_DWORD *)(a1 + 4);
  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
    return v3;
  v5 = (_DWORD *)(a1 + 4);
  do
  {
    v6 = std::string::compare((int)(v2 + 4), s) < 0;
    v7 = v2;
    if ( v6 )
      v7 = v2 + 1;
    v8 = (_DWORD *)*v7;
    if ( !v6 )
      v5 = v2;
    v2 = v8;
  }
  while ( v8 );
  if ( v5 == v3 || std::string::compare((int)(v5 + 4), s) >= 1 )
    return v3;
  return v5;
}


// ======================================================================
