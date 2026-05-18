
// Address: 0x18b790
// Original: j__ZN10CPlaceable20AllocateStaticMatrixEv
// Demangled: CPlaceable::AllocateStaticMatrix(void)
// attributes: thunk
int __fastcall CPlaceable::AllocateStaticMatrix(CPlaceable *this)
{
  return _ZN10CPlaceable20AllocateStaticMatrixEv(this);
}


// ============================================================

// Address: 0x18d278
// Original: j__ZNK10CPlaceable12IsWithinAreaEffff
// Demangled: CPlaceable::IsWithinArea(float,float,float,float)
// attributes: thunk
int __fastcall CPlaceable::IsWithinArea(CPlaceable *this, float a2, float a3, float a4, float a5)
{
  return _ZNK10CPlaceable12IsWithinAreaEffff(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18e268
// Original: j__ZN10CPlaceableD2Ev
// Demangled: CPlaceable::~CPlaceable()
// attributes: thunk
void __fastcall CPlaceable::~CPlaceable(CPlaceable *this)
{
  _ZN10CPlaceableD2Ev(this);
}


// ============================================================

// Address: 0x18ed90
// Original: j__ZN10CPlaceable9SetMatrixERK7CMatrix
// Demangled: CPlaceable::SetMatrix(CMatrix const&)
// attributes: thunk
int __fastcall CPlaceable::SetMatrix(CPlaceable *this, const CMatrix *a2)
{
  return _ZN10CPlaceable9SetMatrixERK7CMatrix(this, a2);
}


// ============================================================

// Address: 0x195bc0
// Original: j__ZN10CPlaceable14AllocateMatrixEv
// Demangled: CPlaceable::AllocateMatrix(void)
// attributes: thunk
int __fastcall CPlaceable::AllocateMatrix(CPlaceable *this)
{
  return _ZN10CPlaceable14AllocateMatrixEv(this);
}


// ============================================================

// Address: 0x198c50
// Original: j__ZN10CPlaceableC2Ev
// Demangled: CPlaceable::CPlaceable(void)
// attributes: thunk
void __fastcall CPlaceable::CPlaceable(CPlaceable *this)
{
  _ZN10CPlaceableC2Ev(this);
}


// ============================================================

// Address: 0x19fabc
// Original: j__ZN10CPlaceable15InitMatrixArrayEv
// Demangled: CPlaceable::InitMatrixArray(void)
// attributes: thunk
int __fastcall CPlaceable::InitMatrixArray(CPlaceable *this)
{
  return _ZN10CPlaceable15InitMatrixArrayEv(this);
}


// ============================================================

// Address: 0x1a0120
// Original: j__ZNK10CPlaceable12IsWithinAreaEffffff
// Demangled: CPlaceable::IsWithinArea(float,float,float,float,float,float)
// attributes: thunk
int __fastcall CPlaceable::IsWithinArea(CPlaceable *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  return _ZNK10CPlaceable12IsWithinAreaEffffff(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x4086bc
// Original: _ZN10CPlaceableC2Ev
// Demangled: CPlaceable::CPlaceable(void)
void __fastcall CPlaceable::CPlaceable(CPlaceable *this)
{
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_667D24;
}


// ============================================================

// Address: 0x4086dc
// Original: _ZN10CPlaceableD2Ev
// Demangled: CPlaceable::~CPlaceable()
void __fastcall CPlaceable::~CPlaceable(CPlaceable *this)
{
  int v2; // r5
  int v3; // r6
  int v4; // r8
  int v5; // r9
  float v6; // r0
  __int64 v7; // kr00_8

  v2 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &off_667D24;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 48);
    v4 = *(_DWORD *)(v2 + 52);
    v5 = *(_DWORD *)(v2 + 56);
    v6 = atan2f(COERCE_FLOAT(*(_DWORD *)(v2 + 16) ^ 0x80000000), *(float *)(v2 + 20));
    *((_DWORD *)this + 1) = v3;
    *((_DWORD *)this + 2) = v4;
    *((_DWORD *)this + 3) = v5;
    *((_QWORD *)this + 2) = LODWORD(v6);
    v7 = *(_QWORD *)(v2 + 76);
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(HIDWORD(v7) + 76) = v7;
    *(_DWORD *)(*(_DWORD *)(v2 + 76) + 80) = *(_DWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 80) = dword_95AB28;
    *(_DWORD *)(dword_95AB28 + 76) = v2;
    *(_DWORD *)(v2 + 76) = &unk_95AAD8;
    dword_95AB28 = v2;
    --numMatrices;
  }
  *((_DWORD *)this + 5) = &gDummyMatrix;
}


// ============================================================

// Address: 0x408770
// Original: _ZN10CPlaceable12RemoveMatrixEv
// Demangled: CPlaceable::RemoveMatrix(void)
void *__fastcall CPlaceable::RemoveMatrix(CPlaceable *this)
{
  int v2; // r5
  int v3; // r6
  int v4; // r8
  int v5; // r9
  float v6; // r0
  __int64 v7; // kr00_8
  void *result; // r0

  v2 = *((_DWORD *)this + 5);
  v3 = *(_DWORD *)(v2 + 48);
  v4 = *(_DWORD *)(v2 + 52);
  v5 = *(_DWORD *)(v2 + 56);
  v6 = atan2f(COERCE_FLOAT(*(_DWORD *)(v2 + 16) ^ 0x80000000), *(float *)(v2 + 20));
  *((_DWORD *)this + 1) = v3;
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 3) = v5;
  *((_QWORD *)this + 2) = LODWORD(v6);
  v7 = *(_QWORD *)(v2 + 76);
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(HIDWORD(v7) + 76) = v7;
  *(_DWORD *)(*(_DWORD *)(v2 + 76) + 80) = *(_DWORD *)(v2 + 80);
  *(_DWORD *)(v2 + 80) = dword_95AB28;
  *(_DWORD *)(dword_95AB28 + 76) = v2;
  result = &unk_95AAD8;
  *(_DWORD *)(v2 + 76) = &unk_95AAD8;
  dword_95AB28 = v2;
  return result;
}


// ============================================================

// Address: 0x4087d0
// Original: _ZN10CPlaceableD0Ev
// Demangled: CPlaceable::~CPlaceable()
void __fastcall CPlaceable::~CPlaceable(CPlaceable *this)
{
  int v2; // r5
  int v3; // r6
  int v4; // r8
  int v5; // r9
  float v6; // r0
  __int64 v7; // kr00_8

  v2 = *((_DWORD *)this + 5);
  *(_DWORD *)this = &off_667D24;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 48);
    v4 = *(_DWORD *)(v2 + 52);
    v5 = *(_DWORD *)(v2 + 56);
    v6 = atan2f(COERCE_FLOAT(*(_DWORD *)(v2 + 16) ^ 0x80000000), *(float *)(v2 + 20));
    *((_DWORD *)this + 1) = v3;
    *((_DWORD *)this + 2) = v4;
    *((_DWORD *)this + 3) = v5;
    *((_QWORD *)this + 2) = LODWORD(v6);
    v7 = *(_QWORD *)(v2 + 76);
    *(_DWORD *)(v2 + 72) = 0;
    *(_DWORD *)(HIDWORD(v7) + 76) = v7;
    *(_DWORD *)(*(_DWORD *)(v2 + 76) + 80) = *(_DWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 80) = dword_95AB28;
    *(_DWORD *)(dword_95AB28 + 76) = v2;
    *(_DWORD *)(v2 + 76) = &unk_95AAD8;
    dword_95AB28 = v2;
    --numMatrices;
  }
  operator delete(this);
}


