// ADDR: 0x20a6e8
// SYMBOL: sub_20A6E8
bool __fastcall sub_20A6E8(_DWORD *a1, char *s, int a3)
{
  _BOOL4 result; // r0
  size_t v7; // r0
  unsigned int v8; // r1
  int v9; // [sp+4h] [bp-1Ch] BYREF
  int v10; // [sp+8h] [bp-18h] BYREF

  result = 0;
  if ( *s )
  {
    v10 = 0;
    v7 = strlen(s);
    v8 = sub_207F50((int)&v9, (int)s, v7, (int)&v10, a3);
    if ( v8 <= 0xFFFFFFFD )
      *a1 = v9;
    return v8 < 0xFFFFFFFE;
  }
  return result;
}


// ======================================================================
