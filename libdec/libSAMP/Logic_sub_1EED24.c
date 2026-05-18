// ADDR: 0x1eed48
// SYMBOL: sub_1EED48
unsigned __int8 *__fastcall sub_1EED48(unsigned __int8 *result, unsigned int a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r0
  unsigned int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r5
  unsigned int v7; // r6
  bool v8; // zf

  if ( a2 )
  {
    v2 = result;
    v3 = *(_DWORD *)result;
    v4 = *v2;
    v5 = *((_DWORD *)v2 + 1);
    if ( (v4 & 1) == 0 )
      v5 = v4 >> 1;
    v6 = (v3 & 0xFFFFFFFE) - 1;
    if ( (v4 & 1) == 0 )
      v6 = 10;
    v7 = v5 + a2;
    if ( v6 - v5 < a2 )
    {
      std::string::__grow_by(v2, v6, v5 + a2 - v6, v5, v5, 0, 0);
      LOBYTE(v3) = *v2;
    }
    v8 = (v3 & 1) == 0;
    result = (unsigned __int8 *)*((_DWORD *)v2 + 2);
    if ( v8 )
    {
      result = v2 + 1;
      *v2 = 2 * v7;
    }
    else
    {
      *((_DWORD *)v2 + 1) = v7;
    }
    result[v7] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x1eedb2
// SYMBOL: sub_1EEDB2
unsigned __int8 *__fastcall sub_1EEDB2(unsigned __int8 *result, int a2)
{
  if ( *result << 31 )
  {
    *(_BYTE *)(*((_DWORD *)result + 2) + a2) = 0;
    *((_DWORD *)result + 1) = a2;
  }
  else
  {
    result[a2 + 1] = 0;
    *result = 2 * a2;
  }
  return result;
}


// ======================================================================
