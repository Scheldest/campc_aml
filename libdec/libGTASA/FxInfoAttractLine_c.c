
// Address: 0x36ac08
// Original: _ZN19FxInfoAttractLine_cC2Ev
// Demangled: FxInfoAttractLine_c::FxInfoAttractLine_c(void)
void __fastcall FxInfoAttractLine_c::FxInfoAttractLine_c(FxInfoAttractLine_c *this)
{
  *(_DWORD *)this = &off_665AEC;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoAttractLine_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 7;
  *((_WORD *)this + 2) = 8208;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 28, 4);
}


// ============================================================

// Address: 0x36ac48
// Original: _ZN19FxInfoAttractLine_c4LoadEji
// Demangled: FxInfoAttractLine_c::Load(uint,int)
int __fastcall FxInfoAttractLine_c::Load(FxInfoAttractLine_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoAttractLine_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36ac50
// Original: _ZN19FxInfoAttractLine_c8GetValueEffffhPv
// Demangled: FxInfoAttractLine_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoAttractLine_c::GetValue(
        FxInfoAttractLine_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  float32x2_t v7; // d8
  float32x2_t v8; // d9
  float32x2_t v9; // d10
  int v11; // r1
  FxInterpInfo32_c *v12; // r0
  float v13; // s0
  float v16; // s10
  float v17; // s12
  float v18; // s16
  float result; // r0
  float v20; // s4
  float v21; // s0
  float v22; // [sp+4h] [bp-6Ch]
  float v23; // [sp+8h] [bp-68h]
  float v24; // [sp+Ch] [bp-64h]
  float v25; // [sp+10h] [bp-60h] BYREF
  float v26; // [sp+14h] [bp-5Ch]
  float v27; // [sp+18h] [bp-58h]
  float v28; // [sp+1Ch] [bp-54h]
  float v29; // [sp+20h] [bp-50h]
  float v30; // [sp+24h] [bp-4Ch]
  float v31; // [sp+28h] [bp-48h]

  v11 = *((unsigned __int8 *)this + 6);
  v12 = (FxInfoAttractLine_c *)((char *)this + 8);
  v13 = a2 / a5;
  if ( !v11 )
    a3 = v13;
  FxInterpInfo32_c::GetVal(v12, &v25, a3);
  v9.n64_u32[0] = 1.0;
  v16 = a7[1];
  v17 = a7[2];
  v8.n64_u32[0] = 0;
  v7.n64_f32[0] = (float)((float)((float)((float)(v28 - v25) * (float)(*a7 - v25))
                                + (float)((float)(v29 - v26) * (float)(v16 - v26)))
                        + (float)((float)(v30 - v27) * (float)(v17 - v27)))
                / (float)((float)((float)((float)(v28 - v25) * (float)(v28 - v25))
                                + (float)((float)(v29 - v26) * (float)(v29 - v26)))
                        + (float)((float)(v30 - v27) * (float)(v30 - v27)));
  v18 = vmin_f32(vmax_f32(v7, v8), v9).n64_f32[0];
  v23 = (float)(v26 + (float)((float)(v29 - v26) * v18)) - v16;
  v22 = (float)(v25 + (float)((float)(v28 - v25) * v18)) - *a7;
  v24 = (float)(v27 + (float)((float)(v30 - v27) * v18)) - v17;
  result = COERCE_FLOAT(RwV3dLength());
  v7.n64_f32[0] = result;
  if ( result > 0.0 )
    result = COERCE_FLOAT(RwV3dNormalize());
  if ( v7.n64_f32[0] > 0.1 )
  {
    v20 = a7[4] + (float)((float)(v31 * a4) * v23);
    v21 = a7[5] + (float)(v24 * (float)(v31 * a4));
    a7[3] = a7[3] + (float)(v22 * (float)(v31 * a4));
    a7[4] = v20;
    a7[5] = v21;
  }
  return result;
}


// ============================================================

// Address: 0x36bea0
// Original: _ZN19FxInfoAttractLine_cD2Ev
// Demangled: FxInfoAttractLine_c::~FxInfoAttractLine_c()
void __fastcall FxInfoAttractLine_c::~FxInfoAttractLine_c(FxInfoAttractLine_c *this)
{
  *(_DWORD *)this = &off_665AEC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAttractLine_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bec4
// Original: _ZN19FxInfoAttractLine_cD0Ev
// Demangled: FxInfoAttractLine_c::~FxInfoAttractLine_c()
void __fastcall FxInfoAttractLine_c::~FxInfoAttractLine_c(FxInfoAttractLine_c *this)
{
  *(_DWORD *)this = &off_665AEC;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAttractLine_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
