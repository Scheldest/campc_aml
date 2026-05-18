
// Address: 0x36b848
// Original: _ZN19FxInfoColourRange_cC2Ev
// Demangled: FxInfoColourRange_c::FxInfoColourRange_c(void)
void __fastcall FxInfoColourRange_c::FxInfoColourRange_c(FxInfoColourRange_c *this)
{
  *(_DWORD *)this = &off_665C54;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoColourRange_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 7;
  *((_WORD *)this + 2) = 16640;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 28, 4);
}


// ============================================================

// Address: 0x36b888
// Original: _ZN19FxInfoColourRange_c4LoadEji
// Demangled: FxInfoColourRange_c::Load(uint,int)
int __fastcall FxInfoColourRange_c::Load(FxInfoColourRange_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoColourRange_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b88e
// Original: _ZN19FxInfoColourRange_c8GetValueEffffhPv
// Demangled: FxInfoColourRange_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoColourRange_c::GetValue(
        FxInfoColourRange_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _BYTE *a7)
{
  int v8; // r1
  FxInterpInfoU255_c *v9; // r0
  float v10; // s0
  _BYTE *result; // r0
  unsigned int v13; // s0
  float v14[18]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoColourRange_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoU255_c::GetVal(v9, v14, a3);
  result = a7;
  *a7 = (unsigned int)v14[0];
  a7[1] = (unsigned int)v14[2];
  a7[2] = (unsigned int)v14[4];
  a7[3] = (unsigned int)v14[6];
  a7[4] = (unsigned int)v14[1];
  a7[5] = (unsigned int)v14[3];
  v13 = (unsigned int)v14[5];
  *((_DWORD *)a7 + 2) = 1;
  a7[6] = v13;
  return result;
}


// ============================================================

// Address: 0x36c314
// Original: _ZN19FxInfoColourRange_cD2Ev
// Demangled: FxInfoColourRange_c::~FxInfoColourRange_c()
void __fastcall FxInfoColourRange_c::~FxInfoColourRange_c(FxInfoColourRange_c *this)
{
  *(_DWORD *)this = &off_665C54;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColourRange_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c338
// Original: _ZN19FxInfoColourRange_cD0Ev
// Demangled: FxInfoColourRange_c::~FxInfoColourRange_c()
void __fastcall FxInfoColourRange_c::~FxInfoColourRange_c(FxInfoColourRange_c *this)
{
  *(_DWORD *)this = &off_665C54;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColourRange_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