// ============================================================

// Address: 0x40885c
// Original: _ZN10CPlaceable9SetMatrixERK7CMatrix
// Demangled: CPlaceable::SetMatrix(CMatrix const&)
float __fastcall CPlaceable::SetMatrix(CPlaceable *this, const CMatrix *a2)
{
  float result; // r0
  __int64 v4; // kr00_8
  int v5; // r5

  if ( *((_DWORD *)this + 5) )
    return COERCE_FLOAT(CMatrix::operator=());
  if ( *((float *)a2 + 10) != 1.0 )
  {
    CPlaceable::AllocateMatrix(this);
    return COERCE_FLOAT(CMatrix::operator=());
  }
  v4 = *((_QWORD *)a2 + 6);
  v5 = *((_DWORD *)a2 + 14);
  result = atan2f(COERCE_FLOAT(*((_DWORD *)a2 + 4) ^ 0x80000000), *((float *)a2 + 5));
  *(_QWORD *)((char *)this + 4) = v4;
  *((_DWORD *)this + 3) = v5;
  *((float *)this + 4) = result;
  return result;
}


// ============================================================

// Address: 0x4088b4
// Original: _ZN10CPlaceable14AllocateMatrixEv
// Demangled: CPlaceable::AllocateMatrix(void)
int __fastcall CPlaceable::AllocateMatrix(CPlaceable *this)
{
  CMatrix *v2; // r0
  float *v3; // r4
  int v4; // r5
  int v5; // r9
  int v6; // r10
  int v7; // r11
  float v8; // r1
  __int64 v9; // kr00_8

  v2 = (CMatrix *)*((_DWORD *)this + 5);
  if ( !v2 )
  {
    v2 = (CMatrix *)dword_95AB28;
    if ( (_UNKNOWN *)dword_95AB28 == &unk_95AB2C
      || (*(_DWORD *)(*(_DWORD *)(dword_95AB28 + 80) + 76) = *(_DWORD *)(dword_95AB28 + 76),
          *(_DWORD *)(*((_DWORD *)v2 + 19) + 80) = *((_DWORD *)v2 + 20),
          *((_DWORD *)v2 + 20) = dword_95A9D8,
          *(_DWORD *)(dword_95A9D8 + 76) = v2,
          *((_DWORD *)v2 + 19) = &gMatrixList,
          (dword_95A9D8 = (int)v2) == 0) )
    {
      v3 = *(float **)(dword_95AA28 + 72);
      v4 = *((_DWORD *)v3 + 5);
      v5 = *(_DWORD *)(v4 + 48);
      v6 = *(_DWORD *)(v4 + 52);
      v7 = *(_DWORD *)(v4 + 56);
      v8 = atan2f(COERCE_FLOAT(*(_DWORD *)(v4 + 16) ^ 0x80000000), *(float *)(v4 + 20));
      v2 = 0;
      *((_DWORD *)v3 + 1) = v5;
      *((_DWORD *)v3 + 2) = v6;
      *((_DWORD *)v3 + 3) = v7;
      v3[4] = v8;
      v3[5] = 0.0;
      v9 = *(_QWORD *)(v4 + 76);
      *(_DWORD *)(v4 + 72) = 0;
      *(_DWORD *)(HIDWORD(v9) + 76) = v9;
      *(_DWORD *)(*(_DWORD *)(v4 + 76) + 80) = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(v4 + 80) = dword_95AB28;
      *(_DWORD *)(dword_95AB28 + 76) = v4;
      *(_DWORD *)(v4 + 76) = &unk_95AAD8;
      dword_95AB28 = v4;
      if ( (_UNKNOWN *)v4 != &unk_95AB2C )
      {
        *(_DWORD *)(*(_DWORD *)(v4 + 80) + 76) = *(_DWORD *)(v4 + 76);
        *(_DWORD *)(*(_DWORD *)(v4 + 76) + 80) = *(_DWORD *)(v4 + 80);
        *(_DWORD *)(v4 + 80) = dword_95A9D8;
        *(_DWORD *)(dword_95A9D8 + 76) = v4;
        v2 = (CMatrix *)v4;
        *(_DWORD *)(v4 + 76) = &gMatrixList;
        dword_95A9D8 = v4;
      }
    }
    *((_DWORD *)v2 + 18) = this;
    *((_DWORD *)this + 5) = v2;
  }
  return j_CMatrix::SetUnity(v2);
}


