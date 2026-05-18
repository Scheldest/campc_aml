
// Address: 0x18ccd4
// Original: j__ZN13CBrightLights11RegisterOneE7CVectorS0_S0_S0_hhhh
// Demangled: CBrightLights::RegisterOne(CVector,CVector,CVector,CVector,uchar,uchar,uchar,uchar)
// attributes: thunk
int CBrightLights::RegisterOne()
{
  return _ZN13CBrightLights11RegisterOneE7CVectorS0_S0_S0_hhhh();
}


// ============================================================

// Address: 0x19a4ac
// Original: j__ZN13CBrightLights23RenderOutGeometryBufferEv
// Demangled: CBrightLights::RenderOutGeometryBuffer(void)
// attributes: thunk
int __fastcall CBrightLights::RenderOutGeometryBuffer(CBrightLights *this)
{
  return _ZN13CBrightLights23RenderOutGeometryBufferEv(this);
}


// ============================================================

// Address: 0x5bfaf0
// Original: _ZN13CBrightLights4InitEv
// Demangled: CBrightLights::Init(void)
int *__fastcall CBrightLights::Init(CBrightLights *this)
{
  int *result; // r0

  result = &CBrightLights::NumBrightLights;
  CBrightLights::NumBrightLights = 0;
  return result;
}


// ============================================================

