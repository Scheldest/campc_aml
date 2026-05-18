
// Address: 0x18b088
// Original: j__ZN10BoneNode_c5LimitEf
// Demangled: BoneNode_c::Limit(float)
// attributes: thunk
int __fastcall BoneNode_c::Limit(BoneNode_c *this, float a2)
{
  return _ZN10BoneNode_c5LimitEf(this, a2);
}


// ============================================================

// Address: 0x18bd84
// Original: j__ZN10BoneNode_c18ClampLimitsDefaultEhhh
// Demangled: BoneNode_c::ClampLimitsDefault(uchar,uchar,uchar)
// attributes: thunk
int __fastcall BoneNode_c::ClampLimitsDefault(
        BoneNode_c *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  return _ZN10BoneNode_c18ClampLimitsDefaultEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18c154
// Original: j__ZN10BoneNode_c11QuatToEulerEP6RtQuatP5RwV3d
// Demangled: BoneNode_c::QuatToEuler(RtQuat *,RwV3d *)
// attributes: thunk
int BoneNode_c::QuatToEuler()
{
  return _ZN10BoneNode_c11QuatToEulerEP6RtQuatP5RwV3d();
}


// ============================================================

// Address: 0x18c338
// Original: j__ZN10BoneNode_c8GetSpeedEv
// Demangled: BoneNode_c::GetSpeed(void)
// attributes: thunk
int __fastcall BoneNode_c::GetSpeed(BoneNode_c *this)
{
  return _ZN10BoneNode_c8GetSpeedEv(this);
}


// ============================================================

// Address: 0x18f7e8
// Original: j__ZN10BoneNode_c8SetSpeedEf
// Demangled: BoneNode_c::SetSpeed(float)
// attributes: thunk
int __fastcall BoneNode_c::SetSpeed(BoneNode_c *this, float a2)
{
  return _ZN10BoneNode_c8SetSpeedEf(this, a2);
}


// ============================================================

// Address: 0x191cc8
// Original: j__ZN10BoneNode_c4InitEiP23RpHAnimBlendInterpFrame
// Demangled: BoneNode_c::Init(int,RpHAnimBlendInterpFrame *)
// attributes: thunk
int BoneNode_c::Init()
{
  return _ZN10BoneNode_c4InitEiP23RpHAnimBlendInterpFrame();
}


// ============================================================

// Address: 0x1924dc
// Original: j__ZN10BoneNode_c10CalcWldMatEP11RwMatrixTag
// Demangled: BoneNode_c::CalcWldMat(RwMatrixTag *)
// attributes: thunk
int BoneNode_c::CalcWldMat()
{
  return _ZN10BoneNode_c10CalcWldMatEP11RwMatrixTag();
}


// ============================================================

// Address: 0x19394c
// Original: j__ZN10BoneNode_c8AddChildEPS_
// Demangled: BoneNode_c::AddChild(BoneNode_c*)
// attributes: thunk
int __fastcall BoneNode_c::AddChild(BoneNode_c *this, BoneNode_c *a2)
{
  return _ZN10BoneNode_c8AddChildEPS_(this, a2);
}


// ============================================================

// Address: 0x199910
// Original: j__ZN10BoneNode_c13BlendKeyframeEf
// Demangled: BoneNode_c::BlendKeyframe(float)
// attributes: thunk
int __fastcall BoneNode_c::BlendKeyframe(BoneNode_c *this, float a2)
{
  return _ZN10BoneNode_c13BlendKeyframeEf(this, a2);
}


// ============================================================

// Address: 0x19a7a0
// Original: j__ZN10BoneNode_c18ClampLimitsCurrentEhhh
// Demangled: BoneNode_c::ClampLimitsCurrent(uchar,uchar,uchar)
// attributes: thunk
int __fastcall BoneNode_c::ClampLimitsCurrent(
        BoneNode_c *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  return _ZN10BoneNode_c18ClampLimitsCurrentEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19ed3c
// Original: j__ZN10BoneNode_c9GetLimitsEiPfS0_
// Demangled: BoneNode_c::GetLimits(int,float *,float *)
// attributes: thunk
int __fastcall BoneNode_c::GetLimits(BoneNode_c *this, int a2, float *a3, float *a4)
{
  return _ZN10BoneNode_c9GetLimitsEiPfS0_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a0d90
// Original: j__ZN10BoneNode_c9SetLimitsEiff
// Demangled: BoneNode_c::SetLimits(int,float,float)
// attributes: thunk
int __fastcall BoneNode_c::SetLimits(BoneNode_c *this, int a2, float a3, float a4)
{
  return _ZN10BoneNode_c9SetLimitsEiff(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1a0de4
// Original: j__ZN10BoneNode_c16GetIdFromBoneTagEi
// Demangled: BoneNode_c::GetIdFromBoneTag(int)
// attributes: thunk
int __fastcall BoneNode_c::GetIdFromBoneTag(BoneNode_c *this, int a2)
{
  return _ZN10BoneNode_c16GetIdFromBoneTagEi(this, a2);
}


// ============================================================

// Address: 0x4d1c48
// Original: _ZN10BoneNode_cC2Ev
// Demangled: BoneNode_c::BoneNode_c(void)
void __fastcall BoneNode_c::BoneNode_c(BoneNode_c *this)
{
  ListItem_c::ListItem_c(this);
  List_c::List_c((BoneNode_c *)((char *)this + 48));
}


// ============================================================

// Address: 0x4d1c5e
// Original: _ZN10BoneNode_cD2Ev
// Demangled: BoneNode_c::~BoneNode_c()
void __fastcall BoneNode_c::~BoneNode_c(BoneNode_c *this)
{
  List_c::~List_c((BoneNode_c *)((char *)this + 48));
  j_ListItem_c::~ListItem_c(this);
}


// ============================================================

// Address: 0x4d1c78
// Original: _ZN10BoneNode_c4InitEiP23RpHAnimBlendInterpFrame
// Demangled: BoneNode_c::Init(int,RpHAnimBlendInterpFrame *)
int __fastcall BoneNode_c::Init(int a1, int a2, int a3)
{
  __int64 v4; // d17
  int v5; // r5
  __int64 v6; // d16
  __int16 *v7; // r0
  float *v9; // r0
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s4
  float v14; // s10
  float v15; // s0
  float v16; // s14
  float v17; // s2
  float v18; // s4
  int result; // r0

  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a3;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 24) = v4;
  v6 = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a3 + 24);
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 32) = v6;
  List_c::RemoveAll((List_c *)(a1 + 48));
  v7 = BoneNodeManager_c::ms_boneInfos;
  while ( *(_DWORD *)(a1 + 8) != *v7 )
  {
    v7 += 20;
    if ( v5++ >= 31 )
    {
      v5 = -1;
      break;
    }
  }
  v9 = (float *)&BoneNodeManager_c::ms_boneInfos[20 * v5];
  v10 = v9[1];
  v11 = v9[2];
  v12 = v10 - v9[4];
  v13 = v9[3];
  v14 = v11 - v9[6];
  v15 = v10 + v9[5];
  v16 = v13 - v9[8];
  v17 = v11 + v9[7];
  v18 = v13 + v9[9];
  *(_DWORD *)(a1 + 148) = 1065353216;
  result = 1;
  *(float *)(a1 + 124) = v12;
  *(float *)(a1 + 128) = v14;
  *(float *)(a1 + 132) = v16;
  *(float *)(a1 + 136) = v15;
  *(float *)(a1 + 140) = v17;
  *(float *)(a1 + 144) = v18;
  return result;
}


// ============================================================

// Address: 0x4d1d3c
// Original: _ZN10BoneNode_c10InitLimitsEv
// Demangled: BoneNode_c::InitLimits(void)
int __fastcall BoneNode_c::InitLimits(int this)
{
  __int16 *v1; // r3
  int v2; // r1
  float *v4; // r1
  float v5; // s0
  float v6; // s2
  float v7; // s6
  float v8; // s4
  float v9; // s10
  float v10; // s0
  float v11; // s14
  float v12; // s2
  float v13; // s4

  v1 = BoneNodeManager_c::ms_boneInfos;
  v2 = 0;
  while ( *(_DWORD *)(this + 8) != *v1 )
  {
    v1 += 20;
    if ( v2++ >= 31 )
    {
      v2 = -1;
      break;
    }
  }
  v4 = (float *)&BoneNodeManager_c::ms_boneInfos[20 * v2];
  v5 = v4[1];
  v6 = v4[2];
  v7 = v5 - v4[4];
  v8 = v4[3];
  v9 = v6 - v4[6];
  v10 = v5 + v4[5];
  v11 = v8 - v4[8];
  v12 = v6 + v4[7];
  v13 = v8 + v4[9];
  *(float *)(this + 124) = v7;
  *(float *)(this + 128) = v9;
  *(float *)(this + 132) = v11;
  *(float *)(this + 136) = v10;
  *(float *)(this + 140) = v12;
  *(float *)(this + 144) = v13;
  return this;
}


// ============================================================

// Address: 0x4d1dcc
// Original: _ZN10BoneNode_c8AddChildEPS_
// Demangled: BoneNode_c::AddChild(BoneNode_c*)
int __fastcall BoneNode_c::AddChild(BoneNode_c *this, BoneNode_c *a2)
{
  *((_DWORD *)a2 + 11) = this;
  return j_List_c::AddItem((BoneNode_c *)((char *)this + 48), a2);
}


// ============================================================

// Address: 0x4d1dd4
// Original: _ZN10BoneNode_c16GetIdFromBoneTagEi
// Demangled: BoneNode_c::GetIdFromBoneTag(int)
int __fastcall BoneNode_c::GetIdFromBoneTag(BoneNode_c *this, int a2)
{
  __int16 *v2; // r2
  int v3; // r1

  v2 = BoneNodeManager_c::ms_boneInfos;
  v3 = -1;
  do
  {
    if ( (BoneNode_c *)*v2 == this )
      return v3 + 1;
    ++v3;
    v2 += 20;
  }
  while ( v3 < 31 );
  return -1;
}


// ============================================================

// Address: 0x4d1e00
// Original: _ZN10BoneNode_c18ClampLimitsDefaultEhhh
// Demangled: BoneNode_c::ClampLimitsDefault(uchar,uchar,uchar)
void __fastcall BoneNode_c::ClampLimitsDefault(
        BoneNode_c *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  ;
}


// ============================================================

// Address: 0x4d1e02
// Original: _ZN10BoneNode_c18ClampLimitsCurrentEhhh
// Demangled: BoneNode_c::ClampLimitsCurrent(uchar,uchar,uchar)
void __fastcall BoneNode_c::ClampLimitsCurrent(
        BoneNode_c *this,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  ;
}


// ============================================================

// Address: 0x4d1e04
// Original: _ZN10BoneNode_c11QuatToEulerEP6RtQuatP5RwV3d
// Demangled: BoneNode_c::QuatToEuler(RtQuat *,RwV3d *)
float __fastcall BoneNode_c::QuatToEuler(float *a1, float *a2)
{
  float v3; // s17
  float v5; // s28
  float v6; // s22
  float v7; // s30
  float v8; // s26
  float v9; // s19
  float v10; // s24
  float v11; // s2
  float v12; // r5
  float result; // r0
  float v14; // s2
  float v15; // s0
  float v16; // s6

  v3 = *a1;
  v5 = v3 + v3;
  v6 = a1[2];
  v7 = a1[3] + a1[3];
  v8 = a1[1];
  v9 = (float)(v6 * (float)(v3 + v3)) - (float)(v8 * v7);
  v10 = sqrtf(1.0 - (float)(v9 * v9));
  a2[1] = (float)(atan2f(-v9, v10) * 180.0) / 3.1416;
  if ( v9 == -1.0 )
  {
    v16 = a1[2];
    result = atan2f(
               -(float)((float)(v16 * (float)(a1[1] + a1[1])) - (float)(*a1 * (float)(a1[3] + a1[3]))),
               (float)((float)(*a1 * (float)(*a1 * -2.0)) + 1.0) - (float)(v16 * (float)(v16 + v16)));
    v15 = 0.0;
    v14 = result;
  }
  else
  {
    v11 = v8 * (float)(v8 + v8);
    v12 = atan2f(
            (float)((float)((float)(v8 + v8) * v6) + (float)(v3 * v7)) / v10,
            (float)((float)(1.0 - (float)(v3 * v5)) - v11) / v10);
    result = atan2f(
               (float)((float)(v8 * v5) + (float)(v6 * v7)) / v10,
               (float)((float)(1.0 - v11) + (float)(v6 * (float)(v6 * -2.0))) / v10);
    v14 = v12;
    v15 = result * 180.0;
  }
  a2[2] = v15 / 3.1416;
  *a2 = (float)(v14 * 180.0) / 3.1416;
  return result;
}


// ============================================================

// Address: 0x4d1f7c
// Original: _ZN10BoneNode_c9GetLimitsEiPfS0_
// Demangled: BoneNode_c::GetLimits(int,float *,float *)
_DWORD *__fastcall BoneNode_c::GetLimits(_DWORD *this, int a2, float *a3, float *a4)
{
  int v4; // r1
  _DWORD *v5; // r0

  if ( a2 == 2 )
  {
    v4 = this[33];
    v5 = this + 36;
  }
  else if ( a2 == 1 )
  {
    v4 = this[32];
    v5 = this + 35;
  }
  else
  {
    if ( a2 )
      return this;
    v4 = this[31];
    v5 = this + 34;
  }
  *(_DWORD *)a3 = v4;
  this = (_DWORD *)*v5;
  *(_DWORD *)a4 = this;
  return this;
}


// ============================================================

// Address: 0x4d1fa6
// Original: _ZN10BoneNode_c9SetLimitsEiff
// Demangled: BoneNode_c::SetLimits(int,float,float)
float *__fastcall BoneNode_c::SetLimits(float *this, int a2, float a3, float a4)
{
  if ( a2 == 2 )
  {
    this[33] = a3;
    this += 36;
  }
  else if ( a2 == 1 )
  {
    this[32] = a3;
    this += 35;
  }
  else
  {
    if ( a2 )
      return this;
    this[31] = a3;
    this += 34;
  }
  *this = a4;
  return this;
}


// ============================================================

// Address: 0x4d1fd8
// Original: _ZN10BoneNode_c5LimitEf
// Demangled: BoneNode_c::Limit(float)
float __fastcall BoneNode_c::Limit(BoneNode_c *this, float a2)
{
  float32x2_t v2; // d4
  float32x2_t v3; // d7
  float v5; // s0
  float v6; // s2
  float v7; // s4
  float v8; // s6
  __int16 *v9; // r1
  int v10; // r0
  float v12; // s12
  float v13; // s8
  float v14; // s8
  float v15; // r8
  float v16; // r9
  float v17; // r5
  float v18; // r0
  float v19; // r6
  float v20; // s16
  float v21; // s20
  float v22; // s24
  float result; // r0
  float v24; // s2
  float v25; // s4
  float v26; // s8
  float v27; // s0
  float v28; // s6
  float v29; // [sp+4h] [bp-4Ch]
  float v30; // [sp+8h] [bp-48h]
  float v31; // [sp+Ch] [bp-44h]

  BoneNode_c::QuatToEuler();
  v5 = v29;
  if ( v29 < *((float *)this + 31) )
    v5 = *((float *)this + 31);
  if ( v5 > *((float *)this + 34) )
    v5 = *((float *)this + 34);
  v6 = v30;
  if ( v30 < *((float *)this + 32) )
    v6 = *((float *)this + 32);
  if ( v6 > *((float *)this + 35) )
    v6 = *((float *)this + 35);
  v7 = *((float *)this + 36);
  v8 = *((float *)this + 33);
  if ( *((_DWORD *)this + 2) == 5 )
  {
    v9 = BoneNodeManager_c::ms_boneInfos;
    v10 = 0;
    while ( *v9 != 5 )
    {
      v9 += 20;
      if ( v10++ >= 31 )
      {
        v10 = -1;
        break;
      }
    }
    v3.n64_u32[0] = 0;
    v12 = *(float *)&BoneNodeManager_c::ms_boneInfos[20 * v10 + 6];
    v2.n64_f32[0] = (float)(fabsf(v5) / -45.0) + 1.0;
    v13 = vmax_f32(v2, v3).n64_f32[0];
    v7 = v12 + (float)((float)(v7 - v12) * v13);
    v8 = v12 + (float)((float)(v8 - v12) * v13);
  }
  v14 = v31;
  if ( v31 < v8 )
    v14 = v8;
  if ( v14 > v7 )
    v14 = v7;
  v15 = cosf((float)((float)(v5 * 3.1416) * 0.0055556) * 0.5);
  v16 = cosf((float)((float)(v14 * 3.1416) * 0.0055556) * 0.5);
  v17 = sinf((float)((float)(v5 * 3.1416) * 0.0055556) * 0.5);
  v18 = sinf((float)((float)(v14 * 3.1416) * 0.0055556) * 0.5);
  v19 = (float)((float)(v6 * 3.1416) * 0.0055556) * 0.5;
  v20 = v17 * v18;
  v21 = v15 * v18;
  v22 = cosf(v19);
  result = sinf(v19);
  v24 = (float)((float)(v15 * v16) * result) + (float)(v22 * v20);
  v25 = (float)(v22 * (float)(v16 * v17)) - (float)(result * v21);
  v26 = (float)(v22 * v21) - (float)(result * (float)(v16 * v17));
  v27 = (float)(v22 * (float)(v15 * v16)) + (float)(result * v20);
  v28 = (float)(v27 * v27) + (float)((float)(v26 * v26) + (float)((float)(v25 * v25) + (float)(v24 * v24)));
  *((float *)this + 4) = v25 / v28;
  *((float *)this + 5) = v24 / v28;
  *((float *)this + 6) = v26 / v28;
  *((float *)this + 7) = v27 / v28;
  return result;
}


// ============================================================

// Address: 0x4d2208
// Original: _ZN10BoneNode_c11EulerToQuatEP5RwV3dP6RtQuat
// Demangled: BoneNode_c::EulerToQuat(RwV3d *,RtQuat *)
float __fastcall BoneNode_c::EulerToQuat(float *a1, float *a2)
{
  float v3; // s18
  float v4; // r5
  float v5; // s16
  float v6; // r8
  float v7; // r4
  float v8; // r5
  float v9; // r0
  float v10; // s16
  float v11; // s20
  float v12; // s24
  float result; // r0
  float v14; // s2
  float v15; // s4
  float v16; // s8
  float v17; // s0
  float v18; // s6

  v3 = (float)((float)(a1[1] * 3.1416) * 0.0055556) * 0.5;
  v4 = (float)((float)(*a1 * 3.1416) * 0.0055556) * 0.5;
  v5 = (float)((float)(a1[2] * 3.1416) * 0.0055556) * 0.5;
  v6 = cosf(v4);
  v7 = cosf(v5);
  v8 = sinf(v4);
  v9 = sinf(v5);
  v10 = v8 * v9;
  v11 = v6 * v9;
  v12 = cosf(v3);
  result = sinf(v3);
  v14 = (float)((float)(v6 * v7) * result) + (float)(v12 * v10);
  v15 = (float)(v12 * (float)(v7 * v8)) - (float)(result * v11);
  v16 = (float)(v12 * v11) - (float)(result * (float)(v7 * v8));
  v17 = (float)(v12 * (float)(v6 * v7)) + (float)(result * v10);
  v18 = (float)(v17 * v17) + (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
  *a2 = v15 / v18;
  a2[1] = v14 / v18;
  a2[2] = v16 / v18;
  a2[3] = v17 / v18;
  return result;
}


// ============================================================

// Address: 0x4d2330
// Original: _ZN10BoneNode_c8GetSpeedEv
// Demangled: BoneNode_c::GetSpeed(void)
int __fastcall BoneNode_c::GetSpeed(BoneNode_c *this)
{
  return *((_DWORD *)this + 37);
}


// ============================================================

// Address: 0x4d2336
// Original: _ZN10BoneNode_c8SetSpeedEf
// Demangled: BoneNode_c::SetSpeed(float)
int __fastcall BoneNode_c::SetSpeed(int this, float a2)
{
  *(float *)(this + 148) = a2;
  return this;
}


// ============================================================

// Address: 0x4d233c
// Original: _ZN10BoneNode_c10CalcWldMatEP11RwMatrixTag
// Demangled: BoneNode_c::CalcWldMat(RwMatrixTag *)
int __fastcall BoneNode_c::CalcWldMat(int a1)
{
  int result; // r0
  int i; // r4

  result = RwMatrixMultiply();
  for ( i = *(_DWORD *)(a1 + 48); i; i = *(_DWORD *)(i + 4) )
    result = BoneNode_c::CalcWldMat();
  return result;
}


// ============================================================

// Address: 0x4d2438
// Original: _ZN10BoneNode_c13BlendKeyframeEf
// Demangled: BoneNode_c::BlendKeyframe(float)
int __fastcall BoneNode_c::BlendKeyframe(int this, float a2)
{
  int v2; // r4
  float32x2_t v3; // d8
  __int64 *v4; // r0
  __int64 v5; // d17
  __int64 v6; // d17
  const float *v7; // r0
  float32x2_t v8; // d16
  float32x2_t v9; // d16
  float32x2_t v10; // d17
  __int64 v11; // d16
  __int64 v12; // d17
  float v13; // [sp+0h] [bp-68h]
  float v14; // [sp+4h] [bp-64h]
  float v15; // [sp+8h] [bp-60h]
  float v16; // [sp+Ch] [bp-5Ch]
  float v17; // [sp+10h] [bp-58h]
  float v18; // [sp+14h] [bp-54h]
  float v19; // [sp+18h] [bp-50h]
  float v20; // [sp+1Ch] [bp-4Ch]
  _DWORD v21[2]; // [sp+20h] [bp-48h] BYREF
  __int64 v22; // [sp+28h] [bp-40h]
  __int64 v23; // [sp+30h] [bp-38h]
  __int64 v24; // [sp+38h] [bp-30h]
  __int64 v25; // [sp+40h] [bp-28h]

  v2 = this;
  v3.n64_f32[0] = a2;
  if ( a2 >= 1.0 )
  {
    this = *(_DWORD *)(this + 12);
    v11 = *(_QWORD *)(v2 + 16);
    v12 = *(_QWORD *)(v2 + 24);
LABEL_8:
    *(_QWORD *)this = v11;
    *(_QWORD *)(this + 8) = v12;
    return this;
  }
  if ( a2 <= 0.0 )
    return this;
  v4 = *(__int64 **)(this + 12);
  v5 = v4[1];
  v24 = *v4;
  v25 = v5;
  v6 = *(_QWORD *)(v2 + 24);
  v22 = *(_QWORD *)(v2 + 16);
  v23 = v6;
  RtQuatSetupSlerpCache();
  if ( v3.n64_f32[0] <= 0.0 )
  {
    this = *(_DWORD *)(v2 + 12);
    v11 = v24;
    v12 = v25;
    goto LABEL_8;
  }
  v3.n64_f32[1] = 1.0 - v3.n64_f32[0];
  if ( !v21[1] )
  {
    v7 = (const float *)v21;
    v8.n64_u64[0] = vld1_dup_f32(v7).n64_u64[0];
    v9.n64_u64[0] = vmul_f32(v3, v8).n64_u64[0];
    v10.n64_u64[0] = vmul_f32(v9, v9).n64_u64[0];
    v3.n64_u64[0] = vadd_f32(
                      v9,
                      vmul_f32(
                        vmul_f32(v9, v10),
                        vadd_f32(
                          vmul_f32(
                            v10,
                            vadd_f32(
                              vmul_f32(
                                v10,
                                vadd_f32(
                                  vmul_f32(
                                    v10,
                                    vadd_f32(
                                      vmul_f32(
                                        v10,
                                        vadd_f32(
                                          vmul_f32(v10, (float32x2_t)0x2F2EC9D32F2EC9D3LL),
                                          (float32x2_t)0xB2D72F34B2D72F34LL)),
                                      (float32x2_t)0x3638EF1B3638EF1BLL)),
                                  (float32x2_t)0xB9500D01B9500D01LL)),
                              (float32x2_t)0x3C0888893C088889LL)),
                          (float32x2_t)0xBE2AAAABBE2AAAABLL))).n64_u64[0];
  }
  **(float **)(v2 + 12) = v3.n64_f32[1] * v13;
  *(float *)(*(_DWORD *)(v2 + 12) + 4) = v3.n64_f32[1] * v14;
  *(float *)(*(_DWORD *)(v2 + 12) + 8) = v3.n64_f32[1] * v15;
  **(float **)(v2 + 12) = (float)(v3.n64_f32[0] * v17) + **(float **)(v2 + 12);
  *(float *)(*(_DWORD *)(v2 + 12) + 4) = (float)(v3.n64_f32[0] * v18) + *(float *)(*(_DWORD *)(v2 + 12) + 4);
  *(float *)(*(_DWORD *)(v2 + 12) + 8) = (float)(v3.n64_f32[0] * v19) + *(float *)(*(_DWORD *)(v2 + 12) + 8);
  this = *(_DWORD *)(v2 + 12);
  *(float *)(this + 12) = (float)(v3.n64_f32[1] * v16) + (float)(v3.n64_f32[0] * v20);
  return this;
}


// ============================================================
