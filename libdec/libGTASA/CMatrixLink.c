
// Address: 0x407f68
// Original: _ZN11CMatrixLink6InsertEPS_
// Demangled: CMatrixLink::Insert(CMatrixLink*)
int __fastcall CMatrixLink::Insert(int result, int a2)
{
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(result + 80);
  *(_DWORD *)(*(_DWORD *)(result + 80) + 76) = a2;
  *(_DWORD *)(a2 + 76) = result;
  *(_DWORD *)(result + 80) = a2;
  return result;
}


// ============================================================

// Address: 0x407f76
// Original: _ZN11CMatrixLink6RemoveEv
// Demangled: CMatrixLink::Remove(void)
__int64 __fastcall CMatrixLink::Remove(CMatrixLink *this)
{
  __int64 result; // r0
  __int64 v2; // kr00_8

  *(_DWORD *)(*((_DWORD *)this + 20) + 76) = *((_DWORD *)this + 19);
  v2 = *(_QWORD *)((char *)this + 76);
  LODWORD(result) = *((_DWORD *)this + 20);
  HIDWORD(result) = v2;
  *(_DWORD *)(v2 + 80) = result;
  return result;
}


// ============================================================
