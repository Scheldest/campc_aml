
// Address: 0x19b904
// Original: j__ZN11CShinyTexts11RegisterOneE7CVectorS0_S0_S0_ffffffffhhhhf
// Demangled: CShinyTexts::RegisterOne(CVector,CVector,CVector,CVector,float,float,float,float,float,float,float,float,uchar,uchar,uchar,uchar,float)
// attributes: thunk
int CShinyTexts::RegisterOne()
{
  return _ZN11CShinyTexts11RegisterOneE7CVectorS0_S0_S0_ffffffffhhhhf();
}


// ============================================================

// Address: 0x19d938
// Original: j__ZN11CShinyTexts6RenderEv
// Demangled: CShinyTexts::Render(void)
// attributes: thunk
int __fastcall CShinyTexts::Render(CShinyTexts *this)
{
  return _ZN11CShinyTexts6RenderEv(this);
}


// ============================================================

// Address: 0x5bfb00
// Original: _ZN11CShinyTexts4InitEv
// Demangled: CShinyTexts::Init(void)
int *__fastcall CShinyTexts::Init(CShinyTexts *this)
{
  int *result; // r0

  result = &CShinyTexts::NumShinyTexts;
  CShinyTexts::NumShinyTexts = 0;
  return result;
}


// ============================================================

// Address: 0x5c0ea8
// Original: _ZN11CShinyTexts6RenderEv
// Demangled: CShinyTexts::Render(void)
int __fastcall CShinyTexts::Render(CShinyTexts *this)
{
  int result; // r0
  int v2; // r9
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r0
  int v6; // r10
  int v7; // r11
  int v8; // r5
  _DWORD *v9; // r2
  int v10; // r2
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r6
  int v15; // r2
  int v16; // r3
  int v17; // r6
  int v18; // r2
  int v19; // r3
  int v20; // r6
  int v21; // r1
  int *v22; // r3
  int v23; // r2
  int v24; // r2
  int v25; // r6
  int v26; // r2
  _WORD *v27; // r0
  int v28; // [sp+50h] [bp-28h]

  result = CShinyTexts::NumShinyTexts;
  if ( CShinyTexts::NumShinyTexts )
  {
    RwRenderStateSet(20, 1);
    RwRenderStateSet(8, 0);
    RwRenderStateSet(10, 2);
    RwRenderStateSet(11, 2);
    TempBufferIndicesStored = 0;
    TempBufferVerticesStored = 0;
    if ( CShinyTexts::NumShinyTexts >= 1 )
    {
      v2 = 0;
      v3 = &CShinyTexts::aShinyTexts;
      v4 = 0;
      v5 = 0;
      v28 = 0;
      do
      {
        if ( v4 && (v5 > 1984 || v4 > 4032) )
        {
          LittleTest();
          if ( RwIm3DTransform() )
          {
            RwIm3DRenderIndexedPrimitive();
            RwIm3DEnd();
          }
          v4 = 0;
          TempBufferIndicesStored = 0;
          TempBufferVerticesStored = 0;
          v5 = 0;
        }
        if ( *((_BYTE *)v3 + 84) == 1 )
        {
          v6 = *((unsigned __int8 *)v3 + 85);
          v7 = *((unsigned __int8 *)v3 + 86);
          v8 = *((unsigned __int8 *)v3 + 87);
          v9 = (_DWORD *)gpHandManTex;
          if ( v28 != gpHandManTex )
          {
            if ( v4 )
            {
              LittleTest();
              if ( RwIm3DTransform() )
              {
                RwIm3DRenderIndexedPrimitive();
                RwIm3DEnd();
              }
              v9 = (_DWORD *)gpHandManTex;
              TempBufferIndicesStored = 0;
              TempBufferVerticesStored = 0;
            }
            RwRenderStateSet(1, *v9);
            v5 = TempBufferVerticesStored;
            v28 = gpHandManTex;
          }
          v10 = 9 * v5;
          v11 = &TempVertexBuffer[9 * v5];
          v12 = v6 | (v7 << 8) | (v8 << 16) | 0xFF000000;
          v11[6] = v12;
          v13 = v3[1];
          v14 = v3[2];
          TempVertexBuffer[v10] = *v3;
          v11[1] = v13;
          v11[2] = v14;
          v11[7] = v3[12];
          v15 = v3[13];
          v11[15] = v12;
          v11[8] = v15;
          v16 = v3[4];
          v17 = v3[5];
          v11[9] = v3[3];
          v11[10] = v16;
          v11[11] = v17;
          v11[16] = v3[14];
          v18 = v3[15];
          v11[24] = v12;
          v11[17] = v18;
          v11 += 18;
          v19 = v3[7];
          v20 = v3[8];
          *v11 = v3[6];
          v11[1] = v19;
          v11[2] = v20;
          v21 = TempBufferVerticesStored;
          v22 = &TempVertexBuffer[9 * TempBufferVerticesStored];
          v22[25] = v3[16];
          v23 = v3[17];
          v22[33] = v12;
          v22[26] = v23;
          v24 = v3[10];
          v25 = v3[11];
          v22[27] = v3[9];
          v22[28] = v24;
          v22[29] = v25;
          v22[34] = v3[18];
          v22[35] = v3[19];
          v26 = TempBufferIndicesStored;
          *((_WORD *)TempBufferRenderIndexList + TempBufferIndicesStored) = v21;
          v27 = (_WORD *)TempBufferRenderIndexList + v26;
          v27[1] = v21 + 1;
          v27[2] = v21 + 2;
          v27[3] = v21 + 2;
          v27[4] = v21 + 1;
          v27[5] = v21 + 3;
          v5 = v21 + 4;
          v4 = v26 + 6;
          TempBufferVerticesStored = v5;
          TempBufferIndicesStored = v26 + 6;
        }
        ++v2;
        v3 += 22;
      }
      while ( v2 < CShinyTexts::NumShinyTexts );
      if ( v4 )
      {
        LittleTest();
        if ( RwIm3DTransform() )
        {
          RwIm3DRenderIndexedPrimitive();
          RwIm3DEnd();
        }
        TempBufferIndicesStored = 0;
        TempBufferVerticesStored = 0;
      }
    }
    CShinyTexts::NumShinyTexts = 0;
    RwRenderStateSet(12, 0);
    RwRenderStateSet(8, 1);
    RwRenderStateSet(10, 5);
    return sub_192888();
  }
  return result;
}


