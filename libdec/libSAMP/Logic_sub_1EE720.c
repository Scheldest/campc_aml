// ADDR: 0x1ee800
// SYMBOL: sub_1EE800
std::__fs::filesystem::filesystem_error *__fastcall sub_1EE800(
        std::__fs::filesystem::filesystem_error *a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v5; // r0
  __int64 v6; // r0
  _BYTE v8[12]; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v9[12]; // [sp+10h] [bp-20h] BYREF

  std::system_error::system_error(a1, a3, a4, a2);
  *(_DWORD *)a1 = &off_231220;
  LODWORD(v5) = v9;
  v6 = sub_1EE5C6(v5);
  LODWORD(v6) = v8;
  sub_1EE5C6(v6);
  sub_1EE8A8((char *)a1 + 16, v9, v8);
  std::string::~string(v8);
  std::string::~string(v9);
  std::__fs::filesystem::filesystem_error::__create_what(a1, 0);
  return a1;
}


// ======================================================================
