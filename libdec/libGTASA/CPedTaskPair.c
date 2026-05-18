
// Address: 0x19e744
// Original: j__ZN12CPedTaskPair5FlushEv
// Demangled: CPedTaskPair::Flush(void)
// attributes: thunk
int __fastcall CPedTaskPair::Flush(CPedTaskPair *this)
{
  return _ZN12CPedTaskPair5FlushEv(this);
}


// ============================================================

// Address: 0x4a8524
// Original: _ZN12CPedTaskPair5FlushEv
// Demangled: CPedTaskPair::Flush(void)
int __fastcall CPedTaskPair::Flush(CPedTaskPair *this)
{
  int v2; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 1);
  *(_DWORD *)this = 0;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  result = -1;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = -1;
  return result;
}


// ============================================================
