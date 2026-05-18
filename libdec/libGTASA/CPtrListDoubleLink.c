
// Address: 0x19e1c8
// Original: j__ZN18CPtrListDoubleLink5FlushEv
// Demangled: CPtrListDoubleLink::Flush(void)
// attributes: thunk
int __fastcall CPtrListDoubleLink::Flush(CPtrListDoubleLink *this)
{
  return _ZN18CPtrListDoubleLink5FlushEv(this);
}


// ============================================================

// Address: 0x40da50
// Original: _ZN18CPtrListDoubleLink5FlushEv
// Demangled: CPtrListDoubleLink::Flush(void)
int *__fastcall CPtrListDoubleLink::Flush(int *this)
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
      v3 = *(_DWORD *)(i + 4);
      if ( v1 == i )
        *this = v3;
      v4 = *(_DWORD *)(i + 8);
      if ( v4 )
        *(_DWORD *)(v4 + 4) = *(_DWORD *)(i + 4);
      v5 = *(_DWORD *)(i + 4);
      if ( v5 )
        *(_DWORD *)(v5 + 8) = *(_DWORD *)(i + 8);
      v6 = CPools::ms_pPtrNodeDoubleLinkPool;
      v7 = -1431655765 * ((i - *(_DWORD *)CPools::ms_pPtrNodeDoubleLinkPool) >> 2);
      *(_BYTE *)(*(_DWORD *)(CPools::ms_pPtrNodeDoubleLinkPool + 4) + v7) |= 0x80u;
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

// Address: 0x42ccec
// Original: _ZN18CPtrListDoubleLinkD2Ev
// Demangled: CPtrListDoubleLink::~CPtrListDoubleLink()
void __fastcall CPtrListDoubleLink::~CPtrListDoubleLink(CPtrListDoubleLink *this)
{
  CPtrListDoubleLink::Flush(this);
}


// ============================================================
