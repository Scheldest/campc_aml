
// Address: 0x18b510
// Original: j__ZNK16CSimpleTransform12UpdateMatrixEP7CMatrix
// Demangled: CSimpleTransform::UpdateMatrix(CMatrix *)
// attributes: thunk
int __fastcall CSimpleTransform::UpdateMatrix(CSimpleTransform *this, CMatrix *a2)
{
  return _ZNK16CSimpleTransform12UpdateMatrixEP7CMatrix(this, a2);
}


// ============================================================

// Address: 0x18dfe0
// Original: j__ZN16CSimpleTransform6InvertERKS_
// Demangled: CSimpleTransform::Invert(CSimpleTransform const&)
// attributes: thunk
int __fastcall CSimpleTransform::Invert(CSimpleTransform *a1, const CSimpleTransform *a2)
{
  return _ZN16CSimpleTransform6InvertERKS_(a1, a2);
}


// ============================================================

// Address: 0x197128
// Original: j__ZNK16CSimpleTransform14UpdateRwMatrixEP11RwMatrixTag
// Demangled: CSimpleTransform::UpdateRwMatrix(RwMatrixTag *)
// attributes: thunk
int CSimpleTransform::UpdateRwMatrix()
{
  return _ZNK16CSimpleTransform14UpdateRwMatrixEP11RwMatrixTag();
}


// ============================================================

// Address: 0x4085c8
// Original: _ZNK16CSimpleTransform14UpdateRwMatrixEP11RwMatrixTag
// Demangled: CSimpleTransform::UpdateRwMatrix(RwMatrixTag *)
int __fastcall CSimpleTransform::UpdateRwMatrix(float *a1, int a2)
{
  float v4; // r6
  float v5; // r0
  float v6; // s16
  float v7; // r0

  v4 = a1[3];
  *(_DWORD *)(a2 + 8) = 0;
  v5 = sinf(v4);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  v6 = -v5;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(float *)(a2 + 4) = v5;
  v7 = cosf(v4);
  *(float *)a2 = v7;
  *(float *)(a2 + 20) = v7;
  *(float *)(a2 + 16) = v6;
  *(float *)(a2 + 48) = *a1;
  *(float *)(a2 + 52) = a1[1];
  *(float *)(a2 + 56) = a1[2];
  return j_RwMatrixUpdate();
}


// ============================================================

// Address: 0x40862c
// Original: _ZNK16CSimpleTransform12UpdateMatrixEP7CMatrix
// Demangled: CSimpleTransform::UpdateMatrix(CMatrix *)
int __fastcall CSimpleTransform::UpdateMatrix(CSimpleTransform *this, CMatrix *a2)
{
  CMatrix::SetTranslate(a2, *(float *)this, *((float *)this + 1), *((float *)this + 2));
  return j_CMatrix::SetRotateZOnly(a2, *((float *)this + 3));
}


// ============================================================

// Address: 0x40864a
// Original: _ZN16CSimpleTransform6InvertERKS_
// Demangled: CSimpleTransform::Invert(CSimpleTransform const&)
float __fastcall CSimpleTransform::Invert(float *a1, float *a2)
{
  float v4; // r6
  float v5; // r8
  float result; // r0

  v4 = a2[3];
  v5 = cosf(v4);
  result = sinf(v4);
  *a1 = (float)-(float)(v5 * *a2) - (float)(result * a2[1]);
  a1[1] = (float)(result * *a2) - (float)(v5 * a2[1]);
  a1[2] = -a2[2];
  a1[3] = -a2[3];
  return result;
}


// ============================================================
