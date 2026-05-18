
// Address: 0x295bd8
// Original: _ZN7OSArrayI7KeyPairED2Ev
// Demangled: OSArray<KeyPair>::~OSArray()
_DWORD *__fastcall OSArray<KeyPair>::~OSArray(_DWORD *a1)
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
