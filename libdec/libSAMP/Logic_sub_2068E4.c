// ADDR: 0x20e5dc
// SYMBOL: sub_20E5DC
bool __fastcall sub_20E5DC(unsigned __int8 *a1, char *s)
{
  size_t v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r1

  v4 = strlen(s);
  v5 = *a1;
  v6 = *((_DWORD *)a1 + 1);
  if ( !(v5 << 31) )
    v6 = v5 >> 1;
  return v4 == v6 && std::string::compare(a1, 0, -1, s, v4) == 0;
}


// ======================================================================
