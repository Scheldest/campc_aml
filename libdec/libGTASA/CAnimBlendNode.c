
// Address: 0x18f848
// Original: j__ZN14CAnimBlendNode16UpdateCompressedER7CVectorR11CQuaternionf
// Demangled: CAnimBlendNode::UpdateCompressed(CVector &,CQuaternion &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::UpdateCompressed(CAnimBlendNode *this, CVector *a2, CQuaternion *a3, float a4)
{
  return _ZN14CAnimBlendNode16UpdateCompressedER7CVectorR11CQuaternionf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18f8d4
// Original: j__ZN14CAnimBlendNode20CalcDeltasCompressedEv
// Demangled: CAnimBlendNode::CalcDeltasCompressed(void)
// attributes: thunk
int __fastcall CAnimBlendNode::CalcDeltasCompressed(CAnimBlendNode *this)
{
  return _ZN14CAnimBlendNode20CalcDeltasCompressedEv(this);
}


// ============================================================

// Address: 0x190030
// Original: j__ZN14CAnimBlendNode6UpdateER7CVectorR11CQuaternionf
// Demangled: CAnimBlendNode::Update(CVector &,CQuaternion &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::Update(CAnimBlendNode *this, CVector *a2, CQuaternion *a3, float a4)
{
  return _ZN14CAnimBlendNode6UpdateER7CVectorR11CQuaternionf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1916d0
// Original: j__ZN14CAnimBlendNode21GetCurrentTranslationER7CVectorf
// Demangled: CAnimBlendNode::GetCurrentTranslation(CVector &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::GetCurrentTranslation(CAnimBlendNode *this, CVector *a2, float a3)
{
  return _ZN14CAnimBlendNode21GetCurrentTranslationER7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x195890
// Original: j__ZN14CAnimBlendNode12FindKeyFrameEf
// Demangled: CAnimBlendNode::FindKeyFrame(float)
// attributes: thunk
int __fastcall CAnimBlendNode::FindKeyFrame(CAnimBlendNode *this, float a2)
{
  return _ZN14CAnimBlendNode12FindKeyFrameEf(this, a2);
}


// ============================================================

// Address: 0x199fe8
// Original: j__ZN14CAnimBlendNode22NextKeyFrameCompressedEv
// Demangled: CAnimBlendNode::NextKeyFrameCompressed(void)
// attributes: thunk
int __fastcall CAnimBlendNode::NextKeyFrameCompressed(CAnimBlendNode *this)
{
  return _ZN14CAnimBlendNode22NextKeyFrameCompressedEv(this);
}


// ============================================================

// Address: 0x19af28
// Original: j__ZN14CAnimBlendNode12NextKeyFrameEv
// Demangled: CAnimBlendNode::NextKeyFrame(void)
// attributes: thunk
int __fastcall CAnimBlendNode::NextKeyFrame(CAnimBlendNode *this)
{
  return _ZN14CAnimBlendNode12NextKeyFrameEv(this);
}


// ============================================================

// Address: 0x19ce0c
// Original: j__ZN14CAnimBlendNode23SetupKeyFrameCompressedEv
// Demangled: CAnimBlendNode::SetupKeyFrameCompressed(void)
// attributes: thunk
int __fastcall CAnimBlendNode::SetupKeyFrameCompressed(CAnimBlendNode *this)
{
  return _ZN14CAnimBlendNode23SetupKeyFrameCompressedEv(this);
}


// ============================================================

// Address: 0x19d184
// Original: j__ZN14CAnimBlendNode4InitEv
// Demangled: CAnimBlendNode::Init(void)
// attributes: thunk
int __fastcall CAnimBlendNode::Init(CAnimBlendNode *this)
{
  return _ZN14CAnimBlendNode4InitEv(this);
}


// ============================================================

// Address: 0x19e954
// Original: j__ZN14CAnimBlendNode31GetCurrentTranslationCompressedER7CVectorf
// Demangled: CAnimBlendNode::GetCurrentTranslationCompressed(CVector &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::GetCurrentTranslationCompressed(CAnimBlendNode *this, CVector *a2, float a3)
{
  return _ZN14CAnimBlendNode31GetCurrentTranslationCompressedER7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x19f50c
// Original: j__ZN14CAnimBlendNode17GetEndTranslationER7CVectorf
// Demangled: CAnimBlendNode::GetEndTranslation(CVector &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::GetEndTranslation(CAnimBlendNode *this, CVector *a2, float a3)
{
  return _ZN14CAnimBlendNode17GetEndTranslationER7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x1a0f28
// Original: j__ZN14CAnimBlendNode27GetEndTranslationCompressedER7CVectorf
// Demangled: CAnimBlendNode::GetEndTranslationCompressed(CVector &,float)
// attributes: thunk
int __fastcall CAnimBlendNode::GetEndTranslationCompressed(CAnimBlendNode *this, CVector *a2, float a3)
{
  return _ZN14CAnimBlendNode27GetEndTranslationCompressedER7CVectorf(this, a2, a3);
}


// ============================================================

// Address: 0x38a8d4
// Original: _ZN14CAnimBlendNode4InitEv
// Demangled: CAnimBlendNode::Init(void)
_DWORD *__fastcall CAnimBlendNode::Init(_DWORD *this)
{
  this[2] = -1;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  return this;
}


// ============================================================

// Address: 0x38a8e4
// Original: _ZN14CAnimBlendNode10UpdateTimeEv
// Demangled: CAnimBlendNode::UpdateTime(void)
int __fastcall CAnimBlendNode::UpdateTime(CAnimBlendNode *this)
{
  int v1; // r2
  float v2; // s0
  int v3; // r3
  __int16 v4; // r12
  char v5; // lr
  __int16 v7; // r5
  int v8; // r4
  int v9; // r1
  __int16 v10; // r1

  v1 = *((_DWORD *)this + 5);
  if ( *(unsigned __int8 *)(v1 + 46) << 31
    && (v2 = *((float *)this + 3) - *(float *)(v1 + 40), *((float *)this + 3) = v2, v2 <= 0.0)
    && (v3 = *((_DWORD *)this + 4), v4 = *(_WORD *)(v3 + 6), v4 >= 2) )
  {
    v7 = *((_WORD *)this + 4);
    v5 = 0;
    *((_WORD *)this + 5) = v7;
    do
    {
      *((_WORD *)this + 4) = v7 + 1;
      v8 = (__int16)(v7 + 1);
      if ( v4 <= v8 )
      {
        if ( (*(_BYTE *)(v1 + 46) & 2) == 0 )
        {
          v5 = 0;
          *((_DWORD *)this + 3) = 0;
          *((_WORD *)this + 4) = v7;
          return v5 & 1;
        }
        v8 = 0;
        v5 = 1;
        *((_WORD *)this + 4) = 0;
      }
      v9 = 20 * v8;
      if ( (*(_WORD *)(v3 + 4) & 2) != 0 )
        v9 = 32 * v8;
      v7 = v8;
      v2 = v2 + *(float *)(v9 + *(_DWORD *)(v3 + 8) + 16);
      *((float *)this + 3) = v2;
    }
    while ( v2 <= 0.0 );
    v10 = v8 - 1;
    if ( (__int16)(v8 - 1) < 0 )
      v10 = v8 - 1 + v4;
    *((_WORD *)this + 5) = v10;
  }
  else
  {
    v5 = 0;
  }
  return v5 & 1;
}


// ============================================================

// Address: 0x38a99e
// Original: _ZN14CAnimBlendNode18NextKeyFrameNoCalcEv
// Demangled: CAnimBlendNode::NextKeyFrameNoCalc(void)
int __fastcall CAnimBlendNode::NextKeyFrameNoCalc(CAnimBlendNode *this)
{
  int v1; // r3
  __int16 v2; // r12
  char v3; // lr
  float v4; // s0
  int v5; // r2
  __int16 v6; // r4
  int v7; // r6
  __int16 v8; // r1
  __int16 v9; // r2

  v1 = *((_DWORD *)this + 4);
  v2 = *(_WORD *)(v1 + 6);
  if ( v2 >= 2 )
  {
    v4 = *((float *)this + 3);
    v3 = 0;
    LOWORD(v5) = *((_WORD *)this + 4);
    *((_WORD *)this + 5) = v5;
    if ( v4 <= 0.0 )
    {
      v6 = v5;
      do
      {
        *((_WORD *)this + 4) = v6 + 1;
        v5 = (__int16)(v6 + 1);
        if ( v2 <= v5 )
        {
          if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 46) & 2) == 0 )
          {
            v3 = 0;
            *((_DWORD *)this + 3) = 0;
            *((_WORD *)this + 4) = v6;
            return v3 & 1;
          }
          v5 = 0;
          v3 = 1;
          *((_WORD *)this + 4) = 0;
        }
        v7 = 20 * v5;
        if ( (*(_WORD *)(v1 + 4) & 2) != 0 )
          v7 = 32 * v5;
        v6 = v5;
        v4 = *(float *)(*(_DWORD *)(v1 + 8) + v7 + 16) + v4;
        *((float *)this + 3) = v4;
      }
      while ( v4 <= 0.0 );
    }
    v8 = v5 - 1;
    v9 = v5 - 1;
    if ( v9 < 0 )
      v8 = v9 + v2;
    *((_WORD *)this + 5) = v8;
  }
  else
  {
    v3 = 0;
  }
  return v3 & 1;
}


// ============================================================

// Address: 0x38aa44
// Original: _ZN14CAnimBlendNode6UpdateER7CVectorR11CQuaternionf
// Demangled: CAnimBlendNode::Update(CVector &,CQuaternion &,float)
int __fastcall CAnimBlendNode::Update(CAnimBlendNode *this, CVector *a2, float32x4_t *a3, float a4)
{
  int KeyFrame; // r6
  int v9; // r0
  float v10; // s0
  float v11; // s16
  int v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // lr
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r3
  float v21; // s0
  float v22; // s0
  float v23; // s4
  float v24; // s6
  __int64 v25; // d17
  __int64 v26; // d17
  _QWORD v28[2]; // [sp+10h] [bp-38h] BYREF
  _QWORD v29[2]; // [sp+20h] [bp-28h] BYREF

  KeyFrame = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  a3->n128_u64[0] = 0LL;
  a3->n128_u64[1] = 0LL;
  v9 = *((_DWORD *)this + 5);
  if ( *(unsigned __int8 *)(v9 + 46) << 31 )
  {
    v10 = *((float *)this + 3) - *(float *)(v9 + 40);
    *((float *)this + 3) = v10;
    if ( v10 <= 0.0 )
    {
      KeyFrame = CAnimBlendNode::NextKeyFrame(this);
      v9 = *((_DWORD *)this + 5);
    }
    else
    {
      KeyFrame = 0;
    }
  }
  v11 = *(float *)(v9 + 24) * a4;
  if ( (*(_BYTE *)(v9 + 46) & 0x10) != 0 )
    v11 = *(float *)(v9 + 24);
  if ( v11 > 0.0 )
  {
    v12 = *((_DWORD *)this + 4);
    v13 = *((__int16 *)this + 5);
    v14 = *((__int16 *)this + 4);
    v15 = *(unsigned __int16 *)(v12 + 4);
    v16 = *(_DWORD *)(v12 + 8);
    v17 = 20 * v13;
    if ( (v15 & 2) != 0 )
      v17 = 32 * v13;
    v18 = 20 * v14;
    if ( (v15 & 2) != 0 )
      v18 = 32 * v14;
    v19 = v16 + v17;
    v20 = v18 + v16;
    v21 = *(float *)(v20 + 16);
    if ( v21 == 0.0 )
    {
      v22 = 0.0;
      if ( (v15 & 2) == 0 )
      {
LABEL_15:
        if ( v15 << 31 )
        {
          v25 = *(_QWORD *)(v19 + 8);
          v29[0] = *(_QWORD *)v19;
          v29[1] = v25;
          v26 = *(_QWORD *)(v20 + 8);
          v28[0] = *(_QWORD *)v20;
          v28[1] = v26;
          CQuaternion::Slerp(
            (CQuaternion *)a3,
            (const CQuaternion *)v29,
            (const CQuaternion *)v28,
            *(float *)this,
            *((float *)this + 1),
            v22);
          *a3 = vmulq_n_f32(*a3, v11);
        }
        return KeyFrame;
      }
    }
    else
    {
      v22 = (float)(v21 - *((float *)this + 3)) / v21;
      if ( (v15 & 2) == 0 )
        goto LABEL_15;
    }
    v23 = v11 * (float)(*(float *)(v19 + 24) + (float)(v22 * (float)(*(float *)(v20 + 24) - *(float *)(v19 + 24))));
    v24 = v11 * (float)(*(float *)(v19 + 28) + (float)(v22 * (float)(*(float *)(v20 + 28) - *(float *)(v19 + 28))));
    *(float *)a2 = v11
                 * (float)(*(float *)(v19 + 20) + (float)(v22 * (float)(*(float *)(v20 + 20) - *(float *)(v19 + 20))));
    *((float *)a2 + 1) = v23;
    *((float *)a2 + 2) = v24;
    v15 = *(unsigned __int16 *)(*((_DWORD *)this + 4) + 4);
    goto LABEL_15;
  }
  return KeyFrame;
}


// ============================================================

// Address: 0x38abcc
// Original: _ZN14CAnimBlendNode12NextKeyFrameEv
// Demangled: CAnimBlendNode::NextKeyFrame(void)
int __fastcall CAnimBlendNode::NextKeyFrame(CAnimBlendNode *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d8
  int v4; // r0
  int v5; // r12
  char v6; // r8
  float v7; // s0
  int v8; // r1
  __int16 v9; // r2
  int v10; // r6
  int v11; // r2
  __int16 v12; // r3
  bool v13; // zf
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r3
  float v18; // r0
  float v19; // s0

  v4 = *((_DWORD *)this + 4);
  v5 = *(unsigned __int16 *)(v4 + 6);
  if ( (__int16)v5 >= 2 )
  {
    v7 = *((float *)this + 3);
    v6 = 0;
    LOWORD(v8) = *((_WORD *)this + 4);
    *((_WORD *)this + 5) = v8;
    if ( v7 <= 0.0 )
    {
      v9 = v8;
      do
      {
        *((_WORD *)this + 4) = v9 + 1;
        v8 = (__int16)(v9 + 1);
        if ( (__int16)v5 <= v8 )
        {
          if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 46) & 2) == 0 )
          {
            v6 = 0;
            *((_DWORD *)this + 3) = 0;
            *((_WORD *)this + 4) = v9;
            return v6 & 1;
          }
          v8 = 0;
          v6 = 1;
          *((_WORD *)this + 4) = 0;
        }
        v10 = 20 * v8;
        if ( (*(_WORD *)(v4 + 4) & 2) != 0 )
          v10 = 32 * v8;
        v9 = v8;
        v7 = *(float *)(*(_DWORD *)(v4 + 8) + v10 + 16) + v7;
        *((float *)this + 3) = v7;
      }
      while ( v7 <= 0.0 );
    }
    v11 = (unsigned __int16)v8 + 0xFFFF;
    if ( (__int16)(v8 - 1) < 0 )
      v11 = v5 + (unsigned __int16)(v8 - 1);
    *((_WORD *)this + 5) = v11;
    v12 = *(_WORD *)(v4 + 4);
    if ( (v12 & 1) != 0 )
    {
      v13 = (v12 & 2) == 0;
      v14 = v11 << 16;
      v15 = *(_DWORD *)(v4 + 8);
      v2.n64_u32[0] = 1.0;
      v16 = 20 * (__int16)v11;
      if ( !v13 )
        v16 = v14 >> 11;
      v17 = 20 * (__int16)v8;
      if ( !v13 )
        v17 = 32 * (__int16)v8;
      v1.n64_f32[0] = (float)((float)((float)(*(float *)(v15 + v16) * *(float *)(v15 + v17))
                                    + (float)(*(float *)(v15 + v16 + 4) * *(float *)(v15 + v17 + 4)))
                            + (float)(*(float *)(v15 + v16 + 8) * *(float *)(v15 + v17 + 8)))
                    + (float)(*(float *)(v15 + v16 + 12) * *(float *)(v15 + v17 + 12));
      v18 = acosf(vmin_f32(v1, v2).n64_f32[0]);
      *(float *)this = v18;
      if ( v18 == 0.0 )
        v19 = 0.0;
      else
        v19 = 1.0 / sinf(v18);
      *((float *)this + 1) = v19;
    }
  }
  else
  {
    v6 = 0;
  }
  return v6 & 1;
}


