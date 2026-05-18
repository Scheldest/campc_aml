
// Address: 0x36a6bc
// Original: _ZN17FxInfoEmWeather_cC2Ev
// Demangled: FxInfoEmWeather_c::FxInfoEmWeather_c(void)
void __fastcall FxInfoEmWeather_c::FxInfoEmWeather_c(FxInfoEmWeather_c *this)
{
  *(_DWORD *)this = &off_665A5C;
  FxInterpInfoFloat_c::FxInterpInfoFloat_c((FxInfoEmWeather_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 4;
  *((_WORD *)this + 2) = 4352;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 16, 4);
}


// ============================================================

// Address: 0x36a6fc
// Original: _ZN17FxInfoEmWeather_c4LoadEji
// Demangled: FxInfoEmWeather_c::Load(uint,int)
int __fastcall FxInfoEmWeather_c::Load(FxInfoEmWeather_c *this, unsigned int a2, int a3)
{
  return j_FxInterpInfoFloat_c::Load((FxInfoEmWeather_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36a702
// Original: _ZN17FxInfoEmWeather_c8GetValueEffffhPv
// Demangled: FxInfoEmWeather_c::GetValue(float,float,float,float,uchar,void *)
char *__fastcall FxInfoEmWeather_c::GetValue(
        FxInfoEmWeather_c *this,
        float a2,
        float a3,
        float a4,
        float a5,
        unsigned __int8 a6,
        _QWORD *a7)
{
  __int64 v7; // d17
  char *result; // r0
  _QWORD v9[9]; // [sp+0h] [bp-48h] BYREF

  FxInterpInfoFloat_c::GetVal((FxInfoEmWeather_c *)((char *)this + 8), (float *)v9, a2);
  v7 = v9[1];
  result = (char *)(a7 + 11);
  a7[11] = v9[0];
  a7[12] = v7;
  return result;
}


// ============================================================

// Address: 0x36bcd8
// Original: _ZN17FxInfoEmWeather_cD2Ev
// Demangled: FxInfoEmWeather_c::~FxInfoEmWeather_c()
void __fastcall FxInfoEmWeather_c::~FxInfoEmWeather_c(FxInfoEmWeather_c *this)
{
  *(_DWORD *)this = &off_665A5C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmWeather_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36bcfc
// Original: _ZN17FxInfoEmWeather_cD0Ev
// Demangled: FxInfoEmWeather_c::~FxInfoEmWeather_c()
void __fastcall FxInfoEmWeather_c::~FxInfoEmWeather_c(FxInfoEmWeather_c *this)
{
  *(_DWORD *)this = &off_665A5C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoEmWeather_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
