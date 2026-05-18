
// Address: 0x5b00d8
// Original: _ZN15CActiveOccluder26IsPointWithinOcclusionAreaEfff
// Demangled: CActiveOccluder::IsPointWithinOcclusionArea(float,float,float)
int __fastcall CActiveOccluder::IsPointWithinOcclusionArea(CActiveOccluder *this, float a2, float a3, float a4)
{
  int v4; // r12
  float *v7; // r0
  int i; // r1

  v4 = *((char *)this + 122);
  if ( v4 < 1 )
    return 1;
  v7 = (float *)((char *)this + 8);
  for ( i = 0; i < v4; ++i )
  {
    if ( (float)((float)((float)(a2 - *(v7 - 2)) * v7[1]) - (float)((float)(a3 - *(v7 - 1)) * *v7)) < a4 )
      return 0;
    v7 += 5;
  }
  return 1;
}


// ============================================================

// Address: 0x5b0138
// Original: _ZN15CActiveOccluder21IsPointBehindOccluderE7CVectorf
// Demangled: CActiveOccluder::IsPointBehindOccluder(CVector,float)
int __fastcall CActiveOccluder::IsPointBehindOccluder(int a1, float a2, float a3, float a4, float a5)
{
  int v5; // r12
  float *v6; // lr
  float *v8; // r4
  float *v9; // r1
  int result; // r0
  float v11; // s8
  float v12; // s10
  float v13; // s12
  int v14; // r1
  float v15; // s3
  float v16; // s1
  float v17; // s7

  v5 = *(char *)(a1 + 123);
  if ( v5 < 1 )
    return 1;
  v6 = (float *)(a1 + 124);
  v8 = (float *)(a1 + 160);
  v9 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v9 = (float *)&qword_951FAC;
  result = 0;
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[2];
  v14 = 0;
  while ( 1 )
  {
    v15 = v6[1];
    v16 = v6[2];
    v17 = (float)((float)((float)(*v6 * a2) + (float)(v15 * a3)) + (float)(v16 * a4)) - *v8;
    if ( fabsf(v17) < a5
      || (float)(v17 * (float)((float)((float)((float)(*v6 * v11) + (float)(v15 * v12)) + (float)(v16 * v13)) - *v8)) >= 0.0 )
    {
      break;
    }
    ++v14;
    v6 += 3;
    ++v8;
    if ( v14 >= v5 )
      return 1;
  }
  return result;
}


// ============================================================
