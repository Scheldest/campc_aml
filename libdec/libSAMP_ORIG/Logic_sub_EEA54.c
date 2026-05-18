// ADDR: 0xf66ec
// SYMBOL: sub_F66EC
bool __fastcall sub_F66EC(unsigned __int8 *a1, char *s)
{
  size_t v3; // r0
  unsigned int v4; // r2
  unsigned int v5; // r1

  v3 = strlen(s);
  v4 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  if ( !(v4 << 31) )
    v5 = v4 >> 1;
  return v3 == v5 && std::string::compare(a1, 0) == 0;
}


// ======================================================================
