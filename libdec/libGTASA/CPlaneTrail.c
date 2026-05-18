
// Address: 0x18ac70
// Original: j__ZN11CPlaneTrail13RegisterPointE7CVector
// Demangled: CPlaneTrail::RegisterPoint(CVector)
// attributes: thunk
int CPlaneTrail::RegisterPoint()
{
  return _ZN11CPlaneTrail13RegisterPointE7CVector();
}


// ============================================================

// Address: 0x190308
// Original: j__ZN11CPlaneTrail6RenderEf
// Demangled: CPlaneTrail::Render(float)
// attributes: thunk
int __fastcall CPlaneTrail::Render(CPlaneTrail *this, float a2)
{
  return _ZN11CPlaneTrail6RenderEf(this, a2);
}


// ============================================================

// Address: 0x5a6b5a
// Original: _ZN11CPlaneTrail4InitEv
// Demangled: CPlaneTrail::Init(void)
_QWORD *__fastcall CPlaneTrail::Init(CPlaneTrail *this)
{
  _QWORD *v1; // r1
  _QWORD *result; // r0

  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v1 = (_QWORD *)((char *)this + 208);
  result = (_QWORD *)((char *)this + 192);
  *v1 = 0LL;
  v1[1] = 0LL;
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x5a6b80
// Original: _ZN11CPlaneTrail6RenderEf
// Demangled: CPlaneTrail::Render(float)
int __fastcall CPlaneTrail::Render(int this, float a2)
{
  float32x2_t v2; // d3
  float32x2_t v3; // d4
  float v4; // s0
  int v5; // r1
  int v6; // r6
  int v7; // r11
  int v8; // r10
  int v9; // r5
  unsigned int v10; // r3
  int v11; // r5
  int *v12; // r4
  int v13; // r12
  int v14; // r2

  if ( (int)(float)(a2 * 110.0) )
  {
    v4 = (float)(int)(float)(a2 * 110.0);
    v2.n64_u32[0] = 1.0;
    this += 192;
    v5 = -192;
    v6 = 0;
    v7 = CTimer::m_snTimeInMilliseconds;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(this + v6);
      v10 = v7 - v9;
      if ( (unsigned int)(v7 - v9) < 0x7531 )
      {
        if ( v9 )
        {
          v11 = 9 * v8;
          v12 = &TempVertexBuffer[9 * v8++];
          v3.n64_f32[0] = (float)(30000.0 - (float)v10) / 10000.0;
          v3.n64_u64[0] = vmin_f32(v3, v2).n64_u64[0];
          v12[6] = ((int)(float)(v3.n64_f32[0] * v4) << 24) | 0xFFFFFF;
          v13 = *(_DWORD *)(this + v5 + 8);
          v14 = *(_DWORD *)(this + 3 * v6 - 188);
          TempVertexBuffer[v11] = *(_DWORD *)(this + v5);
          v12[1] = v14;
          v12[2] = v13;
        }
      }
      else
      {
        *(_DWORD *)(this + v6) = 0;
      }
      v6 += 4;
      v5 += 12;
    }
    while ( v5 );
    if ( v8 >= 2 )
    {
      RwRenderStateSet(12, 1);
      RwRenderStateSet(10, 5);
      RwRenderStateSet(11, 6);
      RwRenderStateSet(1, 0);
      this = RwIm3DTransform();
      if ( this )
      {
        RwIm3DRenderIndexedPrimitive();
        return sub_18D7C4();
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x5a6cbc
// Original: _ZN11CPlaneTrail13RegisterPointE7CVector
// Demangled: CPlaneTrail::RegisterPoint(CVector)
__int64 *__fastcall CPlaneTrail::RegisterPoint(__int64 *result, int a2, int a3, int a4)
{
  int v4; // r12
  __int64 v5; // kr00_8
  int v6; // r11
  int v7; // r8
  __int64 v8; // d16
  int v9; // r9
  __int64 v10; // d17
  __int64 v11; // d18
  __int64 v12; // d19
  __int64 v13; // d20
  __int64 v14; // d21
  int v15; // r4
  int v16; // lr
  int v17; // r5
  int v18; // r10
  int v19; // r6
  int v20; // r6
  int v21; // r5
  __int64 v22; // d16
  int v23; // r6
  int v24; // r5
  __int64 v25; // d17
  int v26; // r6
  int v27; // r5
  __int64 v28; // d16
  int v29; // r6
  int v30; // r5
  __int64 v31; // d17
  int v32; // r6
  int v33; // r5
  __int64 v34; // d16
  int v35; // r6
  int v36; // r5
  __int64 v37; // d17
  int v38; // r6
  int v39; // r5
  __int64 v40; // d16
  int v41; // r6
  int v42; // r5
  __int64 v43; // d17
  __int64 v44; // d16
  int v45; // r6
  int v46; // r5

  v4 = *((_DWORD *)result + 48);
  if ( !v4 )
    goto LABEL_4;
  if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - v4) > 0x7D0 )
  {
    v5 = *(__int64 *)((char *)result + 244);
    v6 = *((_DWORD *)result + 41);
    v7 = *((_DWORD *)result + 38);
    v8 = result[21];
    v9 = *((_DWORD *)result + 60);
    v10 = *(__int64 *)((char *)result + 156);
    v11 = *(__int64 *)((char *)result + 108);
    v12 = result[15];
    v13 = *(__int64 *)((char *)result + 132);
    v14 = result[18];
    v15 = *((_DWORD *)result + 35);
    *((_DWORD *)result + 47) = *((_DWORD *)result + 44);
    v16 = *((_DWORD *)result + 59);
    *((_DWORD *)result + 62) = v5;
    v17 = *((_DWORD *)result + 32);
    *((_DWORD *)result + 63) = HIDWORD(v5);
    v18 = *((_DWORD *)result + 58);
    *((_DWORD *)result + 44) = v6;
    v19 = *((_DWORD *)result + 29);
    *((_DWORD *)result + 41) = v7;
    *((_DWORD *)result + 61) = v9;
    *(__int64 *)((char *)result + 180) = v8;
    result[21] = v10;
    *(__int64 *)((char *)result + 156) = v14;
    *((_DWORD *)result + 38) = v15;
    result[18] = v13;
    *((_DWORD *)result + 60) = v16;
    *((_DWORD *)result + 35) = v17;
    *(__int64 *)((char *)result + 132) = v12;
    *((_DWORD *)result + 59) = v18;
    *((_DWORD *)result + 32) = v19;
    v20 = *((_DWORD *)result + 57);
    v21 = *((_DWORD *)result + 26);
    v22 = result[12];
    result[15] = v11;
    *((_DWORD *)result + 58) = v20;
    *((_DWORD *)result + 29) = v21;
    v23 = *((_DWORD *)result + 56);
    v24 = *((_DWORD *)result + 23);
    v25 = *(__int64 *)((char *)result + 84);
    *(__int64 *)((char *)result + 108) = v22;
    *((_DWORD *)result + 57) = v23;
    *((_DWORD *)result + 26) = v24;
    v26 = *((_DWORD *)result + 55);
    v27 = *((_DWORD *)result + 20);
    v28 = result[9];
    result[12] = v25;
    *((_DWORD *)result + 56) = v26;
    *((_DWORD *)result + 23) = v27;
    v29 = *((_DWORD *)result + 54);
    v30 = *((_DWORD *)result + 17);
    v31 = *(__int64 *)((char *)result + 60);
    *(__int64 *)((char *)result + 84) = v28;
    *((_DWORD *)result + 55) = v29;
    *((_DWORD *)result + 20) = v30;
    v32 = *((_DWORD *)result + 53);
    v33 = *((_DWORD *)result + 14);
    v34 = result[6];
    result[9] = v31;
    *((_DWORD *)result + 54) = v32;
    *((_DWORD *)result + 17) = v33;
    v35 = *((_DWORD *)result + 52);
    v36 = *((_DWORD *)result + 11);
    v37 = *(__int64 *)((char *)result + 36);
    *(__int64 *)((char *)result + 60) = v34;
    *((_DWORD *)result + 53) = v35;
    *((_DWORD *)result + 14) = v36;
    v38 = *((_DWORD *)result + 51);
    v39 = *((_DWORD *)result + 8);
    v40 = result[3];
    result[6] = v37;
    *((_DWORD *)result + 52) = v38;
    *((_DWORD *)result + 11) = v39;
    v41 = *((_DWORD *)result + 50);
    v42 = *((_DWORD *)result + 5);
    v43 = *(__int64 *)((char *)result + 12);
    *(__int64 *)((char *)result + 36) = v40;
    *((_DWORD *)result + 51) = v41;
    *((_DWORD *)result + 8) = v42;
    v44 = *result;
    v45 = *((_DWORD *)result + 49);
    v46 = *((_DWORD *)result + 2);
    result[3] = v43;
    *((_DWORD *)result + 50) = v45;
    *((_DWORD *)result + 5) = v46;
    *(__int64 *)((char *)result + 12) = v44;
    *((_DWORD *)result + 49) = v4;
LABEL_4:
    *((_DWORD *)result + 1) = a3;
    *(_DWORD *)result = a2;
    *((_DWORD *)result + 2) = a4;
    *((_DWORD *)result + 48) = CTimer::m_snTimeInMilliseconds;
    return result;
  }
  *(_DWORD *)result = a2;
  *((_DWORD *)result + 1) = a3;
  *((_DWORD *)result + 2) = a4;
  return (__int64 *)((char *)result + 12);
}


// ============================================================
