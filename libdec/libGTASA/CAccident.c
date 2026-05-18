
// Address: 0x3bee3c
// Original: _ZNK9CAccident6IsFreeEv
// Demangled: CAccident::IsFree(void)
bool __fastcall CAccident::IsFree(CAccident *this)
{
  int v1; // r1
  _BOOL4 result; // r0
  int v3; // r2

  v1 = *(_DWORD *)this;
  if ( !*(_DWORD *)this || *((_BYTE *)this + 4) )
    return 0;
  v3 = *((unsigned __int8 *)this + 5);
  result = 0;
  if ( !v3 )
    return *(unsigned __int8 *)(v1 + 69) << 31 == 0;
  return result;
}


// ============================================================
