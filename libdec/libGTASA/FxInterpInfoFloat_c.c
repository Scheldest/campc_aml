
// Address: 0x18a2e4
// Original: j__ZN19FxInterpInfoFloat_cD2Ev
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  _ZN19FxInterpInfoFloat_cD2Ev(this);
}


// ============================================================

// Address: 0x18cabc
// Original: j__ZN19FxInterpInfoFloat_cD2Ev_0
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  _ZN19FxInterpInfoFloat_cD2Ev(this);
}


// ============================================================

// Address: 0x191004
// Original: j__ZN19FxInterpInfoFloat_c6GetValEiff
// Demangled: FxInterpInfoFloat_c::GetVal(int,float,float)
// attributes: thunk
int __fastcall FxInterpInfoFloat_c::GetVal(FxInterpInfoFloat_c *this, int a2, float a3, float a4)
{
  return _ZN19FxInterpInfoFloat_c6GetValEiff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x194d78
// Original: j__ZN19FxInterpInfoFloat_c4LoadEj
// Demangled: FxInterpInfoFloat_c::Load(uint)
// attributes: thunk
int __fastcall FxInterpInfoFloat_c::Load(FxInterpInfoFloat_c *this, unsigned int a2)
{
  return _ZN19FxInterpInfoFloat_c4LoadEj(this, a2);
}


// ============================================================

// Address: 0x196378
// Original: j__ZN19FxInterpInfoFloat_cD2Ev_1
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  _ZN19FxInterpInfoFloat_cD2Ev(this);
}


// ============================================================

// Address: 0x1964ac
// Original: j__ZN19FxInterpInfoFloat_cD2Ev_2
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  _ZN19FxInterpInfoFloat_cD2Ev(this);
}


// ============================================================

// Address: 0x197944
// Original: j__ZN19FxInterpInfoFloat_cC2Ev
// Demangled: FxInterpInfoFloat_c::FxInterpInfoFloat_c(void)
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  _ZN19FxInterpInfoFloat_cC2Ev(this);
}


// ============================================================

// Address: 0x198794
// Original: j__ZN19FxInterpInfoFloat_c6GetValEPff
// Demangled: FxInterpInfoFloat_c::GetVal(float *,float)
// attributes: thunk
int __fastcall FxInterpInfoFloat_c::GetVal(FxInterpInfoFloat_c *this, float *a2, float a3)
{
  return _ZN19FxInterpInfoFloat_c6GetValEPff(this, a2, a3);
}


// ============================================================

// Address: 0x36c45c
// Original: _ZN19FxInterpInfoFloat_cD2Ev
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  ;
}


// ============================================================

// Address: 0x36c460
// Original: _ZN19FxInterpInfoFloat_cC2Ev
// Demangled: FxInterpInfoFloat_c::FxInterpInfoFloat_c(void)
void __fastcall FxInterpInfoFloat_c::FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_665CC8;
}


// ============================================================

