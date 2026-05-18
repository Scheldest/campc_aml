
// Address: 0x1cc5fc
// Original: _ZN18ES2RQShaderBinding5SetupEjPKc
// Demangled: ES2RQShaderBinding::Setup(uint,char const*)
int __fastcall ES2RQShaderBinding::Setup(ES2RQShaderBinding *this, unsigned int a2, const char *a3)
{
  int result; // r0

  result = glGetUniformLocation();
  *(_DWORD *)this = result;
  return result;
}


// ============================================================
