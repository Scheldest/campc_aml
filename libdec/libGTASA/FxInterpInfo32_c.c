
// Address: 0x1952b0
// Original: j__ZN16FxInterpInfo32_c6GetValEPff
// Demangled: FxInterpInfo32_c::GetVal(float *,float)
// attributes: thunk
int __fastcall FxInterpInfo32_c::GetVal(FxInterpInfo32_c *this, float *a2, float a3)
{
  return _ZN16FxInterpInfo32_c6GetValEPff(this, a2, a3);
}


// ============================================================

// Address: 0x198cc8
// Original: j__ZN16FxInterpInfo32_c4LoadEj
// Demangled: FxInterpInfo32_c::Load(uint)
// attributes: thunk
int __fastcall FxInterpInfo32_c::Load(FxInterpInfo32_c *this, unsigned int a2)
{
  return _ZN16FxInterpInfo32_c4LoadEj(this, a2);
}


// ============================================================

// Address: 0x1a0bb0
// Original: j__ZN16FxInterpInfo32_cC2Ev
// Demangled: FxInterpInfo32_c::FxInterpInfo32_c(void)
// attributes: thunk
void __fastcall FxInterpInfo32_c::FxInterpInfo32_c(FxInterpInfo32_c *this)
{
  _ZN16FxInterpInfo32_cC2Ev(this);
}


// ============================================================

// Address: 0x36c970
// Original: _ZN16FxInterpInfo32_cC2Ev
// Demangled: FxInterpInfo32_c::FxInterpInfo32_c(void)
void __fastcall FxInterpInfo32_c::FxInterpInfo32_c(FxInterpInfo32_c *this)
{
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_665CF0;
}


// ============================================================

// Address: 0x36c988
// Original: _ZN16FxInterpInfo32_cD0Ev
// Demangled: FxInterpInfo32_c::~FxInterpInfo32_c()
// attributes: thunk
void __fastcall FxInterpInfo32_c::~FxInterpInfo32_c(FxInterpInfo32_c *this)
{
  operator delete(this);
}


// ============================================================

