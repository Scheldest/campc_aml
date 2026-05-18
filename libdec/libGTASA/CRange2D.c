
// Address: 0x40e5c4
// Original: _ZN8CRange2DC2E9CVector2DS0_
// Demangled: CRange2D::CRange2D(CVector2D,CVector2D)
_DWORD *__fastcall CRange2D::CRange2D(_DWORD *result, int a2, int a3, int a4, int a5)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  return result;
}


// ============================================================

// Address: 0x40e5ce
// Original: _ZN8CRange2DD2Ev
// Demangled: CRange2D::~CRange2D()
void __fastcall CRange2D::~CRange2D(CRange2D *this)
{
  ;
}


// ============================================================

// Address: 0x40e5d0
// Original: _ZN8CRange2D9IsInRangeE9CVector2D
// Demangled: CRange2D::IsInRange(CVector2D)
bool __fastcall CRange2D::IsInRange(float *a1, float a2, float a3)
{
  return *a1 < a2 && a1[2] > a2 && a1[1] < a3 && a1[3] > a3;
}


// ============================================================

// Address: 0x40e618
// Original: _ZN8CRange2D21GetRandomPointInRangeEv
// Demangled: CRange2D::GetRandomPointInRange(void)
int __fastcall CRange2D::GetRandomPointInRange(CRange2D *this, float *a2)
{
  float v4; // s16
  float v5; // s18
  float v6; // s20
  int v7; // s22
  float v8; // s16
  int v9; // s18
  int v10; // r0
  int result; // r0
  int v12; // r1

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[3];
  v7 = (int)fabsf(a2[2] - *a2);
  *(float *)this = v4 + (float)(rand() % v7);
  v8 = a2[1];
  v9 = (int)fabsf(v6 - v5);
  v10 = rand();
  v12 = v10 % v9;
  result = v10 / v9;
  *((float *)this + 1) = v8 + (float)v12;
  return result;
}


// ============================================================

// Address: 0x40e68e
// Original: _ZN8CRange2D14DebugShowRangeEfi
// Demangled: CRange2D::DebugShowRange(float,int)
void __fastcall CRange2D::DebugShowRange(CRange2D *this, float a2, int a3)
{
  ;
}


// ============================================================
