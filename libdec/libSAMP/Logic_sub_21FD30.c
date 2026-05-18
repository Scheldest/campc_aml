// ADDR: 0x21fd7c
// SYMBOL: sub_21FD7C
bool __fastcall sub_21FD7C(char *s1)
{
  return !*s1 || !strcmp(s1, "C") || !strcmp(s1, "C.UTF-8") || !strcmp(s1, "en_US.UTF-8") || strcmp(s1, "POSIX") == 0;
}


// ======================================================================
// ADDR: 0x21fdd0
// SYMBOL: sub_21FDD0
bool __fastcall sub_21FDD0(const char *a1)
{
  return !*a1 || strstr(a1, "UTF-8") != 0;
}


// ======================================================================
