
// Address: 0x19371c
// Original: j__ZN11CHandShaker7ProcessEf
// Demangled: CHandShaker::Process(float)
// attributes: thunk
int __fastcall CHandShaker::Process(CHandShaker *this, float a2)
{
  return _ZN11CHandShaker7ProcessEf(this, a2);
}


// ============================================================

// Address: 0x3d4294
// Original: _ZN11CHandShaker7ProcessEf
// Demangled: CHandShaker::Process(float)
int __fastcall CHandShaker::Process(CHandShaker *this, float a2)
{
  float v4; // s4
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float v8; // s6
  float v9; // s10
  float v10; // s16
  float v11; // s6
  float v12; // s18
  float v13; // s22
  float v14; // s24
  int v15; // r0
  float v16; // s26
  float v17; // s28
  int v18; // r0
  float v19; // s30
  float v20; // s6
  float v21; // s8
  float v22; // s10
  float v23; // s2
  float v24; // s0
  float v25; // s16
  float v26; // s18
  float v27; // s18
  int v28; // r0
  float v29; // s22
  float v30; // s24
  int v31; // r0
  float v32; // s26
  float v33; // s28
  int v34; // r0
  float v35; // s0
  float v36; // s2
  float v37; // s4
  float v38; // s6
  float v39; // s0
  float v40; // s2
  float v41; // s4
  float v42; // s6
  float v43; // s8

  v4 = *((float *)this + 1);
  v5 = *((float *)this + 2);
  v6 = *((float *)this + 33);
  v7 = fabsf(v5 / *((float *)this + 5));
  v8 = *((float *)this + 34) - v6;
  v9 = v8 * fabsf(v4 / *((float *)this + 4));
  v10 = v6 + (float)(fabsf(*(float *)this / *((float *)this + 3)) * v8);
  if ( *(float *)this > 0.0 && *((float *)this + 9) > 0.0 || *(float *)this < 0.0 && *((float *)this + 9) < 0.0 )
    v10 = v10 * *((float *)this + 12);
  v11 = v8 * v7;
  v12 = v6 + v9;
  if ( v4 > 0.0 && *((float *)this + 10) > 0.0 || v4 < 0.0 && *((float *)this + 10) < 0.0 )
    v12 = v12 * *((float *)this + 13);
  v13 = v6 + v11;
  if ( v5 > 0.0 && *((float *)this + 11) > 0.0 || v5 < 0.0 && *((float *)this + 11) < 0.0 )
    v13 = v13 * *((float *)this + 14);
  v14 = *((float *)this + 6);
  v15 = rand();
  v16 = *((float *)this + 7);
  v17 = (float)v15;
  v18 = rand();
  v19 = *((float *)this + 8);
  v20 = v10 * (float)((float)(v14 * (float)(v17 * 4.6566e-10)) + 0.0);
  v21 = v12 * (float)((float)(v16 * (float)((float)v18 * 4.6566e-10)) + 0.0);
  v22 = v13 * (float)((float)(v19 * (float)((float)rand() * 4.6566e-10)) + 0.0);
  if ( *(float *)this > 0.0 )
    v20 = -v20;
  if ( *((float *)this + 1) > 0.0 )
    v21 = -v21;
  if ( *((float *)this + 2) > 0.0 )
    v22 = -v22;
  v23 = *((float *)this + 11);
  v24 = v21 + *((float *)this + 10);
  *((float *)this + 9) = v20 + *((float *)this + 9);
  *((float *)this + 10) = v24;
  *((float *)this + 11) = v22 + v23;
  v25 = (float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStepNonClipped / 50.0) * 1000.0) / 33.333;
  v26 = v25 * (float)*((int *)this + 35);
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)((int)v26 - 1)) == 1 )
  {
    v27 = *((float *)this + 36);
    v28 = rand();
    v29 = *((float *)this + 36);
    v30 = (float)v28;
    v31 = rand();
    v32 = *((float *)this + 36);
    v33 = (float)v31;
    v34 = rand();
    v35 = (float)((float)((float)(v27 + v27) * (float)(v30 * 4.6566e-10)) - v27) + *((float *)this + 9);
    v36 = (float)((float)((float)(v29 + v29) * (float)(v33 * 4.6566e-10)) - v29) + *((float *)this + 10);
    v37 = (float)((float)((float)(v32 + v32) * (float)((float)v34 * 4.6566e-10)) - v32) + *((float *)this + 11);
    *((float *)this + 9) = v35;
    *((float *)this + 10) = v36;
    *((float *)this + 11) = v37;
  }
  else
  {
    v35 = *((float *)this + 9);
    v36 = *((float *)this + 10);
    v37 = *((float *)this + 11);
  }
  v38 = *((float *)this + 3);
  v39 = (float)(v25 * v35) + *(float *)this;
  v40 = (float)(v25 * v36) + *((float *)this + 1);
  v41 = (float)(v25 * v37) + *((float *)this + 2);
  *(float *)this = v39;
  *((float *)this + 1) = v40;
  *((float *)this + 2) = v41;
  if ( v39 > v38 || (v38 = -v38, v39 < v38) )
  {
    v39 = v38;
    *(float *)this = v38;
  }
  v42 = *((float *)this + 4);
  if ( v40 > v42 || (v42 = -v42, v40 < v42) )
  {
    v40 = v42;
    *((float *)this + 1) = v42;
  }
  v43 = *((float *)this + 5);
  if ( v41 > v43 || (v43 = -v43, v41 < v43) )
  {
    v41 = v43;
    *((float *)this + 2) = v43;
  }
  return j_CMatrix::SetRotate((CHandShaker *)((char *)this + 60), v39 * a2, v40 * a2, v41 * a2);
}


