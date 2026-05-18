
// Address: 0x44ebec
// Original: _ZN16CMatrixSerializeaSERK7CMatrix
// Demangled: CMatrixSerialize::operator=(CMatrix const&)
int __fastcall CMatrixSerialize::operator=(int result, __int64 *a2)
{
  __int64 v2; // d16
  __int64 v3; // d17
  __int64 v4; // d18
  __int64 v5; // d19
  __int64 *v6; // r2
  __int64 *v7; // r1
  __int64 v8; // d22
  __int64 v9; // d23
  __int64 v10; // d20
  __int64 v11; // d21

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v6 = a2 + 4;
  v7 = a2 + 6;
  v8 = *v7;
  v9 = v7[1];
  v10 = *v6;
  v11 = v6[1];
  *(_DWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 48) = v8;
  *(_QWORD *)(result + 56) = v9;
  *(_QWORD *)(result + 32) = v10;
  *(_QWORD *)(result + 40) = v11;
  *(_QWORD *)result = v2;
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = v5;
  return result;
}


// ============================================================
