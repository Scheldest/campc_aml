
// Address: 0x36b7b8
// Original: _ZN19FxInfoAnimTexture_cC2Ev
// Demangled: FxInfoAnimTexture_c::FxInfoAnimTexture_c(void)
void __fastcall FxInfoAnimTexture_c::FxInfoAnimTexture_c(FxInfoAnimTexture_c *this)
{
  *(_DWORD *)this = &off_665C3C;
  FxInterpInfo32_c::FxInterpInfo32_c((FxInfoAnimTexture_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 1;
  *((_WORD *)this + 2) = 16512;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4, 4);
}


// ============================================================

// Address: 0x36b7f8
// Original: _ZN19FxInfoAnimTexture_c4LoadEji
// Demangled: FxInfoAnimTexture_c::Load(uint,int)
int __fastcall FxInfoAnimTexture_c::Load(FxInfoAnimTexture_c *this, unsigned int a2, int a3)
{
  return sub_198CC4((FxInfoAnimTexture_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b7fe
// Original: _ZN19FxInfoAnimTexture_c8GetValueEffffhPv
// Demangled: FxInfoAnimTexture_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoAnimTexture_c::GetValue(
        FxInfoAnimTexture_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  int v8; // r1
  FxInterpInfo32_c *v9; // r0
  float v10; // s0
  _BYTE *result; // r0
  float v13; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoAnimTexture_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo32_c::GetVal(v9, &v13, a3);
  result = a7;
  a7[52] = 1;
  a7[53] = (int)v13;
  return result;
}


// ============================================================

// Address: 0x36c2c8
// Original: _ZN19FxInfoAnimTexture_cD2Ev
// Demangled: FxInfoAnimTexture_c::~FxInfoAnimTexture_c()
void __fastcall FxInfoAnimTexture_c::~FxInfoAnimTexture_c(FxInfoAnimTexture_c *this)
{
  *(_DWORD *)this = &off_665C3C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAnimTexture_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c2ec
// Original: _ZN19FxInfoAnimTexture_cD0Ev
// Demangled: FxInfoAnimTexture_c::~FxInfoAnimTexture_c()
void __fastcall FxInfoAnimTexture_c::~FxInfoAnimTexture_c(FxInfoAnimTexture_c *this)
{
  *(_DWORD *)this = &off_665C3C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoAnimTexture_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