// Address: 0x5c2474
// Original: _ZN13CBrightLights6RenderEv
// Demangled: CBrightLights::Render(void)
int *__fastcall CBrightLights::Render(CBrightLights *this)
{
  unsigned int v1; // r11
  int *result; // r0
  unsigned int v3; // r4
  int v4; // r5
  int v5; // r1
  int v6; // r0
  bool v7; // r1
  float v8; // s0
  float *v9; // r1
  unsigned int v10; // r2
  float v11; // s0
  int v12; // r3
  float v13; // s0
  unsigned int v14; // r3
  float v15; // s19
  int v16; // r1
  int v17; // r10
  int v18; // r4
  int v19; // r11
  float *v20; // r0
  float v21; // s21
  float v22; // s23
  float v23; // s25
  float v24; // s27
  float v25; // s29
  float v26; // s31
  float v27; // s20
  float v28; // s26
  int v29; // r9
  int *v30; // r8
  float v31; // r5
  float v32; // s0
  int *v33; // r0
  float v34; // s0
  int v35; // r3
  int v36; // r6
  int v37; // r0
  _WORD *v38; // r1
  __int16 v39; // r1
  int v40; // r2
  float *v41; // r0
  float v42; // s0
  float v43; // s4
  int v44; // r1
  float v45; // s2
  float v46; // s8
  float v47; // s12
  float v48; // s6
  float v49; // s10
  float v50; // s14
  float v51; // s1
  uint32x4_t v52; // q9
  unsigned int v53; // r1
  int *v54; // r0
  float v55; // s9
  float v56; // s3
  float v57; // s11
  float v58; // s5
  float v59; // s7
  float v60; // s3
  float v61; // s9
  float v62; // s3
  float v63; // s5
  float v64; // s7
  float v65; // s3
  float v66; // s9
  float v67; // s3
  float v68; // s5
  float v69; // s7
  float v70; // s3
  float v71; // s9
  float v72; // s3
  float v73; // s5
  float v74; // s7
  float v75; // s3
  float v76; // s9
  float v77; // s3
  int32x4_t v78; // q8
  float v79; // s3
  float v80; // s5
  int16x4_t *v81; // r2
  unsigned int v82; // [sp+70h] [bp-78h]
  unsigned int v83; // [sp+74h] [bp-74h]
  int v84; // [sp+78h] [bp-70h]
  int *v85; // [sp+7Ch] [bp-6Ch]

  result = (int *)CBrightLights::NumBrightLights;
  if ( !CBrightLights::NumBrightLights )
    return result;
  RwRenderStateSet(12, 1);
  RwRenderStateSet(8, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  v3 = 0;
  RwRenderStateSet(1, 0);
  RwRenderStateSet(20, 1);
  TempBufferIndicesStored = 0;
  TempBufferVerticesStored = 0;
  if ( CBrightLights::NumBrightLights < 1 )
    goto LABEL_35;
  v4 = 0;
  v85 = TempVertexBuffer_ptr;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = v5 <= 2008;
    if ( v6 && (v6 >= 4057 || !v7) )
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
    v8 = (float)(unsigned __int8)rand();
    v9 = &CBrightLights::aBrightLights[14 * v4];
    v10 = *((unsigned __int8 *)v9 + 52);
    if ( v10 <= 0xF )
    {
      v11 = v8 * 0.2;
      v12 = 1 << v10;
      if ( ((1 << v10) & 0x2002) != 0 )
      {
        v1 = 255;
        v3 = (unsigned int)v11;
        v85 = (int *)v11;
      }
      else if ( (v12 & 0x4004) != 0 )
      {
        v1 = 128;
        LOBYTE(v85) = -1;
        v3 = (unsigned int)v11;
      }
      else if ( (v12 & 0x8008) != 0 )
      {
        v3 = (unsigned int)v11;
        LOBYTE(v85) = -1;
        v1 = (unsigned int)v11;
      }
    }
    v13 = CBrightLights::aBrightLights[14 * v4 + 12];
    if ( v13 >= 45.0 )
      v14 = (unsigned int)(float)((float)((float)((float)(v13 + -45.0) * -0.066667) + 1.0) * 255.0);
    else
      v14 = 255;
    if ( v10 - 1 < 3 )
    {
      v84 = v4;
      v41 = &CBrightLights::aBrightLights[14 * v4];
      v42 = *v9;
      v83 = v3;
      v82 = v1;
      v43 = v41[1];
      v44 = ((unsigned __int8)v1 << 8) | ((unsigned __int8)v3 << 16) | (unsigned __int8)v85;
      v45 = v41[2];
      v46 = v41[3];
      v47 = v41[4];
      v48 = v41[8];
      v49 = v41[6];
      v50 = v41[7];
      v51 = v41[5];
      v19 = TempBufferVerticesStored;
      v52 = vdupq_n_s32(TempBufferVerticesStored);
      v53 = v44 | ((unsigned int)(float)((float)v14 * 0.5) << 24);
      v54 = &TempVertexBuffer[9 * TempBufferVerticesStored];
      v55 = TrafficLightsSide;
      v56 = TrafficLightsUp;
      v57 = TrafficLightsSide * v50;
      v54[6] = v53;
      v54[15] = v53;
      v58 = (float)(v43 + (float)(v56 * v47)) + v57;
      v59 = (float)(v42 + (float)(v56 * v46)) + (float)(v55 * v49);
      v60 = (float)(v45 + (float)(v56 * v51)) + (float)(v55 * v48);
      v61 = unk_6B2300;
      *(float *)v54 = v59;
      *((float *)v54 + 1) = v58;
      *((float *)v54 + 2) = v60;
      v62 = unk_6B2318;
      v54[24] = v53;
      v63 = (float)(v43 + (float)(v62 * v47)) + (float)(v61 * v50);
      v64 = (float)(v42 + (float)(v62 * v46)) + (float)(v61 * v49);
      v65 = (float)(v45 + (float)(v62 * v51)) + (float)(v61 * v48);
      v66 = unk_6B2304;
      *((float *)v54 + 9) = v64;
      *((float *)v54 + 10) = v63;
      *((float *)v54 + 11) = v65;
      v67 = unk_6B231C;
      v54[33] = v53;
      v68 = (float)(v43 + (float)(v67 * v47)) + (float)(v66 * v50);
      v69 = (float)(v42 + (float)(v67 * v46)) + (float)(v66 * v49);
      v70 = (float)(v45 + (float)(v67 * v51)) + (float)(v66 * v48);
      v71 = unk_6B2308;
      *((float *)v54 + 18) = v69;
      *((float *)v54 + 19) = v68;
      *((float *)v54 + 20) = v70;
      v72 = unk_6B2320;
      v54[42] = v53;
      v73 = (float)(v43 + (float)(v72 * v47)) + (float)(v71 * v50);
      v74 = (float)(v42 + (float)(v72 * v46)) + (float)(v71 * v49);
      v75 = (float)(v45 + (float)(v72 * v51)) + (float)(v71 * v48);
      v76 = unk_6B230C;
      *((float *)v54 + 27) = v74;
      *((float *)v54 + 28) = v73;
      *((float *)v54 + 29) = v75;
      v77 = unk_6B2324;
      v54[51] = v53;
      v78 = vaddw_u16(v52, TrafficLightIndices);
      LOWORD(v53) = unk_6B233C + v19;
      *(int16x4_t *)&v52.n128_i8[8] = vmovn_s32(vaddw_u16(v52, unk_6B2334));
      *((float *)v54 + 36) = (float)(v42 + (float)(v77 * v46)) + (float)(v76 * v49);
      *((float *)v54 + 37) = (float)(v43 + (float)(v77 * v47)) + (float)(v76 * v50);
      *((float *)v54 + 38) = (float)(v45 + (float)(v77 * v51)) + (float)(v76 * v48);
      v79 = unk_6B2328;
      v80 = unk_6B2310;
      *((float *)v54 + 45) = (float)(v42 + (float)(unk_6B2328 * v46)) + (float)(unk_6B2310 * v49);
      *((float *)v54 + 46) = (float)(v43 + (float)(v79 * v47)) + (float)(v80 * v50);
      *((float *)v54 + 47) = (float)(v45 + (float)(v79 * v51)) + (float)(v80 * v48);
      v37 = TempBufferIndicesStored;
      v81 = (int16x4_t *)((char *)TempBufferRenderIndexList + 2 * TempBufferIndicesStored);
      v81->n64_u64[0] = vmovn_s32(v78).n64_u64[0];
      v81[1].n64_u64[0] = *(unsigned __int64 *)&v52.n128_i8[8];
      v81[2].n64_u16[0] = v53;
      v35 = 6;
      v81[2].n64_u16[1] = unk_6B233E + v19;
      v81[2].n64_u16[2] = unk_6B2340 + v19;
      v40 = v37 + 11;
      v36 = 12;
      v39 = unk_6B2342 + v19;
LABEL_27:
      *((_WORD *)TempBufferRenderIndexList + v40) = v39;
      v6 = v37 + v36;
      v4 = v84;
      TempBufferVerticesStored = v19 + v35;
      TempBufferIndicesStored = v6;
      v1 = v82;
      v3 = v83;
      goto LABEL_28;
    }
    if ( v10 - 13 < 3 )
    {
      v15 = *v9;
      v16 = ((unsigned __int8)v1 << 8) | ((unsigned __int8)v3 << 16);
      v82 = v1;
      v17 = 0;
      v83 = v3;
      v18 = 0;
      v19 = TempBufferVerticesStored;
      v84 = v4;
      v20 = &CBrightLights::aBrightLights[14 * v4];
      v21 = v20[1];
      v22 = v20[2];
      v23 = v20[3];
      v24 = v20[4];
      v25 = v20[5];
      v26 = v20[6];
      v27 = v20[7];
      v28 = v20[8];
      v29 = (unsigned __int8)v85 | v16 | (v14 << 24);
      v30 = &TempVertexBuffer[9 * TempBufferVerticesStored];
      do
      {
        v31 = sinf((float)v17 * 0.7854);
        v32 = cosf((float)v17 * 0.7854);
        v33 = &v30[v18];
        v18 += 9;
        v34 = v32 * 0.1;
        ++v17;
        v33[6] = v29;
        *(float *)v33 = (float)(v15 + (float)(v34 * v23)) + (float)((float)(v31 * 0.1) * v26);
        *((float *)v33 + 1) = (float)(v21 + (float)(v34 * v24)) + (float)((float)(v31 * 0.1) * v27);
        *((float *)v33 + 2) = (float)(v22 + (float)(v34 * v25)) + (float)((float)(v31 * 0.1) * v28);
      }
      while ( v18 != 72 );
      v35 = 8;
      v36 = 18;
      v37 = TempBufferIndicesStored;
      *((_WORD *)TempBufferRenderIndexList + TempBufferIndicesStored) = v19;
      v38 = (_WORD *)TempBufferRenderIndexList + v37;
      v38[1] = v19 + 1;
      v38[2] = v19 + 2;
      v38[3] = v19;
      v38[4] = v19 + 2;
      v38[5] = v19 + 3;
      v38[6] = v19;
      v38[7] = v19 + 3;
      v38[8] = v19 + 4;
      v38[9] = v19;
      v38[10] = v19 + 4;
      v38[11] = v19 + 5;
      v38[12] = v19;
      v38[13] = v19 + 5;
      v38[14] = v19 + 6;
      v38[15] = v19;
      v38[16] = v19 + 6;
      v39 = v19 + 7;
      v40 = v37 + 17;
      goto LABEL_27;
    }
    v6 = TempBufferIndicesStored;
LABEL_28:
    if ( ++v4 >= CBrightLights::NumBrightLights )
      break;
    v5 = TempBufferVerticesStored;
  }
  if ( v6 )
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
LABEL_35:
  RwRenderStateSet(12, 0);
  result = &CBrightLights::NumBrightLights;
  CBrightLights::NumBrightLights = 0;
  return result;
}


