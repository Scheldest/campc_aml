
// Address: 0x18c078
// Original: j__ZN27CCompressedMatrixNotAligned24DecompressIntoFullMatrixER7CMatrix
// Demangled: CCompressedMatrixNotAligned::DecompressIntoFullMatrix(CMatrix &)
// attributes: thunk
int __fastcall CCompressedMatrixNotAligned::DecompressIntoFullMatrix(CCompressedMatrixNotAligned *this, CMatrix *a2)
{
  return _ZN27CCompressedMatrixNotAligned24DecompressIntoFullMatrixER7CMatrix(this, a2);
}


// ============================================================

// Address: 0x199eb4
// Original: j__ZN27CCompressedMatrixNotAligned22CompressFromFullMatrixER7CMatrix
// Demangled: CCompressedMatrixNotAligned::CompressFromFullMatrix(CMatrix &)
// attributes: thunk
int __fastcall CCompressedMatrixNotAligned::CompressFromFullMatrix(CCompressedMatrixNotAligned *this, CMatrix *a2)
{
  return _ZN27CCompressedMatrixNotAligned22CompressFromFullMatrixER7CMatrix(this, a2);
}


// ============================================================

// Address: 0x44fd80
// Original: _ZN27CCompressedMatrixNotAligned24DecompressIntoFullMatrixER7CMatrix
// Demangled: CCompressedMatrixNotAligned::DecompressIntoFullMatrix(CMatrix &)
int __fastcall CCompressedMatrixNotAligned::DecompressIntoFullMatrix(CCompressedMatrixNotAligned *this, CMatrix *a2)
{
  int v4; // r1
  int v5; // r2
  float v6; // s0
  float v7; // s10
  float v8; // s2
  float v9; // s4
  float v10; // s1
  float v11; // s8
  float v12; // s6
  int result; // r0
  float v14; // s12
  float v15; // s4
  float v16; // s0
  float v17; // s2
  float v18; // s0
  float v19; // s12
  float v20; // s2
  float v21; // s4
  float v22; // s10
  float v23; // s6
  float v24; // s8
  float v25; // s6
  float v26; // s4
  float v27; // s8
  _DWORD v28[5]; // [sp+4h] [bp-14h] BYREF

  *(float *)a2 = (float)*((char *)this + 12) / 127.0;
  *((float *)a2 + 1) = (float)*((char *)this + 13) / 127.0;
  *((float *)a2 + 2) = (float)*((char *)this + 14) / 127.0;
  *((float *)a2 + 4) = (float)*((char *)this + 15) / 127.0;
  *((float *)a2 + 5) = (float)*((char *)this + 16) / 127.0;
  *((float *)a2 + 6) = (float)*((char *)this + 17) / 127.0;
  CrossProduct((const CVector *)v28, a2);
  v4 = v28[1];
  v5 = v28[2];
  v6 = *(float *)a2;
  v7 = *((float *)a2 + 6);
  v8 = *((float *)a2 + 1);
  v9 = *((float *)a2 + 2);
  v10 = v7 * *(float *)a2;
  v11 = *((float *)a2 + 5);
  v12 = *((float *)a2 + 4);
  *((_DWORD *)a2 + 8) = v28[0];
  *((_DWORD *)a2 + 9) = v4;
  *((_DWORD *)a2 + 10) = v5;
  *((_DWORD *)a2 + 12) = *(_DWORD *)this;
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 1);
  result = *((_DWORD *)this + 2);
  v14 = (float)(v8 * v7) - (float)(v9 * v11);
  *((_DWORD *)a2 + 14) = result;
  v15 = (float)(v9 * v12) - v10;
  v16 = (float)(v11 * v6) - (float)(v8 * v12);
  v17 = 1.0 / sqrtf((float)(v16 * v16) + (float)((float)(v14 * v14) + (float)(v15 * v15)));
  v18 = v16 * v17;
  v19 = v14 * v17;
  v20 = v15 * v17;
  *((float *)a2 + 8) = v19;
  *((float *)a2 + 9) = v20;
  *((float *)a2 + 10) = v18;
  v21 = (float)(v7 * v19) - (float)(v12 * v18);
  v22 = (float)(v11 * v18) - (float)(v7 * v20);
  v23 = (float)(v12 * v20) - (float)(v11 * v19);
  v24 = 1.0 / sqrtf((float)(v23 * v23) + (float)((float)(v22 * v22) + (float)(v21 * v21)));
  v25 = v23 * v24;
  v26 = v21 * v24;
  v27 = v22 * v24;
  *(float *)a2 = v27;
  *((float *)a2 + 1) = v26;
  *((float *)a2 + 2) = v25;
  *((float *)a2 + 4) = (float)(v20 * v25) - (float)(v18 * v26);
  *((float *)a2 + 5) = (float)(v18 * v27) - (float)(v19 * v25);
  *((float *)a2 + 6) = (float)(v19 * v26) - (float)(v20 * v27);
  return result;
}


// ============================================================

// Address: 0x44ff2c
// Original: _ZN27CCompressedMatrixNotAligned22CompressFromFullMatrixER7CMatrix
// Demangled: CCompressedMatrixNotAligned::CompressFromFullMatrix(CMatrix &)
int __fastcall CCompressedMatrixNotAligned::CompressFromFullMatrix(int this, CMatrix *a2)
{
  *(_BYTE *)(this + 12) = (int)(float)(*(float *)a2 * 127.0);
  *(_BYTE *)(this + 13) = (int)(float)(*((float *)a2 + 1) * 127.0);
  *(_BYTE *)(this + 14) = (int)(float)(*((float *)a2 + 2) * 127.0);
  *(_BYTE *)(this + 15) = (int)(float)(*((float *)a2 + 4) * 127.0);
  *(_BYTE *)(this + 16) = (int)(float)(*((float *)a2 + 5) * 127.0);
  *(_BYTE *)(this + 17) = (int)(float)(*((float *)a2 + 6) * 127.0);
  *(_DWORD *)this = *((_DWORD *)a2 + 12);
  *(_DWORD *)(this + 4) = *((_DWORD *)a2 + 13);
  *(_DWORD *)(this + 8) = *((_DWORD *)a2 + 14);
  return this;
}


// ============================================================
