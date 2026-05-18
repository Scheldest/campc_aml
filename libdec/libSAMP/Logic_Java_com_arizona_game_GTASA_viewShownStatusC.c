// ADDR: 0x1447e4
// SYMBOL: sub_1447E4
int __fastcall sub_1447E4(int a1, char a2, int a3)
{
  int result; // r0
  int v7; // r0
  _BYTE v8[279]; // [sp+8h] [bp-128h] BYREF
  _BYTE v9[17]; // [sp+11Fh] [bp-11h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v7 = sub_17D4A8(v8);
    v9[0] = -36;
    sub_17D628(v7, v9, 8, 1);
    v9[0] = 66;
    sub_17D628(v8, v9, 8, 1);
    v9[0] = a2;
    sub_17D628(v8, v9, 8, 1);
    if ( a3 )
      sub_17D84A(v8);
    else
      sub_17D828(v8);
    (*(void (__fastcall **)(_DWORD, _BYTE *, int, int, int))(**(_DWORD **)(a1 + 528) + 32))(
      *(_DWORD *)(a1 + 528),
      v8,
      2,
      9,
      6);
    return sub_17D542(v8);
  }
  return result;
}


// ======================================================================
// ADDR: 0x155858
// SYMBOL: sub_155858
int __fastcall sub_155858(int a1)
{
  const char *v2; // r0
  FILE *v3; // r8
  char *v4; // r4
  int v5; // r5
  void *v6; // r1
  void *v8[3]; // [sp+Ch] [bp-C4h] BYREF
  void *v9[2]; // [sp+18h] [bp-B8h] BYREF
  void *v10; // [sp+20h] [bp-B0h]
  _DWORD v11[2]; // [sp+24h] [bp-ACh] BYREF
  void *v12; // [sp+2Ch] [bp-A4h] BYREF
  _DWORD v13[8]; // [sp+30h] [bp-A0h] BYREF
  __int64 v14; // [sp+50h] [bp-80h]
  __int64 v15; // [sp+58h] [bp-78h]
  int v16; // [sp+60h] [bp-70h]
  _DWORD v17[27]; // [sp+64h] [bp-6Ch] BYREF

  sub_159B70(4, "Save config..");
  sub_15A2AC(v11);
  v2 = (const char *)v12;
  if ( !(LOBYTE(v11[0]) << 31) )
    v2 = (char *)v11 + 1;
  v3 = fopen(v2, (const char *)aW7);
  if ( LOBYTE(v11[0]) << 31 )
    operator delete(v12);
  if ( !v3 )
    return sub_159B70(4, "Can't open config file.");
  v11[1] = 0;
  v11[0] = &off_22A6B8;
  v17[0] = &off_22A6CC;
  v12 = &off_22A62C;
  std::ios_base::init((std::ios_base *)v17, v13);
  v12 = &off_22A62C;
  v17[18] = 0;
  v17[19] = -1;
  v17[0] = &off_22A640;
  v11[0] = &off_22A618;
  std::streambuf::basic_streambuf(v13);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 24;
  v13[0] = &off_22A710;
  sub_155A20(&v12, a1 + 96);
  sub_116AEC(v9, v13);
  v4 = (char *)v10;
  v5 = LOBYTE(v9[0]);
  sub_116AEC(v8, v13);
  v6 = v8[1];
  if ( !(v5 << 31) )
    v4 = (char *)v9 + 1;
  if ( !(LOBYTE(v8[0]) << 31) )
    v6 = (void *)(LOBYTE(v8[0]) >> 1);
  fwrite(v4, (size_t)v6, 1u, v3);
  if ( LOBYTE(v8[0]) << 31 )
    operator delete(v8[2]);
  if ( LOBYTE(v9[0]) << 31 )
    operator delete(v10);
  fflush(v3);
  fclose(v3);
  v17[0] = &off_22A640;
  v11[0] = &off_22A618;
  v12 = &off_22A62C;
  v13[0] = &off_22A710;
  if ( (unsigned __int8)v14 << 31 )
    operator delete((void *)v15);
  std::streambuf::~streambuf(v13);
  std::iostream::~basic_iostream(v11, off_22A64C);
  return std::ios::~ios(v17);
}


// ======================================================================
