
// Address: 0x40e690
// Original: _ZN8CRange3DC2E7CVectorS0_
// Demangled: CRange3D::CRange3D(CVector,CVector)
int __fastcall CRange3D::CRange3D(int result, int a2, int a3, int a4, __int64 a5, int a6)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_QWORD *)(result + 12) = a5;
  *(_DWORD *)(result + 20) = a6;
  return result;
}


// ============================================================

// Address: 0x40e6a6
// Original: _ZN8CRange3D9IsInRangeE7CVector
// Demangled: CRange3D::IsInRange(CVector)
bool __fastcall CRange3D::IsInRange(float *a1, float a2, float a3, float a4)
{
  return *a1 < a2 && a1[3] > a2 && a1[1] < a3 && a1[4] > a3 && a1[2] < a4 && a1[5] > a4;
}


// ============================================================

// Address: 0x40e70e
// Original: _ZN8CRange3D21GetRandomPointInRangeEv
// Demangled: CRange3D::GetRandomPointInRange(void)
int __fastcall CRange3D::GetRandomPointInRange(CRange3D *this, float *a2)
{
  float v4; // s16
  float v5; // s18
  float v6; // s20
  float v7; // s22
  float v8; // s24
  int v9; // s26
  float v10; // s16
  int v11; // s2
  float v12; // s16
  int v13; // r0
  int result; // r0
  int v15; // r1

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[4];
  v8 = a2[5];
  v9 = (int)fabsf(a2[3] - *a2);
  *(float *)this = v4 + (float)(rand() % v9);
  v10 = a2[1];
  v11 = (int)fabsf(v8 - v6);
  *((float *)this + 1) = v10 + (float)(rand() % (int)fabsf(v7 - v5));
  v12 = a2[2];
  v13 = rand();
  v15 = v13 % v11;
  result = v13 / v11;
  *((float *)this + 2) = v12 + (float)v15;
  return result;
}


// ============================================================

// Address: 0x40e7c4
// Original: _ZN8CRange3D14DebugShowRangeEi
// Demangled: CRange3D::DebugShowRange(int)
void __fastcall CRange3D::DebugShowRange(CRange3D *this, int a2)
{
  ;
}


// ============================================================
