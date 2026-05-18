
// Address: 0x36b2ac
// Original: _ZN16FxInfoRotSpeed_cC2Ev
// Demangled: FxInfoRotSpeed_c::FxInfoRotSpeed_c(void)
void __fastcall FxInfoRotSpeed_c::FxInfoRotSpeed_c(FxInfoRotSpeed_c *this)
{
  *(_DWORD *)this = &off_665B4C;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoRotSpeed_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 8448;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36b2ec
// Original: _ZN16FxInfoRotSpeed_c4LoadEji
// Demangled: FxInfoRotSpeed_c::Load(uint,int)
int __fastcall FxInfoRotSpeed_c::Load(FxInfoRotSpeed_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoRotSpeed_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b2f2
// Original: _ZN16FxInfoRotSpeed_c8GetValueEffffhPv
// Demangled: FxInfoRotSpeed_c::GetValue(float,float,float,float,uchar,void *)
char *__fastcall FxInfoRotSpeed_c::GetValue(
        FxInfoRotSpeed_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  int v8; // r1
  FxInterpInfoFloat_c *v9; // r0
  float v10; // s0
  __int64 v12; // d17
  char *result; // r0
  _QWORD v14[9]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoRotSpeed_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoFloat_c::GetVal(v9, (float *)v14, a3);
  v12 = v14[1];
  result = (char *)(a7 + 3);
  a7[3] = v14[0];
  a7[4] = v12;
  return result;
}


// ============================================================

// Address: 0x36bfd0
// Original: _ZN16FxInfoRotSpeed_cD2Ev
// Demangled: FxInfoRotSpeed_c::~FxInfoRotSpeed_c()
void __fastcall FxInfoRotSpeed_c::~FxInfoRotSpeed_c(FxInfoRotSpeed_c *this)
{
  *(_DWORD *)this = &off_665B4C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoRotSpeed_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bff4
// Original: _ZN16FxInfoRotSpeed_cD0Ev
// Demangled: FxInfoRotSpeed_c::~FxInfoRotSpeed_c()
void __fastcall FxInfoRotSpeed_c::~FxInfoRotSpeed_c(FxInfoRotSpeed_c *this)
{
  *(_DWORD *)this = &off_665B4C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoRotSpeed_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
