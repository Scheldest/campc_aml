
// Address: 0x18f6a0
// Original: j__ZN8CGeneral14SolveQuadraticEfffRfS0_
// Demangled: CGeneral::SolveQuadratic(float,float,float,float &,float &)
// attributes: thunk
int __fastcall CGeneral::SolveQuadratic(CGeneral *this, float a2, float a3, float a4, float *a5, float *a6)
{
  return _ZN8CGeneral14SolveQuadraticEfffRfS0_(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1925d4
// Original: j__ZN8CGeneral16LimitRadianAngleEf
// Demangled: CGeneral::LimitRadianAngle(float)
// attributes: thunk
int __fastcall CGeneral::LimitRadianAngle(CGeneral *this, float a2)
{
  return _ZN8CGeneral16LimitRadianAngleEf(this, a2);
}


// ============================================================

// Address: 0x1991ac
// Original: j__ZN8CGeneral27GetRadianAngleBetweenPointsEffff
// Demangled: CGeneral::GetRadianAngleBetweenPoints(float,float,float,float)
// attributes: thunk
int __fastcall CGeneral::GetRadianAngleBetweenPoints(CGeneral *this, float a2, float a3, float a4, float a5)
{
  return _ZN8CGeneral27GetRadianAngleBetweenPointsEffff(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x199c2c
// Original: j__ZN8CGeneral21GetAngleBetweenPointsEffff
// Demangled: CGeneral::GetAngleBetweenPoints(float,float,float,float)
// attributes: thunk
int __fastcall CGeneral::GetAngleBetweenPoints(CGeneral *this, float a2, float a3, float a4, float a5)
{
  return _ZN8CGeneral21GetAngleBetweenPointsEffff(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19d230
// Original: j__ZN8CGeneral24GetNodeHeadingFromVectorEff
// Demangled: CGeneral::GetNodeHeadingFromVector(float,float)
// attributes: thunk
int __fastcall CGeneral::GetNodeHeadingFromVector(CGeneral *this, float a2, float a3)
{
  return _ZN8CGeneral24GetNodeHeadingFromVectorEff(this, a2, a3);
}


// ============================================================

// Address: 0x19e0f4
// Original: j__ZN8CGeneral11GetATanOfXYEff
// Demangled: CGeneral::GetATanOfXY(float,float)
// attributes: thunk
int __fastcall CGeneral::GetATanOfXY(CGeneral *this, float a2, float a3)
{
  return _ZN8CGeneral11GetATanOfXYEff(this, a2, a3);
}


// ============================================================

// Address: 0x1a01d8
// Original: j__ZN8CGeneral10LimitAngleEf
// Demangled: CGeneral::LimitAngle(float)
// attributes: thunk
int __fastcall CGeneral::LimitAngle(CGeneral *this, float a2)
{
  return _ZN8CGeneral10LimitAngleEf(this, a2);
}


// ============================================================

// Address: 0x3f4870
// Original: _ZN8CGeneral21GetAngleBetweenPointsEffff
// Demangled: CGeneral::GetAngleBetweenPoints(float,float,float,float)
float __fastcall CGeneral::GetAngleBetweenPoints(CGeneral *this, float a2, float a3, float a4, float a5)
{
  float v5; // s16
  float v6; // s18
  float v7; // r0
  float v8; // s2
  float v9; // s0
  float v10; // s0

  v5 = a4 - a2;
  v6 = a3 - *(float *)&this;
  if ( (float)(a4 - a2) == 0.0 )
    v5 = 0.0001;
  v7 = atanf(v6 / v5);
  if ( v6 <= 0.0 )
  {
    if ( v5 <= 0.0 )
    {
      v9 = 1.5708 - v7;
      v8 = -1.5708;
      goto LABEL_10;
    }
    v10 = -1.5708 - (float)(v7 + 1.5708);
  }
  else
  {
    v8 = 1.5708;
    if ( v5 > 0.0 )
    {
      v9 = 1.5708 - v7;
LABEL_10:
      v10 = v9 + v8;
      return v10 * 57.296;
    }
    v10 = 1.5708 - (float)(v7 + 1.5708);
  }
  return v10 * 57.296;
}


// ============================================================

// Address: 0x3f4924
// Original: _ZN8CGeneral27GetRadianAngleBetweenPointsEffff
// Demangled: CGeneral::GetRadianAngleBetweenPoints(float,float,float,float)
int __fastcall CGeneral::GetRadianAngleBetweenPoints(CGeneral *this, float a2, float a3, float a4, float a5)
{
  float v5; // s16
  float v6; // s18
  float v7; // r0
  float v8; // s2
  float v9; // s0
  float v10; // s0

  v5 = a4 - a2;
  v6 = a3 - *(float *)&this;
  if ( (float)(a4 - a2) == 0.0 )
    v5 = 0.0001;
  v7 = atanf(v6 / v5);
  if ( v6 <= 0.0 )
  {
    if ( v5 <= 0.0 )
    {
      v9 = 1.5708 - v7;
      v8 = -1.5708;
      goto LABEL_10;
    }
    v10 = -1.5708 - (float)(v7 + 1.5708);
  }
  else
  {
    v8 = 1.5708;
    if ( v5 > 0.0 )
    {
      v9 = 1.5708 - v7;
LABEL_10:
      v10 = v9 + v8;
      return LODWORD(v10);
    }
    v10 = 1.5708 - (float)(v7 + 1.5708);
  }
  return LODWORD(v10);
}


// ============================================================

// Address: 0x3f49cc
// Original: _ZN8CGeneral10LimitAngleEf
// Demangled: CGeneral::LimitAngle(float)
int __fastcall CGeneral::LimitAngle(CGeneral *this, float a2)
{
  float i; // s0

  for ( i = *(float *)&this; i >= 180.0; i = i + -360.0 )
    ;
  for ( ; i < -180.0; i = i + 360.0 )
    ;
  return LODWORD(i);
}


// ============================================================

// Address: 0x3f4a28
// Original: _ZN8CGeneral16LimitRadianAngleEf
// Demangled: CGeneral::LimitRadianAngle(float)
unsigned __int32 __fastcall CGeneral::LimitRadianAngle(CGeneral *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2

  v2.n64_u32[0] = -25.0;
  v4.n64_u32[0] = 25.0;
  v3.n64_u32[0] = (unsigned __int32)this;
  for ( v2.n64_f32[0] = vmin_f32(vmax_f32(v3, v2), v4).n64_f32[0];
        v2.n64_f32[0] >= 3.1416;
        v2.n64_f32[0] = v2.n64_f32[0] + -6.2832 )
  {
    ;
  }
  for ( ; v2.n64_f32[0] < -3.1416; v2.n64_f32[0] = v2.n64_f32[0] + 6.2832 )
    ;
  return v2.n64_u32[0];
}


// ============================================================

// Address: 0x3f4a94
// Original: _ZN8CGeneral11GetATanOfXYEff
// Demangled: CGeneral::GetATanOfXY(float,float)
float __fastcall CGeneral::GetATanOfXY(CGeneral *this, float a2, float a3)
{
  float v4; // s4
  float v5; // s6
  float v6; // r0
  float v7; // s0
  float v8; // r0
  float v9; // s0

  if ( *(float *)&this == 0.0 && a2 == 0.0 )
    return 0.0;
  v4 = -a2;
  v5 = -*(float *)&this;
  if ( fabsf(*(float *)&this) >= fabsf(a2) )
  {
    if ( a2 > 0.0 )
    {
      if ( *(float *)&this > 0.0 )
        return sub_19A704(a2 / *(float *)&this);
      v6 = atanf(a2 / v5);
      v7 = 3.1416;
      return v7 - v6;
    }
    if ( *(float *)&this > 0.0 )
    {
      v6 = atanf(v4 / *(float *)&this);
      v7 = 6.2832;
      return v7 - v6;
    }
    v8 = atanf(a2 / *(float *)&this);
    v9 = 3.1416;
  }
  else if ( a2 <= 0.0 )
  {
    if ( *(float *)&this <= 0.0 )
    {
      v6 = atanf(*(float *)&this / a2);
      v7 = 4.7124;
      return v7 - v6;
    }
    v8 = atanf(*(float *)&this / v4);
    v9 = 4.7124;
  }
  else
  {
    if ( *(float *)&this > 0.0 )
    {
      v6 = atanf(*(float *)&this / a2);
      v7 = 1.5708;
      return v7 - v6;
    }
    v8 = atanf(v5 / a2);
    v9 = 1.5708;
  }
  return v8 + v9;
}


// ============================================================

// Address: 0x3f4bdc
// Original: _ZN8CGeneral24GetNodeHeadingFromVectorEff
// Demangled: CGeneral::GetNodeHeadingFromVector(float,float)
unsigned int __fastcall CGeneral::GetNodeHeadingFromVector(CGeneral *this, float a2, float a3)
{
  float v3; // s16
  float v4; // s18
  float v5; // r0
  float v6; // s2
  float v7; // s0
  float v8; // s0
  float v9; // s0
  float v10; // s4

  v3 = 0.0 - a2;
  v4 = 0.0 - *(float *)&this;
  if ( (float)(0.0 - a2) == 0.0 )
    v3 = 0.0001;
  v5 = atanf(v4 / v3);
  if ( v4 <= 0.0 )
  {
    if ( v3 > 0.0 )
    {
      v8 = -1.5708 - (float)(v5 + 1.5708);
      goto LABEL_11;
    }
    v7 = 1.5708 - v5;
    v6 = -1.5708;
  }
  else
  {
    v6 = 1.5708;
    if ( v3 <= 0.0 )
    {
      v8 = 1.5708 - (float)(v5 + 1.5708);
      goto LABEL_11;
    }
    v7 = 1.5708 - v5;
  }
  v8 = v7 + v6;
LABEL_11:
  if ( v8 < 0.0 )
    v8 = v8 + 6.2832;
  v9 = (float)(6.2832 - v8) + 0.3927;
  v10 = v9 + -6.2832;
  if ( v9 < 6.2832 )
    v10 = v9;
  return (unsigned int)floorf((float)(v10 / 6.2832) * 8.0);
}


// ============================================================

// Address: 0x3f4ce4
// Original: _ZN8CGeneral14SolveQuadraticEfffRfS0_
// Demangled: CGeneral::SolveQuadratic(float,float,float,float &,float &)
int __fastcall CGeneral::SolveQuadratic(CGeneral *this, float a2, float a3, float *a4, float *a5, float *a6)
{
  float v6; // s4
  int result; // r0
  float v8; // s4
  float v9; // s0

  v6 = (float)(a2 * a2) + (float)((float)(*(float *)&this * -4.0) * a3);
  if ( v6 < 0.0 )
    return 0;
  v8 = sqrtf(v6);
  v9 = (float)((float)((float)-a2 - v8) * 0.5) / *(float *)&this;
  *a5 = (float)((float)(v8 - a2) * 0.5) / *(float *)&this;
  result = 1;
  *a4 = v9;
  return result;
}


// ============================================================
