// ADDR: 0x13df22
// SYMBOL: sub_13DF22
bool __fastcall sub_13DF22(char *s1, char *s2)
{
  return *((_DWORD *)s1 + 12) == *((_DWORD *)s2 + 12)
      && !strcmp(s1, s2)
      && !memcmp(s1 + 32, s2 + 32, 0xCu)
      && s1[44] == s2[44];
}


// ======================================================================
