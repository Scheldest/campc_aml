// ADDR: 0xdd758
// SYMBOL: sub_DD758
unsigned __int8 *__fastcall sub_DD758(unsigned __int8 *a1, int a2, int a3)
{
  double v4; // d16
  unsigned __int8 v5; // r0
  double v7; // [sp+0h] [bp-28h] BYREF
  int v8; // [sp+8h] [bp-20h]
  unsigned __int8 v9; // [sp+Ch] [bp-1Ch]
  _BYTE v10[8]; // [sp+10h] [bp-18h] BYREF
  void *v11; // [sp+18h] [bp-10h]
  unsigned __int8 v12; // [sp+1Ch] [bp-Ch]

  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  if ( a3 )
  {
    fmt::v8::detail::thousands_sep_impl<char>(v10);
    std::string::basic_string(&v7, v10);
    v9 = v12;
    if ( v10[0] << 31 )
      operator delete(v11);
    if ( *a1 << 31 )
      operator delete(*((void **)a1 + 2));
    v4 = v7;
    v5 = v9;
    *((_DWORD *)a1 + 2) = v8;
    a1[12] = v5;
    *(double *)a1 = v4;
  }
  else
  {
    a1[12] = 0;
  }
  return a1;
}


// ======================================================================
// ADDR: 0xdd7d8
// SYMBOL: sub_DD7D8
int __fastcall sub_DD7D8(int a1, unsigned __int64 a2, int a3, int a4, int a5)
{
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r10
  int v10; // r6
  int v11; // r0
  int *v13; // [sp+4h] [bp-54h] BYREF
  int v14; // [sp+8h] [bp-50h]
  _BYTE *v15; // [sp+Ch] [bp-4Ch]
  int *v16; // [sp+10h] [bp-48h]
  _BYTE v17[40]; // [sp+14h] [bp-44h] BYREF
  int v18; // [sp+3Ch] [bp-1Ch] BYREF

  v7 = __clz(a2 | 1) + 32;
  if ( HIDWORD(a2) )
    v7 = __clz(HIDWORD(a2));
  v8 = byte_91BF8[v7 ^ 0x3F];
  v9 = a3;
  if ( a2 < qword_91C38[v8] )
    --v8;
  v18 = v8;
  sub_DD0CC(&v13, (int)v17, a2, v8);
  v10 = a5;
  v11 = sub_DD86C(a5, v8);
  v16 = &v18;
  v14 = v10;
  v15 = v17;
  v13 = &a3;
  if ( v9 )
    ++v8;
  return sub_DD8A8(a1, a4, v8 + v11, v8 + v11, &v13, v13, v14, v15, v16);
}


// ======================================================================
