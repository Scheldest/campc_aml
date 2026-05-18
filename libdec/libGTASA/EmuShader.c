
// Address: 0x18de60
// Original: j__ZN9EmuShader6SelectEb
// Demangled: EmuShader::Select(bool)
// attributes: thunk
int __fastcall EmuShader::Select(EmuShader *this, bool a2)
{
  return _ZN9EmuShader6SelectEb(this, a2);
}


// ============================================================

// Address: 0x18ea5c
// Original: j__ZN9EmuShaderC2EPKcS1_
// Demangled: EmuShader::EmuShader(char const*,char const*)
// attributes: thunk
void __fastcall EmuShader::EmuShader(EmuShader *this, const char *a2, const char *a3)
{
  _ZN9EmuShaderC2EPKcS1_(this, a2, a3);
}


// ============================================================

// Address: 0x196abc
// Original: j__ZN9EmuShader16RecompileShadersEv
// Demangled: EmuShader::RecompileShaders(void)
// attributes: thunk
int __fastcall EmuShader::RecompileShaders(EmuShader *this)
{
  return _ZN9EmuShader16RecompileShadersEv(this);
}


// ============================================================

// Address: 0x197888
// Original: j__ZN9EmuShaderD2Ev
// Demangled: EmuShader::~EmuShader()
// attributes: thunk
void __fastcall EmuShader::~EmuShader(EmuShader *this)
{
  _ZN9EmuShaderD2Ev(this);
}


// ============================================================

// Address: 0x197d18
// Original: j__ZN9EmuShader19EvaluateRenderFlagsEv
// Demangled: EmuShader::EvaluateRenderFlags(void)
// attributes: thunk
int __fastcall EmuShader::EvaluateRenderFlags(EmuShader *this)
{
  return _ZN9EmuShader19EvaluateRenderFlagsEv(this);
}


// ============================================================

// Address: 0x19bcc8
// Original: j__ZN9EmuShader12AssignShaderEb
// Demangled: EmuShader::AssignShader(bool)
// attributes: thunk
int __fastcall EmuShader::AssignShader(EmuShader *this, bool a2)
{
  return _ZN9EmuShader12AssignShaderEb(this, a2);
}


// ============================================================

// Address: 0x19bec8
// Original: j__ZN9EmuShader23ReevaluateLightingFlagsEb
// Demangled: EmuShader::ReevaluateLightingFlags(bool)
// attributes: thunk
int __fastcall EmuShader::ReevaluateLightingFlags(EmuShader *this, bool a2)
{
  return _ZN9EmuShader23ReevaluateLightingFlagsEb(this, a2);
}


// ============================================================

