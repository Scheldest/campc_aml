
// Address: 0x36b960
// Original: _ZN20FxInfoColourBright_cC2Ev
// Demangled: FxInfoColourBright_c::FxInfoColourBright_c(void)
void __fastcall FxInfoColourBright_c::FxInfoColourBright_c(FxInfoColourBright_c *this)
{
  *(_DWORD *)this = &off_665C84;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoColourBright_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 5;
  *((_WORD *)this + 2) = 17408;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 20, 4);
}


// ============================================================

// Address: 0x36b9a0
// Original: _ZN20FxInfoColourBright_c4LoadEji
// Demangled: FxInfoColourBright_c::Load(uint,int)
int __fastcall FxInfoColourBright_c::Load(FxInfoColourBright_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoColourBright_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b9a6
// Original: _ZN20FxInfoColourBright_c8GetValueEffffhPv
// Demangled: FxInfoColourBright_c::GetValue(float,float,float,float,uchar,void *)
_BYTE *__fastcall FxInfoColourBright_c::GetValue(
        FxInfoColourBright_c *this,
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
  v9 = (FxInfoColourBright_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoU255_c::GetVal(v9, v14, a3);
  result = a7;
  *a7 = (unsigned int)v14[0];
  a7[1] = (unsigned int)v14[1];
  a7[2] = (unsigned int)v14[2];
  a7[3] = (unsigned int)v14[3];
  v13 = (unsigned int)v14[4];
  *((_DWORD *)a7 + 2) = 2;
  a7[7] = v13;
  return result;
}


// ============================================================

// Address: 0x36c3ac
// Original: _ZN20FxInfoColourBright_cD2Ev
// Demangled: FxInfoColourBright_c::~FxInfoColourBright_c()
void __fastcall FxInfoColourBright_c::~FxInfoColourBright_c(FxInfoColourBright_c *this)
{
  *(_DWORD *)this = &off_665C84;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColourBright_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c3d0
// Original: _ZN20FxInfoColourBright_cD0Ev
// Demangled: FxInfoColourBright_c::~FxInfoColourBright_c()
void __fastcall FxInfoColourBright_c::~FxInfoColourBright_c(FxInfoColourBright_c *this)
{
  *(_DWORD *)this = &off_665C84;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoColourBright_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
