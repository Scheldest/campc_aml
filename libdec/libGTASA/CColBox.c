
// Address: 0x1948e0
// Original: j__ZN7CColBox3SetERK7CVectorS2_hhh
// Demangled: CColBox::Set(CVector const&,CVector const&,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CColBox::Set(
        CColBox *this,
        const CVector *a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  return _ZN7CColBox3SetERK7CVectorS2_hhh(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19e040
// Original: j__ZN7CColBoxaSERKS_
// Demangled: CColBox::operator=(CColBox const&)
// attributes: thunk
int CColBox::operator=()
{
  return _ZN7CColBoxaSERKS_();
}


// ============================================================

// Address: 0x2d9632
// Original: _ZN7CColBox3SetERK7CVectorS2_hhh
// Demangled: CColBox::Set(CVector const&,CVector const&,uchar,uchar,uchar)
int __fastcall CColBox::Set(int result, __int64 *a2, __int64 *a3, char a4, char a5, char a6)
{
  __int64 v6; // d16
  __int64 v7; // d16

  v6 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v6;
  v7 = *a3;
  *(_DWORD *)(result + 20) = *((_DWORD *)a3 + 2);
  *(_BYTE *)(result + 24) = a4;
  *(_BYTE *)(result + 25) = a5;
  *(_BYTE *)(result + 26) = a6;
  *(_QWORD *)(result + 12) = v7;
  return result;
}


// ============================================================

// Address: 0x2d9658
// Original: _ZN7CColBoxaSERKS_
// Demangled: CColBox::operator=(CColBox const&)
int __fastcall CColBox::operator=(int result, __int64 *a2)
{
  __int64 v2; // d16
  __int64 v3; // d16
  char v4; // r2
  __int16 v5; // r1

  v2 = *a2;
  *(_DWORD *)(result + 8) = *((_DWORD *)a2 + 2);
  *(_QWORD *)result = v2;
  v3 = *(__int64 *)((char *)a2 + 12);
  *(_DWORD *)(result + 20) = *((_DWORD *)a2 + 5);
  *(_QWORD *)(result + 12) = v3;
  v4 = *((_BYTE *)a2 + 26);
  v5 = *((_WORD *)a2 + 12);
  *(_BYTE *)(result + 26) = v4;
  *(_WORD *)(result + 24) = v5;
  return result;
}


// ============================================================
