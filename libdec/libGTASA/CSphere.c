
// Address: 0x18ad00
// Original: j__ZN7CSphere3SetEfRK7CVector
// Demangled: CSphere::Set(float,CVector const&)
// attributes: thunk
int __fastcall CSphere::Set(CSphere *this, float a2, const CVector *a3)
{
  return _ZN7CSphere3SetEfRK7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x2e1c44
// Original: _ZN7CSphere3SetEfRK7CVector
// Demangled: CSphere::Set(float,CVector const&)
int __fastcall CSphere::Set(int result, int a2, __int64 *a3)
{
  __int64 v3; // d16

  *(_DWORD *)(result + 12) = a2;
  v3 = *a3;
  *(_DWORD *)(result + 8) = *((_DWORD *)a3 + 2);
  *(_QWORD *)result = v3;
  return result;
}


// ============================================================
