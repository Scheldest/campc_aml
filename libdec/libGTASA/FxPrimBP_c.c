
// Address: 0x18f754
// Original: j__ZN10FxPrimBP_c4LoadEjiP10FxName32_t
// Demangled: FxPrimBP_c::Load(uint,int,FxName32_t *)
// attributes: thunk
int __fastcall FxPrimBP_c::Load(int a1, unsigned int a2)
{
  return _ZN10FxPrimBP_c4LoadEjiP10FxName32_t(a1, a2);
}


// ============================================================

// Address: 0x190450
// Original: j__ZN10FxPrimBP_c11GetRWMatrixEP11RwMatrixTag
// Demangled: FxPrimBP_c::GetRWMatrix(RwMatrixTag *)
// attributes: thunk
int FxPrimBP_c::GetRWMatrix()
{
  return _ZN10FxPrimBP_c11GetRWMatrixEP11RwMatrixTag();
}


// ============================================================

// Address: 0x195288
// Original: j__ZN10FxPrimBP_cC2Ev
// Demangled: FxPrimBP_c::FxPrimBP_c(void)
// attributes: thunk
void __fastcall FxPrimBP_c::FxPrimBP_c(FxPrimBP_c *this)
{
  _ZN10FxPrimBP_cC2Ev(this);
}


// ============================================================

// Address: 0x195730
// Original: j__ZN10FxPrimBP_cD2Ev
// Demangled: FxPrimBP_c::~FxPrimBP_c()
// attributes: thunk
void __fastcall FxPrimBP_c::~FxPrimBP_c(FxPrimBP_c *this)
{
  _ZN10FxPrimBP_cD2Ev(this);
}


// ============================================================

// Address: 0x36db18
// Original: _ZN10FxPrimBP_cC2Ev
// Demangled: FxPrimBP_c::FxPrimBP_c(void)
void __fastcall FxPrimBP_c::FxPrimBP_c(FxPrimBP_c *this)
{
  _QWORD *v1; // r5

  *(_DWORD *)this = &off_665D18;
  v1 = (_QWORD *)((char *)this + 12);
  List_c::List_c((FxPrimBP_c *)((char *)this + 32));
  *v1 = 0LL;
  v1[1] = 0LL;
}


// ============================================================

// Address: 0x36db44
// Original: _ZN10FxPrimBP_cD2Ev
// Demangled: FxPrimBP_c::~FxPrimBP_c()
void __fastcall FxPrimBP_c::~FxPrimBP_c(FxPrimBP_c *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v2 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &off_665D18;
  if ( v2 )
  {
    RwTextureDestroy(v2);
    *((_DWORD *)this + 3) = 0;
  }
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    RwTextureDestroy(v3);
    *((_DWORD *)this + 4) = 0;
  }
  v4 = *((_DWORD *)this + 5);
  if ( v4 )
  {
    RwTextureDestroy(v4);
    *((_DWORD *)this + 5) = 0;
  }
  FxInfoManager_c::~FxInfoManager_c((FxPrimBP_c *)((char *)this + 44));
  List_c::~List_c((FxPrimBP_c *)((char *)this + 32));
}


// ============================================================

// Address: 0x36db90
// Original: _ZN10FxPrimBP_cD0Ev
// Demangled: FxPrimBP_c::~FxPrimBP_c()
void __fastcall __noreturn FxPrimBP_c::~FxPrimBP_c(FxPrimBP_c *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x36db94
// Original: _ZN10FxPrimBP_c11GetRWMatrixEP11RwMatrixTag
// Demangled: FxPrimBP_c::GetRWMatrix(RwMatrixTag *)
int __fastcall FxPrimBP_c::GetRWMatrix(int a1, float *a2)
{
  __int16 *v2; // r2
  int result; // r0

  v2 = *(__int16 **)(a1 + 8);
  if ( v2 )
  {
    *a2 = (float)*v2 / 32767.0;
    a2[1] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 2) / 32767.0;
    a2[2] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 4) / 32767.0;
    a2[4] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 6) / 32767.0;
    a2[5] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 8) / 32767.0;
    a2[6] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 10) / 32767.0;
    a2[8] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 12) / 32767.0;
    a2[9] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 14) / 32767.0;
    a2[10] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 16) / 32767.0;
    a2[12] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 18) / 32767.0;
    a2[13] = (float)*(__int16 *)(*(_DWORD *)(a1 + 8) + 20) / 32767.0;
    result = *(__int16 *)(*(_DWORD *)(a1 + 8) + 22);
    a2[14] = (float)result / 32767.0;
  }
  else
  {
    result = 0;
    *a2 = 1.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    a2[4] = 0.0;
    a2[5] = 1.0;
    a2[6] = 0.0;
    a2[12] = 0.0;
    a2[13] = 0.0;
    a2[8] = 0.0;
    a2[9] = 0.0;
    a2[10] = 1.0;
    a2[14] = 0.0;
  }
  return result;
}