// ============================================================

// Address: 0x4089a0
// Original: _ZNK10CPlaceable12IsWithinAreaEffff
// Demangled: CPlaceable::IsWithinArea(float,float,float,float)
int __fastcall CPlaceable::IsWithinArea(CPlaceable *this, float a2, float a3, float a4, float a5)
{
  float32x2_t v5; // d1
  float32x2_t v6; // d2
  float32x2_t v7; // d3
  float32x2_t v8; // d4
  int v9; // r1
  float v10; // s0
  float *v11; // r2
  float v12; // s6

  v5.n64_f32[0] = a5;
  v7.n64_f32[0] = a3;
  v8.n64_f32[0] = a2;
  v9 = *((_DWORD *)this + 5);
  v6.n64_f32[0] = a4;
  LODWORD(v10) = vmax_f32(v7, v5).n64_u32[0];
  v11 = (float *)(v9 + 48);
  v5.n64_u32[0] = vmin_f32(v7, v5).n64_u32[0];
  LODWORD(v12) = vmax_f32(v8, v6).n64_u32[0];
  if ( !v9 )
    v11 = (float *)((char *)this + 4);
  return (v11[1] <= v10) & (*v11 <= v12) & (*v11 >= vmin_f32(v8, v6).n64_f32[0]) & (v11[1] >= v5.n64_f32[0]);
}


// ============================================================

