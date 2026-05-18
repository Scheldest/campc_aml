
// Address: 0x199ae0
// Original: j__ZN8CZoneDef10FindCenterEv
// Demangled: CZoneDef::FindCenter(void)
// attributes: thunk
int __fastcall CZoneDef::FindCenter(CZoneDef *this)
{
  return _ZN8CZoneDef10FindCenterEv(this);
}


// ============================================================

// Address: 0x5cfa44
// Original: _ZN8CZoneDef10FindCenterEv
// Demangled: CZoneDef::FindCenter(void)
float *__fastcall CZoneDef::FindCenter(float *this, __int16 *a2)
{
  float v2; // s8
  float v3; // s2
  float v4; // s4
  float v5; // s10
  float v6; // s12
  float v7; // s6
  int v8; // r1

  v2 = (float)a2[1];
  v3 = (float)a2[3] * 0.5;
  v4 = (float)a2[2] * 0.5;
  v5 = (float)a2[4];
  v6 = (float)*a2;
  v7 = (float)a2[5] * 0.5;
  v8 = a2[7] + a2[6];
  *this = (float)(v4 + v6) + (float)(v5 * 0.5);
  this[1] = (float)(v3 + v2) + v7;
  this[2] = (float)v8 * 0.5;
  return this;
}


// ============================================================

// Address: 0x5cfad8
// Original: _ZN8CZoneDef15FindBoundingBoxEP7CVectorS1_
// Demangled: CZoneDef::FindBoundingBox(CVector *,CVector *)
int __fastcall CZoneDef::FindBoundingBox(CZoneDef *this, CVector *a2, CVector *a3)
{
  unsigned __int16 v3; // lr
  int v4; // r4
  int v5; // r3
  int v6; // r3
  int result; // r0

  v3 = 0;
  *(float *)a2 = (float)(*(__int16 *)this
                       + (__int16)(*((_WORD *)this + 2) & ((unsigned int)*((__int16 *)this + 2) >> 15))
                       + (__int16)(*((_WORD *)this + 4) & ((unsigned int)*((__int16 *)this + 4) >> 15)));
  v4 = *((__int16 *)this + 4);
  v5 = *((__int16 *)this + 2);
  if ( v4 <= 0 )
    LOWORD(v4) = 0;
  if ( v5 <= 0 )
    LOWORD(v5) = 0;
  *(float *)a3 = (float)(*(__int16 *)this + (unsigned __int16)v5 + (unsigned __int16)v4);
  *((float *)a2 + 1) = (float)(*((__int16 *)this + 1)
                             + (__int16)(*((_WORD *)this + 3) & ((unsigned int)*((__int16 *)this + 3) >> 15))
                             + (__int16)(*((_WORD *)this + 5) & ((unsigned int)*((__int16 *)this + 5) >> 15)));
  v6 = *((__int16 *)this + 5);
  if ( v6 <= 0 )
    LOWORD(v6) = 0;
  if ( *((__int16 *)this + 3) > 0 )
    v3 = *((_WORD *)this + 3);
  *((float *)a3 + 1) = (float)(*((__int16 *)this + 1) + v3 + (unsigned __int16)v6);
  *((float *)a2 + 2) = (float)*((__int16 *)this + 6);
  result = *((__int16 *)this + 7);
  *((float *)a3 + 2) = (float)result;
  return result;
}


// ============================================================

// Address: 0x5cfbaa
// Original: _ZN8CZoneDef13IsPointWithinE7CVector
// Demangled: CZoneDef::IsPointWithin(CVector)
bool __fastcall CZoneDef::IsPointWithin(__int16 *a1, float a2, float a3, float a4)
{
  float v4; // s0
  float v5; // s2
  float v6; // s4
  int v7; // r1
  int v8; // r0
  float v9; // s0
  _BOOL4 result; // r0

  result = 0;
  if ( a4 > (float)a1[6] && a4 < (float)a1[7] )
  {
    v4 = a3 - (float)a1[1];
    v5 = a2 - (float)*a1;
    v6 = (float)(v5 * (float)a1[2]) + (float)(v4 * (float)a1[3]);
    if ( v6 >= 0.0 && v6 <= (float)(a1[2] * a1[2] + a1[3] * a1[3]) )
    {
      v7 = a1[4];
      v8 = a1[5];
      v9 = (float)(v5 * (float)v7) + (float)(v4 * (float)v8);
      if ( v9 >= 0.0 && v9 <= (float)((__int16)v7 * (__int16)v7 + (__int16)v8 * (__int16)v8) )
        return 1;
    }
  }
  return result;
}


// ============================================================
