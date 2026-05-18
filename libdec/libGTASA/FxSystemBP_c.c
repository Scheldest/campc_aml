
// Address: 0x190d08
// Original: j__ZN12FxSystemBP_c6UpdateEf
// Demangled: FxSystemBP_c::Update(float)
// attributes: thunk
int __fastcall FxSystemBP_c::Update(FxSystemBP_c *this, float a2)
{
  return _ZN12FxSystemBP_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x190d44
// Original: j__ZN12FxSystemBP_cC2Ev
// Demangled: FxSystemBP_c::FxSystemBP_c(void)
// attributes: thunk
void __fastcall FxSystemBP_c::FxSystemBP_c(FxSystemBP_c *this)
{
  _ZN12FxSystemBP_cC2Ev(this);
}


// ============================================================

// Address: 0x1915f4
// Original: j__ZN12FxSystemBP_c6RenderEP8RwCamerafh
// Demangled: FxSystemBP_c::Render(RwCamera *,float,uchar)
// attributes: thunk
int FxSystemBP_c::Render()
{
  return _ZN12FxSystemBP_c6RenderEP8RwCamerafh();
}


// ============================================================

// Address: 0x19194c
// Original: j__ZN12FxSystemBP_c17FreePrtFromSystemEP10FxSystem_c
// Demangled: FxSystemBP_c::FreePrtFromSystem(FxSystem_c *)
// attributes: thunk
int __fastcall FxSystemBP_c::FreePrtFromSystem(FxSystemBP_c *this, FxSystem_c *a2)
{
  return _ZN12FxSystemBP_c17FreePrtFromSystemEP10FxSystem_c(this, a2);
}


// ============================================================

// Address: 0x192078
// Original: j__ZN12FxSystemBP_c17SetBoundingSphereEP5RwV3df
// Demangled: FxSystemBP_c::SetBoundingSphere(RwV3d *,float)
// attributes: thunk
int FxSystemBP_c::SetBoundingSphere()
{
  return _ZN12FxSystemBP_c17SetBoundingSphereEP5RwV3df();
}


// ============================================================

// Address: 0x19d01c
// Original: j__ZN12FxSystemBP_c4LoadEPcji
// Demangled: FxSystemBP_c::Load(char *,uint,int)
// attributes: thunk
int __fastcall FxSystemBP_c::Load(FxSystemBP_c *this, char *a2, unsigned int a3, int a4)
{
  return _ZN12FxSystemBP_c4LoadEPcji(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19e624
// Original: j__ZN12FxSystemBP_cnwEj
// Demangled: FxSystemBP_c::operator new(uint)
// attributes: thunk
int __fastcall FxSystemBP_c::operator new(FxSystemBP_c *this, unsigned int a2)
{
  return _ZN12FxSystemBP_cnwEj(this, a2);
}


// ============================================================

// Address: 0x36df22
// Original: _ZN12FxSystemBP_cC2Ev
// Demangled: FxSystemBP_c::FxSystemBP_c(void)
void __fastcall FxSystemBP_c::FxSystemBP_c(FxSystemBP_c *this)
{
  int v1; // r0

  ListItem_c::ListItem_c(this);
  *(_DWORD *)(v1 + 32) = 0;
}


// ============================================================

// Address: 0x36df30
// Original: _ZN12FxSystemBP_cD2Ev
// Demangled: FxSystemBP_c::~FxSystemBP_c()
// attributes: thunk
void __fastcall FxSystemBP_c::~FxSystemBP_c(FxSystemBP_c *this)
{
  j_ListItem_c::~ListItem_c(this);
}


// ============================================================

// Address: 0x36df34
// Original: _ZN12FxSystemBP_cnwEj
// Demangled: FxSystemBP_c::operator new(uint)
int __fastcall FxSystemBP_c::operator new(FxSystemBP_c *this, unsigned int a2)
{
  return j_FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, (int)this, 4);
}


// ============================================================

// Address: 0x36df48
// Original: _ZN12FxSystemBP_c6UnloadEv
// Demangled: FxSystemBP_c::Unload(void)
void __fastcall FxSystemBP_c::Unload(FxSystemBP_c *this)
{
  ;
}


// ============================================================

// Address: 0x36df4a
// Original: _ZN12FxSystemBP_c6UpdateEf
// Demangled: FxSystemBP_c::Update(float)
int __fastcall FxSystemBP_c::Update(FxSystemBP_c *this, float a2)
{
  int v4; // r6
  int v5; // r0

  if ( *((char *)this + 27) >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v4);
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v5 + 20))(v5, LODWORD(a2));
      ++v4;
    }
    while ( v4 < *((char *)this + 27) );
  }
  return 0;
}


