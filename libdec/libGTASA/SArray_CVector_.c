
// Address: 0x4ac302
// Original: _ZN6SArrayI7CVectorED2Ev
// Demangled: SArray<CVector>::~SArray()
_DWORD *__fastcall SArray<CVector>::~SArray(_DWORD *a1)
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
