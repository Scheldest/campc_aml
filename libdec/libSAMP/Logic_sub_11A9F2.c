// ADDR: 0x119ed0
// SYMBOL: sub_119ED0
void __fastcall sub_119ED0(int a1, char *s, int a3)
{
  char *v6; // r0
  char *v7; // r4
  char *v8; // r0
  unsigned int v9; // r5
  char *v10; // r6
  _BYTE *v11; // r0
  char v12; // t1
  double v13; // d16
  std::error_code *v14; // r2
  _BYTE v15[8]; // [sp+0h] [bp-60h] BYREF
  void *v16; // [sp+8h] [bp-58h]
  _BYTE v17[8]; // [sp+Ch] [bp-54h] BYREF
  void *v18; // [sp+14h] [bp-4Ch]
  int v19; // [sp+18h] [bp-48h]
  _BYTE v20[8]; // [sp+1Ch] [bp-44h] BYREF
  void *v21; // [sp+24h] [bp-3Ch]
  _BYTE v22[8]; // [sp+28h] [bp-38h] BYREF
  void *v23; // [sp+30h] [bp-30h]
  double v24; // [sp+38h] [bp-28h] BYREF
  void *v25; // [sp+40h] [bp-20h]

  v6 = strchr(s, 92);
  v7 = s;
  if ( v6 )
    v7 = v6 + 1;
  v8 = strrchr(s, 46);
  if ( v8 )
  {
    v9 = v8 - v7;
    v10 = v8;
    if ( (unsigned int)(v8 - v7) >= 0xFFFFFFF0 )
      std::__basic_string_common<true>::__throw_length_error(&v24);
    if ( v9 > 0xA )
    {
      v11 = (_BYTE *)operator new((v9 + 16) & 0xFFFFFFF0);
      HIDWORD(v24) = v9;
      v25 = v11;
      LODWORD(v24) = ((v9 + 16) & 0xFFFFFFF0) + 1;
    }
    else
    {
      LOBYTE(v24) = 2 * v9;
      v11 = (char *)&v24 + 1;
    }
    while ( v7 != v10 )
    {
      v12 = *v7++;
      *v11++ = v12;
    }
    *v11 = 0;
  }
  else
  {
    sub_DC6DC(&v24, v7);
  }
  if ( *(unsigned __int8 *)(a1 + 40) << 31 )
    operator delete(*(void **)(a1 + 48));
  v13 = v24;
  *(_DWORD *)(a1 + 48) = v25;
  *(double *)(a1 + 40) = v13;
  sub_11A084(a1 + 40, 1);
  v19 = sub_F97EC();
  std::__fs::filesystem::path::path<char const*,void>((int)v20);
  std::__fs::filesystem::path::path<char const*,void>((int)v17);
  sub_F1DD4((int)v22, (int)v20, (int)v17);
  std::__fs::filesystem::path::path<std::string,void>((int)v15);
  sub_F1DD4((int)&v24, (int)v22, (int)v15);
  if ( v15[0] << 31 )
    operator delete(v16);
  if ( v22[0] << 31 )
    operator delete(v23);
  if ( v17[0] << 31 )
    operator delete(v18);
  if ( v20[0] << 31 )
    operator delete(v21);
  std::__fs::filesystem::__status((std::__fs::filesystem *)v22, (const std::__fs::filesystem::path *)&v24, 0);
  if ( (unsigned int)v22[0] - 1 >= 0xFE )
    std::__fs::filesystem::__create_directories((std::__fs::filesystem *)&v24, 0, v14);
  sub_11A084(a1 + 40, 0);
  (*(void (__fastcall **)(char *, int))a1)(s, a3);
  if ( LOBYTE(v24) << 31 )
    operator delete(v25);
}


// ======================================================================
