
// Address: 0x198edc
// Original: j__ZN14CEntryInfoList5FlushEv
// Demangled: CEntryInfoList::Flush(void)
// attributes: thunk
int __fastcall CEntryInfoList::Flush(CEntryInfoList *this)
{
  return _ZN14CEntryInfoList5FlushEv(this);
}


// ============================================================

// Address: 0x3eeeac
// Original: _ZN14CEntryInfoList5FlushEv
// Demangled: CEntryInfoList::Flush(void)
int *__fastcall CEntryInfoList::Flush(int *this)
{
  int v1; // r1
  int i; // r3
  int v3; // r2
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r3

  v1 = *this;
  if ( *this )
  {
    for ( i = *this; ; i = v3 )
    {
      v3 = *(_DWORD *)(i + 16);
      if ( v1 == i )
        *this = v3;
      v4 = *(_DWORD *)(i + 12);
      if ( v4 )
        *(_DWORD *)(v4 + 16) = *(_DWORD *)(i + 16);
      v5 = *(_DWORD *)(i + 16);
      if ( v5 )
        *(_DWORD *)(v5 + 12) = *(_DWORD *)(i + 12);
      v6 = CPools::ms_pEntryInfoNodePool;
      v7 = -858993459 * ((i - *(_DWORD *)CPools::ms_pEntryInfoNodePool) >> 2);
      *(_BYTE *)(*(_DWORD *)(CPools::ms_pEntryInfoNodePool + 4) + v7) |= 0x80u;
      if ( v7 < *(_DWORD *)(v6 + 12) )
        *(_DWORD *)(v6 + 12) = v7;
      if ( !v3 )
        break;
      v1 = *this;
    }
  }
  return this;
}


// ============================================================
