
// Address: 0x19c45c
// Original: j__ZN8CPtrList14IsMemberOfListEPv
// Demangled: CPtrList::IsMemberOfList(void *)
// attributes: thunk
int __fastcall CPtrList::IsMemberOfList(CPtrList *this, void *a2)
{
  return _ZN8CPtrList14IsMemberOfListEPv(this, a2);
}


// ============================================================

// Address: 0x40dab8
// Original: _ZN8CPtrList13CountElementsEv
// Demangled: CPtrList::CountElements(void)
int __fastcall CPtrList::CountElements(CPtrList *this)
{
  int v1; // r1
  int result; // r0

  v1 = *(_DWORD *)this;
  result = 0;
  while ( v1 )
  {
    v1 = *(_DWORD *)(v1 + 4);
    ++result;
  }
  return result;
}


// ============================================================

// Address: 0x40daca
// Original: _ZN8CPtrList14IsMemberOfListEPv
// Demangled: CPtrList::IsMemberOfList(void *)
int __fastcall CPtrList::IsMemberOfList(CPtrList *this, void *a2)
{
  int v2; // r0

  v2 = *(_DWORD *)this;
  if ( !v2 )
    return 0;
  while ( *(void **)v2 != a2 )
  {
    v2 = *(_DWORD *)(v2 + 4);
    if ( !v2 )
      return 0;
  }
  return 1;
}


// ============================================================
