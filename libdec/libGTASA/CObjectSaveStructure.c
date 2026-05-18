
// Address: 0x19a3dc
// Original: j__ZN20CObjectSaveStructure7ExtractEP7CObject
// Demangled: CObjectSaveStructure::Extract(CObject *)
// attributes: thunk
int __fastcall CObjectSaveStructure::Extract(CObjectSaveStructure *this, CObject *a2)
{
  return _ZN20CObjectSaveStructure7ExtractEP7CObject(this, a2);
}


// ============================================================

// Address: 0x19bd80
// Original: j__ZN20CObjectSaveStructure9ConstructEP7CObject
// Demangled: CObjectSaveStructure::Construct(CObject *)
// attributes: thunk
int __fastcall CObjectSaveStructure::Construct(CObjectSaveStructure *this, CObject *a2)
{
  return _ZN20CObjectSaveStructure9ConstructEP7CObject(this, a2);
}


// ============================================================

// Address: 0x484558
// Original: _ZN20CObjectSaveStructure9ConstructEP7CObject
// Demangled: CObjectSaveStructure::Construct(CObject *)
int __fastcall CObjectSaveStructure::Construct(CObjectSaveStructure *this, CMatrix **a2)
{
  CMatrix *v4; // r0
  __int16 v5; // r1
  int result; // r0
  unsigned int v7; // r1

  CCompressedMatrixNotAligned::CompressFromFullMatrix(this, a2[5]);
  *((_BYTE *)this + 24) = *((_BYTE *)a2 + 321);
  *((_WORD *)this + 13) = *((_WORD *)a2 + 161);
  *((_DWORD *)this + 7) = a2[85];
  v4 = a2[7];
  *((_DWORD *)this + 9) = a2[8];
  *((_DWORD *)this + 8) = v4;
  *((_BYTE *)this + 40) = 0;
  *(_DWORD *)((char *)this + 42) = a2[81];
  *((_BYTE *)this + 46) = *((_BYTE *)a2 + 320);
  *((_BYTE *)this + 47) = *((_BYTE *)a2 + 328);
  *((_BYTE *)this + 48) = *((_BYTE *)a2 + 329);
  v5 = *((_WORD *)a2 + 182);
  *((_BYTE *)this + 49) = 0;
  *((_WORD *)this + 25) = v5;
  result = ((unsigned int)a2[17] >> 2) & 1;
  *((_BYTE *)this + 49) = ((unsigned int)a2[17] & 4) != 0;
  v7 = (unsigned int)a2[17];
  if ( (v7 & 0x2000) != 0 )
  {
    result |= 2u;
    *((_BYTE *)this + 49) = result;
    v7 = (unsigned int)a2[17];
  }
  if ( (v7 & 0x40000) != 0 )
  {
    result |= 4u;
    *((_BYTE *)this + 49) = result;
    v7 = (unsigned int)a2[17];
  }
  if ( (v7 & 0x80000) != 0 )
  {
    result |= 8u;
    *((_BYTE *)this + 49) = result;
    v7 = (unsigned int)a2[17];
  }
  if ( (v7 & 0x100000) != 0 )
  {
    result |= 0x10u;
    *((_BYTE *)this + 49) = result;
    v7 = (unsigned int)a2[17];
  }
  if ( (v7 & 0x200000) != 0 )
  {
    result |= 0x20u;
    *((_BYTE *)this + 49) = result;
    v7 = (unsigned int)a2[17];
  }
  if ( (v7 & 0x800000) != 0 )
  {
    result |= 0x40u;
    *((_BYTE *)this + 49) = result;
  }
  return result;
}


// ============================================================

// Address: 0x484612
// Original: _ZN20CObjectSaveStructure7ExtractEP7CObject
// Demangled: CObjectSaveStructure::Extract(CObject *)
int __fastcall CObjectSaveStructure::Extract(CObjectSaveStructure *this, CObject *a2)
{
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r2
  int result; // r0

  CCompressedMatrixNotAligned::DecompressIntoFullMatrix(this, *((CMatrix **)a2 + 5));
  *((_BYTE *)a2 + 321) = *((_BYTE *)this + 24);
  *((_WORD *)a2 + 161) = *((_WORD *)this + 13);
  *((_DWORD *)a2 + 85) = *((_DWORD *)this + 7);
  *(_QWORD *)((char *)a2 + 28) = *((_QWORD *)this + 4);
  v4 = *(_DWORD *)((char *)this + 42);
  *((_BYTE *)a2 + 320) = 2;
  *((_DWORD *)a2 + 81) = v4;
  *((_BYTE *)a2 + 328) = *((_BYTE *)this + 47);
  v5 = *((_DWORD *)a2 + 17);
  *((_BYTE *)a2 + 329) = *((_BYTE *)this + 48);
  v6 = v5 & 0xFFFFFFFB;
  *((_WORD *)a2 + 182) = *((_WORD *)this + 25);
  if ( (*((_BYTE *)this + 49) & 1) != 0 )
    v6 = v5 | 4;
  *((_DWORD *)a2 + 17) = v6;
  v7 = v6 & 0xFFFFDFFF;
  if ( (*((_BYTE *)this + 49) & 2) != 0 )
    v7 = v6 | 0x2000;
  *((_DWORD *)a2 + 17) = v7;
  v8 = v7 & 0xFFFBFFFF;
  if ( (*((_BYTE *)this + 49) & 4) != 0 )
    v8 = v7 | 0x40000;
  *((_DWORD *)a2 + 17) = v8;
  v9 = v8 & 0xFFF7FFFF;
  if ( (*((_BYTE *)this + 49) & 8) != 0 )
    v9 = v8 | 0x80000;
  *((_DWORD *)a2 + 17) = v9;
  v10 = v9 & 0xFFEFFFFF;
  if ( (*((_BYTE *)this + 49) & 0x10) != 0 )
    v10 = v9 | 0x100000;
  *((_DWORD *)a2 + 17) = v10;
  v11 = v10 & 0xFFDFFFFF;
  if ( (*((_BYTE *)this + 49) & 0x20) != 0 )
    v11 = v10 | 0x200000;
  *((_DWORD *)a2 + 17) = v11;
  v12 = v11 & 0xFF7FFFFF;
  result = *((unsigned __int8 *)this + 49);
  if ( (result & 0x40) != 0 )
    v12 = v11 | 0x800000;
  *((_DWORD *)a2 + 17) = v12;
  return result;
}


// ============================================================
