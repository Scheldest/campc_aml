
// Address: 0x36ba24
// Original: _ZN13FxInfoSmoke_cC2Ev
// Demangled: FxInfoSmoke_c::FxInfoSmoke_c(void)
void __fastcall FxInfoSmoke_c::FxInfoSmoke_c(FxInfoSmoke_c *this)
{
  *(_DWORD *)this = &off_665C9C;
  FxInterpInfoU255_c::FxInterpInfoU255_c((FxInfoSmoke_c *)((char *)this + 8));
  *((_BYTE *)this + 14) = 8;
  *((_WORD *)this + 2) = -32767;
  *((_DWORD *)this + 5) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 32, 4);
}


// ============================================================

// Address: 0x36ba64
// Original: _ZN13FxInfoSmoke_c4LoadEji
// Demangled: FxInfoSmoke_c::Load(uint,int)
int __fastcall FxInfoSmoke_c::Load(FxInfoSmoke_c *this, unsigned int a2, int a3)
{
  return sub_190B40((FxInfoSmoke_c *)((char *)this + 8), a2);
}


// ============================================================

// Address: 0x36ba6a
// Original: _ZN13FxInfoSmoke_c8GetValueEffffhPv
// Demangled: FxInfoSmoke_c::GetValue(float,float,float,float,uchar,void *)
char *__fastcall FxInfoSmoke_c::GetValue(
        FxInfoSmoke_c *this,
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
  __int64 v12; // d17
  int v13; // r2
  int v14; // r3
  float v16; // [sp+0h] [bp-48h] BYREF
  __int64 v17; // [sp+4h] [bp-44h]
  __int64 v18; // [sp+Ch] [bp-3Ch]
  int v19; // [sp+14h] [bp-34h]
  int v20; // [sp+18h] [bp-30h]
  int v21; // [sp+1Ch] [bp-2Ch]

  v8 = *((unsigned __int8 *)this + 6);
  v9 = (FxInfoSmoke_c *)((char *)this + 8);
  v10 = a2 / a5;
  if ( !v8 )
    a3 = v10;
  FxInterpInfoU255_c::GetVal(v9, &v16, a3);
  a7[123] = (int)v16;
  v12 = v18;
  *((_QWORD *)a7 + 17) = v17;
  *((_QWORD *)a7 + 18) = v12;
  v13 = v20;
  v14 = v21;
  *((_DWORD *)a7 + 38) = v19;
  *((_DWORD *)a7 + 39) = v13;
  *((_DWORD *)a7 + 40) = v14;
  return a7 + 164;
}


// ============================================================

// Address: 0x36c3f8
// Original: _ZN13FxInfoSmoke_cD2Ev
// Demangled: FxInfoSmoke_c::~FxInfoSmoke_c()
void __fastcall FxInfoSmoke_c::~FxInfoSmoke_c(FxInfoSmoke_c *this)
{
  *(_DWORD *)this = &off_665C9C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSmoke_c *)((char *)this + 8));
}


// ============================================================

// Address: 0x36c41c
// Original: _ZN13FxInfoSmoke_cD0Ev
// Demangled: FxInfoSmoke_c::~FxInfoSmoke_c()
void __fastcall FxInfoSmoke_c::~FxInfoSmoke_c(FxInfoSmoke_c *this)
{
  *(_DWORD *)this = &off_665C9C;
  FxInterpInfoFloat_c::~FxInterpInfoFloat_c((FxInfoSmoke_c *)((char *)this + 8));
  operator delete(this);
}


// ============================================================