// Address: 0x36c98c
// Original: _ZN16FxInterpInfo32_c6GetValEPff
// Demangled: FxInterpInfo32_c::GetVal(float *,float)
int __fastcall FxInterpInfo32_c::GetVal(int this, float *a2, float a3)
{
  int v3; // lr
  int v4; // r2
  __int16 *v5; // r3
  float v6; // s0
  float v7; // s2
  int v8; // r12
  int v9; // r4
  float v10; // s4
  bool v11; // cc
  int v12; // r2
  int v13; // r3
  float v14; // s2
  int v15; // r3
  float v16; // s0
  int v17; // r12
  float v18; // s4

  v3 = *(char *)(this + 5);
  if ( v3 == 1 )
  {
    if ( *(char *)(this + 6) >= 1 )
    {
      v4 = 0;
      do
      {
        v5 = *(__int16 **)(*(_DWORD *)(this + 12) + 4 * v4++);
        *a2++ = (float)*v5 / 1000.0;
      }
      while ( v4 < *(char *)(this + 6) );
    }
  }
  else
  {
    v6 = a3;
    if ( *(_BYTE *)(this + 4) )
    {
      v7 = (float)*(unsigned __int16 *)(*(_DWORD *)(this + 8) + 2 * v3 - 2) * 0.0039062;
      v6 = a3 - (float)(v7 * (float)(int)(float)(a3 / v7));
    }
    if ( v3 < 2 )
    {
LABEL_12:
      if ( *(char *)(this + 6) >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v12++);
          *a2 = (float)*(__int16 *)(v13 + 2 * (char)v3 - 2) / 1000.0;
          if ( v12 >= *(char *)(this + 6) )
            break;
          LOBYTE(v3) = *(_BYTE *)(this + 5);
          ++a2;
        }
      }
    }
    else
    {
      v8 = *(_DWORD *)(this + 8);
      v9 = 0;
      while ( 1 )
      {
        v10 = (float)*(unsigned __int16 *)(v8 + 2 * v9 + 2) * 0.0039062;
        if ( v6 < v10 )
          break;
        v11 = v9 + 2 < v3;
        ++v9;
        if ( !v11 )
          goto LABEL_12;
      }
      if ( *(char *)(this + 6) >= 1 )
      {
        v14 = (float)*(unsigned __int16 *)(v8 + 2 * v9) * 0.0039062;
        v15 = 0;
        v16 = (float)(v6 - v14) / (float)(v10 - v14);
        do
        {
          v17 = *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * v15++);
          v18 = (float)*(__int16 *)(v17 + 2 * v9) / 1000.0;
          *a2++ = v18 + (float)(v16 * (float)((float)((float)*(__int16 *)(v17 + 2 * v9 + 2) / 1000.0) - v18));
        }
        while ( v15 < *(char *)(this + 6) );
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x46f0d4
// Original: _ZN16FxInterpInfo32_c4LoadEj
// Demangled: FxInterpInfo32_c::Load(uint)
int __fastcall FxInterpInfo32_c::Load(FxInterpInfo32_c *this, unsigned int a2)
{
  FxInterpInfo32_c *v2; // r11
  unsigned int v3; // r4
  int v4; // r8
  char v5; // r1
  int Mem; // r0
  int v7; // r0
  int v8; // r9
  FxInterpInfo32_c *v9; // r2
  unsigned int v10; // r0
  int v11; // r11
  unsigned int v12; // r6
  float v16; // [sp+14h] [bp-1BCh] BYREF
  int v17; // [sp+18h] [bp-1B8h] BYREF
  char v18; // [sp+1Ch] [bp-1B4h] BYREF
  char v19[256]; // [sp+9Ch] [bp-134h] BYREF
  int v20; // [sp+19Ch] [bp-34h]

  v2 = this;
  v3 = a2;
  if ( *((char *)this + 6) >= 1 )
  {
    v4 = 0;
    do
    {
      ReadLine(v3, v19, 256);
      sscanf(v19, (const char *)&dword_46F2B4, &v18);
      ReadLine(v3, v19, 256);
      sscanf(v19, (const char *)&dword_46F2B4, &v18);
      ReadLine(v3, v19, 256);
      sscanf(v19, "%s %d", &v18, &v17);
      *((_BYTE *)v2 + 4) = v17;
      ReadLine(v3, v19, 256);
      sscanf(v19, "%s %d", &v18, &v17);
      v5 = v17;
      *((_BYTE *)v2 + 5) = v17;
      if ( !v4 )
      {
        Mem = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 2 * v5, 2);
        v5 = *((_BYTE *)v2 + 5);
        *((_DWORD *)v2 + 2) = Mem;
      }
      v7 = FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, 2 * v5, 2);
      v8 = v4;
      v9 = v2;
      *(_DWORD *)(*((_DWORD *)v2 + 3) + 4 * v4) = v7;
      v10 = a2;
      if ( *((char *)v2 + 5) >= 1 )
      {
        v11 = 0;
        do
        {
          v12 = v10;
          ReadLine(v10, v19, 256);
          sscanf(v19, (const char *)&dword_46F2B4, &v18);
          ReadLine(v12, v19, 256);
          sscanf(v19, "%s %f", &v18, &v16);
          *(_WORD *)(*((_DWORD *)this + 2) + 2 * v11) = (unsigned int)(float)(v16 * 256.0);
          ReadLine(v12, v19, 256);
          sscanf(v19, "%s %f", &v18, &v16);
          *(_WORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v4) + 2 * v11++) = (int)(float)(v16 * 1000.0);
          v10 = v12;
          v9 = this;
        }
        while ( v11 < *((char *)this + 5) );
      }
      v3 = v10;
      v2 = v9;
      ++v4;
    }
    while ( v8 + 1 < *((char *)v9 + 6) );
  }
  return _stack_chk_guard - v20;
}


// ============================================================