// ============================================================

// Address: 0x38ad28
// Original: _ZN14CAnimBlendNode10CalcDeltasEv
// Demangled: CAnimBlendNode::CalcDeltas(void)
float __fastcall CAnimBlendNode::CalcDeltas(CAnimBlendNode *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d8
  float result; // r0
  __int16 v5; // r1
  int v6; // r3
  bool v7; // zf
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r3
  float v12; // s0

  result = *((float *)this + 4);
  v5 = *(_WORD *)(LODWORD(result) + 4);
  if ( (v5 & 1) != 0 )
  {
    v6 = *((__int16 *)this + 5);
    v7 = (v5 & 2) == 0;
    v8 = *((__int16 *)this + 4);
    v2.n64_u32[0] = 1.0;
    v9 = *(_DWORD *)(LODWORD(result) + 8);
    v10 = 20 * v6;
    if ( !v7 )
      v10 = 32 * v6;
    v11 = 20 * v8;
    if ( !v7 )
      v11 = 32 * v8;
    v1.n64_f32[0] = (float)((float)((float)(*(float *)(v9 + v10) * *(float *)(v9 + v11))
                                  + (float)(*(float *)(v9 + v10 + 4) * *(float *)(v9 + v11 + 4)))
                          + (float)(*(float *)(v9 + v10 + 8) * *(float *)(v9 + v11 + 8)))
                  + (float)(*(float *)(v9 + v10 + 12) * *(float *)(v9 + v11 + 12));
    result = acosf(vmin_f32(v1, v2).n64_f32[0]);
    *(float *)this = result;
    if ( result == 0.0 )
    {
      v12 = 0.0;
    }
    else
    {
      result = sinf(result);
      v12 = 1.0 / result;
    }
    *((float *)this + 1) = v12;
  }
  return result;
}


