
// Address: 0x1985a8
// Original: j__ZN7CVector15NormaliseAndMagEv
// Demangled: CVector::NormaliseAndMag(void)
// attributes: thunk
int __fastcall CVector::NormaliseAndMag(CVector *this)
{
  return _ZN7CVector15NormaliseAndMagEv(this);
}


// ============================================================

// Address: 0x198728
// Original: j__ZN7CVector12FromMultiplyERK7CMatrixRKS_
// Demangled: CVector::FromMultiply(CMatrix const&,CVector const&)
// attributes: thunk
int __fastcall CVector::FromMultiply(CVector *this, const CMatrix *a2, const CVector *a3)
{
  return _ZN7CVector12FromMultiplyERK7CMatrixRKS_(this, a2, a3);
}


// ============================================================

// Address: 0x19ba04
// Original: j__ZN7CVector9NormaliseEv
// Demangled: CVector::Normalise(void)
// attributes: thunk
int __fastcall CVector::Normalise(CVector *this)
{
  return _ZN7CVector9NormaliseEv(this);
}


// ============================================================

// Address: 0x19c538
// Original: j__ZN7CVector15FromMultiply3X3ERK7CMatrixRKS_
// Demangled: CVector::FromMultiply3X3(CMatrix const&,CVector const&)
// attributes: thunk
int __fastcall CVector::FromMultiply3X3(CVector *this, const CMatrix *a2, const CVector *a3)
{
  return _ZN7CVector15FromMultiply3X3ERK7CMatrixRKS_(this, a2, a3);
}


// ============================================================

// Address: 0x4509b2
// Original: _ZN7CVector12FromMultiplyERK7CMatrixRKS_
// Demangled: CVector::FromMultiply(CMatrix const&,CVector const&)
float *__fastcall CVector::FromMultiply(float *result, float *a2, float *a3)
{
  *result = (float)((float)(a2[12] + (float)(*a2 * *a3)) + (float)(a2[4] * a3[1])) + (float)(a2[8] * a3[2]);
  result[1] = (float)((float)(a2[13] + (float)(a2[1] * *a3)) + (float)(a2[5] * a3[1])) + (float)(a2[9] * a3[2]);
  result[2] = (float)((float)(a2[14] + (float)(a2[2] * *a3)) + (float)(a2[6] * a3[1])) + (float)(a2[10] * a3[2]);
  return result;
}


// ============================================================

// Address: 0x450a5c
// Original: _ZN7CVector15FromMultiply3X3ERK7CMatrixRKS_
// Demangled: CVector::FromMultiply3X3(CMatrix const&,CVector const&)
float *__fastcall CVector::FromMultiply3X3(float *result, float *a2, float *a3)
{
  *result = (float)((float)(*a2 * *a3) + (float)(a2[4] * a3[1])) + (float)(a2[8] * a3[2]);
  result[1] = (float)((float)(a2[1] * *a3) + (float)(a2[5] * a3[1])) + (float)(a2[9] * a3[2]);
  result[2] = (float)((float)(a2[2] * *a3) + (float)(a2[6] * a3[1])) + (float)(a2[10] * a3[2]);
  return result;
}


// ============================================================

// Address: 0x450b80
// Original: _ZN7CVector9NormaliseEv
// Demangled: CVector::Normalise(void)
float *__fastcall CVector::Normalise(float *this)
{
  float v1; // s0
  float v2; // s4
  float v3; // s2
  float v4; // s6
  float v5; // s6

  v1 = *this;
  v2 = this[1];
  v3 = this[2];
  v4 = (float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v3 * v3);
  if ( v4 > 0.0 )
  {
    v5 = 1.0 / sqrtf(v4);
    *this = v1 * v5;
    this[1] = v5 * v2;
    this[2] = v5 * v3;
  }
  else
  {
    *this = 1.0;
  }
  return this;
}


// ============================================================

// Address: 0x450bd8
// Original: _ZN7CVector15NormaliseAndMagEv
// Demangled: CVector::NormaliseAndMag(void)
float __fastcall CVector::NormaliseAndMag(CVector *this)
{
  float v1; // s0
  float v2; // s4
  float v3; // s2
  float v4; // s6
  float v5; // s10

  v1 = *(float *)this;
  v2 = *((float *)this + 1);
  v3 = *((float *)this + 2);
  v4 = (float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v3 * v3);
  if ( v4 <= 0.0 )
  {
    *(_DWORD *)this = 1065353216;
    return 1.0;
  }
  else
  {
    v5 = 1.0 / sqrtf(v4);
    *(float *)this = v1 * v5;
    *((float *)this + 1) = v5 * v2;
    *((float *)this + 2) = v5 * v3;
    return 1.0 / v5;
  }
}


// ============================================================
