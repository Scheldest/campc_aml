// ADDR: 0x1eea10
// SYMBOL: sub_1EEA10
std::__fs::filesystem::filesystem_error *__fastcall sub_1EEA10(
        std::__fs::filesystem::filesystem_error *a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  __int64 v7; // r0
  _BYTE v9[12]; // [sp+0h] [bp-20h] BYREF

  std::system_error::system_error(a1, a4, a5, a2);
  *(_DWORD *)a1 = &off_231220;
  LODWORD(v7) = v9;
  sub_1EE5C6(v7);
  sub_1EEAA4((char *)a1 + 16, a3, v9);
  std::string::~string(v9);
  std::__fs::filesystem::filesystem_error::__create_what(a1, 1);
  return a1;
}


// ======================================================================
