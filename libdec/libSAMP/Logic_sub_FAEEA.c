// ADDR: 0xfab98
// SYMBOL: sub_FAB98
void __fastcall sub_FAB98(_BYTE *a1)
{
  int v1; // r2
  int v2; // r1
  int v3; // r5
  unsigned int v4; // r2
  const char *v5; // r1
  _DWORD *v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r6
  char *s[24]; // [sp+4h] [bp-DCh] BYREF
  _UNKNOWN **v11; // [sp+64h] [bp-7Ch] BYREF
  _BYTE v12[8]; // [sp+B4h] [bp-2Ch] BYREF
  void *v13; // [sp+BCh] [bp-24h]
  int v14; // [sp+C0h] [bp-20h]
  _BYTE v15[8]; // [sp+C4h] [bp-1Ch] BYREF
  void *v16; // [sp+CCh] [bp-14h]

  v1 = (unsigned __int8)*a1;
  v2 = dword_23DEEC;
  *a1 = v1 ^ 1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 96);
    if ( v3 )
    {
      if ( v1 != 1 )
      {
        v4 = 25;
        v5 = "-> Head movements enabled";
      }
      else
      {
        v4 = 26;
        v5 = "-> Head movements disabled";
      }
      sub_F1E60((unsigned __int64 *)s, (unsigned int)v5, v4);
      sub_12D318(v3, s[0]);
    }
  }
  v14 = sub_F97EC();
  std::__fs::filesystem::path::path<char const*,void>((int)s);
  std::__fs::filesystem::path::path<char const*,void>((int)v12);
  sub_F1DD4((int)v15, (int)s, (int)v12);
  if ( v12[0] << 31 )
    operator delete(v13);
  if ( LOBYTE(s[0]) << 31 )
    operator delete(s[2]);
  sub_FAD2C(s, v15, 16);
  if ( s[17] )
  {
    v6 = (_DWORD *)sub_FB2B4(s, "enabled=", 8);
    *(_DWORD *)((char *)v6 + *(_DWORD *)(*v6 - 12) + 4) = *(_DWORD *)((char *)v6 + *(_DWORD *)(*v6 - 12) + 4) & 0xFFFFFFB5 | 2;
    v7 = std::ostream::operator<<();
    std::ios_base::getloc((std::ios_base *)v12);
    v8 = std::locale::use_facet((std::locale *)v12, (std::locale::id *)&std::ctype<char>::id);
    v9 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v8 + 28))(v8, 10);
    std::locale::~locale((std::locale *)v12);
    std::ostream::put(v7, v9);
    std::ostream::flush(v7);
  }
  s[0] = (char *)&off_22A924;
  v11 = &off_22A938;
  sub_E50B0((int)&s[1]);
  std::ostream::~ostream(s, off_22A944);
  std::ios::~ios(&v11);
  if ( v15[0] << 31 )
    operator delete(v16);
}


// ======================================================================
