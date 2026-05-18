
// Address: 0x1957c0
// Original: j__ZN8RQShader11BuildSourceEjPPKcS2_
// Demangled: RQShader::BuildSource(uint,char const**,char const**)
// attributes: thunk
int __fastcall RQShader::BuildSource(RQShader *this, unsigned int a2, const char **a3, const char **a4)
{
  return _ZN8RQShader11BuildSourceEjPPKcS2_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1cfa38
// Original: _ZN8RQShader11BuildSourceEjPPKcS2_
// Demangled: RQShader::BuildSource(uint,char const**,char const**)
int __fastcall RQShader::BuildSource(RQShader *this, _DWORD *a2, const char **a3, const char **a4)
{
  int result; // r0

  byte_6BABE9 = 0;
  byte_6B8BE8 = 0;
  BuildPixelSource((unsigned int)this);
  BuildVertexSource((unsigned int)this);
  *a2 = &byte_6B8BE8;
  result = 1;
  *a3 = &byte_6BABE9;
  return result;
}


// ============================================================
