
// Address: 0x18ff4c
// Original: j__ZN14CWindModifiers16FindWindModifierE7CVectorPfS1_
// Demangled: CWindModifiers::FindWindModifier(CVector,float *,float *)
// attributes: thunk
int CWindModifiers::FindWindModifier()
{
  return _ZN14CWindModifiers16FindWindModifierE7CVectorPfS1_();
}


// ============================================================

// Address: 0x19bf1c
// Original: j__ZN14CWindModifiers11RegisterOneE7CVectorif
// Demangled: CWindModifiers::RegisterOne(CVector,int,float)
// attributes: thunk
int CWindModifiers::RegisterOne()
{
  return _ZN14CWindModifiers11RegisterOneE7CVectorif();
}


// ============================================================

// Address: 0x5ceafc
// Original: _ZN14CWindModifiers11RegisterOneE7CVectorif
// Demangled: CWindModifiers::RegisterOne(CVector,int,float)
float __fastcall CWindModifiers::RegisterOne(float result, float a2, float a3, int a4, int a5)
{
  int v5; // r12
  float *v6; // r5
  float *v7; // r0

  v5 = CWindModifiers::Number;
  if ( CWindModifiers::Number <= 15 )
  {
    v6 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v6 = (float *)&qword_951FAC;
    if ( sqrtf(
           (float)((float)((float)(result - *v6) * (float)(result - *v6))
                 + (float)((float)(a2 - v6[1]) * (float)(a2 - v6[1])))
         + (float)((float)(a3 - v6[2]) * (float)(a3 - v6[2]))) < 200.0 )
    {
      *((float *)&CWindModifiers::Array + 5 * CWindModifiers::Number) = result;
      v7 = (float *)((char *)&CWindModifiers::Array + 20 * v5);
      v7[1] = a2;
      v7[2] = a3;
      *((_DWORD *)v7 + 3) = a4;
      *((_DWORD *)v7 + 4) = a5;
      LODWORD(result) = v5 + 1;
      CWindModifiers::Number = v5 + 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5cebc0
// Original: _ZN14CWindModifiers16FindWindModifierE7CVectorPfS1_
// Demangled: CWindModifiers::FindWindModifier(CVector,float *,float *)
int __fastcall CWindModifiers::FindWindModifier(float a1, float a2, float a3, float *a4, float *a5)
{
  float v6; // s16
  float v8; // s18
  float v9; // s2
  int v12; // r2
  float *v13; // r0
  int v14; // r1
  float v15; // s15
  float v16; // s9
  float v17; // s11
  float v18; // s13
  float v19; // s15
  float v20; // s16
  float v21; // s15
  int v22; // s0
  int result; // r0
  float v24; // s0

  if ( CWindModifiers::Number < 1 )
    return 0;
  v6 = 0.0;
  v8 = 0.0;
  v9 = a3 + 15.0;
  v12 = 0;
  v13 = (float *)&unk_A7D238;
  v14 = 0;
  do
  {
    if ( *((_DWORD *)v13 + 1) == 1 )
    {
      v15 = fabsf(v9 - *v13);
      if ( v15 < 40.0 )
      {
        v16 = a1 - *(v13 - 2);
        v17 = a2 - *(v13 - 1);
        v18 = sqrtf((float)((float)(v16 * v16) + (float)(v17 * v17)) + (float)((float)(a3 - *v13) * (float)(a3 - *v13)));
        if ( v18 < 50.0 )
        {
          v19 = (float)(v15 / -40.0) + 1.0;
          v20 = 1.0;
          if ( v18 >= 20.0 )
            v20 = (float)((float)(v18 + -20.0) / -30.0) + 1.0;
          v12 = 1;
          v21 = (float)(v19 * 0.2) * (float)(v20 * v13[2]);
          v6 = (float)(v17 * v21) / v18;
          v8 = (float)(v16 * v21) / v18;
        }
      }
    }
    ++v14;
    v13 += 5;
  }
  while ( v14 < CWindModifiers::Number );
  if ( !(v12 << 31) )
    return 0;
  v22 = (rand() & 0x1F) - 16;
  result = 1;
  v24 = (float)((float)v22 * 0.0005) + 1.0;
  *a4 = *a4 + (float)(v8 * v24);
  *a5 = *a5 + (float)(v6 * v24);
  return result;
}


// ============================================================