// ============================================================

// Address: 0x36df80
// Original: _ZN12FxSystemBP_c6RenderEP8RwCamerafh
// Demangled: FxSystemBP_c::Render(RwCamera *,float,uchar)
int __fastcall FxSystemBP_c::Render(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int i; // r5
  int v10; // r0

  result = *(char *)(a1 + 27);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4 * i);
      (*(void (__fastcall **)(int, int, _DWORD, int, int))(*(_DWORD *)v10 + 24))(v10, a2, 0, a3, a4);
      result = *(char *)(a1 + 27);
    }
  }
  return result;
}


// ============================================================

// Address: 0x36dfc4
// Original: _ZN12FxSystemBP_c17FreePrtFromSystemEP10FxSystem_c
// Demangled: FxSystemBP_c::FreePrtFromSystem(FxSystem_c *)
int __fastcall FxSystemBP_c::FreePrtFromSystem(FxSystemBP_c *this, FxSystem_c *a2)
{
  int v4; // r6
  int v5; // r0

  if ( *((char *)this + 27) < 1 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v4);
    if ( (*(int (__fastcall **)(int, FxSystem_c *))(*(_DWORD *)v5 + 28))(v5, a2) )
      break;
    if ( ++v4 >= *((char *)this + 27) )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x36e004
// Original: _ZN12FxSystemBP_c17GetBoundingSphereEv
// Demangled: FxSystemBP_c::GetBoundingSphere(void)
int __fastcall FxSystemBP_c::GetBoundingSphere(FxSystemBP_c *this)
{
  return *((_DWORD *)this + 8);
}


// ============================================================

// Address: 0x36e008
// Original: _ZN12FxSystemBP_c17SetBoundingSphereEP5RwV3df
// Demangled: FxSystemBP_c::SetBoundingSphere(RwV3d *,float)
int __fastcall FxSystemBP_c::SetBoundingSphere(int result, __int64 *a2, float a3)
{
  int v5; // r4
  int Mem; // r0
  __int64 v7; // d16

  v5 = result;
  if ( a3 > 0.0 )
  {
    result = *(_DWORD *)(result + 32);
    if ( !result )
    {
      Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 20, 4);
      *(_DWORD *)(Mem + 16) = 0;
      *(_DWORD *)(v5 + 32) = Mem;
      v7 = *a2;
      *(_DWORD *)(Mem + 8) = *((_DWORD *)a2 + 2);
      *(_QWORD *)Mem = v7;
      result = *(_DWORD *)(v5 + 32);
      *(float *)(result + 12) = a3;
    }
  }
  return result;
}


// ============================================================