// ============================================================

// Address: 0x3e2820
// Original: _ZN11CHandShaker11SetDefaultsEv
// Demangled: CHandShaker::SetDefaults(void)
int __fastcall CHandShaker::SetDefaults(CHandShaker *this)
{
  _QWORD *v2; // r0
  int v3; // r0
  float v4; // s16
  float v5; // s18
  int v6; // r0
  float v7; // s20
  float v8; // s22
  int result; // r0

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0x3CA3D70A00000000LL;
  v2 = (_QWORD *)((char *)this + 16);
  *v2 = 0x3C23D70A3CA3D70ALL;
  v2[1] = 0x3951B7173951B717LL;
  *((_DWORD *)this + 8) = 953267991;
  *((_DWORD *)this + 12) = 1067869798;
  *((_DWORD *)this + 13) = 1067869798;
  *((_DWORD *)this + 14) = 1068708659;
  *((_DWORD *)this + 33) = 1050253722;
  *((_DWORD *)this + 34) = 1065353216;
  *(_QWORD *)((char *)this + 140) = 0x3A83126F00000014LL;
  v3 = rand();
  v4 = *((float *)this + 7);
  v5 = (float)v3;
  v6 = rand();
  v7 = *((float *)this + 8);
  v8 = (float)v6;
  result = rand();
  *((float *)this + 9) = (float)((float)(v5 * 4.6566e-10) * 0.0002) + 0.0;
  *((float *)this + 10) = (float)(v4 * (float)(v8 * 4.6566e-10)) + 0.0;
  *((float *)this + 11) = (float)(v7 * (float)((float)result * 4.6566e-10)) + 0.0;
  return result;
}


// ============================================================

// Address: 0x3e291c
// Original: _ZN11CHandShaker5ResetEv
// Demangled: CHandShaker::Reset(void)
int __fastcall CHandShaker::Reset(CHandShaker *this)
{
  float v2; // s16
  int v3; // r0
  float v4; // s18
  float v5; // s20
  int v6; // r0
  float v7; // s22
  float v8; // s24
  int result; // r0

  v2 = *((float *)this + 6);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = rand();
  v4 = *((float *)this + 7);
  v5 = (float)v3;
  v6 = rand();
  v7 = *((float *)this + 8);
  v8 = (float)v6;
  result = rand();
  *((float *)this + 9) = (float)(v2 * (float)(v5 * 4.6566e-10)) + 0.0;
  *((float *)this + 10) = (float)(v4 * (float)(v8 * 4.6566e-10)) + 0.0;
  *((float *)this + 11) = (float)(v7 * (float)((float)result * 4.6566e-10)) + 0.0;
  return result;
}


// ============================================================
