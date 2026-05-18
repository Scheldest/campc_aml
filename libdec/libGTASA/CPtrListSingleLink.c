
// Address: 0x19f7f4
// Original: j__ZN18CPtrListSingleLink5FlushEv
// Demangled: CPtrListSingleLink::Flush(void)
// attributes: thunk
int __fastcall CPtrListSingleLink::Flush(CPtrListSingleLink *this)
{
  return _ZN18CPtrListSingleLink5FlushEv(this);
}


// ============================================================

// Address: 0x40d9f0
// Original: _ZN18CPtrListSingleLink5FlushEv
// Demangled: CPtrListSingleLink::Flush(void)
_DWORD *__fastcall CPtrListSingleLink::Flush(_DWORD *this)
{
  int v1; // r2
  int i; // r3
  _DWORD *v3; // r1
  int v4; // r1
  int v5; // r2
  int v6; // lr

  v1 = *this;
  if ( *this )
  {
    for ( i = *this; ; i = v6 )
    {
      v6 = *(_DWORD *)(i + 4);
      if ( v1 == i )
      {
        v3 = this;
LABEL_4:
        *v3 = v6;
      }
      else
      {
        while ( v1 )
        {
          v3 = (_DWORD *)(v1 + 4);
          v1 = *(_DWORD *)(v1 + 4);
          if ( v1 == i )
            goto LABEL_4;
        }
      }
      v4 = CPools::ms_pPtrNodeSingleLinkPool;
      v5 = (i - *(_DWORD *)CPools::ms_pPtrNodeSingleLinkPool) >> 3;
      *(_BYTE *)(*(_DWORD *)(CPools::ms_pPtrNodeSingleLinkPool + 4) + v5) |= 0x80u;
      if ( v5 < *(_DWORD *)(v4 + 12) )
        *(_DWORD *)(v4 + 12) = v5;
      if ( !v6 )
        break;
      v1 = *this;
    }
  }
  return this;
}


// ============================================================
