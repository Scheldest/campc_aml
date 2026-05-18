
// Address: 0x27e6d4
// Original: _ZN7OSArrayI8BankDataED2Ev
// Demangled: OSArray<BankData>::~OSArray()
_DWORD *__fastcall OSArray<BankData>::~OSArray(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *result; // r0

  v2 = (void *)a1[2];
  a1[1] = 0;
  if ( v2 )
  {
    free(v2);
    a1[2] = 0;
  }
  result = a1;
  *a1 = 0;
  return result;
}


// ============================================================