// ============================================================

// Address: 0x5c2c28
// Original: _ZN13CBrightLights23RenderOutGeometryBufferEv
// Demangled: CBrightLights::RenderOutGeometryBuffer(void)
int *__fastcall CBrightLights::RenderOutGeometryBuffer(CBrightLights *this)
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

// Address: 0x5c2ca4
// Original: _ZN13CBrightLights11RegisterOneE7CVectorS0_S0_S0_hhhh
// Demangled: CBrightLights::RegisterOne(CVector,CVector,CVector,CVector,uchar,uchar,uchar,uchar)
float __fastcall CBrightLights::RegisterOne(
        float result,
        float a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        char a15,
        char a16)
{
  int v16; // lr
  float *v17; // r6
  float v18; // s0
  float *v19; // r0

  if ( a13 )
  {
    v16 = CBrightLights::NumBrightLights;
    if ( CBrightLights::NumBrightLights <= 31 )
    {
      v17 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v17 = (float *)&qword_951FAC;
      v18 = sqrtf(
              (float)((float)((float)(result - *v17) * (float)(result - *v17))
                    + (float)((float)(a2 - v17[1]) * (float)(a2 - v17[1])))
            + (float)((float)(a3 - v17[2]) * (float)(a3 - v17[2])))
          / unk_952094;
      CBrightLights::aBrightLights[14 * CBrightLights::NumBrightLights + 12] = v18;
      if ( v18 <= 60.0 )
      {
        CBrightLights::aBrightLights[14 * v16] = result;
        v19 = &CBrightLights::aBrightLights[14 * v16];
        v19[1] = a2;
        v19[2] = a3;
        *((_DWORD *)v19 + 3) = a4;
        *((_DWORD *)v19 + 4) = a5;
        *((_DWORD *)v19 + 5) = a6;
        *((_DWORD *)v19 + 6) = a7;
        *((_DWORD *)v19 + 7) = a8;
        *((_DWORD *)v19 + 8) = a9;
        *((_DWORD *)v19 + 9) = a10;
        *((_DWORD *)v19 + 10) = a11;
        *((_DWORD *)v19 + 11) = a12;
        *((_BYTE *)v19 + 53) = a14;
        *((_BYTE *)v19 + 52) = a13;
        *((_BYTE *)v19 + 54) = a15;
        *((_BYTE *)v19 + 55) = a16;
        LODWORD(result) = v16 + 1;
        CBrightLights::NumBrightLights = v16 + 1;
      }
    }
  }
  return result;
}


// ============================================================