// Address: 0x408a1a
// Original: _ZNK10CPlaceable12IsWithinAreaEffffff
// Demangled: CPlaceable::IsWithinArea(float,float,float,float,float,float)
int __fastcall CPlaceable::IsWithinArea(CPlaceable *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float32x2_t v7; // d1
  float32x2_t v8; // d2
  float32x2_t v9; // d3
  float32x2_t v10; // d4
  float32x2_t v11; // d5
  float32x2_t v12; // d6
  int v13; // r1
  float v14; // s0
  float v15; // s4
  float *v16; // r2
  float v17; // s10

  v7.n64_f32[0] = a7;
  v8.n64_f32[0] = a4;
  v11.n64_f32[0] = a6;
  v10.n64_f32[0] = a2;
  v12.n64_f32[0] = a5;
  v9.n64_f32[0] = a3;
  v13 = *((_DWORD *)this + 5);
  LODWORD(v14) = vmax_f32(v8, v7).n64_u32[0];
  v7.n64_u32[0] = vmin_f32(v8, v7).n64_u32[0];
  LODWORD(v15) = vmax_f32(v9, v11).n64_u32[0];
  v16 = (float *)(v13 + 48);
  v9.n64_u32[0] = vmin_f32(v9, v11).n64_u32[0];
  LODWORD(v17) = vmax_f32(v10, v12).n64_u32[0];
  if ( !v13 )
    v16 = (float *)((char *)this + 4);
  return (v16[2] <= v14) & (*v16 <= v17) & (*v16 >= vmin_f32(v10, v12).n64_f32[0]) & (v16[1] >= v9.n64_f32[0]) & (v16[1] <= v15) & (v16[2] >= v7.n64_f32[0]);
}


// ============================================================

// Address: 0x408ad0
// Original: _ZN10CPlaceable15InitMatrixArrayEv
// Demangled: CPlaceable::InitMatrixArray(void)
int __fastcall CPlaceable::InitMatrixArray(CPlaceable *this)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r2
  int v3; // r4
  _DWORD *v4; // lr
  int v5; // r1
  int v6; // r2
  int v7; // r5
  int v8; // r4
  int result; // r0

  v1 = (_DWORD *)operator new[](0x12758u);
  *v1 = 84;
  v1[1] = 900;
  v2 = v1 + 19;
  v3 = 75600;
  do
  {
    *(v2 - 1) = 0;
    v3 -= 84;
    *v2 = 0;
    v2 += 21;
  }
  while ( v3 );
  dword_95A9D8 = (int)&unk_95A9DC;
  dword_95AB80 = (int)(v1 + 2);
  dword_95AA80 = (int)&unk_95AA84;
  dword_95AAD0 = (int)&unk_95AA30;
  dword_95AA28 = (int)&gMatrixList;
  v4 = v1 + 18860;
  v1[18901] = &unk_95AB2C;
  dword_95AB78 = (int)(v1 + 18881);
  dword_95AB28 = (int)(v1 + 18881);
  v1[18900] = &unk_95AAD8;
  v1[18880] = v1 + 18881;
  *(_DWORD *)(dword_95AB28 + 76) = v1 + 18860;
  v1[18879] = &unk_95AAD8;
  v5 = 75348;
  dword_95AB28 = (int)(v1 + 18860);
  v6 = 898;
  do
  {
    v7 = dword_95AB80;
    --v6;
    v8 = dword_95AB80 + v5;
    v5 -= 84;
    *(_DWORD *)(v8 + 80) = v4;
    v4 = (_DWORD *)(v7 + 84 * v6);
    *(_DWORD *)(dword_95AB28 + 76) = v8;
    *(_DWORD *)(v8 + 76) = &unk_95AAD8;
    result = v5 + 84;
    dword_95AB28 = v8;
  }
  while ( v5 != -84 );
  return result;
}


// ============================================================

// Address: 0x408ba4
// Original: _ZN10CPlaceable19ShutdownMatrixArrayEv
// Demangled: CPlaceable::ShutdownMatrixArray(void)
void __fastcall CPlaceable::ShutdownMatrixArray(CPlaceable *this)
{
  int v1; // r1
  void *v2; // r4
  int v3; // r6
  int v4; // r5

  if ( dword_95AB80 )
  {
    v1 = *(_DWORD *)(dword_95AB80 - 4);
    v2 = (void *)(dword_95AB80 - 8);
    if ( v1 )
    {
      v3 = dword_95AB80 - 84;
      v4 = 84 * v1;
      do
      {
        CMatrix::~CMatrix((CMatrix *)(v3 + v4));
        v4 -= 84;
      }
      while ( v4 );
    }
    operator delete[](v2);
  }
  dword_95AB80 = 0;
}


// ============================================================

