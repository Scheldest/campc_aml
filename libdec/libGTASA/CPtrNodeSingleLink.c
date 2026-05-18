
// Address: 0x1a048c
// Original: j__ZN18CPtrNodeSingleLinknwEj
// Demangled: CPtrNodeSingleLink::operator new(uint)
// attributes: thunk
int __fastcall CPtrNodeSingleLink::operator new(CPtrNodeSingleLink *this, unsigned int a2)
{
  return _ZN18CPtrNodeSingleLinknwEj(this, a2);
}


// ============================================================

// Address: 0x1a0e84
// Original: j__ZN18CPtrNodeSingleLinkdlEPv
// Demangled: CPtrNodeSingleLink::operator delete(void *)
// attributes: thunk
void __fastcall CPtrNodeSingleLink::operator delete(void *a1)
{
  _ZN18CPtrNodeSingleLinkdlEPv(a1);
}


// ============================================================

// Address: 0x40d8d4
// Original: _ZN18CPtrNodeSingleLinknwEj
// Demangled: CPtrNodeSingleLink::operator new(uint)
int __fastcall CPtrNodeSingleLink::operator new(CPtrNodeSingleLink *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pPtrNodeSingleLinkPool;
  result = *(_DWORD *)(CPools::ms_pPtrNodeSingleLinkPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pPtrNodeSingleLinkPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 8 * v3[3];
}


// ============================================================

// Address: 0x40d934
// Original: _ZN18CPtrNodeSingleLinkdlEPv
// Demangled: CPtrNodeSingleLink::operator delete(void *)
void __fastcall CPtrNodeSingleLink::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pPtrNodeSingleLinkPool;
  v2 = (a1 - *(_DWORD *)CPools::ms_pPtrNodeSingleLinkPool) >> 3;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pPtrNodeSingleLinkPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================