// Address: 0x1c083c
// Original: _ZN9EmuShader12AssignShaderEb
// Demangled: EmuShader::AssignShader(bool)
unsigned int __fastcall EmuShader::AssignShader(EmuShader *this, bool a2)
{
  unsigned int result; // r0
  int v4; // r1
  _DWORD *v5; // r2
  int v6; // r1
  int v7; // r1
  int v8; // r4
  __int64 v9; // kr00_8
  unsigned int *v10; // r0
  unsigned int v11; // r2
  int v12; // r6
  unsigned int v13; // r4
  int v14; // r1
  _DWORD *v15; // r2
  int v16; // r1
  int v17; // r1
  int v18; // r5
  __int64 v19; // kr08_8
  unsigned int *v20; // r0
  unsigned int v21; // r2
  float v22; // s0
  float v23; // s2
  int v24; // r1
  _DWORD *v25; // r2
  int v26; // r1
  int v27; // r1
  __int64 v28; // kr10_8
  unsigned int *v29; // r0
  unsigned int v30; // r2
  EmuShader *v31; // r5
  int v32; // r5
  const char **v33; // r3
  char *v34; // r6
  char *v35; // r0
  char *v36; // [sp+0h] [bp-18h] BYREF
  char *v37; // [sp+4h] [bp-14h] BYREF

  if ( EmuShader::curCustomShader )
  {
    result = (unsigned __int8)byte_6B8BA7;
    if ( byte_6B8BA7 )
    {
      v4 = renderQueue;
      v5 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 39;
      *v5 = 39;
      *(_DWORD *)(v4 + 628) += 4;
      v6 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 0;
      *(_DWORD *)(v6 + 628) += 4;
      v7 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 0;
      *(_DWORD *)(v7 + 628) += 4;
      v8 = renderQueue;
      if ( *(_BYTE *)(renderQueue + 601) )
        OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
      v9 = *(_QWORD *)(v8 + 624);
      v10 = (unsigned int *)(v8 + 624);
      __dmb(0xBu);
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 + HIDWORD(v9) - v9, v10) );
      __dmb(0xBu);
      if ( *(_BYTE *)(v8 + 601) )
        OS_MutexRelease(*(pthread_mutex_t **)(v8 + 604));
      if ( !*(_BYTE *)(v8 + 600) )
        RenderQueue::Process((RenderQueue *)v8);
      result = *(_DWORD *)(v8 + 612);
      if ( *(_DWORD *)(v8 + 624) + 1024 > result )
        return j_RenderQueue::Flush((RenderQueue *)v8);
    }
    return result;
  }
  if ( !ShaderClosetInitialized )
  {
    memset(EmuShader::ShaderCloset, 0, sizeof(EmuShader::ShaderCloset));
    ShaderClosetInitialized = 1;
    curAssignedShader = 0;
    InitShaderCache();
  }
  if ( (curEmulatorStateFlags & 0x10000000) != 0 || !this )
    EmuShader::ReevaluateLightingFlags(this, a2);
  v12 = curShaderStateFlags;
  EmuShader::EvaluateRenderFlags((EmuShader *)&curShaderStateFlags_ptr);
  v13 = curShaderStateFlags;
  curShaderStateFlags = v12;
  if ( byte_6B8BA7 )
  {
    if ( !(v13 << 31) )
    {
      v14 = renderQueue;
      v15 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 39;
      *v15 = 39;
      *(_DWORD *)(v14 + 628) += 4;
      v16 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 0;
      *(_DWORD *)(v16 + 628) += 4;
      v17 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 0;
      *(_DWORD *)(v17 + 628) += 4;
      v18 = renderQueue;
      if ( *(_BYTE *)(renderQueue + 601) )
        OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
      v19 = *(_QWORD *)(v18 + 624);
      v20 = (unsigned int *)(v18 + 624);
      __dmb(0xBu);
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 + HIDWORD(v19) - v19, v20) );
LABEL_35:
      __dmb(0xBu);
      if ( *(_BYTE *)(v18 + 601) )
        OS_MutexRelease(*(pthread_mutex_t **)(v18 + 604));
      if ( !*(_BYTE *)(v18 + 600) )
        RenderQueue::Process((RenderQueue *)v18);
      if ( (unsigned int)(*(_DWORD *)(v18 + 624) + 1024) > *(_DWORD *)(v18 + 612) )
        RenderQueue::Flush((RenderQueue *)v18);
      goto LABEL_41;
    }
    if ( (v13 & 4) != 0 )
    {
      v22 = COERCE_FLOAT(GetAlphaModulate());
      if ( (v13 & 0x800) != 0 )
        goto LABEL_27;
    }
    else
    {
      v22 = 1.0;
      if ( (v13 & 0x800) != 0 )
      {
LABEL_27:
        v23 = 0.8;
LABEL_31:
        v13 &= ~1u;
        v24 = renderQueue;
        v25 = *(_DWORD **)(renderQueue + 628);
        *(_DWORD *)(renderQueue + 632) = 39;
        *v25 = 39;
        *(_DWORD *)(v24 + 628) += 4;
        v26 = renderQueue;
        **(_DWORD **)(renderQueue + 628) = 4;
        *(_DWORD *)(v26 + 628) += 4;
        v27 = renderQueue;
        **(float **)(renderQueue + 628) = v22 * v23;
        *(_DWORD *)(v27 + 628) += 4;
        v18 = renderQueue;
        if ( *(_BYTE *)(renderQueue + 601) )
          OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
        v28 = *(_QWORD *)(v18 + 624);
        v29 = (unsigned int *)(v18 + 624);
        __dmb(0xBu);
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 + HIDWORD(v28) - v28, v29) );
        goto LABEL_35;
      }
    }
    v23 = 0.5;
    if ( (v13 & 0x200) == 0 )
      v23 = 0.2;
    goto LABEL_31;
  }