// Address: 0x408bfc
// Original: _ZN10CPlaceable20AllocateStaticMatrixEv
// Demangled: CPlaceable::AllocateStaticMatrix(void)
int __fastcall CPlaceable::AllocateStaticMatrix(CPlaceable *this)
{
  int result; // r0
  CMatrix *v3; // r0
  float *v4; // r4
  int v5; // r5
  int v6; // r9
  int v7; // r10
  int v8; // r11
  float v9; // r1
  __int64 v10; // kr00_8

  result = *((_DWORD *)this + 5);
  if ( result )
  {
    *(_DWORD *)(*(_DWORD *)(result + 80) + 76) = *(_DWORD *)(result + 76);
    *(_DWORD *)(*(_DWORD *)(result + 76) + 80) = *(_DWORD *)(result + 80);
    *(_DWORD *)(result + 80) = dword_95AA80;
    *(_DWORD *)(dword_95AA80 + 76) = result;
    *(_DWORD *)(result + 76) = &unk_95AA30;
    dword_95AA80 = result;
  }
  else
  {
    v3 = (CMatrix *)dword_95AB28;
    if ( (_UNKNOWN *)dword_95AB28 == &unk_95AB2C
      || (*(_DWORD *)(*(_DWORD *)(dword_95AB28 + 80) + 76) = *(_DWORD *)(dword_95AB28 + 76),
          *(_DWORD *)(*((_DWORD *)v3 + 19) + 80) = *((_DWORD *)v3 + 20),
          *((_DWORD *)v3 + 20) = dword_95AA80,
          *(_DWORD *)(dword_95AA80 + 76) = v3,
          *((_DWORD *)v3 + 19) = &unk_95AA30,
          (dword_95AA80 = (int)v3) == 0) )
    {
      v4 = *(float **)(dword_95AA28 + 72);
      v5 = *((_DWORD *)v4 + 5);
      v6 = *(_DWORD *)(v5 + 48);
      v7 = *(_DWORD *)(v5 + 52);
      v8 = *(_DWORD *)(v5 + 56);
      v9 = atan2f(COERCE_FLOAT(*(_DWORD *)(v5 + 16) ^ 0x80000000), *(float *)(v5 + 20));
      v3 = 0;
      *((_DWORD *)v4 + 1) = v6;
      *((_DWORD *)v4 + 2) = v7;
      *((_DWORD *)v4 + 3) = v8;
      v4[4] = v9;
      v4[5] = 0.0;
      v10 = *(_QWORD *)(v5 + 76);
      *(_DWORD *)(v5 + 72) = 0;
      *(_DWORD *)(HIDWORD(v10) + 76) = v10;
      *(_DWORD *)(*(_DWORD *)(v5 + 76) + 80) = *(_DWORD *)(v5 + 80);
      *(_DWORD *)(v5 + 80) = dword_95AB28;
      *(_DWORD *)(dword_95AB28 + 76) = v5;
      *(_DWORD *)(v5 + 76) = &unk_95AAD8;
      dword_95AB28 = v5;
      if ( (_UNKNOWN *)v5 != &unk_95AB2C )
      {
        *(_DWORD *)(*(_DWORD *)(v5 + 80) + 76) = *(_DWORD *)(v5 + 76);
        *(_DWORD *)(*(_DWORD *)(v5 + 76) + 80) = *(_DWORD *)(v5 + 80);
        *(_DWORD *)(v5 + 80) = dword_95AA80;
        *(_DWORD *)(dword_95AA80 + 76) = v5;
        *(_DWORD *)(v5 + 76) = &unk_95AA30;
        v3 = (CMatrix *)v5;
        dword_95AA80 = v5;
      }
    }
    *((_DWORD *)v3 + 18) = this;
    *((_DWORD *)this + 5) = v3;
    return j_CMatrix::SetUnity(v3);
  }
  return result;
}


// ============================================================

// Address: 0x408d2c
// Original: _ZN10CPlaceable16FreeStaticMatrixEv
// Demangled: CPlaceable::FreeStaticMatrix(void)
int __fastcall CPlaceable::FreeStaticMatrix(CPlaceable *this)
{
  int result; // r0

  result = *((_DWORD *)this + 5);
  *(_DWORD *)(*(_DWORD *)(result + 80) + 76) = *(_DWORD *)(result + 76);
  *(_DWORD *)(*(_DWORD *)(result + 76) + 80) = *(_DWORD *)(result + 80);
  *(_DWORD *)(result + 80) = dword_95A9D8;
  *(_DWORD *)(dword_95A9D8 + 76) = result;
  *(_DWORD *)(result + 76) = &gMatrixList;
  dword_95A9D8 = result;
  return result;
}


// ============================================================
