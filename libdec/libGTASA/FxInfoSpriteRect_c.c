
// Address: 0x36b508
// Original: _ZN18FxInfoSpriteRect_cC2Ev
// Demangled: FxInfoSpriteRect_c::FxInfoSpriteRect_c(void)
void __fastcall FxInfoSpriteRect_c::FxInfoSpriteRect_c(FxInfoSpriteRect_c *this)
{
  *(_DWORD *)this = &off_665BC4;
  FxInterpInfo255_c::FxInterpInfo255_c((FxInfoSpriteRect_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 16388;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36b548
// Original: _ZN18FxInfoSpriteRect_c4LoadEji
// Demangled: FxInfoSpriteRect_c::Load(uint,int)
int __fastcall FxInfoSpriteRect_c::Load(FxInfoSpriteRect_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfo255_c::Load((FxInfoSpriteRect_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36b54e
// Original: _ZN18FxInfoSpriteRect_c8GetValueEffffhPv
// Demangled: FxInfoSpriteRect_c::GetValue(float,float,float,float,uchar,void *)
char *__fastcall FxInfoSpriteRect_c::GetValue(
        FxInfoSpriteRect_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        char *a7)
{
  int v8; // r1
  FxInterpInfo255_c *v9; // r0
  float v10; // s0
  __int64 v12; // d17
  char *result; // r0
  _QWORD v14[9]; // [sp+0h] [bp-48h] BYREF

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoSpriteRect_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfo255_c::GetVal(v9, (float *)v14, a3);
  v12 = v14[1];
  result = a7 + 28;
  *(_QWORD *)(a7 + 28) = v14[0];
  *(_QWORD *)(a7 + 36) = v12;
  return result;
}


// ============================================================

// Address: 0x36c14c
// Original: _ZN18FxInfoSpriteRect_cD2Ev
// Demangled: FxInfoSpriteRect_c::~FxInfoSpriteRect_c()
void __fastcall FxInfoSpriteRect_c::~FxInfoSpriteRect_c(FxInfoSpriteRect_c *this)
{
  *(_DWORD *)this = &off_665BC4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSpriteRect_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c170
// Original: _ZN18FxInfoSpriteRect_cD0Ev
// Demangled: FxInfoSpriteRect_c::~FxInfoSpriteRect_c()
void __fastcall FxInfoSpriteRect_c::~FxInfoSpriteRect_c(FxInfoSpriteRect_c *this)
{
  *(_DWORD *)this = &off_665BC4;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSpriteRect_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
