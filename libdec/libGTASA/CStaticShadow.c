
// Address: 0x5b8fd4
// Original: _ZN13CStaticShadow4FreeEv
// Demangled: CStaticShadow::Free(void)
_DWORD *__fastcall CStaticShadow::Free(_DWORD *this)
{
  int v1; // r1
  int v2; // r2
  int v3; // r3

  v1 = this[1];
  if ( v1 )
  {
    v2 = CShadows::pEmptyBunchList;
    CShadows::pEmptyBunchList = this[1];
    do
    {
      v3 = v1;
      v1 = *(_DWORD *)(v1 + 84);
    }
    while ( v1 );
    *(_DWORD *)(v3 + 84) = v2;
  }
  *this = 0;
  this[1] = 0;
  return this;
}


// ============================================================