LABEL_41:
  if ( curAssignedShader && *(_DWORD *)(curAssignedShader + 8) == v13 )
    return EmuShader::Select((EmuShader *)curAssignedShader, 0);
  v31 = (EmuShader *)EmuShader::ShaderCloset[(unsigned __int8)v13];
  if ( v31 )
  {
    while ( *((_DWORD *)v31 + 2) != v13 )
    {
      v31 = (EmuShader *)*((_DWORD *)v31 + 5);
      if ( !v31 )
        goto LABEL_49;
    }
    EmuShader::Select(v31, 1);
    result = (unsigned int)&curAssignedShader;
    curAssignedShader = (int)v31;
  }
  else
  {
LABEL_49:
    v32 = operator new(0x18u);
    *(_DWORD *)(v32 + 8) = v13;
    *(_DWORD *)(v32 + 20) = 0;
    RQShader::BuildSource((RQShader *)v13, (unsigned int)&v37, (const char **)&v36, v33);
    *(_DWORD *)(v32 + 12) = HashString(v37);
    *(_DWORD *)(v32 + 16) = HashString(v36);
    v34 = j_strdup(v37);
    v35 = j_strdup(v36);
    *(_DWORD *)v32 = RQCreateShader(v34, v35, v13);
    *(_BYTE *)(v32 + 4) = 1;
    RegisterShader(v13);
    curAssignedShader = v32;
    *(_DWORD *)(v32 + 20) = EmuShader::ShaderCloset[(unsigned __int8)v13];
    EmuShader::ShaderCloset[(unsigned __int8)v13] = v32;
    return EmuShader::Select((EmuShader *)v32, 1);
  }
  return result;
}


// ============================================================

// Address: 0x1c0be4
// Original: _ZN9EmuShader23ReevaluateLightingFlagsEb
// Demangled: EmuShader::ReevaluateLightingFlags(bool)
int *__fastcall EmuShader::ReevaluateLightingFlags(EmuShader *this, bool a2)
{
  bool v3; // zf
  unsigned int v4; // r5
  int Light; // r0
  int v6; // r4
  int v7; // r6
  int v8; // r4
  unsigned int v9; // r0
  int *result; // r0
  _DWORD v11[12]; // [sp+0h] [bp-30h] BYREF

  v3 = (curShaderStateFlags & 2) == 0;
  if ( (curShaderStateFlags & 2) != 0 )
    v3 = this == 0;
  if ( !v3 )
  {
    v4 = 0;
    memset(v11, 0, 12);
    do
    {
      if ( *(_BYTE *)GetLight(v4) )
      {
        Light = GetLight(v4);
        if ( *(float *)(Light + 64) == 0.0 )
        {
          v6 = 0;
        }
        else
        {
          v6 = 1;
          if ( *(float *)(Light + 88) < 180.0 )
            v6 = 2;
        }
        GetLight(v4);
        v7 = v11[v6];
        SetLightToTypeIndex();
        v11[v6] = v7 + 1;
      }
      ++v4;
    }
    while ( v4 != 8 );
    v8 = v11[0];
    if ( v11[0] <= 0 )
    {
      v9 = curShaderStateFlags & 0xFFFFDFFF;
      curShaderStateFlags &= ~0x2000u;
    }
    else
    {
      curShaderStateFlags |= 0x2000u;
      *(_BYTE *)(GetLightByType() + 1) = 1;
      v9 = curShaderStateFlags;
      if ( v8 != 1 )
      {
        curShaderStateFlags |= 0x4000u;
        *(_BYTE *)(GetLightByType() + 1) = 1;
        if ( v8 >= 3 && GetMobileEffectSetting() >= 1 )
        {
          curShaderStateFlags |= 0x8000u;
          result = (int *)GetLightByType();
          *((_BYTE *)result + 1) = 1;
          if ( this != (EmuShader *)((char *)&stderr + 1) )
            return result;
LABEL_23:
          result = &curEmulatorStateFlags;
          curEmulatorStateFlags &= ~0x10000000u;
          return result;
        }
LABEL_22:
        result = &curShaderStateFlags;
        curShaderStateFlags &= ~0x8000u;
        if ( this != (EmuShader *)((char *)&stderr + 1) )
          return result;
        goto LABEL_23;
      }
    }
    curShaderStateFlags = v9 & 0xFFFFBFFF;
    goto LABEL_22;
  }
  result = (int *)(curShaderStateFlags & 0xFFFF1FFF);
  curShaderStateFlags &= 0xFFFF1FFF;
  if ( this == (EmuShader *)((char *)&stderr + 1) )
    goto LABEL_23;
  return result;
}


// ============================================================