// Address: 0x36c478
// Original: _ZN19FxInterpInfoFloat_cD0Ev
// Demangled: FxInterpInfoFloat_c::~FxInterpInfoFloat_c()
// attributes: thunk
void __fastcall FxInterpInfoFloat_c::~FxInterpInfoFloat_c(FxInterpInfoFloat_c *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x36c47c
// Original: _ZN19FxInterpInfoFloat_c6GetValEPff
// Demangled: FxInterpInfoFloat_c::GetVal(float *,float)
int __fastcall FxInterpInfoFloat_c::GetVal(int this, float *a2, float a3)
{
  int v3; // r12
  int v4; // r2
  float v5; // s0
  float v6; // s2
  int v7; // r3
  int v8; // lr
  int v9; // r2
  float v10; // s4
  bool v11; // cc
  int v12; // r2
  float v13; // s6
  int v14; // r3
  float v15; // s0
  int v16; // r4

  v3 = *(char *)(this + 5);
  if ( v3 == 1 )
  {
    if ( *(char *)(this + 6) >= 1 )
    {
      v4 = 0;
      do
      {
        a2[v4] = **(float **)(*(_DWORD *)(this + 12) + 4 * v4);
        ++v4;
      }
      while ( v4 < *(char *)(this + 6) );
    }
  }
  else
  {
    v5 = a3;
    if ( *(_BYTE *)(this + 4) )
    {
      v6 = (float)*(unsigned __int16 *)(*(_DWORD *)(this + 8) + 2 * v3 - 2) * 0.0039062;
      v5 = a3 - (float)(v6 * (float)(int)(float)(a3 / v6));
    }
    if ( v3 < 2 )
    {
LABEL_12:
      if ( *(char *)(this + 6) >= 1 )
      {
        *a2 = *(float *)(**(_DWORD **)(this + 12) + 4 * v3 - 4);
        if ( *(char *)(this + 6) >= 2 )
        {
          v12 = 1;
          do
          {
            a2[v12] = *(float *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v12) + 4 * *(char *)(this + 5) - 4);
            ++v12;
          }
          while ( v12 < *(char *)(this + 6) );
        }
      }
    }
    else
    {
      v7 = 0;
      v8 = *(_DWORD *)(this + 8);
      v9 = 4;
      while ( 1 )
      {
        v10 = (float)*(unsigned __int16 *)(v8 + 2 * v7 + 2) * 0.0039062;
        if ( v5 < v10 )
          break;
        v9 += 4;
        v11 = v7 + 2 < v3;
        ++v7;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (float)*(unsigned __int16 *)(v8 + 2 * v7);
      if ( *(char *)(this + 6) >= 1 )
      {
        v14 = 0;
        v15 = (float)(v5 - (float)(v13 * 0.0039062)) / (float)(v10 - (float)(v13 * 0.0039062));
        do
        {
          v16 = *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v14++);
          *a2++ = *(float *)(v16 + v9 - 4) + (float)(v15 * (float)(*(float *)(v16 + v9) - *(float *)(v16 + v9 - 4)));
        }
        while ( v14 < *(char *)(this + 6) );
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x36c5b8
// Original: _ZN19FxInterpInfoFloat_c6GetValEiff
// Demangled: FxInterpInfoFloat_c::GetVal(int,float,float)
float __fastcall FxInterpInfoFloat_c::GetVal(FxInterpInfoFloat_c *this, int a2, float a3, float a4)
{
  float v4; // s4
  int v5; // r12
  float v7; // s0
  float v9; // s0
  unsigned __int16 *v10; // r2
  int v11; // r3
  int v12; // r5
  bool v13; // cc
  int v15; // lr
  unsigned __int16 *v16; // r3
  float v17; // s12
  float v18; // s0
  float v19; // s10
  float *v20; // r2
  float v21; // s6
  float *v22; // r2
  float v23; // s10
  float v24; // s2

  v5 = *((char *)this + 5);
  if ( v5 == 1 )
  {
    v7 = **(float **)(*((_DWORD *)this + 3) + 4 * a2);
    return v7 * a4;
  }
  v9 = a3 - a4;
  if ( v5 < 1 )
  {
    v12 = 0;
    v13 = v5 > 0;
    if ( !*((_BYTE *)this + 5) )
    {
LABEL_8:
      v7 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + 4 * v5 - 4);
      return v7 * a4;
    }
  }
  else
  {
    v10 = (unsigned __int16 *)*((_DWORD *)this + 2);
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      v4 = (float)*v10 * 0.0039062;
      if ( v9 < v4 )
        break;
      ++v12;
      v11 += 4;
      ++v10;
      if ( v12 >= v5 )
      {
        v13 = 0;
        if ( v12 != v5 )
          goto LABEL_11;
        goto LABEL_8;
      }
    }
    if ( v12 < 1 )
    {
      v4 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v11);
      v13 = v12 < v5;
      if ( v12 == v5 )
        goto LABEL_8;
    }
    else
    {
      v19 = (float)*(v10 - 1);
      v20 = (float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v11);
      v4 = *(v20 - 1)
         + (float)((float)((float)(v9 - (float)(v19 * 0.0039062)) / (float)(v4 - (float)(v19 * 0.0039062)))
                 * (float)(*v20 - *(v20 - 1)));
      v13 = v12 < v5;
      if ( v12 == v5 )
        goto LABEL_8;
    }
  }
LABEL_11:
  if ( v13 )
  {
    v21 = 0.0;
    v15 = 4 * v12;
    v16 = (unsigned __int16 *)(*((_DWORD *)this + 2) + 2 * v12);
    while ( 1 )
    {
      v17 = (float)*v16 * 0.0039062;
      if ( v17 == a3 )
        break;
      if ( v17 >= a3 )
      {
        if ( v17 > a3 )
        {
          v22 = (float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v15);
          v23 = (float)*(v16 - 1) * 0.0039062;
          v24 = (float)(a3 - v9)
              * (float)(v4
                      + (float)((float)((float)(*(v22 - 1)
                                              + (float)((float)((float)(a3 - v23) / (float)(v17 - v23))
                                                      * (float)(*v22 - *(v22 - 1))))
                                      - v4)
                              * 0.5));
          goto LABEL_30;
        }
      }
      else
      {
        v18 = (float)(v17 - v9)
            * (float)(v4 + (float)((float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v15) - v4) * 0.5));
        v4 = *(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v15);
        v21 = v21 + v18;
        v9 = (float)*v16 * 0.0039062;
      }
      ++v12;
      ++v16;
      v15 += 4;
      if ( v12 >= v5 )
        goto LABEL_24;
    }
    v24 = (float)(v17 - v9)
        * (float)(v4 + (float)((float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + v15) - v4) * 0.5));
LABEL_30:
    v21 = v21 + v24;
    if ( v12 != v5 )
      return v21;
  }
  else
  {
    v21 = 0.0;
LABEL_24:
    if ( v12 != v5 )
      return v21;
  }
  return v21
       + (float)((float)(v4
                       + (float)((float)(*(float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * a2) + 4 * (v5 - 1)) - v4)
                               * 0.5))
               * (float)((float)((float)*(unsigned __int16 *)(*((_DWORD *)this + 2) + 2 * (v5 - 1)) * 0.0039062) - v9));
}


