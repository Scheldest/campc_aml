
// Address: 0x195470
// Original: j__ZN8CColDisk3SetEfRK7CVectorS2_fhhh
// Demangled: CColDisk::Set(float,CVector const&,CVector const&,float,uchar,uchar,uchar)
// attributes: thunk
int __fastcall CColDisk::Set(
        CColDisk *this,
        int a2,
        const CVector *a3,
        const CVector *a4,
        float a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  return _ZN8CColDisk3SetEfRK7CVectorS2_fhhh((int)this, a2, (int)a3, (int)a4, a5, a6);
}


// ============================================================

// Address: 0x2e200c
// Original: _ZN8CColDisk3SetEfRK7CVectorS2_fhhh
// Demangled: CColDisk::Set(float,CVector const&,CVector const&,float,uchar,uchar,uchar)
int __fastcall CColDisk::Set(int result, int a2, __int64 *a3, __int64 *a4, float a5, char a6, char a7, char a8)
{
  __int64 v8; // d16
  __int64 v9; // d16

  *(_DWORD *)(result + 12) = a2;
  v8 = *a3;
  *(_DWORD *)(result + 8) = *((_DWORD *)a3 + 2);
  *(_QWORD *)result = v8;
  v9 = *a4;
  *(_DWORD *)(result + 28) = *((_DWORD *)a4 + 2);
  *(float *)(result + 32) = a5;
  *(_BYTE *)(result + 16) = a6;
  *(_BYTE *)(result + 17) = a7;
  *(_BYTE *)(result + 18) = a8;
  *(_QWORD *)(result + 20) = v9;
  return result;
}


// ============================================================
