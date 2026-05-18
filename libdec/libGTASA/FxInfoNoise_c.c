
// Address: 0x36a788
// Original: _ZN13FxInfoNoise_cC2Ev
// Demangled: FxInfoNoise_c::FxInfoNoise_c(void)
void __fastcall FxInfoNoise_c::FxInfoNoise_c(FxInfoNoise_c *this)
{
  *(_DWORD *)this = &off_665A8C;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoNoise_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 8193;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36a7c8
// Original: _ZN13FxInfoNoise_c4LoadEji
// Demangled: FxInfoNoise_c::Load(uint,int)
int __fastcall FxInfoNoise_c::Load(FxInfoNoise_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoNoise_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a7d0
// Original: _ZN13FxInfoNoise_c8GetValueEffffhPv
// Demangled: FxInfoNoise_c::GetValue(float,float,float,float,uchar,void *)
float __fastcall FxInfoNoise_c::GetValue(
        FxInfoNoise_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        float *a7)
{
  int v8; // r1
  FxInterpInfo32_c *v9; // r0
  float v10; // s0
  float v13; // s16
  float v14; // s2
  float v15; // s4
  float result; // r0
  float v17; // s2
  float v18; // s4
  float v19; // [sp+4h] [bp-6Ch]
  float v20; // [sp+4h] [bp-6Ch]
  float v21; // [sp+8h] [bp-68h]
  float v22; // [sp+8h] [bp-68h]
  float v23; // [sp+Ch] [bp-64h]
  float v24; // [sp+Ch] [bp-64h]
  float v25[24]; // [sp+10h] [bp-60h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoNoise_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, v25, a3);
  v19 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  v21 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  v23 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
  RwV3dNormalize();
  v20 = v19 * (float)(v25[0] * a4);
  v22 = (float)(v25[0] * a4) * v21;
  v24 = v23 * (float)(v25[0] * a4);
  v13 = COERCE_FLOAT(RwV3dLength());
  v14 = a7[4] + v22;
  v15 = a7[5] + v24;
  a7[3] = a7[3] + v20;
  a7[4] = v14;
  a7[5] = v15;
  result = COERCE_FLOAT(RwV3dLength());
  if ( result > 0.0 )
    result = COERCE_FLOAT(RwV3dNormalize());
  v17 = v13 * a7[4];
  v18 = v13 * a7[5];
  a7[3] = v13 * a7[3];
  a7[4] = v17;
  a7[5] = v18;
  return result;
}


// ============================================================

// Address: 0x36bd70
// Original: _ZN13FxInfoNoise_cD2Ev
// Demangled: FxInfoNoise_c::~FxInfoNoise_c()
void __fastcall FxInfoNoise_c::~FxInfoNoise_c(FxInfoNoise_c *this)
{
  *(_DWORD *)this = &off_665A8C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoNoise_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bd94
// Original: _ZN13FxInfoNoise_cD0Ev
// Demangled: FxInfoNoise_c::~FxInfoNoise_c()
void __fastcall FxInfoNoise_c::~FxInfoNoise_c(FxInfoNoise_c *this)
{
  *(_DWORD *)this = &off_665A8C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoNoise_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