// ============================================================

// Address: 0x46ed0c
// Original: _ZN19FxInterpInfoFloat_c4LoadEj
// Demangled: FxInterpInfoFloat_c::Load(uint)
int __fastcall FxInterpInfoFloat_c::Load(FxInterpInfoFloat_c *this, unsigned int a2)
{
  int v4; // r11
  char v5; // r1
  int Mem; // r0
  int v7; // r8
  int v8; // r11
  int v10; // [sp+8h] [bp-1B8h]
  float v11; // [sp+Ch] [bp-1B4h] BYREF
  int v12; // [sp+10h] [bp-1B0h] BYREF
  char v13; // [sp+14h] [bp-1ACh] BYREF
  char v14[256]; // [sp+94h] [bp-12Ch] BYREF
  int v15; // [sp+194h] [bp-2Ch]

  if ( *((char *)this + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      ReadLine(a2, v14, 256);
      sscanf(v14, (const char *)&dword_46EEC0, &v13);
      ReadLine(a2, v14, 256);
      sscanf(v14, (const char *)&dword_46EEC0, &v13);
      ReadLine(a2, v14, 256);
      sscanf(v14, "%s %d", &v13, &v12);
      *((_BYTE *)this + 4) = v12;
      ReadLine(a2, v14, 256);
      sscanf(v14, "%s %d", &v13, &v12);
      v5 = v12;
      *((_BYTE *)this + 5) = v12;
      if ( !v4 )
      {
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 2 * v5, 2);
        v5 = *((_BYTE *)this + 5);
        *((_DWORD *)this + 2) = Mem;
      }
      *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v4) = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 4 * v5, 4);
      v10 = v4;
      if ( *((char *)this + 5) >= 1 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          ReadLine(a2, v14, 256);
          sscanf(v14, (const char *)&dword_46EEC0, &v13);
          ReadLine(a2, v14, 256);
          sscanf(v14, "%s %f", &v13, &v11);
          *(_WORD *)(*((_DWORD *)this + 2) + 2 * v8) = (unsigned int)(float)(v11 * 256.0);
          ReadLine(a2, v14, 256);
          sscanf(v14, "%s %f", &v13, *(_DWORD *)(*((_DWORD *)this + 3) + 4 * v10) + v7);
          ++v8;
          v7 += 4;
        }
        while ( v8 < *((char *)this + 5) );
      }
      v4 = v10 + 1;
    }
    while ( v10 + 1 < *((char *)this + 6) );
  }
  return _stack_chk_guard - v15;
}


// ============================================================
