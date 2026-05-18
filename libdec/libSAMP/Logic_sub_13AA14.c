// ADDR: 0x139ee8
// SYMBOL: sub_139EE8
int *__fastcall sub_139EE8(int a1)
{
  int v2; // r0
  const void *v3; // r0

  v2 = (unsigned __int8)byte_31420C;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_31420C) )
  {
    dword_314200 = 0;
    *(_DWORD *)algn_314204 = 0;
    dword_314208 = 0;
    _cxa_atexit((void (*)(void *))std::string::~string, &dword_314200, &off_22A540);
    j___cxa_guard_release((__guard *)&byte_31420C);
  }
  if ( (*(_DWORD *)(a1 + 88) | 2) == 3
    && (v3 = *(const void **)(a1 + 84)) != 0
    && j___dynamic_cast(
         v3,
         (const struct __class_type_info *)&`typeinfo for'Widget,
         (const struct __class_type_info *)&`typeinfo for'InputWidget,
         0) )
  {
    return (int *)sub_13B8A4();
  }
  else
  {
    return &dword_314200;
  }
}


// ======================================================================
// ADDR: 0x139f80
// SYMBOL: sub_139F80
int __fastcall sub_139F80(int a1)
{
  int result; // r0
  unsigned int v3; // r2
  const void *v4; // r0
  _DWORD *v5; // r0

  result = -1;
  v3 = *(_DWORD *)(a1 + 88);
  if ( v3 <= 5 && ((1 << v3) & 0x34) != 0 )
  {
    v4 = *(const void **)(a1 + 84);
    if ( v4
      && (v5 = j___dynamic_cast(
                 v4,
                 (const struct __class_type_info *)&`typeinfo for'Widget,
                 (const struct __class_type_info *)&`typeinfo for'ListBox,
                 0)) != 0 )
    {
      return *(_DWORD *)(v5[24] + 92);
    }
    else
    {
      return -1;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x13a0dc
// SYMBOL: sub_13A0DC
int __fastcall sub_13A0DC(int a1, __int16 a2, int a3, int a4, __int16 a5)
{
  int v6; // r4
  int result; // r0
  __int16 v11; // [sp+12h] [bp-2Eh] BYREF
  _BYTE v12[4]; // [sp+14h] [bp-2Ch] BYREF
  __int16 *v13; // [sp+18h] [bp-28h] BYREF
  _DWORD v14[9]; // [sp+1Ch] [bp-24h] BYREF

  v6 = a1 + 84;
  if ( *(_DWORD *)(a1 + 96) >= 0x14u )
  {
    do
      sub_13AE8C(v6, *(_DWORD *)(a1 + 92));
    while ( *(_DWORD *)(a1 + 96) > 0x13u );
  }
  v11 = a2;
  v13 = &v11;
  sub_13B010(v14, v6, &v11, &unk_B93DE, &v13, v12);
  std::string::assign(v14[0] + 16, a3, a4);
  v11 = a2;
  v13 = &v11;
  sub_13B010(v14, v6, &v11, &unk_B93DE, &v13, v12);
  result = v14[0];
  *(_WORD *)(v14[0] + 12) = a5;
  return result;
}


// ======================================================================
// ADDR: 0x13a584
// SYMBOL: sub_13A584
int __fastcall sub_13A584(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = dword_381BF4;
  if ( !*(_BYTE *)(dword_381BF4 + 132) )
  {
    if ( !sub_17C1DA(dword_381BF4, 0) )
      goto LABEL_5;
    v2 = dword_381BF4;
  }
  sub_17C604(v2, *(__int16 *)(a1 + 116));
LABEL_5:
  if ( *(_BYTE *)(a1 + 80) )
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 36))(a1, 0);
  result = 0;
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x144284
// SYMBOL: sub_144284
int *__fastcall sub_144284(int a1, __int16 a2, char a3, __int16 a4, int a5, int a6)
{
  int *result; // r0
  int v10; // r2
  int v12; // r0
  _BYTE v13[278]; // [sp+20h] [bp-128h] BYREF
  _WORD v14[9]; // [sp+136h] [bp-12h] BYREF

  result = &dword_239034;
  v10 = *(_DWORD *)(a1 + 536);
  byte_23903A = 0;
  word_239038 = -1;
  dword_239034 = -1;
  if ( v10 == 5 )
  {
    v12 = sub_17D4A8(v13);
    v14[0] = a2;
    sub_17D628(v12, v14, 16, 1);
    LOBYTE(v14[0]) = a3;
    sub_17D628(v13, v14, 8, 1);
    v14[0] = a4;
    sub_17D628(v13, v14, 16, 1);
    LOBYTE(v14[0]) = a6;
    sub_17D628(v13, v14, 8, 1);
    sub_17D566(v13, a5, a6);
    (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
      *(_DWORD *)(a1 + 528),
      &unk_23C7C0,
      v13,
      1,
      9,
      0,
      0,
      -1,
      0xFFFF,
      0xFFFF,
      0);
    return (int *)sub_17D542(v13);
  }
  return result;
}


// ======================================================================
// ADDR: 0x164db4
// SYMBOL: sub_164DB4
int __fastcall sub_164DB4(_DWORD *a1, int a2, size_t n)
{
  int v6; // r4
  size_t v7; // r9
  char *v8; // r1
  const char *v9; // r0
  size_t v10; // r0

  if ( n >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(a1);
  if ( n >= 0xB )
  {
    v7 = (n + 16) & 0xFFFFFFF0;
    v6 = operator new(v7);
    *a1 = v7 + 1;
    a1[1] = n;
    a1[2] = v6;
    goto LABEL_6;
  }
  *(_BYTE *)a1 = 2 * n;
  v6 = (int)a1 + 1;
  if ( n )
LABEL_6:
    sub_22178C(v6, n);
  *(_BYTE *)(v6 + n) = 0;
  v8 = (char *)a1[2];
  if ( !(*(unsigned __int8 *)a1 << 31) )
    v8 = (char *)a1 + 1;
  sub_164E4C(a2, v8, n);
  v9 = (const char *)a1[2];
  if ( !(*(unsigned __int8 *)a1 << 31) )
    v9 = (char *)a1 + 1;
  v10 = _strlen_chk(v9, 0xFFFFFFFF);
  return std::string::resize(a1, v10, 0);
}


// ======================================================================