// Address: 0x1c0d5c
// Original: _ZN9EmuShader19EvaluateRenderFlagsEv
// Demangled: EmuShader::EvaluateRenderFlags(void)
int __fastcall EmuShader::EvaluateRenderFlags(EmuShader *this)
{
  unsigned int v1; // r0
  int v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  _DWORD *v7; // r2
  int v8; // r1
  int v9; // r4
  __int64 v10; // kr00_8
  unsigned int *v11; // r0
  unsigned int v12; // r2
  int result; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r2
  int v17; // r1

  if ( (curShaderStateFlags & 0x201) == 0x200 )
    curShaderStateFlags &= ~0x200u;
  if ( (rwIsDepthWriteOn() != 1 || emu_IsAltRenderTarget() && !emu_IsAltDrawing()) && (curShaderStateFlags & 0x201) == 1 )
    curShaderStateFlags &= ~1u;
  v1 = curShaderStateFlags;
  if ( (curShaderStateFlags & 0x3000) == 0x1000 )
  {
    v1 = curShaderStateFlags & 0xFFFFEFFF;
    curShaderStateFlags &= ~0x1000u;
  }
  v2 = v1 & 0x20;
  LOWORD(v3) = 64;
  if ( (v1 & 0x20) == 0 )
    v1 &= 0xFFFCF7FF;
  HIWORD(v3) = 256;
  v4 = v3 & v1;
  if ( v4 )
    v1 &= ~0x10000u;
  if ( !v2 || v4 )
    curShaderStateFlags = v1;
  if ( (v1 & 4) != 0 )
  {
    if ( !emu_InternalBlendEnabled )
    {
      v6 = renderQueue;
      v7 = *(_DWORD **)(renderQueue + 628);
      *(_DWORD *)(renderQueue + 632) = 34;
      *v7 = 34;
      *(_DWORD *)(v6 + 628) += 4;
      v8 = renderQueue;
      **(_DWORD **)(renderQueue + 628) = 1;
      *(_DWORD *)(v8 + 628) += 4;
      v9 = renderQueue;
      if ( *(_BYTE *)(renderQueue + 601) )
        OS_MutexObtain(*(pthread_mutex_t **)(renderQueue + 604));
      v10 = *(_QWORD *)(v9 + 624);
      v11 = (unsigned int *)(v9 + 624);
      __dmb(0xBu);
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + HIDWORD(v10) - v10, v11) );
      __dmb(0xBu);
      if ( *(_BYTE *)(v9 + 601) )
        OS_MutexRelease(*(pthread_mutex_t **)(v9 + 604));
      if ( !*(_BYTE *)(v9 + 600) )
        RenderQueue::Process((RenderQueue *)v9);
      if ( (unsigned int)(*(_DWORD *)(v9 + 624) + 1024) > *(_DWORD *)(v9 + 612) )
        RenderQueue::Flush((RenderQueue *)v9);
      emu_InternalBlendEnabled = 1;
    }
  }
  else if ( !emu_InternalBlendEnabled )
  {
    v5 = curEmulatorStateFlags;
    goto LABEL_34;
  }
  v5 = curEmulatorStateFlags;
  if ( (curEmulatorStateFlags & 0x800000) != 0 )
    goto LABEL_35;
  v1 = curShaderStateFlags;
LABEL_34:
  curShaderStateFlags = v1 & 0xFFFFFFFB;
LABEL_35:
  result = curShaderStateFlags;
  if ( (v5 & 0x8000000) != 0 )
  {
    v16 = ~(4 * curShaderStateFlags) & 8;
    v14 = v16 - 17;
    v15 = v16 + 8;
  }
  else
  {
    v14 = -9;
    v15 = 16;
  }
  v17 = v14 & (v15 | curShaderStateFlags);
  if ( (curShaderStateFlags & 0x800000) != 0 )
    v17 &= 0xFEFEE5BB;
  curShaderStateFlags = v17;
  return result;
}


// ============================================================