// Address: 0x46daf4
// Original: _ZN12FxSystemBP_c4LoadEPcji
// Demangled: FxSystemBP_c::Load(char *,uint,int)
int __fastcall FxSystemBP_c::Load(FxSystemBP_c *this, char *a2, unsigned int a3, int a4)
{
  const char *v7; // r1
  char v8; // r1
  _BYTE *v9; // r4
  int v10; // r10
  unsigned int v11; // r1
  FxEmitterBP_c *v12; // r0
  int v13; // r0
  _BYTE *v14; // r4
  int v15; // r6
  int v16; // r0
  int v18; // [sp+Ch] [bp-5F4h]
  _BYTE v19[1008]; // [sp+10h] [bp-5F0h] BYREF
  int v20; // [sp+410h] [bp-1F0h] BYREF
  float v21; // [sp+414h] [bp-1ECh] BYREF
  int v22; // [sp+418h] [bp-1E8h] BYREF
  _BYTE v23[32]; // [sp+41Ch] [bp-1E4h] BYREF
  char v24; // [sp+43Ch] [bp-1C4h] BYREF
  char v25[32]; // [sp+4BCh] [bp-144h] BYREF
  char v26[256]; // [sp+4DCh] [bp-124h] BYREF

  ReadLine(a3, v26, 256);
  if ( a4 >= 101 )
  {
    ReadLine(a3, v26, 256);
    sscanf(v26, "%s %s", v25, &v24);
  }
  ReadLine(a3, v26, 256);
  sscanf(v26, "%s %s", v25, v23);
  *((_DWORD *)this + 2) = CKeyGen::GetUppercaseKey((CKeyGen *)v23, v7);
  ReadLine(a3, v26, 256);
  sscanf(v26, "%s %f", v25, (char *)this + 12);
  if ( a4 < 106 )
  {
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 5) = 0;
  }
  else
  {
    ReadLine(a3, v26, 256);
    sscanf(v26, "%s %f", v25, (char *)this + 16);
    ReadLine(a3, v26, 256);
    sscanf(v26, "%s %f", v25, (char *)this + 20);
  }
  ReadLine(a3, v26, 256);
  sscanf(v26, "%s %d", v25, &v22);
  *((_BYTE *)this + 26) = v22;
  ReadLine(a3, v26, 256);
  sscanf(v26, "%s %f", v25, &v21);
  *((_WORD *)this + 12) = (unsigned int)(float)(v21 * 256.0);
  v18 = a4;
  if ( a4 >= 104 )
  {
    ReadLine(a3, v26, 256);
    sscanf(v26, "%s %f %f %f %f", v25, v19, &v19[4], &v19[8], &v20);
    *((_DWORD *)this + 8) = 0;
    FxSystemBP_c::SetBoundingSphere();
  }
  ReadLine(a3, v26, 256);
  sscanf(v26, "%s %d", v25, &v22);
  v8 = v22;
  *((_BYTE *)this + 27) = v22;
  *((_DWORD *)this + 7) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4 * v8, 4);
  if ( *((char *)this + 27) >= 1 )
  {
    v9 = v19;
    v10 = 0;
    do
    {
      ReadLine(a3, v26, 256);
      sscanf(v26, (const char *)&dword_46DE84, v25);
      if ( !strcmp(v25, "FX_PRIM_EMITTER_DATA:") )
      {
        v12 = (FxEmitterBP_c *)FxEmitterBP_c::operator new((FxEmitterBP_c *)&dword_40, v11);
        FxEmitterBP_c::FxEmitterBP_c(v12);
        *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10) = v13;
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10) + 60) = 0;
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10) + 61) = 0;
        ReadLine(a3, v26, 256);
        (*(void (__fastcall **)(_DWORD, unsigned int, int, _BYTE *))(**(_DWORD **)(*((_DWORD *)this + 7) + 4 * v10) + 8))(
          *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10),
          a3,
          v18,
          v9);
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10) + 60) = FxEmitterBP_c::IsFxInfoPresent(
                                                                          *(FxEmitterBP_c **)(*((_DWORD *)this + 7)
                                                                                            + 4 * v10),
                                                                          16416);
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 7) + 4 * v10) + 61) = FxEmitterBP_c::IsFxInfoPresent(
                                                                          *(FxEmitterBP_c **)(*((_DWORD *)this + 7)
                                                                                            + 4 * v10),
                                                                          16392);
      }
      ++v10;
      v9 += 128;
    }
    while ( v10 < *((char *)this + 27) );
  }
  if ( v18 > 107 )
  {
    ReadLine(a3, v26, 256);
    sscanf(v26, "%s %d", v25, &v20);
    if ( v18 != 108 )
    {
      ReadLine(a3, v26, 256);
      sscanf(v26, "%s %s", v25, &v24);
    }
  }
  if ( *((char *)this + 27) >= 1 )
  {
    v14 = v19;
    v15 = 0;
    do
    {
      v16 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v15);
      (*(void (__fastcall **)(int, _BYTE *, int))(*(_DWORD *)v16 + 12))(v16, v14, v18);
      ++v15;
      v14 += 128;
    }
    while ( v15 < *((char *)this + 27) );
  }
  return 0;
}


// ============================================================