// ============================================================

// Address: 0x38ade4
// Original: _ZN14CAnimBlendNode21GetCurrentTranslationER7CVectorf
// Demangled: CAnimBlendNode::GetCurrentTranslation(CVector &,float)
int __fastcall CAnimBlendNode::GetCurrentTranslation(int result, float *a2, float a3)
{
  int v3; // r3
  float v4; // s0
  int v5; // r2
  int v6; // r4
  int v7; // r3
  int v8; // r12
  int v9; // lr
  int v10; // r2
  int v11; // r4
  float *v12; // r3
  float v13; // s2
  float v14; // s2
  float v15; // s4
  float v16; // s6
  float v17; // s0

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v3 = *(_DWORD *)(result + 20);
  v4 = *(float *)(v3 + 24) * a3;
  if ( (*(_BYTE *)(v3 + 46) & 0x10) != 0 )
    v4 = *(float *)(v3 + 24);
  if ( v4 > 0.0 )
  {
    v5 = *(_DWORD *)(result + 16);
    v6 = *(__int16 *)(result + 10);
    v7 = *(__int16 *)(result + 8);
    v8 = *(_DWORD *)(v5 + 8);
    v9 = *(_WORD *)(v5 + 4) & 2;
    v10 = 20 * v6;
    if ( v9 )
      v10 = 32 * v6;
    v11 = 20 * v7;
    if ( v9 )
      v11 = 32 * v7;
    v12 = (float *)(v8 + v11);
    v13 = *(float *)(v8 + v11 + 16);
    if ( v13 == 0.0 )
      v14 = 0.0;
    else
      v14 = (float)(v13 - *(float *)(result + 12)) / v13;
    if ( v9 )
    {
      result = v8 + v10;
      v15 = v4 * (float)(*(float *)(v8 + v10 + 20) + (float)(v14 * (float)(v12[5] - *(float *)(v8 + v10 + 20))));
      v16 = v4 * (float)(*(float *)(v8 + v10 + 24) + (float)(v14 * (float)(v12[6] - *(float *)(v8 + v10 + 24))));
      v17 = v4 * (float)(*(float *)(v8 + v10 + 28) + (float)(v14 * (float)(v12[7] - *(float *)(v8 + v10 + 28))));
      *a2 = v15;
      a2[1] = v16;
      a2[2] = v17;
    }
  }
  return result;
}


