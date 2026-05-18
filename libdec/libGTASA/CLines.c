
// Address: 0x5adb08
// Original: _ZN6CLines20RenderLineNoClippingEffffffjj
// Demangled: CLines::RenderLineNoClipping(float,float,float,float,float,float,uint,uint)
int __fastcall CLines::RenderLineNoClipping(
        CLines *this,
        float a2,
        float a3,
        int a4,
        float a5,
        float a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int result; // r0

  dword_A410FC = bswap32(a8);
  dword_A410D8 = bswap32(a7);
  v = this;
  unk_A410C4 = LODWORD(a2);
  unk_A410C8 = LODWORD(a3);
  dword_A410E4 = a4;
  unk_A410E8 = LODWORD(a5);
  unk_A410EC = LODWORD(a6);
  LittleTest();
  result = RwIm3DTransform();
  if ( result )
  {
    RwIm3DRenderLine(0, 1);
    return sub_18D7C4();
  }
  return result;
}


// ============================================================

// Address: 0x5adb68
// Original: _ZN6CLines22RenderLineWithClippingEffffffjj
// Demangled: CLines::RenderLineWithClipping(float,float,float,float,float,float,uint,uint)
int __fastcall CLines::RenderLineWithClipping(
        CLines *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        unsigned int a8,
        unsigned int a9)
{
  float32x2_t v9; // d6
  float32x2_t v10; // d8
  int v13; // s5
  float v14; // s12
  float v15; // s14
  float v16; // s1
  float v17; // s3
  int *v18; // r1
  int v19; // r2
  float v20; // s5
  float v21; // s7
  float v22; // s9
  float v23; // s11
  float v24; // s6
  float v25; // s8
  float v26; // s10
  float v27; // s13
  int v28; // r3
  float v29; // s15
  float v30; // s16
  int result; // r0

  v10.n64_u32[0] = 7.0;
  v9.n64_f32[0] = (float)(sqrtf(
                            (float)((float)((float)(*(float *)&this - a4) * (float)(*(float *)&this - a4))
                                  + (float)((float)(a2 - a5) * (float)(a2 - a5)))
                          + (float)((float)(a3 - a6) * (float)(a3 - a6)))
                        / 2.5)
                + 1.0;
  v13 = (int)vmin_f32(v9, v10).n64_f32[0];
  if ( v13 >= 1 )
  {
    v14 = (float)LOBYTE(a7);
    v15 = (float)BYTE1(a7);
    v16 = (float)BYTE2(a7);
    v17 = (float)HIBYTE(LODWORD(a7));
    v18 = TempVertexBuffer;
    v19 = 0;
    v20 = (float)v13;
    v21 = (float)((unsigned __int8)a8 - LOBYTE(a7));
    v22 = (float)(int)(HIBYTE(a8) - HIBYTE(LODWORD(a7)));
    v23 = (float)(BYTE1(a8) - BYTE1(a7));
    v24 = a6 - a3;
    v25 = a5 - a2;
    v26 = a4 - *(float *)&this;
    v27 = (float)(BYTE2(a8) - BYTE2(a7));
    do
    {
      v28 = (__int16)v19++;
      v29 = (float)v28 / v20;
      v30 = (float)v19 / v20;
      *(float *)v18 = (float)(v26 * v29) + *(float *)&this;
      *((float *)v18 + 1) = (float)(v25 * v29) + a2;
      *((float *)v18 + 2) = (float)(v24 * v29) + a3;
      *((float *)v18 + 9) = (float)(v26 * v30) + *(float *)&this;
      *((float *)v18 + 10) = (float)(v25 * v30) + a2;
      *((float *)v18 + 11) = (float)(v24 * v30) + a3;
      _R5 = (unsigned int)(float)((float)(v29 * v23) + v15) << 16;
      __asm { UXTB16.W        R5, R5 }
      v18[6] = (unsigned __int8)(unsigned int)(float)((float)(v29 * v22) + v17) | ((unsigned int)(float)((float)(v29 * v21) + v14) << 24) | _R5 | (unsigned __int16)((unsigned __int16)(unsigned int)(float)((float)(v29 * v27) + v16) << 8);
      _R5 = (unsigned int)(float)((float)(v30 * v23) + v15) << 16;
      __asm { UXTB16.W        R5, R5 }
      v18[15] = (unsigned __int8)(unsigned int)(float)((float)(v30 * v22) + v17) | ((unsigned int)(float)((float)(v30 * v21) + v14) << 24) | _R5 | (unsigned __int16)((unsigned __int16)(unsigned int)(float)((float)(v30 * v27) + v16) << 8);
      v18 += 18;
    }
    while ( !_ZF );
  }
  LittleTest();
  result = RwIm3DTransform();
  if ( result )
  {
    RwIm3DRenderIndexedPrimitive();
    return sub_18D7C4();
  }
  return result;
}


// ============================================================

// Address: 0x5addcc
// Original: _ZN6CLines15ImmediateLine2DEiiiihhhhhhhh
// Demangled: CLines::ImmediateLine2D(int,int,int,int,uchar,uchar,uchar,uchar,uchar,uchar,uchar,uchar)
int __fastcall CLines::ImmediateLine2D(
        CLines *this,
        int a2,
        int a3,
        int a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13)
{
  RwRenderStateSet(8, 1);
  RwRenderStateSet(6, 0);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(9, 2);
  RwRenderStateSet(1, 0);
  byte_A41118 = a5;
  byte_A4111B = a8;
  byte_A4111A = a7;
  byte_A41134 = a9;
  byte_A41135 = a10;
  byte_A41136 = a11;
  byte_A41137 = a12;
  LinesVertexBuffer = (float)(int)this;
  unk_A4110C = (float)a2;
  unk_A41124 = (float)a3;
  unk_A41128 = (float)a4;
  byte_A41119 = a6;
  RwIm2DRenderLine_BUGFIX();
  RwRenderStateSet(12, 0);
  RwRenderStateSet(6, 1);
  return sub_192888();
}


// ============================================================
