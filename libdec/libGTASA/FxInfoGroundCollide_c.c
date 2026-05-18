
// Address: 0x36adbc
// Original: _ZN21FxInfoGroundCollide_cC2Ev
// Demangled: FxInfoGroundCollide_c::FxInfoGroundCollide_c(void)
void __fastcall FxInfoGroundCollide_c::FxInfoGroundCollide_c(FxInfoGroundCollide_c *this)
{
  *(_DWORD *)this = &off_665B04;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoGroundCollide_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 3;
  *((_WORD *)this + 2) = 8224;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 12, 4);
}


// ============================================================

// Address: 0x36adfc
// Original: _ZN21FxInfoGroundCollide_c4LoadEji
// Demangled: FxInfoGroundCollide_c::Load(uint,int)
int __fastcall FxInfoGroundCollide_c::Load(FxInfoGroundCollide_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoGroundCollide_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36ae04
// Original: _ZN21FxInfoGroundCollide_c8GetValueEffffhPv
// Demangled: FxInfoGroundCollide_c::GetValue(float,float,float,float,uchar,void *)
int __fastcall FxInfoGroundCollide_c::GetValue(
        FxInfoGroundCollide_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  int v9; // r3
  int result; // r0
  float v12; // s16
  float v13; // s22
  float v14; // s24
  float v15; // s26
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s18
  float v20; // s6
  float v21; // s6
  float v22; // s0
  float v23; // r5
  float v24; // [sp+1Ch] [bp-D4h]
  float v25; // [sp+20h] [bp-D0h]
  float v26; // [sp+24h] [bp-CCh]
  float v27; // [sp+28h] [bp-C8h]
  float v28[16]; // [sp+34h] [bp-BCh] BYREF
  _BYTE v29[4]; // [sp+74h] [bp-7Ch] BYREF
  _BYTE v30[8]; // [sp+78h] [bp-78h] BYREF
  float v31; // [sp+80h] [bp-70h]
  float v32; // [sp+88h] [bp-68h]
  float v33; // [sp+8Ch] [bp-64h]
  float v34; // [sp+90h] [bp-60h]
  __int64 v35; // [sp+A4h] [bp-4Ch] BYREF
  float v36; // [sp+ACh] [bp-44h]

  v9 = *((unsigned __int8 *)this + 6);
  v35 = *(_QWORD *)a7;
  v36 = a7[2];
  if ( !v9 )
    a3 = a2 / a5;
  result = CWorld::ProcessVerticalLine(
             (CVector *)&v35,
             COERCE_INT(v36 - a7[5]),
             (int)v30,
             (int)v29,
             1,
             0,
             0,
             0,
             0,
             0,
             0);
  if ( result == 1 )
  {
    v12 = v31;
    if ( v31 <= v36 && a7[2] < v31 )
    {
      v13 = v32;
      v14 = v33;
      v15 = v34;
      FxInterpInfo32_c::GetVal((FxInfoGroundCollide_c *)((char *)this + 8), v28, a3);
      v16 = a7[3];
      v17 = a7[4];
      v18 = a7[5];
      v19 = v28[1];
      v20 = (float)(v15 * v18) + (float)((float)(v14 * v17) + (float)(v13 * v16));
      v21 = v28[0] * (float)(v20 + v20);
      v27 = v16 - (float)(v13 * v21);
      v24 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      v25 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      v26 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      RwV3dNormalize();
      v22 = (float)(v28[2] * a4) * 5.0;
      v23 = COERCE_FLOAT(RwV3dLength());
      result = RwV3dNormalize();
      a7[2] = v12;
      a7[3] = v19 * (float)(v23 * (float)(v27 + (float)(v24 * v22)));
      a7[4] = v19 * (float)(v23 * (float)((float)(v17 - (float)(v14 * v21)) + (float)(v25 * v22)));
      a7[5] = v19 * (float)(v23 * (float)((float)(v18 - (float)(v15 * v21)) + (float)(v26 * v22)));
    }
  }
  return result;
}


// ============================================================

// Address: 0x36beec
// Original: _ZN21FxInfoGroundCollide_cD2Ev
// Demangled: FxInfoGroundCollide_c::~FxInfoGroundCollide_c()
void __fastcall FxInfoGroundCollide_c::~FxInfoGroundCollide_c(FxInfoGroundCollide_c *this)
{
  *(_DWORD *)this = &off_665B04;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoGroundCollide_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bf10
// Original: _ZN21FxInfoGroundCollide_cD0Ev
// Demangled: FxInfoGroundCollide_c::~FxInfoGroundCollide_c()
void __fastcall FxInfoGroundCollide_c::~FxInfoGroundCollide_c(FxInfoGroundCollide_c *this)
{
  *(_DWORD *)this = &off_665B04;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoGroundCollide_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
