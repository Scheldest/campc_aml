
// Address: 0x18b40c
// Original: j__ZN10CSetPieces6UpdateEv
// Demangled: CSetPieces::Update(void)
// attributes: thunk
int __fastcall CSetPieces::Update(CSetPieces *this)
{
  return _ZN10CSetPieces6UpdateEv(this);
}


// ============================================================

// Address: 0x18d63c
// Original: j__ZN10CSetPieces4SaveEv
// Demangled: CSetPieces::Save(void)
// attributes: thunk
int __fastcall CSetPieces::Save(CSetPieces *this)
{
  return _ZN10CSetPieces4SaveEv(this);
}


// ============================================================

// Address: 0x1978d0
// Original: j__ZN10CSetPieces6AddOneEh9CVector2DS0_S0_S0_S0_S0_
// Demangled: CSetPieces::AddOne(uchar,CVector2D,CVector2D,CVector2D,CVector2D,CVector2D,CVector2D)
// attributes: thunk
int __fastcall CSetPieces::AddOne(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  return _ZN10CSetPieces6AddOneEh9CVector2DS0_S0_S0_S0_S0_(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}


// ============================================================

// Address: 0x19b6a0
// Original: j__ZN10CSetPieces4InitEv
// Demangled: CSetPieces::Init(void)
// attributes: thunk
int __fastcall CSetPieces::Init(CSetPieces *this)
{
  return _ZN10CSetPieces4InitEv(this);
}


// ============================================================

// Address: 0x1a0bc8
// Original: j__ZN10CSetPieces4LoadEv
// Demangled: CSetPieces::Load(void)
// attributes: thunk
int __fastcall CSetPieces::Load(CSetPieces *this)
{
  return _ZN10CSetPieces4LoadEv(this);
}


// ============================================================

// Address: 0x35e350
// Original: _ZN10CSetPieces4InitEv
// Demangled: CSetPieces::Init(void)
char *__fastcall CSetPieces::Init(CSetPieces *this)
{
  char *result; // r0

  result = &CSetPieces::bDebug;
  CSetPieces::bDebug = 0;
  CSetPieces::NumSetPieces = 0;
  return result;
}


// ============================================================

// Address: 0x35e36c
// Original: _ZN10CSetPieces6AddOneEh9CVector2DS0_S0_S0_S0_S0_
// Demangled: CSetPieces::AddOne(uchar,CVector2D,CVector2D,CVector2D,CVector2D,CVector2D,CVector2D)
int __fastcall CSetPieces::AddOne(
        int result,
        unsigned __int32 a2,
        unsigned __int32 a3,
        unsigned __int32 a4,
        unsigned __int32 a5,
        unsigned int a6,
        unsigned int a7,
        float a8,
        float a9,
        unsigned int a10,
        unsigned int a11,
        float a12,
        float a13)
{
  float32x2_t v13; // d4
  float32x2_t v14; // d5
  int v15; // r12
  float32x4_t v16; // q1
  float32x4_t v17; // q0
  char *v18; // r1

  v15 = CSetPieces::NumSetPieces;
  if ( CSetPieces::NumSetPieces <= 209 )
  {
    v14.n64_u32[0] = a2;
    v13.n64_u32[0] = a4;
    v16.n128_u32[2] = vmax_f32(v14, v13).n64_u32[0];
    v16.n128_u32[0] = vmin_f32(v14, v13).n64_u32[0];
    v14.n64_u32[0] = a3;
    v17.n128_u64[1] = __PAIR64__(a11, a10);
    v13.n64_u32[0] = a5;
    v17.n128_u64[0] = __PAIR64__(a7, a6);
    v18 = (char *)&CSetPieces::aSetPieces + 32 * CSetPieces::NumSetPieces;
    v16.n128_u32[1] = vmin_f32(v14, v13).n64_u32[0];
    v16.n128_u32[3] = vmax_f32(v14, v13).n64_u32[0];
    *(int16x4_t *)(v18 + 4) = vmovn_s32(vcvtq_n_s32_f32(v16, 2u));
    *(int16x4_t *)(v18 + 12) = vmovn_s32(vcvtq_n_s32_f32(v17, 2u));
    v18[28] = result;
    *((_WORD *)v18 + 10) = (int)(float)(a8 * 4.0);
    *((_WORD *)v18 + 11) = (int)(float)(a9 * 4.0);
    *((_WORD *)v18 + 12) = (int)(float)(a12 * 4.0);
    *((_WORD *)v18 + 13) = (int)(float)(a13 * 4.0);
    result = v15 + 1;
    CSetPieces::NumSetPieces = v15 + 1;
  }
  return result;
}


// ============================================================

// Address: 0x35e45c
// Original: _ZN10CSetPieces6UpdateEv
// Demangled: CSetPieces::Update(void)
unsigned int __fastcall CSetPieces::Update(CSetPieces *this)
{
  int v1; // r8
  unsigned int result; // r0
  int v3; // r6
  CSetPiece *v4; // r4

  v1 = (CTimer::m_FrameCounter & 7) + 1;
  result = (CTimer::m_FrameCounter & 7) * CSetPieces::NumSetPieces
         + ((unsigned int)(((CTimer::m_FrameCounter & 7) * CSetPieces::NumSetPieces) >> 31) >> 29);
  v3 = (CTimer::m_FrameCounter & 7) * CSetPieces::NumSetPieces / 8;
  if ( v3 < CSetPieces::NumSetPieces * v1 / 8 )
  {
    v4 = (CSetPiece *)((char *)&CSetPieces::aSetPieces + 32 * v3);
    do
    {
      CSetPiece::Update(v4);
      v4 = (CSetPiece *)((char *)v4 + 32);
      ++v3;
      result = CSetPieces::NumSetPieces * v1 + ((unsigned int)((CSetPieces::NumSetPieces * v1) >> 31) >> 29);
    }
    while ( v3 < CSetPieces::NumSetPieces * v1 / 8 );
  }
  return result;
}


// ============================================================

// Address: 0x48e0e0
// Original: _ZN10CSetPieces4SaveEv
// Demangled: CSetPieces::Save(void)
int __fastcall CSetPieces::Save(CSetPieces *this)
{
  CGenericGameStorage *v1; // r4
  int v2; // r2
  void *v3; // r4
  int v4; // r2

  v1 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v1 = CSetPieces::NumSetPieces;
  CGenericGameStorage::_SaveDataToWorkBuffer(v1, byte_4, v2);
  free(v1);
  v3 = malloc(0x1A40u);
  memcpy_1(v3, &CSetPieces::aSetPieces, 0x1A40u);
  CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v3, &elf_hash_bucket[1617], v4);
  free(v3);
  return 1;
}


// ============================================================

// Address: 0x48e13c
// Original: _ZN10CSetPieces4LoadEv
// Demangled: CSetPieces::Load(void)
int __fastcall CSetPieces::Load(CSetPieces *this, int a2, int a3)
{
  int v3; // r2

  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&CSetPieces::NumSetPieces, byte_4, a3);
  CGenericGameStorage::_LoadDataFromWorkBuffer(
    (CGenericGameStorage *)&CSetPieces::aSetPieces,
    &elf_hash_bucket[1617],
    v3);
  return 1;
}


// ============================================================
