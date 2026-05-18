
// Address: 0x198640
// Original: j__ZN8CColLineC2ERK7CVectorS2_
// Demangled: CColLine::CColLine(CVector const&,CVector const&)
// attributes: thunk
void __fastcall CColLine::CColLine(CColLine *this, const CVector *a2, const CVector *a3)
{
  _ZN8CColLineC2ERK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x1a16f0
// Original: j__ZN8CColLine3SetERK7CVectorS2_
// Demangled: CColLine::Set(CVector const&,CVector const&)
// attributes: thunk
int __fastcall CColLine::Set(CColLine *this, const CVector *a2, const CVector *a3)
{
  return _ZN8CColLine3SetERK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x2d967c
// Original: _ZN8CColLineC2ERK7CVectorS2_
// Demangled: CColLine::CColLine(CVector const&,CVector const&)
int __fastcall CColLine::CColLine(int result, __int64 *a2, __int64 *a3)
{
  __int64 v3; // d16
  __int64 v4; // d16

  v3 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v3;
  v4 = *a3;
  *(_DWORD *)(result + 24) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(result + 16) = v4;
  return result;
}


// ============================================================

// Address: 0x2d9696
// Original: _ZN8CColLine3SetERK7CVectorS2_
// Demangled: CColLine::Set(CVector const&,CVector const&)
int __fastcall CColLine::Set(int result, __int64 *a2, __int64 *a3)
{
  __int64 v3; // d16
  __int64 v4; // d16

  v3 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v3;
  v4 = *a3;
  *(_DWORD *)(result + 24) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(result + 16) = v4;
  return result;
}


// ============================================================