// Address: 0x1c0f60
// Original: _ZN9EmuShader6SelectEb
// Demangled: EmuShader::Select(bool)
int __fastcall EmuShader::Select(EmuShader *this, int a2)
{
  int CurrentObjectMatrix; // r0
  int v5; // r6
  bool v6; // zf
  int CurrentViewMatrix; // r6
  int CurrentProjectionMatrix; // r6
  int v9; // r0
  int CurrentTextureMatrix; // r0
  float v11; // r0
  int v12; // r6
  void (__fastcall *v13)(int, int, int, int); // r5
  int Parameters; // r0
  int v15; // r6
  void (__fastcall *v16)(int, int, int, int); // r5
  int Color; // r0
  int v18; // r0
  int v19; // r6
  void (__fastcall *v20)(int, int, int, int); // r5
  int CameraPosition; // r0
  int v22; // r6
  void (__fastcall *v23)(int, int, int); // r8
  int VectorCount; // r5
  int Matrices; // r0
  char v26; // r0
  char v27; // r0
  int v28; // r5
  void (__fastcall *v29)(int, _DWORD, int, int); // r6
  int AmbientLightColor; // r0
  int LightByType; // r0
  int v32; // r6
  float32x4_t v33; // q8
  float32x4_t v34; // q8
  int v35; // r0
  int v36; // r6
  int v37; // r0
  void (__fastcall *v38)(int, int, _QWORD *, int); // r5
  bool v39; // zf
  int v40; // r0
  int v41; // r6
  int v42; // r0
  void (__fastcall *v43)(int, int, _QWORD *, int); // r5
  bool v44; // zf
  int v45; // r5
  void (__fastcall *v46)(int, int, int, int); // r6
  int MaterialParameter; // r0
  int v48; // r5
  void (__fastcall *v49)(int, int, int, int); // r6
  int v50; // r0
  int v51; // r5
  void (__fastcall *v52)(int, int, int, int); // r6
  int v53; // r0
  int v54; // r0
  int AlphaModulate; // s0
  int result; // r0
  int v57; // r4
  void (__fastcall *v58)(int, int); // r5
  int GlobalColor; // r0
  float v60; // [sp+0h] [bp-28h] BYREF
  int v61; // [sp+4h] [bp-24h]
  int v62; // [sp+8h] [bp-20h]

  EmuShader::curSelectedShader = *(_DWORD *)this;
  CurrentObjectMatrix = GetCurrentObjectMatrix();
  v5 = CurrentObjectMatrix;
  v6 = a2 == 0;
  if ( !a2 )
    v6 = *(_BYTE *)(CurrentObjectMatrix + 64) == 0;
  if ( v6 )
  {
    CurrentViewMatrix = GetCurrentViewMatrix();
  }
  else
  {
    (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)this + 12))(*(_DWORD *)this, 2, CurrentObjectMatrix);
    *(_BYTE *)(v5 + 64) = 0;
    CurrentViewMatrix = GetCurrentViewMatrix();
    if ( a2 )
      goto LABEL_8;
  }
  if ( !*(_BYTE *)(CurrentViewMatrix + 64) )
  {
    CurrentProjectionMatrix = GetCurrentProjectionMatrix();
LABEL_11:
    if ( !*(_BYTE *)(CurrentProjectionMatrix + 64) )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_8:
  (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)this + 12))(*(_DWORD *)this, 1, CurrentViewMatrix);
  *(_BYTE *)(CurrentViewMatrix + 64) = 0;
  CurrentProjectionMatrix = GetCurrentProjectionMatrix();
  if ( !a2 )
    goto LABEL_11;
LABEL_12:
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(**(_DWORD **)this + 12))(*(_DWORD *)this, 0, CurrentProjectionMatrix);
  *(_BYTE *)(CurrentProjectionMatrix + 64) = 0;
LABEL_13:
  v9 = *((_DWORD *)this + 2);
  if ( (v9 & 0x2000000) != 0 )
  {
    CurrentTextureMatrix = GetCurrentTextureMatrix();
    (*(void (__fastcall **)(_DWORD, int, int))(**(_DWORD **)this + 12))(*(_DWORD *)this, 3, CurrentTextureMatrix);
    v9 = *((_DWORD *)this + 2);
  }
  if ( (v9 & 0x1000040) != 0 )
  {
    v11 = COERCE_FLOAT(emu_GetEnvMapCoefficient());
    v60 = v11;
    if ( (*((_BYTE *)this + 8) & 0x20) == 0 )
      v60 = v11 * 0.5;
    (*(void (__fastcall **)(_DWORD, int, float *, int, float))(**(_DWORD **)this + 8))(
      *(_DWORD *)this,
      11,
      &v60,
      1,
      COERCE_FLOAT(LODWORD(v60)));
    v9 = *((_DWORD *)this + 2);
  }
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 0x10000) == 0 )
      goto LABEL_21;