// ============================================================

// Address: 0x5c2db0
// Original: _ZN11CShinyTexts23RenderOutGeometryBufferEv
// Demangled: CShinyTexts::RenderOutGeometryBuffer(void)
int *__fastcall CShinyTexts::RenderOutGeometryBuffer(CShinyTexts *this)
{
  int *result; // r0

  result = (int *)TempBufferIndicesStored;
  if ( TempBufferIndicesStored )
  {
    LittleTest();
    if ( RwIm3DTransform() )
    {
      RwIm3DRenderIndexedPrimitive();
      RwIm3DEnd();
    }
    result = &TempBufferIndicesStored;
    TempBufferIndicesStored = 0;
    TempBufferVerticesStored = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5c2e2c
// Original: _ZN11CShinyTexts11RegisterOneE7CVectorS0_S0_S0_ffffffffhhhhf
// Demangled: CShinyTexts::RegisterOne(CVector,CVector,CVector,CVector,float,float,float,float,float,float,float,float,uchar,uchar,uchar,uchar,float)
float __fastcall CShinyTexts::RegisterOne(
        float result,
        float a2,
        float a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        char a20,
        unsigned int a21,
        unsigned int a22,
        unsigned int a23,
        float a24)
{
  int v24; // r12
  float *v25; // r4
  float v26; // s0
  char *v27; // r6
  _BYTE *v28; // r6
  float v29; // s0

  v24 = CShinyTexts::NumShinyTexts;
  if ( CShinyTexts::NumShinyTexts <= 31 )
  {
    v25 = (float *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v25 = (float *)&qword_951FAC;
    v26 = sqrtf(
            (float)((float)((float)(result - *v25) * (float)(result - *v25))
                  + (float)((float)(a2 - v25[1]) * (float)(a2 - v25[1])))
          + (float)((float)(a3 - v25[2]) * (float)(a3 - v25[2])));
    *((float *)&CShinyTexts::aShinyTexts + 22 * CShinyTexts::NumShinyTexts + 20) = v26;
    if ( v26 <= a24 )
    {
      v27 = (char *)&CShinyTexts::aShinyTexts + 88 * v24;
      *(float *)v27 = result;
      *((float *)v27 + 1) = a2;
      *((float *)v27 + 2) = a3;
      *((_DWORD *)v27 + 3) = a4;
      *((_QWORD *)v27 + 2) = a5;
      *((_DWORD *)v27 + 6) = a6;
      *((_DWORD *)v27 + 7) = a7;
      *((_DWORD *)v27 + 8) = a8;
      *((_DWORD *)v27 + 9) = a9;
      *((_DWORD *)v27 + 10) = a10;
      *((_DWORD *)v27 + 11) = a11;
      v27[85] = a21;
      v28 = v27 + 85;
      *(v28 - 1) = a20;
      *(_DWORD *)(v28 - 33) = a13;
      *(_DWORD *)(v28 - 37) = a12;
      *(_DWORD *)(v28 - 29) = a14;
      *(_DWORD *)(v28 - 25) = a15;
      *(_DWORD *)(v28 - 21) = a16;
      *(_DWORD *)(v28 - 17) = a17;
      *(_DWORD *)(v28 - 13) = a18;
      *(_DWORD *)(v28 - 9) = a19;
      v28[2] = a23;
      v28[1] = a22;
      if ( v26 > (float)(a24 * 0.5) )
      {
        v29 = 1.0 - (float)((float)(v26 - (float)(a24 * 0.5)) / (float)(a24 * 0.5));
        *v28 = (unsigned int)(float)(v29 * (float)a21);
        v28[1] = (unsigned int)(float)(v29 * (float)a22);
        v28[2] = (unsigned int)(float)(v29 * (float)a23);
      }
      result = COERCE_FLOAT(&CShinyTexts::NumShinyTexts);
      CShinyTexts::NumShinyTexts = v24 + 1;
    }
  }
  return result;
}


// ============================================================