// ============================================================

// Address: 0x38aed0
// Original: _ZN14CAnimBlendNode17GetEndTranslationER7CVectorf
// Demangled: CAnimBlendNode::GetEndTranslation(CVector &,float)
int __fastcall CAnimBlendNode::GetEndTranslation(int result, float *a2, float a3)
{
  int v3; // r3
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float v7; // s0

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v3 = *(_DWORD *)(result + 20);
  v4 = *(float *)(v3 + 24) * a3;
  if ( (*(_BYTE *)(v3 + 46) & 0x10) != 0 )
    v4 = *(float *)(v3 + 24);
  if ( v4 > 0.0 )
  {
    result = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 4) & 2) != 0 )
    {
      result = *(_DWORD *)(result + 8) + 32 * *(__int16 *)(result + 6);
      v5 = v4 * *(float *)(result - 12);
      v6 = v4 * *(float *)(result - 8);
      v7 = v4 * *(float *)(result - 4);
      *a2 = v5;
      a2[1] = v6;
      a2[2] = v7;
    }
  }
  return result;
}


// ============================================================

// Address: 0x38af38
// Original: _ZN14CAnimBlendNode12FindKeyFrameEf
// Demangled: CAnimBlendNode::FindKeyFrame(float)
int __fastcall CAnimBlendNode::FindKeyFrame(CAnimBlendNode *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d8
  int result; // r0
  int v6; // r12
  float *v7; // r0
  float v8; // s4
  float v9; // s2
  __int16 v10; // r0
  int v12; // r1
  unsigned int v13; // r4
  int v14; // r3
  int v15; // lr
  float *v16; // r6
  float v17; // s2
  __int16 v18; // r1
  int v19; // r2
  int v20; // r6
  __int16 v21; // r2
  bool v22; // zf
  int v23; // r3
  int v24; // r2
  int v25; // r1
  float v26; // r0
  float v27; // s0
  int v28; // r0
  int v29; // r1
  float v30; // r0
  float v31; // s0

  result = 0;
  v6 = *((_DWORD *)this + 4);
  if ( *(__int16 *)(v6 + 6) < 1 )
    return result;
  *((_DWORD *)this + 2) = 0;
  if ( *(_WORD *)(v6 + 6) == 1 )
  {
    *((_DWORD *)this + 3) = 0;
    if ( !(*(unsigned __int8 *)(v6 + 4) << 31) )
      return 1;
    v7 = *(float **)(v6 + 8);
    v3.n64_u32[0] = 1.0;
    v8 = v7[2] * v7[2];
    v2.n64_f32[0] = (float)(*v7 * *v7) + (float)(v7[1] * v7[1]);
    v9 = v7[3] * v7[3];
LABEL_23:
    v2.n64_f32[0] = (float)(v2.n64_f32[0] + v8) + v9;
    v26 = acosf(vmin_f32(v2, v3).n64_f32[0]);
    *(float *)this = v26;
    if ( v26 == 0.0 )
      v27 = 0.0;
    else
      v27 = v3.n64_f32[0] / sinf(v26);
    *((float *)this + 1) = v27;
    return 1;
  }
  v10 = 1;
  *((_WORD *)this + 4) = 1;
  v12 = 20;
  v13 = *(unsigned __int16 *)(v6 + 4);
  v14 = *(_DWORD *)(v6 + 8);
  if ( (v13 & 2) != 0 )
    v12 = 32;
  v15 = (v13 >> 1) & 1;
  v16 = (float *)(v14 + v12);
  v17 = *(float *)(v14 + v12 + 16);
  if ( v17 >= a2 )
  {
    v18 = 0;
LABEL_17:
    *((float *)this + 3) = v17 - a2;
    v21 = *(_WORD *)(v6 + 4);
    if ( (v21 & 1) == 0 )
      return 1;
    v22 = (v21 & 2) == 0;
    v23 = *(_DWORD *)(v6 + 8);
    v3.n64_u32[0] = 1.0;
    v24 = 20 * v18;
    if ( !v22 )
      v24 = 32 * v18;
    v25 = 20 * v10;
    if ( !v22 )
      v25 = 32 * v10;
    v8 = *(float *)(v23 + v24 + 8) * *(float *)(v23 + v25 + 8);
    v2.n64_f32[0] = (float)(*(float *)(v23 + v24) * *(float *)(v23 + v25))
                  + (float)(*(float *)(v23 + v24 + 4) * *(float *)(v23 + v25 + 4));
    v9 = *(float *)(v23 + v24 + 12) * *(float *)(v23 + v25 + 12);
    goto LABEL_23;
  }
  v10 = 1;
  v18 = 0;
  v19 = 1;
  while ( v19 + 1 < *(__int16 *)(v6 + 6) )
  {
LABEL_12:
    v18 = v10++;
    *((_WORD *)this + 4) = v10;
    a2 = a2 - v17;
    *((_WORD *)this + 5) = v18;
    v19 = v10;
    v13 = *(unsigned __int16 *)(v6 + 4);
    v14 = *(_DWORD *)(v6 + 8);
    v20 = 20 * v10;
    if ( (v13 & 2) != 0 )
      v20 = 32 * v10;
    v16 = (float *)(v20 + v14);
    v17 = v16[4];
    v15 = (v13 >> 1) & 1;
    if ( a2 <= v17 )
      goto LABEL_17;
  }
  if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 46) & 2) != 0 )
  {
    v10 = 0;
    *((_WORD *)this + 4) = 0;
    goto LABEL_12;
  }
  if ( v13 << 31 )
  {
    v28 = v18;
    v3.n64_u32[0] = 1.0;
    v29 = 20 * v18;
    if ( v15 << 31 )
      v29 = 32 * v28;
    v2.n64_f32[0] = (float)((float)((float)(*(float *)(v14 + v29) * *v16) + (float)(*(float *)(v14 + v29 + 4) * v16[1]))
                          + (float)(*(float *)(v14 + v29 + 8) * v16[2]))
                  + (float)(*(float *)(v14 + v29 + 12) * v16[3]);
    v30 = acosf(vmin_f32(v2, v3).n64_f32[0]);
    *(float *)this = v30;
    if ( v30 == 0.0 )
      v31 = 0.0;
    else
      v31 = 1.0 / sinf(v30);
    *((float *)this + 1) = v31;
  }
  result = 0;
  *((_DWORD *)this + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x38b188
// Original: _ZN14CAnimBlendNode16UpdateCompressedER7CVectorR11CQuaternionf
// Demangled: CAnimBlendNode::UpdateCompressed(CVector &,CQuaternion &,float)
int __fastcall CAnimBlendNode::UpdateCompressed(CAnimBlendNode *this, CVector *a2, float32x4_t *a3, float a4)
{
  int KeyFrameCompressed; // r6
  int v9; // r0
  float v10; // s0
  float v11; // s16
  int v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r9
  int v16; // r0
  int v17; // r2
  int16x4_t *v18; // r12
  int v19; // r3
  int16x4_t *v20; // r3
  float v21; // s0
  float v22; // s2
  float v23; // s6
  float v24; // s10
  float v25; // s2
  float v26; // s4
  float v27; // s6
  float32x4_t v28; // q10
  float32x4_t v29; // q8
  float32x4_t v31; // [sp+20h] [bp-48h] BYREF
  float32x4_t v32; // [sp+30h] [bp-38h] BYREF

  KeyFrameCompressed = 0;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = 0;
  a3->n128_u64[0] = 0LL;
  a3->n128_u64[1] = 0LL;
  v9 = *((_DWORD *)this + 5);
  if ( *(unsigned __int8 *)(v9 + 46) << 31 )
  {
    v10 = *((float *)this + 3) - *(float *)(v9 + 40);
    *((float *)this + 3) = v10;
    if ( v10 <= 0.0 )
    {
      KeyFrameCompressed = CAnimBlendNode::NextKeyFrameCompressed(this);
      v9 = *((_DWORD *)this + 5);
    }
    else
    {
      KeyFrameCompressed = 0;
    }
  }
  v11 = *(float *)(v9 + 24) * a4;
  if ( (*(_BYTE *)(v9 + 46) & 0x10) != 0 )
    v11 = *(float *)(v9 + 24);
  if ( v11 > 0.0 )
  {
    v12 = *((_DWORD *)this + 4);
    v13 = *((__int16 *)this + 5);
    v14 = *((__int16 *)this + 4);
    v15 = *(unsigned __int16 *)(v12 + 4);
    v16 = *(_DWORD *)(v12 + 8);
    v17 = 10 * v13;
    if ( (v15 & 2) != 0 )
      v17 = 16 * v13;
    v18 = (int16x4_t *)(v16 + v17);
    v19 = 10 * v14;
    if ( (v15 & 2) != 0 )
      v19 = 16 * v14;
    v20 = (int16x4_t *)(v19 + v16);
    if ( v20[1].n64_u16[0] )
    {
      v21 = (float)((float)((float)v20[1].n64_i16[0] * 0.016667) - *((float *)this + 3))
          / (float)((float)v20[1].n64_i16[0] * 0.016667);
      if ( (v15 & 2) == 0 )
        goto LABEL_15;
    }
    else
    {
      v21 = 0.0;
      if ( (v15 & 2) == 0 )
      {
LABEL_15:
        if ( v15 << 31 )
        {
          v28 = vdupq_n_s32(0x39800000u);
          v29 = vmulq_f32(vcvtq_f32_s32(vmovl_s16((int16x4_t)v20->n64_u64[0])), v28);
          v32 = vmulq_f32(vcvtq_f32_s32(vmovl_s16((int16x4_t)v18->n64_u64[0])), v28);
          v31 = v29;
          CQuaternion::Slerp(
            (CQuaternion *)a3,
            (const CQuaternion *)&v32,
            (const CQuaternion *)&v31,
            *(float *)this,
            *((float *)this + 1),
            v21);
          *a3 = vmulq_n_f32(*a3, v11);
        }
        return KeyFrameCompressed;
      }
    }
    v22 = (float)v18[1].n64_i16[2] * 0.00097656;
    v23 = (float)v18[1].n64_i16[1] * 0.00097656;
    v24 = (float)v18[1].n64_i16[3] * 0.00097656;
    v25 = v11 * (float)(v22 + (float)(v21 * (float)((float)((float)v20[1].n64_i16[2] * 0.00097656) - v22)));
    v26 = v11 * (float)(v23 + (float)(v21 * (float)((float)((float)v20[1].n64_i16[1] * 0.00097656) - v23)));
    v27 = v11 * (float)(v24 + (float)(v21 * (float)((float)((float)v20[1].n64_i16[3] * 0.00097656) - v24)));
    *(float *)a2 = v26;
    *((float *)a2 + 1) = v25;
    *((float *)a2 + 2) = v27;
    v15 = *(unsigned __int16 *)(*((_DWORD *)this + 4) + 4);
    goto LABEL_15;
  }
  return KeyFrameCompressed;
}


// ============================================================

// Address: 0x38b3ac
// Original: _ZN14CAnimBlendNode22NextKeyFrameCompressedEv
// Demangled: CAnimBlendNode::NextKeyFrameCompressed(void)
int __fastcall CAnimBlendNode::NextKeyFrameCompressed(CAnimBlendNode *this)
{
  int v1; // r2
  __int16 v2; // r12
  char v3; // r8
  float v4; // s0
  int v5; // r4
  __int16 v6; // r1
  int v7; // r6
  __int16 v8; // r1

  v1 = *((_DWORD *)this + 4);
  v2 = *(_WORD *)(v1 + 6);
  if ( v2 >= 2 )
  {
    v4 = *((float *)this + 3);
    v3 = 0;
    LOWORD(v5) = *((_WORD *)this + 4);
    *((_WORD *)this + 5) = v5;
    if ( v4 <= 0.0 )
    {
      v6 = v5;
      do
      {
        *((_WORD *)this + 4) = v6 + 1;
        v5 = (__int16)(v6 + 1);
        if ( v2 <= v5 )
        {
          if ( (*(_BYTE *)(*((_DWORD *)this + 5) + 46) & 2) == 0 )
          {
            v3 = 0;
            *((_DWORD *)this + 3) = 0;
            *((_WORD *)this + 4) = v6;
            return v3 & 1;
          }
          v5 = 0;
          v3 = 1;
          *((_WORD *)this + 4) = 0;
        }
        v7 = 10 * v5;
        if ( (*(_WORD *)(v1 + 4) & 2) != 0 )
          v7 = 16 * v5;
        v6 = v5;
        v4 = v4 + (float)((float)*(__int16 *)(*(_DWORD *)(v1 + 8) + v7 + 8) * 0.016667);
        *((float *)this + 3) = v4;
      }
      while ( v4 <= 0.0 );
    }
    v8 = v5 - 1;
    if ( (__int16)(v5 - 1) < 0 )
      v8 = v5 - 1 + v2;
    *((_WORD *)this + 5) = v8;
    CAnimBlendNode::CalcDeltasCompressed(this);
  }
  else
  {
    v3 = 0;
  }
  return v3 & 1;
}


// ============================================================

// Address: 0x38b46c
// Original: _ZN14CAnimBlendNode20CalcDeltasCompressedEv
// Demangled: CAnimBlendNode::CalcDeltasCompressed(void)
float __fastcall CAnimBlendNode::CalcDeltasCompressed(CAnimBlendNode *this)
{
  float32x2_t v1; // d8
  float result; // r0
  __int16 v4; // r1
  int v5; // r3
  bool v6; // zf
  int v7; // r2
  int v8; // r0
  int v9; // r1
  int v10; // r4
  __int16 *v11; // r1
  int v12; // r3
  unsigned __int32 v13; // r2
  int v14; // r0
  float v15; // s2
  float32x4_t v16; // q1
  float v17; // s8
  float v18; // s10
  float32x2_t v19; // d0
  float v20; // s14
  float v21; // s1
  float v22; // s3
  float v23; // s12
  float v24; // s0
  int16x4_t v25; // [sp+0h] [bp-20h]

  result = *((float *)this + 4);
  v4 = *(_WORD *)(LODWORD(result) + 4);
  if ( (v4 & 1) != 0 )
  {
    v5 = *((__int16 *)this + 5);
    v6 = (v4 & 2) == 0;
    v7 = *((__int16 *)this + 4);
    v8 = *(_DWORD *)(LODWORD(result) + 8);
    v9 = 10 * v5;
    if ( !v6 )
      v9 = 16 * v5;
    v10 = *(__int16 *)(v8 + v9);
    v11 = (__int16 *)(v9 + v8);
    v12 = 10 * v7;
    if ( !v6 )
      v12 = 16 * v7;
    v13 = *(_DWORD *)(v8 + v12);
    v14 = v8 + v12;
    v25.n64_u32[0] = v13;
    v25.n64_u32[1] = *(_DWORD *)(v14 + 4);
    v19.n64_f32[0] = (float)v10 * 0.00024414;
    v15 = (float)v11[1] * 0.00024414;
    v16 = vmulq_f32(vcvtq_f32_s32(vmovl_s16(v25)), vdupq_n_s32(0x39800000u));
    v17 = (float)v11[2] * 0.00024414;
    v18 = (float)v11[3] * 0.00024414;
    v19.n64_f32[1] = v18 * v16.n128_f32[3];
    if ( (float)((float)((float)((float)(v19.n64_f32[0] * v16.n128_f32[0]) + (float)(v15 * v16.n128_f32[1]))
                       + (float)(v17 * v16.n128_f32[2]))
               + (float)(v18 * v16.n128_f32[3])) < 0.0 )
    {
      v20 = v16.n128_f32[1] * -4096.0;
      v21 = v16.n128_f32[2] * -4096.0;
      v22 = v16.n128_f32[3] * -4096.0;
      v23 = v16.n128_f32[0] * -4096.0;
      v16 = vnegq_f32(v16);
      v19.n64_u32[1] = (int)v21;
      *(_WORD *)(v14 + 2) = (int)v20;
      *(_WORD *)v14 = (int)v23;
      *(_WORD *)(v14 + 4) = v19.n64_u16[2];
      *(_WORD *)(v14 + 6) = (int)v22;
    }
    v1.n64_u32[0] = 1.0;
    v19.n64_f32[0] = (float)((float)((float)(v19.n64_f32[0] * v16.n128_f32[0]) + (float)(v15 * v16.n128_f32[1]))
                           + (float)(v17 * v16.n128_f32[2]))
                   + (float)(v18 * v16.n128_f32[3]);
    result = acosf(vmin_f32(v19, v1).n64_f32[0]);
    *(float *)this = result;
    if ( result == 0.0 )
    {
      v24 = 0.0;
    }
    else
    {
      result = sinf(result);
      v24 = 1.0 / result;
    }
    *((float *)this + 1) = v24;
  }
  return result;
}


// ============================================================

// Address: 0x38b5ec
// Original: _ZN14CAnimBlendNode23SetupKeyFrameCompressedEv
// Demangled: CAnimBlendNode::SetupKeyFrameCompressed(void)
int __fastcall CAnimBlendNode::SetupKeyFrameCompressed(CAnimBlendNode *this)
{
  int v1; // r1
  __int16 v3; // r2
  int v4; // r3
  int v5; // r1

  v1 = *((_DWORD *)this + 4);
  if ( *(__int16 *)(v1 + 6) < 1 )
    return 0;
  *((_DWORD *)this + 2) = 1;
  if ( *(_WORD *)(v1 + 6) == 1 )
  {
    *((_DWORD *)this + 3) = 0;
    *((_WORD *)this + 4) = 0;
  }
  else
  {
    v3 = *(_WORD *)(v1 + 4);
    v4 = 10;
    v5 = *(_DWORD *)(v1 + 8);
    if ( (v3 & 2) != 0 )
      v4 = 16;
    *((float *)this + 3) = (float)*(__int16 *)(v5 + v4 + 8) * 0.016667;
  }
  CAnimBlendNode::CalcDeltasCompressed(this);
  return 1;
}


// ============================================================

// Address: 0x38b644
// Original: _ZN14CAnimBlendNode31GetCurrentTranslationCompressedER7CVectorf
// Demangled: CAnimBlendNode::GetCurrentTranslationCompressed(CVector &,float)
int __fastcall CAnimBlendNode::GetCurrentTranslationCompressed(int result, float *a2, float a3)
{
  int v3; // r3
  float v4; // s0
  int v5; // r12
  int v6; // r4
  __int16 *v7; // r3
  __int16 *v8; // r12
  float v9; // s2
  float v10; // s8
  float v11; // s12
  float v12; // s4
  float v13; // s6
  float v14; // s0

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v3 = *(_DWORD *)(result + 20);
  v4 = *(float *)(v3 + 24) * a3;
  if ( (*(_BYTE *)(v3 + 46) & 0x10) != 0 )
    v4 = *(float *)(v3 + 24);
  if ( v4 > 0.0 )
  {
    v5 = *(_DWORD *)(result + 16);
    if ( (*(_WORD *)(v5 + 4) & 2) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      v7 = (__int16 *)(16 * *(__int16 *)(result + 8) + v6);
      v8 = (__int16 *)(v6 + 16 * *(__int16 *)(result + 10));
      if ( v7[4] )
        v9 = (float)((float)((float)v7[4] * 0.016667) - *(float *)(result + 12)) / (float)((float)v7[4] * 0.016667);
      else
        v9 = 0.0;
      result = v7[6];
      v10 = (float)v8[5] * 0.00097656;
      v11 = (float)v8[7] * 0.00097656;
      v12 = v4
          * (float)((float)((float)v8[6] * 0.00097656)
                  + (float)(v9 * (float)((float)((float)result * 0.00097656) - (float)((float)v8[6] * 0.00097656))));
      v13 = v4 * (float)(v10 + (float)(v9 * (float)((float)((float)v7[5] * 0.00097656) - v10)));
      v14 = v4 * (float)(v11 + (float)(v9 * (float)((float)((float)v7[7] * 0.00097656) - v11)));
      *a2 = v13;
      a2[1] = v12;
      a2[2] = v14;
    }
  }
  return result;
}


// ============================================================

// Address: 0x38b78c
// Original: _ZN14CAnimBlendNode27GetEndTranslationCompressedER7CVectorf
// Demangled: CAnimBlendNode::GetEndTranslationCompressed(CVector &,float)
int __fastcall CAnimBlendNode::GetEndTranslationCompressed(int result, float *a2, float a3)
{
  int v3; // r3
  float v4; // s0
  int v5; // r0
  float v6; // s2
  float v7; // s6

  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v3 = *(_DWORD *)(result + 20);
  v4 = *(float *)(v3 + 24) * a3;
  if ( (*(_BYTE *)(v3 + 46) & 0x10) != 0 )
    v4 = *(float *)(v3 + 24);
  if ( v4 > 0.0 )
  {
    result = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 4) & 2) != 0 )
    {
      v5 = *(_DWORD *)(result + 8) + 16 * *(__int16 *)(result + 6);
      v6 = (float)*(__int16 *)(v5 - 6) * 0.00097656;
      *a2 = v6;
      v7 = (float)*(__int16 *)(v5 - 4) * 0.00097656;
      a2[1] = v7;
      result = *(__int16 *)(v5 - 2);
      *a2 = v4 * v6;
      a2[1] = v4 * v7;
      a2[2] = v4 * (float)((float)result * 0.00097656);
    }
  }
  return result;
}


// ============================================================
