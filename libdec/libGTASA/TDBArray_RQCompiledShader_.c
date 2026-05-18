
// Address: 0x1cdd02
// Original: _ZN8TDBArrayI16RQCompiledShaderED2Ev
// Demangled: TDBArray<RQCompiledShader>::~TDBArray()
_DWORD *__fastcall TDBArray<RQCompiledShader>::~TDBArray(_DWORD *a1)
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