// ============================================================

// Address: 0x46e084
// Original: _ZN10FxPrimBP_c4LoadEjiP10FxName32_t
// Demangled: FxPrimBP_c::Load(uint,int,FxName32_t *)
int __fastcall FxPrimBP_c::Load(int a1, unsigned int a2, int a3, int a4)
{
  _WORD *Mem; // r0
  float v10; // [sp+34h] [bp-1D4h] BYREF
  float v11; // [sp+38h] [bp-1D0h] BYREF
  float v12; // [sp+3Ch] [bp-1CCh] BYREF
  float v13; // [sp+40h] [bp-1C8h] BYREF
  float v14; // [sp+44h] [bp-1C4h] BYREF
  float v15; // [sp+48h] [bp-1C0h] BYREF
  float v16; // [sp+4Ch] [bp-1BCh] BYREF
  float v17; // [sp+50h] [bp-1B8h] BYREF
  float v18; // [sp+54h] [bp-1B4h] BYREF
  float v19; // [sp+58h] [bp-1B0h] BYREF
  float v20; // [sp+5Ch] [bp-1ACh] BYREF
  float v21; // [sp+60h] [bp-1A8h] BYREF
  int v22; // [sp+64h] [bp-1A4h] BYREF
  char v23; // [sp+68h] [bp-1A0h] BYREF
  char v24[256]; // [sp+E8h] [bp-120h] BYREF

  ReadLine(a2, v24, 256);
  sscanf(v24, (const char *)&dword_46E414, &v23);
  ReadLine(a2, v24, 256);
  sscanf(v24, "%s %s", &v23, &v23);
  ReadLine(a2, v24, 256);
  sscanf(
    v24,
    "%s %f %f %f %f %f %f %f %f %f %f %f %f",
    &v23,
    &v10,
    &v11,
    &v12,
    &v13,
    &v14,
    &v15,
    &v16,
    &v17,
    &v18,
    &v19,
    &v20,
    &v21);
  if ( v10 == 1.0 && v12 == 0.0 && v14 == 1.0 && v16 == 0.0 && v18 == 1.0 && v20 == 0.0 )
  {
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    Mem = (_WORD *)FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 24, 2);
    *(_DWORD *)(a1 + 8) = Mem;
    *Mem = (int)(float)(v10 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 2) = (int)(float)(v11 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 4) = (int)(float)(v12 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 6) = (int)(float)(v13 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 8) = (int)(float)(v14 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 10) = (int)(float)(v15 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 12) = (int)(float)(v16 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 14) = (int)(float)(v17 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 16) = (int)(float)(v18 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 18) = (int)(float)(v19 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 20) = (int)(float)(v20 * 32767.0);
    *(_WORD *)(*(_DWORD *)(a1 + 8) + 22) = (int)(float)(v21 * 32767.0);
  }
  ReadLine(a2, v24, 256);
  sscanf(v24, "%s %s", &v23, a4);
  if ( a3 >= 102 )
  {
    ReadLine(a2, v24, 256);
    sscanf(v24, "%s %s", &v23, a4 + 32);
    ReadLine(a2, v24, 256);
    sscanf(v24, "%s %s", &v23, a4 + 64);
    ReadLine(a2, v24, 256);
    sscanf(v24, "%s %s", &v23, a4 + 96);
  }
  ReadLine(a2, v24, 256);
  sscanf(v24, "%s %d", &v23, &v22);
  *(_BYTE *)(a1 + 7) = v22;
  ReadLine(a2, v24, 256);
  sscanf(v24, "%s %d", &v23, &v22);
  *(_BYTE *)(a1 + 5) = v22;
  ReadLine(a2, v24, 256);
  sscanf(v24, "%s %d", &v23, &v22);
  *(_BYTE *)(a1 + 6) = v22;
  FxInfoManager_c::Load((FxInfoManager_c *)(a1 + 44), a2, a3);
  return 1;
}


// ============================================================
