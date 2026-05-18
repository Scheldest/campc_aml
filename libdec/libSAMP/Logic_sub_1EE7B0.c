// ADDR: 0x1eeb48
// SYMBOL: sub_1EEB48
std::__fs::filesystem::filesystem_error *__fastcall sub_1EEB48(
        std::__fs::filesystem::filesystem_error *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  std::system_error::system_error(a1, a5, a6, a2);
  *(_DWORD *)a1 = &off_231220;
  sub_1EEBA0((char *)a1 + 16, a3, a4);
  std::__fs::filesystem::filesystem_error::__create_what(a1, 2);
  return a1;
}


// ======================================================================
