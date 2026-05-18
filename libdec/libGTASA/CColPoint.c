
// Address: 0x199c54
// Original: j__ZN9CColPointaSERKS_
// Demangled: CColPoint::operator=(CColPoint const&)
// attributes: thunk
int CColPoint::operator=()
{
  return _ZN9CColPointaSERKS_();
}


// ============================================================

// Address: 0x2e1c08
// Original: _ZN9CColPointaSERKS_
// Demangled: CColPoint::operator=(CColPoint const&)
int __fastcall CColPoint::operator=(int result, __int64 *a2)
{
  __int64 v2; // d16
  __int64 v3; // d16
  __int16 v4; // r3
  __int16 v5; // r3

  v2 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v2;
  v3 = a2[2];
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 6);
  *(_QWORD *)(result + 16) = v3;
  v4 = *((_WORD *)a2 + 16);
  *(_BYTE *)(result + 34) = *((_BYTE *)a2 + 34);
  *(_WORD *)(result + 32) = v4;
  v5 = *(_WORD *)((char *)a2 + 35);
  *(_BYTE *)(result + 37) = *((_BYTE *)a2 + 37);
  *(_WORD *)(result + 35) = v5;
  *(_DWORD *)(result + 40) = *((_DWORD *)a2 + 10);
  return result;
}


// ============================================================
