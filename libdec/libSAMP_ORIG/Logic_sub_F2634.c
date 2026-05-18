// ADDR: 0xf27f4
// SYMBOL: sub_F27F4
bool __fastcall sub_F27F4(_DWORD *a1, char *s, int a3)
{
  _BOOL4 result; // r0
  size_t v7; // r0
  size_t v8; // r1
  wchar_t v9; // [sp+4h] [bp-1Ch] BYREF
  mbstate_t v10; // [sp+8h] [bp-18h] BYREF

  result = 0;
  if ( *s )
  {
    v10.__count = 0;
    v7 = strlen(s);
    v8 = sub_F005C(&v9, s, v7, &v10, a3);
    if ( v8 <= 0xFFFFFFFD )
      *a1 = v9;
    return v8 < 0xFFFFFFFE;
  }
  return result;
}


// ======================================================================
