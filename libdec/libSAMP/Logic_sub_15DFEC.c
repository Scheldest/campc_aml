// ADDR: 0x15e044
// SYMBOL: sub_15E044
char *__fastcall sub_15E044(char *a1, char *a2, int a3)
{
  char *v6; // r0
  int v7; // r1
  const char *v8; // r3
  char s[2063]; // [sp+1h] [bp-80Fh] BYREF

  std::runtime_error::runtime_error((std::runtime_error *)a1, &byte_8F794);
  *((_DWORD *)a1 + 2) = a3;
  *((_DWORD *)a1 + 3) = 0;
  *(_DWORD *)a1 = &off_22F91C;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  std::string::assign((int)(a1 + 12), a2);
  std::string::append((int)(a1 + 12), ": ");
  v6 = (char *)j_opus_strerror(a3);
  std::string::append((int)(a1 + 12), v6);
  v8 = (const char *)*((_DWORD *)a1 + 5);
  if ( !((unsigned __int8)a1[12] << 31) )
    v8 = a1 + 13;
  sub_15E20C(s, v7, "OpusException - %s", v8);
  sub_159B70(4, s);
  return a1;
}


// ======================================================================