LABEL_26:
    (*(void (__fastcall **)(_DWORD, int, float *, int))(**(_DWORD **)this + 8))(
      *(_DWORD *)this,
      17,
      &detailTilingFactor,
      1);
    if ( (*((_DWORD *)this + 2) & 0x400) == 0 )
      goto LABEL_27;
    goto LABEL_22;
  }
  v60 = COERCE_FLOAT(GetAlphaModulate());
  (*(void (__fastcall **)(_DWORD, int, float *, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 18, &v60, 1);
  v9 = *((_DWORD *)this + 2);
  if ( (v9 & 0x10000) != 0 )
    goto LABEL_26;
LABEL_21:
  if ( (v9 & 0x400) == 0 )
    goto LABEL_27;
LABEL_22:
  if ( a2 || emu_DistanceFogIsDirty() )
  {
    v12 = *(_DWORD *)this;
    v13 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
    Parameters = emu_DistanceFogGetParameters();
    v13(v12, 13, Parameters, 3);
    v15 = *(_DWORD *)this;
    v16 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
    Color = emu_DistanceFogGetColor();
    v16(v15, 14, Color, 3);
    emu_DistanceFogSetDirty(0);
  }
LABEL_27:
  v18 = *((_DWORD *)this + 2);
  if ( (v18 & 0x80000) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, int, void *, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 23, &waterVars, 3);
    v18 = *((_DWORD *)this + 2);
  }
  if ( (v18 & 0x100000) != 0 )
  {
    (*(void (__fastcall **)(_DWORD, int, void *, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 19, &colorInterp, 1);
    v18 = *((_DWORD *)this + 2);
  }
  if ( (v18 & 0x18807C0) != 0 && (emu_CameraPositionIsDirty() || a2 == 1) )
  {
    v19 = *(_DWORD *)this;
    v20 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
    CameraPosition = emu_GetCameraPosition();
    v20(v19, 12, CameraPosition, 3);
    emu_CameraPositionSetDirty(0);
  }
  if ( (*((_WORD *)this + 4) & 0x180) != 0
    && (a2 || emu_InternalSkinMatricesDirty() == 1)
    && emu_InternalSkinGetVectorCount() )
  {
    v22 = *(_DWORD *)this;
    v23 = *(void (__fastcall **)(int, int, int))(**(_DWORD **)this + 16);
    VectorCount = emu_InternalSkinGetVectorCount();
    Matrices = emu_InternalSkinGetMatrices();
    v23(v22, VectorCount, Matrices);
  }
  if ( (*((_BYTE *)this + 8) & 2) != 0 )
  {
    v26 = byte_6B45A0;
    __dmb(0xBu);
    if ( (v26 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_6B45A0) )
    {
      qword_6B4590[0] = 0LL;
      qword_6B4590[1] = 0x3F80000000000000LL;
      j___cxa_guard_release((__guard *)&byte_6B45A0);
    }
    v27 = byte_6B45C0;
    __dmb(0xBu);
    if ( (v27 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_6B45C0) )
    {
      qword_6B45B0[0] = 0LL;
      qword_6B45B0[1] = 0x3F8000003F800000LL;
      j___cxa_guard_release((__guard *)&byte_6B45C0);
    }
    if ( a2 || *(_BYTE *)GetAmbientLightDirty() )
    {
      v28 = *(_DWORD *)this;
      v29 = *(void (__fastcall **)(int, _DWORD, int, int))(**(_DWORD **)this + 8);
      AmbientLightColor = GetAmbientLightColor();
      v29(v28, 0, AmbientLightColor, 3);
      *(_BYTE *)GetAmbientLightDirty() = 0;
    }
    if ( (*((_BYTE *)this + 9) & 0x20) != 0 )
    {
      LightByType = GetLightByType();
      v32 = LightByType;
      if ( a2 )
      {
        if ( !LightByType )
        {
          (*(void (__fastcall **)(_DWORD, int, _QWORD *, int))(**(_DWORD **)this + 8))(
            *(_DWORD *)this,
            1,
            qword_6B4590,
            3);
          (*(void (__fastcall **)(_DWORD, int, _QWORD *, int))(**(_DWORD **)this + 8))(
            *(_DWORD *)this,
            2,
            qword_6B45B0,
            3);
          (*(void (__fastcall **)(_DWORD, int, _QWORD *, int))(**(_DWORD **)this + 8))(
            *(_DWORD *)this,
            3,
            qword_6B45B0,
            3);
          goto LABEL_57;
        }
        goto LABEL_56;
      }
      if ( LightByType && *(_BYTE *)(LightByType + 1) )
      {
LABEL_56:
        v33.n128_u64[0] = 0xBE4CCCCDBE4CCCCDLL;
        v33.n128_u64[1] = 0xBE4CCCCDBE4CCCCDLL;
        v34 = vmulq_f32(*(float32x4_t *)(LightByType + 52), v33);
        (*(void (__fastcall **)(_DWORD, int, int, int, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32))(**(_DWORD **)this + 8))(
          *(_DWORD *)this,
          1,
          LightByType + 20,
          3,
          v34.n128_u32[0],
          v34.n128_u32[1],
          v34.n128_u32[2],
          v34.n128_u32[3]);
        (*(void (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 2, v32 + 52, 3);
        (*(void (__fastcall **)(_DWORD, int, float *, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 3, &v60, 3);
        *(_BYTE *)(v32 + 1) = 0;
      }
    }
LABEL_57:
    if ( (*((_BYTE *)this + 9) & 0x40) == 0 )
      goto LABEL_66;
    v35 = GetLightByType();
    v36 = v35;
    if ( a2 )
    {
      v37 = *(_DWORD *)this;
      v38 = *(void (__fastcall **)(int, int, _QWORD *, int))(**(_DWORD **)this + 8);
      if ( !v36 )
      {
        v38(v37, 4, qword_6B4590, 3);
        (*(void (__fastcall **)(_DWORD, int, _QWORD *, int))(**(_DWORD **)this + 8))(
          *(_DWORD *)this,
          5,
          qword_6B45B0,
          3);
        goto LABEL_66;
      }
    }
    else
    {
      v39 = v35 == 0;
      if ( v35 )
        v39 = *(_BYTE *)(v35 + 1) == 0;
      if ( v39 )
      {
LABEL_66:
        if ( (*((_BYTE *)this + 9) & 0x80) != 0 )
        {
          v40 = GetLightByType();
          v41 = v40;
          if ( a2 )
          {
            v42 = *(_DWORD *)this;
            v43 = *(void (__fastcall **)(int, int, _QWORD *, int))(**(_DWORD **)this + 8);
            if ( !v41 )
            {
              v43(v42, 6, qword_6B4590, 3);
              (*(void (__fastcall **)(_DWORD, int, _QWORD *, int))(**(_DWORD **)this + 8))(
                *(_DWORD *)this,
                7,
                qword_6B45B0,
                3);
LABEL_77:
              if ( (*((_BYTE *)this + 8) & 8) == 0 )
              {
                v45 = *(_DWORD *)this;
                v46 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
                MaterialParameter = GetMaterialParameter(0x1600u);
                v46(v45, 8, MaterialParameter, 4);
              }
              v48 = *(_DWORD *)this;
              v49 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
              v50 = GetMaterialParameter(0x1200u);
              v49(v48, 9, v50, 4);
              if ( (*((_BYTE *)this + 9) & 0xE0) != 0 )
              {
                v51 = *(_DWORD *)this;
                v52 = *(void (__fastcall **)(int, int, int, int))(**(_DWORD **)this + 8);
                v53 = GetMaterialParameter(0x1201u);
                v52(v51, 10, v53, 4);
              }
              SetMaterialDirty(0);
              goto LABEL_82;
            }
          }
          else
          {
            v44 = v40 == 0;
            if ( v40 )
              v44 = *(_BYTE *)(v40 + 1) == 0;
            if ( v44 )
              goto LABEL_76;
            v42 = *(_DWORD *)this;
            v43 = *(void (__fastcall **)(int, int, _QWORD *, int))(**(_DWORD **)this + 8);
          }
          v43(v42, 6, (_QWORD *)(v41 + 20), 3);
          (*(void (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 7, v41 + 52, 3);
          *(_BYTE *)(v41 + 1) = 0;
        }
        if ( a2 )
          goto LABEL_77;
LABEL_76:
        if ( GetMaterialDirty() != 1 )
          goto LABEL_86;
        goto LABEL_77;
      }
      v37 = *(_DWORD *)this;
      v38 = *(void (__fastcall **)(int, int, _QWORD *, int))(**(_DWORD **)this + 8);
    }
    v38(v37, 4, (_QWORD *)(v36 + 20), 3);
    (*(void (__fastcall **)(_DWORD, int, int, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 5, v36 + 52, 3);
    *(_BYTE *)(v36 + 1) = 0;
    goto LABEL_66;
  }
LABEL_82:
  if ( a2 != 1 )
  {
LABEL_86:
    result = *(unsigned __int8 *)GetGlobalColorDirty();
    if ( !result )
      return result;
    goto LABEL_90;
  }
  v54 = *((_DWORD *)this + 2);
  if ( (v54 & 0x200) != 0 )
  {
    v60 = 1.0;
    v61 = 1065353216;
    v62 = 1065353216;
    if ( (v54 & 4) != 0 )
      AlphaModulate = GetAlphaModulate();
    else
      AlphaModulate = 1.0;
    (*(void (__fastcall **)(_DWORD, _DWORD, void *, int, float, int, int, int))(**(_DWORD **)this + 8))(
      *(_DWORD *)this,
      0,
      &DirectionalLightColourFromDay,
      3,
      COERCE_FLOAT(LODWORD(v60)),
      v61,
      v62,
      AlphaModulate);
    (*(void (__fastcall **)(_DWORD, int, float *, int))(**(_DWORD **)this + 8))(*(_DWORD *)this, 9, &v60, 4);
  }
LABEL_90:
  result = BYTE2(curEmulatorStateFlags) << 24;
  if ( (curEmulatorStateFlags & 0x800000) == 0 )
  {
    v57 = *(_DWORD *)this;
    v58 = *(void (__fastcall **)(int, int))(*(_DWORD *)v57 + 20);
    GlobalColor = GetGlobalColor();
    v58(v57, GlobalColor);
    result = GetGlobalColorDirty();
    *(_BYTE *)result = 0;
  }
  return result;
}


// ============================================================

// Address: 0x1c14f0
// Original: _ZN9EmuShader16RecompileShadersEv
// Demangled: EmuShader::RecompileShaders(void)
int (**__fastcall EmuShader::RecompileShaders(EmuShader *this, int a2, int a3, const char **a4))[256]
{
  int v4; // r8
  int (**result)[256]; // r0
  int i; // r5
  char *v7; // r6
  char *v8; // r0
  char *v9; // [sp+4h] [bp-24h] BYREF
  char *v10; // [sp+8h] [bp-20h] BYREF

  v4 = 0;
  result = &EmuShader::ShaderCloset;
  do
  {
    for ( i = EmuShader::ShaderCloset[v4]; i; i = *(_DWORD *)(i + 20) )
    {
      RQShader::BuildSource(*(RQShader **)(i + 8), (unsigned int)&v10, (const char **)&v9, a4);
      *(_DWORD *)(i + 12) = HashString(v10);
      *(_DWORD *)(i + 16) = HashString(v9);
      v7 = j_strdup(v10);
      v8 = j_strdup(v9);
      result = (int (**)[256])RQCreateShader(v7, v8, *(_DWORD *)(i + 8));
      *(_DWORD *)i = result;
      *(_BYTE *)(i + 4) = 1;
    }
    ++v4;
  }
  while ( v4 != 256 );
  return result;
}


// ============================================================

// Address: 0x1c1568
// Original: _ZN9EmuShader9RecompileEv
// Demangled: EmuShader::Recompile(void)
int __fastcall EmuShader::Recompile(RQShader **this, int a2, int a3, const char **a4)
{
  char *v5; // r5
  char *v6; // r0
  int result; // r0
  char *v8; // [sp+0h] [bp-10h] BYREF
  char *v9; // [sp+4h] [bp-Ch] BYREF

  RQShader::BuildSource(this[2], (unsigned int)&v9, (const char **)&v8, a4);
  this[3] = (RQShader *)HashString(v9);
  this[4] = (RQShader *)HashString(v8);
  v5 = j_strdup(v9);
  v6 = j_strdup(v8);
  *this = (RQShader *)RQCreateShader(v5, v6, (unsigned int)this[2]);
  result = 1;
  *((_BYTE *)this + 4) = 1;
  return result;
}


// ============================================================

// Address: 0x1c15ac
// Original: _ZN9EmuShaderC2Ej
// Demangled: EmuShader::EmuShader(uint)
void __fastcall EmuShader::EmuShader(EmuShader *this, RQShader *a2, int a3, const char **a4)
{
  char *v6; // r6
  char *v7; // r0
  char *v8; // [sp+0h] [bp-18h] BYREF
  char *v9; // [sp+4h] [bp-14h] BYREF

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = a2;
  RQShader::BuildSource(a2, (unsigned int)&v9, (const char **)&v8, a4);
  *((_DWORD *)this + 3) = HashString(v9);
  *((_DWORD *)this + 4) = HashString(v8);
  v6 = j_strdup(v9);
  v7 = j_strdup(v8);
  *(_DWORD *)this = RQCreateShader(v6, v7, (unsigned int)a2);
  *((_BYTE *)this + 4) = 1;
  RegisterShader((unsigned int)a2);
}


// ============================================================

// Address: 0x1c1608
// Original: _ZN9EmuShaderC2EPKcS1_
// Demangled: EmuShader::EmuShader(char const*,char const*)
void __fastcall EmuShader::EmuShader(EmuShader *this, const char *a2, const char *a3)
{
  char *v5; // r6
  char *v6; // r0

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = j_strdup(a2);
  v6 = j_strdup(a3);
  *(_DWORD *)this = RQCreateShader(v5, v6, 0xFFFFFFFF);
  *((_BYTE *)this + 4) = 1;
}


// ============================================================

// Address: 0x1c1642
// Original: _ZN9EmuShaderD2Ev
// Demangled: EmuShader::~EmuShader()
void __fastcall EmuShader::~EmuShader(RQShader **this)
{
  RQDeleteShader(*this);
}


// ============================================================
